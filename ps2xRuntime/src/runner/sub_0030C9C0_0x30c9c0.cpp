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

// Function: sub_0030C9C0
// Address: 0x30c9c0 - 0x30ca30
void sub_0030C9C0_0x30c9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C9C0_0x30c9c0");
#endif

    switch (ctx->pc) {
        case 0x30c9d8u: goto label_30c9d8;
        case 0x30c9e4u: goto label_30c9e4;
        case 0x30ca14u: goto label_30ca14;
        default: break;
    }

    ctx->pc = 0x30c9c0u;

    // 0x30c9c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30c9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30c9c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30c9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x30c9c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30c9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30c9cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30c9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30c9d0: 0xc0c323e  jal         func_30C8F8
    ctx->pc = 0x30C9D0u;
    SET_GPR_U32(ctx, 31, 0x30C9D8u);
    ctx->pc = 0x30C9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C9D0u;
    // 0x30c9d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C8F8u, 0x30C9D0u, 0x30C9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C9D8u;
label_30c9d8:
    // 0x30c9d8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x30c9d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c9dc: 0xc0c3178  jal         func_30C5E0
    ctx->pc = 0x30C9DCu;
    SET_GPR_U32(ctx, 31, 0x30C9E4u);
    ctx->pc = 0x30C9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C9DCu;
    // 0x30c9e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C5E0u, 0x30C9DCu, 0x30C9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C9E4u;
label_30c9e4:
    // 0x30c9e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30c9e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c9e8: 0x1071000c  beq         $v1, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x30C9E8u;
    {
        const bool branch_taken_0x30c9e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x30C9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C9E8u;
        // 0x30c9ec: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c9e8) {
            ctx->pc = 0x30CA1Cu;
            goto label_30ca1c;
        }
    }
    ctx->pc = 0x30C9F0u;
    // 0x30c9f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30c9f4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C9F4u;
    {
        const bool branch_taken_0x30c9f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30C9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C9F4u;
        // 0x30c9f8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c9f4) {
            ctx->pc = 0x30CA04u;
            goto label_30ca04;
        }
    }
    ctx->pc = 0x30C9FCu;
    // 0x30c9fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30C9FCu;
    {
        const bool branch_taken_0x30c9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C9FCu;
        // 0x30ca00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c9fc) {
            ctx->pc = 0x30CA1Cu;
            goto label_30ca1c;
        }
    }
    ctx->pc = 0x30CA04u;
label_30ca04:
    // 0x30ca04: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30CA04u;
    {
        const bool branch_taken_0x30ca04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30ca04) {
            ctx->pc = 0x30CA08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30CA04u;
            // 0x30ca08: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30CA1Cu;
            goto label_30ca1c;
        }
    }
    ctx->pc = 0x30CA0Cu;
    // 0x30ca0c: 0xc0c31b2  jal         func_30C6C8
    ctx->pc = 0x30CA0Cu;
    SET_GPR_U32(ctx, 31, 0x30CA14u);
    ctx->pc = 0x30CA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CA0Cu;
    // 0x30ca10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C6C8u, 0x30CA0Cu, 0x30CA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CA14u;
label_30ca14:
    // 0x30ca14: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x30ca14u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x30ca18: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x30ca18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30ca1c:
    // 0x30ca1c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x30ca1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30ca20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30ca20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30ca24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30ca24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ca28: 0x3e00008  jr          $ra
    ctx->pc = 0x30CA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CA28u;
        // 0x30ca2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CA30u;
}
