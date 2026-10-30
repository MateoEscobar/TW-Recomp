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

// Function: sub_002D93A0
// Address: 0x2d93a0 - 0x2d97c0
void sub_002D93A0_0x2d93a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D93A0_0x2d93a0");
#endif

    switch (ctx->pc) {
        case 0x2d93e0u: goto label_2d93e0;
        case 0x2d93f0u: goto label_2d93f0;
        case 0x2d943cu: goto label_2d943c;
        case 0x2d945cu: goto label_2d945c;
        case 0x2d9464u: goto label_2d9464;
        case 0x2d9490u: goto label_2d9490;
        case 0x2d94acu: goto label_2d94ac;
        case 0x2d9518u: goto label_2d9518;
        case 0x2d9594u: goto label_2d9594;
        case 0x2d960cu: goto label_2d960c;
        case 0x2d9710u: goto label_2d9710;
        case 0x2d9720u: goto label_2d9720;
        case 0x2d9740u: goto label_2d9740;
        case 0x2d9750u: goto label_2d9750;
        case 0x2d9758u: goto label_2d9758;
        case 0x2d978cu: goto label_2d978c;
        default: break;
    }

    ctx->pc = 0x2d93a0u;

    // 0x2d93a0: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x2d93a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x2d93a4: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x2d93a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
    // 0x2d93a8: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x2d93a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
    // 0x2d93ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d93acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d93b0: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x2d93b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
    // 0x2d93b4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2d93b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2d93b8: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x2d93b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
    // 0x2d93bc: 0x7fb50160  sq          $s5, 0x160($sp)
    ctx->pc = 0x2d93bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 21));
    // 0x2d93c0: 0x7fb60150  sq          $s6, 0x150($sp)
    ctx->pc = 0x2d93c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 22));
    // 0x2d93c4: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x2d93c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x2d93c8: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x2d93c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
    // 0x2d93cc: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x2d93ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d93d0: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2d93d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2d93d4: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x2d93d4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d93d8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2D93D8u;
    SET_GPR_U32(ctx, 31, 0x2D93E0u);
    ctx->pc = 0x2D93DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D93D8u;
    // 0x2d93dc: 0xafa20130  sw          $v0, 0x130($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2D93D8u, 0x2D93E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D93E0u;
label_2d93e0:
    // 0x2d93e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d93e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d93e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d93e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d93e8: 0xc0a352c  jal         func_28D4B0
    ctx->pc = 0x2D93E8u;
    SET_GPR_U32(ctx, 31, 0x2D93F0u);
    ctx->pc = 0x2D93ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D93E8u;
    // 0x2d93ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2D93E8u, 0x2D93F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D93F0u;
label_2d93f0:
    // 0x2d93f0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2d93f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d93f4: 0x128000e7  beqz        $s4, . + 4 + (0xE7 << 2)
    ctx->pc = 0x2D93F4u;
    {
        const bool branch_taken_0x2d93f4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D93F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93F4u;
        // 0x2d93f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d93f4) {
            ctx->pc = 0x2D9794u;
            goto label_2d9794;
        }
    }
    ctx->pc = 0x2D93FCu;
    // 0x2d93fc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2d93fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d9400: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2d9400u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x2d9404: 0x1c400029  bgtz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2D9404u;
    {
        const bool branch_taken_0x2d9404 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2D9408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9404u;
        // 0x2d9408: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9404) {
            ctx->pc = 0x2D94ACu;
            goto label_2d94ac;
        }
    }
    ctx->pc = 0x2D940Cu;
    // 0x2d940c: 0x92620018  lbu         $v0, 0x18($s3)
    ctx->pc = 0x2d940cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2d9410: 0x54560028  bnel        $v0, $s6, . + 4 + (0x28 << 2)
    ctx->pc = 0x2D9410u;
    {
        const bool branch_taken_0x2d9410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x2d9410) {
            ctx->pc = 0x2D9414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9410u;
            // 0x2d9414: 0x92620019  lbu         $v0, 0x19($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 25)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D94B4u;
            goto label_2d94b4;
        }
    }
    ctx->pc = 0x2D9418u;
    // 0x2d9418: 0x86a40092  lh          $a0, 0x92($s5)
    ctx->pc = 0x2d9418u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
    // 0x2d941c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2d941cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2d9420: 0x86850092  lh          $a1, 0x92($s4)
    ctx->pc = 0x2d9420u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
    // 0x2d9424: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2d9424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2d9428: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d9428u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2d942c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2d942cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2d9430: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2d9430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d9434: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2D9434u;
    SET_GPR_U32(ctx, 31, 0x2D943Cu);
    ctx->pc = 0x2D9438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9434u;
    // 0x2d9438: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2D9434u, 0x2D943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D943Cu;
label_2d943c:
    // 0x2d943c: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x2d943cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d9440: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2d9440u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2d9444: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d9444u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d9448: 0x0  nop
    ctx->pc = 0x2d9448u;
    // NOP
    // 0x2d944c: 0x450000d1  bc1f        . + 4 + (0xD1 << 2)
    ctx->pc = 0x2D944Cu;
    {
        const bool branch_taken_0x2d944c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D9450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D944Cu;
        // 0x2d9450: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d944c) {
            ctx->pc = 0x2D9794u;
            goto label_2d9794;
        }
    }
    ctx->pc = 0x2D9454u;
    // 0x2d9454: 0xc08bfa0  jal         func_22FE80
    ctx->pc = 0x2D9454u;
    SET_GPR_U32(ctx, 31, 0x2D945Cu);
    ctx->pc = 0x2D9458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9454u;
    // 0x2d9458: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2D9454u, 0x2D945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D945Cu;
label_2d945c:
    // 0x2d945c: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2D945Cu;
    SET_GPR_U32(ctx, 31, 0x2D9464u);
    ctx->pc = 0x2D9460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D945Cu;
    // 0x2d9460: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D945Cu, 0x2D9464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9464u;
label_2d9464:
    // 0x2d9464: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D9464u;
    {
        const bool branch_taken_0x2d9464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9464u;
        // 0x2d9468: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9464) {
            ctx->pc = 0x2D9490u;
            goto label_2d9490;
        }
    }
    ctx->pc = 0x2D946Cu;
    // 0x2d946c: 0xc66c0014  lwc1        $f12, 0x14($s3)
    ctx->pc = 0x2d946cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d9470: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d9470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9474: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2d9474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d9478: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2d9478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d947c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2d947cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d9480: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2d9480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d9484: 0x460d6340  add.s       $f13, $f12, $f13
    ctx->pc = 0x2d9484u;
    ctx->f[13] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x2d9488: 0xc0bf3d4  jal         func_2FCF50
    ctx->pc = 0x2D9488u;
    SET_GPR_U32(ctx, 31, 0x2D9490u);
    ctx->pc = 0x2D948Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9488u;
    // 0x2d948c: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2D9488u, 0x2D9490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9490u;
label_2d9490:
    // 0x2d9490: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d9490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9494: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d9494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d9498: 0x26a40284  addiu       $a0, $s5, 0x284
    ctx->pc = 0x2d9498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 644));
    // 0x2d949c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d949cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d94a0: 0x240609c4  addiu       $a2, $zero, 0x9C4
    ctx->pc = 0x2d94a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2500));
    // 0x2d94a4: 0xc0a6800  jal         func_29A000
    ctx->pc = 0x2D94A4u;
    SET_GPR_U32(ctx, 31, 0x2D94ACu);
    ctx->pc = 0x2D94A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D94A4u;
    // 0x2d94a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2D94A4u, 0x2D94ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D94ACu;
label_2d94ac:
    // 0x2d94ac: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x2D94ACu;
    {
        const bool branch_taken_0x2d94ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D94B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D94ACu;
        // 0x2d94b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d94ac) {
            ctx->pc = 0x2D9794u;
            goto label_2d9794;
        }
    }
    ctx->pc = 0x2D94B4u;
label_2d94b4:
    // 0x2d94b4: 0x144000b7  bnez        $v0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x2D94B4u;
    {
        const bool branch_taken_0x2d94b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D94B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D94B4u;
        // 0x2d94b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d94b4) {
            ctx->pc = 0x2D9794u;
            goto label_2d9794;
        }
    }
    ctx->pc = 0x2D94BCu;
    // 0x2d94bc: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x2d94bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2d94c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d94c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d94c4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2D94C4u;
    {
        const bool branch_taken_0x2d94c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d94c4) {
            ctx->pc = 0x2D94C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D94C4u;
            // 0x2d94c8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D94CCu;
            goto label_2d94cc;
        }
    }
    ctx->pc = 0x2D94CCu;
label_2d94cc:
    // 0x2d94cc: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2d94ccu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2d94d0: 0x1810  mfhi        $v1
    ctx->pc = 0x2d94d0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2d94d4: 0x146000af  bnez        $v1, . + 4 + (0xAF << 2)
    ctx->pc = 0x2D94D4u;
    {
        const bool branch_taken_0x2d94d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D94D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D94D4u;
        // 0x2d94d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d94d4) {
            ctx->pc = 0x2D9794u;
            goto label_2d9794;
        }
    }
    ctx->pc = 0x2D94DCu;
    // 0x2d94dc: 0x26a60090  addiu       $a2, $s5, 0x90
    ctx->pc = 0x2d94dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
    // 0x2d94e0: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x2d94e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x2d94e4: 0x84c30002  lh          $v1, 0x2($a2)
    ctx->pc = 0x2d94e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2d94e8: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x2d94e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
    // 0x2d94ec: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2d94ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d94f0: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x2d94f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x2d94f4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2d94f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2d94f8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2d94f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d94fc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2d94fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d9500: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2d9500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2d9504: 0x84c50002  lh          $a1, 0x2($a2)
    ctx->pc = 0x2d9504u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2d9508: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2d9508u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2d950c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2d950cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2d9510: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x2D9510u;
    SET_GPR_U32(ctx, 31, 0x2D9518u);
    ctx->pc = 0x2D9514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9510u;
    // 0x2d9514: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2D9510u, 0x2D9518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9518u;
label_2d9518:
    // 0x2d9518: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2d9518u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d951c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2d951cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d9520: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x2d9520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d9524: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2d9524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d9528: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2d9528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d952c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d952cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9530: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2d9530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d9534: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x2d9534u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x2d9538: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2d9538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2d953c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2d953cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2d9540: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2d9540u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2d9544: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x2d9544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d9548: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2d9548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d954c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d954cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9550: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x2d9550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x2d9554: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d9554u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2d9558: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2d9558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2d955c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d955cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9560: 0xe7a300e0  swc1        $f3, 0xE0($sp)
    ctx->pc = 0x2d9560u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2d9564: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x2d9564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2d9568: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2d9568u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2d956c: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x2d956cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2d9570: 0xe7a500ec  swc1        $f5, 0xEC($sp)
    ctx->pc = 0x2d9570u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x2d9574: 0x8e4447c4  lw          $a0, 0x47C4($s2)
    ctx->pc = 0x2d9574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18372)));
    // 0x2d9578: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x2d9578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d957c: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x2d957cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d9580: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2d9580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d9584: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2d9584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2d9588: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2d9588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x2d958c: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x2D958Cu;
    SET_GPR_U32(ctx, 31, 0x2D9594u);
    ctx->pc = 0x2D9590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D958Cu;
    // 0x2d9590: 0xe7a10040  swc1        $f1, 0x40($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x2D958Cu, 0x2D9594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9594u;
label_2d9594:
    // 0x2d9594: 0x86820092  lh          $v0, 0x92($s4)
    ctx->pc = 0x2d9594u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
    // 0x2d9598: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d9598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d959c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x2d959cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d95a0: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2d95a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d95a4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2d95a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2d95a8: 0x8e4447c4  lw          $a0, 0x47C4($s2)
    ctx->pc = 0x2d95a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18372)));
    // 0x2d95ac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d95acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d95b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d95b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d95b4: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x2d95b4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d95b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d95b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d95bc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2d95bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2d95c0: 0x48a91000  qmtc2.ni    $t1, $vf2
    ctx->pc = 0x2d95c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x2d95c4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2d95c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d95c8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2d95c8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2d95cc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2d95ccu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2d95d0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2d95d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2d95d4: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x2d95d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d95d8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2d95d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d95dc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2d95dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d95e0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2d95e0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2d95e4: 0x4a0003bf  vwaitq
    ctx->pc = 0x2d95e4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2d95e8: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x2d95e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d95ec: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2d95ecu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d95f0: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x2d95f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
    // 0x2d95f4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2d95f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2d95f8: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x2d95f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x2d95fc: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2d95fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x2d9600: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x2d9600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
    // 0x2d9604: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x2D9604u;
    SET_GPR_U32(ctx, 31, 0x2D960Cu);
    ctx->pc = 0x2D9608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9604u;
    // 0x2d9608: 0x7fa300f0  sq          $v1, 0xF0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x2D9604u, 0x2D960Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D960Cu;
label_2d960c:
    // 0x2d960c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2d960cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d9610: 0x54560007  bnel        $v0, $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D9610u;
    {
        const bool branch_taken_0x2d9610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x2d9610) {
            ctx->pc = 0x2D9614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9610u;
            // 0x2d9614: 0xc6630014  lwc1        $f3, 0x14($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9630u;
            goto label_2d9630;
        }
    }
    ctx->pc = 0x2D9618u;
    // 0x2d9618: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2d9618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d961c: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x2d961cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x2d9620: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2d9620u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x2d9624: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d9624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9628: 0x0  nop
    ctx->pc = 0x2d9628u;
    // NOP
    // 0x2d962c: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x2d962cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2d9630:
    // 0x2d9630: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x2d9630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d9634: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d9634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9638: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D9638u;
    {
        const bool branch_taken_0x2d9638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d9638) {
            ctx->pc = 0x2D963Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9638u;
            // 0x2d963c: 0xc6610014  lwc1        $f1, 0x14($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9658u;
            goto label_2d9658;
        }
    }
    ctx->pc = 0x2D9640u;
    // 0x2d9640: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2d9640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d9644: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x2d9644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x2d9648: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2d9648u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x2d964c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d964cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9650: 0x0  nop
    ctx->pc = 0x2d9650u;
    // NOP
    // 0x2d9654: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d9654u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2d9658:
    // 0x2d9658: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x2d9658u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d965c: 0x0  nop
    ctx->pc = 0x2d965cu;
    // NOP
    // 0x2d9660: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2D9660u;
    {
        const bool branch_taken_0x2d9660 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D9664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9660u;
        // 0x2d9664: 0xc7a20010  lwc1        $f2, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9660) {
            ctx->pc = 0x2D96A4u;
            goto label_2d96a4;
        }
    }
    ctx->pc = 0x2D9668u;
    // 0x2d9668: 0x46001906  mov.s       $f4, $f3
    ctx->pc = 0x2d9668u;
    ctx->f[4] = FPU_MOV_S(ctx->f[3]);
    // 0x2d966c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2d966cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d9670: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2d9670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d9674: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2d9674u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2d9678: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d9678u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d967c: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x2d967cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d9680: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2d9680u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2d9684: 0xe7a20100  swc1        $f2, 0x100($sp)
    ctx->pc = 0x2d9684u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2d9688: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x2d9688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x2d968c: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x2d968cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2d9690: 0xe7a3010c  swc1        $f3, 0x10C($sp)
    ctx->pc = 0x2d9690u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x2d9694: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x2d9694u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2d9698: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x2d9698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x2d969c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D969Cu;
    {
        const bool branch_taken_0x2d969c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D96A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D969Cu;
        // 0x2d96a0: 0x7fa200f0  sq          $v0, 0xF0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d969c) {
            ctx->pc = 0x2D96B0u;
            goto label_2d96b0;
        }
    }
    ctx->pc = 0x2D96A4u;
label_2d96a4:
    // 0x2d96a4: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x2d96a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d96a8: 0x46000906  mov.s       $f4, $f1
    ctx->pc = 0x2d96a8u;
    ctx->f[4] = FPU_MOV_S(ctx->f[1]);
    // 0x2d96ac: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x2d96acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_2d96b0:
    // 0x2d96b0: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x2d96b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d96b4: 0x27b000f0  addiu       $s0, $sp, 0xF0
    ctx->pc = 0x2d96b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2d96b8: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x2d96b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d96bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d96bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d96c0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2d96c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d96c4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2d96c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2d96c8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2d96c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d96cc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2d96ccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d96d0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2d96d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2d96d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d96d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d96d8: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x2d96d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d96dc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2d96dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d96e0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2d96e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2d96e4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2d96e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d96e8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2d96e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d96ec: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2d96ecu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2d96f0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2d96f0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2d96f4: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x2d96f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x2d96f8: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x2d96f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x2d96fc: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x2d96fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
    // 0x2d9700: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x2d9700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x2d9704: 0x7fa30120  sq          $v1, 0x120($sp)
    ctx->pc = 0x2d9704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 3));
    // 0x2d9708: 0xc0d3e54  jal         func_34F950
    ctx->pc = 0x2D9708u;
    SET_GPR_U32(ctx, 31, 0x2D9710u);
    ctx->pc = 0x2D970Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9708u;
    // 0x2d970c: 0x7fa30110  sq          $v1, 0x110($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F950u, 0x2D9708u, 0x2D9710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9710u;
label_2d9710:
    // 0x2d9710: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d9710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9714: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d9714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9718: 0xc088878  jal         func_2221E0
    ctx->pc = 0x2D9718u;
    SET_GPR_U32(ctx, 31, 0x2D9720u);
    ctx->pc = 0x2D971Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9718u;
    // 0x2d971c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221E0u, 0x2D9718u, 0x2D9720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9720u;
label_2d9720:
    // 0x2d9720: 0x10510009  beq         $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D9720u;
    {
        const bool branch_taken_0x2d9720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2D9724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9720u;
        // 0x2d9724: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9720) {
            ctx->pc = 0x2D9748u;
            goto label_2d9748;
        }
    }
    ctx->pc = 0x2D9728u;
    // 0x2d9728: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d9728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d972c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d972cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9730: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d9730u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9734: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d9734u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9738: 0xc09381e  jal         func_24E078
    ctx->pc = 0x2D9738u;
    SET_GPR_U32(ctx, 31, 0x2D9740u);
    ctx->pc = 0x2D973Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9738u;
    // 0x2d973c: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x2D9738u, 0x2D9740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9740u;
label_2d9740:
    // 0x2d9740: 0x14510014  bne         $v0, $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D9740u;
    {
        const bool branch_taken_0x2d9740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2D9744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9740u;
        // 0x2d9744: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9740) {
            ctx->pc = 0x2D9794u;
            goto label_2d9794;
        }
    }
    ctx->pc = 0x2D9748u;
label_2d9748:
    // 0x2d9748: 0xc08bfbc  jal         func_22FEF0
    ctx->pc = 0x2D9748u;
    SET_GPR_U32(ctx, 31, 0x2D9750u);
    ctx->pc = 0x2D974Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9748u;
    // 0x2d974c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2D9748u, 0x2D9750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9750u;
label_2d9750:
    // 0x2d9750: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2D9750u;
    SET_GPR_U32(ctx, 31, 0x2D9758u);
    ctx->pc = 0x2D9754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9750u;
    // 0x2d9754: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D9750u, 0x2D9758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9758u;
label_2d9758:
    // 0x2d9758: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d9758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d975c: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D975Cu;
    {
        const bool branch_taken_0x2d975c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D975Cu;
        // 0x2d9760: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d975c) {
            ctx->pc = 0x2D978Cu;
            goto label_2d978c;
        }
    }
    ctx->pc = 0x2D9764u;
    // 0x2d9764: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2d9764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d9768: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2d9768u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2d976c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d976cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9770: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d9770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d9774: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d9774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d9778: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2d9778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d977c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d977cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9780: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d9780u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9784: 0xc0bee7a  jal         func_2FB9E8
    ctx->pc = 0x2D9784u;
    SET_GPR_U32(ctx, 31, 0x2D978Cu);
    ctx->pc = 0x2D9788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9784u;
    // 0x2d9788: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2D9784u, 0x2D978Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D978Cu;
label_2d978c:
    // 0x2d978c: 0x1000ff47  b           . + 4 + (-0xB9 << 2)
    ctx->pc = 0x2D978Cu;
    {
        const bool branch_taken_0x2d978c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D978Cu;
        // 0x2d9790: 0xa2710019  sb          $s1, 0x19($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 25), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d978c) {
            ctx->pc = 0x2D94ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d94ac;
        }
    }
    ctx->pc = 0x2D9794u;
label_2d9794:
    // 0x2d9794: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x2d9794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2d9798: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x2d9798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2d979c: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x2d979cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2d97a0: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x2d97a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2d97a4: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x2d97a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2d97a8: 0x7bb50160  lq          $s5, 0x160($sp)
    ctx->pc = 0x2d97a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2d97ac: 0x7bb60150  lq          $s6, 0x150($sp)
    ctx->pc = 0x2d97acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2d97b0: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x2d97b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2d97b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D97B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D97B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D97B4u;
        // 0x2d97b8: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D97B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D97BCu;
    // 0x2d97bc: 0x0  nop
    ctx->pc = 0x2d97bcu;
    // NOP
    ctx->pc = 0x2d97c0u;
}
