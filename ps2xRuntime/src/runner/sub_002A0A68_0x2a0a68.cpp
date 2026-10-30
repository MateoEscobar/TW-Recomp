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

// Function: sub_002A0A68
// Address: 0x2a0a68 - 0x2a0ac8
void sub_002A0A68_0x2a0a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0A68_0x2a0a68");
#endif

    switch (ctx->pc) {
        case 0x2a0a84u: goto label_2a0a84;
        case 0x2a0a8cu: goto label_2a0a8c;
        case 0x2a0a94u: goto label_2a0a94;
        case 0x2a0aa8u: goto label_2a0aa8;
        case 0x2a0ab4u: goto label_2a0ab4;
        default: break;
    }

    ctx->pc = 0x2a0a68u;

    // 0x2a0a68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a0a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a0a6c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2a0a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2a0a70: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2a0a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2a0a74: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a0a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a0a78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a0a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a0a7c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2A0A7Cu;
    SET_GPR_U32(ctx, 31, 0x2A0A84u);
    ctx->pc = 0x2A0A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0A7Cu;
    // 0x2a0a80: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A0A7Cu, 0x2A0A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0A84u;
label_2a0a84:
    // 0x2a0a84: 0xc087502  jal         func_21D408
    ctx->pc = 0x2A0A84u;
    SET_GPR_U32(ctx, 31, 0x2A0A8Cu);
    ctx->pc = 0x2A0A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0A84u;
    // 0x2a0a88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2A0A84u, 0x2A0A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0A8Cu;
label_2a0a8c:
    // 0x2a0a8c: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2A0A8Cu;
    SET_GPR_U32(ctx, 31, 0x2A0A94u);
    ctx->pc = 0x2A0A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0A8Cu;
    // 0x2a0a90: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2A0A8Cu, 0x2A0A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0A94u;
label_2a0a94:
    // 0x2a0a94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a0a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0a98: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0A98u;
    {
        const bool branch_taken_0x2a0a98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0A98u;
        // 0x2a0a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0a98) {
            ctx->pc = 0x2A0AA8u;
            goto label_2a0aa8;
        }
    }
    ctx->pc = 0x2A0AA0u;
    // 0x2a0aa0: 0xc0a82b2  jal         func_2A0AC8
    ctx->pc = 0x2A0AA0u;
    SET_GPR_U32(ctx, 31, 0x2A0AA8u);
    ctx->pc = 0x2A0AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0AA0u;
    // 0x2a0aa4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0AC8u, 0x2A0AA0u, 0x2A0AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0AA8u;
label_2a0aa8:
    // 0x2a0aa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a0aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0aac: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2A0AACu;
    SET_GPR_U32(ctx, 31, 0x2A0AB4u);
    ctx->pc = 0x2A0AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0AACu;
    // 0x2a0ab0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2A0AACu, 0x2A0AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0AB4u;
label_2a0ab4:
    // 0x2a0ab4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2a0ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a0ab8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a0ab8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a0abc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a0abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0AC0u;
        // 0x2a0ac4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0AC8u;
}
