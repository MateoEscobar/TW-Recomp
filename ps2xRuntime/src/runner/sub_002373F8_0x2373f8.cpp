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

// Function: sub_002373F8
// Address: 0x2373f8 - 0x237468
void sub_002373F8_0x2373f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002373F8_0x2373f8");
#endif

    switch (ctx->pc) {
        case 0x237414u: goto label_237414;
        case 0x23741cu: goto label_23741c;
        default: break;
    }

    ctx->pc = 0x2373f8u;

    // 0x2373f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2373f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2373fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2373fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x237400: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x237400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x237404: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x237404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237408: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x237408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23740c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23740Cu;
    SET_GPR_U32(ctx, 31, 0x237414u);
    ctx->pc = 0x237410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23740Cu;
    // 0x237410: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23740Cu, 0x237414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237414u;
label_237414:
    // 0x237414: 0xc08a61a  jal         func_229868
    ctx->pc = 0x237414u;
    SET_GPR_U32(ctx, 31, 0x23741Cu);
    ctx->pc = 0x237418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237414u;
    // 0x237418: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x237414u, 0x23741Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23741Cu;
label_23741c:
    // 0x23741c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23741cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237420: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x237420u;
    {
        const bool branch_taken_0x237420 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x237420) {
            ctx->pc = 0x237424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237420u;
            // 0x237424: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23745Cu;
            goto label_23745c;
        }
    }
    ctx->pc = 0x237428u;
    // 0x237428: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x237428u;
    {
        const bool branch_taken_0x237428 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237428u;
        // 0x23742c: 0xdc8200e0  ld          $v0, 0xE0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237428) {
            ctx->pc = 0x237440u;
            goto label_237440;
        }
    }
    ctx->pc = 0x237430u;
    // 0x237430: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x237430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x237434: 0x31d78  dsll        $v1, $v1, 21
    ctx->pc = 0x237434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 21);
    // 0x237438: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x237438u;
    {
        const bool branch_taken_0x237438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237438u;
        // 0x23743c: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237438) {
            ctx->pc = 0x237454u;
            goto label_237454;
        }
    }
    ctx->pc = 0x237440u;
label_237440:
    // 0x237440: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x237440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x237444: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x237444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x237448: 0x319b8  dsll        $v1, $v1, 6
    ctx->pc = 0x237448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 6);
    // 0x23744c: 0x3463003f  ori         $v1, $v1, 0x3F
    ctx->pc = 0x23744cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63);
    // 0x237450: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x237450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_237454:
    // 0x237454: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x237454u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
    // 0x237458: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x237458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23745c:
    // 0x23745c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23745cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237460: 0x3e00008  jr          $ra
    ctx->pc = 0x237460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237460u;
        // 0x237464: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237468u;
}
