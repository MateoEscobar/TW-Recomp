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

// Function: sub_004510E0
// Address: 0x4510e0 - 0x451188
void sub_004510E0_0x4510e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004510E0_0x4510e0");
#endif

    switch (ctx->pc) {
        case 0x45112cu: goto label_45112c;
        default: break;
    }

    ctx->pc = 0x4510e0u;

    // 0x4510e0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4510e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4510e4: 0x10a00026  beqz        $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x4510E4u;
    {
        const bool branch_taken_0x4510e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4510E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4510E4u;
        // 0x4510e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4510e4) {
            ctx->pc = 0x451180u;
            goto label_451180;
        }
    }
    ctx->pc = 0x4510ECu;
    // 0x4510ec: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x4510ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x4510f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4510f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4510f4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4510f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4510f8: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x4510f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x4510fc: 0x22a02  srl         $a1, $v0, 8
    ctx->pc = 0x4510fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x451100: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x451100u;
    {
        const bool branch_taken_0x451100 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x451104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451100u;
        // 0x451104: 0x8c84004c  lw          $a0, 0x4C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451100) {
            ctx->pc = 0x45112Cu;
            goto label_45112c;
        }
    }
    ctx->pc = 0x451108u;
    // 0x451108: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x451108u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x45110c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x45110Cu;
    {
        const bool branch_taken_0x45110c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x451110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45110Cu;
        // 0x451110: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45110c) {
            ctx->pc = 0x451124u;
            goto label_451124;
        }
    }
    ctx->pc = 0x451114u;
    // 0x451114: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x451114u;
    {
        const bool branch_taken_0x451114 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x451118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451114u;
        // 0x451118: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451114) {
            ctx->pc = 0x45112Cu;
            goto label_45112c;
        }
    }
    ctx->pc = 0x45111Cu;
    // 0x45111c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x45111Cu;
    {
        const bool branch_taken_0x45111c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x451120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45111Cu;
        // 0x451120: 0x30e2f000  andi        $v0, $a3, 0xF000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
        ctx->in_delay_slot = false;
        if (branch_taken_0x45111c) {
            ctx->pc = 0x451138u;
            goto label_451138;
        }
    }
    ctx->pc = 0x451124u;
label_451124:
    // 0x451124: 0x10a80003  beq         $a1, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x451124u;
    {
        const bool branch_taken_0x451124 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 8));
        ctx->pc = 0x451128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451124u;
        // 0x451128: 0x30e2f000  andi        $v0, $a3, 0xF000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
        ctx->in_delay_slot = false;
        if (branch_taken_0x451124) {
            ctx->pc = 0x451134u;
            goto label_451134;
        }
    }
    ctx->pc = 0x45112Cu;
label_45112c:
    // 0x45112c: 0x3e00008  jr          $ra
    ctx->pc = 0x45112Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x451130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45112Cu;
        // 0x451130: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45112Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x451134u;
label_451134:
    // 0x451134: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x451134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_451138:
    // 0x451138: 0x22b02  srl         $a1, $v0, 12
    ctx->pc = 0x451138u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x45113c: 0x10a3fffb  beq         $a1, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x45113Cu;
    {
        const bool branch_taken_0x45113c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x451140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45113Cu;
        // 0x451140: 0x2ca20003  sltiu       $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x45113c) {
            ctx->pc = 0x45112Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45112c;
        }
    }
    ctx->pc = 0x451144u;
    // 0x451144: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x451144u;
    {
        const bool branch_taken_0x451144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x451148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451144u;
        // 0x451148: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451144) {
            ctx->pc = 0x45115Cu;
            goto label_45115c;
        }
    }
    ctx->pc = 0x45114Cu;
    // 0x45114c: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x45114Cu;
    {
        const bool branch_taken_0x45114c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x451150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45114Cu;
        // 0x451150: 0x2402fff3  addiu       $v0, $zero, -0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45114c) {
            ctx->pc = 0x451170u;
            goto label_451170;
        }
    }
    ctx->pc = 0x451154u;
    // 0x451154: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x451154u;
    {
        const bool branch_taken_0x451154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x451154) {
            ctx->pc = 0x45112Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45112c;
        }
    }
    ctx->pc = 0x45115Cu;
label_45115c:
    // 0x45115c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x45115cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x451160: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x451160u;
    {
        const bool branch_taken_0x451160 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x451164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451160u;
        // 0x451164: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451160) {
            ctx->pc = 0x451178u;
            goto label_451178;
        }
    }
    ctx->pc = 0x451168u;
    // 0x451168: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x451168u;
    {
        const bool branch_taken_0x451168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x451168) {
            ctx->pc = 0x45112Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45112c;
        }
    }
    ctx->pc = 0x451170u;
label_451170:
    // 0x451170: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x451170u;
    {
        const bool branch_taken_0x451170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x451174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451170u;
        // 0x451174: 0xc23024  and         $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451170) {
            ctx->pc = 0x45117Cu;
            goto label_45117c;
        }
    }
    ctx->pc = 0x451178u;
label_451178:
    // 0x451178: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x451178u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_45117c:
    // 0x45117c: 0xfc8600c0  sd          $a2, 0xC0($a0)
    ctx->pc = 0x45117cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 192), GPR_U64(ctx, 6));
label_451180:
    // 0x451180: 0x3e00008  jr          $ra
    ctx->pc = 0x451180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x451184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451180u;
        // 0x451184: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x451180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x451188u;
}
