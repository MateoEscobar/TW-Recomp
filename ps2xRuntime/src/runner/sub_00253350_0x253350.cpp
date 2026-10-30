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

// Function: sub_00253350
// Address: 0x253350 - 0x253398
void sub_00253350_0x253350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253350_0x253350");
#endif

    switch (ctx->pc) {
        case 0x253368u: goto label_253368;
        default: break;
    }

    ctx->pc = 0x253350u;

    // 0x253350: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x253350u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x253354: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x253354u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x253358: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x253358u;
    {
        const bool branch_taken_0x253358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253358u;
        // 0x25335c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253358) {
            ctx->pc = 0x25338Cu;
            goto label_25338c;
        }
    }
    ctx->pc = 0x253360u;
    // 0x253360: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x253360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253364: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x253364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_253368:
    // 0x253368: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x253368u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25336c: 0x54450004  bnel        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25336Cu;
    {
        const bool branch_taken_0x25336c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x25336c) {
            ctx->pc = 0x253370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25336Cu;
            // 0x253370: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253380u;
            goto label_253380;
        }
    }
    ctx->pc = 0x253374u;
    // 0x253374: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x253374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x253378: 0x3e00008  jr          $ra
    ctx->pc = 0x253378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253378u;
        // 0x25337c: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253380u;
label_253380:
    // 0x253380: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x253380u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x253384: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x253384u;
    {
        const bool branch_taken_0x253384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253384u;
        // 0x253388: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253384) {
            ctx->pc = 0x253368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253368;
        }
    }
    ctx->pc = 0x25338Cu;
label_25338c:
    // 0x25338c: 0x3e00008  jr          $ra
    ctx->pc = 0x25338Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25338Cu;
        // 0x253390: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25338Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253394u;
    // 0x253394: 0x0  nop
    ctx->pc = 0x253394u;
    // NOP
    ctx->pc = 0x253398u;
}
