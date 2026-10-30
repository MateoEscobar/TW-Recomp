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

// Function: sub_004CCAE8
// Address: 0x4ccae8 - 0x4ccc68
void sub_004CCAE8_0x4ccae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CCAE8_0x4ccae8");
#endif

    switch (ctx->pc) {
        case 0x4ccae8u: goto label_4ccae8;
        case 0x4ccaecu: goto label_4ccaec;
        case 0x4ccaf0u: goto label_4ccaf0;
        case 0x4ccaf4u: goto label_4ccaf4;
        case 0x4ccaf8u: goto label_4ccaf8;
        case 0x4ccafcu: goto label_4ccafc;
        case 0x4ccb00u: goto label_4ccb00;
        case 0x4ccb04u: goto label_4ccb04;
        case 0x4ccb08u: goto label_4ccb08;
        case 0x4ccb0cu: goto label_4ccb0c;
        case 0x4ccb10u: goto label_4ccb10;
        case 0x4ccb14u: goto label_4ccb14;
        case 0x4ccb18u: goto label_4ccb18;
        case 0x4ccb1cu: goto label_4ccb1c;
        case 0x4ccb20u: goto label_4ccb20;
        case 0x4ccb24u: goto label_4ccb24;
        case 0x4ccb28u: goto label_4ccb28;
        case 0x4ccb2cu: goto label_4ccb2c;
        case 0x4ccb30u: goto label_4ccb30;
        case 0x4ccb34u: goto label_4ccb34;
        case 0x4ccb38u: goto label_4ccb38;
        case 0x4ccb3cu: goto label_4ccb3c;
        case 0x4ccb40u: goto label_4ccb40;
        case 0x4ccb44u: goto label_4ccb44;
        case 0x4ccb48u: goto label_4ccb48;
        case 0x4ccb4cu: goto label_4ccb4c;
        case 0x4ccb50u: goto label_4ccb50;
        case 0x4ccb54u: goto label_4ccb54;
        case 0x4ccb58u: goto label_4ccb58;
        case 0x4ccb5cu: goto label_4ccb5c;
        case 0x4ccb60u: goto label_4ccb60;
        case 0x4ccb64u: goto label_4ccb64;
        case 0x4ccb68u: goto label_4ccb68;
        case 0x4ccb6cu: goto label_4ccb6c;
        case 0x4ccb70u: goto label_4ccb70;
        case 0x4ccb74u: goto label_4ccb74;
        case 0x4ccb78u: goto label_4ccb78;
        case 0x4ccb7cu: goto label_4ccb7c;
        case 0x4ccb80u: goto label_4ccb80;
        case 0x4ccb84u: goto label_4ccb84;
        case 0x4ccb88u: goto label_4ccb88;
        case 0x4ccb8cu: goto label_4ccb8c;
        case 0x4ccb90u: goto label_4ccb90;
        case 0x4ccb94u: goto label_4ccb94;
        case 0x4ccb98u: goto label_4ccb98;
        case 0x4ccb9cu: goto label_4ccb9c;
        case 0x4ccba0u: goto label_4ccba0;
        case 0x4ccba4u: goto label_4ccba4;
        case 0x4ccba8u: goto label_4ccba8;
        case 0x4ccbacu: goto label_4ccbac;
        case 0x4ccbb0u: goto label_4ccbb0;
        case 0x4ccbb4u: goto label_4ccbb4;
        case 0x4ccbb8u: goto label_4ccbb8;
        case 0x4ccbbcu: goto label_4ccbbc;
        case 0x4ccbc0u: goto label_4ccbc0;
        case 0x4ccbc4u: goto label_4ccbc4;
        case 0x4ccbc8u: goto label_4ccbc8;
        case 0x4ccbccu: goto label_4ccbcc;
        case 0x4ccbd0u: goto label_4ccbd0;
        case 0x4ccbd4u: goto label_4ccbd4;
        case 0x4ccbd8u: goto label_4ccbd8;
        case 0x4ccbdcu: goto label_4ccbdc;
        case 0x4ccbe0u: goto label_4ccbe0;
        case 0x4ccbe4u: goto label_4ccbe4;
        case 0x4ccbe8u: goto label_4ccbe8;
        case 0x4ccbecu: goto label_4ccbec;
        case 0x4ccbf0u: goto label_4ccbf0;
        case 0x4ccbf4u: goto label_4ccbf4;
        case 0x4ccbf8u: goto label_4ccbf8;
        case 0x4ccbfcu: goto label_4ccbfc;
        case 0x4ccc00u: goto label_4ccc00;
        case 0x4ccc04u: goto label_4ccc04;
        case 0x4ccc08u: goto label_4ccc08;
        case 0x4ccc0cu: goto label_4ccc0c;
        case 0x4ccc10u: goto label_4ccc10;
        case 0x4ccc14u: goto label_4ccc14;
        case 0x4ccc18u: goto label_4ccc18;
        case 0x4ccc1cu: goto label_4ccc1c;
        case 0x4ccc20u: goto label_4ccc20;
        case 0x4ccc24u: goto label_4ccc24;
        case 0x4ccc28u: goto label_4ccc28;
        case 0x4ccc2cu: goto label_4ccc2c;
        case 0x4ccc30u: goto label_4ccc30;
        case 0x4ccc34u: goto label_4ccc34;
        case 0x4ccc38u: goto label_4ccc38;
        case 0x4ccc3cu: goto label_4ccc3c;
        case 0x4ccc40u: goto label_4ccc40;
        case 0x4ccc44u: goto label_4ccc44;
        case 0x4ccc48u: goto label_4ccc48;
        case 0x4ccc4cu: goto label_4ccc4c;
        case 0x4ccc50u: goto label_4ccc50;
        case 0x4ccc54u: goto label_4ccc54;
        case 0x4ccc58u: goto label_4ccc58;
        case 0x4ccc5cu: goto label_4ccc5c;
        case 0x4ccc60u: goto label_4ccc60;
        case 0x4ccc64u: goto label_4ccc64;
        default: break;
    }

    ctx->pc = 0x4ccae8u;

label_4ccae8:
    // 0x4ccae8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ccae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4ccaec:
    // 0x4ccaec: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4ccaecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4ccaf0:
    // 0x4ccaf0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ccaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4ccaf4:
    // 0x4ccaf4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4ccaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4ccaf8:
    // 0x4ccaf8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ccaf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ccafc:
    // 0x4ccafc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4ccafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4ccb00:
    // 0x4ccb00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4ccb00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ccb04:
    // 0x4ccb04: 0x8c433960  lw          $v1, 0x3960($v0)
    ctx->pc = 0x4ccb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14688)));
label_4ccb08:
    // 0x4ccb08: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4ccb08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ccb0c:
    // 0x4ccb0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ccb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4ccb10:
    // 0x4ccb10: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4ccb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_4ccb14:
    // 0x4ccb14: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_4ccb18:
    if (ctx->pc == 0x4CCB18u) {
        ctx->pc = 0x4CCB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCB14u;
        // 0x4ccb18: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCB1Cu;
        goto label_4ccb1c;
    }
    ctx->pc = 0x4CCB14u;
    {
        const bool branch_taken_0x4ccb14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CCB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCB14u;
        // 0x4ccb18: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ccb14) {
            ctx->pc = 0x4CCB24u;
            goto label_4ccb24;
        }
    }
    ctx->pc = 0x4CCB1Cu;
label_4ccb1c:
    // 0x4ccb1c: 0x10000049  b           . + 4 + (0x49 << 2)
label_4ccb20:
    if (ctx->pc == 0x4CCB20u) {
        ctx->pc = 0x4CCB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCB1Cu;
        // 0x4ccb20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCB24u;
        goto label_4ccb24;
    }
    ctx->pc = 0x4CCB1Cu;
    {
        const bool branch_taken_0x4ccb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CCB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCB1Cu;
        // 0x4ccb20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ccb1c) {
            ctx->pc = 0x4CCC44u;
            goto label_4ccc44;
        }
    }
    ctx->pc = 0x4CCB24u;
label_4ccb24:
    // 0x4ccb24: 0xc110cb0  jal         func_4432C0
label_4ccb28:
    if (ctx->pc == 0x4CCB28u) {
        ctx->pc = 0x4CCB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCB24u;
        // 0x4ccb28: 0x3c140071  lui         $s4, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCB2Cu;
        goto label_4ccb2c;
    }
    ctx->pc = 0x4CCB24u;
    SET_GPR_U32(ctx, 31, 0x4CCB2Cu);
    ctx->pc = 0x4CCB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CCB24u;
    // 0x4ccb28: 0x3c140071  lui         $s4, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)113 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x4CCB24u, 0x4CCB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CCB2Cu;
label_4ccb2c:
    // 0x4ccb2c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4ccb2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ccb30:
    // 0x4ccb30: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4ccb30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4ccb34:
    // 0x4ccb34: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4ccb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4ccb38:
    // 0x4ccb38: 0x246346f8  addiu       $v1, $v1, 0x46F8
    ctx->pc = 0x4ccb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18168));
label_4ccb3c:
    // 0x4ccb3c: 0x24424720  addiu       $v0, $v0, 0x4720
    ctx->pc = 0x4ccb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18208));
label_4ccb40:
    // 0x4ccb40: 0x8c500020  lw          $s0, 0x20($v0)
    ctx->pc = 0x4ccb40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_4ccb44:
    // 0x4ccb44: 0x12030016  beq         $s0, $v1, . + 4 + (0x16 << 2)
label_4ccb48:
    if (ctx->pc == 0x4CCB48u) {
        ctx->pc = 0x4CCB4Cu;
        goto label_4ccb4c;
    }
    ctx->pc = 0x4CCB44u;
    {
        const bool branch_taken_0x4ccb44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x4ccb44) {
            ctx->pc = 0x4CCBA0u;
            goto label_4ccba0;
        }
    }
    ctx->pc = 0x4CCB4Cu;
label_4ccb4c:
    // 0x4ccb4c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x4ccb4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4ccb50:
    // 0x4ccb50: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x4ccb50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4ccb54:
    // 0x4ccb54: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4ccb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4ccb58:
    // 0x4ccb58: 0x1451000e  bne         $v0, $s1, . + 4 + (0xE << 2)
label_4ccb5c:
    if (ctx->pc == 0x4CCB5Cu) {
        ctx->pc = 0x4CCB60u;
        goto label_4ccb60;
    }
    ctx->pc = 0x4CCB58u;
    {
        const bool branch_taken_0x4ccb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x4ccb58) {
            ctx->pc = 0x4CCB94u;
            goto label_4ccb94;
        }
    }
    ctx->pc = 0x4CCB60u;
label_4ccb60:
    // 0x4ccb60: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x4ccb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4ccb64:
    // 0x4ccb64: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x4ccb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_4ccb68:
    // 0x4ccb68: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x4ccb68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4ccb6c:
    // 0x4ccb6c: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x4ccb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
label_4ccb70:
    // 0x4ccb70: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x4ccb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_4ccb74:
    // 0x4ccb74: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x4ccb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4ccb78:
    // 0x4ccb78: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x4ccb78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
label_4ccb7c:
    // 0x4ccb7c: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4ccb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
label_4ccb80:
    // 0x4ccb80: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_4ccb84:
    if (ctx->pc == 0x4CCB84u) {
        ctx->pc = 0x4CCB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCB80u;
        // 0x4ccb84: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCB88u;
        goto label_4ccb88;
    }
    ctx->pc = 0x4CCB80u;
    {
        const bool branch_taken_0x4ccb80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ccb80) {
            ctx->pc = 0x4CCB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CCB80u;
            // 0x4ccb84: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CCB94u;
            goto label_4ccb94;
        }
    }
    ctx->pc = 0x4CCB88u;
label_4ccb88:
    // 0x4ccb88: 0xae130024  sw          $s3, 0x24($s0)
    ctx->pc = 0x4ccb88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 19));
label_4ccb8c:
    // 0x4ccb8c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x4ccb8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ccb90:
    // 0x4ccb90: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4ccb90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4ccb94:
    // 0x4ccb94: 0x8e100020  lw          $s0, 0x20($s0)
    ctx->pc = 0x4ccb94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4ccb98:
    // 0x4ccb98: 0x5607ffef  bnel        $s0, $a3, . + 4 + (-0x11 << 2)
label_4ccb9c:
    if (ctx->pc == 0x4CCB9Cu) {
        ctx->pc = 0x4CCB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCB98u;
        // 0x4ccb9c: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCBA0u;
        goto label_4ccba0;
    }
    ctx->pc = 0x4CCB98u;
    {
        const bool branch_taken_0x4ccb98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 7));
        if (branch_taken_0x4ccb98) {
            ctx->pc = 0x4CCB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CCB98u;
            // 0x4ccb9c: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CCB58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ccb58;
        }
    }
    ctx->pc = 0x4CCBA0u;
label_4ccba0:
    // 0x4ccba0: 0x8e8247cc  lw          $v0, 0x47CC($s4)
    ctx->pc = 0x4ccba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18380)));
label_4ccba4:
    // 0x4ccba4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_4ccba8:
    if (ctx->pc == 0x4CCBA8u) {
        ctx->pc = 0x4CCBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCBA4u;
        // 0x4ccba8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCBACu;
        goto label_4ccbac;
    }
    ctx->pc = 0x4CCBA4u;
    {
        const bool branch_taken_0x4ccba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CCBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCBA4u;
        // 0x4ccba8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ccba4) {
            ctx->pc = 0x4CCBCCu;
            goto label_4ccbcc;
        }
    }
    ctx->pc = 0x4CCBACu;
label_4ccbac:
    // 0x4ccbac: 0x8e8247cc  lw          $v0, 0x47CC($s4)
    ctx->pc = 0x4ccbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18380)));
label_4ccbb0:
    // 0x4ccbb0: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x4ccbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_4ccbb4:
    // 0x4ccbb4: 0x14710005  bne         $v1, $s1, . + 4 + (0x5 << 2)
label_4ccbb8:
    if (ctx->pc == 0x4CCBB8u) {
        ctx->pc = 0x4CCBBCu;
        goto label_4ccbbc;
    }
    ctx->pc = 0x4CCBB4u;
    {
        const bool branch_taken_0x4ccbb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x4ccbb4) {
            ctx->pc = 0x4CCBCCu;
            goto label_4ccbcc;
        }
    }
    ctx->pc = 0x4CCBBCu;
label_4ccbbc:
    // 0x4ccbbc: 0x8e9047cc  lw          $s0, 0x47CC($s4)
    ctx->pc = 0x4ccbbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18380)));
label_4ccbc0:
    // 0x4ccbc0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4ccbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4ccbc4:
    // 0x4ccbc4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4ccbc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4ccbc8:
    // 0x4ccbc8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ccbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4ccbcc:
    // 0x4ccbcc: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
label_4ccbd0:
    if (ctx->pc == 0x4CCBD0u) {
        ctx->pc = 0x4CCBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCBCCu;
        // 0x4ccbd0: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCBD4u;
        goto label_4ccbd4;
    }
    ctx->pc = 0x4CCBCCu;
    {
        const bool branch_taken_0x4ccbcc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CCBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCBCCu;
        // 0x4ccbd0: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ccbcc) {
            ctx->pc = 0x4CCBDCu;
            goto label_4ccbdc;
        }
    }
    ctx->pc = 0x4CCBD4u;
label_4ccbd4:
    // 0x4ccbd4: 0xc110cc4  jal         func_443310
label_4ccbd8:
    if (ctx->pc == 0x4CCBD8u) {
        ctx->pc = 0x4CCBDCu;
        goto label_4ccbdc;
    }
    ctx->pc = 0x4CCBD4u;
    SET_GPR_U32(ctx, 31, 0x4CCBDCu);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x4CCBD4u, 0x4CCBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CCBDCu;
label_4ccbdc:
    // 0x4ccbdc: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_4ccbe0:
    if (ctx->pc == 0x4CCBE0u) {
        ctx->pc = 0x4CCBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCBDCu;
        // 0x4ccbe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCBE4u;
        goto label_4ccbe4;
    }
    ctx->pc = 0x4CCBDCu;
    {
        const bool branch_taken_0x4ccbdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CCBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCBDCu;
        // 0x4ccbe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ccbdc) {
            ctx->pc = 0x4CCC10u;
            goto label_4ccc10;
        }
    }
    ctx->pc = 0x4CCBE4u;
label_4ccbe4:
    // 0x4ccbe4: 0x3c130053  lui         $s3, 0x53
    ctx->pc = 0x4ccbe4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)83 << 16));
label_4ccbe8:
    // 0x4ccbe8: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4ccbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4ccbec:
    // 0x4ccbec: 0x8e310024  lw          $s1, 0x24($s1)
    ctx->pc = 0x4ccbecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_4ccbf0:
    // 0x4ccbf0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_4ccbf4:
    if (ctx->pc == 0x4CCBF4u) {
        ctx->pc = 0x4CCBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCBF0u;
        // 0x4ccbf4: 0x8e623964  lw          $v0, 0x3964($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 14692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCBF8u;
        goto label_4ccbf8;
    }
    ctx->pc = 0x4CCBF0u;
    {
        const bool branch_taken_0x4ccbf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CCBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCBF0u;
        // 0x4ccbf4: 0x8e623964  lw          $v0, 0x3964($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 14692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ccbf0) {
            ctx->pc = 0x4CCC08u;
            goto label_4ccc08;
        }
    }
    ctx->pc = 0x4CCBF8u;
label_4ccbf8:
    // 0x4ccbf8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4ccbfc:
    if (ctx->pc == 0x4CCBFCu) {
        ctx->pc = 0x4CCC00u;
        goto label_4ccc00;
    }
    ctx->pc = 0x4CCBF8u;
    {
        const bool branch_taken_0x4ccbf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ccbf8) {
            ctx->pc = 0x4CCC08u;
            goto label_4ccc08;
        }
    }
    ctx->pc = 0x4CCC00u;
label_4ccc00:
    // 0x4ccc00: 0x60f809  jalr        $v1
label_4ccc04:
    if (ctx->pc == 0x4CCC04u) {
        ctx->pc = 0x4CCC08u;
        goto label_4ccc08;
    }
    ctx->pc = 0x4CCC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4CCC08u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CCC00u, 0x4CCC08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4CCC08u;
label_4ccc08:
    // 0x4ccc08: 0x1620fff7  bnez        $s1, . + 4 + (-0x9 << 2)
label_4ccc0c:
    if (ctx->pc == 0x4CCC0Cu) {
        ctx->pc = 0x4CCC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCC08u;
        // 0x4ccc0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCC10u;
        goto label_4ccc10;
    }
    ctx->pc = 0x4CCC08u;
    {
        const bool branch_taken_0x4ccc08 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CCC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCC08u;
        // 0x4ccc0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ccc08) {
            ctx->pc = 0x4CCBE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ccbe8;
        }
    }
    ctx->pc = 0x4CCC10u;
label_4ccc10:
    // 0x4ccc10: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_4ccc14:
    if (ctx->pc == 0x4CCC14u) {
        ctx->pc = 0x4CCC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCC10u;
        // 0x4ccc14: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCC18u;
        goto label_4ccc18;
    }
    ctx->pc = 0x4CCC10u;
    {
        const bool branch_taken_0x4ccc10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CCC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCC10u;
        // 0x4ccc14: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ccc10) {
            ctx->pc = 0x4CCC44u;
            goto label_4ccc44;
        }
    }
    ctx->pc = 0x4CCC18u;
label_4ccc18:
    // 0x4ccc18: 0x8e8247cc  lw          $v0, 0x47CC($s4)
    ctx->pc = 0x4ccc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18380)));
label_4ccc1c:
    // 0x4ccc1c: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
label_4ccc20:
    if (ctx->pc == 0x4CCC20u) {
        ctx->pc = 0x4CCC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCC1Cu;
        // 0x4ccc20: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCC24u;
        goto label_4ccc24;
    }
    ctx->pc = 0x4CCC1Cu;
    {
        const bool branch_taken_0x4ccc1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x4CCC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCC1Cu;
        // 0x4ccc20: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ccc1c) {
            ctx->pc = 0x4CCC44u;
            goto label_4ccc44;
        }
    }
    ctx->pc = 0x4CCC24u;
label_4ccc24:
    // 0x4ccc24: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x4ccc24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ccc28:
    // 0x4ccc28: 0x8c6247cc  lw          $v0, 0x47CC($v1)
    ctx->pc = 0x4ccc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18380)));
label_4ccc2c:
    // 0x4ccc2c: 0x0  nop
    ctx->pc = 0x4ccc2cu;
    // NOP
label_4ccc30:
    // 0x4ccc30: 0x0  nop
    ctx->pc = 0x4ccc30u;
    // NOP
label_4ccc34:
    // 0x4ccc34: 0x0  nop
    ctx->pc = 0x4ccc34u;
    // NOP
label_4ccc38:
    // 0x4ccc38: 0x0  nop
    ctx->pc = 0x4ccc38u;
    // NOP
label_4ccc3c:
    // 0x4ccc3c: 0x1202fffa  beq         $s0, $v0, . + 4 + (-0x6 << 2)
label_4ccc40:
    if (ctx->pc == 0x4CCC40u) {
        ctx->pc = 0x4CCC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCC3Cu;
        // 0x4ccc40: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCC44u;
        goto label_4ccc44;
    }
    ctx->pc = 0x4CCC3Cu;
    {
        const bool branch_taken_0x4ccc3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4CCC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCC3Cu;
        // 0x4ccc40: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ccc3c) {
            ctx->pc = 0x4CCC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ccc28;
        }
    }
    ctx->pc = 0x4CCC44u;
label_4ccc44:
    // 0x4ccc44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ccc44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ccc48:
    // 0x4ccc48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ccc48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4ccc4c:
    // 0x4ccc4c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ccc4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4ccc50:
    // 0x4ccc50: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ccc50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4ccc54:
    // 0x4ccc54: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ccc54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4ccc58:
    // 0x4ccc58: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4ccc58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4ccc5c:
    // 0x4ccc5c: 0x3e00008  jr          $ra
label_4ccc60:
    if (ctx->pc == 0x4CCC60u) {
        ctx->pc = 0x4CCC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCC5Cu;
        // 0x4ccc60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCC64u;
        goto label_4ccc64;
    }
    ctx->pc = 0x4CCC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CCC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCC5Cu;
        // 0x4ccc60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CCC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CCC64u;
label_4ccc64:
    // 0x4ccc64: 0x0  nop
    ctx->pc = 0x4ccc64u;
    // NOP
    ctx->pc = 0x4ccc68u;
}
