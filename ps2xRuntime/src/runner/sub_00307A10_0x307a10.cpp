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

// Function: sub_00307A10
// Address: 0x307a10 - 0x307d40
void sub_00307A10_0x307a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307A10_0x307a10");
#endif

    switch (ctx->pc) {
        case 0x307a58u: goto label_307a58;
        case 0x307a6cu: goto label_307a6c;
        case 0x307a84u: goto label_307a84;
        case 0x307a9cu: goto label_307a9c;
        case 0x307aa4u: goto label_307aa4;
        case 0x307ac0u: goto label_307ac0;
        case 0x307ae0u: goto label_307ae0;
        case 0x307b08u: goto label_307b08;
        case 0x307b18u: goto label_307b18;
        case 0x307b40u: goto label_307b40;
        case 0x307b58u: goto label_307b58;
        case 0x307b84u: goto label_307b84;
        case 0x307ba4u: goto label_307ba4;
        case 0x307c04u: goto label_307c04;
        case 0x307c20u: goto label_307c20;
        case 0x307c30u: goto label_307c30;
        case 0x307c50u: goto label_307c50;
        case 0x307c6cu: goto label_307c6c;
        case 0x307c90u: goto label_307c90;
        case 0x307c9cu: goto label_307c9c;
        case 0x307cacu: goto label_307cac;
        case 0x307cc8u: goto label_307cc8;
        case 0x307cd4u: goto label_307cd4;
        case 0x307ce4u: goto label_307ce4;
        case 0x307d00u: goto label_307d00;
        case 0x307d0cu: goto label_307d0c;
        default: break;
    }

    ctx->pc = 0x307a10u;

    // 0x307a10: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x307a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x307a14: 0x7fb301a0  sq          $s3, 0x1A0($sp)
    ctx->pc = 0x307a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 19));
    // 0x307a18: 0x7fb001d0  sq          $s0, 0x1D0($sp)
    ctx->pc = 0x307a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 16));
    // 0x307a1c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x307a1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307a20: 0x7fb101c0  sq          $s1, 0x1C0($sp)
    ctx->pc = 0x307a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 17));
    // 0x307a24: 0x7fb201b0  sq          $s2, 0x1B0($sp)
    ctx->pc = 0x307a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 18));
    // 0x307a28: 0x7fb40190  sq          $s4, 0x190($sp)
    ctx->pc = 0x307a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 20));
    // 0x307a2c: 0x7fb50180  sq          $s5, 0x180($sp)
    ctx->pc = 0x307a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 21));
    // 0x307a30: 0x7fb60170  sq          $s6, 0x170($sp)
    ctx->pc = 0x307a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 22));
    // 0x307a34: 0x7fb70160  sq          $s7, 0x160($sp)
    ctx->pc = 0x307a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 23));
    // 0x307a38: 0x7fbe0150  sq          $fp, 0x150($sp)
    ctx->pc = 0x307a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 30));
    // 0x307a3c: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x307a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x307a40: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x307a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x307a44: 0x908200d9  lbu         $v0, 0xD9($a0)
    ctx->pc = 0x307a44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 217)));
    // 0x307a48: 0x104000b1  beqz        $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x307A48u;
    {
        const bool branch_taken_0x307a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307A48u;
        // 0x307a4c: 0x7bb001d0  lq          $s0, 0x1D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307a48) {
            ctx->pc = 0x307D10u;
            goto label_307d10;
        }
    }
    ctx->pc = 0x307A50u;
    // 0x307a50: 0xc05959e  jal         func_165678
    ctx->pc = 0x307A50u;
    SET_GPR_U32(ctx, 31, 0x307A58u);
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x307A50u, 0x307A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307A58u;
label_307a58:
    // 0x307a58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x307a58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307a5c: 0x520000ac  beql        $s0, $zero, . + 4 + (0xAC << 2)
    ctx->pc = 0x307A5Cu;
    {
        const bool branch_taken_0x307a5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x307a5c) {
            ctx->pc = 0x307A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307A5Cu;
            // 0x307a60: 0x7bb001d0  lq          $s0, 0x1D0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307D10u;
            goto label_307d10;
        }
    }
    ctx->pc = 0x307A64u;
    // 0x307a64: 0xc08a096  jal         func_228258
    ctx->pc = 0x307A64u;
    SET_GPR_U32(ctx, 31, 0x307A6Cu);
    ctx->pc = 0x307A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307A64u;
    // 0x307a68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x307A64u, 0x307A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307A6Cu;
label_307a6c:
    // 0x307a6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x307a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x307a70: 0x504300a7  beql        $v0, $v1, . + 4 + (0xA7 << 2)
    ctx->pc = 0x307A70u;
    {
        const bool branch_taken_0x307a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x307a70) {
            ctx->pc = 0x307A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307A70u;
            // 0x307a74: 0x7bb001d0  lq          $s0, 0x1D0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307D10u;
            goto label_307d10;
        }
    }
    ctx->pc = 0x307A78u;
    // 0x307a78: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x307a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x307a7c: 0xc059856  jal         func_166158
    ctx->pc = 0x307A7Cu;
    SET_GPR_U32(ctx, 31, 0x307A84u);
    ctx->pc = 0x307A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307A7Cu;
    // 0x307a80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x307A7Cu, 0x307A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307A84u;
label_307a84:
    // 0x307a84: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x307a84u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307a88: 0x2bc20002  slti        $v0, $fp, 0x2
    ctx->pc = 0x307a88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x307a8c: 0x544000a0  bnel        $v0, $zero, . + 4 + (0xA0 << 2)
    ctx->pc = 0x307A8Cu;
    {
        const bool branch_taken_0x307a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307a8c) {
            ctx->pc = 0x307A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307A8Cu;
            // 0x307a90: 0x7bb001d0  lq          $s0, 0x1D0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307D10u;
            goto label_307d10;
        }
    }
    ctx->pc = 0x307A94u;
    // 0x307a94: 0xc087502  jal         func_21D408
    ctx->pc = 0x307A94u;
    SET_GPR_U32(ctx, 31, 0x307A9Cu);
    ctx->pc = 0x307A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307A94u;
    // 0x307a98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x307A94u, 0x307A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307A9Cu;
label_307a9c:
    // 0x307a9c: 0xc0a2fc0  jal         func_28BF00
    ctx->pc = 0x307A9Cu;
    SET_GPR_U32(ctx, 31, 0x307AA4u);
    ctx->pc = 0x307AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307A9Cu;
    // 0x307aa0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x307A9Cu, 0x307AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307AA4u;
label_307aa4:
    // 0x307aa4: 0x3c070017  lui         $a3, 0x17
    ctx->pc = 0x307aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)23 << 16));
    // 0x307aa8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x307aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x307aac: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x307aacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x307ab0: 0x24e7bfc8  addiu       $a3, $a3, -0x4038
    ctx->pc = 0x307ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950856));
    // 0x307ab4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x307ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307ab8: 0xc05b294  jal         func_16CA50
    ctx->pc = 0x307AB8u;
    SET_GPR_U32(ctx, 31, 0x307AC0u);
    ctx->pc = 0x307ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307AB8u;
    // 0x307abc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CA50u, 0x307AB8u, 0x307AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307AC0u;
label_307ac0:
    // 0x307ac0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x307ac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307ac4: 0x12200091  beqz        $s1, . + 4 + (0x91 << 2)
    ctx->pc = 0x307AC4u;
    {
        const bool branch_taken_0x307ac4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x307AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307AC4u;
        // 0x307ac8: 0x2e220002  sltiu       $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307ac4) {
            ctx->pc = 0x307D0Cu;
            goto label_307d0c;
        }
    }
    ctx->pc = 0x307ACCu;
    // 0x307acc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x307ACCu;
    {
        const bool branch_taken_0x307acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307ACCu;
        // 0x307ad0: 0x2e230003  sltiu       $v1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307acc) {
            ctx->pc = 0x307AE4u;
            goto label_307ae4;
        }
    }
    ctx->pc = 0x307AD4u;
    // 0x307ad4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x307ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307ad8: 0xc0e1a34  jal         func_3868D0
    ctx->pc = 0x307AD8u;
    SET_GPR_U32(ctx, 31, 0x307AE0u);
    ctx->pc = 0x307ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307AD8u;
    // 0x307adc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3868D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3868D0u, 0x307AD8u, 0x307AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307AE0u;
label_307ae0:
    // 0x307ae0: 0x2e230003  sltiu       $v1, $s1, 0x3
    ctx->pc = 0x307ae0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_307ae4:
    // 0x307ae4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x307ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x307ae8: 0x43880a  movz        $s1, $v0, $v1
    ctx->pc = 0x307ae8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x307aec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x307aecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307af0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x307af0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307af4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x307AF4u;
    {
        const bool branch_taken_0x307af4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x307AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307AF4u;
        // 0x307af8: 0x27b70100  addiu       $s7, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307af4) {
            ctx->pc = 0x307B28u;
            goto label_307b28;
        }
    }
    ctx->pc = 0x307AFCu;
    // 0x307afc: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x307afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307b00: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x307b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x307b04: 0x0  nop
    ctx->pc = 0x307b04u;
    // NOP
label_307b08:
    // 0x307b08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x307b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307b0c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x307b0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x307b10: 0xc059856  jal         func_166158
    ctx->pc = 0x307B10u;
    SET_GPR_U32(ctx, 31, 0x307B18u);
    ctx->pc = 0x307B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307B10u;
    // 0x307b14: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x307B10u, 0x307B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307B18u;
label_307b18:
    // 0x307b18: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x307b18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x307b1c: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x307b1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x307b20: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x307B20u;
    {
        const bool branch_taken_0x307b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307b20) {
            ctx->pc = 0x307B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307B20u;
            // 0x307b24: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307b08;
        }
    }
    ctx->pc = 0x307B28u;
label_307b28:
    // 0x307b28: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x307b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x307b2c: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x307b2cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x307b30: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x307b30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307b34: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x307b34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307b38: 0x8c55002c  lw          $s5, 0x2C($v0)
    ctx->pc = 0x307b38u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x307b3c: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x307b3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_307b40:
    // 0x307b40: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x307b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x307b44: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x307b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307b48: 0x8c44caa8  lw          $a0, -0x3558($v0)
    ctx->pc = 0x307b48u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CAA8u));
    // 0x307b4c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x307b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307b50: 0xc059184  jal         func_164610
    ctx->pc = 0x307B50u;
    SET_GPR_U32(ctx, 31, 0x307B58u);
    ctx->pc = 0x307B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307B50u;
    // 0x307b54: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164610u, 0x307B50u, 0x307B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307B58u;
label_307b58:
    // 0x307b58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x307b58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x307b5c: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x307b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x307b60: 0x2e230007  sltiu       $v1, $s1, 0x7
    ctx->pc = 0x307b60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x307b64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x307b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x307b68: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x307b68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x307b6c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x307B6Cu;
    {
        const bool branch_taken_0x307b6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x307B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307B6Cu;
        // 0x307b70: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307b6c) {
            ctx->pc = 0x307B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307b40;
        }
    }
    ctx->pc = 0x307B74u;
    // 0x307b74: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x307b74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x307b78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x307b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307b7c: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x307B7Cu;
    SET_GPR_U32(ctx, 31, 0x307B84u);
    ctx->pc = 0x307B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307B7Cu;
    // 0x307b80: 0x2484b8a0  addiu       $a0, $a0, -0x4760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x307B7Cu, 0x307B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307B84u;
label_307b84:
    // 0x307b84: 0x92f20004  lbu         $s2, 0x4($s7)
    ctx->pc = 0x307b84u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x307b88: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x307b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307b8c: 0xd2102b  sltu        $v0, $a2, $s2
    ctx->pc = 0x307b8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x307b90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x307B90u;
    {
        const bool branch_taken_0x307b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307B90u;
        // 0x307b94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307b90) {
            ctx->pc = 0x307BA0u;
            goto label_307ba0;
        }
    }
    ctx->pc = 0x307B98u;
    // 0x307b98: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x307B98u;
    {
        const bool branch_taken_0x307b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307B98u;
        // 0x307b9c: 0x8fb60100  lw          $s6, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307b98) {
            ctx->pc = 0x307BCCu;
            goto label_307bcc;
        }
    }
    ctx->pc = 0x307BA0u;
label_307ba0:
    // 0x307ba0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x307ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_307ba4:
    // 0x307ba4: 0x2ca20007  sltiu       $v0, $a1, 0x7
    ctx->pc = 0x307ba4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x307ba8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x307BA8u;
    {
        const bool branch_taken_0x307ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307BA8u;
        // 0x307bac: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307ba8) {
            ctx->pc = 0x307BCCu;
            goto label_307bcc;
        }
    }
    ctx->pc = 0x307BB0u;
    // 0x307bb0: 0x2e22021  addu        $a0, $s7, $v0
    ctx->pc = 0x307bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x307bb4: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x307bb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x307bb8: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x307bb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x307bbc: 0xd2102b  sltu        $v0, $a2, $s2
    ctx->pc = 0x307bbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x307bc0: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x307BC0u;
    {
        const bool branch_taken_0x307bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307bc0) {
            ctx->pc = 0x307BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307BC0u;
            // 0x307bc4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307BA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307ba4;
        }
    }
    ctx->pc = 0x307BC8u;
    // 0x307bc8: 0x8c960000  lw          $s6, 0x0($a0)
    ctx->pc = 0x307bc8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_307bcc:
    // 0x307bcc: 0x2ec20007  sltiu       $v0, $s6, 0x7
    ctx->pc = 0x307bccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x307bd0: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x307BD0u;
    {
        const bool branch_taken_0x307bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307BD0u;
        // 0x307bd4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307bd0) {
            ctx->pc = 0x307D0Cu;
            goto label_307d0c;
        }
    }
    ctx->pc = 0x307BD8u;
    // 0x307bd8: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x307bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x307bdc: 0x2442ad30  addiu       $v0, $v0, -0x52D0
    ctx->pc = 0x307bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946096));
    // 0x307be0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x307be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x307be4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x307be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x307be8: 0x800008  jr          $a0
    ctx->pc = 0x307BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x307BF0u: goto label_307bf0;
            case 0x307C28u: goto label_307c28;
            case 0x307C58u: goto label_307c58;
            case 0x307CA4u: goto label_307ca4;
            case 0x307CDCu: goto label_307cdc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307BE8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x307BF0u;
label_307bf0:
    // 0x307bf0: 0x3d41823  subu        $v1, $fp, $s4
    ctx->pc = 0x307bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    // 0x307bf4: 0x1e8043  sra         $s0, $fp, 1
    ctx->pc = 0x307bf4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 30), 1));
    // 0x307bf8: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x307bf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x307bfc: 0xc0c860e  jal         func_321838
    ctx->pc = 0x307BFCu;
    SET_GPR_U32(ctx, 31, 0x307C04u);
    ctx->pc = 0x307C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307BFCu;
    // 0x307c00: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321838u, 0x307BFCu, 0x307C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307C04u;
label_307c04:
    // 0x307c04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x307c04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307c08: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x307C08u;
    {
        const bool branch_taken_0x307c08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x307C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307C08u;
        // 0x307c0c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307c08) {
            ctx->pc = 0x307C90u;
            goto label_307c90;
        }
    }
    ctx->pc = 0x307C10u;
    // 0x307c10: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x307c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x307c14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x307c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307c18: 0xc0c876e  jal         func_321DB8
    ctx->pc = 0x307C18u;
    SET_GPR_U32(ctx, 31, 0x307C20u);
    ctx->pc = 0x307C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307C18u;
    // 0x307c1c: 0x24072710  addiu       $a3, $zero, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321DB8u, 0x307C18u, 0x307C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307C20u;
label_307c20:
    // 0x307c20: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x307C20u;
    {
        const bool branch_taken_0x307c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307C20u;
        // 0x307c24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307c20) {
            ctx->pc = 0x307C94u;
            goto label_307c94;
        }
    }
    ctx->pc = 0x307C28u;
label_307c28:
    // 0x307c28: 0xc0c860e  jal         func_321838
    ctx->pc = 0x307C28u;
    SET_GPR_U32(ctx, 31, 0x307C30u);
    ctx->pc = 0x321838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321838u, 0x307C28u, 0x307C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307C30u;
label_307c30:
    // 0x307c30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x307c30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307c34: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x307C34u;
    {
        const bool branch_taken_0x307c34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x307C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307C34u;
        // 0x307c38: 0x3ac60002  xori        $a2, $s6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307c34) {
            ctx->pc = 0x307CC8u;
            goto label_307cc8;
        }
    }
    ctx->pc = 0x307C3Cu;
    // 0x307c3c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x307c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x307c40: 0x2cc60001  sltiu       $a2, $a2, 0x1
    ctx->pc = 0x307c40u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x307c44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307c48: 0xc0c8862  jal         func_322188
    ctx->pc = 0x307C48u;
    SET_GPR_U32(ctx, 31, 0x307C50u);
    ctx->pc = 0x307C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307C48u;
    // 0x307c4c: 0x24073a98  addiu       $a3, $zero, 0x3A98 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322188u, 0x307C48u, 0x307C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307C50u;
label_307c50:
    // 0x307c50: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x307C50u;
    {
        const bool branch_taken_0x307c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307C50u;
        // 0x307c54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307c50) {
            ctx->pc = 0x307CCCu;
            goto label_307ccc;
        }
    }
    ctx->pc = 0x307C58u;
label_307c58:
    // 0x307c58: 0x3d41823  subu        $v1, $fp, $s4
    ctx->pc = 0x307c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    // 0x307c5c: 0x1e8043  sra         $s0, $fp, 1
    ctx->pc = 0x307c5cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 30), 1));
    // 0x307c60: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x307c60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x307c64: 0xc0c860e  jal         func_321838
    ctx->pc = 0x307C64u;
    SET_GPR_U32(ctx, 31, 0x307C6Cu);
    ctx->pc = 0x307C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307C64u;
    // 0x307c68: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321838u, 0x307C64u, 0x307C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307C6Cu;
label_307c6c:
    // 0x307c6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x307c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307c70: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x307C70u;
    {
        const bool branch_taken_0x307c70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x307C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307C70u;
        // 0x307c74: 0x3ac70003  xori        $a3, $s6, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307c70) {
            ctx->pc = 0x307C90u;
            goto label_307c90;
        }
    }
    ctx->pc = 0x307C78u;
    // 0x307c78: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x307c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x307c7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x307c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307c80: 0x2ce70001  sltiu       $a3, $a3, 0x1
    ctx->pc = 0x307c80u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x307c84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x307c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307c88: 0xc0c8ade  jal         func_322B78
    ctx->pc = 0x307C88u;
    SET_GPR_U32(ctx, 31, 0x307C90u);
    ctx->pc = 0x307C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307C88u;
    // 0x307c8c: 0x24084e20  addiu       $t0, $zero, 0x4E20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322B78u, 0x307C88u, 0x307C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307C90u;
label_307c90:
    // 0x307c90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x307c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_307c94:
    // 0x307c94: 0xc0c1ad4  jal         func_306B50
    ctx->pc = 0x307C94u;
    SET_GPR_U32(ctx, 31, 0x307C9Cu);
    ctx->pc = 0x307C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307C94u;
    // 0x307c98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306B50u, 0x307C94u, 0x307C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307C9Cu;
label_307c9c:
    // 0x307c9c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x307C9Cu;
    {
        const bool branch_taken_0x307c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307C9Cu;
        // 0x307ca0: 0x7bb001d0  lq          $s0, 0x1D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307c9c) {
            ctx->pc = 0x307D10u;
            goto label_307d10;
        }
    }
    ctx->pc = 0x307CA4u;
label_307ca4:
    // 0x307ca4: 0xc0c860e  jal         func_321838
    ctx->pc = 0x307CA4u;
    SET_GPR_U32(ctx, 31, 0x307CACu);
    ctx->pc = 0x321838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321838u, 0x307CA4u, 0x307CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307CACu;
label_307cac:
    // 0x307cac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x307cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307cb0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x307CB0u;
    {
        const bool branch_taken_0x307cb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x307CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307CB0u;
        // 0x307cb4: 0x27c6ffff  addiu       $a2, $fp, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307cb0) {
            ctx->pc = 0x307CC8u;
            goto label_307cc8;
        }
    }
    ctx->pc = 0x307CB8u;
    // 0x307cb8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x307cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x307cbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307cc0: 0xc0c89c2  jal         func_322708
    ctx->pc = 0x307CC0u;
    SET_GPR_U32(ctx, 31, 0x307CC8u);
    ctx->pc = 0x307CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307CC0u;
    // 0x307cc4: 0x24073a98  addiu       $a3, $zero, 0x3A98 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322708u, 0x307CC0u, 0x307CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307CC8u;
label_307cc8:
    // 0x307cc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x307cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_307ccc:
    // 0x307ccc: 0xc0c1ad4  jal         func_306B50
    ctx->pc = 0x307CCCu;
    SET_GPR_U32(ctx, 31, 0x307CD4u);
    ctx->pc = 0x307CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307CCCu;
    // 0x307cd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306B50u, 0x307CCCu, 0x307CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307CD4u;
label_307cd4:
    // 0x307cd4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x307CD4u;
    {
        const bool branch_taken_0x307cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307CD4u;
        // 0x307cd8: 0x7bb001d0  lq          $s0, 0x1D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307cd4) {
            ctx->pc = 0x307D10u;
            goto label_307d10;
        }
    }
    ctx->pc = 0x307CDCu;
label_307cdc:
    // 0x307cdc: 0xc0c860e  jal         func_321838
    ctx->pc = 0x307CDCu;
    SET_GPR_U32(ctx, 31, 0x307CE4u);
    ctx->pc = 0x321838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321838u, 0x307CDCu, 0x307CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307CE4u;
label_307ce4:
    // 0x307ce4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x307ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307ce8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x307CE8u;
    {
        const bool branch_taken_0x307ce8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x307CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307CE8u;
        // 0x307cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307ce8) {
            ctx->pc = 0x307D00u;
            goto label_307d00;
        }
    }
    ctx->pc = 0x307CF0u;
    // 0x307cf0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x307cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x307cf4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x307cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x307cf8: 0xc0c86b6  jal         func_321AD8
    ctx->pc = 0x307CF8u;
    SET_GPR_U32(ctx, 31, 0x307D00u);
    ctx->pc = 0x307CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307CF8u;
    // 0x307cfc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x321AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321AD8u, 0x307CF8u, 0x307D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307D00u;
label_307d00:
    // 0x307d00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x307d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307d04: 0xc0c1ad4  jal         func_306B50
    ctx->pc = 0x307D04u;
    SET_GPR_U32(ctx, 31, 0x307D0Cu);
    ctx->pc = 0x307D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307D04u;
    // 0x307d08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306B50u, 0x307D04u, 0x307D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307D0Cu;
label_307d0c:
    // 0x307d0c: 0x7bb001d0  lq          $s0, 0x1D0($sp)
    ctx->pc = 0x307d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_307d10:
    // 0x307d10: 0x7bb101c0  lq          $s1, 0x1C0($sp)
    ctx->pc = 0x307d10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x307d14: 0x7bb201b0  lq          $s2, 0x1B0($sp)
    ctx->pc = 0x307d14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x307d18: 0x7bb301a0  lq          $s3, 0x1A0($sp)
    ctx->pc = 0x307d18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x307d1c: 0x7bb40190  lq          $s4, 0x190($sp)
    ctx->pc = 0x307d1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x307d20: 0x7bb50180  lq          $s5, 0x180($sp)
    ctx->pc = 0x307d20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x307d24: 0x7bb60170  lq          $s6, 0x170($sp)
    ctx->pc = 0x307d24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x307d28: 0x7bb70160  lq          $s7, 0x160($sp)
    ctx->pc = 0x307d28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x307d2c: 0x7bbe0150  lq          $fp, 0x150($sp)
    ctx->pc = 0x307d2cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x307d30: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x307d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x307d34: 0x3e00008  jr          $ra
    ctx->pc = 0x307D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307D34u;
        // 0x307d38: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307D3Cu;
    // 0x307d3c: 0x0  nop
    ctx->pc = 0x307d3cu;
    // NOP
    ctx->pc = 0x307d40u;
}
