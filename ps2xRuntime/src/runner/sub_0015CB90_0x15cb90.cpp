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

// Function: sub_0015CB90
// Address: 0x15cb90 - 0x15cc78
void sub_0015CB90_0x15cb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CB90_0x15cb90");
#endif

    switch (ctx->pc) {
        case 0x15cb90u: goto label_15cb90;
        case 0x15cb94u: goto label_15cb94;
        case 0x15cb98u: goto label_15cb98;
        case 0x15cb9cu: goto label_15cb9c;
        case 0x15cba0u: goto label_15cba0;
        case 0x15cba4u: goto label_15cba4;
        case 0x15cba8u: goto label_15cba8;
        case 0x15cbacu: goto label_15cbac;
        case 0x15cbb0u: goto label_15cbb0;
        case 0x15cbb4u: goto label_15cbb4;
        case 0x15cbb8u: goto label_15cbb8;
        case 0x15cbbcu: goto label_15cbbc;
        case 0x15cbc0u: goto label_15cbc0;
        case 0x15cbc4u: goto label_15cbc4;
        case 0x15cbc8u: goto label_15cbc8;
        case 0x15cbccu: goto label_15cbcc;
        case 0x15cbd0u: goto label_15cbd0;
        case 0x15cbd4u: goto label_15cbd4;
        case 0x15cbd8u: goto label_15cbd8;
        case 0x15cbdcu: goto label_15cbdc;
        case 0x15cbe0u: goto label_15cbe0;
        case 0x15cbe4u: goto label_15cbe4;
        case 0x15cbe8u: goto label_15cbe8;
        case 0x15cbecu: goto label_15cbec;
        case 0x15cbf0u: goto label_15cbf0;
        case 0x15cbf4u: goto label_15cbf4;
        case 0x15cbf8u: goto label_15cbf8;
        case 0x15cbfcu: goto label_15cbfc;
        case 0x15cc00u: goto label_15cc00;
        case 0x15cc04u: goto label_15cc04;
        case 0x15cc08u: goto label_15cc08;
        case 0x15cc0cu: goto label_15cc0c;
        case 0x15cc10u: goto label_15cc10;
        case 0x15cc14u: goto label_15cc14;
        case 0x15cc18u: goto label_15cc18;
        case 0x15cc1cu: goto label_15cc1c;
        case 0x15cc20u: goto label_15cc20;
        case 0x15cc24u: goto label_15cc24;
        case 0x15cc28u: goto label_15cc28;
        case 0x15cc2cu: goto label_15cc2c;
        case 0x15cc30u: goto label_15cc30;
        case 0x15cc34u: goto label_15cc34;
        case 0x15cc38u: goto label_15cc38;
        case 0x15cc3cu: goto label_15cc3c;
        case 0x15cc40u: goto label_15cc40;
        case 0x15cc44u: goto label_15cc44;
        case 0x15cc48u: goto label_15cc48;
        case 0x15cc4cu: goto label_15cc4c;
        case 0x15cc50u: goto label_15cc50;
        case 0x15cc54u: goto label_15cc54;
        case 0x15cc58u: goto label_15cc58;
        case 0x15cc5cu: goto label_15cc5c;
        case 0x15cc60u: goto label_15cc60;
        case 0x15cc64u: goto label_15cc64;
        case 0x15cc68u: goto label_15cc68;
        case 0x15cc6cu: goto label_15cc6c;
        case 0x15cc70u: goto label_15cc70;
        case 0x15cc74u: goto label_15cc74;
        default: break;
    }

    ctx->pc = 0x15cb90u;

label_15cb90:
    // 0x15cb90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15cb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_15cb94:
    // 0x15cb94: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15cb94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15cb98:
    // 0x15cb98: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x15cb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_15cb9c:
    // 0x15cb9c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x15cb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_15cba0:
    // 0x15cba0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15cba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15cba4:
    // 0x15cba4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15cba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15cba8:
    // 0x15cba8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x15cba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_15cbac:
    // 0x15cbac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15cbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15cbb0:
    // 0x15cbb0: 0x8c65ec8c  lw          $a1, -0x1374($v1)
    ctx->pc = 0x15cbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962316)));
label_15cbb4:
    // 0x15cbb4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x15cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15cbb8:
    // 0x15cbb8: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x15cbb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_15cbbc:
    // 0x15cbbc: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x15cbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_15cbc0:
    // 0x15cbc0: 0x60f809  jalr        $v1
label_15cbc4:
    if (ctx->pc == 0x15CBC4u) {
        ctx->pc = 0x15CBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBC0u;
        // 0x15cbc4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CBC8u;
        goto label_15cbc8;
    }
    ctx->pc = 0x15CBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CBC8u);
        ctx->pc = 0x15CBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBC0u;
        // 0x15cbc4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CBC0u, 0x15CBC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CBC8u;
label_15cbc8:
    // 0x15cbc8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15cbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15cbcc:
    // 0x15cbcc: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x15cbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_15cbd0:
    // 0x15cbd0: 0x8c700834  lw          $s0, 0x834($v1)
    ctx->pc = 0x15cbd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2100)));
label_15cbd4:
    // 0x15cbd4: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x15cbd4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_15cbd8:
    // 0x15cbd8: 0x1000000b  b           . + 4 + (0xB << 2)
label_15cbdc:
    if (ctx->pc == 0x15CBDCu) {
        ctx->pc = 0x15CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBD8u;
        // 0x15cbdc: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CBE0u;
        goto label_15cbe0;
    }
    ctx->pc = 0x15CBD8u;
    {
        const bool branch_taken_0x15cbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBD8u;
        // 0x15cbdc: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cbd8) {
            ctx->pc = 0x15CC08u;
            goto label_15cc08;
        }
    }
    ctx->pc = 0x15CBE0u;
label_15cbe0:
    // 0x15cbe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15cbe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cbe4:
    // 0x15cbe4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x15cbe4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_15cbe8:
    // 0x15cbe8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x15cbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_15cbec:
    // 0x15cbec: 0x40f809  jalr        $v0
label_15cbf0:
    if (ctx->pc == 0x15CBF0u) {
        ctx->pc = 0x15CBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBECu;
        // 0x15cbf0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CBF4u;
        goto label_15cbf4;
    }
    ctx->pc = 0x15CBECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15CBF4u);
        ctx->pc = 0x15CBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBECu;
        // 0x15cbf0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CBECu, 0x15CBF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CBF4u;
label_15cbf4:
    // 0x15cbf4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15cbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15cbf8:
    // 0x15cbf8: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x15cbf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_15cbfc:
    // 0x15cbfc: 0x8c65004c  lw          $a1, 0x4C($v1)
    ctx->pc = 0x15cbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_15cc00:
    // 0x15cc00: 0xa0f809  jalr        $a1
label_15cc04:
    if (ctx->pc == 0x15CC04u) {
        ctx->pc = 0x15CC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC00u;
        // 0x15cc04: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC08u;
        goto label_15cc08;
    }
    ctx->pc = 0x15CC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x15CC08u);
        ctx->pc = 0x15CC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC00u;
        // 0x15cc04: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CC00u, 0x15CC08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CC08u;
label_15cc08:
    // 0x15cc08: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x15cc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15cc0c:
    // 0x15cc0c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x15cc0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_15cc10:
    // 0x15cc10: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x15cc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_15cc14:
    // 0x15cc14: 0x40f809  jalr        $v0
label_15cc18:
    if (ctx->pc == 0x15CC18u) {
        ctx->pc = 0x15CC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC14u;
        // 0x15cc18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC1Cu;
        goto label_15cc1c;
    }
    ctx->pc = 0x15CC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15CC1Cu);
        ctx->pc = 0x15CC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC14u;
        // 0x15cc18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CC14u, 0x15CC1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CC1Cu;
label_15cc1c:
    // 0x15cc1c: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
label_15cc20:
    if (ctx->pc == 0x15CC20u) {
        ctx->pc = 0x15CC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC1Cu;
        // 0x15cc20: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC24u;
        goto label_15cc24;
    }
    ctx->pc = 0x15CC1Cu;
    {
        const bool branch_taken_0x15cc1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cc1c) {
            ctx->pc = 0x15CC20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CC1Cu;
            // 0x15cc20: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CBE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15cbe0;
        }
    }
    ctx->pc = 0x15CC24u;
label_15cc24:
    // 0x15cc24: 0xc043d5e  jal         func_10F578
label_15cc28:
    if (ctx->pc == 0x15CC28u) {
        ctx->pc = 0x15CC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC24u;
        // 0x15cc28: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC2Cu;
        goto label_15cc2c;
    }
    ctx->pc = 0x15CC24u;
    SET_GPR_U32(ctx, 31, 0x15CC2Cu);
    ctx->pc = 0x15CC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CC24u;
    // 0x15cc28: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x15CC24u, 0x15CC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CC2Cu;
label_15cc2c:
    // 0x15cc2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_15cc30:
    if (ctx->pc == 0x15CC30u) {
        ctx->pc = 0x15CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC2Cu;
        // 0x15cc30: 0x8e44aa84  lw          $a0, -0x557C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC34u;
        goto label_15cc34;
    }
    ctx->pc = 0x15CC2Cu;
    {
        const bool branch_taken_0x15cc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC2Cu;
        // 0x15cc30: 0x8e44aa84  lw          $a0, -0x557C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc2c) {
            ctx->pc = 0x15CC40u;
            goto label_15cc40;
        }
    }
    ctx->pc = 0x15CC34u;
label_15cc34:
    // 0x15cc34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15cc34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cc38:
    // 0x15cc38: 0xc0440c6  jal         func_110318
label_15cc3c:
    if (ctx->pc == 0x15CC3Cu) {
        ctx->pc = 0x15CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC38u;
        // 0x15cc3c: 0x8e250030  lw          $a1, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC40u;
        goto label_15cc40;
    }
    ctx->pc = 0x15CC38u;
    SET_GPR_U32(ctx, 31, 0x15CC40u);
    ctx->pc = 0x15CC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CC38u;
    // 0x15cc3c: 0x8e250030  lw          $a1, 0x30($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x15CC38u, 0x15CC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CC40u;
label_15cc40:
    // 0x15cc40: 0x8e44aa84  lw          $a0, -0x557C($s2)
    ctx->pc = 0x15cc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
label_15cc44:
    // 0x15cc44: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x15cc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_15cc48:
    // 0x15cc48: 0xc043e94  jal         func_10FA50
label_15cc4c:
    if (ctx->pc == 0x15CC4Cu) {
        ctx->pc = 0x15CC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC48u;
        // 0x15cc4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC50u;
        goto label_15cc50;
    }
    ctx->pc = 0x15CC48u;
    SET_GPR_U32(ctx, 31, 0x15CC50u);
    ctx->pc = 0x15CC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CC48u;
    // 0x15cc4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA50u, 0x15CC48u, 0x15CC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CC50u;
label_15cc50:
    // 0x15cc50: 0x8e64b734  lw          $a0, -0x48CC($s3)
    ctx->pc = 0x15cc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948660)));
label_15cc54:
    // 0x15cc54: 0xc0517d8  jal         func_145F60
label_15cc58:
    if (ctx->pc == 0x15CC58u) {
        ctx->pc = 0x15CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC54u;
        // 0x15cc58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC5Cu;
        goto label_15cc5c;
    }
    ctx->pc = 0x15CC54u;
    SET_GPR_U32(ctx, 31, 0x15CC5Cu);
    ctx->pc = 0x15CC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CC54u;
    // 0x15cc58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145F60u, 0x15CC54u, 0x15CC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CC5Cu;
label_15cc5c:
    // 0x15cc5c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x15cc5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15cc60:
    // 0x15cc60: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x15cc60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15cc64:
    // 0x15cc64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15cc64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15cc68:
    // 0x15cc68: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x15cc68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15cc6c:
    // 0x15cc6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15cc6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15cc70:
    // 0x15cc70: 0x3e00008  jr          $ra
label_15cc74:
    if (ctx->pc == 0x15CC74u) {
        ctx->pc = 0x15CC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC70u;
        // 0x15cc74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC78u;
        goto label_fallthrough_0x15cc70;
    }
    ctx->pc = 0x15CC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC70u;
        // 0x15cc74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15cc70:
    ctx->pc = 0x15CC78u;
}
