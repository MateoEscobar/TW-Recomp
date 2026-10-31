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

// Function: sub_001544C0
// Address: 0x1544c0 - 0x154530
void sub_001544C0_0x1544c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001544C0_0x1544c0");
#endif

    switch (ctx->pc) {
        case 0x1544f8u: goto label_1544f8;
        case 0x15450cu: goto label_15450c;
        default: break;
    }

    ctx->pc = 0x1544c0u;

    // 0x1544c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1544c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1544c4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1544c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1544c8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1544c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1544cc: 0x244282b8  addiu       $v0, $v0, -0x7D48
    ctx->pc = 0x1544ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935224));
    // 0x1544d0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1544d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1544d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1544d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1544d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1544d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1544dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1544dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1544e0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1544e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1544e4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1544e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1544e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1544e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1544ec: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1544ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1544f0: 0xc05514c  jal         func_154530
    ctx->pc = 0x1544F0u;
    SET_GPR_U32(ctx, 31, 0x1544F8u);
    ctx->pc = 0x1544F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1544F0u;
    // 0x1544f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154530u, 0x1544F0u, 0x1544F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1544F8u;
label_1544f8:
    // 0x1544f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1544f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1544fc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1544fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154500: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x154500u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154504: 0xc055154  jal         func_154550
    ctx->pc = 0x154504u;
    SET_GPR_U32(ctx, 31, 0x15450Cu);
    ctx->pc = 0x154508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154504u;
    // 0x154508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154550u, 0x154504u, 0x15450Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15450Cu;
label_15450c:
    // 0x15450c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15450cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154510: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x154510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x154514: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x154514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x154518: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x154518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15451c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x15451cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154524: 0x3e00008  jr          $ra
    ctx->pc = 0x154524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154524u;
        // 0x154528: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15452Cu;
    // 0x15452c: 0x0  nop
    ctx->pc = 0x15452cu;
    // NOP
    ctx->pc = 0x154530u;
}
