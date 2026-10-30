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

// Function: sub_0023FB00
// Address: 0x23fb00 - 0x23fea8
void sub_0023FB00_0x23fb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FB00_0x23fb00");
#endif

    ctx->pc = 0x23fb00u;

    // 0x23fb00: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x23fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x23fb04: 0x848301be  lh          $v1, 0x1BE($a0)
    ctx->pc = 0x23fb04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 446)));
    // 0x23fb08: 0x2445c7a8  addiu       $a1, $v0, -0x3858
    ctx->pc = 0x23fb08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952872));
    // 0x23fb0c: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x23fb0cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x55C7AAu));
    // 0x23fb10: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23FB10u;
    {
        const bool branch_taken_0x23fb10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB10u;
        // 0x23fb14: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fb10) {
            ctx->pc = 0x23FB58u;
            goto label_23fb58;
        }
    }
    ctx->pc = 0x23FB18u;
    // 0x23fb18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23fb1c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23FB1Cu;
    {
        const bool branch_taken_0x23fb1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB1Cu;
        // 0x23fb20: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fb1c) {
            ctx->pc = 0x23FB38u;
            goto label_23fb38;
        }
    }
    ctx->pc = 0x23FB24u;
    // 0x23fb24: 0x84a30004  lh          $v1, 0x4($a1)
    ctx->pc = 0x23fb24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x23fb28: 0x848201c0  lh          $v0, 0x1C0($a0)
    ctx->pc = 0x23fb28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x23fb2c: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23FB2Cu;
    {
        const bool branch_taken_0x23fb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x23FB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB2Cu;
        // 0x23fb30: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fb2c) {
            ctx->pc = 0x23FB4Cu;
            goto label_23fb4c;
        }
    }
    ctx->pc = 0x23FB34u;
    // 0x23fb34: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x23fb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_23fb38:
    // 0x23fb38: 0x8c8301c0  lw          $v1, 0x1C0($a0)
    ctx->pc = 0x23fb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x23fb3c: 0x244245c8  addiu       $v0, $v0, 0x45C8
    ctx->pc = 0x23fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17864));
    // 0x23fb40: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23FB40u;
    {
        const bool branch_taken_0x23fb40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23FB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB40u;
        // 0x23fb44: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fb40) {
            ctx->pc = 0x23FB54u;
            goto label_23fb54;
        }
    }
    ctx->pc = 0x23FB48u;
    // 0x23fb48: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_23fb4c:
    // 0x23fb4c: 0x3e00008  jr          $ra
    ctx->pc = 0x23FB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB4Cu;
        // 0x23fb50: 0x24420328  addiu       $v0, $v0, 0x328 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 808));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FB54u;
label_23fb54:
    // 0x23fb54: 0x848301be  lh          $v1, 0x1BE($a0)
    ctx->pc = 0x23fb54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 446)));
label_23fb58:
    // 0x23fb58: 0x2446c7b8  addiu       $a2, $v0, -0x3848
    ctx->pc = 0x23fb58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952888));
    // 0x23fb5c: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x23fb5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x23fb60: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23FB60u;
    {
        const bool branch_taken_0x23fb60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB60u;
        // 0x23fb64: 0x948501be  lhu         $a1, 0x1BE($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 446)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fb60) {
            ctx->pc = 0x23FBA4u;
            goto label_23fba4;
        }
    }
    ctx->pc = 0x23FB68u;
    // 0x23fb68: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23fb6c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23FB6Cu;
    {
        const bool branch_taken_0x23fb6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB6Cu;
        // 0x23fb70: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fb6c) {
            ctx->pc = 0x23FB88u;
            goto label_23fb88;
        }
    }
    ctx->pc = 0x23FB74u;
    // 0x23fb74: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x23fb74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x23fb78: 0x848201c0  lh          $v0, 0x1C0($a0)
    ctx->pc = 0x23fb78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x23fb7c: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23FB7Cu;
    {
        const bool branch_taken_0x23fb7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x23FB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB7Cu;
        // 0x23fb80: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fb7c) {
            ctx->pc = 0x23FB9Cu;
            goto label_23fb9c;
        }
    }
    ctx->pc = 0x23FB84u;
    // 0x23fb84: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x23fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_23fb88:
    // 0x23fb88: 0x8c8301c0  lw          $v1, 0x1C0($a0)
    ctx->pc = 0x23fb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x23fb8c: 0x24423848  addiu       $v0, $v0, 0x3848
    ctx->pc = 0x23fb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14408));
    // 0x23fb90: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23FB90u;
    {
        const bool branch_taken_0x23fb90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB90u;
        // 0x23fb94: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fb90) {
            ctx->pc = 0x23FBA8u;
            goto label_23fba8;
        }
    }
    ctx->pc = 0x23FB98u;
    // 0x23fb98: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23fb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_23fb9c:
    // 0x23fb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x23FB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB9Cu;
        // 0x23fba0: 0x24420348  addiu       $v0, $v0, 0x348 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 840));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FBA4u;
label_23fba4:
    // 0x23fba4: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x23fba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_23fba8:
    // 0x23fba8: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x23fba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x23fbac: 0x2446c770  addiu       $a2, $v0, -0x3890
    ctx->pc = 0x23fbacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952816));
    // 0x23fbb0: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x23fbb0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x23fbb4: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x23fbb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x23fbb8: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23FBB8u;
    {
        const bool branch_taken_0x23fbb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23FBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FBB8u;
        // 0x23fbbc: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fbb8) {
            ctx->pc = 0x23FBFCu;
            goto label_23fbfc;
        }
    }
    ctx->pc = 0x23FBC0u;
    // 0x23fbc0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23fbc4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23FBC4u;
    {
        const bool branch_taken_0x23fbc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FBC4u;
        // 0x23fbc8: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fbc4) {
            ctx->pc = 0x23FBE0u;
            goto label_23fbe0;
        }
    }
    ctx->pc = 0x23FBCCu;
    // 0x23fbcc: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x23fbccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x23fbd0: 0x848201c0  lh          $v0, 0x1C0($a0)
    ctx->pc = 0x23fbd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x23fbd4: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23FBD4u;
    {
        const bool branch_taken_0x23fbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x23FBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FBD4u;
        // 0x23fbd8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fbd4) {
            ctx->pc = 0x23FBF4u;
            goto label_23fbf4;
        }
    }
    ctx->pc = 0x23FBDCu;
    // 0x23fbdc: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x23fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_23fbe0:
    // 0x23fbe0: 0x8c8301c0  lw          $v1, 0x1C0($a0)
    ctx->pc = 0x23fbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x23fbe4: 0x24420e38  addiu       $v0, $v0, 0xE38
    ctx->pc = 0x23fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3640));
    // 0x23fbe8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23FBE8u;
    {
        const bool branch_taken_0x23fbe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23FBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FBE8u;
        // 0x23fbec: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fbe8) {
            ctx->pc = 0x23FBFCu;
            goto label_23fbfc;
        }
    }
    ctx->pc = 0x23FBF0u;
    // 0x23fbf0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_23fbf4:
    // 0x23fbf4: 0x3e00008  jr          $ra
    ctx->pc = 0x23FBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FBF4u;
        // 0x23fbf8: 0x24420368  addiu       $v0, $v0, 0x368 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 872));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FBF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FBFCu;
label_23fbfc:
    // 0x23fbfc: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x23fbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x23fc00: 0x2446c780  addiu       $a2, $v0, -0x3880
    ctx->pc = 0x23fc00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952832));
    // 0x23fc04: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x23fc04u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x23fc08: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x23fc08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x23fc0c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23FC0Cu;
    {
        const bool branch_taken_0x23fc0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23FC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC0Cu;
        // 0x23fc10: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc0c) {
            ctx->pc = 0x23FC50u;
            goto label_23fc50;
        }
    }
    ctx->pc = 0x23FC14u;
    // 0x23fc14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23fc18: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23FC18u;
    {
        const bool branch_taken_0x23fc18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC18u;
        // 0x23fc1c: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc18) {
            ctx->pc = 0x23FC34u;
            goto label_23fc34;
        }
    }
    ctx->pc = 0x23FC20u;
    // 0x23fc20: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x23fc20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x23fc24: 0x848201c0  lh          $v0, 0x1C0($a0)
    ctx->pc = 0x23fc24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x23fc28: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23FC28u;
    {
        const bool branch_taken_0x23fc28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x23FC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC28u;
        // 0x23fc2c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc28) {
            ctx->pc = 0x23FC48u;
            goto label_23fc48;
        }
    }
    ctx->pc = 0x23FC30u;
    // 0x23fc30: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x23fc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_23fc34:
    // 0x23fc34: 0x8c8301c0  lw          $v1, 0x1C0($a0)
    ctx->pc = 0x23fc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x23fc38: 0x24421b90  addiu       $v0, $v0, 0x1B90
    ctx->pc = 0x23fc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7056));
    // 0x23fc3c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23FC3Cu;
    {
        const bool branch_taken_0x23fc3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23FC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC3Cu;
        // 0x23fc40: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc3c) {
            ctx->pc = 0x23FC50u;
            goto label_23fc50;
        }
    }
    ctx->pc = 0x23FC44u;
    // 0x23fc44: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23fc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_23fc48:
    // 0x23fc48: 0x3e00008  jr          $ra
    ctx->pc = 0x23FC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC48u;
        // 0x23fc4c: 0x24420388  addiu       $v0, $v0, 0x388 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 904));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FC50u;
label_23fc50:
    // 0x23fc50: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x23fc50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x23fc54: 0x2446c7a0  addiu       $a2, $v0, -0x3860
    ctx->pc = 0x23fc54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952864));
    // 0x23fc58: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x23fc58u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x23fc5c: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x23fc5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x23fc60: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23FC60u;
    {
        const bool branch_taken_0x23fc60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC60u;
        // 0x23fc64: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc60) {
            ctx->pc = 0x23FCA4u;
            goto label_23fca4;
        }
    }
    ctx->pc = 0x23FC68u;
    // 0x23fc68: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23fc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23fc6c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23FC6Cu;
    {
        const bool branch_taken_0x23fc6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC6Cu;
        // 0x23fc70: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc6c) {
            ctx->pc = 0x23FC88u;
            goto label_23fc88;
        }
    }
    ctx->pc = 0x23FC74u;
    // 0x23fc74: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x23fc74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x23fc78: 0x848201c0  lh          $v0, 0x1C0($a0)
    ctx->pc = 0x23fc78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x23fc7c: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23FC7Cu;
    {
        const bool branch_taken_0x23fc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x23FC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC7Cu;
        // 0x23fc80: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc7c) {
            ctx->pc = 0x23FC9Cu;
            goto label_23fc9c;
        }
    }
    ctx->pc = 0x23FC84u;
    // 0x23fc84: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x23fc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_23fc88:
    // 0x23fc88: 0x8c8301c0  lw          $v1, 0x1C0($a0)
    ctx->pc = 0x23fc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x23fc8c: 0x24425310  addiu       $v0, $v0, 0x5310
    ctx->pc = 0x23fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21264));
    // 0x23fc90: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23FC90u;
    {
        const bool branch_taken_0x23fc90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC90u;
        // 0x23fc94: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc90) {
            ctx->pc = 0x23FCA4u;
            goto label_23fca4;
        }
    }
    ctx->pc = 0x23FC98u;
    // 0x23fc98: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23fc98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_23fc9c:
    // 0x23fc9c: 0x3e00008  jr          $ra
    ctx->pc = 0x23FC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC9Cu;
        // 0x23fca0: 0x244203a8  addiu       $v0, $v0, 0x3A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 936));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FCA4u;
label_23fca4:
    // 0x23fca4: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x23fca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x23fca8: 0x2446c7b0  addiu       $a2, $v0, -0x3850
    ctx->pc = 0x23fca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952880));
    // 0x23fcac: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x23fcacu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x23fcb0: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x23fcb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x23fcb4: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23FCB4u;
    {
        const bool branch_taken_0x23fcb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23FCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCB4u;
        // 0x23fcb8: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fcb4) {
            ctx->pc = 0x23FCF8u;
            goto label_23fcf8;
        }
    }
    ctx->pc = 0x23FCBCu;
    // 0x23fcbc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23fcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23fcc0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23FCC0u;
    {
        const bool branch_taken_0x23fcc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCC0u;
        // 0x23fcc4: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fcc0) {
            ctx->pc = 0x23FCDCu;
            goto label_23fcdc;
        }
    }
    ctx->pc = 0x23FCC8u;
    // 0x23fcc8: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x23fcc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x23fccc: 0x848201c0  lh          $v0, 0x1C0($a0)
    ctx->pc = 0x23fcccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x23fcd0: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23FCD0u;
    {
        const bool branch_taken_0x23fcd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x23FCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCD0u;
        // 0x23fcd4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fcd0) {
            ctx->pc = 0x23FCF0u;
            goto label_23fcf0;
        }
    }
    ctx->pc = 0x23FCD8u;
    // 0x23fcd8: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x23fcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_23fcdc:
    // 0x23fcdc: 0x8c8301c0  lw          $v1, 0x1C0($a0)
    ctx->pc = 0x23fcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x23fce0: 0x24424e78  addiu       $v0, $v0, 0x4E78
    ctx->pc = 0x23fce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20088));
    // 0x23fce4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23FCE4u;
    {
        const bool branch_taken_0x23fce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCE4u;
        // 0x23fce8: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fce4) {
            ctx->pc = 0x23FCF8u;
            goto label_23fcf8;
        }
    }
    ctx->pc = 0x23FCECu;
    // 0x23fcec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_23fcf0:
    // 0x23fcf0: 0x3e00008  jr          $ra
    ctx->pc = 0x23FCF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCF0u;
        // 0x23fcf4: 0x244203c8  addiu       $v0, $v0, 0x3C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 968));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FCF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FCF8u;
label_23fcf8:
    // 0x23fcf8: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x23fcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x23fcfc: 0x2446c778  addiu       $a2, $v0, -0x3888
    ctx->pc = 0x23fcfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952824));
    // 0x23fd00: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x23fd00u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x23fd04: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x23fd04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x23fd08: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23FD08u;
    {
        const bool branch_taken_0x23fd08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23FD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD08u;
        // 0x23fd0c: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd08) {
            ctx->pc = 0x23FD4Cu;
            goto label_23fd4c;
        }
    }
    ctx->pc = 0x23FD10u;
    // 0x23fd10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23fd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23fd14: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23FD14u;
    {
        const bool branch_taken_0x23fd14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD14u;
        // 0x23fd18: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd14) {
            ctx->pc = 0x23FD30u;
            goto label_23fd30;
        }
    }
    ctx->pc = 0x23FD1Cu;
    // 0x23fd1c: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x23fd1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x23fd20: 0x848201c0  lh          $v0, 0x1C0($a0)
    ctx->pc = 0x23fd20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x23fd24: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23FD24u;
    {
        const bool branch_taken_0x23fd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x23FD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD24u;
        // 0x23fd28: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd24) {
            ctx->pc = 0x23FD44u;
            goto label_23fd44;
        }
    }
    ctx->pc = 0x23FD2Cu;
    // 0x23fd2c: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x23fd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_23fd30:
    // 0x23fd30: 0x8c8301c0  lw          $v1, 0x1C0($a0)
    ctx->pc = 0x23fd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x23fd34: 0x24424770  addiu       $v0, $v0, 0x4770
    ctx->pc = 0x23fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18288));
    // 0x23fd38: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23FD38u;
    {
        const bool branch_taken_0x23fd38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23FD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD38u;
        // 0x23fd3c: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd38) {
            ctx->pc = 0x23FD4Cu;
            goto label_23fd4c;
        }
    }
    ctx->pc = 0x23FD40u;
    // 0x23fd40: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23fd40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_23fd44:
    // 0x23fd44: 0x3e00008  jr          $ra
    ctx->pc = 0x23FD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD44u;
        // 0x23fd48: 0x244203e8  addiu       $v0, $v0, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FD4Cu;
label_23fd4c:
    // 0x23fd4c: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x23fd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x23fd50: 0x2446c7c0  addiu       $a2, $v0, -0x3840
    ctx->pc = 0x23fd50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952896));
    // 0x23fd54: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x23fd54u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x23fd58: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x23fd58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x23fd5c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23FD5Cu;
    {
        const bool branch_taken_0x23fd5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23FD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD5Cu;
        // 0x23fd60: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd5c) {
            ctx->pc = 0x23FDA0u;
            goto label_23fda0;
        }
    }
    ctx->pc = 0x23FD64u;
    // 0x23fd64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23fd68: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23FD68u;
    {
        const bool branch_taken_0x23fd68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD68u;
        // 0x23fd6c: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd68) {
            ctx->pc = 0x23FD84u;
            goto label_23fd84;
        }
    }
    ctx->pc = 0x23FD70u;
    // 0x23fd70: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x23fd70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x23fd74: 0x848201c0  lh          $v0, 0x1C0($a0)
    ctx->pc = 0x23fd74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x23fd78: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23FD78u;
    {
        const bool branch_taken_0x23fd78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x23FD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD78u;
        // 0x23fd7c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd78) {
            ctx->pc = 0x23FD98u;
            goto label_23fd98;
        }
    }
    ctx->pc = 0x23FD80u;
    // 0x23fd80: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x23fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_23fd84:
    // 0x23fd84: 0x8c8301c0  lw          $v1, 0x1C0($a0)
    ctx->pc = 0x23fd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x23fd88: 0x24423420  addiu       $v0, $v0, 0x3420
    ctx->pc = 0x23fd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13344));
    // 0x23fd8c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23FD8Cu;
    {
        const bool branch_taken_0x23fd8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23FD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD8Cu;
        // 0x23fd90: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd8c) {
            ctx->pc = 0x23FDA0u;
            goto label_23fda0;
        }
    }
    ctx->pc = 0x23FD94u;
    // 0x23fd94: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23fd94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_23fd98:
    // 0x23fd98: 0x3e00008  jr          $ra
    ctx->pc = 0x23FD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD98u;
        // 0x23fd9c: 0x24420408  addiu       $v0, $v0, 0x408 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1032));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FDA0u;
label_23fda0:
    // 0x23fda0: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x23fda0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x23fda4: 0x2446c788  addiu       $a2, $v0, -0x3878
    ctx->pc = 0x23fda4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952840));
    // 0x23fda8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x23fda8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x23fdac: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x23fdacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x23fdb0: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23FDB0u;
    {
        const bool branch_taken_0x23fdb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDB0u;
        // 0x23fdb4: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fdb0) {
            ctx->pc = 0x23FDF4u;
            goto label_23fdf4;
        }
    }
    ctx->pc = 0x23FDB8u;
    // 0x23fdb8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23fdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23fdbc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23FDBCu;
    {
        const bool branch_taken_0x23fdbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDBCu;
        // 0x23fdc0: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fdbc) {
            ctx->pc = 0x23FDD8u;
            goto label_23fdd8;
        }
    }
    ctx->pc = 0x23FDC4u;
    // 0x23fdc4: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x23fdc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x23fdc8: 0x848201c0  lh          $v0, 0x1C0($a0)
    ctx->pc = 0x23fdc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x23fdcc: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23FDCCu;
    {
        const bool branch_taken_0x23fdcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x23FDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDCCu;
        // 0x23fdd0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fdcc) {
            ctx->pc = 0x23FDECu;
            goto label_23fdec;
        }
    }
    ctx->pc = 0x23FDD4u;
    // 0x23fdd4: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x23fdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_23fdd8:
    // 0x23fdd8: 0x8c8301c0  lw          $v1, 0x1C0($a0)
    ctx->pc = 0x23fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x23fddc: 0x24420898  addiu       $v0, $v0, 0x898
    ctx->pc = 0x23fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2200));
    // 0x23fde0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23FDE0u;
    {
        const bool branch_taken_0x23fde0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDE0u;
        // 0x23fde4: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fde0) {
            ctx->pc = 0x23FDF4u;
            goto label_23fdf4;
        }
    }
    ctx->pc = 0x23FDE8u;
    // 0x23fde8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_23fdec:
    // 0x23fdec: 0x3e00008  jr          $ra
    ctx->pc = 0x23FDECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDECu;
        // 0x23fdf0: 0x24420428  addiu       $v0, $v0, 0x428 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1064));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FDECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FDF4u;
label_23fdf4:
    // 0x23fdf4: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x23fdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x23fdf8: 0x2446c798  addiu       $a2, $v0, -0x3868
    ctx->pc = 0x23fdf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952856));
    // 0x23fdfc: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x23fdfcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x23fe00: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x23fe00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x23fe04: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23FE04u;
    {
        const bool branch_taken_0x23fe04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23FE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE04u;
        // 0x23fe08: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe04) {
            ctx->pc = 0x23FE48u;
            goto label_23fe48;
        }
    }
    ctx->pc = 0x23FE0Cu;
    // 0x23fe0c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23fe10: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23FE10u;
    {
        const bool branch_taken_0x23fe10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE10u;
        // 0x23fe14: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe10) {
            ctx->pc = 0x23FE2Cu;
            goto label_23fe2c;
        }
    }
    ctx->pc = 0x23FE18u;
    // 0x23fe18: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x23fe18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x23fe1c: 0x848201c0  lh          $v0, 0x1C0($a0)
    ctx->pc = 0x23fe1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x23fe20: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23FE20u;
    {
        const bool branch_taken_0x23fe20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x23FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE20u;
        // 0x23fe24: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe20) {
            ctx->pc = 0x23FE40u;
            goto label_23fe40;
        }
    }
    ctx->pc = 0x23FE28u;
    // 0x23fe28: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x23fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_23fe2c:
    // 0x23fe2c: 0x8c8301c0  lw          $v1, 0x1C0($a0)
    ctx->pc = 0x23fe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x23fe30: 0x244227e8  addiu       $v0, $v0, 0x27E8
    ctx->pc = 0x23fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10216));
    // 0x23fe34: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23FE34u;
    {
        const bool branch_taken_0x23fe34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE34u;
        // 0x23fe38: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe34) {
            ctx->pc = 0x23FE48u;
            goto label_23fe48;
        }
    }
    ctx->pc = 0x23FE3Cu;
    // 0x23fe3c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_23fe40:
    // 0x23fe40: 0x3e00008  jr          $ra
    ctx->pc = 0x23FE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE40u;
        // 0x23fe44: 0x24420448  addiu       $v0, $v0, 0x448 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1096));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FE48u;
label_23fe48:
    // 0x23fe48: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x23fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x23fe4c: 0x2445c790  addiu       $a1, $v0, -0x3870
    ctx->pc = 0x23fe4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952848));
    // 0x23fe50: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x23fe50u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x23fe54: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x23fe54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x23fe58: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23FE58u;
    {
        const bool branch_taken_0x23fe58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE58u;
        // 0x23fe5c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe58) {
            ctx->pc = 0x23FE9Cu;
            goto label_23fe9c;
        }
    }
    ctx->pc = 0x23FE60u;
    // 0x23fe60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23fe64: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23FE64u;
    {
        const bool branch_taken_0x23fe64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE64u;
        // 0x23fe68: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe64) {
            ctx->pc = 0x23FE80u;
            goto label_23fe80;
        }
    }
    ctx->pc = 0x23FE6Cu;
    // 0x23fe6c: 0x84a30004  lh          $v1, 0x4($a1)
    ctx->pc = 0x23fe6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x23fe70: 0x848201c0  lh          $v0, 0x1C0($a0)
    ctx->pc = 0x23fe70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x23fe74: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23FE74u;
    {
        const bool branch_taken_0x23fe74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x23FE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE74u;
        // 0x23fe78: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe74) {
            ctx->pc = 0x23FE94u;
            goto label_23fe94;
        }
    }
    ctx->pc = 0x23FE7Cu;
    // 0x23fe7c: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x23fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_23fe80:
    // 0x23fe80: 0x8c8301c0  lw          $v1, 0x1C0($a0)
    ctx->pc = 0x23fe80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x23fe84: 0x24422ce0  addiu       $v0, $v0, 0x2CE0
    ctx->pc = 0x23fe84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11488));
    // 0x23fe88: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23FE88u;
    {
        const bool branch_taken_0x23fe88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE88u;
        // 0x23fe8c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe88) {
            ctx->pc = 0x23FE9Cu;
            goto label_23fe9c;
        }
    }
    ctx->pc = 0x23FE90u;
    // 0x23fe90: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23fe90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_23fe94:
    // 0x23fe94: 0x3e00008  jr          $ra
    ctx->pc = 0x23FE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE94u;
        // 0x23fe98: 0x24420468  addiu       $v0, $v0, 0x468 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FE9Cu;
label_23fe9c:
    // 0x23fe9c: 0x3e00008  jr          $ra
    ctx->pc = 0x23FE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE9Cu;
        // 0x23fea0: 0x24420488  addiu       $v0, $v0, 0x488 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FEA4u;
    // 0x23fea4: 0x0  nop
    ctx->pc = 0x23fea4u;
    // NOP
    ctx->pc = 0x23fea8u;
}
