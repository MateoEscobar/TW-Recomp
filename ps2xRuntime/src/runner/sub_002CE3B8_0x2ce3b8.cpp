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

// Function: sub_002CE3B8
// Address: 0x2ce3b8 - 0x2ce5c8
void sub_002CE3B8_0x2ce3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE3B8_0x2ce3b8");
#endif

    switch (ctx->pc) {
        case 0x2ce418u: goto label_2ce418;
        case 0x2ce428u: goto label_2ce428;
        case 0x2ce460u: goto label_2ce460;
        case 0x2ce478u: goto label_2ce478;
        case 0x2ce48cu: goto label_2ce48c;
        case 0x2ce534u: goto label_2ce534;
        case 0x2ce540u: goto label_2ce540;
        case 0x2ce54cu: goto label_2ce54c;
        case 0x2ce574u: goto label_2ce574;
        case 0x2ce588u: goto label_2ce588;
        case 0x2ce5a0u: goto label_2ce5a0;
        default: break;
    }

    ctx->pc = 0x2ce3b8u;

    // 0x2ce3b8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2ce3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2ce3bc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2ce3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2ce3c0: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x2ce3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x2ce3c4: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x2ce3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x2ce3c8: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x2ce3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x2ce3cc: 0x24524b00  addiu       $s2, $v0, 0x4B00
    ctx->pc = 0x2ce3ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2ce3d0: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x2ce3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x2ce3d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ce3d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce3d8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2ce3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2ce3dc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2ce3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ce3e0: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x2ce3e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2ce3e4: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x2ce3e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2ce3e8: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x2ce3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x2ce3ec: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x2ce3ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ce3f0: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x2ce3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2ce3f4: 0x8e140000  lw          $s4, 0x0($s0)
    ctx->pc = 0x2ce3f4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ce3f8: 0x26910090  addiu       $s1, $s4, 0x90
    ctx->pc = 0x2ce3f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x2ce3fc: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x2ce3fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2ce400: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x2ce400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x2ce404: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2ce404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2ce408: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2ce408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2ce40c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2ce40cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ce410: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2CE410u;
    SET_GPR_U32(ctx, 31, 0x2CE418u);
    ctx->pc = 0x2CE414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE410u;
    // 0x2ce414: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2CE410u, 0x2CE418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE418u;
label_2ce418:
    // 0x2ce418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ce418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce41c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ce41cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce420: 0xc0a352c  jal         func_28D4B0
    ctx->pc = 0x2CE420u;
    SET_GPR_U32(ctx, 31, 0x2CE428u);
    ctx->pc = 0x2CE424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE420u;
    // 0x2ce424: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2CE420u, 0x2CE428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE428u;
label_2ce428:
    // 0x2ce428: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ce428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce42c: 0x1200005c  beqz        $s0, . + 4 + (0x5C << 2)
    ctx->pc = 0x2CE42Cu;
    {
        const bool branch_taken_0x2ce42c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE42Cu;
        // 0x2ce430: 0x26060090  addiu       $a2, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce42c) {
            ctx->pc = 0x2CE5A0u;
            goto label_2ce5a0;
        }
    }
    ctx->pc = 0x2CE434u;
    // 0x2ce434: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2ce434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ce438: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x2ce438u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2ce43c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2ce43cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2ce440: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2ce440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2ce444: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2ce444u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ce448: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2ce448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x2ce44c: 0x84c50002  lh          $a1, 0x2($a2)
    ctx->pc = 0x2ce44cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2ce450: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2ce450u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2ce454: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x2ce454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2ce458: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x2CE458u;
    SET_GPR_U32(ctx, 31, 0x2CE460u);
    ctx->pc = 0x2CE45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE458u;
    // 0x2ce45c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2CE458u, 0x2CE460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE460u;
label_2ce460:
    // 0x2ce460: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x2ce460u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2ce464: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2ce464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ce468: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2ce468u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2ce46c: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x2ce46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2ce470: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x2CE470u;
    SET_GPR_U32(ctx, 31, 0x2CE478u);
    ctx->pc = 0x2CE474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE470u;
    // 0x2ce474: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2CE470u, 0x2CE478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE478u;
label_2ce478:
    // 0x2ce478: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x2ce478u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2ce47c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2ce47cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2ce480: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x2ce480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x2ce484: 0xc0cd7d2  jal         func_335F48
    ctx->pc = 0x2CE484u;
    SET_GPR_U32(ctx, 31, 0x2CE48Cu);
    ctx->pc = 0x2CE488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE484u;
    // 0x2ce488: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2CE484u, 0x2CE48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE48Cu;
label_2ce48c:
    // 0x2ce48c: 0x8e0201a8  lw          $v0, 0x1A8($s0)
    ctx->pc = 0x2ce48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x2ce490: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2CE490u;
    {
        const bool branch_taken_0x2ce490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE490u;
        // 0x2ce494: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce490) {
            ctx->pc = 0x2CE524u;
            goto label_2ce524;
        }
    }
    ctx->pc = 0x2CE498u;
    // 0x2ce498: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2ce498u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ce49c: 0x7ba60020  lq          $a2, 0x20($sp)
    ctx->pc = 0x2ce49cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ce4a0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2ce4a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2ce4a4: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x2ce4a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x2ce4a8: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x2ce4a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2ce4ac: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2ce4acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2ce4b0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2ce4b0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2ce4b4: 0x3c01bf34  lui         $at, 0xBF34
    ctx->pc = 0x2ce4b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48948 << 16));
    // 0x2ce4b8: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x2ce4b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x2ce4bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ce4bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce4c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ce4c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ce4c4: 0x0  nop
    ctx->pc = 0x2ce4c4u;
    // NOP
    // 0x2ce4c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ce4c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ce4cc: 0x0  nop
    ctx->pc = 0x2ce4ccu;
    // NOP
    // 0x2ce4d0: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x2CE4D0u;
    {
        const bool branch_taken_0x2ce4d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CE4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE4D0u;
        // 0x2ce4d4: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce4d0) {
            ctx->pc = 0x2CE528u;
            goto label_2ce528;
        }
    }
    ctx->pc = 0x2CE4D8u;
    // 0x2ce4d8: 0xc60001ac  lwc1        $f0, 0x1AC($s0)
    ctx->pc = 0x2ce4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce4dc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2ce4dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ce4e0: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x2ce4e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x2ce4e4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2ce4e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2ce4e8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2ce4e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2ce4ec: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2ce4ecu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2ce4f0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2ce4f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce4f4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2ce4f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2ce4f8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2ce4f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2ce4fc: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2ce4fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2ce500: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2ce500u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2ce504: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2ce504u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2ce508: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x2ce508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x2ce50c: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x2ce50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x2ce510: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2ce510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2ce514: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2ce514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x2ce518: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x2ce518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x2ce51c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2ce51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x2ce520: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2ce520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2ce524:
    // 0x2ce524: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2ce524u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2ce528:
    // 0x2ce528: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ce528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce52c: 0xc0cd780  jal         func_335E00
    ctx->pc = 0x2CE52Cu;
    SET_GPR_U32(ctx, 31, 0x2CE534u);
    ctx->pc = 0x2CE530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE52Cu;
    // 0x2ce530: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2CE52Cu, 0x2CE534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE534u;
label_2ce534:
    // 0x2ce534: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2ce534u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2ce538: 0xc0cd742  jal         func_335D08
    ctx->pc = 0x2CE538u;
    SET_GPR_U32(ctx, 31, 0x2CE540u);
    ctx->pc = 0x2CE53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE538u;
    // 0x2ce53c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2CE538u, 0x2CE540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE540u;
label_2ce540:
    // 0x2ce540: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ce540u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2ce544: 0xc0cdd2e  jal         func_3374B8
    ctx->pc = 0x2CE544u;
    SET_GPR_U32(ctx, 31, 0x2CE54Cu);
    ctx->pc = 0x2CE548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE544u;
    // 0x2ce548: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2CE544u, 0x2CE54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE54Cu;
label_2ce54c:
    // 0x2ce54c: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2ce54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x2ce550: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2ce550u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2ce554: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ce554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce558: 0x0  nop
    ctx->pc = 0x2ce558u;
    // NOP
    // 0x2ce55c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ce55cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ce560: 0x0  nop
    ctx->pc = 0x2ce560u;
    // NOP
    // 0x2ce564: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2CE564u;
    {
        const bool branch_taken_0x2ce564 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CE568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE564u;
        // 0x2ce568: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce564) {
            ctx->pc = 0x2CE5A4u;
            goto label_2ce5a4;
        }
    }
    ctx->pc = 0x2CE56Cu;
    // 0x2ce56c: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2CE56Cu;
    SET_GPR_U32(ctx, 31, 0x2CE574u);
    ctx->pc = 0x2CE570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE56Cu;
    // 0x2ce570: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CE56Cu, 0x2CE574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE574u;
label_2ce574:
    // 0x2ce574: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ce574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce578: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2CE578u;
    {
        const bool branch_taken_0x2ce578 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce578) {
            ctx->pc = 0x2CE57Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE578u;
            // 0x2ce57c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE5A4u;
            goto label_2ce5a4;
        }
    }
    ctx->pc = 0x2CE580u;
    // 0x2ce580: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x2CE580u;
    SET_GPR_U32(ctx, 31, 0x2CE588u);
    ctx->pc = 0x2CE584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE580u;
    // 0x2ce584: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2CE580u, 0x2CE588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE588u;
label_2ce588:
    // 0x2ce588: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2ce588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ce58c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ce58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce590: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ce590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce594: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ce594u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2ce598: 0xc0bf800  jal         func_2FE000
    ctx->pc = 0x2CE598u;
    SET_GPR_U32(ctx, 31, 0x2CE5A0u);
    ctx->pc = 0x2CE59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE598u;
    // 0x2ce59c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2CE598u, 0x2CE5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE5A0u;
label_2ce5a0:
    // 0x2ce5a0: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x2ce5a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2ce5a4:
    // 0x2ce5a4: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x2ce5a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2ce5a8: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x2ce5a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ce5ac: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x2ce5acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ce5b0: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x2ce5b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ce5b4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2ce5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ce5b8: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x2ce5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ce5bc: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x2ce5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ce5c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE5C0u;
        // 0x2ce5c4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE5C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE5C8u;
}
