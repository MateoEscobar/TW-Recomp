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

// Function: sub_00306B88
// Address: 0x306b88 - 0x306bd0
void sub_00306B88_0x306b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306B88_0x306b88");
#endif

    switch (ctx->pc) {
        case 0x306bacu: goto label_306bac;
        case 0x306bc0u: goto label_306bc0;
        default: break;
    }

    ctx->pc = 0x306b88u;

    // 0x306b88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x306b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x306b8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x306b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x306b90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x306b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x306b94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x306b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306b98: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x306b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x306b9c: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x306B9Cu;
    {
        const bool branch_taken_0x306b9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x306b9c) {
            ctx->pc = 0x306BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306B9Cu;
            // 0x306ba0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306BC4u;
            goto label_306bc4;
        }
    }
    ctx->pc = 0x306BA4u;
    // 0x306ba4: 0xc0c8680  jal         func_321A00
    ctx->pc = 0x306BA4u;
    SET_GPR_U32(ctx, 31, 0x306BACu);
    ctx->pc = 0x321A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321A00u, 0x306BA4u, 0x306BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306BACu;
label_306bac:
    // 0x306bac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x306bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306bb0: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x306BB0u;
    {
        const bool branch_taken_0x306bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x306bb0) {
            ctx->pc = 0x306BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306BB0u;
            // 0x306bb4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306BC4u;
            goto label_306bc4;
        }
    }
    ctx->pc = 0x306BB8u;
    // 0x306bb8: 0xc0c1af4  jal         func_306BD0
    ctx->pc = 0x306BB8u;
    SET_GPR_U32(ctx, 31, 0x306BC0u);
    ctx->pc = 0x306BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306BB8u;
    // 0x306bbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306BD0u, 0x306BB8u, 0x306BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306BC0u;
label_306bc0:
    // 0x306bc0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x306bc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_306bc4:
    // 0x306bc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x306bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x306bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x306BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306BC8u;
        // 0x306bcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306BD0u;
}
