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

// Function: sub_0040AD58
// Address: 0x40ad58 - 0x40aef0
void sub_0040AD58_0x40ad58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040AD58_0x40ad58");
#endif

    switch (ctx->pc) {
        case 0x40ada8u: goto label_40ada8;
        case 0x40adb0u: goto label_40adb0;
        case 0x40adbcu: goto label_40adbc;
        case 0x40adc8u: goto label_40adc8;
        case 0x40ade0u: goto label_40ade0;
        case 0x40adf0u: goto label_40adf0;
        case 0x40ae04u: goto label_40ae04;
        case 0x40ae10u: goto label_40ae10;
        case 0x40ae1cu: goto label_40ae1c;
        case 0x40ae2cu: goto label_40ae2c;
        case 0x40ae3cu: goto label_40ae3c;
        case 0x40ae48u: goto label_40ae48;
        case 0x40ae5cu: goto label_40ae5c;
        case 0x40ae68u: goto label_40ae68;
        case 0x40ae78u: goto label_40ae78;
        case 0x40ae88u: goto label_40ae88;
        case 0x40ae94u: goto label_40ae94;
        case 0x40ae9cu: goto label_40ae9c;
        case 0x40aeacu: goto label_40aeac;
        case 0x40aec0u: goto label_40aec0;
        default: break;
    }

    ctx->pc = 0x40ad58u;

    // 0x40ad58: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x40ad58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x40ad5c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x40ad5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x40ad60: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x40ad60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x40ad64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40ad64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ad68: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x40ad68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x40ad6c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x40ad6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ad70: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x40ad70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x40ad74: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x40ad74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ad78: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x40ad78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x40ad7c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x40ad7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ad80: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x40ad80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x40ad84: 0x3c150059  lui         $s5, 0x59
    ctx->pc = 0x40ad84u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)89 << 16));
    // 0x40ad88: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x40ad88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x40ad8c: 0x3c160059  lui         $s6, 0x59
    ctx->pc = 0x40ad8cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)89 << 16));
    // 0x40ad90: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x40ad90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x40ad94: 0x3c170059  lui         $s7, 0x59
    ctx->pc = 0x40ad94u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)89 << 16));
    // 0x40ad98: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x40ad98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x40ad9c: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x40ad9cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40ada0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x40ADA0u;
    {
        const bool branch_taken_0x40ada0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ADA0u;
        // 0x40ada4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ada0) {
            ctx->pc = 0x40AEA0u;
            goto label_40aea0;
        }
    }
    ctx->pc = 0x40ADA8u;
label_40ada8:
    // 0x40ada8: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40ADA8u;
    SET_GPR_U32(ctx, 31, 0x40ADB0u);
    ctx->pc = 0x40ADACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40ADA8u;
    // 0x40adac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40ADA8u, 0x40ADB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40ADB0u;
label_40adb0:
    // 0x40adb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40adb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40adb4: 0xc0c8ef2  jal         func_323BC8
    ctx->pc = 0x40ADB4u;
    SET_GPR_U32(ctx, 31, 0x40ADBCu);
    ctx->pc = 0x40ADB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40ADB4u;
    // 0x40adb8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323BC8u, 0x40ADB4u, 0x40ADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40ADBCu;
label_40adbc:
    // 0x40adbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40adbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40adc0: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x40ADC0u;
    SET_GPR_U32(ctx, 31, 0x40ADC8u);
    ctx->pc = 0x40ADC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40ADC0u;
    // 0x40adc4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x40ADC0u, 0x40ADC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40ADC8u;
label_40adc8:
    // 0x40adc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x40adc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40adcc: 0x563e003d  bnel        $s1, $fp, . + 4 + (0x3D << 2)
    ctx->pc = 0x40ADCCu;
    {
        const bool branch_taken_0x40adcc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 30));
        if (branch_taken_0x40adcc) {
            ctx->pc = 0x40ADD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40ADCCu;
            // 0x40add0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40AEC4u;
            goto label_40aec4;
        }
    }
    ctx->pc = 0x40ADD4u;
    // 0x40add4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40add4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40add8: 0xc0c8d5a  jal         func_323568
    ctx->pc = 0x40ADD8u;
    SET_GPR_U32(ctx, 31, 0x40ADE0u);
    ctx->pc = 0x40ADDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40ADD8u;
    // 0x40addc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323568u, 0x40ADD8u, 0x40ADE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40ADE0u;
label_40ade0:
    // 0x40ade0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x40ADE0u;
    {
        const bool branch_taken_0x40ade0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ADE0u;
        // 0x40ade4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ade0) {
            ctx->pc = 0x40ADFCu;
            goto label_40adfc;
        }
    }
    ctx->pc = 0x40ADE8u;
    // 0x40ade8: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x40ADE8u;
    SET_GPR_U32(ctx, 31, 0x40ADF0u);
    ctx->pc = 0x40ADECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40ADE8u;
    // 0x40adec: 0x26e582f8  addiu       $a1, $s7, -0x7D08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294935288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x40ADE8u, 0x40ADF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40ADF0u;
label_40adf0:
    // 0x40adf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40adf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40adf4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x40ADF4u;
    {
        const bool branch_taken_0x40adf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ADF4u;
        // 0x40adf8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40adf4) {
            ctx->pc = 0x40AE34u;
            goto label_40ae34;
        }
    }
    ctx->pc = 0x40ADFCu;
label_40adfc:
    // 0x40adfc: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x40ADFCu;
    SET_GPR_U32(ctx, 31, 0x40AE04u);
    ctx->pc = 0x40AE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40ADFCu;
    // 0x40ae00: 0x26c582f0  addiu       $a1, $s6, -0x7D10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x40ADFCu, 0x40AE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AE04u;
label_40ae04:
    // 0x40ae04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40ae04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ae08: 0xc0c8ef2  jal         func_323BC8
    ctx->pc = 0x40AE08u;
    SET_GPR_U32(ctx, 31, 0x40AE10u);
    ctx->pc = 0x40AE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AE08u;
    // 0x40ae0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323BC8u, 0x40AE08u, 0x40AE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AE10u;
label_40ae10:
    // 0x40ae10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40ae10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ae14: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x40AE14u;
    SET_GPR_U32(ctx, 31, 0x40AE1Cu);
    ctx->pc = 0x40AE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AE14u;
    // 0x40ae18: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x40AE14u, 0x40AE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AE1Cu;
label_40ae1c:
    // 0x40ae1c: 0x10510018  beq         $v0, $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x40AE1Cu;
    {
        const bool branch_taken_0x40ae1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x40AE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AE1Cu;
        // 0x40ae20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ae1c) {
            ctx->pc = 0x40AE80u;
            goto label_40ae80;
        }
    }
    ctx->pc = 0x40AE24u;
    // 0x40ae24: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40AE24u;
    SET_GPR_U32(ctx, 31, 0x40AE2Cu);
    ctx->pc = 0x40AE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AE24u;
    // 0x40ae28: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40AE24u, 0x40AE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AE2Cu;
label_40ae2c:
    // 0x40ae2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40ae2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ae30: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x40ae30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_40ae34:
    // 0x40ae34: 0xc0c8ef2  jal         func_323BC8
    ctx->pc = 0x40AE34u;
    SET_GPR_U32(ctx, 31, 0x40AE3Cu);
    ctx->pc = 0x323BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323BC8u, 0x40AE34u, 0x40AE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AE3Cu;
label_40ae3c:
    // 0x40ae3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40ae3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ae40: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x40AE40u;
    SET_GPR_U32(ctx, 31, 0x40AE48u);
    ctx->pc = 0x40AE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AE40u;
    // 0x40ae44: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x40AE40u, 0x40AE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AE48u;
label_40ae48:
    // 0x40ae48: 0x1051000d  beq         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x40AE48u;
    {
        const bool branch_taken_0x40ae48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x40AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AE48u;
        // 0x40ae4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ae48) {
            ctx->pc = 0x40AE80u;
            goto label_40ae80;
        }
    }
    ctx->pc = 0x40AE50u;
    // 0x40ae50: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x40ae50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ae54: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40AE54u;
    SET_GPR_U32(ctx, 31, 0x40AE5Cu);
    ctx->pc = 0x40AE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AE54u;
    // 0x40ae58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40AE54u, 0x40AE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AE5Cu;
label_40ae5c:
    // 0x40ae5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x40ae5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ae60: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40AE60u;
    SET_GPR_U32(ctx, 31, 0x40AE68u);
    ctx->pc = 0x40AE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AE60u;
    // 0x40ae64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40AE60u, 0x40AE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AE68u;
label_40ae68:
    // 0x40ae68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40ae68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ae6c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x40ae6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x40ae70: 0xc0ca350  jal         func_328D40
    ctx->pc = 0x40AE70u;
    SET_GPR_U32(ctx, 31, 0x40AE78u);
    ctx->pc = 0x40AE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AE70u;
    // 0x40ae74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328D40u, 0x40AE70u, 0x40AE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AE78u;
label_40ae78:
    // 0x40ae78: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x40AE78u;
    {
        const bool branch_taken_0x40ae78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AE78u;
        // 0x40ae7c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ae78) {
            ctx->pc = 0x40AEC4u;
            goto label_40aec4;
        }
    }
    ctx->pc = 0x40AE80u;
label_40ae80:
    // 0x40ae80: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x40AE80u;
    SET_GPR_U32(ctx, 31, 0x40AE88u);
    ctx->pc = 0x40AE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AE80u;
    // 0x40ae84: 0x26a58308  addiu       $a1, $s5, -0x7CF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294935304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x40AE80u, 0x40AE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AE88u;
label_40ae88:
    // 0x40ae88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x40ae88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ae8c: 0xc0c8ef2  jal         func_323BC8
    ctx->pc = 0x40AE8Cu;
    SET_GPR_U32(ctx, 31, 0x40AE94u);
    ctx->pc = 0x40AE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AE8Cu;
    // 0x40ae90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323BC8u, 0x40AE8Cu, 0x40AE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AE94u;
label_40ae94:
    // 0x40ae94: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x40AE94u;
    SET_GPR_U32(ctx, 31, 0x40AE9Cu);
    ctx->pc = 0x40AE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AE94u;
    // 0x40ae98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x40AE94u, 0x40AE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AE9Cu;
label_40ae9c:
    // 0x40ae9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x40ae9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40aea0:
    // 0x40aea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40aea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40aea4: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x40AEA4u;
    SET_GPR_U32(ctx, 31, 0x40AEACu);
    ctx->pc = 0x40AEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AEA4u;
    // 0x40aea8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x40AEA4u, 0x40AEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AEACu;
label_40aeac:
    // 0x40aeac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x40aeacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x40aeb0: 0x1043ffbd  beq         $v0, $v1, . + 4 + (-0x43 << 2)
    ctx->pc = 0x40AEB0u;
    {
        const bool branch_taken_0x40aeb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x40AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AEB0u;
        // 0x40aeb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40aeb0) {
            ctx->pc = 0x40ADA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40ada8;
        }
    }
    ctx->pc = 0x40AEB8u;
    // 0x40aeb8: 0xc0c8e22  jal         func_323888
    ctx->pc = 0x40AEB8u;
    SET_GPR_U32(ctx, 31, 0x40AEC0u);
    ctx->pc = 0x40AEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AEB8u;
    // 0x40aebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323888u, 0x40AEB8u, 0x40AEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AEC0u;
label_40aec0:
    // 0x40aec0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x40aec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_40aec4:
    // 0x40aec4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x40aec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x40aec8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x40aec8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x40aecc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x40aeccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x40aed0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x40aed0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x40aed4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x40aed4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x40aed8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x40aed8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40aedc: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x40aedcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40aee0: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x40aee0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40aee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40aee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40aee8: 0x3e00008  jr          $ra
    ctx->pc = 0x40AEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AEE8u;
        // 0x40aeec: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40AEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40AEF0u;
}
