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

// Function: sub_002FC158
// Address: 0x2fc158 - 0x2fc330
void sub_002FC158_0x2fc158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC158_0x2fc158");
#endif

    switch (ctx->pc) {
        case 0x2fc198u: goto label_2fc198;
        case 0x2fc1c0u: goto label_2fc1c0;
        case 0x2fc1c8u: goto label_2fc1c8;
        case 0x2fc1e0u: goto label_2fc1e0;
        case 0x2fc238u: goto label_2fc238;
        case 0x2fc260u: goto label_2fc260;
        case 0x2fc2b8u: goto label_2fc2b8;
        default: break;
    }

    ctx->pc = 0x2fc158u;

    // 0x2fc158: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2fc158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2fc15c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2fc15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fc160: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2fc160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2fc164: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2fc164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc168: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2fc168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2fc16c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2fc16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2fc170: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2fc170u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc174: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x2fc174u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2fc178: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2fc178u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2fc17c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2fc17cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2fc180: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2fc180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2fc184: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x2fc184u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x2fc188: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2fc188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2fc18c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2fc18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fc190: 0xc0bef46  jal         func_2FBD18
    ctx->pc = 0x2FC190u;
    SET_GPR_U32(ctx, 31, 0x2FC198u);
    ctx->pc = 0x2FC194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC190u;
    // 0x2fc194: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD18u, 0x2FC190u, 0x2FC198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC198u;
label_2fc198:
    // 0x2fc198: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2fc198u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc19c: 0x86250092  lh          $a1, 0x92($s1)
    ctx->pc = 0x2fc19cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x2fc1a0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2fc1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2fc1a4: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2fc1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2fc1a8: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2fc1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2fc1ac: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2fc1acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2fc1b0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2fc1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2fc1b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fc1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc1b8: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x2FC1B8u;
    SET_GPR_U32(ctx, 31, 0x2FC1C0u);
    ctx->pc = 0x2FC1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC1B8u;
    // 0x2fc1bc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2FC1B8u, 0x2FC1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC1C0u;
label_2fc1c0:
    // 0x2fc1c0: 0xc0cd766  jal         func_335D98
    ctx->pc = 0x2FC1C0u;
    SET_GPR_U32(ctx, 31, 0x2FC1C8u);
    ctx->pc = 0x2FC1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC1C0u;
    // 0x2fc1c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D98u, 0x2FC1C0u, 0x2FC1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC1C8u;
label_2fc1c8:
    // 0x2fc1c8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2fc1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2fc1cc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2fc1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fc1d0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2fc1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fc1d4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2fc1d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc1d8: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x2FC1D8u;
    SET_GPR_U32(ctx, 31, 0x2FC1E0u);
    ctx->pc = 0x2FC1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC1D8u;
    // 0x2fc1dc: 0x92300333  lbu         $s0, 0x333($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 819)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x2FC1D8u, 0x2FC1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC1E0u;
label_2fc1e0:
    // 0x2fc1e0: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x2fc1e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fc1e4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2fc1e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2fc1e8: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x2fc1e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2fc1ec: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2fc1ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2fc1f0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2fc1f0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2fc1f4: 0x3c013dfa  lui         $at, 0x3DFA
    ctx->pc = 0x2fc1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15866 << 16));
    // 0x2fc1f8: 0x3421e147  ori         $at, $at, 0xE147
    ctx->pc = 0x2fc1f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57671);
    // 0x2fc1fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fc1fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fc200: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fc200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fc204: 0x0  nop
    ctx->pc = 0x2fc204u;
    // NOP
    // 0x2fc208: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2fc208u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fc20c: 0x0  nop
    ctx->pc = 0x2fc20cu;
    // NOP
    // 0x2fc210: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2FC210u;
    {
        const bool branch_taken_0x2fc210 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FC214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC210u;
        // 0x2fc214: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc210) {
            ctx->pc = 0x2FC240u;
            goto label_2fc240;
        }
    }
    ctx->pc = 0x2FC218u;
    // 0x2fc218: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fc218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc21c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2fc21cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc220: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2fc220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fc224: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2fc224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fc228: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2fc228u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2fc22c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2fc22cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2fc230: 0xc0befbc  jal         func_2FBEF0
    ctx->pc = 0x2FC230u;
    SET_GPR_U32(ctx, 31, 0x2FC238u);
    ctx->pc = 0x2FC234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC230u;
    // 0x2fc234: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBEF0u, 0x2FC230u, 0x2FC238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC238u;
label_2fc238:
    // 0x2fc238: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FC238u;
    {
        const bool branch_taken_0x2fc238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC238u;
        // 0x2fc23c: 0xe640000c  swc1        $f0, 0xC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc238) {
            ctx->pc = 0x2FC244u;
            goto label_2fc244;
        }
    }
    ctx->pc = 0x2FC240u;
label_2fc240:
    // 0x2fc240: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x2fc240u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_2fc244:
    // 0x2fc244: 0x2e620003  sltiu       $v0, $s3, 0x3
    ctx->pc = 0x2fc244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2fc248: 0x5440002e  bnel        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x2FC248u;
    {
        const bool branch_taken_0x2fc248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc248) {
            ctx->pc = 0x2FC24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC248u;
            // 0x2fc24c: 0xe6540044  swc1        $f20, 0x44($s2) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC304u;
            goto label_2fc304;
        }
    }
    ctx->pc = 0x2FC250u;
    // 0x2fc250: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2fc250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fc254: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2fc254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fc258: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x2FC258u;
    SET_GPR_U32(ctx, 31, 0x2FC260u);
    ctx->pc = 0x2FC25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC258u;
    // 0x2fc25c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x2FC258u, 0x2FC260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC260u;
label_2fc260:
    // 0x2fc260: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x2fc260u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fc264: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2fc264u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2fc268: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x2fc268u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2fc26c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2fc26cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2fc270: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2fc270u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2fc274: 0x3c013dfa  lui         $at, 0x3DFA
    ctx->pc = 0x2fc274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15866 << 16));
    // 0x2fc278: 0x3421e147  ori         $at, $at, 0xE147
    ctx->pc = 0x2fc278u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57671);
    // 0x2fc27c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fc27cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fc280: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fc280u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fc284: 0x0  nop
    ctx->pc = 0x2fc284u;
    // NOP
    // 0x2fc288: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2fc288u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fc28c: 0x0  nop
    ctx->pc = 0x2fc28cu;
    // NOP
    // 0x2fc290: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x2FC290u;
    {
        const bool branch_taken_0x2fc290 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FC294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC290u;
        // 0x2fc294: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc290) {
            ctx->pc = 0x2FC300u;
            goto label_2fc300;
        }
    }
    ctx->pc = 0x2FC298u;
    // 0x2fc298: 0xc64d000c  lwc1        $f13, 0xC($s2)
    ctx->pc = 0x2fc298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2fc29c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2fc29cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2fc2a0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2fc2a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc2a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fc2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc2a8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2fc2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fc2ac: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2fc2acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fc2b0: 0xc0befbc  jal         func_2FBEF0
    ctx->pc = 0x2FC2B0u;
    SET_GPR_U32(ctx, 31, 0x2FC2B8u);
    ctx->pc = 0x2FC2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC2B0u;
    // 0x2fc2b4: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBEF0u, 0x2FC2B0u, 0x2FC2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC2B8u;
label_2fc2b8:
    // 0x2fc2b8: 0xc644000c  lwc1        $f4, 0xC($s2)
    ctx->pc = 0x2fc2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2fc2bc: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x2fc2bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fc2c0: 0x0  nop
    ctx->pc = 0x2fc2c0u;
    // NOP
    // 0x2fc2c4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2FC2C4u;
    {
        const bool branch_taken_0x2fc2c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FC2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC2C4u;
        // 0x2fc2c8: 0xe6400044  swc1        $f0, 0x44($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc2c4) {
            ctx->pc = 0x2FC304u;
            goto label_2fc304;
        }
    }
    ctx->pc = 0x2FC2CCu;
    // 0x2fc2cc: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x2fc2ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2fc2d0: 0x3c013d00  lui         $at, 0x3D00
    ctx->pc = 0x2fc2d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15616 << 16));
    // 0x2fc2d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2fc2d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2fc2d8: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2fc2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2fc2dc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2fc2dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2fc2e0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2fc2e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2fc2e4: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x2fc2e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2fc2e8: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2fc2e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2fc2ec: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2fc2ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2fc2f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2fc2f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2fc2f4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2fc2f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2fc2f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC2F8u;
    {
        const bool branch_taken_0x2fc2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC2F8u;
        // 0x2fc2fc: 0xe6400048  swc1        $f0, 0x48($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc2f8) {
            ctx->pc = 0x2FC308u;
            goto label_2fc308;
        }
    }
    ctx->pc = 0x2FC300u;
label_2fc300:
    // 0x2fc300: 0xe6540044  swc1        $f20, 0x44($s2)
    ctx->pc = 0x2fc300u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
label_2fc304:
    // 0x2fc304: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x2fc304u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
label_2fc308:
    // 0x2fc308: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2fc308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2fc30c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2fc30cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2fc310: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2fc310u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2fc314: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2fc314u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fc318: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2fc318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fc31c: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x2fc31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2fc320: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2fc320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fc324: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC324u;
        // 0x2fc328: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC32Cu;
    // 0x2fc32c: 0x0  nop
    ctx->pc = 0x2fc32cu;
    // NOP
    ctx->pc = 0x2fc330u;
}
