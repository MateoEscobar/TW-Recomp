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

// Function: sub_00329D10
// Address: 0x329d10 - 0x329df8
void sub_00329D10_0x329d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329D10_0x329d10");
#endif

    switch (ctx->pc) {
        case 0x329d40u: goto label_329d40;
        case 0x329d4cu: goto label_329d4c;
        case 0x329d50u: goto label_329d50;
        case 0x329db4u: goto label_329db4;
        case 0x329dd8u: goto label_329dd8;
        default: break;
    }

    ctx->pc = 0x329d10u;

    // 0x329d10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x329d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x329d14: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x329d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x329d18: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x329d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x329d1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x329d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329d20: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x329d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x329d24: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x329d24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329d28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x329d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x329d2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x329d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x329d30: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x329d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x329d34: 0x18400025  blez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x329D34u;
    {
        const bool branch_taken_0x329d34 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x329D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D34u;
        // 0x329d38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329d34) {
            ctx->pc = 0x329DCCu;
            goto label_329dcc;
        }
    }
    ctx->pc = 0x329D3Cu;
    // 0x329d3c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x329d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_329d40:
    // 0x329d40: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x329d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x329d44: 0x24920001  addiu       $s2, $a0, 0x1
    ctx->pc = 0x329d44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x329d48: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x329d48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_329d4c:
    // 0x329d4c: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x329d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_329d50:
    // 0x329d50: 0x50e0001a  beql        $a3, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x329D50u;
    {
        const bool branch_taken_0x329d50 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x329d50) {
            ctx->pc = 0x329D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329D50u;
            // 0x329d54: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329DBCu;
            goto label_329dbc;
        }
    }
    ctx->pc = 0x329D58u;
    // 0x329d58: 0x84e2000a  lh          $v0, 0xA($a3)
    ctx->pc = 0x329d58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x329d5c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x329D5Cu;
    {
        const bool branch_taken_0x329d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329d5c) {
            ctx->pc = 0x329D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329D5Cu;
            // 0x329d60: 0x8ce3000c  lw          $v1, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329D80u;
            goto label_329d80;
        }
    }
    ctx->pc = 0x329D64u;
    // 0x329d64: 0x56600006  bnel        $s3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x329D64u;
    {
        const bool branch_taken_0x329d64 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x329d64) {
            ctx->pc = 0x329D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329D64u;
            // 0x329d68: 0x8ce3000c  lw          $v1, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329D80u;
            goto label_329d80;
        }
    }
    ctx->pc = 0x329D6Cu;
    // 0x329d6c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x329d6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x329d70: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x329D70u;
    {
        const bool branch_taken_0x329d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x329d70) {
            ctx->pc = 0x329D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329D70u;
            // 0x329d74: 0xa4e0000a  sh          $zero, 0xA($a3) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329D78u;
            goto label_329d78;
        }
    }
    ctx->pc = 0x329D78u;
label_329d78:
    // 0x329d78: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x329D78u;
    {
        const bool branch_taken_0x329d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D78u;
        // 0x329d7c: 0x24f1000c  addiu       $s1, $a3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329d78) {
            ctx->pc = 0x329D4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329d4c;
        }
    }
    ctx->pc = 0x329D80u;
label_329d80:
    // 0x329d80: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x329d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329d84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x329d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329d88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x329d88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329d8c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x329d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x329d90: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x329d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x329d94: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x329d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x329d98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x329d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x329d9c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x329d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x329da0: 0x2463ffef  addiu       $v1, $v1, -0x11
    ctx->pc = 0x329da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967279));
    // 0x329da4: 0x94e20008  lhu         $v0, 0x8($a3)
    ctx->pc = 0x329da4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x329da8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x329da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x329dac: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x329DACu;
    SET_GPR_U32(ctx, 31, 0x329DB4u);
    ctx->pc = 0x329DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329DACu;
    // 0x329db0: 0xae030060  sw          $v1, 0x60($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x329DACu, 0x329DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329DB4u;
label_329db4:
    // 0x329db4: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x329DB4u;
    {
        const bool branch_taken_0x329db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329DB4u;
        // 0x329db8: 0x8e270000  lw          $a3, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329db4) {
            ctx->pc = 0x329D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329d50;
        }
    }
    ctx->pc = 0x329DBCu;
label_329dbc:
    // 0x329dbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x329dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329dc0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x329dc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x329dc4: 0x5440ffde  bnel        $v0, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x329DC4u;
    {
        const bool branch_taken_0x329dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x329dc4) {
            ctx->pc = 0x329DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329DC4u;
            // 0x329dc8: 0x8e030034  lw          $v1, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329d40;
        }
    }
    ctx->pc = 0x329DCCu;
label_329dcc:
    // 0x329dcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x329dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329dd0: 0xc0ca742  jal         func_329D08
    ctx->pc = 0x329DD0u;
    SET_GPR_U32(ctx, 31, 0x329DD8u);
    ctx->pc = 0x329DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329DD0u;
    // 0x329dd4: 0x2485002c  addiu       $a1, $a0, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329D08u, 0x329DD0u, 0x329DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329DD8u;
label_329dd8:
    // 0x329dd8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x329dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x329ddc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x329ddcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x329de0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x329de0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x329de4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x329de4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329de8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329dec: 0x3e00008  jr          $ra
    ctx->pc = 0x329DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329DECu;
        // 0x329df0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329DF4u;
    // 0x329df4: 0x0  nop
    ctx->pc = 0x329df4u;
    // NOP
    ctx->pc = 0x329df8u;
}
