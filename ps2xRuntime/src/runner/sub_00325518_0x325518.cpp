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

// Function: sub_00325518
// Address: 0x325518 - 0x325570
void sub_00325518_0x325518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325518_0x325518");
#endif

    switch (ctx->pc) {
        case 0x32552cu: goto label_32552c;
        case 0x325534u: goto label_325534;
        case 0x325540u: goto label_325540;
        case 0x325548u: goto label_325548;
        case 0x325550u: goto label_325550;
        case 0x32555cu: goto label_32555c;
        default: break;
    }

    ctx->pc = 0x325518u;

    // 0x325518: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x325518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32551c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32551cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x325520: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325524: 0xc0c9054  jal         func_324150
    ctx->pc = 0x325524u;
    SET_GPR_U32(ctx, 31, 0x32552Cu);
    ctx->pc = 0x325528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325524u;
    // 0x325528: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324150u, 0x325524u, 0x32552Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32552Cu;
label_32552c:
    // 0x32552c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x32552Cu;
    SET_GPR_U32(ctx, 31, 0x325534u);
    ctx->pc = 0x325530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32552Cu;
    // 0x325530: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x32552Cu, 0x325534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325534u;
label_325534:
    // 0x325534: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x325534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325538: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x325538u;
    SET_GPR_U32(ctx, 31, 0x325540u);
    ctx->pc = 0x32553Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325538u;
    // 0x32553c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x325538u, 0x325540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325540u;
label_325540:
    // 0x325540: 0xc0c9052  jal         func_324148
    ctx->pc = 0x325540u;
    SET_GPR_U32(ctx, 31, 0x325548u);
    ctx->pc = 0x325544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325540u;
    // 0x325544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324148u, 0x325540u, 0x325548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325548u;
label_325548:
    // 0x325548: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x325548u;
    SET_GPR_U32(ctx, 31, 0x325550u);
    ctx->pc = 0x32554Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325548u;
    // 0x32554c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x325548u, 0x325550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325550u;
label_325550:
    // 0x325550: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x325550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325554: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x325554u;
    SET_GPR_U32(ctx, 31, 0x32555Cu);
    ctx->pc = 0x325558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325554u;
    // 0x325558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x325554u, 0x32555Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32555Cu;
label_32555c:
    // 0x32555c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32555cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325560: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x325560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x325564: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x325564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325568: 0x3e00008  jr          $ra
    ctx->pc = 0x325568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325568u;
        // 0x32556c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325570u;
}
