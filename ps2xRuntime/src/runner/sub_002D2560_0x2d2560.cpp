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

// Function: sub_002D2560
// Address: 0x2d2560 - 0x2d2600
void sub_002D2560_0x2d2560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2560_0x2d2560");
#endif

    switch (ctx->pc) {
        case 0x2d2590u: goto label_2d2590;
        case 0x2d25c4u: goto label_2d25c4;
        case 0x2d25dcu: goto label_2d25dc;
        case 0x2d25e8u: goto label_2d25e8;
        default: break;
    }

    ctx->pc = 0x2d2560u;

    // 0x2d2560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d2560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d2564: 0x240502a1  addiu       $a1, $zero, 0x2A1
    ctx->pc = 0x2d2564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
    // 0x2d2568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d2568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d256c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d256cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2570: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d2570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d2574: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d2574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2578: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d2578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d257c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d257cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d2580: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d2580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d2584: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x2d2584u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x2d2588: 0xc0886a8  jal         func_221AA0
    ctx->pc = 0x2D2588u;
    SET_GPR_U32(ctx, 31, 0x2D2590u);
    ctx->pc = 0x2D258Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2588u;
    // 0x2d258c: 0xac400208  sw          $zero, 0x208($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 520), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2D2588u, 0x2D2590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2590u;
label_2d2590:
    // 0x2d2590: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d2590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d2594: 0x860500e2  lh          $a1, 0xE2($s0)
    ctx->pc = 0x2d2594u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 226)));
    // 0x2d2598: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d2598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d259c: 0x84430092  lh          $v1, 0x92($v0)
    ctx->pc = 0x2d259cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x2d25a0: 0x54a30004  bnel        $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D25A0u;
    {
        const bool branch_taken_0x2d25a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d25a0) {
            ctx->pc = 0x2D25A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D25A0u;
            // 0x2d25a4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D25B4u;
            goto label_2d25b4;
        }
    }
    ctx->pc = 0x2D25A8u;
    // 0x2d25a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d25a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d25ac: 0xa60200e2  sh          $v0, 0xE2($s0)
    ctx->pc = 0x2d25acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 226), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d25b0: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2d25b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2d25b4:
    // 0x2d25b4: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2D25B4u;
    {
        const bool branch_taken_0x2d25b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d25b4) {
            ctx->pc = 0x2D25B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D25B4u;
            // 0x2d25b8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D25ECu;
            goto label_2d25ec;
        }
    }
    ctx->pc = 0x2D25BCu;
    // 0x2d25bc: 0xc05a3f8  jal         func_168FE0
    ctx->pc = 0x2D25BCu;
    SET_GPR_U32(ctx, 31, 0x2D25C4u);
    ctx->pc = 0x2D25C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D25BCu;
    // 0x2d25c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168FE0u, 0x2D25BCu, 0x2D25C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D25C4u;
label_2d25c4:
    // 0x2d25c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d25c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d25c8: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D25C8u;
    {
        const bool branch_taken_0x2d25c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d25c8) {
            ctx->pc = 0x2D25CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D25C8u;
            // 0x2d25cc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D25ECu;
            goto label_2d25ec;
        }
    }
    ctx->pc = 0x2D25D0u;
    // 0x2d25d0: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x2d25d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2d25d4: 0xc05a44c  jal         func_169130
    ctx->pc = 0x2D25D4u;
    SET_GPR_U32(ctx, 31, 0x2D25DCu);
    ctx->pc = 0x2D25D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D25D4u;
    // 0x2d25d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169130u, 0x2D25D4u, 0x2D25DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D25DCu;
label_2d25dc:
    // 0x2d25dc: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2d25dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2d25e0: 0xc05a44c  jal         func_169130
    ctx->pc = 0x2D25E0u;
    SET_GPR_U32(ctx, 31, 0x2D25E8u);
    ctx->pc = 0x2D25E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D25E0u;
    // 0x2d25e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169130u, 0x2D25E0u, 0x2D25E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D25E8u;
label_2d25e8:
    // 0x2d25e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d25e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d25ec:
    // 0x2d25ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d25ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d25f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d25f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d25f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D25F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D25F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D25F4u;
        // 0x2d25f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D25F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D25FCu;
    // 0x2d25fc: 0x0  nop
    ctx->pc = 0x2d25fcu;
    // NOP
    ctx->pc = 0x2d2600u;
}
