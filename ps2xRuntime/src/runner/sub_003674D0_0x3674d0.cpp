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

// Function: sub_003674D0
// Address: 0x3674d0 - 0x367518
void sub_003674D0_0x3674d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003674D0_0x3674d0");
#endif

    switch (ctx->pc) {
        case 0x3674ecu: goto label_3674ec;
        case 0x3674f4u: goto label_3674f4;
        case 0x367500u: goto label_367500;
        default: break;
    }

    ctx->pc = 0x3674d0u;

    // 0x3674d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3674d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3674d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3674d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3674d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3674d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3674dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3674dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3674e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3674e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3674e4: 0xc102488  jal         func_409220
    ctx->pc = 0x3674E4u;
    SET_GPR_U32(ctx, 31, 0x3674ECu);
    ctx->pc = 0x3674E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3674E4u;
    // 0x3674e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3674E4u, 0x3674ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3674ECu;
label_3674ec:
    // 0x3674ec: 0xc0d505e  jal         func_354178
    ctx->pc = 0x3674ECu;
    SET_GPR_U32(ctx, 31, 0x3674F4u);
    ctx->pc = 0x3674F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3674ECu;
    // 0x3674f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354178u, 0x3674ECu, 0x3674F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3674F4u;
label_3674f4:
    // 0x3674f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3674f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3674f8: 0xc102562  jal         func_409588
    ctx->pc = 0x3674F8u;
    SET_GPR_U32(ctx, 31, 0x367500u);
    ctx->pc = 0x3674FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3674F8u;
    // 0x3674fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x3674F8u, 0x367500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367500u;
label_367500:
    // 0x367500: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x367500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x367504: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x367504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x367508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36750c: 0x3e00008  jr          $ra
    ctx->pc = 0x36750Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36750Cu;
        // 0x367510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36750Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367514u;
    // 0x367514: 0x0  nop
    ctx->pc = 0x367514u;
    // NOP
    ctx->pc = 0x367518u;
}
