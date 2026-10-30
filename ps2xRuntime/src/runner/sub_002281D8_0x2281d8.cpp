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

// Function: sub_002281D8
// Address: 0x2281d8 - 0x228228
void sub_002281D8_0x2281d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002281D8_0x2281d8");
#endif

    switch (ctx->pc) {
        case 0x2281f8u: goto label_2281f8;
        case 0x228208u: goto label_228208;
        default: break;
    }

    ctx->pc = 0x2281d8u;

    // 0x2281d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2281d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2281dc: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x2281dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2281e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2281e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2281e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2281e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2281e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2281e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2281ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2281ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2281f0: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x2281F0u;
    SET_GPR_U32(ctx, 31, 0x2281F8u);
    ctx->pc = 0x2281F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2281F0u;
    // 0x2281f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2281F0u, 0x2281F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2281F8u;
label_2281f8:
    // 0x2281f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2281F8u;
    {
        const bool branch_taken_0x2281f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2281FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2281F8u;
        // 0x2281fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2281f8) {
            ctx->pc = 0x22820Cu;
            goto label_22820c;
        }
    }
    ctx->pc = 0x228200u;
    // 0x228200: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x228200u;
    SET_GPR_U32(ctx, 31, 0x228208u);
    ctx->pc = 0x228204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228200u;
    // 0x228204: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x228200u, 0x228208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228208u;
label_228208:
    // 0x228208: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x228208u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_22820c:
    // 0x22820c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22820cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228210: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x228210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228214: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x228214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22821c: 0x3e00008  jr          $ra
    ctx->pc = 0x22821Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22821Cu;
        // 0x228220: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22821Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228224u;
    // 0x228224: 0x0  nop
    ctx->pc = 0x228224u;
    // NOP
    ctx->pc = 0x228228u;
}
