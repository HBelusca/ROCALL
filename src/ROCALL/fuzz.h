/*******************************************************************************
*
*  (C) COPYRIGHT AUTHORS, 2018
*
*  TITLE:       FUZZ.H
*
*  VERSION:     1.00
*
*  DATE:        05 Dec 2018
*
* THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
* ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED
* TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
* PARTICULAR PURPOSE.
*
*******************************************************************************/

#pragma once

typedef struct _CALL_PARAM {
    ULONG ServiceId;
    ULONG NumberOfArguments;
} CALL_PARAM, *PCALL_PARAM;

typedef struct _REACTOS_VERSION {
    ULONG Major;
    ULONG Minor;
    ULONG Build;
    ULONG Revision;
} REACTOS_VERSION, *PREACTOS_VERSION;

#define ARGUMENT_COUNT  32 //while actual implemented maximum is 17 according to tables
#define FUZZ_PASS_COUNT 1024


#define SIZEOF_FUZZDATA 18
static const DWORD fuzzdata[SIZEOF_FUZZDATA] = {
            0x00000000, 0x00000001, 0x00000010, 0x0000fff0, 0x0000fffe, 0x0000ffff,
            0x7ffffff0, 0x7ffffffe, 0x7fffffff, 0x80000000, 0x80000001, 0x80000010,
            0xbadcafee, 0xdeadbad0, 0xdeadbeef, 0xfffffff0, 0xfffffffe, 0xffffffff
};
