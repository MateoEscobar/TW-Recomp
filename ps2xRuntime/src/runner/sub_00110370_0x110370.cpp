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

// Function: sub_00110370
// Address: 0x110370 - 0x1103d0
void sub_00110370_0x110370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110370_0x110370");
#endif

    switch (ctx->pc) {
        case 0x11038cu: goto label_11038c;
        case 0x11039cu: goto label_11039c;
        case 0x1103bcu: goto label_1103bc;
        default: break;
    }

    ctx->pc = 0x110370u;

    // 0x110370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x110370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x110374: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x110374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x110378: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x110378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11037c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11037cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x110380: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x110380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110384: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x110384u;
    SET_GPR_U32(ctx, 31, 0x11038Cu);
    ctx->pc = 0x110388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110384u;
    // 0x110388: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x110384u, 0x11038Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11038Cu;
label_11038c:
    // 0x11038c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x11038Cu;
    {
        const bool branch_taken_0x11038c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11038c) {
            ctx->pc = 0x110390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11038Cu;
            // 0x110390: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1103C0u;
            goto label_1103c0;
        }
    }
    ctx->pc = 0x110394u;
    // 0x110394: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x110394u;
    SET_GPR_U32(ctx, 31, 0x11039Cu);
    ctx->pc = 0x110398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110394u;
    // 0x110398: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x110394u, 0x11039Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11039Cu;
label_11039c:
    // 0x11039c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11039cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1103a0: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1103a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x1103a4: 0x9083007c  lbu         $v1, 0x7C($a0)
    ctx->pc = 0x1103a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x1103a8: 0x904583be  lbu         $a1, -0x7C42($v0)
    ctx->pc = 0x1103a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x5483BEu));
    // 0x1103ac: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1103ACu;
    {
        const bool branch_taken_0x1103ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1103ac) {
            ctx->pc = 0x1103B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1103ACu;
            // 0x1103b0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1103C0u;
            goto label_1103c0;
        }
    }
    ctx->pc = 0x1103B4u;
    // 0x1103b4: 0xc046c6c  jal         func_11B1B0
    ctx->pc = 0x1103B4u;
    SET_GPR_U32(ctx, 31, 0x1103BCu);
    ctx->pc = 0x1103B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1103B4u;
    // 0x1103b8: 0xac900084  sw          $s0, 0x84($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B1B0u, 0x1103B4u, 0x1103BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1103BCu;
label_1103bc:
    // 0x1103bc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1103bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1103c0:
    // 0x1103c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1103c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1103c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1103C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1103C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103C4u;
        // 0x1103c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1103C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1103CCu;
    // 0x1103cc: 0x0  nop
    ctx->pc = 0x1103ccu;
    // NOP
    ctx->pc = 0x1103d0u;
}
