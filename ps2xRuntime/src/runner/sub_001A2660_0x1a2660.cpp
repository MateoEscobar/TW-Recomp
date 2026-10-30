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

// Function: sub_001A2660
// Address: 0x1a2660 - 0x1a2690
void sub_001A2660_0x1a2660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2660_0x1a2660");
#endif

    switch (ctx->pc) {
        case 0x1a2660u: goto label_1a2660;
        case 0x1a2664u: goto label_1a2664;
        case 0x1a2668u: goto label_1a2668;
        case 0x1a266cu: goto label_1a266c;
        case 0x1a2670u: goto label_1a2670;
        case 0x1a2674u: goto label_1a2674;
        case 0x1a2678u: goto label_1a2678;
        case 0x1a267cu: goto label_1a267c;
        case 0x1a2680u: goto label_1a2680;
        case 0x1a2684u: goto label_1a2684;
        case 0x1a2688u: goto label_1a2688;
        case 0x1a268cu: goto label_1a268c;
        default: break;
    }

    ctx->pc = 0x1a2660u;

label_1a2660:
    // 0x1a2660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a2664:
    // 0x1a2664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a2668:
    // 0x1a2668: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a2668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a266c:
    // 0x1a266c: 0x908500b7  lbu         $a1, 0xB7($a0)
    ctx->pc = 0x1a266cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 183)));
label_1a2670:
    // 0x1a2670: 0x844300a0  lh          $v1, 0xA0($v0)
    ctx->pc = 0x1a2670u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_1a2674:
    // 0x1a2674: 0x8c4600a4  lw          $a2, 0xA4($v0)
    ctx->pc = 0x1a2674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1a2678:
    // 0x1a2678: 0xc0f809  jalr        $a2
label_1a267c:
    if (ctx->pc == 0x1A267Cu) {
        ctx->pc = 0x1A267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2678u;
        // 0x1a267c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2680u;
        goto label_1a2680;
    }
    ctx->pc = 0x1A2678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1A2680u);
        ctx->pc = 0x1A267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2678u;
        // 0x1a267c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2678u, 0x1A2680u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2680u;
label_1a2680:
    // 0x1a2680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2684:
    // 0x1a2684: 0x3e00008  jr          $ra
label_1a2688:
    if (ctx->pc == 0x1A2688u) {
        ctx->pc = 0x1A2688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2684u;
        // 0x1a2688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A268Cu;
        goto label_1a268c;
    }
    ctx->pc = 0x1A2684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2684u;
        // 0x1a2688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A268Cu;
label_1a268c:
    // 0x1a268c: 0x0  nop
    ctx->pc = 0x1a268cu;
    // NOP
    ctx->pc = 0x1a2690u;
}
