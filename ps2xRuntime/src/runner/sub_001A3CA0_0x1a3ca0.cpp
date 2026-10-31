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

// Function: sub_001A3CA0
// Address: 0x1a3ca0 - 0x1a3d00
void sub_001A3CA0_0x1a3ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3CA0_0x1a3ca0");
#endif

    switch (ctx->pc) {
        case 0x1a3cc8u: goto label_1a3cc8;
        case 0x1a3cd4u: goto label_1a3cd4;
        case 0x1a3ce0u: goto label_1a3ce0;
        case 0x1a3cecu: goto label_1a3cec;
        default: break;
    }

    ctx->pc = 0x1a3ca0u;

    // 0x1a3ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a3ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a3ca4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1a3ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1a3ca8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a3ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a3cac: 0x24429698  addiu       $v0, $v0, -0x6968
    ctx->pc = 0x1a3cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940312));
    // 0x1a3cb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a3cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a3cb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a3cb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3cb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a3cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a3cbc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a3cbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3cc0: 0xc069002  jal         func_1A4008
    ctx->pc = 0x1A3CC0u;
    SET_GPR_U32(ctx, 31, 0x1A3CC8u);
    ctx->pc = 0x1A3CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3CC0u;
    // 0x1a3cc4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4008u, 0x1A3CC0u, 0x1A3CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3CC8u;
label_1a3cc8:
    // 0x1a3cc8: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x1a3cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1a3ccc: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x1A3CCCu;
    SET_GPR_U32(ctx, 31, 0x1A3CD4u);
    ctx->pc = 0x1A3CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3CCCu;
    // 0x1a3cd0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1A3CCCu, 0x1A3CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3CD4u;
label_1a3cd4:
    // 0x1a3cd4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1a3cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1a3cd8: 0xc0733f0  jal         func_1CCFC0
    ctx->pc = 0x1A3CD8u;
    SET_GPR_U32(ctx, 31, 0x1A3CE0u);
    ctx->pc = 0x1A3CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3CD8u;
    // 0x1a3cdc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x1A3CD8u, 0x1A3CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3CE0u;
label_1a3ce0:
    // 0x1a3ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3ce4: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x1A3CE4u;
    SET_GPR_U32(ctx, 31, 0x1A3CECu);
    ctx->pc = 0x1A3CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3CE4u;
    // 0x1a3ce8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1A3CE4u, 0x1A3CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3CECu;
label_1a3cec:
    // 0x1a3cec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a3cecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3cf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a3cf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3cf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a3cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CF8u;
        // 0x1a3cfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3D00u;
}
