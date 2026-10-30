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

// Function: sub_00123428
// Address: 0x123428 - 0x1234e0
void sub_00123428_0x123428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123428_0x123428");
#endif

    switch (ctx->pc) {
        case 0x123458u: goto label_123458;
        case 0x123460u: goto label_123460;
        case 0x12347cu: goto label_12347c;
        case 0x123484u: goto label_123484;
        case 0x123498u: goto label_123498;
        case 0x1234a8u: goto label_1234a8;
        case 0x1234b0u: goto label_1234b0;
        default: break;
    }

    ctx->pc = 0x123428u;

    // 0x123428: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x123428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12342c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x12342cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x123430: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x123430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x123434: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x123434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123438: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x123438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x12343c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x12343cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x123440: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x123440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x123444: 0x3c13006f  lui         $s3, 0x6F
    ctx->pc = 0x123444u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
    // 0x123448: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x123448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x12344c: 0x3c14005e  lui         $s4, 0x5E
    ctx->pc = 0x12344cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)94 << 16));
    // 0x123450: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x123450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x123454: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x123454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_123458:
    // 0x123458: 0xc136b7c  jal         func_4DADF0
    ctx->pc = 0x123458u;
    SET_GPR_U32(ctx, 31, 0x123460u);
    ctx->pc = 0x12345Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123458u;
    // 0x12345c: 0x26849198  addiu       $a0, $s4, -0x6E68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294939032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DADF0u, 0x123458u, 0x123460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123460u;
label_123460:
    // 0x123460: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x123460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x123464: 0x8e65bd30  lw          $a1, -0x42D0($s3)
    ctx->pc = 0x123464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950192)));
    // 0x123468: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x123468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12346c: 0x10650010  beq         $v1, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x12346Cu;
    {
        const bool branch_taken_0x12346c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x123470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12346Cu;
        // 0x123470: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12346c) {
            ctx->pc = 0x1234B0u;
            goto label_1234b0;
        }
    }
    ctx->pc = 0x123474u;
    // 0x123474: 0xc0e4060  jal         func_390180
    ctx->pc = 0x123474u;
    SET_GPR_U32(ctx, 31, 0x12347Cu);
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x123474u, 0x12347Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12347Cu;
label_12347c:
    // 0x12347c: 0xc0e896e  jal         func_3A25B8
    ctx->pc = 0x12347Cu;
    SET_GPR_U32(ctx, 31, 0x123484u);
    ctx->pc = 0x123480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12347Cu;
    // 0x123480: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x12347Cu, 0x123484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123484u;
label_123484:
    // 0x123484: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x123484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123488: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x123488u;
    {
        const bool branch_taken_0x123488 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123488u;
        // 0x12348c: 0x2e220004  sltiu       $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123488) {
            ctx->pc = 0x1234B4u;
            goto label_1234b4;
        }
    }
    ctx->pc = 0x123490u;
    // 0x123490: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x123490u;
    SET_GPR_U32(ctx, 31, 0x123498u);
    ctx->pc = 0x123494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123490u;
    // 0x123494: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x123490u, 0x123498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123498u;
label_123498:
    // 0x123498: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x123498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x12349c: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x12349cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1234a0: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x1234A0u;
    SET_GPR_U32(ctx, 31, 0x1234A8u);
    ctx->pc = 0x1234A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1234A0u;
    // 0x1234a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x1234A0u, 0x1234A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1234A8u;
label_1234a8:
    // 0x1234a8: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x1234A8u;
    SET_GPR_U32(ctx, 31, 0x1234B0u);
    ctx->pc = 0x1234ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1234A8u;
    // 0x1234ac: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x1234A8u, 0x1234B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1234B0u;
label_1234b0:
    // 0x1234b0: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x1234b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1234b4:
    // 0x1234b4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1234B4u;
    {
        const bool branch_taken_0x1234b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1234B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1234B4u;
        // 0x1234b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1234b4) {
            ctx->pc = 0x123458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123458;
        }
    }
    ctx->pc = 0x1234BCu;
    // 0x1234bc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1234bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1234c0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1234c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1234c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1234c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1234c8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1234c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1234cc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1234ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1234d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1234d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1234d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1234D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1234D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1234D4u;
        // 0x1234d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1234D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1234DCu;
    // 0x1234dc: 0x0  nop
    ctx->pc = 0x1234dcu;
    // NOP
    ctx->pc = 0x1234e0u;
}
