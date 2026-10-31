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

// Function: sub_002DF250
// Address: 0x2df250 - 0x2df288
void sub_002DF250_0x2df250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF250_0x2df250");
#endif

    ctx->pc = 0x2df250u;

    // 0x2df250: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2df250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2df254: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2df254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2df258: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2df258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2df25c: 0x24631d10  addiu       $v1, $v1, 0x1D10
    ctx->pc = 0x2df25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7440));
    // 0x2df260: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2df260u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2df264: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2df264u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2df268: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2df268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df26c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2df26cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2df270: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x2df270u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x2df274: 0xe48c0014  swc1        $f12, 0x14($a0)
    ctx->pc = 0x2df274u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2df278: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2df278u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df27c: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2df27cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df280: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF280u;
        // 0x2df284: 0xa4800018  sh          $zero, 0x18($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF288u;
}
