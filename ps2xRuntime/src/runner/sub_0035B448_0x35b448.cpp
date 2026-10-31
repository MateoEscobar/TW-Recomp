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

// Function: sub_0035B448
// Address: 0x35b448 - 0x35b480
void sub_0035B448_0x35b448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B448_0x35b448");
#endif

    switch (ctx->pc) {
        case 0x35b45cu: goto label_35b45c;
        case 0x35b464u: goto label_35b464;
        case 0x35b46cu: goto label_35b46c;
        default: break;
    }

    ctx->pc = 0x35b448u;

    // 0x35b448: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35b448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35b44c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35b44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b450: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35b450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35b454: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35B454u;
    SET_GPR_U32(ctx, 31, 0x35B45Cu);
    ctx->pc = 0x35B458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B454u;
    // 0x35b458: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35B454u, 0x35B45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B45Cu;
label_35b45c:
    // 0x35b45c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35B45Cu;
    SET_GPR_U32(ctx, 31, 0x35B464u);
    ctx->pc = 0x35B460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B45Cu;
    // 0x35b460: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35B45Cu, 0x35B464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B464u;
label_35b464:
    // 0x35b464: 0xc08e816  jal         func_23A058
    ctx->pc = 0x35B464u;
    SET_GPR_U32(ctx, 31, 0x35B46Cu);
    ctx->pc = 0x35B468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B464u;
    // 0x35b468: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A058u, 0x35B464u, 0x35B46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B46Cu;
label_35b46c:
    // 0x35b46c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b470: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35b470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b474: 0x3e00008  jr          $ra
    ctx->pc = 0x35B474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B474u;
        // 0x35b478: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B47Cu;
    // 0x35b47c: 0x0  nop
    ctx->pc = 0x35b47cu;
    // NOP
    ctx->pc = 0x35b480u;
}
