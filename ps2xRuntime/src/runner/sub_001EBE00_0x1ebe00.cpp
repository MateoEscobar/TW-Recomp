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

// Function: sub_001EBE00
// Address: 0x1ebe00 - 0x1ebf98
void sub_001EBE00_0x1ebe00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EBE00_0x1ebe00");
#endif

    switch (ctx->pc) {
        case 0x1ebe00u: goto label_1ebe00;
        case 0x1ebe04u: goto label_1ebe04;
        case 0x1ebe08u: goto label_1ebe08;
        case 0x1ebe0cu: goto label_1ebe0c;
        case 0x1ebe10u: goto label_1ebe10;
        case 0x1ebe14u: goto label_1ebe14;
        case 0x1ebe18u: goto label_1ebe18;
        case 0x1ebe1cu: goto label_1ebe1c;
        case 0x1ebe20u: goto label_1ebe20;
        case 0x1ebe24u: goto label_1ebe24;
        case 0x1ebe28u: goto label_1ebe28;
        case 0x1ebe2cu: goto label_1ebe2c;
        case 0x1ebe30u: goto label_1ebe30;
        case 0x1ebe34u: goto label_1ebe34;
        case 0x1ebe38u: goto label_1ebe38;
        case 0x1ebe3cu: goto label_1ebe3c;
        case 0x1ebe40u: goto label_1ebe40;
        case 0x1ebe44u: goto label_1ebe44;
        case 0x1ebe48u: goto label_1ebe48;
        case 0x1ebe4cu: goto label_1ebe4c;
        case 0x1ebe50u: goto label_1ebe50;
        case 0x1ebe54u: goto label_1ebe54;
        case 0x1ebe58u: goto label_1ebe58;
        case 0x1ebe5cu: goto label_1ebe5c;
        case 0x1ebe60u: goto label_1ebe60;
        case 0x1ebe64u: goto label_1ebe64;
        case 0x1ebe68u: goto label_1ebe68;
        case 0x1ebe6cu: goto label_1ebe6c;
        case 0x1ebe70u: goto label_1ebe70;
        case 0x1ebe74u: goto label_1ebe74;
        case 0x1ebe78u: goto label_1ebe78;
        case 0x1ebe7cu: goto label_1ebe7c;
        case 0x1ebe80u: goto label_1ebe80;
        case 0x1ebe84u: goto label_1ebe84;
        case 0x1ebe88u: goto label_1ebe88;
        case 0x1ebe8cu: goto label_1ebe8c;
        case 0x1ebe90u: goto label_1ebe90;
        case 0x1ebe94u: goto label_1ebe94;
        case 0x1ebe98u: goto label_1ebe98;
        case 0x1ebe9cu: goto label_1ebe9c;
        case 0x1ebea0u: goto label_1ebea0;
        case 0x1ebea4u: goto label_1ebea4;
        case 0x1ebea8u: goto label_1ebea8;
        case 0x1ebeacu: goto label_1ebeac;
        case 0x1ebeb0u: goto label_1ebeb0;
        case 0x1ebeb4u: goto label_1ebeb4;
        case 0x1ebeb8u: goto label_1ebeb8;
        case 0x1ebebcu: goto label_1ebebc;
        case 0x1ebec0u: goto label_1ebec0;
        case 0x1ebec4u: goto label_1ebec4;
        case 0x1ebec8u: goto label_1ebec8;
        case 0x1ebeccu: goto label_1ebecc;
        case 0x1ebed0u: goto label_1ebed0;
        case 0x1ebed4u: goto label_1ebed4;
        case 0x1ebed8u: goto label_1ebed8;
        case 0x1ebedcu: goto label_1ebedc;
        case 0x1ebee0u: goto label_1ebee0;
        case 0x1ebee4u: goto label_1ebee4;
        case 0x1ebee8u: goto label_1ebee8;
        case 0x1ebeecu: goto label_1ebeec;
        case 0x1ebef0u: goto label_1ebef0;
        case 0x1ebef4u: goto label_1ebef4;
        case 0x1ebef8u: goto label_1ebef8;
        case 0x1ebefcu: goto label_1ebefc;
        case 0x1ebf00u: goto label_1ebf00;
        case 0x1ebf04u: goto label_1ebf04;
        case 0x1ebf08u: goto label_1ebf08;
        case 0x1ebf0cu: goto label_1ebf0c;
        case 0x1ebf10u: goto label_1ebf10;
        case 0x1ebf14u: goto label_1ebf14;
        case 0x1ebf18u: goto label_1ebf18;
        case 0x1ebf1cu: goto label_1ebf1c;
        case 0x1ebf20u: goto label_1ebf20;
        case 0x1ebf24u: goto label_1ebf24;
        case 0x1ebf28u: goto label_1ebf28;
        case 0x1ebf2cu: goto label_1ebf2c;
        case 0x1ebf30u: goto label_1ebf30;
        case 0x1ebf34u: goto label_1ebf34;
        case 0x1ebf38u: goto label_1ebf38;
        case 0x1ebf3cu: goto label_1ebf3c;
        case 0x1ebf40u: goto label_1ebf40;
        case 0x1ebf44u: goto label_1ebf44;
        case 0x1ebf48u: goto label_1ebf48;
        case 0x1ebf4cu: goto label_1ebf4c;
        case 0x1ebf50u: goto label_1ebf50;
        case 0x1ebf54u: goto label_1ebf54;
        case 0x1ebf58u: goto label_1ebf58;
        case 0x1ebf5cu: goto label_1ebf5c;
        case 0x1ebf60u: goto label_1ebf60;
        case 0x1ebf64u: goto label_1ebf64;
        case 0x1ebf68u: goto label_1ebf68;
        case 0x1ebf6cu: goto label_1ebf6c;
        case 0x1ebf70u: goto label_1ebf70;
        case 0x1ebf74u: goto label_1ebf74;
        case 0x1ebf78u: goto label_1ebf78;
        case 0x1ebf7cu: goto label_1ebf7c;
        case 0x1ebf80u: goto label_1ebf80;
        case 0x1ebf84u: goto label_1ebf84;
        case 0x1ebf88u: goto label_1ebf88;
        case 0x1ebf8cu: goto label_1ebf8c;
        case 0x1ebf90u: goto label_1ebf90;
        case 0x1ebf94u: goto label_1ebf94;
        default: break;
    }

    ctx->pc = 0x1ebe00u;

label_1ebe00:
    // 0x1ebe00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ebe00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ebe04:
    // 0x1ebe04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ebe04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ebe08:
    // 0x1ebe08: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ebe08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1ebe0c:
    // 0x1ebe0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ebe0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ebe10:
    // 0x1ebe10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ebe10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ebe14:
    // 0x1ebe14: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ebe14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ebe18:
    // 0x1ebe18: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1ebe18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1ebe1c:
    // 0x1ebe1c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1ebe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1ebe20:
    // 0x1ebe20: 0x40f809  jalr        $v0
label_1ebe24:
    if (ctx->pc == 0x1EBE24u) {
        ctx->pc = 0x1EBE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE20u;
        // 0x1ebe24: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBE28u;
        goto label_1ebe28;
    }
    ctx->pc = 0x1EBE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EBE28u);
        ctx->pc = 0x1EBE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE20u;
        // 0x1ebe24: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBE20u, 0x1EBE28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBE28u;
label_1ebe28:
    // 0x1ebe28: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
label_1ebe2c:
    if (ctx->pc == 0x1EBE2Cu) {
        ctx->pc = 0x1EBE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE28u;
        // 0x1ebe2c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBE30u;
        goto label_1ebe30;
    }
    ctx->pc = 0x1EBE28u;
    {
        const bool branch_taken_0x1ebe28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE28u;
        // 0x1ebe2c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebe28) {
            ctx->pc = 0x1EBF84u;
            goto label_1ebf84;
        }
    }
    ctx->pc = 0x1EBE30u;
label_1ebe30:
    // 0x1ebe30: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ebe30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ebe34:
    // 0x1ebe34: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1ebe34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1ebe38:
    // 0x1ebe38: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1ebe38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1ebe3c:
    // 0x1ebe3c: 0x40f809  jalr        $v0
label_1ebe40:
    if (ctx->pc == 0x1EBE40u) {
        ctx->pc = 0x1EBE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE3Cu;
        // 0x1ebe40: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBE44u;
        goto label_1ebe44;
    }
    ctx->pc = 0x1EBE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EBE44u);
        ctx->pc = 0x1EBE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE3Cu;
        // 0x1ebe40: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBE3Cu, 0x1EBE44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBE44u;
label_1ebe44:
    // 0x1ebe44: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_1ebe48:
    if (ctx->pc == 0x1EBE48u) {
        ctx->pc = 0x1EBE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE44u;
        // 0x1ebe48: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBE4Cu;
        goto label_1ebe4c;
    }
    ctx->pc = 0x1EBE44u;
    {
        const bool branch_taken_0x1ebe44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE44u;
        // 0x1ebe48: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebe44) {
            ctx->pc = 0x1EBF84u;
            goto label_1ebf84;
        }
    }
    ctx->pc = 0x1EBE4Cu;
label_1ebe4c:
    // 0x1ebe4c: 0x8e2500b8  lw          $a1, 0xB8($s1)
    ctx->pc = 0x1ebe4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_1ebe50:
    // 0x1ebe50: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ebe50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ebe54:
    // 0x1ebe54: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1ebe54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1ebe58:
    // 0x1ebe58: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1ebe58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1ebe5c:
    // 0x1ebe5c: 0x60f809  jalr        $v1
label_1ebe60:
    if (ctx->pc == 0x1EBE60u) {
        ctx->pc = 0x1EBE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE5Cu;
        // 0x1ebe60: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBE64u;
        goto label_1ebe64;
    }
    ctx->pc = 0x1EBE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EBE64u);
        ctx->pc = 0x1EBE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE5Cu;
        // 0x1ebe60: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBE5Cu, 0x1EBE64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBE64u;
label_1ebe64:
    // 0x1ebe64: 0x8e2500bc  lw          $a1, 0xBC($s1)
    ctx->pc = 0x1ebe64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_1ebe68:
    // 0x1ebe68: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ebe68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ebe6c:
    // 0x1ebe6c: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1ebe6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1ebe70:
    // 0x1ebe70: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1ebe70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1ebe74:
    // 0x1ebe74: 0x40f809  jalr        $v0
label_1ebe78:
    if (ctx->pc == 0x1EBE78u) {
        ctx->pc = 0x1EBE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE74u;
        // 0x1ebe78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBE7Cu;
        goto label_1ebe7c;
    }
    ctx->pc = 0x1EBE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EBE7Cu);
        ctx->pc = 0x1EBE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE74u;
        // 0x1ebe78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBE74u, 0x1EBE7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBE7Cu;
label_1ebe7c:
    // 0x1ebe7c: 0x5040003b  beql        $v0, $zero, . + 4 + (0x3B << 2)
label_1ebe80:
    if (ctx->pc == 0x1EBE80u) {
        ctx->pc = 0x1EBE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE7Cu;
        // 0x1ebe80: 0x8e2500c0  lw          $a1, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBE84u;
        goto label_1ebe84;
    }
    ctx->pc = 0x1EBE7Cu;
    {
        const bool branch_taken_0x1ebe7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebe7c) {
            ctx->pc = 0x1EBE80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EBE7Cu;
            // 0x1ebe80: 0x8e2500c0  lw          $a1, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EBF6Cu;
            goto label_1ebf6c;
        }
    }
    ctx->pc = 0x1EBE84u;
label_1ebe84:
    // 0x1ebe84: 0x8e2500bc  lw          $a1, 0xBC($s1)
    ctx->pc = 0x1ebe84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_1ebe88:
    // 0x1ebe88: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ebe88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ebe8c:
    // 0x1ebe8c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1ebe8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1ebe90:
    // 0x1ebe90: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1ebe90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1ebe94:
    // 0x1ebe94: 0x60f809  jalr        $v1
label_1ebe98:
    if (ctx->pc == 0x1EBE98u) {
        ctx->pc = 0x1EBE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE94u;
        // 0x1ebe98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBE9Cu;
        goto label_1ebe9c;
    }
    ctx->pc = 0x1EBE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EBE9Cu);
        ctx->pc = 0x1EBE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE94u;
        // 0x1ebe98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBE94u, 0x1EBE9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBE9Cu;
label_1ebe9c:
    // 0x1ebe9c: 0x8e2500bc  lw          $a1, 0xBC($s1)
    ctx->pc = 0x1ebe9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_1ebea0:
    // 0x1ebea0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ebea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ebea4:
    // 0x1ebea4: 0x84640140  lh          $a0, 0x140($v1)
    ctx->pc = 0x1ebea4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
label_1ebea8:
    // 0x1ebea8: 0x8c620144  lw          $v0, 0x144($v1)
    ctx->pc = 0x1ebea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
label_1ebeac:
    // 0x1ebeac: 0x40f809  jalr        $v0
label_1ebeb0:
    if (ctx->pc == 0x1EBEB0u) {
        ctx->pc = 0x1EBEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBEACu;
        // 0x1ebeb0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBEB4u;
        goto label_1ebeb4;
    }
    ctx->pc = 0x1EBEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EBEB4u);
        ctx->pc = 0x1EBEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBEACu;
        // 0x1ebeb0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBEACu, 0x1EBEB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBEB4u;
label_1ebeb4:
    // 0x1ebeb4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1ebeb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1ebeb8:
    // 0x1ebeb8: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
label_1ebebc:
    if (ctx->pc == 0x1EBEBCu) {
        ctx->pc = 0x1EBEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBEB8u;
        // 0x1ebebc: 0x8e2500c0  lw          $a1, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBEC0u;
        goto label_1ebec0;
    }
    ctx->pc = 0x1EBEB8u;
    {
        const bool branch_taken_0x1ebeb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebeb8) {
            ctx->pc = 0x1EBEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EBEB8u;
            // 0x1ebebc: 0x8e2500c0  lw          $a1, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EBF6Cu;
            goto label_1ebf6c;
        }
    }
    ctx->pc = 0x1EBEC0u;
label_1ebec0:
    // 0x1ebec0: 0x8e2500bc  lw          $a1, 0xBC($s1)
    ctx->pc = 0x1ebec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_1ebec4:
    // 0x1ebec4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ebec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ebec8:
    // 0x1ebec8: 0x84640150  lh          $a0, 0x150($v1)
    ctx->pc = 0x1ebec8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 336)));
label_1ebecc:
    // 0x1ebecc: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1ebeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
label_1ebed0:
    // 0x1ebed0: 0x40f809  jalr        $v0
label_1ebed4:
    if (ctx->pc == 0x1EBED4u) {
        ctx->pc = 0x1EBED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBED0u;
        // 0x1ebed4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBED8u;
        goto label_1ebed8;
    }
    ctx->pc = 0x1EBED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EBED8u);
        ctx->pc = 0x1EBED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBED0u;
        // 0x1ebed4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBED0u, 0x1EBED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBED8u;
label_1ebed8:
    // 0x1ebed8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1ebedc:
    if (ctx->pc == 0x1EBEDCu) {
        ctx->pc = 0x1EBEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBED8u;
        // 0x1ebedc: 0x8e2500bc  lw          $a1, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBEE0u;
        goto label_1ebee0;
    }
    ctx->pc = 0x1EBED8u;
    {
        const bool branch_taken_0x1ebed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebed8) {
            ctx->pc = 0x1EBEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EBED8u;
            // 0x1ebedc: 0x8e2500bc  lw          $a1, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EBEFCu;
            goto label_1ebefc;
        }
    }
    ctx->pc = 0x1EBEE0u;
label_1ebee0:
    // 0x1ebee0: 0x8e2500b0  lw          $a1, 0xB0($s1)
    ctx->pc = 0x1ebee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_1ebee4:
    // 0x1ebee4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ebee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ebee8:
    // 0x1ebee8: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1ebee8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1ebeec:
    // 0x1ebeec: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1ebeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1ebef0:
    // 0x1ebef0: 0x60f809  jalr        $v1
label_1ebef4:
    if (ctx->pc == 0x1EBEF4u) {
        ctx->pc = 0x1EBEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBEF0u;
        // 0x1ebef4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBEF8u;
        goto label_1ebef8;
    }
    ctx->pc = 0x1EBEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EBEF8u);
        ctx->pc = 0x1EBEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBEF0u;
        // 0x1ebef4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBEF0u, 0x1EBEF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBEF8u;
label_1ebef8:
    // 0x1ebef8: 0x8e2500bc  lw          $a1, 0xBC($s1)
    ctx->pc = 0x1ebef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_1ebefc:
    // 0x1ebefc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ebefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ebf00:
    // 0x1ebf00: 0x84640150  lh          $a0, 0x150($v1)
    ctx->pc = 0x1ebf00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 336)));
label_1ebf04:
    // 0x1ebf04: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1ebf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
label_1ebf08:
    // 0x1ebf08: 0x40f809  jalr        $v0
label_1ebf0c:
    if (ctx->pc == 0x1EBF0Cu) {
        ctx->pc = 0x1EBF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF08u;
        // 0x1ebf0c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBF10u;
        goto label_1ebf10;
    }
    ctx->pc = 0x1EBF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EBF10u);
        ctx->pc = 0x1EBF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF08u;
        // 0x1ebf0c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBF08u, 0x1EBF10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBF10u;
label_1ebf10:
    // 0x1ebf10: 0x8e2500bc  lw          $a1, 0xBC($s1)
    ctx->pc = 0x1ebf10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_1ebf14:
    // 0x1ebf14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ebf14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ebf18:
    // 0x1ebf18: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ebf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ebf1c:
    // 0x1ebf1c: 0x84640148  lh          $a0, 0x148($v1)
    ctx->pc = 0x1ebf1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 328)));
label_1ebf20:
    // 0x1ebf20: 0x8c62014c  lw          $v0, 0x14C($v1)
    ctx->pc = 0x1ebf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
label_1ebf24:
    // 0x1ebf24: 0x40f809  jalr        $v0
label_1ebf28:
    if (ctx->pc == 0x1EBF28u) {
        ctx->pc = 0x1EBF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF24u;
        // 0x1ebf28: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBF2Cu;
        goto label_1ebf2c;
    }
    ctx->pc = 0x1EBF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EBF2Cu);
        ctx->pc = 0x1EBF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF24u;
        // 0x1ebf28: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBF24u, 0x1EBF2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBF2Cu;
label_1ebf2c:
    // 0x1ebf2c: 0x8e2500bc  lw          $a1, 0xBC($s1)
    ctx->pc = 0x1ebf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_1ebf30:
    // 0x1ebf30: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1ebf30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1ebf34:
    // 0x1ebf34: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ebf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ebf38:
    // 0x1ebf38: 0x84640140  lh          $a0, 0x140($v1)
    ctx->pc = 0x1ebf38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
label_1ebf3c:
    // 0x1ebf3c: 0x8c620144  lw          $v0, 0x144($v1)
    ctx->pc = 0x1ebf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
label_1ebf40:
    // 0x1ebf40: 0x40f809  jalr        $v0
label_1ebf44:
    if (ctx->pc == 0x1EBF44u) {
        ctx->pc = 0x1EBF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF40u;
        // 0x1ebf44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBF48u;
        goto label_1ebf48;
    }
    ctx->pc = 0x1EBF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EBF48u);
        ctx->pc = 0x1EBF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF40u;
        // 0x1ebf44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBF40u, 0x1EBF48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBF48u;
label_1ebf48:
    // 0x1ebf48: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
label_1ebf4c:
    if (ctx->pc == 0x1EBF4Cu) {
        ctx->pc = 0x1EBF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF48u;
        // 0x1ebf4c: 0x8e2500c0  lw          $a1, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBF50u;
        goto label_1ebf50;
    }
    ctx->pc = 0x1EBF48u;
    {
        const bool branch_taken_0x1ebf48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ebf48) {
            ctx->pc = 0x1EBF4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EBF48u;
            // 0x1ebf4c: 0x8e2500c0  lw          $a1, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EBF6Cu;
            goto label_1ebf6c;
        }
    }
    ctx->pc = 0x1EBF50u;
label_1ebf50:
    // 0x1ebf50: 0x8e2500b4  lw          $a1, 0xB4($s1)
    ctx->pc = 0x1ebf50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_1ebf54:
    // 0x1ebf54: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ebf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ebf58:
    // 0x1ebf58: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1ebf58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1ebf5c:
    // 0x1ebf5c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1ebf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1ebf60:
    // 0x1ebf60: 0x60f809  jalr        $v1
label_1ebf64:
    if (ctx->pc == 0x1EBF64u) {
        ctx->pc = 0x1EBF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF60u;
        // 0x1ebf64: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBF68u;
        goto label_1ebf68;
    }
    ctx->pc = 0x1EBF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EBF68u);
        ctx->pc = 0x1EBF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF60u;
        // 0x1ebf64: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBF60u, 0x1EBF68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBF68u;
label_1ebf68:
    // 0x1ebf68: 0x8e2500c0  lw          $a1, 0xC0($s1)
    ctx->pc = 0x1ebf68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_1ebf6c:
    // 0x1ebf6c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ebf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ebf70:
    // 0x1ebf70: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1ebf70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1ebf74:
    // 0x1ebf74: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1ebf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1ebf78:
    // 0x1ebf78: 0x60f809  jalr        $v1
label_1ebf7c:
    if (ctx->pc == 0x1EBF7Cu) {
        ctx->pc = 0x1EBF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF78u;
        // 0x1ebf7c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBF80u;
        goto label_1ebf80;
    }
    ctx->pc = 0x1EBF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EBF80u);
        ctx->pc = 0x1EBF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF78u;
        // 0x1ebf7c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBF78u, 0x1EBF80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBF80u;
label_1ebf80:
    // 0x1ebf80: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ebf80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ebf84:
    // 0x1ebf84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ebf84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ebf88:
    // 0x1ebf88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ebf88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ebf8c:
    // 0x1ebf8c: 0x3e00008  jr          $ra
label_1ebf90:
    if (ctx->pc == 0x1EBF90u) {
        ctx->pc = 0x1EBF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF8Cu;
        // 0x1ebf90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBF94u;
        goto label_1ebf94;
    }
    ctx->pc = 0x1EBF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF8Cu;
        // 0x1ebf90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBF94u;
label_1ebf94:
    // 0x1ebf94: 0x0  nop
    ctx->pc = 0x1ebf94u;
    // NOP
    ctx->pc = 0x1ebf98u;
}
