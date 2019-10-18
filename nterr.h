/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Unix SMB/Netbios implementation.
 * Version 1.9.
 * NT error code constants
 * Copyright (C) Andrew Tridgell              1992-2000
 * Copyright (C) John H Terpstra              1996-2000
 * Copyright (C) Luke Kenneth Casson Leighton 1996-2000
 * Copyright (C) Paul Ashton                  1998-2000
 */



#ifndef _NTERR_H
#define _NTERR_H

struct nt_err_code_struct {
	char *nt_errstr;
	__u32 nt_errcode;
};

extern const struct nt_err_code_struct nt_errs[];

/* Win32 Status codes. */
#define NT_STATUS_MORE_ENTRIES         0x0105
#define NT_ERROR_INVALID_PARAMETER     0x0057
#define NT_ERROR_INSUFFICIENT_BUFFER   0x007a
#define NT_STATUS_1804                 0x070c
#define NT_STATUS_NOTIFY_ENUM_DIR      0x010c
#define NT_STATUS_INVALID_LOCK_RANGE   (0xC0000000 | 0x01a1)
/*
 * Win32 Error codes extracted using a loop in smbclient then printing a netmon
 * sniff to a file.
 */

#define NT_STATUS_OK                   0x0000
#define NT_STATUS_SOME_UNMAPPED        0x0107
#define NT_STATUS_BUFFER_OVERFLOW  0x80000005
#define NT_STATUS_NO_MORE_ENTRIES  0x8000001a
#define NT_STATUS_MEDIA_CHANGED    0x8000001c
#define NT_STATUS_END_OF_MEDIA     0x8000001e
#define NT_STATUS_MEDIA_CHECK      0x80000020
#define NT_STATUS_NO_DATA_DETECTED 0x8000001c
#define NT_STATUS_STOPPED_ON_SYMLINK 0x8000002d
#define NT_STATUS_DEVICE_REQUIRES_CLEANING 0x80000288
#define NT_STATUS_DEVICE_DOOR_OPEN 0x80000288
#define NT_STATUS_UNSUCCESSFUL (0xC0000000 | 0x0001)
#define NT_STATUS_NOT_IMPLEMENTED (0xC0000000 | 0x0002)
#define NT_STATUS_INVALID_INFO_CLASS (0xC0000000 | 0x0003)
#define NT_STATUS_INFO_LENGTH_MISMATCH (0xC0000000 | 0x0004)
#define NT_STATUS_ACCESS_VIOLATION (0xC0000000 | 0x0005)
#define NT_STATUS_IN_PAGE_ERROR (0xC0000000 | 0x0006)
#define NT_STATUS_PAGEFILE_QUOTA (0xC0000000 | 0x0007)
#define NT_STATUS_INVALID_HANDLE (0xC0000000 | 0x0008)
#define NT_STATUS_BAD_INITIAL_STACK (0xC0000000 | 0x0009)
#define NT_STATUS_BAD_INITIAL_PC (0xC0000000 | 0x000a)
#define NT_STATUS_INVALID_CID (0xC0000000 | 0x000b)
#define NT_STATUS_TIMER_NOT_CANCELED (0xC0000000 | 0x000c)
#define NT_STATUS_INVALID_PARAMETER (0xC0000000 | 0x000d)
#define NT_STATUS_NO_SUCH_DEVICE (0xC0000000 | 0x000e)
#define NT_STATUS_NO_SUCH_FILE (0xC0000000 | 0x000f)
#define NT_STATUS_INVALID_DEVICE_REQUEST (0xC0000000 | 0x0010)
#define NT_STATUS_END_OF_FILE (0xC0000000 | 0x0011)
#define NT_STATUS_WRONG_VOLUME (0xC0000000 | 0x0012)
#define NT_STATUS_NO_MEDIA_IN_DEVICE (0xC0000000 | 0x0013)
#define NT_STATUS_UNRECOGNIZED_MEDIA (0xC0000000 | 0x0014)
#define NT_STATUS_NONEXISTENT_SECTOR (0xC0000000 | 0x0015)
#define NT_STATUS_MORE_PROCESSING_REQUIRED (0xC0000000 | 0x0016)
#define NT_STATUS_NO_MEMORY (0xC0000000 | 0x0017)
#define NT_STATUS_CONFLICTING_ADDRESSES (0xC0000000 | 0x0018)
#define NT_STATUS_NOT_MAPPED_VIEW (0xC0000000 | 0x0019)
#define NT_STATUS_UNABLE_TO_FREE_VM (0x80000000 | 0x001a)
#define NT_STATUS_UNABLE_TO_DELETE_SECTION (0xC0000000 | 0x001b)
#define NT_STATUS_INVALID_SYSTEM_SERVICE (0xC0000000 | 0x001c)
#define NT_STATUS_ILLEGAL_INSTRUCTION (0xC0000000 | 0x001d)
#define NT_STATUS_INVALID_LOCK_SEQUENCE (0xC0000000 | 0x001e)
#define NT_STATUS_INVALID_VIEW_SIZE (0xC0000000 | 0x001f)
#define NT_STATUS_INVALID_FILE_FOR_SECTION (0xC0000000 | 0x0020)
#define NT_STATUS_ALREADY_COMMITTED (0xC0000000 | 0x0021)
#define NT_STATUS_ACCESS_DENIED (0xC0000000 | 0x0022)
#define NT_STATUS_BUFFER_TOO_SMALL (0xC0000000 | 0x0023)
#define NT_STATUS_OBJECT_TYPE_MISMATCH (0xC0000000 | 0x0024)
#define NT_STATUS_NONCONTINUABLE_EXCEPTION (0xC0000000 | 0x0025)
#define NT_STATUS_INVALID_DISPOSITION (0xC0000000 | 0x0026)
#define NT_STATUS_UNWIND (0xC0000000 | 0x0027)
#define NT_STATUS_BAD_STACK (0xC0000000 | 0x0028)
#define NT_STATUS_INVALID_UNWIND_TARGET (0xC0000000 | 0x0029)
#define NT_STATUS_NOT_LOCKED (0xC0000000 | 0x002a)
#define NT_STATUS_PARITY_ERROR (0xC0000000 | 0x002b)
#define NT_STATUS_UNABLE_TO_DECOMMIT_VM (0xC0000000 | 0x002c)
#define NT_STATUS_NOT_COMMITTED (0xC0000000 | 0x002d)
#define NT_STATUS_INVALID_PORT_ATTRIBUTES (0xC0000000 | 0x002e)
#define NT_STATUS_PORT_MESSAGE_TOO_LONG (0xC0000000 | 0x002f)
#define NT_STATUS_INVALID_PARAMETER_MIX (0xC0000000 | 0x0030)
#define NT_STATUS_INVALID_QUOTA_LOWER (0xC0000000 | 0x0031)
#define NT_STATUS_DISK_CORRUPT_ERROR (0xC0000000 | 0x0032)
#define NT_STATUS_OBJECT_NAME_INVALID (0xC0000000 | 0x0033)
#define NT_STATUS_OBJECT_NAME_NOT_FOUND (0xC0000000 | 0x0034)
#define NT_STATUS_OBJECT_NAME_COLLISION (0xC0000000 | 0x0035)
#define NT_STATUS_HANDLE_NOT_WAITABLE (0xC0000000 | 0x0036)
#define NT_STATUS_PORT_DISCONNECTED (0xC0000000 | 0x0037)
#define NT_STATUS_DEVICE_ALREADY_ATTACHED (0xC0000000 | 0x0038)
#define NT_STATUS_OBJECT_PATH_INVALID (0xC0000000 | 0x0039)
#define NT_STATUS_OBJECT_PATH_NOT_FOUND (0xC0000000 | 0x003a)
#define NT_STATUS_OBJECT_PATH_SYNTAX_BAD (0xC0000000 | 0x003b)
#define NT_STATUS_DATA_OVERRUN (0xC0000000 | 0x003c)
#define NT_STATUS_DATA_LATE_ERROR (0xC0000000 | 0x003d)
#define NT_STATUS_DATA_ERROR (0xC0000000 | 0x003e)
#define NT_STATUS_CRC_ERROR (0xC0000000 | 0x003f)
#define NT_STATUS_SECTION_TOO_BIG (0xC0000000 | 0x0040)
#define NT_STATUS_PORT_CONNECTION_REFUSED (0xC0000000 | 0x0041)
#define NT_STATUS_INVALID_PORT_HANDLE (0xC0000000 | 0x0042)
#define NT_STATUS_SHARING_VIOLATION (0xC0000000 | 0x0043)
#define NT_STATUS_QUOTA_EXCEEDED (0xC0000000 | 0x0044)
#define NT_STATUS_INVALID_PAGE_PROTECTION (0xC0000000 | 0x0045)
#define NT_STATUS_MUTANT_NOT_OWNED (0xC0000000 | 0x0046)
#define NT_STATUS_SEMAPHORE_LIMIT_EXCEEDED (0xC0000000 | 0x0047)
#define NT_STATUS_PORT_ALREADY_SET (0xC0000000 | 0x0048)
#define NT_STATUS_SECTION_NOT_IMAGE (0xC0000000 | 0x0049)
#define NT_STATUS_SUSPEND_COUNT_EXCEEDED (0xC0000000 | 0x004a)
#define NT_STATUS_THREAD_IS_TERMINATING (0xC0000000 | 0x004b)
#define NT_STATUS_BAD_WORKING_SET_LIMIT (0xC0000000 | 0x004c)
#define NT_STATUS_INCOMPATIBLE_FILE_MAP (0xC0000000 | 0x004d)
#define NT_STATUS_SECTION_PROTECTION (0xC0000000 | 0x004e)
#define NT_STATUS_EAS_NOT_SUPPORTED (0xC0000000 | 0x004f)
#define NT_STATUS_EA_TOO_LARGE (0xC0000000 | 0x0050)
#define NT_STATUS_NONEXISTENT_EA_ENTRY (0xC0000000 | 0x0051)
#define NT_STATUS_NO_EAS_ON_FILE (0xC0000000 | 0x0052)
#define NT_STATUS_EA_CORRUPT_ERROR (0xC0000000 | 0x0053)
#define NT_STATUS_FILE_LOCK_CONFLICT (0xC0000000 | 0x0054)
#define NT_STATUS_LOCK_NOT_GRANTED (0xC0000000 | 0x0055)
#define NT_STATUS_DELETE_PENDING (0xC0000000 | 0x0056)
#define NT_STATUS_CTL_FILE_NOT_SUPPORTED (0xC0000000 | 0x0057)
#define NT_STATUS_UNKNOWN_REVISION (0xC0000000 | 0x0058)
#define NT_STATUS_REVISION_MISMATCH (0xC0000000 | 0x0059)
#define NT_STATUS_INVALID_OWNER (0xC0000000 | 0x005a)
#define NT_STATUS_INVALID_PRIMARY_GROUP (0xC0000000 | 0x005b)
#define NT_STATUS_NO_IMPERSONATION_TOKEN (0xC0000000 | 0x005c)
#define NT_STATUS_CANT_DISABLE_MANDATORY (0xC0000000 | 0x005d)
#define NT_STATUS_NO_LOGON_SERVERS (0xC0000000 | 0x005e)
#define NT_STATUS_NO_SUCH_LOGON_SESSION (0xC0000000 | 0x005f)
#define NT_STATUS_NO_SUCH_PRIVILEGE (0xC0000000 | 0x0060)
#define NT_STATUS_PRIVILEGE_NOT_HELD (0xC0000000 | 0x0061)
#define NT_STATUS_INVALID_ACCOUNT_NAME (0xC0000000 | 0x0062)
#define NT_STATUS_USER_EXISTS (0xC0000000 | 0x0063)
#define NT_STATUS_NO_SUCH_USER (0xC0000000 | 0x0064)
#define NT_STATUS_GROUP_EXISTS (0xC0000000 | 0x0065)
#define NT_STATUS_NO_SUCH_GROUP (0xC0000000 | 0x0066)
#define NT_STATUS_MEMBER_IN_GROUP (0xC0000000 | 0x0067)
#define NT_STATUS_MEMBER_NOT_IN_GROUP (0xC0000000 | 0x0068)
#define NT_STATUS_LAST_ADMIN (0xC0000000 | 0x0069)
#define NT_STATUS_WRONG_PASSWORD (0xC0000000 | 0x006a)
#define NT_STATUS_ILL_FORMED_PASSWORD (0xC0000000 | 0x006b)
#define NT_STATUS_PASSWORD_RESTRICTION (0xC0000000 | 0x006c)
#define NT_STATUS_LOGON_FAILURE (0xC0000000 | 0x006d)
#define NT_STATUS_ACCOUNT_RESTRICTION (0xC0000000 | 0x006e)
#define NT_STATUS_INVALID_LOGON_HOURS (0xC0000000 | 0x006f)
#define NT_STATUS_INVALID_WORKSTATION (0xC0000000 | 0x0070)
#define NT_STATUS_PASSWORD_EXPIRED (0xC0000000 | 0x0071)
#define NT_STATUS_ACCOUNT_DISABLED (0xC0000000 | 0x0072)
#define NT_STATUS_NONE_MAPPED (0xC0000000 | 0x0073)
#define NT_STATUS_TOO_MANY_LUIDS_REQUESTED (0xC0000000 | 0x0074)
#define NT_STATUS_LUIDS_EXHAUSTED (0xC0000000 | 0x0075)
#define NT_STATUS_INVALID_SUB_AUTHORITY (0xC0000000 | 0x0076)
#define NT_STATUS_INVALID_ACL (0xC0000000 | 0x0077)
#define NT_STATUS_INVALID_SID (0xC0000000 | 0x0078)
#define NT_STATUS_INVALID_SECURITY_DESCR (0xC0000000 | 0x0079)
#define NT_STATUS_PROCEDURE_NOT_FOUND (0xC0000000 | 0x007a)
#define NT_STATUS_INVALID_IMAGE_FORMAT (0xC0000000 | 0x007b)
#define NT_STATUS_NO_TOKEN (0xC0000000 | 0x007c)
#define NT_STATUS_BAD_INHERITANCE_ACL (0xC0000000 | 0x007d)
#define NT_STATUS_RANGE_NOT_LOCKED (0xC0000000 | 0x007e)
#define NT_STATUS_DISK_FULL (0xC0000000 | 0x007f)
#define NT_STATUS_SERVER_DISABLED (0xC0000000 | 0x0080)
#define NT_STATUS_SERVER_NOT_DISABLED (0xC0000000 | 0x0081)
#define NT_STATUS_TOO_MANY_GUIDS_REQUESTED (0xC0000000 | 0x0082)
#define NT_STATUS_GUIDS_EXHAUSTED (0xC0000000 | 0x0083)
#define NT_STATUS_INVALID_ID_AUTHORITY (0xC0000000 | 0x0084)
#define NT_STATUS_AGENTS_EXHAUSTED (0xC0000000 | 0x0085)
#define NT_STATUS_INVALID_VOLUME_LABEL (0xC0000000 | 0x0086)
#define NT_STATUS_SECTION_NOT_EXTENDED (0xC0000000 | 0x0087)
#define NT_STATUS_NOT_MAPPED_DATA (0xC0000000 | 0x0088)
#define NT_STATUS_RESOURCE_DATA_NOT_FOUND (0xC0000000 | 0x0089)
#define NT_STATUS_RESOURCE_TYPE_NOT_FOUND (0xC0000000 | 0x008a)
#define NT_STATUS_RESOURCE_NAME_NOT_FOUND (0xC0000000 | 0x008b)
#define NT_STATUS_ARRAY_BOUNDS_EXCEEDED (0xC0000000 | 0x008c)
#define NT_STATUS_FLOAT_DENORMAL_OPERAND (0xC0000000 | 0x008d)
#define NT_STATUS_FLOAT_DIVIDE_BY_ZERO (0xC0000000 | 0x008e)
#define NT_STATUS_FLOAT_INEXACT_RESULT (0xC0000000 | 0x008f)
#define NT_STATUS_FLOAT_INVALID_OPERATION (0xC0000000 | 0x0090)
#define NT_STATUS_FLOAT_OVERFLOW (0xC0000000 | 0x0091)
#define NT_STATUS_FLOAT_STACK_CHECK (0xC0000000 | 0x0092)
#define NT_STATUS_FLOAT_UNDERFLOW (0xC0000000 | 0x0093)
#define NT_STATUS_INTEGER_DIVIDE_BY_ZERO (0xC0000000 | 0x0094)
#define NT_STATUS_INTEGER_OVERFLOW (0xC0000000 | 0x0095)
#define NT_STATUS_PRIVILEGED_INSTRUCTION (0xC0000000 | 0x0096)
#define NT_STATUS_TOO_MANY_PAGING_FILES (0xC0000000 | 0x0097)
#define NT_STATUS_FILE_INVALID (0xC0000000 | 0x0098)
#define NT_STATUS_ALLOTTED_SPACE_EXCEEDED (0xC0000000 | 0x0099)
#define NT_STATUS_INSUFFICIENT_RESOURCES (0xC0000000 | 0x009a)
#define NT_STATUS_DFS_EXIT_PATH_FOUND (0xC0000000 | 0x009b)
#define NT_STATUS_DEVICE_DATA_ERROR (0xC0000000 | 0x009c)
#define NT_STATUS_DEVICE_NOT_CONNECTED (0xC0000000 | 0x009d)
#define NT_STATUS_DEVICE_POWER_FAILURE (0xC0000000 | 0x009e)
#define NT_STATUS_FREE_VM_NOT_AT_BASE (0xC0000000 | 0x009f)
#define NT_STATUS_MEMORY_NOT_ALLOCATED (0xC0000000 | 0x00a0)
#define NT_STATUS_WORKING_SET_QUOTA (0xC0000000 | 0x00a1)
#define NT_STATUS_MEDIA_WRITE_PROTECTED (0xC0000000 | 0x00a2)
#define NT_STATUS_DEVICE_NOT_READY (0xC0000000 | 0x00a3)
#define NT_STATUS_INVALID_GROUP_ATTRIBUTES (0xC0000000 | 0x00a4)
#define NT_STATUS_BAD_IMPERSONATION_LEVEL (0xC0000000 | 0x00a5)
#define NT_STATUS_CANT_OPEN_ANONYMOUS (0xC0000000 | 0x00a6)
#define NT_STATUS_BAD_VALIDATION_CLASS (0xC0000000 | 0x00a7)
#define NT_STATUS_BAD_TOKEN_TYPE (0xC0000000 | 0x00a8)
#define NT_STATUS_BAD_MASTER_BOOT_RECORD (0xC0000000 | 0x00a9)
#define NT_STATUS_INSTRUCTION_MISALIGNMENT (0xC0000000 | 0x00aa)
#define NT_STATUS_INSTANCE_NOT_AVAILABLE (0xC0000000 | 0x00ab)
#define NT_STATUS_PIPE_NOT_AVAILABLE (0xC0000000 | 0x00ac)
#define NT_STATUS_INVALID_PIPE_STATE (0xC0000000 | 0x00ad)
#define NT_STATUS_PIPE_BUSY (0xC0000000 | 0x00ae)
#define NT_STATUS_ILLEGAL_FUNCTION (0xC0000000 | 0x00af)
#define NT_STATUS_PIPE_DISCONNECTED (0xC0000000 | 0x00b0)
#define NT_STATUS_PIPE_CLOSING (0xC0000000 | 0x00b1)
#define NT_STATUS_PIPE_CONNECTED (0xC0000000 | 0x00b2)
#define NT_STATUS_PIPE_LISTENING (0xC0000000 | 0x00b3)
#define NT_STATUS_INVALID_READ_MODE (0xC0000000 | 0x00b4)
#define NT_STATUS_IO_TIMEOUT (0xC0000000 | 0x00b5)
#define NT_STATUS_FILE_FORCED_CLOSED (0xC0000000 | 0x00b6)
#define NT_STATUS_PROFILING_NOT_STARTED (0xC0000000 | 0x00b7)
#define NT_STATUS_PROFILING_NOT_STOPPED (0xC0000000 | 0x00b8)
#define NT_STATUS_COULD_NOT_INTERPRET (0xC0000000 | 0x00b9)
#define NT_STATUS_FILE_IS_A_DIRECTORY (0xC0000000 | 0x00ba)
#define NT_STATUS_NOT_SUPPORTED (0xC0000000 | 0x00bb)
#define NT_STATUS_REMOTE_NOT_LISTENING (0xC0000000 | 0x00bc)
#define NT_STATUS_DUPLICATE_NAME (0xC0000000 | 0x00bd)
#define NT_STATUS_BAD_NETWORK_PATH (0xC0000000 | 0x00be)
#define NT_STATUS_NETWORK_BUSY (0xC0000000 | 0x00bf)
#define NT_STATUS_DEVICE_DOES_NOT_EXIST (0xC0000000 | 0x00c0)
#define NT_STATUS_TOO_MANY_COMMANDS (0xC0000000 | 0x00c1)
#define NT_STATUS_ADAPTER_HARDWARE_ERROR (0xC0000000 | 0x00c2)
#define NT_STATUS_INVALID_NETWORK_RESPONSE (0xC0000000 | 0x00c3)
#define NT_STATUS_UNEXPECTED_NETWORK_ERROR (0xC0000000 | 0x00c4)
#define NT_STATUS_BAD_REMOTE_ADAPTER (0xC0000000 | 0x00c5)
#define NT_STATUS_PRINT_QUEUE_FULL (0xC0000000 | 0x00c6)
#define NT_STATUS_NO_SPOOL_SPACE (0xC0000000 | 0x00c7)
#define NT_STATUS_PRINT_CANCELLED (0xC0000000 | 0x00c8)
#define NT_STATUS_NETWORK_NAME_DELETED (0xC0000000 | 0x00c9)
#define NT_STATUS_NETWORK_ACCESS_DENIED (0xC0000000 | 0x00ca)
#define NT_STATUS_BAD_DEVICE_TYPE (0xC0000000 | 0x00cb)
#define NT_STATUS_BAD_NETWORK_NAME (0xC0000000 | 0x00cc)
#define NT_STATUS_TOO_MANY_NAMES (0xC0000000 | 0x00cd)
#define NT_STATUS_TOO_MANY_SESSIONS (0xC0000000 | 0x00ce)
#define NT_STATUS_SHARING_PAUSED (0xC0000000 | 0x00cf)
#define NT_STATUS_REQUEST_NOT_ACCEPTED (0xC0000000 | 0x00d0)
#define NT_STATUS_REDIRECTOR_PAUSED (0xC0000000 | 0x00d1)
#define NT_STATUS_NET_WRITE_FAULT (0xC0000000 | 0x00d2)
#define NT_STATUS_PROFILING_AT_LIMIT (0xC0000000 | 0x00d3)
#define NT_STATUS_NOT_SAME_DEVICE (0xC0000000 | 0x00d4)
#define NT_STATUS_FILE_RENAMED (0xC0000000 | 0x00d5)
#define NT_STATUS_VIRTUAL_CIRCUIT_CLOSED (0xC0000000 | 0x00d6)
#define NT_STATUS_NO_SECURITY_ON_OBJECT (0xC0000000 | 0x00d7)
#define NT_STATUS_CANT_WAIT (0xC0000000 | 0x00d8)
#define NT_STATUS_PIPE_EMPTY (0xC0000000 | 0x00d9)
#define NT_STATUS_CANT_ACCESS_DOMAIN_INFO (0xC0000000 | 0x00da)
#define NT_STATUS_CANT_TERMINATE_SELF (0xC0000000 | 0x00db)
#define NT_STATUS_INVALID_SERVER_STATE (0xC0000000 | 0x00dc)
#define NT_STATUS_INVALID_DOMAIN_STATE (0xC0000000 | 0x00dd)
#define NT_STATUS_INVALID_DOMAIN_ROLE (0xC0000000 | 0x00de)
#define NT_STATUS_NO_SUCH_DOMAIN (0xC0000000 | 0x00df)
#define NT_STATUS_DOMAIN_EXISTS (0xC0000000 | 0x00e0)
#define NT_STATUS_DOMAIN_LIMIT_EXCEEDED (0xC0000000 | 0x00e1)
#define NT_STATUS_OPLOCK_NOT_GRANTED (0xC0000000 | 0x00e2)
#define NT_STATUS_INVALID_OPLOCK_PROTOCOL (0xC0000000 | 0x00e3)
#define NT_STATUS_INTERNAL_DB_CORRUPTION (0xC0000000 | 0x00e4)
#define NT_STATUS_INTERNAL_ERROR (0xC0000000 | 0x00e5)
#define NT_STATUS_GENERIC_NOT_MAPPED (0xC0000000 | 0x00e6)
#define NT_STATUS_BAD_DESCRIPTOR_FORMAT (0xC0000000 | 0x00e7)
#define NT_STATUS_INVALID_USER_BUFFER (0xC0000000 | 0x00e8)
#define NT_STATUS_UNEXPECTED_IO_ERROR (0xC0000000 | 0x00e9)
#define NT_STATUS_UNEXPECTED_MM_CREATE_ERR (0xC0000000 | 0x00ea)
#define NT_STATUS_UNEXPECTED_MM_MAP_ERROR (0xC0000000 | 0x00eb)
#define NT_STATUS_UNEXPECTED_MM_EXTEND_ERR (0xC0000000 | 0x00ec)
#define NT_STATUS_NOT_LOGON_PROCESS (0xC0000000 | 0x00ed)
#define NT_STATUS_LOGON_SESSION_EXISTS (0xC0000000 | 0x00ee)
#define NT_STATUS_INVALID_PARAMETER_1 (0xC0000000 | 0x00ef)
#define NT_STATUS_INVALID_PARAMETER_2 (0xC0000000 | 0x00f0)
#define NT_STATUS_INVALID_PARAMETER_3 (0xC0000000 | 0x00f1)
#define NT_STATUS_INVALID_PARAMETER_4 (0xC0000000 | 0x00f2)
#define NT_STATUS_INVALID_PARAMETER_5 (0xC0000000 | 0x00f3)
#define NT_STATUS_INVALID_PARAMETER_6 (0xC0000000 | 0x00f4)
#define NT_STATUS_INVALID_PARAMETER_7 (0xC0000000 | 0x00f5)
#define NT_STATUS_INVALID_PARAMETER_8 (0xC0000000 | 0x00f6)
#define NT_STATUS_INVALID_PARAMETER_9 (0xC0000000 | 0x00f7)
#define NT_STATUS_INVALID_PARAMETER_10 (0xC0000000 | 0x00f8)
#define NT_STATUS_INVALID_PARAMETER_11 (0xC0000000 | 0x00f9)
#define NT_STATUS_INVALID_PARAMETER_12 (0xC0000000 | 0x00fa)
#define NT_STATUS_REDIRECTOR_NOT_STARTED (0xC0000000 | 0x00fb)
#define NT_STATUS_REDIRECTOR_STARTED (0xC0000000 | 0x00fc)
#define NT_STATUS_STACK_OVERFLOW (0xC0000000 | 0x00fd)
#define NT_STATUS_NO_SUCH_PACKAGE (0xC0000000 | 0x00fe)
#define NT_STATUS_BAD_FUNCTION_TABLE (0xC0000000 | 0x00ff)
#define NT_STATUS_DIRECTORY_NOT_EMPTY (0xC0000000 | 0x0101)
#define NT_STATUS_FILE_CORRUPT_ERROR (0xC0000000 | 0x0102)
#define NT_STATUS_NOT_A_DIRECTORY (0xC0000000 | 0x0103)
#define NT_STATUS_BAD_LOGON_SESSION_STATE (0xC0000000 | 0x0104)
#define NT_STATUS_LOGON_SESSION_COLLISION (0xC0000000 | 0x0105)
#define NT_STATUS_NAME_TOO_LONG (0xC0000000 | 0x0106)
#define NT_STATUS_FILES_OPEN (0xC0000000 | 0x0107)
#define NT_STATUS_CONNECTION_IN_USE (0xC0000000 | 0x0108)
#define NT_STATUS_MESSAGE_NOT_FOUND (0xC0000000 | 0x0109)
#define NT_STATUS_PROCESS_IS_TERMINATING (0xC0000000 | 0x010a)
#define NT_STATUS_INVALID_LOGON_TYPE (0xC0000000 | 0x010b)
#define NT_STATUS_NO_GUID_TRANSLATION (0xC0000000 | 0x010c)
#define NT_STATUS_CANNOT_IMPERSONATE (0xC0000000 | 0x010d)
#define NT_STATUS_IMAGE_ALREADY_LOADED (0xC0000000 | 0x010e)
#define NT_STATUS_ABIOS_NOT_PRESENT (0xC0000000 | 0x010f)
#define NT_STATUS_ABIOS_LID_NOT_EXIST (0xC0000000 | 0x0110)
#define NT_STATUS_ABIOS_LID_ALREADY_OWNED (0xC0000000 | 0x0111)
#define NT_STATUS_ABIOS_NOT_LID_OWNER (0xC0000000 | 0x0112)
#define NT_STATUS_ABIOS_INVALID_COMMAND (0xC0000000 | 0x0113)
#define NT_STATUS_ABIOS_INVALID_LID (0xC0000000 | 0x0114)
#define NT_STATUS_ABIOS_SELECTOR_NOT_AVAILABLE (0xC0000000 | 0x0115)
#define NT_STATUS_ABIOS_INVALID_SELECTOR (0xC0000000 | 0x0116)
#define NT_STATUS_NO_LDT (0xC0000000 | 0x0117)
#define NT_STATUS_INVALID_LDT_SIZE (0xC0000000 | 0x0118)
#define NT_STATUS_INVALID_LDT_OFFSET (0xC0000000 | 0x0119)
#define NT_STATUS_INVALID_LDT_DESCRIPTOR (0xC0000000 | 0x011a)
#define NT_STATUS_INVALID_IMAGE_NE_FORMAT (0xC0000000 | 0x011b)
#define NT_STATUS_RXACT_INVALID_STATE (0xC0000000 | 0x011c)
#define NT_STATUS_RXACT_COMMIT_FAILURE (0xC0000000 | 0x011d)
#define NT_STATUS_MAPPED_FILE_SIZE_ZERO (0xC0000000 | 0x011e)
#define NT_STATUS_TOO_MANY_OPENED_FILES (0xC0000000 | 0x011f)
#define NT_STATUS_CANCELLED (0xC0000000 | 0x0120)
#define NT_STATUS_CANNOT_DELETE (0xC0000000 | 0x0121)
#define NT_STATUS_INVALID_COMPUTER_NAME (0xC0000000 | 0x0122)
#define NT_STATUS_FILE_DELETED (0xC0000000 | 0x0123)
#define NT_STATUS_SPECIAL_ACCOUNT (0xC0000000 | 0x0124)
#define NT_STATUS_SPECIAL_GROUP (0xC0000000 | 0x0125)
#define NT_STATUS_SPECIAL_USER (0xC0000000 | 0x0126)
#define NT_STATUS_MEMBERS_PRIMARY_GROUP (0xC0000000 | 0x0127)
#define NT_STATUS_FILE_CLOSED (0xC0000000 | 0x0128)
#define NT_STATUS_TOO_MANY_THREADS (0xC0000000 | 0x0129)
#define NT_STATUS_THREAD_NOT_IN_PROCESS (0xC0000000 | 0x012a)
#define NT_STATUS_TOKEN_ALREADY_IN_USE (0xC0000000 | 0x012b)
#define NT_STATUS_PAGEFILE_QUOTA_EXCEEDED (0xC0000000 | 0x012c)
#define NT_STATUS_COMMITMENT_LIMIT (0xC0000000 | 0x012d)
#define NT_STATUS_INVALID_IMAGE_LE_FORMAT (0xC0000000 | 0x012e)
#define NT_STATUS_INVALID_IMAGE_NOT_MZ (0xC0000000 | 0x012f)
#define NT_STATUS_INVALID_IMAGE_PROTECT (0xC0000000 | 0x0130)
#define NT_STATUS_INVALID_IMAGE_WIN_16 (0xC0000000 | 0x0131)
#define NT_STATUS_LOGON_SERVER_CONFLICT (0xC0000000 | 0x0132)
#define NT_STATUS_TIME_DIFFERENCE_AT_DC (0xC0000000 | 0x0133)
#define NT_STATUS_SYNCHRONIZATION_REQUIRED (0xC0000000 | 0x0134)
#define NT_STATUS_DLL_NOT_FOUND (0xC0000000 | 0x0135)
#define NT_STATUS_OPEN_FAILED (0xC0000000 | 0x0136)
#define NT_STATUS_IO_PRIVILEGE_FAILED (0xC0000000 | 0x0137)
#define NT_STATUS_ORDINAL_NOT_FOUND (0xC0000000 | 0x0138)
#define NT_STATUS_ENTRYPOINT_NOT_FOUND (0xC0000000 | 0x0139)
#define NT_STATUS_CONTROL_C_EXIT (0xC0000000 | 0x013a)
#define NT_STATUS_LOCAL_DISCONNECT (0xC0000000 | 0x013b)
#define NT_STATUS_REMOTE_DISCONNECT (0xC0000000 | 0x013c)
#define NT_STATUS_REMOTE_RESOURCES (0xC0000000 | 0x013d)
#define NT_STATUS_LINK_FAILED (0xC0000000 | 0x013e)
#define NT_STATUS_LINK_TIMEOUT (0xC0000000 | 0x013f)
#define NT_STATUS_INVALID_CONNECTION (0xC0000000 | 0x0140)
#define NT_STATUS_INVALID_ADDRESS (0xC0000000 | 0x0141)
#define NT_STATUS_DLL_INIT_FAILED (0xC0000000 | 0x0142)
#define NT_STATUS_MISSING_SYSTEMFILE (0xC0000000 | 0x0143)
#define NT_STATUS_UNHANDLED_EXCEPTION (0xC0000000 | 0x0144)
#define NT_STATUS_APP_INIT_FAILURE (0xC0000000 | 0x0145)
#define NT_STATUS_PAGEFILE_CREATE_FAILED (0xC0000000 | 0x0146)
#define NT_STATUS_NO_PAGEFILE (0xC0000000 | 0x0147)
#define NT_STATUS_INVALID_LEVEL (0xC0000000 | 0x0148)
#define NT_STATUS_WRONG_PASSWORD_CORE (0xC0000000 | 0x0149)
#define NT_STATUS_ILLEGAL_FLOAT_CONTEXT (0xC0000000 | 0x014a)
#define NT_STATUS_PIPE_BROKEN (0xC0000000 | 0x014b)
#define NT_STATUS_REGISTRY_CORRUPT (0xC0000000 | 0x014c)
#define NT_STATUS_REGISTRY_IO_FAILED (0xC0000000 | 0x014d)
#define NT_STATUS_NO_EVENT_PAIR (0xC0000000 | 0x014e)
#define NT_STATUS_UNRECOGNIZED_VOLUME (0xC0000000 | 0x014f)
#define NT_STATUS_SERIAL_NO_DEVICE_INITED (0xC0000000 | 0x0150)
#define NT_STATUS_NO_SUCH_ALIAS (0xC0000000 | 0x0151)
#define NT_STATUS_MEMBER_NOT_IN_ALIAS (0xC0000000 | 0x0152)
#define NT_STATUS_MEMBER_IN_ALIAS (0xC0000000 | 0x0153)
#define NT_STATUS_ALIAS_EXISTS (0xC0000000 | 0x0154)
#define NT_STATUS_LOGON_NOT_GRANTED (0xC0000000 | 0x0155)
#define NT_STATUS_TOO_MANY_SECRETS (0xC0000000 | 0x0156)
#define NT_STATUS_SECRET_TOO_LONG (0xC0000000 | 0x0157)
#define NT_STATUS_INTERNAL_DB_ERROR (0xC0000000 | 0x0158)
#define NT_STATUS_FULLSCREEN_MODE (0xC0000000 | 0x0159)
#define NT_STATUS_TOO_MANY_CONTEXT_IDS (0xC0000000 | 0x015a)
#define NT_STATUS_LOGON_TYPE_NOT_GRANTED (0xC0000000 | 0x015b)
#define NT_STATUS_NOT_REGISTRY_FILE (0xC0000000 | 0x015c)
#define NT_STATUS_NT_CROSS_ENCRYPTION_REQUIRED (0xC0000000 | 0x015d)
#define NT_STATUS_DOMAIN_CTRLR_CONFIG_ERROR (0xC0000000 | 0x015e)
#define NT_STATUS_FT_MISSING_MEMBER (0xC0000000 | 0x015f)
#define NT_STATUS_ILL_FORMED_SERVICE_ENTRY (0xC0000000 | 0x0160)
#define NT_STATUS_ILLEGAL_CHARACTER (0xC0000000 | 0x0161)
#define NT_STATUS_UNMAPPABLE_CHARACTER (0xC0000000 | 0x0162)
#define NT_STATUS_UNDEFINED_CHARACTER (0xC0000000 | 0x0163)
#define NT_STATUS_FLOPPY_VOLUME (0xC0000000 | 0x0164)
#define NT_STATUS_FLOPPY_ID_MARK_NOT_FOUND (0xC0000000 | 0x0165)
#define NT_STATUS_FLOPPY_WRONG_CYLINDER (0xC0000000 | 0x0166)
#define NT_STATUS_FLOPPY_UNKNOWN_ERROR (0xC0000000 | 0x0167)
#define NT_STATUS_FLOPPY_BAD_REGISTERS (0xC0000000 | 0x0168)
#define NT_STATUS_DISK_RECALIBRATE_FAILED (0xC0000000 | 0x0169)
#define NT_STATUS_DISK_OPERATION_FAILED (0xC0000000 | 0x016a)
#define NT_STATUS_DISK_RESET_FAILED (0xC0000000 | 0x016b)
#define NT_STATUS_SHARED_IRQ_BUSY (0xC0000000 | 0x016c)
#define NT_STATUS_FT_ORPHANING (0xC0000000 | 0x016d)
#define NT_STATUS_PARTITION_FAILURE (0xC0000000 | 0x0172)
#define NT_STATUS_INVALID_BLOCK_LENGTH (0xC0000000 | 0x0173)
#define NT_STATUS_DEVICE_NOT_PARTITIONED (0xC0000000 | 0x0174)
#define NT_STATUS_UNABLE_TO_LOCK_MEDIA (0xC0000000 | 0x0175)
#define NT_STATUS_UNABLE_TO_UNLOAD_MEDIA (0xC0000000 | 0x0176)
#define NT_STATUS_EOM_OVERFLOW (0xC0000000 | 0x0177)
#define NT_STATUS_NO_MEDIA (0xC0000000 | 0x0178)
#define NT_STATUS_NO_SUCH_MEMBER (0xC0000000 | 0x017a)
#define NT_STATUS_INVALID_MEMBER (0xC0000000 | 0x017b)
#define NT_STATUS_KEY_DELETED (0xC0000000 | 0x017c)
#define NT_STATUS_NO_LOG_SPACE (0xC0000000 | 0x017d)
#define NT_STATUS_TOO_MANY_SIDS (0xC0000000 | 0x017e)
#define NT_STATUS_LM_CROSS_ENCRYPTION_REQUIRED (0xC0000000 | 0x017f)
#define NT_STATUS_KEY_HAS_CHILDREN (0xC0000000 | 0x0180)
#define NT_STATUS_CHILD_MUST_BE_VOLATILE (0xC0000000 | 0x0181)
#define NT_STATUS_DEVICE_CONFIGURATION_ERROR (0xC0000000 | 0x0182)
#define NT_STATUS_DRIVER_INTERNAL_ERROR (0xC0000000 | 0x0183)
#define NT_STATUS_INVALID_DEVICE_STATE (0xC0000000 | 0x0184)
#define NT_STATUS_IO_DEVICE_ERROR (0xC0000000 | 0x0185)
#define NT_STATUS_DEVICE_PROTOCOL_ERROR (0xC0000000 | 0x0186)
#define NT_STATUS_BACKUP_CONTROLLER (0xC0000000 | 0x0187)
#define NT_STATUS_LOG_FILE_FULL (0xC0000000 | 0x0188)
#define NT_STATUS_TOO_LATE (0xC0000000 | 0x0189)
#define NT_STATUS_NO_TRUST_LSA_SECRET (0xC0000000 | 0x018a)
#define NT_STATUS_NO_TRUST_SAM_ACCOUNT (0xC0000000 | 0x018b)
#define NT_STATUS_TRUSTED_DOMAIN_FAILURE (0xC0000000 | 0x018c)
#define NT_STATUS_TRUSTED_RELATIONSHIP_FAILURE (0xC0000000 | 0x018d)
#define NT_STATUS_EVENTLOG_FILE_CORRUPT (0xC0000000 | 0x018e)
#define NT_STATUS_EVENTLOG_CANT_START (0xC0000000 | 0x018f)
#define NT_STATUS_TRUST_FAILURE (0xC0000000 | 0x0190)
#define NT_STATUS_MUTANT_LIMIT_EXCEEDED (0xC0000000 | 0x0191)
#define NT_STATUS_NETLOGON_NOT_STARTED (0xC0000000 | 0x0192)
#define NT_STATUS_ACCOUNT_EXPIRED (0xC0000000 | 0x0193)
#define NT_STATUS_POSSIBLE_DEADLOCK (0xC0000000 | 0x0194)
#define NT_STATUS_NETWORK_CREDENTIAL_CONFLICT (0xC0000000 | 0x0195)
#define NT_STATUS_REMOTE_SESSION_LIMIT (0xC0000000 | 0x0196)
#define NT_STATUS_EVENTLOG_FILE_CHANGED (0xC0000000 | 0x0197)
#define NT_STATUS_NOLOGON_INTERDOMAIN_TRUST_ACCOUNT (0xC0000000 | 0x0198)
#define NT_STATUS_NOLOGON_WORKSTATION_TRUST_ACCOUNT (0xC0000000 | 0x0199)
#define NT_STATUS_NOLOGON_SERVER_TRUST_ACCOUNT (0xC0000000 | 0x019a)
#define NT_STATUS_DOMAIN_TRUST_INCONSISTENT (0xC0000000 | 0x019b)
#define NT_STATUS_FS_DRIVER_REQUIRED (0xC0000000 | 0x019c)
#define NT_STATUS_NO_USER_SESSION_KEY (0xC0000000 | 0x0202)
#define NT_STATUS_USER_SESSION_DELETED (0xC0000000 | 0x0203)
#define NT_STATUS_RESOURCE_LANG_NOT_FOUND (0xC0000000 | 0x0204)
#define NT_STATUS_INSUFF_SERVER_RESOURCES (0xC0000000 | 0x0205)
#define NT_STATUS_INVALID_BUFFER_SIZE (0xC0000000 | 0x0206)
#define NT_STATUS_INVALID_ADDRESS_COMPONENT (0xC0000000 | 0x0207)
#define NT_STATUS_INVALID_ADDRESS_WILDCARD (0xC0000000 | 0x0208)
#define NT_STATUS_TOO_MANY_ADDRESSES (0xC0000000 | 0x0209)
#define NT_STATUS_ADDRESS_ALREADY_EXISTS (0xC0000000 | 0x020a)
#define NT_STATUS_ADDRESS_CLOSED (0xC0000000 | 0x020b)
#define NT_STATUS_CONNECTION_DISCONNECTED (0xC0000000 | 0x020c)
#define NT_STATUS_CONNECTION_RESET (0xC0000000 | 0x020d)
#define NT_STATUS_TOO_MANY_NODES (0xC0000000 | 0x020e)
#define NT_STATUS_TRANSACTION_ABORTED (0xC0000000 | 0x020f)
#define NT_STATUS_TRANSACTION_TIMED_OUT (0xC0000000 | 0x0210)
#define NT_STATUS_TRANSACTION_NO_RELEASE (0xC0000000 | 0x0211)
#define NT_STATUS_TRANSACTION_NO_MATCH (0xC0000000 | 0x0212)
#define NT_STATUS_TRANSACTION_RESPONDED (0xC0000000 | 0x0213)
#define NT_STATUS_TRANSACTION_INVALID_ID (0xC0000000 | 0x0214)
#define NT_STATUS_TRANSACTION_INVALID_TYPE (0xC0000000 | 0x0215)
#define NT_STATUS_NOT_SERVER_SESSION (0xC0000000 | 0x0216)
#define NT_STATUS_NOT_CLIENT_SESSION (0xC0000000 | 0x0217)
#define NT_STATUS_CANNOT_LOAD_REGISTRY_FILE (0xC0000000 | 0x0218)
#define NT_STATUS_DEBUG_ATTACH_FAILED (0xC0000000 | 0x0219)
#define NT_STATUS_SYSTEM_PROCESS_TERMINATED (0xC0000000 | 0x021a)
#define NT_STATUS_DATA_NOT_ACCEPTED (0xC0000000 | 0x021b)
#define NT_STATUS_NO_BROWSER_SERVERS_FOUND (0xC0000000 | 0x021c)
#define NT_STATUS_VDM_HARD_ERROR (0xC0000000 | 0x021d)
#define NT_STATUS_DRIVER_CANCEL_TIMEOUT (0xC0000000 | 0x021e)
#define NT_STATUS_REPLY_MESSAGE_MISMATCH (0xC0000000 | 0x021f)
#define NT_STATUS_MAPPED_ALIGNMENT (0xC0000000 | 0x0220)
#define NT_STATUS_IMAGE_CHECKSUM_MISMATCH (0xC0000000 | 0x0221)
#define NT_STATUS_LOST_WRITEBEHIND_DATA (0xC0000000 | 0x0222)
#define NT_STATUS_CLIENT_SERVER_PARAMETERS_INVALID (0xC0000000 | 0x0223)
#define NT_STATUS_PASSWORD_MUST_CHANGE (0xC0000000 | 0x0224)
#define NT_STATUS_NOT_FOUND (0xC0000000 | 0x0225)
#define NT_STATUS_NOT_TINY_STREAM (0xC0000000 | 0x0226)
#define NT_STATUS_RECOVERY_FAILURE (0xC0000000 | 0x0227)
#define NT_STATUS_STACK_OVERFLOW_READ (0xC0000000 | 0x0228)
#define NT_STATUS_FAIL_CHECK (0xC0000000 | 0x0229)
#define NT_STATUS_DUPLICATE_OBJECTID (0xC0000000 | 0x022a)
#define NT_STATUS_OBJECTID_EXISTS (0xC0000000 | 0x022b)
#define NT_STATUS_CONVERT_TO_LARGE (0xC0000000 | 0x022c)
#define NT_STATUS_RETRY (0xC0000000 | 0x022d)
#define NT_STATUS_FOUND_OUT_OF_SCOPE (0xC0000000 | 0x022e)
#define NT_STATUS_ALLOCATE_BUCKET (0xC0000000 | 0x022f)
#define NT_STATUS_PROPSET_NOT_FOUND (0xC0000000 | 0x0230)
#define NT_STATUS_MARSHALL_OVERFLOW (0xC0000000 | 0x0231)
#define NT_STATUS_INVALID_VARIANT (0xC0000000 | 0x0232)
#define NT_STATUS_DOMAIN_CONTROLLER_NOT_FOUND (0xC0000000 | 0x0233)
#define NT_STATUS_ACCOUNT_LOCKED_OUT (0xC0000000 | 0x0234)
#define NT_STATUS_HANDLE_NOT_CLOSABLE (0xC0000000 | 0x0235)
#define NT_STATUS_CONNECTION_REFUSED (0xC0000000 | 0x0236)
#define NT_STATUS_GRACEFUL_DISCONNECT (0xC0000000 | 0x0237)
#define NT_STATUS_ADDRESS_ALREADY_ASSOCIATED (0xC0000000 | 0x0238)
#define NT_STATUS_ADDRESS_NOT_ASSOCIATED (0xC0000000 | 0x0239)
#define NT_STATUS_CONNECTION_INVALID (0xC0000000 | 0x023a)
#define NT_STATUS_CONNECTION_ACTIVE (0xC0000000 | 0x023b)
#define NT_STATUS_NETWORK_UNREACHABLE (0xC0000000 | 0x023c)
#define NT_STATUS_HOST_UNREACHABLE (0xC0000000 | 0x023d)
#define NT_STATUS_PROTOCOL_UNREACHABLE (0xC0000000 | 0x023e)
#define NT_STATUS_PORT_UNREACHABLE (0xC0000000 | 0x023f)
#define NT_STATUS_REQUEST_ABORTED (0xC0000000 | 0x0240)
#define NT_STATUS_CONNECTION_ABORTED (0xC0000000 | 0x0241)
#define NT_STATUS_BAD_COMPRESSION_BUFFER (0xC0000000 | 0x0242)
#define NT_STATUS_USER_MAPPED_FILE (0xC0000000 | 0x0243)
#define NT_STATUS_AUDIT_FAILED (0xC0000000 | 0x0244)
#define NT_STATUS_TIMER_RESOLUTION_NOT_SET (0xC0000000 | 0x0245)
#define NT_STATUS_CONNECTION_COUNT_LIMIT (0xC0000000 | 0x0246)
#define NT_STATUS_LOGIN_TIME_RESTRICTION (0xC0000000 | 0x0247)
#define NT_STATUS_LOGIN_WKSTA_RESTRICTION (0xC0000000 | 0x0248)
#define NT_STATUS_IMAGE_MP_UP_MISMATCH (0xC0000000 | 0x0249)
#define NT_STATUS_INSUFFICIENT_LOGON_INFO (0xC0000000 | 0x0250)
#define NT_STATUS_BAD_DLL_ENTRYPOINT (0xC0000000 | 0x0251)
#define NT_STATUS_BAD_SERVICE_ENTRYPOINT (0xC0000000 | 0x0252)
#define NT_STATUS_LPC_REPLY_LOST (0xC0000000 | 0x0253)
#define NT_STATUS_IP_ADDRESS_CONFLICT1 (0xC0000000 | 0x0254)
#define NT_STATUS_IP_ADDRESS_CONFLICT2 (0xC0000000 | 0x0255)
#define NT_STATUS_REGISTRY_QUOTA_LIMIT (0xC0000000 | 0x0256)
#define NT_STATUS_PATH_NOT_COVERED (0xC0000000 | 0x0257)
#define NT_STATUS_NO_CALLBACK_ACTIVE (0xC0000000 | 0x0258)
#define NT_STATUS_LICENSE_QUOTA_EXCEEDED (0xC0000000 | 0x0259)
#define NT_STATUS_PWD_TOO_SHORT (0xC0000000 | 0x025a)
#define NT_STATUS_PWD_TOO_RECENT (0xC0000000 | 0x025b)
#define NT_STATUS_PWD_HISTORY_CONFLICT (0xC0000000 | 0x025c)
#define NT_STATUS_PLUGPLAY_NO_DEVICE (0xC0000000 | 0x025e)
#define NT_STATUS_UNSUPPORTED_COMPRESSION (0xC0000000 | 0x025f)
#define NT_STATUS_INVALID_HW_PROFILE (0xC0000000 | 0x0260)
#define NT_STATUS_INVALID_PLUGPLAY_DEVICE_PATH (0xC0000000 | 0x0261)
#define NT_STATUS_DRIVER_ORDINAL_NOT_FOUND (0xC0000000 | 0x0262)
#define NT_STATUS_DRIVER_ENTRYPOINT_NOT_FOUND (0xC0000000 | 0x0263)
#define NT_STATUS_RESOURCE_NOT_OWNED (0xC0000000 | 0x0264)
#define NT_STATUS_TOO_MANY_LINKS (0xC0000000 | 0x0265)
#define NT_STATUS_QUOTA_LIST_INCONSISTENT (0xC0000000 | 0x0266)
#define NT_STATUS_FILE_IS_OFFLINE (0xC0000000 | 0x0267)
#define NT_STATUS_NETWORK_SESSION_EXPIRED  (0xC0000000 | 0x035c)
#define NT_STATUS_NO_SUCH_JOB (0xC0000000 | 0xEDE)     /* scheduler */
#define NT_STATUS_NO_PREAUTH_INTEGRITY_HASH_OVERLAP (0xC0000000 | 0x5D0000)
#define NT_STATUS_PENDING 0x00000103
#endif				/* _NTERR_H */
