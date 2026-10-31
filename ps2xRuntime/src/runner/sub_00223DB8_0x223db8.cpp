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

// Function: sub_00223DB8
// Address: 0x223db8 - 0x223e20
void sub_00223DB8_0x223db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223DB8_0x223db8");
#endif

    switch (ctx->pc) {
        case 0x223de0u: goto label_223de0;
        case 0x223df8u: goto label_223df8;
        default: break;
    }

    ctx->pc = 0x223db8u;

    // 0x223db8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x223db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x223dbc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x223dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x223dc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x223dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x223dc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x223dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223dc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223dcc: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x223dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x223dd0: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x223DD0u;
    {
        const bool branch_taken_0x223dd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x223DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223DD0u;
        // 0x223dd4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223dd0) {
            ctx->pc = 0x223E08u;
            goto label_223e08;
        }
    }
    ctx->pc = 0x223DD8u;
    // 0x223dd8: 0xc05d45e  jal         func_175178
    ctx->pc = 0x223DD8u;
    SET_GPR_U32(ctx, 31, 0x223DE0u);
    ctx->pc = 0x175178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175178u, 0x223DD8u, 0x223DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223DE0u;
label_223de0:
    // 0x223de0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x223de0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x223de4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x223DE4u;
    {
        const bool branch_taken_0x223de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223de4) {
            ctx->pc = 0x223DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223DE4u;
            // 0x223de8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223E0Cu;
            goto label_223e0c;
        }
    }
    ctx->pc = 0x223DECu;
    // 0x223dec: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x223decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x223df0: 0xc05d470  jal         func_1751C0
    ctx->pc = 0x223DF0u;
    SET_GPR_U32(ctx, 31, 0x223DF8u);
    ctx->pc = 0x223DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223DF0u;
    // 0x223df4: 0x3225ffff  andi        $a1, $s1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1751C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1751C0u, 0x223DF0u, 0x223DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223DF8u;
label_223df8:
    // 0x223df8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x223df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x223dfc: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x223dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
    // 0x223e00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x223E00u;
    {
        const bool branch_taken_0x223e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E00u;
        // 0x223e04: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e00) {
            ctx->pc = 0x223E0Cu;
            goto label_223e0c;
        }
    }
    ctx->pc = 0x223E08u;
label_223e08:
    // 0x223e08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x223e08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223e0c:
    // 0x223e0c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x223e0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223e10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x223e10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223e14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223e18: 0x3e00008  jr          $ra
    ctx->pc = 0x223E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E18u;
        // 0x223e1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223E20u;
}
