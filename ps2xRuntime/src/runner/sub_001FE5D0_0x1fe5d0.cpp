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

// Function: sub_001FE5D0
// Address: 0x1fe5d0 - 0x1fe640
void sub_001FE5D0_0x1fe5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE5D0_0x1fe5d0");
#endif

    switch (ctx->pc) {
        case 0x1fe604u: goto label_1fe604;
        default: break;
    }

    ctx->pc = 0x1fe5d0u;

    // 0x1fe5d0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1fe5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1fe5d4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1fe5d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe5d8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1fe5d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe5dc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1fe5dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fe5e0: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x1fe5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
    // 0x1fe5e4: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x1fe5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5DD85Cu));
    // 0x1fe5e8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE5E8u;
    {
        const bool branch_taken_0x1fe5e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5E8u;
        // 0x1fe5ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe5e8) {
            ctx->pc = 0x1FE600u;
            goto label_1fe600;
        }
    }
    ctx->pc = 0x1FE5F0u;
    // 0x1fe5f0: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE5F0u;
    {
        const bool branch_taken_0x1fe5f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5F0u;
        // 0x1fe5f4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe5f0) {
            ctx->pc = 0x1FE604u;
            goto label_1fe604;
        }
    }
    ctx->pc = 0x1FE5F8u;
    // 0x1fe5f8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1FE5F8u;
    {
        const bool branch_taken_0x1fe5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5F8u;
        // 0x1fe5fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe5f8) {
            ctx->pc = 0x1FE634u;
            goto label_1fe634;
        }
    }
    ctx->pc = 0x1FE600u;
label_1fe600:
    // 0x1fe600: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fe600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1fe604:
    // 0x1fe604: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x1fe604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1fe608: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FE608u;
    {
        const bool branch_taken_0x1fe608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE608u;
        // 0x1fe60c: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe608) {
            ctx->pc = 0x1FE634u;
            goto label_1fe634;
        }
    }
    ctx->pc = 0x1FE610u;
    // 0x1fe610: 0x2503d810  addiu       $v1, $t0, -0x27F0
    ctx->pc = 0x1fe610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957072));
    // 0x1fe614: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x1fe614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1fe618: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fe618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fe61c: 0x8c64004c  lw          $a0, 0x4C($v1)
    ctx->pc = 0x1fe61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1fe620: 0x5080fff8  beql        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FE620u;
    {
        const bool branch_taken_0x1fe620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe620) {
            ctx->pc = 0x1FE624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE620u;
            // 0x1fe624: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE604u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe604;
        }
    }
    ctx->pc = 0x1FE628u;
    // 0x1fe628: 0x50a6fff6  beql        $a1, $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x1FE628u;
    {
        const bool branch_taken_0x1fe628 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x1fe628) {
            ctx->pc = 0x1FE62Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE628u;
            // 0x1fe62c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE604u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe604;
        }
    }
    ctx->pc = 0x1FE630u;
    // 0x1fe630: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1fe630u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fe634:
    // 0x1fe634: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE634u;
        // 0x1fe638: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE63Cu;
    // 0x1fe63c: 0x0  nop
    ctx->pc = 0x1fe63cu;
    // NOP
    ctx->pc = 0x1fe640u;
}
