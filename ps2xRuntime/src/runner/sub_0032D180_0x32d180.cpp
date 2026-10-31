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

// Function: sub_0032D180
// Address: 0x32d180 - 0x32d200
void sub_0032D180_0x32d180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D180_0x32d180");
#endif

    switch (ctx->pc) {
        case 0x32d190u: goto label_32d190;
        case 0x32d1b0u: goto label_32d1b0;
        default: break;
    }

    ctx->pc = 0x32d180u;

    // 0x32d180: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x32d180u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x32d184: 0x1120001b  beqz        $t1, . + 4 + (0x1B << 2)
    ctx->pc = 0x32D184u;
    {
        const bool branch_taken_0x32d184 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D184u;
        // 0x32d188: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d184) {
            ctx->pc = 0x32D1F4u;
            goto label_32d1f4;
        }
    }
    ctx->pc = 0x32D18Cu;
    // 0x32d18c: 0x0  nop
    ctx->pc = 0x32d18cu;
    // NOP
label_32d190:
    // 0x32d190: 0x8522001e  lh          $v0, 0x1E($t1)
    ctx->pc = 0x32d190u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 30)));
    // 0x32d194: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x32d194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32d198: 0x4e00013  bltz        $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x32D198u;
    {
        const bool branch_taken_0x32d198 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x32D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D198u;
        // 0x32d19c: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d198) {
            ctx->pc = 0x32D1E8u;
            goto label_32d1e8;
        }
    }
    ctx->pc = 0x32D1A0u;
    // 0x32d1a0: 0x240b000c  addiu       $t3, $zero, 0xC
    ctx->pc = 0x32d1a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x32d1a4: 0x244201ac  addiu       $v0, $v0, 0x1AC
    ctx->pc = 0x32d1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 428));
    // 0x32d1a8: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x32d1a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d1ac: 0x494021  addu        $t0, $v0, $t1
    ctx->pc = 0x32d1acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_32d1b0:
    // 0x32d1b0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x32d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x32d1b4: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x32d1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x32d1b8: 0x4b1018  mult        $v0, $v0, $t3
    ctx->pc = 0x32d1b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x32d1bc: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x32d1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x32d1c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32d1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32d1c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x32d1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32d1c8: 0x54a40005  bnel        $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32D1C8u;
    {
        const bool branch_taken_0x32d1c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x32d1c8) {
            ctx->pc = 0x32D1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D1C8u;
            // 0x32d1cc: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D1E0u;
            goto label_32d1e0;
        }
    }
    ctx->pc = 0x32D1D0u;
    // 0x32d1d0: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x32d1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
    // 0x32d1d4: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x32d1d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d1d8: 0x3e00008  jr          $ra
    ctx->pc = 0x32D1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D1D8u;
        // 0x32d1dc: 0xaccc0000  sw          $t4, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D1E0u;
label_32d1e0:
    // 0x32d1e0: 0x4e1fff3  bgez        $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x32D1E0u;
    {
        const bool branch_taken_0x32d1e0 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x32D1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D1E0u;
        // 0x32d1e4: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d1e0) {
            ctx->pc = 0x32D1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32d1b0;
        }
    }
    ctx->pc = 0x32D1E8u;
label_32d1e8:
    // 0x32d1e8: 0x8d290004  lw          $t1, 0x4($t1)
    ctx->pc = 0x32d1e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x32d1ec: 0x1520ffe8  bnez        $t1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x32D1ECu;
    {
        const bool branch_taken_0x32d1ec = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x32D1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D1ECu;
        // 0x32d1f0: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d1ec) {
            ctx->pc = 0x32D190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32d190;
        }
    }
    ctx->pc = 0x32D1F4u;
label_32d1f4:
    // 0x32d1f4: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x32d1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x32d1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x32D1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D1F8u;
        // 0x32d1fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D200u;
}
