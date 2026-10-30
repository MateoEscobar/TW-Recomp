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

// Function: sub_0035A790
// Address: 0x35a790 - 0x35a7c0
void sub_0035A790_0x35a790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A790_0x35a790");
#endif

    switch (ctx->pc) {
        case 0x35a7a4u: goto label_35a7a4;
        case 0x35a7acu: goto label_35a7ac;
        default: break;
    }

    ctx->pc = 0x35a790u;

    // 0x35a790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35a790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35a794: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35a794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35a798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35a79c: 0xc102488  jal         func_409220
    ctx->pc = 0x35A79Cu;
    SET_GPR_U32(ctx, 31, 0x35A7A4u);
    ctx->pc = 0x35A7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A79Cu;
    // 0x35a7a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35A79Cu, 0x35A7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A7A4u;
label_35a7a4:
    // 0x35a7a4: 0xc08d942  jal         func_236508
    ctx->pc = 0x35A7A4u;
    SET_GPR_U32(ctx, 31, 0x35A7ACu);
    ctx->pc = 0x35A7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A7A4u;
    // 0x35a7a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236508u, 0x35A7A4u, 0x35A7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A7ACu;
label_35a7ac:
    // 0x35a7ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35a7acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a7b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35a7b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x35A7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A7B4u;
        // 0x35a7b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A7BCu;
    // 0x35a7bc: 0x0  nop
    ctx->pc = 0x35a7bcu;
    // NOP
    ctx->pc = 0x35a7c0u;
}
