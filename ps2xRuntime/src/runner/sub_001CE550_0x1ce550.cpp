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

// Function: sub_001CE550
// Address: 0x1ce550 - 0x1ce5c0
void sub_001CE550_0x1ce550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE550_0x1ce550");
#endif

    switch (ctx->pc) {
        case 0x1ce580u: goto label_1ce580;
        default: break;
    }

    ctx->pc = 0x1ce550u;

    // 0x1ce550: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ce550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ce554: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CE554u;
    {
        const bool branch_taken_0x1ce554 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE554u;
        // 0x1ce558: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce554) {
            ctx->pc = 0x1CE5B4u;
            goto label_1ce5b4;
        }
    }
    ctx->pc = 0x1CE55Cu;
    // 0x1ce55c: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x1ce55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1ce560: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE560u;
    {
        const bool branch_taken_0x1ce560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1ce560) {
            ctx->pc = 0x1CE564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE560u;
            // 0x1ce564: 0x8c840290  lw          $a0, 0x290($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 656)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE570u;
            goto label_1ce570;
        }
    }
    ctx->pc = 0x1CE568u;
    // 0x1ce568: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1CE568u;
    {
        const bool branch_taken_0x1ce568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE568u;
        // 0x1ce56c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce568) {
            ctx->pc = 0x1CE5B4u;
            goto label_1ce5b4;
        }
    }
    ctx->pc = 0x1CE570u;
label_1ce570:
    // 0x1ce570: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ce570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ce574: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1CE574u;
    {
        const bool branch_taken_0x1ce574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE574u;
        // 0x1ce578: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce574) {
            ctx->pc = 0x1CE5A0u;
            goto label_1ce5a0;
        }
    }
    ctx->pc = 0x1CE57Cu;
    // 0x1ce57c: 0x0  nop
    ctx->pc = 0x1ce57cu;
    // NOP
label_1ce580:
    // 0x1ce580: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1ce580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce584: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1ce584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1ce588: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ce588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce58c: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CE58Cu;
    {
        const bool branch_taken_0x1ce58c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1CE590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE58Cu;
        // 0x1ce590: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce58c) {
            ctx->pc = 0x1CE5B4u;
            goto label_1ce5b4;
        }
    }
    ctx->pc = 0x1CE594u;
    // 0x1ce594: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x1ce594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x1ce598: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1ce598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ce59c: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x1ce59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
label_1ce5a0:
    // 0x1ce5a0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1ce5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1ce5a4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ce5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ce5a8: 0x1462fff5  bne         $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1CE5A8u;
    {
        const bool branch_taken_0x1ce5a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CE5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE5A8u;
        // 0x1ce5ac: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce5a8) {
            ctx->pc = 0x1CE580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ce580;
        }
    }
    ctx->pc = 0x1CE5B0u;
    // 0x1ce5b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ce5b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ce5b4:
    // 0x1ce5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE5B4u;
        // 0x1ce5b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE5BCu;
    // 0x1ce5bc: 0x0  nop
    ctx->pc = 0x1ce5bcu;
    // NOP
    ctx->pc = 0x1ce5c0u;
}
