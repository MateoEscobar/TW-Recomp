#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00496758
// Address: 0x496758 - 0x497468
void sub_00496758_0x496758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00496758_0x496758");
#endif

    switch (ctx->pc) {
        case 0x496a40u: goto label_496a40;
        case 0x496a48u: goto label_496a48;
        case 0x496a50u: goto label_496a50;
        case 0x496b4cu: goto label_496b4c;
        case 0x496bb0u: goto label_496bb0;
        case 0x496bd4u: goto label_496bd4;
        case 0x496becu: goto label_496bec;
        case 0x496bf4u: goto label_496bf4;
        case 0x496c0cu: goto label_496c0c;
        case 0x496c10u: goto label_496c10;
        case 0x496c18u: goto label_496c18;
        case 0x496c64u: goto label_496c64;
        case 0x496c94u: goto label_496c94;
        case 0x496cccu: goto label_496ccc;
        case 0x496d00u: goto label_496d00;
        case 0x496d34u: goto label_496d34;
        case 0x496d68u: goto label_496d68;
        case 0x4971c4u: goto label_4971c4;
        case 0x4971d4u: goto label_4971d4;
        case 0x4971ecu: goto label_4971ec;
        case 0x4971fcu: goto label_4971fc;
        case 0x497200u: goto label_497200;
        case 0x497208u: goto label_497208;
        case 0x497338u: goto label_497338;
        case 0x49734cu: goto label_49734c;
        case 0x497350u: goto label_497350;
        case 0x497358u: goto label_497358;
        case 0x497388u: goto label_497388;
        case 0x49739cu: goto label_49739c;
        case 0x4973fcu: goto label_4973fc;
        case 0x49742cu: goto label_49742c;
        default: break;
    }

    ctx->pc = 0x496758u;

    // 0x496758: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x496758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x49675c: 0x3c0b0071  lui         $t3, 0x71
    ctx->pc = 0x49675cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)113 << 16));
    // 0x496760: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x496760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x496764: 0x2566ff80  addiu       $a2, $t3, -0x80
    ctx->pc = 0x496764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967168));
    // 0x496768: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x496768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x49676c: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x49676cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x496770: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x496770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x496774: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x496774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x496778: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x496778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x49677c: 0x2404ff0f  addiu       $a0, $zero, -0xF1
    ctx->pc = 0x49677cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x496780: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x496780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x496784: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x496784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x496788: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x496788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x49678c: 0x2408f0ff  addiu       $t0, $zero, -0xF01
    ctx->pc = 0x49678cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963455));
    // 0x496790: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x496790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x496794: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x496794u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x496798: 0x35290fff  ori         $t1, $t1, 0xFFF
    ctx->pc = 0x496798u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4095);
    // 0x49679c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x49679cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x4967a0: 0x3c0afff0  lui         $t2, 0xFFF0
    ctx->pc = 0x4967a0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65520 << 16));
    // 0x4967a4: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4967a4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4967a8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x4967a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x4967ac: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x4967acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4967b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4967b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4967b4: 0x3c0c03ff  lui         $t4, 0x3FF
    ctx->pc = 0x4967b4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)1023 << 16));
    // 0x4967b8: 0xc6438  dsll        $t4, $t4, 16
    ctx->pc = 0x4967b8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
    // 0x4967bc: 0x358c03ff  ori         $t4, $t4, 0x3FF
    ctx->pc = 0x4967bcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)1023);
    // 0x4967c0: 0xc6438  dsll        $t4, $t4, 16
    ctx->pc = 0x4967c0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
    // 0x4967c4: 0x240d0040  addiu       $t5, $zero, 0x40
    ctx->pc = 0x4967c4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4967c8: 0x3c0e0003  lui         $t6, 0x3
    ctx->pc = 0x4967c8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)3 << 16));
    // 0x4967cc: 0xdcc20008  ld          $v0, 0x8($a2)
    ctx->pc = 0x4967ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4967d0: 0x240f0047  addiu       $t7, $zero, 0x47
    ctx->pc = 0x4967d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x4967d4: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x4967d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4967d8: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x4967d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x4967dc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4967dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4967e0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x4967e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4967e4: 0x118c38  dsll        $s1, $s1, 16
    ctx->pc = 0x4967e4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 16);
    // 0x4967e8: 0x36310a00  ori         $s1, $s1, 0xA00
    ctx->pc = 0x4967e8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2560);
    // 0x4967ec: 0x118c38  dsll        $s1, $s1, 16
    ctx->pc = 0x4967ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 16);
    // 0x4967f0: 0x36310100  ori         $s1, $s1, 0x100
    ctx->pc = 0x4967f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)256);
    // 0x4967f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4967f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4967f8: 0x24050e00  addiu       $a1, $zero, 0xE00
    ctx->pc = 0x4967f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
    // 0x4967fc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4967fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x496800: 0xdd63ff80  ld          $v1, -0x80($t3)
    ctx->pc = 0x496800u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 11), 4294967168)));
    // 0x496804: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x496804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x496808: 0x3404e000  ori         $a0, $zero, 0xE000
    ctx->pc = 0x496808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x49680c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x49680cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x496810: 0x3c07000e  lui         $a3, 0xE
    ctx->pc = 0x496810u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)14 << 16));
    // 0x496814: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x496814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x496818: 0x3c080010  lui         $t0, 0x10
    ctx->pc = 0x496818u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16 << 16));
    // 0x49681c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x49681cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x496820: 0x24058000  addiu       $a1, $zero, -0x8000
    ctx->pc = 0x496820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x496824: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x496824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x496828: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x496828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x49682c: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x49682cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x496830: 0x3c04ff0f  lui         $a0, 0xFF0F
    ctx->pc = 0x496830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65295 << 16));
    // 0x496834: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x496834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x496838: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x496838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x49683c: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x49683cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x496840: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x496840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x496844: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x496844u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x496848: 0x3c0400e0  lui         $a0, 0xE0
    ctx->pc = 0x496848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)224 << 16));
    // 0x49684c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x49684cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x496850: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x496850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x496854: 0x3c050e00  lui         $a1, 0xE00
    ctx->pc = 0x496854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3584 << 16));
    // 0x496858: 0x3c04f0ff  lui         $a0, 0xF0FF
    ctx->pc = 0x496858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61695 << 16));
    // 0x49685c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49685cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x496860: 0xfd63ff80  sd          $v1, -0x80($t3)
    ctx->pc = 0x496860u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 4294967168), GPR_U64(ctx, 3));
    // 0x496864: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x496864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x496868: 0x3403e000  ori         $v1, $zero, 0xE000
    ctx->pc = 0x496868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x49686c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x49686cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x496870: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x496870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x496874: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x496874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x496878: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x496878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x49687c: 0x34840fff  ori         $a0, $a0, 0xFFF
    ctx->pc = 0x49687cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4095);
    // 0x496880: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x496880u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x496884: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x496884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x496888: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x496888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x49688c: 0xa4c00002  sh          $zero, 0x2($a2)
    ctx->pc = 0x49688cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x496890: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x496890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x496894: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x496894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x496898: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x496898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x49689c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49689cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4968a0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x4968a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x4968a4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4968a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4968a8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4968a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4968ac: 0xdd63ff80  ld          $v1, -0x80($t3)
    ctx->pc = 0x4968acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 11), 4294967168)));
    // 0x4968b0: 0x3404e000  ori         $a0, $zero, 0xE000
    ctx->pc = 0x4968b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x4968b4: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x4968b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x4968b8: 0x2405ff0f  addiu       $a1, $zero, -0xF1
    ctx->pc = 0x4968b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x4968bc: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x4968bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x4968c0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4968c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4968c4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x4968c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x4968c8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4968c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4968cc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4968ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4968d0: 0x2407c000  addiu       $a3, $zero, -0x4000
    ctx->pc = 0x4968d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x4968d4: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x4968d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x4968d8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4968d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4968dc: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x4968dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x4968e0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4968e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4968e4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4968e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4968e8: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4968e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4968ec: 0x2404bfff  addiu       $a0, $zero, -0x4001
    ctx->pc = 0x4968ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x4968f0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x4968f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x4968f4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4968f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4968f8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x4968f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x4968fc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4968fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x496900: 0x3405e000  ori         $a1, $zero, 0xE000
    ctx->pc = 0x496900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x496904: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x496904u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x496908: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x496908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x49690c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x49690cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x496910: 0x3c04fc00  lui         $a0, 0xFC00
    ctx->pc = 0x496910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64512 << 16));
    // 0x496914: 0x34847fff  ori         $a0, $a0, 0x7FFF
    ctx->pc = 0x496914u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32767);
    // 0x496918: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x496918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x49691c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49691cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x496920: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x496920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x496924: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x496924u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x496928: 0x2405f0ff  addiu       $a1, $zero, -0xF01
    ctx->pc = 0x496928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963455));
    // 0x49692c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x49692cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x496930: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x496930u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x496934: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x496934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x496938: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x496938u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x49693c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x49693cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x496940: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x496940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x496944: 0x3c04f3ff  lui         $a0, 0xF3FF
    ctx->pc = 0x496944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62463 << 16));
    // 0x496948: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x496948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49694c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x49694cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x496950: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x496950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x496954: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x496954u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x496958: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x496958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49695c: 0x3405e000  ori         $a1, $zero, 0xE000
    ctx->pc = 0x49695cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x496960: 0x52f38  dsll        $a1, $a1, 28
    ctx->pc = 0x496960u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 28);
    // 0x496964: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x496964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x496968: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x496968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x49696c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x49696cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x496970: 0x4213a  dsrl        $a0, $a0, 4
    ctx->pc = 0x496970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 4);
    // 0x496974: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x496974u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x496978: 0x34a50fff  ori         $a1, $a1, 0xFFF
    ctx->pc = 0x496978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4095);
    // 0x49697c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x49697cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x496980: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x496980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x496984: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x496984u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x496988: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x496988u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x49698c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x49698cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x496990: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x496990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x496994: 0x3407c000  ori         $a3, $zero, 0xC000
    ctx->pc = 0x496994u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x496998: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x496998u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x49699c: 0x3405e000  ori         $a1, $zero, 0xE000
    ctx->pc = 0x49699cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x4969a0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x4969a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x4969a4: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4969a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4969a8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4969a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4969ac: 0xfd63ff80  sd          $v1, -0x80($t3)
    ctx->pc = 0x4969acu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 4294967168), GPR_U64(ctx, 3));
    // 0x4969b0: 0x24070042  addiu       $a3, $zero, 0x42
    ctx->pc = 0x4969b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x4969b4: 0x2409004c  addiu       $t1, $zero, 0x4C
    ctx->pc = 0x4969b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x4969b8: 0x240a001a  addiu       $t2, $zero, 0x1A
    ctx->pc = 0x4969b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x4969bc: 0x2412004e  addiu       $s2, $zero, 0x4E
    ctx->pc = 0x4969bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x4969c0: 0x24130006  addiu       $s3, $zero, 0x6
    ctx->pc = 0x4969c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4969c4: 0x3c153fff  lui         $s5, 0x3FFF
    ctx->pc = 0x4969c4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)16383 << 16));
    // 0x4969c8: 0x36b53fff  ori         $s5, $s5, 0x3FFF
    ctx->pc = 0x4969c8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16383);
    // 0x4969cc: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x4969ccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x4969d0: 0xfcc70018  sd          $a3, 0x18($a2)
    ctx->pc = 0x4969d0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 7));
    // 0x4969d4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4969d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4969d8: 0xfcc80020  sd          $t0, 0x20($a2)
    ctx->pc = 0x4969d8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 8));
    // 0x4969dc: 0x2485014f  addiu       $a1, $a0, 0x14F
    ctx->pc = 0x4969dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 335));
    // 0x4969e0: 0xfcc90028  sd          $t1, 0x28($a2)
    ctx->pc = 0x4969e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 40), GPR_U64(ctx, 9));
    // 0x4969e4: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x4969e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4969e8: 0xfcca0038  sd          $t2, 0x38($a2)
    ctx->pc = 0x4969e8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 56), GPR_U64(ctx, 10));
    // 0x4969ec: 0xfccc0040  sd          $t4, 0x40($a2)
    ctx->pc = 0x4969ecu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 64), GPR_U64(ctx, 12));
    // 0x4969f0: 0xfccd0048  sd          $t5, 0x48($a2)
    ctx->pc = 0x4969f0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 72), GPR_U64(ctx, 13));
    // 0x4969f4: 0xfcce0050  sd          $t6, 0x50($a2)
    ctx->pc = 0x4969f4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 80), GPR_U64(ctx, 14));
    // 0x4969f8: 0xfccf0058  sd          $t7, 0x58($a2)
    ctx->pc = 0x4969f8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 88), GPR_U64(ctx, 15));
    // 0x4969fc: 0xfcd00068  sd          $s0, 0x68($a2)
    ctx->pc = 0x4969fcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 104), GPR_U64(ctx, 16));
    // 0x496a00: 0xfcd10070  sd          $s1, 0x70($a2)
    ctx->pc = 0x496a00u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 112), GPR_U64(ctx, 17));
    // 0x496a04: 0xfcd20078  sd          $s2, 0x78($a2)
    ctx->pc = 0x496a04u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 120), GPR_U64(ctx, 18));
    // 0x496a08: 0xfcd30080  sd          $s3, 0x80($a2)
    ctx->pc = 0x496a08u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 128), GPR_U64(ctx, 19));
    // 0x496a0c: 0xfcd400b8  sd          $s4, 0xB8($a2)
    ctx->pc = 0x496a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 184), GPR_U64(ctx, 20));
    // 0x496a10: 0xfcd500c0  sd          $s5, 0xC0($a2)
    ctx->pc = 0x496a10u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 192), GPR_U64(ctx, 21));
    // 0x496a14: 0xfcd600c8  sd          $s6, 0xC8($a2)
    ctx->pc = 0x496a14u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 200), GPR_U64(ctx, 22));
    // 0x496a18: 0xfcc00010  sd          $zero, 0x10($a2)
    ctx->pc = 0x496a18u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 0));
    // 0x496a1c: 0xfcd40030  sd          $s4, 0x30($a2)
    ctx->pc = 0x496a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 48), GPR_U64(ctx, 20));
    // 0x496a20: 0xfcc00060  sd          $zero, 0x60($a2)
    ctx->pc = 0x496a20u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 96), GPR_U64(ctx, 0));
    // 0x496a24: 0xfcc00088  sd          $zero, 0x88($a2)
    ctx->pc = 0x496a24u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 136), GPR_U64(ctx, 0));
    // 0x496a28: 0xfcc00090  sd          $zero, 0x90($a2)
    ctx->pc = 0x496a28u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 144), GPR_U64(ctx, 0));
    // 0x496a2c: 0xfcd40098  sd          $s4, 0x98($a2)
    ctx->pc = 0x496a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 152), GPR_U64(ctx, 20));
    // 0x496a30: 0xfcc000a0  sd          $zero, 0xA0($a2)
    ctx->pc = 0x496a30u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 160), GPR_U64(ctx, 0));
    // 0x496a34: 0xfcd600a8  sd          $s6, 0xA8($a2)
    ctx->pc = 0x496a34u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 168), GPR_U64(ctx, 22));
    // 0x496a38: 0xc10f644  jal         func_43D910
    ctx->pc = 0x496A38u;
    SET_GPR_U32(ctx, 31, 0x496A40u);
    ctx->pc = 0x496A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x496A38u;
    // 0x496a3c: 0xfcc000b0  sd          $zero, 0xB0($a2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 6), 176), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x496A38u, 0x496A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496A40u;
label_496a40:
    // 0x496a40: 0xc12a7ca  jal         func_4A9F28
    ctx->pc = 0x496A40u;
    SET_GPR_U32(ctx, 31, 0x496A48u);
    ctx->pc = 0x4A9F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9F28u, 0x496A40u, 0x496A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496A48u;
label_496a48:
    // 0x496a48: 0xc12aa7c  jal         func_4AA9F0
    ctx->pc = 0x496A48u;
    SET_GPR_U32(ctx, 31, 0x496A50u);
    ctx->pc = 0x496A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x496A48u;
    // 0x496a4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA9F0u, 0x496A48u, 0x496A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496A50u;
label_496a50:
    // 0x496a50: 0x8f858a40  lw          $a1, -0x75C0($gp)
    ctx->pc = 0x496a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937152)));
    // 0x496a54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x496a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x496a58: 0x10a2003a  beq         $a1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x496A58u;
    {
        const bool branch_taken_0x496a58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x496A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496A58u;
        // 0x496a5c: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496a58) {
            ctx->pc = 0x496B44u;
            goto label_496b44;
        }
    }
    ctx->pc = 0x496A60u;
    // 0x496a60: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x496a60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x496a64: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x496a64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x496a68: 0x2484ec38  addiu       $a0, $a0, -0x13C8
    ctx->pc = 0x496a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962232));
    // 0x496a6c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x496a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x496a70: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x496a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x496a74: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x496a74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496a78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x496a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x496a7c: 0x24480050  addiu       $t0, $v0, 0x50
    ctx->pc = 0x496a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x496a80: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x496a80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x496a84: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x496a84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x496a88: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x496a88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x496a8c: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x496a8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x496a90: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x496a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x496a94: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x496a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x496a98: 0xb1040007  sdl         $a0, 0x7($t0)
    ctx->pc = 0x496a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x496a9c: 0xb5040000  sdr         $a0, 0x0($t0)
    ctx->pc = 0x496a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x496aa0: 0xb106000f  sdl         $a2, 0xF($t0)
    ctx->pc = 0x496aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x496aa4: 0xb5060008  sdr         $a2, 0x8($t0)
    ctx->pc = 0x496aa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x496aa8: 0xb1070017  sdl         $a3, 0x17($t0)
    ctx->pc = 0x496aa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x496aac: 0xb5070010  sdr         $a3, 0x10($t0)
    ctx->pc = 0x496aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x496ab0: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x496ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x496ab4: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x496ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x496ab8: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x496ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x496abc: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x496abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x496ac0: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x496ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x496ac4: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x496ac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x496ac8: 0xb0a2001f  sdl         $v0, 0x1F($a1)
    ctx->pc = 0x496ac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x496acc: 0xb4a20018  sdr         $v0, 0x18($a1)
    ctx->pc = 0x496accu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x496ad0: 0xb0a40027  sdl         $a0, 0x27($a1)
    ctx->pc = 0x496ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x496ad4: 0xb4a40020  sdr         $a0, 0x20($a1)
    ctx->pc = 0x496ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x496ad8: 0xb0a6002f  sdl         $a2, 0x2F($a1)
    ctx->pc = 0x496ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x496adc: 0xb4a60028  sdr         $a2, 0x28($a1)
    ctx->pc = 0x496adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x496ae0: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x496ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x710074u));
    // 0x496ae4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x496ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x496ae8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x496AE8u;
    {
        const bool branch_taken_0x496ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x496AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496AE8u;
        // 0x496aec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496ae8) {
            ctx->pc = 0x496B28u;
            goto label_496b28;
        }
    }
    ctx->pc = 0x496AF0u;
    // 0x496af0: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x496af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x496af4: 0x8f848760  lw          $a0, -0x78A0($gp)
    ctx->pc = 0x496af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936416)));
    // 0x496af8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x496af8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x496afc: 0xa0a30031  sb          $v1, 0x31($a1)
    ctx->pc = 0x496afcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 49), (uint8_t)GPR_U32(ctx, 3));
    // 0x496b00: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x496b00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x496b04: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x496B04u;
    {
        const bool branch_taken_0x496b04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x496B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496B04u;
        // 0x496b08: 0xa0a30030  sb          $v1, 0x30($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496b04) {
            ctx->pc = 0x496B14u;
            goto label_496b14;
        }
    }
    ctx->pc = 0x496B0Cu;
    // 0x496b0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x496B0Cu;
    {
        const bool branch_taken_0x496b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x496B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496B0Cu;
        // 0x496b10: 0xaca40018  sw          $a0, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496b0c) {
            ctx->pc = 0x496B1Cu;
            goto label_496b1c;
        }
    }
    ctx->pc = 0x496B14u;
label_496b14:
    // 0x496b14: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x496b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x496b18: 0xaf828760  sw          $v0, -0x78A0($gp)
    ctx->pc = 0x496b18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936416), GPR_U32(ctx, 2));
label_496b1c:
    // 0x496b1c: 0x26c20050  addiu       $v0, $s6, 0x50
    ctx->pc = 0x496b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 80));
    // 0x496b20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x496B20u;
    {
        const bool branch_taken_0x496b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x496B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496B20u;
        // 0x496b24: 0xa0400033  sb          $zero, 0x33($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 51), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496b20) {
            ctx->pc = 0x496B40u;
            goto label_496b40;
        }
    }
    ctx->pc = 0x496B28u;
label_496b28:
    // 0x496b28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x496b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x496b2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x496b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x496b30: 0xa0a20033  sb          $v0, 0x33($a1)
    ctx->pc = 0x496b30u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 51), (uint8_t)GPR_U32(ctx, 2));
    // 0x496b34: 0xa0a30031  sb          $v1, 0x31($a1)
    ctx->pc = 0x496b34u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 49), (uint8_t)GPR_U32(ctx, 3));
    // 0x496b38: 0xa0a30030  sb          $v1, 0x30($a1)
    ctx->pc = 0x496b38u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x496b3c: 0x26c20050  addiu       $v0, $s6, 0x50
    ctx->pc = 0x496b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 80));
label_496b40:
    // 0x496b40: 0xa0400032  sb          $zero, 0x32($v0)
    ctx->pc = 0x496b40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 50), (uint8_t)GPR_U32(ctx, 0));
label_496b44:
    // 0x496b44: 0xc125900  jal         func_496400
    ctx->pc = 0x496B44u;
    SET_GPR_U32(ctx, 31, 0x496B4Cu);
    ctx->pc = 0x496400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x496400u, 0x496B44u, 0x496B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496B4Cu;
label_496b4c:
    // 0x496b4c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x496B4Cu;
    {
        const bool branch_taken_0x496b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x496B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496B4Cu;
        // 0x496b50: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496b4c) {
            ctx->pc = 0x496B5Cu;
            goto label_496b5c;
        }
    }
    ctx->pc = 0x496B54u;
    // 0x496b54: 0x10000238  b           . + 4 + (0x238 << 2)
    ctx->pc = 0x496B54u;
    {
        const bool branch_taken_0x496b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x496B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496B54u;
        // 0x496b58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496b54) {
            ctx->pc = 0x497438u;
            goto label_497438;
        }
    }
    ctx->pc = 0x496B5Cu;
label_496b5c:
    // 0x496b5c: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x496b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x496b60: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x496b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x496b64: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x496b64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496b68: 0x90a30032  lbu         $v1, 0x32($a1)
    ctx->pc = 0x496b68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 50)));
    // 0x496b6c: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x496B6Cu;
    {
        const bool branch_taken_0x496b6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x496B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496B6Cu;
        // 0x496b70: 0xaf8586c0  sw          $a1, -0x7940($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936256), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496b6c) {
            ctx->pc = 0x496B84u;
            goto label_496b84;
        }
    }
    ctx->pc = 0x496B74u;
    // 0x496b74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x496b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496b78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x496b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496b7c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x496B7Cu;
    {
        const bool branch_taken_0x496b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x496B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496B7Cu;
        // 0x496b80: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496b7c) {
            ctx->pc = 0x496BCCu;
            goto label_496bcc;
        }
    }
    ctx->pc = 0x496B84u;
label_496b84:
    // 0x496b84: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x496b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x496b88: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x496b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x496b8c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x496B8Cu;
    {
        const bool branch_taken_0x496b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x496b8c) {
            ctx->pc = 0x496B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x496B8Cu;
            // 0x496b90: 0x90a60032  lbu         $a2, 0x32($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 50)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x496BC4u;
            goto label_496bc4;
        }
    }
    ctx->pc = 0x496B94u;
    // 0x496b94: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x496b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x496b98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x496B98u;
    {
        const bool branch_taken_0x496b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x496B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496B98u;
        // 0x496b9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496b98) {
            ctx->pc = 0x496BB8u;
            goto label_496bb8;
        }
    }
    ctx->pc = 0x496BA0u;
    // 0x496ba0: 0x90a60032  lbu         $a2, 0x32($a1)
    ctx->pc = 0x496ba0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 50)));
    // 0x496ba4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x496ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x496ba8: 0xc12a860  jal         func_4AA180
    ctx->pc = 0x496BA8u;
    SET_GPR_U32(ctx, 31, 0x496BB0u);
    ctx->pc = 0x496BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x496BA8u;
    // 0x496bac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA180u, 0x496BA8u, 0x496BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496BB0u;
label_496bb0:
    // 0x496bb0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x496BB0u;
    {
        const bool branch_taken_0x496bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496bb0) {
            ctx->pc = 0x496BECu;
            goto label_496bec;
        }
    }
    ctx->pc = 0x496BB8u;
label_496bb8:
    // 0x496bb8: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x496bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x496bbc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x496BBCu;
    {
        const bool branch_taken_0x496bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x496BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496BBCu;
        // 0x496bc0: 0x90a60032  lbu         $a2, 0x32($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 50)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496bbc) {
            ctx->pc = 0x496BDCu;
            goto label_496bdc;
        }
    }
    ctx->pc = 0x496BC4u;
label_496bc4:
    // 0x496bc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x496bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496bc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x496bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_496bcc:
    // 0x496bcc: 0xc12a860  jal         func_4AA180
    ctx->pc = 0x496BCCu;
    SET_GPR_U32(ctx, 31, 0x496BD4u);
    ctx->pc = 0x496BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x496BCCu;
    // 0x496bd0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA180u, 0x496BCCu, 0x496BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496BD4u;
label_496bd4:
    // 0x496bd4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x496BD4u;
    {
        const bool branch_taken_0x496bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496bd4) {
            ctx->pc = 0x496BECu;
            goto label_496bec;
        }
    }
    ctx->pc = 0x496BDCu;
label_496bdc:
    // 0x496bdc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x496bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496be0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x496be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496be4: 0xc12a860  jal         func_4AA180
    ctx->pc = 0x496BE4u;
    SET_GPR_U32(ctx, 31, 0x496BECu);
    ctx->pc = 0x496BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x496BE4u;
    // 0x496be8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA180u, 0x496BE4u, 0x496BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496BECu;
label_496bec:
    // 0x496bec: 0xc12adc8  jal         func_4AB720
    ctx->pc = 0x496BECu;
    SET_GPR_U32(ctx, 31, 0x496BF4u);
    ctx->pc = 0x496BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x496BECu;
    // 0x496bf0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB720u, 0x496BECu, 0x496BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496BF4u;
label_496bf4:
    // 0x496bf4: 0x3c150071  lui         $s5, 0x71
    ctx->pc = 0x496bf4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)113 << 16));
    // 0x496bf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x496bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496bfc: 0x26e5ff80  addiu       $a1, $s7, -0x80
    ctx->pc = 0x496bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967168));
    // 0x496c00: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x496c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x496c04: 0xc12ae9c  jal         func_4ABA70
    ctx->pc = 0x496C04u;
    SET_GPR_U32(ctx, 31, 0x496C0Cu);
    ctx->pc = 0x496C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x496C04u;
    // 0x496c08: 0x3c1e0071  lui         $fp, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)113 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ABA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ABA70u, 0x496C04u, 0x496C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496C0Cu;
label_496c0c:
    // 0x496c0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x496c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_496c10:
    // 0x496c10: 0xc10c10e  jal         func_430438
    ctx->pc = 0x496C10u;
    SET_GPR_U32(ctx, 31, 0x496C18u);
    ctx->pc = 0x496C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x496C10u;
    // 0x496c14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430438u, 0x496C10u, 0x496C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496C18u;
label_496c18:
    // 0x496c18: 0x1440fffd  bnez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x496C18u;
    {
        const bool branch_taken_0x496c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x496C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496C18u;
        // 0x496c1c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496c18) {
            ctx->pc = 0x496C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_496c10;
        }
    }
    ctx->pc = 0x496C20u;
    // 0x496c20: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x496c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x496c24: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x496c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x496c28: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x496c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x496c2c: 0x26d40050  addiu       $s4, $s6, 0x50
    ctx->pc = 0x496c2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 80));
    // 0x496c30: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x496c30u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x496c34: 0x26b0f610  addiu       $s0, $s5, -0x9F0
    ctx->pc = 0x496c34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294964752));
    // 0x496c38: 0x2411000a  addiu       $s1, $zero, 0xA
    ctx->pc = 0x496c38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x496c3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x496c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496c40: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x496c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x496c44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x496c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496c48: 0x86860018  lh          $a2, 0x18($s4)
    ctx->pc = 0x496c48u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x496c4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x496c4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496c50: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x496c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x496c54: 0x8687001c  lh          $a3, 0x1C($s4)
    ctx->pc = 0x496c54u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x496c58: 0x222280a  movz        $a1, $s1, $v0
    ctx->pc = 0x496c58u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x496c5c: 0xc12a8f4  jal         func_4AA3D0
    ctx->pc = 0x496C5Cu;
    SET_GPR_U32(ctx, 31, 0x496C64u);
    ctx->pc = 0x496C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x496C5Cu;
    // 0x496c60: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA3D0u, 0x496C5Cu, 0x496C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496C64u;
label_496c64:
    // 0x496c64: 0x2412003a  addiu       $s2, $zero, 0x3A
    ctx->pc = 0x496c64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x496c68: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x496c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x496c6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x496c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496c70: 0x86860018  lh          $a2, 0x18($s4)
    ctx->pc = 0x496c70u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x496c74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x496c74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496c78: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x496c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x496c7c: 0x8687001c  lh          $a3, 0x1C($s4)
    ctx->pc = 0x496c7cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x496c80: 0x222280a  movz        $a1, $s1, $v0
    ctx->pc = 0x496c80u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x496c84: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x496c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x496c88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x496c88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496c8c: 0xc12a8f4  jal         func_4AA3D0
    ctx->pc = 0x496C8Cu;
    SET_GPR_U32(ctx, 31, 0x496C94u);
    ctx->pc = 0x496C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x496C8Cu;
    // 0x496c90: 0x24130031  addiu       $s3, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA3D0u, 0x496C8Cu, 0x496C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496C94u;
label_496c94:
    // 0x496c94: 0x24170010  addiu       $s7, $zero, 0x10
    ctx->pc = 0x496c94u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x496c98: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x496c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x496c9c: 0x24090031  addiu       $t1, $zero, 0x31
    ctx->pc = 0x496c9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x496ca0: 0x8f82875c  lw          $v0, -0x78A4($gp)
    ctx->pc = 0x496ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936412)));
    // 0x496ca4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x496ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496ca8: 0x38630010  xori        $v1, $v1, 0x10
    ctx->pc = 0x496ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x496cac: 0x86c60050  lh          $a2, 0x50($s6)
    ctx->pc = 0x496cacu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 80)));
    // 0x496cb0: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x496cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x496cb4: 0x86870004  lh          $a3, 0x4($s4)
    ctx->pc = 0x496cb4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x496cb8: 0x223280a  movz        $a1, $s1, $v1
    ctx->pc = 0x496cb8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x496cbc: 0x242480a  movz        $t1, $s2, $v0
    ctx->pc = 0x496cbcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 18));
    // 0x496cc0: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x496cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x496cc4: 0xc12aa02  jal         func_4AA808
    ctx->pc = 0x496CC4u;
    SET_GPR_U32(ctx, 31, 0x496CCCu);
    ctx->pc = 0x496CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x496CC4u;
    // 0x496cc8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA808u, 0x496CC4u, 0x496CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496CCCu;
label_496ccc:
    // 0x496ccc: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x496cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x496cd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x496cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496cd4: 0x8f82875c  lw          $v0, -0x78A4($gp)
    ctx->pc = 0x496cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936412)));
    // 0x496cd8: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x496cd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496cdc: 0x38630010  xori        $v1, $v1, 0x10
    ctx->pc = 0x496cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x496ce0: 0x86c60050  lh          $a2, 0x50($s6)
    ctx->pc = 0x496ce0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 80)));
    // 0x496ce4: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x496ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x496ce8: 0x86870004  lh          $a3, 0x4($s4)
    ctx->pc = 0x496ce8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x496cec: 0x223280a  movz        $a1, $s1, $v1
    ctx->pc = 0x496cecu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x496cf0: 0x262480b  movn        $t1, $s3, $v0
    ctx->pc = 0x496cf0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 19));
    // 0x496cf4: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x496cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x496cf8: 0xc12ac96  jal         func_4AB258
    ctx->pc = 0x496CF8u;
    SET_GPR_U32(ctx, 31, 0x496D00u);
    ctx->pc = 0x496CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x496CF8u;
    // 0x496cfc: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB258u, 0x496CF8u, 0x496D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496D00u;
label_496d00:
    // 0x496d00: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x496d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x496d04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x496d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496d08: 0x8f82875c  lw          $v0, -0x78A4($gp)
    ctx->pc = 0x496d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936412)));
    // 0x496d0c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x496d0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496d10: 0x38630010  xori        $v1, $v1, 0x10
    ctx->pc = 0x496d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x496d14: 0x86c60050  lh          $a2, 0x50($s6)
    ctx->pc = 0x496d14u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 80)));
    // 0x496d18: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x496d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x496d1c: 0x86870004  lh          $a3, 0x4($s4)
    ctx->pc = 0x496d1cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x496d20: 0x223280a  movz        $a1, $s1, $v1
    ctx->pc = 0x496d20u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x496d24: 0x262480b  movn        $t1, $s3, $v0
    ctx->pc = 0x496d24u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 19));
    // 0x496d28: 0x260401d0  addiu       $a0, $s0, 0x1D0
    ctx->pc = 0x496d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
    // 0x496d2c: 0xc12aa02  jal         func_4AA808
    ctx->pc = 0x496D2Cu;
    SET_GPR_U32(ctx, 31, 0x496D34u);
    ctx->pc = 0x496D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x496D2Cu;
    // 0x496d30: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA808u, 0x496D2Cu, 0x496D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496D34u;
label_496d34:
    // 0x496d34: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x496d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x496d38: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x496d38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496d3c: 0x8f82875c  lw          $v0, -0x78A4($gp)
    ctx->pc = 0x496d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936412)));
    // 0x496d40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x496d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496d44: 0x38630010  xori        $v1, $v1, 0x10
    ctx->pc = 0x496d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x496d48: 0x86c60050  lh          $a2, 0x50($s6)
    ctx->pc = 0x496d48u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 80)));
    // 0x496d4c: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x496d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x496d50: 0x86870004  lh          $a3, 0x4($s4)
    ctx->pc = 0x496d50u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x496d54: 0x223280a  movz        $a1, $s1, $v1
    ctx->pc = 0x496d54u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x496d58: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x496d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x496d5c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x496d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x496d60: 0xc12ac96  jal         func_4AB258
    ctx->pc = 0x496D60u;
    SET_GPR_U32(ctx, 31, 0x496D68u);
    ctx->pc = 0x496D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x496D60u;
    // 0x496d64: 0x262480b  movn        $t1, $s3, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB258u, 0x496D60u, 0x496D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496D68u;
label_496d68:
    // 0x496d68: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x496d68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496d6c: 0x24048000  addiu       $a0, $zero, -0x8000
    ctx->pc = 0x496d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x496d70: 0x70631b89  pcpyld      $v1, $v1, $v1
    ctx->pc = 0x496d70u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x496d74: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x496d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x496d78: 0x7e030050  sq          $v1, 0x50($s0)
    ctx->pc = 0x496d78u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 3));
    // 0x496d7c: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x496d7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x496d80: 0x7e0301c0  sq          $v1, 0x1C0($s0)
    ctx->pc = 0x496d80u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 448), GPR_VEC(ctx, 3));
    // 0x496d84: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x496d84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x496d88: 0x9493a  dsrl        $t1, $t1, 4
    ctx->pc = 0x496d88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 4);
    // 0x496d8c: 0xde020050  ld          $v0, 0x50($s0)
    ctx->pc = 0x496d8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x496d90: 0x2408fff0  addiu       $t0, $zero, -0x10
    ctx->pc = 0x496d90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x496d94: 0xde0301c0  ld          $v1, 0x1C0($s0)
    ctx->pc = 0x496d94u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x496d98: 0x340a8000  ori         $t2, $zero, 0x8000
    ctx->pc = 0x496d98u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x496d9c: 0xa537c  dsll32      $t2, $t2, 13
    ctx->pc = 0x496d9cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 13));
    // 0x496da0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x496da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x496da4: 0xde060058  ld          $a2, 0x58($s0)
    ctx->pc = 0x496da4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x496da8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x496da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x496dac: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x496dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x496db0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x496db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x496db4: 0xde0401c8  ld          $a0, 0x1C8($s0)
    ctx->pc = 0x496db4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 456)));
    // 0x496db8: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x496db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x496dbc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x496dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x496dc0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x496dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x496dc4: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x496dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x496dc8: 0x882024  and         $a0, $a0, $t0
    ctx->pc = 0x496dc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x496dcc: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x496dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x496dd0: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x496dd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x496dd4: 0x92870033  lbu         $a3, 0x33($s4)
    ctx->pc = 0x496dd4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 51)));
    // 0x496dd8: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x496dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x496ddc: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x496ddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x496de0: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x496de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x496de4: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x496de4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x496de8: 0xfe0401c8  sd          $a0, 0x1C8($s0)
    ctx->pc = 0x496de8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 456), GPR_U64(ctx, 4));
    // 0x496dec: 0xfe020050  sd          $v0, 0x50($s0)
    ctx->pc = 0x496decu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 2));
    // 0x496df0: 0xfe060058  sd          $a2, 0x58($s0)
    ctx->pc = 0x496df0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 6));
    // 0x496df4: 0x10e00027  beqz        $a3, . + 4 + (0x27 << 2)
    ctx->pc = 0x496DF4u;
    {
        const bool branch_taken_0x496df4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x496DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496DF4u;
        // 0x496df8: 0xfe0301c0  sd          $v1, 0x1C0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 448), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496df4) {
            ctx->pc = 0x496E94u;
            goto label_496e94;
        }
    }
    ctx->pc = 0x496DFCu;
    // 0x496dfc: 0x8ec20050  lw          $v0, 0x50($s6)
    ctx->pc = 0x496dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 80)));
    // 0x496e00: 0x2404ffc0  addiu       $a0, $zero, -0x40
    ctx->pc = 0x496e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x496e04: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x496e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x496e08: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x496e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x496e0c: 0x14770005  bne         $v1, $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x496E0Cu;
    {
        const bool branch_taken_0x496e0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x496E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496E0Cu;
        // 0x496e10: 0x442824  and         $a1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496e0c) {
            ctx->pc = 0x496E24u;
            goto label_496e24;
        }
    }
    ctx->pc = 0x496E14u;
    // 0x496e14: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x496e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x496e18: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x496e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x496e1c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x496E1Cu;
    {
        const bool branch_taken_0x496e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x496E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496E1Cu;
        // 0x496e20: 0x441024  and         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496e1c) {
            ctx->pc = 0x496E34u;
            goto label_496e34;
        }
    }
    ctx->pc = 0x496E24u;
label_496e24:
    // 0x496e24: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x496e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x496e28: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x496e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x496e2c: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x496e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x496e30: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x496e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_496e34:
    // 0x496e34: 0xa25018  mult        $t2, $a1, $v0
    ctx->pc = 0x496e34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x496e38: 0x26c30050  addiu       $v1, $s6, 0x50
    ctx->pc = 0x496e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 80));
    // 0x496e3c: 0x26a7f610  addiu       $a3, $s5, -0x9F0
    ctx->pc = 0x496e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 4294964752));
    // 0x496e40: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x496e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x496e44: 0xa4042  srl         $t0, $t2, 1
    ctx->pc = 0x496e44u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x496e48: 0xdce60038  ld          $a2, 0x38($a3)
    ctx->pc = 0x496e48u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x496e4c: 0x2404fe00  addiu       $a0, $zero, -0x200
    ctx->pc = 0x496e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x496e50: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x496e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x496e54: 0xdce50060  ld          $a1, 0x60($a3)
    ctx->pc = 0x496e54u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x496e58: 0x102500a  movz        $t2, $t0, $v0
    ctx->pc = 0x496e58u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 8));
    // 0x496e5c: 0xdce300e0  ld          $v1, 0xE0($a3)
    ctx->pc = 0x496e5cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 224)));
    // 0x496e60: 0xa52c2  srl         $t2, $t2, 11
    ctx->pc = 0x496e60u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 11));
    // 0x496e64: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x496e64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x496e68: 0x314201ff  andi        $v0, $t2, 0x1FF
    ctx->pc = 0x496e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)511);
    // 0x496e6c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x496e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x496e70: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x496e70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x496e74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x496e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x496e78: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x496e78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x496e7c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x496e7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x496e80: 0xfce300e0  sd          $v1, 0xE0($a3)
    ctx->pc = 0x496e80u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 224), GPR_U64(ctx, 3));
    // 0x496e84: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x496e84u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x496e88: 0xfce60038  sd          $a2, 0x38($a3)
    ctx->pc = 0x496e88u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 56), GPR_U64(ctx, 6));
    // 0x496e8c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x496E8Cu;
    {
        const bool branch_taken_0x496e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x496E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496E8Cu;
        // 0x496e90: 0xfce50060  sd          $a1, 0x60($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 96), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496e8c) {
            ctx->pc = 0x496FD8u;
            goto label_496fd8;
        }
    }
    ctx->pc = 0x496E94u;
label_496e94:
    // 0x496e94: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x496e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x496e98: 0x2404ffc0  addiu       $a0, $zero, -0x40
    ctx->pc = 0x496e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x496e9c: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x496e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x496ea0: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x496ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x496ea4: 0x14770005  bne         $v1, $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x496EA4u;
    {
        const bool branch_taken_0x496ea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x496EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496EA4u;
        // 0x496ea8: 0x442824  and         $a1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496ea4) {
            ctx->pc = 0x496EBCu;
            goto label_496ebc;
        }
    }
    ctx->pc = 0x496EACu;
    // 0x496eac: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x496eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x496eb0: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x496eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x496eb4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x496EB4u;
    {
        const bool branch_taken_0x496eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x496EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496EB4u;
        // 0x496eb8: 0x441024  and         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496eb4) {
            ctx->pc = 0x496ECCu;
            goto label_496ecc;
        }
    }
    ctx->pc = 0x496EBCu;
label_496ebc:
    // 0x496ebc: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x496ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x496ec0: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x496ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x496ec4: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x496ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x496ec8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x496ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_496ecc:
    // 0x496ecc: 0xa25018  mult        $t2, $a1, $v0
    ctx->pc = 0x496eccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x496ed0: 0x26c90050  addiu       $t1, $s6, 0x50
    ctx->pc = 0x496ed0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 22), 80));
    // 0x496ed4: 0xa2842  srl         $a1, $t2, 1
    ctx->pc = 0x496ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x496ed8: 0x8d220020  lw          $v0, 0x20($t1)
    ctx->pc = 0x496ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x496edc: 0x240c0010  addiu       $t4, $zero, 0x10
    ctx->pc = 0x496edcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x496ee0: 0x91240031  lbu         $a0, 0x31($t1)
    ctx->pc = 0x496ee0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 49)));
    // 0x496ee4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x496ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x496ee8: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x496ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x496eec: 0xa2500a  movz        $t2, $a1, $v0
    ctx->pc = 0x496eecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 5));
    // 0x496ef0: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x496EF0u;
    {
        const bool branch_taken_0x496ef0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x496EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496EF0u;
        // 0x496ef4: 0xa52c2  srl         $t2, $t2, 11 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496ef0) {
            ctx->pc = 0x496F18u;
            goto label_496f18;
        }
    }
    ctx->pc = 0x496EF8u;
    // 0x496ef8: 0x26a5f610  addiu       $a1, $s5, -0x9F0
    ctx->pc = 0x496ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294964752));
    // 0x496efc: 0x2404fe00  addiu       $a0, $zero, -0x200
    ctx->pc = 0x496efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x496f00: 0xdca20038  ld          $v0, 0x38($a1)
    ctx->pc = 0x496f00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x496f04: 0x314301ff  andi        $v1, $t2, 0x1FF
    ctx->pc = 0x496f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)511);
    // 0x496f08: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x496f08u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x496f0c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x496f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x496f10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x496f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x496f14: 0xfca20038  sd          $v0, 0x38($a1)
    ctx->pc = 0x496f14u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 2));
label_496f18:
    // 0x496f18: 0x26a5f610  addiu       $a1, $s5, -0x9F0
    ctx->pc = 0x496f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294964752));
    // 0x496f1c: 0x2406fe00  addiu       $a2, $zero, -0x200
    ctx->pc = 0x496f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x496f20: 0xdca401d0  ld          $a0, 0x1D0($a1)
    ctx->pc = 0x496f20u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 464)));
    // 0x496f24: 0x314701ff  andi        $a3, $t2, 0x1FF
    ctx->pc = 0x496f24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)511);
    // 0x496f28: 0xdca30250  ld          $v1, 0x250($a1)
    ctx->pc = 0x496f28u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 592)));
    // 0x496f2c: 0x240bffc0  addiu       $t3, $zero, -0x40
    ctx->pc = 0x496f2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x496f30: 0x8ec20050  lw          $v0, 0x50($s6)
    ctx->pc = 0x496f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 80)));
    // 0x496f34: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x496f34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x496f38: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x496f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x496f3c: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x496f3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x496f40: 0x8d260008  lw          $a2, 0x8($t1)
    ctx->pc = 0x496f40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x496f44: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x496f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x496f48: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x496f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x496f4c: 0xfca30250  sd          $v1, 0x250($a1)
    ctx->pc = 0x496f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 592), GPR_U64(ctx, 3));
    // 0x496f50: 0x4b4024  and         $t0, $v0, $t3
    ctx->pc = 0x496f50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x496f54: 0x14cc0005  bne         $a2, $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x496F54u;
    {
        const bool branch_taken_0x496f54 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 12));
        ctx->pc = 0x496F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496F54u;
        // 0x496f58: 0xfca401d0  sd          $a0, 0x1D0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 464), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496f54) {
            ctx->pc = 0x496F6Cu;
            goto label_496f6c;
        }
    }
    ctx->pc = 0x496F5Cu;
    // 0x496f5c: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x496f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x496f60: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x496f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x496f64: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x496F64u;
    {
        const bool branch_taken_0x496f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x496F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496F64u;
        // 0x496f68: 0x4b1024  and         $v0, $v0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496f64) {
            ctx->pc = 0x496F7Cu;
            goto label_496f7c;
        }
    }
    ctx->pc = 0x496F6Cu;
label_496f6c:
    // 0x496f6c: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x496f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x496f70: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x496f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x496f74: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x496f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x496f78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x496f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_496f7c:
    // 0x496f7c: 0x1024818  mult        $t1, $t0, $v0
    ctx->pc = 0x496f7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x496f80: 0x26c30050  addiu       $v1, $s6, 0x50
    ctx->pc = 0x496f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 80));
    // 0x496f84: 0x94042  srl         $t0, $t1, 1
    ctx->pc = 0x496f84u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x496f88: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x496f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x496f8c: 0x26a6f610  addiu       $a2, $s5, -0x9F0
    ctx->pc = 0x496f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294964752));
    // 0x496f90: 0x90650030  lbu         $a1, 0x30($v1)
    ctx->pc = 0x496f90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x496f94: 0x2407fe00  addiu       $a3, $zero, -0x200
    ctx->pc = 0x496f94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x496f98: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x496f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x496f9c: 0xdcc40060  ld          $a0, 0x60($a2)
    ctx->pc = 0x496f9cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x496fa0: 0x102480a  movz        $t1, $t0, $v0
    ctx->pc = 0x496fa0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 8));
    // 0x496fa4: 0x38a50002  xori        $a1, $a1, 0x2
    ctx->pc = 0x496fa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x496fa8: 0x94ac2  srl         $t1, $t1, 11
    ctx->pc = 0x496fa8u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 11));
    // 0x496fac: 0xdcc200e0  ld          $v0, 0xE0($a2)
    ctx->pc = 0x496facu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 224)));
    // 0x496fb0: 0x1491821  addu        $v1, $t2, $t1
    ctx->pc = 0x496fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x496fb4: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x496fb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x496fb8: 0x65500a  movz        $t2, $v1, $a1
    ctx->pc = 0x496fb8u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 3));
    // 0x496fbc: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x496fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x496fc0: 0x314301ff  andi        $v1, $t2, 0x1FF
    ctx->pc = 0x496fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)511);
    // 0x496fc4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x496fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x496fc8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x496fc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x496fcc: 0xfcc200e0  sd          $v0, 0xE0($a2)
    ctx->pc = 0x496fccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 224), GPR_U64(ctx, 2));
    // 0x496fd0: 0x1495021  addu        $t2, $t2, $t1
    ctx->pc = 0x496fd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x496fd4: 0xfcc40060  sd          $a0, 0x60($a2)
    ctx->pc = 0x496fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 96), GPR_U64(ctx, 4));
label_496fd8:
    // 0x496fd8: 0x26a3f610  addiu       $v1, $s5, -0x9F0
    ctx->pc = 0x496fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294964752));
    // 0x496fdc: 0x2405fe00  addiu       $a1, $zero, -0x200
    ctx->pc = 0x496fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x496fe0: 0xdc680070  ld          $t0, 0x70($v1)
    ctx->pc = 0x496fe0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x496fe4: 0x314601ff  andi        $a2, $t2, 0x1FF
    ctx->pc = 0x496fe4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)511);
    // 0x496fe8: 0xdc6900f0  ld          $t1, 0xF0($v1)
    ctx->pc = 0x496fe8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x496fec: 0x240cffc0  addiu       $t4, $zero, -0x40
    ctx->pc = 0x496fecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x496ff0: 0xdc6701e0  ld          $a3, 0x1E0($v1)
    ctx->pc = 0x496ff0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 480)));
    // 0x496ff4: 0x1054024  and         $t0, $t0, $a1
    ctx->pc = 0x496ff4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x496ff8: 0xdc640260  ld          $a0, 0x260($v1)
    ctx->pc = 0x496ff8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 608)));
    // 0x496ffc: 0x1254824  and         $t1, $t1, $a1
    ctx->pc = 0x496ffcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
    // 0x497000: 0x8ec20050  lw          $v0, 0x50($s6)
    ctx->pc = 0x497000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 80)));
    // 0x497004: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x497004u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x497008: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x497008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x49700c: 0x1064025  or          $t0, $t0, $a2
    ctx->pc = 0x49700cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x497010: 0x8f85875c  lw          $a1, -0x78A4($gp)
    ctx->pc = 0x497010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936412)));
    // 0x497014: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x497014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x497018: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x497018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x49701c: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x49701cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x497020: 0x4c5824  and         $t3, $v0, $t4
    ctx->pc = 0x497020u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x497024: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x497024u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x497028: 0xfc640260  sd          $a0, 0x260($v1)
    ctx->pc = 0x497028u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 608), GPR_U64(ctx, 4));
    // 0x49702c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x49702cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x497030: 0x26c40050  addiu       $a0, $s6, 0x50
    ctx->pc = 0x497030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 80));
    // 0x497034: 0xfc680070  sd          $t0, 0x70($v1)
    ctx->pc = 0x497034u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 112), GPR_U64(ctx, 8));
    // 0x497038: 0xfc6900f0  sd          $t1, 0xF0($v1)
    ctx->pc = 0x497038u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 240), GPR_U64(ctx, 9));
    // 0x49703c: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49703Cu;
    {
        const bool branch_taken_0x49703c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x497040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49703Cu;
        // 0x497040: 0xfc6701e0  sd          $a3, 0x1E0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 480), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49703c) {
            ctx->pc = 0x497054u;
            goto label_497054;
        }
    }
    ctx->pc = 0x497044u;
    // 0x497044: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x497044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x497048: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x497048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x49704c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x49704Cu;
    {
        const bool branch_taken_0x49704c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49704Cu;
        // 0x497050: 0x4c1024  and         $v0, $v0, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49704c) {
            ctx->pc = 0x497064u;
            goto label_497064;
        }
    }
    ctx->pc = 0x497054u;
label_497054:
    // 0x497054: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x497054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x497058: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x497058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x49705c: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x49705cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x497060: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x497060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_497064:
    // 0x497064: 0x1624818  mult        $t1, $t3, $v0
    ctx->pc = 0x497064u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x497068: 0x8f82875c  lw          $v0, -0x78A4($gp)
    ctx->pc = 0x497068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936412)));
    // 0x49706c: 0x92042  srl         $a0, $t1, 1
    ctx->pc = 0x49706cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x497070: 0x26c30050  addiu       $v1, $s6, 0x50
    ctx->pc = 0x497070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 80));
    // 0x497074: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x497074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x497078: 0x8c650024  lw          $a1, 0x24($v1)
    ctx->pc = 0x497078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x49707c: 0x82480a  movz        $t1, $a0, $v0
    ctx->pc = 0x49707cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 4));
    // 0x497080: 0x94ac2  srl         $t1, $t1, 11
    ctx->pc = 0x497080u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 11));
    // 0x497084: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x497084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x497088: 0x1491021  addu        $v0, $t2, $t1
    ctx->pc = 0x497088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x49708c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x49708cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x497090: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x497090u;
    {
        const bool branch_taken_0x497090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x497094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497090u;
        // 0x497094: 0xaf828a54  sw          $v0, -0x75AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497090) {
            ctx->pc = 0x4971C4u;
            goto label_4971c4;
        }
    }
    ctx->pc = 0x497098u;
    // 0x497098: 0x30a20200  andi        $v0, $a1, 0x200
    ctx->pc = 0x497098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
    // 0x49709c: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x49709Cu;
    {
        const bool branch_taken_0x49709c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4970A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49709Cu;
        // 0x4970a0: 0x26a2f610  addiu       $v0, $s5, -0x9F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294964752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49709c) {
            ctx->pc = 0x4971B8u;
            goto label_4971b8;
        }
    }
    ctx->pc = 0x4970A4u;
    // 0x4970a4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x4970a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4970a8: 0x6848001f  ldl         $t0, 0x1F($v0)
    ctx->pc = 0x4970a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x4970ac: 0x6c480018  ldr         $t0, 0x18($v0)
    ctx->pc = 0x4970acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x4970b0: 0xb048033f  sdl         $t0, 0x33F($v0)
    ctx->pc = 0x4970b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 831); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4970b4: 0xb4480338  sdr         $t0, 0x338($v0)
    ctx->pc = 0x4970b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 824); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4970b8: 0x3c0bffc0  lui         $t3, 0xFFC0
    ctx->pc = 0x4970b8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65472 << 16));
    // 0x4970bc: 0x356b07ff  ori         $t3, $t3, 0x7FF
    ctx->pc = 0x4970bcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)2047);
    // 0x4970c0: 0xb5c38  dsll        $t3, $t3, 16
    ctx->pc = 0x4970c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x4970c4: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x4970c4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x4970c8: 0xb5c38  dsll        $t3, $t3, 16
    ctx->pc = 0x4970c8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x4970cc: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x4970ccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x4970d0: 0x68470017  ldl         $a3, 0x17($v0)
    ctx->pc = 0x4970d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x4970d4: 0x6c470010  ldr         $a3, 0x10($v0)
    ctx->pc = 0x4970d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x4970d8: 0xb0470337  sdl         $a3, 0x337($v0)
    ctx->pc = 0x4970d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 823); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4970dc: 0xb4470330  sdr         $a3, 0x330($v0)
    ctx->pc = 0x4970dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 816); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4970e0: 0x3c0eff80  lui         $t6, 0xFF80
    ctx->pc = 0x4970e0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)65408 << 16));
    // 0x4970e4: 0x35ce0fff  ori         $t6, $t6, 0xFFF
    ctx->pc = 0x4970e4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4095);
    // 0x4970e8: 0xe7438  dsll        $t6, $t6, 16
    ctx->pc = 0x4970e8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 16);
    // 0x4970ec: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x4970ecu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x4970f0: 0xe7438  dsll        $t6, $t6, 16
    ctx->pc = 0x4970f0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 16);
    // 0x4970f4: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x4970f4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x4970f8: 0x68460047  ldl         $a2, 0x47($v0)
    ctx->pc = 0x4970f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4970fc: 0x6c460040  ldr         $a2, 0x40($v0)
    ctx->pc = 0x4970fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x497100: 0xb046034f  sdl         $a2, 0x34F($v0)
    ctx->pc = 0x497100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 847); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x497104: 0xb4460348  sdr         $a2, 0x348($v0)
    ctx->pc = 0x497104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 840); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x497108: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x497108u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49710c: 0x6845003f  ldl         $a1, 0x3F($v0)
    ctx->pc = 0x49710cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x497110: 0x6c450038  ldr         $a1, 0x38($v0)
    ctx->pc = 0x497110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x497114: 0xb0450347  sdl         $a1, 0x347($v0)
    ctx->pc = 0x497114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 839); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x497118: 0xb4450340  sdr         $a1, 0x340($v0)
    ctx->pc = 0x497118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 832); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x49711c: 0x340f8000  ori         $t7, $zero, 0x8000
    ctx->pc = 0x49711cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x497120: 0xf7f38  dsll        $t7, $t7, 28
    ctx->pc = 0x497120u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 28);
    // 0x497124: 0xa0440029  sb          $a0, 0x29($v0)
    ctx->pc = 0x497124u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x497128: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x497128u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x49712c: 0xdc490018  ld          $t1, 0x18($v0)
    ctx->pc = 0x49712cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x497130: 0xdc4a0040  ld          $t2, 0x40($v0)
    ctx->pc = 0x497130u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x497134: 0x91b3e  dsrl32      $v1, $t1, 12
    ctx->pc = 0x497134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) >> (32 + 12));
    // 0x497138: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x497138u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x49713c: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x49713cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x497140: 0xdc460010  ld          $a2, 0x10($v0)
    ctx->pc = 0x497140u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x497144: 0xdc450028  ld          $a1, 0x28($v0)
    ctx->pc = 0x497144u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x497148: 0xa233e  dsrl32      $a0, $t2, 12
    ctx->pc = 0x497148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) >> (32 + 12));
    // 0x49714c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x49714cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x497150: 0xdea8f610  ld          $t0, -0x9F0($s5)
    ctx->pc = 0x497150u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 21), 4294964752)));
    // 0x497154: 0x308407ff  andi        $a0, $a0, 0x7FF
    ctx->pc = 0x497154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
    // 0x497158: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x497158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x49715c: 0xdc470038  ld          $a3, 0x38($v0)
    ctx->pc = 0x49715cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x497160: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x497160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x497164: 0xcb3024  and         $a2, $a2, $t3
    ctx->pc = 0x497164u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 11));
    // 0x497168: 0xac2825  or          $a1, $a1, $t4
    ctx->pc = 0x497168u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 12));
    // 0x49716c: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x49716cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x497170: 0x12e4824  and         $t1, $t1, $t6
    ctx->pc = 0x497170u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 14));
    // 0x497174: 0x308407ff  andi        $a0, $a0, 0x7FF
    ctx->pc = 0x497174u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
    // 0x497178: 0x10c4025  or          $t0, $t0, $t4
    ctx->pc = 0x497178u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 12));
    // 0x49717c: 0xad2825  or          $a1, $a1, $t5
    ctx->pc = 0x49717cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 13));
    // 0x497180: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x497180u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x497184: 0xcf3025  or          $a2, $a2, $t7
    ctx->pc = 0x497184u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 15));
    // 0x497188: 0x14e5024  and         $t2, $t2, $t6
    ctx->pc = 0x497188u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 14));
    // 0x49718c: 0xeb3824  and         $a3, $a3, $t3
    ctx->pc = 0x49718cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 11));
    // 0x497190: 0x4233c  dsll32      $a0, $a0, 12
    ctx->pc = 0x497190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 12));
    // 0x497194: 0x10d4025  or          $t0, $t0, $t5
    ctx->pc = 0x497194u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 13));
    // 0x497198: 0xfc450028  sd          $a1, 0x28($v0)
    ctx->pc = 0x497198u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 5));
    // 0x49719c: 0xfc460010  sd          $a2, 0x10($v0)
    ctx->pc = 0x49719cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 6));
    // 0x4971a0: 0xef3825  or          $a3, $a3, $t7
    ctx->pc = 0x4971a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 15));
    // 0x4971a4: 0xfc490018  sd          $t1, 0x18($v0)
    ctx->pc = 0x4971a4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 9));
    // 0x4971a8: 0x1445025  or          $t2, $t2, $a0
    ctx->pc = 0x4971a8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
    // 0x4971ac: 0xfea8f610  sd          $t0, -0x9F0($s5)
    ctx->pc = 0x4971acu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 4294964752), GPR_U64(ctx, 8));
    // 0x4971b0: 0xfc470038  sd          $a3, 0x38($v0)
    ctx->pc = 0x4971b0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 7));
    // 0x4971b4: 0xfc4a0040  sd          $t2, 0x40($v0)
    ctx->pc = 0x4971b4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 10));
label_4971b8:
    // 0x4971b8: 0x26a4f610  addiu       $a0, $s5, -0x9F0
    ctx->pc = 0x4971b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294964752));
    // 0x4971bc: 0xc10f644  jal         func_43D910
    ctx->pc = 0x4971BCu;
    SET_GPR_U32(ctx, 31, 0x4971C4u);
    ctx->pc = 0x4971C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4971BCu;
    // 0x4971c0: 0x2485044f  addiu       $a1, $a0, 0x44F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1103));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x4971BCu, 0x4971C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4971C4u;
label_4971c4:
    // 0x4971c4: 0x8f848a54  lw          $a0, -0x75AC($gp)
    ctx->pc = 0x4971c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937172)));
    // 0x4971c8: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x4971c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x4971cc: 0xc128d80  jal         func_4A3600
    ctx->pc = 0x4971CCu;
    SET_GPR_U32(ctx, 31, 0x4971D4u);
    ctx->pc = 0x4971D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4971CCu;
    // 0x4971d0: 0xa42823  subu        $a1, $a1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3600u, 0x4971CCu, 0x4971D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4971D4u;
label_4971d4:
    // 0x4971d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4971d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4971d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4971d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4971dc: 0xaf8386c4  sw          $v1, -0x793C($gp)
    ctx->pc = 0x4971dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936260), GPR_U32(ctx, 3));
    // 0x4971e0: 0xaf808764  sw          $zero, -0x789C($gp)
    ctx->pc = 0x4971e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936420), GPR_U32(ctx, 0));
    // 0x4971e4: 0xc12adc8  jal         func_4AB720
    ctx->pc = 0x4971E4u;
    SET_GPR_U32(ctx, 31, 0x4971ECu);
    ctx->pc = 0x4971E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4971E4u;
    // 0x4971e8: 0xaf8086e4  sw          $zero, -0x791C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936292), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB720u, 0x4971E4u, 0x4971ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4971ECu;
label_4971ec:
    // 0x4971ec: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x4971ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x4971f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4971f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4971f4: 0xc12ae82  jal         func_4ABA08
    ctx->pc = 0x4971F4u;
    SET_GPR_U32(ctx, 31, 0x4971FCu);
    ctx->pc = 0x4971F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4971F4u;
    // 0x4971f8: 0x24a56390  addiu       $a1, $a1, 0x6390 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ABA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ABA08u, 0x4971F4u, 0x4971FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4971FCu;
label_4971fc:
    // 0x4971fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4971fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_497200:
    // 0x497200: 0xc10c10e  jal         func_430438
    ctx->pc = 0x497200u;
    SET_GPR_U32(ctx, 31, 0x497208u);
    ctx->pc = 0x497204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497200u;
    // 0x497204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430438u, 0x497200u, 0x497208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497208u;
label_497208:
    // 0x497208: 0x5440fffd  bnel        $v0, $zero, . + 4 + (-0x3 << 2)
    ctx->pc = 0x497208u;
    {
        const bool branch_taken_0x497208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x497208) {
            ctx->pc = 0x49720Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x497208u;
            // 0x49720c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x497200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_497200;
        }
    }
    ctx->pc = 0x497210u;
    // 0x497210: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x497210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x497214: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x497214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x497218: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x497218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
    // 0x49721c: 0x27c2f800  addiu       $v0, $fp, -0x800
    ctx->pc = 0x49721cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294965248));
    // 0x497220: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x497220u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x497224: 0x2408140b  addiu       $t0, $zero, 0x140B
    ctx->pc = 0x497224u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5131));
    // 0x497228: 0x2450fe10  addiu       $s0, $v0, -0x1F0
    ctx->pc = 0x497228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966800));
    // 0x49722c: 0x2445025f  addiu       $a1, $v0, 0x25F
    ctx->pc = 0x49722cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 607));
    // 0x497230: 0xdc43fee0  ld          $v1, -0x120($v0)
    ctx->pc = 0x497230u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294967008)));
    // 0x497234: 0xdc460050  ld          $a2, 0x50($v0)
    ctx->pc = 0x497234u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x497238: 0xdc47fe90  ld          $a3, -0x170($v0)
    ctx->pc = 0x497238u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 4294966928)));
    // 0x49723c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x49723cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x497240: 0xfc43fee0  sd          $v1, -0x120($v0)
    ctx->pc = 0x497240u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4294967008), GPR_U64(ctx, 3));
    // 0x497244: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x497244u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x497248: 0xffc7f800  sd          $a3, -0x800($fp)
    ctx->pc = 0x497248u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 4294965248), GPR_U64(ctx, 7));
    // 0x49724c: 0xfc460050  sd          $a2, 0x50($v0)
    ctx->pc = 0x49724cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 80), GPR_U64(ctx, 6));
    // 0x497250: 0x6843fe17  ldl         $v1, -0x1E9($v0)
    ctx->pc = 0x497250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966807); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x497254: 0x6c43fe10  ldr         $v1, -0x1F0($v0)
    ctx->pc = 0x497254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966800); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x497258: 0x6846fe1f  ldl         $a2, -0x1E1($v0)
    ctx->pc = 0x497258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966815); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x49725c: 0x6c46fe18  ldr         $a2, -0x1E8($v0)
    ctx->pc = 0x49725cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966808); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x497260: 0x6847fe27  ldl         $a3, -0x1D9($v0)
    ctx->pc = 0x497260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966823); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x497264: 0x6c47fe20  ldr         $a3, -0x1E0($v0)
    ctx->pc = 0x497264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966816); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x497268: 0x6848fe2f  ldl         $t0, -0x1D1($v0)
    ctx->pc = 0x497268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966831); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x49726c: 0x6c48fe28  ldr         $t0, -0x1D8($v0)
    ctx->pc = 0x49726cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966824); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x497270: 0xb0430167  sdl         $v1, 0x167($v0)
    ctx->pc = 0x497270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 359); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x497274: 0xb4430160  sdr         $v1, 0x160($v0)
    ctx->pc = 0x497274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x497278: 0xb046016f  sdl         $a2, 0x16F($v0)
    ctx->pc = 0x497278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 367); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x49727c: 0xb4460168  sdr         $a2, 0x168($v0)
    ctx->pc = 0x49727cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 360); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x497280: 0xb0470177  sdl         $a3, 0x177($v0)
    ctx->pc = 0x497280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 375); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x497284: 0xb4470170  sdr         $a3, 0x170($v0)
    ctx->pc = 0x497284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 368); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x497288: 0xb048017f  sdl         $t0, 0x17F($v0)
    ctx->pc = 0x497288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 383); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x49728c: 0xb4480178  sdr         $t0, 0x178($v0)
    ctx->pc = 0x49728cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x497290: 0x6843fe37  ldl         $v1, -0x1C9($v0)
    ctx->pc = 0x497290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966839); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x497294: 0x6c43fe30  ldr         $v1, -0x1D0($v0)
    ctx->pc = 0x497294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966832); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x497298: 0xb0430187  sdl         $v1, 0x187($v0)
    ctx->pc = 0x497298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 391); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x49729c: 0xb4430180  sdr         $v1, 0x180($v0)
    ctx->pc = 0x49729cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 384); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4972a0: 0x6843fe3f  ldl         $v1, -0x1C1($v0)
    ctx->pc = 0x4972a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966847); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4972a4: 0x6c43fe38  ldr         $v1, -0x1C8($v0)
    ctx->pc = 0x4972a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966840); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4972a8: 0x6846fe47  ldl         $a2, -0x1B9($v0)
    ctx->pc = 0x4972a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966855); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4972ac: 0x6c46fe40  ldr         $a2, -0x1C0($v0)
    ctx->pc = 0x4972acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966848); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4972b0: 0x6847fe4f  ldl         $a3, -0x1B1($v0)
    ctx->pc = 0x4972b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966863); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x4972b4: 0x6c47fe48  ldr         $a3, -0x1B8($v0)
    ctx->pc = 0x4972b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966856); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x4972b8: 0x6848fe57  ldl         $t0, -0x1A9($v0)
    ctx->pc = 0x4972b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966871); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x4972bc: 0x6c48fe50  ldr         $t0, -0x1B0($v0)
    ctx->pc = 0x4972bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966864); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x4972c0: 0xb043018f  sdl         $v1, 0x18F($v0)
    ctx->pc = 0x4972c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 399); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4972c4: 0xb4430188  sdr         $v1, 0x188($v0)
    ctx->pc = 0x4972c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 392); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4972c8: 0xb0460197  sdl         $a2, 0x197($v0)
    ctx->pc = 0x4972c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4972cc: 0xb4460190  sdr         $a2, 0x190($v0)
    ctx->pc = 0x4972ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4972d0: 0xb047019f  sdl         $a3, 0x19F($v0)
    ctx->pc = 0x4972d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 415); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4972d4: 0xb4470198  sdr         $a3, 0x198($v0)
    ctx->pc = 0x4972d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 408); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4972d8: 0xb04801a7  sdl         $t0, 0x1A7($v0)
    ctx->pc = 0x4972d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 423); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4972dc: 0xb44801a0  sdr         $t0, 0x1A0($v0)
    ctx->pc = 0x4972dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 416); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4972e0: 0x6843fe5f  ldl         $v1, -0x1A1($v0)
    ctx->pc = 0x4972e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966879); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4972e4: 0x6c43fe58  ldr         $v1, -0x1A8($v0)
    ctx->pc = 0x4972e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966872); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4972e8: 0xb04301af  sdl         $v1, 0x1AF($v0)
    ctx->pc = 0x4972e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 431); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4972ec: 0xb44301a8  sdr         $v1, 0x1A8($v0)
    ctx->pc = 0x4972ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 424); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4972f0: 0x68430147  ldl         $v1, 0x147($v0)
    ctx->pc = 0x4972f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4972f4: 0x6c430140  ldr         $v1, 0x140($v0)
    ctx->pc = 0x4972f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4972f8: 0x6846014f  ldl         $a2, 0x14F($v0)
    ctx->pc = 0x4972f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4972fc: 0x6c460148  ldr         $a2, 0x148($v0)
    ctx->pc = 0x4972fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x497300: 0x68470157  ldl         $a3, 0x157($v0)
    ctx->pc = 0x497300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 343); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x497304: 0x6c470150  ldr         $a3, 0x150($v0)
    ctx->pc = 0x497304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 336); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x497308: 0x6848015f  ldl         $t0, 0x15F($v0)
    ctx->pc = 0x497308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 351); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x49730c: 0x6c480158  ldr         $t0, 0x158($v0)
    ctx->pc = 0x49730cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 344); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x497310: 0xb04301b7  sdl         $v1, 0x1B7($v0)
    ctx->pc = 0x497310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 439); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x497314: 0xb44301b0  sdr         $v1, 0x1B0($v0)
    ctx->pc = 0x497314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 432); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x497318: 0xb04601bf  sdl         $a2, 0x1BF($v0)
    ctx->pc = 0x497318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 447); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x49731c: 0xb44601b8  sdr         $a2, 0x1B8($v0)
    ctx->pc = 0x49731cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 440); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x497320: 0xb04701c7  sdl         $a3, 0x1C7($v0)
    ctx->pc = 0x497320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 455); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x497324: 0xb44701c0  sdr         $a3, 0x1C0($v0)
    ctx->pc = 0x497324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 448); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x497328: 0xb04801cf  sdl         $t0, 0x1CF($v0)
    ctx->pc = 0x497328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 463); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x49732c: 0xb44801c8  sdr         $t0, 0x1C8($v0)
    ctx->pc = 0x49732cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 456); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x497330: 0xc10f644  jal         func_43D910
    ctx->pc = 0x497330u;
    SET_GPR_U32(ctx, 31, 0x497338u);
    ctx->pc = 0x497334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497330u;
    // 0x497334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x497330u, 0x497338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497338u;
label_497338:
    // 0x497338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x497338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49733c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49733cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x497340: 0xaf828744  sw          $v0, -0x78BC($gp)
    ctx->pc = 0x497340u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936388), GPR_U32(ctx, 2));
    // 0x497344: 0xc12ad0e  jal         func_4AB438
    ctx->pc = 0x497344u;
    SET_GPR_U32(ctx, 31, 0x49734Cu);
    ctx->pc = 0x497348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497344u;
    // 0x497348: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB438u, 0x497344u, 0x49734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49734Cu;
label_49734c:
    // 0x49734c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x49734cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_497350:
    // 0x497350: 0xc10c10e  jal         func_430438
    ctx->pc = 0x497350u;
    SET_GPR_U32(ctx, 31, 0x497358u);
    ctx->pc = 0x497354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497350u;
    // 0x497354: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430438u, 0x497350u, 0x497358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497358u;
label_497358:
    // 0x497358: 0x1440fffd  bnez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x497358u;
    {
        const bool branch_taken_0x497358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497358u;
        // 0x49735c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497358) {
            ctx->pc = 0x497350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_497350;
        }
    }
    ctx->pc = 0x497360u;
    // 0x497360: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x497360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x497364: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x497364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x497368: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x497368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x49736c: 0x26b0f610  addiu       $s0, $s5, -0x9F0
    ctx->pc = 0x49736cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294964752));
    // 0x497370: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x497370u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x497374: 0xae0003cc  sw          $zero, 0x3CC($s0)
    ctx->pc = 0x497374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 972), GPR_U32(ctx, 0));
    // 0x497378: 0xae0003c8  sw          $zero, 0x3C8($s0)
    ctx->pc = 0x497378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 968), GPR_U32(ctx, 0));
    // 0x49737c: 0xae0003c4  sw          $zero, 0x3C4($s0)
    ctx->pc = 0x49737cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 964), GPR_U32(ctx, 0));
    // 0x497380: 0xc123740  jal         func_48DD00
    ctx->pc = 0x497380u;
    SET_GPR_U32(ctx, 31, 0x497388u);
    ctx->pc = 0x497384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497380u;
    // 0x497384: 0xae0003c0  sw          $zero, 0x3C0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DD00u, 0x497380u, 0x497388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497388u;
label_497388:
    // 0x497388: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x497388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49738c: 0x56200005  bnel        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x49738Cu;
    {
        const bool branch_taken_0x49738c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x49738c) {
            ctx->pc = 0x497390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49738Cu;
            // 0x497390: 0xde040080  ld          $a0, 0x80($s0) (Delay Slot)
            SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4973A4u;
            goto label_4973a4;
        }
    }
    ctx->pc = 0x497394u;
    // 0x497394: 0xc128dc0  jal         func_4A3700
    ctx->pc = 0x497394u;
    SET_GPR_U32(ctx, 31, 0x49739Cu);
    ctx->pc = 0x4A3700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3700u, 0x497394u, 0x49739Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49739Cu;
label_49739c:
    // 0x49739c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x49739Cu;
    {
        const bool branch_taken_0x49739c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4973A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49739Cu;
        // 0x4973a0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49739c) {
            ctx->pc = 0x497438u;
            goto label_497438;
        }
    }
    ctx->pc = 0x4973A4u;
label_4973a4:
    // 0x4973a4: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x4973a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x4973a8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4973a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x4973ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4973acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4973b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4973b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x4973b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4973b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4973b8: 0xde070060  ld          $a3, 0x60($s0)
    ctx->pc = 0x4973b8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x4973bc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x4973bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4973c0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4973c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4973c4: 0xde060070  ld          $a2, 0x70($s0)
    ctx->pc = 0x4973c4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x4973c8: 0xde0500d0  ld          $a1, 0xD0($s0)
    ctx->pc = 0x4973c8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x4973cc: 0x4193f  dsra32      $v1, $a0, 4
    ctx->pc = 0x4973ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 4) >> (32 + 4));
    // 0x4973d0: 0x4113b  dsra        $v0, $a0, 4
    ctx->pc = 0x4973d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 4) >> 4);
    // 0x4973d4: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x4973d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x4973d8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x4973d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x4973dc: 0xff838750  sd          $v1, -0x78B0($gp)
    ctx->pc = 0x4973dcu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936400), GPR_U64(ctx, 3));
    // 0x4973e0: 0xff828748  sd          $v0, -0x78B8($gp)
    ctx->pc = 0x4973e0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936392), GPR_U64(ctx, 2));
    // 0x4973e4: 0xff8786f0  sd          $a3, -0x7910($gp)
    ctx->pc = 0x4973e4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936304), GPR_U64(ctx, 7));
    // 0x4973e8: 0xff8686e8  sd          $a2, -0x7918($gp)
    ctx->pc = 0x4973e8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936296), GPR_U64(ctx, 6));
    // 0x4973ec: 0xff8586f8  sd          $a1, -0x7908($gp)
    ctx->pc = 0x4973ecu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936312), GPR_U64(ctx, 5));
    // 0x4973f0: 0xff848700  sd          $a0, -0x7900($gp)
    ctx->pc = 0x4973f0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936320), GPR_U64(ctx, 4));
    // 0x4973f4: 0xc1255cc  jal         func_495730
    ctx->pc = 0x4973F4u;
    SET_GPR_U32(ctx, 31, 0x4973FCu);
    ctx->pc = 0x4973F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4973F4u;
    // 0x4973f8: 0xaf928a78  sw          $s2, -0x7588($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937208), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x495730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495730u, 0x4973F4u, 0x4973FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4973FCu;
label_4973fc:
    // 0x4973fc: 0x26c30050  addiu       $v1, $s6, 0x50
    ctx->pc = 0x4973fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 80));
    // 0x497400: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x497400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x497404: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x497404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x497408: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x497408u;
    {
        const bool branch_taken_0x497408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x497408) {
            ctx->pc = 0x49740Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x497408u;
            // 0x49740c: 0xa3808998  sb          $zero, -0x7668($gp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 28), 4294936984), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x497414u;
            goto label_497414;
        }
    }
    ctx->pc = 0x497410u;
    // 0x497410: 0xa3928998  sb          $s2, -0x7668($gp)
    ctx->pc = 0x497410u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936984), (uint8_t)GPR_U32(ctx, 18));
label_497414:
    // 0x497414: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x497414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x497418: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x497418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x49741c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49741Cu;
    {
        const bool branch_taken_0x49741c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x497420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49741Cu;
        // 0x497420: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49741c) {
            ctx->pc = 0x497430u;
            goto label_497430;
        }
    }
    ctx->pc = 0x497424u;
    // 0x497424: 0xc125770  jal         func_495DC0
    ctx->pc = 0x497424u;
    SET_GPR_U32(ctx, 31, 0x49742Cu);
    ctx->pc = 0x497428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497424u;
    // 0x497428: 0x26a4f610  addiu       $a0, $s5, -0x9F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294964752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x495DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495DC0u, 0x497424u, 0x49742Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49742Cu;
label_49742c:
    // 0x49742c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49742cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_497430:
    // 0x497430: 0xaf828a48  sw          $v0, -0x75B8($gp)
    ctx->pc = 0x497430u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937160), GPR_U32(ctx, 2));
    // 0x497434: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x497434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_497438:
    // 0x497438: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x497438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x49743c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x49743cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x497440: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x497440u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x497444: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x497444u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x497448: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x497448u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x49744c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x49744cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x497450: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x497450u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x497454: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x497454u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x497458: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x497458u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49745c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49745cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x497460: 0x3e00008  jr          $ra
    ctx->pc = 0x497460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x497464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497460u;
        // 0x497464: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x497460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x497468u;
}
