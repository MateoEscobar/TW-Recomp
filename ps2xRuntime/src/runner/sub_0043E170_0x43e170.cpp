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

// Function: sub_0043E170
// Address: 0x43e170 - 0x43e1b0
void sub_0043E170_0x43e170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043E170_0x43e170");
#endif

    ctx->pc = 0x43e170u;

    // 0x43e170: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x43e170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e174: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x43e174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x43e178: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x43e178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x43e17c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x43e17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x43e180: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x43e180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x43e184: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x43e184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x43e188: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x43e188u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x43e18c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x43e18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x43e190: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x43e190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x43e194: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x43E194u;
    {
        const bool branch_taken_0x43e194 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x43E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E194u;
        // 0x43e198: 0xaca4000c  sw          $a0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e194) {
            ctx->pc = 0x43E1A4u;
            goto label_43e1a4;
        }
    }
    ctx->pc = 0x43E19Cu;
    // 0x43e19c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x43e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x43e1a0: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x43e1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_43e1a4:
    // 0x43e1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x43E1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43E1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43E1ACu;
    // 0x43e1ac: 0x0  nop
    ctx->pc = 0x43e1acu;
    // NOP
    ctx->pc = 0x43e1b0u;
}
