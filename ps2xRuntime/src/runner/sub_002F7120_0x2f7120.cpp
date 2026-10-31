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

// Function: sub_002F7120
// Address: 0x2f7120 - 0x2f7328
void sub_002F7120_0x2f7120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7120_0x2f7120");
#endif

    switch (ctx->pc) {
        case 0x2f717cu: goto label_2f717c;
        case 0x2f7188u: goto label_2f7188;
        case 0x2f71c0u: goto label_2f71c0;
        case 0x2f71d8u: goto label_2f71d8;
        case 0x2f71ecu: goto label_2f71ec;
        case 0x2f7294u: goto label_2f7294;
        case 0x2f72a0u: goto label_2f72a0;
        case 0x2f72acu: goto label_2f72ac;
        case 0x2f72d4u: goto label_2f72d4;
        case 0x2f72e8u: goto label_2f72e8;
        case 0x2f7300u: goto label_2f7300;
        default: break;
    }

    ctx->pc = 0x2f7120u;

    // 0x2f7120: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2f7120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2f7124: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2f7124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2f7128: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x2f7128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x2f712c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f712cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7130: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x2f7130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x2f7134: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x2f7134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x2f7138: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x2f7138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x2f713c: 0x24524b00  addiu       $s2, $v0, 0x4B00
    ctx->pc = 0x2f713cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2f7140: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x2f7140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x2f7144: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f7144u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7148: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2f7148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2f714c: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x2f714cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2f7150: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x2f7150u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2f7154: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2f7154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f7158: 0x8c940000  lw          $s4, 0x0($a0)
    ctx->pc = 0x2f7158u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f715c: 0x24840164  addiu       $a0, $a0, 0x164
    ctx->pc = 0x2f715cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
    // 0x2f7160: 0x26910090  addiu       $s1, $s4, 0x90
    ctx->pc = 0x2f7160u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x2f7164: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x2f7164u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2f7168: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2f7168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2f716c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2f716cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2f7170: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2f7170u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f7174: 0xc13b782  jal         func_4EDE08
    ctx->pc = 0x2F7174u;
    SET_GPR_U32(ctx, 31, 0x2F717Cu);
    ctx->pc = 0x2F7178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7174u;
    // 0x2f7178: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDE08u, 0x2F7174u, 0x2F717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F717Cu;
label_2f717c:
    // 0x2f717c: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x2f717cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x2f7180: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2F7180u;
    SET_GPR_U32(ctx, 31, 0x2F7188u);
    ctx->pc = 0x2F7184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7180u;
    // 0x2f7184: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F7180u, 0x2F7188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7188u;
label_2f7188:
    // 0x2f7188: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f7188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f718c: 0x1200005c  beqz        $s0, . + 4 + (0x5C << 2)
    ctx->pc = 0x2F718Cu;
    {
        const bool branch_taken_0x2f718c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F718Cu;
        // 0x2f7190: 0x26060090  addiu       $a2, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f718c) {
            ctx->pc = 0x2F7300u;
            goto label_2f7300;
        }
    }
    ctx->pc = 0x2F7194u;
    // 0x2f7194: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2f7194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f7198: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x2f7198u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2f719c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2f719cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2f71a0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2f71a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2f71a4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2f71a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f71a8: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2f71a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x2f71ac: 0x84c50002  lh          $a1, 0x2($a2)
    ctx->pc = 0x2f71acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2f71b0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2f71b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2f71b4: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x2f71b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2f71b8: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x2F71B8u;
    SET_GPR_U32(ctx, 31, 0x2F71C0u);
    ctx->pc = 0x2F71BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F71B8u;
    // 0x2f71bc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2F71B8u, 0x2F71C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F71C0u;
label_2f71c0:
    // 0x2f71c0: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x2f71c0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2f71c4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2f71c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f71c8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2f71c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2f71cc: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x2f71ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2f71d0: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x2F71D0u;
    SET_GPR_U32(ctx, 31, 0x2F71D8u);
    ctx->pc = 0x2F71D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F71D0u;
    // 0x2f71d4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2F71D0u, 0x2F71D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F71D8u;
label_2f71d8:
    // 0x2f71d8: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x2f71d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2f71dc: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2f71dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2f71e0: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x2f71e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x2f71e4: 0xc0cd7d2  jal         func_335F48
    ctx->pc = 0x2F71E4u;
    SET_GPR_U32(ctx, 31, 0x2F71ECu);
    ctx->pc = 0x2F71E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F71E4u;
    // 0x2f71e8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2F71E4u, 0x2F71ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F71ECu;
label_2f71ec:
    // 0x2f71ec: 0x8e0201a8  lw          $v0, 0x1A8($s0)
    ctx->pc = 0x2f71ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x2f71f0: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2F71F0u;
    {
        const bool branch_taken_0x2f71f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F71F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F71F0u;
        // 0x2f71f4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f71f0) {
            ctx->pc = 0x2F7284u;
            goto label_2f7284;
        }
    }
    ctx->pc = 0x2F71F8u;
    // 0x2f71f8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2f71f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f71fc: 0x7ba60020  lq          $a2, 0x20($sp)
    ctx->pc = 0x2f71fcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7200: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2f7200u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f7204: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x2f7204u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x2f7208: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x2f7208u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2f720c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2f720cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2f7210: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2f7210u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2f7214: 0x3c01bf34  lui         $at, 0xBF34
    ctx->pc = 0x2f7214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48948 << 16));
    // 0x2f7218: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x2f7218u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x2f721c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f721cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f7220: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f7220u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f7224: 0x0  nop
    ctx->pc = 0x2f7224u;
    // NOP
    // 0x2f7228: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f7228u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f722c: 0x0  nop
    ctx->pc = 0x2f722cu;
    // NOP
    // 0x2f7230: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x2F7230u;
    {
        const bool branch_taken_0x2f7230 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F7234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7230u;
        // 0x2f7234: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7230) {
            ctx->pc = 0x2F7288u;
            goto label_2f7288;
        }
    }
    ctx->pc = 0x2F7238u;
    // 0x2f7238: 0xc60001ac  lwc1        $f0, 0x1AC($s0)
    ctx->pc = 0x2f7238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f723c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2f723cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2f7240: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x2f7240u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x2f7244: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f7244u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f7248: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f7248u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f724c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2f724cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f7250: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2f7250u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7254: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2f7254u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f7258: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2f7258u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f725c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2f725cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f7260: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2f7260u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2f7264: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2f7264u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2f7268: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x2f7268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x2f726c: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x2f726cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x2f7270: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2f7270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2f7274: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2f7274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x2f7278: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x2f7278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x2f727c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2f727cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x2f7280: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2f7280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2f7284:
    // 0x2f7284: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2f7284u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f7288:
    // 0x2f7288: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f7288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f728c: 0xc0cd780  jal         func_335E00
    ctx->pc = 0x2F728Cu;
    SET_GPR_U32(ctx, 31, 0x2F7294u);
    ctx->pc = 0x2F7290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F728Cu;
    // 0x2f7290: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2F728Cu, 0x2F7294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7294u;
label_2f7294:
    // 0x2f7294: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2f7294u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2f7298: 0xc0cd742  jal         func_335D08
    ctx->pc = 0x2F7298u;
    SET_GPR_U32(ctx, 31, 0x2F72A0u);
    ctx->pc = 0x2F729Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7298u;
    // 0x2f729c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2F7298u, 0x2F72A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F72A0u;
label_2f72a0:
    // 0x2f72a0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2f72a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2f72a4: 0xc0cdd2e  jal         func_3374B8
    ctx->pc = 0x2F72A4u;
    SET_GPR_U32(ctx, 31, 0x2F72ACu);
    ctx->pc = 0x2F72A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F72A4u;
    // 0x2f72a8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2F72A4u, 0x2F72ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F72ACu;
label_2f72ac:
    // 0x2f72ac: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2f72acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x2f72b0: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2f72b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2f72b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f72b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f72b8: 0x0  nop
    ctx->pc = 0x2f72b8u;
    // NOP
    // 0x2f72bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f72bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f72c0: 0x0  nop
    ctx->pc = 0x2f72c0u;
    // NOP
    // 0x2f72c4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2F72C4u;
    {
        const bool branch_taken_0x2f72c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F72C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F72C4u;
        // 0x2f72c8: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f72c4) {
            ctx->pc = 0x2F7304u;
            goto label_2f7304;
        }
    }
    ctx->pc = 0x2F72CCu;
    // 0x2f72cc: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2F72CCu;
    SET_GPR_U32(ctx, 31, 0x2F72D4u);
    ctx->pc = 0x2F72D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F72CCu;
    // 0x2f72d0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F72CCu, 0x2F72D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F72D4u;
label_2f72d4:
    // 0x2f72d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f72d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f72d8: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2F72D8u;
    {
        const bool branch_taken_0x2f72d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f72d8) {
            ctx->pc = 0x2F72DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F72D8u;
            // 0x2f72dc: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7304u;
            goto label_2f7304;
        }
    }
    ctx->pc = 0x2F72E0u;
    // 0x2f72e0: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x2F72E0u;
    SET_GPR_U32(ctx, 31, 0x2F72E8u);
    ctx->pc = 0x2F72E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F72E0u;
    // 0x2f72e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2F72E0u, 0x2F72E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F72E8u;
label_2f72e8:
    // 0x2f72e8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2f72e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f72ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f72ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f72f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f72f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f72f4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2f72f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2f72f8: 0xc0bf800  jal         func_2FE000
    ctx->pc = 0x2F72F8u;
    SET_GPR_U32(ctx, 31, 0x2F7300u);
    ctx->pc = 0x2F72FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F72F8u;
    // 0x2f72fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2F72F8u, 0x2F7300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7300u;
label_2f7300:
    // 0x2f7300: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x2f7300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2f7304:
    // 0x2f7304: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x2f7304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2f7308: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x2f7308u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2f730c: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x2f730cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f7310: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x2f7310u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f7314: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2f7314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f7318: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x2f7318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2f731c: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x2f731cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f7320: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7320u;
        // 0x2f7324: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7328u;
}
