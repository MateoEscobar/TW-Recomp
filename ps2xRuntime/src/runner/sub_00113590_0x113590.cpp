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

// Function: sub_00113590
// Address: 0x113590 - 0x1135e0
void sub_00113590_0x113590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113590_0x113590");
#endif

    switch (ctx->pc) {
        case 0x1135b8u: goto label_1135b8;
        case 0x1135c8u: goto label_1135c8;
        default: break;
    }

    ctx->pc = 0x113590u;

    // 0x113590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x113594: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x113594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x113598: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x113598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11359c: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x11359cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1135a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1135a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1135a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1135a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1135a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1135a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1135ac: 0x244491e0  addiu       $a0, $v0, -0x6E20
    ctx->pc = 0x1135acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939104));
    // 0x1135b0: 0xc050fda  jal         func_143F68
    ctx->pc = 0x1135B0u;
    SET_GPR_U32(ctx, 31, 0x1135B8u);
    ctx->pc = 0x1135B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1135B0u;
    // 0x1135b4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x1135B0u, 0x1135B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1135B8u;
label_1135b8:
    // 0x1135b8: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1135b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    // 0x1135bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1135bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1135c0: 0xc04413a  jal         func_1104E8
    ctx->pc = 0x1135C0u;
    SET_GPR_U32(ctx, 31, 0x1135C8u);
    ctx->pc = 0x1135C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1135C0u;
    // 0x1135c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1104E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1104E8u, 0x1135C0u, 0x1135C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1135C8u;
label_1135c8:
    // 0x1135c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1135c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1135cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1135ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1135d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1135d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1135d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1135D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1135D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1135D4u;
        // 0x1135d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1135D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1135DCu;
    // 0x1135dc: 0x0  nop
    ctx->pc = 0x1135dcu;
    // NOP
    ctx->pc = 0x1135e0u;
}
