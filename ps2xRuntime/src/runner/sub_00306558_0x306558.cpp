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

// Function: sub_00306558
// Address: 0x306558 - 0x3065b0
void sub_00306558_0x306558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306558_0x306558");
#endif

    switch (ctx->pc) {
        case 0x306570u: goto label_306570;
        default: break;
    }

    ctx->pc = 0x306558u;

    // 0x306558: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x306558u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x30655c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x30655cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x306560: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x306560u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306564: 0x2446a1b0  addiu       $a2, $v0, -0x5E50
    ctx->pc = 0x306564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943152));
    // 0x306568: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x306568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30656c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x30656cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306570:
    // 0x306570: 0x8d24a1a0  lw          $a0, -0x5E60($t1)
    ctx->pc = 0x306570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294943136)));
    // 0x306574: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x306574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x306578: 0x481004  sllv        $v0, $t0, $v0
    ctx->pc = 0x306578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x30657c: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x30657cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x306580: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x306580u;
    {
        const bool branch_taken_0x306580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x306584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306580u;
        // 0x306584: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306580) {
            ctx->pc = 0x306598u;
            goto label_306598;
        }
    }
    ctx->pc = 0x306588u;
    // 0x306588: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x306588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x30658c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x30658cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306590: 0x3e00008  jr          $ra
    ctx->pc = 0x306590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306590u;
        // 0x306594: 0xace3a1a0  sw          $v1, -0x5E60($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294943136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306598u;
label_306598:
    // 0x306598: 0x2ca2001e  sltiu       $v0, $a1, 0x1E
    ctx->pc = 0x306598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x30659c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x30659Cu;
    {
        const bool branch_taken_0x30659c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3065A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30659Cu;
        // 0x3065a0: 0x24c60090  addiu       $a2, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30659c) {
            ctx->pc = 0x306570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306570;
        }
    }
    ctx->pc = 0x3065A4u;
    // 0x3065a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3065A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3065A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3065A4u;
        // 0x3065a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3065A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3065ACu;
    // 0x3065ac: 0x0  nop
    ctx->pc = 0x3065acu;
    // NOP
    ctx->pc = 0x3065b0u;
}
