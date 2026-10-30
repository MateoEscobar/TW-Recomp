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

// Function: sub_0010DF30
// Address: 0x10df30 - 0x10dfe0
void sub_0010DF30_0x10df30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DF30_0x10df30");
#endif

    switch (ctx->pc) {
        case 0x10df5cu: goto label_10df5c;
        case 0x10df74u: goto label_10df74;
        case 0x10df84u: goto label_10df84;
        case 0x10df90u: goto label_10df90;
        case 0x10df9cu: goto label_10df9c;
        case 0x10dfb0u: goto label_10dfb0;
        case 0x10dfc8u: goto label_10dfc8;
        default: break;
    }

    ctx->pc = 0x10df30u;

    // 0x10df30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10df30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10df34: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x10df34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x10df38: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x10df38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x10df3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10df3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10df40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10df40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10df44: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x10df44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x10df48: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x10df48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x10df4c: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x10DF4Cu;
    {
        const bool branch_taken_0x10df4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10df4c) {
            ctx->pc = 0x10DF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DF4Cu;
            // 0x10df50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DF7Cu;
            goto label_10df7c;
        }
    }
    ctx->pc = 0x10DF54u;
    // 0x10df54: 0xc046d14  jal         func_11B450
    ctx->pc = 0x10DF54u;
    SET_GPR_U32(ctx, 31, 0x10DF5Cu);
    ctx->pc = 0x10DF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DF54u;
    // 0x10df58: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B450u, 0x10DF54u, 0x10DF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DF5Cu;
label_10df5c:
    // 0x10df5c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10df5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10df60: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10DF60u;
    {
        const bool branch_taken_0x10df60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x10DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF60u;
        // 0x10df64: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10df60) {
            ctx->pc = 0x10DF78u;
            goto label_10df78;
        }
    }
    ctx->pc = 0x10DF68u;
    // 0x10df68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10df68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10df6c: 0xc043fda  jal         func_10FF68
    ctx->pc = 0x10DF6Cu;
    SET_GPR_U32(ctx, 31, 0x10DF74u);
    ctx->pc = 0x10DF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DF6Cu;
    // 0x10df70: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FF68u, 0x10DF6Cu, 0x10DF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DF74u;
label_10df74:
    // 0x10df74: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x10df74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_10df78:
    // 0x10df78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10df78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10df7c:
    // 0x10df7c: 0xc046d7a  jal         func_11B5E8
    ctx->pc = 0x10DF7Cu;
    SET_GPR_U32(ctx, 31, 0x10DF84u);
    ctx->pc = 0x10DF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DF7Cu;
    // 0x10df80: 0x26300070  addiu       $s0, $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B5E8u, 0x10DF7Cu, 0x10DF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DF84u;
label_10df84:
    // 0x10df84: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x10df84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10df88: 0xc0439f4  jal         func_10E7D0
    ctx->pc = 0x10DF88u;
    SET_GPR_U32(ctx, 31, 0x10DF90u);
    ctx->pc = 0x10DF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DF88u;
    // 0x10df8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7D0u, 0x10DF88u, 0x10DF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DF90u;
label_10df90:
    // 0x10df90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10df90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10df94: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x10DF94u;
    SET_GPR_U32(ctx, 31, 0x10DF9Cu);
    ctx->pc = 0x10DF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DF94u;
    // 0x10df98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x10DF94u, 0x10DF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DF9Cu;
label_10df9c:
    // 0x10df9c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x10df9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x10dfa0: 0x641fffb  bgez        $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x10DFA0u;
    {
        const bool branch_taken_0x10dfa0 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x10DFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFA0u;
        // 0x10dfa4: 0x2610004c  addiu       $s0, $s0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dfa0) {
            ctx->pc = 0x10DF90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10df90;
        }
    }
    ctx->pc = 0x10DFA8u;
    // 0x10dfa8: 0xc043956  jal         func_10E558
    ctx->pc = 0x10DFA8u;
    SET_GPR_U32(ctx, 31, 0x10DFB0u);
    ctx->pc = 0x10DFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DFA8u;
    // 0x10dfac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E558u, 0x10DFA8u, 0x10DFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DFB0u;
label_10dfb0:
    // 0x10dfb0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x10dfb4: 0x8c43a8dc  lw          $v1, -0x5724($v0)
    ctx->pc = 0x10dfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50A8DCu));
    // 0x10dfb8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10DFB8u;
    {
        const bool branch_taken_0x10dfb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFB8u;
        // 0x10dfbc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dfb8) {
            ctx->pc = 0x10DFCCu;
            goto label_10dfcc;
        }
    }
    ctx->pc = 0x10DFC0u;
    // 0x10dfc0: 0xc043ad0  jal         func_10EB40
    ctx->pc = 0x10DFC0u;
    SET_GPR_U32(ctx, 31, 0x10DFC8u);
    ctx->pc = 0x10DFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DFC0u;
    // 0x10dfc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EB40u, 0x10DFC0u, 0x10DFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DFC8u;
label_10dfc8:
    // 0x10dfc8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x10dfc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10dfcc:
    // 0x10dfcc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x10dfccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10dfd0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x10dfd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10dfd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10dfd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10dfd8: 0x3e00008  jr          $ra
    ctx->pc = 0x10DFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFD8u;
        // 0x10dfdc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DFE0u;
}
