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

// Function: sub_0030E508
// Address: 0x30e508 - 0x30e540
void sub_0030E508_0x30e508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E508_0x30e508");
#endif

    switch (ctx->pc) {
        case 0x30e51cu: goto label_30e51c;
        case 0x30e524u: goto label_30e524;
        case 0x30e52cu: goto label_30e52c;
        default: break;
    }

    ctx->pc = 0x30e508u;

    // 0x30e508: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30e508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30e50c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30e50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30e510: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30e510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30e514: 0xc0c384c  jal         func_30E130
    ctx->pc = 0x30E514u;
    SET_GPR_U32(ctx, 31, 0x30E51Cu);
    ctx->pc = 0x30E518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E514u;
    // 0x30e518: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E130u, 0x30E514u, 0x30E51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E51Cu;
label_30e51c:
    // 0x30e51c: 0xc05a53a  jal         func_1694E8
    ctx->pc = 0x30E51Cu;
    SET_GPR_U32(ctx, 31, 0x30E524u);
    ctx->pc = 0x30E520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E51Cu;
    // 0x30e520: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1694E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1694E8u, 0x30E51Cu, 0x30E524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E524u;
label_30e524:
    // 0x30e524: 0xc05a55c  jal         func_169570
    ctx->pc = 0x30E524u;
    SET_GPR_U32(ctx, 31, 0x30E52Cu);
    ctx->pc = 0x30E528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E524u;
    // 0x30e528: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169570u, 0x30E524u, 0x30E52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E52Cu;
label_30e52c:
    // 0x30e52c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30e52cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30e530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30e530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30e534: 0x3e00008  jr          $ra
    ctx->pc = 0x30E534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E534u;
        // 0x30e538: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E53Cu;
    // 0x30e53c: 0x0  nop
    ctx->pc = 0x30e53cu;
    // NOP
    ctx->pc = 0x30e540u;
}
