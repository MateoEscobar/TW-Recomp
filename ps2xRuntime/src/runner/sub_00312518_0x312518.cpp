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

// Function: sub_00312518
// Address: 0x312518 - 0x312580
void sub_00312518_0x312518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312518_0x312518");
#endif

    switch (ctx->pc) {
        case 0x312558u: goto label_312558;
        case 0x31256cu: goto label_31256c;
        default: break;
    }

    ctx->pc = 0x312518u;

    // 0x312518: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x312518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31251c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31251cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x312520: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x312520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x312524: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x312524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312528: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x312528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x31252c: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x31252Cu;
    {
        const bool branch_taken_0x31252c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x312530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31252Cu;
        // 0x312530: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31252c) {
            ctx->pc = 0x312564u;
            goto label_312564;
        }
    }
    ctx->pc = 0x312534u;
    // 0x312534: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x312534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x312538: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x312538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x31253c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x31253cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x312540: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x312540u;
    {
        const bool branch_taken_0x312540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312540u;
        // 0x312544: 0x24620bb8  addiu       $v0, $v1, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312540) {
            ctx->pc = 0x312564u;
            goto label_312564;
        }
    }
    ctx->pc = 0x312548u;
    // 0x312548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x312548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31254c: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x31254cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x312550: 0xc0c47de  jal         func_311F78
    ctx->pc = 0x312550u;
    SET_GPR_U32(ctx, 31, 0x312558u);
    ctx->pc = 0x312554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312550u;
    // 0x312554: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311F78u, 0x312550u, 0x312558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312558u;
label_312558:
    // 0x312558: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x312558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31255c: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x31255Cu;
    {
        const bool branch_taken_0x31255c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x31255c) {
            ctx->pc = 0x312560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31255Cu;
            // 0x312560: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312564u;
            goto label_312564;
        }
    }
    ctx->pc = 0x312564u;
label_312564:
    // 0x312564: 0xc0c4882  jal         func_312208
    ctx->pc = 0x312564u;
    SET_GPR_U32(ctx, 31, 0x31256Cu);
    ctx->pc = 0x312568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312564u;
    // 0x312568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312208u, 0x312564u, 0x31256Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31256Cu;
label_31256c:
    // 0x31256c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31256cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312570: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x312570u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x312574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312578: 0x3e00008  jr          $ra
    ctx->pc = 0x312578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312578u;
        // 0x31257c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312580u;
}
