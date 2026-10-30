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

// Function: sub_001A1C30
// Address: 0x1a1c30 - 0x1a1c80
void sub_001A1C30_0x1a1c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1C30_0x1a1c30");
#endif

    switch (ctx->pc) {
        case 0x1a1c58u: goto label_1a1c58;
        case 0x1a1c6cu: goto label_1a1c6c;
        default: break;
    }

    ctx->pc = 0x1a1c30u;

    // 0x1a1c30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a1c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a1c34: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1a1c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1a1c38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a1c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a1c3c: 0x244294b8  addiu       $v0, $v0, -0x6B48
    ctx->pc = 0x1a1c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939832));
    // 0x1a1c40: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a1c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a1c44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a1c44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1c48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1c4c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a1c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1c50: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x1A1C50u;
    SET_GPR_U32(ctx, 31, 0x1A1C58u);
    ctx->pc = 0x1A1C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1C50u;
    // 0x1a1c54: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1A1C50u, 0x1A1C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C58u;
label_1a1c58:
    // 0x1a1c58: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1a1c58u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1a1c5c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1C5Cu;
    {
        const bool branch_taken_0x1a1c5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C5Cu;
        // 0x1a1c60: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c5c) {
            ctx->pc = 0x1A1C70u;
            goto label_1a1c70;
        }
    }
    ctx->pc = 0x1A1C64u;
    // 0x1a1c64: 0xc10b208  jal         func_42C820
    ctx->pc = 0x1A1C64u;
    SET_GPR_U32(ctx, 31, 0x1A1C6Cu);
    ctx->pc = 0x1A1C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1C64u;
    // 0x1a1c68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x1A1C64u, 0x1A1C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C6Cu;
label_1a1c6c:
    // 0x1a1c6c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a1c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a1c70:
    // 0x1a1c70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a1c70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1c74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1c78: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C78u;
        // 0x1a1c7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1C80u;
}
