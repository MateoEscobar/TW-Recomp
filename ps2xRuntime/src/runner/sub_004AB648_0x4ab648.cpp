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

// Function: sub_004AB648
// Address: 0x4ab648 - 0x4ab6c0
void sub_004AB648_0x4ab648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AB648_0x4ab648");
#endif

    switch (ctx->pc) {
        case 0x4ab678u: goto label_4ab678;
        case 0x4ab688u: goto label_4ab688;
        case 0x4ab690u: goto label_4ab690;
        default: break;
    }

    ctx->pc = 0x4ab648u;

    // 0x4ab648: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ab648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4ab64c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4ab64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4ab650: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ab650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ab654: 0x3c110100  lui         $s1, 0x100
    ctx->pc = 0x4ab654u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)256 << 16));
    // 0x4ab658: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4ab658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4ab65c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ab65cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab660: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4ab660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4ab664: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ab664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ab668: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4ab668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4ab66c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4AB66Cu;
    {
        const bool branch_taken_0x4ab66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB66Cu;
        // 0x4ab670: 0x3c120059  lui         $s2, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab66c) {
            ctx->pc = 0x4AB6A0u;
            goto label_4ab6a0;
        }
    }
    ctx->pc = 0x4AB674u;
    // 0x4ab674: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4ab674u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4ab678:
    // 0x4ab678: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AB678u;
    {
        const bool branch_taken_0x4ab678 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x4ab678) {
            ctx->pc = 0x4AB690u;
            goto label_4ab690;
        }
    }
    ctx->pc = 0x4AB680u;
    // 0x4ab680: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x4AB680u;
    SET_GPR_U32(ctx, 31, 0x4AB688u);
    ctx->pc = 0x4AB684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AB680u;
    // 0x4ab684: 0x264403a0  addiu       $a0, $s2, 0x3A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x4AB680u, 0x4AB688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AB688u;
label_4ab688:
    // 0x4ab688: 0xc12aec0  jal         func_4ABB00
    ctx->pc = 0x4AB688u;
    SET_GPR_U32(ctx, 31, 0x4AB690u);
    ctx->pc = 0x4AB68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AB688u;
    // 0x4ab68c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ABB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ABB00u, 0x4AB688u, 0x4AB690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AB690u;
label_4ab690:
    // 0x4ab690: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ab690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ab694: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4ab694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4ab698: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4AB698u;
    {
        const bool branch_taken_0x4ab698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AB69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB698u;
        // 0x4ab69c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab698) {
            ctx->pc = 0x4AB678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ab678;
        }
    }
    ctx->pc = 0x4AB6A0u;
label_4ab6a0:
    // 0x4ab6a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4ab6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ab6a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4ab6a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ab6a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4ab6a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ab6ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ab6acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ab6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB6B0u;
        // 0x4ab6b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB6B8u;
    // 0x4ab6b8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4ab6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4ab6bc: 0x0  nop
    ctx->pc = 0x4ab6bcu;
    // NOP
    ctx->pc = 0x4ab6c0u;
}
