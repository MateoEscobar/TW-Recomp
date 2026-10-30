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

// Function: sub_004F29E8
// Address: 0x4f29e8 - 0x4f2a60
void sub_004F29E8_0x4f29e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F29E8_0x4f29e8");
#endif

    switch (ctx->pc) {
        case 0x4f2a00u: goto label_4f2a00;
        default: break;
    }

    ctx->pc = 0x4f29e8u;

    // 0x4f29e8: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x4F29E8u;
    {
        const bool branch_taken_0x4f29e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F29ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F29E8u;
        // 0x4f29ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f29e8) {
            ctx->pc = 0x4F2A54u;
            goto label_4f2a54;
        }
    }
    ctx->pc = 0x4F29F0u;
    // 0x4f29f0: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x4f29f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4f29f4: 0x10e00017  beqz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x4F29F4u;
    {
        const bool branch_taken_0x4f29f4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F29F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F29F4u;
        // 0x4f29f8: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f29f4) {
            ctx->pc = 0x4F2A54u;
            goto label_4f2a54;
        }
    }
    ctx->pc = 0x4F29FCu;
    // 0x4f29fc: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x4f29fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4f2a00:
    // 0x4f2a00: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4f2a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4f2a04: 0x484821  addu        $t1, $v0, $t0
    ctx->pc = 0x4f2a04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4f2a08: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4f2a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f2a0c: 0x1465000d  bne         $v1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x4F2A0Cu;
    {
        const bool branch_taken_0x4f2a0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x4F2A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2A0Cu;
        // 0x4f2a10: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2a0c) {
            ctx->pc = 0x4F2A44u;
            goto label_4f2a44;
        }
    }
    ctx->pc = 0x4F2A14u;
    // 0x4f2a14: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x4f2a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4f2a18: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x4f2a18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x4f2a1c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4f2a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4f2a20: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x4f2a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4f2a24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4f2a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f2a28: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4f2a28u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4f2a2c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x4f2a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4f2a30: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x4f2a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4f2a34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4f2a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4f2a38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f2a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4f2a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x4F2A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2A3Cu;
        // 0x4f2a40: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F2A44u;
label_4f2a44:
    // 0x4f2a44: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x4f2a44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2a48: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x4f2a48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4f2a4c: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x4F2A4Cu;
    {
        const bool branch_taken_0x4f2a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f2a4c) {
            ctx->pc = 0x4F2A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F2A4Cu;
            // 0x4f2a50: 0x8c880008  lw          $t0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F2A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f2a00;
        }
    }
    ctx->pc = 0x4F2A54u;
label_4f2a54:
    // 0x4f2a54: 0x3e00008  jr          $ra
    ctx->pc = 0x4F2A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F2A5Cu;
    // 0x4f2a5c: 0x0  nop
    ctx->pc = 0x4f2a5cu;
    // NOP
    ctx->pc = 0x4f2a60u;
}
