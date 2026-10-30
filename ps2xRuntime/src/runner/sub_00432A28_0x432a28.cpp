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

// Function: sub_00432A28
// Address: 0x432a28 - 0x432aa8
void sub_00432A28_0x432a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00432A28_0x432a28");
#endif

    switch (ctx->pc) {
        case 0x432a68u: goto label_432a68;
        case 0x432a88u: goto label_432a88;
        default: break;
    }

    ctx->pc = 0x432a28u;

    // 0x432a28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x432a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x432a2c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x432a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x432a30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x432a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x432a34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x432a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432a38: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x432a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x432a3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x432a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432a40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x432a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x432a44: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x432a44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x432a48: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x432a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x432a4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x432A4Cu;
    {
        const bool branch_taken_0x432a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x432A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432A4Cu;
        // 0x432a50: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432a4c) {
            ctx->pc = 0x432A68u;
            goto label_432a68;
        }
    }
    ctx->pc = 0x432A54u;
    // 0x432a54: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x432a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x432a58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x432a58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432a5c: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x432a5cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x432a60: 0xc10ea6c  jal         func_43A9B0
    ctx->pc = 0x432A60u;
    SET_GPR_U32(ctx, 31, 0x432A68u);
    ctx->pc = 0x432A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x432A60u;
    // 0x432a64: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43A9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43A9B0u, 0x432A60u, 0x432A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432A68u;
label_432a68:
    // 0x432a68: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x432a68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x432a6c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x432a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432a70: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x432a70u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x432a74: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x432a74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432a78: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x432a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x432a7c: 0x3042efff  andi        $v0, $v0, 0xEFFF
    ctx->pc = 0x432a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
    // 0x432a80: 0xc10eacc  jal         func_43AB30
    ctx->pc = 0x432A80u;
    SET_GPR_U32(ctx, 31, 0x432A88u);
    ctx->pc = 0x432A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x432A80u;
    // 0x432a84: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43AB30u, 0x432A80u, 0x432A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432A88u;
label_432a88:
    // 0x432a88: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x432a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x432a8c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x432a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x432a90: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x432a90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x432a94: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x432a94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x432a98: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x432a98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x432a9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x432a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x432aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x432AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x432AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432AA0u;
        // 0x432aa4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x432AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x432AA8u;
}
