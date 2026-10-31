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

// Function: sub_00319290
// Address: 0x319290 - 0x3192f0
void sub_00319290_0x319290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319290_0x319290");
#endif

    switch (ctx->pc) {
        case 0x3192a8u: goto label_3192a8;
        case 0x3192c8u: goto label_3192c8;
        case 0x3192d4u: goto label_3192d4;
        case 0x3192e0u: goto label_3192e0;
        default: break;
    }

    ctx->pc = 0x319290u;

    // 0x319290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x319290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x319294: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x319294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x319298: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x319298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31929c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31929cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3192a0: 0xc05959e  jal         func_165678
    ctx->pc = 0x3192A0u;
    SET_GPR_U32(ctx, 31, 0x3192A8u);
    ctx->pc = 0x3192A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3192A0u;
    // 0x3192a4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x3192A0u, 0x3192A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3192A8u;
label_3192a8:
    // 0x3192a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3192a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3192ac: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3192ACu;
    {
        const bool branch_taken_0x3192ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3192ac) {
            ctx->pc = 0x3192B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3192ACu;
            // 0x3192b0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3192D8u;
            goto label_3192d8;
        }
    }
    ctx->pc = 0x3192B4u;
    // 0x3192b4: 0x86020038  lh          $v0, 0x38($s0)
    ctx->pc = 0x3192b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3192b8: 0x4420007  bltzl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3192B8u;
    {
        const bool branch_taken_0x3192b8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3192b8) {
            ctx->pc = 0x3192BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3192B8u;
            // 0x3192bc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3192D8u;
            goto label_3192d8;
        }
    }
    ctx->pc = 0x3192C0u;
    // 0x3192c0: 0xc08750a  jal         func_21D428
    ctx->pc = 0x3192C0u;
    SET_GPR_U32(ctx, 31, 0x3192C8u);
    ctx->pc = 0x3192C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3192C0u;
    // 0x3192c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x3192C0u, 0x3192C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3192C8u;
label_3192c8:
    // 0x3192c8: 0x86050038  lh          $a1, 0x38($s0)
    ctx->pc = 0x3192c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3192cc: 0xc0a576c  jal         func_295DB0
    ctx->pc = 0x3192CCu;
    SET_GPR_U32(ctx, 31, 0x3192D4u);
    ctx->pc = 0x3192D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3192CCu;
    // 0x3192d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DB0u, 0x3192CCu, 0x3192D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3192D4u;
label_3192d4:
    // 0x3192d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3192d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3192d8:
    // 0x3192d8: 0xc059646  jal         func_165918
    ctx->pc = 0x3192D8u;
    SET_GPR_U32(ctx, 31, 0x3192E0u);
    ctx->pc = 0x3192DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3192D8u;
    // 0x3192dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165918u, 0x3192D8u, 0x3192E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3192E0u;
label_3192e0:
    // 0x3192e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3192e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3192e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3192e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3192e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3192E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3192ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3192E8u;
        // 0x3192ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3192E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3192F0u;
}
