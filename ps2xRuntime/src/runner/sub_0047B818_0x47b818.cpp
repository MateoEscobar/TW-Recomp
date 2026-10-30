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

// Function: sub_0047B818
// Address: 0x47b818 - 0x47b8b0
void sub_0047B818_0x47b818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047B818_0x47b818");
#endif

    switch (ctx->pc) {
        case 0x47b880u: goto label_47b880;
        default: break;
    }

    ctx->pc = 0x47b818u;

    // 0x47b818: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47b818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x47b81c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x47b81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x47b820: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47b820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47b824: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47b824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b828: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x47b828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x47b82c: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x47b82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x47b830: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x47B830u;
    {
        const bool branch_taken_0x47b830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B830u;
        // 0x47b834: 0x8f828914  lw          $v0, -0x76EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b830) {
            ctx->pc = 0x47B894u;
            goto label_47b894;
        }
    }
    ctx->pc = 0x47B838u;
    // 0x47b838: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x47b838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x47b83c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x47b83cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x47b840: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x47B840u;
    {
        const bool branch_taken_0x47b840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B840u;
        // 0x47b844: 0x8f828914  lw          $v0, -0x76EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b840) {
            ctx->pc = 0x47B894u;
            goto label_47b894;
        }
    }
    ctx->pc = 0x47B848u;
    // 0x47b848: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x47b848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b84c: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x47b84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x47b850: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x47b850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x47b854: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x47B854u;
    {
        const bool branch_taken_0x47b854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b854) {
            ctx->pc = 0x47B858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47B854u;
            // 0x47b858: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47B874u;
            goto label_47b874;
        }
    }
    ctx->pc = 0x47B85Cu;
    // 0x47b85c: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x47b85cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x47b860: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47b860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47b864: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x47B864u;
    {
        const bool branch_taken_0x47b864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x47b864) {
            ctx->pc = 0x47B868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47B864u;
            // 0x47b868: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47B874u;
            goto label_47b874;
        }
    }
    ctx->pc = 0x47B86Cu;
    // 0x47b86c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x47B86Cu;
    {
        const bool branch_taken_0x47b86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B86Cu;
        // 0x47b870: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b86c) {
            ctx->pc = 0x47B880u;
            goto label_47b880;
        }
    }
    ctx->pc = 0x47B874u;
label_47b874:
    // 0x47b874: 0x2062021  addu        $a0, $s0, $a2
    ctx->pc = 0x47b874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x47b878: 0xc11d5b0  jal         func_4756C0
    ctx->pc = 0x47B878u;
    SET_GPR_U32(ctx, 31, 0x47B880u);
    ctx->pc = 0x47B87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47B878u;
    // 0x47b87c: 0x94450004  lhu         $a1, 0x4($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4756C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4756C0u, 0x47B878u, 0x47B880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B880u;
label_47b880:
    // 0x47b880: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47b880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47b884: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x47B884u;
    {
        const bool branch_taken_0x47b884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B884u;
        // 0x47b888: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b884) {
            ctx->pc = 0x47B8A0u;
            goto label_47b8a0;
        }
    }
    ctx->pc = 0x47B88Cu;
    // 0x47b88c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x47B88Cu;
    {
        const bool branch_taken_0x47b88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B88Cu;
        // 0x47b890: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b88c) {
            ctx->pc = 0x47B8A0u;
            goto label_47b8a0;
        }
    }
    ctx->pc = 0x47B894u;
label_47b894:
    // 0x47b894: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x47b894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x47b898: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x47b898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x47b89c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x47b89cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47b8a0:
    // 0x47b8a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x47b8a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47b8a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47b8a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47b8a8: 0x3e00008  jr          $ra
    ctx->pc = 0x47B8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47B8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B8A8u;
        // 0x47b8ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47B8A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47B8B0u;
}
