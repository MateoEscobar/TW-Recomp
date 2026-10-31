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

// Function: sub_004E4248
// Address: 0x4e4248 - 0x4e4280
void sub_004E4248_0x4e4248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4248_0x4e4248");
#endif

    switch (ctx->pc) {
        case 0x4e426cu: goto label_4e426c;
        default: break;
    }

    ctx->pc = 0x4e4248u;

    // 0x4e4248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e4248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e424c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4e424cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4e4250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e4250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e4254: 0x244298c8  addiu       $v0, $v0, -0x6738
    ctx->pc = 0x4e4254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940872));
    // 0x4e4258: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x4e4258u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4e425c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4E425Cu;
    {
        const bool branch_taken_0x4e425c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E425Cu;
        // 0x4e4260: 0xac820100  sw          $v0, 0x100($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e425c) {
            ctx->pc = 0x4E426Cu;
            goto label_4e426c;
        }
    }
    ctx->pc = 0x4E4264u;
    // 0x4e4264: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4E4264u;
    SET_GPR_U32(ctx, 31, 0x4E426Cu);
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4E4264u, 0x4E426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E426Cu;
label_4e426c:
    // 0x4e426c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e426cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e4270: 0x3e00008  jr          $ra
    ctx->pc = 0x4E4270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4270u;
        // 0x4e4274: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E4278u;
    // 0x4e4278: 0xac820044  sw          $v0, 0x44($a0)
    ctx->pc = 0x4e4278u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
    // 0x4e427c: 0x0  nop
    ctx->pc = 0x4e427cu;
    // NOP
    ctx->pc = 0x4e4280u;
}
