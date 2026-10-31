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

// Function: sub_0011FAC8
// Address: 0x11fac8 - 0x11fbb0
void sub_0011FAC8_0x11fac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011FAC8_0x11fac8");
#endif

    switch (ctx->pc) {
        case 0x11fac8u: goto label_11fac8;
        case 0x11faccu: goto label_11facc;
        case 0x11fad0u: goto label_11fad0;
        case 0x11fad4u: goto label_11fad4;
        case 0x11fad8u: goto label_11fad8;
        case 0x11fadcu: goto label_11fadc;
        case 0x11fae0u: goto label_11fae0;
        case 0x11fae4u: goto label_11fae4;
        case 0x11fae8u: goto label_11fae8;
        case 0x11faecu: goto label_11faec;
        case 0x11faf0u: goto label_11faf0;
        case 0x11faf4u: goto label_11faf4;
        case 0x11faf8u: goto label_11faf8;
        case 0x11fafcu: goto label_11fafc;
        case 0x11fb00u: goto label_11fb00;
        case 0x11fb04u: goto label_11fb04;
        case 0x11fb08u: goto label_11fb08;
        case 0x11fb0cu: goto label_11fb0c;
        case 0x11fb10u: goto label_11fb10;
        case 0x11fb14u: goto label_11fb14;
        case 0x11fb18u: goto label_11fb18;
        case 0x11fb1cu: goto label_11fb1c;
        case 0x11fb20u: goto label_11fb20;
        case 0x11fb24u: goto label_11fb24;
        case 0x11fb28u: goto label_11fb28;
        case 0x11fb2cu: goto label_11fb2c;
        case 0x11fb30u: goto label_11fb30;
        case 0x11fb34u: goto label_11fb34;
        case 0x11fb38u: goto label_11fb38;
        case 0x11fb3cu: goto label_11fb3c;
        case 0x11fb40u: goto label_11fb40;
        case 0x11fb44u: goto label_11fb44;
        case 0x11fb48u: goto label_11fb48;
        case 0x11fb4cu: goto label_11fb4c;
        case 0x11fb50u: goto label_11fb50;
        case 0x11fb54u: goto label_11fb54;
        case 0x11fb58u: goto label_11fb58;
        case 0x11fb5cu: goto label_11fb5c;
        case 0x11fb60u: goto label_11fb60;
        case 0x11fb64u: goto label_11fb64;
        case 0x11fb68u: goto label_11fb68;
        case 0x11fb6cu: goto label_11fb6c;
        case 0x11fb70u: goto label_11fb70;
        case 0x11fb74u: goto label_11fb74;
        case 0x11fb78u: goto label_11fb78;
        case 0x11fb7cu: goto label_11fb7c;
        case 0x11fb80u: goto label_11fb80;
        case 0x11fb84u: goto label_11fb84;
        case 0x11fb88u: goto label_11fb88;
        case 0x11fb8cu: goto label_11fb8c;
        case 0x11fb90u: goto label_11fb90;
        case 0x11fb94u: goto label_11fb94;
        case 0x11fb98u: goto label_11fb98;
        case 0x11fb9cu: goto label_11fb9c;
        case 0x11fba0u: goto label_11fba0;
        case 0x11fba4u: goto label_11fba4;
        case 0x11fba8u: goto label_11fba8;
        case 0x11fbacu: goto label_11fbac;
        default: break;
    }

    ctx->pc = 0x11fac8u;

label_11fac8:
    // 0x11fac8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11fac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_11facc:
    // 0x11facc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11faccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_11fad0:
    // 0x11fad0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11fad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_11fad4:
    // 0x11fad4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11fad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11fad8:
    // 0x11fad8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11fad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_11fadc:
    // 0x11fadc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x11fadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_11fae0:
    // 0x11fae0: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
label_11fae4:
    if (ctx->pc == 0x11FAE4u) {
        ctx->pc = 0x11FAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FAE0u;
        // 0x11fae4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FAE8u;
        goto label_11fae8;
    }
    ctx->pc = 0x11FAE0u;
    {
        const bool branch_taken_0x11fae0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x11FAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FAE0u;
        // 0x11fae4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fae0) {
            ctx->pc = 0x11FAF0u;
            goto label_11faf0;
        }
    }
    ctx->pc = 0x11FAE8u;
label_11fae8:
    // 0x11fae8: 0x10000029  b           . + 4 + (0x29 << 2)
label_11faec:
    if (ctx->pc == 0x11FAECu) {
        ctx->pc = 0x11FAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FAE8u;
        // 0x11faec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FAF0u;
        goto label_11faf0;
    }
    ctx->pc = 0x11FAE8u;
    {
        const bool branch_taken_0x11fae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FAE8u;
        // 0x11faec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fae8) {
            ctx->pc = 0x11FB90u;
            goto label_11fb90;
        }
    }
    ctx->pc = 0x11FAF0u;
label_11faf0:
    // 0x11faf0: 0x3c13005e  lui         $s3, 0x5E
    ctx->pc = 0x11faf0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)94 << 16));
label_11faf4:
    // 0x11faf4: 0x10a00023  beqz        $a1, . + 4 + (0x23 << 2)
label_11faf8:
    if (ctx->pc == 0x11FAF8u) {
        ctx->pc = 0x11FAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FAF4u;
        // 0x11faf8: 0x109080  sll         $s2, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FAFCu;
        goto label_11fafc;
    }
    ctx->pc = 0x11FAF4u;
    {
        const bool branch_taken_0x11faf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FAF4u;
        // 0x11faf8: 0x109080  sll         $s2, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11faf4) {
            ctx->pc = 0x11FB84u;
            goto label_11fb84;
        }
    }
    ctx->pc = 0x11FAFCu;
label_11fafc:
    // 0x11fafc: 0x26629180  addiu       $v0, $s3, -0x6E80
    ctx->pc = 0x11fafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939008));
label_11fb00:
    // 0x11fb00: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x11fb00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_11fb04:
    // 0x11fb04: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11fb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11fb08:
    // 0x11fb08: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_11fb0c:
    if (ctx->pc == 0x11FB0Cu) {
        ctx->pc = 0x11FB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB08u;
        // 0x11fb0c: 0x26639180  addiu       $v1, $s3, -0x6E80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FB10u;
        goto label_11fb10;
    }
    ctx->pc = 0x11FB08u;
    {
        const bool branch_taken_0x11fb08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB08u;
        // 0x11fb0c: 0x26639180  addiu       $v1, $s3, -0x6E80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb08) {
            ctx->pc = 0x11FB88u;
            goto label_11fb88;
        }
    }
    ctx->pc = 0x11FB10u;
label_11fb10:
    // 0x11fb10: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11fb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_11fb14:
    // 0x11fb14: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x11fb14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_11fb18:
    // 0x11fb18: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x11fb18u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_11fb1c:
    // 0x11fb1c: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x11fb1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_11fb20:
    // 0x11fb20: 0x24060240  addiu       $a2, $zero, 0x240
    ctx->pc = 0x11fb20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
label_11fb24:
    // 0x11fb24: 0x24a586b0  addiu       $a1, $a1, -0x7950
    ctx->pc = 0x11fb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936240));
label_11fb28:
    // 0x11fb28: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x11fb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_11fb2c:
    // 0x11fb2c: 0x25088550  addiu       $t0, $t0, -0x7AB0
    ctx->pc = 0x11fb2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935888));
label_11fb30:
    // 0x11fb30: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x11fb30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11fb34:
    // 0x11fb34: 0x24090447  addiu       $t1, $zero, 0x447
    ctx->pc = 0x11fb34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1095));
label_11fb38:
    // 0x11fb38: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x11fb38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_11fb3c:
    // 0x11fb3c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11fb3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11fb40:
    // 0x11fb40: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x11fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_11fb44:
    // 0x11fb44: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11fb44u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11fb48:
    // 0x11fb48: 0x40f809  jalr        $v0
label_11fb4c:
    if (ctx->pc == 0x11FB4Cu) {
        ctx->pc = 0x11FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB48u;
        // 0x11fb4c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FB50u;
        goto label_11fb50;
    }
    ctx->pc = 0x11FB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11FB50u);
        ctx->pc = 0x11FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB48u;
        // 0x11fb4c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FB48u, 0x11FB50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11FB50u;
label_11fb50:
    // 0x11fb50: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11fb50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11fb54:
    // 0x11fb54: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
label_11fb58:
    if (ctx->pc == 0x11FB58u) {
        ctx->pc = 0x11FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB54u;
        // 0x11fb58: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FB5Cu;
        goto label_11fb5c;
    }
    ctx->pc = 0x11FB54u;
    {
        const bool branch_taken_0x11fb54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fb54) {
            ctx->pc = 0x11FB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FB54u;
            // 0x11fb58: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FB6Cu;
            goto label_11fb6c;
        }
    }
    ctx->pc = 0x11FB5Cu;
label_11fb5c:
    // 0x11fb5c: 0xc050be6  jal         func_142F98
label_11fb60:
    if (ctx->pc == 0x11FB60u) {
        ctx->pc = 0x11FB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB5Cu;
        // 0x11fb60: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FB64u;
        goto label_11fb64;
    }
    ctx->pc = 0x11FB5Cu;
    SET_GPR_U32(ctx, 31, 0x11FB64u);
    ctx->pc = 0x11FB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FB5Cu;
    // 0x11fb60: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142F98u, 0x11FB5Cu, 0x11FB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FB64u;
label_11fb64:
    // 0x11fb64: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11fb64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11fb68:
    // 0x11fb68: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x11fb68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_11fb6c:
    // 0x11fb6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11fb6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11fb70:
    // 0x11fb70: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x11fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_11fb74:
    // 0x11fb74: 0x84440270  lh          $a0, 0x270($v0)
    ctx->pc = 0x11fb74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 624)));
label_11fb78:
    // 0x11fb78: 0x8c430274  lw          $v1, 0x274($v0)
    ctx->pc = 0x11fb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_11fb7c:
    // 0x11fb7c: 0x60f809  jalr        $v1
label_11fb80:
    if (ctx->pc == 0x11FB80u) {
        ctx->pc = 0x11FB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB7Cu;
        // 0x11fb80: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FB84u;
        goto label_11fb84;
    }
    ctx->pc = 0x11FB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11FB84u);
        ctx->pc = 0x11FB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB7Cu;
        // 0x11fb80: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FB7Cu, 0x11FB84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11FB84u;
label_11fb84:
    // 0x11fb84: 0x26639180  addiu       $v1, $s3, -0x6E80
    ctx->pc = 0x11fb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939008));
label_11fb88:
    // 0x11fb88: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x11fb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_11fb8c:
    // 0x11fb8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11fb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_11fb90:
    // 0x11fb90: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11fb90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11fb94:
    // 0x11fb94: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11fb94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11fb98:
    // 0x11fb98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11fb98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11fb9c:
    // 0x11fb9c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x11fb9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11fba0:
    // 0x11fba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11fba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11fba4:
    // 0x11fba4: 0x3e00008  jr          $ra
label_11fba8:
    if (ctx->pc == 0x11FBA8u) {
        ctx->pc = 0x11FBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBA4u;
        // 0x11fba8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FBACu;
        goto label_11fbac;
    }
    ctx->pc = 0x11FBA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBA4u;
        // 0x11fba8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FBA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FBACu;
label_11fbac:
    // 0x11fbac: 0x0  nop
    ctx->pc = 0x11fbacu;
    // NOP
    ctx->pc = 0x11fbb0u;
}
