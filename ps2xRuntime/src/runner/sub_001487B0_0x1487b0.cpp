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

// Function: sub_001487B0
// Address: 0x1487b0 - 0x148820
void sub_001487B0_0x1487b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001487B0_0x1487b0");
#endif

    switch (ctx->pc) {
        case 0x1487d8u: goto label_1487d8;
        case 0x1487e8u: goto label_1487e8;
        case 0x1487f0u: goto label_1487f0;
        case 0x1487fcu: goto label_1487fc;
        default: break;
    }

    ctx->pc = 0x1487b0u;

    // 0x1487b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1487b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1487b4: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x1487b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x1487b8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1487b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1487bc: 0x24427ef8  addiu       $v0, $v0, 0x7EF8
    ctx->pc = 0x1487bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32504));
    // 0x1487c0: 0x3c100053  lui         $s0, 0x53
    ctx->pc = 0x1487c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)83 << 16));
    // 0x1487c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1487c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1487c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1487c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1487cc: 0x26104298  addiu       $s0, $s0, 0x4298
    ctx->pc = 0x1487ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17048));
    // 0x1487d0: 0xc0521c2  jal         func_148708
    ctx->pc = 0x1487D0u;
    SET_GPR_U32(ctx, 31, 0x1487D8u);
    ctx->pc = 0x1487D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1487D0u;
    // 0x1487d4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148708u, 0x1487D0u, 0x1487D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1487D8u;
label_1487d8:
    // 0x1487d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1487d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1487dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1487dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1487e0: 0xc052492  jal         func_149248
    ctx->pc = 0x1487E0u;
    SET_GPR_U32(ctx, 31, 0x1487E8u);
    ctx->pc = 0x1487E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1487E0u;
    // 0x1487e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149248u, 0x1487E0u, 0x1487E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1487E8u;
label_1487e8:
    // 0x1487e8: 0xc0524dc  jal         func_149370
    ctx->pc = 0x1487E8u;
    SET_GPR_U32(ctx, 31, 0x1487F0u);
    ctx->pc = 0x1487ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1487E8u;
    // 0x1487ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149370u, 0x1487E8u, 0x1487F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1487F0u;
label_1487f0:
    // 0x1487f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1487f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1487f4: 0xc0524b2  jal         func_1492C8
    ctx->pc = 0x1487F4u;
    SET_GPR_U32(ctx, 31, 0x1487FCu);
    ctx->pc = 0x1487F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1487F4u;
    // 0x1487f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1492C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1492C8u, 0x1487F4u, 0x1487FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1487FCu;
label_1487fc:
    // 0x1487fc: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1487fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x148800: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x148800u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148804: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x148804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x148808: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x148808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14880c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14880cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148810: 0x3e00008  jr          $ra
    ctx->pc = 0x148810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148810u;
        // 0x148814: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148818u;
    // 0x148818: 0x0  nop
    ctx->pc = 0x148818u;
    // NOP
    // 0x14881c: 0x0  nop
    ctx->pc = 0x14881cu;
    // NOP
    ctx->pc = 0x148820u;
}
