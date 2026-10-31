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

// Function: sub_00169508
// Address: 0x169508 - 0x169570
void sub_00169508_0x169508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169508_0x169508");
#endif

    switch (ctx->pc) {
        case 0x169530u: goto label_169530;
        case 0x169548u: goto label_169548;
        case 0x169560u: goto label_169560;
        default: break;
    }

    ctx->pc = 0x169508u;

    // 0x169508: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16950c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x16950cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x169510: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x169510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x169514: 0x24c6caf0  addiu       $a2, $a2, -0x3510
    ctx->pc = 0x169514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953712));
    // 0x169518: 0x249001b0  addiu       $s0, $a0, 0x1B0
    ctx->pc = 0x169518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x16951c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16951cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169524: 0x24050253  addiu       $a1, $zero, 0x253
    ctx->pc = 0x169524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
    // 0x169528: 0xc05905e  jal         func_164178
    ctx->pc = 0x169528u;
    SET_GPR_U32(ctx, 31, 0x169530u);
    ctx->pc = 0x16952Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169528u;
    // 0x16952c: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164178u, 0x169528u, 0x169530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169530u;
label_169530:
    // 0x169530: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x169530u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x169534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169538: 0x24c6cb08  addiu       $a2, $a2, -0x34F8
    ctx->pc = 0x169538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953736));
    // 0x16953c: 0x24050257  addiu       $a1, $zero, 0x257
    ctx->pc = 0x16953cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 599));
    // 0x169540: 0xc05905e  jal         func_164178
    ctx->pc = 0x169540u;
    SET_GPR_U32(ctx, 31, 0x169548u);
    ctx->pc = 0x169544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169540u;
    // 0x169544: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164178u, 0x169540u, 0x169548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169548u;
label_169548:
    // 0x169548: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x169548u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x16954c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16954cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169550: 0x24c6cb20  addiu       $a2, $a2, -0x34E0
    ctx->pc = 0x169550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953760));
    // 0x169554: 0x24050256  addiu       $a1, $zero, 0x256
    ctx->pc = 0x169554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
    // 0x169558: 0xc05905e  jal         func_164178
    ctx->pc = 0x169558u;
    SET_GPR_U32(ctx, 31, 0x169560u);
    ctx->pc = 0x16955Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169558u;
    // 0x16955c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164178u, 0x169558u, 0x169560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169560u;
label_169560:
    // 0x169560: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x169560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169564: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169568: 0x3e00008  jr          $ra
    ctx->pc = 0x169568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169568u;
        // 0x16956c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169570u;
}
