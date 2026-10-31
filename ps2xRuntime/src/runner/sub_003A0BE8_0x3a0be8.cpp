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

// Function: sub_003A0BE8
// Address: 0x3a0be8 - 0x3a0d40
void sub_003A0BE8_0x3a0be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0BE8_0x3a0be8");
#endif

    switch (ctx->pc) {
        case 0x3a0c28u: goto label_3a0c28;
        case 0x3a0c50u: goto label_3a0c50;
        case 0x3a0c70u: goto label_3a0c70;
        case 0x3a0cc0u: goto label_3a0cc0;
        case 0x3a0d00u: goto label_3a0d00;
        default: break;
    }

    ctx->pc = 0x3a0be8u;

    // 0x3a0be8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a0be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3a0bec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3a0becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3a0bf0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3a0bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3a0bf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a0bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0bf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a0bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3a0bfc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3a0bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3a0c00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a0c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a0c04: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x3a0c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x3a0c08: 0x50600047  beql        $v1, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x3A0C08u;
    {
        const bool branch_taken_0x3a0c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0c08) {
            ctx->pc = 0x3A0C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0C08u;
            // 0x3a0c0c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0D28u;
            goto label_3a0d28;
        }
    }
    ctx->pc = 0x3A0C10u;
    // 0x3a0c10: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x3a0c10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x3a0c14: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3A0C14u;
    {
        const bool branch_taken_0x3a0c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0C14u;
        // 0x3a0c18: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0c14) {
            ctx->pc = 0x3A0C88u;
            goto label_3a0c88;
        }
    }
    ctx->pc = 0x3A0C1Cu;
    // 0x3a0c1c: 0x24130007  addiu       $s3, $zero, 0x7
    ctx->pc = 0x3a0c1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3a0c20: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a0c20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0c24: 0x0  nop
    ctx->pc = 0x3a0c24u;
    // NOP
label_3a0c28:
    // 0x3a0c28: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x3a0c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x3a0c2c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3a0c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3a0c30: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x3a0c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x3a0c34: 0x5080000f  beql        $a0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3A0C34u;
    {
        const bool branch_taken_0x3a0c34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0c34) {
            ctx->pc = 0x3A0C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0C34u;
            // 0x3a0c38: 0x8e0300a0  lw          $v1, 0xA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0C74u;
            goto label_3a0c74;
        }
    }
    ctx->pc = 0x3A0C3Cu;
    // 0x3a0c3c: 0x8c8400d8  lw          $a0, 0xD8($a0)
    ctx->pc = 0x3a0c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x3a0c40: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3A0C40u;
    {
        const bool branch_taken_0x3a0c40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0c40) {
            ctx->pc = 0x3A0C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0C40u;
            // 0x3a0c44: 0x8e0300a0  lw          $v1, 0xA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0C74u;
            goto label_3a0c74;
        }
    }
    ctx->pc = 0x3A0C48u;
    // 0x3a0c48: 0xc05d462  jal         func_175188
    ctx->pc = 0x3A0C48u;
    SET_GPR_U32(ctx, 31, 0x3A0C50u);
    ctx->pc = 0x175188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175188u, 0x3A0C48u, 0x3A0C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0C50u;
label_3a0c50:
    // 0x3a0c50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a0c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0c54: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A0C54u;
    {
        const bool branch_taken_0x3a0c54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0c54) {
            ctx->pc = 0x3A0C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0C54u;
            // 0x3a0c58: 0x8e0300a0  lw          $v1, 0xA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0C74u;
            goto label_3a0c74;
        }
    }
    ctx->pc = 0x3A0C5Cu;
    // 0x3a0c5c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x3a0c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3a0c60: 0x54530004  bnel        $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A0C60u;
    {
        const bool branch_taken_0x3a0c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x3a0c60) {
            ctx->pc = 0x3A0C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0C60u;
            // 0x3a0c64: 0x8e0300a0  lw          $v1, 0xA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0C74u;
            goto label_3a0c74;
        }
    }
    ctx->pc = 0x3A0C68u;
    // 0x3a0c68: 0xc041b14  jal         func_106C50
    ctx->pc = 0x3A0C68u;
    SET_GPR_U32(ctx, 31, 0x3A0C70u);
    ctx->pc = 0x3A0C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0C68u;
    // 0x3a0c6c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C50u, 0x3A0C68u, 0x3A0C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0C70u;
label_3a0c70:
    // 0x3a0c70: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x3a0c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3a0c74:
    // 0x3a0c74: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a0c74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3a0c78: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x3a0c78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x3a0c7c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3a0c7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3a0c80: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x3A0C80u;
    {
        const bool branch_taken_0x3a0c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0C80u;
        // 0x3a0c84: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0c80) {
            ctx->pc = 0x3A0C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0c28;
        }
    }
    ctx->pc = 0x3A0C88u;
label_3a0c88:
    // 0x3a0c88: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x3a0c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x3a0c8c: 0x90430022  lbu         $v1, 0x22($v0)
    ctx->pc = 0x3a0c8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x3a0c90: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A0C90u;
    {
        const bool branch_taken_0x3a0c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0C90u;
        // 0x3a0c94: 0x2403fffb  addiu       $v1, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0c90) {
            ctx->pc = 0x3A0CA8u;
            goto label_3a0ca8;
        }
    }
    ctx->pc = 0x3A0C98u;
    // 0x3a0c98: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x3a0c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x3a0c9c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x3a0c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x3a0ca0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a0ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3a0ca4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x3a0ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_3a0ca8:
    // 0x3a0ca8: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x3a0ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x3a0cac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a0cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0cb0: 0x90620021  lbu         $v0, 0x21($v1)
    ctx->pc = 0x3a0cb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 33)));
    // 0x3a0cb4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A0CB4u;
    {
        const bool branch_taken_0x3a0cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0CB4u;
        // 0x3a0cb8: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0cb4) {
            ctx->pc = 0x3A0CECu;
            goto label_3a0cec;
        }
    }
    ctx->pc = 0x3A0CBCu;
    // 0x3a0cbc: 0x2406fffb  addiu       $a2, $zero, -0x5
    ctx->pc = 0x3a0cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3a0cc0:
    // 0x3a0cc0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x3a0cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x3a0cc4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a0cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a0cc8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x3a0cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x3a0ccc: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x3a0cccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x3a0cd0: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x3a0cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x3a0cd4: 0x90620021  lbu         $v0, 0x21($v1)
    ctx->pc = 0x3a0cd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 33)));
    // 0x3a0cd8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x3a0cd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3a0cdc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3A0CDCu;
    {
        const bool branch_taken_0x3a0cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0CDCu;
        // 0x3a0ce0: 0x24840090  addiu       $a0, $a0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0cdc) {
            ctx->pc = 0x3A0CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0cc0;
        }
    }
    ctx->pc = 0x3A0CE4u;
    // 0x3a0ce4: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x3a0ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x3a0ce8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a0ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a0cec:
    // 0x3a0cec: 0x90620023  lbu         $v0, 0x23($v1)
    ctx->pc = 0x3a0cecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
    // 0x3a0cf0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3A0CF0u;
    {
        const bool branch_taken_0x3a0cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0CF0u;
        // 0x3a0cf4: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0cf0) {
            ctx->pc = 0x3A0D24u;
            goto label_3a0d24;
        }
    }
    ctx->pc = 0x3A0CF8u;
    // 0x3a0cf8: 0x2406fffb  addiu       $a2, $zero, -0x5
    ctx->pc = 0x3a0cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x3a0cfc: 0x0  nop
    ctx->pc = 0x3a0cfcu;
    // NOP
label_3a0d00:
    // 0x3a0d00: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x3a0d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x3a0d04: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a0d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a0d08: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x3a0d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x3a0d0c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x3a0d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x3a0d10: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x3a0d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x3a0d14: 0x90620023  lbu         $v0, 0x23($v1)
    ctx->pc = 0x3a0d14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
    // 0x3a0d18: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x3a0d18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3a0d1c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3A0D1Cu;
    {
        const bool branch_taken_0x3a0d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0D1Cu;
        // 0x3a0d20: 0x24840090  addiu       $a0, $a0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0d1c) {
            ctx->pc = 0x3A0D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0d00;
        }
    }
    ctx->pc = 0x3A0D24u;
label_3a0d24:
    // 0x3a0d24: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3a0d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a0d28:
    // 0x3a0d28: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3a0d28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a0d2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a0d2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a0d30: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3a0d30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a0d34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a0d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0d38: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0D38u;
        // 0x3a0d3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0D40u;
}
