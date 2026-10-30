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

// Function: sub_004B14F0
// Address: 0x4b14f0 - 0x4b1538
void sub_004B14F0_0x4b14f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B14F0_0x4b14f0");
#endif

    switch (ctx->pc) {
        case 0x4b1510u: goto label_4b1510;
        default: break;
    }

    ctx->pc = 0x4b14f0u;

    // 0x4b14f0: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x4b14f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4b14f4: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x4b14f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4b14f8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4B14F8u;
    {
        const bool branch_taken_0x4b14f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B14FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B14F8u;
        // 0x4b14fc: 0x31027  nor         $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b14f8) {
            ctx->pc = 0x4B1530u;
            goto label_4b1530;
        }
    }
    ctx->pc = 0x4B1500u;
    // 0x4b1500: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x4b1500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4b1504: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x4b1504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b1508: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4b1508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4b150c: 0x0  nop
    ctx->pc = 0x4b150cu;
    // NOP
label_4b1510:
    // 0x4b1510: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x4b1510u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b1514: 0x14480003  bne         $v0, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B1514u;
    {
        const bool branch_taken_0x4b1514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x4B1518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1514u;
        // 0x4b1518: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1514) {
            ctx->pc = 0x4B1524u;
            goto label_4b1524;
        }
    }
    ctx->pc = 0x4B151Cu;
    // 0x4b151c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B151Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B151Cu;
        // 0x4b1520: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B151Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1524u;
label_4b1524:
    // 0x4b1524: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x4b1524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4b1528: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4B1528u;
    {
        const bool branch_taken_0x4b1528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1528u;
        // 0x4b152c: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1528) {
            ctx->pc = 0x4B1510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1510;
        }
    }
    ctx->pc = 0x4B1530u;
label_4b1530:
    // 0x4b1530: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1530u;
        // 0x4b1534: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1538u;
}
