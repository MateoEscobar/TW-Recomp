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

// Function: sub_002D24A8
// Address: 0x2d24a8 - 0x2d2538
void sub_002D24A8_0x2d24a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D24A8_0x2d24a8");
#endif

    switch (ctx->pc) {
        case 0x2d24c8u: goto label_2d24c8;
        case 0x2d24e4u: goto label_2d24e4;
        case 0x2d24f8u: goto label_2d24f8;
        case 0x2d2510u: goto label_2d2510;
        case 0x2d251cu: goto label_2d251c;
        default: break;
    }

    ctx->pc = 0x2d24a8u;

    // 0x2d24a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d24a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d24ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d24acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d24b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d24b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d24b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d24b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d24b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d24b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d24bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d24bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d24c0: 0xc08bfbc  jal         func_22FEF0
    ctx->pc = 0x2D24C0u;
    SET_GPR_U32(ctx, 31, 0x2D24C8u);
    ctx->pc = 0x2D24C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D24C0u;
    // 0x2d24c4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2D24C0u, 0x2D24C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D24C8u;
label_2d24c8:
    // 0x2d24c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d24c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d24cc: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x2d24ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
    // 0x2d24d0: 0x24c66388  addiu       $a2, $a2, 0x6388
    ctx->pc = 0x2d24d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25480));
    // 0x2d24d4: 0x240502a1  addiu       $a1, $zero, 0x2A1
    ctx->pc = 0x2d24d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
    // 0x2d24d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d24d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d24dc: 0xc0886a8  jal         func_221AA0
    ctx->pc = 0x2D24DCu;
    SET_GPR_U32(ctx, 31, 0x2D24E4u);
    ctx->pc = 0x2D24E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D24DCu;
    // 0x2d24e0: 0x8c50020c  lw          $s0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2D24DCu, 0x2D24E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D24E4u;
label_2d24e4:
    // 0x2d24e4: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2d24e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2d24e8: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D24E8u;
    {
        const bool branch_taken_0x2d24e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D24ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D24E8u;
        // 0x2d24ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d24e8) {
            ctx->pc = 0x2D2520u;
            goto label_2d2520;
        }
    }
    ctx->pc = 0x2D24F0u;
    // 0x2d24f0: 0xc05a3f8  jal         func_168FE0
    ctx->pc = 0x2D24F0u;
    SET_GPR_U32(ctx, 31, 0x2D24F8u);
    ctx->pc = 0x2D24F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D24F0u;
    // 0x2d24f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168FE0u, 0x2D24F0u, 0x2D24F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D24F8u;
label_2d24f8:
    // 0x2d24f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d24f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d24fc: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D24FCu;
    {
        const bool branch_taken_0x2d24fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D2500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D24FCu;
        // 0x2d2500: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d24fc) {
            ctx->pc = 0x2D2520u;
            goto label_2d2520;
        }
    }
    ctx->pc = 0x2D2504u;
    // 0x2d2504: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x2d2504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2d2508: 0xc05a44c  jal         func_169130
    ctx->pc = 0x2D2508u;
    SET_GPR_U32(ctx, 31, 0x2D2510u);
    ctx->pc = 0x2D250Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2508u;
    // 0x2d250c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169130u, 0x2D2508u, 0x2D2510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2510u;
label_2d2510:
    // 0x2d2510: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2d2510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2d2514: 0xc05a44c  jal         func_169130
    ctx->pc = 0x2D2514u;
    SET_GPR_U32(ctx, 31, 0x2D251Cu);
    ctx->pc = 0x2D2518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2514u;
    // 0x2d2518: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169130u, 0x2D2514u, 0x2D251Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D251Cu;
label_2d251c:
    // 0x2d251c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d251cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d2520:
    // 0x2d2520: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d2520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2524: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x2d2524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x2d2528: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d2528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d252c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d252cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2530: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2530u;
        // 0x2d2534: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2538u;
}
