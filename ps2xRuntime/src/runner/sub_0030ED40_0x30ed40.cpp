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

// Function: sub_0030ED40
// Address: 0x30ed40 - 0x30eec0
void sub_0030ED40_0x30ed40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030ED40_0x30ed40");
#endif

    switch (ctx->pc) {
        case 0x30ed80u: goto label_30ed80;
        case 0x30ed90u: goto label_30ed90;
        case 0x30ed98u: goto label_30ed98;
        case 0x30eda0u: goto label_30eda0;
        case 0x30edccu: goto label_30edcc;
        case 0x30eddcu: goto label_30eddc;
        case 0x30edecu: goto label_30edec;
        case 0x30edfcu: goto label_30edfc;
        case 0x30ee18u: goto label_30ee18;
        case 0x30ee4cu: goto label_30ee4c;
        case 0x30ee60u: goto label_30ee60;
        case 0x30ee7cu: goto label_30ee7c;
        case 0x30ee88u: goto label_30ee88;
        default: break;
    }

    ctx->pc = 0x30ed40u;

    // 0x30ed40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x30ed40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x30ed44: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x30ed44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x30ed48: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x30ed48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x30ed4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30ed4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ed50: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x30ed50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x30ed54: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x30ed54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x30ed58: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x30ed58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x30ed5c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x30ed5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x30ed60: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x30ed60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x30ed64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30ed64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30ed68: 0x92420054  lbu         $v0, 0x54($s2)
    ctx->pc = 0x30ed68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x30ed6c: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x30ED6Cu;
    {
        const bool branch_taken_0x30ed6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ED6Cu;
        // 0x30ed70: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ed6c) {
            ctx->pc = 0x30EE98u;
            goto label_30ee98;
        }
    }
    ctx->pc = 0x30ED74u;
    // 0x30ed74: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x30ed74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x30ed78: 0xc05959e  jal         func_165678
    ctx->pc = 0x30ED78u;
    SET_GPR_U32(ctx, 31, 0x30ED80u);
    ctx->pc = 0x30ED7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ED78u;
    // 0x30ed7c: 0x3c16006f  lui         $s6, 0x6F (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)111 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x30ED78u, 0x30ED80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ED80u;
label_30ed80:
    // 0x30ed80: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x30ed80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ed84: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x30ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x30ed88: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x30ed88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x30ed8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30ed8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30ed90:
    // 0x30ed90: 0xc137826  jal         func_4DE098
    ctx->pc = 0x30ED90u;
    SET_GPR_U32(ctx, 31, 0x30ED98u);
    ctx->pc = 0x30ED94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ED90u;
    // 0x30ed94: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30ED90u, 0x30ED98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ED98u;
label_30ed98:
    // 0x30ed98: 0xc0e409a  jal         func_390268
    ctx->pc = 0x30ED98u;
    SET_GPR_U32(ctx, 31, 0x30EDA0u);
    ctx->pc = 0x30ED9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ED98u;
    // 0x30ed9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30ED98u, 0x30EDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EDA0u;
label_30eda0:
    // 0x30eda0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30eda0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30eda4: 0x52000039  beql        $s0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x30EDA4u;
    {
        const bool branch_taken_0x30eda4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30eda4) {
            ctx->pc = 0x30EDA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EDA4u;
            // 0x30eda8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30EE8Cu;
            goto label_30ee8c;
        }
    }
    ctx->pc = 0x30EDACu;
    // 0x30edac: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x30edacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x30edb0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x30edb0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x30edb4: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x30EDB4u;
    {
        const bool branch_taken_0x30edb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EDB4u;
        // 0x30edb8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30edb4) {
            ctx->pc = 0x30EE88u;
            goto label_30ee88;
        }
    }
    ctx->pc = 0x30EDBCu;
    // 0x30edbc: 0x56150033  bnel        $s0, $s5, . + 4 + (0x33 << 2)
    ctx->pc = 0x30EDBCu;
    {
        const bool branch_taken_0x30edbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        if (branch_taken_0x30edbc) {
            ctx->pc = 0x30EDC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EDBCu;
            // 0x30edc0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30EE8Cu;
            goto label_30ee8c;
        }
    }
    ctx->pc = 0x30EDC4u;
    // 0x30edc4: 0xc08a08a  jal         func_228228
    ctx->pc = 0x30EDC4u;
    SET_GPR_U32(ctx, 31, 0x30EDCCu);
    ctx->pc = 0x30EDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EDC4u;
    // 0x30edc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x30EDC4u, 0x30EDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EDCCu;
label_30edcc:
    // 0x30edcc: 0x5051002f  beql        $v0, $s1, . + 4 + (0x2F << 2)
    ctx->pc = 0x30EDCCu;
    {
        const bool branch_taken_0x30edcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x30edcc) {
            ctx->pc = 0x30EDD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EDCCu;
            // 0x30edd0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30EE8Cu;
            goto label_30ee8c;
        }
    }
    ctx->pc = 0x30EDD4u;
    // 0x30edd4: 0xc08a096  jal         func_228258
    ctx->pc = 0x30EDD4u;
    SET_GPR_U32(ctx, 31, 0x30EDDCu);
    ctx->pc = 0x30EDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EDD4u;
    // 0x30edd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x30EDD4u, 0x30EDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EDDCu;
label_30eddc:
    // 0x30eddc: 0x5051002b  beql        $v0, $s1, . + 4 + (0x2B << 2)
    ctx->pc = 0x30EDDCu;
    {
        const bool branch_taken_0x30eddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x30eddc) {
            ctx->pc = 0x30EDE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EDDCu;
            // 0x30ede0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30EE8Cu;
            goto label_30ee8c;
        }
    }
    ctx->pc = 0x30EDE4u;
    // 0x30ede4: 0xc089018  jal         func_224060
    ctx->pc = 0x30EDE4u;
    SET_GPR_U32(ctx, 31, 0x30EDECu);
    ctx->pc = 0x30EDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EDE4u;
    // 0x30ede8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224060u, 0x30EDE4u, 0x30EDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EDECu;
label_30edec:
    // 0x30edec: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x30EDECu;
    {
        const bool branch_taken_0x30edec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30edec) {
            ctx->pc = 0x30EDF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EDECu;
            // 0x30edf0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30EE8Cu;
            goto label_30ee8c;
        }
    }
    ctx->pc = 0x30EDF4u;
    // 0x30edf4: 0xc08c716  jal         func_231C58
    ctx->pc = 0x30EDF4u;
    SET_GPR_U32(ctx, 31, 0x30EDFCu);
    ctx->pc = 0x30EDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EDF4u;
    // 0x30edf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C58u, 0x30EDF4u, 0x30EDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EDFCu;
label_30edfc:
    // 0x30edfc: 0x92420050  lbu         $v0, 0x50($s2)
    ctx->pc = 0x30edfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x30ee00: 0x24050253  addiu       $a1, $zero, 0x253
    ctx->pc = 0x30ee00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
    // 0x30ee04: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x30ee04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x30ee08: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x30ee08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30ee0c: 0x248401b0  addiu       $a0, $a0, 0x1B0
    ctx->pc = 0x30ee0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x30ee10: 0xc058ff0  jal         func_163FC0
    ctx->pc = 0x30EE10u;
    SET_GPR_U32(ctx, 31, 0x30EE18u);
    ctx->pc = 0x30EE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EE10u;
    // 0x30ee14: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FC0u, 0x30EE10u, 0x30EE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EE18u;
label_30ee18:
    // 0x30ee18: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x30EE18u;
    {
        const bool branch_taken_0x30ee18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EE18u;
        // 0x30ee1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ee18) {
            ctx->pc = 0x30EE88u;
            goto label_30ee88;
        }
    }
    ctx->pc = 0x30EE20u;
    // 0x30ee20: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x30ee20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x30ee24: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30ee24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30ee28: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x30ee28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x30ee2c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x30ee2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x30ee30: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x30ee30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30ee34: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x30ee34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ee38: 0x24050253  addiu       $a1, $zero, 0x253
    ctx->pc = 0x30ee38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
    // 0x30ee3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30ee3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ee40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30ee40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ee44: 0xc0968f8  jal         func_25A3E0
    ctx->pc = 0x30EE44u;
    SET_GPR_U32(ctx, 31, 0x30EE4Cu);
    ctx->pc = 0x30EE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EE44u;
    // 0x30ee48: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3E0u, 0x30EE44u, 0x30EE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EE4Cu;
label_30ee4c:
    // 0x30ee4c: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x30ee4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x30ee50: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x30EE50u;
    {
        const bool branch_taken_0x30ee50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ee50) {
            ctx->pc = 0x30EE54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EE50u;
            // 0x30ee54: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30EE8Cu;
            goto label_30ee8c;
        }
    }
    ctx->pc = 0x30EE58u;
    // 0x30ee58: 0xc05d462  jal         func_175188
    ctx->pc = 0x30EE58u;
    SET_GPR_U32(ctx, 31, 0x30EE60u);
    ctx->pc = 0x175188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175188u, 0x30EE58u, 0x30EE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EE60u;
label_30ee60:
    // 0x30ee60: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x30ee60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x30ee64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30ee64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30ee68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30ee68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ee6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30ee6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30ee70: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x30ee70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30ee74: 0xc0cd508  jal         func_335420
    ctx->pc = 0x30EE74u;
    SET_GPR_U32(ctx, 31, 0x30EE7Cu);
    ctx->pc = 0x30EE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EE74u;
    // 0x30ee78: 0x26c4b8a0  addiu       $a0, $s6, -0x4760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x30EE74u, 0x30EE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EE7Cu;
label_30ee7c:
    // 0x30ee7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30ee7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ee80: 0xc0420f4  jal         func_1083D0
    ctx->pc = 0x30EE80u;
    SET_GPR_U32(ctx, 31, 0x30EE88u);
    ctx->pc = 0x30EE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EE80u;
    // 0x30ee84: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1083D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1083D0u, 0x30EE80u, 0x30EE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EE88u;
label_30ee88:
    // 0x30ee88: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x30ee88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_30ee8c:
    // 0x30ee8c: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x30ee8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x30ee90: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x30EE90u;
    {
        const bool branch_taken_0x30ee90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EE90u;
        // 0x30ee94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ee90) {
            ctx->pc = 0x30ED90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ed90;
        }
    }
    ctx->pc = 0x30EE98u;
label_30ee98:
    // 0x30ee98: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x30ee98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30ee9c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x30ee9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30eea0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x30eea0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30eea4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x30eea4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30eea8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x30eea8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30eeac: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x30eeacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30eeb0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x30eeb0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30eeb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30eeb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30eeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x30EEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30EEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EEB8u;
        // 0x30eebc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30EEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30EEC0u;
}
