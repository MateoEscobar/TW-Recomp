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

// Function: sub_0029EA48
// Address: 0x29ea48 - 0x29eaa0
void sub_0029EA48_0x29ea48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EA48_0x29ea48");
#endif

    switch (ctx->pc) {
        case 0x29ea74u: goto label_29ea74;
        default: break;
    }

    ctx->pc = 0x29ea48u;

    // 0x29ea48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29ea48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29ea4c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x29ea4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x29ea50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29ea50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x29ea54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29ea54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29ea58: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x29ea58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x29ea5c: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x29ea5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29ea60: 0x3042000b  andi        $v0, $v0, 0xB
    ctx->pc = 0x29ea60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)11);
    // 0x29ea64: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x29EA64u;
    {
        const bool branch_taken_0x29ea64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ea64) {
            ctx->pc = 0x29EA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29EA64u;
            // 0x29ea68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29EA84u;
            goto label_29ea84;
        }
    }
    ctx->pc = 0x29EA6Cu;
    // 0x29ea6c: 0xc0a792c  jal         func_29E4B0
    ctx->pc = 0x29EA6Cu;
    SET_GPR_U32(ctx, 31, 0x29EA74u);
    ctx->pc = 0x29E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E4B0u, 0x29EA6Cu, 0x29EA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EA74u;
label_29ea74:
    // 0x29ea74: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x29ea74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29ea78: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x29ea78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x29ea7c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29ea7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x29ea80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29ea80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_29ea84:
    // 0x29ea84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29ea84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ea88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29ea88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ea8c: 0x3e00008  jr          $ra
    ctx->pc = 0x29EA8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA8Cu;
        // 0x29ea90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EA8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EA94u;
    // 0x29ea94: 0x0  nop
    ctx->pc = 0x29ea94u;
    // NOP
    // 0x29ea98: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x29ea98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29ea9c: 0x0  nop
    ctx->pc = 0x29ea9cu;
    // NOP
    ctx->pc = 0x29eaa0u;
}
