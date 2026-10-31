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

// Function: sub_00465CD0
// Address: 0x465cd0 - 0x465d00
void sub_00465CD0_0x465cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465CD0_0x465cd0");
#endif

    switch (ctx->pc) {
        case 0x465cf4u: goto label_465cf4;
        default: break;
    }

    ctx->pc = 0x465cd0u;

    // 0x465cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x465cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x465cd4: 0x8f828494  lw          $v0, -0x7B6C($gp)
    ctx->pc = 0x465cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935700)));
    // 0x465cd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x465cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x465cdc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x465cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465ce0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x465ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x465ce4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x465ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x465ce8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x465ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x465cec: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x465CECu;
    SET_GPR_U32(ctx, 31, 0x465CF4u);
    ctx->pc = 0x465CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x465CECu;
    // 0x465cf0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x465CECu, 0x465CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465CF4u;
label_465cf4:
    // 0x465cf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x465cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x465cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x465CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x465CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465CF8u;
        // 0x465cfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x465D00u;
}
