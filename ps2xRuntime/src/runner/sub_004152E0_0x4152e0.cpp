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

// Function: sub_004152E0
// Address: 0x4152e0 - 0x415320
void sub_004152E0_0x4152e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004152E0_0x4152e0");
#endif

    switch (ctx->pc) {
        case 0x415304u: goto label_415304;
        default: break;
    }

    ctx->pc = 0x4152e0u;

    // 0x4152e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4152e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4152e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4152e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4152e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4152e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4152ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4152ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4152f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4152f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4152f4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4152F4u;
    {
        const bool branch_taken_0x4152f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4152F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4152F4u;
        // 0x4152f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4152f4) {
            ctx->pc = 0x415304u;
            goto label_415304;
        }
    }
    ctx->pc = 0x4152FCu;
    // 0x4152fc: 0xc13d71e  jal         func_4F5C78
    ctx->pc = 0x4152FCu;
    SET_GPR_U32(ctx, 31, 0x415304u);
    ctx->pc = 0x415300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4152FCu;
    // 0x415300: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5C78u, 0x4152FCu, 0x415304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415304u;
label_415304:
    // 0x415304: 0xa2300068  sb          $s0, 0x68($s1)
    ctx->pc = 0x415304u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 16));
    // 0x415308: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x415308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41530c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41530cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x415310: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x415310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x415314: 0x3e00008  jr          $ra
    ctx->pc = 0x415314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415314u;
        // 0x415318: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41531Cu;
    // 0x41531c: 0x0  nop
    ctx->pc = 0x41531cu;
    // NOP
    ctx->pc = 0x415320u;
}
