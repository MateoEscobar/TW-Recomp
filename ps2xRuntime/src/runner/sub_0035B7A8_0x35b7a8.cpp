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

// Function: sub_0035B7A8
// Address: 0x35b7a8 - 0x35b7f8
void sub_0035B7A8_0x35b7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B7A8_0x35b7a8");
#endif

    switch (ctx->pc) {
        case 0x35b7c4u: goto label_35b7c4;
        case 0x35b7ccu: goto label_35b7cc;
        case 0x35b7d4u: goto label_35b7d4;
        case 0x35b7e0u: goto label_35b7e0;
        default: break;
    }

    ctx->pc = 0x35b7a8u;

    // 0x35b7a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35b7ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35b7acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b7b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35b7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35b7b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35b7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b7b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35b7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35b7bc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35B7BCu;
    SET_GPR_U32(ctx, 31, 0x35B7C4u);
    ctx->pc = 0x35B7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B7BCu;
    // 0x35b7c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35B7BCu, 0x35B7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B7C4u;
label_35b7c4:
    // 0x35b7c4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35B7C4u;
    SET_GPR_U32(ctx, 31, 0x35B7CCu);
    ctx->pc = 0x35B7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B7C4u;
    // 0x35b7c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35B7C4u, 0x35B7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B7CCu;
label_35b7cc:
    // 0x35b7cc: 0xc08d5f6  jal         func_2357D8
    ctx->pc = 0x35B7CCu;
    SET_GPR_U32(ctx, 31, 0x35B7D4u);
    ctx->pc = 0x35B7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B7CCu;
    // 0x35b7d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2357D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2357D8u, 0x35B7CCu, 0x35B7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B7D4u;
label_35b7d4:
    // 0x35b7d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35b7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b7d8: 0xc102562  jal         func_409588
    ctx->pc = 0x35B7D8u;
    SET_GPR_U32(ctx, 31, 0x35B7E0u);
    ctx->pc = 0x35B7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B7D8u;
    // 0x35b7dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x35B7D8u, 0x35B7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B7E0u;
label_35b7e0:
    // 0x35b7e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35b7e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b7e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b7e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x35B7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B7ECu;
        // 0x35b7f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B7ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B7F4u;
    // 0x35b7f4: 0x0  nop
    ctx->pc = 0x35b7f4u;
    // NOP
    ctx->pc = 0x35b7f8u;
}
