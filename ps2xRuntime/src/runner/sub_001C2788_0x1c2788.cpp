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

// Function: sub_001C2788
// Address: 0x1c2788 - 0x1c27e0
void sub_001C2788_0x1c2788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2788_0x1c2788");
#endif

    switch (ctx->pc) {
        case 0x1c27a8u: goto label_1c27a8;
        case 0x1c27b8u: goto label_1c27b8;
        default: break;
    }

    ctx->pc = 0x1c2788u;

    // 0x1c2788: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c278c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c278cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c2790: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c2790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2794: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c2794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c2798: 0x26110070  addiu       $s1, $s0, 0x70
    ctx->pc = 0x1c2798u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1c279c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c279cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c27a0: 0xc06d850  jal         func_1B6140
    ctx->pc = 0x1C27A0u;
    SET_GPR_U32(ctx, 31, 0x1C27A8u);
    ctx->pc = 0x1C27A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C27A0u;
    // 0x1c27a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6140u, 0x1C27A0u, 0x1C27A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C27A8u;
label_1c27a8:
    // 0x1c27a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C27A8u;
    {
        const bool branch_taken_0x1c27a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C27ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C27A8u;
        // 0x1c27ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c27a8) {
            ctx->pc = 0x1C27BCu;
            goto label_1c27bc;
        }
    }
    ctx->pc = 0x1C27B0u;
    // 0x1c27b0: 0xc06d81e  jal         func_1B6078
    ctx->pc = 0x1C27B0u;
    SET_GPR_U32(ctx, 31, 0x1C27B8u);
    ctx->pc = 0x1C27B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C27B0u;
    // 0x1c27b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6078u, 0x1C27B0u, 0x1C27B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C27B8u;
label_1c27b8:
    // 0x1c27b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c27b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c27bc:
    // 0x1c27bc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1c27bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x1c27c0: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x1c27c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
    // 0x1c27c4: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x1c27c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x1c27c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c27c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c27cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c27ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c27d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c27d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c27d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C27D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C27D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C27D4u;
        // 0x1c27d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C27D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C27DCu;
    // 0x1c27dc: 0x0  nop
    ctx->pc = 0x1c27dcu;
    // NOP
    ctx->pc = 0x1c27e0u;
}
