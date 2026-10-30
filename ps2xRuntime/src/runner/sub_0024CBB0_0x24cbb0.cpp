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

// Function: sub_0024CBB0
// Address: 0x24cbb0 - 0x24cd30
void sub_0024CBB0_0x24cbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CBB0_0x24cbb0");
#endif

    switch (ctx->pc) {
        case 0x24cbb0u: goto label_24cbb0;
        case 0x24cbb4u: goto label_24cbb4;
        case 0x24cbb8u: goto label_24cbb8;
        case 0x24cbbcu: goto label_24cbbc;
        case 0x24cbc0u: goto label_24cbc0;
        case 0x24cbc4u: goto label_24cbc4;
        case 0x24cbc8u: goto label_24cbc8;
        case 0x24cbccu: goto label_24cbcc;
        case 0x24cbd0u: goto label_24cbd0;
        case 0x24cbd4u: goto label_24cbd4;
        case 0x24cbd8u: goto label_24cbd8;
        case 0x24cbdcu: goto label_24cbdc;
        case 0x24cbe0u: goto label_24cbe0;
        case 0x24cbe4u: goto label_24cbe4;
        case 0x24cbe8u: goto label_24cbe8;
        case 0x24cbecu: goto label_24cbec;
        case 0x24cbf0u: goto label_24cbf0;
        case 0x24cbf4u: goto label_24cbf4;
        case 0x24cbf8u: goto label_24cbf8;
        case 0x24cbfcu: goto label_24cbfc;
        case 0x24cc00u: goto label_24cc00;
        case 0x24cc04u: goto label_24cc04;
        case 0x24cc08u: goto label_24cc08;
        case 0x24cc0cu: goto label_24cc0c;
        case 0x24cc10u: goto label_24cc10;
        case 0x24cc14u: goto label_24cc14;
        case 0x24cc18u: goto label_24cc18;
        case 0x24cc1cu: goto label_24cc1c;
        case 0x24cc20u: goto label_24cc20;
        case 0x24cc24u: goto label_24cc24;
        case 0x24cc28u: goto label_24cc28;
        case 0x24cc2cu: goto label_24cc2c;
        case 0x24cc30u: goto label_24cc30;
        case 0x24cc34u: goto label_24cc34;
        case 0x24cc38u: goto label_24cc38;
        case 0x24cc3cu: goto label_24cc3c;
        case 0x24cc40u: goto label_24cc40;
        case 0x24cc44u: goto label_24cc44;
        case 0x24cc48u: goto label_24cc48;
        case 0x24cc4cu: goto label_24cc4c;
        case 0x24cc50u: goto label_24cc50;
        case 0x24cc54u: goto label_24cc54;
        case 0x24cc58u: goto label_24cc58;
        case 0x24cc5cu: goto label_24cc5c;
        case 0x24cc60u: goto label_24cc60;
        case 0x24cc64u: goto label_24cc64;
        case 0x24cc68u: goto label_24cc68;
        case 0x24cc6cu: goto label_24cc6c;
        case 0x24cc70u: goto label_24cc70;
        case 0x24cc74u: goto label_24cc74;
        case 0x24cc78u: goto label_24cc78;
        case 0x24cc7cu: goto label_24cc7c;
        case 0x24cc80u: goto label_24cc80;
        case 0x24cc84u: goto label_24cc84;
        case 0x24cc88u: goto label_24cc88;
        case 0x24cc8cu: goto label_24cc8c;
        case 0x24cc90u: goto label_24cc90;
        case 0x24cc94u: goto label_24cc94;
        case 0x24cc98u: goto label_24cc98;
        case 0x24cc9cu: goto label_24cc9c;
        case 0x24cca0u: goto label_24cca0;
        case 0x24cca4u: goto label_24cca4;
        case 0x24cca8u: goto label_24cca8;
        case 0x24ccacu: goto label_24ccac;
        case 0x24ccb0u: goto label_24ccb0;
        case 0x24ccb4u: goto label_24ccb4;
        case 0x24ccb8u: goto label_24ccb8;
        case 0x24ccbcu: goto label_24ccbc;
        case 0x24ccc0u: goto label_24ccc0;
        case 0x24ccc4u: goto label_24ccc4;
        case 0x24ccc8u: goto label_24ccc8;
        case 0x24ccccu: goto label_24cccc;
        case 0x24ccd0u: goto label_24ccd0;
        case 0x24ccd4u: goto label_24ccd4;
        case 0x24ccd8u: goto label_24ccd8;
        case 0x24ccdcu: goto label_24ccdc;
        case 0x24cce0u: goto label_24cce0;
        case 0x24cce4u: goto label_24cce4;
        case 0x24cce8u: goto label_24cce8;
        case 0x24ccecu: goto label_24ccec;
        case 0x24ccf0u: goto label_24ccf0;
        case 0x24ccf4u: goto label_24ccf4;
        case 0x24ccf8u: goto label_24ccf8;
        case 0x24ccfcu: goto label_24ccfc;
        case 0x24cd00u: goto label_24cd00;
        case 0x24cd04u: goto label_24cd04;
        case 0x24cd08u: goto label_24cd08;
        case 0x24cd0cu: goto label_24cd0c;
        case 0x24cd10u: goto label_24cd10;
        case 0x24cd14u: goto label_24cd14;
        case 0x24cd18u: goto label_24cd18;
        case 0x24cd1cu: goto label_24cd1c;
        case 0x24cd20u: goto label_24cd20;
        case 0x24cd24u: goto label_24cd24;
        case 0x24cd28u: goto label_24cd28;
        case 0x24cd2cu: goto label_24cd2c;
        default: break;
    }

    ctx->pc = 0x24cbb0u;

label_24cbb0:
    // 0x24cbb0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x24cbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_24cbb4:
    // 0x24cbb4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x24cbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_24cbb8:
    // 0x24cbb8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x24cbb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24cbbc:
    // 0x24cbbc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x24cbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_24cbc0:
    // 0x24cbc0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x24cbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_24cbc4:
    // 0x24cbc4: 0x26700348  addiu       $s0, $s3, 0x348
    ctx->pc = 0x24cbc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 840));
label_24cbc8:
    // 0x24cbc8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x24cbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_24cbcc:
    // 0x24cbcc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x24cbccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24cbd0:
    // 0x24cbd0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x24cbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_24cbd4:
    // 0x24cbd4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x24cbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_24cbd8:
    // 0x24cbd8: 0xc0e4060  jal         func_390180
label_24cbdc:
    if (ctx->pc == 0x24CBDCu) {
        ctx->pc = 0x24CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CBD8u;
        // 0x24cbdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CBE0u;
        goto label_24cbe0;
    }
    ctx->pc = 0x24CBD8u;
    SET_GPR_U32(ctx, 31, 0x24CBE0u);
    ctx->pc = 0x24CBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CBD8u;
    // 0x24cbdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x24CBD8u, 0x24CBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CBE0u;
label_24cbe0:
    // 0x24cbe0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_24cbe4:
    if (ctx->pc == 0x24CBE4u) {
        ctx->pc = 0x24CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CBE0u;
        // 0x24cbe4: 0x86640092  lh          $a0, 0x92($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CBE8u;
        goto label_24cbe8;
    }
    ctx->pc = 0x24CBE0u;
    {
        const bool branch_taken_0x24cbe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cbe0) {
            ctx->pc = 0x24CBE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CBE0u;
            // 0x24cbe4: 0x86640092  lh          $a0, 0x92($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CC08u;
            goto label_24cc08;
        }
    }
    ctx->pc = 0x24CBE8u;
label_24cbe8:
    // 0x24cbe8: 0xc0e4060  jal         func_390180
label_24cbec:
    if (ctx->pc == 0x24CBECu) {
        ctx->pc = 0x24CBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CBE8u;
        // 0x24cbec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CBF0u;
        goto label_24cbf0;
    }
    ctx->pc = 0x24CBE8u;
    SET_GPR_U32(ctx, 31, 0x24CBF0u);
    ctx->pc = 0x24CBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CBE8u;
    // 0x24cbec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x24CBE8u, 0x24CBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CBF0u;
label_24cbf0:
    // 0x24cbf0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24cbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24cbf4:
    // 0x24cbf4: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x24cbf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_24cbf8:
    // 0x24cbf8: 0x8c65004c  lw          $a1, 0x4C($v1)
    ctx->pc = 0x24cbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_24cbfc:
    // 0x24cbfc: 0xa0f809  jalr        $a1
label_24cc00:
    if (ctx->pc == 0x24CC00u) {
        ctx->pc = 0x24CC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CBFCu;
        // 0x24cc00: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CC04u;
        goto label_24cc04;
    }
    ctx->pc = 0x24CBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x24CC04u);
        ctx->pc = 0x24CC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CBFCu;
        // 0x24cc00: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CBFCu, 0x24CC04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24CC04u;
label_24cc04:
    // 0x24cc04: 0x86640092  lh          $a0, 0x92($s3)
    ctx->pc = 0x24cc04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_24cc08:
    // 0x24cc08: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x24cc08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_24cc0c:
    // 0x24cc0c: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x24cc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_24cc10:
    // 0x24cc10: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x24cc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_24cc14:
    // 0x24cc14: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x24cc14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_24cc18:
    // 0x24cc18: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x24cc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_24cc1c:
    // 0x24cc1c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x24cc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_24cc20:
    // 0x24cc20: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x24cc20u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_24cc24:
    // 0x24cc24: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x24cc24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_24cc28:
    // 0x24cc28: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x24cc28u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_24cc2c:
    // 0x24cc2c: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x24cc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24cc30:
    // 0x24cc30: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x24cc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
label_24cc34:
    // 0x24cc34: 0xc0e8b48  jal         func_3A2D20
label_24cc38:
    if (ctx->pc == 0x24CC38u) {
        ctx->pc = 0x24CC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CC34u;
        // 0x24cc38: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CC3Cu;
        goto label_24cc3c;
    }
    ctx->pc = 0x24CC34u;
    SET_GPR_U32(ctx, 31, 0x24CC3Cu);
    ctx->pc = 0x24CC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CC34u;
    // 0x24cc38: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x24CC34u, 0x24CC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CC3Cu;
label_24cc3c:
    // 0x24cc3c: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x24cc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24cc40:
    // 0x24cc40: 0xc0e8b58  jal         func_3A2D60
label_24cc44:
    if (ctx->pc == 0x24CC44u) {
        ctx->pc = 0x24CC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CC40u;
        // 0x24cc44: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CC48u;
        goto label_24cc48;
    }
    ctx->pc = 0x24CC40u;
    SET_GPR_U32(ctx, 31, 0x24CC48u);
    ctx->pc = 0x24CC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CC40u;
    // 0x24cc44: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x24CC40u, 0x24CC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CC48u;
label_24cc48:
    // 0x24cc48: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x24cc48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24cc4c:
    // 0x24cc4c: 0xc0e8b58  jal         func_3A2D60
label_24cc50:
    if (ctx->pc == 0x24CC50u) {
        ctx->pc = 0x24CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CC4Cu;
        // 0x24cc50: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CC54u;
        goto label_24cc54;
    }
    ctx->pc = 0x24CC4Cu;
    SET_GPR_U32(ctx, 31, 0x24CC54u);
    ctx->pc = 0x24CC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CC4Cu;
    // 0x24cc50: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x24CC4Cu, 0x24CC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CC54u;
label_24cc54:
    // 0x24cc54: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x24cc54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24cc58:
    // 0x24cc58: 0xc0e8b70  jal         func_3A2DC0
label_24cc5c:
    if (ctx->pc == 0x24CC5Cu) {
        ctx->pc = 0x24CC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CC58u;
        // 0x24cc5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CC60u;
        goto label_24cc60;
    }
    ctx->pc = 0x24CC58u;
    SET_GPR_U32(ctx, 31, 0x24CC60u);
    ctx->pc = 0x24CC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CC58u;
    // 0x24cc5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x24CC58u, 0x24CC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CC60u;
label_24cc60:
    // 0x24cc60: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x24cc60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24cc64:
    // 0x24cc64: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x24cc64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24cc68:
    // 0x24cc68: 0xc0e8b98  jal         func_3A2E60
label_24cc6c:
    if (ctx->pc == 0x24CC6Cu) {
        ctx->pc = 0x24CC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CC68u;
        // 0x24cc6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CC70u;
        goto label_24cc70;
    }
    ctx->pc = 0x24CC68u;
    SET_GPR_U32(ctx, 31, 0x24CC70u);
    ctx->pc = 0x24CC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CC68u;
    // 0x24cc6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E60u, 0x24CC68u, 0x24CC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CC70u;
label_24cc70:
    // 0x24cc70: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x24cc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24cc74:
    // 0x24cc74: 0xc0e8b50  jal         func_3A2D40
label_24cc78:
    if (ctx->pc == 0x24CC78u) {
        ctx->pc = 0x24CC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CC74u;
        // 0x24cc78: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CC7Cu;
        goto label_24cc7c;
    }
    ctx->pc = 0x24CC74u;
    SET_GPR_U32(ctx, 31, 0x24CC7Cu);
    ctx->pc = 0x24CC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CC74u;
    // 0x24cc78: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x24CC74u, 0x24CC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CC7Cu;
label_24cc7c:
    // 0x24cc7c: 0x52200024  beql        $s1, $zero, . + 4 + (0x24 << 2)
label_24cc80:
    if (ctx->pc == 0x24CC80u) {
        ctx->pc = 0x24CC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CC7Cu;
        // 0x24cc80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CC84u;
        goto label_24cc84;
    }
    ctx->pc = 0x24CC7Cu;
    {
        const bool branch_taken_0x24cc7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cc7c) {
            ctx->pc = 0x24CC80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CC7Cu;
            // 0x24cc80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CD10u;
            goto label_24cd10;
        }
    }
    ctx->pc = 0x24CC84u;
label_24cc84:
    // 0x24cc84: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x24cc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24cc88:
    // 0x24cc88: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x24cc88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_24cc8c:
    // 0x24cc8c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x24cc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_24cc90:
    // 0x24cc90: 0x40f809  jalr        $v0
label_24cc94:
    if (ctx->pc == 0x24CC94u) {
        ctx->pc = 0x24CC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CC90u;
        // 0x24cc94: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CC98u;
        goto label_24cc98;
    }
    ctx->pc = 0x24CC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24CC98u);
        ctx->pc = 0x24CC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CC90u;
        // 0x24cc94: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CC90u, 0x24CC98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24CC98u;
label_24cc98:
    // 0x24cc98: 0x8e462c7c  lw          $a2, 0x2C7C($s2)
    ctx->pc = 0x24cc98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24cc9c:
    // 0x24cc9c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x24cc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_24cca0:
    // 0x24cca0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x24cca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_24cca4:
    // 0x24cca4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x24cca4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_24cca8:
    // 0x24cca8: 0x8cc40840  lw          $a0, 0x840($a2)
    ctx->pc = 0x24cca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2112)));
label_24ccac:
    // 0x24ccac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24ccacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24ccb0:
    // 0x24ccb0: 0x8c69bd30  lw          $t1, -0x42D0($v1)
    ctx->pc = 0x24ccb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_24ccb4:
    // 0x24ccb4: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x24ccb4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_24ccb8:
    // 0x24ccb8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x24ccb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_24ccbc:
    // 0x24ccbc: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x24ccbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_24ccc0:
    // 0x24ccc0: 0x240a0041  addiu       $t2, $zero, 0x41
    ctx->pc = 0x24ccc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_24ccc4:
    // 0x24ccc4: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x24ccc4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24ccc8:
    // 0x24ccc8: 0x25081780  addiu       $t0, $t0, 0x1780
    ctx->pc = 0x24ccc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6016));
label_24cccc:
    // 0x24cccc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x24ccccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_24ccd0:
    // 0x24ccd0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x24ccd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_24ccd4:
    // 0x24ccd4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x24ccd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24ccd8:
    // 0x24ccd8: 0xc0e6250  jal         func_398940
label_24ccdc:
    if (ctx->pc == 0x24CCDCu) {
        ctx->pc = 0x24CCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CCD8u;
        // 0x24ccdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CCE0u;
        goto label_24cce0;
    }
    ctx->pc = 0x24CCD8u;
    SET_GPR_U32(ctx, 31, 0x24CCE0u);
    ctx->pc = 0x24CCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CCD8u;
    // 0x24ccdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398940u, 0x24CCD8u, 0x24CCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CCE0u;
label_24cce0:
    // 0x24cce0: 0x8e432c7c  lw          $v1, 0x2C7C($s2)
    ctx->pc = 0x24cce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24cce4:
    // 0x24cce4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24cce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24cce8:
    // 0x24cce8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24cce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24ccec:
    // 0x24ccec: 0xc0e637e  jal         func_398DF8
label_24ccf0:
    if (ctx->pc == 0x24CCF0u) {
        ctx->pc = 0x24CCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CCECu;
        // 0x24ccf0: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CCF4u;
        goto label_24ccf4;
    }
    ctx->pc = 0x24CCECu;
    SET_GPR_U32(ctx, 31, 0x24CCF4u);
    ctx->pc = 0x24CCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CCECu;
    // 0x24ccf0: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x24CCECu, 0x24CCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CCF4u;
label_24ccf4:
    // 0x24ccf4: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x24ccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_24ccf8:
    // 0x24ccf8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24ccf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24ccfc:
    // 0x24ccfc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x24ccfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_24cd00:
    // 0x24cd00: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x24cd00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_24cd04:
    // 0x24cd04: 0xc09334c  jal         func_24CD30
label_24cd08:
    if (ctx->pc == 0x24CD08u) {
        ctx->pc = 0x24CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD04u;
        // 0x24cd08: 0xae70034c  sw          $s0, 0x34C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 844), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CD0Cu;
        goto label_24cd0c;
    }
    ctx->pc = 0x24CD04u;
    SET_GPR_U32(ctx, 31, 0x24CD0Cu);
    ctx->pc = 0x24CD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CD04u;
    // 0x24cd08: 0xae70034c  sw          $s0, 0x34C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 844), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CD30u, 0x24CD04u, 0x24CD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CD0Cu;
label_24cd0c:
    // 0x24cd0c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x24cd0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24cd10:
    // 0x24cd10: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x24cd10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_24cd14:
    // 0x24cd14: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x24cd14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_24cd18:
    // 0x24cd18: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x24cd18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_24cd1c:
    // 0x24cd1c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x24cd1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_24cd20:
    // 0x24cd20: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x24cd20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24cd24:
    // 0x24cd24: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x24cd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_24cd28:
    // 0x24cd28: 0x3e00008  jr          $ra
label_24cd2c:
    if (ctx->pc == 0x24CD2Cu) {
        ctx->pc = 0x24CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD28u;
        // 0x24cd2c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CD30u;
        goto label_fallthrough_0x24cd28;
    }
    ctx->pc = 0x24CD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD28u;
        // 0x24cd2c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24cd28:
    ctx->pc = 0x24CD30u;
}
