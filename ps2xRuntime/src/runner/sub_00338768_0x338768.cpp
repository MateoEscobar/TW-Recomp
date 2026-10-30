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

// Function: sub_00338768
// Address: 0x338768 - 0x338798
void sub_00338768_0x338768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338768_0x338768");
#endif

    switch (ctx->pc) {
        case 0x338768u: goto label_338768;
        case 0x33876cu: goto label_33876c;
        case 0x338770u: goto label_338770;
        case 0x338774u: goto label_338774;
        case 0x338778u: goto label_338778;
        case 0x33877cu: goto label_33877c;
        case 0x338780u: goto label_338780;
        case 0x338784u: goto label_338784;
        case 0x338788u: goto label_338788;
        case 0x33878cu: goto label_33878c;
        case 0x338790u: goto label_338790;
        case 0x338794u: goto label_338794;
        default: break;
    }

    ctx->pc = 0x338768u;

label_338768:
    // 0x338768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x338768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33876c:
    // 0x33876c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33876cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_338770:
    // 0x338770: 0x8c8c0004  lw          $t4, 0x4($a0)
    ctx->pc = 0x338770u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_338774:
    // 0x338774: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x338774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_338778:
    // 0x338778: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x338778u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_33877c:
    // 0x33877c: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x33877cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_338780:
    // 0x338780: 0x40f809  jalr        $v0
label_338784:
    if (ctx->pc == 0x338784u) {
        ctx->pc = 0x338784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338780u;
        // 0x338784: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338788u;
        goto label_338788;
    }
    ctx->pc = 0x338780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x338788u);
        ctx->pc = 0x338784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338780u;
        // 0x338784: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338780u, 0x338788u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x338788u;
label_338788:
    // 0x338788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33878c:
    // 0x33878c: 0x3e00008  jr          $ra
label_338790:
    if (ctx->pc == 0x338790u) {
        ctx->pc = 0x338790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33878Cu;
        // 0x338790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338794u;
        goto label_338794;
    }
    ctx->pc = 0x33878Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33878Cu;
        // 0x338790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33878Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338794u;
label_338794:
    // 0x338794: 0x0  nop
    ctx->pc = 0x338794u;
    // NOP
    ctx->pc = 0x338798u;
}
