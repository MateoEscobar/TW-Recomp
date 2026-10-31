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

// Function: sub_0036C4D8
// Address: 0x36c4d8 - 0x36c518
void sub_0036C4D8_0x36c4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C4D8_0x36c4d8");
#endif

    switch (ctx->pc) {
        case 0x36c4ecu: goto label_36c4ec;
        case 0x36c4f4u: goto label_36c4f4;
        case 0x36c500u: goto label_36c500;
        default: break;
    }

    ctx->pc = 0x36c4d8u;

    // 0x36c4d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36c4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36c4dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x36c4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x36c4e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c4e4: 0xc1075a4  jal         func_41D690
    ctx->pc = 0x36C4E4u;
    SET_GPR_U32(ctx, 31, 0x36C4ECu);
    ctx->pc = 0x36C4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C4E4u;
    // 0x36c4e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D690u, 0x36C4E4u, 0x36C4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C4ECu;
label_36c4ec:
    // 0x36c4ec: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x36C4ECu;
    SET_GPR_U32(ctx, 31, 0x36C4F4u);
    ctx->pc = 0x36C4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C4ECu;
    // 0x36c4f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x36C4ECu, 0x36C4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C4F4u;
label_36c4f4:
    // 0x36c4f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36c4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c4f8: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x36C4F8u;
    SET_GPR_U32(ctx, 31, 0x36C500u);
    ctx->pc = 0x36C4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C4F8u;
    // 0x36c4fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x36C4F8u, 0x36C500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C500u;
label_36c500:
    // 0x36c500: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x36c500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c504: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36c504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c50c: 0x3e00008  jr          $ra
    ctx->pc = 0x36C50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C50Cu;
        // 0x36c510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C514u;
    // 0x36c514: 0x0  nop
    ctx->pc = 0x36c514u;
    // NOP
    ctx->pc = 0x36c518u;
}
