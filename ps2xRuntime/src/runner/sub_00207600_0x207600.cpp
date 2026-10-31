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

// Function: sub_00207600
// Address: 0x207600 - 0x207630
void sub_00207600_0x207600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207600_0x207600");
#endif

    switch (ctx->pc) {
        case 0x207600u: goto label_207600;
        case 0x207604u: goto label_207604;
        case 0x207608u: goto label_207608;
        case 0x20760cu: goto label_20760c;
        case 0x207610u: goto label_207610;
        case 0x207614u: goto label_207614;
        case 0x207618u: goto label_207618;
        case 0x20761cu: goto label_20761c;
        case 0x207620u: goto label_207620;
        case 0x207624u: goto label_207624;
        case 0x207628u: goto label_207628;
        case 0x20762cu: goto label_20762c;
        default: break;
    }

    ctx->pc = 0x207600u;

label_207600:
    // 0x207600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x207600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_207604:
    // 0x207604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_207608:
    // 0x207608: 0xac850070  sw          $a1, 0x70($a0)
    ctx->pc = 0x207608u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 5));
label_20760c:
    // 0x20760c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20760cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_207610:
    // 0x207610: 0x844300a8  lh          $v1, 0xA8($v0)
    ctx->pc = 0x207610u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_207614:
    // 0x207614: 0x8c4500ac  lw          $a1, 0xAC($v0)
    ctx->pc = 0x207614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_207618:
    // 0x207618: 0xa0f809  jalr        $a1
label_20761c:
    if (ctx->pc == 0x20761Cu) {
        ctx->pc = 0x20761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207618u;
        // 0x20761c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207620u;
        goto label_207620;
    }
    ctx->pc = 0x207618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x207620u);
        ctx->pc = 0x20761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207618u;
        // 0x20761c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207618u, 0x207620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207620u;
label_207620:
    // 0x207620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_207624:
    // 0x207624: 0x3e00008  jr          $ra
label_207628:
    if (ctx->pc == 0x207628u) {
        ctx->pc = 0x207628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207624u;
        // 0x207628: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20762Cu;
        goto label_20762c;
    }
    ctx->pc = 0x207624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207624u;
        // 0x207628: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20762Cu;
label_20762c:
    // 0x20762c: 0x0  nop
    ctx->pc = 0x20762cu;
    // NOP
    ctx->pc = 0x207630u;
}
