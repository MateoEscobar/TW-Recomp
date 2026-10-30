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

// Function: sub_002924E8
// Address: 0x2924e8 - 0x292530
void sub_002924E8_0x2924e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002924E8_0x2924e8");
#endif

    switch (ctx->pc) {
        case 0x292504u: goto label_292504;
        case 0x29250cu: goto label_29250c;
        case 0x29251cu: goto label_29251c;
        default: break;
    }

    ctx->pc = 0x2924e8u;

    // 0x2924e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2924e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2924ec: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2924ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2924f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2924f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2924f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2924f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2924f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2924f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2924fc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2924FCu;
    SET_GPR_U32(ctx, 31, 0x292504u);
    ctx->pc = 0x292500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2924FCu;
    // 0x292500: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2924FCu, 0x292504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292504u;
label_292504:
    // 0x292504: 0xc08a61a  jal         func_229868
    ctx->pc = 0x292504u;
    SET_GPR_U32(ctx, 31, 0x29250Cu);
    ctx->pc = 0x292508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292504u;
    // 0x292508: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x292504u, 0x29250Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29250Cu;
label_29250c:
    // 0x29250c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29250Cu;
    {
        const bool branch_taken_0x29250c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29250c) {
            ctx->pc = 0x292510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29250Cu;
            // 0x292510: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292524u;
            goto label_292524;
        }
    }
    ctx->pc = 0x292514u;
    // 0x292514: 0xc087502  jal         func_21D408
    ctx->pc = 0x292514u;
    SET_GPR_U32(ctx, 31, 0x29251Cu);
    ctx->pc = 0x292518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292514u;
    // 0x292518: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x292514u, 0x29251Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29251Cu;
label_29251c:
    // 0x29251c: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x29251cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x292520: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x292520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_292524:
    // 0x292524: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x292524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292528: 0x3e00008  jr          $ra
    ctx->pc = 0x292528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292528u;
        // 0x29252c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292530u;
}
