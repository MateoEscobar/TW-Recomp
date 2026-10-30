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

// Function: sub_00426E28
// Address: 0x426e28 - 0x426e70
void sub_00426E28_0x426e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00426E28_0x426e28");
#endif

    switch (ctx->pc) {
        case 0x426e38u: goto label_426e38;
        case 0x426e44u: goto label_426e44;
        case 0x426e50u: goto label_426e50;
        case 0x426e5cu: goto label_426e5c;
        default: break;
    }

    ctx->pc = 0x426e28u;

    // 0x426e28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x426e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x426e2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x426e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x426e30: 0xc10a3cc  jal         func_428F30
    ctx->pc = 0x426E30u;
    SET_GPR_U32(ctx, 31, 0x426E38u);
    ctx->pc = 0x428F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428F30u, 0x426E30u, 0x426E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426E38u;
label_426e38:
    // 0x426e38: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x426e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x426e3c: 0xc109cfe  jal         func_4273F8
    ctx->pc = 0x426E3Cu;
    SET_GPR_U32(ctx, 31, 0x426E44u);
    ctx->pc = 0x426E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426E3Cu;
    // 0x426e40: 0xac6251b4  sw          $v0, 0x51B4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 20916), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4273F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4273F8u, 0x426E3Cu, 0x426E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426E44u;
label_426e44:
    // 0x426e44: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x426e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x426e48: 0xc10a020  jal         func_428080
    ctx->pc = 0x426E48u;
    SET_GPR_U32(ctx, 31, 0x426E50u);
    ctx->pc = 0x426E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426E48u;
    // 0x426e4c: 0xac6251bc  sw          $v0, 0x51BC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 20924), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428080u, 0x426E48u, 0x426E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426E50u;
label_426e50:
    // 0x426e50: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x426e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x426e54: 0xc10a630  jal         func_4298C0
    ctx->pc = 0x426E54u;
    SET_GPR_U32(ctx, 31, 0x426E5Cu);
    ctx->pc = 0x426E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426E54u;
    // 0x426e58: 0xac6251c0  sw          $v0, 0x51C0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 20928), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4298C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4298C0u, 0x426E54u, 0x426E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426E5Cu;
label_426e5c:
    // 0x426e5c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x426e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x426e60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x426e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x426e64: 0xac6251b8  sw          $v0, 0x51B8($v1)
    ctx->pc = 0x426e64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5151B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5151B8u, _value); } while (0);
    // 0x426e68: 0x3e00008  jr          $ra
    ctx->pc = 0x426E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x426E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426E68u;
        // 0x426e6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x426E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x426E70u;
}
