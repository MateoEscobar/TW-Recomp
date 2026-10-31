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

// Function: sub_00254568
// Address: 0x254568 - 0x2545a8
void sub_00254568_0x254568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254568_0x254568");
#endif

    switch (ctx->pc) {
        case 0x254580u: goto label_254580;
        default: break;
    }

    ctx->pc = 0x254568u;

    // 0x254568: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x254568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25456c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25456cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x254570: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x254570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254578: 0xc05fdf0  jal         func_17F7C0
    ctx->pc = 0x254578u;
    SET_GPR_U32(ctx, 31, 0x254580u);
    ctx->pc = 0x25457Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254578u;
    // 0x25457c: 0x24a40004  addiu       $a0, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F7C0u, 0x254578u, 0x254580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254580u;
label_254580:
    // 0x254580: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x254580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x254584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254588: 0x8c640b54  lw          $a0, 0xB54($v1)
    ctx->pc = 0x254588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2900)));
    // 0x25458c: 0xae040160  sw          $a0, 0x160($s0)
    ctx->pc = 0x25458cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 4));
    // 0x254590: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x254590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x254594: 0x8c620b50  lw          $v0, 0xB50($v1)
    ctx->pc = 0x254594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2896)));
    // 0x254598: 0xae02015c  sw          $v0, 0x15C($s0)
    ctx->pc = 0x254598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 2));
    // 0x25459c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25459cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2545a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2545A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2545A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2545A0u;
        // 0x2545a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2545A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2545A8u;
}
