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

// Function: sub_001B43A8
// Address: 0x1b43a8 - 0x1b4438
void sub_001B43A8_0x1b43a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B43A8_0x1b43a8");
#endif

    switch (ctx->pc) {
        case 0x1b43e0u: goto label_1b43e0;
        case 0x1b43ecu: goto label_1b43ec;
        case 0x1b440cu: goto label_1b440c;
        default: break;
    }

    ctx->pc = 0x1b43a8u;

    // 0x1b43a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b43a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b43ac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b43acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b43b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b43b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b43b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b43b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b43b8: 0x14a2000e  bne         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B43B8u;
    {
        const bool branch_taken_0x1b43b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B43BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43B8u;
        // 0x1b43bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b43b8) {
            ctx->pc = 0x1B43F4u;
            goto label_1b43f4;
        }
    }
    ctx->pc = 0x1B43C0u;
    // 0x1b43c0: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1b43c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1b43c4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b43c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1b43c8: 0x26100840  addiu       $s0, $s0, 0x840
    ctx->pc = 0x1b43c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
    // 0x1b43cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b43ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b43d0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b43d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b43d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b43d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b43d8: 0xc06c996  jal         func_1B2658
    ctx->pc = 0x1B43D8u;
    SET_GPR_U32(ctx, 31, 0x1B43E0u);
    ctx->pc = 0x1B43DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B43D8u;
    // 0x1b43dc: 0xac4077ac  sw          $zero, 0x77AC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 30636), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2658u, 0x1B43D8u, 0x1B43E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43E0u;
label_1b43e0:
    // 0x1b43e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b43e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b43e4: 0xc06c996  jal         func_1B2658
    ctx->pc = 0x1B43E4u;
    SET_GPR_U32(ctx, 31, 0x1B43ECu);
    ctx->pc = 0x1B43E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B43E4u;
    // 0x1b43e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2658u, 0x1B43E4u, 0x1B43ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43ECu;
label_1b43ec:
    // 0x1b43ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B43ECu;
    {
        const bool branch_taken_0x1b43ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B43F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43ECu;
        // 0x1b43f0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b43ec) {
            ctx->pc = 0x1B4410u;
            goto label_1b4410;
        }
    }
    ctx->pc = 0x1B43F4u;
label_1b43f4:
    // 0x1b43f4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b43f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b43f8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b43f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1b43fc: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x1b43fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x1b4400: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1b4400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b4404: 0xc06c996  jal         func_1B2658
    ctx->pc = 0x1B4404u;
    SET_GPR_U32(ctx, 31, 0x1B440Cu);
    ctx->pc = 0x1B4408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4404u;
    // 0x1b4408: 0xac4077ac  sw          $zero, 0x77AC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 30636), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2658u, 0x1B4404u, 0x1B440Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B440Cu;
label_1b440c:
    // 0x1b440c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b440cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b4410:
    // 0x1b4410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4414: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4414u;
        // 0x1b4418: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B441Cu;
    // 0x1b441c: 0x0  nop
    ctx->pc = 0x1b441cu;
    // NOP
    // 0x1b4420: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1b4420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b4424: 0x0  nop
    ctx->pc = 0x1b4424u;
    // NOP
    // 0x1b4428: 0xac4415e0  sw          $a0, 0x15E0($v0)
    ctx->pc = 0x1b4428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5600), GPR_U32(ctx, 4));
    // 0x1b442c: 0x0  nop
    ctx->pc = 0x1b442cu;
    // NOP
    // 0x1b4430: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1b4430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b4434: 0x0  nop
    ctx->pc = 0x1b4434u;
    // NOP
    ctx->pc = 0x1b4438u;
}
