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

// Function: sub_001207B0
// Address: 0x1207b0 - 0x120868
void sub_001207B0_0x1207b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001207B0_0x1207b0");
#endif

    switch (ctx->pc) {
        case 0x120804u: goto label_120804;
        case 0x120810u: goto label_120810;
        default: break;
    }

    ctx->pc = 0x1207b0u;

    // 0x1207b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1207b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1207b4: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1207b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1207b8: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x1207b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x1207bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1207bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1207c0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1207c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1207c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1207c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1207c8: 0x46006502  mul.s       $f20, $f12, $f0
    ctx->pc = 0x1207c8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1207cc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1207ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1207d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1207d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1207d4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1207d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1207d8: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x1207d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x1207dc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1207dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1207e0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1207e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1207e4: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x1207e4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1207e8: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x1207e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1207ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1207ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1207f0: 0x263001f0  addiu       $s0, $s1, 0x1F0
    ctx->pc = 0x1207f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
    // 0x1207f4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1207f4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x511740u));
    // 0x1207f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1207f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1207fc: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x1207FCu;
    SET_GPR_U32(ctx, 31, 0x120804u);
    ctx->pc = 0x120800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1207FCu;
    // 0x120800: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x1207FCu, 0x120804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120804u;
label_120804:
    // 0x120804: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x120804u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x120808: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x120808u;
    SET_GPR_U32(ctx, 31, 0x120810u);
    ctx->pc = 0x12080Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120808u;
    // 0x12080c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x120808u, 0x120810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120810u;
label_120810:
    // 0x120810: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x120810u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120814: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x120814u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x120818: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x120818u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12081c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x12081cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x120820: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x120820u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120824: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x120824u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x120828: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x120828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12082c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x12082cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x120830: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x120830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x120834: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x120834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x120838: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x120838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12083c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x12083cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x120840: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x120840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x120844: 0xe62201f0  swc1        $f2, 0x1F0($s1)
    ctx->pc = 0x120844u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 496), bits); }
    // 0x120848: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x120848u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x12084c: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x12084cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x120850: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x120850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x120854: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x120854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x120858: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x120858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12085c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x12085cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x120860: 0x3e00008  jr          $ra
    ctx->pc = 0x120860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120860u;
        // 0x120864: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120868u;
}
