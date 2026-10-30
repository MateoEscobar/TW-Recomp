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

// Function: sub_002FDC28
// Address: 0x2fdc28 - 0x2fdc68
void sub_002FDC28_0x2fdc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDC28_0x2fdc28");
#endif

    ctx->pc = 0x2fdc28u;

    // 0x2fdc28: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2fdc28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x2fdc2c: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x2fdc2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x2fdc30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fdc30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fdc34: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2fdc34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2fdc38: 0x24633160  addiu       $v1, $v1, 0x3160
    ctx->pc = 0x2fdc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12640));
    // 0x2fdc3c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2fdc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2fdc40: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2fdc40u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2fdc44: 0xa4860004  sh          $a2, 0x4($a0)
    ctx->pc = 0x2fdc44u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x2fdc48: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2fdc48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdc4c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2fdc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2fdc50: 0xe48d0010  swc1        $f13, 0x10($a0)
    ctx->pc = 0x2fdc50u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2fdc54: 0xe48c000c  swc1        $f12, 0xC($a0)
    ctx->pc = 0x2fdc54u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2fdc58: 0xa0800006  sb          $zero, 0x6($a0)
    ctx->pc = 0x2fdc58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fdc5c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2fdc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2fdc60: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDC60u;
        // 0x2fdc64: 0xa0800018  sb          $zero, 0x18($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDC68u;
}
