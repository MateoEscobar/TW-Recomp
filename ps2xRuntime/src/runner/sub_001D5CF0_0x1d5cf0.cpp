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

// Function: sub_001D5CF0
// Address: 0x1d5cf0 - 0x1d5dc8
void sub_001D5CF0_0x1d5cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5CF0_0x1d5cf0");
#endif

    switch (ctx->pc) {
        case 0x1d5d40u: goto label_1d5d40;
        case 0x1d5d58u: goto label_1d5d58;
        case 0x1d5d70u: goto label_1d5d70;
        case 0x1d5d88u: goto label_1d5d88;
        case 0x1d5d94u: goto label_1d5d94;
        case 0x1d5da8u: goto label_1d5da8;
        default: break;
    }

    ctx->pc = 0x1d5cf0u;

    // 0x1d5cf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d5cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d5cf4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d5cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d5cf8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d5cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1d5cfc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d5cfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d00: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d5d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d5d04: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d5d04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d08: 0x2e220006  sltiu       $v0, $s1, 0x6
    ctx->pc = 0x1d5d08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1d5d0c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1D5D0Cu;
    {
        const bool branch_taken_0x1d5d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D0Cu;
        // 0x1d5d10: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5d0c) {
            ctx->pc = 0x1D5DA8u;
            goto label_1d5da8;
        }
    }
    ctx->pc = 0x1D5D14u;
    // 0x1d5d14: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1d5d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x1d5d18: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1d5d18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1d5d1c: 0x24426060  addiu       $v0, $v0, 0x6060
    ctx->pc = 0x1d5d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24672));
    // 0x1d5d20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d5d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d5d24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d5d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d5d28: 0x800008  jr          $a0
    ctx->pc = 0x1D5D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D5D30u: goto label_1d5d30;
            case 0x1D5D60u: goto label_1d5d60;
            case 0x1D5D88u: goto label_1d5d88;
            case 0x1D5D9Cu: goto label_1d5d9c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5D28u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D5D30u;
label_1d5d30:
    // 0x1d5d30: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1d5d30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1d5d34: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1d5d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1d5d38: 0xc04444c  jal         func_111130
    ctx->pc = 0x1D5D38u;
    SET_GPR_U32(ctx, 31, 0x1D5D40u);
    ctx->pc = 0x1D5D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D38u;
    // 0x1d5d3c: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1D5D38u, 0x1D5D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D40u;
label_1d5d40:
    // 0x1d5d40: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1d5d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    // 0x1d5d44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d5d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d5d48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d5d4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d50: 0xc043f36  jal         func_10FCD8
    ctx->pc = 0x1D5D50u;
    SET_GPR_U32(ctx, 31, 0x1D5D58u);
    ctx->pc = 0x1D5D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D50u;
    // 0x1d5d54: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1D5D50u, 0x1D5D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D58u;
label_1d5d58:
    // 0x1d5d58: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1D5D58u;
    {
        const bool branch_taken_0x1d5d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D58u;
        // 0x1d5d5c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5d58) {
            ctx->pc = 0x1D5DACu;
            goto label_1d5dac;
        }
    }
    ctx->pc = 0x1D5D60u;
label_1d5d60:
    // 0x1d5d60: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1d5d60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1d5d64: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1d5d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d5d68: 0xc04444c  jal         func_111130
    ctx->pc = 0x1D5D68u;
    SET_GPR_U32(ctx, 31, 0x1D5D70u);
    ctx->pc = 0x1D5D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D68u;
    // 0x1d5d6c: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1D5D68u, 0x1D5D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D70u;
label_1d5d70:
    // 0x1d5d70: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1d5d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    // 0x1d5d74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d5d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d5d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d5d7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d80: 0xc043f36  jal         func_10FCD8
    ctx->pc = 0x1D5D80u;
    SET_GPR_U32(ctx, 31, 0x1D5D88u);
    ctx->pc = 0x1D5D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D80u;
    // 0x1d5d84: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1D5D80u, 0x1D5D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D88u;
label_1d5d88:
    // 0x1d5d88: 0x26440220  addiu       $a0, $s2, 0x220
    ctx->pc = 0x1d5d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
    // 0x1d5d8c: 0xc075b04  jal         func_1D6C10
    ctx->pc = 0x1D5D8Cu;
    SET_GPR_U32(ctx, 31, 0x1D5D94u);
    ctx->pc = 0x1D5D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D8Cu;
    // 0x1d5d90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6C10u, 0x1D5D8Cu, 0x1D5D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D94u;
label_1d5d94:
    // 0x1d5d94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5D94u;
    {
        const bool branch_taken_0x1d5d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D94u;
        // 0x1d5d98: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5d94) {
            ctx->pc = 0x1D5DACu;
            goto label_1d5dac;
        }
    }
    ctx->pc = 0x1D5D9Cu;
label_1d5d9c:
    // 0x1d5d9c: 0x26440220  addiu       $a0, $s2, 0x220
    ctx->pc = 0x1d5d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
    // 0x1d5da0: 0xc075b04  jal         func_1D6C10
    ctx->pc = 0x1D5DA0u;
    SET_GPR_U32(ctx, 31, 0x1D5DA8u);
    ctx->pc = 0x1D5DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DA0u;
    // 0x1d5da4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6C10u, 0x1D5DA0u, 0x1D5DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DA8u;
label_1d5da8:
    // 0x1d5da8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d5da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d5dac:
    // 0x1d5dac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5db0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d5db0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5db4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d5db4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5db8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DBCu;
        // 0x1d5dc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5DC4u;
    // 0x1d5dc4: 0x0  nop
    ctx->pc = 0x1d5dc4u;
    // NOP
    ctx->pc = 0x1d5dc8u;
}
