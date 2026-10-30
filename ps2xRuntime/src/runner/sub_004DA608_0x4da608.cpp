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

// Function: sub_004DA608
// Address: 0x4da608 - 0x4da640
void sub_004DA608_0x4da608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DA608_0x4da608");
#endif

    switch (ctx->pc) {
        case 0x4da62cu: goto label_4da62c;
        default: break;
    }

    ctx->pc = 0x4da608u;

    // 0x4da608: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4da608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4da60c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4da60cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4da610: 0x24424298  addiu       $v0, $v0, 0x4298
    ctx->pc = 0x4da610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17048));
    // 0x4da614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4da614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4da618: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x4da618u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4da61c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DA61Cu;
    {
        const bool branch_taken_0x4da61c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DA620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA61Cu;
        // 0x4da620: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da61c) {
            ctx->pc = 0x4DA62Cu;
            goto label_4da62c;
        }
    }
    ctx->pc = 0x4DA624u;
    // 0x4da624: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4DA624u;
    SET_GPR_U32(ctx, 31, 0x4DA62Cu);
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4DA624u, 0x4DA62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DA62Cu;
label_4da62c:
    // 0x4da62c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4da62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4da630: 0x3e00008  jr          $ra
    ctx->pc = 0x4DA630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DA634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA630u;
        // 0x4da634: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DA630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DA638u;
    // 0x4da638: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4da638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4da63c: 0x0  nop
    ctx->pc = 0x4da63cu;
    // NOP
    ctx->pc = 0x4da640u;
}
