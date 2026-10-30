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

// Function: sub_004F4588
// Address: 0x4f4588 - 0x4f4600
void sub_004F4588_0x4f4588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4588_0x4f4588");
#endif

    switch (ctx->pc) {
        case 0x4f45a0u: goto label_4f45a0;
        default: break;
    }

    ctx->pc = 0x4f4588u;

    // 0x4f4588: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x4F4588u;
    {
        const bool branch_taken_0x4f4588 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4588u;
        // 0x4f458c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4588) {
            ctx->pc = 0x4F45F4u;
            goto label_4f45f4;
        }
    }
    ctx->pc = 0x4F4590u;
    // 0x4f4590: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x4f4590u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4f4594: 0x10e00017  beqz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x4F4594u;
    {
        const bool branch_taken_0x4f4594 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F4598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4594u;
        // 0x4f4598: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4594) {
            ctx->pc = 0x4F45F4u;
            goto label_4f45f4;
        }
    }
    ctx->pc = 0x4F459Cu;
    // 0x4f459c: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x4f459cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4f45a0:
    // 0x4f45a0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4f45a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4f45a4: 0x484821  addu        $t1, $v0, $t0
    ctx->pc = 0x4f45a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4f45a8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4f45a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f45ac: 0x1465000d  bne         $v1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x4F45ACu;
    {
        const bool branch_taken_0x4f45ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x4F45B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F45ACu;
        // 0x4f45b0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f45ac) {
            ctx->pc = 0x4F45E4u;
            goto label_4f45e4;
        }
    }
    ctx->pc = 0x4F45B4u;
    // 0x4f45b4: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x4f45b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4f45b8: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x4f45b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x4f45bc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4f45bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4f45c0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x4f45c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4f45c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4f45c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f45c8: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4f45c8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4f45cc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x4f45ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4f45d0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x4f45d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4f45d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4f45d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4f45d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f45d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4f45dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4F45DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F45E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F45DCu;
        // 0x4f45e0: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F45DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F45E4u;
label_4f45e4:
    // 0x4f45e4: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x4f45e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f45e8: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x4f45e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4f45ec: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x4F45ECu;
    {
        const bool branch_taken_0x4f45ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f45ec) {
            ctx->pc = 0x4F45F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F45ECu;
            // 0x4f45f0: 0x8c880008  lw          $t0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F45A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f45a0;
        }
    }
    ctx->pc = 0x4F45F4u;
label_4f45f4:
    // 0x4f45f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4F45F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F45F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F45FCu;
    // 0x4f45fc: 0x0  nop
    ctx->pc = 0x4f45fcu;
    // NOP
    ctx->pc = 0x4f4600u;
}
