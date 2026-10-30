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

// Function: sub_002B76A0
// Address: 0x2b76a0 - 0x2b78e0
void sub_002B76A0_0x2b76a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B76A0_0x2b76a0");
#endif

    switch (ctx->pc) {
        case 0x2b76e4u: goto label_2b76e4;
        case 0x2b76f4u: goto label_2b76f4;
        case 0x2b7740u: goto label_2b7740;
        case 0x2b7764u: goto label_2b7764;
        case 0x2b7778u: goto label_2b7778;
        case 0x2b778cu: goto label_2b778c;
        case 0x2b77a4u: goto label_2b77a4;
        case 0x2b77c0u: goto label_2b77c0;
        case 0x2b77d4u: goto label_2b77d4;
        case 0x2b77e8u: goto label_2b77e8;
        case 0x2b77fcu: goto label_2b77fc;
        case 0x2b7828u: goto label_2b7828;
        case 0x2b783cu: goto label_2b783c;
        case 0x2b784cu: goto label_2b784c;
        case 0x2b7858u: goto label_2b7858;
        case 0x2b787cu: goto label_2b787c;
        case 0x2b78acu: goto label_2b78ac;
        default: break;
    }

    ctx->pc = 0x2b76a0u;

    // 0x2b76a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2b76a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2b76a4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2b76a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2b76a8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2b76a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2b76ac: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2b76acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2b76b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b76b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b76b4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2b76b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2b76b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b76b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b76bc: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2b76bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2b76c0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2b76c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2b76c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b76c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b76c8: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x2b76c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2b76cc: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x2b76ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2b76d0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2b76d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2b76d4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2b76d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2b76d8: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2b76d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b76dc: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2B76DCu;
    SET_GPR_U32(ctx, 31, 0x2B76E4u);
    ctx->pc = 0x2B76E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B76DCu;
    // 0x2b76e0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B76DCu, 0x2B76E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B76E4u;
label_2b76e4:
    // 0x2b76e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b76e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b76e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b76e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b76ec: 0xc0a352c  jal         func_28D4B0
    ctx->pc = 0x2B76ECu;
    SET_GPR_U32(ctx, 31, 0x2B76F4u);
    ctx->pc = 0x2B76F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B76ECu;
    // 0x2b76f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2B76ECu, 0x2B76F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B76F4u;
label_2b76f4:
    // 0x2b76f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b76f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b76f8: 0x1220006c  beqz        $s1, . + 4 + (0x6C << 2)
    ctx->pc = 0x2B76F8u;
    {
        const bool branch_taken_0x2b76f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B76FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B76F8u;
        // 0x2b76fc: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b76f8) {
            ctx->pc = 0x2B78ACu;
            goto label_2b78ac;
        }
    }
    ctx->pc = 0x2B7700u;
    // 0x2b7700: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2b7700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b7704: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x2b7704u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x2b7708: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2b7708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x2b770c: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x2b770cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b7710: 0xc4960140  lwc1        $f22, 0x140($a0)
    ctx->pc = 0x2b7710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b7714: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2b7714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2b7718: 0x86640092  lh          $a0, 0x92($s3)
    ctx->pc = 0x2b7718u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
    // 0x2b771c: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x2b771cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b7720: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2b7720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x2b7724: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2b7724u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2b7728: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2b7728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2b772c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b772cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7730: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2b7730u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2b7734: 0x4614b502  mul.s       $f20, $f22, $f20
    ctx->pc = 0x2b7734u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x2b7738: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2B7738u;
    SET_GPR_U32(ctx, 31, 0x2B7740u);
    ctx->pc = 0x2B773Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7738u;
    // 0x2b773c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2B7738u, 0x2B7740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7740u;
label_2b7740:
    // 0x2b7740: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2b7740u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2b7744: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x2b7744u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2b7748: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x2b7748u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b774c: 0x0  nop
    ctx->pc = 0x2b774cu;
    // NOP
    // 0x2b7750: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x2B7750u;
    {
        const bool branch_taken_0x2b7750 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B7754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7750u;
        // 0x2b7754: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7750) {
            ctx->pc = 0x2B77FCu;
            goto label_2b77fc;
        }
    }
    ctx->pc = 0x2B7758u;
    // 0x2b7758: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b7758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b775c: 0xc08886c  jal         func_2221B0
    ctx->pc = 0x2B775Cu;
    SET_GPR_U32(ctx, 31, 0x2B7764u);
    ctx->pc = 0x2B7760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B775Cu;
    // 0x2b7760: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221B0u, 0x2B775Cu, 0x2B7764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7764u;
label_2b7764:
    // 0x2b7764: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b7764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7768: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B7768u;
    {
        const bool branch_taken_0x2b7768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7768u;
        // 0x2b776c: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7768) {
            ctx->pc = 0x2B77C8u;
            goto label_2b77c8;
        }
    }
    ctx->pc = 0x2B7770u;
    // 0x2b7770: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2B7770u;
    SET_GPR_U32(ctx, 31, 0x2B7778u);
    ctx->pc = 0x2B7774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7770u;
    // 0x2b7774: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B7770u, 0x2B7778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7778u;
label_2b7778:
    // 0x2b7778: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b7778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b777c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B777Cu;
    {
        const bool branch_taken_0x2b777c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b777c) {
            ctx->pc = 0x2B77A4u;
            goto label_2b77a4;
        }
    }
    ctx->pc = 0x2B7784u;
    // 0x2b7784: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x2B7784u;
    SET_GPR_U32(ctx, 31, 0x2B778Cu);
    ctx->pc = 0x2B7788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7784u;
    // 0x2b7788: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2B7784u, 0x2B778Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B778Cu;
label_2b778c:
    // 0x2b778c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2b778cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b7790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7794: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2b7794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7798: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2b7798u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2b779c: 0xc0bf800  jal         func_2FE000
    ctx->pc = 0x2B779Cu;
    SET_GPR_U32(ctx, 31, 0x2B77A4u);
    ctx->pc = 0x2B77A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B779Cu;
    // 0x2b77a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2B779Cu, 0x2B77A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B77A4u;
label_2b77a4:
    // 0x2b77a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b77a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b77a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b77a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b77ac: 0x26640284  addiu       $a0, $s3, 0x284
    ctx->pc = 0x2b77acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 644));
    // 0x2b77b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b77b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b77b4: 0x24060bb8  addiu       $a2, $zero, 0xBB8
    ctx->pc = 0x2b77b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x2b77b8: 0xc0a6800  jal         func_29A000
    ctx->pc = 0x2B77B8u;
    SET_GPR_U32(ctx, 31, 0x2B77C0u);
    ctx->pc = 0x2B77BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B77B8u;
    // 0x2b77bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2B77B8u, 0x2B77C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B77C0u;
label_2b77c0:
    // 0x2b77c0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2B77C0u;
    {
        const bool branch_taken_0x2b77c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B77C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B77C0u;
        // 0x2b77c4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b77c0) {
            ctx->pc = 0x2B78B0u;
            goto label_2b78b0;
        }
    }
    ctx->pc = 0x2B77C8u;
label_2b77c8:
    // 0x2b77c8: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2b77c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2b77cc: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2B77CCu;
    SET_GPR_U32(ctx, 31, 0x2B77D4u);
    ctx->pc = 0x2B77D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B77CCu;
    // 0x2b77d0: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2B77CCu, 0x2B77D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B77D4u;
label_2b77d4:
    // 0x2b77d4: 0x2c42003c  sltiu       $v0, $v0, 0x3C
    ctx->pc = 0x2b77d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x2b77d8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B77D8u;
    {
        const bool branch_taken_0x2b77d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b77d8) {
            ctx->pc = 0x2B77FCu;
            goto label_2b77fc;
        }
    }
    ctx->pc = 0x2B77E0u;
    // 0x2b77e0: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2B77E0u;
    SET_GPR_U32(ctx, 31, 0x2B77E8u);
    ctx->pc = 0x2B77E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B77E0u;
    // 0x2b77e4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B77E0u, 0x2B77E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B77E8u;
label_2b77e8:
    // 0x2b77e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B77E8u;
    {
        const bool branch_taken_0x2b77e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B77ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B77E8u;
        // 0x2b77ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b77e8) {
            ctx->pc = 0x2B77FCu;
            goto label_2b77fc;
        }
    }
    ctx->pc = 0x2B77F0u;
    // 0x2b77f0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2b77f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b77f4: 0xc0bf892  jal         func_2FE248
    ctx->pc = 0x2B77F4u;
    SET_GPR_U32(ctx, 31, 0x2B77FCu);
    ctx->pc = 0x2B77F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B77F4u;
    // 0x2b77f8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE248u, 0x2B77F4u, 0x2B77FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B77FCu;
label_2b77fc:
    // 0x2b77fc: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2b77fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2b7800: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b7800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7804: 0x0  nop
    ctx->pc = 0x2b7804u;
    // NOP
    // 0x2b7808: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2b7808u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b780c: 0x0  nop
    ctx->pc = 0x2b780cu;
    // NOP
    // 0x2b7810: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B7810u;
    {
        const bool branch_taken_0x2b7810 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B7814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7810u;
        // 0x2b7814: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7810) {
            ctx->pc = 0x2B781Cu;
            goto label_2b781c;
        }
    }
    ctx->pc = 0x2B7818u;
    // 0x2b7818: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x2b7818u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b781c:
    // 0x2b781c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2b781cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b7820: 0xc137832  jal         func_4DE0C8
    ctx->pc = 0x2B7820u;
    SET_GPR_U32(ctx, 31, 0x2B7828u);
    ctx->pc = 0x2B7824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7820u;
    // 0x2b7824: 0x24840164  addiu       $a0, $a0, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x2B7820u, 0x2B7828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7828u;
label_2b7828:
    // 0x2b7828: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b7828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b782c: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B782Cu;
    {
        const bool branch_taken_0x2b782c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B7830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B782Cu;
        // 0x2b7830: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b782c) {
            ctx->pc = 0x2B7874u;
            goto label_2b7874;
        }
    }
    ctx->pc = 0x2B7834u;
    // 0x2b7834: 0xc08bfbc  jal         func_22FEF0
    ctx->pc = 0x2B7834u;
    SET_GPR_U32(ctx, 31, 0x2B783Cu);
    ctx->pc = 0x2B7838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7834u;
    // 0x2b7838: 0x24140004  addiu       $s4, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2B7834u, 0x2B783Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B783Cu;
label_2b783c:
    // 0x2b783c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2b783cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2b7840: 0x8c51489c  lw          $s1, 0x489C($v0)
    ctx->pc = 0x2b7840u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x51489Cu));
    // 0x2b7844: 0xc136ad6  jal         func_4DAB58
    ctx->pc = 0x2B7844u;
    SET_GPR_U32(ctx, 31, 0x2B784Cu);
    ctx->pc = 0x2B7848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7844u;
    // 0x2b7848: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x2B7844u, 0x2B784Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B784Cu;
label_2b784c:
    // 0x2b784c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b784cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7850: 0xc136ad4  jal         func_4DAB50
    ctx->pc = 0x2B7850u;
    SET_GPR_U32(ctx, 31, 0x2B7858u);
    ctx->pc = 0x2B7854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7850u;
    // 0x2b7854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x2B7850u, 0x2B7858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7858u;
label_2b7858:
    // 0x2b7858: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x2b7858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x2b785c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2b785cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b7860: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2b7860u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b7864: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2b7864u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b7868: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2b7868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b786c: 0x38420053  xori        $v0, $v0, 0x53
    ctx->pc = 0x2b786cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)83);
    // 0x2b7870: 0x82a00a  movz        $s4, $a0, $v0
    ctx->pc = 0x2b7870u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 4));
label_2b7874:
    // 0x2b7874: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2B7874u;
    SET_GPR_U32(ctx, 31, 0x2B787Cu);
    ctx->pc = 0x2B7878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7874u;
    // 0x2b7878: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B7874u, 0x2B787Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B787Cu;
label_2b787c:
    // 0x2b787c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b787cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7880: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B7880u;
    {
        const bool branch_taken_0x2b7880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7880u;
        // 0x2b7884: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7880) {
            ctx->pc = 0x2B78ACu;
            goto label_2b78ac;
        }
    }
    ctx->pc = 0x2B7888u;
    // 0x2b7888: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2b7888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b788c: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2b788cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2b7890: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2b7890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7894: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2b7894u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7898: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2b7898u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2b789c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2b789cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b78a0: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2b78a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b78a4: 0xc0bee7a  jal         func_2FB9E8
    ctx->pc = 0x2B78A4u;
    SET_GPR_U32(ctx, 31, 0x2B78ACu);
    ctx->pc = 0x2B78A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B78A4u;
    // 0x2b78a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2B78A4u, 0x2B78ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B78ACu;
label_2b78ac:
    // 0x2b78ac: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2b78acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2b78b0:
    // 0x2b78b0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2b78b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b78b4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2b78b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b78b8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2b78b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b78bc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2b78bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b78c0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2b78c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b78c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b78c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b78c8: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x2b78c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b78cc: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x2b78ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b78d0: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2b78d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b78d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B78D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B78D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B78D4u;
        // 0x2b78d8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B78D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B78DCu;
    // 0x2b78dc: 0x0  nop
    ctx->pc = 0x2b78dcu;
    // NOP
    ctx->pc = 0x2b78e0u;
}
