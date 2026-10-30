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

// Function: sub_002DC540
// Address: 0x2dc540 - 0x2dc568
void sub_002DC540_0x2dc540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC540_0x2dc540");
#endif

    switch (ctx->pc) {
        case 0x2dc540u: goto label_2dc540;
        case 0x2dc544u: goto label_2dc544;
        case 0x2dc548u: goto label_2dc548;
        case 0x2dc54cu: goto label_2dc54c;
        case 0x2dc550u: goto label_2dc550;
        case 0x2dc554u: goto label_2dc554;
        case 0x2dc558u: goto label_2dc558;
        case 0x2dc55cu: goto label_2dc55c;
        case 0x2dc560u: goto label_2dc560;
        case 0x2dc564u: goto label_2dc564;
        default: break;
    }

    ctx->pc = 0x2dc540u;

label_2dc540:
    // 0x2dc540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dc540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2dc544:
    // 0x2dc544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2dc548:
    // 0x2dc548: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2dc548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2dc54c:
    // 0x2dc54c: 0x84430030  lh          $v1, 0x30($v0)
    ctx->pc = 0x2dc54cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2dc550:
    // 0x2dc550: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x2dc550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2dc554:
    // 0x2dc554: 0xa0f809  jalr        $a1
label_2dc558:
    if (ctx->pc == 0x2DC558u) {
        ctx->pc = 0x2DC558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC554u;
        // 0x2dc558: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC55Cu;
        goto label_2dc55c;
    }
    ctx->pc = 0x2DC554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2DC55Cu);
        ctx->pc = 0x2DC558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC554u;
        // 0x2dc558: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC554u, 0x2DC55Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DC55Cu;
label_2dc55c:
    // 0x2dc55c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc55cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dc560:
    // 0x2dc560: 0x3e00008  jr          $ra
label_2dc564:
    if (ctx->pc == 0x2DC564u) {
        ctx->pc = 0x2DC564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC560u;
        // 0x2dc564: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC568u;
        goto label_fallthrough_0x2dc560;
    }
    ctx->pc = 0x2DC560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC560u;
        // 0x2dc564: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2dc560:
    ctx->pc = 0x2DC568u;
}
