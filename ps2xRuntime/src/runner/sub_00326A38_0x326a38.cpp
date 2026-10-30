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

// Function: sub_00326A38
// Address: 0x326a38 - 0x326aa8
void sub_00326A38_0x326a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326A38_0x326a38");
#endif

    switch (ctx->pc) {
        case 0x326a54u: goto label_326a54;
        case 0x326a94u: goto label_326a94;
        default: break;
    }

    ctx->pc = 0x326a38u;

    // 0x326a38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x326a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x326a3c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x326a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x326a40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x326a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x326a44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x326a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326a48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326a4c: 0xc0c9a7c  jal         func_3269F0
    ctx->pc = 0x326A4Cu;
    SET_GPR_U32(ctx, 31, 0x326A54u);
    ctx->pc = 0x326A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326A4Cu;
    // 0x326a50: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3269F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3269F0u, 0x326A4Cu, 0x326A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326A54u;
label_326a54:
    // 0x326a54: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x326A54u;
    {
        const bool branch_taken_0x326a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A54u;
        // 0x326a58: 0x113980  sll         $a3, $s1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326a54) {
            ctx->pc = 0x326A94u;
            goto label_326a94;
        }
    }
    ctx->pc = 0x326A5Cu;
    // 0x326a5c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x326a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x326a60: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x326a60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x326a64: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x326a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x326a68: 0x34c6803f  ori         $a2, $a2, 0x803F
    ctx->pc = 0x326a68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32831);
    // 0x326a6c: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x326a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x326a70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x326a70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x326a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x326a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326a78: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x326a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x326a7c: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x326a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x326a80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x326a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326a84: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x326a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x326a88: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x326a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x326a8c: 0xc0c99e2  jal         func_326788
    ctx->pc = 0x326A8Cu;
    SET_GPR_U32(ctx, 31, 0x326A94u);
    ctx->pc = 0x326A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326A8Cu;
    // 0x326a90: 0xac62fffc  sw          $v0, -0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326788u, 0x326A8Cu, 0x326A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326A94u;
label_326a94:
    // 0x326a94: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x326a94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326a98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x326a98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326a9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x326AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326AA0u;
        // 0x326aa4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326AA8u;
}
