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

// Function: sub_002BD180
// Address: 0x2bd180 - 0x2bd4f0
void sub_002BD180_0x2bd180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD180_0x2bd180");
#endif

    switch (ctx->pc) {
        case 0x2bd200u: goto label_2bd200;
        case 0x2bd208u: goto label_2bd208;
        case 0x2bd214u: goto label_2bd214;
        case 0x2bd234u: goto label_2bd234;
        case 0x2bd32cu: goto label_2bd32c;
        case 0x2bd33cu: goto label_2bd33c;
        case 0x2bd374u: goto label_2bd374;
        case 0x2bd380u: goto label_2bd380;
        case 0x2bd3a8u: goto label_2bd3a8;
        case 0x2bd3bcu: goto label_2bd3bc;
        case 0x2bd3d4u: goto label_2bd3d4;
        case 0x2bd3f4u: goto label_2bd3f4;
        case 0x2bd400u: goto label_2bd400;
        case 0x2bd408u: goto label_2bd408;
        case 0x2bd42cu: goto label_2bd42c;
        case 0x2bd438u: goto label_2bd438;
        case 0x2bd460u: goto label_2bd460;
        case 0x2bd468u: goto label_2bd468;
        case 0x2bd484u: goto label_2bd484;
        case 0x2bd49cu: goto label_2bd49c;
        case 0x2bd4b0u: goto label_2bd4b0;
        default: break;
    }

    ctx->pc = 0x2bd180u;

    // 0x2bd180: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2bd180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2bd184: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2bd184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2bd188: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x2bd188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x2bd18c: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x2bd18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x2bd190: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bd190u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd194: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x2bd194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x2bd198: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x2bd198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x2bd19c: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x2bd19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x2bd1a0: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x2bd1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x2bd1a4: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x2bd1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x2bd1a8: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x2bd1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x2bd1ac: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x2bd1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x2bd1b0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2bd1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2bd1b4: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x2bd1b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2bd1b8: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2bd1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x2bd1bc: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x2bd1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x2bd1c0: 0x8c770048  lw          $s7, 0x48($v1)
    ctx->pc = 0x2bd1c0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2bd1c4: 0x57102b  sltu        $v0, $v0, $s7
    ctx->pc = 0x2bd1c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x2bd1c8: 0x104000bb  beqz        $v0, . + 4 + (0xBB << 2)
    ctx->pc = 0x2BD1C8u;
    {
        const bool branch_taken_0x2bd1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD1C8u;
        // 0x2bd1cc: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd1c8) {
            ctx->pc = 0x2BD4B8u;
            goto label_2bd4b8;
        }
    }
    ctx->pc = 0x2BD1D0u;
    // 0x2bd1d0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2bd1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bd1d4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2bd1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2bd1d8: 0x24544b00  addiu       $s4, $v0, 0x4B00
    ctx->pc = 0x2bd1d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2bd1dc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2bd1dcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd1e0: 0x8c750000  lw          $s5, 0x0($v1)
    ctx->pc = 0x2bd1e0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bd1e4: 0x24710164  addiu       $s1, $v1, 0x164
    ctx->pc = 0x2bd1e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 356));
    // 0x2bd1e8: 0x26b00090  addiu       $s0, $s5, 0x90
    ctx->pc = 0x2bd1e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
    // 0x2bd1ec: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x2bd1ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2bd1f0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2bd1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2bd1f4: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2bd1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2bd1f8: 0xc0cd7d2  jal         func_335F48
    ctx->pc = 0x2BD1F8u;
    SET_GPR_U32(ctx, 31, 0x2BD200u);
    ctx->pc = 0x2BD1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD1F8u;
    // 0x2bd1fc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2BD1F8u, 0x2BD200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD200u;
label_2bd200:
    // 0x2bd200: 0xc0cd742  jal         func_335D08
    ctx->pc = 0x2BD200u;
    SET_GPR_U32(ctx, 31, 0x2BD208u);
    ctx->pc = 0x2BD204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD200u;
    // 0x2bd204: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2BD200u, 0x2BD208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD208u;
label_2bd208:
    // 0x2bd208: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2bd208u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2bd20c: 0xc137832  jal         func_4DE0C8
    ctx->pc = 0x2BD20Cu;
    SET_GPR_U32(ctx, 31, 0x2BD214u);
    ctx->pc = 0x2BD210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD20Cu;
    // 0x2bd210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x2BD20Cu, 0x2BD214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD214u;
label_2bd214:
    // 0x2bd214: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2bd214u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd218: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bd218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bd21c: 0x5662006f  bnel        $s3, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x2BD21Cu;
    {
        const bool branch_taken_0x2bd21c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bd21c) {
            ctx->pc = 0x2BD220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD21Cu;
            // 0x2bd220: 0x86050002  lh          $a1, 0x2($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD3DCu;
            goto label_2bd3dc;
        }
    }
    ctx->pc = 0x2BD224u;
    // 0x2bd224: 0x24020bb8  addiu       $v0, $zero, 0xBB8
    ctx->pc = 0x2bd224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x2bd228: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x2bd228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2bd22c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2BD22Cu;
    SET_GPR_U32(ctx, 31, 0x2BD234u);
    ctx->pc = 0x2BD230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD22Cu;
    // 0x2bd230: 0xafa20088  sw          $v0, 0x88($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BD22Cu, 0x2BD234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD234u;
label_2bd234:
    // 0x2bd234: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bd234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd238: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2bd238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2bd23c: 0x86040092  lh          $a0, 0x92($s0)
    ctx->pc = 0x2bd23cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x2bd240: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x2bd240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
    // 0x2bd244: 0x786a0000  lq          $t2, 0x0($v1)
    ctx->pc = 0x2bd244u;
    SET_GPR_VEC(ctx, 10, FAST_READ128(0x511740u));
    // 0x2bd248: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2bd248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bd24c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2bd24cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2bd250: 0x7ac20000  lq          $v0, 0x0($s6)
    ctx->pc = 0x2bd250u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2bd254: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2bd254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2bd258: 0x8e490000  lw          $t1, 0x0($s2)
    ctx->pc = 0x2bd258u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bd25c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2bd25cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bd260: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bd260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd264: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2bd264u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2bd268: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2bd268u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2bd26c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2bd26cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bd270: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2bd270u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2bd274: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2bd274u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2bd278: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x2bd278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x2bd27c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2bd27cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2bd280: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bd280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd284: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2bd284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2bd288: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bd288u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd28c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2bd28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2bd290: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x2bd290u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2bd294: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2bd294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x2bd298: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2bd298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2bd29c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2bd29cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2bd2a0: 0xc520013c  lwc1        $f0, 0x13C($t1)
    ctx->pc = 0x2bd2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd2a4: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x2bd2a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x2bd2a8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2bd2a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2bd2ac: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2bd2acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bd2b0: 0x482a0800  qmfc2.ni    $t2, $vf1
    ctx->pc = 0x2bd2b0u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bd2b4: 0x7faa0060  sq          $t2, 0x60($sp)
    ctx->pc = 0x2bd2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 10));
    // 0x2bd2b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd2bc: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x2bd2bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x2bd2c0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2bd2c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2bd2c4: 0x48a91000  qmtc2.ni    $t1, $vf2
    ctx->pc = 0x2bd2c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x2bd2c8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2bd2c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bd2cc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2bd2ccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bd2d0: 0xafb30080  sw          $s3, 0x80($sp)
    ctx->pc = 0x2bd2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 19));
    // 0x2bd2d4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2bd2d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2bd2d8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2bd2d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2bd2dc: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2bd2dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bd2e0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2bd2e0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2bd2e4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2bd2e4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2bd2e8: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2bd2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x2bd2ec: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2bd2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2bd2f0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2bd2f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2bd2f4: 0x48aa1000  qmtc2.ni    $t2, $vf2
    ctx->pc = 0x2bd2f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x2bd2f8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2bd2f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bd2fc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2bd2fcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2bd300: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x2bd300u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2bd304: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2bd304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2bd308: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2bd308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x2bd30c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2bd30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x2bd310: 0x7fa90030  sq          $t1, 0x30($sp)
    ctx->pc = 0x2bd310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 9));
    // 0x2bd314: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2bd314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2bd318: 0x7faa0070  sq          $t2, 0x70($sp)
    ctx->pc = 0x2bd318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 10));
    // 0x2bd31c: 0x7faa0040  sq          $t2, 0x40($sp)
    ctx->pc = 0x2bd31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 10));
    // 0x2bd320: 0x7fa90060  sq          $t1, 0x60($sp)
    ctx->pc = 0x2bd320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 9));
    // 0x2bd324: 0xc0888dc  jal         func_222370
    ctx->pc = 0x2BD324u;
    SET_GPR_U32(ctx, 31, 0x2BD32Cu);
    ctx->pc = 0x2BD328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD324u;
    // 0x2bd328: 0x7fa90050  sq          $t1, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222370u, 0x2BD324u, 0x2BD32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD32Cu;
label_2bd32c:
    // 0x2bd32c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2BD32Cu;
    {
        const bool branch_taken_0x2bd32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd32c) {
            ctx->pc = 0x2BD330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD32Cu;
            // 0x2bd330: 0x86a40092  lh          $a0, 0x92($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD35Cu;
            goto label_2bd35c;
        }
    }
    ctx->pc = 0x2BD334u;
    // 0x2bd334: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2BD334u;
    SET_GPR_U32(ctx, 31, 0x2BD33Cu);
    ctx->pc = 0x2BD338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD334u;
    // 0x2bd338: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BD334u, 0x2BD33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD33Cu;
label_2bd33c:
    // 0x2bd33c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BD33Cu;
    {
        const bool branch_taken_0x2bd33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd33c) {
            ctx->pc = 0x2BD340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD33Cu;
            // 0x2bd340: 0x3a0102d  daddu       $v0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD350u;
            goto label_2bd350;
        }
    }
    ctx->pc = 0x2BD344u;
    // 0x2bd344: 0x84420092  lh          $v0, 0x92($v0)
    ctx->pc = 0x2bd344u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x2bd348: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2bd348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2bd34c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2bd34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2bd350:
    // 0x2bd350: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2bd350u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bd354: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2bd354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2bd358: 0x86a40092  lh          $a0, 0x92($s5)
    ctx->pc = 0x2bd358u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
label_2bd35c:
    // 0x2bd35c: 0x27c24b00  addiu       $v0, $fp, 0x4B00
    ctx->pc = 0x2bd35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
    // 0x2bd360: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2bd360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bd364: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2bd364u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2bd368: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bd368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd36c: 0xc0cd780  jal         func_335E00
    ctx->pc = 0x2BD36Cu;
    SET_GPR_U32(ctx, 31, 0x2BD374u);
    ctx->pc = 0x2BD370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD36Cu;
    // 0x2bd370: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2BD36Cu, 0x2BD374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD374u;
label_2bd374:
    // 0x2bd374: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bd374u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bd378: 0xc0cdd2e  jal         func_3374B8
    ctx->pc = 0x2BD378u;
    SET_GPR_U32(ctx, 31, 0x2BD380u);
    ctx->pc = 0x2BD37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD378u;
    // 0x2bd37c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2BD378u, 0x2BD380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD380u;
label_2bd380:
    // 0x2bd380: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2bd380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
    // 0x2bd384: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2bd384u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2bd388: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bd388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd38c: 0x0  nop
    ctx->pc = 0x2bd38cu;
    // NOP
    // 0x2bd390: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bd390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd394: 0x0  nop
    ctx->pc = 0x2bd394u;
    // NOP
    // 0x2bd398: 0x45000041  bc1f        . + 4 + (0x41 << 2)
    ctx->pc = 0x2BD398u;
    {
        const bool branch_taken_0x2bd398 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BD39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD398u;
        // 0x2bd39c: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd398) {
            ctx->pc = 0x2BD4A0u;
            goto label_2bd4a0;
        }
    }
    ctx->pc = 0x2BD3A0u;
    // 0x2bd3a0: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2BD3A0u;
    SET_GPR_U32(ctx, 31, 0x2BD3A8u);
    ctx->pc = 0x2BD3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD3A0u;
    // 0x2bd3a4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BD3A0u, 0x2BD3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD3A8u;
label_2bd3a8:
    // 0x2bd3a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bd3a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd3ac: 0x1200003c  beqz        $s0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2BD3ACu;
    {
        const bool branch_taken_0x2bd3ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD3ACu;
        // 0x2bd3b0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd3ac) {
            ctx->pc = 0x2BD4A0u;
            goto label_2bd4a0;
        }
    }
    ctx->pc = 0x2BD3B4u;
    // 0x2bd3b4: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x2BD3B4u;
    SET_GPR_U32(ctx, 31, 0x2BD3BCu);
    ctx->pc = 0x2BD3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD3B4u;
    // 0x2bd3b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2BD3B4u, 0x2BD3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD3BCu;
label_2bd3bc:
    // 0x2bd3bc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2bd3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bd3c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd3c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2bd3c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd3c8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2bd3c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2bd3cc: 0xc0bf800  jal         func_2FE000
    ctx->pc = 0x2BD3CCu;
    SET_GPR_U32(ctx, 31, 0x2BD3D4u);
    ctx->pc = 0x2BD3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD3CCu;
    // 0x2bd3d0: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2BD3CCu, 0x2BD3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD3D4u;
label_2bd3d4:
    // 0x2bd3d4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2BD3D4u;
    {
        const bool branch_taken_0x2bd3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD3D4u;
        // 0x2bd3d8: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd3d4) {
            ctx->pc = 0x2BD4A0u;
            goto label_2bd4a0;
        }
    }
    ctx->pc = 0x2BD3DCu;
label_2bd3dc:
    // 0x2bd3dc: 0x240207d0  addiu       $v0, $zero, 0x7D0
    ctx->pc = 0x2bd3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x2bd3e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd3e4: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x2bd3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x2bd3e8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2bd3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2bd3ec: 0xc13b782  jal         func_4EDE08
    ctx->pc = 0x2BD3ECu;
    SET_GPR_U32(ctx, 31, 0x2BD3F4u);
    ctx->pc = 0x2BD3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD3ECu;
    // 0x2bd3f0: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDE08u, 0x2BD3ECu, 0x2BD3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD3F4u;
label_2bd3f4:
    // 0x2bd3f4: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x2bd3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x2bd3f8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2BD3F8u;
    SET_GPR_U32(ctx, 31, 0x2BD400u);
    ctx->pc = 0x2BD3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD3F8u;
    // 0x2bd3fc: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BD3F8u, 0x2BD400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD400u;
label_2bd400:
    // 0x2bd400: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2BD400u;
    SET_GPR_U32(ctx, 31, 0x2BD408u);
    ctx->pc = 0x2BD404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD400u;
    // 0x2bd404: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2BD400u, 0x2BD408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD408u;
label_2bd408:
    // 0x2bd408: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2BD408u;
    {
        const bool branch_taken_0x2bd408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD408u;
        // 0x2bd40c: 0x24530090  addiu       $s3, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd408) {
            ctx->pc = 0x2BD49Cu;
            goto label_2bd49c;
        }
    }
    ctx->pc = 0x2BD410u;
    // 0x2bd410: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x2bd410u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2bd414: 0x86650002  lh          $a1, 0x2($s3)
    ctx->pc = 0x2bd414u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2bd418: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2bd418u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2bd41c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2bd41cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2bd420: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2bd420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2bd424: 0xc0cd780  jal         func_335E00
    ctx->pc = 0x2BD424u;
    SET_GPR_U32(ctx, 31, 0x2BD42Cu);
    ctx->pc = 0x2BD428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD424u;
    // 0x2bd428: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2BD424u, 0x2BD42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD42Cu;
label_2bd42c:
    // 0x2bd42c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bd42cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bd430: 0xc0cdd2e  jal         func_3374B8
    ctx->pc = 0x2BD430u;
    SET_GPR_U32(ctx, 31, 0x2BD438u);
    ctx->pc = 0x2BD434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD430u;
    // 0x2bd434: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2BD430u, 0x2BD438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD438u;
label_2bd438:
    // 0x2bd438: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2bd438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
    // 0x2bd43c: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2bd43cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2bd440: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bd440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd444: 0x0  nop
    ctx->pc = 0x2bd444u;
    // NOP
    // 0x2bd448: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bd448u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd44c: 0x0  nop
    ctx->pc = 0x2bd44cu;
    // NOP
    // 0x2bd450: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x2BD450u;
    {
        const bool branch_taken_0x2bd450 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BD454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD450u;
        // 0x2bd454: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd450) {
            ctx->pc = 0x2BD4A0u;
            goto label_2bd4a0;
        }
    }
    ctx->pc = 0x2BD458u;
    // 0x2bd458: 0xc08bfa0  jal         func_22FE80
    ctx->pc = 0x2BD458u;
    SET_GPR_U32(ctx, 31, 0x2BD460u);
    ctx->pc = 0x2BD45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD458u;
    // 0x2bd45c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2BD458u, 0x2BD460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD460u;
label_2bd460:
    // 0x2bd460: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2BD460u;
    SET_GPR_U32(ctx, 31, 0x2BD468u);
    ctx->pc = 0x2BD464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD460u;
    // 0x2bd464: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BD460u, 0x2BD468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD468u;
label_2bd468:
    // 0x2bd468: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bd468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd46c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2BD46Cu;
    {
        const bool branch_taken_0x2bd46c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD46Cu;
        // 0x2bd470: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd46c) {
            ctx->pc = 0x2BD49Cu;
            goto label_2bd49c;
        }
    }
    ctx->pc = 0x2BD474u;
    // 0x2bd474: 0x86700002  lh          $s0, 0x2($s3)
    ctx->pc = 0x2bd474u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2bd478: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2bd478u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2bd47c: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x2BD47Cu;
    SET_GPR_U32(ctx, 31, 0x2BD484u);
    ctx->pc = 0x2BD480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD47Cu;
    // 0x2bd480: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2BD47Cu, 0x2BD484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD484u;
label_2bd484:
    // 0x2bd484: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2bd484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bd488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd48c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bd48cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd490: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2bd490u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2bd494: 0xc0bf800  jal         func_2FE000
    ctx->pc = 0x2BD494u;
    SET_GPR_U32(ctx, 31, 0x2BD49Cu);
    ctx->pc = 0x2BD498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD494u;
    // 0x2bd498: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2BD494u, 0x2BD49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD49Cu;
label_2bd49c:
    // 0x2bd49c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2bd49cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2bd4a0:
    // 0x2bd4a0: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x2bd4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2bd4a4: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2bd4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2bd4a8: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2BD4A8u;
    SET_GPR_U32(ctx, 31, 0x2BD4B0u);
    ctx->pc = 0x2BD4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD4A8u;
    // 0x2bd4ac: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2BD4A8u, 0x2BD4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD4B0u;
label_2bd4b0:
    // 0x2bd4b0: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x2bd4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2bd4b4: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x2bd4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
label_2bd4b8:
    // 0x2bd4b8: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x2bd4b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2bd4bc: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x2bd4bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2bd4c0: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x2bd4c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2bd4c4: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x2bd4c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bd4c8: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x2bd4c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2bd4cc: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x2bd4ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2bd4d0: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x2bd4d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2bd4d4: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x2bd4d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2bd4d8: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x2bd4d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2bd4dc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2bd4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bd4e0: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x2bd4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bd4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD4E4u;
        // 0x2bd4e8: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD4ECu;
    // 0x2bd4ec: 0x0  nop
    ctx->pc = 0x2bd4ecu;
    // NOP
    ctx->pc = 0x2bd4f0u;
}
