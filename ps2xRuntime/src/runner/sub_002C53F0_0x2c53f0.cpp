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

// Function: sub_002C53F0
// Address: 0x2c53f0 - 0x2c5450
void sub_002C53F0_0x2c53f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C53F0_0x2c53f0");
#endif

    ctx->pc = 0x2c53f0u;

    // 0x2c53f0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c53f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c53f4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2c53f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2c53f8: 0x246306f0  addiu       $v1, $v1, 0x6F0
    ctx->pc = 0x2c53f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1776));
    // 0x2c53fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c53fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c5400: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2c5400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2c5404: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2c5404u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2c5408: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c5408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c540c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2c540cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2c5410: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2c5410u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c5414: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2c5414u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c5418: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2c5418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c541c: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2c541cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c5420: 0xac870020  sw          $a3, 0x20($a0)
    ctx->pc = 0x2c5420u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
    // 0x2c5424: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x2c5424u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x2c5428: 0xac880024  sw          $t0, 0x24($a0)
    ctx->pc = 0x2c5428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 8));
    // 0x2c542c: 0xac890028  sw          $t1, 0x28($a0)
    ctx->pc = 0x2c542cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 9));
    // 0x2c5430: 0xe48c0030  swc1        $f12, 0x30($a0)
    ctx->pc = 0x2c5430u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x2c5434: 0xac850034  sw          $a1, 0x34($a0)
    ctx->pc = 0x2c5434u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
    // 0x2c5438: 0xa08a0038  sb          $t2, 0x38($a0)
    ctx->pc = 0x2c5438u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 56), (uint8_t)GPR_U32(ctx, 10));
    // 0x2c543c: 0xa08b0039  sb          $t3, 0x39($a0)
    ctx->pc = 0x2c543cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 57), (uint8_t)GPR_U32(ctx, 11));
    // 0x2c5440: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x2c5440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x2c5444: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5444u;
        // 0x2c5448: 0xa080003a  sb          $zero, 0x3A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 58), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C544Cu;
    // 0x2c544c: 0x0  nop
    ctx->pc = 0x2c544cu;
    // NOP
    ctx->pc = 0x2c5450u;
}
