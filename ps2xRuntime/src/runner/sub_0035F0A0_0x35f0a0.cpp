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

// Function: sub_0035F0A0
// Address: 0x35f0a0 - 0x35f0f0
void sub_0035F0A0_0x35f0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F0A0_0x35f0a0");
#endif

    switch (ctx->pc) {
        case 0x35f0bcu: goto label_35f0bc;
        case 0x35f0c4u: goto label_35f0c4;
        case 0x35f0ccu: goto label_35f0cc;
        case 0x35f0d8u: goto label_35f0d8;
        default: break;
    }

    ctx->pc = 0x35f0a0u;

    // 0x35f0a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35f0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35f0a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35f0a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f0a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35f0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35f0ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35f0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f0b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35f0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35f0b4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F0B4u;
    SET_GPR_U32(ctx, 31, 0x35F0BCu);
    ctx->pc = 0x35F0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F0B4u;
    // 0x35f0b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F0B4u, 0x35F0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F0BCu;
label_35f0bc:
    // 0x35f0bc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35F0BCu;
    SET_GPR_U32(ctx, 31, 0x35F0C4u);
    ctx->pc = 0x35F0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F0BCu;
    // 0x35f0c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35F0BCu, 0x35F0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F0C4u;
label_35f0c4:
    // 0x35f0c4: 0xc0a4b2a  jal         func_292CA8
    ctx->pc = 0x35F0C4u;
    SET_GPR_U32(ctx, 31, 0x35F0CCu);
    ctx->pc = 0x35F0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F0C4u;
    // 0x35f0c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292CA8u, 0x35F0C4u, 0x35F0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F0CCu;
label_35f0cc:
    // 0x35f0cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35f0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f0d0: 0xc102562  jal         func_409588
    ctx->pc = 0x35F0D0u;
    SET_GPR_U32(ctx, 31, 0x35F0D8u);
    ctx->pc = 0x35F0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F0D0u;
    // 0x35f0d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x35F0D0u, 0x35F0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F0D8u;
label_35f0d8:
    // 0x35f0d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35f0d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f0dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f0e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35f0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x35F0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F0E4u;
        // 0x35f0e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F0ECu;
    // 0x35f0ec: 0x0  nop
    ctx->pc = 0x35f0ecu;
    // NOP
    ctx->pc = 0x35f0f0u;
}
