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

// Function: sub_00142A58
// Address: 0x142a58 - 0x142ac8
void sub_00142A58_0x142a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142A58_0x142a58");
#endif

    ctx->pc = 0x142a58u;

    // 0x142a58: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x142a58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142a5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x142a5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142a60: 0x8d020334  lw          $v0, 0x334($t0)
    ctx->pc = 0x142a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 820)));
    // 0x142a64: 0x46006328  max.s       $f12, $f12, $f0
    ctx->pc = 0x142a64u;
    ctx->f[12] = std::max(ctx->f[12], ctx->f[0]);
    // 0x142a68: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x142a68u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x142a6c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x142a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x142a70: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x142a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x142a74: 0x7c4401e0  sq          $a0, 0x1E0($v0)
    ctx->pc = 0x142a74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 480), GPR_VEC(ctx, 4));
    // 0x142a78: 0x8d030334  lw          $v1, 0x334($t0)
    ctx->pc = 0x142a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 820)));
    // 0x142a7c: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x142a7cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x142a80: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x142a80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x142a84: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x142a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x142a88: 0x7c640260  sq          $a0, 0x260($v1)
    ctx->pc = 0x142a88u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 608), GPR_VEC(ctx, 4));
    // 0x142a8c: 0x8d020334  lw          $v0, 0x334($t0)
    ctx->pc = 0x142a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 820)));
    // 0x142a90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x142a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x142a94: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x142a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x142a98: 0xe44c030c  swc1        $f12, 0x30C($v0)
    ctx->pc = 0x142a98u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 780), bits); }
    // 0x142a9c: 0x8d030334  lw          $v1, 0x334($t0)
    ctx->pc = 0x142a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 820)));
    // 0x142aa0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x142aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x142aa4: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x142aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x142aa8: 0xac6702ec  sw          $a3, 0x2EC($v1)
    ctx->pc = 0x142aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 748), GPR_U32(ctx, 7));
    // 0x142aac: 0x8d030334  lw          $v1, 0x334($t0)
    ctx->pc = 0x142aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 820)));
    // 0x142ab0: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x142ab0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x142ab4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x142AB4u;
    {
        const bool branch_taken_0x142ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142AB4u;
        // 0x142ab8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ab4) {
            ctx->pc = 0x142AC0u;
            goto label_142ac0;
        }
    }
    ctx->pc = 0x142ABCu;
    // 0x142abc: 0xad020334  sw          $v0, 0x334($t0)
    ctx->pc = 0x142abcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 820), GPR_U32(ctx, 2));
label_142ac0:
    // 0x142ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x142AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142AC8u;
}
