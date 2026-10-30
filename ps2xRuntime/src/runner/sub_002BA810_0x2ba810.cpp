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

// Function: sub_002BA810
// Address: 0x2ba810 - 0x2ba878
void sub_002BA810_0x2ba810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA810_0x2ba810");
#endif

    switch (ctx->pc) {
        case 0x2ba84cu: goto label_2ba84c;
        case 0x2ba858u: goto label_2ba858;
        default: break;
    }

    ctx->pc = 0x2ba810u;

    // 0x2ba810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ba810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ba814: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2ba814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2ba818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ba818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ba81c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2ba81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2ba820: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ba820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ba824: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ba824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba828: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ba828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ba82c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2ba82cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ba830: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ba830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ba834: 0x26100164  addiu       $s0, $s0, 0x164
    ctx->pc = 0x2ba834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
    // 0x2ba838: 0x84650092  lh          $a1, 0x92($v1)
    ctx->pc = 0x2ba838u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
    // 0x2ba83c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ba83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba840: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2ba840u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2ba844: 0xc13b748  jal         func_4EDD20
    ctx->pc = 0x2BA844u;
    SET_GPR_U32(ctx, 31, 0x2BA84Cu);
    ctx->pc = 0x2BA848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA844u;
    // 0x2ba848: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDD20u, 0x2BA844u, 0x2BA84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA84Cu;
label_2ba84c:
    // 0x2ba84c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ba84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba850: 0xc137826  jal         func_4DE098
    ctx->pc = 0x2BA850u;
    SET_GPR_U32(ctx, 31, 0x2BA858u);
    ctx->pc = 0x2BA854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA850u;
    // 0x2ba854: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x2BA850u, 0x2BA858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA858u;
label_2ba858:
    // 0x2ba858: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ba858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ba85c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ba85cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ba860: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x2ba860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x2ba864: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ba864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ba868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba86c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA86Cu;
        // 0x2ba870: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA874u;
    // 0x2ba874: 0x0  nop
    ctx->pc = 0x2ba874u;
    // NOP
    ctx->pc = 0x2ba878u;
}
