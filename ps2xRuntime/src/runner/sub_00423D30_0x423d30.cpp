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

// Function: sub_00423D30
// Address: 0x423d30 - 0x423de0
void sub_00423D30_0x423d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00423D30_0x423d30");
#endif

    switch (ctx->pc) {
        case 0x423d64u: goto label_423d64;
        case 0x423d88u: goto label_423d88;
        case 0x423d90u: goto label_423d90;
        default: break;
    }

    ctx->pc = 0x423d30u;

    // 0x423d30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x423d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x423d34: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x423d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x423d38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x423d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x423d3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x423d3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423d40: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x423d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x423d44: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x423d44u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x423d48: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x423d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x423d4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x423d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x423d50: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x423d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x423d54: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x423D54u;
    {
        const bool branch_taken_0x423d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x423D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423D54u;
        // 0x423d58: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423d54) {
            ctx->pc = 0x423D74u;
            goto label_423d74;
        }
    }
    ctx->pc = 0x423D5Cu;
    // 0x423d5c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x423D5Cu;
    {
        const bool branch_taken_0x423d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x423D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423D5Cu;
        // 0x423d60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423d5c) {
            ctx->pc = 0x423DC4u;
            goto label_423dc4;
        }
    }
    ctx->pc = 0x423D64u;
label_423d64:
    // 0x423d64: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x423d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x423d68: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x423d68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x423d6c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x423D6Cu;
    {
        const bool branch_taken_0x423d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x423D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423D6Cu;
        // 0x423d70: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423d6c) {
            ctx->pc = 0x423DC4u;
            goto label_423dc4;
        }
    }
    ctx->pc = 0x423D74u;
label_423d74:
    // 0x423d74: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x423d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x423d78: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x423D78u;
    {
        const bool branch_taken_0x423d78 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x423D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423D78u;
        // 0x423d7c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423d78) {
            ctx->pc = 0x423DC0u;
            goto label_423dc0;
        }
    }
    ctx->pc = 0x423D80u;
    // 0x423d80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x423d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423d84: 0x0  nop
    ctx->pc = 0x423d84u;
    // NOP
label_423d88:
    // 0x423d88: 0xc108f3c  jal         func_423CF0
    ctx->pc = 0x423D88u;
    SET_GPR_U32(ctx, 31, 0x423D90u);
    ctx->pc = 0x423D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x423D88u;
    // 0x423d8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423CF0u, 0x423D88u, 0x423D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x423D90u;
label_423d90:
    // 0x423d90: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x423d90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423d94: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x423d94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x423d98: 0x54520005  bnel        $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x423D98u;
    {
        const bool branch_taken_0x423d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x423d98) {
            ctx->pc = 0x423D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x423D98u;
            // 0x423d9c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x423DB0u;
            goto label_423db0;
        }
    }
    ctx->pc = 0x423DA0u;
    // 0x423da0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x423da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x423da4: 0x1053ffef  beq         $v0, $s3, . + 4 + (-0x11 << 2)
    ctx->pc = 0x423DA4u;
    {
        const bool branch_taken_0x423da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x423DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423DA4u;
        // 0x423da8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423da4) {
            ctx->pc = 0x423D64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_423d64;
        }
    }
    ctx->pc = 0x423DACu;
    // 0x423dac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x423dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_423db0:
    // 0x423db0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x423db0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x423db4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x423db4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x423db8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x423DB8u;
    {
        const bool branch_taken_0x423db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x423DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423DB8u;
        // 0x423dbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423db8) {
            ctx->pc = 0x423D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_423d88;
        }
    }
    ctx->pc = 0x423DC0u;
label_423dc0:
    // 0x423dc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x423dc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_423dc4:
    // 0x423dc4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x423dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x423dc8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x423dc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x423dcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x423dccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x423dd0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x423dd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x423dd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x423dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x423dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x423DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x423DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423DD8u;
        // 0x423ddc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x423DE0u;
}
