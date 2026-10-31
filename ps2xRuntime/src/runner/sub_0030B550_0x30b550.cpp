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

// Function: sub_0030B550
// Address: 0x30b550 - 0x30b590
void sub_0030B550_0x30b550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B550_0x30b550");
#endif

    switch (ctx->pc) {
        case 0x30b550u: goto label_30b550;
        case 0x30b554u: goto label_30b554;
        case 0x30b558u: goto label_30b558;
        case 0x30b55cu: goto label_30b55c;
        case 0x30b560u: goto label_30b560;
        case 0x30b564u: goto label_30b564;
        case 0x30b568u: goto label_30b568;
        case 0x30b56cu: goto label_30b56c;
        case 0x30b570u: goto label_30b570;
        case 0x30b574u: goto label_30b574;
        case 0x30b578u: goto label_30b578;
        case 0x30b57cu: goto label_30b57c;
        case 0x30b580u: goto label_30b580;
        case 0x30b584u: goto label_30b584;
        case 0x30b588u: goto label_30b588;
        case 0x30b58cu: goto label_30b58c;
        default: break;
    }

    ctx->pc = 0x30b550u;

label_30b550:
    // 0x30b550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30b550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_30b554:
    // 0x30b554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30b554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30b558:
    // 0x30b558: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x30b558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_30b55c:
    // 0x30b55c: 0x8ca300cc  lw          $v1, 0xCC($a1)
    ctx->pc = 0x30b55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 204)));
label_30b560:
    // 0x30b560: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_30b564:
    if (ctx->pc == 0x30B564u) {
        ctx->pc = 0x30B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B560u;
        // 0x30b564: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B568u;
        goto label_30b568;
    }
    ctx->pc = 0x30B560u;
    {
        const bool branch_taken_0x30b560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B560u;
        // 0x30b564: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b560) {
            ctx->pc = 0x30B580u;
            goto label_30b580;
        }
    }
    ctx->pc = 0x30B568u;
label_30b568:
    // 0x30b568: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x30b568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_30b56c:
    // 0x30b56c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x30b56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_30b570:
    // 0x30b570: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x30b570u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_30b574:
    // 0x30b574: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x30b574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_30b578:
    // 0x30b578: 0x60f809  jalr        $v1
label_30b57c:
    if (ctx->pc == 0x30B57Cu) {
        ctx->pc = 0x30B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B578u;
        // 0x30b57c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B580u;
        goto label_30b580;
    }
    ctx->pc = 0x30B578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x30B580u);
        ctx->pc = 0x30B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B578u;
        // 0x30b57c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B578u, 0x30B580u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30B580u;
label_30b580:
    // 0x30b580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30b580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30b584:
    // 0x30b584: 0x3e00008  jr          $ra
label_30b588:
    if (ctx->pc == 0x30B588u) {
        ctx->pc = 0x30B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B584u;
        // 0x30b588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B58Cu;
        goto label_30b58c;
    }
    ctx->pc = 0x30B584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B584u;
        // 0x30b588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B58Cu;
label_30b58c:
    // 0x30b58c: 0x0  nop
    ctx->pc = 0x30b58cu;
    // NOP
    ctx->pc = 0x30b590u;
}
