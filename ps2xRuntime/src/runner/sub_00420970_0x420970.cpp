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

// Function: sub_00420970
// Address: 0x420970 - 0x4209a0
void sub_00420970_0x420970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420970_0x420970");
#endif

    switch (ctx->pc) {
        case 0x420994u: goto label_420994;
        default: break;
    }

    ctx->pc = 0x420970u;

    // 0x420970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x420970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x420974: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x420974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x420978: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x420978u;
    {
        const bool branch_taken_0x420978 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x42097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420978u;
        // 0x42097c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420978) {
            ctx->pc = 0x420994u;
            goto label_420994;
        }
    }
    ctx->pc = 0x420980u;
    // 0x420980: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x420980u;
    {
        const bool branch_taken_0x420980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x420984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420980u;
        // 0x420984: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420980) {
            ctx->pc = 0x420998u;
            goto label_420998;
        }
    }
    ctx->pc = 0x420988u;
    // 0x420988: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x420988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x42098c: 0xc107dac  jal         func_41F6B0
    ctx->pc = 0x42098Cu;
    SET_GPR_U32(ctx, 31, 0x420994u);
    ctx->pc = 0x420990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42098Cu;
    // 0x420990: 0x2484e2f8  addiu       $a0, $a0, -0x1D08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F6B0u, 0x42098Cu, 0x420994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420994u;
label_420994:
    // 0x420994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x420994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_420998:
    // 0x420998: 0x3e00008  jr          $ra
    ctx->pc = 0x420998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420998u;
        // 0x42099c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4209A0u;
}
