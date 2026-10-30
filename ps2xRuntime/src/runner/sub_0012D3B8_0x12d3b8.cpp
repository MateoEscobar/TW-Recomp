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

// Function: sub_0012D3B8
// Address: 0x12d3b8 - 0x12d4e8
void sub_0012D3B8_0x12d3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D3B8_0x12d3b8");
#endif

    switch (ctx->pc) {
        case 0x12d420u: goto label_12d420;
        case 0x12d42cu: goto label_12d42c;
        case 0x12d478u: goto label_12d478;
        case 0x12d494u: goto label_12d494;
        case 0x12d4b0u: goto label_12d4b0;
        default: break;
    }

    ctx->pc = 0x12d3b8u;

    // 0x12d3b8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x12d3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x12d3bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12d3bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12d3c0: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x12d3c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x12d3c4: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x12d3c4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x12d3c8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x12d3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x12d3cc: 0x4600b032  c.eq.s      $f22, $f0
    ctx->pc = 0x12d3ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d3d0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x12d3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x12d3d4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x12d3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x12d3d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12d3d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d3dc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x12d3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12d3e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12d3e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d3e4: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x12d3e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x12d3e8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12d3e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d3ec: 0x45010034  bc1t        . + 4 + (0x34 << 2)
    ctx->pc = 0x12D3ECu;
    {
        const bool branch_taken_0x12d3ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12D3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D3ECu;
        // 0x12d3f0: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d3ec) {
            ctx->pc = 0x12D4C0u;
            goto label_12d4c0;
        }
    }
    ctx->pc = 0x12D3F4u;
    // 0x12d3f4: 0xc65401a0  lwc1        $f20, 0x1A0($s2)
    ctx->pc = 0x12d3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12d3f8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x12d3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x12d3fc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12d3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x12d400: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12d400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12d404: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x12d404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
    // 0x12d408: 0x4614b502  mul.s       $f20, $f22, $f20
    ctx->pc = 0x12d408u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x12d40c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x12d40cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x511740u));
    // 0x12d410: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x12d410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x12d414: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x12d414u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x12d418: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x12D418u;
    SET_GPR_U32(ctx, 31, 0x12D420u);
    ctx->pc = 0x12D41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D418u;
    // 0x12d41c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x12D418u, 0x12D420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D420u;
label_12d420:
    // 0x12d420: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12d420u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x12d424: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x12D424u;
    SET_GPR_U32(ctx, 31, 0x12D42Cu);
    ctx->pc = 0x12D428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D424u;
    // 0x12d428: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x12D424u, 0x12D42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D42Cu;
label_12d42c:
    // 0x12d42c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x12d42cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d430: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12d430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12d434: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x12d434u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12d438: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12d438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d43c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12d43cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12d440: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x12d440u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12d444: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x12d444u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12d448: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x12d448u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12d44c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x12d44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x12d450: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x12d450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x12d454: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12d454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d458: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x12d458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x12d45c: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x12d45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12d460: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x12d460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d464: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x12d464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d468: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x12d468u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x12d46c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x12d46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x12d470: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x12D470u;
    SET_GPR_U32(ctx, 31, 0x12D478u);
    ctx->pc = 0x12D474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D470u;
    // 0x12d474: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x12D470u, 0x12D478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D478u;
label_12d478:
    // 0x12d478: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x12d478u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d47c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12d47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12d480: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12d480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d484: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12d484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d488: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x12d488u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x12d48c: 0xc136b30  jal         func_4DACC0
    ctx->pc = 0x12D48Cu;
    SET_GPR_U32(ctx, 31, 0x12D494u);
    ctx->pc = 0x12D490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D48Cu;
    // 0x12d490: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x12D48Cu, 0x12D494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D494u;
label_12d494:
    // 0x12d494: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x12d494u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d498: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12d498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d49c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12d49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12d4a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12d4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d4a4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x12d4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x12d4a8: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x12D4A8u;
    SET_GPR_U32(ctx, 31, 0x12D4B0u);
    ctx->pc = 0x12D4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D4A8u;
    // 0x12d4ac: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x12D4A8u, 0x12D4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D4B0u;
label_12d4b0:
    // 0x12d4b0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x12d4b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d4b4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x12d4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x12d4b8: 0xe6560360  swc1        $f22, 0x360($s2)
    ctx->pc = 0x12d4b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 864), bits); }
    // 0x12d4bc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x12d4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_12d4c0:
    // 0x12d4c0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x12d4c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12d4c4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x12d4c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12d4c8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x12d4c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12d4cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12d4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12d4d0: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x12d4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x12d4d4: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x12d4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12d4d8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x12d4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12d4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x12D4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D4DCu;
        // 0x12d4e0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D4E4u;
    // 0x12d4e4: 0x0  nop
    ctx->pc = 0x12d4e4u;
    // NOP
    ctx->pc = 0x12d4e8u;
}
