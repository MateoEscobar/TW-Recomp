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

// Function: sub_001EF550
// Address: 0x1ef550 - 0x1ef5a8
void sub_001EF550_0x1ef550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF550_0x1ef550");
#endif

    ctx->pc = 0x1ef550u;

    // 0x1ef550: 0x24830158  addiu       $v1, $a0, 0x158
    ctx->pc = 0x1ef550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 344));
    // 0x1ef554: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1ef554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ef558: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ef558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ef55c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1ef55cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef560: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x1EF560u;
    {
        const bool branch_taken_0x1ef560 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef560) {
            ctx->pc = 0x1EF59Cu;
            goto label_1ef59c;
        }
    }
    ctx->pc = 0x1EF568u;
    // 0x1ef568: 0x8c8201e4  lw          $v0, 0x1E4($a0)
    ctx->pc = 0x1ef568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x1ef56c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EF56Cu;
    {
        const bool branch_taken_0x1ef56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF56Cu;
        // 0x1ef570: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef56c) {
            ctx->pc = 0x1EF58Cu;
            goto label_1ef58c;
        }
    }
    ctx->pc = 0x1EF574u;
    // 0x1ef574: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x1ef574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1ef578: 0x5100b  movn        $v0, $zero, $a1
    ctx->pc = 0x1ef578u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1ef57c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ef57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ef580: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ef580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef584: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF584u;
    {
        const bool branch_taken_0x1ef584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1EF588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF584u;
        // 0x1ef588: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef584) {
            ctx->pc = 0x1EF594u;
            goto label_1ef594;
        }
    }
    ctx->pc = 0x1EF58Cu;
label_1ef58c:
    // 0x1ef58c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF58Cu;
        // 0x1ef590: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF594u;
label_1ef594:
    // 0x1ef594: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF594u;
        // 0x1ef598: 0x46102b  sltu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF59Cu;
label_1ef59c:
    // 0x1ef59c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF59Cu;
        // 0x1ef5a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF5A4u;
    // 0x1ef5a4: 0x0  nop
    ctx->pc = 0x1ef5a4u;
    // NOP
    ctx->pc = 0x1ef5a8u;
}
