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

// Function: sub_004659B8
// Address: 0x4659b8 - 0x465a20
void sub_004659B8_0x4659b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004659B8_0x4659b8");
#endif

    switch (ctx->pc) {
        case 0x4659d8u: goto label_4659d8;
        default: break;
    }

    ctx->pc = 0x4659b8u;

    // 0x4659b8: 0x8f828490  lw          $v0, -0x7B70($gp)
    ctx->pc = 0x4659b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x4659bc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4659bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4659c0: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x4659c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4659c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4659c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4659c8: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x4659c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4659cc: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x4659ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4659d0: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x4659d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x4659d4: 0x0  nop
    ctx->pc = 0x4659d4u;
    // NOP
label_4659d8:
    // 0x4659d8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x4659d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4659dc: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x4659dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x4659e0: 0x54690003  bnel        $v1, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4659E0u;
    {
        const bool branch_taken_0x4659e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x4659e0) {
            ctx->pc = 0x4659E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4659E0u;
            // 0x4659e4: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4659F0u;
            goto label_4659f0;
        }
    }
    ctx->pc = 0x4659E8u;
    // 0x4659e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4659E8u;
    {
        const bool branch_taken_0x4659e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4659ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4659E8u;
        // 0x4659ec: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4659e8) {
            ctx->pc = 0x465A04u;
            goto label_465a04;
        }
    }
    ctx->pc = 0x4659F0u;
label_4659f0:
    // 0x4659f0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x4659f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4659f4: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x4659f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4659f8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4659F8u;
    {
        const bool branch_taken_0x4659f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4659FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4659F8u;
        // 0x4659fc: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4659f8) {
            ctx->pc = 0x4659D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4659d8;
        }
    }
    ctx->pc = 0x465A00u;
    // 0x465a00: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x465a00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_465a04:
    // 0x465a04: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x465a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x465a08: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x465a08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465a0c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x465a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x465a10: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x465a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x465a14: 0x3e00008  jr          $ra
    ctx->pc = 0x465A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x465A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465A14u;
        // 0x465a18: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x465A1Cu;
    // 0x465a1c: 0x0  nop
    ctx->pc = 0x465a1cu;
    // NOP
    ctx->pc = 0x465a20u;
}
