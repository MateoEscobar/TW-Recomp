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

// Function: sub_00354768
// Address: 0x354768 - 0x3547e8
void sub_00354768_0x354768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354768_0x354768");
#endif

    switch (ctx->pc) {
        case 0x354788u: goto label_354788;
        case 0x35479cu: goto label_35479c;
        case 0x3547b4u: goto label_3547b4;
        default: break;
    }

    ctx->pc = 0x354768u;

    // 0x354768: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x354768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35476c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35476cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x354770: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x354770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x354774: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x354774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x354778: 0x2450ba18  addiu       $s0, $v0, -0x45E8
    ctx->pc = 0x354778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949400));
    // 0x35477c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35477cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x354780: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x354780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354784: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x354784u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6EBA3Cu));
label_354788:
    // 0x354788: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x354788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x35478c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35478Cu;
    {
        const bool branch_taken_0x35478c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35478Cu;
        // 0x354790: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35478c) {
            ctx->pc = 0x3547A0u;
            goto label_3547a0;
        }
    }
    ctx->pc = 0x354794u;
    // 0x354794: 0xc0e8350  jal         func_3A0D40
    ctx->pc = 0x354794u;
    SET_GPR_U32(ctx, 31, 0x35479Cu);
    ctx->pc = 0x3A0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0D40u, 0x354794u, 0x35479Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35479Cu;
label_35479c:
    // 0x35479c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x35479cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_3547a0:
    // 0x3547a0: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x3547a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x3547a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3547a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3547a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3547a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3547ac: 0xc0d4768  jal         func_351DA0
    ctx->pc = 0x3547ACu;
    SET_GPR_U32(ctx, 31, 0x3547B4u);
    ctx->pc = 0x3547B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3547ACu;
    // 0x3547b0: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351DA0u, 0x3547ACu, 0x3547B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3547B4u;
label_3547b4:
    // 0x3547b4: 0x2e22000c  sltiu       $v0, $s1, 0xC
    ctx->pc = 0x3547b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x3547b8: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x3547B8u;
    {
        const bool branch_taken_0x3547b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3547b8) {
            ctx->pc = 0x3547BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3547B8u;
            // 0x3547bc: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_354788;
        }
    }
    ctx->pc = 0x3547C0u;
    // 0x3547c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3547c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3547c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3547c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3547c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3547c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3547cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3547CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3547D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3547CCu;
        // 0x3547d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3547CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3547D4u;
    // 0x3547d4: 0x0  nop
    ctx->pc = 0x3547d4u;
    // NOP
    // 0x3547d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3547d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3547dc: 0x0  nop
    ctx->pc = 0x3547dcu;
    // NOP
    // 0x3547e0: 0x27bd0340  addiu       $sp, $sp, 0x340
    ctx->pc = 0x3547e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x3547e4: 0x0  nop
    ctx->pc = 0x3547e4u;
    // NOP
    ctx->pc = 0x3547e8u;
}
