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

// Function: sub_00387A90
// Address: 0x387a90 - 0x387ad8
void sub_00387A90_0x387a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387A90_0x387a90");
#endif

    switch (ctx->pc) {
        case 0x387ac0u: goto label_387ac0;
        default: break;
    }

    ctx->pc = 0x387a90u;

    // 0x387a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x387a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x387a94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x387a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x387a98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x387a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x387a9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x387a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387aa0: 0x8e051300  lw          $a1, 0x1300($s0)
    ctx->pc = 0x387aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4864)));
    // 0x387aa4: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x387AA4u;
    {
        const bool branch_taken_0x387aa4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x387aa4) {
            ctx->pc = 0x387AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387AA4u;
            // 0x387aa8: 0xa2001308  sb          $zero, 0x1308($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 4872), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387AB4u;
            goto label_387ab4;
        }
    }
    ctx->pc = 0x387AACu;
    // 0x387aac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x387AACu;
    {
        const bool branch_taken_0x387aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387AACu;
        // 0x387ab0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387aac) {
            ctx->pc = 0x387AC8u;
            goto label_387ac8;
        }
    }
    ctx->pc = 0x387AB4u;
label_387ab4:
    // 0x387ab4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x387ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x387ab8: 0xc05ce1e  jal         func_173878
    ctx->pc = 0x387AB8u;
    SET_GPR_U32(ctx, 31, 0x387AC0u);
    ctx->pc = 0x387ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387AB8u;
    // 0x387abc: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173878u, 0x387AB8u, 0x387AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387AC0u;
label_387ac0:
    // 0x387ac0: 0xae001300  sw          $zero, 0x1300($s0)
    ctx->pc = 0x387ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4864), GPR_U32(ctx, 0));
    // 0x387ac4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x387ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_387ac8:
    // 0x387ac8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x387ac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x387acc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x387accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x387ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x387AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387AD0u;
        // 0x387ad4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387AD8u;
}
