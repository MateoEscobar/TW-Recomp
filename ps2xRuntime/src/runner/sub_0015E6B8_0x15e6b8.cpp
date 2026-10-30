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

// Function: sub_0015E6B8
// Address: 0x15e6b8 - 0x15e718
void sub_0015E6B8_0x15e6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E6B8_0x15e6b8");
#endif

    switch (ctx->pc) {
        case 0x15e6d8u: goto label_15e6d8;
        case 0x15e6e0u: goto label_15e6e0;
        case 0x15e6e8u: goto label_15e6e8;
        case 0x15e6f8u: goto label_15e6f8;
        default: break;
    }

    ctx->pc = 0x15e6b8u;

    // 0x15e6b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15e6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15e6bc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15e6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x15e6c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15e6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15e6c4: 0x8c62c784  lw          $v0, -0x387C($v1)
    ctx->pc = 0x15e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50C784u));
    // 0x15e6c8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x15e6c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e6cc: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15E6CCu;
    {
        const bool branch_taken_0x15e6cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x15E6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6CCu;
        // 0x15e6d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e6cc) {
            ctx->pc = 0x15E704u;
            goto label_15e704;
        }
    }
    ctx->pc = 0x15E6D4u;
    // 0x15e6d4: 0x0  nop
    ctx->pc = 0x15e6d4u;
    // NOP
label_15e6d8:
    // 0x15e6d8: 0xc0579c6  jal         func_15E718
    ctx->pc = 0x15E6D8u;
    SET_GPR_U32(ctx, 31, 0x15E6E0u);
    ctx->pc = 0x15E718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E718u, 0x15E6D8u, 0x15E6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E6E0u;
label_15e6e0:
    // 0x15e6e0: 0xc055840  jal         func_156100
    ctx->pc = 0x15E6E0u;
    SET_GPR_U32(ctx, 31, 0x15E6E8u);
    ctx->pc = 0x15E6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E6E0u;
    // 0x15e6e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156100u, 0x15E6E0u, 0x15E6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E6E8u;
label_15e6e8:
    // 0x15e6e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15E6E8u;
    {
        const bool branch_taken_0x15e6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6E8u;
        // 0x15e6ec: 0x8e02c784  lw          $v0, -0x387C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952836)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e6e8) {
            ctx->pc = 0x15E6FCu;
            goto label_15e6fc;
        }
    }
    ctx->pc = 0x15E6F0u;
    // 0x15e6f0: 0xc057994  jal         func_15E650
    ctx->pc = 0x15E6F0u;
    SET_GPR_U32(ctx, 31, 0x15E6F8u);
    ctx->pc = 0x15E650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E650u, 0x15E6F0u, 0x15E6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E6F8u;
label_15e6f8:
    // 0x15e6f8: 0x8e02c784  lw          $v0, -0x387C($s0)
    ctx->pc = 0x15e6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952836)));
label_15e6fc:
    // 0x15e6fc: 0x441fff6  bgez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x15E6FCu;
    {
        const bool branch_taken_0x15e6fc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x15e6fc) {
            ctx->pc = 0x15E6D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15e6d8;
        }
    }
    ctx->pc = 0x15E704u;
label_15e704:
    // 0x15e704: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15e704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15e708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e70c: 0x3e00008  jr          $ra
    ctx->pc = 0x15E70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E70Cu;
        // 0x15e710: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E714u;
    // 0x15e714: 0x0  nop
    ctx->pc = 0x15e714u;
    // NOP
    ctx->pc = 0x15e718u;
}
