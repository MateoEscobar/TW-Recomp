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

// Function: sub_004308A0
// Address: 0x4308a0 - 0x430908
void sub_004308A0_0x4308a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004308A0_0x4308a0");
#endif

    ctx->pc = 0x4308a0u;

    // 0x4308a0: 0x7c900000  sq          $s0, 0x0($a0)
    ctx->pc = 0x4308a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 16));
    // 0x4308a4: 0x7c910010  sq          $s1, 0x10($a0)
    ctx->pc = 0x4308a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 17));
    // 0x4308a8: 0x7c920020  sq          $s2, 0x20($a0)
    ctx->pc = 0x4308a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 18));
    // 0x4308ac: 0x7c930030  sq          $s3, 0x30($a0)
    ctx->pc = 0x4308acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 19));
    // 0x4308b0: 0x7c940040  sq          $s4, 0x40($a0)
    ctx->pc = 0x4308b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 20));
    // 0x4308b4: 0x7c950050  sq          $s5, 0x50($a0)
    ctx->pc = 0x4308b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 21));
    // 0x4308b8: 0x7c960060  sq          $s6, 0x60($a0)
    ctx->pc = 0x4308b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 22));
    // 0x4308bc: 0x7c970070  sq          $s7, 0x70($a0)
    ctx->pc = 0x4308bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 23));
    // 0x4308c0: 0x7c9e0080  sq          $fp, 0x80($a0)
    ctx->pc = 0x4308c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 30));
    // 0x4308c4: 0xe4940090  swc1        $f20, 0x90($a0)
    ctx->pc = 0x4308c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x4308c8: 0xe4950094  swc1        $f21, 0x94($a0)
    ctx->pc = 0x4308c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x4308cc: 0xe4960098  swc1        $f22, 0x98($a0)
    ctx->pc = 0x4308ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x4308d0: 0xe497009c  swc1        $f23, 0x9C($a0)
    ctx->pc = 0x4308d0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x4308d4: 0xe49800a0  swc1        $f24, 0xA0($a0)
    ctx->pc = 0x4308d4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x4308d8: 0xe49900a4  swc1        $f25, 0xA4($a0)
    ctx->pc = 0x4308d8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x4308dc: 0xe49a00a8  swc1        $f26, 0xA8($a0)
    ctx->pc = 0x4308dcu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
    // 0x4308e0: 0xe49b00ac  swc1        $f27, 0xAC($a0)
    ctx->pc = 0x4308e0u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
    // 0x4308e4: 0xe49c00b0  swc1        $f28, 0xB0($a0)
    ctx->pc = 0x4308e4u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 176), bits); }
    // 0x4308e8: 0xe49d00b4  swc1        $f29, 0xB4($a0)
    ctx->pc = 0x4308e8u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 180), bits); }
    // 0x4308ec: 0xe49e00b8  swc1        $f30, 0xB8($a0)
    ctx->pc = 0x4308ecu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 184), bits); }
    // 0x4308f0: 0xe49f00bc  swc1        $f31, 0xBC($a0)
    ctx->pc = 0x4308f0u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 188), bits); }
    // 0x4308f4: 0x7c9d00c0  sq          $sp, 0xC0($a0)
    ctx->pc = 0x4308f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), GPR_VEC(ctx, 29));
    // 0x4308f8: 0x7c9f00d0  sq          $ra, 0xD0($a0)
    ctx->pc = 0x4308f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 208), GPR_VEC(ctx, 31));
    // 0x4308fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4308fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430900: 0x3e00008  jr          $ra
    ctx->pc = 0x430900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x430900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x430908u;
}
