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

// Function: sub_003245A8
// Address: 0x3245a8 - 0x3245f8
void sub_003245A8_0x3245a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003245A8_0x3245a8");
#endif

    switch (ctx->pc) {
        case 0x3245ccu: goto label_3245cc;
        case 0x3245e0u: goto label_3245e0;
        default: break;
    }

    ctx->pc = 0x3245a8u;

    // 0x3245a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3245a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3245ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3245acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3245b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3245b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3245b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3245b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3245b8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3245b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3245bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3245bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3245c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3245c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3245c4: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x3245C4u;
    SET_GPR_U32(ctx, 31, 0x3245CCu);
    ctx->pc = 0x3245C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3245C4u;
    // 0x3245c8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x3245C4u, 0x3245CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3245CCu;
label_3245cc:
    // 0x3245cc: 0x10520004  beq         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3245CCu;
    {
        const bool branch_taken_0x3245cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x3245D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3245CCu;
        // 0x3245d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3245cc) {
            ctx->pc = 0x3245E0u;
            goto label_3245e0;
        }
    }
    ctx->pc = 0x3245D4u;
    // 0x3245d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3245d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3245d8: 0xc0c9130  jal         func_3244C0
    ctx->pc = 0x3245D8u;
    SET_GPR_U32(ctx, 31, 0x3245E0u);
    ctx->pc = 0x3245DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3245D8u;
    // 0x3245dc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3244C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3244C0u, 0x3245D8u, 0x3245E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3245E0u;
label_3245e0:
    // 0x3245e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3245e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3245e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3245e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3245e8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3245e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3245ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3245ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3245f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3245F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3245F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3245F0u;
        // 0x3245f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3245F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3245F8u;
}
