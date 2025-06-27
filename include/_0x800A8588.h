#pragma once

#include "dolphin/types.h"

typedef struct
{
    u8    gap_0x0[0x30];
    u32   ui_0x30;
    u8    gap_0x34[0x10];
    float f_0x44;
} _0x800A8588_T;



void fn_800A8588(_0x800A8588_T*, int);

void fn_800A8590(float, _0x800A8588_T*);
