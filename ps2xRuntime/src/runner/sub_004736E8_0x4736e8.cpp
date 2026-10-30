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

// Function: sub_004736E8
// Address: 0x4736e8 - 0x473728
void sub_004736E8_0x4736e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004736E8_0x4736e8");
#endif

    switch (ctx->pc) {
        case 0x473714u: goto label_473714;
        default: break;
    }

    ctx->pc = 0x4736e8u;

    // 0x4736e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4736e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4736ec: 0x8f828524  lw          $v0, -0x7ADC($gp)
    ctx->pc = 0x4736ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935844)));
    // 0x4736f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4736f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4736f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4736f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4736f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4736f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4736fc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4736fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x473700: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x473700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x473704: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x473704u;
    {
        const bool branch_taken_0x473704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x473708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473704u;
        // 0x473708: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473704) {
            ctx->pc = 0x473718u;
            goto label_473718;
        }
    }
    ctx->pc = 0x47370Cu;
    // 0x47370c: 0xc11cbec  jal         func_472FB0
    ctx->pc = 0x47370Cu;
    SET_GPR_U32(ctx, 31, 0x473714u);
    ctx->pc = 0x473710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47370Cu;
    // 0x473710: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x472FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472FB0u, 0x47370Cu, 0x473714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473714u;
label_473714:
    // 0x473714: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x473714u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_473718:
    // 0x473718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x473718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47371c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x47371cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x473720: 0x3e00008  jr          $ra
    ctx->pc = 0x473720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473720u;
        // 0x473724: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x473728u;
}
