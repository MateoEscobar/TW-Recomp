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

// Function: sub_003654A0
// Address: 0x3654a0 - 0x3654f0
void sub_003654A0_0x3654a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003654A0_0x3654a0");
#endif

    switch (ctx->pc) {
        case 0x3654bcu: goto label_3654bc;
        case 0x3654c4u: goto label_3654c4;
        case 0x3654ccu: goto label_3654cc;
        case 0x3654d8u: goto label_3654d8;
        default: break;
    }

    ctx->pc = 0x3654a0u;

    // 0x3654a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3654a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3654a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3654a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3654a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3654a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3654ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3654acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3654b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3654b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3654b4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3654B4u;
    SET_GPR_U32(ctx, 31, 0x3654BCu);
    ctx->pc = 0x3654B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3654B4u;
    // 0x3654b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3654B4u, 0x3654BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3654BCu;
label_3654bc:
    // 0x3654bc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3654BCu;
    SET_GPR_U32(ctx, 31, 0x3654C4u);
    ctx->pc = 0x3654C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3654BCu;
    // 0x3654c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3654BCu, 0x3654C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3654C4u;
label_3654c4:
    // 0x3654c4: 0xc08e1ea  jal         func_2387A8
    ctx->pc = 0x3654C4u;
    SET_GPR_U32(ctx, 31, 0x3654CCu);
    ctx->pc = 0x3654C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3654C4u;
    // 0x3654c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2387A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2387A8u, 0x3654C4u, 0x3654CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3654CCu;
label_3654cc:
    // 0x3654cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3654ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3654d0: 0xc102562  jal         func_409588
    ctx->pc = 0x3654D0u;
    SET_GPR_U32(ctx, 31, 0x3654D8u);
    ctx->pc = 0x3654D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3654D0u;
    // 0x3654d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x3654D0u, 0x3654D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3654D8u;
label_3654d8:
    // 0x3654d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3654d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3654dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3654dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3654e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3654e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3654e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3654E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3654E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3654E4u;
        // 0x3654e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3654E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3654ECu;
    // 0x3654ec: 0x0  nop
    ctx->pc = 0x3654ecu;
    // NOP
    ctx->pc = 0x3654f0u;
}
