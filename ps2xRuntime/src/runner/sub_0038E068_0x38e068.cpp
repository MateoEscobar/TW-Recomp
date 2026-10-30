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

// Function: sub_0038E068
// Address: 0x38e068 - 0x38e098
void sub_0038E068_0x38e068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E068_0x38e068");
#endif

    switch (ctx->pc) {
        case 0x38e07cu: goto label_38e07c;
        case 0x38e08cu: goto label_38e08c;
        default: break;
    }

    ctx->pc = 0x38e068u;

    // 0x38e068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38e068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38e06c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x38e06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x38e070: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38e070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38e074: 0xc0e4088  jal         func_390220
    ctx->pc = 0x38E074u;
    SET_GPR_U32(ctx, 31, 0x38E07Cu);
    ctx->pc = 0x38E078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E074u;
    // 0x38e078: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390220u, 0x38E074u, 0x38E07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E07Cu;
label_38e07c:
    // 0x38e07c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38E07Cu;
    {
        const bool branch_taken_0x38e07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E07Cu;
        // 0x38e080: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e07c) {
            ctx->pc = 0x38E090u;
            goto label_38e090;
        }
    }
    ctx->pc = 0x38E084u;
    // 0x38e084: 0xc0e1d7a  jal         func_3875E8
    ctx->pc = 0x38E084u;
    SET_GPR_U32(ctx, 31, 0x38E08Cu);
    ctx->pc = 0x38E088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E084u;
    // 0x38e088: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3875E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3875E8u, 0x38E084u, 0x38E08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E08Cu;
label_38e08c:
    // 0x38e08c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38e08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38e090:
    // 0x38e090: 0x3e00008  jr          $ra
    ctx->pc = 0x38E090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E090u;
        // 0x38e094: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E098u;
}
