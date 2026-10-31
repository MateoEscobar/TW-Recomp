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

// Function: sub_0036D2E8
// Address: 0x36d2e8 - 0x36d348
void sub_0036D2E8_0x36d2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D2E8_0x36d2e8");
#endif

    switch (ctx->pc) {
        case 0x36d308u: goto label_36d308;
        case 0x36d310u: goto label_36d310;
        case 0x36d324u: goto label_36d324;
        case 0x36d330u: goto label_36d330;
        default: break;
    }

    ctx->pc = 0x36d2e8u;

    // 0x36d2e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36d2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36d2ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36d2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d2f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36d2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36d2f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36d2f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d2f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36d2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36d2fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36d2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36d300: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36D300u;
    SET_GPR_U32(ctx, 31, 0x36D308u);
    ctx->pc = 0x36D304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D300u;
    // 0x36d304: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36D300u, 0x36D308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D308u;
label_36d308:
    // 0x36d308: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36D308u;
    SET_GPR_U32(ctx, 31, 0x36D310u);
    ctx->pc = 0x36D30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D308u;
    // 0x36d30c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36D308u, 0x36D310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D310u;
label_36d310:
    // 0x36d310: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36d310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36d314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d318: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36d318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d31c: 0xc102488  jal         func_409220
    ctx->pc = 0x36D31Cu;
    SET_GPR_U32(ctx, 31, 0x36D324u);
    ctx->pc = 0x36D320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D31Cu;
    // 0x36d320: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36D31Cu, 0x36D324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D324u;
label_36d324:
    // 0x36d324: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36d324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d328: 0xc0e18d0  jal         func_386340
    ctx->pc = 0x36D328u;
    SET_GPR_U32(ctx, 31, 0x36D330u);
    ctx->pc = 0x36D32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D328u;
    // 0x36d32c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386340u, 0x36D328u, 0x36D330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D330u;
label_36d330:
    // 0x36d330: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36d330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36d334: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36d334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d338: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36d338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d33c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36d33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d340: 0x3e00008  jr          $ra
    ctx->pc = 0x36D340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D340u;
        // 0x36d344: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D348u;
}
