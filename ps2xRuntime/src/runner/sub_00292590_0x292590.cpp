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

// Function: sub_00292590
// Address: 0x292590 - 0x2925d0
void sub_00292590_0x292590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292590_0x292590");
#endif

    switch (ctx->pc) {
        case 0x2925a4u: goto label_2925a4;
        case 0x2925acu: goto label_2925ac;
        case 0x2925bcu: goto label_2925bc;
        case 0x2925c4u: goto label_2925c4;
        default: break;
    }

    ctx->pc = 0x292590u;

    // 0x292590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x292590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x292594: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x292594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x292598: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x292598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29259c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x29259Cu;
    SET_GPR_U32(ctx, 31, 0x2925A4u);
    ctx->pc = 0x2925A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29259Cu;
    // 0x2925a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x29259Cu, 0x2925A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2925A4u;
label_2925a4:
    // 0x2925a4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2925A4u;
    SET_GPR_U32(ctx, 31, 0x2925ACu);
    ctx->pc = 0x2925A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2925A4u;
    // 0x2925a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2925A4u, 0x2925ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2925ACu;
label_2925ac:
    // 0x2925ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2925ACu;
    {
        const bool branch_taken_0x2925ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2925B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2925ACu;
        // 0x2925b0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2925ac) {
            ctx->pc = 0x2925C8u;
            goto label_2925c8;
        }
    }
    ctx->pc = 0x2925B4u;
    // 0x2925b4: 0xc087502  jal         func_21D408
    ctx->pc = 0x2925B4u;
    SET_GPR_U32(ctx, 31, 0x2925BCu);
    ctx->pc = 0x2925B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2925B4u;
    // 0x2925b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2925B4u, 0x2925BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2925BCu;
label_2925bc:
    // 0x2925bc: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2925BCu;
    SET_GPR_U32(ctx, 31, 0x2925C4u);
    ctx->pc = 0x2925C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2925BCu;
    // 0x2925c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2925BCu, 0x2925C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2925C4u;
label_2925c4:
    // 0x2925c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2925c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2925c8:
    // 0x2925c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2925C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2925CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2925C8u;
        // 0x2925cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2925C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2925D0u;
}
