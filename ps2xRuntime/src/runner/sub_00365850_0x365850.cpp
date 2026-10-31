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

// Function: sub_00365850
// Address: 0x365850 - 0x3658c0
void sub_00365850_0x365850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365850_0x365850");
#endif

    switch (ctx->pc) {
        case 0x365870u: goto label_365870;
        case 0x365878u: goto label_365878;
        case 0x365880u: goto label_365880;
        case 0x365894u: goto label_365894;
        case 0x3658a4u: goto label_3658a4;
        default: break;
    }

    ctx->pc = 0x365850u;

    // 0x365850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x365850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x365854: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x365854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365858: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x365858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36585c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36585cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365860: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x365860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x365864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x365864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x365868: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365868u;
    SET_GPR_U32(ctx, 31, 0x365870u);
    ctx->pc = 0x36586Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365868u;
    // 0x36586c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365868u, 0x365870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365870u;
label_365870:
    // 0x365870: 0xc10b108  jal         func_42C420
    ctx->pc = 0x365870u;
    SET_GPR_U32(ctx, 31, 0x365878u);
    ctx->pc = 0x365874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365870u;
    // 0x365874: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x365870u, 0x365878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365878u;
label_365878:
    // 0x365878: 0xc046e48  jal         func_11B920
    ctx->pc = 0x365878u;
    SET_GPR_U32(ctx, 31, 0x365880u);
    ctx->pc = 0x36587Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365878u;
    // 0x36587c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B920u, 0x365878u, 0x365880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365880u;
label_365880:
    // 0x365880: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x365880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x365884: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x365884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36588c: 0xc1026b2  jal         func_409AC8
    ctx->pc = 0x36588Cu;
    SET_GPR_U32(ctx, 31, 0x365894u);
    ctx->pc = 0x365890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36588Cu;
    // 0x365890: 0x24a59298  addiu       $a1, $a1, -0x6D68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409AC8u, 0x36588Cu, 0x365894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365894u;
label_365894:
    // 0x365894: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x365894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36589c: 0xc10254e  jal         func_409538
    ctx->pc = 0x36589Cu;
    SET_GPR_U32(ctx, 31, 0x3658A4u);
    ctx->pc = 0x3658A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36589Cu;
    // 0x3658a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409538u, 0x36589Cu, 0x3658A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3658A4u;
label_3658a4:
    // 0x3658a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3658a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3658a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3658a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3658ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3658acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3658b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3658b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3658b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3658B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3658B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3658B4u;
        // 0x3658b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3658B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3658BCu;
    // 0x3658bc: 0x0  nop
    ctx->pc = 0x3658bcu;
    // NOP
    ctx->pc = 0x3658c0u;
}
