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

// Function: sub_001B6E40
// Address: 0x1b6e40 - 0x1b6ed8
void sub_001B6E40_0x1b6e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6E40_0x1b6e40");
#endif

    switch (ctx->pc) {
        case 0x1b6e78u: goto label_1b6e78;
        case 0x1b6e90u: goto label_1b6e90;
        case 0x1b6ea8u: goto label_1b6ea8;
        case 0x1b6eb8u: goto label_1b6eb8;
        default: break;
    }

    ctx->pc = 0x1b6e40u;

    // 0x1b6e40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b6e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b6e44: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b6e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b6e48: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b6e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b6e4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b6e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b6e54: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b6e54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b6e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b6e5c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b6e5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b6e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e64: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b6e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e68: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x1b6e68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b6e6c: 0x26060400  addiu       $a2, $s0, 0x400
    ctx->pc = 0x1b6e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
    // 0x1b6e70: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x1B6E70u;
    SET_GPR_U32(ctx, 31, 0x1B6E78u);
    ctx->pc = 0x1B6E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6E70u;
    // 0x1b6e74: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x1B6E70u, 0x1B6E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E78u;
label_1b6e78:
    // 0x1b6e78: 0x8e020410  lw          $v0, 0x410($s0)
    ctx->pc = 0x1b6e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
    // 0x1b6e7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6E7Cu;
    {
        const bool branch_taken_0x1b6e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E7Cu;
        // 0x1b6e80: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6e7c) {
            ctx->pc = 0x1B6E98u;
            goto label_1b6e98;
        }
    }
    ctx->pc = 0x1B6E84u;
    // 0x1b6e84: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b6e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e88: 0xc06e4dc  jal         func_1B9370
    ctx->pc = 0x1B6E88u;
    SET_GPR_U32(ctx, 31, 0x1B6E90u);
    ctx->pc = 0x1B6E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6E88u;
    // 0x1b6e8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x1B6E88u, 0x1B6E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E90u;
label_1b6e90:
    // 0x1b6e90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6E90u;
    {
        const bool branch_taken_0x1b6e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E90u;
        // 0x1b6e94: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6e90) {
            ctx->pc = 0x1B6EACu;
            goto label_1b6eac;
        }
    }
    ctx->pc = 0x1B6E98u;
label_1b6e98:
    // 0x1b6e98: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1b6e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1b6e9c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b6e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ea0: 0xc073464  jal         func_1CD190
    ctx->pc = 0x1B6EA0u;
    SET_GPR_U32(ctx, 31, 0x1B6EA8u);
    ctx->pc = 0x1B6EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6EA0u;
    // 0x1b6ea4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD190u, 0x1B6EA0u, 0x1B6EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6EA8u;
label_1b6ea8:
    // 0x1b6ea8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b6ea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b6eac:
    // 0x1b6eac: 0x26040300  addiu       $a0, $s0, 0x300
    ctx->pc = 0x1b6eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x1b6eb0: 0xc068818  jal         func_1A2060
    ctx->pc = 0x1B6EB0u;
    SET_GPR_U32(ctx, 31, 0x1B6EB8u);
    ctx->pc = 0x1B6EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6EB0u;
    // 0x1b6eb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1B6EB0u, 0x1B6EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6EB8u;
label_1b6eb8:
    // 0x1b6eb8: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x1b6eb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b6ebc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b6ebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6ec0: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x1b6ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x1b6ec4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b6ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6ec8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b6ec8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6ecc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b6eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6ED0u;
        // 0x1b6ed4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6ED8u;
}
