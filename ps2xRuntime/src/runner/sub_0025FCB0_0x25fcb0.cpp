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

// Function: sub_0025FCB0
// Address: 0x25fcb0 - 0x25ff18
void sub_0025FCB0_0x25fcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FCB0_0x25fcb0");
#endif

    switch (ctx->pc) {
        case 0x25fce8u: goto label_25fce8;
        case 0x25fcfcu: goto label_25fcfc;
        case 0x25fd10u: goto label_25fd10;
        case 0x25fd24u: goto label_25fd24;
        case 0x25fd3cu: goto label_25fd3c;
        case 0x25fd58u: goto label_25fd58;
        case 0x25fd6cu: goto label_25fd6c;
        case 0x25fd90u: goto label_25fd90;
        case 0x25fda0u: goto label_25fda0;
        case 0x25fdb0u: goto label_25fdb0;
        case 0x25fdc8u: goto label_25fdc8;
        case 0x25fdd8u: goto label_25fdd8;
        case 0x25fdf0u: goto label_25fdf0;
        case 0x25fe04u: goto label_25fe04;
        case 0x25fe10u: goto label_25fe10;
        case 0x25fe24u: goto label_25fe24;
        case 0x25fe30u: goto label_25fe30;
        case 0x25fe50u: goto label_25fe50;
        case 0x25fe5cu: goto label_25fe5c;
        case 0x25fe74u: goto label_25fe74;
        case 0x25fe80u: goto label_25fe80;
        case 0x25fe94u: goto label_25fe94;
        case 0x25fea0u: goto label_25fea0;
        case 0x25feb0u: goto label_25feb0;
        case 0x25fec0u: goto label_25fec0;
        case 0x25fed0u: goto label_25fed0;
        case 0x25fee8u: goto label_25fee8;
        case 0x25fefcu: goto label_25fefc;
        default: break;
    }

    ctx->pc = 0x25fcb0u;

    // 0x25fcb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25fcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25fcb4: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x25fcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x25fcb8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x25fcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x25fcbc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25fcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x25fcc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25fcc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fcc4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x25fcc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x25fcc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25fcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25fccc: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x25fcccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x25fcd0: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x25fcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x25fcd4: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x25fcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x25fcd8: 0x1482007b  bne         $a0, $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x25FCD8u;
    {
        const bool branch_taken_0x25fcd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x25FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FCD8u;
        // 0x25fcdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fcd8) {
            ctx->pc = 0x25FEC8u;
            goto label_25fec8;
        }
    }
    ctx->pc = 0x25FCE0u;
    // 0x25fce0: 0xc089a54  jal         func_226950
    ctx->pc = 0x25FCE0u;
    SET_GPR_U32(ctx, 31, 0x25FCE8u);
    ctx->pc = 0x25FCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FCE0u;
    // 0x25fce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226950u, 0x25FCE0u, 0x25FCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FCE8u;
label_25fce8:
    // 0x25fce8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25fce8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fcec: 0x1220004e  beqz        $s1, . + 4 + (0x4E << 2)
    ctx->pc = 0x25FCECu;
    {
        const bool branch_taken_0x25fcec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FCECu;
        // 0x25fcf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fcec) {
            ctx->pc = 0x25FE28u;
            goto label_25fe28;
        }
    }
    ctx->pc = 0x25FCF4u;
    // 0x25fcf4: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x25FCF4u;
    SET_GPR_U32(ctx, 31, 0x25FCFCu);
    ctx->pc = 0x25FCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FCF4u;
    // 0x25fcf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x25FCF4u, 0x25FCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FCFCu;
label_25fcfc:
    // 0x25fcfc: 0x2403029c  addiu       $v1, $zero, 0x29C
    ctx->pc = 0x25fcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x25fd00: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25FD00u;
    {
        const bool branch_taken_0x25fd00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x25fd00) {
            ctx->pc = 0x25FD1Cu;
            goto label_25fd1c;
        }
    }
    ctx->pc = 0x25FD08u;
    // 0x25fd08: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x25FD08u;
    SET_GPR_U32(ctx, 31, 0x25FD10u);
    ctx->pc = 0x25FD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FD08u;
    // 0x25fd0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x25FD08u, 0x25FD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FD10u;
label_25fd10:
    // 0x25fd10: 0x3842029c  xori        $v0, $v0, 0x29C
    ctx->pc = 0x25fd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)668);
    // 0x25fd14: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x25FD14u;
    {
        const bool branch_taken_0x25fd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD14u;
        // 0x25fd18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fd14) {
            ctx->pc = 0x25FE28u;
            goto label_25fe28;
        }
    }
    ctx->pc = 0x25FD1Cu;
label_25fd1c:
    // 0x25fd1c: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x25FD1Cu;
    SET_GPR_U32(ctx, 31, 0x25FD24u);
    ctx->pc = 0x25FD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FD1Cu;
    // 0x25fd20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x25FD1Cu, 0x25FD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FD24u;
label_25fd24:
    // 0x25fd24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25fd24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fd28: 0x2402029c  addiu       $v0, $zero, 0x29C
    ctx->pc = 0x25fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x25fd2c: 0x16420011  bne         $s2, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x25FD2Cu;
    {
        const bool branch_taken_0x25fd2c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x25FD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD2Cu;
        // 0x25fd30: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fd2c) {
            ctx->pc = 0x25FD74u;
            goto label_25fd74;
        }
    }
    ctx->pc = 0x25FD34u;
    // 0x25fd34: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x25FD34u;
    SET_GPR_U32(ctx, 31, 0x25FD3Cu);
    ctx->pc = 0x25FD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FD34u;
    // 0x25fd38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x25FD34u, 0x25FD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FD3Cu;
label_25fd3c:
    // 0x25fd3c: 0x1452000d  bne         $v0, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x25FD3Cu;
    {
        const bool branch_taken_0x25fd3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x25FD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD3Cu;
        // 0x25fd40: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fd3c) {
            ctx->pc = 0x25FD74u;
            goto label_25fd74;
        }
    }
    ctx->pc = 0x25FD44u;
    // 0x25fd44: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x25fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x25fd48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25fd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fd4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25fd4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fd50: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x25FD50u;
    SET_GPR_U32(ctx, 31, 0x25FD58u);
    ctx->pc = 0x25FD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FD50u;
    // 0x25fd54: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25FD50u, 0x25FD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FD58u;
label_25fd58:
    // 0x25fd58: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x25fd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x25fd5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25fd5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fd60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25fd60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fd64: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x25FD64u;
    SET_GPR_U32(ctx, 31, 0x25FD6Cu);
    ctx->pc = 0x25FD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FD64u;
    // 0x25fd68: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25FD64u, 0x25FD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FD6Cu;
label_25fd6c:
    // 0x25fd6c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x25FD6Cu;
    {
        const bool branch_taken_0x25fd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD6Cu;
        // 0x25fd70: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fd6c) {
            ctx->pc = 0x25FF00u;
            goto label_25ff00;
        }
    }
    ctx->pc = 0x25FD74u;
label_25fd74:
    // 0x25fd74: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x25fd74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x25fd78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25fd78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25fd7c: 0xc440563c  lwc1        $f0, 0x563C($v0)
    ctx->pc = 0x25fd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 22076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25fd80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25fd80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fd84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25fd84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fd88: 0xc089548  jal         func_225520
    ctx->pc = 0x25FD88u;
    SET_GPR_U32(ctx, 31, 0x25FD90u);
    ctx->pc = 0x25FD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FD88u;
    // 0x25fd8c: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x225520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225520u, 0x25FD88u, 0x25FD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FD90u;
label_25fd90:
    // 0x25fd90: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x25FD90u;
    {
        const bool branch_taken_0x25fd90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD90u;
        // 0x25fd94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fd90) {
            ctx->pc = 0x25FE88u;
            goto label_25fe88;
        }
    }
    ctx->pc = 0x25FD98u;
    // 0x25fd98: 0xc08702a  jal         func_21C0A8
    ctx->pc = 0x25FD98u;
    SET_GPR_U32(ctx, 31, 0x25FDA0u);
    ctx->pc = 0x25FD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FD98u;
    // 0x25fd9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C0A8u, 0x25FD98u, 0x25FDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FDA0u;
label_25fda0:
    // 0x25fda0: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x25FDA0u;
    {
        const bool branch_taken_0x25fda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FDA0u;
        // 0x25fda4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fda0) {
            ctx->pc = 0x25FE88u;
            goto label_25fe88;
        }
    }
    ctx->pc = 0x25FDA8u;
    // 0x25fda8: 0xc08a658  jal         func_229960
    ctx->pc = 0x25FDA8u;
    SET_GPR_U32(ctx, 31, 0x25FDB0u);
    ctx->pc = 0x25FDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FDA8u;
    // 0x25fdac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229960u, 0x25FDA8u, 0x25FDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FDB0u;
label_25fdb0:
    // 0x25fdb0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x25fdb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25fdb4: 0x0  nop
    ctx->pc = 0x25fdb4u;
    // NOP
    // 0x25fdb8: 0x45000033  bc1f        . + 4 + (0x33 << 2)
    ctx->pc = 0x25FDB8u;
    {
        const bool branch_taken_0x25fdb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25FDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FDB8u;
        // 0x25fdbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fdb8) {
            ctx->pc = 0x25FE88u;
            goto label_25fe88;
        }
    }
    ctx->pc = 0x25FDC0u;
    // 0x25fdc0: 0xc08866e  jal         func_2219B8
    ctx->pc = 0x25FDC0u;
    SET_GPR_U32(ctx, 31, 0x25FDC8u);
    ctx->pc = 0x25FDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FDC0u;
    // 0x25fdc4: 0x2405029c  addiu       $a1, $zero, 0x29C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2219B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2219B8u, 0x25FDC0u, 0x25FDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FDC8u;
label_25fdc8:
    // 0x25fdc8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x25FDC8u;
    {
        const bool branch_taken_0x25fdc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FDC8u;
        // 0x25fdcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fdc8) {
            ctx->pc = 0x25FE38u;
            goto label_25fe38;
        }
    }
    ctx->pc = 0x25FDD0u;
    // 0x25fdd0: 0xc08866e  jal         func_2219B8
    ctx->pc = 0x25FDD0u;
    SET_GPR_U32(ctx, 31, 0x25FDD8u);
    ctx->pc = 0x25FDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FDD0u;
    // 0x25fdd4: 0x2405029c  addiu       $a1, $zero, 0x29C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2219B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2219B8u, 0x25FDD0u, 0x25FDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FDD8u;
label_25fdd8:
    // 0x25fdd8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x25FDD8u;
    {
        const bool branch_taken_0x25fdd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FDD8u;
        // 0x25fddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fdd8) {
            ctx->pc = 0x25FE38u;
            goto label_25fe38;
        }
    }
    ctx->pc = 0x25FDE0u;
    // 0x25fde0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25fde0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fde4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25fde4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fde8: 0xc09da66  jal         func_276998
    ctx->pc = 0x25FDE8u;
    SET_GPR_U32(ctx, 31, 0x25FDF0u);
    ctx->pc = 0x25FDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FDE8u;
    // 0x25fdec: 0x2407029c  addiu       $a3, $zero, 0x29C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276998u, 0x25FDE8u, 0x25FDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FDF0u;
label_25fdf0:
    // 0x25fdf0: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x25fdf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x25fdf4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25fdf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fdf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25fdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fdfc: 0xc096a30  jal         func_25A8C0
    ctx->pc = 0x25FDFCu;
    SET_GPR_U32(ctx, 31, 0x25FE04u);
    ctx->pc = 0x25FE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FDFCu;
    // 0x25fe00: 0x2405029c  addiu       $a1, $zero, 0x29C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A8C0u, 0x25FDFCu, 0x25FE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FE04u;
label_25fe04:
    // 0x25fe04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25fe04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fe08: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x25FE08u;
    SET_GPR_U32(ctx, 31, 0x25FE10u);
    ctx->pc = 0x25FE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FE08u;
    // 0x25fe0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25FE08u, 0x25FE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FE10u;
label_25fe10:
    // 0x25fe10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25fe10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fe14: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x25fe14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x25fe18: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x25fe18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x25fe1c: 0xc096a30  jal         func_25A8C0
    ctx->pc = 0x25FE1Cu;
    SET_GPR_U32(ctx, 31, 0x25FE24u);
    ctx->pc = 0x25FE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FE1Cu;
    // 0x25fe20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A8C0u, 0x25FE1Cu, 0x25FE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FE24u;
label_25fe24:
    // 0x25fe24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25fe24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25fe28:
    // 0x25fe28: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x25FE28u;
    SET_GPR_U32(ctx, 31, 0x25FE30u);
    ctx->pc = 0x25FE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FE28u;
    // 0x25fe2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25FE28u, 0x25FE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FE30u;
label_25fe30:
    // 0x25fe30: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x25FE30u;
    {
        const bool branch_taken_0x25fe30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE30u;
        // 0x25fe34: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fe30) {
            ctx->pc = 0x25FF00u;
            goto label_25ff00;
        }
    }
    ctx->pc = 0x25FE38u;
label_25fe38:
    // 0x25fe38: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x25fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x25fe3c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x25fe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x25fe40: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x25FE40u;
    {
        const bool branch_taken_0x25fe40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fe40) {
            ctx->pc = 0x25FE44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25FE40u;
            // 0x25fe44: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25FE60u;
            goto label_25fe60;
        }
    }
    ctx->pc = 0x25FE48u;
    // 0x25fe48: 0xc097ddc  jal         func_25F770
    ctx->pc = 0x25FE48u;
    SET_GPR_U32(ctx, 31, 0x25FE50u);
    ctx->pc = 0x25FE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FE48u;
    // 0x25fe4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F770u, 0x25FE48u, 0x25FE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FE50u;
label_25fe50:
    // 0x25fe50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25fe50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fe54: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x25FE54u;
    SET_GPR_U32(ctx, 31, 0x25FE5Cu);
    ctx->pc = 0x25FE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FE54u;
    // 0x25fe58: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25FE54u, 0x25FE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FE5Cu;
label_25fe5c:
    // 0x25fe5c: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x25fe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25fe60:
    // 0x25fe60: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x25fe60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x25fe64: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x25FE64u;
    {
        const bool branch_taken_0x25fe64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE64u;
        // 0x25fe68: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fe64) {
            ctx->pc = 0x25FF00u;
            goto label_25ff00;
        }
    }
    ctx->pc = 0x25FE6Cu;
    // 0x25fe6c: 0xc097ddc  jal         func_25F770
    ctx->pc = 0x25FE6Cu;
    SET_GPR_U32(ctx, 31, 0x25FE74u);
    ctx->pc = 0x25FE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FE6Cu;
    // 0x25fe70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F770u, 0x25FE6Cu, 0x25FE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FE74u;
label_25fe74:
    // 0x25fe74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25fe74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fe78: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x25FE78u;
    SET_GPR_U32(ctx, 31, 0x25FE80u);
    ctx->pc = 0x25FE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FE78u;
    // 0x25fe7c: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25FE78u, 0x25FE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FE80u;
label_25fe80:
    // 0x25fe80: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x25FE80u;
    {
        const bool branch_taken_0x25fe80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE80u;
        // 0x25fe84: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fe80) {
            ctx->pc = 0x25FF00u;
            goto label_25ff00;
        }
    }
    ctx->pc = 0x25FE88u;
label_25fe88:
    // 0x25fe88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25fe88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fe8c: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x25FE8Cu;
    SET_GPR_U32(ctx, 31, 0x25FE94u);
    ctx->pc = 0x25FE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FE8Cu;
    // 0x25fe90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25FE8Cu, 0x25FE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FE94u;
label_25fe94:
    // 0x25fe94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25fe94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fe98: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x25FE98u;
    SET_GPR_U32(ctx, 31, 0x25FEA0u);
    ctx->pc = 0x25FE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FE98u;
    // 0x25fe9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25FE98u, 0x25FEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FEA0u;
label_25fea0:
    // 0x25fea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25fea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fea4: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x25fea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x25fea8: 0xc0886a8  jal         func_221AA0
    ctx->pc = 0x25FEA8u;
    SET_GPR_U32(ctx, 31, 0x25FEB0u);
    ctx->pc = 0x25FEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FEA8u;
    // 0x25feac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x25FEA8u, 0x25FEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FEB0u;
label_25feb0:
    // 0x25feb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25feb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25feb4: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x25feb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x25feb8: 0xc0886a8  jal         func_221AA0
    ctx->pc = 0x25FEB8u;
    SET_GPR_U32(ctx, 31, 0x25FEC0u);
    ctx->pc = 0x25FEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FEB8u;
    // 0x25febc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x25FEB8u, 0x25FEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FEC0u;
label_25fec0:
    // 0x25fec0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x25FEC0u;
    {
        const bool branch_taken_0x25fec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FEC0u;
        // 0x25fec4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fec0) {
            ctx->pc = 0x25FF00u;
            goto label_25ff00;
        }
    }
    ctx->pc = 0x25FEC8u;
label_25fec8:
    // 0x25fec8: 0xc08866e  jal         func_2219B8
    ctx->pc = 0x25FEC8u;
    SET_GPR_U32(ctx, 31, 0x25FED0u);
    ctx->pc = 0x25FECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FEC8u;
    // 0x25fecc: 0x2405029c  addiu       $a1, $zero, 0x29C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2219B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2219B8u, 0x25FEC8u, 0x25FED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FED0u;
label_25fed0:
    // 0x25fed0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25FED0u;
    {
        const bool branch_taken_0x25fed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FED0u;
        // 0x25fed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fed0) {
            ctx->pc = 0x25FEFCu;
            goto label_25fefc;
        }
    }
    ctx->pc = 0x25FED8u;
    // 0x25fed8: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x25fed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x25fedc: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x25fedcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x25fee0: 0xc096b7a  jal         func_25ADE8
    ctx->pc = 0x25FEE0u;
    SET_GPR_U32(ctx, 31, 0x25FEE8u);
    ctx->pc = 0x25FEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FEE0u;
    // 0x25fee4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ADE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ADE8u, 0x25FEE0u, 0x25FEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FEE8u;
label_25fee8:
    // 0x25fee8: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x25fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x25feec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25feecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fef0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25fef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fef4: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x25FEF4u;
    SET_GPR_U32(ctx, 31, 0x25FEFCu);
    ctx->pc = 0x25FEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FEF4u;
    // 0x25fef8: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25FEF4u, 0x25FEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FEFCu;
label_25fefc:
    // 0x25fefc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x25fefcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25ff00:
    // 0x25ff00: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25ff00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ff04: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x25ff04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ff08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25ff08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ff0c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x25ff0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25ff10: 0x3e00008  jr          $ra
    ctx->pc = 0x25FF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FF10u;
        // 0x25ff14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FF18u;
}
