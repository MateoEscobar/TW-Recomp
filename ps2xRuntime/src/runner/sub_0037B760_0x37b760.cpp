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

// Function: sub_0037B760
// Address: 0x37b760 - 0x37b798
void sub_0037B760_0x37b760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B760_0x37b760");
#endif

    switch (ctx->pc) {
        case 0x37b774u: goto label_37b774;
        case 0x37b77cu: goto label_37b77c;
        case 0x37b788u: goto label_37b788;
        default: break;
    }

    ctx->pc = 0x37b760u;

    // 0x37b760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37b760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37b764: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37b764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b76c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37B76Cu;
    SET_GPR_U32(ctx, 31, 0x37B774u);
    ctx->pc = 0x37B770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B76Cu;
    // 0x37b770: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37B76Cu, 0x37B774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B774u;
label_37b774:
    // 0x37b774: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37B774u;
    SET_GPR_U32(ctx, 31, 0x37B77Cu);
    ctx->pc = 0x37B778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B774u;
    // 0x37b778: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37B774u, 0x37B77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B77Cu;
label_37b77c:
    // 0x37b77c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37b77cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37b780: 0xc106af0  jal         func_41ABC0
    ctx->pc = 0x37B780u;
    SET_GPR_U32(ctx, 31, 0x37B788u);
    ctx->pc = 0x37B784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B780u;
    // 0x37b784: 0x22403  sra         $a0, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41ABC0u, 0x37B780u, 0x37B788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B788u;
label_37b788:
    // 0x37b788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b78c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37b78cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b790: 0x3e00008  jr          $ra
    ctx->pc = 0x37B790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B790u;
        // 0x37b794: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B798u;
}
