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

// Function: sub_00415288
// Address: 0x415288 - 0x4152e0
void sub_00415288_0x415288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00415288_0x415288");
#endif

    switch (ctx->pc) {
        case 0x4152b4u: goto label_4152b4;
        case 0x4152ccu: goto label_4152cc;
        default: break;
    }

    ctx->pc = 0x415288u;

    // 0x415288: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x415288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x41528c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x41528cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x415290: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x415290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x415294: 0x24425df8  addiu       $v0, $v0, 0x5DF8
    ctx->pc = 0x415294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24056));
    // 0x415298: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x415298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41529c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41529cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4152a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4152a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4152a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4152a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4152a8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4152a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4152ac: 0xc0e1294  jal         func_384A50
    ctx->pc = 0x4152ACu;
    SET_GPR_U32(ctx, 31, 0x4152B4u);
    ctx->pc = 0x4152B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4152ACu;
    // 0x4152b0: 0x26040160  addiu       $a0, $s0, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384A50u, 0x4152ACu, 0x4152B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4152B4u;
label_4152b4:
    // 0x4152b4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4152b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4152b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4152b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4152bc: 0x24424b98  addiu       $v0, $v0, 0x4B98
    ctx->pc = 0x4152bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19352));
    // 0x4152c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4152c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4152c4: 0xc104a22  jal         func_412888
    ctx->pc = 0x4152C4u;
    SET_GPR_U32(ctx, 31, 0x4152CCu);
    ctx->pc = 0x4152C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4152C4u;
    // 0x4152c8: 0xae020160  sw          $v0, 0x160($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412888u, 0x4152C4u, 0x4152CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4152CCu;
label_4152cc:
    // 0x4152cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4152ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4152d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4152d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4152d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4152d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4152d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4152D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4152DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4152D8u;
        // 0x4152dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4152D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4152E0u;
}
