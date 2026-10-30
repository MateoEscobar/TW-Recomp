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

// Function: sub_002EAB50
// Address: 0x2eab50 - 0x2eabc8
void sub_002EAB50_0x2eab50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EAB50_0x2eab50");
#endif

    switch (ctx->pc) {
        case 0x2eab70u: goto label_2eab70;
        case 0x2eab80u: goto label_2eab80;
        case 0x2eaba4u: goto label_2eaba4;
        case 0x2eabb0u: goto label_2eabb0;
        default: break;
    }

    ctx->pc = 0x2eab50u;

    // 0x2eab50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2eab50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2eab54: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2eab54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2eab58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2eab58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2eab5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2eab5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eab60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eab60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2eab64: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2eab64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2eab68: 0xc0baac2  jal         func_2EAB08
    ctx->pc = 0x2EAB68u;
    SET_GPR_U32(ctx, 31, 0x2EAB70u);
    ctx->pc = 0x2EAB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAB68u;
    // 0x2eab6c: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EAB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EAB08u, 0x2EAB68u, 0x2EAB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAB70u;
label_2eab70:
    // 0x2eab70: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EAB70u;
    {
        const bool branch_taken_0x2eab70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB70u;
        // 0x2eab74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eab70) {
            ctx->pc = 0x2EABB4u;
            goto label_2eabb4;
        }
    }
    ctx->pc = 0x2EAB78u;
    // 0x2eab78: 0xc088eca  jal         func_223B28
    ctx->pc = 0x2EAB78u;
    SET_GPR_U32(ctx, 31, 0x2EAB80u);
    ctx->pc = 0x2EAB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAB78u;
    // 0x2eab7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B28u, 0x2EAB78u, 0x2EAB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAB80u;
label_2eab80:
    // 0x2eab80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eab80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eab84: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2EAB84u;
    {
        const bool branch_taken_0x2eab84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EAB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB84u;
        // 0x2eab88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eab84) {
            ctx->pc = 0x2EABB4u;
            goto label_2eabb4;
        }
    }
    ctx->pc = 0x2EAB8Cu;
    // 0x2eab8c: 0x96030028  lhu         $v1, 0x28($s0)
    ctx->pc = 0x2eab8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2eab90: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x2eab90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x2eab94: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EAB94u;
    {
        const bool branch_taken_0x2eab94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2eab94) {
            ctx->pc = 0x2EAB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAB94u;
            // 0x2eab98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EABB4u;
            goto label_2eabb4;
        }
    }
    ctx->pc = 0x2EAB9Cu;
    // 0x2eab9c: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2EAB9Cu;
    SET_GPR_U32(ctx, 31, 0x2EABA4u);
    ctx->pc = 0x2EABA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAB9Cu;
    // 0x2eaba0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2EAB9Cu, 0x2EABA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EABA4u;
label_2eaba4:
    // 0x2eaba4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2eaba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaba8: 0xc051fbc  jal         func_147EF0
    ctx->pc = 0x2EABA8u;
    SET_GPR_U32(ctx, 31, 0x2EABB0u);
    ctx->pc = 0x2EABACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EABA8u;
    // 0x2eabac: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2EABA8u, 0x2EABB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EABB0u;
label_2eabb0:
    // 0x2eabb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eabb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eabb4:
    // 0x2eabb4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2eabb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eabb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2eabb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eabbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eabbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eabc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EABC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EABC0u;
        // 0x2eabc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EABC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EABC8u;
}
