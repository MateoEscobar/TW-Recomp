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

// Function: sub_00399CD0
// Address: 0x399cd0 - 0x399d60
void sub_00399CD0_0x399cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399CD0_0x399cd0");
#endif

    switch (ctx->pc) {
        case 0x399cd0u: goto label_399cd0;
        case 0x399cd4u: goto label_399cd4;
        case 0x399cd8u: goto label_399cd8;
        case 0x399cdcu: goto label_399cdc;
        case 0x399ce0u: goto label_399ce0;
        case 0x399ce4u: goto label_399ce4;
        case 0x399ce8u: goto label_399ce8;
        case 0x399cecu: goto label_399cec;
        case 0x399cf0u: goto label_399cf0;
        case 0x399cf4u: goto label_399cf4;
        case 0x399cf8u: goto label_399cf8;
        case 0x399cfcu: goto label_399cfc;
        case 0x399d00u: goto label_399d00;
        case 0x399d04u: goto label_399d04;
        case 0x399d08u: goto label_399d08;
        case 0x399d0cu: goto label_399d0c;
        case 0x399d10u: goto label_399d10;
        case 0x399d14u: goto label_399d14;
        case 0x399d18u: goto label_399d18;
        case 0x399d1cu: goto label_399d1c;
        case 0x399d20u: goto label_399d20;
        case 0x399d24u: goto label_399d24;
        case 0x399d28u: goto label_399d28;
        case 0x399d2cu: goto label_399d2c;
        case 0x399d30u: goto label_399d30;
        case 0x399d34u: goto label_399d34;
        case 0x399d38u: goto label_399d38;
        case 0x399d3cu: goto label_399d3c;
        case 0x399d40u: goto label_399d40;
        case 0x399d44u: goto label_399d44;
        case 0x399d48u: goto label_399d48;
        case 0x399d4cu: goto label_399d4c;
        case 0x399d50u: goto label_399d50;
        case 0x399d54u: goto label_399d54;
        case 0x399d58u: goto label_399d58;
        case 0x399d5cu: goto label_399d5c;
        default: break;
    }

    ctx->pc = 0x399cd0u;

label_399cd0:
    // 0x399cd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x399cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_399cd4:
    // 0x399cd4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x399cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_399cd8:
    // 0x399cd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x399cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_399cdc:
    // 0x399cdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x399cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_399ce0:
    // 0x399ce0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x399ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_399ce4:
    // 0x399ce4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x399ce4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_399ce8:
    // 0x399ce8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x399ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_399cec:
    // 0x399cec: 0x40f809  jalr        $v0
label_399cf0:
    if (ctx->pc == 0x399CF0u) {
        ctx->pc = 0x399CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399CECu;
        // 0x399cf0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399CF4u;
        goto label_399cf4;
    }
    ctx->pc = 0x399CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x399CF4u);
        ctx->pc = 0x399CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399CECu;
        // 0x399cf0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399CECu, 0x399CF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x399CF4u;
label_399cf4:
    // 0x399cf4: 0x96050018  lhu         $a1, 0x18($s0)
    ctx->pc = 0x399cf4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_399cf8:
    // 0x399cf8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x399cf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_399cfc:
    // 0x399cfc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x399cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_399d00:
    // 0x399d00: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x399d00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
label_399d04:
    // 0x399d04: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x399d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_399d08:
    // 0x399d08: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_399d0c:
    if (ctx->pc == 0x399D0Cu) {
        ctx->pc = 0x399D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399D08u;
        // 0x399d0c: 0x23403  sra         $a2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399D10u;
        goto label_399d10;
    }
    ctx->pc = 0x399D08u;
    {
        const bool branch_taken_0x399d08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x399D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399D08u;
        // 0x399d0c: 0x23403  sra         $a2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399d08) {
            ctx->pc = 0x399D4Cu;
            goto label_399d4c;
        }
    }
    ctx->pc = 0x399D10u;
label_399d10:
    // 0x399d10: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x399d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_399d14:
    // 0x399d14: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x399d14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_399d18:
    // 0x399d18: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x399d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_399d1c:
    // 0x399d1c: 0x21482  srl         $v0, $v0, 18
    ctx->pc = 0x399d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 18));
label_399d20:
    // 0x399d20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x399d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_399d24:
    // 0x399d24: 0x50470006  beql        $v0, $a3, . + 4 + (0x6 << 2)
label_399d28:
    if (ctx->pc == 0x399D28u) {
        ctx->pc = 0x399D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399D24u;
        // 0x399d28: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399D2Cu;
        goto label_399d2c;
    }
    ctx->pc = 0x399D24u;
    {
        const bool branch_taken_0x399d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x399d24) {
            ctx->pc = 0x399D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399D24u;
            // 0x399d28: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399D40u;
            goto label_399d40;
        }
    }
    ctx->pc = 0x399D2Cu;
label_399d2c:
    // 0x399d2c: 0x94820024  lhu         $v0, 0x24($a0)
    ctx->pc = 0x399d2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
label_399d30:
    // 0x399d30: 0x54460003  bnel        $v0, $a2, . + 4 + (0x3 << 2)
label_399d34:
    if (ctx->pc == 0x399D34u) {
        ctx->pc = 0x399D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399D30u;
        // 0x399d34: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399D38u;
        goto label_399d38;
    }
    ctx->pc = 0x399D30u;
    {
        const bool branch_taken_0x399d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x399d30) {
            ctx->pc = 0x399D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399D30u;
            // 0x399d34: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399D40u;
            goto label_399d40;
        }
    }
    ctx->pc = 0x399D38u;
label_399d38:
    // 0x399d38: 0x10000005  b           . + 4 + (0x5 << 2)
label_399d3c:
    if (ctx->pc == 0x399D3Cu) {
        ctx->pc = 0x399D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399D38u;
        // 0x399d3c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399D40u;
        goto label_399d40;
    }
    ctx->pc = 0x399D38u;
    {
        const bool branch_taken_0x399d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399D38u;
        // 0x399d3c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399d38) {
            ctx->pc = 0x399D50u;
            goto label_399d50;
        }
    }
    ctx->pc = 0x399D40u;
label_399d40:
    // 0x399d40: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x399d40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_399d44:
    // 0x399d44: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_399d48:
    if (ctx->pc == 0x399D48u) {
        ctx->pc = 0x399D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399D44u;
        // 0x399d48: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399D4Cu;
        goto label_399d4c;
    }
    ctx->pc = 0x399D44u;
    {
        const bool branch_taken_0x399d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x399D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399D44u;
        // 0x399d48: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399d44) {
            ctx->pc = 0x399D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399d18;
        }
    }
    ctx->pc = 0x399D4Cu;
label_399d4c:
    // 0x399d4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x399d4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_399d50:
    // 0x399d50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x399d50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_399d54:
    // 0x399d54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x399d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_399d58:
    // 0x399d58: 0x3e00008  jr          $ra
label_399d5c:
    if (ctx->pc == 0x399D5Cu) {
        ctx->pc = 0x399D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399D58u;
        // 0x399d5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399D60u;
        goto label_fallthrough_0x399d58;
    }
    ctx->pc = 0x399D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399D58u;
        // 0x399d5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x399d58:
    ctx->pc = 0x399D60u;
}
