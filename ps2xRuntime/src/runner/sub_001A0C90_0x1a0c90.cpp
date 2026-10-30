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

// Function: sub_001A0C90
// Address: 0x1a0c90 - 0x1a0d28
void sub_001A0C90_0x1a0c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0C90_0x1a0c90");
#endif

    switch (ctx->pc) {
        case 0x1a0c90u: goto label_1a0c90;
        case 0x1a0c94u: goto label_1a0c94;
        case 0x1a0c98u: goto label_1a0c98;
        case 0x1a0c9cu: goto label_1a0c9c;
        case 0x1a0ca0u: goto label_1a0ca0;
        case 0x1a0ca4u: goto label_1a0ca4;
        case 0x1a0ca8u: goto label_1a0ca8;
        case 0x1a0cacu: goto label_1a0cac;
        case 0x1a0cb0u: goto label_1a0cb0;
        case 0x1a0cb4u: goto label_1a0cb4;
        case 0x1a0cb8u: goto label_1a0cb8;
        case 0x1a0cbcu: goto label_1a0cbc;
        case 0x1a0cc0u: goto label_1a0cc0;
        case 0x1a0cc4u: goto label_1a0cc4;
        case 0x1a0cc8u: goto label_1a0cc8;
        case 0x1a0cccu: goto label_1a0ccc;
        case 0x1a0cd0u: goto label_1a0cd0;
        case 0x1a0cd4u: goto label_1a0cd4;
        case 0x1a0cd8u: goto label_1a0cd8;
        case 0x1a0cdcu: goto label_1a0cdc;
        case 0x1a0ce0u: goto label_1a0ce0;
        case 0x1a0ce4u: goto label_1a0ce4;
        case 0x1a0ce8u: goto label_1a0ce8;
        case 0x1a0cecu: goto label_1a0cec;
        case 0x1a0cf0u: goto label_1a0cf0;
        case 0x1a0cf4u: goto label_1a0cf4;
        case 0x1a0cf8u: goto label_1a0cf8;
        case 0x1a0cfcu: goto label_1a0cfc;
        case 0x1a0d00u: goto label_1a0d00;
        case 0x1a0d04u: goto label_1a0d04;
        case 0x1a0d08u: goto label_1a0d08;
        case 0x1a0d0cu: goto label_1a0d0c;
        case 0x1a0d10u: goto label_1a0d10;
        case 0x1a0d14u: goto label_1a0d14;
        case 0x1a0d18u: goto label_1a0d18;
        case 0x1a0d1cu: goto label_1a0d1c;
        case 0x1a0d20u: goto label_1a0d20;
        case 0x1a0d24u: goto label_1a0d24;
        default: break;
    }

    ctx->pc = 0x1a0c90u;

label_1a0c90:
    // 0x1a0c90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a0c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a0c94:
    // 0x1a0c94: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a0c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1a0c98:
    // 0x1a0c98: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1a0c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1a0c9c:
    // 0x1a0c9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a0c9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a0ca0:
    // 0x1a0ca0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1a0ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1a0ca4:
    // 0x1a0ca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a0ca8:
    // 0x1a0ca8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a0ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a0cac:
    // 0x1a0cac: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1a0cacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1a0cb0:
    // 0x1a0cb0: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1a0cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1a0cb4:
    // 0x1a0cb4: 0x40f809  jalr        $v0
label_1a0cb8:
    if (ctx->pc == 0x1A0CB8u) {
        ctx->pc = 0x1A0CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0CB4u;
        // 0x1a0cb8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0CBCu;
        goto label_1a0cbc;
    }
    ctx->pc = 0x1A0CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A0CBCu);
        ctx->pc = 0x1A0CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0CB4u;
        // 0x1a0cb8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0CB4u, 0x1A0CBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0CBCu;
label_1a0cbc:
    // 0x1a0cbc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1a0cc0:
    if (ctx->pc == 0x1A0CC0u) {
        ctx->pc = 0x1A0CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0CBCu;
        // 0x1a0cc0: 0x26300040  addiu       $s0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0CC4u;
        goto label_1a0cc4;
    }
    ctx->pc = 0x1A0CBCu;
    {
        const bool branch_taken_0x1a0cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0CBCu;
        // 0x1a0cc0: 0x26300040  addiu       $s0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0cbc) {
            ctx->pc = 0x1A0D10u;
            goto label_1a0d10;
        }
    }
    ctx->pc = 0x1A0CC4u;
label_1a0cc4:
    // 0x1a0cc4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a0cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1a0cc8:
    // 0x1a0cc8: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x1a0cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_1a0ccc:
    // 0x1a0ccc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a0cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1a0cd0:
    // 0x1a0cd0: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
label_1a0cd4:
    if (ctx->pc == 0x1A0CD4u) {
        ctx->pc = 0x1A0CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0CD0u;
        // 0x1a0cd4: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0CD8u;
        goto label_1a0cd8;
    }
    ctx->pc = 0x1A0CD0u;
    {
        const bool branch_taken_0x1a0cd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A0CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0CD0u;
        // 0x1a0cd4: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0cd0) {
            ctx->pc = 0x1A0D10u;
            goto label_1a0d10;
        }
    }
    ctx->pc = 0x1A0CD8u;
label_1a0cd8:
    // 0x1a0cd8: 0xc0616ac  jal         func_185AB0
label_1a0cdc:
    if (ctx->pc == 0x1A0CDCu) {
        ctx->pc = 0x1A0CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0CD8u;
        // 0x1a0cdc: 0x8e44cd4c  lw          $a0, -0x32B4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0CE0u;
        goto label_1a0ce0;
    }
    ctx->pc = 0x1A0CD8u;
    SET_GPR_U32(ctx, 31, 0x1A0CE0u);
    ctx->pc = 0x1A0CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0CD8u;
    // 0x1a0cdc: 0x8e44cd4c  lw          $a0, -0x32B4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x1A0CD8u, 0x1A0CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0CE0u;
label_1a0ce0:
    // 0x1a0ce0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_1a0ce4:
    if (ctx->pc == 0x1A0CE4u) {
        ctx->pc = 0x1A0CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0CE0u;
        // 0x1a0ce4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0CE8u;
        goto label_1a0ce8;
    }
    ctx->pc = 0x1A0CE0u;
    {
        const bool branch_taken_0x1a0ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0ce0) {
            ctx->pc = 0x1A0CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0CE0u;
            // 0x1a0ce4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0D14u;
            goto label_1a0d14;
        }
    }
    ctx->pc = 0x1A0CE8u;
label_1a0ce8:
    // 0x1a0ce8: 0x8e44cd4c  lw          $a0, -0x32B4($s2)
    ctx->pc = 0x1a0ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954316)));
label_1a0cec:
    // 0x1a0cec: 0xc0616ac  jal         func_185AB0
label_1a0cf0:
    if (ctx->pc == 0x1A0CF0u) {
        ctx->pc = 0x1A0CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0CECu;
        // 0x1a0cf0: 0x8e0500c4  lw          $a1, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0CF4u;
        goto label_1a0cf4;
    }
    ctx->pc = 0x1A0CECu;
    SET_GPR_U32(ctx, 31, 0x1A0CF4u);
    ctx->pc = 0x1A0CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0CECu;
    // 0x1a0cf0: 0x8e0500c4  lw          $a1, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x1A0CECu, 0x1A0CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0CF4u;
label_1a0cf4:
    // 0x1a0cf4: 0x90430011  lbu         $v1, 0x11($v0)
    ctx->pc = 0x1a0cf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
label_1a0cf8:
    // 0x1a0cf8: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_1a0cfc:
    if (ctx->pc == 0x1A0CFCu) {
        ctx->pc = 0x1A0CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0CF8u;
        // 0x1a0cfc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0D00u;
        goto label_1a0d00;
    }
    ctx->pc = 0x1A0CF8u;
    {
        const bool branch_taken_0x1a0cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0cf8) {
            ctx->pc = 0x1A0CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0CF8u;
            // 0x1a0cfc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0D14u;
            goto label_1a0d14;
        }
    }
    ctx->pc = 0x1A0D00u;
label_1a0d00:
    // 0x1a0d00: 0xc068998  jal         func_1A2660
label_1a0d04:
    if (ctx->pc == 0x1A0D04u) {
        ctx->pc = 0x1A0D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D00u;
        // 0x1a0d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0D08u;
        goto label_1a0d08;
    }
    ctx->pc = 0x1A0D00u;
    SET_GPR_U32(ctx, 31, 0x1A0D08u);
    ctx->pc = 0x1A0D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0D00u;
    // 0x1a0d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1A0D00u, 0x1A0D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0D08u;
label_1a0d08:
    // 0x1a0d08: 0xc068998  jal         func_1A2660
label_1a0d0c:
    if (ctx->pc == 0x1A0D0Cu) {
        ctx->pc = 0x1A0D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D08u;
        // 0x1a0d0c: 0x26240140  addiu       $a0, $s1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0D10u;
        goto label_1a0d10;
    }
    ctx->pc = 0x1A0D08u;
    SET_GPR_U32(ctx, 31, 0x1A0D10u);
    ctx->pc = 0x1A0D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0D08u;
    // 0x1a0d0c: 0x26240140  addiu       $a0, $s1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1A0D08u, 0x1A0D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0D10u;
label_1a0d10:
    // 0x1a0d10: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1a0d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a0d14:
    // 0x1a0d14: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a0d14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a0d18:
    // 0x1a0d18: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1a0d18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a0d1c:
    // 0x1a0d1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a0d20:
    // 0x1a0d20: 0x3e00008  jr          $ra
label_1a0d24:
    if (ctx->pc == 0x1A0D24u) {
        ctx->pc = 0x1A0D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D20u;
        // 0x1a0d24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0D28u;
        goto label_fallthrough_0x1a0d20;
    }
    ctx->pc = 0x1A0D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D20u;
        // 0x1a0d24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a0d20:
    ctx->pc = 0x1A0D28u;
}
