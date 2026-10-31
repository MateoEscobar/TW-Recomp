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

// Function: sub_00155BC0
// Address: 0x155bc0 - 0x155c78
void sub_00155BC0_0x155bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155BC0_0x155bc0");
#endif

    switch (ctx->pc) {
        case 0x155bc0u: goto label_155bc0;
        case 0x155bc4u: goto label_155bc4;
        case 0x155bc8u: goto label_155bc8;
        case 0x155bccu: goto label_155bcc;
        case 0x155bd0u: goto label_155bd0;
        case 0x155bd4u: goto label_155bd4;
        case 0x155bd8u: goto label_155bd8;
        case 0x155bdcu: goto label_155bdc;
        case 0x155be0u: goto label_155be0;
        case 0x155be4u: goto label_155be4;
        case 0x155be8u: goto label_155be8;
        case 0x155becu: goto label_155bec;
        case 0x155bf0u: goto label_155bf0;
        case 0x155bf4u: goto label_155bf4;
        case 0x155bf8u: goto label_155bf8;
        case 0x155bfcu: goto label_155bfc;
        case 0x155c00u: goto label_155c00;
        case 0x155c04u: goto label_155c04;
        case 0x155c08u: goto label_155c08;
        case 0x155c0cu: goto label_155c0c;
        case 0x155c10u: goto label_155c10;
        case 0x155c14u: goto label_155c14;
        case 0x155c18u: goto label_155c18;
        case 0x155c1cu: goto label_155c1c;
        case 0x155c20u: goto label_155c20;
        case 0x155c24u: goto label_155c24;
        case 0x155c28u: goto label_155c28;
        case 0x155c2cu: goto label_155c2c;
        case 0x155c30u: goto label_155c30;
        case 0x155c34u: goto label_155c34;
        case 0x155c38u: goto label_155c38;
        case 0x155c3cu: goto label_155c3c;
        case 0x155c40u: goto label_155c40;
        case 0x155c44u: goto label_155c44;
        case 0x155c48u: goto label_155c48;
        case 0x155c4cu: goto label_155c4c;
        case 0x155c50u: goto label_155c50;
        case 0x155c54u: goto label_155c54;
        case 0x155c58u: goto label_155c58;
        case 0x155c5cu: goto label_155c5c;
        case 0x155c60u: goto label_155c60;
        case 0x155c64u: goto label_155c64;
        case 0x155c68u: goto label_155c68;
        case 0x155c6cu: goto label_155c6c;
        case 0x155c70u: goto label_155c70;
        case 0x155c74u: goto label_155c74;
        default: break;
    }

    ctx->pc = 0x155bc0u;

label_155bc0:
    // 0x155bc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x155bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_155bc4:
    // 0x155bc4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x155bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_155bc8:
    // 0x155bc8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x155bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_155bcc:
    // 0x155bcc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x155bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_155bd0:
    // 0x155bd0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x155bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_155bd4:
    // 0x155bd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_155bd8:
    // 0x155bd8: 0x8c46ebec  lw          $a2, -0x1414($v0)
    ctx->pc = 0x155bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962156)));
label_155bdc:
    // 0x155bdc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x155bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_155be0:
    // 0x155be0: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x155be0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_155be4:
    // 0x155be4: 0x8c6500b4  lw          $a1, 0xB4($v1)
    ctx->pc = 0x155be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_155be8:
    // 0x155be8: 0xa0f809  jalr        $a1
label_155bec:
    if (ctx->pc == 0x155BECu) {
        ctx->pc = 0x155BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155BE8u;
        // 0x155bec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155BF0u;
        goto label_155bf0;
    }
    ctx->pc = 0x155BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x155BF0u);
        ctx->pc = 0x155BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155BE8u;
        // 0x155bec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155BE8u, 0x155BF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x155BF0u;
label_155bf0:
    // 0x155bf0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x155bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_155bf4:
    // 0x155bf4: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x155bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_155bf8:
    // 0x155bf8: 0x8c700834  lw          $s0, 0x834($v1)
    ctx->pc = 0x155bf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2100)));
label_155bfc:
    // 0x155bfc: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x155bfcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_155c00:
    // 0x155c00: 0x1000000b  b           . + 4 + (0xB << 2)
label_155c04:
    if (ctx->pc == 0x155C04u) {
        ctx->pc = 0x155C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C00u;
        // 0x155c04: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155C08u;
        goto label_155c08;
    }
    ctx->pc = 0x155C00u;
    {
        const bool branch_taken_0x155c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C00u;
        // 0x155c04: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155c00) {
            ctx->pc = 0x155C30u;
            goto label_155c30;
        }
    }
    ctx->pc = 0x155C08u;
label_155c08:
    // 0x155c08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155c0c:
    // 0x155c0c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x155c0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_155c10:
    // 0x155c10: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x155c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_155c14:
    // 0x155c14: 0x40f809  jalr        $v0
label_155c18:
    if (ctx->pc == 0x155C18u) {
        ctx->pc = 0x155C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C14u;
        // 0x155c18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155C1Cu;
        goto label_155c1c;
    }
    ctx->pc = 0x155C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x155C1Cu);
        ctx->pc = 0x155C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C14u;
        // 0x155c18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155C14u, 0x155C1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x155C1Cu;
label_155c1c:
    // 0x155c1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x155c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_155c20:
    // 0x155c20: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x155c20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_155c24:
    // 0x155c24: 0x8c65004c  lw          $a1, 0x4C($v1)
    ctx->pc = 0x155c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_155c28:
    // 0x155c28: 0xa0f809  jalr        $a1
label_155c2c:
    if (ctx->pc == 0x155C2Cu) {
        ctx->pc = 0x155C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C28u;
        // 0x155c2c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155C30u;
        goto label_155c30;
    }
    ctx->pc = 0x155C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x155C30u);
        ctx->pc = 0x155C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C28u;
        // 0x155c2c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155C28u, 0x155C30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x155C30u;
label_155c30:
    // 0x155c30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x155c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_155c34:
    // 0x155c34: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x155c34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_155c38:
    // 0x155c38: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x155c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_155c3c:
    // 0x155c3c: 0x40f809  jalr        $v0
label_155c40:
    if (ctx->pc == 0x155C40u) {
        ctx->pc = 0x155C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C3Cu;
        // 0x155c40: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155C44u;
        goto label_155c44;
    }
    ctx->pc = 0x155C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x155C44u);
        ctx->pc = 0x155C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C3Cu;
        // 0x155c40: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155C3Cu, 0x155C44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x155C44u;
label_155c44:
    // 0x155c44: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
label_155c48:
    if (ctx->pc == 0x155C48u) {
        ctx->pc = 0x155C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C44u;
        // 0x155c48: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155C4Cu;
        goto label_155c4c;
    }
    ctx->pc = 0x155C44u;
    {
        const bool branch_taken_0x155c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x155c44) {
            ctx->pc = 0x155C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155C44u;
            // 0x155c48: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155c08;
        }
    }
    ctx->pc = 0x155C4Cu;
label_155c4c:
    // 0x155c4c: 0xc043eda  jal         func_10FB68
label_155c50:
    if (ctx->pc == 0x155C50u) {
        ctx->pc = 0x155C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C4Cu;
        // 0x155c50: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155C54u;
        goto label_155c54;
    }
    ctx->pc = 0x155C4Cu;
    SET_GPR_U32(ctx, 31, 0x155C54u);
    ctx->pc = 0x155C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155C4Cu;
    // 0x155c50: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FB68u, 0x155C4Cu, 0x155C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C54u;
label_155c54:
    // 0x155c54: 0x8e44b734  lw          $a0, -0x48CC($s2)
    ctx->pc = 0x155c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948660)));
label_155c58:
    // 0x155c58: 0xc0517d8  jal         func_145F60
label_155c5c:
    if (ctx->pc == 0x155C5Cu) {
        ctx->pc = 0x155C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C58u;
        // 0x155c5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155C60u;
        goto label_155c60;
    }
    ctx->pc = 0x155C58u;
    SET_GPR_U32(ctx, 31, 0x155C60u);
    ctx->pc = 0x155C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155C58u;
    // 0x155c5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145F60u, 0x155C58u, 0x155C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C60u;
label_155c60:
    // 0x155c60: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x155c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_155c64:
    // 0x155c64: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x155c64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_155c68:
    // 0x155c68: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x155c68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_155c6c:
    // 0x155c6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_155c70:
    // 0x155c70: 0x3e00008  jr          $ra
label_155c74:
    if (ctx->pc == 0x155C74u) {
        ctx->pc = 0x155C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C70u;
        // 0x155c74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155C78u;
        goto label_fallthrough_0x155c70;
    }
    ctx->pc = 0x155C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C70u;
        // 0x155c74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x155c70:
    ctx->pc = 0x155C78u;
}
