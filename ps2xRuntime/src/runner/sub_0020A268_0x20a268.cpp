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

// Function: sub_0020A268
// Address: 0x20a268 - 0x20a408
void sub_0020A268_0x20a268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A268_0x20a268");
#endif

    switch (ctx->pc) {
        case 0x20a268u: goto label_20a268;
        case 0x20a26cu: goto label_20a26c;
        case 0x20a270u: goto label_20a270;
        case 0x20a274u: goto label_20a274;
        case 0x20a278u: goto label_20a278;
        case 0x20a27cu: goto label_20a27c;
        case 0x20a280u: goto label_20a280;
        case 0x20a284u: goto label_20a284;
        case 0x20a288u: goto label_20a288;
        case 0x20a28cu: goto label_20a28c;
        case 0x20a290u: goto label_20a290;
        case 0x20a294u: goto label_20a294;
        case 0x20a298u: goto label_20a298;
        case 0x20a29cu: goto label_20a29c;
        case 0x20a2a0u: goto label_20a2a0;
        case 0x20a2a4u: goto label_20a2a4;
        case 0x20a2a8u: goto label_20a2a8;
        case 0x20a2acu: goto label_20a2ac;
        case 0x20a2b0u: goto label_20a2b0;
        case 0x20a2b4u: goto label_20a2b4;
        case 0x20a2b8u: goto label_20a2b8;
        case 0x20a2bcu: goto label_20a2bc;
        case 0x20a2c0u: goto label_20a2c0;
        case 0x20a2c4u: goto label_20a2c4;
        case 0x20a2c8u: goto label_20a2c8;
        case 0x20a2ccu: goto label_20a2cc;
        case 0x20a2d0u: goto label_20a2d0;
        case 0x20a2d4u: goto label_20a2d4;
        case 0x20a2d8u: goto label_20a2d8;
        case 0x20a2dcu: goto label_20a2dc;
        case 0x20a2e0u: goto label_20a2e0;
        case 0x20a2e4u: goto label_20a2e4;
        case 0x20a2e8u: goto label_20a2e8;
        case 0x20a2ecu: goto label_20a2ec;
        case 0x20a2f0u: goto label_20a2f0;
        case 0x20a2f4u: goto label_20a2f4;
        case 0x20a2f8u: goto label_20a2f8;
        case 0x20a2fcu: goto label_20a2fc;
        case 0x20a300u: goto label_20a300;
        case 0x20a304u: goto label_20a304;
        case 0x20a308u: goto label_20a308;
        case 0x20a30cu: goto label_20a30c;
        case 0x20a310u: goto label_20a310;
        case 0x20a314u: goto label_20a314;
        case 0x20a318u: goto label_20a318;
        case 0x20a31cu: goto label_20a31c;
        case 0x20a320u: goto label_20a320;
        case 0x20a324u: goto label_20a324;
        case 0x20a328u: goto label_20a328;
        case 0x20a32cu: goto label_20a32c;
        case 0x20a330u: goto label_20a330;
        case 0x20a334u: goto label_20a334;
        case 0x20a338u: goto label_20a338;
        case 0x20a33cu: goto label_20a33c;
        case 0x20a340u: goto label_20a340;
        case 0x20a344u: goto label_20a344;
        case 0x20a348u: goto label_20a348;
        case 0x20a34cu: goto label_20a34c;
        case 0x20a350u: goto label_20a350;
        case 0x20a354u: goto label_20a354;
        case 0x20a358u: goto label_20a358;
        case 0x20a35cu: goto label_20a35c;
        case 0x20a360u: goto label_20a360;
        case 0x20a364u: goto label_20a364;
        case 0x20a368u: goto label_20a368;
        case 0x20a36cu: goto label_20a36c;
        case 0x20a370u: goto label_20a370;
        case 0x20a374u: goto label_20a374;
        case 0x20a378u: goto label_20a378;
        case 0x20a37cu: goto label_20a37c;
        case 0x20a380u: goto label_20a380;
        case 0x20a384u: goto label_20a384;
        case 0x20a388u: goto label_20a388;
        case 0x20a38cu: goto label_20a38c;
        case 0x20a390u: goto label_20a390;
        case 0x20a394u: goto label_20a394;
        case 0x20a398u: goto label_20a398;
        case 0x20a39cu: goto label_20a39c;
        case 0x20a3a0u: goto label_20a3a0;
        case 0x20a3a4u: goto label_20a3a4;
        case 0x20a3a8u: goto label_20a3a8;
        case 0x20a3acu: goto label_20a3ac;
        case 0x20a3b0u: goto label_20a3b0;
        case 0x20a3b4u: goto label_20a3b4;
        case 0x20a3b8u: goto label_20a3b8;
        case 0x20a3bcu: goto label_20a3bc;
        case 0x20a3c0u: goto label_20a3c0;
        case 0x20a3c4u: goto label_20a3c4;
        case 0x20a3c8u: goto label_20a3c8;
        case 0x20a3ccu: goto label_20a3cc;
        case 0x20a3d0u: goto label_20a3d0;
        case 0x20a3d4u: goto label_20a3d4;
        case 0x20a3d8u: goto label_20a3d8;
        case 0x20a3dcu: goto label_20a3dc;
        case 0x20a3e0u: goto label_20a3e0;
        case 0x20a3e4u: goto label_20a3e4;
        case 0x20a3e8u: goto label_20a3e8;
        case 0x20a3ecu: goto label_20a3ec;
        case 0x20a3f0u: goto label_20a3f0;
        case 0x20a3f4u: goto label_20a3f4;
        case 0x20a3f8u: goto label_20a3f8;
        case 0x20a3fcu: goto label_20a3fc;
        case 0x20a400u: goto label_20a400;
        case 0x20a404u: goto label_20a404;
        default: break;
    }

    ctx->pc = 0x20a268u;

label_20a268:
    // 0x20a268: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20a268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20a26c:
    // 0x20a26c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x20a26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_20a270:
    // 0x20a270: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20a270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_20a274:
    // 0x20a274: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20a274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20a278:
    // 0x20a278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20a278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20a27c:
    // 0x20a27c: 0x8c43deb8  lw          $v1, -0x2148($v0)
    ctx->pc = 0x20a27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958776)));
label_20a280:
    // 0x20a280: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20a280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20a284:
    // 0x20a284: 0xc46001d8  lwc1        $f0, 0x1D8($v1)
    ctx->pc = 0x20a284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20a288:
    // 0x20a288: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x20a288u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20a28c:
    // 0x20a28c: 0x0  nop
    ctx->pc = 0x20a28cu;
    // NOP
label_20a290:
    // 0x20a290: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_20a294:
    if (ctx->pc == 0x20A294u) {
        ctx->pc = 0x20A294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A290u;
        // 0x20a294: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A298u;
        goto label_20a298;
    }
    ctx->pc = 0x20A290u;
    {
        const bool branch_taken_0x20a290 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20A294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A290u;
        // 0x20a294: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a290) {
            ctx->pc = 0x20A2A0u;
            goto label_20a2a0;
        }
    }
    ctx->pc = 0x20A298u;
label_20a298:
    // 0x20a298: 0x10000056  b           . + 4 + (0x56 << 2)
label_20a29c:
    if (ctx->pc == 0x20A29Cu) {
        ctx->pc = 0x20A29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A298u;
        // 0x20a29c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A2A0u;
        goto label_20a2a0;
    }
    ctx->pc = 0x20A298u;
    {
        const bool branch_taken_0x20a298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A298u;
        // 0x20a29c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a298) {
            ctx->pc = 0x20A3F4u;
            goto label_20a3f4;
        }
    }
    ctx->pc = 0x20A2A0u;
label_20a2a0:
    // 0x20a2a0: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x20a2a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20a2a4:
    // 0x20a2a4: 0x14b10009  bne         $a1, $s1, . + 4 + (0x9 << 2)
label_20a2a8:
    if (ctx->pc == 0x20A2A8u) {
        ctx->pc = 0x20A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2A4u;
        // 0x20a2a8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A2ACu;
        goto label_20a2ac;
    }
    ctx->pc = 0x20A2A4u;
    {
        const bool branch_taken_0x20a2a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 17));
        ctx->pc = 0x20A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2A4u;
        // 0x20a2a8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a2a4) {
            ctx->pc = 0x20A2CCu;
            goto label_20a2cc;
        }
    }
    ctx->pc = 0x20A2ACu;
label_20a2ac:
    // 0x20a2ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x20a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_20a2b0:
    // 0x20a2b0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x20a2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20a2b4:
    // 0x20a2b4: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x20a2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_20a2b8:
    // 0x20a2b8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x20a2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_20a2bc:
    // 0x20a2bc: 0xc043f0c  jal         func_10FC30
label_20a2c0:
    if (ctx->pc == 0x20A2C0u) {
        ctx->pc = 0x20A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2BCu;
        // 0x20a2c0: 0xae030074  sw          $v1, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A2C4u;
        goto label_20a2c4;
    }
    ctx->pc = 0x20A2BCu;
    SET_GPR_U32(ctx, 31, 0x20A2C4u);
    ctx->pc = 0x20A2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A2BCu;
    // 0x20a2c0: 0xae030074  sw          $v1, 0x74($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x20A2BCu, 0x20A2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A2C4u;
label_20a2c4:
    // 0x20a2c4: 0x1000004b  b           . + 4 + (0x4B << 2)
label_20a2c8:
    if (ctx->pc == 0x20A2C8u) {
        ctx->pc = 0x20A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2C4u;
        // 0x20a2c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A2CCu;
        goto label_20a2cc;
    }
    ctx->pc = 0x20A2C4u;
    {
        const bool branch_taken_0x20a2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2C4u;
        // 0x20a2c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a2c4) {
            ctx->pc = 0x20A3F4u;
            goto label_20a3f4;
        }
    }
    ctx->pc = 0x20A2CCu;
label_20a2cc:
    // 0x20a2cc: 0x14a20049  bne         $a1, $v0, . + 4 + (0x49 << 2)
label_20a2d0:
    if (ctx->pc == 0x20A2D0u) {
        ctx->pc = 0x20A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2CCu;
        // 0x20a2d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A2D4u;
        goto label_20a2d4;
    }
    ctx->pc = 0x20A2CCu;
    {
        const bool branch_taken_0x20a2cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x20A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2CCu;
        // 0x20a2d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a2cc) {
            ctx->pc = 0x20A3F4u;
            goto label_20a3f4;
        }
    }
    ctx->pc = 0x20A2D4u;
label_20a2d4:
    // 0x20a2d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x20a2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_20a2d8:
    // 0x20a2d8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x20a2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_20a2dc:
    // 0x20a2dc: 0xc043f0c  jal         func_10FC30
label_20a2e0:
    if (ctx->pc == 0x20A2E0u) {
        ctx->pc = 0x20A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2DCu;
        // 0x20a2e0: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A2E4u;
        goto label_20a2e4;
    }
    ctx->pc = 0x20A2DCu;
    SET_GPR_U32(ctx, 31, 0x20A2E4u);
    ctx->pc = 0x20A2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A2DCu;
    // 0x20a2e0: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x20A2DCu, 0x20A2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A2E4u;
label_20a2e4:
    // 0x20a2e4: 0xc0750fa  jal         func_1D43E8
label_20a2e8:
    if (ctx->pc == 0x20A2E8u) {
        ctx->pc = 0x20A2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2E4u;
        // 0x20a2e8: 0x8e04008c  lw          $a0, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A2ECu;
        goto label_20a2ec;
    }
    ctx->pc = 0x20A2E4u;
    SET_GPR_U32(ctx, 31, 0x20A2ECu);
    ctx->pc = 0x20A2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A2E4u;
    // 0x20a2e8: 0x8e04008c  lw          $a0, 0x8C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43E8u, 0x20A2E4u, 0x20A2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A2ECu;
label_20a2ec:
    // 0x20a2ec: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x20a2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_20a2f0:
    // 0x20a2f0: 0xc0750fc  jal         func_1D43F0
label_20a2f4:
    if (ctx->pc == 0x20A2F4u) {
        ctx->pc = 0x20A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2F0u;
        // 0x20a2f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A2F8u;
        goto label_20a2f8;
    }
    ctx->pc = 0x20A2F0u;
    SET_GPR_U32(ctx, 31, 0x20A2F8u);
    ctx->pc = 0x20A2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A2F0u;
    // 0x20a2f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43F0u, 0x20A2F0u, 0x20A2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A2F8u;
label_20a2f8:
    // 0x20a2f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20a2f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20a2fc:
    // 0x20a2fc: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_20a300:
    if (ctx->pc == 0x20A300u) {
        ctx->pc = 0x20A300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2FCu;
        // 0x20a300: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A304u;
        goto label_20a304;
    }
    ctx->pc = 0x20A2FCu;
    {
        const bool branch_taken_0x20a2fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2FCu;
        // 0x20a300: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a2fc) {
            ctx->pc = 0x20A348u;
            goto label_20a348;
        }
    }
    ctx->pc = 0x20A304u;
label_20a304:
    // 0x20a304: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20a304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a308:
    // 0x20a308: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x20a308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
label_20a30c:
    // 0x20a30c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x20a30cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_20a310:
    // 0x20a310: 0x2445004c  addiu       $a1, $v0, 0x4C
    ctx->pc = 0x20a310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
label_20a314:
    // 0x20a314: 0x0  nop
    ctx->pc = 0x20a314u;
    // NOP
label_20a318:
    // 0x20a318: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20a318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20a31c:
    // 0x20a31c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x20a31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_20a320:
    // 0x20a320: 0x24a50050  addiu       $a1, $a1, 0x50
    ctx->pc = 0x20a320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
label_20a324:
    // 0x20a324: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x20a324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_20a328:
    // 0x20a328: 0x4c1fffb  bgez        $a2, . + 4 + (-0x5 << 2)
label_20a32c:
    if (ctx->pc == 0x20A32Cu) {
        ctx->pc = 0x20A32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A328u;
        // 0x20a32c: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A330u;
        goto label_20a330;
    }
    ctx->pc = 0x20A328u;
    {
        const bool branch_taken_0x20a328 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x20A32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A328u;
        // 0x20a32c: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a328) {
            ctx->pc = 0x20A318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20a318;
        }
    }
    ctx->pc = 0x20A330u;
label_20a330:
    // 0x20a330: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x20a330u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_20a334:
    // 0x20a334: 0x5440ffd8  bnel        $v0, $zero, . + 4 + (-0x28 << 2)
label_20a338:
    if (ctx->pc == 0x20A338u) {
        ctx->pc = 0x20A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A334u;
        // 0x20a338: 0xae000074  sw          $zero, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A33Cu;
        goto label_20a33c;
    }
    ctx->pc = 0x20A334u;
    {
        const bool branch_taken_0x20a334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a334) {
            ctx->pc = 0x20A338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A334u;
            // 0x20a338: 0xae000074  sw          $zero, 0x74($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20a298;
        }
    }
    ctx->pc = 0x20A33Cu;
label_20a33c:
    // 0x20a33c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x20a33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_20a340:
    // 0x20a340: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
label_20a344:
    if (ctx->pc == 0x20A344u) {
        ctx->pc = 0x20A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A340u;
        // 0x20a344: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A348u;
        goto label_20a348;
    }
    ctx->pc = 0x20A340u;
    {
        const bool branch_taken_0x20a340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A340u;
        // 0x20a344: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a340) {
            ctx->pc = 0x20A298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20a298;
        }
    }
    ctx->pc = 0x20A348u;
label_20a348:
    // 0x20a348: 0x14710003  bne         $v1, $s1, . + 4 + (0x3 << 2)
label_20a34c:
    if (ctx->pc == 0x20A34Cu) {
        ctx->pc = 0x20A34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A348u;
        // 0x20a34c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A350u;
        goto label_20a350;
    }
    ctx->pc = 0x20A348u;
    {
        const bool branch_taken_0x20a348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x20A34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A348u;
        // 0x20a34c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a348) {
            ctx->pc = 0x20A358u;
            goto label_20a358;
        }
    }
    ctx->pc = 0x20A350u;
label_20a350:
    // 0x20a350: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
label_20a354:
    if (ctx->pc == 0x20A354u) {
        ctx->pc = 0x20A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A350u;
        // 0x20a354: 0xae030074  sw          $v1, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A358u;
        goto label_20a358;
    }
    ctx->pc = 0x20A350u;
    {
        const bool branch_taken_0x20a350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A350u;
        // 0x20a354: 0xae030074  sw          $v1, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a350) {
            ctx->pc = 0x20A298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20a298;
        }
    }
    ctx->pc = 0x20A358u;
label_20a358:
    // 0x20a358: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_20a35c:
    if (ctx->pc == 0x20A35Cu) {
        ctx->pc = 0x20A35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A358u;
        // 0x20a35c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A360u;
        goto label_20a360;
    }
    ctx->pc = 0x20A358u;
    {
        const bool branch_taken_0x20a358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20A35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A358u;
        // 0x20a35c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a358) {
            ctx->pc = 0x20A3A8u;
            goto label_20a3a8;
        }
    }
    ctx->pc = 0x20A360u;
label_20a360:
    // 0x20a360: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x20a360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20a364:
    // 0x20a364: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x20a364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_20a368:
    // 0x20a368: 0x24a58fe0  addiu       $a1, $a1, -0x7020
    ctx->pc = 0x20a368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938592));
label_20a36c:
    // 0x20a36c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x20a36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_20a370:
    // 0x20a370: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x20a370u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_20a374:
    // 0x20a374: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x20a374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_20a378:
    // 0x20a378: 0x40f809  jalr        $v0
label_20a37c:
    if (ctx->pc == 0x20A37Cu) {
        ctx->pc = 0x20A37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A378u;
        // 0x20a37c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A380u;
        goto label_20a380;
    }
    ctx->pc = 0x20A378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20A380u);
        ctx->pc = 0x20A37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A378u;
        // 0x20a37c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A378u, 0x20A380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A380u;
label_20a380:
    // 0x20a380: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x20a380u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_20a384:
    // 0x20a384: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20a384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a388:
    // 0x20a388: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20a388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a38c:
    // 0x20a38c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x20a38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_20a390:
    // 0x20a390: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x20a390u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_20a394:
    // 0x20a394: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x20a394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_20a398:
    // 0x20a398: 0x60f809  jalr        $v1
label_20a39c:
    if (ctx->pc == 0x20A39Cu) {
        ctx->pc = 0x20A39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A398u;
        // 0x20a39c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A3A0u;
        goto label_20a3a0;
    }
    ctx->pc = 0x20A398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20A3A0u);
        ctx->pc = 0x20A39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A398u;
        // 0x20a39c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A398u, 0x20A3A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A3A0u;
label_20a3a0:
    // 0x20a3a0: 0x10000014  b           . + 4 + (0x14 << 2)
label_20a3a4:
    if (ctx->pc == 0x20A3A4u) {
        ctx->pc = 0x20A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A3A0u;
        // 0x20a3a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A3A8u;
        goto label_20a3a8;
    }
    ctx->pc = 0x20A3A0u;
    {
        const bool branch_taken_0x20a3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A3A0u;
        // 0x20a3a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a3a0) {
            ctx->pc = 0x20A3F4u;
            goto label_20a3f4;
        }
    }
    ctx->pc = 0x20A3A8u;
label_20a3a8:
    // 0x20a3a8: 0xc080fd2  jal         func_203F48
label_20a3ac:
    if (ctx->pc == 0x20A3ACu) {
        ctx->pc = 0x20A3B0u;
        goto label_20a3b0;
    }
    ctx->pc = 0x20A3A8u;
    SET_GPR_U32(ctx, 31, 0x20A3B0u);
    ctx->pc = 0x203F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203F48u, 0x20A3A8u, 0x20A3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A3B0u;
label_20a3b0:
    // 0x20a3b0: 0x1040ffb9  beqz        $v0, . + 4 + (-0x47 << 2)
label_20a3b4:
    if (ctx->pc == 0x20A3B4u) {
        ctx->pc = 0x20A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A3B0u;
        // 0x20a3b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A3B8u;
        goto label_20a3b8;
    }
    ctx->pc = 0x20A3B0u;
    {
        const bool branch_taken_0x20a3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A3B0u;
        // 0x20a3b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a3b0) {
            ctx->pc = 0x20A298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20a298;
        }
    }
    ctx->pc = 0x20A3B8u;
label_20a3b8:
    // 0x20a3b8: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x20a3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_20a3bc:
    // 0x20a3bc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x20a3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_20a3c0:
    // 0x20a3c0: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x20a3c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_20a3c4:
    // 0x20a3c4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x20a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_20a3c8:
    // 0x20a3c8: 0x40f809  jalr        $v0
label_20a3cc:
    if (ctx->pc == 0x20A3CCu) {
        ctx->pc = 0x20A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A3C8u;
        // 0x20a3cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A3D0u;
        goto label_20a3d0;
    }
    ctx->pc = 0x20A3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20A3D0u);
        ctx->pc = 0x20A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A3C8u;
        // 0x20a3cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A3C8u, 0x20A3D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A3D0u;
label_20a3d0:
    // 0x20a3d0: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x20a3d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_20a3d4:
    // 0x20a3d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20a3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a3d8:
    // 0x20a3d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20a3d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a3dc:
    // 0x20a3dc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x20a3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_20a3e0:
    // 0x20a3e0: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x20a3e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_20a3e4:
    // 0x20a3e4: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x20a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_20a3e8:
    // 0x20a3e8: 0x60f809  jalr        $v1
label_20a3ec:
    if (ctx->pc == 0x20A3ECu) {
        ctx->pc = 0x20A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A3E8u;
        // 0x20a3ec: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A3F0u;
        goto label_20a3f0;
    }
    ctx->pc = 0x20A3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20A3F0u);
        ctx->pc = 0x20A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A3E8u;
        // 0x20a3ec: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A3E8u, 0x20A3F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A3F0u;
label_20a3f0:
    // 0x20a3f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20a3f4:
    // 0x20a3f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20a3f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20a3f8:
    // 0x20a3f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20a3f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20a3fc:
    // 0x20a3fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20a3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20a400:
    // 0x20a400: 0x3e00008  jr          $ra
label_20a404:
    if (ctx->pc == 0x20A404u) {
        ctx->pc = 0x20A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A400u;
        // 0x20a404: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A408u;
        goto label_fallthrough_0x20a400;
    }
    ctx->pc = 0x20A400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A400u;
        // 0x20a404: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20a400:
    ctx->pc = 0x20A408u;
}
