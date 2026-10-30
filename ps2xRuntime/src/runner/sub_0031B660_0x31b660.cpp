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

// Function: sub_0031B660
// Address: 0x31b660 - 0x31b6d0
void sub_0031B660_0x31b660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B660_0x31b660");
#endif

    switch (ctx->pc) {
        case 0x31b688u: goto label_31b688;
        case 0x31b698u: goto label_31b698;
        case 0x31b6b4u: goto label_31b6b4;
        case 0x31b6c0u: goto label_31b6c0;
        default: break;
    }

    ctx->pc = 0x31b660u;

    // 0x31b660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31b660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31b664: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x31b664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31b668: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31b668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31b66c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31b66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31b670: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31b670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b674: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x31b674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x31b678: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B678u;
    {
        const bool branch_taken_0x31b678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31b678) {
            ctx->pc = 0x31B690u;
            goto label_31b690;
        }
    }
    ctx->pc = 0x31B680u;
    // 0x31b680: 0xc0c6d74  jal         func_31B5D0
    ctx->pc = 0x31B680u;
    SET_GPR_U32(ctx, 31, 0x31B688u);
    ctx->pc = 0x31B5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B5D0u, 0x31B680u, 0x31B688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B688u;
label_31b688:
    // 0x31b688: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x31B688u;
    {
        const bool branch_taken_0x31b688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b688) {
            ctx->pc = 0x31B68Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B688u;
            // 0x31b68c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B6C4u;
            goto label_31b6c4;
        }
    }
    ctx->pc = 0x31B690u;
label_31b690:
    // 0x31b690: 0xc0c6ce2  jal         func_31B388
    ctx->pc = 0x31B690u;
    SET_GPR_U32(ctx, 31, 0x31B698u);
    ctx->pc = 0x31B694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B690u;
    // 0x31b694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B388u, 0x31B690u, 0x31B698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B698u;
label_31b698:
    // 0x31b698: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x31b698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31b69c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x31b69cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x31b6a0: 0x24050253  addiu       $a1, $zero, 0x253
    ctx->pc = 0x31b6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
    // 0x31b6a4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x31b6a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31b6a8: 0x248401b0  addiu       $a0, $a0, 0x1B0
    ctx->pc = 0x31b6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x31b6ac: 0xc05905e  jal         func_164178
    ctx->pc = 0x31B6ACu;
    SET_GPR_U32(ctx, 31, 0x31B6B4u);
    ctx->pc = 0x31B6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B6ACu;
    // 0x31b6b0: 0x24c61590  addiu       $a2, $a2, 0x1590 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164178u, 0x31B6ACu, 0x31B6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B6B4u;
label_31b6b4:
    // 0x31b6b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x31b6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31b6b8: 0xc059750  jal         func_165D40
    ctx->pc = 0x31B6B8u;
    SET_GPR_U32(ctx, 31, 0x31B6C0u);
    ctx->pc = 0x31B6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B6B8u;
    // 0x31b6bc: 0x24050088  addiu       $a1, $zero, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165D40u, 0x31B6B8u, 0x31B6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B6C0u;
label_31b6c0:
    // 0x31b6c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31b6c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31b6c4:
    // 0x31b6c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31b6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x31B6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B6C8u;
        // 0x31b6cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B6D0u;
}
