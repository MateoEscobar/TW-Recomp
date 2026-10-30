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

// Function: sub_0041B8B0
// Address: 0x41b8b0 - 0x41bec8
void sub_0041B8B0_0x41b8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041B8B0_0x41b8b0");
#endif

    switch (ctx->pc) {
        case 0x41b918u: goto label_41b918;
        case 0x41b92cu: goto label_41b92c;
        case 0x41b96cu: goto label_41b96c;
        case 0x41b978u: goto label_41b978;
        case 0x41b988u: goto label_41b988;
        case 0x41ba00u: goto label_41ba00;
        case 0x41ba0cu: goto label_41ba0c;
        case 0x41ba1cu: goto label_41ba1c;
        case 0x41ba50u: goto label_41ba50;
        case 0x41ba84u: goto label_41ba84;
        case 0x41ba94u: goto label_41ba94;
        case 0x41bac8u: goto label_41bac8;
        case 0x41bb34u: goto label_41bb34;
        case 0x41bb84u: goto label_41bb84;
        case 0x41bb98u: goto label_41bb98;
        case 0x41bba4u: goto label_41bba4;
        case 0x41bc20u: goto label_41bc20;
        case 0x41bc34u: goto label_41bc34;
        case 0x41bc40u: goto label_41bc40;
        case 0x41bc58u: goto label_41bc58;
        case 0x41bc88u: goto label_41bc88;
        case 0x41bc98u: goto label_41bc98;
        case 0x41bca0u: goto label_41bca0;
        case 0x41bcc8u: goto label_41bcc8;
        case 0x41bce4u: goto label_41bce4;
        case 0x41bd30u: goto label_41bd30;
        case 0x41bd5cu: goto label_41bd5c;
        case 0x41bda8u: goto label_41bda8;
        case 0x41bdb8u: goto label_41bdb8;
        case 0x41be04u: goto label_41be04;
        case 0x41be3cu: goto label_41be3c;
        case 0x41be4cu: goto label_41be4c;
        case 0x41be5cu: goto label_41be5c;
        case 0x41be94u: goto label_41be94;
        default: break;
    }

    ctx->pc = 0x41b8b0u;

    // 0x41b8b0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x41b8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x41b8b4: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x41b8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x41b8b8: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x41b8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x41b8bc: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x41b8bcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x41b8c0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x41b8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x41b8c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x41b8c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b8c8: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x41b8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x41b8cc: 0x69403  sra         $s2, $a2, 16
    ctx->pc = 0x41b8ccu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
    // 0x41b8d0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x41b8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x41b8d4: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x41b8d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b8d8: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x41b8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x41b8dc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x41b8dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b8e0: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x41b8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x41b8e4: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x41b8e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b8e8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x41b8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x41b8ec: 0x9f403  sra         $fp, $t1, 16
    ctx->pc = 0x41b8ecu;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 9), 16));
    // 0x41b8f0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x41b8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x41b8f4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x41b8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x41b8f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x41b8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x41b8fc: 0x8ea20288  lw          $v0, 0x288($s5)
    ctx->pc = 0x41b8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 648)));
    // 0x41b900: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x41b900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x41b904: 0x10400163  beqz        $v0, . + 4 + (0x163 << 2)
    ctx->pc = 0x41B904u;
    {
        const bool branch_taken_0x41b904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B904u;
        // 0x41b908: 0xafa80018  sw          $t0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b904) {
            ctx->pc = 0x41BE94u;
            goto label_41be94;
        }
    }
    ctx->pc = 0x41B90Cu;
    // 0x41b90c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x41b90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x41b910: 0xc0e409a  jal         func_390268
    ctx->pc = 0x41B910u;
    SET_GPR_U32(ctx, 31, 0x41B918u);
    ctx->pc = 0x41B914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B910u;
    // 0x41b914: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x41B910u, 0x41B918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B918u;
label_41b918:
    // 0x41b918: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x41b918u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b91c: 0x5260001b  beql        $s3, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x41B91Cu;
    {
        const bool branch_taken_0x41b91c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b91c) {
            ctx->pc = 0x41B920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41B91Cu;
            // 0x41b920: 0xc6a10270  lwc1        $f1, 0x270($s5) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x41B98Cu;
            goto label_41b98c;
        }
    }
    ctx->pc = 0x41B924u;
    // 0x41b924: 0xc087502  jal         func_21D408
    ctx->pc = 0x41B924u;
    SET_GPR_U32(ctx, 31, 0x41B92Cu);
    ctx->pc = 0x41B928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B924u;
    // 0x41b928: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x41B924u, 0x41B92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B92Cu;
label_41b92c:
    // 0x41b92c: 0x8c56020c  lw          $s6, 0x20C($v0)
    ctx->pc = 0x41b92cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x41b930: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x41b930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x41b934: 0x8ec3002c  lw          $v1, 0x2C($s6)
    ctx->pc = 0x41b934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x41b938: 0x10620156  beq         $v1, $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x41B938u;
    {
        const bool branch_taken_0x41b938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x41B93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B938u;
        // 0x41b93c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b938) {
            ctx->pc = 0x41BE94u;
            goto label_41be94;
        }
    }
    ctx->pc = 0x41B940u;
    // 0x41b940: 0x10620154  beq         $v1, $v0, . + 4 + (0x154 << 2)
    ctx->pc = 0x41B940u;
    {
        const bool branch_taken_0x41b940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x41B944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B940u;
        // 0x41b944: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b940) {
            ctx->pc = 0x41BE94u;
            goto label_41be94;
        }
    }
    ctx->pc = 0x41B948u;
    // 0x41b948: 0x12420004  beq         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x41B948u;
    {
        const bool branch_taken_0x41b948 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x41B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B948u;
        // 0x41b94c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b948) {
            ctx->pc = 0x41B95Cu;
            goto label_41b95c;
        }
    }
    ctx->pc = 0x41B950u;
    // 0x41b950: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x41b950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x41b954: 0x56420003  bnel        $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x41B954u;
    {
        const bool branch_taken_0x41b954 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x41b954) {
            ctx->pc = 0x41B958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41B954u;
            // 0x41b958: 0x86c40030  lh          $a0, 0x30($s6) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41B964u;
            goto label_41b964;
        }
    }
    ctx->pc = 0x41B95Cu;
label_41b95c:
    // 0x41b95c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41b95cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b960: 0x86c40030  lh          $a0, 0x30($s6)
    ctx->pc = 0x41b960u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 48)));
label_41b964:
    // 0x41b964: 0xc05b0ea  jal         func_16C3A8
    ctx->pc = 0x41B964u;
    SET_GPR_U32(ctx, 31, 0x41B96Cu);
    ctx->pc = 0x41B968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B964u;
    // 0x41b968: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C3A8u, 0x41B964u, 0x41B96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B96Cu;
label_41b96c:
    // 0x41b96c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x41b96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b970: 0xc05a61e  jal         func_169878
    ctx->pc = 0x41B970u;
    SET_GPR_U32(ctx, 31, 0x41B978u);
    ctx->pc = 0x41B974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B970u;
    // 0x41b974: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169878u, 0x41B970u, 0x41B978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B978u;
label_41b978:
    // 0x41b978: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x41b978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b97c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x41b97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b980: 0xc106b98  jal         func_41AE60
    ctx->pc = 0x41B980u;
    SET_GPR_U32(ctx, 31, 0x41B988u);
    ctx->pc = 0x41B984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B980u;
    // 0x41b984: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41AE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41AE60u, 0x41B980u, 0x41B988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B988u;
label_41b988:
    // 0x41b988: 0xc6a10270  lwc1        $f1, 0x270($s5)
    ctx->pc = 0x41b988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41b98c:
    // 0x41b98c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x41b98cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b990: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x41b990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41b994: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x41b994u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x41b998: 0x0  nop
    ctx->pc = 0x41b998u;
    // NOP
    // 0x41b99c: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x41B99Cu;
    {
        const bool branch_taken_0x41b99c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x41B9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B99Cu;
        // 0x41b9a0: 0x26b10270  addiu       $s1, $s5, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b99c) {
            ctx->pc = 0x41B9ECu;
            goto label_41b9ec;
        }
    }
    ctx->pc = 0x41B9A4u;
    // 0x41b9a4: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x41b9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41b9a8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x41b9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41b9ac: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x41b9acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x41b9b0: 0x0  nop
    ctx->pc = 0x41b9b0u;
    // NOP
    // 0x41b9b4: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x41B9B4u;
    {
        const bool branch_taken_0x41b9b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x41b9b4) {
            ctx->pc = 0x41B9B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41B9B4u;
            // 0x41b9b8: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x41B9F0u;
            goto label_41b9f0;
        }
    }
    ctx->pc = 0x41B9BCu;
    // 0x41b9bc: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x41b9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41b9c0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x41b9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41b9c4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x41b9c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x41b9c8: 0x0  nop
    ctx->pc = 0x41b9c8u;
    // NOP
    // 0x41b9cc: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x41B9CCu;
    {
        const bool branch_taken_0x41b9cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x41b9cc) {
            ctx->pc = 0x41B9D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41B9CCu;
            // 0x41b9d0: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x41B9F0u;
            goto label_41b9f0;
        }
    }
    ctx->pc = 0x41B9D4u;
    // 0x41b9d4: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x41b9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41b9d8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x41b9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41b9dc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x41b9dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x41b9e0: 0x0  nop
    ctx->pc = 0x41b9e0u;
    // NOP
    // 0x41b9e4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x41B9E4u;
    {
        const bool branch_taken_0x41b9e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x41b9e4) {
            ctx->pc = 0x41B9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41B9E4u;
            // 0x41b9e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41B9ECu;
            goto label_41b9ec;
        }
    }
    ctx->pc = 0x41B9ECu;
label_41b9ec:
    // 0x41b9ec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x41b9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_41b9f0:
    // 0x41b9f0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x41B9F0u;
    {
        const bool branch_taken_0x41b9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B9F0u;
        // 0x41b9f4: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b9f0) {
            ctx->pc = 0x41BA24u;
            goto label_41ba24;
        }
    }
    ctx->pc = 0x41B9F8u;
    // 0x41b9f8: 0xc105712  jal         func_415C48
    ctx->pc = 0x41B9F8u;
    SET_GPR_U32(ctx, 31, 0x41BA00u);
    ctx->pc = 0x41B9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B9F8u;
    // 0x41b9fc: 0x2484ae18  addiu       $a0, $a0, -0x51E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C48u, 0x41B9F8u, 0x41BA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BA00u;
label_41ba00:
    // 0x41ba00: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x41ba00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x41ba04: 0xc0e40a2  jal         func_390288
    ctx->pc = 0x41BA04u;
    SET_GPR_U32(ctx, 31, 0x41BA0Cu);
    ctx->pc = 0x41BA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BA04u;
    // 0x41ba08: 0x27a40014  addiu       $a0, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x41BA04u, 0x41BA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BA0Cu;
label_41ba0c:
    // 0x41ba0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x41BA0Cu;
    {
        const bool branch_taken_0x41ba0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BA0Cu;
        // 0x41ba10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ba0c) {
            ctx->pc = 0x41BA24u;
            goto label_41ba24;
        }
    }
    ctx->pc = 0x41BA14u;
    // 0x41ba14: 0xc105876  jal         func_4161D8
    ctx->pc = 0x41BA14u;
    SET_GPR_U32(ctx, 31, 0x41BA1Cu);
    ctx->pc = 0x41BA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BA14u;
    // 0x41ba18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161D8u, 0x41BA14u, 0x41BA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BA1Cu;
label_41ba1c:
    // 0x41ba1c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x41ba1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x41ba20: 0x7ea20270  sq          $v0, 0x270($s5)
    ctx->pc = 0x41ba20u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 624), GPR_VEC(ctx, 2));
label_41ba24:
    // 0x41ba24: 0x2e42000f  sltiu       $v0, $s2, 0xF
    ctx->pc = 0x41ba24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x41ba28: 0x10400104  beqz        $v0, . + 4 + (0x104 << 2)
    ctx->pc = 0x41BA28u;
    {
        const bool branch_taken_0x41ba28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BA28u;
        // 0x41ba2c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ba28) {
            ctx->pc = 0x41BE3Cu;
            goto label_41be3c;
        }
    }
    ctx->pc = 0x41BA30u;
    // 0x41ba30: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x41ba30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x41ba34: 0x2442ae40  addiu       $v0, $v0, -0x51C0
    ctx->pc = 0x41ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946368));
    // 0x41ba38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x41ba38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x41ba3c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x41ba3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x41ba40: 0x800008  jr          $a0
    ctx->pc = 0x41BA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x41BA48u: goto label_41ba48;
            case 0x41BB3Cu: goto label_41bb3c;
            case 0x41BB6Cu: goto label_41bb6c;
            case 0x41BD74u: goto label_41bd74;
            case 0x41BDD0u: goto label_41bdd0;
            case 0x41BE0Cu: goto label_41be0c;
            case 0x41BE3Cu: goto label_41be3c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41BA40u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x41BA48u;
label_41ba48:
    // 0x41ba48: 0xc0e409a  jal         func_390268
    ctx->pc = 0x41BA48u;
    SET_GPR_U32(ctx, 31, 0x41BA50u);
    ctx->pc = 0x41BA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BA48u;
    // 0x41ba4c: 0x27a40018  addiu       $a0, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x41BA48u, 0x41BA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BA50u;
label_41ba50:
    // 0x41ba50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41ba50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ba54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41ba58: 0x56820014  bnel        $s4, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x41BA58u;
    {
        const bool branch_taken_0x41ba58 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x41ba58) {
            ctx->pc = 0x41BA5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41BA58u;
            // 0x41ba5c: 0x826201b0  lb          $v0, 0x1B0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41BAACu;
            goto label_41baac;
        }
    }
    ctx->pc = 0x41BA60u;
    // 0x41ba60: 0x2b21021  addu        $v0, $s5, $s2
    ctx->pc = 0x41ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x41ba64: 0x8fa90018  lw          $t1, 0x18($sp)
    ctx->pc = 0x41ba64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x41ba68: 0x90460294  lbu         $a2, 0x294($v0)
    ctx->pc = 0x41ba68u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 660)));
    // 0x41ba6c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x41ba6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ba70: 0x8faa0010  lw          $t2, 0x10($sp)
    ctx->pc = 0x41ba70u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41ba74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41ba74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ba78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x41ba78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41ba7c: 0xc05b7da  jal         func_16DF68
    ctx->pc = 0x41BA7Cu;
    SET_GPR_U32(ctx, 31, 0x41BA84u);
    ctx->pc = 0x41BA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BA7Cu;
    // 0x41ba80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DF68u, 0x41BA7Cu, 0x41BA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BA84u;
label_41ba84:
    // 0x41ba84: 0x52600009  beql        $s3, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x41BA84u;
    {
        const bool branch_taken_0x41ba84 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x41ba84) {
            ctx->pc = 0x41BA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41BA84u;
            // 0x41ba88: 0x826201b0  lb          $v0, 0x1B0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41BAACu;
            goto label_41baac;
        }
    }
    ctx->pc = 0x41BA8Cu;
    // 0x41ba8c: 0xc087502  jal         func_21D408
    ctx->pc = 0x41BA8Cu;
    SET_GPR_U32(ctx, 31, 0x41BA94u);
    ctx->pc = 0x41BA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BA8Cu;
    // 0x41ba90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x41BA8Cu, 0x41BA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BA94u;
label_41ba94:
    // 0x41ba94: 0x8c45020c  lw          $a1, 0x20C($v0)
    ctx->pc = 0x41ba94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x41ba98: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x41ba98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x41ba9c: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x41ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B734u));
    // 0x41baa0: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x41baa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x41baa4: 0xaca305f4  sw          $v1, 0x5F4($a1)
    ctx->pc = 0x41baa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1524), GPR_U32(ctx, 3));
    // 0x41baa8: 0x826201b0  lb          $v0, 0x1B0($s3)
    ctx->pc = 0x41baa8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_41baac:
    // 0x41baac: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x41baacu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x41bab0: 0x104000e3  beqz        $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x41BAB0u;
    {
        const bool branch_taken_0x41bab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BAB0u;
        // 0x41bab4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bab0) {
            ctx->pc = 0x41BE40u;
            goto label_41be40;
        }
    }
    ctx->pc = 0x41BAB8u;
    // 0x41bab8: 0x120000e2  beqz        $s0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x41BAB8u;
    {
        const bool branch_taken_0x41bab8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BAB8u;
        // 0x41babc: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bab8) {
            ctx->pc = 0x41BE44u;
            goto label_41be44;
        }
    }
    ctx->pc = 0x41BAC0u;
    // 0x41bac0: 0xc087502  jal         func_21D408
    ctx->pc = 0x41BAC0u;
    SET_GPR_U32(ctx, 31, 0x41BAC8u);
    ctx->pc = 0x41BAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BAC0u;
    // 0x41bac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x41BAC0u, 0x41BAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BAC8u;
label_41bac8:
    // 0x41bac8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x41bac8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bacc: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x41baccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x41bad0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41bad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41bad4: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x41BAD4u;
    {
        const bool branch_taken_0x41bad4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x41BAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BAD4u;
        // 0x41bad8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bad4) {
            ctx->pc = 0x41BAECu;
            goto label_41baec;
        }
    }
    ctx->pc = 0x41BADCu;
    // 0x41badc: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x41BADCu;
    {
        const bool branch_taken_0x41badc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x41BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BADCu;
        // 0x41bae0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41badc) {
            ctx->pc = 0x41BAECu;
            goto label_41baec;
        }
    }
    ctx->pc = 0x41BAE4u;
    // 0x41bae4: 0x148200d6  bne         $a0, $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x41BAE4u;
    {
        const bool branch_taken_0x41bae4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x41BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BAE4u;
        // 0x41bae8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bae4) {
            ctx->pc = 0x41BE40u;
            goto label_41be40;
        }
    }
    ctx->pc = 0x41BAECu;
label_41baec:
    // 0x41baec: 0x826201b0  lb          $v0, 0x1B0($s3)
    ctx->pc = 0x41baecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
    // 0x41baf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x41baf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41baf4: 0x90e50290  lbu         $a1, 0x290($a3)
    ctx->pc = 0x41baf4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 656)));
    // 0x41baf8: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x41baf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x41bafc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x41bafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x41bb00: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x41bb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x41bb04: 0x144000ce  bnez        $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x41BB04u;
    {
        const bool branch_taken_0x41bb04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41BB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BB04u;
        // 0x41bb08: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bb04) {
            ctx->pc = 0x41BE40u;
            goto label_41be40;
        }
    }
    ctx->pc = 0x41BB0Cu;
    // 0x41bb0c: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x41bb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x41bb10: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x41bb10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x41bb14: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x41bb14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x41bb18: 0xa0e20290  sb          $v0, 0x290($a3)
    ctx->pc = 0x41bb18u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 656), (uint8_t)GPR_U32(ctx, 2));
    // 0x41bb1c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x41bb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x41bb20: 0x3300b  movn        $a2, $zero, $v1
    ctx->pc = 0x41bb20u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x41bb24: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x41bb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x41bb28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x41bb28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bb2c: 0xc13b652  jal         func_4ED948
    ctx->pc = 0x41BB2Cu;
    SET_GPR_U32(ctx, 31, 0x41BB34u);
    ctx->pc = 0x41BB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BB2Cu;
    // 0x41bb30: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED948u, 0x41BB2Cu, 0x41BB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BB34u;
label_41bb34:
    // 0x41bb34: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x41BB34u;
    {
        const bool branch_taken_0x41bb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BB34u;
        // 0x41bb38: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bb34) {
            ctx->pc = 0x41BE40u;
            goto label_41be40;
        }
    }
    ctx->pc = 0x41BB3Cu;
label_41bb3c:
    // 0x41bb3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41bb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41bb40: 0x168200bf  bne         $s4, $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x41BB40u;
    {
        const bool branch_taken_0x41bb40 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x41BB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BB40u;
        // 0x41bb44: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bb40) {
            ctx->pc = 0x41BE40u;
            goto label_41be40;
        }
    }
    ctx->pc = 0x41BB48u;
    // 0x41bb48: 0x2b21021  addu        $v0, $s5, $s2
    ctx->pc = 0x41bb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x41bb4c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41bb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x41bb50: 0x90460294  lbu         $a2, 0x294($v0)
    ctx->pc = 0x41bb50u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 660)));
    // 0x41bb54: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x41bb54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bb58: 0x8c69bd30  lw          $t1, -0x42D0($v1)
    ctx->pc = 0x41bb58u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x41bb5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41bb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bb60: 0x8faa0010  lw          $t2, 0x10($sp)
    ctx->pc = 0x41bb60u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41bb64: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x41BB64u;
    {
        const bool branch_taken_0x41bb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BB64u;
        // 0x41bb68: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bb64) {
            ctx->pc = 0x41BDFCu;
            goto label_41bdfc;
        }
    }
    ctx->pc = 0x41BB6Cu;
label_41bb6c:
    // 0x41bb6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41bb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bb70: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x41bb70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x41bb74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41bb74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bb78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x41bb78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bb7c: 0xc105df6  jal         func_4177D8
    ctx->pc = 0x41BB7Cu;
    SET_GPR_U32(ctx, 31, 0x41BB84u);
    ctx->pc = 0x41BB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BB7Cu;
    // 0x41bb80: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4177D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4177D8u, 0x41BB7Cu, 0x41BB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BB84u;
label_41bb84:
    // 0x41bb84: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x41bb84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bb88: 0x126000ad  beqz        $s3, . + 4 + (0xAD << 2)
    ctx->pc = 0x41BB88u;
    {
        const bool branch_taken_0x41bb88 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BB88u;
        // 0x41bb8c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bb88) {
            ctx->pc = 0x41BE40u;
            goto label_41be40;
        }
    }
    ctx->pc = 0x41BB90u;
    // 0x41bb90: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x41BB90u;
    SET_GPR_U32(ctx, 31, 0x41BB98u);
    ctx->pc = 0x41BB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BB90u;
    // 0x41bb94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x41BB90u, 0x41BB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BB98u;
label_41bb98:
    // 0x41bb98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41bb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bb9c: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x41BB9Cu;
    SET_GPR_U32(ctx, 31, 0x41BBA4u);
    ctx->pc = 0x41BBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BB9Cu;
    // 0x41bba0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x41BB9Cu, 0x41BBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BBA4u;
label_41bba4:
    // 0x41bba4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x41bba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x41bba8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x41bba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x41bbac: 0x0  nop
    ctx->pc = 0x41bbacu;
    // NOP
    // 0x41bbb0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x41bbb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x41bbb4: 0x0  nop
    ctx->pc = 0x41bbb4u;
    // NOP
    // 0x41bbb8: 0x450000a0  bc1f        . + 4 + (0xA0 << 2)
    ctx->pc = 0x41BBB8u;
    {
        const bool branch_taken_0x41bbb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x41BBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BBB8u;
        // 0x41bbbc: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bbb8) {
            ctx->pc = 0x41BE3Cu;
            goto label_41be3c;
        }
    }
    ctx->pc = 0x41BBC0u;
    // 0x41bbc0: 0x8e6500d8  lw          $a1, 0xD8($s3)
    ctx->pc = 0x41bbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    // 0x41bbc4: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x41bbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x41bbc8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x41bbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x41bbcc: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x41BBCCu;
    {
        const bool branch_taken_0x41bbcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41BBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BBCCu;
        // 0x41bbd0: 0xafa5001c  sw          $a1, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bbcc) {
            ctx->pc = 0x41BCECu;
            goto label_41bcec;
        }
    }
    ctx->pc = 0x41BBD4u;
    // 0x41bbd4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x41bbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x41bbd8: 0x3c03007c  lui         $v1, 0x7C
    ctx->pc = 0x41bbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)124 << 16));
    // 0x41bbdc: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x41bbdcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x41bbe0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x41bbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41bbe4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x41bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x41bbe8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x41bbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x41bbec: 0x1684000c  bne         $s4, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x41BBECu;
    {
        const bool branch_taken_0x41bbec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        ctx->pc = 0x41BBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BBECu;
        // 0x41bbf0: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bbec) {
            ctx->pc = 0x41BC20u;
            goto label_41bc20;
        }
    }
    ctx->pc = 0x41BBF4u;
    // 0x41bbf4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x41bbf8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x41bbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x41bbfc: 0x2b21821  addu        $v1, $s5, $s2
    ctx->pc = 0x41bbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x41bc00: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x41bc00u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x41bc04: 0x8c8748a4  lw          $a3, 0x48A4($a0)
    ctx->pc = 0x41bc04u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5148A4u));
    // 0x41bc08: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x41bc08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bc0c: 0x90660294  lbu         $a2, 0x294($v1)
    ctx->pc = 0x41bc0cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 660)));
    // 0x41bc10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41bc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bc14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x41bc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41bc18: 0xc05b7da  jal         func_16DF68
    ctx->pc = 0x41BC18u;
    SET_GPR_U32(ctx, 31, 0x41BC20u);
    ctx->pc = 0x41BC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BC18u;
    // 0x41bc1c: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DF68u, 0x41BC18u, 0x41BC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BC20u;
label_41bc20:
    // 0x41bc20: 0xaea002b4  sw          $zero, 0x2B4($s5)
    ctx->pc = 0x41bc20u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 692), GPR_U32(ctx, 0));
    // 0x41bc24: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x41bc24u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x41bc28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41bc28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bc2c: 0xc0e8b36  jal         func_3A2CD8
    ctx->pc = 0x41BC2Cu;
    SET_GPR_U32(ctx, 31, 0x41BC34u);
    ctx->pc = 0x41BC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BC2Cu;
    // 0x41bc30: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2CD8u, 0x41BC2Cu, 0x41BC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BC34u;
label_41bc34:
    // 0x41bc34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41bc34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bc38: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x41BC38u;
    SET_GPR_U32(ctx, 31, 0x41BC40u);
    ctx->pc = 0x41BC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BC38u;
    // 0x41bc3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x41BC38u, 0x41BC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BC40u;
label_41bc40:
    // 0x41bc40: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x41bc40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x41bc44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41bc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bc48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x41bc48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bc4c: 0x24c6ae28  addiu       $a2, $a2, -0x51D8
    ctx->pc = 0x41bc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946344));
    // 0x41bc50: 0xc0e71f6  jal         func_39C7D8
    ctx->pc = 0x41BC50u;
    SET_GPR_U32(ctx, 31, 0x41BC58u);
    ctx->pc = 0x41BC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BC50u;
    // 0x41bc54: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C7D8u, 0x41BC50u, 0x41BC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BC58u;
label_41bc58:
    // 0x41bc58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41bc58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bc5c: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x41BC5Cu;
    {
        const bool branch_taken_0x41bc5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BC5Cu;
        // 0x41bc60: 0xc7a10020  lwc1        $f1, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bc5c) {
            ctx->pc = 0x41BCA0u;
            goto label_41bca0;
        }
    }
    ctx->pc = 0x41BC64u;
    // 0x41bc64: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x41bc64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
    // 0x41bc68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x41bc68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x41bc6c: 0x0  nop
    ctx->pc = 0x41bc6cu;
    // NOP
    // 0x41bc70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x41bc70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x41bc74: 0x0  nop
    ctx->pc = 0x41bc74u;
    // NOP
    // 0x41bc78: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x41BC78u;
    {
        const bool branch_taken_0x41bc78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x41BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BC78u;
        // 0x41bc7c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bc78) {
            ctx->pc = 0x41BCA4u;
            goto label_41bca4;
        }
    }
    ctx->pc = 0x41BC80u;
    // 0x41bc80: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x41BC80u;
    SET_GPR_U32(ctx, 31, 0x41BC88u);
    ctx->pc = 0x41BC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BC80u;
    // 0x41bc84: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x41BC80u, 0x41BC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BC88u;
label_41bc88:
    // 0x41bc88: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x41bc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x41bc8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41bc8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bc90: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x41BC90u;
    SET_GPR_U32(ctx, 31, 0x41BC98u);
    ctx->pc = 0x41BC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BC90u;
    // 0x41bc94: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x41BC90u, 0x41BC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BC98u;
label_41bc98:
    // 0x41bc98: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x41BC98u;
    SET_GPR_U32(ctx, 31, 0x41BCA0u);
    ctx->pc = 0x41BC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BC98u;
    // 0x41bc9c: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x41BC98u, 0x41BCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BCA0u;
label_41bca0:
    // 0x41bca0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x41bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_41bca4:
    // 0x41bca4: 0x2447ae30  addiu       $a3, $v0, -0x51D0
    ctx->pc = 0x41bca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946352));
    // 0x41bca8: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x41bca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x41bcac: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x41bcacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x41bcb0: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x41bcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x41bcb4: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x41bcb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x41bcb8: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x41bcb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x41bcbc: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x41bcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x41bcc0: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x41BCC0u;
    SET_GPR_U32(ctx, 31, 0x41BCC8u);
    ctx->pc = 0x41BCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BCC0u;
    // 0x41bcc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x41BCC0u, 0x41BCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BCC8u;
label_41bcc8:
    // 0x41bcc8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x41bcc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x41bccc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x41bcccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x41bcd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41bcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bcd4: 0x93a7001c  lbu         $a3, 0x1C($sp)
    ctx->pc = 0x41bcd4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x41bcd8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x41bcd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bcdc: 0xc105d50  jal         func_417540
    ctx->pc = 0x41BCDCu;
    SET_GPR_U32(ctx, 31, 0x41BCE4u);
    ctx->pc = 0x41BCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BCDCu;
    // 0x41bce0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417540u, 0x41BCDCu, 0x41BCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BCE4u;
label_41bce4:
    // 0x41bce4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x41BCE4u;
    {
        const bool branch_taken_0x41bce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BCE4u;
        // 0x41bce8: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bce4) {
            ctx->pc = 0x41BD60u;
            goto label_41bd60;
        }
    }
    ctx->pc = 0x41BCECu;
label_41bcec:
    // 0x41bcec: 0x51482  srl         $v0, $a1, 18
    ctx->pc = 0x41bcecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 18));
    // 0x41bcf0: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x41bcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x41bcf4: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x41bcf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x41bcf8: 0x14430019  bne         $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x41BCF8u;
    {
        const bool branch_taken_0x41bcf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x41BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BCF8u;
        // 0x41bcfc: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bcf8) {
            ctx->pc = 0x41BD60u;
            goto label_41bd60;
        }
    }
    ctx->pc = 0x41BD00u;
    // 0x41bd00: 0x12c00018  beqz        $s6, . + 4 + (0x18 << 2)
    ctx->pc = 0x41BD00u;
    {
        const bool branch_taken_0x41bd00 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BD00u;
        // 0x41bd04: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bd00) {
            ctx->pc = 0x41BD64u;
            goto label_41bd64;
        }
    }
    ctx->pc = 0x41BD08u;
    // 0x41bd08: 0x86c30030  lh          $v1, 0x30($s6)
    ctx->pc = 0x41bd08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x41bd0c: 0x3c02ff83  lui         $v0, 0xFF83
    ctx->pc = 0x41bd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65411 << 16));
    // 0x41bd10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x41bd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x41bd14: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x41bd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bd18: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x41bd18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x41bd1c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x41bd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x41bd20: 0x31c80  sll         $v1, $v1, 18
    ctx->pc = 0x41bd20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 18));
    // 0x41bd24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x41bd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x41bd28: 0xc05959e  jal         func_165678
    ctx->pc = 0x41BD28u;
    SET_GPR_U32(ctx, 31, 0x41BD30u);
    ctx->pc = 0x41BD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BD28u;
    // 0x41bd2c: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x41BD28u, 0x41BD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BD30u;
label_41bd30:
    // 0x41bd30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x41bd30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bd34: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x41BD34u;
    {
        const bool branch_taken_0x41bd34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BD34u;
        // 0x41bd38: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bd34) {
            ctx->pc = 0x41BD60u;
            goto label_41bd60;
        }
    }
    ctx->pc = 0x41BD3Cu;
    // 0x41bd3c: 0x80a201b0  lb          $v0, 0x1B0($a1)
    ctx->pc = 0x41bd3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x41bd40: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x41bd40u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x41bd44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x41BD44u;
    {
        const bool branch_taken_0x41bd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BD44u;
        // 0x41bd48: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bd44) {
            ctx->pc = 0x41BD5Cu;
            goto label_41bd5c;
        }
    }
    ctx->pc = 0x41BD4Cu;
    // 0x41bd4c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x41bd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x41bd50: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x41bd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x41bd54: 0xc13b652  jal         func_4ED948
    ctx->pc = 0x41BD54u;
    SET_GPR_U32(ctx, 31, 0x41BD5Cu);
    ctx->pc = 0x41BD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BD54u;
    // 0x41bd58: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED948u, 0x41BD54u, 0x41BD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BD5Cu;
label_41bd5c:
    // 0x41bd5c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x41bd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_41bd60:
    // 0x41bd60: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x41bd60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_41bd64:
    // 0x41bd64: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x41bd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x41bd68: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x41bd68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x41bd6c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x41BD6Cu;
    {
        const bool branch_taken_0x41bd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BD6Cu;
        // 0x41bd70: 0xae6200d8  sw          $v0, 0xD8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bd6c) {
            ctx->pc = 0x41BE3Cu;
            goto label_41be3c;
        }
    }
    ctx->pc = 0x41BD74u;
label_41bd74:
    // 0x41bd74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41bd78: 0x16820031  bne         $s4, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x41BD78u;
    {
        const bool branch_taken_0x41bd78 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x41BD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BD78u;
        // 0x41bd7c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bd78) {
            ctx->pc = 0x41BE40u;
            goto label_41be40;
        }
    }
    ctx->pc = 0x41BD80u;
    // 0x41bd80: 0x2b21021  addu        $v0, $s5, $s2
    ctx->pc = 0x41bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x41bd84: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41bd84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x41bd88: 0x90460294  lbu         $a2, 0x294($v0)
    ctx->pc = 0x41bd88u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 660)));
    // 0x41bd8c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x41bd8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bd90: 0x8c69bd30  lw          $t1, -0x42D0($v1)
    ctx->pc = 0x41bd90u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x41bd94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41bd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bd98: 0x8faa0010  lw          $t2, 0x10($sp)
    ctx->pc = 0x41bd98u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41bd9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x41bd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41bda0: 0xc05b7da  jal         func_16DF68
    ctx->pc = 0x41BDA0u;
    SET_GPR_U32(ctx, 31, 0x41BDA8u);
    ctx->pc = 0x41BDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BDA0u;
    // 0x41bda4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DF68u, 0x41BDA0u, 0x41BDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BDA8u;
label_41bda8:
    // 0x41bda8: 0x12600025  beqz        $s3, . + 4 + (0x25 << 2)
    ctx->pc = 0x41BDA8u;
    {
        const bool branch_taken_0x41bda8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BDA8u;
        // 0x41bdac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bda8) {
            ctx->pc = 0x41BE40u;
            goto label_41be40;
        }
    }
    ctx->pc = 0x41BDB0u;
    // 0x41bdb0: 0xc087502  jal         func_21D408
    ctx->pc = 0x41BDB0u;
    SET_GPR_U32(ctx, 31, 0x41BDB8u);
    ctx->pc = 0x41BDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BDB0u;
    // 0x41bdb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x41BDB0u, 0x41BDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BDB8u;
label_41bdb8:
    // 0x41bdb8: 0x8c45020c  lw          $a1, 0x20C($v0)
    ctx->pc = 0x41bdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x41bdbc: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x41bdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x41bdc0: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x41bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B734u));
    // 0x41bdc4: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x41bdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x41bdc8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x41BDC8u;
    {
        const bool branch_taken_0x41bdc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BDC8u;
        // 0x41bdcc: 0xaca305f4  sw          $v1, 0x5F4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1524), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bdc8) {
            ctx->pc = 0x41BE3Cu;
            goto label_41be3c;
        }
    }
    ctx->pc = 0x41BDD0u;
label_41bdd0:
    // 0x41bdd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41bdd4: 0x1682001a  bne         $s4, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x41BDD4u;
    {
        const bool branch_taken_0x41bdd4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x41BDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BDD4u;
        // 0x41bdd8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bdd4) {
            ctx->pc = 0x41BE40u;
            goto label_41be40;
        }
    }
    ctx->pc = 0x41BDDCu;
    // 0x41bddc: 0x2b21021  addu        $v0, $s5, $s2
    ctx->pc = 0x41bddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x41bde0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41bde0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x41bde4: 0x90460294  lbu         $a2, 0x294($v0)
    ctx->pc = 0x41bde4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 660)));
    // 0x41bde8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x41bde8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bdec: 0x8c69bd30  lw          $t1, -0x42D0($v1)
    ctx->pc = 0x41bdecu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x41bdf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41bdf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bdf4: 0x8faa0010  lw          $t2, 0x10($sp)
    ctx->pc = 0x41bdf4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41bdf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x41bdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41bdfc:
    // 0x41bdfc: 0xc05b7da  jal         func_16DF68
    ctx->pc = 0x41BDFCu;
    SET_GPR_U32(ctx, 31, 0x41BE04u);
    ctx->pc = 0x41BE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BDFCu;
    // 0x41be00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DF68u, 0x41BDFCu, 0x41BE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BE04u;
label_41be04:
    // 0x41be04: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x41BE04u;
    {
        const bool branch_taken_0x41be04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BE04u;
        // 0x41be08: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41be04) {
            ctx->pc = 0x41BE40u;
            goto label_41be40;
        }
    }
    ctx->pc = 0x41BE0Cu;
label_41be0c:
    // 0x41be0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41be0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41be10: 0x1682000b  bne         $s4, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x41BE10u;
    {
        const bool branch_taken_0x41be10 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x41BE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BE10u;
        // 0x41be14: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41be10) {
            ctx->pc = 0x41BE40u;
            goto label_41be40;
        }
    }
    ctx->pc = 0x41BE18u;
    // 0x41be18: 0x12e00009  beqz        $s7, . + 4 + (0x9 << 2)
    ctx->pc = 0x41BE18u;
    {
        const bool branch_taken_0x41be18 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BE18u;
        // 0x41be1c: 0x8fa90018  lw          $t1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41be18) {
            ctx->pc = 0x41BE40u;
            goto label_41be40;
        }
    }
    ctx->pc = 0x41BE20u;
    // 0x41be20: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x41be20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41be24: 0x8faa0010  lw          $t2, 0x10($sp)
    ctx->pc = 0x41be24u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41be28: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x41be28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41be2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41be2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41be30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x41be30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41be34: 0xc05b7da  jal         func_16DF68
    ctx->pc = 0x41BE34u;
    SET_GPR_U32(ctx, 31, 0x41BE3Cu);
    ctx->pc = 0x41BE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BE34u;
    // 0x41be38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DF68u, 0x41BE34u, 0x41BE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BE3Cu;
label_41be3c:
    // 0x41be3c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41be3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_41be40:
    // 0x41be40: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x41be40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_41be44:
    // 0x41be44: 0xc0e409a  jal         func_390268
    ctx->pc = 0x41BE44u;
    SET_GPR_U32(ctx, 31, 0x41BE4Cu);
    ctx->pc = 0x41BE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BE44u;
    // 0x41be48: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x41BE44u, 0x41BE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BE4Cu;
label_41be4c:
    // 0x41be4c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x41BE4Cu;
    {
        const bool branch_taken_0x41be4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BE4Cu;
        // 0x41be50: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41be4c) {
            ctx->pc = 0x41BE98u;
            goto label_41be98;
        }
    }
    ctx->pc = 0x41BE54u;
    // 0x41be54: 0xc087502  jal         func_21D408
    ctx->pc = 0x41BE54u;
    SET_GPR_U32(ctx, 31, 0x41BE5Cu);
    ctx->pc = 0x41BE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BE54u;
    // 0x41be58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x41BE54u, 0x41BE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BE5Cu;
label_41be5c:
    // 0x41be5c: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x41be5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x41be60: 0x1476000d  bne         $v1, $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x41BE60u;
    {
        const bool branch_taken_0x41be60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        ctx->pc = 0x41BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BE60u;
        // 0x41be64: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41be60) {
            ctx->pc = 0x41BE98u;
            goto label_41be98;
        }
    }
    ctx->pc = 0x41BE68u;
    // 0x41be68: 0x82a30290  lb          $v1, 0x290($s5)
    ctx->pc = 0x41be68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 656)));
    // 0x41be6c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x41be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x41be70: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x41BE70u;
    {
        const bool branch_taken_0x41be70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x41BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BE70u;
        // 0x41be74: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41be70) {
            ctx->pc = 0x41BE80u;
            goto label_41be80;
        }
    }
    ctx->pc = 0x41BE78u;
    // 0x41be78: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x41BE78u;
    {
        const bool branch_taken_0x41be78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x41be78) {
            ctx->pc = 0x41BE7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41BE78u;
            // 0x41be7c: 0xa2b20290  sb          $s2, 0x290($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 656), (uint8_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41BE80u;
            goto label_41be80;
        }
    }
    ctx->pc = 0x41BE80u;
label_41be80:
    // 0x41be80: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x41be80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x41be84: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x41be84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x41be88: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x41be88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x41be8c: 0xc06c948  jal         func_1B2520
    ctx->pc = 0x41BE8Cu;
    SET_GPR_U32(ctx, 31, 0x41BE94u);
    ctx->pc = 0x41BE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BE8Cu;
    // 0x41be90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2520u, 0x41BE8Cu, 0x41BE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BE94u;
label_41be94:
    // 0x41be94: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x41be94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_41be98:
    // 0x41be98: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x41be98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x41be9c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x41be9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x41bea0: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x41bea0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x41bea4: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x41bea4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x41bea8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x41bea8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x41beac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x41beacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x41beb0: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x41beb0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x41beb4: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x41beb4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x41beb8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x41beb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41bebc: 0x3e00008  jr          $ra
    ctx->pc = 0x41BEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BEBCu;
        // 0x41bec0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41BEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41BEC4u;
    // 0x41bec4: 0x0  nop
    ctx->pc = 0x41bec4u;
    // NOP
    ctx->pc = 0x41bec8u;
}
