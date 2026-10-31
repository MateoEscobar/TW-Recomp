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

// Function: sub_0011B660
// Address: 0x11b660 - 0x11b6c0
void sub_0011B660_0x11b660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B660_0x11b660");
#endif

    switch (ctx->pc) {
        case 0x11b690u: goto label_11b690;
        case 0x11b6acu: goto label_11b6ac;
        default: break;
    }

    ctx->pc = 0x11b660u;

    // 0x11b660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11b660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11b664: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11b664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x11b668: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11b668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11b66c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11b66cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b674: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x11b674u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11b678: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x11b678u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11b67c: 0x54510005  bnel        $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B67Cu;
    {
        const bool branch_taken_0x11b67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x11b67c) {
            ctx->pc = 0x11B680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B67Cu;
            // 0x11b680: 0x92020001  lbu         $v0, 0x1($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B694u;
            goto label_11b694;
        }
    }
    ctx->pc = 0x11B684u;
    // 0x11b684: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b688: 0xc046dd0  jal         func_11B740
    ctx->pc = 0x11B688u;
    SET_GPR_U32(ctx, 31, 0x11B690u);
    ctx->pc = 0x11B68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B688u;
    // 0x11b68c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B740u, 0x11B688u, 0x11B690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B690u;
label_11b690:
    // 0x11b690: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x11b690u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_11b694:
    // 0x11b694: 0x54510006  bnel        $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B694u;
    {
        const bool branch_taken_0x11b694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x11b694) {
            ctx->pc = 0x11B698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B694u;
            // 0x11b698: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B6B0u;
            goto label_11b6b0;
        }
    }
    ctx->pc = 0x11B69Cu;
    // 0x11b69c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b6a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11b6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b6a4: 0xc046dd0  jal         func_11B740
    ctx->pc = 0x11B6A4u;
    SET_GPR_U32(ctx, 31, 0x11B6ACu);
    ctx->pc = 0x11B6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B6A4u;
    // 0x11b6a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B740u, 0x11B6A4u, 0x11B6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B6ACu;
label_11b6ac:
    // 0x11b6ac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x11b6acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11b6b0:
    // 0x11b6b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11b6b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b6b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x11B6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6B8u;
        // 0x11b6bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B6C0u;
}
