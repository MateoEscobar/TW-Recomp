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

// Function: sub_001B4328
// Address: 0x1b4328 - 0x1b43a8
void sub_001B4328_0x1b4328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4328_0x1b4328");
#endif

    switch (ctx->pc) {
        case 0x1b4364u: goto label_1b4364;
        case 0x1b4370u: goto label_1b4370;
        case 0x1b4394u: goto label_1b4394;
        default: break;
    }

    ctx->pc = 0x1b4328u;

    // 0x1b4328: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b4328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b432c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b432cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4330: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b4330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b4334: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b4334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b4338: 0x14a2000f  bne         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B4338u;
    {
        const bool branch_taken_0x1b4338 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4338u;
        // 0x1b433c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4338) {
            ctx->pc = 0x1B4378u;
            goto label_1b4378;
        }
    }
    ctx->pc = 0x1B4340u;
    // 0x1b4340: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1b4340u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1b4344: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b4344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1b4348: 0x26100840  addiu       $s0, $s0, 0x840
    ctx->pc = 0x1b4348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
    // 0x1b434c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b434cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4350: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b4350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b4354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4358: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b435c: 0xc06c984  jal         func_1B2610
    ctx->pc = 0x1B435Cu;
    SET_GPR_U32(ctx, 31, 0x1B4364u);
    ctx->pc = 0x1B4360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B435Cu;
    // 0x1b4360: 0xac4377ac  sw          $v1, 0x77AC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 30636), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2610u, 0x1B435Cu, 0x1B4364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4364u;
label_1b4364:
    // 0x1b4364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4368: 0xc06c984  jal         func_1B2610
    ctx->pc = 0x1B4368u;
    SET_GPR_U32(ctx, 31, 0x1B4370u);
    ctx->pc = 0x1B436Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4368u;
    // 0x1b436c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2610u, 0x1B4368u, 0x1B4370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4370u;
label_1b4370:
    // 0x1b4370: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B4370u;
    {
        const bool branch_taken_0x1b4370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4370u;
        // 0x1b4374: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4370) {
            ctx->pc = 0x1B4398u;
            goto label_1b4398;
        }
    }
    ctx->pc = 0x1B4378u;
label_1b4378:
    // 0x1b4378: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b4378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b437c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b437cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1b4380: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x1b4380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x1b4384: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b4384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4388: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1b4388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b438c: 0xc06c984  jal         func_1B2610
    ctx->pc = 0x1B438Cu;
    SET_GPR_U32(ctx, 31, 0x1B4394u);
    ctx->pc = 0x1B4390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B438Cu;
    // 0x1b4390: 0xac4377ac  sw          $v1, 0x77AC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 30636), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2610u, 0x1B438Cu, 0x1B4394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4394u;
label_1b4394:
    // 0x1b4394: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b4394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b4398:
    // 0x1b4398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b439c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B439Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B43A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B439Cu;
        // 0x1b43a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B439Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B43A4u;
    // 0x1b43a4: 0x0  nop
    ctx->pc = 0x1b43a4u;
    // NOP
    ctx->pc = 0x1b43a8u;
}
