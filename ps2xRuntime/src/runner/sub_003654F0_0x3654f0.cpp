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

// Function: sub_003654F0
// Address: 0x3654f0 - 0x365540
void sub_003654F0_0x3654f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003654F0_0x3654f0");
#endif

    switch (ctx->pc) {
        case 0x36550cu: goto label_36550c;
        case 0x365514u: goto label_365514;
        case 0x36551cu: goto label_36551c;
        case 0x365528u: goto label_365528;
        default: break;
    }

    ctx->pc = 0x3654f0u;

    // 0x3654f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3654f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3654f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3654f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3654f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3654f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3654fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3654fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365500: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x365500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x365504: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365504u;
    SET_GPR_U32(ctx, 31, 0x36550Cu);
    ctx->pc = 0x365508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365504u;
    // 0x365508: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365504u, 0x36550Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36550Cu;
label_36550c:
    // 0x36550c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36550Cu;
    SET_GPR_U32(ctx, 31, 0x365514u);
    ctx->pc = 0x365510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36550Cu;
    // 0x365510: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36550Cu, 0x365514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365514u;
label_365514:
    // 0x365514: 0xc08e1fa  jal         func_2387E8
    ctx->pc = 0x365514u;
    SET_GPR_U32(ctx, 31, 0x36551Cu);
    ctx->pc = 0x365518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365514u;
    // 0x365518: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2387E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2387E8u, 0x365514u, 0x36551Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36551Cu;
label_36551c:
    // 0x36551c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36551cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365520: 0xc102562  jal         func_409588
    ctx->pc = 0x365520u;
    SET_GPR_U32(ctx, 31, 0x365528u);
    ctx->pc = 0x365524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365520u;
    // 0x365524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x365520u, 0x365528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365528u;
label_365528:
    // 0x365528: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x365528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36552c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36552cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x365530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365534: 0x3e00008  jr          $ra
    ctx->pc = 0x365534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365534u;
        // 0x365538: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36553Cu;
    // 0x36553c: 0x0  nop
    ctx->pc = 0x36553cu;
    // NOP
    ctx->pc = 0x365540u;
}
