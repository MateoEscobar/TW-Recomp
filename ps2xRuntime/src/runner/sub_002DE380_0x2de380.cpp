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

// Function: sub_002DE380
// Address: 0x2de380 - 0x2de3c8
void sub_002DE380_0x2de380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE380_0x2de380");
#endif

    ctx->pc = 0x2de380u;

    // 0x2de380: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x2de380u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2de384: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2de384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2de388: 0x3c080054  lui         $t0, 0x54
    ctx->pc = 0x2de388u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)84 << 16));
    // 0x2de38c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2de38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2de390: 0x25081d70  addiu       $t0, $t0, 0x1D70
    ctx->pc = 0x2de390u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 7536));
    // 0x2de394: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2de394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2de398: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2de398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de39c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2de39cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2de3a0: 0xac88000c  sw          $t0, 0xC($a0)
    ctx->pc = 0x2de3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 8));
    // 0x2de3a4: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x2de3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x2de3a8: 0xe48c0014  swc1        $f12, 0x14($a0)
    ctx->pc = 0x2de3a8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2de3ac: 0xac870018  sw          $a3, 0x18($a0)
    ctx->pc = 0x2de3acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 7));
    // 0x2de3b0: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2de3b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2de3b4: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2de3b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2de3b8: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x2de3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2de3bc: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x2de3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x2de3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE3C0u;
        // 0x2de3c4: 0xa4800024  sh          $zero, 0x24($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE3C8u;
}
