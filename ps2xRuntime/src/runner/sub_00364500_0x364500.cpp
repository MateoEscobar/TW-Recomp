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

// Function: sub_00364500
// Address: 0x364500 - 0x364578
void sub_00364500_0x364500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364500_0x364500");
#endif

    switch (ctx->pc) {
        case 0x364528u: goto label_364528;
        case 0x364530u: goto label_364530;
        case 0x364544u: goto label_364544;
        case 0x36454cu: goto label_36454c;
        case 0x364558u: goto label_364558;
        default: break;
    }

    ctx->pc = 0x364500u;

    // 0x364500: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x364500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x364504: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x364504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364508: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x364508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36450c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36450cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x364510: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x364510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364514: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x364514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364518: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x364518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36451c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36451cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x364520: 0xc102472  jal         func_4091C8
    ctx->pc = 0x364520u;
    SET_GPR_U32(ctx, 31, 0x364528u);
    ctx->pc = 0x364524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364520u;
    // 0x364524: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x364520u, 0x364528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364528u;
label_364528:
    // 0x364528: 0xc10b108  jal         func_42C420
    ctx->pc = 0x364528u;
    SET_GPR_U32(ctx, 31, 0x364530u);
    ctx->pc = 0x36452Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364528u;
    // 0x36452c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x364528u, 0x364530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364530u;
label_364530:
    // 0x364530: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x364530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364534: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x364534u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x364538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36453c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36453Cu;
    SET_GPR_U32(ctx, 31, 0x364544u);
    ctx->pc = 0x364540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36453Cu;
    // 0x364540: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36453Cu, 0x364544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364544u;
label_364544:
    // 0x364544: 0xc10b108  jal         func_42C420
    ctx->pc = 0x364544u;
    SET_GPR_U32(ctx, 31, 0x36454Cu);
    ctx->pc = 0x364548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364544u;
    // 0x364548: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x364544u, 0x36454Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36454Cu;
label_36454c:
    // 0x36454c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36454cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364550: 0xc0aecf4  jal         func_2BB3D0
    ctx->pc = 0x364550u;
    SET_GPR_U32(ctx, 31, 0x364558u);
    ctx->pc = 0x364554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364550u;
    // 0x364554: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB3D0u, 0x364550u, 0x364558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364558u;
label_364558:
    // 0x364558: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x364558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36455c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36455cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364560: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x364560u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x364564: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x364564u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x364568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x364568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36456c: 0x3e00008  jr          $ra
    ctx->pc = 0x36456Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36456Cu;
        // 0x364570: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36456Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364574u;
    // 0x364574: 0x0  nop
    ctx->pc = 0x364574u;
    // NOP
    ctx->pc = 0x364578u;
}
