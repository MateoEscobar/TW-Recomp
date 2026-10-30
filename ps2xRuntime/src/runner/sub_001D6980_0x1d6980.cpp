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

// Function: sub_001D6980
// Address: 0x1d6980 - 0x1d6a50
void sub_001D6980_0x1d6980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6980_0x1d6980");
#endif

    switch (ctx->pc) {
        case 0x1d69c0u: goto label_1d69c0;
        case 0x1d6a00u: goto label_1d6a00;
        case 0x1d6a2cu: goto label_1d6a2c;
        default: break;
    }

    ctx->pc = 0x1d6980u;

    // 0x1d6980: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1d6980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1d6984: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1d6984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1d6988: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d6988u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d698c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1d698cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1d6990: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1d6990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1d6994: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d6994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6998: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d6998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1d699c: 0x26510250  addiu       $s1, $s2, 0x250
    ctx->pc = 0x1d699cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
    // 0x1d69a0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d69a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d69a4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1d69a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1d69a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d69a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d69ac: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1d69acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1d69b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d69b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d69b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d69b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d69b8: 0xc073464  jal         func_1CD190
    ctx->pc = 0x1D69B8u;
    SET_GPR_U32(ctx, 31, 0x1D69C0u);
    ctx->pc = 0x1D69BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D69B8u;
    // 0x1d69bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD190u, 0x1D69B8u, 0x1D69C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D69C0u;
label_1d69c0:
    // 0x1d69c0: 0x265403f0  addiu       $s4, $s2, 0x3F0
    ctx->pc = 0x1d69c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1008));
    // 0x1d69c4: 0x7a2200b0  lq          $v0, 0xB0($s1)
    ctx->pc = 0x1d69c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x1d69c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d69c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d69cc: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1d69ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d69d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d69d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d69d4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1d69d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1d69d8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1d69d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d69dc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1d69dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d69e0: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x1d69e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d69e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1d69e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d69e8: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1d69e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d69ec: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1d69ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1d69f0: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x1d69f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d69f4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1d69f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d69f8: 0xc073464  jal         func_1CD190
    ctx->pc = 0x1D69F8u;
    SET_GPR_U32(ctx, 31, 0x1D6A00u);
    ctx->pc = 0x1D69FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D69F8u;
    // 0x1d69fc: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD190u, 0x1D69F8u, 0x1D6A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6A00u;
label_1d6a00:
    // 0x1d6a00: 0x7a8200b0  lq          $v0, 0xB0($s4)
    ctx->pc = 0x1d6a00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x1d6a04: 0x26440320  addiu       $a0, $s2, 0x320
    ctx->pc = 0x1d6a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
    // 0x1d6a08: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1d6a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d6a0c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1d6a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6a10: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1d6a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1d6a14: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d6a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6a18: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1d6a18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1d6a1c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1d6a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6a20: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1d6a20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d6a24: 0xc073464  jal         func_1CD190
    ctx->pc = 0x1D6A24u;
    SET_GPR_U32(ctx, 31, 0x1D6A2Cu);
    ctx->pc = 0x1D6A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6A24u;
    // 0x1d6a28: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD190u, 0x1D6A24u, 0x1D6A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6A2Cu;
label_1d6a2c:
    // 0x1d6a2c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1d6a2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d6a30: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1d6a30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d6a34: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1d6a34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d6a38: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d6a38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d6a3c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1d6a3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d6a40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d6a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6a44: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1d6a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d6a48: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A48u;
        // 0x1d6a4c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6A50u;
}
