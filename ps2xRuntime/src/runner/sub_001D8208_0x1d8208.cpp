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

// Function: sub_001D8208
// Address: 0x1d8208 - 0x1d8258
void sub_001D8208_0x1d8208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8208_0x1d8208");
#endif

    ctx->pc = 0x1d8208u;

    // 0x1d8208: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x1d8208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x1d820c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d820cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8210: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D8210u;
    {
        const bool branch_taken_0x1d8210 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8210u;
        // 0x1d8214: 0xac460840  sw          $a2, 0x840($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2112), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8210) {
            ctx->pc = 0x1D8234u;
            goto label_1d8234;
        }
    }
    ctx->pc = 0x1D8218u;
    // 0x1d8218: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d8218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d821c: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x1d821cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x1d8220: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x1d8220u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x1d8224: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1d8224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1d8228: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1d8228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d822c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D822Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D822Cu;
        // 0x1d8230: 0xac867aa8  sw          $a2, 0x7AA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 31400), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D822Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8234u;
label_1d8234:
    // 0x1d8234: 0x14a60006  bne         $a1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D8234u;
    {
        const bool branch_taken_0x1d8234 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x1D8238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8234u;
        // 0x1d8238: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8234) {
            ctx->pc = 0x1D8250u;
            goto label_1d8250;
        }
    }
    ctx->pc = 0x1D823Cu;
    // 0x1d823c: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x1d823cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x1d8240: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x1d8240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    // 0x1d8244: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1d8244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1d8248: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1d8248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d824c: 0xac807aa8  sw          $zero, 0x7AA8($a0)
    ctx->pc = 0x1d824cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 31400), GPR_U32(ctx, 0));
label_1d8250:
    // 0x1d8250: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8258u;
}
