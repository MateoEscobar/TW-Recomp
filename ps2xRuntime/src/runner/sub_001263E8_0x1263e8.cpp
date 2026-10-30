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

// Function: sub_001263E8
// Address: 0x1263e8 - 0x126450
void sub_001263E8_0x1263e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001263E8_0x1263e8");
#endif

    switch (ctx->pc) {
        case 0x126418u: goto label_126418;
        case 0x126430u: goto label_126430;
        default: break;
    }

    ctx->pc = 0x1263e8u;

    // 0x1263e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1263e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1263ec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1263ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1263f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1263f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1263f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1263f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1263f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1263f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1263fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1263fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126400: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x126400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x126404: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x126404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126408: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12640c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x12640cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126410: 0xc048892  jal         func_122248
    ctx->pc = 0x126410u;
    SET_GPR_U32(ctx, 31, 0x126418u);
    ctx->pc = 0x126414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126410u;
    // 0x126414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122248u, 0x126410u, 0x126418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126418u;
label_126418:
    // 0x126418: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x126418u;
    {
        const bool branch_taken_0x126418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126418u;
        // 0x12641c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126418) {
            ctx->pc = 0x126430u;
            goto label_126430;
        }
    }
    ctx->pc = 0x126420u;
    // 0x126420: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x126420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126424: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x126424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126428: 0xc04843e  jal         func_1210F8
    ctx->pc = 0x126428u;
    SET_GPR_U32(ctx, 31, 0x126430u);
    ctx->pc = 0x12642Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126428u;
    // 0x12642c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1210F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1210F8u, 0x126428u, 0x126430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126430u;
label_126430:
    // 0x126430: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x126430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x126434: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x126434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x126438: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x126438u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12643c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x12643cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126444: 0x3e00008  jr          $ra
    ctx->pc = 0x126444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126444u;
        // 0x126448: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12644Cu;
    // 0x12644c: 0x0  nop
    ctx->pc = 0x12644cu;
    // NOP
    ctx->pc = 0x126450u;
}
