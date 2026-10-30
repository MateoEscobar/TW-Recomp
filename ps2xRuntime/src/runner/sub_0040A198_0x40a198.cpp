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

// Function: sub_0040A198
// Address: 0x40a198 - 0x40a200
void sub_0040A198_0x40a198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040A198_0x40a198");
#endif

    switch (ctx->pc) {
        case 0x40a1b8u: goto label_40a1b8;
        case 0x40a1c4u: goto label_40a1c4;
        case 0x40a1d0u: goto label_40a1d0;
        case 0x40a1dcu: goto label_40a1dc;
        case 0x40a1e8u: goto label_40a1e8;
        default: break;
    }

    ctx->pc = 0x40a198u;

    // 0x40a198: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40a198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x40a19c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x40a19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x40a1a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40a1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x40a1a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40a1a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a1a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x40a1a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a1ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40a1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40a1b0: 0xc0c8f4e  jal         func_323D38
    ctx->pc = 0x40A1B0u;
    SET_GPR_U32(ctx, 31, 0x40A1B8u);
    ctx->pc = 0x40A1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A1B0u;
    // 0x40a1b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323D38u, 0x40A1B0u, 0x40A1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A1B8u;
label_40a1b8:
    // 0x40a1b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40a1b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a1bc: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x40A1BCu;
    SET_GPR_U32(ctx, 31, 0x40A1C4u);
    ctx->pc = 0x40A1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A1BCu;
    // 0x40a1c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x40A1BCu, 0x40A1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A1C4u;
label_40a1c4:
    // 0x40a1c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a1c8: 0xc0c8ed4  jal         func_323B50
    ctx->pc = 0x40A1C8u;
    SET_GPR_U32(ctx, 31, 0x40A1D0u);
    ctx->pc = 0x40A1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A1C8u;
    // 0x40a1cc: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B50u, 0x40A1C8u, 0x40A1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A1D0u;
label_40a1d0:
    // 0x40a1d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a1d4: 0xc0c8cf8  jal         func_3233E0
    ctx->pc = 0x40A1D4u;
    SET_GPR_U32(ctx, 31, 0x40A1DCu);
    ctx->pc = 0x40A1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A1D4u;
    // 0x40a1d8: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3233E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3233E0u, 0x40A1D4u, 0x40A1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A1DCu;
label_40a1dc:
    // 0x40a1dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a1e0: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x40A1E0u;
    SET_GPR_U32(ctx, 31, 0x40A1E8u);
    ctx->pc = 0x40A1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A1E0u;
    // 0x40a1e4: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x40A1E0u, 0x40A1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A1E8u;
label_40a1e8:
    // 0x40a1e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x40a1e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40a1ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40a1ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40a1f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40a1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40a1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x40A1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40A1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A1F4u;
        // 0x40a1f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40A1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40A1FCu;
    // 0x40a1fc: 0x0  nop
    ctx->pc = 0x40a1fcu;
    // NOP
    ctx->pc = 0x40a200u;
}
