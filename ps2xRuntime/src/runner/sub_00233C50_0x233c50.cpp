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

// Function: sub_00233C50
// Address: 0x233c50 - 0x233d60
void sub_00233C50_0x233c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233C50_0x233c50");
#endif

    switch (ctx->pc) {
        case 0x233c74u: goto label_233c74;
        case 0x233ca8u: goto label_233ca8;
        case 0x233d14u: goto label_233d14;
        case 0x233d24u: goto label_233d24;
        case 0x233d34u: goto label_233d34;
        default: break;
    }

    ctx->pc = 0x233c50u;

    // 0x233c50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x233c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x233c54: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x233c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x233c58: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x233c58u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x233c5c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x233c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x233c60: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x233c60u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x233c64: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x233c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x233c68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233c6c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x233C6Cu;
    SET_GPR_U32(ctx, 31, 0x233C74u);
    ctx->pc = 0x233C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233C6Cu;
    // 0x233c70: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x233C6Cu, 0x233C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233C74u;
label_233c74:
    // 0x233c74: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x233c74u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x233c78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x233c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233c7c: 0x8e420228  lw          $v0, 0x228($s2)
    ctx->pc = 0x233c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x510228u));
    // 0x233c80: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x233C80u;
    {
        const bool branch_taken_0x233c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C80u;
        // 0x233c84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c80) {
            ctx->pc = 0x233D44u;
            goto label_233d44;
        }
    }
    ctx->pc = 0x233C88u;
    // 0x233c88: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x233C88u;
    {
        const bool branch_taken_0x233c88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x233C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C88u;
        // 0x233c8c: 0x8e23489c  lw          $v1, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c88) {
            ctx->pc = 0x233D44u;
            goto label_233d44;
        }
    }
    ctx->pc = 0x233C90u;
    // 0x233c90: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x233c90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x233c94: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x233c94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x233c98: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x233C98u;
    {
        const bool branch_taken_0x233c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C98u;
        // 0x233c9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c98) {
            ctx->pc = 0x233D44u;
            goto label_233d44;
        }
    }
    ctx->pc = 0x233CA0u;
    // 0x233ca0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x233CA0u;
    SET_GPR_U32(ctx, 31, 0x233CA8u);
    ctx->pc = 0x233CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233CA0u;
    // 0x233ca4: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x233CA0u, 0x233CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233CA8u;
label_233ca8:
    // 0x233ca8: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x233CA8u;
    {
        const bool branch_taken_0x233ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233CA8u;
        // 0x233cac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ca8) {
            ctx->pc = 0x233D44u;
            goto label_233d44;
        }
    }
    ctx->pc = 0x233CB0u;
    // 0x233cb0: 0x8e420228  lw          $v0, 0x228($s2)
    ctx->pc = 0x233cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 552)));
    // 0x233cb4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x233cb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x233cb8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x233CB8u;
    {
        const bool branch_taken_0x233cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233CB8u;
        // 0x233cbc: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233cb8) {
            ctx->pc = 0x233D1Cu;
            goto label_233d1c;
        }
    }
    ctx->pc = 0x233CC0u;
    // 0x233cc0: 0x860301be  lh          $v1, 0x1BE($s0)
    ctx->pc = 0x233cc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x233cc4: 0x2444bf50  addiu       $a0, $v0, -0x40B0
    ctx->pc = 0x233cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950736));
    // 0x233cc8: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x233cc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x233ccc: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x233CCCu;
    {
        const bool branch_taken_0x233ccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x233CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233CCCu;
        // 0x233cd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ccc) {
            ctx->pc = 0x233D04u;
            goto label_233d04;
        }
    }
    ctx->pc = 0x233CD4u;
    // 0x233cd4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x233cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x233cd8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x233CD8u;
    {
        const bool branch_taken_0x233cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x233CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233CD8u;
        // 0x233cdc: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233cd8) {
            ctx->pc = 0x233CF0u;
            goto label_233cf0;
        }
    }
    ctx->pc = 0x233CE0u;
    // 0x233ce0: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x233ce0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x233ce4: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x233ce4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x233ce8: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x233CE8u;
    {
        const bool branch_taken_0x233ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x233CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233CE8u;
        // 0x233cec: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ce8) {
            ctx->pc = 0x233D00u;
            goto label_233d00;
        }
    }
    ctx->pc = 0x233CF0u;
label_233cf0:
    // 0x233cf0: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x233cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x233cf4: 0x24421b90  addiu       $v0, $v0, 0x1B90
    ctx->pc = 0x233cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7056));
    // 0x233cf8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x233CF8u;
    {
        const bool branch_taken_0x233cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x233cf8) {
            ctx->pc = 0x233D04u;
            goto label_233d04;
        }
    }
    ctx->pc = 0x233D00u;
label_233d00:
    // 0x233d00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x233d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233d04:
    // 0x233d04: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x233D04u;
    {
        const bool branch_taken_0x233d04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x233d04) {
            ctx->pc = 0x233D1Cu;
            goto label_233d1c;
        }
    }
    ctx->pc = 0x233D0Cu;
    // 0x233d0c: 0xc089b98  jal         func_226E60
    ctx->pc = 0x233D0Cu;
    SET_GPR_U32(ctx, 31, 0x233D14u);
    ctx->pc = 0x233D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D0Cu;
    // 0x233d10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x233D0Cu, 0x233D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233D14u;
label_233d14:
    // 0x233d14: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x233D14u;
    {
        const bool branch_taken_0x233d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D14u;
        // 0x233d18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d14) {
            ctx->pc = 0x233D44u;
            goto label_233d44;
        }
    }
    ctx->pc = 0x233D1Cu;
label_233d1c:
    // 0x233d1c: 0xc089f22  jal         func_227C88
    ctx->pc = 0x233D1Cu;
    SET_GPR_U32(ctx, 31, 0x233D24u);
    ctx->pc = 0x233D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D1Cu;
    // 0x233d20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C88u, 0x233D1Cu, 0x233D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233D24u;
label_233d24:
    // 0x233d24: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x233D24u;
    {
        const bool branch_taken_0x233d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233d24) {
            ctx->pc = 0x233D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233D24u;
            // 0x233d28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233D44u;
            goto label_233d44;
        }
    }
    ctx->pc = 0x233D2Cu;
    // 0x233d2c: 0xc089b98  jal         func_226E60
    ctx->pc = 0x233D2Cu;
    SET_GPR_U32(ctx, 31, 0x233D34u);
    ctx->pc = 0x233D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D2Cu;
    // 0x233d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x233D2Cu, 0x233D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233D34u;
label_233d34:
    // 0x233d34: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x233d34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233d38: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x233D38u;
    {
        const bool branch_taken_0x233d38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x233D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D38u;
        // 0x233d3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d38) {
            ctx->pc = 0x233D44u;
            goto label_233d44;
        }
    }
    ctx->pc = 0x233D40u;
    // 0x233d40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x233d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233d44:
    // 0x233d44: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x233d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x233d48: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x233d48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233d4c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x233d4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233d50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233d54: 0x3e00008  jr          $ra
    ctx->pc = 0x233D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D54u;
        // 0x233d58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233D5Cu;
    // 0x233d5c: 0x0  nop
    ctx->pc = 0x233d5cu;
    // NOP
    ctx->pc = 0x233d60u;
}
