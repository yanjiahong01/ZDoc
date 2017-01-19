﻿// <Include>
///////////////////////////////////////////////////////////////////////////////
//
// THIS FILE IS AUTOMATICALLY GENERATED.  DO NOT MODIFY IT BY HAND.
//
///////////////////////////////////////////////////////////////////////////////
// </Include>

// <LiteralInclude>
#include <wsdapi.h>
// </LiteralInclude>

// <LiteralInclude>
#include "FileService.h"
// </LiteralInclude>

// <LiteralInclude>
#include "FileServiceTypes.h"
// </LiteralInclude>

// <NamespaceDefinitions>
//
// Namespace http://www.example.com/ncd/FileService
//
WSDXML_NAME Names_FileService[] =
{
    { &Namespace_FileService, L"FileChangeEventType" }
    ,   { &Namespace_FileService, L"GetFileRequest" }
    ,   { &Namespace_FileService, L"GetFileResponse" }
    ,   { &Namespace_FileService, L"GetFileListResponse" }
    ,   { &Namespace_FileService, L"FileChangeEvent" }
    ,   { &Namespace_FileService, L"FileService" }
    ,   { &Namespace_FileService, L"FileService_GetFileList_InputMessage" }
    ,   { &Namespace_FileService, L"FileService_GetFileList_OutputMessage" }
    ,   { &Namespace_FileService, L"GetFileList" }
    ,   { &Namespace_FileService, L"FileList" }
    ,   { &Namespace_FileService, L"Element" }
    ,   { &Namespace_FileService, L"parameters" }
    ,   { &Namespace_FileService, L"FileService_GetFile_InputMessage" }
    ,   { &Namespace_FileService, L"FileService_GetFile_OutputMessage" }
    ,   { &Namespace_FileService, L"GetFile" }
    ,   { &Namespace_FileService, L"filePath" }
    ,   { &Namespace_FileService, L"Attachment" }
    ,   { &Namespace_FileService, L"FileService_FileChangeEvent_OutputMessage" }
    ,   { &Namespace_FileService, L"EventType" }
    ,   { &Namespace_FileService, L"FileName" }
    ,   { &Namespace_FileService, L"result" }
    ,   { &Namespace_FileService, L"FileDevice" }
};
WSDXML_NAMESPACE Namespace_FileService =
{
    L"http://www.example.com/ncd/FileService"
    ,   L"fil"
    ,   &Names_FileService[0]
    ,   22
    ,   0
};

//
// Namespace http://www.w3.org/2001/XMLSchema
//
WSDXML_NAME Names_XMLSchema[] =
{
    { &Namespace_XMLSchema, L"anyType" }
};
WSDXML_NAMESPACE Namespace_XMLSchema =
{
    L"http://www.w3.org/2001/XMLSchema"
    ,   L"xm1"
    ,   &Names_XMLSchema[0]
    ,   1
    ,   1
};

//
// Namespace http://www.example.org/ncd/FileService
//
WSDXML_NAME Names_FileService_1[] =
{
    { &Namespace_FileService_1, L"FileDevice" }
};
WSDXML_NAMESPACE Namespace_FileService_1 =
{
    L"http://www.example.org/ncd/FileService"
    ,   L"fi1"
    ,   &Names_FileService_1[0]
    ,   1
    ,   2
};

WSDXML_NAMESPACE* FileServiceNamespaces[] =
{
    &Namespace_FileService
    ,   &Namespace_XMLSchema
    ,   &Namespace_FileService_1
};

// </NamespaceDefinitions>

// <TypeTableDefinitions>
static BYTE TypeTable_GET_FILE_LIST_RESPONSE[] =
{
    OpFormatPointerToStruct(GET_FILE_LIST_RESPONSE)
    ,   OpBeginSequence
    ,       OpAnyNumber
    ,           OpFormatListInsertTail(PWCHAR_LIST,GET_FILE_LIST_RESPONSE,FileList)
    ,               OpBeginElement(FILESERVICE_FileList)
    ,                   OpFormatUnicodeString(PWCHAR_LIST,Element)
    ,               OpEndElement
    ,   OpEndSequence
    ,   OpEndOfTable
};
WSDXML_TYPE Type_GET_FILE_LIST_RESPONSE =
{
    NULL
    ,   TypeTable_GET_FILE_LIST_RESPONSE
};

static BYTE TypeTable_GET_FILE_REQUEST[] =
{
    OpFormatPointerToStruct(GET_FILE_REQUEST)
    ,   OpBeginSequence
    ,       OpBeginElement(FILESERVICE_FilePath)
    ,           OpFormatUnicodeString(GET_FILE_REQUEST,filePath)
    ,       OpEndElement
    ,   OpEndSequence
    ,   OpEndOfTable
};
WSDXML_TYPE Type_GET_FILE_REQUEST =
{
    NULL
    ,   TypeTable_GET_FILE_REQUEST
};

static BYTE TypeTable_GET_FILE_RESPONSE[] =
{
    OpFormatPointerToStruct(GET_FILE_RESPONSE)
    ,   OpBeginSequence
    ,       OpBeginElement(FILESERVICE_Attachment)
    ,           OpProcess(GET_FILE_RESPONSE,Attachment)
    ,           OpBeginElement(XOP_Include)
    ,               OpAttribute(XOP_Href)
    ,                   OpFormatUri(GET_FILE_RESPONSE,Attachment)
    ,           OpEndElement
    ,       OpEndElement
    ,   OpEndSequence
    ,   OpEndOfTable
};
WSDXML_TYPE Type_GET_FILE_RESPONSE =
{
    NULL
    ,   TypeTable_GET_FILE_RESPONSE
};

static BYTE TypeTable_FILE_CHANGE_EVENT[] =
{
    OpFormatPointerToStruct(FILE_CHANGE_EVENT)
    ,   OpBeginSequence
    ,       OpBeginElement(FILESERVICE_EventType)
    ,           OpFormatUnicodeString(FILE_CHANGE_EVENT,EventType)
    ,       OpEndElement
    ,       OpBeginElement(FILESERVICE_FileName)
    ,           OpFormatUnicodeString(FILE_CHANGE_EVENT,FileName)
    ,       OpEndElement
    ,   OpEndSequence
    ,   OpEndOfTable
};
WSDXML_TYPE Type_FILE_CHANGE_EVENT =
{
    NULL
    ,   TypeTable_FILE_CHANGE_EVENT
};

WSDXML_TYPE* FileServiceTypes[] =
{
    &Type_GET_FILE_LIST_RESPONSE
    ,   &Type_GET_FILE_REQUEST
    ,   &Type_GET_FILE_RESPONSE
    ,   &Type_FILE_CHANGE_EVENT
};

// </TypeTableDefinitions>

// <MessageTypeDefinitions>
//
// Port type http://www.example.com/ncd/FileService/FileService
// Message type definitions
//
static BYTE RequestBodyType_GetFileList[] =
{
    OpEndOfTable
};

WSDXML_TYPE REQUESTTYPE_GetFileList =
{
    L"http://www.example.com/ncd/FileService/GetFileList"
    ,   RequestBodyType_GetFileList
};

static BYTE ResponseBodyType_GetFileList[] =
{
    OpFormatPointerToStruct(RESPONSEBODY_FileService_GetFileList)
    ,   OpBeginElement(FILESERVICE_GetFileListResponse)
    ,       OpFormatType(TYPE_ENCODING_GET_FILE_LIST_RESPONSE,RESPONSEBODY_FileService_GetFileList,parameters)
    ,   OpEndElement
    ,   OpEndOfTable
};

WSDXML_TYPE RESPONSETYPE_GetFileList =
{
    L"http://www.example.com/ncd/FileService/GetFileListResponse"
    ,   ResponseBodyType_GetFileList
};

static BYTE RequestBodyType_GetFile[] =
{
    OpFormatPointerToStruct(REQUESTBODY_FileService_GetFile)
    ,   OpBeginElement(FILESERVICE_GetFileRequest)
    ,       OpFormatType(TYPE_ENCODING_GET_FILE_REQUEST,REQUESTBODY_FileService_GetFile,parameters)
    ,   OpEndElement
    ,   OpEndOfTable
};

WSDXML_TYPE REQUESTTYPE_GetFile =
{
    L"http://www.example.com/ncd/FileService/GetFile"
    ,   RequestBodyType_GetFile
};

static BYTE ResponseBodyType_GetFile[] =
{
    OpFormatPointerToStruct(RESPONSEBODY_FileService_GetFile)
    ,   OpBeginElement(FILESERVICE_GetFileResponse)
    ,       OpFormatType(TYPE_ENCODING_GET_FILE_RESPONSE,RESPONSEBODY_FileService_GetFile,parameters)
    ,   OpEndElement
    ,   OpEndOfTable
};

WSDXML_TYPE RESPONSETYPE_GetFile =
{
    L"http://www.example.com/ncd/FileService/GetFileResponse"
    ,   ResponseBodyType_GetFile
};

static BYTE ResponseBodyType_FileChangeEvent[] =
{
    OpFormatPointerToStruct(RESPONSEBODY_FileService_FileChangeEvent)
    ,   OpBeginElement(FILESERVICE_FileChangeEvent)
    ,       OpFormatType(TYPE_ENCODING_FILE_CHANGE_EVENT,RESPONSEBODY_FileService_FileChangeEvent,result)
    ,   OpEndElement
    ,   OpEndOfTable
};

WSDXML_TYPE RESPONSETYPE_FileChangeEvent =
{
    L"http://www.example.com/ncd/FileService/FileChangeEvent"
    ,   ResponseBodyType_FileChangeEvent
};


//
// Port type http://www.example.com/ncd/FileService/FileDevice
// Message type definitions
//

// </MessageTypeDefinitions>

// <PortTypeDefinitions>
//
// Port type http://www.example.com/ncd/FileService/FileService
//
WSD_OPERATION Operations_FileService[] =
{
    {
        &REQUESTTYPE_GetFileList
        ,   &RESPONSETYPE_GetFileList
        ,   (WSD_STUB_FUNCTION)Stub_GetFileList
    }
    ,   {
        &REQUESTTYPE_GetFile
        ,   &RESPONSETYPE_GetFile
        ,   (WSD_STUB_FUNCTION)Stub_GetFile
    }
    ,   {
        NULL
        ,   &RESPONSETYPE_FileChangeEvent
        ,   (WSD_STUB_FUNCTION)Stub_FileChangeEvent
    }
};

WSD_PORT_TYPE PortType_FileService =
{
    FILESERVICE_FileService
    ,   (sizeof(Operations_FileService) / sizeof(Operations_FileService[0]))
    ,   Operations_FileService
    ,   WSD_PT_ALL
};

// </PortTypeDefinitions>

// <RelationshipMetadataDefinition>
static WSD_NAME_LIST serviceTypes_0[] =
{
    {
        NULL
        ,   &Names_FileService[5]
    }
};

static WSD_SERVICE_METADATA services_0[] =
{
    {
        NULL
        ,   &serviceTypes_0[0]
        ,   L"http://www.example.com/ncd/FileService/FileService0"
        ,   NULL
    }
};

static WSD_NAME_LIST hostTypes_0[] =
{
    {
        NULL
        ,   &Names_FileService_1[0]
    }
};

WSD_SERVICE_METADATA hostServiceMetadata_0 =
{
    NULL
    ,   &hostTypes_0[0]
    ,   L"http://www.example.org/ncd/FileService/FileDevice"
    ,   NULL
};

static WSD_SERVICE_METADATA_LIST hostedServiceMetadataList_0[] =
{
    {
        NULL
        ,   &services_0[0]
    }
};

WSD_HOST_METADATA hostMetadata =
{
    &hostServiceMetadata_0
    ,   hostedServiceMetadataList_0
};
// </RelationshipMetadataDefinition>

// <ThisModelMetadataDefinition>
static WSD_LOCALIZED_STRING modelNames[] =
{
    {
        NULL
        ,   L"Microsoft FileService Device Emulator"
    }
};

static WSD_LOCALIZED_STRING_LIST modelNameList[] =
{
    {
        NULL
        ,   &modelNames[0]
    }
};

static WSD_LOCALIZED_STRING manufacturers[] =
{
    {
        NULL
        ,   L"Microsoft Corporation"
    }
};

static WSD_LOCALIZED_STRING_LIST manufacturerList[] =
{
    {
        NULL
        ,   &manufacturers[0]
    },
};

WSD_THIS_MODEL_METADATA thisModelMetadata =
{
    manufacturerList
    ,   L"http://www.microsoft.com/"
    ,   modelNameList
    ,   L"MFSDE-0001"
    ,   L"http://www.microsoft.com/"
    ,   NULL
    ,   NULL // any
};
// </ThisModelMetadataDefinition>
