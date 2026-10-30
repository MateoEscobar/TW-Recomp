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

// Function: sub_002223E8
// Address: 0x2223e8 - 0x222508
void sub_002223E8_0x2223e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002223E8_0x2223e8");
#endif

    switch (ctx->pc) {
        case 0x222460u: goto label_222460;
        case 0x222480u: goto label_222480;
        case 0x2224b8u: goto label_2224b8;
        case 0x2224dcu: goto label_2224dc;
        default: break;
    }

    ctx->pc = 0x2223e8u;

    // 0x2223e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2223e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2223ec: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2223ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2223f0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2223f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2223f4: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2223f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x2223f8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2223f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2223fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2223fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222400: 0xe7b80070  swc1        $f24, 0x70($sp)
    ctx->pc = 0x222400u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x222404: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x222404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222408: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x222408u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x22240c: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x22240cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x222410: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x222410u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x222414: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x222414u;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x222418: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x222418u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x22241c: 0x46007d86  mov.s       $f22, $f15
    ctx->pc = 0x22241cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[15]);
    // 0x222420: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x222420u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x222424: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x222424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x222428: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x222428u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x22242c: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x22242cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x222430: 0x86020092  lh          $v0, 0x92($s0)
    ctx->pc = 0x222430u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x222434: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x222434u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x222438: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x222438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22243c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x22243cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x222440: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x222440u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222444: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x222444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x222448: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x222448u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22244c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x22244cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x222450: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x222450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x222454: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x222454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x222458: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x222458u;
    SET_GPR_U32(ctx, 31, 0x222460u);
    ctx->pc = 0x22245Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222458u;
    // 0x22245c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x222458u, 0x222460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222460u;
label_222460:
    // 0x222460: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x222460u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x222464: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x222464u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x222468: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x222468u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22246c: 0x0  nop
    ctx->pc = 0x22246cu;
    // NOP
    // 0x222470: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x222470u;
    {
        const bool branch_taken_0x222470 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x222474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222470u;
        // 0x222474: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222470) {
            ctx->pc = 0x2224DCu;
            goto label_2224dc;
        }
    }
    ctx->pc = 0x222478u;
    // 0x222478: 0xc087502  jal         func_21D408
    ctx->pc = 0x222478u;
    SET_GPR_U32(ctx, 31, 0x222480u);
    ctx->pc = 0x22247Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222478u;
    // 0x22247c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x222478u, 0x222480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222480u;
label_222480:
    // 0x222480: 0x904302d4  lbu         $v1, 0x2D4($v0)
    ctx->pc = 0x222480u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x222484: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x222484u;
    {
        const bool branch_taken_0x222484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x222484) {
            ctx->pc = 0x22249Cu;
            goto label_22249c;
        }
    }
    ctx->pc = 0x22248Cu;
    // 0x22248c: 0x4615b036  c.le.s      $f22, $f21
    ctx->pc = 0x22248cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222490: 0x0  nop
    ctx->pc = 0x222490u;
    // NOP
    // 0x222494: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x222494u;
    {
        const bool branch_taken_0x222494 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x222498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222494u;
        // 0x222498: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222494) {
            ctx->pc = 0x2224DCu;
            goto label_2224dc;
        }
    }
    ctx->pc = 0x22249Cu;
label_22249c:
    // 0x22249c: 0x4615b836  c.le.s      $f23, $f21
    ctx->pc = 0x22249cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2224a0: 0x0  nop
    ctx->pc = 0x2224a0u;
    // NOP
    // 0x2224a4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2224A4u;
    {
        const bool branch_taken_0x2224a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2224A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224A4u;
        // 0x2224a8: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224a4) {
            ctx->pc = 0x2224C8u;
            goto label_2224c8;
        }
    }
    ctx->pc = 0x2224ACu;
    // 0x2224ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2224acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2224b0: 0xc0889c4  jal         func_222710
    ctx->pc = 0x2224B0u;
    SET_GPR_U32(ctx, 31, 0x2224B8u);
    ctx->pc = 0x2224B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2224B0u;
    // 0x2224b4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222710u, 0x2224B0u, 0x2224B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2224B8u;
label_2224b8:
    // 0x2224b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2224B8u;
    {
        const bool branch_taken_0x2224b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2224BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224B8u;
        // 0x2224bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224b8) {
            ctx->pc = 0x2224CCu;
            goto label_2224cc;
        }
    }
    ctx->pc = 0x2224C0u;
    // 0x2224c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2224C0u;
    {
        const bool branch_taken_0x2224c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2224C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224C0u;
        // 0x2224c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224c0) {
            ctx->pc = 0x2224DCu;
            goto label_2224dc;
        }
    }
    ctx->pc = 0x2224C8u;
label_2224c8:
    // 0x2224c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2224c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2224cc:
    // 0x2224cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2224ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2224d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2224d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2224d4: 0xc0888a2  jal         func_222288
    ctx->pc = 0x2224D4u;
    SET_GPR_U32(ctx, 31, 0x2224DCu);
    ctx->pc = 0x2224D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2224D4u;
    // 0x2224d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2224D4u, 0x2224DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2224DCu;
label_2224dc:
    // 0x2224dc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2224dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2224e0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2224e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2224e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2224e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2224e8: 0xc7b80070  lwc1        $f24, 0x70($sp)
    ctx->pc = 0x2224e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2224ec: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x2224ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2224f0: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x2224f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2224f4: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x2224f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2224f8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2224f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2224fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2224FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224FCu;
        // 0x222500: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2224FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222504u;
    // 0x222504: 0x0  nop
    ctx->pc = 0x222504u;
    // NOP
    ctx->pc = 0x222508u;
}
