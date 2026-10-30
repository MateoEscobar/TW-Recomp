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

// Function: sub_004F0240
// Address: 0x4f0240 - 0x4f0270
void sub_004F0240_0x4f0240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F0240_0x4f0240");
#endif

    switch (ctx->pc) {
        case 0x4f0240u: goto label_4f0240;
        case 0x4f0244u: goto label_4f0244;
        case 0x4f0248u: goto label_4f0248;
        case 0x4f024cu: goto label_4f024c;
        case 0x4f0250u: goto label_4f0250;
        case 0x4f0254u: goto label_4f0254;
        case 0x4f0258u: goto label_4f0258;
        case 0x4f025cu: goto label_4f025c;
        case 0x4f0260u: goto label_4f0260;
        case 0x4f0264u: goto label_4f0264;
        case 0x4f0268u: goto label_4f0268;
        case 0x4f026cu: goto label_4f026c;
        default: break;
    }

    ctx->pc = 0x4f0240u;

label_4f0240:
    // 0x4f0240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f0240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4f0244:
    // 0x4f0244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f0244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f0248:
    // 0x4f0248: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4f0248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4f024c:
    // 0x4f024c: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4f024cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4f0250:
    // 0x4f0250: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4f0250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4f0254:
    // 0x4f0254: 0x40f809  jalr        $v0
label_4f0258:
    if (ctx->pc == 0x4F0258u) {
        ctx->pc = 0x4F0258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0254u;
        // 0x4f0258: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F025Cu;
        goto label_4f025c;
    }
    ctx->pc = 0x4F0254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F025Cu);
        ctx->pc = 0x4F0258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0254u;
        // 0x4f0258: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0254u, 0x4F025Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F025Cu;
label_4f025c:
    // 0x4f025c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f025cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f0260:
    // 0x4f0260: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x4f0260u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_4f0264:
    // 0x4f0264: 0x3e00008  jr          $ra
label_4f0268:
    if (ctx->pc == 0x4F0268u) {
        ctx->pc = 0x4F0268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0264u;
        // 0x4f0268: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F026Cu;
        goto label_4f026c;
    }
    ctx->pc = 0x4F0264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0264u;
        // 0x4f0268: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F026Cu;
label_4f026c:
    // 0x4f026c: 0x0  nop
    ctx->pc = 0x4f026cu;
    // NOP
    ctx->pc = 0x4f0270u;
}
