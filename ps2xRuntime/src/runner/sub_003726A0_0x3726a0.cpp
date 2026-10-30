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

// Function: sub_003726A0
// Address: 0x3726a0 - 0x372700
void sub_003726A0_0x3726a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003726A0_0x3726a0");
#endif

    switch (ctx->pc) {
        case 0x3726c0u: goto label_3726c0;
        case 0x3726c8u: goto label_3726c8;
        case 0x3726dcu: goto label_3726dc;
        case 0x3726e8u: goto label_3726e8;
        default: break;
    }

    ctx->pc = 0x3726a0u;

    // 0x3726a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3726a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3726a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3726a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3726a8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3726a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3726ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3726acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3726b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3726b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3726b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3726b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3726b8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3726B8u;
    SET_GPR_U32(ctx, 31, 0x3726C0u);
    ctx->pc = 0x3726BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3726B8u;
    // 0x3726bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3726B8u, 0x3726C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3726C0u;
label_3726c0:
    // 0x3726c0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3726C0u;
    SET_GPR_U32(ctx, 31, 0x3726C8u);
    ctx->pc = 0x3726C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3726C0u;
    // 0x3726c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3726C0u, 0x3726C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3726C8u;
label_3726c8:
    // 0x3726c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3726c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3726cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3726ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3726d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3726d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3726d4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x3726D4u;
    SET_GPR_U32(ctx, 31, 0x3726DCu);
    ctx->pc = 0x3726D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3726D4u;
    // 0x3726d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x3726D4u, 0x3726DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3726DCu;
label_3726dc:
    // 0x3726dc: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x3726dcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3726e0: 0xc044ef2  jal         func_113BC8
    ctx->pc = 0x3726E0u;
    SET_GPR_U32(ctx, 31, 0x3726E8u);
    ctx->pc = 0x3726E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3726E0u;
    // 0x3726e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113BC8u, 0x3726E0u, 0x3726E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3726E8u;
label_3726e8:
    // 0x3726e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3726e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3726ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3726ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3726f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3726f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3726f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3726f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3726f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3726F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3726FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3726F8u;
        // 0x3726fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3726F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372700u;
}
