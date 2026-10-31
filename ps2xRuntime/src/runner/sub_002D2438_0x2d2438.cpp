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

// Function: sub_002D2438
// Address: 0x2d2438 - 0x2d24a8
void sub_002D2438_0x2d2438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2438_0x2d2438");
#endif

    switch (ctx->pc) {
        case 0x2d2460u: goto label_2d2460;
        case 0x2d2480u: goto label_2d2480;
        case 0x2d2488u: goto label_2d2488;
        default: break;
    }

    ctx->pc = 0x2d2438u;

    // 0x2d2438: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d2438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d243c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d243cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2d2440: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d2440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d2444: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d2444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2448: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d2448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2d244c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2d244cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2d2450: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d2450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d2454: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d2454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d2458: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2D2458u;
    SET_GPR_U32(ctx, 31, 0x2D2460u);
    ctx->pc = 0x2D245Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2458u;
    // 0x2d245c: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2D2458u, 0x2D2460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2460u;
label_2d2460:
    // 0x2d2460: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d2460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2464: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2D2464u;
    {
        const bool branch_taken_0x2d2464 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2464u;
        // 0x2d2468: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2464) {
            ctx->pc = 0x2D2490u;
            goto label_2d2490;
        }
    }
    ctx->pc = 0x2D246Cu;
    // 0x2d246c: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x2d246cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
    // 0x2d2470: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d2470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2474: 0x24c66388  addiu       $a2, $a2, 0x6388
    ctx->pc = 0x2d2474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25480));
    // 0x2d2478: 0xc0886a8  jal         func_221AA0
    ctx->pc = 0x2D2478u;
    SET_GPR_U32(ctx, 31, 0x2D2480u);
    ctx->pc = 0x2D247Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2478u;
    // 0x2d247c: 0x240502a1  addiu       $a1, $zero, 0x2A1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2D2478u, 0x2D2480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2480u;
label_2d2480:
    // 0x2d2480: 0xc087502  jal         func_21D408
    ctx->pc = 0x2D2480u;
    SET_GPR_U32(ctx, 31, 0x2D2488u);
    ctx->pc = 0x2D2484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2480u;
    // 0x2d2484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2D2480u, 0x2D2488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2488u;
label_2d2488:
    // 0x2d2488: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2d2488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x2d248c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2d248cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_2d2490:
    // 0x2d2490: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d2490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2494: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d2494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2498: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d2498u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d249c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d249cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d24a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D24A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D24A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D24A0u;
        // 0x2d24a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D24A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D24A8u;
}
