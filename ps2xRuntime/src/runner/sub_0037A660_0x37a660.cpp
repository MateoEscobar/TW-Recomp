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

// Function: sub_0037A660
// Address: 0x37a660 - 0x37a698
void sub_0037A660_0x37a660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A660_0x37a660");
#endif

    switch (ctx->pc) {
        case 0x37a674u: goto label_37a674;
        case 0x37a67cu: goto label_37a67c;
        case 0x37a688u: goto label_37a688;
        default: break;
    }

    ctx->pc = 0x37a660u;

    // 0x37a660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37a660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37a664: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37a664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a668: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37a668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37a66c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37A66Cu;
    SET_GPR_U32(ctx, 31, 0x37A674u);
    ctx->pc = 0x37A670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A66Cu;
    // 0x37a670: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37A66Cu, 0x37A674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A674u;
label_37a674:
    // 0x37a674: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37A674u;
    SET_GPR_U32(ctx, 31, 0x37A67Cu);
    ctx->pc = 0x37A678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A674u;
    // 0x37a678: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37A674u, 0x37A67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A67Cu;
label_37a67c:
    // 0x37a67c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37a67cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37a680: 0xc106dae  jal         func_41B6B8
    ctx->pc = 0x37A680u;
    SET_GPR_U32(ctx, 31, 0x37A688u);
    ctx->pc = 0x37A684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A680u;
    // 0x37a684: 0x22403  sra         $a0, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B6B8u, 0x37A680u, 0x37A688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A688u;
label_37a688:
    // 0x37a688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37a688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37a68c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37a68cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a690: 0x3e00008  jr          $ra
    ctx->pc = 0x37A690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A690u;
        // 0x37a694: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A698u;
}
