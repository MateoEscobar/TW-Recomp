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

// Function: sub_0041F030
// Address: 0x41f030 - 0x41f070
void sub_0041F030_0x41f030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041F030_0x41f030");
#endif

    switch (ctx->pc) {
        case 0x41f060u: goto label_41f060;
        default: break;
    }

    ctx->pc = 0x41f030u;

    // 0x41f030: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x41f030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x41f034: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x41f034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x41f038: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x41f038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x41f03c: 0x8c66489c  lw          $a2, 0x489C($v1)
    ctx->pc = 0x41f03cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
    // 0x41f040: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x41f040u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f044: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41f044u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41f048: 0x82380b  movn        $a3, $a0, $v0
    ctx->pc = 0x41f048u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x41f04c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41f04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41f050: 0x24c40480  addiu       $a0, $a2, 0x480
    ctx->pc = 0x41f050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1152));
    // 0x41f054: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x41f054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x41f058: 0xc107a76  jal         func_41E9D8
    ctx->pc = 0x41F058u;
    SET_GPR_U32(ctx, 31, 0x41F060u);
    ctx->pc = 0x41F05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F058u;
    // 0x41f05c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E9D8u, 0x41F058u, 0x41F060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F060u;
label_41f060:
    // 0x41f060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41f060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41f064: 0x3e00008  jr          $ra
    ctx->pc = 0x41F064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F064u;
        // 0x41f068: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41F06Cu;
    // 0x41f06c: 0x0  nop
    ctx->pc = 0x41f06cu;
    // NOP
    ctx->pc = 0x41f070u;
}
