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

// Function: sub_0034DFF8
// Address: 0x34dff8 - 0x34e120
void sub_0034DFF8_0x34dff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034DFF8_0x34dff8");
#endif

    switch (ctx->pc) {
        case 0x34e030u: goto label_34e030;
        case 0x34e068u: goto label_34e068;
        default: break;
    }

    ctx->pc = 0x34dff8u;

    // 0x34dff8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x34dff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x34dffc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x34dffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x34e000: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x34e000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x34e004: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x34e004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e008: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x34e008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x34e00c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34e00cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e010: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x34e010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x34e014: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x34e014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e018: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x34e018u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e01c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x34e01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x34e020: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34e020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34e024: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x34e024u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e028: 0xc0d364e  jal         func_34D938
    ctx->pc = 0x34E028u;
    SET_GPR_U32(ctx, 31, 0x34E030u);
    ctx->pc = 0x34E02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E028u;
    // 0x34e02c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D938u, 0x34E028u, 0x34E030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E030u;
label_34e030:
    // 0x34e030: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x34e030u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e034: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x34e034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x34e038: 0x1840002f  blez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x34E038u;
    {
        const bool branch_taken_0x34e038 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x34E03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E038u;
        // 0x34e03c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e038) {
            ctx->pc = 0x34E0F8u;
            goto label_34e0f8;
        }
    }
    ctx->pc = 0x34E040u;
    // 0x34e040: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x34e040u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34e044: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x34e044u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e048: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34e048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34e04c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x34e04cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34e050: 0x2689fff0  addiu       $t1, $s4, -0x10
    ctx->pc = 0x34e050u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967280));
    // 0x34e054: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x34e054u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34e058: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x34e058u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34e05c: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x34e05cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34e060: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x34e060u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e064: 0x0  nop
    ctx->pc = 0x34e064u;
    // NOP
label_34e068:
    // 0x34e068: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x34e068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34e06c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x34e06cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34e070: 0x0  nop
    ctx->pc = 0x34e070u;
    // NOP
    // 0x34e074: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
    ctx->pc = 0x34E074u;
    {
        const bool branch_taken_0x34e074 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34e074) {
            ctx->pc = 0x34E078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34E074u;
            // 0x34e078: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34E0D8u;
            goto label_34e0d8;
        }
    }
    ctx->pc = 0x34E07Cu;
    // 0x34e07c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x34e07cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34e080: 0x0  nop
    ctx->pc = 0x34e080u;
    // NOP
    // 0x34e084: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x34E084u;
    {
        const bool branch_taken_0x34e084 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34e084) {
            ctx->pc = 0x34E088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34E084u;
            // 0x34e088: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34E0D8u;
            goto label_34e0d8;
        }
    }
    ctx->pc = 0x34E08Cu;
    // 0x34e08c: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x34e08cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34e090: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x34e090u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x34e094: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x34e094u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x34e098: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x34e098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x34e09c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34e09cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34e0a0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34e0a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34e0a4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34e0a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34e0a8: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x34e0a8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34e0ac: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x34e0acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34e0b0: 0x700434a9  por         $a2, $zero, $a0
    ctx->pc = 0x34e0b0u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x34e0b4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34e0b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34e0b8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x34e0b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34e0bc: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34e0bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34e0c0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34e0c0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34e0c4: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x34e0c4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34e0c8: 0x7d240000  sq          $a0, 0x0($t1)
    ctx->pc = 0x34e0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 4));
    // 0x34e0cc: 0x70042ca9  por         $a1, $zero, $a0
    ctx->pc = 0x34e0ccu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x34e0d0: 0x70041ca9  por         $v1, $zero, $a0
    ctx->pc = 0x34e0d0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x34e0d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x34e0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34e0d8:
    // 0x34e0d8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x34e0d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x34e0dc: 0x142102a  slt         $v0, $t2, $v0
    ctx->pc = 0x34e0dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x34e0e0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x34E0E0u;
    {
        const bool branch_taken_0x34e0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E0E0u;
        // 0x34e0e4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e0e0) {
            ctx->pc = 0x34E068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34e068;
        }
    }
    ctx->pc = 0x34E0E8u;
    // 0x34e0e8: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x34e0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x34e0ec: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x34e0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    // 0x34e0f0: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x34e0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x34e0f4: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x34e0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
label_34e0f8:
    // 0x34e0f8: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x34e0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x34e0fc: 0x7102a  slt         $v0, $zero, $a3
    ctx->pc = 0x34e0fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x34e100: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x34e100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x34e104: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x34e104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x34e108: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x34e108u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x34e10c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x34e10cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x34e110: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x34e110u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34e114: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34e114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34e118: 0x3e00008  jr          $ra
    ctx->pc = 0x34E118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E118u;
        // 0x34e11c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E120u;
}
