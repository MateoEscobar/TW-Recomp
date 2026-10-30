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

// Function: sub_00263EB8
// Address: 0x263eb8 - 0x264178
void sub_00263EB8_0x263eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263EB8_0x263eb8");
#endif

    switch (ctx->pc) {
        case 0x263eb8u: goto label_263eb8;
        case 0x263ebcu: goto label_263ebc;
        case 0x263ec0u: goto label_263ec0;
        case 0x263ec4u: goto label_263ec4;
        case 0x263ec8u: goto label_263ec8;
        case 0x263eccu: goto label_263ecc;
        case 0x263ed0u: goto label_263ed0;
        case 0x263ed4u: goto label_263ed4;
        case 0x263ed8u: goto label_263ed8;
        case 0x263edcu: goto label_263edc;
        case 0x263ee0u: goto label_263ee0;
        case 0x263ee4u: goto label_263ee4;
        case 0x263ee8u: goto label_263ee8;
        case 0x263eecu: goto label_263eec;
        case 0x263ef0u: goto label_263ef0;
        case 0x263ef4u: goto label_263ef4;
        case 0x263ef8u: goto label_263ef8;
        case 0x263efcu: goto label_263efc;
        case 0x263f00u: goto label_263f00;
        case 0x263f04u: goto label_263f04;
        case 0x263f08u: goto label_263f08;
        case 0x263f0cu: goto label_263f0c;
        case 0x263f10u: goto label_263f10;
        case 0x263f14u: goto label_263f14;
        case 0x263f18u: goto label_263f18;
        case 0x263f1cu: goto label_263f1c;
        case 0x263f20u: goto label_263f20;
        case 0x263f24u: goto label_263f24;
        case 0x263f28u: goto label_263f28;
        case 0x263f2cu: goto label_263f2c;
        case 0x263f30u: goto label_263f30;
        case 0x263f34u: goto label_263f34;
        case 0x263f38u: goto label_263f38;
        case 0x263f3cu: goto label_263f3c;
        case 0x263f40u: goto label_263f40;
        case 0x263f44u: goto label_263f44;
        case 0x263f48u: goto label_263f48;
        case 0x263f4cu: goto label_263f4c;
        case 0x263f50u: goto label_263f50;
        case 0x263f54u: goto label_263f54;
        case 0x263f58u: goto label_263f58;
        case 0x263f5cu: goto label_263f5c;
        case 0x263f60u: goto label_263f60;
        case 0x263f64u: goto label_263f64;
        case 0x263f68u: goto label_263f68;
        case 0x263f6cu: goto label_263f6c;
        case 0x263f70u: goto label_263f70;
        case 0x263f74u: goto label_263f74;
        case 0x263f78u: goto label_263f78;
        case 0x263f7cu: goto label_263f7c;
        case 0x263f80u: goto label_263f80;
        case 0x263f84u: goto label_263f84;
        case 0x263f88u: goto label_263f88;
        case 0x263f8cu: goto label_263f8c;
        case 0x263f90u: goto label_263f90;
        case 0x263f94u: goto label_263f94;
        case 0x263f98u: goto label_263f98;
        case 0x263f9cu: goto label_263f9c;
        case 0x263fa0u: goto label_263fa0;
        case 0x263fa4u: goto label_263fa4;
        case 0x263fa8u: goto label_263fa8;
        case 0x263facu: goto label_263fac;
        case 0x263fb0u: goto label_263fb0;
        case 0x263fb4u: goto label_263fb4;
        case 0x263fb8u: goto label_263fb8;
        case 0x263fbcu: goto label_263fbc;
        case 0x263fc0u: goto label_263fc0;
        case 0x263fc4u: goto label_263fc4;
        case 0x263fc8u: goto label_263fc8;
        case 0x263fccu: goto label_263fcc;
        case 0x263fd0u: goto label_263fd0;
        case 0x263fd4u: goto label_263fd4;
        case 0x263fd8u: goto label_263fd8;
        case 0x263fdcu: goto label_263fdc;
        case 0x263fe0u: goto label_263fe0;
        case 0x263fe4u: goto label_263fe4;
        case 0x263fe8u: goto label_263fe8;
        case 0x263fecu: goto label_263fec;
        case 0x263ff0u: goto label_263ff0;
        case 0x263ff4u: goto label_263ff4;
        case 0x263ff8u: goto label_263ff8;
        case 0x263ffcu: goto label_263ffc;
        case 0x264000u: goto label_264000;
        case 0x264004u: goto label_264004;
        case 0x264008u: goto label_264008;
        case 0x26400cu: goto label_26400c;
        case 0x264010u: goto label_264010;
        case 0x264014u: goto label_264014;
        case 0x264018u: goto label_264018;
        case 0x26401cu: goto label_26401c;
        case 0x264020u: goto label_264020;
        case 0x264024u: goto label_264024;
        case 0x264028u: goto label_264028;
        case 0x26402cu: goto label_26402c;
        case 0x264030u: goto label_264030;
        case 0x264034u: goto label_264034;
        case 0x264038u: goto label_264038;
        case 0x26403cu: goto label_26403c;
        case 0x264040u: goto label_264040;
        case 0x264044u: goto label_264044;
        case 0x264048u: goto label_264048;
        case 0x26404cu: goto label_26404c;
        case 0x264050u: goto label_264050;
        case 0x264054u: goto label_264054;
        case 0x264058u: goto label_264058;
        case 0x26405cu: goto label_26405c;
        case 0x264060u: goto label_264060;
        case 0x264064u: goto label_264064;
        case 0x264068u: goto label_264068;
        case 0x26406cu: goto label_26406c;
        case 0x264070u: goto label_264070;
        case 0x264074u: goto label_264074;
        case 0x264078u: goto label_264078;
        case 0x26407cu: goto label_26407c;
        case 0x264080u: goto label_264080;
        case 0x264084u: goto label_264084;
        case 0x264088u: goto label_264088;
        case 0x26408cu: goto label_26408c;
        case 0x264090u: goto label_264090;
        case 0x264094u: goto label_264094;
        case 0x264098u: goto label_264098;
        case 0x26409cu: goto label_26409c;
        case 0x2640a0u: goto label_2640a0;
        case 0x2640a4u: goto label_2640a4;
        case 0x2640a8u: goto label_2640a8;
        case 0x2640acu: goto label_2640ac;
        case 0x2640b0u: goto label_2640b0;
        case 0x2640b4u: goto label_2640b4;
        case 0x2640b8u: goto label_2640b8;
        case 0x2640bcu: goto label_2640bc;
        case 0x2640c0u: goto label_2640c0;
        case 0x2640c4u: goto label_2640c4;
        case 0x2640c8u: goto label_2640c8;
        case 0x2640ccu: goto label_2640cc;
        case 0x2640d0u: goto label_2640d0;
        case 0x2640d4u: goto label_2640d4;
        case 0x2640d8u: goto label_2640d8;
        case 0x2640dcu: goto label_2640dc;
        case 0x2640e0u: goto label_2640e0;
        case 0x2640e4u: goto label_2640e4;
        case 0x2640e8u: goto label_2640e8;
        case 0x2640ecu: goto label_2640ec;
        case 0x2640f0u: goto label_2640f0;
        case 0x2640f4u: goto label_2640f4;
        case 0x2640f8u: goto label_2640f8;
        case 0x2640fcu: goto label_2640fc;
        case 0x264100u: goto label_264100;
        case 0x264104u: goto label_264104;
        case 0x264108u: goto label_264108;
        case 0x26410cu: goto label_26410c;
        case 0x264110u: goto label_264110;
        case 0x264114u: goto label_264114;
        case 0x264118u: goto label_264118;
        case 0x26411cu: goto label_26411c;
        case 0x264120u: goto label_264120;
        case 0x264124u: goto label_264124;
        case 0x264128u: goto label_264128;
        case 0x26412cu: goto label_26412c;
        case 0x264130u: goto label_264130;
        case 0x264134u: goto label_264134;
        case 0x264138u: goto label_264138;
        case 0x26413cu: goto label_26413c;
        case 0x264140u: goto label_264140;
        case 0x264144u: goto label_264144;
        case 0x264148u: goto label_264148;
        case 0x26414cu: goto label_26414c;
        case 0x264150u: goto label_264150;
        case 0x264154u: goto label_264154;
        case 0x264158u: goto label_264158;
        case 0x26415cu: goto label_26415c;
        case 0x264160u: goto label_264160;
        case 0x264164u: goto label_264164;
        case 0x264168u: goto label_264168;
        case 0x26416cu: goto label_26416c;
        case 0x264170u: goto label_264170;
        case 0x264174u: goto label_264174;
        default: break;
    }

    ctx->pc = 0x263eb8u;

label_263eb8:
    // 0x263eb8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x263eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_263ebc:
    // 0x263ebc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x263ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_263ec0:
    // 0x263ec0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x263ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_263ec4:
    // 0x263ec4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x263ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_263ec8:
    // 0x263ec8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x263ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_263ecc:
    // 0x263ecc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x263eccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_263ed0:
    // 0x263ed0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x263ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_263ed4:
    // 0x263ed4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x263ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_263ed8:
    // 0x263ed8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x263ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_263edc:
    // 0x263edc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x263edcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_263ee0:
    // 0x263ee0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x263ee0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_263ee4:
    // 0x263ee4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x263ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_263ee8:
    // 0x263ee8: 0x8e2600d4  lw          $a2, 0xD4($s1)
    ctx->pc = 0x263ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_263eec:
    // 0x263eec: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x263eecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_263ef0:
    // 0x263ef0: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x263ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_263ef4:
    // 0x263ef4: 0x8cd20074  lw          $s2, 0x74($a2)
    ctx->pc = 0x263ef4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_263ef8:
    // 0x263ef8: 0x60f809  jalr        $v1
label_263efc:
    if (ctx->pc == 0x263EFCu) {
        ctx->pc = 0x263EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263EF8u;
        // 0x263efc: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263F00u;
        goto label_263f00;
    }
    ctx->pc = 0x263EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x263F00u);
        ctx->pc = 0x263EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263EF8u;
        // 0x263efc: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263EF8u, 0x263F00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x263F00u;
label_263f00:
    // 0x263f00: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x263f00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_263f04:
    // 0x263f04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x263f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_263f08:
    // 0x263f08: 0xc088ee6  jal         func_223B98
label_263f0c:
    if (ctx->pc == 0x263F0Cu) {
        ctx->pc = 0x263F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263F08u;
        // 0x263f0c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263F10u;
        goto label_263f10;
    }
    ctx->pc = 0x263F08u;
    SET_GPR_U32(ctx, 31, 0x263F10u);
    ctx->pc = 0x263F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263F08u;
    // 0x263f0c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x263F08u, 0x263F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263F10u;
label_263f10:
    // 0x263f10: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_263f14:
    if (ctx->pc == 0x263F14u) {
        ctx->pc = 0x263F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263F10u;
        // 0x263f14: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263F18u;
        goto label_263f18;
    }
    ctx->pc = 0x263F10u;
    {
        const bool branch_taken_0x263f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263f10) {
            ctx->pc = 0x263F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263F10u;
            // 0x263f14: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263F38u;
            goto label_263f38;
        }
    }
    ctx->pc = 0x263F18u;
label_263f18:
    // 0x263f18: 0xc095018  jal         func_254060
label_263f1c:
    if (ctx->pc == 0x263F1Cu) {
        ctx->pc = 0x263F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263F18u;
        // 0x263f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263F20u;
        goto label_263f20;
    }
    ctx->pc = 0x263F18u;
    SET_GPR_U32(ctx, 31, 0x263F20u);
    ctx->pc = 0x263F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263F18u;
    // 0x263f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x263F18u, 0x263F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263F20u;
label_263f20:
    // 0x263f20: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x263f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_263f24:
    // 0x263f24: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_263f28:
    if (ctx->pc == 0x263F28u) {
        ctx->pc = 0x263F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263F24u;
        // 0x263f28: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263F2Cu;
        goto label_263f2c;
    }
    ctx->pc = 0x263F24u;
    {
        const bool branch_taken_0x263f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x263f24) {
            ctx->pc = 0x263F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263F24u;
            // 0x263f28: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263F38u;
            goto label_263f38;
        }
    }
    ctx->pc = 0x263F2Cu;
label_263f2c:
    // 0x263f2c: 0xc094fca  jal         func_253F28
label_263f30:
    if (ctx->pc == 0x263F30u) {
        ctx->pc = 0x263F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263F2Cu;
        // 0x263f30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263F34u;
        goto label_263f34;
    }
    ctx->pc = 0x263F2Cu;
    SET_GPR_U32(ctx, 31, 0x263F34u);
    ctx->pc = 0x263F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263F2Cu;
    // 0x263f30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x263F2Cu, 0x263F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263F34u;
label_263f34:
    // 0x263f34: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x263f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_263f38:
    // 0x263f38: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x263f38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_263f3c:
    // 0x263f3c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x263f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_263f40:
    // 0x263f40: 0x40f809  jalr        $v0
label_263f44:
    if (ctx->pc == 0x263F44u) {
        ctx->pc = 0x263F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263F40u;
        // 0x263f44: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263F48u;
        goto label_263f48;
    }
    ctx->pc = 0x263F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x263F48u);
        ctx->pc = 0x263F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263F40u;
        // 0x263f44: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263F40u, 0x263F48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x263F48u;
label_263f48:
    // 0x263f48: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_263f4c:
    if (ctx->pc == 0x263F4Cu) {
        ctx->pc = 0x263F50u;
        goto label_263f50;
    }
    ctx->pc = 0x263F48u;
    {
        const bool branch_taken_0x263f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263f48) {
            ctx->pc = 0x263FA0u;
            goto label_263fa0;
        }
    }
    ctx->pc = 0x263F50u;
label_263f50:
    // 0x263f50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x263f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_263f54:
    // 0x263f54: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x263f54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_263f58:
    // 0x263f58: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x263f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_263f5c:
    // 0x263f5c: 0x40f809  jalr        $v0
label_263f60:
    if (ctx->pc == 0x263F60u) {
        ctx->pc = 0x263F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263F5Cu;
        // 0x263f60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263F64u;
        goto label_263f64;
    }
    ctx->pc = 0x263F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x263F64u);
        ctx->pc = 0x263F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263F5Cu;
        // 0x263f60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263F5Cu, 0x263F64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x263F64u;
label_263f64:
    // 0x263f64: 0x8c480074  lw          $t0, 0x74($v0)
    ctx->pc = 0x263f64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_263f68:
    // 0x263f68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x263f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_263f6c:
    // 0x263f6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x263f6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_263f70:
    // 0x263f70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x263f70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_263f74:
    // 0x263f74: 0x85040028  lh          $a0, 0x28($t0)
    ctx->pc = 0x263f74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 40)));
label_263f78:
    // 0x263f78: 0x8d03002c  lw          $v1, 0x2C($t0)
    ctx->pc = 0x263f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
label_263f7c:
    // 0x263f7c: 0x60f809  jalr        $v1
label_263f80:
    if (ctx->pc == 0x263F80u) {
        ctx->pc = 0x263F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263F7Cu;
        // 0x263f80: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263F84u;
        goto label_263f84;
    }
    ctx->pc = 0x263F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x263F84u);
        ctx->pc = 0x263F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263F7Cu;
        // 0x263f80: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263F7Cu, 0x263F84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x263F84u;
label_263f84:
    // 0x263f84: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x263f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_263f88:
    // 0x263f88: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x263f88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_263f8c:
    // 0x263f8c: 0x8c650024  lw          $a1, 0x24($v1)
    ctx->pc = 0x263f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_263f90:
    // 0x263f90: 0xa0f809  jalr        $a1
label_263f94:
    if (ctx->pc == 0x263F94u) {
        ctx->pc = 0x263F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263F90u;
        // 0x263f94: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263F98u;
        goto label_263f98;
    }
    ctx->pc = 0x263F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x263F98u);
        ctx->pc = 0x263F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263F90u;
        // 0x263f94: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263F90u, 0x263F98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x263F98u;
label_263f98:
    // 0x263f98: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x263f98u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_263f9c:
    // 0x263f9c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x263f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_263fa0:
    // 0x263fa0: 0xc0e2612  jal         func_389848
label_263fa4:
    if (ctx->pc == 0x263FA4u) {
        ctx->pc = 0x263FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263FA0u;
        // 0x263fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263FA8u;
        goto label_263fa8;
    }
    ctx->pc = 0x263FA0u;
    SET_GPR_U32(ctx, 31, 0x263FA8u);
    ctx->pc = 0x263FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263FA0u;
    // 0x263fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x263FA0u, 0x263FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263FA8u;
label_263fa8:
    // 0x263fa8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_263fac:
    if (ctx->pc == 0x263FACu) {
        ctx->pc = 0x263FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263FA8u;
        // 0x263fac: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263FB0u;
        goto label_263fb0;
    }
    ctx->pc = 0x263FA8u;
    {
        const bool branch_taken_0x263fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263FA8u;
        // 0x263fac: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263fa8) {
            ctx->pc = 0x264028u;
            goto label_264028;
        }
    }
    ctx->pc = 0x263FB0u;
label_263fb0:
    // 0x263fb0: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x263fb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_263fb4:
    // 0x263fb4: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x263fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_263fb8:
    // 0x263fb8: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x263fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_263fbc:
    // 0x263fbc: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x263fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_263fc0:
    // 0x263fc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x263fc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_263fc4:
    // 0x263fc4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x263fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_263fc8:
    // 0x263fc8: 0x78a300e0  lq          $v1, 0xE0($a1)
    ctx->pc = 0x263fc8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 224)));
label_263fcc:
    // 0x263fcc: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x263fccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_263fd0:
    // 0x263fd0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x263fd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_263fd4:
    // 0x263fd4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x263fd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_263fd8:
    // 0x263fd8: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x263fd8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_263fdc:
    // 0x263fdc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x263fdcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_263fe0:
    // 0x263fe0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x263fe0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_263fe4:
    // 0x263fe4: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x263fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_263fe8:
    // 0x263fe8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x263fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_263fec:
    // 0x263fec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x263fecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_263ff0:
    // 0x263ff0: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x263ff0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_263ff4:
    // 0x263ff4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x263ff4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_263ff8:
    // 0x263ff8: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x263ff8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_263ffc:
    // 0x263ffc: 0x4a0003bf  vwaitq
    ctx->pc = 0x263ffcu;
    // VWAITQ (Q already resolved in this runtime)
label_264000:
    // 0x264000: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x264000u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_264004:
    // 0x264004: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x264004u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_264008:
    // 0x264008: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x264008u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26400c:
    // 0x26400c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x26400cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_264010:
    // 0x264010: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x264010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_264014:
    // 0x264014: 0x0  nop
    ctx->pc = 0x264014u;
    // NOP
label_264018:
    // 0x264018: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_26401c:
    if (ctx->pc == 0x26401Cu) {
        ctx->pc = 0x26401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264018u;
        // 0x26401c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264020u;
        goto label_264020;
    }
    ctx->pc = 0x264018u;
    {
        const bool branch_taken_0x264018 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264018u;
        // 0x26401c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264018) {
            ctx->pc = 0x264084u;
            goto label_264084;
        }
    }
    ctx->pc = 0x264020u;
label_264020:
    // 0x264020: 0x10000018  b           . + 4 + (0x18 << 2)
label_264024:
    if (ctx->pc == 0x264024u) {
        ctx->pc = 0x264024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264020u;
        // 0x264024: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264028u;
        goto label_264028;
    }
    ctx->pc = 0x264020u;
    {
        const bool branch_taken_0x264020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264020u;
        // 0x264024: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264020) {
            ctx->pc = 0x264084u;
            goto label_264084;
        }
    }
    ctx->pc = 0x264028u;
label_264028:
    // 0x264028: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x264028u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_26402c:
    // 0x26402c: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x26402cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_264030:
    // 0x264030: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x264030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_264034:
    // 0x264034: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x264034u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_264038:
    // 0x264038: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x264038u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_26403c:
    // 0x26403c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x26403cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_264040:
    // 0x264040: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x264040u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_264044:
    // 0x264044: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x264044u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_264048:
    // 0x264048: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x264048u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_26404c:
    // 0x26404c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x26404cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_264050:
    // 0x264050: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x264050u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_264054:
    // 0x264054: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x264054u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_264058:
    // 0x264058: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x264058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_26405c:
    // 0x26405c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x26405cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_264060:
    // 0x264060: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x264060u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_264064:
    // 0x264064: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x264064u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_264068:
    // 0x264068: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x264068u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_26406c:
    // 0x26406c: 0x4a0003bf  vwaitq
    ctx->pc = 0x26406cu;
    // VWAITQ (Q already resolved in this runtime)
label_264070:
    // 0x264070: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x264070u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_264074:
    // 0x264074: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x264074u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_264078:
    // 0x264078: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x264078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26407c:
    // 0x26407c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x26407cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_264080:
    // 0x264080: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x264080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_264084:
    // 0x264084: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x264084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_264088:
    // 0x264088: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x264088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26408c:
    // 0x26408c: 0x0  nop
    ctx->pc = 0x26408cu;
    // NOP
label_264090:
    // 0x264090: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x264090u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_264094:
    // 0x264094: 0x0  nop
    ctx->pc = 0x264094u;
    // NOP
label_264098:
    // 0x264098: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_26409c:
    if (ctx->pc == 0x26409Cu) {
        ctx->pc = 0x2640A0u;
        goto label_2640a0;
    }
    ctx->pc = 0x264098u;
    {
        const bool branch_taken_0x264098 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x264098) {
            ctx->pc = 0x2640A8u;
            goto label_2640a8;
        }
    }
    ctx->pc = 0x2640A0u;
label_2640a0:
    // 0x2640a0: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x2640a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2640a4:
    // 0x2640a4: 0x8c52006c  lw          $s2, 0x6C($v0)
    ctx->pc = 0x2640a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_2640a8:
    // 0x2640a8: 0x12600027  beqz        $s3, . + 4 + (0x27 << 2)
label_2640ac:
    if (ctx->pc == 0x2640ACu) {
        ctx->pc = 0x2640ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2640A8u;
        // 0x2640ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2640B0u;
        goto label_2640b0;
    }
    ctx->pc = 0x2640A8u;
    {
        const bool branch_taken_0x2640a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2640ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2640A8u;
        // 0x2640ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2640a8) {
            ctx->pc = 0x264148u;
            goto label_264148;
        }
    }
    ctx->pc = 0x2640B0u;
label_2640b0:
    // 0x2640b0: 0xc095142  jal         func_254508
label_2640b4:
    if (ctx->pc == 0x2640B4u) {
        ctx->pc = 0x2640B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2640B0u;
        // 0x2640b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2640B8u;
        goto label_2640b8;
    }
    ctx->pc = 0x2640B0u;
    SET_GPR_U32(ctx, 31, 0x2640B8u);
    ctx->pc = 0x2640B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2640B0u;
    // 0x2640b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254508u, 0x2640B0u, 0x2640B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2640B8u;
label_2640b8:
    // 0x2640b8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2640b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2640bc:
    // 0x2640bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2640bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2640c0:
    // 0x2640c0: 0x0  nop
    ctx->pc = 0x2640c0u;
    // NOP
label_2640c4:
    // 0x2640c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2640c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2640c8:
    // 0x2640c8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2640c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2640cc:
    // 0x2640cc: 0x0  nop
    ctx->pc = 0x2640ccu;
    // NOP
label_2640d0:
    // 0x2640d0: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_2640d4:
    if (ctx->pc == 0x2640D4u) {
        ctx->pc = 0x2640D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2640D0u;
        // 0x2640d4: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2640D8u;
        goto label_2640d8;
    }
    ctx->pc = 0x2640D0u;
    {
        const bool branch_taken_0x2640d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2640D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2640D0u;
        // 0x2640d4: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2640d0) {
            ctx->pc = 0x26412Cu;
            goto label_26412c;
        }
    }
    ctx->pc = 0x2640D8u;
label_2640d8:
    // 0x2640d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2640d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2640dc:
    // 0x2640dc: 0xc095128  jal         func_2544A0
label_2640e0:
    if (ctx->pc == 0x2640E0u) {
        ctx->pc = 0x2640E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2640DCu;
        // 0x2640e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2640E4u;
        goto label_2640e4;
    }
    ctx->pc = 0x2640DCu;
    SET_GPR_U32(ctx, 31, 0x2640E4u);
    ctx->pc = 0x2640E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2640DCu;
    // 0x2640e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x2640DCu, 0x2640E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2640E4u;
label_2640e4:
    // 0x2640e4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2640e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2640e8:
    // 0x2640e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2640e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2640ec:
    // 0x2640ec: 0x0  nop
    ctx->pc = 0x2640ecu;
    // NOP
label_2640f0:
    // 0x2640f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2640f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2640f4:
    // 0x2640f4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2640f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2640f8:
    // 0x2640f8: 0x0  nop
    ctx->pc = 0x2640f8u;
    // NOP
label_2640fc:
    // 0x2640fc: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_264100:
    if (ctx->pc == 0x264100u) {
        ctx->pc = 0x264100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2640FCu;
        // 0x264100: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264104u;
        goto label_264104;
    }
    ctx->pc = 0x2640FCu;
    {
        const bool branch_taken_0x2640fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x264100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2640FCu;
        // 0x264100: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2640fc) {
            ctx->pc = 0x26412Cu;
            goto label_26412c;
        }
    }
    ctx->pc = 0x264104u;
label_264104:
    // 0x264104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x264104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_264108:
    // 0x264108: 0xc040596  jal         func_101658
label_26410c:
    if (ctx->pc == 0x26410Cu) {
        ctx->pc = 0x26410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264108u;
        // 0x26410c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264110u;
        goto label_264110;
    }
    ctx->pc = 0x264108u;
    SET_GPR_U32(ctx, 31, 0x264110u);
    ctx->pc = 0x26410Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264108u;
    // 0x26410c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101658u, 0x264108u, 0x264110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264110u;
label_264110:
    // 0x264110: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x264110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_264114:
    // 0x264114: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x264114u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_264118:
    // 0x264118: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x264118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26411c:
    // 0x26411c: 0xc09da04  jal         func_276810
label_264120:
    if (ctx->pc == 0x264120u) {
        ctx->pc = 0x264120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26411Cu;
        // 0x264120: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264124u;
        goto label_264124;
    }
    ctx->pc = 0x26411Cu;
    SET_GPR_U32(ctx, 31, 0x264124u);
    ctx->pc = 0x264120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26411Cu;
    // 0x264120: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276810u, 0x26411Cu, 0x264124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264124u;
label_264124:
    // 0x264124: 0x10000009  b           . + 4 + (0x9 << 2)
label_264128:
    if (ctx->pc == 0x264128u) {
        ctx->pc = 0x264128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264124u;
        // 0x264128: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26412Cu;
        goto label_26412c;
    }
    ctx->pc = 0x264124u;
    {
        const bool branch_taken_0x264124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264124u;
        // 0x264128: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264124) {
            ctx->pc = 0x26414Cu;
            goto label_26414c;
        }
    }
    ctx->pc = 0x26412Cu;
label_26412c:
    // 0x26412c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26412cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_264130:
    // 0x264130: 0xc040596  jal         func_101658
label_264134:
    if (ctx->pc == 0x264134u) {
        ctx->pc = 0x264134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264130u;
        // 0x264134: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264138u;
        goto label_264138;
    }
    ctx->pc = 0x264130u;
    SET_GPR_U32(ctx, 31, 0x264138u);
    ctx->pc = 0x264134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264130u;
    // 0x264134: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101658u, 0x264130u, 0x264138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264138u;
label_264138:
    // 0x264138: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x264138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26413c:
    // 0x26413c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x26413cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_264140:
    // 0x264140: 0xc088708  jal         func_221C20
label_264144:
    if (ctx->pc == 0x264144u) {
        ctx->pc = 0x264144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264140u;
        // 0x264144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264148u;
        goto label_264148;
    }
    ctx->pc = 0x264140u;
    SET_GPR_U32(ctx, 31, 0x264148u);
    ctx->pc = 0x264144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264140u;
    // 0x264144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C20u, 0x264140u, 0x264148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264148u;
label_264148:
    // 0x264148: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x264148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26414c:
    // 0x26414c: 0xc0988da  jal         func_262368
label_264150:
    if (ctx->pc == 0x264150u) {
        ctx->pc = 0x264150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26414Cu;
        // 0x264150: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264154u;
        goto label_264154;
    }
    ctx->pc = 0x26414Cu;
    SET_GPR_U32(ctx, 31, 0x264154u);
    ctx->pc = 0x264150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26414Cu;
    // 0x264150: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262368u, 0x26414Cu, 0x264154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264154u;
label_264154:
    // 0x264154: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x264154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_264158:
    // 0x264158: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x264158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_26415c:
    // 0x26415c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x26415cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_264160:
    // 0x264160: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x264160u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_264164:
    // 0x264164: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x264164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_264168:
    // 0x264168: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x264168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_26416c:
    // 0x26416c: 0x3e00008  jr          $ra
label_264170:
    if (ctx->pc == 0x264170u) {
        ctx->pc = 0x264170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26416Cu;
        // 0x264170: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264174u;
        goto label_264174;
    }
    ctx->pc = 0x26416Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26416Cu;
        // 0x264170: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26416Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264174u;
label_264174:
    // 0x264174: 0x0  nop
    ctx->pc = 0x264174u;
    // NOP
    ctx->pc = 0x264178u;
}
