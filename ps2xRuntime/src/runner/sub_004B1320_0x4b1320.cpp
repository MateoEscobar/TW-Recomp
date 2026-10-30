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

// Function: sub_004B1320
// Address: 0x4b1320 - 0x4b1368
void sub_004B1320_0x4b1320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B1320_0x4b1320");
#endif

    ctx->pc = 0x4b1320u;

    // 0x4b1320: 0x3c02fbad  lui         $v0, 0xFBAD
    ctx->pc = 0x4b1320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64429 << 16));
    // 0x4b1324: 0xa4800048  sh          $zero, 0x48($a0)
    ctx->pc = 0x4b1324u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 72), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b1328: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x4b1328u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4b132c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x4b132cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x4b1330: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4b1330u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x4b1334: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x4b1334u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x4b1338: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x4b1338u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x4b133c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x4b133cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x4b1340: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x4b1340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x4b1344: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x4b1344u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x4b1348: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x4b1348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x4b134c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x4b134cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x4b1350: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x4b1350u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x4b1354: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x4b1354u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x4b1358: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x4b1358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x4b135c: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x4b135cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x4b1360: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1360u;
        // 0x4b1364: 0xac800030  sw          $zero, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1368u;
}
