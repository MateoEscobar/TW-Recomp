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

// Function: sub_0032ED50
// Address: 0x32ed50 - 0x32eea0
void sub_0032ED50_0x32ed50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032ED50_0x32ed50");
#endif

    switch (ctx->pc) {
        case 0x32ed88u: goto label_32ed88;
        case 0x32eda0u: goto label_32eda0;
        case 0x32eda8u: goto label_32eda8;
        case 0x32edb8u: goto label_32edb8;
        case 0x32edc0u: goto label_32edc0;
        case 0x32edd0u: goto label_32edd0;
        case 0x32eddcu: goto label_32eddc;
        case 0x32ee00u: goto label_32ee00;
        case 0x32ee10u: goto label_32ee10;
        case 0x32ee18u: goto label_32ee18;
        case 0x32ee28u: goto label_32ee28;
        case 0x32ee30u: goto label_32ee30;
        case 0x32ee38u: goto label_32ee38;
        case 0x32ee4cu: goto label_32ee4c;
        case 0x32ee58u: goto label_32ee58;
        case 0x32ee68u: goto label_32ee68;
        case 0x32ee7cu: goto label_32ee7c;
        default: break;
    }

    ctx->pc = 0x32ed50u;

    // 0x32ed50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x32ed50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x32ed54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32ed54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32ed58: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x32ed58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x32ed5c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x32ed5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x32ed60: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x32ed60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x32ed64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32ed64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ed68: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x32ed68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x32ed6c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x32ed6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ed70: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32ed70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32ed74: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x32ed74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x32ed78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32ed78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ed7c: 0x8e510028  lw          $s1, 0x28($s2)
    ctx->pc = 0x32ed7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x32ed80: 0xc0cbb40  jal         func_32ED00
    ctx->pc = 0x32ED80u;
    SET_GPR_U32(ctx, 31, 0x32ED88u);
    ctx->pc = 0x32ED84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ED80u;
    // 0x32ed84: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32ED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ED00u, 0x32ED80u, 0x32ED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ED88u;
label_32ed88:
    // 0x32ed88: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x32ed88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x32ed8c: 0x24020105  addiu       $v0, $zero, 0x105
    ctx->pc = 0x32ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x32ed90: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x32ED90u;
    {
        const bool branch_taken_0x32ed90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ED90u;
        // 0x32ed94: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ed90) {
            ctx->pc = 0x32EDECu;
            goto label_32edec;
        }
    }
    ctx->pc = 0x32ED98u;
    // 0x32ed98: 0x24130105  addiu       $s3, $zero, 0x105
    ctx->pc = 0x32ed98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x32ed9c: 0x0  nop
    ctx->pc = 0x32ed9cu;
    // NOP
label_32eda0:
    // 0x32eda0: 0xc0c997c  jal         func_3265F0
    ctx->pc = 0x32EDA0u;
    SET_GPR_U32(ctx, 31, 0x32EDA8u);
    ctx->pc = 0x32EDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EDA0u;
    // 0x32eda4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3265F0u, 0x32EDA0u, 0x32EDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EDA8u;
label_32eda8:
    // 0x32eda8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x32eda8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32edac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32edacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32edb0: 0xc0c9ba2  jal         func_326E88
    ctx->pc = 0x32EDB0u;
    SET_GPR_U32(ctx, 31, 0x32EDB8u);
    ctx->pc = 0x32EDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EDB0u;
    // 0x32edb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326E88u, 0x32EDB0u, 0x32EDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EDB8u;
label_32edb8:
    // 0x32edb8: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x32EDB8u;
    SET_GPR_U32(ctx, 31, 0x32EDC0u);
    ctx->pc = 0x32EDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EDB8u;
    // 0x32edbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x32EDB8u, 0x32EDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EDC0u;
label_32edc0:
    // 0x32edc0: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x32edc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32edc4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x32edc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32edc8: 0xc0c9b72  jal         func_326DC8
    ctx->pc = 0x32EDC8u;
    SET_GPR_U32(ctx, 31, 0x32EDD0u);
    ctx->pc = 0x32EDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EDC8u;
    // 0x32edcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326DC8u, 0x32EDC8u, 0x32EDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EDD0u;
label_32edd0:
    // 0x32edd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32edd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32edd4: 0xc0cbb40  jal         func_32ED00
    ctx->pc = 0x32EDD4u;
    SET_GPR_U32(ctx, 31, 0x32EDDCu);
    ctx->pc = 0x32EDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EDD4u;
    // 0x32edd8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32ED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ED00u, 0x32EDD4u, 0x32EDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EDDCu;
label_32eddc:
    // 0x32eddc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x32eddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x32ede0: 0x1053ffef  beq         $v0, $s3, . + 4 + (-0x11 << 2)
    ctx->pc = 0x32EDE0u;
    {
        const bool branch_taken_0x32ede0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x32ede0) {
            ctx->pc = 0x32EDA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32eda0;
        }
    }
    ctx->pc = 0x32EDE8u;
    // 0x32ede8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x32ede8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_32edec:
    // 0x32edec: 0x24020104  addiu       $v0, $zero, 0x104
    ctx->pc = 0x32edecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x32edf0: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x32EDF0u;
    {
        const bool branch_taken_0x32edf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EDF0u;
        // 0x32edf4: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32edf0) {
            ctx->pc = 0x32EE40u;
            goto label_32ee40;
        }
    }
    ctx->pc = 0x32EDF8u;
    // 0x32edf8: 0xc0c997c  jal         func_3265F0
    ctx->pc = 0x32EDF8u;
    SET_GPR_U32(ctx, 31, 0x32EE00u);
    ctx->pc = 0x32EDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EDF8u;
    // 0x32edfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3265F0u, 0x32EDF8u, 0x32EE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EE00u;
label_32ee00:
    // 0x32ee00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32ee00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ee04: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x32ee04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ee08: 0xc0c9ba2  jal         func_326E88
    ctx->pc = 0x32EE08u;
    SET_GPR_U32(ctx, 31, 0x32EE10u);
    ctx->pc = 0x32EE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EE08u;
    // 0x32ee0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326E88u, 0x32EE08u, 0x32EE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EE10u;
label_32ee10:
    // 0x32ee10: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x32EE10u;
    SET_GPR_U32(ctx, 31, 0x32EE18u);
    ctx->pc = 0x32EE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EE10u;
    // 0x32ee14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x32EE10u, 0x32EE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EE18u;
label_32ee18:
    // 0x32ee18: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x32ee18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32ee1c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x32ee1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ee20: 0xc0c9b72  jal         func_326DC8
    ctx->pc = 0x32EE20u;
    SET_GPR_U32(ctx, 31, 0x32EE28u);
    ctx->pc = 0x32EE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EE20u;
    // 0x32ee24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326DC8u, 0x32EE20u, 0x32EE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EE28u;
label_32ee28:
    // 0x32ee28: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32EE28u;
    SET_GPR_U32(ctx, 31, 0x32EE30u);
    ctx->pc = 0x32EE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EE28u;
    // 0x32ee2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32EE28u, 0x32EE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EE30u;
label_32ee30:
    // 0x32ee30: 0xc0cb99c  jal         func_32E670
    ctx->pc = 0x32EE30u;
    SET_GPR_U32(ctx, 31, 0x32EE38u);
    ctx->pc = 0x32EE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EE30u;
    // 0x32ee34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E670u, 0x32EE30u, 0x32EE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EE38u;
label_32ee38:
    // 0x32ee38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32EE38u;
    {
        const bool branch_taken_0x32ee38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EE38u;
        // 0x32ee3c: 0x8fb00010  lw          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ee38) {
            ctx->pc = 0x32EE50u;
            goto label_32ee50;
        }
    }
    ctx->pc = 0x32EE40u;
label_32ee40:
    // 0x32ee40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32ee40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ee44: 0xc0c9ba2  jal         func_326E88
    ctx->pc = 0x32EE44u;
    SET_GPR_U32(ctx, 31, 0x32EE4Cu);
    ctx->pc = 0x32EE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EE44u;
    // 0x32ee48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326E88u, 0x32EE44u, 0x32EE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EE4Cu;
label_32ee4c:
    // 0x32ee4c: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x32ee4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_32ee50:
    // 0x32ee50: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x32EE50u;
    SET_GPR_U32(ctx, 31, 0x32EE58u);
    ctx->pc = 0x32EE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EE50u;
    // 0x32ee54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x32EE50u, 0x32EE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EE58u;
label_32ee58:
    // 0x32ee58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32ee58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ee5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32ee5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ee60: 0xc0c9b72  jal         func_326DC8
    ctx->pc = 0x32EE60u;
    SET_GPR_U32(ctx, 31, 0x32EE68u);
    ctx->pc = 0x32EE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EE60u;
    // 0x32ee64: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326DC8u, 0x32EE60u, 0x32EE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EE68u;
label_32ee68:
    // 0x32ee68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32ee68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ee6c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x32ee6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ee70: 0x24050106  addiu       $a1, $zero, 0x106
    ctx->pc = 0x32ee70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    // 0x32ee74: 0xc0cb358  jal         func_32CD60
    ctx->pc = 0x32EE74u;
    SET_GPR_U32(ctx, 31, 0x32EE7Cu);
    ctx->pc = 0x32EE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EE74u;
    // 0x32ee78: 0x24060109  addiu       $a2, $zero, 0x109 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CD60u, 0x32EE74u, 0x32EE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EE7Cu;
label_32ee7c:
    // 0x32ee7c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x32ee7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32ee80: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x32ee80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32ee84: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x32ee84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32ee88: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x32ee88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32ee8c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x32ee8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32ee90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32ee90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32ee94: 0x3e00008  jr          $ra
    ctx->pc = 0x32EE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32EE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EE94u;
        // 0x32ee98: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EE9Cu;
    // 0x32ee9c: 0x0  nop
    ctx->pc = 0x32ee9cu;
    // NOP
    ctx->pc = 0x32eea0u;
}
