//
// Copyright (c) 2006 Microsoft Corporation. All rights reserved.
// 
// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF 
// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A 
// PARTICULAR PURPOSE.
//
using System;
using System.Collections.Generic;
using System.Text;
using System.Management.Automation;
using System.Management.Automation.Host;
using System.Management.Automation.Runspaces;
using System.Globalization;

namespace Microsoft.Samples.PowerShell.Host
{
    /// <summary>
    /// A sample implementation of the PSHost abstract class for console
    /// applications. Not all members are implemented. Those that aren't throw a
    /// NotImplementedException.
    /// </summary>
    class MyHost : PSHost
    {
        public MyHost(PSListenerConsoleSample program)
        {
            this.program = program;
        }
        private PSListenerConsoleSample program;

        /// <summary>
        /// Return the culture info to use - this implementation just snapshots the
        /// curture info of the thread that created this object.
        /// </summary>
        public override CultureInfo CurrentCulture
        {
            get { return originalCultureInfo; }
        }
        private CultureInfo originalCultureInfo = System.Threading.Thread.CurrentThread.CurrentCulture;

        /// <summary>
        /// Return the UI culture info to use - this implementation just snapshots the
        /// UI curture info of the thread that created this object.
        /// </summary>
        public override CultureInfo CurrentUICulture
        {
            get { return originalUICultureInfo; }
        }
        private CultureInfo originalUICultureInfo = System.Threading.Thread.CurrentThread.CurrentUICulture;

        /// <summary>
        /// Not implemented by this example class. The call fails with an exception.
        /// </summary>
        public override void EnterNestedPrompt()
        {
            throw new NotImplementedException("Cannot suspend the shell, EnterNestedPrompt() method is not implemented by MyHost.");
        }

        /// <summary>
        /// Not implemented by this example class. The call fails with an exception.
        /// </summary>
        public override void ExitNestedPrompt()
        {
            throw new NotImplementedException("The ExitNestedPrompt() method is not implemented by MyHost.");
        }

        private static Guid instanceId = Guid.NewGuid();
        /// <summary>
        /// This implementation always returns the GUID allocated at instantiation time.
        /// </summary>
        public override Guid InstanceId
        {
            get { return instanceId; }
        }

        /// <summary>
        /// Return an appropriate string to identify you host implementation.
        /// Keep in mind that this string may be used by script writers to identify
        /// when your host is being used.
        /// </summary>
        public override string Name
        {
            get { return "MySampleConsoleHostImplementation"; }
        }

        /// <summary>
        /// This API is called before an external application process is started. Typically
        /// it's used to save state that the child process may alter so the parent can
        /// restore that state when the child exits. In this sample, we don't need this so
        /// the method simple returns.
        /// </summary>
        public override void NotifyBeginApplication()
        {
            return;  // Do nothing...
        }

        /// <summary>
        /// This API is called after an external application process finishes. Typically
        /// it's used to restore state that the child process may have altered. In this
        /// sample, we don't need this so the method simple returns.
        /// </summary>
        public override void NotifyEndApplication()
        {
           return; // Do nothing...
        }

        /// <summary>
        /// Indicate to the host application that exit has
        /// been requested. Pass the exit code that the host
        /// application should use when exiting the process.
        /// </summary>
        /// <param name="exitCode"></param>
        public override void SetShouldExit(int exitCode)
        {
            program.ShouldExit = true;
            program.ExitCode = exitCode;
        }

        /// <summary>
        /// Return an instance of the implementation of the PSHostUserInterface
        /// class for this application. This instance is allocated once at startup time
        /// and returned every time thereafter.
        /// </summary>
        public override PSHostUserInterface UI
        {
            get { return myHostUserInterface; }
        }
        private MyHostUserInterface myHostUserInterface = new MyHostUserInterface();

        /// <summary>
        /// Return the version object for this application. Typically this should match the version
        /// resource in the application.
        /// </summary>
        public override Version Version
        {
            get {return new Version(1,0,0,0); }
        }
    }
}

