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

// Function: sub_0032EA88
// Address: 0x32ea88 - 0x32eb60
void sub_0032EA88_0x32ea88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032EA88_0x32ea88");
#endif

    switch (ctx->pc) {
        case 0x32eab0u: goto label_32eab0;
        case 0x32eab8u: goto label_32eab8;
        case 0x32eac4u: goto label_32eac4;
        case 0x32eaccu: goto label_32eacc;
        case 0x32ead8u: goto label_32ead8;
        case 0x32eae8u: goto label_32eae8;
        case 0x32eafcu: goto label_32eafc;
        case 0x32eb0cu: goto label_32eb0c;
        case 0x32eb20u: goto label_32eb20;
        case 0x32eb34u: goto label_32eb34;
        case 0x32eb48u: goto label_32eb48;
        default: break;
    }

    ctx->pc = 0x32ea88u;

    // 0x32ea88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32ea88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32ea8c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x32ea8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x32ea90: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x32ea90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x32ea94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32ea94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ea98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32ea98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32ea9c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x32ea9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32eaa0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32eaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x32eaa4: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x32eaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x32eaa8: 0xc0cb334  jal         func_32CCD0
    ctx->pc = 0x32EAA8u;
    SET_GPR_U32(ctx, 31, 0x32EAB0u);
    ctx->pc = 0x32EAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EAA8u;
    // 0x32eaac: 0x8e110028  lw          $s1, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CCD0u, 0x32EAA8u, 0x32EAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EAB0u;
label_32eab0:
    // 0x32eab0: 0xc0cb8bc  jal         func_32E2F0
    ctx->pc = 0x32EAB0u;
    SET_GPR_U32(ctx, 31, 0x32EAB8u);
    ctx->pc = 0x32EAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EAB0u;
    // 0x32eab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E2F0u, 0x32EAB0u, 0x32EAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EAB8u;
label_32eab8:
    // 0x32eab8: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x32eab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x32eabc: 0xc0cb334  jal         func_32CCD0
    ctx->pc = 0x32EABCu;
    SET_GPR_U32(ctx, 31, 0x32EAC4u);
    ctx->pc = 0x32EAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EABCu;
    // 0x32eac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CCD0u, 0x32EABCu, 0x32EAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EAC4u;
label_32eac4:
    // 0x32eac4: 0xc0cb8bc  jal         func_32E2F0
    ctx->pc = 0x32EAC4u;
    SET_GPR_U32(ctx, 31, 0x32EACCu);
    ctx->pc = 0x32EAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EAC4u;
    // 0x32eac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E2F0u, 0x32EAC4u, 0x32EACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EACCu;
label_32eacc:
    // 0x32eacc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32eaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ead0: 0xc0cb34c  jal         func_32CD30
    ctx->pc = 0x32EAD0u;
    SET_GPR_U32(ctx, 31, 0x32EAD8u);
    ctx->pc = 0x32EAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EAD0u;
    // 0x32ead4: 0x2405002c  addiu       $a1, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CD30u, 0x32EAD0u, 0x32EAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EAD8u;
label_32ead8:
    // 0x32ead8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32EAD8u;
    {
        const bool branch_taken_0x32ead8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EAD8u;
        // 0x32eadc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ead8) {
            ctx->pc = 0x32EAF0u;
            goto label_32eaf0;
        }
    }
    ctx->pc = 0x32EAE0u;
    // 0x32eae0: 0xc0cb8bc  jal         func_32E2F0
    ctx->pc = 0x32EAE0u;
    SET_GPR_U32(ctx, 31, 0x32EAE8u);
    ctx->pc = 0x32EAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EAE0u;
    // 0x32eae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E2F0u, 0x32EAE0u, 0x32EAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EAE8u;
label_32eae8:
    // 0x32eae8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32EAE8u;
    {
        const bool branch_taken_0x32eae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EAE8u;
        // 0x32eaec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32eae8) {
            ctx->pc = 0x32EB00u;
            goto label_32eb00;
        }
    }
    ctx->pc = 0x32EAF0u;
label_32eaf0:
    // 0x32eaf0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x32eaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x32eaf4: 0xc0c9d6c  jal         func_3275B0
    ctx->pc = 0x32EAF4u;
    SET_GPR_U32(ctx, 31, 0x32EAFCu);
    ctx->pc = 0x32EAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EAF4u;
    // 0x32eaf8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3275B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3275B0u, 0x32EAF4u, 0x32EAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EAFCu;
label_32eafc:
    // 0x32eafc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32eafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32eb00:
    // 0x32eb00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32eb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32eb04: 0xc0cb3fe  jal         func_32CFF8
    ctx->pc = 0x32EB04u;
    SET_GPR_U32(ctx, 31, 0x32EB0Cu);
    ctx->pc = 0x32EB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EB04u;
    // 0x32eb08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CFF8u, 0x32EB04u, 0x32EB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EB0Cu;
label_32eb0c:
    // 0x32eb0c: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x32eb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x32eb10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32eb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32eb14: 0x24a55e08  addiu       $a1, $a1, 0x5E08
    ctx->pc = 0x32eb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24072));
    // 0x32eb18: 0xc0cb44e  jal         func_32D138
    ctx->pc = 0x32EB18u;
    SET_GPR_U32(ctx, 31, 0x32EB20u);
    ctx->pc = 0x32EB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EB18u;
    // 0x32eb1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D138u, 0x32EB18u, 0x32EB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EB20u;
label_32eb20:
    // 0x32eb20: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x32eb20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x32eb24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32eb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32eb28: 0x24a55e10  addiu       $a1, $a1, 0x5E10
    ctx->pc = 0x32eb28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24080));
    // 0x32eb2c: 0xc0cb44e  jal         func_32D138
    ctx->pc = 0x32EB2Cu;
    SET_GPR_U32(ctx, 31, 0x32EB34u);
    ctx->pc = 0x32EB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EB2Cu;
    // 0x32eb30: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D138u, 0x32EB2Cu, 0x32EB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EB34u;
label_32eb34:
    // 0x32eb34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32eb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32eb38: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x32eb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32eb3c: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x32eb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x32eb40: 0xc0cba6c  jal         func_32E9B0
    ctx->pc = 0x32EB40u;
    SET_GPR_U32(ctx, 31, 0x32EB48u);
    ctx->pc = 0x32EB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EB40u;
    // 0x32eb44: 0x2407002d  addiu       $a3, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E9B0u, 0x32EB40u, 0x32EB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EB48u;
label_32eb48:
    // 0x32eb48: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x32eb48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32eb4c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32eb4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32eb50: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x32eb50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32eb54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32eb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32eb58: 0x3e00008  jr          $ra
    ctx->pc = 0x32EB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32EB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EB58u;
        // 0x32eb5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EB60u;
}
