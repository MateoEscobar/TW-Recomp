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

// Function: sub_0027DF38
// Address: 0x27df38 - 0x27e018
void sub_0027DF38_0x27df38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027DF38_0x27df38");
#endif

    switch (ctx->pc) {
        case 0x27df58u: goto label_27df58;
        case 0x27df6cu: goto label_27df6c;
        case 0x27df8cu: goto label_27df8c;
        case 0x27df9cu: goto label_27df9c;
        case 0x27dfacu: goto label_27dfac;
        case 0x27dfccu: goto label_27dfcc;
        case 0x27dfd8u: goto label_27dfd8;
        case 0x27dff0u: goto label_27dff0;
        default: break;
    }

    ctx->pc = 0x27df38u;

    // 0x27df38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27df38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27df3c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27df3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x27df40: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x27df40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x27df44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27df44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27df48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27df48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27df4c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x27df4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x27df50: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x27DF50u;
    SET_GPR_U32(ctx, 31, 0x27DF58u);
    ctx->pc = 0x27DF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DF50u;
    // 0x27df54: 0x8e3000d4  lw          $s0, 0xD4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x27DF50u, 0x27DF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF58u;
label_27df58:
    // 0x27df58: 0x3c0505c7  lui         $a1, 0x5C7
    ctx->pc = 0x27df58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
    // 0x27df5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27df5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27df60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27df60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27df64: 0xc089998  jal         func_226660
    ctx->pc = 0x27DF64u;
    SET_GPR_U32(ctx, 31, 0x27DF6Cu);
    ctx->pc = 0x27DF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DF64u;
    // 0x27df68: 0x34a5eee0  ori         $a1, $a1, 0xEEE0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61152);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27DF64u, 0x27DF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF6Cu;
label_27df6c:
    // 0x27df6c: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x27DF6Cu;
    {
        const bool branch_taken_0x27df6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF6Cu;
        // 0x27df70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27df6c) {
            ctx->pc = 0x27DFFCu;
            goto label_27dffc;
        }
    }
    ctx->pc = 0x27DF74u;
    // 0x27df74: 0x860200bc  lh          $v0, 0xBC($s0)
    ctx->pc = 0x27df74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x27df78: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x27df78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27df7c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x27DF7Cu;
    {
        const bool branch_taken_0x27df7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF7Cu;
        // 0x27df80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27df7c) {
            ctx->pc = 0x27DFF8u;
            goto label_27dff8;
        }
    }
    ctx->pc = 0x27DF84u;
    // 0x27df84: 0xc089998  jal         func_226660
    ctx->pc = 0x27DF84u;
    SET_GPR_U32(ctx, 31, 0x27DF8Cu);
    ctx->pc = 0x27DF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DF84u;
    // 0x27df88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27DF84u, 0x27DF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF8Cu;
label_27df8c:
    // 0x27df8c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x27DF8Cu;
    {
        const bool branch_taken_0x27df8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF8Cu;
        // 0x27df90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27df8c) {
            ctx->pc = 0x27DFFCu;
            goto label_27dffc;
        }
    }
    ctx->pc = 0x27DF94u;
    // 0x27df94: 0xc09eda0  jal         func_27B680
    ctx->pc = 0x27DF94u;
    SET_GPR_U32(ctx, 31, 0x27DF9Cu);
    ctx->pc = 0x27DF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DF94u;
    // 0x27df98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B680u, 0x27DF94u, 0x27DF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF9Cu;
label_27df9c:
    // 0x27df9c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27DF9Cu;
    {
        const bool branch_taken_0x27df9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27df9c) {
            ctx->pc = 0x27DFA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DF9Cu;
            // 0x27dfa0: 0x960200bc  lhu         $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DFB8u;
            goto label_27dfb8;
        }
    }
    ctx->pc = 0x27DFA4u;
    // 0x27dfa4: 0xc09edaa  jal         func_27B6A8
    ctx->pc = 0x27DFA4u;
    SET_GPR_U32(ctx, 31, 0x27DFACu);
    ctx->pc = 0x27DFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DFA4u;
    // 0x27dfa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B6A8u, 0x27DFA4u, 0x27DFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DFACu;
label_27dfac:
    // 0x27dfac: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x27DFACu;
    {
        const bool branch_taken_0x27dfac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dfac) {
            ctx->pc = 0x27DFB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DFACu;
            // 0x27dfb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DFFCu;
            goto label_27dffc;
        }
    }
    ctx->pc = 0x27DFB4u;
    // 0x27dfb4: 0x960200bc  lhu         $v0, 0xBC($s0)
    ctx->pc = 0x27dfb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 188)));
label_27dfb8:
    // 0x27dfb8: 0x262400c4  addiu       $a0, $s1, 0xC4
    ctx->pc = 0x27dfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    // 0x27dfbc: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x27dfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x27dfc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27dfc4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27DFC4u;
    SET_GPR_U32(ctx, 31, 0x27DFCCu);
    ctx->pc = 0x27DFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DFC4u;
    // 0x27dfc8: 0xa60200bc  sh          $v0, 0xBC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 188), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27DFC4u, 0x27DFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DFCCu;
label_27dfcc:
    // 0x27dfcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27dfccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dfd0: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x27DFD0u;
    SET_GPR_U32(ctx, 31, 0x27DFD8u);
    ctx->pc = 0x27DFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DFD0u;
    // 0x27dfd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x27DFD0u, 0x27DFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DFD8u;
label_27dfd8:
    // 0x27dfd8: 0x24460002  addiu       $a2, $v0, 0x2
    ctx->pc = 0x27dfd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x27dfdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27dfdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dfe0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27dfe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dfe4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x27dfe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27dfe8: 0xc098ab2  jal         func_262AC8
    ctx->pc = 0x27DFE8u;
    SET_GPR_U32(ctx, 31, 0x27DFF0u);
    ctx->pc = 0x27DFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DFE8u;
    // 0x27dfec: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AC8u, 0x27DFE8u, 0x27DFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DFF0u;
label_27dff0:
    // 0x27dff0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27DFF0u;
    {
        const bool branch_taken_0x27dff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DFF0u;
        // 0x27dff4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dff0) {
            ctx->pc = 0x27DFFCu;
            goto label_27dffc;
        }
    }
    ctx->pc = 0x27DFF8u;
label_27dff8:
    // 0x27dff8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27dff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27dffc:
    // 0x27dffc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x27dffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27e000: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27e000u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e004: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x27e004u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27e008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e00c: 0x3e00008  jr          $ra
    ctx->pc = 0x27E00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E00Cu;
        // 0x27e010: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E014u;
    // 0x27e014: 0x0  nop
    ctx->pc = 0x27e014u;
    // NOP
    ctx->pc = 0x27e018u;
}
