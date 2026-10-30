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

// Function: sub_001F74B8
// Address: 0x1f74b8 - 0x1f7538
void sub_001F74B8_0x1f74b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F74B8_0x1f74b8");
#endif

    switch (ctx->pc) {
        case 0x1f74d4u: goto label_1f74d4;
        case 0x1f74f0u: goto label_1f74f0;
        case 0x1f7500u: goto label_1f7500;
        case 0x1f7518u: goto label_1f7518;
        default: break;
    }

    ctx->pc = 0x1f74b8u;

    // 0x1f74b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f74b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f74bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f74bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f74c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f74c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f74c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f74c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f74c8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1f74c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1f74cc: 0xc080ada  jal         func_202B68
    ctx->pc = 0x1F74CCu;
    SET_GPR_U32(ctx, 31, 0x1F74D4u);
    ctx->pc = 0x1F74D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F74CCu;
    // 0x1f74d0: 0x2484ef80  addiu       $a0, $a0, -0x1080 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B68u, 0x1F74CCu, 0x1F74D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F74D4u;
label_1f74d4:
    // 0x1f74d4: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x1f74d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1f74d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f74d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f74dc: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1f74dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f74e0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F74E0u;
    {
        const bool branch_taken_0x1f74e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F74E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F74E0u;
        // 0x1f74e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f74e0) {
            ctx->pc = 0x1F7508u;
            goto label_1f7508;
        }
    }
    ctx->pc = 0x1F74E8u;
    // 0x1f74e8: 0xc07dcc2  jal         func_1F7308
    ctx->pc = 0x1F74E8u;
    SET_GPR_U32(ctx, 31, 0x1F74F0u);
    ctx->pc = 0x1F74ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F74E8u;
    // 0x1f74ec: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7308u, 0x1F74E8u, 0x1F74F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F74F0u;
label_1f74f0:
    // 0x1f74f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f74f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1f74f4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1f74f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f74f8: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x1F74F8u;
    SET_GPR_U32(ctx, 31, 0x1F7500u);
    ctx->pc = 0x1F74FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F74F8u;
    // 0x1f74fc: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1F74F8u, 0x1F7500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7500u;
label_1f7500:
    // 0x1f7500: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F7500u;
    {
        const bool branch_taken_0x1f7500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7500u;
        // 0x1f7504: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7500) {
            ctx->pc = 0x1F7528u;
            goto label_1f7528;
        }
    }
    ctx->pc = 0x1F7508u;
label_1f7508:
    // 0x1f7508: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f7508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1f750c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1f750cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1f7510: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x1F7510u;
    SET_GPR_U32(ctx, 31, 0x1F7518u);
    ctx->pc = 0x1F7514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7510u;
    // 0x1f7514: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1F7510u, 0x1F7518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7518u;
label_1f7518:
    // 0x1f7518: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x1f7518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1f751c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f751cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7520: 0xac6200c4  sw          $v0, 0xC4($v1)
    ctx->pc = 0x1f7520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 196), GPR_U32(ctx, 2));
    // 0x1f7524: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f7524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f7528:
    // 0x1f7528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f7528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f752c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F752Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F752Cu;
        // 0x1f7530: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F752Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7534u;
    // 0x1f7534: 0x0  nop
    ctx->pc = 0x1f7534u;
    // NOP
    ctx->pc = 0x1f7538u;
}
