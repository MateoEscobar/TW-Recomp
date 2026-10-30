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

// Function: sub_00414AE0
// Address: 0x414ae0 - 0x414bc0
void sub_00414AE0_0x414ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414AE0_0x414ae0");
#endif

    switch (ctx->pc) {
        case 0x414ae0u: goto label_414ae0;
        case 0x414ae4u: goto label_414ae4;
        case 0x414ae8u: goto label_414ae8;
        case 0x414aecu: goto label_414aec;
        case 0x414af0u: goto label_414af0;
        case 0x414af4u: goto label_414af4;
        case 0x414af8u: goto label_414af8;
        case 0x414afcu: goto label_414afc;
        case 0x414b00u: goto label_414b00;
        case 0x414b04u: goto label_414b04;
        case 0x414b08u: goto label_414b08;
        case 0x414b0cu: goto label_414b0c;
        case 0x414b10u: goto label_414b10;
        case 0x414b14u: goto label_414b14;
        case 0x414b18u: goto label_414b18;
        case 0x414b1cu: goto label_414b1c;
        case 0x414b20u: goto label_414b20;
        case 0x414b24u: goto label_414b24;
        case 0x414b28u: goto label_414b28;
        case 0x414b2cu: goto label_414b2c;
        case 0x414b30u: goto label_414b30;
        case 0x414b34u: goto label_414b34;
        case 0x414b38u: goto label_414b38;
        case 0x414b3cu: goto label_414b3c;
        case 0x414b40u: goto label_414b40;
        case 0x414b44u: goto label_414b44;
        case 0x414b48u: goto label_414b48;
        case 0x414b4cu: goto label_414b4c;
        case 0x414b50u: goto label_414b50;
        case 0x414b54u: goto label_414b54;
        case 0x414b58u: goto label_414b58;
        case 0x414b5cu: goto label_414b5c;
        case 0x414b60u: goto label_414b60;
        case 0x414b64u: goto label_414b64;
        case 0x414b68u: goto label_414b68;
        case 0x414b6cu: goto label_414b6c;
        case 0x414b70u: goto label_414b70;
        case 0x414b74u: goto label_414b74;
        case 0x414b78u: goto label_414b78;
        case 0x414b7cu: goto label_414b7c;
        case 0x414b80u: goto label_414b80;
        case 0x414b84u: goto label_414b84;
        case 0x414b88u: goto label_414b88;
        case 0x414b8cu: goto label_414b8c;
        case 0x414b90u: goto label_414b90;
        case 0x414b94u: goto label_414b94;
        case 0x414b98u: goto label_414b98;
        case 0x414b9cu: goto label_414b9c;
        case 0x414ba0u: goto label_414ba0;
        case 0x414ba4u: goto label_414ba4;
        case 0x414ba8u: goto label_414ba8;
        case 0x414bacu: goto label_414bac;
        case 0x414bb0u: goto label_414bb0;
        case 0x414bb4u: goto label_414bb4;
        case 0x414bb8u: goto label_414bb8;
        case 0x414bbcu: goto label_414bbc;
        default: break;
    }

    ctx->pc = 0x414ae0u;

label_414ae0:
    // 0x414ae0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x414ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_414ae4:
    // 0x414ae4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x414ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_414ae8:
    // 0x414ae8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x414ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_414aec:
    // 0x414aec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x414aecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_414af0:
    // 0x414af0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x414af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_414af4:
    // 0x414af4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x414af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_414af8:
    // 0x414af8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x414af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_414afc:
    // 0x414afc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x414afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_414b00:
    // 0x414b00: 0xc0e4060  jal         func_390180
label_414b04:
    if (ctx->pc == 0x414B04u) {
        ctx->pc = 0x414B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B00u;
        // 0x414b04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414B08u;
        goto label_414b08;
    }
    ctx->pc = 0x414B00u;
    SET_GPR_U32(ctx, 31, 0x414B08u);
    ctx->pc = 0x414B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414B00u;
    // 0x414b04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x414B00u, 0x414B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414B08u;
label_414b08:
    // 0x414b08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x414b08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_414b0c:
    // 0x414b0c: 0x12400024  beqz        $s2, . + 4 + (0x24 << 2)
label_414b10:
    if (ctx->pc == 0x414B10u) {
        ctx->pc = 0x414B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B0Cu;
        // 0x414b10: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414B14u;
        goto label_414b14;
    }
    ctx->pc = 0x414B0Cu;
    {
        const bool branch_taken_0x414b0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x414B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B0Cu;
        // 0x414b10: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414b0c) {
            ctx->pc = 0x414BA0u;
            goto label_414ba0;
        }
    }
    ctx->pc = 0x414B14u;
label_414b14:
    // 0x414b14: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x414b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_414b18:
    // 0x414b18: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x414b18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_414b1c:
    // 0x414b1c: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x414b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_414b20:
    // 0x414b20: 0x40f809  jalr        $v0
label_414b24:
    if (ctx->pc == 0x414B24u) {
        ctx->pc = 0x414B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B20u;
        // 0x414b24: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414B28u;
        goto label_414b28;
    }
    ctx->pc = 0x414B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x414B28u);
        ctx->pc = 0x414B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B20u;
        // 0x414b24: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414B20u, 0x414B28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x414B28u;
label_414b28:
    // 0x414b28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x414b28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_414b2c:
    // 0x414b2c: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
label_414b30:
    if (ctx->pc == 0x414B30u) {
        ctx->pc = 0x414B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B2Cu;
        // 0x414b30: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414B34u;
        goto label_414b34;
    }
    ctx->pc = 0x414B2Cu;
    {
        const bool branch_taken_0x414b2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x414B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B2Cu;
        // 0x414b30: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414b2c) {
            ctx->pc = 0x414BA0u;
            goto label_414ba0;
        }
    }
    ctx->pc = 0x414B34u;
label_414b34:
    // 0x414b34: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x414b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_414b38:
    // 0x414b38: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x414b38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_414b3c:
    // 0x414b3c: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x414b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_414b40:
    // 0x414b40: 0x40f809  jalr        $v0
label_414b44:
    if (ctx->pc == 0x414B44u) {
        ctx->pc = 0x414B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B40u;
        // 0x414b44: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414B48u;
        goto label_414b48;
    }
    ctx->pc = 0x414B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x414B48u);
        ctx->pc = 0x414B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B40u;
        // 0x414b44: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414B40u, 0x414B48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x414B48u;
label_414b48:
    // 0x414b48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x414b48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_414b4c:
    // 0x414b4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x414b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_414b50:
    // 0x414b50: 0x1662000e  bne         $s3, $v0, . + 4 + (0xE << 2)
label_414b54:
    if (ctx->pc == 0x414B54u) {
        ctx->pc = 0x414B58u;
        goto label_414b58;
    }
    ctx->pc = 0x414B50u;
    {
        const bool branch_taken_0x414b50 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x414b50) {
            ctx->pc = 0x414B8Cu;
            goto label_414b8c;
        }
    }
    ctx->pc = 0x414B58u;
label_414b58:
    // 0x414b58: 0x56000010  bnel        $s0, $zero, . + 4 + (0x10 << 2)
label_414b5c:
    if (ctx->pc == 0x414B5Cu) {
        ctx->pc = 0x414B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B58u;
        // 0x414b5c: 0xae130180  sw          $s3, 0x180($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414B60u;
        goto label_414b60;
    }
    ctx->pc = 0x414B58u;
    {
        const bool branch_taken_0x414b58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x414b58) {
            ctx->pc = 0x414B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x414B58u;
            // 0x414b5c: 0xae130180  sw          $s3, 0x180($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x414B9Cu;
            goto label_414b9c;
        }
    }
    ctx->pc = 0x414B60u;
label_414b60:
    // 0x414b60: 0xc1050b4  jal         func_4142D0
label_414b64:
    if (ctx->pc == 0x414B64u) {
        ctx->pc = 0x414B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B60u;
        // 0x414b64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414B68u;
        goto label_414b68;
    }
    ctx->pc = 0x414B60u;
    SET_GPR_U32(ctx, 31, 0x414B68u);
    ctx->pc = 0x414B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414B60u;
    // 0x414b64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4142D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4142D0u, 0x414B60u, 0x414B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414B68u;
label_414b68:
    // 0x414b68: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x414b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_414b6c:
    // 0x414b6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x414b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_414b70:
    // 0x414b70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x414b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_414b74:
    // 0x414b74: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x414b74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_414b78:
    // 0x414b78: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x414b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_414b7c:
    // 0x414b7c: 0x40f809  jalr        $v0
label_414b80:
    if (ctx->pc == 0x414B80u) {
        ctx->pc = 0x414B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B7Cu;
        // 0x414b80: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414B84u;
        goto label_414b84;
    }
    ctx->pc = 0x414B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x414B84u);
        ctx->pc = 0x414B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B7Cu;
        // 0x414b80: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414B7Cu, 0x414B84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x414B84u;
label_414b84:
    // 0x414b84: 0x10000005  b           . + 4 + (0x5 << 2)
label_414b88:
    if (ctx->pc == 0x414B88u) {
        ctx->pc = 0x414B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B84u;
        // 0x414b88: 0xae130180  sw          $s3, 0x180($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414B8Cu;
        goto label_414b8c;
    }
    ctx->pc = 0x414B84u;
    {
        const bool branch_taken_0x414b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x414B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B84u;
        // 0x414b88: 0xae130180  sw          $s3, 0x180($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414b84) {
            ctx->pc = 0x414B9Cu;
            goto label_414b9c;
        }
    }
    ctx->pc = 0x414B8Cu;
label_414b8c:
    // 0x414b8c: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_414b90:
    if (ctx->pc == 0x414B90u) {
        ctx->pc = 0x414B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B8Cu;
        // 0x414b90: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414B94u;
        goto label_414b94;
    }
    ctx->pc = 0x414B8Cu;
    {
        const bool branch_taken_0x414b8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x414b8c) {
            ctx->pc = 0x414B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x414B8Cu;
            // 0x414b90: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x414BA0u;
            goto label_414ba0;
        }
    }
    ctx->pc = 0x414B94u;
label_414b94:
    // 0x414b94: 0xc105134  jal         func_4144D0
label_414b98:
    if (ctx->pc == 0x414B98u) {
        ctx->pc = 0x414B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B94u;
        // 0x414b98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414B9Cu;
        goto label_414b9c;
    }
    ctx->pc = 0x414B94u;
    SET_GPR_U32(ctx, 31, 0x414B9Cu);
    ctx->pc = 0x414B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414B94u;
    // 0x414b98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4144D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4144D0u, 0x414B94u, 0x414B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414B9Cu;
label_414b9c:
    // 0x414b9c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x414b9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_414ba0:
    // 0x414ba0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x414ba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_414ba4:
    // 0x414ba4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x414ba4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_414ba8:
    // 0x414ba8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x414ba8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_414bac:
    // 0x414bac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x414bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_414bb0:
    // 0x414bb0: 0x3e00008  jr          $ra
label_414bb4:
    if (ctx->pc == 0x414BB4u) {
        ctx->pc = 0x414BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414BB0u;
        // 0x414bb4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414BB8u;
        goto label_414bb8;
    }
    ctx->pc = 0x414BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414BB0u;
        // 0x414bb4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x414BB8u;
label_414bb8:
    // 0x414bb8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x414bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_414bbc:
    // 0x414bbc: 0x0  nop
    ctx->pc = 0x414bbcu;
    // NOP
    ctx->pc = 0x414bc0u;
}
