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

// Function: sub_0030E548
// Address: 0x30e548 - 0x30e5b0
void sub_0030E548_0x30e548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E548_0x30e548");
#endif

    switch (ctx->pc) {
        case 0x30e560u: goto label_30e560;
        case 0x30e594u: goto label_30e594;
        default: break;
    }

    ctx->pc = 0x30e548u;

    // 0x30e548: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30e548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30e54c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30e54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x30e550: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30e550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30e554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30e554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30e558: 0xc0c38d4  jal         func_30E350
    ctx->pc = 0x30E558u;
    SET_GPR_U32(ctx, 31, 0x30E560u);
    ctx->pc = 0x30E55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E558u;
    // 0x30e55c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E350u, 0x30E558u, 0x30E560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E560u;
label_30e560:
    // 0x30e560: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x30e560u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e564: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30e564u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e568: 0x1071000c  beq         $v1, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x30E568u;
    {
        const bool branch_taken_0x30e568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x30E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E568u;
        // 0x30e56c: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e568) {
            ctx->pc = 0x30E59Cu;
            goto label_30e59c;
        }
    }
    ctx->pc = 0x30E570u;
    // 0x30e570: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30e570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30e574: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30E574u;
    {
        const bool branch_taken_0x30e574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E574u;
        // 0x30e578: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e574) {
            ctx->pc = 0x30E584u;
            goto label_30e584;
        }
    }
    ctx->pc = 0x30E57Cu;
    // 0x30e57c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30E57Cu;
    {
        const bool branch_taken_0x30e57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E57Cu;
        // 0x30e580: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e57c) {
            ctx->pc = 0x30E59Cu;
            goto label_30e59c;
        }
    }
    ctx->pc = 0x30E584u;
label_30e584:
    // 0x30e584: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30E584u;
    {
        const bool branch_taken_0x30e584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30e584) {
            ctx->pc = 0x30E588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E584u;
            // 0x30e588: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E59Cu;
            goto label_30e59c;
        }
    }
    ctx->pc = 0x30E58Cu;
    // 0x30e58c: 0xc0c390e  jal         func_30E438
    ctx->pc = 0x30E58Cu;
    SET_GPR_U32(ctx, 31, 0x30E594u);
    ctx->pc = 0x30E590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E58Cu;
    // 0x30e590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E438u, 0x30E58Cu, 0x30E594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E594u;
label_30e594:
    // 0x30e594: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x30e594u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x30e598: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x30e598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30e59c:
    // 0x30e59c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x30e59cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30e5a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30e5a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30e5a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30e5a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30e5a8: 0x3e00008  jr          $ra
    ctx->pc = 0x30E5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E5A8u;
        // 0x30e5ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E5A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E5B0u;
}
