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

// Function: sub_0035A760
// Address: 0x35a760 - 0x35a790
void sub_0035A760_0x35a760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A760_0x35a760");
#endif

    switch (ctx->pc) {
        case 0x35a774u: goto label_35a774;
        case 0x35a77cu: goto label_35a77c;
        default: break;
    }

    ctx->pc = 0x35a760u;

    // 0x35a760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35a760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35a764: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35a764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35a768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35a76c: 0xc102488  jal         func_409220
    ctx->pc = 0x35A76Cu;
    SET_GPR_U32(ctx, 31, 0x35A774u);
    ctx->pc = 0x35A770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A76Cu;
    // 0x35a770: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35A76Cu, 0x35A774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A774u;
label_35a774:
    // 0x35a774: 0xc08d9a6  jal         func_236698
    ctx->pc = 0x35A774u;
    SET_GPR_U32(ctx, 31, 0x35A77Cu);
    ctx->pc = 0x35A778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A774u;
    // 0x35a778: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236698u, 0x35A774u, 0x35A77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A77Cu;
label_35a77c:
    // 0x35a77c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35a77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a780: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35a780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a784: 0x3e00008  jr          $ra
    ctx->pc = 0x35A784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A784u;
        // 0x35a788: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A78Cu;
    // 0x35a78c: 0x0  nop
    ctx->pc = 0x35a78cu;
    // NOP
    ctx->pc = 0x35a790u;
}
