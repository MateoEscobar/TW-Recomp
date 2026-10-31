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

// Function: sub_003233E0
// Address: 0x3233e0 - 0x323458
void sub_003233E0_0x3233e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003233E0_0x3233e0");
#endif

    switch (ctx->pc) {
        case 0x3233f4u: goto label_3233f4;
        case 0x323410u: goto label_323410;
        default: break;
    }

    ctx->pc = 0x3233e0u;

    // 0x3233e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3233e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3233e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3233e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3233e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3233e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3233ec: 0xc0c8ca6  jal         func_323298
    ctx->pc = 0x3233ECu;
    SET_GPR_U32(ctx, 31, 0x3233F4u);
    ctx->pc = 0x3233F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3233ECu;
    // 0x3233f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323298u, 0x3233ECu, 0x3233F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3233F4u;
label_3233f4:
    // 0x3233f4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3233f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3233f8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3233f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3233fc: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x3233fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x323400: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x323400u;
    {
        const bool branch_taken_0x323400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x323400) {
            ctx->pc = 0x323404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323400u;
            // 0x323404: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323434u;
            goto label_323434;
        }
    }
    ctx->pc = 0x323408u;
    // 0x323408: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x323408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32340c: 0x0  nop
    ctx->pc = 0x32340cu;
    // NOP
label_323410:
    // 0x323410: 0xdca2fff0  ld          $v0, -0x10($a1)
    ctx->pc = 0x323410u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x323414: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x323414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x323418: 0xdca3fff8  ld          $v1, -0x8($a1)
    ctx->pc = 0x323418u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 4294967288)));
    // 0x32341c: 0xe6202b  sltu        $a0, $a3, $a2
    ctx->pc = 0x32341cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x323420: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x323420u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x323424: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x323424u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x323428: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x323428u;
    {
        const bool branch_taken_0x323428 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x32342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323428u;
        // 0x32342c: 0x24a5fff0  addiu       $a1, $a1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323428) {
            ctx->pc = 0x323410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323410;
        }
    }
    ctx->pc = 0x323430u;
    // 0x323430: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x323430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_323434:
    // 0x323434: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x323434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323438: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x323438u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32343c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32343cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323440: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x323440u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x323444: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x323444u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x323448: 0xfce40008  sd          $a0, 0x8($a3)
    ctx->pc = 0x323448u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 4));
    // 0x32344c: 0x3e00008  jr          $ra
    ctx->pc = 0x32344Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32344Cu;
        // 0x323450: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32344Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323454u;
    // 0x323454: 0x0  nop
    ctx->pc = 0x323454u;
    // NOP
    ctx->pc = 0x323458u;
}
