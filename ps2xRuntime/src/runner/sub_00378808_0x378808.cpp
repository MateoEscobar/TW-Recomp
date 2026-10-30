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

// Function: sub_00378808
// Address: 0x378808 - 0x378840
void sub_00378808_0x378808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378808_0x378808");
#endif

    switch (ctx->pc) {
        case 0x37881cu: goto label_37881c;
        case 0x378824u: goto label_378824;
        case 0x37882cu: goto label_37882c;
        default: break;
    }

    ctx->pc = 0x378808u;

    // 0x378808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x378808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37880c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37880cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378810: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x378810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x378814: 0xc102472  jal         func_4091C8
    ctx->pc = 0x378814u;
    SET_GPR_U32(ctx, 31, 0x37881Cu);
    ctx->pc = 0x378818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378814u;
    // 0x378818: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x378814u, 0x37881Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37881Cu;
label_37881c:
    // 0x37881c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37881Cu;
    SET_GPR_U32(ctx, 31, 0x378824u);
    ctx->pc = 0x378820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37881Cu;
    // 0x378820: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37881Cu, 0x378824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378824u;
label_378824:
    // 0x378824: 0xc0e381a  jal         func_38E068
    ctx->pc = 0x378824u;
    SET_GPR_U32(ctx, 31, 0x37882Cu);
    ctx->pc = 0x378828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378824u;
    // 0x378828: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E068u, 0x378824u, 0x37882Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37882Cu;
label_37882c:
    // 0x37882c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37882cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x378830: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x378830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378834: 0x3e00008  jr          $ra
    ctx->pc = 0x378834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378834u;
        // 0x378838: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37883Cu;
    // 0x37883c: 0x0  nop
    ctx->pc = 0x37883cu;
    // NOP
    ctx->pc = 0x378840u;
}
