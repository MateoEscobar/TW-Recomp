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

// Function: sub_001D6670
// Address: 0x1d6670 - 0x1d66d0
void sub_001D6670_0x1d6670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6670_0x1d6670");
#endif

    switch (ctx->pc) {
        case 0x1d668cu: goto label_1d668c;
        case 0x1d66a0u: goto label_1d66a0;
        case 0x1d66a8u: goto label_1d66a8;
        case 0x1d66b0u: goto label_1d66b0;
        default: break;
    }

    ctx->pc = 0x1d6670u;

    // 0x1d6670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d6674: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d6674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d6678: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d6678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d667c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d667cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d6680: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6684: 0xc0758fc  jal         func_1D63F0
    ctx->pc = 0x1D6684u;
    SET_GPR_U32(ctx, 31, 0x1D668Cu);
    ctx->pc = 0x1D6688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6684u;
    // 0x1d6688: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D63F0u, 0x1D6684u, 0x1D668Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D668Cu;
label_1d668c:
    // 0x1d668c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1d668cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1d6690: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x1d6690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x1d6694: 0x2463bc08  addiu       $v1, $v1, -0x43F8
    ctx->pc = 0x1d6694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949896));
    // 0x1d6698: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x1D6698u;
    SET_GPR_U32(ctx, 31, 0x1D66A0u);
    ctx->pc = 0x1D669Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6698u;
    // 0x1d669c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1D6698u, 0x1D66A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D66A0u;
label_1d66a0:
    // 0x1d66a0: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x1D66A0u;
    SET_GPR_U32(ctx, 31, 0x1D66A8u);
    ctx->pc = 0x1D66A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D66A0u;
    // 0x1d66a4: 0x26040320  addiu       $a0, $s0, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1D66A0u, 0x1D66A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D66A8u;
label_1d66a8:
    // 0x1d66a8: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x1D66A8u;
    SET_GPR_U32(ctx, 31, 0x1D66B0u);
    ctx->pc = 0x1D66ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D66A8u;
    // 0x1d66ac: 0x260403f0  addiu       $a0, $s0, 0x3F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1D66A8u, 0x1D66B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D66B0u;
label_1d66b0:
    // 0x1d66b0: 0xae1104c0  sw          $s1, 0x4C0($s0)
    ctx->pc = 0x1d66b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1216), GPR_U32(ctx, 17));
    // 0x1d66b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d66b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d66b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d66b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d66bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d66bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d66c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d66c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d66c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D66C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D66C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D66C4u;
        // 0x1d66c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D66C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D66CCu;
    // 0x1d66cc: 0x0  nop
    ctx->pc = 0x1d66ccu;
    // NOP
    ctx->pc = 0x1d66d0u;
}
