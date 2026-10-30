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

// Function: sub_0018AB20
// Address: 0x18ab20 - 0x18abd0
void sub_0018AB20_0x18ab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018AB20_0x18ab20");
#endif

    switch (ctx->pc) {
        case 0x18ab48u: goto label_18ab48;
        case 0x18ab54u: goto label_18ab54;
        case 0x18ab78u: goto label_18ab78;
        case 0x18ab9cu: goto label_18ab9c;
        default: break;
    }

    ctx->pc = 0x18ab20u;

    // 0x18ab20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18ab20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18ab24: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18ab24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x18ab28: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x18ab28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x18ab2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18ab2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ab30: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x18ab30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x18ab34: 0x265001b8  addiu       $s0, $s2, 0x1B8
    ctx->pc = 0x18ab34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 440));
    // 0x18ab38: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x18ab38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x18ab3c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18ab3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ab40: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x18ab40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x18ab44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18ab44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18ab48:
    // 0x18ab48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ab48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ab4c: 0xc042f3e  jal         func_10BCF8
    ctx->pc = 0x18AB4Cu;
    SET_GPR_U32(ctx, 31, 0x18AB54u);
    ctx->pc = 0x18AB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AB4Cu;
    // 0x18ab50: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BCF8u, 0x18AB4Cu, 0x18AB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AB54u;
label_18ab54:
    // 0x18ab54: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x18ab54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x18ab58: 0x2e620040  sltiu       $v0, $s3, 0x40
    ctx->pc = 0x18ab58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x18ab5c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18AB5Cu;
    {
        const bool branch_taken_0x18ab5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB5Cu;
        // 0x18ab60: 0xae400bb8  sw          $zero, 0xBB8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3000), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ab5c) {
            ctx->pc = 0x18AB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ab48;
        }
    }
    ctx->pc = 0x18AB64u;
    // 0x18ab64: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x18ab64u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x18ab68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18ab68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ab6c: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x18ab6cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
    // 0x18ab70: 0x265000b8  addiu       $s0, $s2, 0xB8
    ctx->pc = 0x18ab70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 184));
    // 0x18ab74: 0x265100b4  addiu       $s1, $s2, 0xB4
    ctx->pc = 0x18ab74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 180));
label_18ab78:
    // 0x18ab78: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x18ab78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x18ab7c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18ab7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x18ab80: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x18ab80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x18ab84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18ab84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ab88: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18ab8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18AB8Cu;
    {
        const bool branch_taken_0x18ab8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB8Cu;
        // 0x18ab90: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ab8c) {
            ctx->pc = 0x18ABA0u;
            goto label_18aba0;
        }
    }
    ctx->pc = 0x18AB94u;
    // 0x18ab94: 0xc05df80  jal         func_177E00
    ctx->pc = 0x18AB94u;
    SET_GPR_U32(ctx, 31, 0x18AB9Cu);
    ctx->pc = 0x177E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177E00u, 0x18AB94u, 0x18AB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AB9Cu;
label_18ab9c:
    // 0x18ab9c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x18ab9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_18aba0:
    // 0x18aba0: 0x2e620020  sltiu       $v0, $s3, 0x20
    ctx->pc = 0x18aba0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x18aba4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x18ABA4u;
    {
        const bool branch_taken_0x18aba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18ABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ABA4u;
        // 0x18aba8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aba4) {
            ctx->pc = 0x18AB78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ab78;
        }
    }
    ctx->pc = 0x18ABACu;
    // 0x18abac: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x18abacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18abb0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x18abb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18abb4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18abb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18abb8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x18abb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18abbc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x18abbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18abc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18abc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18abc4: 0x3e00008  jr          $ra
    ctx->pc = 0x18ABC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18ABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ABC4u;
        // 0x18abc8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18ABC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18ABCCu;
    // 0x18abcc: 0x0  nop
    ctx->pc = 0x18abccu;
    // NOP
    ctx->pc = 0x18abd0u;
}
