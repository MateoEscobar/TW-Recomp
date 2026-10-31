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

// Function: sub_002D09F0
// Address: 0x2d09f0 - 0x2d0aa8
void sub_002D09F0_0x2d09f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D09F0_0x2d09f0");
#endif

    switch (ctx->pc) {
        case 0x2d0a20u: goto label_2d0a20;
        case 0x2d0a28u: goto label_2d0a28;
        case 0x2d0a3cu: goto label_2d0a3c;
        case 0x2d0a44u: goto label_2d0a44;
        case 0x2d0a54u: goto label_2d0a54;
        case 0x2d0a5cu: goto label_2d0a5c;
        case 0x2d0a7cu: goto label_2d0a7c;
        case 0x2d0a88u: goto label_2d0a88;
        default: break;
    }

    ctx->pc = 0x2d09f0u;

    // 0x2d09f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d09f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d09f4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2d09f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2d09f8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2d09f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2d09fc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2d09fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0a00: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2d0a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2d0a04: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2d0a04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0a08: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2d0a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2d0a0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d0a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0a10: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2d0a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2d0a14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d0a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d0a18: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2D0A18u;
    SET_GPR_U32(ctx, 31, 0x2D0A20u);
    ctx->pc = 0x2D0A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0A18u;
    // 0x2d0a1c: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2D0A18u, 0x2D0A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0A20u;
label_2d0a20:
    // 0x2d0a20: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2D0A20u;
    SET_GPR_U32(ctx, 31, 0x2D0A28u);
    ctx->pc = 0x2D0A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0A20u;
    // 0x2d0a24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2D0A20u, 0x2D0A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0A28u;
label_2d0a28:
    // 0x2d0a28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d0a28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0a2c: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D0A2Cu;
    {
        const bool branch_taken_0x2d0a2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0a2c) {
            ctx->pc = 0x2D0A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0A2Cu;
            // 0x2d0a30: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0A8Cu;
            goto label_2d0a8c;
        }
    }
    ctx->pc = 0x2D0A34u;
    // 0x2d0a34: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2D0A34u;
    SET_GPR_U32(ctx, 31, 0x2D0A3Cu);
    ctx->pc = 0x2D0A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0A34u;
    // 0x2d0a38: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2D0A34u, 0x2D0A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0A3Cu;
label_2d0a3c:
    // 0x2d0a3c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2D0A3Cu;
    SET_GPR_U32(ctx, 31, 0x2D0A44u);
    ctx->pc = 0x2D0A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0A3Cu;
    // 0x2d0a40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2D0A3Cu, 0x2D0A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0A44u;
label_2d0a44:
    // 0x2d0a44: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D0A44u;
    {
        const bool branch_taken_0x2d0a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0a44) {
            ctx->pc = 0x2D0A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0A44u;
            // 0x2d0a48: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0A8Cu;
            goto label_2d0a8c;
        }
    }
    ctx->pc = 0x2D0A4Cu;
    // 0x2d0a4c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2D0A4Cu;
    SET_GPR_U32(ctx, 31, 0x2D0A54u);
    ctx->pc = 0x2D0A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0A4Cu;
    // 0x2d0a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2D0A4Cu, 0x2D0A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0A54u;
label_2d0a54:
    // 0x2d0a54: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2D0A54u;
    SET_GPR_U32(ctx, 31, 0x2D0A5Cu);
    ctx->pc = 0x2D0A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0A54u;
    // 0x2d0a58: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2D0A54u, 0x2D0A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0A5Cu;
label_2d0a5c:
    // 0x2d0a5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d0a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0a60: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D0A60u;
    {
        const bool branch_taken_0x2d0a60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0A60u;
        // 0x2d0a64: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0a60) {
            ctx->pc = 0x2D0A7Cu;
            goto label_2d0a7c;
        }
    }
    ctx->pc = 0x2D0A68u;
    // 0x2d0a68: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2d0a68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0a6c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2d0a6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0a70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d0a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0a74: 0xc0b42aa  jal         func_2D0AA8
    ctx->pc = 0x2D0A74u;
    SET_GPR_U32(ctx, 31, 0x2D0A7Cu);
    ctx->pc = 0x2D0A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0A74u;
    // 0x2d0a78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AA8u, 0x2D0A74u, 0x2D0A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0A7Cu;
label_2d0a7c:
    // 0x2d0a7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d0a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0a80: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2D0A80u;
    SET_GPR_U32(ctx, 31, 0x2D0A88u);
    ctx->pc = 0x2D0A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0A80u;
    // 0x2d0a84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2D0A80u, 0x2D0A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0A88u;
label_2d0a88:
    // 0x2d0a88: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2d0a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2d0a8c:
    // 0x2d0a8c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2d0a8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0a90: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2d0a90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0a94: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2d0a94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0a98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d0a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0A9Cu;
        // 0x2d0aa0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0AA4u;
    // 0x2d0aa4: 0x0  nop
    ctx->pc = 0x2d0aa4u;
    // NOP
    ctx->pc = 0x2d0aa8u;
}
