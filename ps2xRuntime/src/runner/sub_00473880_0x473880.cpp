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

// Function: sub_00473880
// Address: 0x473880 - 0x4738c8
void sub_00473880_0x473880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473880_0x473880");
#endif

    switch (ctx->pc) {
        case 0x4738b4u: goto label_4738b4;
        default: break;
    }

    ctx->pc = 0x473880u;

    // 0x473880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x473880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x473884: 0x8f828524  lw          $v0, -0x7ADC($gp)
    ctx->pc = 0x473884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935844)));
    // 0x473888: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x473888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x47388c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47388cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x473890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x473894: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x473894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x473898: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x473898u;
    {
        const bool branch_taken_0x473898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473898u;
        // 0x47389c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473898) {
            ctx->pc = 0x4738B4u;
            goto label_4738b4;
        }
    }
    ctx->pc = 0x4738A0u;
    // 0x4738a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4738a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4738a4: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4738A4u;
    {
        const bool branch_taken_0x4738a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x4738A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4738A4u;
        // 0x4738a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4738a4) {
            ctx->pc = 0x4738B8u;
            goto label_4738b8;
        }
    }
    ctx->pc = 0x4738ACu;
    // 0x4738ac: 0xc11cc14  jal         func_473050
    ctx->pc = 0x4738ACu;
    SET_GPR_U32(ctx, 31, 0x4738B4u);
    ctx->pc = 0x4738B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4738ACu;
    // 0x4738b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x473050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x473050u, 0x4738ACu, 0x4738B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4738B4u;
label_4738b4:
    // 0x4738b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4738b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4738b8:
    // 0x4738b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4738b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4738bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4738bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4738c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4738C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4738C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4738C0u;
        // 0x4738c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4738C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4738C8u;
}
