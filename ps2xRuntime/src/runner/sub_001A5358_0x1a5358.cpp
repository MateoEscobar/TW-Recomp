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

// Function: sub_001A5358
// Address: 0x1a5358 - 0x1a53c0
void sub_001A5358_0x1a5358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5358_0x1a5358");
#endif

    switch (ctx->pc) {
        case 0x1a5380u: goto label_1a5380;
        default: break;
    }

    ctx->pc = 0x1a5358u;

    // 0x1a5358: 0x8c840350  lw          $a0, 0x350($a0)
    ctx->pc = 0x1a5358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 848)));
    // 0x1a535c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a535cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a5360: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a5360u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5364: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a5364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a5368: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a5368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a536c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a536cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1a5370: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a5370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a5374: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A5374u;
    {
        const bool branch_taken_0x1a5374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A5378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5374u;
        // 0x1a5378: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5374) {
            ctx->pc = 0x1A53B0u;
            goto label_1a53b0;
        }
    }
    ctx->pc = 0x1A537Cu;
    // 0x1a537c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1a537cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5380:
    // 0x1a5380: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a5380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5384: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x1a5384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1a5388: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1a5388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a538c: 0x8c4401f0  lw          $a0, 0x1F0($v0)
    ctx->pc = 0x1a538cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 496)));
    // 0x1a5390: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1a5390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x1a5394: 0xc4380a  movz        $a3, $a2, $a0
    ctx->pc = 0x1a5394u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 6));
    // 0x1a5398: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1a5398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a539c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1a539cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1a53a0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1a53a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1a53a4: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1a53a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1a53a8: 0x14a2fff5  bne         $a1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1A53A8u;
    {
        const bool branch_taken_0x1a53a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A53ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53A8u;
        // 0x1a53ac: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a53a8) {
            ctx->pc = 0x1A5380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5380;
        }
    }
    ctx->pc = 0x1A53B0u;
label_1a53b0:
    // 0x1a53b0: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1a53b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a53b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A53B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A53B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53B4u;
        // 0x1a53b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A53B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A53BCu;
    // 0x1a53bc: 0x0  nop
    ctx->pc = 0x1a53bcu;
    // NOP
    ctx->pc = 0x1a53c0u;
}
