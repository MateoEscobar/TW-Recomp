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

// Function: sub_0029EA10
// Address: 0x29ea10 - 0x29ea48
void sub_0029EA10_0x29ea10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EA10_0x29ea10");
#endif

    switch (ctx->pc) {
        case 0x29ea2cu: goto label_29ea2c;
        default: break;
    }

    ctx->pc = 0x29ea10u;

    // 0x29ea10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29ea10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29ea14: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x29ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x29ea18: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29ea18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x29ea1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29ea1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ea20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29ea20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29ea24: 0xc0a792c  jal         func_29E4B0
    ctx->pc = 0x29EA24u;
    SET_GPR_U32(ctx, 31, 0x29EA2Cu);
    ctx->pc = 0x29EA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EA24u;
    // 0x29ea28: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E4B0u, 0x29EA24u, 0x29EA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EA2Cu;
label_29ea2c:
    // 0x29ea2c: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x29ea2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29ea30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29ea30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ea34: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x29ea34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x29ea38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29ea38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ea3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29ea3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29ea40: 0x3e00008  jr          $ra
    ctx->pc = 0x29EA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA40u;
        // 0x29ea44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EA48u;
}
