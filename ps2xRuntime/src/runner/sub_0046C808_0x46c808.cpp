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

// Function: sub_0046C808
// Address: 0x46c808 - 0x46c848
void sub_0046C808_0x46c808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046C808_0x46c808");
#endif

    switch (ctx->pc) {
        case 0x46c830u: goto label_46c830;
        default: break;
    }

    ctx->pc = 0x46c808u;

    // 0x46c808: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x46c808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x46c80c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x46c80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x46c810: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46c810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46c814: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x46c814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c818: 0xe60c0014  swc1        $f12, 0x14($s0)
    ctx->pc = 0x46c818u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x46c81c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x46c81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x46c820: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x46C820u;
    {
        const bool branch_taken_0x46c820 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C820u;
        // 0x46c824: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c820) {
            ctx->pc = 0x46C834u;
            goto label_46c834;
        }
    }
    ctx->pc = 0x46C828u;
    // 0x46c828: 0xc12105a  jal         func_484168
    ctx->pc = 0x46C828u;
    SET_GPR_U32(ctx, 31, 0x46C830u);
    ctx->pc = 0x484168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484168u, 0x46C828u, 0x46C830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C830u;
label_46c830:
    // 0x46c830: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x46c830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46c834:
    // 0x46c834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46c834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46c838: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x46c838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c83c: 0x3e00008  jr          $ra
    ctx->pc = 0x46C83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46C840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C83Cu;
        // 0x46c840: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46C844u;
    // 0x46c844: 0x0  nop
    ctx->pc = 0x46c844u;
    // NOP
    ctx->pc = 0x46c848u;
}
