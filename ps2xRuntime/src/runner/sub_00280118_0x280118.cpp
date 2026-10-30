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

// Function: sub_00280118
// Address: 0x280118 - 0x280158
void sub_00280118_0x280118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280118_0x280118");
#endif

    switch (ctx->pc) {
        case 0x280130u: goto label_280130;
        case 0x280148u: goto label_280148;
        default: break;
    }

    ctx->pc = 0x280118u;

    // 0x280118: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x280118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28011c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28011cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280120: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x280120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x280124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280128: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x280128u;
    SET_GPR_U32(ctx, 31, 0x280130u);
    ctx->pc = 0x28012Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280128u;
    // 0x28012c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x280128u, 0x280130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280130u;
label_280130:
    // 0x280130: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x280130u;
    {
        const bool branch_taken_0x280130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280130u;
        // 0x280134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280130) {
            ctx->pc = 0x280148u;
            goto label_280148;
        }
    }
    ctx->pc = 0x280138u;
    // 0x280138: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x280138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x28013c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x28013cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x280140: 0xc089988  jal         func_226620
    ctx->pc = 0x280140u;
    SET_GPR_U32(ctx, 31, 0x280148u);
    ctx->pc = 0x280144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280140u;
    // 0x280144: 0xa44000bc  sh          $zero, 0xBC($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 188), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x280140u, 0x280148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280148u;
label_280148:
    // 0x280148: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x280148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28014c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28014cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280150: 0x3e00008  jr          $ra
    ctx->pc = 0x280150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280150u;
        // 0x280154: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280158u;
}
