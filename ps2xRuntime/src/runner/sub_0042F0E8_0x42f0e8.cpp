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

// Function: sub_0042F0E8
// Address: 0x42f0e8 - 0x42f2c0
void sub_0042F0E8_0x42f0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042F0E8_0x42f0e8");
#endif

    switch (ctx->pc) {
        case 0x42f0e8u: goto label_42f0e8;
        case 0x42f0ecu: goto label_42f0ec;
        case 0x42f0f0u: goto label_42f0f0;
        case 0x42f0f4u: goto label_42f0f4;
        case 0x42f0f8u: goto label_42f0f8;
        case 0x42f0fcu: goto label_42f0fc;
        case 0x42f100u: goto label_42f100;
        case 0x42f104u: goto label_42f104;
        case 0x42f108u: goto label_42f108;
        case 0x42f10cu: goto label_42f10c;
        case 0x42f110u: goto label_42f110;
        case 0x42f114u: goto label_42f114;
        case 0x42f118u: goto label_42f118;
        case 0x42f11cu: goto label_42f11c;
        case 0x42f120u: goto label_42f120;
        case 0x42f124u: goto label_42f124;
        case 0x42f128u: goto label_42f128;
        case 0x42f12cu: goto label_42f12c;
        case 0x42f130u: goto label_42f130;
        case 0x42f134u: goto label_42f134;
        case 0x42f138u: goto label_42f138;
        case 0x42f13cu: goto label_42f13c;
        case 0x42f140u: goto label_42f140;
        case 0x42f144u: goto label_42f144;
        case 0x42f148u: goto label_42f148;
        case 0x42f14cu: goto label_42f14c;
        case 0x42f150u: goto label_42f150;
        case 0x42f154u: goto label_42f154;
        case 0x42f158u: goto label_42f158;
        case 0x42f15cu: goto label_42f15c;
        case 0x42f160u: goto label_42f160;
        case 0x42f164u: goto label_42f164;
        case 0x42f168u: goto label_42f168;
        case 0x42f16cu: goto label_42f16c;
        case 0x42f170u: goto label_42f170;
        case 0x42f174u: goto label_42f174;
        case 0x42f178u: goto label_42f178;
        case 0x42f17cu: goto label_42f17c;
        case 0x42f180u: goto label_42f180;
        case 0x42f184u: goto label_42f184;
        case 0x42f188u: goto label_42f188;
        case 0x42f18cu: goto label_42f18c;
        case 0x42f190u: goto label_42f190;
        case 0x42f194u: goto label_42f194;
        case 0x42f198u: goto label_42f198;
        case 0x42f19cu: goto label_42f19c;
        case 0x42f1a0u: goto label_42f1a0;
        case 0x42f1a4u: goto label_42f1a4;
        case 0x42f1a8u: goto label_42f1a8;
        case 0x42f1acu: goto label_42f1ac;
        case 0x42f1b0u: goto label_42f1b0;
        case 0x42f1b4u: goto label_42f1b4;
        case 0x42f1b8u: goto label_42f1b8;
        case 0x42f1bcu: goto label_42f1bc;
        case 0x42f1c0u: goto label_42f1c0;
        case 0x42f1c4u: goto label_42f1c4;
        case 0x42f1c8u: goto label_42f1c8;
        case 0x42f1ccu: goto label_42f1cc;
        case 0x42f1d0u: goto label_42f1d0;
        case 0x42f1d4u: goto label_42f1d4;
        case 0x42f1d8u: goto label_42f1d8;
        case 0x42f1dcu: goto label_42f1dc;
        case 0x42f1e0u: goto label_42f1e0;
        case 0x42f1e4u: goto label_42f1e4;
        case 0x42f1e8u: goto label_42f1e8;
        case 0x42f1ecu: goto label_42f1ec;
        case 0x42f1f0u: goto label_42f1f0;
        case 0x42f1f4u: goto label_42f1f4;
        case 0x42f1f8u: goto label_42f1f8;
        case 0x42f1fcu: goto label_42f1fc;
        case 0x42f200u: goto label_42f200;
        case 0x42f204u: goto label_42f204;
        case 0x42f208u: goto label_42f208;
        case 0x42f20cu: goto label_42f20c;
        case 0x42f210u: goto label_42f210;
        case 0x42f214u: goto label_42f214;
        case 0x42f218u: goto label_42f218;
        case 0x42f21cu: goto label_42f21c;
        case 0x42f220u: goto label_42f220;
        case 0x42f224u: goto label_42f224;
        case 0x42f228u: goto label_42f228;
        case 0x42f22cu: goto label_42f22c;
        case 0x42f230u: goto label_42f230;
        case 0x42f234u: goto label_42f234;
        case 0x42f238u: goto label_42f238;
        case 0x42f23cu: goto label_42f23c;
        case 0x42f240u: goto label_42f240;
        case 0x42f244u: goto label_42f244;
        case 0x42f248u: goto label_42f248;
        case 0x42f24cu: goto label_42f24c;
        case 0x42f250u: goto label_42f250;
        case 0x42f254u: goto label_42f254;
        case 0x42f258u: goto label_42f258;
        case 0x42f25cu: goto label_42f25c;
        case 0x42f260u: goto label_42f260;
        case 0x42f264u: goto label_42f264;
        case 0x42f268u: goto label_42f268;
        case 0x42f26cu: goto label_42f26c;
        case 0x42f270u: goto label_42f270;
        case 0x42f274u: goto label_42f274;
        case 0x42f278u: goto label_42f278;
        case 0x42f27cu: goto label_42f27c;
        case 0x42f280u: goto label_42f280;
        case 0x42f284u: goto label_42f284;
        case 0x42f288u: goto label_42f288;
        case 0x42f28cu: goto label_42f28c;
        case 0x42f290u: goto label_42f290;
        case 0x42f294u: goto label_42f294;
        case 0x42f298u: goto label_42f298;
        case 0x42f29cu: goto label_42f29c;
        case 0x42f2a0u: goto label_42f2a0;
        case 0x42f2a4u: goto label_42f2a4;
        case 0x42f2a8u: goto label_42f2a8;
        case 0x42f2acu: goto label_42f2ac;
        case 0x42f2b0u: goto label_42f2b0;
        case 0x42f2b4u: goto label_42f2b4;
        case 0x42f2b8u: goto label_42f2b8;
        case 0x42f2bcu: goto label_42f2bc;
        default: break;
    }

    ctx->pc = 0x42f0e8u;

label_42f0e8:
    // 0x42f0e8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x42f0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_42f0ec:
    // 0x42f0ec: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x42f0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_42f0f0:
    // 0x42f0f0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x42f0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_42f0f4:
    // 0x42f0f4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x42f0f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_42f0f8:
    // 0x42f0f8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x42f0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_42f0fc:
    // 0x42f0fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x42f0fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42f100:
    // 0x42f100: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x42f100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_42f104:
    // 0x42f104: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x42f104u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_42f108:
    // 0x42f108: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x42f108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_42f10c:
    // 0x42f10c: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x42f10cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_42f110:
    // 0x42f110: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x42f110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_42f114:
    // 0x42f114: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x42f114u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_42f118:
    // 0x42f118: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x42f118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_42f11c:
    // 0x42f11c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x42f11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_42f120:
    // 0x42f120: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x42f120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_42f124:
    // 0x42f124: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x42f124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_42f128:
    // 0x42f128: 0xc10bbde  jal         func_42EF78
label_42f12c:
    if (ctx->pc == 0x42F12Cu) {
        ctx->pc = 0x42F12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F128u;
        // 0x42f12c: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F130u;
        goto label_42f130;
    }
    ctx->pc = 0x42F128u;
    SET_GPR_U32(ctx, 31, 0x42F130u);
    ctx->pc = 0x42F12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42F128u;
    // 0x42f12c: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EF78u, 0x42F128u, 0x42F130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42F130u;
label_42f130:
    // 0x42f130: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
label_42f134:
    if (ctx->pc == 0x42F134u) {
        ctx->pc = 0x42F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F130u;
        // 0x42f134: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F138u;
        goto label_42f138;
    }
    ctx->pc = 0x42F130u;
    {
        const bool branch_taken_0x42f130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F130u;
        // 0x42f134: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f130) {
            ctx->pc = 0x42F290u;
            goto label_42f290;
        }
    }
    ctx->pc = 0x42F138u;
label_42f138:
    // 0x42f138: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x42f138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_42f13c:
    // 0x42f13c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x42f13cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42f140:
    // 0x42f140: 0x10a00052  beqz        $a1, . + 4 + (0x52 << 2)
label_42f144:
    if (ctx->pc == 0x42F144u) {
        ctx->pc = 0x42F144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F140u;
        // 0x42f144: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F148u;
        goto label_42f148;
    }
    ctx->pc = 0x42F140u;
    {
        const bool branch_taken_0x42f140 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F140u;
        // 0x42f144: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f140) {
            ctx->pc = 0x42F28Cu;
            goto label_42f28c;
        }
    }
    ctx->pc = 0x42F148u;
label_42f148:
    // 0x42f148: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x42f148u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42f14c:
    // 0x42f14c: 0x0  nop
    ctx->pc = 0x42f14cu;
    // NOP
label_42f150:
    // 0x42f150: 0x13c00009  beqz        $fp, . + 4 + (0x9 << 2)
label_42f154:
    if (ctx->pc == 0x42F154u) {
        ctx->pc = 0x42F154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F150u;
        // 0x42f154: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F158u;
        goto label_42f158;
    }
    ctx->pc = 0x42F150u;
    {
        const bool branch_taken_0x42f150 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F150u;
        // 0x42f154: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f150) {
            ctx->pc = 0x42F178u;
            goto label_42f178;
        }
    }
    ctx->pc = 0x42F158u;
label_42f158:
    // 0x42f158: 0x8e4a0008  lw          $t2, 0x8($s2)
    ctx->pc = 0x42f158u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_42f15c:
    // 0x42f15c: 0x2ca1821  addu        $v1, $s6, $t2
    ctx->pc = 0x42f15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
label_42f160:
    // 0x42f160: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x42f160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_42f164:
    // 0x42f164: 0x21782  srl         $v0, $v0, 30
    ctx->pc = 0x42f164u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 30));
label_42f168:
    // 0x42f168: 0x14440043  bne         $v0, $a0, . + 4 + (0x43 << 2)
label_42f16c:
    if (ctx->pc == 0x42F16Cu) {
        ctx->pc = 0x42F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F168u;
        // 0x42f16c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F170u;
        goto label_42f170;
    }
    ctx->pc = 0x42F168u;
    {
        const bool branch_taken_0x42f168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x42F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F168u;
        // 0x42f16c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f168) {
            ctx->pc = 0x42F278u;
            goto label_42f278;
        }
    }
    ctx->pc = 0x42F170u;
label_42f170:
    // 0x42f170: 0x10000003  b           . + 4 + (0x3 << 2)
label_42f174:
    if (ctx->pc == 0x42F174u) {
        ctx->pc = 0x42F174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F170u;
        // 0x42f174: 0x2ca5021  addu        $t2, $s6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F178u;
        goto label_42f178;
    }
    ctx->pc = 0x42F170u;
    {
        const bool branch_taken_0x42f170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F170u;
        // 0x42f174: 0x2ca5021  addu        $t2, $s6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f170) {
            ctx->pc = 0x42F180u;
            goto label_42f180;
        }
    }
    ctx->pc = 0x42F178u;
label_42f178:
    // 0x42f178: 0x8e4a0008  lw          $t2, 0x8($s2)
    ctx->pc = 0x42f178u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_42f17c:
    // 0x42f17c: 0x2ca5021  addu        $t2, $s6, $t2
    ctx->pc = 0x42f17cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
label_42f180:
    // 0x42f180: 0x3c021fff  lui         $v0, 0x1FFF
    ctx->pc = 0x42f180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8191 << 16));
label_42f184:
    // 0x42f184: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x42f184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_42f188:
    // 0x42f188: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x42f188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_42f18c:
    // 0x42f18c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x42f18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_42f190:
    // 0x42f190: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x42f190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_42f194:
    // 0x42f194: 0x31f42  srl         $v1, $v1, 29
    ctx->pc = 0x42f194u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 29));
label_42f198:
    // 0x42f198: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x42f198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_42f19c:
    // 0x42f19c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_42f1a0:
    if (ctx->pc == 0x42F1A0u) {
        ctx->pc = 0x42F1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F19Cu;
        // 0x42f1a0: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F1A4u;
        goto label_42f1a4;
    }
    ctx->pc = 0x42F19Cu;
    {
        const bool branch_taken_0x42f19c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F19Cu;
        // 0x42f1a0: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f19c) {
            ctx->pc = 0x42F1A8u;
            goto label_42f1a8;
        }
    }
    ctx->pc = 0x42F1A4u;
label_42f1a4:
    // 0x42f1a4: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x42f1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_42f1a8:
    // 0x42f1a8: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x42f1a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_42f1ac:
    // 0x42f1ac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x42f1acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42f1b0:
    // 0x42f1b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x42f1b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_42f1b4:
    // 0x42f1b4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x42f1b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_42f1b8:
    // 0x42f1b8: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x42f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_42f1bc:
    // 0x42f1bc: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x42f1bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_42f1c0:
    // 0x42f1c0: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x42f1c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_42f1c4:
    // 0x42f1c4: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x42f1c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_42f1c8:
    // 0x42f1c8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x42f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_42f1cc:
    // 0x42f1cc: 0x40f809  jalr        $v0
label_42f1d0:
    if (ctx->pc == 0x42F1D0u) {
        ctx->pc = 0x42F1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F1CCu;
        // 0x42f1d0: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F1D4u;
        goto label_42f1d4;
    }
    ctx->pc = 0x42F1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42F1D4u);
        ctx->pc = 0x42F1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F1CCu;
        // 0x42f1d0: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42F1CCu, 0x42F1D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42F1D4u;
label_42f1d4:
    // 0x42f1d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42f1d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42f1d8:
    // 0x42f1d8: 0x52000026  beql        $s0, $zero, . + 4 + (0x26 << 2)
label_42f1dc:
    if (ctx->pc == 0x42F1DCu) {
        ctx->pc = 0x42F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F1D8u;
        // 0x42f1dc: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F1E0u;
        goto label_42f1e0;
    }
    ctx->pc = 0x42F1D8u;
    {
        const bool branch_taken_0x42f1d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x42f1d8) {
            ctx->pc = 0x42F1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42F1D8u;
            // 0x42f1dc: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42F274u;
            goto label_42f274;
        }
    }
    ctx->pc = 0x42F1E0u;
label_42f1e0:
    // 0x42f1e0: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_42f1e4:
    if (ctx->pc == 0x42F1E4u) {
        ctx->pc = 0x42F1E8u;
        goto label_42f1e8;
    }
    ctx->pc = 0x42F1E0u;
    {
        const bool branch_taken_0x42f1e0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x42f1e0) {
            ctx->pc = 0x42F1F0u;
            goto label_42f1f0;
        }
    }
    ctx->pc = 0x42F1E8u;
label_42f1e8:
    // 0x42f1e8: 0x10000021  b           . + 4 + (0x21 << 2)
label_42f1ec:
    if (ctx->pc == 0x42F1ECu) {
        ctx->pc = 0x42F1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F1E8u;
        // 0x42f1ec: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F1F0u;
        goto label_42f1f0;
    }
    ctx->pc = 0x42F1E8u;
    {
        const bool branch_taken_0x42f1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F1E8u;
        // 0x42f1ec: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f1e8) {
            ctx->pc = 0x42F270u;
            goto label_42f270;
        }
    }
    ctx->pc = 0x42F1F0u;
label_42f1f0:
    // 0x42f1f0: 0x52700020  beql        $s3, $s0, . + 4 + (0x20 << 2)
label_42f1f4:
    if (ctx->pc == 0x42F1F4u) {
        ctx->pc = 0x42F1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F1F0u;
        // 0x42f1f4: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F1F8u;
        goto label_42f1f8;
    }
    ctx->pc = 0x42F1F0u;
    {
        const bool branch_taken_0x42f1f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        if (branch_taken_0x42f1f0) {
            ctx->pc = 0x42F1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42F1F0u;
            // 0x42f1f4: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42F274u;
            goto label_42f274;
        }
    }
    ctx->pc = 0x42F1F8u;
label_42f1f8:
    // 0x42f1f8: 0x12a0001b  beqz        $s5, . + 4 + (0x1B << 2)
label_42f1fc:
    if (ctx->pc == 0x42F1FCu) {
        ctx->pc = 0x42F1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F1F8u;
        // 0x42f1fc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F200u;
        goto label_42f200;
    }
    ctx->pc = 0x42F1F8u;
    {
        const bool branch_taken_0x42f1f8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F1F8u;
        // 0x42f1fc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f1f8) {
            ctx->pc = 0x42F268u;
            goto label_42f268;
        }
    }
    ctx->pc = 0x42F200u;
label_42f200:
    // 0x42f200: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x42f200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_42f204:
    // 0x42f204: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x42f204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42f208:
    // 0x42f208: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x42f208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_42f20c:
    // 0x42f20c: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x42f20cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_42f210:
    // 0x42f210: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x42f210u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42f214:
    // 0x42f214: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x42f214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_42f218:
    // 0x42f218: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x42f218u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42f21c:
    // 0x42f21c: 0x40f809  jalr        $v0
label_42f220:
    if (ctx->pc == 0x42F220u) {
        ctx->pc = 0x42F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F21Cu;
        // 0x42f220: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F224u;
        goto label_42f224;
    }
    ctx->pc = 0x42F21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42F224u);
        ctx->pc = 0x42F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F21Cu;
        // 0x42f220: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42F21Cu, 0x42F224u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42F224u;
label_42f224:
    // 0x42f224: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x42f224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_42f228:
    // 0x42f228: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x42f228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42f22c:
    // 0x42f22c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x42f22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_42f230:
    // 0x42f230: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x42f230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42f234:
    // 0x42f234: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x42f234u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_42f238:
    // 0x42f238: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x42f238u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42f23c:
    // 0x42f23c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x42f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_42f240:
    // 0x42f240: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x42f240u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42f244:
    // 0x42f244: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x42f244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_42f248:
    // 0x42f248: 0x40f809  jalr        $v0
label_42f24c:
    if (ctx->pc == 0x42F24Cu) {
        ctx->pc = 0x42F24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F248u;
        // 0x42f24c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F250u;
        goto label_42f250;
    }
    ctx->pc = 0x42F248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42F250u);
        ctx->pc = 0x42F24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F248u;
        // 0x42f24c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42F248u, 0x42F250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42F250u;
label_42f250:
    // 0x42f250: 0x5222000f  beql        $s1, $v0, . + 4 + (0xF << 2)
label_42f254:
    if (ctx->pc == 0x42F254u) {
        ctx->pc = 0x42F254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F250u;
        // 0x42f254: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F258u;
        goto label_42f258;
    }
    ctx->pc = 0x42F250u;
    {
        const bool branch_taken_0x42f250 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x42f250) {
            ctx->pc = 0x42F254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42F250u;
            // 0x42f254: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42F290u;
            goto label_42f290;
        }
    }
    ctx->pc = 0x42F258u;
label_42f258:
    // 0x42f258: 0x52370006  beql        $s1, $s7, . + 4 + (0x6 << 2)
label_42f25c:
    if (ctx->pc == 0x42F25Cu) {
        ctx->pc = 0x42F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F258u;
        // 0x42f25c: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F260u;
        goto label_42f260;
    }
    ctx->pc = 0x42F258u;
    {
        const bool branch_taken_0x42f258 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 23));
        if (branch_taken_0x42f258) {
            ctx->pc = 0x42F25Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42F258u;
            // 0x42f25c: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42F274u;
            goto label_42f274;
        }
    }
    ctx->pc = 0x42F260u;
label_42f260:
    // 0x42f260: 0x10570003  beq         $v0, $s7, . + 4 + (0x3 << 2)
label_42f264:
    if (ctx->pc == 0x42F264u) {
        ctx->pc = 0x42F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F260u;
        // 0x42f264: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F268u;
        goto label_42f268;
    }
    ctx->pc = 0x42F260u;
    {
        const bool branch_taken_0x42f260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x42F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F260u;
        // 0x42f264: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f260) {
            ctx->pc = 0x42F270u;
            goto label_42f270;
        }
    }
    ctx->pc = 0x42F268u;
label_42f268:
    // 0x42f268: 0x10000009  b           . + 4 + (0x9 << 2)
label_42f26c:
    if (ctx->pc == 0x42F26Cu) {
        ctx->pc = 0x42F26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F268u;
        // 0x42f26c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F270u;
        goto label_42f270;
    }
    ctx->pc = 0x42F268u;
    {
        const bool branch_taken_0x42f268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F268u;
        // 0x42f26c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f268) {
            ctx->pc = 0x42F290u;
            goto label_42f290;
        }
    }
    ctx->pc = 0x42F270u;
label_42f270:
    // 0x42f270: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x42f270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_42f274:
    // 0x42f274: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x42f274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_42f278:
    // 0x42f278: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x42f278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_42f27c:
    // 0x42f27c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x42f27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_42f280:
    // 0x42f280: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x42f280u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_42f284:
    // 0x42f284: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
label_42f288:
    if (ctx->pc == 0x42F288u) {
        ctx->pc = 0x42F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F284u;
        // 0x42f288: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F28Cu;
        goto label_42f28c;
    }
    ctx->pc = 0x42F284u;
    {
        const bool branch_taken_0x42f284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F284u;
        // 0x42f288: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f284) {
            ctx->pc = 0x42F150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42f150;
        }
    }
    ctx->pc = 0x42F28Cu;
label_42f28c:
    // 0x42f28c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x42f28cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_42f290:
    // 0x42f290: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x42f290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_42f294:
    // 0x42f294: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x42f294u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_42f298:
    // 0x42f298: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x42f298u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_42f29c:
    // 0x42f29c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x42f29cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_42f2a0:
    // 0x42f2a0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x42f2a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_42f2a4:
    // 0x42f2a4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x42f2a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_42f2a8:
    // 0x42f2a8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x42f2a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_42f2ac:
    // 0x42f2ac: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x42f2acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_42f2b0:
    // 0x42f2b0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x42f2b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_42f2b4:
    // 0x42f2b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x42f2b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_42f2b8:
    // 0x42f2b8: 0x3e00008  jr          $ra
label_42f2bc:
    if (ctx->pc == 0x42F2BCu) {
        ctx->pc = 0x42F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F2B8u;
        // 0x42f2bc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F2C0u;
        goto label_fallthrough_0x42f2b8;
    }
    ctx->pc = 0x42F2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F2B8u;
        // 0x42f2bc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42F2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x42f2b8:
    ctx->pc = 0x42F2C0u;
}
