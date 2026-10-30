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

// Function: sub_0047A658
// Address: 0x47a658 - 0x47a698
void sub_0047A658_0x47a658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047A658_0x47a658");
#endif

    switch (ctx->pc) {
        case 0x47a658u: goto label_47a658;
        case 0x47a65cu: goto label_47a65c;
        case 0x47a660u: goto label_47a660;
        case 0x47a664u: goto label_47a664;
        case 0x47a668u: goto label_47a668;
        case 0x47a66cu: goto label_47a66c;
        case 0x47a670u: goto label_47a670;
        case 0x47a674u: goto label_47a674;
        case 0x47a678u: goto label_47a678;
        case 0x47a67cu: goto label_47a67c;
        case 0x47a680u: goto label_47a680;
        case 0x47a684u: goto label_47a684;
        case 0x47a688u: goto label_47a688;
        case 0x47a68cu: goto label_47a68c;
        case 0x47a690u: goto label_47a690;
        case 0x47a694u: goto label_47a694;
        default: break;
    }

    ctx->pc = 0x47a658u;

label_47a658:
    // 0x47a658: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x47a658u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47a65c:
    // 0x47a65c: 0x54e00003  bnel        $a3, $zero, . + 4 + (0x3 << 2)
label_47a660:
    if (ctx->pc == 0x47A660u) {
        ctx->pc = 0x47A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A65Cu;
        // 0x47a660: 0x8ce80014  lw          $t0, 0x14($a3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A664u;
        goto label_47a664;
    }
    ctx->pc = 0x47A65Cu;
    {
        const bool branch_taken_0x47a65c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x47a65c) {
            ctx->pc = 0x47A660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47A65Cu;
            // 0x47a660: 0x8ce80014  lw          $t0, 0x14($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47A66Cu;
            goto label_47a66c;
        }
    }
    ctx->pc = 0x47A664u;
label_47a664:
    // 0x47a664: 0x3e00008  jr          $ra
label_47a668:
    if (ctx->pc == 0x47A668u) {
        ctx->pc = 0x47A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A664u;
        // 0x47a668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A66Cu;
        goto label_47a66c;
    }
    ctx->pc = 0x47A664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A664u;
        // 0x47a668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47A664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47A66Cu;
label_47a66c:
    // 0x47a66c: 0x1100fffd  beqz        $t0, . + 4 + (-0x3 << 2)
label_47a670:
    if (ctx->pc == 0x47A670u) {
        ctx->pc = 0x47A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A66Cu;
        // 0x47a670: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A674u;
        goto label_47a674;
    }
    ctx->pc = 0x47A66Cu;
    {
        const bool branch_taken_0x47a66c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A66Cu;
        // 0x47a670: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a66c) {
            ctx->pc = 0x47A664u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47a664;
        }
    }
    ctx->pc = 0x47A674u;
label_47a674:
    // 0x47a674: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x47a674u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_47a678:
    // 0x47a678: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_47a67c:
    if (ctx->pc == 0x47A67Cu) {
        ctx->pc = 0x47A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A678u;
        // 0x47a67c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A680u;
        goto label_47a680;
    }
    ctx->pc = 0x47A678u;
    {
        const bool branch_taken_0x47a678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A678u;
        // 0x47a67c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a678) {
            ctx->pc = 0x47A6E0u;
            return;
        }
    }
    ctx->pc = 0x47A680u;
label_47a680:
    // 0x47a680: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x47a680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_47a684:
    // 0x47a684: 0x2442eea0  addiu       $v0, $v0, -0x1160
    ctx->pc = 0x47a684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962848));
label_47a688:
    // 0x47a688: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x47a688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_47a68c:
    // 0x47a68c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x47a68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_47a690:
    // 0x47a690: 0x800008  jr          $a0
label_47a694:
    if (ctx->pc == 0x47A694u) {
        ctx->pc = 0x47A698u;
        goto label_fallthrough_0x47a690;
    }
    ctx->pc = 0x47A690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47A690u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x47a690:
    ctx->pc = 0x47A698u;
}
