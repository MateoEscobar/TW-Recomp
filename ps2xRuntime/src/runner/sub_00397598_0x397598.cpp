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

// Function: sub_00397598
// Address: 0x397598 - 0x3975c0
void sub_00397598_0x397598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397598_0x397598");
#endif

    switch (ctx->pc) {
        case 0x3975acu: goto label_3975ac;
        default: break;
    }

    ctx->pc = 0x397598u;

    // 0x397598: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x397598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39759c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x39759cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3975a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3975a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3975a4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x3975A4u;
    SET_GPR_U32(ctx, 31, 0x3975ACu);
    ctx->pc = 0x3975A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3975A4u;
    // 0x3975a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3975A4u, 0x3975ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3975ACu;
label_3975ac:
    // 0x3975ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3975acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3975b0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3975b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3975b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3975B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3975B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3975B4u;
        // 0x3975b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3975B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3975BCu;
    // 0x3975bc: 0x0  nop
    ctx->pc = 0x3975bcu;
    // NOP
    ctx->pc = 0x3975c0u;
}
