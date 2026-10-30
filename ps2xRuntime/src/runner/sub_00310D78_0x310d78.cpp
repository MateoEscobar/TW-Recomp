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

// Function: sub_00310D78
// Address: 0x310d78 - 0x310e00
void sub_00310D78_0x310d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310D78_0x310d78");
#endif

    switch (ctx->pc) {
        case 0x310d98u: goto label_310d98;
        case 0x310dd8u: goto label_310dd8;
        default: break;
    }

    ctx->pc = 0x310d78u;

    // 0x310d78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x310d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x310d7c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x310d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x310d80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x310d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x310d84: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x310d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310d88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x310d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x310d8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x310d8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310d90: 0xc08a61a  jal         func_229868
    ctx->pc = 0x310D90u;
    SET_GPR_U32(ctx, 31, 0x310D98u);
    ctx->pc = 0x310D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310D90u;
    // 0x310d94: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x310D90u, 0x310D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310D98u;
label_310d98:
    // 0x310d98: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x310D98u;
    {
        const bool branch_taken_0x310d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D98u;
        // 0x310d9c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d98) {
            ctx->pc = 0x310DE8u;
            goto label_310de8;
        }
    }
    ctx->pc = 0x310DA0u;
    // 0x310da0: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x310da0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x310da4: 0x10c2000e  beq         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x310DA4u;
    {
        const bool branch_taken_0x310da4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x310DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310DA4u;
        // 0x310da8: 0x28c20015  slti        $v0, $a2, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310da4) {
            ctx->pc = 0x310DE0u;
            goto label_310de0;
        }
    }
    ctx->pc = 0x310DACu;
    // 0x310dac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x310DACu;
    {
        const bool branch_taken_0x310dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310DACu;
        // 0x310db0: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310dac) {
            ctx->pc = 0x310DC4u;
            goto label_310dc4;
        }
    }
    ctx->pc = 0x310DB4u;
    // 0x310db4: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x310DB4u;
    {
        const bool branch_taken_0x310db4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x310DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310DB4u;
        // 0x310db8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310db4) {
            ctx->pc = 0x310DD0u;
            goto label_310dd0;
        }
    }
    ctx->pc = 0x310DBCu;
    // 0x310dbc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x310DBCu;
    {
        const bool branch_taken_0x310dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310DBCu;
        // 0x310dc0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310dbc) {
            ctx->pc = 0x310DF0u;
            goto label_310df0;
        }
    }
    ctx->pc = 0x310DC4u;
label_310dc4:
    // 0x310dc4: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x310dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x310dc8: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x310DC8u;
    {
        const bool branch_taken_0x310dc8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x310DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310DC8u;
        // 0x310dcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310dc8) {
            ctx->pc = 0x310DECu;
            goto label_310dec;
        }
    }
    ctx->pc = 0x310DD0u;
label_310dd0:
    // 0x310dd0: 0xc0c431a  jal         func_310C68
    ctx->pc = 0x310DD0u;
    SET_GPR_U32(ctx, 31, 0x310DD8u);
    ctx->pc = 0x310DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310DD0u;
    // 0x310dd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310C68u, 0x310DD0u, 0x310DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310DD8u;
label_310dd8:
    // 0x310dd8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x310DD8u;
    {
        const bool branch_taken_0x310dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310DD8u;
        // 0x310ddc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310dd8) {
            ctx->pc = 0x310DECu;
            goto label_310dec;
        }
    }
    ctx->pc = 0x310DE0u;
label_310de0:
    // 0x310de0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x310DE0u;
    {
        const bool branch_taken_0x310de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310DE0u;
        // 0x310de4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310de0) {
            ctx->pc = 0x310DECu;
            goto label_310dec;
        }
    }
    ctx->pc = 0x310DE8u;
label_310de8:
    // 0x310de8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x310de8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_310dec:
    // 0x310dec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x310decu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_310df0:
    // 0x310df0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x310df0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x310df4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x310df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310df8: 0x3e00008  jr          $ra
    ctx->pc = 0x310DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310DF8u;
        // 0x310dfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310E00u;
}
