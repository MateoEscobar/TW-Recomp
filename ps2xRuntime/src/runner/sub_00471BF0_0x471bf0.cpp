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

// Function: sub_00471BF0
// Address: 0x471bf0 - 0x471cb0
void sub_00471BF0_0x471bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00471BF0_0x471bf0");
#endif

    switch (ctx->pc) {
        case 0x471bf0u: goto label_471bf0;
        case 0x471bf4u: goto label_471bf4;
        case 0x471bf8u: goto label_471bf8;
        case 0x471bfcu: goto label_471bfc;
        case 0x471c00u: goto label_471c00;
        case 0x471c04u: goto label_471c04;
        case 0x471c08u: goto label_471c08;
        case 0x471c0cu: goto label_471c0c;
        case 0x471c10u: goto label_471c10;
        case 0x471c14u: goto label_471c14;
        case 0x471c18u: goto label_471c18;
        case 0x471c1cu: goto label_471c1c;
        case 0x471c20u: goto label_471c20;
        case 0x471c24u: goto label_471c24;
        case 0x471c28u: goto label_471c28;
        case 0x471c2cu: goto label_471c2c;
        case 0x471c30u: goto label_471c30;
        case 0x471c34u: goto label_471c34;
        case 0x471c38u: goto label_471c38;
        case 0x471c3cu: goto label_471c3c;
        case 0x471c40u: goto label_471c40;
        case 0x471c44u: goto label_471c44;
        case 0x471c48u: goto label_471c48;
        case 0x471c4cu: goto label_471c4c;
        case 0x471c50u: goto label_471c50;
        case 0x471c54u: goto label_471c54;
        case 0x471c58u: goto label_471c58;
        case 0x471c5cu: goto label_471c5c;
        case 0x471c60u: goto label_471c60;
        case 0x471c64u: goto label_471c64;
        case 0x471c68u: goto label_471c68;
        case 0x471c6cu: goto label_471c6c;
        case 0x471c70u: goto label_471c70;
        case 0x471c74u: goto label_471c74;
        case 0x471c78u: goto label_471c78;
        case 0x471c7cu: goto label_471c7c;
        case 0x471c80u: goto label_471c80;
        case 0x471c84u: goto label_471c84;
        case 0x471c88u: goto label_471c88;
        case 0x471c8cu: goto label_471c8c;
        case 0x471c90u: goto label_471c90;
        case 0x471c94u: goto label_471c94;
        case 0x471c98u: goto label_471c98;
        case 0x471c9cu: goto label_471c9c;
        case 0x471ca0u: goto label_471ca0;
        case 0x471ca4u: goto label_471ca4;
        case 0x471ca8u: goto label_471ca8;
        case 0x471cacu: goto label_471cac;
        default: break;
    }

    ctx->pc = 0x471bf0u;

label_471bf0:
    // 0x471bf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x471bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_471bf4:
    // 0x471bf4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x471bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_471bf8:
    // 0x471bf8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x471bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_471bfc:
    // 0x471bfc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x471bfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_471c00:
    // 0x471c00: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x471c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_471c04:
    // 0x471c04: 0x2632003c  addiu       $s2, $s1, 0x3C
    ctx->pc = 0x471c04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
label_471c08:
    // 0x471c08: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x471c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_471c0c:
    // 0x471c0c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x471c0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_471c10:
    // 0x471c10: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x471c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_471c14:
    // 0x471c14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x471c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_471c18:
    // 0x471c18: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x471c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_471c1c:
    // 0x471c1c: 0x1092000d  beq         $a0, $s2, . + 4 + (0xD << 2)
label_471c20:
    if (ctx->pc == 0x471C20u) {
        ctx->pc = 0x471C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471C1Cu;
        // 0x471c20: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471C24u;
        goto label_471c24;
    }
    ctx->pc = 0x471C1Cu;
    {
        const bool branch_taken_0x471c1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        ctx->pc = 0x471C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471C1Cu;
        // 0x471c20: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471c1c) {
            ctx->pc = 0x471C54u;
            goto label_471c54;
        }
    }
    ctx->pc = 0x471C24u;
label_471c24:
    // 0x471c24: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x471c24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_471c28:
    // 0x471c28: 0x5242000b  beql        $s2, $v0, . + 4 + (0xB << 2)
label_471c2c:
    if (ctx->pc == 0x471C2Cu) {
        ctx->pc = 0x471C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471C28u;
        // 0x471c2c: 0x8e240034  lw          $a0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471C30u;
        goto label_471c30;
    }
    ctx->pc = 0x471C28u;
    {
        const bool branch_taken_0x471c28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x471c28) {
            ctx->pc = 0x471C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x471C28u;
            // 0x471c2c: 0x8e240034  lw          $a0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x471C58u;
            goto label_471c58;
        }
    }
    ctx->pc = 0x471C30u;
label_471c30:
    // 0x471c30: 0x2444ffcc  addiu       $a0, $v0, -0x34
    ctx->pc = 0x471c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967244));
label_471c34:
    // 0x471c34: 0x0  nop
    ctx->pc = 0x471c34u;
    // NOP
label_471c38:
    // 0x471c38: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x471c38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_471c3c:
    // 0x471c3c: 0x280f809  jalr        $s4
label_471c40:
    if (ctx->pc == 0x471C40u) {
        ctx->pc = 0x471C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471C3Cu;
        // 0x471c40: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471C44u;
        goto label_471c44;
    }
    ctx->pc = 0x471C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x471C44u);
        ctx->pc = 0x471C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471C3Cu;
        // 0x471c40: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471C3Cu, 0x471C44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471C44u;
label_471c44:
    // 0x471c44: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_471c48:
    if (ctx->pc == 0x471C48u) {
        ctx->pc = 0x471C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471C44u;
        // 0x471c48: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471C4Cu;
        goto label_471c4c;
    }
    ctx->pc = 0x471C44u;
    {
        const bool branch_taken_0x471c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x471C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471C44u;
        // 0x471c48: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471c44) {
            ctx->pc = 0x471C8Cu;
            goto label_471c8c;
        }
    }
    ctx->pc = 0x471C4Cu;
label_471c4c:
    // 0x471c4c: 0x1642fffa  bne         $s2, $v0, . + 4 + (-0x6 << 2)
label_471c50:
    if (ctx->pc == 0x471C50u) {
        ctx->pc = 0x471C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471C4Cu;
        // 0x471c50: 0x2444ffcc  addiu       $a0, $v0, -0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967244));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471C54u;
        goto label_471c54;
    }
    ctx->pc = 0x471C4Cu;
    {
        const bool branch_taken_0x471c4c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x471C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471C4Cu;
        // 0x471c50: 0x2444ffcc  addiu       $a0, $v0, -0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471c4c) {
            ctx->pc = 0x471C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_471c38;
        }
    }
    ctx->pc = 0x471C54u;
label_471c54:
    // 0x471c54: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x471c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_471c58:
    // 0x471c58: 0x26320034  addiu       $s2, $s1, 0x34
    ctx->pc = 0x471c58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
label_471c5c:
    // 0x471c5c: 0x1092000b  beq         $a0, $s2, . + 4 + (0xB << 2)
label_471c60:
    if (ctx->pc == 0x471C60u) {
        ctx->pc = 0x471C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471C5Cu;
        // 0x471c60: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471C64u;
        goto label_471c64;
    }
    ctx->pc = 0x471C5Cu;
    {
        const bool branch_taken_0x471c5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        ctx->pc = 0x471C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471C5Cu;
        // 0x471c60: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471c5c) {
            ctx->pc = 0x471C8Cu;
            goto label_471c8c;
        }
    }
    ctx->pc = 0x471C64u;
label_471c64:
    // 0x471c64: 0x5242000a  beql        $s2, $v0, . + 4 + (0xA << 2)
label_471c68:
    if (ctx->pc == 0x471C68u) {
        ctx->pc = 0x471C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471C64u;
        // 0x471c68: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471C6Cu;
        goto label_471c6c;
    }
    ctx->pc = 0x471C64u;
    {
        const bool branch_taken_0x471c64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x471c64) {
            ctx->pc = 0x471C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x471C64u;
            // 0x471c68: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x471C90u;
            goto label_471c90;
        }
    }
    ctx->pc = 0x471C6Cu;
label_471c6c:
    // 0x471c6c: 0x2444ffcc  addiu       $a0, $v0, -0x34
    ctx->pc = 0x471c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967244));
label_471c70:
    // 0x471c70: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x471c70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_471c74:
    // 0x471c74: 0x280f809  jalr        $s4
label_471c78:
    if (ctx->pc == 0x471C78u) {
        ctx->pc = 0x471C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471C74u;
        // 0x471c78: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471C7Cu;
        goto label_471c7c;
    }
    ctx->pc = 0x471C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x471C7Cu);
        ctx->pc = 0x471C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471C74u;
        // 0x471c78: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471C74u, 0x471C7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471C7Cu;
label_471c7c:
    // 0x471c7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_471c80:
    if (ctx->pc == 0x471C80u) {
        ctx->pc = 0x471C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471C7Cu;
        // 0x471c80: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471C84u;
        goto label_471c84;
    }
    ctx->pc = 0x471C7Cu;
    {
        const bool branch_taken_0x471c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x471C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471C7Cu;
        // 0x471c80: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471c7c) {
            ctx->pc = 0x471C8Cu;
            goto label_471c8c;
        }
    }
    ctx->pc = 0x471C84u;
label_471c84:
    // 0x471c84: 0x1642fffa  bne         $s2, $v0, . + 4 + (-0x6 << 2)
label_471c88:
    if (ctx->pc == 0x471C88u) {
        ctx->pc = 0x471C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471C84u;
        // 0x471c88: 0x2444ffcc  addiu       $a0, $v0, -0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967244));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471C8Cu;
        goto label_471c8c;
    }
    ctx->pc = 0x471C84u;
    {
        const bool branch_taken_0x471c84 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x471C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471C84u;
        // 0x471c88: 0x2444ffcc  addiu       $a0, $v0, -0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471c84) {
            ctx->pc = 0x471C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_471c70;
        }
    }
    ctx->pc = 0x471C8Cu;
label_471c8c:
    // 0x471c8c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x471c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_471c90:
    // 0x471c90: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x471c90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_471c94:
    // 0x471c94: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x471c94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_471c98:
    // 0x471c98: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x471c98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_471c9c:
    // 0x471c9c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x471c9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_471ca0:
    // 0x471ca0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x471ca0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_471ca4:
    // 0x471ca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x471ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_471ca8:
    // 0x471ca8: 0x3e00008  jr          $ra
label_471cac:
    if (ctx->pc == 0x471CACu) {
        ctx->pc = 0x471CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471CA8u;
        // 0x471cac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471CB0u;
        goto label_fallthrough_0x471ca8;
    }
    ctx->pc = 0x471CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x471CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471CA8u;
        // 0x471cac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x471ca8:
    ctx->pc = 0x471CB0u;
}
