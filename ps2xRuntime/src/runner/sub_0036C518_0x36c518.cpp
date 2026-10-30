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

// Function: sub_0036C518
// Address: 0x36c518 - 0x36c568
void sub_0036C518_0x36c518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C518_0x36c518");
#endif

    switch (ctx->pc) {
        case 0x36c534u: goto label_36c534;
        case 0x36c53cu: goto label_36c53c;
        case 0x36c544u: goto label_36c544;
        case 0x36c550u: goto label_36c550;
        default: break;
    }

    ctx->pc = 0x36c518u;

    // 0x36c518: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36c518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36c51c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36c51cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c520: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x36c520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x36c524: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36c524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c52c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36C52Cu;
    SET_GPR_U32(ctx, 31, 0x36C534u);
    ctx->pc = 0x36C530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C52Cu;
    // 0x36c530: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36C52Cu, 0x36C534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C534u;
label_36c534:
    // 0x36c534: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36C534u;
    SET_GPR_U32(ctx, 31, 0x36C53Cu);
    ctx->pc = 0x36C538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C534u;
    // 0x36c538: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36C534u, 0x36C53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C53Cu;
label_36c53c:
    // 0x36c53c: 0xc1075aa  jal         func_41D6A8
    ctx->pc = 0x36C53Cu;
    SET_GPR_U32(ctx, 31, 0x36C544u);
    ctx->pc = 0x36C540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C53Cu;
    // 0x36c540: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D6A8u, 0x36C53Cu, 0x36C544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C544u;
label_36c544:
    // 0x36c544: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36c544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c548: 0xc102542  jal         func_409508
    ctx->pc = 0x36C548u;
    SET_GPR_U32(ctx, 31, 0x36C550u);
    ctx->pc = 0x36C54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C548u;
    // 0x36c54c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409508u, 0x36C548u, 0x36C550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C550u;
label_36c550:
    // 0x36c550: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x36c550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c554: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36c554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c55c: 0x3e00008  jr          $ra
    ctx->pc = 0x36C55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C55Cu;
        // 0x36c560: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C564u;
    // 0x36c564: 0x0  nop
    ctx->pc = 0x36c564u;
    // NOP
    ctx->pc = 0x36c568u;
}
