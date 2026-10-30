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

// Function: sub_004F30D0
// Address: 0x4f30d0 - 0x4f3148
void sub_004F30D0_0x4f30d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F30D0_0x4f30d0");
#endif

    switch (ctx->pc) {
        case 0x4f30e8u: goto label_4f30e8;
        default: break;
    }

    ctx->pc = 0x4f30d0u;

    // 0x4f30d0: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x4F30D0u;
    {
        const bool branch_taken_0x4f30d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F30D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F30D0u;
        // 0x4f30d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f30d0) {
            ctx->pc = 0x4F313Cu;
            goto label_4f313c;
        }
    }
    ctx->pc = 0x4F30D8u;
    // 0x4f30d8: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x4f30d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4f30dc: 0x10e00017  beqz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x4F30DCu;
    {
        const bool branch_taken_0x4f30dc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F30E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F30DCu;
        // 0x4f30e0: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f30dc) {
            ctx->pc = 0x4F313Cu;
            goto label_4f313c;
        }
    }
    ctx->pc = 0x4F30E4u;
    // 0x4f30e4: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x4f30e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4f30e8:
    // 0x4f30e8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4f30e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4f30ec: 0x484821  addu        $t1, $v0, $t0
    ctx->pc = 0x4f30ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4f30f0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4f30f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f30f4: 0x1465000d  bne         $v1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x4F30F4u;
    {
        const bool branch_taken_0x4f30f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x4F30F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F30F4u;
        // 0x4f30f8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f30f4) {
            ctx->pc = 0x4F312Cu;
            goto label_4f312c;
        }
    }
    ctx->pc = 0x4F30FCu;
    // 0x4f30fc: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x4f30fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4f3100: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x4f3100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x4f3104: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4f3104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4f3108: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x4f3108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4f310c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4f310cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f3110: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4f3110u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4f3114: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x4f3114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4f3118: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x4f3118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4f311c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4f311cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4f3120: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f3120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4f3124: 0x3e00008  jr          $ra
    ctx->pc = 0x4F3124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3124u;
        // 0x4f3128: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F312Cu;
label_4f312c:
    // 0x4f312c: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x4f312cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f3130: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x4f3130u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4f3134: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x4F3134u;
    {
        const bool branch_taken_0x4f3134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f3134) {
            ctx->pc = 0x4F3138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F3134u;
            // 0x4f3138: 0x8c880008  lw          $t0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F30E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f30e8;
        }
    }
    ctx->pc = 0x4F313Cu;
label_4f313c:
    // 0x4f313c: 0x3e00008  jr          $ra
    ctx->pc = 0x4F313Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F313Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F3144u;
    // 0x4f3144: 0x0  nop
    ctx->pc = 0x4f3144u;
    // NOP
    ctx->pc = 0x4f3148u;
}
