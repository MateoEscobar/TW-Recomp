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

// Function: sub_0029F9D0
// Address: 0x29f9d0 - 0x29fa28
void sub_0029F9D0_0x29f9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F9D0_0x29f9d0");
#endif

    switch (ctx->pc) {
        case 0x29f9e8u: goto label_29f9e8;
        default: break;
    }

    ctx->pc = 0x29f9d0u;

    // 0x29f9d0: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x29f9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x29f9d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29f9d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f9d8: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x29f9d8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x29f9dc: 0x24080096  addiu       $t0, $zero, 0x96
    ctx->pc = 0x29f9dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x29f9e0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x29f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x29f9e4: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x29f9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
label_29f9e8:
    // 0x29f9e8: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x29f9e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29f9ec: 0x14480006  bne         $v0, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29F9ECu;
    {
        const bool branch_taken_0x29f9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x29F9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F9ECu;
        // 0x29f9f0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f9ec) {
            ctx->pc = 0x29FA08u;
            goto label_29fa08;
        }
    }
    ctx->pc = 0x29F9F4u;
    // 0x29f9f4: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x29f9f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x29f9f8: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29F9F8u;
    {
        const bool branch_taken_0x29f9f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x29F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F9F8u;
        // 0x29f9fc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f9f8) {
            ctx->pc = 0x29FA08u;
            goto label_29fa08;
        }
    }
    ctx->pc = 0x29FA00u;
    // 0x29fa00: 0x3e00008  jr          $ra
    ctx->pc = 0x29FA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FA00u;
        // 0x29fa04: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29FA08u;
label_29fa08:
    // 0x29fa08: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x29fa08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x29fa0c: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x29fa0cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x29fa10: 0x28c20040  slti        $v0, $a2, 0x40
    ctx->pc = 0x29fa10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x29fa14: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x29FA14u;
    {
        const bool branch_taken_0x29fa14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FA14u;
        // 0x29fa18: 0x671821  addu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fa14) {
            ctx->pc = 0x29F9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f9e8;
        }
    }
    ctx->pc = 0x29FA1Cu;
    // 0x29fa1c: 0x3e00008  jr          $ra
    ctx->pc = 0x29FA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FA1Cu;
        // 0x29fa20: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29FA24u;
    // 0x29fa24: 0x0  nop
    ctx->pc = 0x29fa24u;
    // NOP
    ctx->pc = 0x29fa28u;
}
