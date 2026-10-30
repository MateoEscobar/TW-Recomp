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

// Function: sub_001D0B70
// Address: 0x1d0b70 - 0x1d0c68
void sub_001D0B70_0x1d0b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0B70_0x1d0b70");
#endif

    switch (ctx->pc) {
        case 0x1d0b70u: goto label_1d0b70;
        case 0x1d0b74u: goto label_1d0b74;
        case 0x1d0b78u: goto label_1d0b78;
        case 0x1d0b7cu: goto label_1d0b7c;
        case 0x1d0b80u: goto label_1d0b80;
        case 0x1d0b84u: goto label_1d0b84;
        case 0x1d0b88u: goto label_1d0b88;
        case 0x1d0b8cu: goto label_1d0b8c;
        case 0x1d0b90u: goto label_1d0b90;
        case 0x1d0b94u: goto label_1d0b94;
        case 0x1d0b98u: goto label_1d0b98;
        case 0x1d0b9cu: goto label_1d0b9c;
        case 0x1d0ba0u: goto label_1d0ba0;
        case 0x1d0ba4u: goto label_1d0ba4;
        case 0x1d0ba8u: goto label_1d0ba8;
        case 0x1d0bacu: goto label_1d0bac;
        case 0x1d0bb0u: goto label_1d0bb0;
        case 0x1d0bb4u: goto label_1d0bb4;
        case 0x1d0bb8u: goto label_1d0bb8;
        case 0x1d0bbcu: goto label_1d0bbc;
        case 0x1d0bc0u: goto label_1d0bc0;
        case 0x1d0bc4u: goto label_1d0bc4;
        case 0x1d0bc8u: goto label_1d0bc8;
        case 0x1d0bccu: goto label_1d0bcc;
        case 0x1d0bd0u: goto label_1d0bd0;
        case 0x1d0bd4u: goto label_1d0bd4;
        case 0x1d0bd8u: goto label_1d0bd8;
        case 0x1d0bdcu: goto label_1d0bdc;
        case 0x1d0be0u: goto label_1d0be0;
        case 0x1d0be4u: goto label_1d0be4;
        case 0x1d0be8u: goto label_1d0be8;
        case 0x1d0becu: goto label_1d0bec;
        case 0x1d0bf0u: goto label_1d0bf0;
        case 0x1d0bf4u: goto label_1d0bf4;
        case 0x1d0bf8u: goto label_1d0bf8;
        case 0x1d0bfcu: goto label_1d0bfc;
        case 0x1d0c00u: goto label_1d0c00;
        case 0x1d0c04u: goto label_1d0c04;
        case 0x1d0c08u: goto label_1d0c08;
        case 0x1d0c0cu: goto label_1d0c0c;
        case 0x1d0c10u: goto label_1d0c10;
        case 0x1d0c14u: goto label_1d0c14;
        case 0x1d0c18u: goto label_1d0c18;
        case 0x1d0c1cu: goto label_1d0c1c;
        case 0x1d0c20u: goto label_1d0c20;
        case 0x1d0c24u: goto label_1d0c24;
        case 0x1d0c28u: goto label_1d0c28;
        case 0x1d0c2cu: goto label_1d0c2c;
        case 0x1d0c30u: goto label_1d0c30;
        case 0x1d0c34u: goto label_1d0c34;
        case 0x1d0c38u: goto label_1d0c38;
        case 0x1d0c3cu: goto label_1d0c3c;
        case 0x1d0c40u: goto label_1d0c40;
        case 0x1d0c44u: goto label_1d0c44;
        case 0x1d0c48u: goto label_1d0c48;
        case 0x1d0c4cu: goto label_1d0c4c;
        case 0x1d0c50u: goto label_1d0c50;
        case 0x1d0c54u: goto label_1d0c54;
        case 0x1d0c58u: goto label_1d0c58;
        case 0x1d0c5cu: goto label_1d0c5c;
        case 0x1d0c60u: goto label_1d0c60;
        case 0x1d0c64u: goto label_1d0c64;
        default: break;
    }

    ctx->pc = 0x1d0b70u;

label_1d0b70:
    // 0x1d0b70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1d0b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1d0b74:
    // 0x1d0b74: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1d0b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1d0b78:
    // 0x1d0b78: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1d0b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1d0b7c:
    // 0x1d0b7c: 0x2442b390  addiu       $v0, $v0, -0x4C70
    ctx->pc = 0x1d0b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947728));
label_1d0b80:
    // 0x1d0b80: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1d0b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_1d0b84:
    // 0x1d0b84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d0b84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d0b88:
    // 0x1d0b88: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1d0b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1d0b8c:
    // 0x1d0b8c: 0x26430450  addiu       $v1, $s2, 0x450
    ctx->pc = 0x1d0b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1104));
label_1d0b90:
    // 0x1d0b90: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1d0b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1d0b94:
    // 0x1d0b94: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1d0b94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d0b98:
    // 0x1d0b98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d0b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d0b9c:
    // 0x1d0b9c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1d0b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_1d0ba0:
    // 0x1d0ba0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d0ba4:
    // 0x1d0ba4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_1d0ba8:
    if (ctx->pc == 0x1D0BA8u) {
        ctx->pc = 0x1D0BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BA4u;
        // 0x1d0ba8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0BACu;
        goto label_1d0bac;
    }
    ctx->pc = 0x1D0BA4u;
    {
        const bool branch_taken_0x1d0ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BA4u;
        // 0x1d0ba8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ba4) {
            ctx->pc = 0x1D0BE0u;
            goto label_1d0be0;
        }
    }
    ctx->pc = 0x1D0BACu;
label_1d0bac:
    // 0x1d0bac: 0x265005f0  addiu       $s0, $s2, 0x5F0
    ctx->pc = 0x1d0bacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1520));
label_1d0bb0:
    // 0x1d0bb0: 0x1070000b  beq         $v1, $s0, . + 4 + (0xB << 2)
label_1d0bb4:
    if (ctx->pc == 0x1D0BB4u) {
        ctx->pc = 0x1D0BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BB0u;
        // 0x1d0bb4: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0BB8u;
        goto label_1d0bb8;
    }
    ctx->pc = 0x1D0BB0u;
    {
        const bool branch_taken_0x1d0bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1D0BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BB0u;
        // 0x1d0bb4: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0bb0) {
            ctx->pc = 0x1D0BE0u;
            goto label_1d0be0;
        }
    }
    ctx->pc = 0x1D0BB8u;
label_1d0bb8:
    // 0x1d0bb8: 0x2610ff30  addiu       $s0, $s0, -0xD0
    ctx->pc = 0x1d0bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967088));
label_1d0bbc:
    // 0x1d0bbc: 0x0  nop
    ctx->pc = 0x1d0bbcu;
    // NOP
label_1d0bc0:
    // 0x1d0bc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0bc4:
    // 0x1d0bc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d0bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d0bc8:
    // 0x1d0bc8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1d0bc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_1d0bcc:
    // 0x1d0bcc: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x1d0bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_1d0bd0:
    // 0x1d0bd0: 0x60f809  jalr        $v1
label_1d0bd4:
    if (ctx->pc == 0x1D0BD4u) {
        ctx->pc = 0x1D0BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BD0u;
        // 0x1d0bd4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0BD8u;
        goto label_1d0bd8;
    }
    ctx->pc = 0x1D0BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D0BD8u);
        ctx->pc = 0x1D0BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BD0u;
        // 0x1d0bd4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0BD0u, 0x1D0BD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D0BD8u;
label_1d0bd8:
    // 0x1d0bd8: 0x1630fff9  bne         $s1, $s0, . + 4 + (-0x7 << 2)
label_1d0bdc:
    if (ctx->pc == 0x1D0BDCu) {
        ctx->pc = 0x1D0BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BD8u;
        // 0x1d0bdc: 0x2610ff30  addiu       $s0, $s0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0BE0u;
        goto label_1d0be0;
    }
    ctx->pc = 0x1D0BD8u;
    {
        const bool branch_taken_0x1d0bd8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D0BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BD8u;
        // 0x1d0bdc: 0x2610ff30  addiu       $s0, $s0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0bd8) {
            ctx->pc = 0x1D0BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0bc0;
        }
    }
    ctx->pc = 0x1D0BE0u;
label_1d0be0:
    // 0x1d0be0: 0x26510250  addiu       $s1, $s2, 0x250
    ctx->pc = 0x1d0be0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
label_1d0be4:
    // 0x1d0be4: 0x26530140  addiu       $s3, $s2, 0x140
    ctx->pc = 0x1d0be4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
label_1d0be8:
    // 0x1d0be8: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_1d0bec:
    if (ctx->pc == 0x1D0BECu) {
        ctx->pc = 0x1D0BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BE8u;
        // 0x1d0bec: 0x26540060  addiu       $s4, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0BF0u;
        goto label_1d0bf0;
    }
    ctx->pc = 0x1D0BE8u;
    {
        const bool branch_taken_0x1d0be8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BE8u;
        // 0x1d0bec: 0x26540060  addiu       $s4, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0be8) {
            ctx->pc = 0x1D0C20u;
            goto label_1d0c20;
        }
    }
    ctx->pc = 0x1D0BF0u;
label_1d0bf0:
    // 0x1d0bf0: 0x26500450  addiu       $s0, $s2, 0x450
    ctx->pc = 0x1d0bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1104));
label_1d0bf4:
    // 0x1d0bf4: 0x5230000b  beql        $s1, $s0, . + 4 + (0xB << 2)
label_1d0bf8:
    if (ctx->pc == 0x1D0BF8u) {
        ctx->pc = 0x1D0BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BF4u;
        // 0x1d0bf8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0BFCu;
        goto label_1d0bfc;
    }
    ctx->pc = 0x1D0BF4u;
    {
        const bool branch_taken_0x1d0bf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        if (branch_taken_0x1d0bf4) {
            ctx->pc = 0x1D0BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0BF4u;
            // 0x1d0bf8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0C24u;
            goto label_1d0c24;
        }
    }
    ctx->pc = 0x1D0BFCu;
label_1d0bfc:
    // 0x1d0bfc: 0x2610ff00  addiu       $s0, $s0, -0x100
    ctx->pc = 0x1d0bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
label_1d0c00:
    // 0x1d0c00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0c04:
    // 0x1d0c04: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d0c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d0c08:
    // 0x1d0c08: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1d0c08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_1d0c0c:
    // 0x1d0c0c: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x1d0c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_1d0c10:
    // 0x1d0c10: 0x60f809  jalr        $v1
label_1d0c14:
    if (ctx->pc == 0x1D0C14u) {
        ctx->pc = 0x1D0C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C10u;
        // 0x1d0c14: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0C18u;
        goto label_1d0c18;
    }
    ctx->pc = 0x1D0C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D0C18u);
        ctx->pc = 0x1D0C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C10u;
        // 0x1d0c14: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0C10u, 0x1D0C18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D0C18u;
label_1d0c18:
    // 0x1d0c18: 0x1630fff9  bne         $s1, $s0, . + 4 + (-0x7 << 2)
label_1d0c1c:
    if (ctx->pc == 0x1D0C1Cu) {
        ctx->pc = 0x1D0C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C18u;
        // 0x1d0c1c: 0x2610ff00  addiu       $s0, $s0, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0C20u;
        goto label_1d0c20;
    }
    ctx->pc = 0x1D0C18u;
    {
        const bool branch_taken_0x1d0c18 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D0C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C18u;
        // 0x1d0c1c: 0x2610ff00  addiu       $s0, $s0, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c18) {
            ctx->pc = 0x1D0C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0c00;
        }
    }
    ctx->pc = 0x1D0C20u;
label_1d0c20:
    // 0x1d0c20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d0c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d0c24:
    // 0x1d0c24: 0xc06870c  jal         func_1A1C30
label_1d0c28:
    if (ctx->pc == 0x1D0C28u) {
        ctx->pc = 0x1D0C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C24u;
        // 0x1d0c28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0C2Cu;
        goto label_1d0c2c;
    }
    ctx->pc = 0x1D0C24u;
    SET_GPR_U32(ctx, 31, 0x1D0C2Cu);
    ctx->pc = 0x1D0C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0C24u;
    // 0x1d0c28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1D0C24u, 0x1D0C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0C2Cu;
label_1d0c2c:
    // 0x1d0c2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d0c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d0c30:
    // 0x1d0c30: 0xc0733f0  jal         func_1CCFC0
label_1d0c34:
    if (ctx->pc == 0x1D0C34u) {
        ctx->pc = 0x1D0C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C30u;
        // 0x1d0c34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0C38u;
        goto label_1d0c38;
    }
    ctx->pc = 0x1D0C30u;
    SET_GPR_U32(ctx, 31, 0x1D0C38u);
    ctx->pc = 0x1D0C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0C30u;
    // 0x1d0c34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x1D0C30u, 0x1D0C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0C38u;
label_1d0c38:
    // 0x1d0c38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d0c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d0c3c:
    // 0x1d0c3c: 0xc06a39e  jal         func_1A8E78
label_1d0c40:
    if (ctx->pc == 0x1D0C40u) {
        ctx->pc = 0x1D0C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C3Cu;
        // 0x1d0c40: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0C44u;
        goto label_1d0c44;
    }
    ctx->pc = 0x1D0C3Cu;
    SET_GPR_U32(ctx, 31, 0x1D0C44u);
    ctx->pc = 0x1D0C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0C3Cu;
    // 0x1d0c40: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1D0C3Cu, 0x1D0C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0C44u;
label_1d0c44:
    // 0x1d0c44: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1d0c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d0c48:
    // 0x1d0c48: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1d0c48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d0c4c:
    // 0x1d0c4c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1d0c4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d0c50:
    // 0x1d0c50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d0c50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d0c54:
    // 0x1d0c54: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1d0c54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d0c58:
    // 0x1d0c58: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1d0c58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d0c5c:
    // 0x1d0c5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0c60:
    // 0x1d0c60: 0x3e00008  jr          $ra
label_1d0c64:
    if (ctx->pc == 0x1D0C64u) {
        ctx->pc = 0x1D0C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C60u;
        // 0x1d0c64: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0C68u;
        goto label_fallthrough_0x1d0c60;
    }
    ctx->pc = 0x1D0C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C60u;
        // 0x1d0c64: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d0c60:
    ctx->pc = 0x1D0C68u;
}
