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

// Function: sub_00332DB0
// Address: 0x332db0 - 0x332e88
void sub_00332DB0_0x332db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332DB0_0x332db0");
#endif

    switch (ctx->pc) {
        case 0x332decu: goto label_332dec;
        case 0x332e04u: goto label_332e04;
        case 0x332e24u: goto label_332e24;
        case 0x332e44u: goto label_332e44;
        case 0x332e54u: goto label_332e54;
        case 0x332e64u: goto label_332e64;
        default: break;
    }

    ctx->pc = 0x332db0u;

    // 0x332db0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x332db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x332db4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x332db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x332db8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x332db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x332dbc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x332dbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332dc0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x332dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x332dc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x332dc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332dc8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x332dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x332dcc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x332dccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332dd0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x332dd0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332dd4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x332dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x332dd8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x332dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x332ddc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x332ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x332de0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x332de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332de4: 0xc0ccb26  jal         func_332C98
    ctx->pc = 0x332DE4u;
    SET_GPR_U32(ctx, 31, 0x332DECu);
    ctx->pc = 0x332DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332DE4u;
    // 0x332de8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332C98u, 0x332DE4u, 0x332DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332DECu;
label_332dec:
    // 0x332dec: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x332decu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332df0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x332df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332df4: 0x148080  sll         $s0, $s4, 2
    ctx->pc = 0x332df4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x332df8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x332df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332dfc: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x332DFCu;
    SET_GPR_U32(ctx, 31, 0x332E04u);
    ctx->pc = 0x332E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332DFCu;
    // 0x332e00: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x332DFCu, 0x332E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332E04u;
label_332e04:
    // 0x332e04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x332e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332e08: 0xaea20018  sw          $v0, 0x18($s5)
    ctx->pc = 0x332e08u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
    // 0x332e0c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x332e0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332e10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x332e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332e14: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x332e14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332e18: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x332e18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x332e1c: 0xc0ccaec  jal         func_332BB0
    ctx->pc = 0x332E1Cu;
    SET_GPR_U32(ctx, 31, 0x332E24u);
    ctx->pc = 0x332E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332E1Cu;
    // 0x332e20: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332BB0u, 0x332E1Cu, 0x332E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332E24u;
label_332e24:
    // 0x332e24: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x332e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x332e28: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x332e28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x332e2c: 0x8e03fffc  lw          $v1, -0x4($s0)
    ctx->pc = 0x332e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x332e30: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x332E30u;
    {
        const bool branch_taken_0x332e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x332E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332E30u;
        // 0x332e34: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332e30) {
            ctx->pc = 0x332E54u;
            goto label_332e54;
        }
    }
    ctx->pc = 0x332E38u;
    // 0x332e38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x332e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332e3c: 0xc0cca76  jal         func_3329D8
    ctx->pc = 0x332E3Cu;
    SET_GPR_U32(ctx, 31, 0x332E44u);
    ctx->pc = 0x332E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332E3Cu;
    // 0x332e40: 0x26106678  addiu       $s0, $s0, 0x6678 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3329D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3329D8u, 0x332E3Cu, 0x332E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332E44u;
label_332e44:
    // 0x332e44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x332e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332e48: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x332e48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332e4c: 0xc0cb28a  jal         func_32CA28
    ctx->pc = 0x332E4Cu;
    SET_GPR_U32(ctx, 31, 0x332E54u);
    ctx->pc = 0x332E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332E4Cu;
    // 0x332e50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CA28u, 0x332E4Cu, 0x332E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332E54u;
label_332e54:
    // 0x332e54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x332e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332e58: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x332e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332e5c: 0xc0ca50a  jal         func_329428
    ctx->pc = 0x332E5Cu;
    SET_GPR_U32(ctx, 31, 0x332E64u);
    ctx->pc = 0x332E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332E5Cu;
    // 0x332e60: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329428u, 0x332E5Cu, 0x332E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332E64u;
label_332e64:
    // 0x332e64: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x332e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x332e68: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x332e68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x332e6c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x332e6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x332e70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x332e70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x332e74: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x332e74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x332e78: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x332e78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332e7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x332e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332e80: 0x3e00008  jr          $ra
    ctx->pc = 0x332E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332E80u;
        // 0x332e84: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332E88u;
}
