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

// Function: sub_00371160
// Address: 0x371160 - 0x371198
void sub_00371160_0x371160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371160_0x371160");
#endif

    switch (ctx->pc) {
        case 0x371174u: goto label_371174;
        case 0x37117cu: goto label_37117c;
        case 0x371184u: goto label_371184;
        default: break;
    }

    ctx->pc = 0x371160u;

    // 0x371160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371164: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x371164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x371168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37116c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37116Cu;
    SET_GPR_U32(ctx, 31, 0x371174u);
    ctx->pc = 0x371170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37116Cu;
    // 0x371170: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37116Cu, 0x371174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371174u;
label_371174:
    // 0x371174: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x371174u;
    SET_GPR_U32(ctx, 31, 0x37117Cu);
    ctx->pc = 0x371178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371174u;
    // 0x371178: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x371174u, 0x37117Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37117Cu;
label_37117c:
    // 0x37117c: 0xc045034  jal         func_1140D0
    ctx->pc = 0x37117Cu;
    SET_GPR_U32(ctx, 31, 0x371184u);
    ctx->pc = 0x371180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37117Cu;
    // 0x371180: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1140D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1140D0u, 0x37117Cu, 0x371184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371184u;
label_371184:
    // 0x371184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x371184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371188: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x371188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37118c: 0x3e00008  jr          $ra
    ctx->pc = 0x37118Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37118Cu;
        // 0x371190: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37118Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371194u;
    // 0x371194: 0x0  nop
    ctx->pc = 0x371194u;
    // NOP
    ctx->pc = 0x371198u;
}
