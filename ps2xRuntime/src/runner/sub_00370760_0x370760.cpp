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

// Function: sub_00370760
// Address: 0x370760 - 0x370798
void sub_00370760_0x370760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370760_0x370760");
#endif

    switch (ctx->pc) {
        case 0x370774u: goto label_370774;
        case 0x37077cu: goto label_37077c;
        case 0x370784u: goto label_370784;
        default: break;
    }

    ctx->pc = 0x370760u;

    // 0x370760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370764: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x370764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37076c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37076Cu;
    SET_GPR_U32(ctx, 31, 0x370774u);
    ctx->pc = 0x370770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37076Cu;
    // 0x370770: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37076Cu, 0x370774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370774u;
label_370774:
    // 0x370774: 0xc10b108  jal         func_42C420
    ctx->pc = 0x370774u;
    SET_GPR_U32(ctx, 31, 0x37077Cu);
    ctx->pc = 0x370778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370774u;
    // 0x370778: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x370774u, 0x37077Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37077Cu;
label_37077c:
    // 0x37077c: 0xc06cfe6  jal         func_1B3F98
    ctx->pc = 0x37077Cu;
    SET_GPR_U32(ctx, 31, 0x370784u);
    ctx->pc = 0x370780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37077Cu;
    // 0x370780: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3F98u, 0x37077Cu, 0x370784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370784u;
label_370784:
    // 0x370784: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370788: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x370788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37078c: 0x3e00008  jr          $ra
    ctx->pc = 0x37078Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37078Cu;
        // 0x370790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37078Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370794u;
    // 0x370794: 0x0  nop
    ctx->pc = 0x370794u;
    // NOP
    ctx->pc = 0x370798u;
}
