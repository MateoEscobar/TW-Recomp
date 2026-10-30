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

// Function: sub_001EF660
// Address: 0x1ef660 - 0x1ef6d8
void sub_001EF660_0x1ef660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF660_0x1ef660");
#endif

    ctx->pc = 0x1ef660u;

    // 0x1ef660: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1ef660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef664: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1ef664u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef668: 0x8cc4008c  lw          $a0, 0x8C($a2)
    ctx->pc = 0x1ef668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 140)));
    // 0x1ef66c: 0x24c90158  addiu       $t1, $a2, 0x158
    ctx->pc = 0x1ef66cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 344));
    // 0x1ef670: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x1ef670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1ef674: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1ef674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ef678: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x1ef678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1ef67c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ef67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ef680: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1ef680u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef684: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1ef684u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ef688: 0x32883  sra         $a1, $v1, 2
    ctx->pc = 0x1ef688u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1ef68c: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1ef68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1ef690: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x1ef690u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ef694: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1EF694u;
    {
        const bool branch_taken_0x1ef694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef694) {
            ctx->pc = 0x1EF6D0u;
            goto label_1ef6d0;
        }
    }
    ctx->pc = 0x1EF69Cu;
    // 0x1ef69c: 0x8cc201e4  lw          $v0, 0x1E4($a2)
    ctx->pc = 0x1ef69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
    // 0x1ef6a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EF6A0u;
    {
        const bool branch_taken_0x1ef6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF6A0u;
        // 0x1ef6a4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef6a0) {
            ctx->pc = 0x1EF6C0u;
            goto label_1ef6c0;
        }
    }
    ctx->pc = 0x1EF6A8u;
    // 0x1ef6a8: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x1ef6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1ef6ac: 0x8100b  movn        $v0, $zero, $t0
    ctx->pc = 0x1ef6acu;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1ef6b0: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x1ef6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1ef6b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ef6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef6b8: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF6B8u;
    {
        const bool branch_taken_0x1ef6b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1EF6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF6B8u;
        // 0x1ef6bc: 0x24a2fffe  addiu       $v0, $a1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef6b8) {
            ctx->pc = 0x1EF6C8u;
            goto label_1ef6c8;
        }
    }
    ctx->pc = 0x1EF6C0u;
label_1ef6c0:
    // 0x1ef6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF6C0u;
        // 0x1ef6c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF6C8u;
label_1ef6c8:
    // 0x1ef6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF6C8u;
        // 0x1ef6cc: 0xe2102b  sltu        $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF6D0u;
label_1ef6d0:
    // 0x1ef6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF6D0u;
        // 0x1ef6d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF6D8u;
}
