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

// Function: sub_0027A070
// Address: 0x27a070 - 0x27a120
void sub_0027A070_0x27a070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A070_0x27a070");
#endif

    switch (ctx->pc) {
        case 0x27a070u: goto label_27a070;
        case 0x27a074u: goto label_27a074;
        case 0x27a078u: goto label_27a078;
        case 0x27a07cu: goto label_27a07c;
        case 0x27a080u: goto label_27a080;
        case 0x27a084u: goto label_27a084;
        case 0x27a088u: goto label_27a088;
        case 0x27a08cu: goto label_27a08c;
        case 0x27a090u: goto label_27a090;
        case 0x27a094u: goto label_27a094;
        case 0x27a098u: goto label_27a098;
        case 0x27a09cu: goto label_27a09c;
        case 0x27a0a0u: goto label_27a0a0;
        case 0x27a0a4u: goto label_27a0a4;
        case 0x27a0a8u: goto label_27a0a8;
        case 0x27a0acu: goto label_27a0ac;
        case 0x27a0b0u: goto label_27a0b0;
        case 0x27a0b4u: goto label_27a0b4;
        case 0x27a0b8u: goto label_27a0b8;
        case 0x27a0bcu: goto label_27a0bc;
        case 0x27a0c0u: goto label_27a0c0;
        case 0x27a0c4u: goto label_27a0c4;
        case 0x27a0c8u: goto label_27a0c8;
        case 0x27a0ccu: goto label_27a0cc;
        case 0x27a0d0u: goto label_27a0d0;
        case 0x27a0d4u: goto label_27a0d4;
        case 0x27a0d8u: goto label_27a0d8;
        case 0x27a0dcu: goto label_27a0dc;
        case 0x27a0e0u: goto label_27a0e0;
        case 0x27a0e4u: goto label_27a0e4;
        case 0x27a0e8u: goto label_27a0e8;
        case 0x27a0ecu: goto label_27a0ec;
        case 0x27a0f0u: goto label_27a0f0;
        case 0x27a0f4u: goto label_27a0f4;
        case 0x27a0f8u: goto label_27a0f8;
        case 0x27a0fcu: goto label_27a0fc;
        case 0x27a100u: goto label_27a100;
        case 0x27a104u: goto label_27a104;
        case 0x27a108u: goto label_27a108;
        case 0x27a10cu: goto label_27a10c;
        case 0x27a110u: goto label_27a110;
        case 0x27a114u: goto label_27a114;
        case 0x27a118u: goto label_27a118;
        case 0x27a11cu: goto label_27a11c;
        default: break;
    }

    ctx->pc = 0x27a070u;

label_27a070:
    // 0x27a070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27a070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_27a074:
    // 0x27a074: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27a074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_27a078:
    // 0x27a078: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27a078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27a07c:
    // 0x27a07c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27a07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_27a080:
    // 0x27a080: 0xc08a61a  jal         func_229868
label_27a084:
    if (ctx->pc == 0x27A084u) {
        ctx->pc = 0x27A084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A080u;
        // 0x27a084: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A088u;
        goto label_27a088;
    }
    ctx->pc = 0x27A080u;
    SET_GPR_U32(ctx, 31, 0x27A088u);
    ctx->pc = 0x27A084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A080u;
    // 0x27a084: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x27A080u, 0x27A088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A088u;
label_27a088:
    // 0x27a088: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27a088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a08c:
    // 0x27a08c: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
label_27a090:
    if (ctx->pc == 0x27A090u) {
        ctx->pc = 0x27A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A08Cu;
        // 0x27a090: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A094u;
        goto label_27a094;
    }
    ctx->pc = 0x27A08Cu;
    {
        const bool branch_taken_0x27a08c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A08Cu;
        // 0x27a090: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a08c) {
            ctx->pc = 0x27A10Cu;
            goto label_27a10c;
        }
    }
    ctx->pc = 0x27A094u;
label_27a094:
    // 0x27a094: 0x5200001e  beql        $s0, $zero, . + 4 + (0x1E << 2)
label_27a098:
    if (ctx->pc == 0x27A098u) {
        ctx->pc = 0x27A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A094u;
        // 0x27a098: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A09Cu;
        goto label_27a09c;
    }
    ctx->pc = 0x27A094u;
    {
        const bool branch_taken_0x27a094 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a094) {
            ctx->pc = 0x27A098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A094u;
            // 0x27a098: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A110u;
            goto label_27a110;
        }
    }
    ctx->pc = 0x27A09Cu;
label_27a09c:
    // 0x27a09c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27a09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27a0a0:
    // 0x27a0a0: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x27a0a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_27a0a4:
    // 0x27a0a4: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x27a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_27a0a8:
    // 0x27a0a8: 0x40f809  jalr        $v0
label_27a0ac:
    if (ctx->pc == 0x27A0ACu) {
        ctx->pc = 0x27A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A0A8u;
        // 0x27a0ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A0B0u;
        goto label_27a0b0;
    }
    ctx->pc = 0x27A0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27A0B0u);
        ctx->pc = 0x27A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A0A8u;
        // 0x27a0ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A0A8u, 0x27A0B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27A0B0u;
label_27a0b0:
    // 0x27a0b0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_27a0b4:
    if (ctx->pc == 0x27A0B4u) {
        ctx->pc = 0x27A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A0B0u;
        // 0x27a0b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A0B8u;
        goto label_27a0b8;
    }
    ctx->pc = 0x27A0B0u;
    {
        const bool branch_taken_0x27a0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A0B0u;
        // 0x27a0b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a0b0) {
            ctx->pc = 0x27A108u;
            goto label_27a108;
        }
    }
    ctx->pc = 0x27A0B8u;
label_27a0b8:
    // 0x27a0b8: 0xc09e42a  jal         func_2790A8
label_27a0bc:
    if (ctx->pc == 0x27A0BCu) {
        ctx->pc = 0x27A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A0B8u;
        // 0x27a0bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A0C0u;
        goto label_27a0c0;
    }
    ctx->pc = 0x27A0B8u;
    SET_GPR_U32(ctx, 31, 0x27A0C0u);
    ctx->pc = 0x27A0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A0B8u;
    // 0x27a0bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2790A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2790A8u, 0x27A0B8u, 0x27A0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A0C0u;
label_27a0c0:
    // 0x27a0c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27a0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_27a0c4:
    // 0x27a0c4: 0xc441096c  lwc1        $f1, 0x96C($v0)
    ctx->pc = 0x27a0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27a0c8:
    // 0x27a0c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27a0c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a0cc:
    // 0x27a0cc: 0x0  nop
    ctx->pc = 0x27a0ccu;
    // NOP
label_27a0d0:
    // 0x27a0d0: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
label_27a0d4:
    if (ctx->pc == 0x27A0D4u) {
        ctx->pc = 0x27A0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A0D0u;
        // 0x27a0d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A0D8u;
        goto label_27a0d8;
    }
    ctx->pc = 0x27A0D0u;
    {
        const bool branch_taken_0x27a0d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a0d0) {
            ctx->pc = 0x27A0D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A0D0u;
            // 0x27a0d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A10Cu;
            goto label_27a10c;
        }
    }
    ctx->pc = 0x27A0D8u;
label_27a0d8:
    // 0x27a0d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27a0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27a0dc:
    // 0x27a0dc: 0xc08a684  jal         func_229A10
label_27a0e0:
    if (ctx->pc == 0x27A0E0u) {
        ctx->pc = 0x27A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A0DCu;
        // 0x27a0e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A0E4u;
        goto label_27a0e4;
    }
    ctx->pc = 0x27A0DCu;
    SET_GPR_U32(ctx, 31, 0x27A0E4u);
    ctx->pc = 0x27A0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A0DCu;
    // 0x27a0e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229A10u, 0x27A0DCu, 0x27A0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A0E4u;
label_27a0e4:
    // 0x27a0e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_27a0e8:
    // 0x27a0e8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x27a0e8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_27a0ec:
    // 0x27a0ec: 0xc4410970  lwc1        $f1, 0x970($v0)
    ctx->pc = 0x27a0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27a0f0:
    // 0x27a0f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27a0f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a0f4:
    // 0x27a0f4: 0x0  nop
    ctx->pc = 0x27a0f4u;
    // NOP
label_27a0f8:
    // 0x27a0f8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_27a0fc:
    if (ctx->pc == 0x27A0FCu) {
        ctx->pc = 0x27A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A0F8u;
        // 0x27a0fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A100u;
        goto label_27a100;
    }
    ctx->pc = 0x27A0F8u;
    {
        const bool branch_taken_0x27a0f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A0F8u;
        // 0x27a0fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a0f8) {
            ctx->pc = 0x27A10Cu;
            goto label_27a10c;
        }
    }
    ctx->pc = 0x27A100u;
label_27a100:
    // 0x27a100: 0x10000002  b           . + 4 + (0x2 << 2)
label_27a104:
    if (ctx->pc == 0x27A104u) {
        ctx->pc = 0x27A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A100u;
        // 0x27a104: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A108u;
        goto label_27a108;
    }
    ctx->pc = 0x27A100u;
    {
        const bool branch_taken_0x27a100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A100u;
        // 0x27a104: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a100) {
            ctx->pc = 0x27A10Cu;
            goto label_27a10c;
        }
    }
    ctx->pc = 0x27A108u;
label_27a108:
    // 0x27a108: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27a108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a10c:
    // 0x27a10c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27a10cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27a110:
    // 0x27a110: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27a110u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27a114:
    // 0x27a114: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27a114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27a118:
    // 0x27a118: 0x3e00008  jr          $ra
label_27a11c:
    if (ctx->pc == 0x27A11Cu) {
        ctx->pc = 0x27A11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A118u;
        // 0x27a11c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A120u;
        goto label_fallthrough_0x27a118;
    }
    ctx->pc = 0x27A118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A118u;
        // 0x27a11c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x27a118:
    ctx->pc = 0x27A120u;
}
