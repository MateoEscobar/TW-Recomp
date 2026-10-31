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

// Function: sub_004F5FC0
// Address: 0x4f5fc0 - 0x4f6038
void sub_004F5FC0_0x4f5fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5FC0_0x4f5fc0");
#endif

    switch (ctx->pc) {
        case 0x4f5fd8u: goto label_4f5fd8;
        default: break;
    }

    ctx->pc = 0x4f5fc0u;

    // 0x4f5fc0: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x4F5FC0u;
    {
        const bool branch_taken_0x4f5fc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5FC0u;
        // 0x4f5fc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5fc0) {
            ctx->pc = 0x4F602Cu;
            goto label_4f602c;
        }
    }
    ctx->pc = 0x4F5FC8u;
    // 0x4f5fc8: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x4f5fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4f5fcc: 0x10e00017  beqz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x4F5FCCu;
    {
        const bool branch_taken_0x4f5fcc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5FCCu;
        // 0x4f5fd0: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5fcc) {
            ctx->pc = 0x4F602Cu;
            goto label_4f602c;
        }
    }
    ctx->pc = 0x4F5FD4u;
    // 0x4f5fd4: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x4f5fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4f5fd8:
    // 0x4f5fd8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4f5fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4f5fdc: 0x484821  addu        $t1, $v0, $t0
    ctx->pc = 0x4f5fdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4f5fe0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4f5fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f5fe4: 0x1465000d  bne         $v1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x4F5FE4u;
    {
        const bool branch_taken_0x4f5fe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x4F5FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5FE4u;
        // 0x4f5fe8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5fe4) {
            ctx->pc = 0x4F601Cu;
            goto label_4f601c;
        }
    }
    ctx->pc = 0x4F5FECu;
    // 0x4f5fec: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x4f5fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4f5ff0: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x4f5ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x4f5ff4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4f5ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4f5ff8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x4f5ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4f5ffc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4f5ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f6000: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4f6000u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4f6004: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x4f6004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4f6008: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x4f6008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4f600c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4f600cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4f6010: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f6010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4f6014: 0x3e00008  jr          $ra
    ctx->pc = 0x4F6014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F6018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6014u;
        // 0x4f6018: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F6014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F601Cu;
label_4f601c:
    // 0x4f601c: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x4f601cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6020: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x4f6020u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4f6024: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x4F6024u;
    {
        const bool branch_taken_0x4f6024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f6024) {
            ctx->pc = 0x4F6028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F6024u;
            // 0x4f6028: 0x8c880008  lw          $t0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F5FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f5fd8;
        }
    }
    ctx->pc = 0x4F602Cu;
label_4f602c:
    // 0x4f602c: 0x3e00008  jr          $ra
    ctx->pc = 0x4F602Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F602Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F6034u;
    // 0x4f6034: 0x0  nop
    ctx->pc = 0x4f6034u;
    // NOP
    ctx->pc = 0x4f6038u;
}
