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

// Function: sub_002EBE20
// Address: 0x2ebe20 - 0x2ebf98
void sub_002EBE20_0x2ebe20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBE20_0x2ebe20");
#endif

    switch (ctx->pc) {
        case 0x2ebe20u: goto label_2ebe20;
        case 0x2ebe24u: goto label_2ebe24;
        case 0x2ebe28u: goto label_2ebe28;
        case 0x2ebe2cu: goto label_2ebe2c;
        case 0x2ebe30u: goto label_2ebe30;
        case 0x2ebe34u: goto label_2ebe34;
        case 0x2ebe38u: goto label_2ebe38;
        case 0x2ebe3cu: goto label_2ebe3c;
        case 0x2ebe40u: goto label_2ebe40;
        case 0x2ebe44u: goto label_2ebe44;
        case 0x2ebe48u: goto label_2ebe48;
        case 0x2ebe4cu: goto label_2ebe4c;
        case 0x2ebe50u: goto label_2ebe50;
        case 0x2ebe54u: goto label_2ebe54;
        case 0x2ebe58u: goto label_2ebe58;
        case 0x2ebe5cu: goto label_2ebe5c;
        case 0x2ebe60u: goto label_2ebe60;
        case 0x2ebe64u: goto label_2ebe64;
        case 0x2ebe68u: goto label_2ebe68;
        case 0x2ebe6cu: goto label_2ebe6c;
        case 0x2ebe70u: goto label_2ebe70;
        case 0x2ebe74u: goto label_2ebe74;
        case 0x2ebe78u: goto label_2ebe78;
        case 0x2ebe7cu: goto label_2ebe7c;
        case 0x2ebe80u: goto label_2ebe80;
        case 0x2ebe84u: goto label_2ebe84;
        case 0x2ebe88u: goto label_2ebe88;
        case 0x2ebe8cu: goto label_2ebe8c;
        case 0x2ebe90u: goto label_2ebe90;
        case 0x2ebe94u: goto label_2ebe94;
        case 0x2ebe98u: goto label_2ebe98;
        case 0x2ebe9cu: goto label_2ebe9c;
        case 0x2ebea0u: goto label_2ebea0;
        case 0x2ebea4u: goto label_2ebea4;
        case 0x2ebea8u: goto label_2ebea8;
        case 0x2ebeacu: goto label_2ebeac;
        case 0x2ebeb0u: goto label_2ebeb0;
        case 0x2ebeb4u: goto label_2ebeb4;
        case 0x2ebeb8u: goto label_2ebeb8;
        case 0x2ebebcu: goto label_2ebebc;
        case 0x2ebec0u: goto label_2ebec0;
        case 0x2ebec4u: goto label_2ebec4;
        case 0x2ebec8u: goto label_2ebec8;
        case 0x2ebeccu: goto label_2ebecc;
        case 0x2ebed0u: goto label_2ebed0;
        case 0x2ebed4u: goto label_2ebed4;
        case 0x2ebed8u: goto label_2ebed8;
        case 0x2ebedcu: goto label_2ebedc;
        case 0x2ebee0u: goto label_2ebee0;
        case 0x2ebee4u: goto label_2ebee4;
        case 0x2ebee8u: goto label_2ebee8;
        case 0x2ebeecu: goto label_2ebeec;
        case 0x2ebef0u: goto label_2ebef0;
        case 0x2ebef4u: goto label_2ebef4;
        case 0x2ebef8u: goto label_2ebef8;
        case 0x2ebefcu: goto label_2ebefc;
        case 0x2ebf00u: goto label_2ebf00;
        case 0x2ebf04u: goto label_2ebf04;
        case 0x2ebf08u: goto label_2ebf08;
        case 0x2ebf0cu: goto label_2ebf0c;
        case 0x2ebf10u: goto label_2ebf10;
        case 0x2ebf14u: goto label_2ebf14;
        case 0x2ebf18u: goto label_2ebf18;
        case 0x2ebf1cu: goto label_2ebf1c;
        case 0x2ebf20u: goto label_2ebf20;
        case 0x2ebf24u: goto label_2ebf24;
        case 0x2ebf28u: goto label_2ebf28;
        case 0x2ebf2cu: goto label_2ebf2c;
        case 0x2ebf30u: goto label_2ebf30;
        case 0x2ebf34u: goto label_2ebf34;
        case 0x2ebf38u: goto label_2ebf38;
        case 0x2ebf3cu: goto label_2ebf3c;
        case 0x2ebf40u: goto label_2ebf40;
        case 0x2ebf44u: goto label_2ebf44;
        case 0x2ebf48u: goto label_2ebf48;
        case 0x2ebf4cu: goto label_2ebf4c;
        case 0x2ebf50u: goto label_2ebf50;
        case 0x2ebf54u: goto label_2ebf54;
        case 0x2ebf58u: goto label_2ebf58;
        case 0x2ebf5cu: goto label_2ebf5c;
        case 0x2ebf60u: goto label_2ebf60;
        case 0x2ebf64u: goto label_2ebf64;
        case 0x2ebf68u: goto label_2ebf68;
        case 0x2ebf6cu: goto label_2ebf6c;
        case 0x2ebf70u: goto label_2ebf70;
        case 0x2ebf74u: goto label_2ebf74;
        case 0x2ebf78u: goto label_2ebf78;
        case 0x2ebf7cu: goto label_2ebf7c;
        case 0x2ebf80u: goto label_2ebf80;
        case 0x2ebf84u: goto label_2ebf84;
        case 0x2ebf88u: goto label_2ebf88;
        case 0x2ebf8cu: goto label_2ebf8c;
        case 0x2ebf90u: goto label_2ebf90;
        case 0x2ebf94u: goto label_2ebf94;
        default: break;
    }

    ctx->pc = 0x2ebe20u;

label_2ebe20:
    // 0x2ebe20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ebe20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2ebe24:
    // 0x2ebe24: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2ebe24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2ebe28:
    // 0x2ebe28: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2ebe28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_2ebe2c:
    // 0x2ebe2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ebe2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ebe30:
    // 0x2ebe30: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2ebe30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2ebe34:
    // 0x2ebe34: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2ebe34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ebe38:
    // 0x2ebe38: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ebe38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2ebe3c:
    // 0x2ebe3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ebe3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ebe40:
    // 0x2ebe40: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2ebe40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2ebe44:
    // 0x2ebe44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ebe44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ebe48:
    // 0x2ebe48: 0x92220026  lbu         $v0, 0x26($s1)
    ctx->pc = 0x2ebe48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 38)));
label_2ebe4c:
    // 0x2ebe4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ebe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2ebe50:
    // 0x2ebe50: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2ebe50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2ebe54:
    // 0x2ebe54: 0x10450046  beq         $v0, $a1, . + 4 + (0x46 << 2)
label_2ebe58:
    if (ctx->pc == 0x2EBE58u) {
        ctx->pc = 0x2EBE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE54u;
        // 0x2ebe58: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBE5Cu;
        goto label_2ebe5c;
    }
    ctx->pc = 0x2EBE54u;
    {
        const bool branch_taken_0x2ebe54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2EBE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE54u;
        // 0x2ebe58: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebe54) {
            ctx->pc = 0x2EBF70u;
            goto label_2ebf70;
        }
    }
    ctx->pc = 0x2EBE5Cu;
label_2ebe5c:
    // 0x2ebe5c: 0x9223001c  lbu         $v1, 0x1C($s1)
    ctx->pc = 0x2ebe5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
label_2ebe60:
    // 0x2ebe60: 0x10620044  beq         $v1, $v0, . + 4 + (0x44 << 2)
label_2ebe64:
    if (ctx->pc == 0x2EBE64u) {
        ctx->pc = 0x2EBE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE60u;
        // 0x2ebe64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBE68u;
        goto label_2ebe68;
    }
    ctx->pc = 0x2EBE60u;
    {
        const bool branch_taken_0x2ebe60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EBE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE60u;
        // 0x2ebe64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebe60) {
            ctx->pc = 0x2EBF74u;
            goto label_2ebf74;
        }
    }
    ctx->pc = 0x2EBE68u;
label_2ebe68:
    // 0x2ebe68: 0x92220025  lbu         $v0, 0x25($s1)
    ctx->pc = 0x2ebe68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 37)));
label_2ebe6c:
    // 0x2ebe6c: 0x10450041  beq         $v0, $a1, . + 4 + (0x41 << 2)
label_2ebe70:
    if (ctx->pc == 0x2EBE70u) {
        ctx->pc = 0x2EBE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE6Cu;
        // 0x2ebe70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBE74u;
        goto label_2ebe74;
    }
    ctx->pc = 0x2EBE6Cu;
    {
        const bool branch_taken_0x2ebe6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2EBE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE6Cu;
        // 0x2ebe70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebe6c) {
            ctx->pc = 0x2EBF74u;
            goto label_2ebf74;
        }
    }
    ctx->pc = 0x2EBE74u;
label_2ebe74:
    // 0x2ebe74: 0x92220027  lbu         $v0, 0x27($s1)
    ctx->pc = 0x2ebe74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 39)));
label_2ebe78:
    // 0x2ebe78: 0x1045003e  beq         $v0, $a1, . + 4 + (0x3E << 2)
label_2ebe7c:
    if (ctx->pc == 0x2EBE7Cu) {
        ctx->pc = 0x2EBE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE78u;
        // 0x2ebe7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBE80u;
        goto label_2ebe80;
    }
    ctx->pc = 0x2EBE78u;
    {
        const bool branch_taken_0x2ebe78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2EBE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE78u;
        // 0x2ebe7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebe78) {
            ctx->pc = 0x2EBF74u;
            goto label_2ebf74;
        }
    }
    ctx->pc = 0x2EBE80u;
label_2ebe80:
    // 0x2ebe80: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ebe80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ebe84:
    // 0x2ebe84: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2ebe84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2ebe88:
    // 0x2ebe88: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2ebe88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2ebe8c:
    // 0x2ebe8c: 0x5445000f  bnel        $v0, $a1, . + 4 + (0xF << 2)
label_2ebe90:
    if (ctx->pc == 0x2EBE90u) {
        ctx->pc = 0x2EBE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE8Cu;
        // 0x2ebe90: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBE94u;
        goto label_2ebe94;
    }
    ctx->pc = 0x2EBE8Cu;
    {
        const bool branch_taken_0x2ebe8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2ebe8c) {
            ctx->pc = 0x2EBE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBE8Cu;
            // 0x2ebe90: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBECCu;
            goto label_2ebecc;
        }
    }
    ctx->pc = 0x2EBE94u;
label_2ebe94:
    // 0x2ebe94: 0xc0a36c2  jal         func_28DB08
label_2ebe98:
    if (ctx->pc == 0x2EBE98u) {
        ctx->pc = 0x2EBE9Cu;
        goto label_2ebe9c;
    }
    ctx->pc = 0x2EBE94u;
    SET_GPR_U32(ctx, 31, 0x2EBE9Cu);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2EBE94u, 0x2EBE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBE9Cu;
label_2ebe9c:
    // 0x2ebe9c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2ebe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2ebea0:
    // 0x2ebea0: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2ebea0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2ebea4:
    // 0x2ebea4: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2ebea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2ebea8:
    // 0x2ebea8: 0xa0f809  jalr        $a1
label_2ebeac:
    if (ctx->pc == 0x2EBEACu) {
        ctx->pc = 0x2EBEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBEA8u;
        // 0x2ebeac: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBEB0u;
        goto label_2ebeb0;
    }
    ctx->pc = 0x2EBEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2EBEB0u);
        ctx->pc = 0x2EBEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBEA8u;
        // 0x2ebeac: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBEA8u, 0x2EBEB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EBEB0u;
label_2ebeb0:
    // 0x2ebeb0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ebeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2ebeb4:
    // 0x2ebeb4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2ebeb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2ebeb8:
    // 0x2ebeb8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2ebebc:
    if (ctx->pc == 0x2EBEBCu) {
        ctx->pc = 0x2EBEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBEB8u;
        // 0x2ebebc: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBEC0u;
        goto label_2ebec0;
    }
    ctx->pc = 0x2EBEB8u;
    {
        const bool branch_taken_0x2ebeb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebeb8) {
            ctx->pc = 0x2EBEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBEB8u;
            // 0x2ebebc: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBECCu;
            goto label_2ebecc;
        }
    }
    ctx->pc = 0x2EBEC0u;
label_2ebec0:
    // 0x2ebec0: 0xc0a36c8  jal         func_28DB20
label_2ebec4:
    if (ctx->pc == 0x2EBEC4u) {
        ctx->pc = 0x2EBEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBEC0u;
        // 0x2ebec4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBEC8u;
        goto label_2ebec8;
    }
    ctx->pc = 0x2EBEC0u;
    SET_GPR_U32(ctx, 31, 0x2EBEC8u);
    ctx->pc = 0x2EBEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBEC0u;
    // 0x2ebec4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2EBEC0u, 0x2EBEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBEC8u;
label_2ebec8:
    // 0x2ebec8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2ebec8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ebecc:
    // 0x2ebecc: 0x26040124  addiu       $a0, $s0, 0x124
    ctx->pc = 0x2ebeccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
label_2ebed0:
    // 0x2ebed0: 0xc0e409a  jal         func_390268
label_2ebed4:
    if (ctx->pc == 0x2EBED4u) {
        ctx->pc = 0x2EBED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBED0u;
        // 0x2ebed4: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBED8u;
        goto label_2ebed8;
    }
    ctx->pc = 0x2EBED0u;
    SET_GPR_U32(ctx, 31, 0x2EBED8u);
    ctx->pc = 0x2EBED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBED0u;
    // 0x2ebed4: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2EBED0u, 0x2EBED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBED8u;
label_2ebed8:
    // 0x2ebed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ebed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ebedc:
    // 0x2ebedc: 0xc0a34d6  jal         func_28D358
label_2ebee0:
    if (ctx->pc == 0x2EBEE0u) {
        ctx->pc = 0x2EBEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBEDCu;
        // 0x2ebee0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBEE4u;
        goto label_2ebee4;
    }
    ctx->pc = 0x2EBEDCu;
    SET_GPR_U32(ctx, 31, 0x2EBEE4u);
    ctx->pc = 0x2EBEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBEDCu;
    // 0x2ebee0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2EBEDCu, 0x2EBEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBEE4u;
label_2ebee4:
    // 0x2ebee4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ebee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ebee8:
    // 0x2ebee8: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_2ebeec:
    if (ctx->pc == 0x2EBEECu) {
        ctx->pc = 0x2EBEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBEE8u;
        // 0x2ebeec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBEF0u;
        goto label_2ebef0;
    }
    ctx->pc = 0x2EBEE8u;
    {
        const bool branch_taken_0x2ebee8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBEE8u;
        // 0x2ebeec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebee8) {
            ctx->pc = 0x2EBF40u;
            goto label_2ebf40;
        }
    }
    ctx->pc = 0x2EBEF0u;
label_2ebef0:
    // 0x2ebef0: 0xc09643e  jal         func_2590F8
label_2ebef4:
    if (ctx->pc == 0x2EBEF4u) {
        ctx->pc = 0x2EBEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBEF0u;
        // 0x2ebef4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBEF8u;
        goto label_2ebef8;
    }
    ctx->pc = 0x2EBEF0u;
    SET_GPR_U32(ctx, 31, 0x2EBEF8u);
    ctx->pc = 0x2EBEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBEF0u;
    // 0x2ebef4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2590F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2590F8u, 0x2EBEF0u, 0x2EBEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBEF8u;
label_2ebef8:
    // 0x2ebef8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2ebef8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ebefc:
    // 0x2ebefc: 0x10530005  beq         $v0, $s3, . + 4 + (0x5 << 2)
label_2ebf00:
    if (ctx->pc == 0x2EBF00u) {
        ctx->pc = 0x2EBF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBEFCu;
        // 0x2ebf00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBF04u;
        goto label_2ebf04;
    }
    ctx->pc = 0x2EBEFCu;
    {
        const bool branch_taken_0x2ebefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2EBF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBEFCu;
        // 0x2ebf00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebefc) {
            ctx->pc = 0x2EBF14u;
            goto label_2ebf14;
        }
    }
    ctx->pc = 0x2EBF04u;
label_2ebf04:
    // 0x2ebf04: 0xc0963a2  jal         func_258E88
label_2ebf08:
    if (ctx->pc == 0x2EBF08u) {
        ctx->pc = 0x2EBF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF04u;
        // 0x2ebf08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBF0Cu;
        goto label_2ebf0c;
    }
    ctx->pc = 0x2EBF04u;
    SET_GPR_U32(ctx, 31, 0x2EBF0Cu);
    ctx->pc = 0x2EBF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBF04u;
    // 0x2ebf08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E88u, 0x2EBF04u, 0x2EBF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBF0Cu;
label_2ebf0c:
    // 0x2ebf0c: 0x1453000c  bne         $v0, $s3, . + 4 + (0xC << 2)
label_2ebf10:
    if (ctx->pc == 0x2EBF10u) {
        ctx->pc = 0x2EBF14u;
        goto label_2ebf14;
    }
    ctx->pc = 0x2EBF0Cu;
    {
        const bool branch_taken_0x2ebf0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2ebf0c) {
            ctx->pc = 0x2EBF40u;
            goto label_2ebf40;
        }
    }
    ctx->pc = 0x2EBF14u;
label_2ebf14:
    // 0x2ebf14: 0xc0a36c8  jal         func_28DB20
label_2ebf18:
    if (ctx->pc == 0x2EBF18u) {
        ctx->pc = 0x2EBF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF14u;
        // 0x2ebf18: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBF1Cu;
        goto label_2ebf1c;
    }
    ctx->pc = 0x2EBF14u;
    SET_GPR_U32(ctx, 31, 0x2EBF1Cu);
    ctx->pc = 0x2EBF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBF14u;
    // 0x2ebf18: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2EBF14u, 0x2EBF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBF1Cu;
label_2ebf1c:
    // 0x2ebf1c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ebf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ebf20:
    // 0x2ebf20: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2ebf20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2ebf24:
    // 0x2ebf24: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
label_2ebf28:
    if (ctx->pc == 0x2EBF28u) {
        ctx->pc = 0x2EBF2Cu;
        goto label_2ebf2c;
    }
    ctx->pc = 0x2EBF24u;
    {
        const bool branch_taken_0x2ebf24 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2ebf24) {
            ctx->pc = 0x2EBF40u;
            goto label_2ebf40;
        }
    }
    ctx->pc = 0x2EBF2Cu;
label_2ebf2c:
    // 0x2ebf2c: 0xc0874fa  jal         func_21D3E8
label_2ebf30:
    if (ctx->pc == 0x2EBF30u) {
        ctx->pc = 0x2EBF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF2Cu;
        // 0x2ebf30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBF34u;
        goto label_2ebf34;
    }
    ctx->pc = 0x2EBF2Cu;
    SET_GPR_U32(ctx, 31, 0x2EBF34u);
    ctx->pc = 0x2EBF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBF2Cu;
    // 0x2ebf30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2EBF2Cu, 0x2EBF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBF34u;
label_2ebf34:
    // 0x2ebf34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ebf34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ebf38:
    // 0x2ebf38: 0xc051fbc  jal         func_147EF0
label_2ebf3c:
    if (ctx->pc == 0x2EBF3Cu) {
        ctx->pc = 0x2EBF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF38u;
        // 0x2ebf3c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBF40u;
        goto label_2ebf40;
    }
    ctx->pc = 0x2EBF38u;
    SET_GPR_U32(ctx, 31, 0x2EBF40u);
    ctx->pc = 0x2EBF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBF38u;
    // 0x2ebf3c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2EBF38u, 0x2EBF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBF40u;
label_2ebf40:
    // 0x2ebf40: 0xc08a10a  jal         func_228428
label_2ebf44:
    if (ctx->pc == 0x2EBF44u) {
        ctx->pc = 0x2EBF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF40u;
        // 0x2ebf44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBF48u;
        goto label_2ebf48;
    }
    ctx->pc = 0x2EBF40u;
    SET_GPR_U32(ctx, 31, 0x2EBF48u);
    ctx->pc = 0x2EBF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBF40u;
    // 0x2ebf44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228428u, 0x2EBF40u, 0x2EBF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBF48u;
label_2ebf48:
    // 0x2ebf48: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2ebf4c:
    if (ctx->pc == 0x2EBF4Cu) {
        ctx->pc = 0x2EBF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF48u;
        // 0x2ebf4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBF50u;
        goto label_2ebf50;
    }
    ctx->pc = 0x2EBF48u;
    {
        const bool branch_taken_0x2ebf48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF48u;
        // 0x2ebf4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebf48) {
            ctx->pc = 0x2EBF74u;
            goto label_2ebf74;
        }
    }
    ctx->pc = 0x2EBF50u;
label_2ebf50:
    // 0x2ebf50: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2ebf50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2ebf54:
    // 0x2ebf54: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
label_2ebf58:
    if (ctx->pc == 0x2EBF58u) {
        ctx->pc = 0x2EBF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF54u;
        // 0x2ebf58: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBF5Cu;
        goto label_2ebf5c;
    }
    ctx->pc = 0x2EBF54u;
    {
        const bool branch_taken_0x2ebf54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebf54) {
            ctx->pc = 0x2EBF58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBF54u;
            // 0x2ebf58: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBF78u;
            goto label_2ebf78;
        }
    }
    ctx->pc = 0x2EBF5Cu;
label_2ebf5c:
    // 0x2ebf5c: 0x10b00006  beq         $a1, $s0, . + 4 + (0x6 << 2)
label_2ebf60:
    if (ctx->pc == 0x2EBF60u) {
        ctx->pc = 0x2EBF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF5Cu;
        // 0x2ebf60: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBF64u;
        goto label_2ebf64;
    }
    ctx->pc = 0x2EBF5Cu;
    {
        const bool branch_taken_0x2ebf5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        ctx->pc = 0x2EBF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF5Cu;
        // 0x2ebf60: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebf5c) {
            ctx->pc = 0x2EBF78u;
            goto label_2ebf78;
        }
    }
    ctx->pc = 0x2EBF64u;
label_2ebf64:
    // 0x2ebf64: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ebf64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ebf68:
    // 0x2ebf68: 0xc0a33f8  jal         func_28CFE0
label_2ebf6c:
    if (ctx->pc == 0x2EBF6Cu) {
        ctx->pc = 0x2EBF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF68u;
        // 0x2ebf6c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBF70u;
        goto label_2ebf70;
    }
    ctx->pc = 0x2EBF68u;
    SET_GPR_U32(ctx, 31, 0x2EBF70u);
    ctx->pc = 0x2EBF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBF68u;
    // 0x2ebf6c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2EBF68u, 0x2EBF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBF70u;
label_2ebf70:
    // 0x2ebf70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ebf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ebf74:
    // 0x2ebf74: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2ebf74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ebf78:
    // 0x2ebf78: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2ebf78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ebf7c:
    // 0x2ebf7c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ebf7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ebf80:
    // 0x2ebf80: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2ebf80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ebf84:
    // 0x2ebf84: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2ebf84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ebf88:
    // 0x2ebf88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ebf88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ebf8c:
    // 0x2ebf8c: 0x3e00008  jr          $ra
label_2ebf90:
    if (ctx->pc == 0x2EBF90u) {
        ctx->pc = 0x2EBF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF8Cu;
        // 0x2ebf90: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBF94u;
        goto label_2ebf94;
    }
    ctx->pc = 0x2EBF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF8Cu;
        // 0x2ebf90: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBF94u;
label_2ebf94:
    // 0x2ebf94: 0x0  nop
    ctx->pc = 0x2ebf94u;
    // NOP
    ctx->pc = 0x2ebf98u;
}
