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

// Function: sub_00443328
// Address: 0x443328 - 0x443390
void sub_00443328_0x443328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443328_0x443328");
#endif

    switch (ctx->pc) {
        case 0x443364u: goto label_443364;
        case 0x443374u: goto label_443374;
        default: break;
    }

    ctx->pc = 0x443328u;

    // 0x443328: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x443328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x44332c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x44332cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x443330: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x443330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x443334: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x443334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x443338: 0x2442ddd0  addiu       $v0, $v0, -0x2230
    ctx->pc = 0x443338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958544));
    // 0x44333c: 0x24a5dde0  addiu       $a1, $a1, -0x2220
    ctx->pc = 0x44333cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958560));
    // 0x443340: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x443340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x443344: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x443344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443348: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x443348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x44334c: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x44334cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x443350: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x443350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x443354: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x443354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x443358: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x443358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x44335c: 0xc10f428  jal         func_43D0A0
    ctx->pc = 0x44335Cu;
    SET_GPR_U32(ctx, 31, 0x443364u);
    ctx->pc = 0x443360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44335Cu;
    // 0x443360: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0A0u, 0x44335Cu, 0x443364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443364u;
label_443364:
    // 0x443364: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x443364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
    // 0x443368: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x443368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x44336c: 0xc10f428  jal         func_43D0A0
    ctx->pc = 0x44336Cu;
    SET_GPR_U32(ctx, 31, 0x443374u);
    ctx->pc = 0x443370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44336Cu;
    // 0x443370: 0xac628f28  sw          $v0, -0x70D8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294938408), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0A0u, 0x44336Cu, 0x443374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443374u;
label_443374:
    // 0x443374: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x443374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
    // 0x443378: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x443378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x44337c: 0xac628f2c  sw          $v0, -0x70D4($v1)
    ctx->pc = 0x44337cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x518F2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x518F2Cu, _value); } while (0);
    // 0x443380: 0x3e00008  jr          $ra
    ctx->pc = 0x443380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443380u;
        // 0x443384: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443388u;
    // 0x443388: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x443388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x44338c: 0x0  nop
    ctx->pc = 0x44338cu;
    // NOP
    ctx->pc = 0x443390u;
}
