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

// Function: sub_00418B48
// Address: 0x418b48 - 0x418bc8
void sub_00418B48_0x418b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418B48_0x418b48");
#endif

    switch (ctx->pc) {
        case 0x418b5cu: goto label_418b5c;
        default: break;
    }

    ctx->pc = 0x418b48u;

    // 0x418b48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x418b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x418b4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x418b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x418b50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x418b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x418b54: 0xc136246  jal         func_4D8918
    ctx->pc = 0x418B54u;
    SET_GPR_U32(ctx, 31, 0x418B5Cu);
    ctx->pc = 0x418B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418B54u;
    // 0x418b58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D8918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D8918u, 0x418B54u, 0x418B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418B5Cu;
label_418b5c:
    // 0x418b5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x418b5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418b60: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x418b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x418b64: 0x1064000e  beq         $v1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x418B64u;
    {
        const bool branch_taken_0x418b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x418B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418B64u;
        // 0x418b68: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x418b64) {
            ctx->pc = 0x418BA0u;
            goto label_418ba0;
        }
    }
    ctx->pc = 0x418B6Cu;
    // 0x418b6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x418B6Cu;
    {
        const bool branch_taken_0x418b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x418B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418B6Cu;
        // 0x418b70: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418b6c) {
            ctx->pc = 0x418B84u;
            goto label_418b84;
        }
    }
    ctx->pc = 0x418B74u;
    // 0x418b74: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x418B74u;
    {
        const bool branch_taken_0x418b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x418b74) {
            ctx->pc = 0x418B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x418B74u;
            // 0x418b78: 0xae030120  sw          $v1, 0x120($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x418BB0u;
            goto label_418bb0;
        }
    }
    ctx->pc = 0x418B7Cu;
    // 0x418b7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x418B7Cu;
    {
        const bool branch_taken_0x418b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x418B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418B7Cu;
        // 0x418b80: 0xae000120  sw          $zero, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418b7c) {
            ctx->pc = 0x418BB0u;
            goto label_418bb0;
        }
    }
    ctx->pc = 0x418B84u;
label_418b84:
    // 0x418b84: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x418b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x418b88: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x418B88u;
    {
        const bool branch_taken_0x418b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x418B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418B88u;
        // 0x418b8c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418b88) {
            ctx->pc = 0x418BACu;
            goto label_418bac;
        }
    }
    ctx->pc = 0x418B90u;
    // 0x418b90: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x418B90u;
    {
        const bool branch_taken_0x418b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x418b90) {
            ctx->pc = 0x418B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x418B90u;
            // 0x418b94: 0xae040120  sw          $a0, 0x120($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x418BB0u;
            goto label_418bb0;
        }
    }
    ctx->pc = 0x418B98u;
    // 0x418b98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x418B98u;
    {
        const bool branch_taken_0x418b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x418B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418B98u;
        // 0x418b9c: 0xae000120  sw          $zero, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418b98) {
            ctx->pc = 0x418BB0u;
            goto label_418bb0;
        }
    }
    ctx->pc = 0x418BA0u;
label_418ba0:
    // 0x418ba0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x418ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x418ba4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x418BA4u;
    {
        const bool branch_taken_0x418ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x418BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418BA4u;
        // 0x418ba8: 0xae020120  sw          $v0, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418ba4) {
            ctx->pc = 0x418BB0u;
            goto label_418bb0;
        }
    }
    ctx->pc = 0x418BACu;
label_418bac:
    // 0x418bac: 0xae030120  sw          $v1, 0x120($s0)
    ctx->pc = 0x418bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 3));
label_418bb0:
    // 0x418bb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x418bb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x418bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x418bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x418bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x418BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x418BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418BB8u;
        // 0x418bbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x418BC0u;
    // 0x418bc0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x418bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x418bc4: 0x0  nop
    ctx->pc = 0x418bc4u;
    // NOP
    ctx->pc = 0x418bc8u;
}
