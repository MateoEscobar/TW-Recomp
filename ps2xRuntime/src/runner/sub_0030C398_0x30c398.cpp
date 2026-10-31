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

// Function: sub_0030C398
// Address: 0x30c398 - 0x30c468
void sub_0030C398_0x30c398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C398_0x30c398");
#endif

    switch (ctx->pc) {
        case 0x30c40cu: goto label_30c40c;
        default: break;
    }

    ctx->pc = 0x30c398u;

    // 0x30c398: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x30c398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x30c39c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x30c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x30c3a0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x30c3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x30c3a4: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x30c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x30c3a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30c3a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c3ac: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x30c3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x30c3b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30c3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x30c3b4: 0x98c00  sll         $s1, $t1, 16
    ctx->pc = 0x30c3b4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x30c3b8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x30c3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x30c3bc: 0x3112ffff  andi        $s2, $t0, 0xFFFF
    ctx->pc = 0x30c3bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x30c3c0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x30c3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x30c3c4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x30c3c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c3c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30c3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30c3cc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x30c3ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c3d0: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x30c3d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x30c3d4: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x30c3d4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x30c3d8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x30c3d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x30c3dc: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x30c3dcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x30c3e0: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x30c3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x30c3e4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x30c3e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x30c3e8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x30c3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x30c3ec: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x30c3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x30c3f0: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x30c3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c3f4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x30c3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x30c3f8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x30c3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x30c3fc: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x30c3fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c400: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x30c400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x30c404: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x30C404u;
    SET_GPR_U32(ctx, 31, 0x30C40Cu);
    ctx->pc = 0x30C408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C404u;
    // 0x30c408: 0xae0b0008  sw          $t3, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x30C404u, 0x30C40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C40Cu;
label_30c40c:
    // 0x30c40c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x30c40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x30c410: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x30c410u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x30c414: 0x244235c0  addiu       $v0, $v0, 0x35C0
    ctx->pc = 0x30c414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13760));
    // 0x30c418: 0xe6150024  swc1        $f21, 0x24($s0)
    ctx->pc = 0x30c418u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x30c41c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x30c41cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x30c420: 0xa612002c  sh          $s2, 0x2C($s0)
    ctx->pc = 0x30c420u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 18));
    // 0x30c424: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30c424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c428: 0xa611002e  sh          $s1, 0x2E($s0)
    ctx->pc = 0x30c428u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 17));
    // 0x30c42c: 0xa2130030  sb          $s3, 0x30($s0)
    ctx->pc = 0x30c42cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 19));
    // 0x30c430: 0xa2140031  sb          $s4, 0x31($s0)
    ctx->pc = 0x30c430u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 49), (uint8_t)GPR_U32(ctx, 20));
    // 0x30c434: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x30c434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x30c438: 0xa2000032  sb          $zero, 0x32($s0)
    ctx->pc = 0x30c438u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c43c: 0xa2000033  sb          $zero, 0x33($s0)
    ctx->pc = 0x30c43cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 51), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c440: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x30c440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30c444: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x30c444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30c448: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30c448u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30c44c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x30c44cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30c450: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x30c450u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30c454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c458: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x30c458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x30c45c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x30c45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30c460: 0x3e00008  jr          $ra
    ctx->pc = 0x30C460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C460u;
        // 0x30c464: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C468u;
}
