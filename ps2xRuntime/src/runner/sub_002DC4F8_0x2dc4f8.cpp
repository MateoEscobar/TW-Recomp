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

// Function: sub_002DC4F8
// Address: 0x2dc4f8 - 0x2dc540
void sub_002DC4F8_0x2dc4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC4F8_0x2dc4f8");
#endif

    ctx->pc = 0x2dc4f8u;

    // 0x2dc4f8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2dc4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2dc4fc: 0x3c080054  lui         $t0, 0x54
    ctx->pc = 0x2dc4fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)84 << 16));
    // 0x2dc500: 0x25081f50  addiu       $t0, $t0, 0x1F50
    ctx->pc = 0x2dc500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8016));
    // 0x2dc504: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2dc504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2dc508: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2dc508u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc50c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2dc50cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2dc510: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2dc510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc514: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2dc514u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2dc518: 0xac88000c  sw          $t0, 0xC($a0)
    ctx->pc = 0x2dc518u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 8));
    // 0x2dc51c: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x2dc51cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x2dc520: 0xac870024  sw          $a3, 0x24($a0)
    ctx->pc = 0x2dc520u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 7));
    // 0x2dc524: 0xe48c0028  swc1        $f12, 0x28($a0)
    ctx->pc = 0x2dc524u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x2dc528: 0xac890034  sw          $t1, 0x34($a0)
    ctx->pc = 0x2dc528u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 9));
    // 0x2dc52c: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2dc52cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc530: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2dc530u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc534: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x2dc534u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x2dc538: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC538u;
        // 0x2dc53c: 0xac800030  sw          $zero, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC540u;
}
