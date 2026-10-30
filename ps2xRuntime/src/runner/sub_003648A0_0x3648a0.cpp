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

// Function: sub_003648A0
// Address: 0x3648a0 - 0x364918
void sub_003648A0_0x3648a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003648A0_0x3648a0");
#endif

    switch (ctx->pc) {
        case 0x3648c8u: goto label_3648c8;
        case 0x3648d0u: goto label_3648d0;
        case 0x3648e4u: goto label_3648e4;
        case 0x3648ecu: goto label_3648ec;
        case 0x3648f8u: goto label_3648f8;
        default: break;
    }

    ctx->pc = 0x3648a0u;

    // 0x3648a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3648a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3648a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3648a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3648a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3648a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3648ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3648acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3648b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3648b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3648b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3648b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3648b8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3648b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3648bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3648bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3648c0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3648C0u;
    SET_GPR_U32(ctx, 31, 0x3648C8u);
    ctx->pc = 0x3648C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3648C0u;
    // 0x3648c4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3648C0u, 0x3648C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3648C8u;
label_3648c8:
    // 0x3648c8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3648C8u;
    SET_GPR_U32(ctx, 31, 0x3648D0u);
    ctx->pc = 0x3648CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3648C8u;
    // 0x3648cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3648C8u, 0x3648D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3648D0u;
label_3648d0:
    // 0x3648d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3648d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3648d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3648d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3648d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3648d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3648dc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3648DCu;
    SET_GPR_U32(ctx, 31, 0x3648E4u);
    ctx->pc = 0x3648E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3648DCu;
    // 0x3648e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3648DCu, 0x3648E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3648E4u;
label_3648e4:
    // 0x3648e4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3648E4u;
    SET_GPR_U32(ctx, 31, 0x3648ECu);
    ctx->pc = 0x3648E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3648E4u;
    // 0x3648e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3648E4u, 0x3648ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3648ECu;
label_3648ec:
    // 0x3648ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3648ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3648f0: 0xc0bf92c  jal         func_2FE4B0
    ctx->pc = 0x3648F0u;
    SET_GPR_U32(ctx, 31, 0x3648F8u);
    ctx->pc = 0x3648F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3648F0u;
    // 0x3648f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE4B0u, 0x3648F0u, 0x3648F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3648F8u;
label_3648f8:
    // 0x3648f8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3648f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3648fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3648fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364900: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x364900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x364904: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x364904u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x364908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x364908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36490c: 0x3e00008  jr          $ra
    ctx->pc = 0x36490Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36490Cu;
        // 0x364910: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36490Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364914u;
    // 0x364914: 0x0  nop
    ctx->pc = 0x364914u;
    // NOP
    ctx->pc = 0x364918u;
}
