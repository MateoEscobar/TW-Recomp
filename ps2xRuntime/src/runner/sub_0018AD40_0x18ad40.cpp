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

// Function: sub_0018AD40
// Address: 0x18ad40 - 0x18aec0
void sub_0018AD40_0x18ad40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018AD40_0x18ad40");
#endif

    switch (ctx->pc) {
        case 0x18ad80u: goto label_18ad80;
        case 0x18ad88u: goto label_18ad88;
        case 0x18ad90u: goto label_18ad90;
        case 0x18adb0u: goto label_18adb0;
        case 0x18addcu: goto label_18addc;
        case 0x18ae10u: goto label_18ae10;
        case 0x18ae68u: goto label_18ae68;
        case 0x18ae80u: goto label_18ae80;
        case 0x18ae94u: goto label_18ae94;
        default: break;
    }

    ctx->pc = 0x18ad40u;

    // 0x18ad40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18ad40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18ad44: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x18ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x18ad48: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x18ad48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x18ad4c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x18ad4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x18ad50: 0x8c50489c  lw          $s0, 0x489C($v0)
    ctx->pc = 0x18ad50u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x51489Cu));
    // 0x18ad54: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18ad54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad58: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x18ad58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x18ad5c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x18ad5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x18ad60: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18ad60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad64: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x18ad64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x18ad68: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x18ad68u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad6c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x18ad6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x18ad70: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x18ad70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x18ad74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18ad74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18ad78: 0xc136ad6  jal         func_4DAB58
    ctx->pc = 0x18AD78u;
    SET_GPR_U32(ctx, 31, 0x18AD80u);
    ctx->pc = 0x18AD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AD78u;
    // 0x18ad7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x18AD78u, 0x18AD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AD80u;
label_18ad80:
    // 0x18ad80: 0xc136ad4  jal         func_4DAB50
    ctx->pc = 0x18AD80u;
    SET_GPR_U32(ctx, 31, 0x18AD88u);
    ctx->pc = 0x18AD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AD80u;
    // 0x18ad84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x18AD80u, 0x18AD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AD88u;
label_18ad88:
    // 0x18ad88: 0xc08a200  jal         func_228800
    ctx->pc = 0x18AD88u;
    SET_GPR_U32(ctx, 31, 0x18AD90u);
    ctx->pc = 0x18AD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AD88u;
    // 0x18ad8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x18AD88u, 0x18AD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AD90u;
label_18ad90:
    // 0x18ad90: 0x12c0001a  beqz        $s6, . + 4 + (0x1A << 2)
    ctx->pc = 0x18AD90u;
    {
        const bool branch_taken_0x18ad90 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AD90u;
        // 0x18ad94: 0x94550112  lhu         $s5, 0x112($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 274)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ad90) {
            ctx->pc = 0x18ADFCu;
            goto label_18adfc;
        }
    }
    ctx->pc = 0x18AD98u;
    // 0x18ad98: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x18ad98u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x18ad9c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x18ad9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ada0: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x18ada0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x18ada4: 0x267100b8  addiu       $s1, $s3, 0xB8
    ctx->pc = 0x18ada4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 184));
    // 0x18ada8: 0x267000b4  addiu       $s0, $s3, 0xB4
    ctx->pc = 0x18ada8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 180));
    // 0x18adac: 0x0  nop
    ctx->pc = 0x18adacu;
    // NOP
label_18adb0:
    // 0x18adb0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18adb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18adb4: 0x5455000b  bnel        $v0, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x18ADB4u;
    {
        const bool branch_taken_0x18adb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x18adb4) {
            ctx->pc = 0x18ADB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18ADB4u;
            // 0x18adb8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18ADE4u;
            goto label_18ade4;
        }
    }
    ctx->pc = 0x18ADBCu;
    // 0x18adbc: 0x52c00009  beql        $s6, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x18ADBCu;
    {
        const bool branch_taken_0x18adbc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x18adbc) {
            ctx->pc = 0x18ADC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18ADBCu;
            // 0x18adc0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18ADE4u;
            goto label_18ade4;
        }
    }
    ctx->pc = 0x18ADC4u;
    // 0x18adc4: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x18adc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x18adc8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x18adc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18adcc: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18ADCCu;
    {
        const bool branch_taken_0x18adcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x18adcc) {
            ctx->pc = 0x18ADD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18ADCCu;
            // 0x18add0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18ADE4u;
            goto label_18ade4;
        }
    }
    ctx->pc = 0x18ADD4u;
    // 0x18add4: 0xc05df80  jal         func_177E00
    ctx->pc = 0x18ADD4u;
    SET_GPR_U32(ctx, 31, 0x18ADDCu);
    ctx->pc = 0x18ADD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ADD4u;
    // 0x18add8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177E00u, 0x18ADD4u, 0x18ADDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ADDCu;
label_18addc:
    // 0x18addc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x18addcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x18ade0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x18ade0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_18ade4:
    // 0x18ade4: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x18ade4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x18ade8: 0x2e820020  sltiu       $v0, $s4, 0x20
    ctx->pc = 0x18ade8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x18adec: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x18ADECu;
    {
        const bool branch_taken_0x18adec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ADECu;
        // 0x18adf0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18adec) {
            ctx->pc = 0x18ADB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18adb0;
        }
    }
    ctx->pc = 0x18ADF4u;
    // 0x18adf4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x18ADF4u;
    {
        const bool branch_taken_0x18adf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ADF4u;
        // 0x18adf8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18adf4) {
            ctx->pc = 0x18AE9Cu;
            goto label_18ae9c;
        }
    }
    ctx->pc = 0x18ADFCu;
label_18adfc:
    // 0x18adfc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x18adfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x18ae00: 0x266600b4  addiu       $a2, $s3, 0xB4
    ctx->pc = 0x18ae00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 180));
    // 0x18ae04: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x18ae04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x18ae08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18ae08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ae0c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x18ae0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18ae10:
    // 0x18ae10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18ae14: 0x10550020  beq         $v0, $s5, . + 4 + (0x20 << 2)
    ctx->pc = 0x18AE14u;
    {
        const bool branch_taken_0x18ae14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x18AE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE14u;
        // 0x18ae18: 0x21027  nor         $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ae14) {
            ctx->pc = 0x18AE98u;
            goto label_18ae98;
        }
    }
    ctx->pc = 0x18AE1Cu;
    // 0x18ae1c: 0xa2180a  movz        $v1, $a1, $v0
    ctx->pc = 0x18ae1cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x18ae20: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18ae20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18ae24: 0x2ca20020  sltiu       $v0, $a1, 0x20
    ctx->pc = 0x18ae24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x18ae28: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18AE28u;
    {
        const bool branch_taken_0x18ae28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE28u;
        // 0x18ae2c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ae28) {
            ctx->pc = 0x18AE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ae10;
        }
    }
    ctx->pc = 0x18AE30u;
    // 0x18ae30: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x18ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x18ae34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18ae34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18ae38: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x18AE38u;
    {
        const bool branch_taken_0x18ae38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18AE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE38u;
        // 0x18ae3c: 0x310c0  sll         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ae38) {
            ctx->pc = 0x18AE98u;
            goto label_18ae98;
        }
    }
    ctx->pc = 0x18AE40u;
    // 0x18ae40: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x18ae40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ae44: 0x266300b8  addiu       $v1, $s3, 0xB8
    ctx->pc = 0x18ae44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 184));
    // 0x18ae48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18ae48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ae4c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x18ae4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18ae50: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x18ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x18ae54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18ae54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ae58: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x18ae58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
    // 0x18ae5c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x18ae5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x18ae60: 0xc05e036  jal         func_1780D8
    ctx->pc = 0x18AE60u;
    SET_GPR_U32(ctx, 31, 0x18AE68u);
    ctx->pc = 0x18AE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AE60u;
    // 0x18ae64: 0xae6301b4  sw          $v1, 0x1B4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 436), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1780D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1780D8u, 0x18AE60u, 0x18AE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AE68u;
label_18ae68:
    // 0x18ae68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18ae68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ae6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18ae6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ae70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18ae70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ae74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18ae74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ae78: 0xc05dd34  jal         func_1774D0
    ctx->pc = 0x18AE78u;
    SET_GPR_U32(ctx, 31, 0x18AE80u);
    ctx->pc = 0x18AE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AE78u;
    // 0x18ae7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1774D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1774D0u, 0x18AE78u, 0x18AE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AE80u;
label_18ae80:
    // 0x18ae80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18AE80u;
    {
        const bool branch_taken_0x18ae80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE80u;
        // 0x18ae84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ae80) {
            ctx->pc = 0x18AE98u;
            goto label_18ae98;
        }
    }
    ctx->pc = 0x18AE88u;
    // 0x18ae88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18ae88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ae8c: 0xc05dee0  jal         func_177B80
    ctx->pc = 0x18AE8Cu;
    SET_GPR_U32(ctx, 31, 0x18AE94u);
    ctx->pc = 0x18AE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AE8Cu;
    // 0x18ae90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B80u, 0x18AE8Cu, 0x18AE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AE94u;
label_18ae94:
    // 0x18ae94: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x18ae94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_18ae98:
    // 0x18ae98: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x18ae98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_18ae9c:
    // 0x18ae9c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x18ae9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18aea0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x18aea0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18aea4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x18aea4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18aea8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x18aea8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18aeac: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x18aeacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18aeb0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x18aeb0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18aeb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18aeb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18aeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x18AEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AEB8u;
        // 0x18aebc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AEC0u;
}
