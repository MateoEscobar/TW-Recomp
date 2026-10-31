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

// Function: sub_00476380
// Address: 0x476380 - 0x4763f8
void sub_00476380_0x476380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00476380_0x476380");
#endif

    switch (ctx->pc) {
        case 0x4763b8u: goto label_4763b8;
        default: break;
    }

    ctx->pc = 0x476380u;

    // 0x476380: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x476380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x476384: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x476384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x476388: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x476388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x47638c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x47638Cu;
    {
        const bool branch_taken_0x47638c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x476390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47638Cu;
        // 0x476390: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47638c) {
            ctx->pc = 0x4763E4u;
            goto label_4763e4;
        }
    }
    ctx->pc = 0x476394u;
    // 0x476394: 0x8f828910  lw          $v0, -0x76F0($gp)
    ctx->pc = 0x476394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936848)));
    // 0x476398: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x476398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x47639c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x47639cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4763a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4763a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4763a4: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x4763a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4763a8: 0x1120000e  beqz        $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x4763A8u;
    {
        const bool branch_taken_0x4763a8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4763ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4763A8u;
        // 0x4763ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4763a8) {
            ctx->pc = 0x4763E4u;
            goto label_4763e4;
        }
    }
    ctx->pc = 0x4763B0u;
    // 0x4763b0: 0x24470004  addiu       $a3, $v0, 0x4
    ctx->pc = 0x4763b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4763b4: 0x0  nop
    ctx->pc = 0x4763b4u;
    // NOP
label_4763b8:
    // 0x4763b8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4763b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4763bc: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x4763bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x4763c0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4763c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4763c4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x4763c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x4763c8: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x4763c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x4763cc: 0x109282b  sltu        $a1, $t0, $t1
    ctx->pc = 0x4763ccu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x4763d0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4763d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4763d4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x4763d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4763d8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4763d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4763dc: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x4763DCu;
    {
        const bool branch_taken_0x4763dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4763E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4763DCu;
        // 0x4763e0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4763dc) {
            ctx->pc = 0x4763B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4763b8;
        }
    }
    ctx->pc = 0x4763E4u;
label_4763e4:
    // 0x4763e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4763E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4763E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4763E4u;
        // 0x4763e8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4763E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4763ECu;
    // 0x4763ec: 0x0  nop
    ctx->pc = 0x4763ecu;
    // NOP
    // 0x4763f0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4763f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4763f4: 0x0  nop
    ctx->pc = 0x4763f4u;
    // NOP
    ctx->pc = 0x4763f8u;
}
