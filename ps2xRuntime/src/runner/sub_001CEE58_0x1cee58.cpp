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

// Function: sub_001CEE58
// Address: 0x1cee58 - 0x1ceec0
void sub_001CEE58_0x1cee58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CEE58_0x1cee58");
#endif

    switch (ctx->pc) {
        case 0x1cee94u: goto label_1cee94;
        case 0x1ceea0u: goto label_1ceea0;
        case 0x1ceeacu: goto label_1ceeac;
        default: break;
    }

    ctx->pc = 0x1cee58u;

    // 0x1cee58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cee58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cee5c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1cee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1cee60: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1cee60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1cee64: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1cee64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1cee68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cee68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cee6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cee6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cee70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cee70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cee74: 0x2442b188  addiu       $v0, $v0, -0x4E78
    ctx->pc = 0x1cee74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947208));
    // 0x1cee78: 0x2463b1b0  addiu       $v1, $v1, -0x4E50
    ctx->pc = 0x1cee78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947248));
    // 0x1cee7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cee7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cee80: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x1cee80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x1cee84: 0x26040890  addiu       $a0, $s0, 0x890
    ctx->pc = 0x1cee84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    // 0x1cee88: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1cee88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1cee8c: 0xc0733f0  jal         func_1CCFC0
    ctx->pc = 0x1CEE8Cu;
    SET_GPR_U32(ctx, 31, 0x1CEE94u);
    ctx->pc = 0x1CEE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEE8Cu;
    // 0x1cee90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x1CEE8Cu, 0x1CEE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEE94u;
label_1cee94:
    // 0x1cee94: 0x260407c0  addiu       $a0, $s0, 0x7C0
    ctx->pc = 0x1cee94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1984));
    // 0x1cee98: 0xc0733f0  jal         func_1CCFC0
    ctx->pc = 0x1CEE98u;
    SET_GPR_U32(ctx, 31, 0x1CEEA0u);
    ctx->pc = 0x1CEE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEE98u;
    // 0x1cee9c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x1CEE98u, 0x1CEEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEEA0u;
label_1ceea0:
    // 0x1ceea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ceea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceea4: 0xc074636  jal         func_1D18D8
    ctx->pc = 0x1CEEA4u;
    SET_GPR_U32(ctx, 31, 0x1CEEACu);
    ctx->pc = 0x1CEEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEEA4u;
    // 0x1ceea8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18D8u, 0x1CEEA4u, 0x1CEEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEEACu;
label_1ceeac:
    // 0x1ceeac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ceeacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ceeb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ceeb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ceeb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ceeb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ceeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEEB8u;
        // 0x1ceebc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEEC0u;
}
