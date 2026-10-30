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

// Function: sub_00332B10
// Address: 0x332b10 - 0x332bb0
void sub_00332B10_0x332b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332B10_0x332b10");
#endif

    switch (ctx->pc) {
        case 0x332b58u: goto label_332b58;
        case 0x332b64u: goto label_332b64;
        case 0x332b90u: goto label_332b90;
        default: break;
    }

    ctx->pc = 0x332b10u;

    // 0x332b10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x332b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x332b14: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x332b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332b18: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x332b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x332b1c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x332b1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332b20: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x332b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x332b24: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x332b24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332b28: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x332b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x332b2c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x332b2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332b30: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x332b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x332b34: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x332b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x332b38: 0x11000010  beqz        $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x332B38u;
    {
        const bool branch_taken_0x332b38 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x332B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332B38u;
        // 0x332b3c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332b38) {
            ctx->pc = 0x332B7Cu;
            goto label_332b7c;
        }
    }
    ctx->pc = 0x332B40u;
    // 0x332b40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x332b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332b44: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x332b44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x332b48: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x332B48u;
    {
        const bool branch_taken_0x332b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x332B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332B48u;
        // 0x332b4c: 0x2450ffff  addiu       $s0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332b48) {
            ctx->pc = 0x332B90u;
            goto label_332b90;
        }
    }
    ctx->pc = 0x332B50u;
    // 0x332b50: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x332b50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x332b54: 0x0  nop
    ctx->pc = 0x332b54u;
    // NOP
label_332b58:
    // 0x332b58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x332b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332b5c: 0xc0cca8e  jal         func_332A38
    ctx->pc = 0x332B5Cu;
    SET_GPR_U32(ctx, 31, 0x332B64u);
    ctx->pc = 0x332B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332B5Cu;
    // 0x332b60: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332A38u, 0x332B5Cu, 0x332B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332B64u;
label_332b64:
    // 0x332b64: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x332b64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x332b68: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x332b68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x332b6c: 0x1634fffa  bne         $s1, $s4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x332B6Cu;
    {
        const bool branch_taken_0x332b6c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x332B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332B6Cu;
        // 0x332b70: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332b6c) {
            ctx->pc = 0x332B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332b58;
        }
    }
    ctx->pc = 0x332B74u;
    // 0x332b74: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x332B74u;
    {
        const bool branch_taken_0x332b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332B74u;
        // 0x332b78: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332b74) {
            ctx->pc = 0x332B94u;
            goto label_332b94;
        }
    }
    ctx->pc = 0x332B7Cu;
label_332b7c:
    // 0x332b7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x332b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332b80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x332b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332b84: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x332b84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332b88: 0xc0ccab0  jal         func_332AC0
    ctx->pc = 0x332B88u;
    SET_GPR_U32(ctx, 31, 0x332B90u);
    ctx->pc = 0x332B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332B88u;
    // 0x332b8c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332AC0u, 0x332B88u, 0x332B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332B90u;
label_332b90:
    // 0x332b90: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x332b90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_332b94:
    // 0x332b94: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x332b94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x332b98: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x332b98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x332b9c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x332b9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x332ba0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x332ba0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332ba4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x332ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x332BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332BA8u;
        // 0x332bac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332BB0u;
}
