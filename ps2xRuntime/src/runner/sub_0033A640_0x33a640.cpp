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

// Function: sub_0033A640
// Address: 0x33a640 - 0x33a690
void sub_0033A640_0x33a640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A640_0x33a640");
#endif

    switch (ctx->pc) {
        case 0x33a664u: goto label_33a664;
        default: break;
    }

    ctx->pc = 0x33a640u;

    // 0x33a640: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33a640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33a644: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x33a644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x33a648: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x33a648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33a64c: 0x24900048  addiu       $s0, $a0, 0x48
    ctx->pc = 0x33a64cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x33a650: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x33a650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x33a654: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x33a654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x33a658: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x33a658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a65c: 0xc13c372  jal         func_4F0DC8
    ctx->pc = 0x33A65Cu;
    SET_GPR_U32(ctx, 31, 0x33A664u);
    ctx->pc = 0x33A660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A65Cu;
    // 0x33a660: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F0DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F0DC8u, 0x33A65Cu, 0x33A664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A664u;
label_33a664:
    // 0x33a664: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x33a664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33a668: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x33a668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a66c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A66Cu;
    {
        const bool branch_taken_0x33a66c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A66Cu;
        // 0x33a670: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a66c) {
            ctx->pc = 0x33A67Cu;
            goto label_33a67c;
        }
    }
    ctx->pc = 0x33A674u;
    // 0x33a674: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x33A674u;
    {
        const bool branch_taken_0x33a674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A674u;
        // 0x33a678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a674) {
            ctx->pc = 0x33A680u;
            goto label_33a680;
        }
    }
    ctx->pc = 0x33A67Cu;
label_33a67c:
    // 0x33a67c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x33a67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_33a680:
    // 0x33a680: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x33a680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33a684: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x33a684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33a688: 0x3e00008  jr          $ra
    ctx->pc = 0x33A688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A688u;
        // 0x33a68c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A690u;
}
