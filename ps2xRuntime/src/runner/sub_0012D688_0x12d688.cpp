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

// Function: sub_0012D688
// Address: 0x12d688 - 0x12d7a8
void sub_0012D688_0x12d688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D688_0x12d688");
#endif

    switch (ctx->pc) {
        case 0x12d6dcu: goto label_12d6dc;
        case 0x12d6e8u: goto label_12d6e8;
        case 0x12d734u: goto label_12d734;
        case 0x12d750u: goto label_12d750;
        case 0x12d76cu: goto label_12d76c;
        default: break;
    }

    ctx->pc = 0x12d688u;

    // 0x12d688: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x12d688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x12d68c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x12d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x12d690: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x12d690u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x12d694: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x12d694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x12d698: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x12d698u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x12d69c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12d69cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x12d6a0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12d6a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12d6a4: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x12d6a4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x12d6a8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x12d6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x12d6ac: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x12d6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x12d6b0: 0x4614b502  mul.s       $f20, $f22, $f20
    ctx->pc = 0x12d6b0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x12d6b4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x12d6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x12d6b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12d6b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d6bc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x12d6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12d6c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12d6c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d6c4: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x12d6c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x12d6c8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12d6c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d6cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12d6ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x12d6d0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x12d6d0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x511740u));
    // 0x12d6d4: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x12D6D4u;
    SET_GPR_U32(ctx, 31, 0x12D6DCu);
    ctx->pc = 0x12D6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D6D4u;
    // 0x12d6d8: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x12D6D4u, 0x12D6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D6DCu;
label_12d6dc:
    // 0x12d6dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12d6dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x12d6e0: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x12D6E0u;
    SET_GPR_U32(ctx, 31, 0x12D6E8u);
    ctx->pc = 0x12D6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D6E0u;
    // 0x12d6e4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x12D6E0u, 0x12D6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D6E8u;
label_12d6e8:
    // 0x12d6e8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x12d6e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d6ec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12d6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12d6f0: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x12d6f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12d6f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12d6f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d6f8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12d6f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12d6fc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x12d6fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12d700: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x12d700u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12d704: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x12d704u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12d708: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x12d708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x12d70c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x12d70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x12d710: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12d710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d714: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x12d714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x12d718: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x12d718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d71c: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x12d71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12d720: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x12d720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d724: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x12d724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x12d728: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x12d728u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x12d72c: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x12D72Cu;
    SET_GPR_U32(ctx, 31, 0x12D734u);
    ctx->pc = 0x12D730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D72Cu;
    // 0x12d730: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x12D72Cu, 0x12D734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D734u;
label_12d734:
    // 0x12d734: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x12d734u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d738: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12d738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12d73c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12d73cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d740: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12d740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d744: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x12d744u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x12d748: 0xc136b30  jal         func_4DACC0
    ctx->pc = 0x12D748u;
    SET_GPR_U32(ctx, 31, 0x12D750u);
    ctx->pc = 0x12D74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D748u;
    // 0x12d74c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x12D748u, 0x12D750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D750u;
label_12d750:
    // 0x12d750: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x12d750u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d754: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12d754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d758: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12d758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d75c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12d75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12d760: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x12d760u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x12d764: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x12D764u;
    SET_GPR_U32(ctx, 31, 0x12D76Cu);
    ctx->pc = 0x12D768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D764u;
    // 0x12d768: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x12D764u, 0x12D76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D76Cu;
label_12d76c:
    // 0x12d76c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x12d76cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d770: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x12d770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12d774: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x12d774u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x12d778: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x12d778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x12d77c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x12d77cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12d780: 0xc64001a0  lwc1        $f0, 0x1A0($s2)
    ctx->pc = 0x12d780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d784: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12d784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12d788: 0x4600b583  div.s       $f22, $f22, $f0
    ctx->pc = 0x12d788u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[22], ctx->f[0]); }
    // 0x12d78c: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x12d78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12d790: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x12d790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12d794: 0xe6560360  swc1        $f22, 0x360($s2)
    ctx->pc = 0x12d794u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 864), bits); }
    // 0x12d798: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x12d798u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12d79c: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x12d79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x12d7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x12D7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D7A0u;
        // 0x12d7a4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D7A8u;
}
