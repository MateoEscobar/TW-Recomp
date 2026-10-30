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

// Function: sub_0032EB60
// Address: 0x32eb60 - 0x32ec40
void sub_0032EB60_0x32eb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032EB60_0x32eb60");
#endif

    switch (ctx->pc) {
        case 0x32eb84u: goto label_32eb84;
        case 0x32eb8cu: goto label_32eb8c;
        case 0x32ebb0u: goto label_32ebb0;
        case 0x32ebccu: goto label_32ebcc;
        case 0x32ebd4u: goto label_32ebd4;
        case 0x32ebdcu: goto label_32ebdc;
        case 0x32ebf0u: goto label_32ebf0;
        case 0x32ec00u: goto label_32ec00;
        case 0x32ec10u: goto label_32ec10;
        case 0x32ec24u: goto label_32ec24;
        default: break;
    }

    ctx->pc = 0x32eb60u;

    // 0x32eb60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32eb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32eb64: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x32eb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x32eb68: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x32eb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x32eb6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32eb6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32eb70: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x32eb70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32eb74: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32eb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x32eb78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32eb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32eb7c: 0xc0cb334  jal         func_32CCD0
    ctx->pc = 0x32EB7Cu;
    SET_GPR_U32(ctx, 31, 0x32EB84u);
    ctx->pc = 0x32EB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EB7Cu;
    // 0x32eb80: 0x2405002c  addiu       $a1, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CCD0u, 0x32EB7Cu, 0x32EB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EB84u;
label_32eb84:
    // 0x32eb84: 0xc0cb3bc  jal         func_32CEF0
    ctx->pc = 0x32EB84u;
    SET_GPR_U32(ctx, 31, 0x32EB8Cu);
    ctx->pc = 0x32EB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EB84u;
    // 0x32eb88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CEF0u, 0x32EB84u, 0x32EB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EB8Cu;
label_32eb8c:
    // 0x32eb8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32eb8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32eb90: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x32eb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32eb94: 0x24020113  addiu       $v0, $zero, 0x113
    ctx->pc = 0x32eb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
    // 0x32eb98: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32EB98u;
    {
        const bool branch_taken_0x32eb98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EB98u;
        // 0x32eb9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32eb98) {
            ctx->pc = 0x32EBBCu;
            goto label_32ebbc;
        }
    }
    ctx->pc = 0x32EBA0u;
    // 0x32eba0: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x32eba0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x32eba4: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x32eba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x32eba8: 0xc0cbf58  jal         func_32FD60
    ctx->pc = 0x32EBA8u;
    SET_GPR_U32(ctx, 31, 0x32EBB0u);
    ctx->pc = 0x32EBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EBA8u;
    // 0x32ebac: 0x24a55e18  addiu       $a1, $a1, 0x5E18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FD60u, 0x32EBA8u, 0x32EBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EBB0u;
label_32ebb0:
    // 0x32ebb0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x32ebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x32ebb4: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x32ebb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x32ebb8: 0x2c650001  sltiu       $a1, $v1, 0x1
    ctx->pc = 0x32ebb8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_32ebbc:
    // 0x32ebbc: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x32ebbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x32ebc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32ebc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ebc4: 0xc0cb344  jal         func_32CD10
    ctx->pc = 0x32EBC4u;
    SET_GPR_U32(ctx, 31, 0x32EBCCu);
    ctx->pc = 0x32EBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EBC4u;
    // 0x32ebc8: 0x24c65e20  addiu       $a2, $a2, 0x5E20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CD10u, 0x32EBC4u, 0x32EBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EBCCu;
label_32ebcc:
    // 0x32ebcc: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32EBCCu;
    SET_GPR_U32(ctx, 31, 0x32EBD4u);
    ctx->pc = 0x32EBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EBCCu;
    // 0x32ebd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32EBCCu, 0x32EBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EBD4u;
label_32ebd4:
    // 0x32ebd4: 0xc0cb8bc  jal         func_32E2F0
    ctx->pc = 0x32EBD4u;
    SET_GPR_U32(ctx, 31, 0x32EBDCu);
    ctx->pc = 0x32EBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EBD4u;
    // 0x32ebd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E2F0u, 0x32EBD4u, 0x32EBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EBDCu;
label_32ebdc:
    // 0x32ebdc: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x32ebdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x32ebe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32ebe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ebe4: 0x24a55e30  addiu       $a1, $a1, 0x5E30
    ctx->pc = 0x32ebe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24112));
    // 0x32ebe8: 0xc0cb44e  jal         func_32D138
    ctx->pc = 0x32EBE8u;
    SET_GPR_U32(ctx, 31, 0x32EBF0u);
    ctx->pc = 0x32EBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EBE8u;
    // 0x32ebec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D138u, 0x32EBE8u, 0x32EBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EBF0u;
label_32ebf0:
    // 0x32ebf0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32ebf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ebf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32ebf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ebf8: 0xc0cb3fe  jal         func_32CFF8
    ctx->pc = 0x32EBF8u;
    SET_GPR_U32(ctx, 31, 0x32EC00u);
    ctx->pc = 0x32EBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EBF8u;
    // 0x32ebfc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CFF8u, 0x32EBF8u, 0x32EC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EC00u;
label_32ec00:
    // 0x32ec00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32ec00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ec04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32ec04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ec08: 0xc0cb3fe  jal         func_32CFF8
    ctx->pc = 0x32EC08u;
    SET_GPR_U32(ctx, 31, 0x32EC10u);
    ctx->pc = 0x32EC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EC08u;
    // 0x32ec0c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CFF8u, 0x32EC08u, 0x32EC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EC10u;
label_32ec10:
    // 0x32ec10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32ec10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ec14: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x32ec14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32ec18: 0x2406002e  addiu       $a2, $zero, 0x2E
    ctx->pc = 0x32ec18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x32ec1c: 0xc0cba6c  jal         func_32E9B0
    ctx->pc = 0x32EC1Cu;
    SET_GPR_U32(ctx, 31, 0x32EC24u);
    ctx->pc = 0x32EC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EC1Cu;
    // 0x32ec20: 0x2407002f  addiu       $a3, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E9B0u, 0x32EC1Cu, 0x32EC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EC24u;
label_32ec24:
    // 0x32ec24: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x32ec24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32ec28: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32ec28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32ec2c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x32ec2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32ec30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32ec30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ec34: 0x3e00008  jr          $ra
    ctx->pc = 0x32EC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32EC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EC34u;
        // 0x32ec38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EC34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EC3Cu;
    // 0x32ec3c: 0x0  nop
    ctx->pc = 0x32ec3cu;
    // NOP
    ctx->pc = 0x32ec40u;
}
