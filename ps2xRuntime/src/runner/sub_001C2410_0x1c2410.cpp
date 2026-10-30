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

// Function: sub_001C2410
// Address: 0x1c2410 - 0x1c2470
void sub_001C2410_0x1c2410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2410_0x1c2410");
#endif

    switch (ctx->pc) {
        case 0x1c2460u: goto label_1c2460;
        default: break;
    }

    ctx->pc = 0x1c2410u;

    // 0x1c2410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c2410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c2414: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1c2414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1c2418: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1c2418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c241c: 0xa3a70000  sb          $a3, 0x0($sp)
    ctx->pc = 0x1c241cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1c2420: 0xa3a30002  sb          $v1, 0x2($sp)
    ctx->pc = 0x1c2420u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c2424: 0x24060073  addiu       $a2, $zero, 0x73
    ctx->pc = 0x1c2424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x1c2428: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x1c2428u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c242c: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x1c242cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1c2430: 0xa3a70003  sb          $a3, 0x3($sp)
    ctx->pc = 0x1c2430u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x1c2434: 0x240800b7  addiu       $t0, $zero, 0xB7
    ctx->pc = 0x1c2434u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
    // 0x1c2438: 0xa3a60004  sb          $a2, 0x4($sp)
    ctx->pc = 0x1c2438u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 6));
    // 0x1c243c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1c243cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c2440: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c2440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c2444: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x1c2444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1c2448: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1c2448u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c244c: 0xa0470003  sb          $a3, 0x3($v0)
    ctx->pc = 0x1c244cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x1c2450: 0xa0480001  sb          $t0, 0x1($v0)
    ctx->pc = 0x1c2450u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x1c2454: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1c2454u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c2458: 0xc0686fa  jal         func_1A1BE8
    ctx->pc = 0x1C2458u;
    SET_GPR_U32(ctx, 31, 0x1C2460u);
    ctx->pc = 0x1C245Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2458u;
    // 0x1c245c: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BE8u, 0x1C2458u, 0x1C2460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2460u;
label_1c2460:
    // 0x1c2460: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c2460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2464: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2464u;
        // 0x1c2468: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C246Cu;
    // 0x1c246c: 0x0  nop
    ctx->pc = 0x1c246cu;
    // NOP
    ctx->pc = 0x1c2470u;
}
