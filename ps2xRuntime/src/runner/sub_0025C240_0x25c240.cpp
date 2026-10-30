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

// Function: sub_0025C240
// Address: 0x25c240 - 0x25c5b0
void sub_0025C240_0x25c240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C240_0x25c240");
#endif

    switch (ctx->pc) {
        case 0x25c290u: goto label_25c290;
        case 0x25c2a0u: goto label_25c2a0;
        case 0x25c35cu: goto label_25c35c;
        case 0x25c368u: goto label_25c368;
        case 0x25c3dcu: goto label_25c3dc;
        case 0x25c448u: goto label_25c448;
        case 0x25c4ccu: goto label_25c4cc;
        case 0x25c530u: goto label_25c530;
        case 0x25c568u: goto label_25c568;
        case 0x25c574u: goto label_25c574;
        case 0x25c584u: goto label_25c584;
        default: break;
    }

    ctx->pc = 0x25c240u;

    // 0x25c240: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x25c240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x25c244: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x25c244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x25c248: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x25c248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x25c24c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x25c24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x25c250: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x25c250u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x25c254: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25c254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c258: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x25c258u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x25c25c: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x25c25cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x25c260: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x25c260u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x25c264: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25c264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c268: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x25c268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x25c26c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x25c26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x25c270: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25c270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25c274: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x25c274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x25c278: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25c278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25c27c: 0x86250092  lh          $a1, 0x92($s1)
    ctx->pc = 0x25c27cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x25c280: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x25c280u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x25c284: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25c284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25c288: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x25C288u;
    SET_GPR_U32(ctx, 31, 0x25C290u);
    ctx->pc = 0x25C28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C288u;
    // 0x25c28c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x25C288u, 0x25C290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C290u;
label_25c290:
    // 0x25c290: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x25c290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25c294: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x25c294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25c298: 0xc0cd5ea  jal         func_3357A8
    ctx->pc = 0x25C298u;
    SET_GPR_U32(ctx, 31, 0x25C2A0u);
    ctx->pc = 0x25C29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C298u;
    // 0x25c29c: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x25C298u, 0x25C2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C2A0u;
label_25c2a0:
    // 0x25c2a0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x25c2a0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x25c2a4: 0x4615b501  sub.s       $f20, $f22, $f21
    ctx->pc = 0x25c2a4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
    // 0x25c2a8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x25c2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x25c2ac: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25c2acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x25c2b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c2b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c2b4: 0x0  nop
    ctx->pc = 0x25c2b4u;
    // NOP
    // 0x25c2b8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x25c2b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c2bc: 0x0  nop
    ctx->pc = 0x25c2bcu;
    // NOP
    // 0x25c2c0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x25C2C0u;
    {
        const bool branch_taken_0x25c2c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25c2c0) {
            ctx->pc = 0x25C2DCu;
            goto label_25c2dc;
        }
    }
    ctx->pc = 0x25C2C8u;
    // 0x25c2c8: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x25c2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x25c2cc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25c2ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x25c2d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c2d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c2d4: 0x0  nop
    ctx->pc = 0x25c2d4u;
    // NOP
    // 0x25c2d8: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x25c2d8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_25c2dc:
    // 0x25c2dc: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x25c2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x25c2e0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25c2e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x25c2e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c2e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c2e8: 0x0  nop
    ctx->pc = 0x25c2e8u;
    // NOP
    // 0x25c2ec: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x25c2ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c2f0: 0x0  nop
    ctx->pc = 0x25c2f0u;
    // NOP
    // 0x25c2f4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x25C2F4u;
    {
        const bool branch_taken_0x25c2f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25c2f4) {
            ctx->pc = 0x25C310u;
            goto label_25c310;
        }
    }
    ctx->pc = 0x25C2FCu;
    // 0x25c2fc: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x25c2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x25c300: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25c300u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x25c304: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c308: 0x0  nop
    ctx->pc = 0x25c308u;
    // NOP
    // 0x25c30c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x25c30cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_25c310:
    // 0x25c310: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25c310u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c314: 0x0  nop
    ctx->pc = 0x25c314u;
    // NOP
    // 0x25c318: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x25c318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c31c: 0x0  nop
    ctx->pc = 0x25c31cu;
    // NOP
    // 0x25c320: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x25C320u;
    {
        const bool branch_taken_0x25c320 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C320u;
        // 0x25c324: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c320) {
            ctx->pc = 0x25C32Cu;
            goto label_25c32c;
        }
    }
    ctx->pc = 0x25C328u;
    // 0x25c328: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x25c328u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c32c:
    // 0x25c32c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x25c32cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x25c330: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25c330u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x25c334: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25c334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25c338: 0x4600a005  abs.s       $f0, $f20
    ctx->pc = 0x25c338u;
    ctx->f[0] = FPU_ABS_S(ctx->f[20]);
    // 0x25c33c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25c33cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c340: 0x0  nop
    ctx->pc = 0x25c340u;
    // NOP
    // 0x25c344: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x25C344u;
    {
        const bool branch_taken_0x25c344 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25C348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C344u;
        // 0x25c348: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c344) {
            ctx->pc = 0x25C350u;
            goto label_25c350;
        }
    }
    ctx->pc = 0x25C34Cu;
    // 0x25c34c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x25c34cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c350:
    // 0x25c350: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25c350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c354: 0xc095018  jal         func_254060
    ctx->pc = 0x25C354u;
    SET_GPR_U32(ctx, 31, 0x25C35Cu);
    ctx->pc = 0x25C358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C354u;
    // 0x25c358: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x25C354u, 0x25C35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C35Cu;
label_25c35c:
    // 0x25c35c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25c35cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c360: 0xc087502  jal         func_21D408
    ctx->pc = 0x25C360u;
    SET_GPR_U32(ctx, 31, 0x25C368u);
    ctx->pc = 0x25C364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C360u;
    // 0x25c364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x25C360u, 0x25C368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C368u;
label_25c368:
    // 0x25c368: 0x8043000b  lb          $v1, 0xB($v0)
    ctx->pc = 0x25c368u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x25c36c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C36Cu;
    {
        const bool branch_taken_0x25c36c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25C370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C36Cu;
        // 0x25c370: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c36c) {
            ctx->pc = 0x25C380u;
            goto label_25c380;
        }
    }
    ctx->pc = 0x25C374u;
    // 0x25c374: 0x12020002  beq         $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25C374u;
    {
        const bool branch_taken_0x25c374 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x25C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C374u;
        // 0x25c378: 0x3a020006  xori        $v0, $s0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c374) {
            ctx->pc = 0x25C380u;
            goto label_25c380;
        }
    }
    ctx->pc = 0x25C37Cu;
    // 0x25c37c: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x25c37cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_25c380:
    // 0x25c380: 0x1280003d  beqz        $s4, . + 4 + (0x3D << 2)
    ctx->pc = 0x25C380u;
    {
        const bool branch_taken_0x25c380 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c380) {
            ctx->pc = 0x25C478u;
            goto label_25c478;
        }
    }
    ctx->pc = 0x25C388u;
    // 0x25c388: 0x12400020  beqz        $s2, . + 4 + (0x20 << 2)
    ctx->pc = 0x25C388u;
    {
        const bool branch_taken_0x25c388 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c388) {
            ctx->pc = 0x25C40Cu;
            goto label_25c40c;
        }
    }
    ctx->pc = 0x25C390u;
    // 0x25c390: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x25c390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x25c394: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25c394u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x25c398: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c39c: 0x0  nop
    ctx->pc = 0x25c39cu;
    // NOP
    // 0x25c3a0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x25c3a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c3a4: 0x0  nop
    ctx->pc = 0x25c3a4u;
    // NOP
    // 0x25c3a8: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x25C3A8u;
    {
        const bool branch_taken_0x25c3a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25c3a8) {
            ctx->pc = 0x25C3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C3A8u;
            // 0x25c3ac: 0x4600b546  mov.s       $f21, $f22 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C3C4u;
            goto label_25c3c4;
        }
    }
    ctx->pc = 0x25C3B0u;
    // 0x25c3b0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x25c3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x25c3b4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25c3b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x25c3b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c3b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c3bc: 0x0  nop
    ctx->pc = 0x25c3bcu;
    // NOP
    // 0x25c3c0: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x25c3c0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_25c3c4:
    // 0x25c3c4: 0x3c014006  lui         $at, 0x4006
    ctx->pc = 0x25c3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16390 << 16));
    // 0x25c3c8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x25c3c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x25c3cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c3ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c3d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25c3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c3d4: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x25C3D4u;
    SET_GPR_U32(ctx, 31, 0x25C3DCu);
    ctx->pc = 0x25C3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C3D4u;
    // 0x25c3d8: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x25C3D4u, 0x25C3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C3DCu;
label_25c3dc:
    // 0x25c3dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25C3DCu;
    {
        const bool branch_taken_0x25c3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c3dc) {
            ctx->pc = 0x25C3F4u;
            goto label_25c3f4;
        }
    }
    ctx->pc = 0x25C3E4u;
    // 0x25c3e4: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x25c3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x25c3e8: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x25c3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x25c3ec: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x25C3ECu;
    {
        const bool branch_taken_0x25c3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C3ECu;
        // 0x25c3f0: 0x24700002  addiu       $s0, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c3ec) {
            ctx->pc = 0x25C558u;
            goto label_25c558;
        }
    }
    ctx->pc = 0x25C3F4u;
label_25c3f4:
    // 0x25c3f4: 0x16600058  bnez        $s3, . + 4 + (0x58 << 2)
    ctx->pc = 0x25C3F4u;
    {
        const bool branch_taken_0x25c3f4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C3F4u;
        // 0x25c3f8: 0x2410018d  addiu       $s0, $zero, 0x18D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 397));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c3f4) {
            ctx->pc = 0x25C558u;
            goto label_25c558;
        }
    }
    ctx->pc = 0x25C3FCu;
    // 0x25c3fc: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x25c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x25c400: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x25c400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x25c404: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x25C404u;
    {
        const bool branch_taken_0x25c404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C404u;
        // 0x25c408: 0x24700002  addiu       $s0, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c404) {
            ctx->pc = 0x25C558u;
            goto label_25c558;
        }
    }
    ctx->pc = 0x25C40Cu;
label_25c40c:
    // 0x25c40c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x25c40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x25c410: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25c410u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x25c414: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c418: 0x0  nop
    ctx->pc = 0x25c418u;
    // NOP
    // 0x25c41c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x25c41cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c420: 0x0  nop
    ctx->pc = 0x25c420u;
    // NOP
    // 0x25c424: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x25C424u;
    {
        const bool branch_taken_0x25c424 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25c424) {
            ctx->pc = 0x25C428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C424u;
            // 0x25c428: 0x4600b546  mov.s       $f21, $f22 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C430u;
            goto label_25c430;
        }
    }
    ctx->pc = 0x25C42Cu;
    // 0x25c42c: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x25c42cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_25c430:
    // 0x25c430: 0x3c014006  lui         $at, 0x4006
    ctx->pc = 0x25c430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16390 << 16));
    // 0x25c434: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x25c434u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x25c438: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c43c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25c43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c440: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x25C440u;
    SET_GPR_U32(ctx, 31, 0x25C448u);
    ctx->pc = 0x25C444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C440u;
    // 0x25c444: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x25C440u, 0x25C448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C448u;
label_25c448:
    // 0x25c448: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25C448u;
    {
        const bool branch_taken_0x25c448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c448) {
            ctx->pc = 0x25C460u;
            goto label_25c460;
        }
    }
    ctx->pc = 0x25C450u;
    // 0x25c450: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x25c450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x25c454: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x25c454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x25c458: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x25C458u;
    {
        const bool branch_taken_0x25c458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C458u;
        // 0x25c45c: 0x24700003  addiu       $s0, $v1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c458) {
            ctx->pc = 0x25C558u;
            goto label_25c558;
        }
    }
    ctx->pc = 0x25C460u;
label_25c460:
    // 0x25c460: 0x1660003d  bnez        $s3, . + 4 + (0x3D << 2)
    ctx->pc = 0x25C460u;
    {
        const bool branch_taken_0x25c460 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C460u;
        // 0x25c464: 0x2410018e  addiu       $s0, $zero, 0x18E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 398));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c460) {
            ctx->pc = 0x25C558u;
            goto label_25c558;
        }
    }
    ctx->pc = 0x25C468u;
    // 0x25c468: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x25c468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x25c46c: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x25c46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x25c470: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x25C470u;
    {
        const bool branch_taken_0x25c470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C470u;
        // 0x25c474: 0x24700003  addiu       $s0, $v1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c470) {
            ctx->pc = 0x25C558u;
            goto label_25c558;
        }
    }
    ctx->pc = 0x25C478u;
label_25c478:
    // 0x25c478: 0x1240001e  beqz        $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x25C478u;
    {
        const bool branch_taken_0x25c478 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c478) {
            ctx->pc = 0x25C4F4u;
            goto label_25c4f4;
        }
    }
    ctx->pc = 0x25C480u;
    // 0x25c480: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x25c480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x25c484: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25c484u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x25c488: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c48c: 0x0  nop
    ctx->pc = 0x25c48cu;
    // NOP
    // 0x25c490: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x25c490u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c494: 0x0  nop
    ctx->pc = 0x25c494u;
    // NOP
    // 0x25c498: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x25C498u;
    {
        const bool branch_taken_0x25c498 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25c498) {
            ctx->pc = 0x25C49Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C498u;
            // 0x25c49c: 0x4600b546  mov.s       $f21, $f22 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C4B4u;
            goto label_25c4b4;
        }
    }
    ctx->pc = 0x25C4A0u;
    // 0x25c4a0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x25c4a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x25c4a4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25c4a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x25c4a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c4a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c4ac: 0x0  nop
    ctx->pc = 0x25c4acu;
    // NOP
    // 0x25c4b0: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x25c4b0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_25c4b4:
    // 0x25c4b4: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x25c4b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x25c4b8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x25c4b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x25c4bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c4bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c4c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25c4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c4c4: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x25C4C4u;
    SET_GPR_U32(ctx, 31, 0x25C4CCu);
    ctx->pc = 0x25C4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C4C4u;
    // 0x25c4c8: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x25C4C4u, 0x25C4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C4CCu;
label_25c4cc:
    // 0x25c4cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C4CCu;
    {
        const bool branch_taken_0x25c4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c4cc) {
            ctx->pc = 0x25C4E0u;
            goto label_25c4e0;
        }
    }
    ctx->pc = 0x25C4D4u;
    // 0x25c4d4: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x25c4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x25c4d8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x25C4D8u;
    {
        const bool branch_taken_0x25c4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C4D8u;
        // 0x25c4dc: 0x8c500064  lw          $s0, 0x64($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c4d8) {
            ctx->pc = 0x25C558u;
            goto label_25c558;
        }
    }
    ctx->pc = 0x25C4E0u;
label_25c4e0:
    // 0x25c4e0: 0x1660001d  bnez        $s3, . + 4 + (0x1D << 2)
    ctx->pc = 0x25C4E0u;
    {
        const bool branch_taken_0x25c4e0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C4E0u;
        // 0x25c4e4: 0x2410018b  addiu       $s0, $zero, 0x18B (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 395));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c4e0) {
            ctx->pc = 0x25C558u;
            goto label_25c558;
        }
    }
    ctx->pc = 0x25C4E8u;
    // 0x25c4e8: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x25c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x25c4ec: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x25C4ECu;
    {
        const bool branch_taken_0x25c4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C4ECu;
        // 0x25c4f0: 0x8c500048  lw          $s0, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c4ec) {
            ctx->pc = 0x25C558u;
            goto label_25c558;
        }
    }
    ctx->pc = 0x25C4F4u;
label_25c4f4:
    // 0x25c4f4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x25c4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x25c4f8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25c4f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x25c4fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c4fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c500: 0x0  nop
    ctx->pc = 0x25c500u;
    // NOP
    // 0x25c504: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x25c504u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c508: 0x0  nop
    ctx->pc = 0x25c508u;
    // NOP
    // 0x25c50c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x25C50Cu;
    {
        const bool branch_taken_0x25c50c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25c50c) {
            ctx->pc = 0x25C510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C50Cu;
            // 0x25c510: 0x4600b546  mov.s       $f21, $f22 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C518u;
            goto label_25c518;
        }
    }
    ctx->pc = 0x25C514u;
    // 0x25c514: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x25c514u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_25c518:
    // 0x25c518: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x25c518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x25c51c: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x25c51cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x25c520: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c520u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25c524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c528: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x25C528u;
    SET_GPR_U32(ctx, 31, 0x25C530u);
    ctx->pc = 0x25C52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C528u;
    // 0x25c52c: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x25C528u, 0x25C530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C530u;
label_25c530:
    // 0x25c530: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C530u;
    {
        const bool branch_taken_0x25c530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c530) {
            ctx->pc = 0x25C544u;
            goto label_25c544;
        }
    }
    ctx->pc = 0x25C538u;
    // 0x25c538: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x25c538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x25c53c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25C53Cu;
    {
        const bool branch_taken_0x25c53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C53Cu;
        // 0x25c540: 0x8c430064  lw          $v1, 0x64($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c53c) {
            ctx->pc = 0x25C554u;
            goto label_25c554;
        }
    }
    ctx->pc = 0x25C544u;
label_25c544:
    // 0x25c544: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C544u;
    {
        const bool branch_taken_0x25c544 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C544u;
        // 0x25c548: 0x2410018c  addiu       $s0, $zero, 0x18C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 396));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c544) {
            ctx->pc = 0x25C558u;
            goto label_25c558;
        }
    }
    ctx->pc = 0x25C54Cu;
    // 0x25c54c: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x25c54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x25c550: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x25c550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_25c554:
    // 0x25c554: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x25c554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_25c558:
    // 0x25c558: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25c558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c55c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25c55cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c560: 0xc0972e4  jal         func_25CB90
    ctx->pc = 0x25C560u;
    SET_GPR_U32(ctx, 31, 0x25C568u);
    ctx->pc = 0x25C564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C560u;
    // 0x25c564: 0x3c062000  lui         $a2, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB90u, 0x25C560u, 0x25C568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C568u;
label_25c568:
    // 0x25c568: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25c568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c56c: 0xc040680  jal         func_101A00
    ctx->pc = 0x25C56Cu;
    SET_GPR_U32(ctx, 31, 0x25C574u);
    ctx->pc = 0x25C570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C56Cu;
    // 0x25c570: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x25C56Cu, 0x25C574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C574u;
label_25c574:
    // 0x25c574: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25c574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c578: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x25c578u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x25c57c: 0xc08f3e2  jal         func_23CF88
    ctx->pc = 0x25C57Cu;
    SET_GPR_U32(ctx, 31, 0x25C584u);
    ctx->pc = 0x25C580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C57Cu;
    // 0x25c580: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x25C57Cu, 0x25C584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C584u;
label_25c584:
    // 0x25c584: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x25c584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25c588: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x25c588u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25c58c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x25c58cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25c590: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25c590u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25c594: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x25c594u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c598: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25c598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c59c: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x25c59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25c5a0: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x25c5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25c5a4: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x25c5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25c5a8: 0x3e00008  jr          $ra
    ctx->pc = 0x25C5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C5A8u;
        // 0x25c5ac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C5A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C5B0u;
}
