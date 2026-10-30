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

// Function: sub_00390038
// Address: 0x390038 - 0x390068
void sub_00390038_0x390038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390038_0x390038");
#endif

    ctx->pc = 0x390038u;

    // 0x390038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x390038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39003c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x39003cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x390040: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x390040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x390044: 0x2463bd38  addiu       $v1, $v1, -0x42C8
    ctx->pc = 0x390044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950200));
    // 0x390048: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x390048u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x39004c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x39004cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x390050: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x390050u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
    // 0x390054: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x390054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x390058: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x390058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x39005c: 0x3e00008  jr          $ra
    ctx->pc = 0x39005Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39005Cu;
        // 0x390060: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39005Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390064u;
    // 0x390064: 0x0  nop
    ctx->pc = 0x390064u;
    // NOP
    ctx->pc = 0x390068u;
}
