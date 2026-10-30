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

// Function: sub_001D1A18
// Address: 0x1d1a18 - 0x1d1aa0
void sub_001D1A18_0x1d1a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1A18_0x1d1a18");
#endif

    switch (ctx->pc) {
        case 0x1d1a44u: goto label_1d1a44;
        case 0x1d1a58u: goto label_1d1a58;
        case 0x1d1a68u: goto label_1d1a68;
        case 0x1d1a78u: goto label_1d1a78;
        case 0x1d1a84u: goto label_1d1a84;
        default: break;
    }

    ctx->pc = 0x1d1a18u;

    // 0x1d1a18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d1a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d1a1c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d1a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d1a20: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d1a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1d1a24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d1a24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a28: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d1a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d1a2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d1a2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a30: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D1A30u;
    {
        const bool branch_taken_0x1d1a30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A30u;
        // 0x1d1a34: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a30) {
            ctx->pc = 0x1D1A4Cu;
            goto label_1d1a4c;
        }
    }
    ctx->pc = 0x1D1A38u;
    // 0x1d1a38: 0x26440170  addiu       $a0, $s2, 0x170
    ctx->pc = 0x1d1a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
    // 0x1d1a3c: 0xc06ec94  jal         func_1BB250
    ctx->pc = 0x1D1A3Cu;
    SET_GPR_U32(ctx, 31, 0x1D1A44u);
    ctx->pc = 0x1D1A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A3Cu;
    // 0x1d1a40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1D1A3Cu, 0x1D1A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A44u;
label_1d1a44:
    // 0x1d1a44: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1D1A44u;
    {
        const bool branch_taken_0x1d1a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A44u;
        // 0x1d1a48: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a44) {
            ctx->pc = 0x1D1A88u;
            goto label_1d1a88;
        }
    }
    ctx->pc = 0x1D1A4Cu;
label_1d1a4c:
    // 0x1d1a4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a50: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1D1A50u;
    SET_GPR_U32(ctx, 31, 0x1D1A58u);
    ctx->pc = 0x1D1A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A50u;
    // 0x1d1a54: 0x2650070c  addiu       $s0, $s2, 0x70C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1804));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1D1A50u, 0x1D1A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A58u;
label_1d1a58:
    // 0x1d1a58: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1d1a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1d1a5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a60: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1D1A60u;
    SET_GPR_U32(ctx, 31, 0x1D1A68u);
    ctx->pc = 0x1D1A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A60u;
    // 0x1d1a64: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1D1A60u, 0x1D1A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A68u;
label_1d1a68:
    // 0x1d1a68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d1a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a70: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1D1A70u;
    SET_GPR_U32(ctx, 31, 0x1D1A78u);
    ctx->pc = 0x1D1A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A70u;
    // 0x1d1a74: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1D1A70u, 0x1D1A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A78u;
label_1d1a78:
    // 0x1d1a78: 0x26440170  addiu       $a0, $s2, 0x170
    ctx->pc = 0x1d1a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
    // 0x1d1a7c: 0xc06ec94  jal         func_1BB250
    ctx->pc = 0x1D1A7Cu;
    SET_GPR_U32(ctx, 31, 0x1D1A84u);
    ctx->pc = 0x1D1A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A7Cu;
    // 0x1d1a80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1D1A7Cu, 0x1D1A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A84u;
label_1d1a84:
    // 0x1d1a84: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d1a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d1a88:
    // 0x1d1a88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d1a88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1a8c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d1a8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1a90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1a94: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A94u;
        // 0x1d1a98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1A9Cu;
    // 0x1d1a9c: 0x0  nop
    ctx->pc = 0x1d1a9cu;
    // NOP
    ctx->pc = 0x1d1aa0u;
}
