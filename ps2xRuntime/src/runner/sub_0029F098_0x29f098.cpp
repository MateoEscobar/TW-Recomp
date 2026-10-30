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

// Function: sub_0029F098
// Address: 0x29f098 - 0x29f230
void sub_0029F098_0x29f098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F098_0x29f098");
#endif

    switch (ctx->pc) {
        case 0x29f0d4u: goto label_29f0d4;
        case 0x29f0e0u: goto label_29f0e0;
        case 0x29f0f4u: goto label_29f0f4;
        case 0x29f10cu: goto label_29f10c;
        case 0x29f134u: goto label_29f134;
        case 0x29f150u: goto label_29f150;
        case 0x29f178u: goto label_29f178;
        case 0x29f1a8u: goto label_29f1a8;
        case 0x29f1c0u: goto label_29f1c0;
        case 0x29f1dcu: goto label_29f1dc;
        case 0x29f1f4u: goto label_29f1f4;
        case 0x29f200u: goto label_29f200;
        default: break;
    }

    ctx->pc = 0x29f098u;

    // 0x29f098: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29f098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29f09c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x29f09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x29f0a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29f0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29f0a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29f0a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f0a8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x29f0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x29f0ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29f0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29f0b0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x29f0b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x29f0b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x29f0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x29f0b8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x29f0b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29f0bc: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x29f0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x29f0c0: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x29F0C0u;
    {
        const bool branch_taken_0x29f0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F0C0u;
        // 0x29f0c4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f0c0) {
            ctx->pc = 0x29F208u;
            goto label_29f208;
        }
    }
    ctx->pc = 0x29F0C8u;
    // 0x29f0c8: 0x26040124  addiu       $a0, $s0, 0x124
    ctx->pc = 0x29f0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    // 0x29f0cc: 0xc0e409a  jal         func_390268
    ctx->pc = 0x29F0CCu;
    SET_GPR_U32(ctx, 31, 0x29F0D4u);
    ctx->pc = 0x29F0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F0CCu;
    // 0x29f0d0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x29F0CCu, 0x29F0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F0D4u;
label_29f0d4:
    // 0x29f0d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f0d8: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x29F0D8u;
    SET_GPR_U32(ctx, 31, 0x29F0E0u);
    ctx->pc = 0x29F0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F0D8u;
    // 0x29f0dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x29F0D8u, 0x29F0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F0E0u;
label_29f0e0:
    // 0x29f0e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29f0e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f0e4: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x29F0E4u;
    {
        const bool branch_taken_0x29f0e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f0e4) {
            ctx->pc = 0x29F160u;
            goto label_29f160;
        }
    }
    ctx->pc = 0x29F0ECu;
    // 0x29f0ec: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x29F0ECu;
    SET_GPR_U32(ctx, 31, 0x29F0F4u);
    ctx->pc = 0x29F0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F0ECu;
    // 0x29f0f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x29F0ECu, 0x29F0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F0F4u;
label_29f0f4:
    // 0x29f0f4: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x29f0f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x29f0f8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x29F0F8u;
    {
        const bool branch_taken_0x29f0f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f0f8) {
            ctx->pc = 0x29F160u;
            goto label_29f160;
        }
    }
    ctx->pc = 0x29F100u;
    // 0x29f100: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x29f100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29f104: 0xc088db2  jal         func_2236C8
    ctx->pc = 0x29F104u;
    SET_GPR_U32(ctx, 31, 0x29F10Cu);
    ctx->pc = 0x29F108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F104u;
    // 0x29f108: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2236C8u, 0x29F104u, 0x29F10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F10Cu;
label_29f10c:
    // 0x29f10c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x29f10cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x29f110: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29f110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29f114: 0x0  nop
    ctx->pc = 0x29f114u;
    // NOP
    // 0x29f118: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x29f118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f11c: 0x0  nop
    ctx->pc = 0x29f11cu;
    // NOP
    // 0x29f120: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x29F120u;
    {
        const bool branch_taken_0x29f120 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29F124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F120u;
        // 0x29f124: 0x261005d0  addiu       $s0, $s0, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f120) {
            ctx->pc = 0x29F160u;
            goto label_29f160;
        }
    }
    ctx->pc = 0x29F128u;
    // 0x29f128: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29f128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f12c: 0xc1060e6  jal         func_418398
    ctx->pc = 0x29F12Cu;
    SET_GPR_U32(ctx, 31, 0x29F134u);
    ctx->pc = 0x29F130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F12Cu;
    // 0x29f130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418398u, 0x29F12Cu, 0x29F134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F134u;
label_29f134:
    // 0x29f134: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x29f134u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f138: 0x0  nop
    ctx->pc = 0x29f138u;
    // NOP
    // 0x29f13c: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x29F13Cu;
    {
        const bool branch_taken_0x29f13c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f13c) {
            ctx->pc = 0x29F140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F13Cu;
            // 0x29f140: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F160u;
            goto label_29f160;
        }
    }
    ctx->pc = 0x29F144u;
    // 0x29f144: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f148: 0xc1060e6  jal         func_418398
    ctx->pc = 0x29F148u;
    SET_GPR_U32(ctx, 31, 0x29F150u);
    ctx->pc = 0x29F14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F148u;
    // 0x29f14c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418398u, 0x29F148u, 0x29F150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F150u;
label_29f150:
    // 0x29f150: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x29f150u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f154: 0x0  nop
    ctx->pc = 0x29f154u;
    // NOP
    // 0x29f158: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x29F158u;
    {
        const bool branch_taken_0x29f158 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f158) {
            ctx->pc = 0x29F15Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F158u;
            // 0x29f15c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F160u;
            goto label_29f160;
        }
    }
    ctx->pc = 0x29F160u;
label_29f160:
    // 0x29f160: 0x1660000c  bnez        $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x29F160u;
    {
        const bool branch_taken_0x29f160 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F160u;
        // 0x29f164: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f160) {
            ctx->pc = 0x29F194u;
            goto label_29f194;
        }
    }
    ctx->pc = 0x29F168u;
    // 0x29f168: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x29F168u;
    {
        const bool branch_taken_0x29f168 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F168u;
        // 0x29f16c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f168) {
            ctx->pc = 0x29F180u;
            goto label_29f180;
        }
    }
    ctx->pc = 0x29F170u;
    // 0x29f170: 0xc088d8a  jal         func_223628
    ctx->pc = 0x29F170u;
    SET_GPR_U32(ctx, 31, 0x29F178u);
    ctx->pc = 0x29F174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F170u;
    // 0x29f174: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223628u, 0x29F170u, 0x29F178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F178u;
label_29f178:
    // 0x29f178: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29f178u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f17c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x29f17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29f180:
    // 0x29f180: 0x122082  srl         $a0, $s2, 2
    ctx->pc = 0x29f180u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 2));
    // 0x29f184: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x29f184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29f188: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x29f188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x29f18c: 0x83900a  movz        $s2, $a0, $v1
    ctx->pc = 0x29f18cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
    // 0x29f190: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29f190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29f194:
    // 0x29f194: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29F194u;
    {
        const bool branch_taken_0x29f194 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x29F198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F194u;
        // 0x29f198: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f194) {
            ctx->pc = 0x29F1B4u;
            goto label_29f1b4;
        }
    }
    ctx->pc = 0x29F19Cu;
    // 0x29f19c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x29f19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x29f1a0: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x29F1A0u;
    SET_GPR_U32(ctx, 31, 0x29F1A8u);
    ctx->pc = 0x29F1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F1A0u;
    // 0x29f1a4: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x29F1A0u, 0x29F1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F1A8u;
label_29f1a8:
    // 0x29f1a8: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x29f1a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x29f1ac: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x29F1ACu;
    {
        const bool branch_taken_0x29f1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F1ACu;
        // 0x29f1b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f1ac) {
            ctx->pc = 0x29F20Cu;
            goto label_29f20c;
        }
    }
    ctx->pc = 0x29F1B4u;
label_29f1b4:
    // 0x29f1b4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x29f1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29f1b8: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x29F1B8u;
    SET_GPR_U32(ctx, 31, 0x29F1C0u);
    ctx->pc = 0x29F1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F1B8u;
    // 0x29f1bc: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x29F1B8u, 0x29F1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F1C0u;
label_29f1c0:
    // 0x29f1c0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x29f1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29f1c4: 0x8083002d  lb          $v1, 0x2D($a0)
    ctx->pc = 0x29f1c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 45)));
    // 0x29f1c8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x29f1c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29f1cc: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x29F1CCu;
    {
        const bool branch_taken_0x29f1cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F1CCu;
        // 0x29f1d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f1cc) {
            ctx->pc = 0x29F20Cu;
            goto label_29f20c;
        }
    }
    ctx->pc = 0x29F1D4u;
    // 0x29f1d4: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x29F1D4u;
    SET_GPR_U32(ctx, 31, 0x29F1DCu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x29F1D4u, 0x29F1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F1DCu;
label_29f1dc:
    // 0x29f1dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29f1dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f1e0: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29F1E0u;
    {
        const bool branch_taken_0x29f1e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f1e0) {
            ctx->pc = 0x29F1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F1E0u;
            // 0x29f1e4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F1F8u;
            goto label_29f1f8;
        }
    }
    ctx->pc = 0x29F1E8u;
    // 0x29f1e8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x29f1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29f1ec: 0xc0ad536  jal         func_2B54D8
    ctx->pc = 0x29F1ECu;
    SET_GPR_U32(ctx, 31, 0x29F1F4u);
    ctx->pc = 0x29F1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F1ECu;
    // 0x29f1f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54D8u, 0x29F1ECu, 0x29F1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F1F4u;
label_29f1f4:
    // 0x29f1f4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x29f1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29f1f8:
    // 0x29f1f8: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x29F1F8u;
    SET_GPR_U32(ctx, 31, 0x29F200u);
    ctx->pc = 0x29F1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F1F8u;
    // 0x29f1fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x29F1F8u, 0x29F200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F200u;
label_29f200:
    // 0x29f200: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29F200u;
    {
        const bool branch_taken_0x29f200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F200u;
        // 0x29f204: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f200) {
            ctx->pc = 0x29F20Cu;
            goto label_29f20c;
        }
    }
    ctx->pc = 0x29F208u;
label_29f208:
    // 0x29f208: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29f208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f20c:
    // 0x29f20c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x29f20cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29f210: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x29f210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29f214: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29f214u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29f218: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x29f218u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29f21c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29f21cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f220: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x29f220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29f224: 0x3e00008  jr          $ra
    ctx->pc = 0x29F224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F224u;
        // 0x29f228: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F22Cu;
    // 0x29f22c: 0x0  nop
    ctx->pc = 0x29f22cu;
    // NOP
    ctx->pc = 0x29f230u;
}
