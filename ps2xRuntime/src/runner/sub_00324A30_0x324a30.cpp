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

// Function: sub_00324A30
// Address: 0x324a30 - 0x324a68
void sub_00324A30_0x324a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324A30_0x324a30");
#endif

    switch (ctx->pc) {
        case 0x324a44u: goto label_324a44;
        case 0x324a54u: goto label_324a54;
        default: break;
    }

    ctx->pc = 0x324a30u;

    // 0x324a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x324a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x324a34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x324a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x324a38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x324a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x324a3c: 0xc0c923c  jal         func_3248F0
    ctx->pc = 0x324A3Cu;
    SET_GPR_U32(ctx, 31, 0x324A44u);
    ctx->pc = 0x324A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324A3Cu;
    // 0x324a40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3248F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3248F0u, 0x324A3Cu, 0x324A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324A44u;
label_324a44:
    // 0x324a44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x324A44u;
    {
        const bool branch_taken_0x324a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A44u;
        // 0x324a48: 0x2602000c  addiu       $v0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324a44) {
            ctx->pc = 0x324A58u;
            goto label_324a58;
        }
    }
    ctx->pc = 0x324A4Cu;
    // 0x324a4c: 0xc0c9256  jal         func_324958
    ctx->pc = 0x324A4Cu;
    SET_GPR_U32(ctx, 31, 0x324A54u);
    ctx->pc = 0x324A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324A4Cu;
    // 0x324a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324958u, 0x324A4Cu, 0x324A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324A54u;
label_324a54:
    // 0x324a54: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x324a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_324a58:
    // 0x324a58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x324a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324a5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x324a5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324a60: 0x3e00008  jr          $ra
    ctx->pc = 0x324A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A60u;
        // 0x324a64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324A68u;
}
