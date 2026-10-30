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

// Function: sub_003A1630
// Address: 0x3a1630 - 0x3a1660
void sub_003A1630_0x3a1630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1630_0x3a1630");
#endif

    ctx->pc = 0x3a1630u;

    // 0x3a1630: 0xa485006e  sh          $a1, 0x6E($a0)
    ctx->pc = 0x3a1630u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 110), (uint16_t)GPR_U32(ctx, 5));
    // 0x3a1634: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x3a1634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
    // 0x3a1638: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x3a1638u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x3a163c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a163cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a1640: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x3a1640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3a1644: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a1644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a1648: 0x0  nop
    ctx->pc = 0x3a1648u;
    // NOP
    // 0x3a164c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a164cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a1650: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a1650u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a1654: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1654u;
        // 0x3a1658: 0xe4800064  swc1        $f0, 0x64($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A165Cu;
    // 0x3a165c: 0x0  nop
    ctx->pc = 0x3a165cu;
    // NOP
    ctx->pc = 0x3a1660u;
}
