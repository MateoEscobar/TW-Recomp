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

// Function: sub_004EF558
// Address: 0x4ef558 - 0x4ef588
void sub_004EF558_0x4ef558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF558_0x4ef558");
#endif

    switch (ctx->pc) {
        case 0x4ef558u: goto label_4ef558;
        case 0x4ef55cu: goto label_4ef55c;
        case 0x4ef560u: goto label_4ef560;
        case 0x4ef564u: goto label_4ef564;
        case 0x4ef568u: goto label_4ef568;
        case 0x4ef56cu: goto label_4ef56c;
        case 0x4ef570u: goto label_4ef570;
        case 0x4ef574u: goto label_4ef574;
        case 0x4ef578u: goto label_4ef578;
        case 0x4ef57cu: goto label_4ef57c;
        case 0x4ef580u: goto label_4ef580;
        case 0x4ef584u: goto label_4ef584;
        default: break;
    }

    ctx->pc = 0x4ef558u;

label_4ef558:
    // 0x4ef558: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ef558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4ef55c:
    // 0x4ef55c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ef55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ef560:
    // 0x4ef560: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4ef560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4ef564:
    // 0x4ef564: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4ef564u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4ef568:
    // 0x4ef568: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4ef568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4ef56c:
    // 0x4ef56c: 0x40f809  jalr        $v0
label_4ef570:
    if (ctx->pc == 0x4EF570u) {
        ctx->pc = 0x4EF570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF56Cu;
        // 0x4ef570: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EF574u;
        goto label_4ef574;
    }
    ctx->pc = 0x4EF56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4EF574u);
        ctx->pc = 0x4EF570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF56Cu;
        // 0x4ef570: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF56Cu, 0x4EF574u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EF574u;
label_4ef574:
    // 0x4ef574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ef574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ef578:
    // 0x4ef578: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x4ef578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_4ef57c:
    // 0x4ef57c: 0x3e00008  jr          $ra
label_4ef580:
    if (ctx->pc == 0x4EF580u) {
        ctx->pc = 0x4EF580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF57Cu;
        // 0x4ef580: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EF584u;
        goto label_4ef584;
    }
    ctx->pc = 0x4EF57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF57Cu;
        // 0x4ef580: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EF584u;
label_4ef584:
    // 0x4ef584: 0x0  nop
    ctx->pc = 0x4ef584u;
    // NOP
    ctx->pc = 0x4ef588u;
}
