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

// Function: sub_0012DA20
// Address: 0x12da20 - 0x12de48
void sub_0012DA20_0x12da20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012DA20_0x12da20");
#endif

    switch (ctx->pc) {
        case 0x12da6cu: goto label_12da6c;
        case 0x12da98u: goto label_12da98;
        case 0x12daa4u: goto label_12daa4;
        case 0x12dab0u: goto label_12dab0;
        case 0x12dad8u: goto label_12dad8;
        case 0x12dae8u: goto label_12dae8;
        case 0x12db20u: goto label_12db20;
        case 0x12dbecu: goto label_12dbec;
        case 0x12dc08u: goto label_12dc08;
        case 0x12dc2cu: goto label_12dc2c;
        case 0x12dc58u: goto label_12dc58;
        case 0x12dc70u: goto label_12dc70;
        case 0x12dcb8u: goto label_12dcb8;
        case 0x12dcd8u: goto label_12dcd8;
        case 0x12dcf0u: goto label_12dcf0;
        case 0x12dd28u: goto label_12dd28;
        case 0x12dd44u: goto label_12dd44;
        case 0x12dd68u: goto label_12dd68;
        case 0x12dda8u: goto label_12dda8;
        default: break;
    }

    ctx->pc = 0x12da20u;

    // 0x12da20: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x12da20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x12da24: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x12da24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x12da28: 0xe7b70168  swc1        $f23, 0x168($sp)
    ctx->pc = 0x12da28u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x12da2c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x12da2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da30: 0xe7b60160  swc1        $f22, 0x160($sp)
    ctx->pc = 0x12da30u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x12da34: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x12da34u;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x12da38: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x12da38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x12da3c: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x12da3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x12da40: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x12da40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x12da44: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x12da44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x12da48: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x12da48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x12da4c: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x12da4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x12da50: 0x8e640314  lw          $a0, 0x314($s3)
    ctx->pc = 0x12da50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 788)));
    // 0x12da54: 0x108000f1  beqz        $a0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x12DA54u;
    {
        const bool branch_taken_0x12da54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA54u;
        // 0x12da58: 0x46006586  mov.s       $f22, $f12 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da54) {
            ctx->pc = 0x12DE1Cu;
            goto label_12de1c;
        }
    }
    ctx->pc = 0x12DA5Cu;
    // 0x12da5c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x12da5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12da60: 0x52d38  dsll        $a1, $a1, 20
    ctx->pc = 0x12da60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 20);
    // 0x12da64: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x12DA64u;
    SET_GPR_U32(ctx, 31, 0x12DA6Cu);
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x12DA64u, 0x12DA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA6Cu;
label_12da6c:
    // 0x12da6c: 0x104000ec  beqz        $v0, . + 4 + (0xEC << 2)
    ctx->pc = 0x12DA6Cu;
    {
        const bool branch_taken_0x12da6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA6Cu;
        // 0x12da70: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da6c) {
            ctx->pc = 0x12DE20u;
            goto label_12de20;
        }
    }
    ctx->pc = 0x12DA74u;
    // 0x12da74: 0xc6610368  lwc1        $f1, 0x368($s3)
    ctx->pc = 0x12da74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12da78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12da78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12da7c: 0x0  nop
    ctx->pc = 0x12da7cu;
    // NOP
    // 0x12da80: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x12da80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12da84: 0x0  nop
    ctx->pc = 0x12da84u;
    // NOP
    // 0x12da88: 0x450000e6  bc1f        . + 4 + (0xE6 << 2)
    ctx->pc = 0x12DA88u;
    {
        const bool branch_taken_0x12da88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12DA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA88u;
        // 0x12da8c: 0x7bb10130  lq          $s1, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da88) {
            ctx->pc = 0x12DE24u;
            goto label_12de24;
        }
    }
    ctx->pc = 0x12DA90u;
    // 0x12da90: 0xc088574  jal         func_2215D0
    ctx->pc = 0x12DA90u;
    SET_GPR_U32(ctx, 31, 0x12DA98u);
    ctx->pc = 0x12DA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DA90u;
    // 0x12da94: 0x8e640314  lw          $a0, 0x314($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2215D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2215D0u, 0x12DA90u, 0x12DA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA98u;
label_12da98:
    // 0x12da98: 0x8e640314  lw          $a0, 0x314($s3)
    ctx->pc = 0x12da98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 788)));
    // 0x12da9c: 0xc08859c  jal         func_221670
    ctx->pc = 0x12DA9Cu;
    SET_GPR_U32(ctx, 31, 0x12DAA4u);
    ctx->pc = 0x12DAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DA9Cu;
    // 0x12daa0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x221670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221670u, 0x12DA9Cu, 0x12DAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DAA4u;
label_12daa4:
    // 0x12daa4: 0x8e640314  lw          $a0, 0x314($s3)
    ctx->pc = 0x12daa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 788)));
    // 0x12daa8: 0xc088574  jal         func_2215D0
    ctx->pc = 0x12DAA8u;
    SET_GPR_U32(ctx, 31, 0x12DAB0u);
    ctx->pc = 0x12DAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DAA8u;
    // 0x12daac: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2215D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2215D0u, 0x12DAA8u, 0x12DAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DAB0u;
label_12dab0:
    // 0x12dab0: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x12dab0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x12dab4: 0xe6760350  swc1        $f22, 0x350($s3)
    ctx->pc = 0x12dab4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 848), bits); }
    // 0x12dab8: 0x3c013e38  lui         $at, 0x3E38
    ctx->pc = 0x12dab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15928 << 16));
    // 0x12dabc: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x12dabcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x12dac0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12dac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12dac4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x12dac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12dac8: 0x8e640314  lw          $a0, 0x314($s3)
    ctx->pc = 0x12dac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 788)));
    // 0x12dacc: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x12daccu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x12dad0: 0xc089998  jal         func_226660
    ctx->pc = 0x12DAD0u;
    SET_GPR_U32(ctx, 31, 0x12DAD8u);
    ctx->pc = 0x12DAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DAD0u;
    // 0x12dad4: 0x4615a500  add.s       $f20, $f20, $f21 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x12DAD0u, 0x12DAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DAD8u;
label_12dad8:
    // 0x12dad8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x12DAD8u;
    {
        const bool branch_taken_0x12dad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DAD8u;
        // 0x12dadc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dad8) {
            ctx->pc = 0x12DB18u;
            goto label_12db18;
        }
    }
    ctx->pc = 0x12DAE0u;
    // 0x12dae0: 0xc0e87c0  jal         func_3A1F00
    ctx->pc = 0x12DAE0u;
    SET_GPR_U32(ctx, 31, 0x12DAE8u);
    ctx->pc = 0x12DAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DAE0u;
    // 0x12dae4: 0x8e640314  lw          $a0, 0x314($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x12DAE0u, 0x12DAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DAE8u;
label_12dae8:
    // 0x12dae8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x12dae8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12daec: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x12daecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x12daf0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x12daf0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12daf4: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x12daf4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12daf8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12daf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12dafc: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x12dafcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12db00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12db00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12db04: 0x0  nop
    ctx->pc = 0x12db04u;
    // NOP
    // 0x12db08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12db08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12db0c: 0x0  nop
    ctx->pc = 0x12db0cu;
    // NOP
    // 0x12db10: 0x450000a2  bc1f        . + 4 + (0xA2 << 2)
    ctx->pc = 0x12DB10u;
    {
        const bool branch_taken_0x12db10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB10u;
        // 0x12db14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12db10) {
            ctx->pc = 0x12DD9Cu;
            goto label_12dd9c;
        }
    }
    ctx->pc = 0x12DB18u;
label_12db18:
    // 0x12db18: 0xc0cd790  jal         func_335E40
    ctx->pc = 0x12DB18u;
    SET_GPR_U32(ctx, 31, 0x12DB20u);
    ctx->pc = 0x12DB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DB18u;
    // 0x12db1c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E40u, 0x12DB18u, 0x12DB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DB20u;
label_12db20:
    // 0x12db20: 0x3c014118  lui         $at, 0x4118
    ctx->pc = 0x12db20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16664 << 16));
    // 0x12db24: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x12db24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x12db28: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x12db28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x12db2c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x12db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x12db30: 0x8c6447c4  lw          $a0, 0x47C4($v1)
    ctx->pc = 0x12db30u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5147C4u));
    // 0x12db34: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x12db34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x12db38: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x12db38u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x511740u));
    // 0x12db3c: 0x3c110071  lui         $s1, 0x71
    ctx->pc = 0x12db3cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
    // 0x12db40: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x12db40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x12db44: 0x26314b00  addiu       $s1, $s1, 0x4B00
    ctx->pc = 0x12db44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 19200));
    // 0x12db48: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x12db48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12db4c: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x12db4cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
    // 0x12db50: 0x8cb20004  lw          $s2, 0x4($a1)
    ctx->pc = 0x12db50u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12db54: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12db54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12db58: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x12db58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12db5c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x12db5cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x12db60: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x12db60u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12db64: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x12db64u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12db68: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12db68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12db6c: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x12db6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12db70: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x12db70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12db74: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x12db74u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x12db78: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x12db78u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x12db7c: 0x4a0003bf  vwaitq
    ctx->pc = 0x12db7cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x12db80: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x12db80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12db84: 0x48290800  qmfc2.ni    $t1, $vf1
    ctx->pc = 0x12db84u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12db88: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x12db88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x12db8c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x12db8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x12db90: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x12db90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12db94: 0x7fa900e0  sq          $t1, 0xE0($sp)
    ctx->pc = 0x12db94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 9));
    // 0x12db98: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x12db98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12db9c: 0x7fa900d0  sq          $t1, 0xD0($sp)
    ctx->pc = 0x12db9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 9));
    // 0x12dba0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12dba0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dba4: 0x7fa900c0  sq          $t1, 0xC0($sp)
    ctx->pc = 0x12dba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 9));
    // 0x12dba8: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x12dba8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x12dbac: 0xc5548ae4  lwc1        $f20, -0x751C($t2)
    ctx->pc = 0x12dbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294937316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12dbb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12dbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbb4: 0x8e630314  lw          $v1, 0x314($s3)
    ctx->pc = 0x12dbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 788)));
    // 0x12dbb8: 0xc6600208  lwc1        $f0, 0x208($s3)
    ctx->pc = 0x12dbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dbbc: 0x84620092  lh          $v0, 0x92($v1)
    ctx->pc = 0x12dbbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
    // 0x12dbc0: 0x7fa90020  sq          $t1, 0x20($sp)
    ctx->pc = 0x12dbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
    // 0x12dbc4: 0x7fa900f0  sq          $t1, 0xF0($sp)
    ctx->pc = 0x12dbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 9));
    // 0x12dbc8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x12dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x12dbcc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12dbd0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x12dbd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12dbd4: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x12dbd4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x12dbd8: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x12dbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x12dbdc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x12dbdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x12dbe0: 0xe7b60094  swc1        $f22, 0x94($sp)
    ctx->pc = 0x12dbe0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x12dbe4: 0xc0d4336  jal         func_350CD8
    ctx->pc = 0x12DBE4u;
    SET_GPR_U32(ctx, 31, 0x12DBECu);
    ctx->pc = 0x12DBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DBE4u;
    // 0x12dbe8: 0xafa00090  sw          $zero, 0x90($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x12DBE4u, 0x12DBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DBECu;
label_12dbec:
    // 0x12dbec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12dbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12dbf0: 0xc7b50094  lwc1        $f21, 0x94($sp)
    ctx->pc = 0x12dbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12dbf4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12dbf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x12dbf8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12dbf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12dbfc: 0x4615a569  min.s       $f21, $f20, $f21
    ctx->pc = 0x12dbfcu;
    ctx->f[21] = std::min(ctx->f[20], ctx->f[21]);
    // 0x12dc00: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x12DC00u;
    SET_GPR_U32(ctx, 31, 0x12DC08u);
    ctx->pc = 0x12DC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DC00u;
    // 0x12dc04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x12DC00u, 0x12DC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC08u;
label_12dc08:
    // 0x12dc08: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x12dc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dc0c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x12dc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12dc10: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x12dc10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12dc14: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x12dc14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x12dc18: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x12dc18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x12dc1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12dc1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc20: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x12dc20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x12dc24: 0xc0d4336  jal         func_350CD8
    ctx->pc = 0x12DC24u;
    SET_GPR_U32(ctx, 31, 0x12DC2Cu);
    ctx->pc = 0x12DC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DC24u;
    // 0x12dc28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x12DC24u, 0x12DC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC2Cu;
label_12dc2c:
    // 0x12dc2c: 0x8e620314  lw          $v0, 0x314($s3)
    ctx->pc = 0x12dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 788)));
    // 0x12dc30: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x12dc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x12dc34: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x12dc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dc38: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12dc38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc3c: 0x84500092  lh          $s0, 0x92($v0)
    ctx->pc = 0x12dc3cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x12dc40: 0x4600a529  min.s       $f20, $f20, $f0
    ctx->pc = 0x12dc40u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[0]);
    // 0x12dc44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12dc44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12dc48: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12dc48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12dc4c: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x12dc4cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x12dc50: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x12DC50u;
    SET_GPR_U32(ctx, 31, 0x12DC58u);
    ctx->pc = 0x12DC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DC50u;
    // 0x12dc54: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x12DC50u, 0x12DC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC58u;
label_12dc58:
    // 0x12dc58: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x12dc58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x12dc5c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x12dc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x12dc60: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x12dc60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x12dc64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12dc64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc68: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x12DC68u;
    SET_GPR_U32(ctx, 31, 0x12DC70u);
    ctx->pc = 0x12DC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DC68u;
    // 0x12dc6c: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x12DC68u, 0x12DC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC70u;
label_12dc70:
    // 0x12dc70: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x12dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x12dc74: 0x7ba400f0  lq          $a0, 0xF0($sp)
    ctx->pc = 0x12dc74u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x12dc78: 0x24421770  addiu       $v0, $v0, 0x1770
    ctx->pc = 0x12dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6000));
    // 0x12dc7c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x12dc7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x12dc80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12dc80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12dc84: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x12dc84u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x511770u));
    // 0x12dc88: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x12dc88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12dc8c: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x12dc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x12dc90: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x12dc90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12dc94: 0x7fa400d0  sq          $a0, 0xD0($sp)
    ctx->pc = 0x12dc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 4));
    // 0x12dc98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12dc98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc9c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x12dc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x12dca0: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x12dca0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x12dca4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x12dca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x12dca8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12dca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dcac: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x12dcacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x12dcb0: 0xc0d4336  jal         func_350CD8
    ctx->pc = 0x12DCB0u;
    SET_GPR_U32(ctx, 31, 0x12DCB8u);
    ctx->pc = 0x12DCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DCB0u;
    // 0x12dcb4: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x12DCB0u, 0x12DCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DCB8u;
label_12dcb8:
    // 0x12dcb8: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x12dcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dcbc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x12dcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x12dcc0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x12dcc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x12dcc4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x12dcc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x12dcc8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12dcc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12dccc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x12dcccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12dcd0: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x12DCD0u;
    SET_GPR_U32(ctx, 31, 0x12DCD8u);
    ctx->pc = 0x12DCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DCD0u;
    // 0x12dcd4: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x12DCD0u, 0x12DCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DCD8u;
label_12dcd8:
    // 0x12dcd8: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x12dcd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x12dcdc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x12dcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x12dce0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x12dce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12dce4: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x12dce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x12dce8: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x12DCE8u;
    SET_GPR_U32(ctx, 31, 0x12DCF0u);
    ctx->pc = 0x12DCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DCE8u;
    // 0x12dcec: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x12DCE8u, 0x12DCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DCF0u;
label_12dcf0:
    // 0x12dcf0: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x12dcf0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x12dcf4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x12dcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12dcf8: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x12dcf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12dcfc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x12dcfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12dd00: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x12dd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x12dd04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12dd04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd08: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x12dd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x12dd0c: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x12dd0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x12dd10: 0xe7b60094  swc1        $f22, 0x94($sp)
    ctx->pc = 0x12dd10u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x12dd14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12dd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd18: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x12dd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
    // 0x12dd1c: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x12dd1cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x12dd20: 0xc0d4336  jal         func_350CD8
    ctx->pc = 0x12DD20u;
    SET_GPR_U32(ctx, 31, 0x12DD28u);
    ctx->pc = 0x12DD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DD20u;
    // 0x12dd24: 0xafa00090  sw          $zero, 0x90($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x12DD20u, 0x12DD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD28u;
label_12dd28:
    // 0x12dd28: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12dd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12dd2c: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x12dd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dd30: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12dd30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x12dd34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12dd34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12dd38: 0x4600ad69  min.s       $f21, $f21, $f0
    ctx->pc = 0x12dd38u;
    ctx->f[21] = std::min(ctx->f[21], ctx->f[0]);
    // 0x12dd3c: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x12DD3Cu;
    SET_GPR_U32(ctx, 31, 0x12DD44u);
    ctx->pc = 0x12DD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DD3Cu;
    // 0x12dd40: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x12DD3Cu, 0x12DD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD44u;
label_12dd44:
    // 0x12dd44: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x12dd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dd48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12dd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd4c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x12dd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x12dd50: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x12dd50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12dd54: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x12dd54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x12dd58: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x12dd58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12dd5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12dd5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd60: 0xc0d4336  jal         func_350CD8
    ctx->pc = 0x12DD60u;
    SET_GPR_U32(ctx, 31, 0x12DD68u);
    ctx->pc = 0x12DD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DD60u;
    // 0x12dd64: 0x24080200  addiu       $t0, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x12DD60u, 0x12DD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD68u;
label_12dd68:
    // 0x12dd68: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x12dd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dd6c: 0x4600a529  min.s       $f20, $f20, $f0
    ctx->pc = 0x12dd6cu;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[0]);
    // 0x12dd70: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x12dd70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12dd74: 0x3c01bfcd  lui         $at, 0xBFCD
    ctx->pc = 0x12dd74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49101 << 16));
    // 0x12dd78: 0x342187ad  ori         $at, $at, 0x87AD
    ctx->pc = 0x12dd78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34733);
    // 0x12dd7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12dd7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12dd80: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x12DD80u;
    {
        const bool branch_taken_0x12dd80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD80u;
        // 0x12dd84: 0xc66c0350  lwc1        $f12, 0x350($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dd80) {
            ctx->pc = 0x12DD94u;
            goto label_12dd94;
        }
    }
    ctx->pc = 0x12DD88u;
    // 0x12dd88: 0x3c013fcd  lui         $at, 0x3FCD
    ctx->pc = 0x12dd88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16333 << 16));
    // 0x12dd8c: 0x342187ad  ori         $at, $at, 0x87AD
    ctx->pc = 0x12dd8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34733);
    // 0x12dd90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12dd90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12dd94:
    // 0x12dd94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12DD94u;
    {
        const bool branch_taken_0x12dd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD94u;
        // 0x12dd98: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dd94) {
            ctx->pc = 0x12DDA0u;
            goto label_12dda0;
        }
    }
    ctx->pc = 0x12DD9Cu;
label_12dd9c:
    // 0x12dd9c: 0xc66c0350  lwc1        $f12, 0x350($s3)
    ctx->pc = 0x12dd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12dda0:
    // 0x12dda0: 0xc0cd742  jal         func_335D08
    ctx->pc = 0x12DDA0u;
    SET_GPR_U32(ctx, 31, 0x12DDA8u);
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x12DDA0u, 0x12DDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DDA8u;
label_12dda8:
    // 0x12dda8: 0xe6600350  swc1        $f0, 0x350($s3)
    ctx->pc = 0x12dda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 848), bits); }
    // 0x12ddac: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x12ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x12ddb0: 0xc66103d4  lwc1        $f1, 0x3D4($s3)
    ctx->pc = 0x12ddb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ddb4: 0xc4408ae8  lwc1        $f0, -0x7518($v0)
    ctx->pc = 0x12ddb4u;
    { uint32_t bits = FAST_READ32(0x548AE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ddb8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x12ddb8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12ddbc: 0x0  nop
    ctx->pc = 0x12ddbcu;
    // NOP
    // 0x12ddc0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x12DDC0u;
    {
        const bool branch_taken_0x12ddc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12ddc0) {
            ctx->pc = 0x12DDC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DDC0u;
            // 0x12ddc4: 0xc66103ac  lwc1        $f1, 0x3AC($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DDD4u;
            goto label_12ddd4;
        }
    }
    ctx->pc = 0x12DDC8u;
    // 0x12ddc8: 0xc66003b4  lwc1        $f0, 0x3B4($s3)
    ctx->pc = 0x12ddc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ddcc: 0xe66003d4  swc1        $f0, 0x3D4($s3)
    ctx->pc = 0x12ddccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 980), bits); }
    // 0x12ddd0: 0xc66103ac  lwc1        $f1, 0x3AC($s3)
    ctx->pc = 0x12ddd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12ddd4:
    // 0x12ddd4: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x12ddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x12ddd8: 0x3c013db2  lui         $at, 0x3DB2
    ctx->pc = 0x12ddd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15794 << 16));
    // 0x12dddc: 0x3421b8c3  ori         $at, $at, 0xB8C3
    ctx->pc = 0x12dddcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47299);
    // 0x12dde0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12dde0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12dde4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x12dde4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12dde8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x12dde8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12ddec: 0xc4438aec  lwc1        $f3, -0x7514($v0)
    ctx->pc = 0x12ddecu;
    { uint32_t bits = FAST_READ32(0x548AECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12ddf0: 0x4602b832  c.eq.s      $f23, $f2
    ctx->pc = 0x12ddf0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[23], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12ddf4: 0xae600448  sw          $zero, 0x448($s3)
    ctx->pc = 0x12ddf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1096), GPR_U32(ctx, 0));
    // 0x12ddf8: 0xe66303e4  swc1        $f3, 0x3E4($s3)
    ctx->pc = 0x12ddf8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 996), bits); }
    // 0x12ddfc: 0xe66103b4  swc1        $f1, 0x3B4($s3)
    ctx->pc = 0x12ddfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 948), bits); }
    // 0x12de00: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x12DE00u;
    {
        const bool branch_taken_0x12de00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12DE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE00u;
        // 0x12de04: 0xe677040c  swc1        $f23, 0x40C($s3) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1036), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12de00) {
            ctx->pc = 0x12DE1Cu;
            goto label_12de1c;
        }
    }
    ctx->pc = 0x12DE08u;
    // 0x12de08: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x12de08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x12de0c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x12de0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x12de10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12de10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12de14: 0x0  nop
    ctx->pc = 0x12de14u;
    // NOP
    // 0x12de18: 0xe660040c  swc1        $f0, 0x40C($s3)
    ctx->pc = 0x12de18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1036), bits); }
label_12de1c:
    // 0x12de1c: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x12de1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_12de20:
    // 0x12de20: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x12de20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_12de24:
    // 0x12de24: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x12de24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x12de28: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x12de28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x12de2c: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x12de2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x12de30: 0xc7b70168  lwc1        $f23, 0x168($sp)
    ctx->pc = 0x12de30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x12de34: 0xc7b60160  lwc1        $f22, 0x160($sp)
    ctx->pc = 0x12de34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x12de38: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x12de38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12de3c: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x12de3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12de40: 0x3e00008  jr          $ra
    ctx->pc = 0x12DE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE40u;
        // 0x12de44: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DE48u;
}
