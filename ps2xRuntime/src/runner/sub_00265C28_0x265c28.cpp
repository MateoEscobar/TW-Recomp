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

// Function: sub_00265C28
// Address: 0x265c28 - 0x265cd8
void sub_00265C28_0x265c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265C28_0x265c28");
#endif

    switch (ctx->pc) {
        case 0x265c4cu: goto label_265c4c;
        case 0x265c94u: goto label_265c94;
        case 0x265ca4u: goto label_265ca4;
        default: break;
    }

    ctx->pc = 0x265c28u;

    // 0x265c28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x265c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x265c2c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x265c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x265c30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x265c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x265c34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x265c34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265c38: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x265c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x265c3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x265c3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265c40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x265c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x265c44: 0xc088edc  jal         func_223B70
    ctx->pc = 0x265C44u;
    SET_GPR_U32(ctx, 31, 0x265C4Cu);
    ctx->pc = 0x265C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265C44u;
    // 0x265c48: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x265C44u, 0x265C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265C4Cu;
label_265c4c:
    // 0x265c4c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x265C4Cu;
    {
        const bool branch_taken_0x265c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265C4Cu;
        // 0x265c50: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265c4c) {
            ctx->pc = 0x265C58u;
            goto label_265c58;
        }
    }
    ctx->pc = 0x265C54u;
    // 0x265c54: 0x518821  addu        $s1, $v0, $s1
    ctx->pc = 0x265c54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_265c58:
    // 0x265c58: 0xde0300e0  ld          $v1, 0xE0($s0)
    ctx->pc = 0x265c58u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x265c5c: 0x3113a  dsrl        $v0, $v1, 4
    ctx->pc = 0x265c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 4);
    // 0x265c60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x265c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x265c64: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x265C64u;
    {
        const bool branch_taken_0x265c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265C64u;
        // 0x265c68: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265c64) {
            ctx->pc = 0x265CC0u;
            goto label_265cc0;
        }
    }
    ctx->pc = 0x265C6Cu;
    // 0x265c6c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x265c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x265c70: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x265c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x265c74: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x265c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x265c78: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x265c78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x265c7c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x265c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x265c80: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x265c80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x265c84: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x265C84u;
    {
        const bool branch_taken_0x265c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265C84u;
        // 0x265c88: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265c84) {
            ctx->pc = 0x265CC0u;
            goto label_265cc0;
        }
    }
    ctx->pc = 0x265C8Cu;
    // 0x265c8c: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x265C8Cu;
    SET_GPR_U32(ctx, 31, 0x265C94u);
    ctx->pc = 0x265C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265C8Cu;
    // 0x265c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x265C8Cu, 0x265C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265C94u;
label_265c94:
    // 0x265c94: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x265C94u;
    {
        const bool branch_taken_0x265c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265C94u;
        // 0x265c98: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265c94) {
            ctx->pc = 0x265CC0u;
            goto label_265cc0;
        }
    }
    ctx->pc = 0x265C9Cu;
    // 0x265c9c: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x265C9Cu;
    SET_GPR_U32(ctx, 31, 0x265CA4u);
    ctx->pc = 0x265CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265C9Cu;
    // 0x265ca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x265C9Cu, 0x265CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265CA4u;
label_265ca4:
    // 0x265ca4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x265CA4u;
    {
        const bool branch_taken_0x265ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265CA4u;
        // 0x265ca8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265ca4) {
            ctx->pc = 0x265CC0u;
            goto label_265cc0;
        }
    }
    ctx->pc = 0x265CACu;
    // 0x265cac: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x265cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x265cb0: 0x84520144  lh          $s2, 0x144($v0)
    ctx->pc = 0x265cb0u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 324)));
    // 0x265cb4: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x265cb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x265cb8: 0x38720001  xori        $s2, $v1, 0x1
    ctx->pc = 0x265cb8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x265cbc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x265cbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_265cc0:
    // 0x265cc0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x265cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265cc4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x265cc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265cc8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x265cc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265ccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x265cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x265CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265CD0u;
        // 0x265cd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265CD8u;
}
