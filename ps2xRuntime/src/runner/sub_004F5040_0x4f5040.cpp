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

// Function: sub_004F5040
// Address: 0x4f5040 - 0x4f50e0
void sub_004F5040_0x4f5040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5040_0x4f5040");
#endif

    switch (ctx->pc) {
        case 0x4f5060u: goto label_4f5060;
        case 0x4f50b0u: goto label_4f50b0;
        default: break;
    }

    ctx->pc = 0x4f5040u;

    // 0x4f5040: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4f5040u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5044: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x4f5044u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5048: 0x125102b  sltu        $v0, $t1, $a1
    ctx->pc = 0x4f5048u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4f504c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4F504Cu;
    {
        const bool branch_taken_0x4f504c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F504Cu;
        // 0x4f5050: 0xa9102b  sltu        $v0, $a1, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f504c) {
            ctx->pc = 0x4F508Cu;
            goto label_4f508c;
        }
    }
    ctx->pc = 0x4F5054u;
    // 0x4f5054: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x4F5054u;
    {
        const bool branch_taken_0x4f5054 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5054u;
        // 0x4f5058: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5054) {
            ctx->pc = 0x4F50D4u;
            goto label_4f50d4;
        }
    }
    ctx->pc = 0x4F505Cu;
    // 0x4f505c: 0x0  nop
    ctx->pc = 0x4f505cu;
    // NOP
label_4f5060:
    // 0x4f5060: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x4f5060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5064: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4f5064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5068: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4f5068u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f506c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4f506cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4f5070: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4f5070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4f5074: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4f5074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4f5078: 0x106102b  sltu        $v0, $t0, $a2
    ctx->pc = 0x4f5078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4f507c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4F507Cu;
    {
        const bool branch_taken_0x4f507c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F5080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F507Cu;
        // 0x4f5080: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f507c) {
            ctx->pc = 0x4F5060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f5060;
        }
    }
    ctx->pc = 0x4F5084u;
    // 0x4f5084: 0x3e00008  jr          $ra
    ctx->pc = 0x4F5084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5084u;
        // 0x4f5088: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F508Cu;
label_4f508c:
    // 0x4f508c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4F508Cu;
    {
        const bool branch_taken_0x4f508c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F508Cu;
        // 0x4f5090: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f508c) {
            ctx->pc = 0x4F50D8u;
            goto label_4f50d8;
        }
    }
    ctx->pc = 0x4F5094u;
    // 0x4f5094: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x4F5094u;
    {
        const bool branch_taken_0x4f5094 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5094u;
        // 0x4f5098: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5094) {
            ctx->pc = 0x4F50D4u;
            goto label_4f50d4;
        }
    }
    ctx->pc = 0x4F509Cu;
    // 0x4f509c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4f509cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f50a0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4f50a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4f50a4: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x4F50A4u;
    {
        const bool branch_taken_0x4f50a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F50A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F50A4u;
        // 0x4f50a8: 0x1223821  addu        $a3, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f50a4) {
            ctx->pc = 0x4F50D4u;
            goto label_4f50d4;
        }
    }
    ctx->pc = 0x4F50ACu;
    // 0x4f50ac: 0x0  nop
    ctx->pc = 0x4f50acu;
    // NOP
label_4f50b0:
    // 0x4f50b0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x4f50b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f50b4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4f50b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f50b8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4f50b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f50bc: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x4f50bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x4f50c0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x4f50c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4f50c4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4f50c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4f50c8: 0x106102b  sltu        $v0, $t0, $a2
    ctx->pc = 0x4f50c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4f50cc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4F50CCu;
    {
        const bool branch_taken_0x4f50cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F50D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F50CCu;
        // 0x4f50d0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f50cc) {
            ctx->pc = 0x4F50B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f50b0;
        }
    }
    ctx->pc = 0x4F50D4u;
label_4f50d4:
    // 0x4f50d4: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x4f50d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4f50d8:
    // 0x4f50d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4F50D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F50D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F50E0u;
}
