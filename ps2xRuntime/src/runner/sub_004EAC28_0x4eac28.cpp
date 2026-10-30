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

// Function: sub_004EAC28
// Address: 0x4eac28 - 0x4eac98
void sub_004EAC28_0x4eac28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EAC28_0x4eac28");
#endif

    switch (ctx->pc) {
        case 0x4eac64u: goto label_4eac64;
        case 0x4eac80u: goto label_4eac80;
        default: break;
    }

    ctx->pc = 0x4eac28u;

    // 0x4eac28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4eac28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4eac2c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4eac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4eac30: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4eac30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4eac34: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4eac34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x4eac38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4eac38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4eac3c: 0x2442cef0  addiu       $v0, $v0, -0x3110
    ctx->pc = 0x4eac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954736));
    // 0x4eac40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4eac40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eac44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4eac44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4eac48: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4eac48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eac4c: 0x2463cfa0  addiu       $v1, $v1, -0x3060
    ctx->pc = 0x4eac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954912));
    // 0x4eac50: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x4eac50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x4eac54: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x4eac54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4eac58: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x4eac58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x4eac5c: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x4EAC5Cu;
    SET_GPR_U32(ctx, 31, 0x4EAC64u);
    ctx->pc = 0x4EAC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAC5Cu;
    // 0x4eac60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4EAC5Cu, 0x4EAC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EAC64u;
label_4eac64:
    // 0x4eac64: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4eac64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4eac68: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x4eac68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x4eac6c: 0x2442a9c8  addiu       $v0, $v0, -0x5638
    ctx->pc = 0x4eac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945224));
    // 0x4eac70: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4EAC70u;
    {
        const bool branch_taken_0x4eac70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EAC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAC70u;
        // 0x4eac74: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eac70) {
            ctx->pc = 0x4EAC80u;
            goto label_4eac80;
        }
    }
    ctx->pc = 0x4EAC78u;
    // 0x4eac78: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4EAC78u;
    SET_GPR_U32(ctx, 31, 0x4EAC80u);
    ctx->pc = 0x4EAC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAC78u;
    // 0x4eac7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4EAC78u, 0x4EAC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EAC80u;
label_4eac80:
    // 0x4eac80: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4eac80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4eac84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4eac84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4eac88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eac88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eac8c: 0x3e00008  jr          $ra
    ctx->pc = 0x4EAC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EAC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAC8Cu;
        // 0x4eac90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EAC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EAC94u;
    // 0x4eac94: 0x0  nop
    ctx->pc = 0x4eac94u;
    // NOP
    ctx->pc = 0x4eac98u;
}
