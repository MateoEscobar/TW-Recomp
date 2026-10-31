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

// Function: sub_001B3918
// Address: 0x1b3918 - 0x1b3940
void sub_001B3918_0x1b3918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3918_0x1b3918");
#endif

    switch (ctx->pc) {
        case 0x1b3934u: goto label_1b3934;
        default: break;
    }

    ctx->pc = 0x1b3918u;

    // 0x1b3918: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b3918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b391c: 0x34028dd0  ori         $v0, $zero, 0x8DD0
    ctx->pc = 0x1b391cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36304);
    // 0x1b3920: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b3920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3924: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1b3924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b3928: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b3928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b392c: 0xc0722c2  jal         func_1C8B08
    ctx->pc = 0x1B392Cu;
    SET_GPR_U32(ctx, 31, 0x1B3934u);
    ctx->pc = 0x1B3930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B392Cu;
    // 0x1b3930: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8B08u, 0x1B392Cu, 0x1B3934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3934u;
label_1b3934:
    // 0x1b3934: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b3934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3938: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3938u;
        // 0x1b393c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3940u;
}
