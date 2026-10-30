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

// Function: sub_004AFA88
// Address: 0x4afa88 - 0x4afac0
void sub_004AFA88_0x4afa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AFA88_0x4afa88");
#endif

    switch (ctx->pc) {
        case 0x4afaa8u: goto label_4afaa8;
        default: break;
    }

    ctx->pc = 0x4afa88u;

    // 0x4afa88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4afa88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4afa8c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4afa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4afa90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4afa90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4afa94: 0x244205d8  addiu       $v0, $v0, 0x5D8
    ctx->pc = 0x4afa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1496));
    // 0x4afa98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4afa98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afa9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4afa9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4afaa0: 0xc12c4c8  jal         func_4B1320
    ctx->pc = 0x4AFAA0u;
    SET_GPR_U32(ctx, 31, 0x4AFAA8u);
    ctx->pc = 0x4AFAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFAA0u;
    // 0x4afaa4: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B1320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B1320u, 0x4AFAA0u, 0x4AFAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFAA8u;
label_4afaa8:
    // 0x4afaa8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4afaa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afaac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4afaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4afab0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4afab0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4afab4: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFAB4u;
        // 0x4afab8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFABCu;
    // 0x4afabc: 0x0  nop
    ctx->pc = 0x4afabcu;
    // NOP
    ctx->pc = 0x4afac0u;
}
