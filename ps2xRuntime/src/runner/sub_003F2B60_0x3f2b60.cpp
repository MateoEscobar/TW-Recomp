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

// Function: sub_003F2B60
// Address: 0x3f2b60 - 0x3f2bc8
void sub_003F2B60_0x3f2b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2B60_0x3f2b60");
#endif

    switch (ctx->pc) {
        case 0x3f2b80u: goto label_3f2b80;
        case 0x3f2b88u: goto label_3f2b88;
        default: break;
    }

    ctx->pc = 0x3f2b60u;

    // 0x3f2b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f2b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f2b64: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3f2b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3f2b68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f2b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f2b6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f2b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2b70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f2b70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f2b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f2b78: 0xc0ea14c  jal         func_3A8530
    ctx->pc = 0x3F2B78u;
    SET_GPR_U32(ctx, 31, 0x3F2B80u);
    ctx->pc = 0x3F2B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2B78u;
    // 0x3f2b7c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3F2B78u, 0x3F2B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2B80u;
label_3f2b80:
    // 0x3f2b80: 0xc08a61a  jal         func_229868
    ctx->pc = 0x3F2B80u;
    SET_GPR_U32(ctx, 31, 0x3F2B88u);
    ctx->pc = 0x3F2B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2B80u;
    // 0x3f2b84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3F2B80u, 0x3F2B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2B88u;
label_3f2b88:
    // 0x3f2b88: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f2b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3f2b8c: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F2B8Cu;
    {
        const bool branch_taken_0x3f2b8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f2b8c) {
            ctx->pc = 0x3F2B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F2B8Cu;
            // 0x3f2b90: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F2BB4u;
            goto label_3f2bb4;
        }
    }
    ctx->pc = 0x3F2B94u;
    // 0x3f2b94: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3f2b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3f2b98: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3f2b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3f2b9c: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x3f2b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x3f2ba0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3f2ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f2ba4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f2ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f2ba8: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3f2ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x3f2bac: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x3f2bacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x3f2bb0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3f2bb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f2bb4:
    // 0x3f2bb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f2bb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f2bb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f2bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f2bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x3F2BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2BBCu;
        // 0x3f2bc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F2BC4u;
    // 0x3f2bc4: 0x0  nop
    ctx->pc = 0x3f2bc4u;
    // NOP
    ctx->pc = 0x3f2bc8u;
}
