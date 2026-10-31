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

// Function: sub_004D8A28
// Address: 0x4d8a28 - 0x4d8ab0
void sub_004D8A28_0x4d8a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D8A28_0x4d8a28");
#endif

    switch (ctx->pc) {
        case 0x4d8a70u: goto label_4d8a70;
        default: break;
    }

    ctx->pc = 0x4d8a28u;

    // 0x4d8a28: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4d8a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4d8a2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4d8a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d8a30: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4d8a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4d8a34: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x4d8a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4d8a38: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4d8a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4d8a3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4d8a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8a40: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4d8a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4d8a44: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4d8a44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8a48: 0x2508818  mult        $s1, $s2, $s0
    ctx->pc = 0x4d8a48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x4d8a4c: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4d8a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4d8a50: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d8a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4d8a54: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4d8a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8a58: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4d8a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4d8a5c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4d8a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8a60: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4d8a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4d8a64: 0xafb10014  sw          $s1, 0x14($sp)
    ctx->pc = 0x4d8a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 17));
    // 0x4d8a68: 0xc10c82c  jal         func_4320B0
    ctx->pc = 0x4D8A68u;
    SET_GPR_U32(ctx, 31, 0x4D8A70u);
    ctx->pc = 0x4D8A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8A68u;
    // 0x4d8a6c: 0xafb10008  sw          $s1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4320B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4320B0u, 0x4D8A68u, 0x4D8A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D8A70u;
label_4d8a70:
    // 0x4d8a70: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4D8A70u;
    {
        const bool branch_taken_0x4d8a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8A70u;
        // 0x4d8a74: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8a70) {
            ctx->pc = 0x4D8A94u;
            goto label_4d8a94;
        }
    }
    ctx->pc = 0x4D8A78u;
    // 0x4d8a78: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4D8A78u;
    {
        const bool branch_taken_0x4d8a78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8a78) {
            ctx->pc = 0x4D8A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D8A78u;
            // 0x4d8a7c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D8A80u;
            goto label_4d8a80;
        }
    }
    ctx->pc = 0x4D8A80u;
label_4d8a80:
    // 0x4d8a80: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x4d8a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4d8a84: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x4d8a84u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x4d8a88: 0x1012  mflo        $v0
    ctx->pc = 0x4d8a88u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x4d8a8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4D8A8Cu;
    {
        const bool branch_taken_0x4d8a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8A8Cu;
        // 0x4d8a90: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8a8c) {
            ctx->pc = 0x4D8A9Cu;
            goto label_4d8a9c;
        }
    }
    ctx->pc = 0x4D8A94u;
label_4d8a94:
    // 0x4d8a94: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4d8a94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8a98: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4d8a98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4d8a9c:
    // 0x4d8a9c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4d8a9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d8aa0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4d8aa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d8aa4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d8aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d8aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x4D8AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8AA8u;
        // 0x4d8aac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D8AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D8AB0u;
}
