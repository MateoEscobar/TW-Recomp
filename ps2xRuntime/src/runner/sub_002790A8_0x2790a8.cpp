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

// Function: sub_002790A8
// Address: 0x2790a8 - 0x2791b0
void sub_002790A8_0x2790a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002790A8_0x2790a8");
#endif

    switch (ctx->pc) {
        case 0x2790a8u: goto label_2790a8;
        case 0x2790acu: goto label_2790ac;
        case 0x2790b0u: goto label_2790b0;
        case 0x2790b4u: goto label_2790b4;
        case 0x2790b8u: goto label_2790b8;
        case 0x2790bcu: goto label_2790bc;
        case 0x2790c0u: goto label_2790c0;
        case 0x2790c4u: goto label_2790c4;
        case 0x2790c8u: goto label_2790c8;
        case 0x2790ccu: goto label_2790cc;
        case 0x2790d0u: goto label_2790d0;
        case 0x2790d4u: goto label_2790d4;
        case 0x2790d8u: goto label_2790d8;
        case 0x2790dcu: goto label_2790dc;
        case 0x2790e0u: goto label_2790e0;
        case 0x2790e4u: goto label_2790e4;
        case 0x2790e8u: goto label_2790e8;
        case 0x2790ecu: goto label_2790ec;
        case 0x2790f0u: goto label_2790f0;
        case 0x2790f4u: goto label_2790f4;
        case 0x2790f8u: goto label_2790f8;
        case 0x2790fcu: goto label_2790fc;
        case 0x279100u: goto label_279100;
        case 0x279104u: goto label_279104;
        case 0x279108u: goto label_279108;
        case 0x27910cu: goto label_27910c;
        case 0x279110u: goto label_279110;
        case 0x279114u: goto label_279114;
        case 0x279118u: goto label_279118;
        case 0x27911cu: goto label_27911c;
        case 0x279120u: goto label_279120;
        case 0x279124u: goto label_279124;
        case 0x279128u: goto label_279128;
        case 0x27912cu: goto label_27912c;
        case 0x279130u: goto label_279130;
        case 0x279134u: goto label_279134;
        case 0x279138u: goto label_279138;
        case 0x27913cu: goto label_27913c;
        case 0x279140u: goto label_279140;
        case 0x279144u: goto label_279144;
        case 0x279148u: goto label_279148;
        case 0x27914cu: goto label_27914c;
        case 0x279150u: goto label_279150;
        case 0x279154u: goto label_279154;
        case 0x279158u: goto label_279158;
        case 0x27915cu: goto label_27915c;
        case 0x279160u: goto label_279160;
        case 0x279164u: goto label_279164;
        case 0x279168u: goto label_279168;
        case 0x27916cu: goto label_27916c;
        case 0x279170u: goto label_279170;
        case 0x279174u: goto label_279174;
        case 0x279178u: goto label_279178;
        case 0x27917cu: goto label_27917c;
        case 0x279180u: goto label_279180;
        case 0x279184u: goto label_279184;
        case 0x279188u: goto label_279188;
        case 0x27918cu: goto label_27918c;
        case 0x279190u: goto label_279190;
        case 0x279194u: goto label_279194;
        case 0x279198u: goto label_279198;
        case 0x27919cu: goto label_27919c;
        case 0x2791a0u: goto label_2791a0;
        case 0x2791a4u: goto label_2791a4;
        case 0x2791a8u: goto label_2791a8;
        case 0x2791acu: goto label_2791ac;
        default: break;
    }

    ctx->pc = 0x2790a8u;

label_2790a8:
    // 0x2790a8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2790a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2790ac:
    // 0x2790ac: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2790acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_2790b0:
    // 0x2790b0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2790b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2790b4:
    // 0x2790b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2790b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2790b8:
    // 0x2790b8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2790b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2790bc:
    // 0x2790bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2790bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2790c0:
    // 0x2790c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2790c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2790c4:
    // 0x2790c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2790c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2790c8:
    // 0x2790c8: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2790c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2790cc:
    // 0x2790cc: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2790ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2790d0:
    // 0x2790d0: 0x60f809  jalr        $v1
label_2790d4:
    if (ctx->pc == 0x2790D4u) {
        ctx->pc = 0x2790D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2790D0u;
        // 0x2790d4: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2790D8u;
        goto label_2790d8;
    }
    ctx->pc = 0x2790D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2790D8u);
        ctx->pc = 0x2790D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2790D0u;
        // 0x2790d4: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2790D0u, 0x2790D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2790D8u;
label_2790d8:
    // 0x2790d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2790d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2790dc:
    // 0x2790dc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2790dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2790e0:
    // 0x2790e0: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2790e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2790e4:
    // 0x2790e4: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2790e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2790e8:
    // 0x2790e8: 0x60f809  jalr        $v1
label_2790ec:
    if (ctx->pc == 0x2790ECu) {
        ctx->pc = 0x2790ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2790E8u;
        // 0x2790ec: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2790F0u;
        goto label_2790f0;
    }
    ctx->pc = 0x2790E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2790F0u);
        ctx->pc = 0x2790ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2790E8u;
        // 0x2790ec: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2790E8u, 0x2790F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2790F0u;
label_2790f0:
    // 0x2790f0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2790f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2790f4:
    // 0x2790f4: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x2790f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2790f8:
    // 0x2790f8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2790f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2790fc:
    // 0x2790fc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2790fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_279100:
    // 0x279100: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x279100u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_279104:
    // 0x279104: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x279104u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_279108:
    // 0x279108: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x279108u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_27910c:
    // 0x27910c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x27910cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_279110:
    // 0x279110: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x279110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_279114:
    // 0x279114: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x279114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_279118:
    // 0x279118: 0xc0cd5ea  jal         func_3357A8
label_27911c:
    if (ctx->pc == 0x27911Cu) {
        ctx->pc = 0x27911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279118u;
        // 0x27911c: 0xc7ad0040  lwc1        $f13, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x279120u;
        goto label_279120;
    }
    ctx->pc = 0x279118u;
    SET_GPR_U32(ctx, 31, 0x279120u);
    ctx->pc = 0x27911Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279118u;
    // 0x27911c: 0xc7ad0040  lwc1        $f13, 0x40($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x279118u, 0x279120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279120u;
label_279120:
    // 0x279120: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x279120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_279124:
    // 0x279124: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x279124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_279128:
    // 0x279128: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x279128u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_27912c:
    // 0x27912c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27912cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_279130:
    // 0x279130: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x279130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_279134:
    // 0x279134: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x279134u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_279138:
    // 0x279138: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x279138u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27913c:
    // 0x27913c: 0x0  nop
    ctx->pc = 0x27913cu;
    // NOP
label_279140:
    // 0x279140: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_279144:
    if (ctx->pc == 0x279144u) {
        ctx->pc = 0x279148u;
        goto label_279148;
    }
    ctx->pc = 0x279140u;
    {
        const bool branch_taken_0x279140 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x279140) {
            ctx->pc = 0x27915Cu;
            goto label_27915c;
        }
    }
    ctx->pc = 0x279148u;
label_279148:
    // 0x279148: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x279148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_27914c:
    // 0x27914c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x27914cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_279150:
    // 0x279150: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x279150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_279154:
    // 0x279154: 0x0  nop
    ctx->pc = 0x279154u;
    // NOP
label_279158:
    // 0x279158: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x279158u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27915c:
    // 0x27915c: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x27915cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_279160:
    // 0x279160: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x279160u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_279164:
    // 0x279164: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x279164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_279168:
    // 0x279168: 0x0  nop
    ctx->pc = 0x279168u;
    // NOP
label_27916c:
    // 0x27916c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27916cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279170:
    // 0x279170: 0x0  nop
    ctx->pc = 0x279170u;
    // NOP
label_279174:
    // 0x279174: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_279178:
    if (ctx->pc == 0x279178u) {
        ctx->pc = 0x279178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279174u;
        // 0x279178: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27917Cu;
        goto label_27917c;
    }
    ctx->pc = 0x279174u;
    {
        const bool branch_taken_0x279174 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x279178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279174u;
        // 0x279178: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279174) {
            ctx->pc = 0x279190u;
            goto label_279190;
        }
    }
    ctx->pc = 0x27917Cu;
label_27917c:
    // 0x27917c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x27917cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_279180:
    // 0x279180: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x279180u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_279184:
    // 0x279184: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x279184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_279188:
    // 0x279188: 0x0  nop
    ctx->pc = 0x279188u;
    // NOP
label_27918c:
    // 0x27918c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27918cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_279190:
    // 0x279190: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x279190u;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
label_279194:
    // 0x279194: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x279194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_279198:
    // 0x279198: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x279198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_27919c:
    // 0x27919c: 0x3e00008  jr          $ra
label_2791a0:
    if (ctx->pc == 0x2791A0u) {
        ctx->pc = 0x2791A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27919Cu;
        // 0x2791a0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2791A4u;
        goto label_2791a4;
    }
    ctx->pc = 0x27919Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2791A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27919Cu;
        // 0x2791a0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27919Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2791A4u;
label_2791a4:
    // 0x2791a4: 0x0  nop
    ctx->pc = 0x2791a4u;
    // NOP
label_2791a8:
    // 0x2791a8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2791a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2791ac:
    // 0x2791ac: 0x0  nop
    ctx->pc = 0x2791acu;
    // NOP
    ctx->pc = 0x2791b0u;
}
