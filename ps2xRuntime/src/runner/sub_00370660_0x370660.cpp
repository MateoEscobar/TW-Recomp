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

// Function: sub_00370660
// Address: 0x370660 - 0x370690
void sub_00370660_0x370660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370660_0x370660");
#endif

    switch (ctx->pc) {
        case 0x370674u: goto label_370674;
        case 0x37067cu: goto label_37067c;
        default: break;
    }

    ctx->pc = 0x370660u;

    // 0x370660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370664: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x370664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370668: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37066c: 0xc102488  jal         func_409220
    ctx->pc = 0x37066Cu;
    SET_GPR_U32(ctx, 31, 0x370674u);
    ctx->pc = 0x370670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37066Cu;
    // 0x370670: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x37066Cu, 0x370674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370674u;
label_370674:
    // 0x370674: 0xc106ca0  jal         func_41B280
    ctx->pc = 0x370674u;
    SET_GPR_U32(ctx, 31, 0x37067Cu);
    ctx->pc = 0x370678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370674u;
    // 0x370678: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B280u, 0x370674u, 0x37067Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37067Cu;
label_37067c:
    // 0x37067c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37067cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370680: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x370680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370684: 0x3e00008  jr          $ra
    ctx->pc = 0x370684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370684u;
        // 0x370688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37068Cu;
    // 0x37068c: 0x0  nop
    ctx->pc = 0x37068cu;
    // NOP
    ctx->pc = 0x370690u;
}
