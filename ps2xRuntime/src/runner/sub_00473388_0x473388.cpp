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

// Function: sub_00473388
// Address: 0x473388 - 0x473418
void sub_00473388_0x473388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473388_0x473388");
#endif

    switch (ctx->pc) {
        case 0x4733c0u: goto label_4733c0;
        case 0x4733e8u: goto label_4733e8;
        default: break;
    }

    ctx->pc = 0x473388u;

    // 0x473388: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x473388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x47338c: 0x8f838900  lw          $v1, -0x7700($gp)
    ctx->pc = 0x47338cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936832)));
    // 0x473390: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x473390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x473394: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x473394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x473398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x473398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x47339c: 0x2450ad18  addiu       $s0, $v0, -0x52E8
    ctx->pc = 0x47339cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x4733a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4733a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4733a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4733a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4733a8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4733a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4733ac: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4733acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4733b0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4733B0u;
    {
        const bool branch_taken_0x4733b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4733B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4733B0u;
        // 0x4733b4: 0x8f828900  lw          $v0, -0x7700($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4733b0) {
            ctx->pc = 0x4733D0u;
            goto label_4733d0;
        }
    }
    ctx->pc = 0x4733B8u;
    // 0x4733b8: 0xc11f74a  jal         func_47DD28
    ctx->pc = 0x4733B8u;
    SET_GPR_U32(ctx, 31, 0x4733C0u);
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x4733B8u, 0x4733C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4733C0u;
label_4733c0:
    // 0x4733c0: 0x8f838900  lw          $v1, -0x7700($gp)
    ctx->pc = 0x4733c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936832)));
    // 0x4733c4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4733c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4733c8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x4733c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x4733cc: 0x8f828900  lw          $v0, -0x7700($gp)
    ctx->pc = 0x4733ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936832)));
label_4733d0:
    // 0x4733d0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4733d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4733d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4733d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4733d8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4733D8u;
    {
        const bool branch_taken_0x4733d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4733d8) {
            ctx->pc = 0x4733F4u;
            goto label_4733f4;
        }
    }
    ctx->pc = 0x4733E0u;
    // 0x4733e0: 0xc11f74a  jal         func_47DD28
    ctx->pc = 0x4733E0u;
    SET_GPR_U32(ctx, 31, 0x4733E8u);
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x4733E0u, 0x4733E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4733E8u;
label_4733e8:
    // 0x4733e8: 0x8f838900  lw          $v1, -0x7700($gp)
    ctx->pc = 0x4733e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936832)));
    // 0x4733ec: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4733ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4733f0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4733f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_4733f4:
    // 0x4733f4: 0x8f838904  lw          $v1, -0x76FC($gp)
    ctx->pc = 0x4733f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936836)));
    // 0x4733f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4733f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4733fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4733fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x473400: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x473400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x473404: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x473404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x473408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x473408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47340c: 0xaf838904  sw          $v1, -0x76FC($gp)
    ctx->pc = 0x47340cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936836), GPR_U32(ctx, 3));
    // 0x473410: 0x3e00008  jr          $ra
    ctx->pc = 0x473410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473410u;
        // 0x473414: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x473418u;
}
