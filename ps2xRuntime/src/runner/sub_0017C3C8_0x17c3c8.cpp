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

// Function: sub_0017C3C8
// Address: 0x17c3c8 - 0x17c468
void sub_0017C3C8_0x17c3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C3C8_0x17c3c8");
#endif

    switch (ctx->pc) {
        case 0x17c3f0u: goto label_17c3f0;
        case 0x17c418u: goto label_17c418;
        default: break;
    }

    ctx->pc = 0x17c3c8u;

    // 0x17c3c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x17c3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x17c3cc: 0x14a20023  bne         $a1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x17C3CCu;
    {
        const bool branch_taken_0x17c3cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x17c3cc) {
            ctx->pc = 0x17C45Cu;
            goto label_17c45c;
        }
    }
    ctx->pc = 0x17C3D4u;
    // 0x17c3d4: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x17C3D4u;
    {
        const bool branch_taken_0x17c3d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C3D4u;
        // 0x17c3d8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c3d4) {
            ctx->pc = 0x17C45Cu;
            goto label_17c45c;
        }
    }
    ctx->pc = 0x17C3DCu;
    // 0x17c3dc: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x17c3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x17c3e0: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x17c3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x17c3e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17c3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17c3e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17c3ec: 0x0  nop
    ctx->pc = 0x17c3ecu;
    // NOP
label_17c3f0:
    // 0x17c3f0: 0x0  nop
    ctx->pc = 0x17c3f0u;
    // NOP
    // 0x17c3f4: 0x0  nop
    ctx->pc = 0x17c3f4u;
    // NOP
    // 0x17c3f8: 0x0  nop
    ctx->pc = 0x17c3f8u;
    // NOP
    // 0x17c3fc: 0x0  nop
    ctx->pc = 0x17c3fcu;
    // NOP
    // 0x17c400: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x17C400u;
    {
        const bool branch_taken_0x17c400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x17C404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C400u;
        // 0x17c404: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c400) {
            ctx->pc = 0x17C3F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c3f0;
        }
    }
    ctx->pc = 0x17C408u;
    // 0x17c408: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x17c408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17c40c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17c410: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17c410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17c414: 0x0  nop
    ctx->pc = 0x17c414u;
    // NOP
label_17c418:
    // 0x17c418: 0x0  nop
    ctx->pc = 0x17c418u;
    // NOP
    // 0x17c41c: 0x0  nop
    ctx->pc = 0x17c41cu;
    // NOP
    // 0x17c420: 0x0  nop
    ctx->pc = 0x17c420u;
    // NOP
    // 0x17c424: 0x0  nop
    ctx->pc = 0x17c424u;
    // NOP
    // 0x17c428: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x17C428u;
    {
        const bool branch_taken_0x17c428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x17C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C428u;
        // 0x17c42c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c428) {
            ctx->pc = 0x17C418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c418;
        }
    }
    ctx->pc = 0x17C430u;
    // 0x17c430: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x17c430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x17c434: 0x24a2de70  addiu       $v0, $a1, -0x2190
    ctx->pc = 0x17c434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958704));
    // 0x17c438: 0xa0a3de70  sb          $v1, -0x2190($a1)
    ctx->pc = 0x17c438u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294958704), (uint8_t)GPR_U32(ctx, 3));
    // 0x17c43c: 0x24c4de78  addiu       $a0, $a2, -0x2188
    ctx->pc = 0x17c43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958712));
    // 0x17c440: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x17c440u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x17c444: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x17c444u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x17c448: 0xa0c0de78  sb          $zero, -0x2188($a2)
    ctx->pc = 0x17c448u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294958712), (uint8_t)GPR_U32(ctx, 0));
    // 0x17c44c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x17c44cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x17c450: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x17c450u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x17c454: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x17c454u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x17c458: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x17c458u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_17c45c:
    // 0x17c45c: 0x3e00008  jr          $ra
    ctx->pc = 0x17C45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C464u;
    // 0x17c464: 0x0  nop
    ctx->pc = 0x17c464u;
    // NOP
    ctx->pc = 0x17c468u;
}
