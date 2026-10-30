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

// Function: sub_0025D2D0
// Address: 0x25d2d0 - 0x25d348
void sub_0025D2D0_0x25d2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D2D0_0x25d2d0");
#endif

    switch (ctx->pc) {
        case 0x25d2e4u: goto label_25d2e4;
        case 0x25d304u: goto label_25d304;
        case 0x25d30cu: goto label_25d30c;
        case 0x25d320u: goto label_25d320;
        case 0x25d328u: goto label_25d328;
        case 0x25d338u: goto label_25d338;
        default: break;
    }

    ctx->pc = 0x25d2d0u;

    // 0x25d2d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25d2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25d2d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25d2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25d2d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25d2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25d2dc: 0xc089fe4  jal         func_227F90
    ctx->pc = 0x25D2DCu;
    SET_GPR_U32(ctx, 31, 0x25D2E4u);
    ctx->pc = 0x25D2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D2DCu;
    // 0x25d2e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x25D2DCu, 0x25D2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D2E4u;
label_25d2e4:
    // 0x25d2e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D2E4u;
    {
        const bool branch_taken_0x25d2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d2e4) {
            ctx->pc = 0x25D2F4u;
            goto label_25d2f4;
        }
    }
    ctx->pc = 0x25D2ECu;
    // 0x25d2ec: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x25d2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x25d2f0: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x25d2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_25d2f4:
    // 0x25d2f4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x25d2f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x25d2f8: 0x52db8  dsll        $a1, $a1, 22
    ctx->pc = 0x25d2f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 22);
    // 0x25d2fc: 0xc089988  jal         func_226620
    ctx->pc = 0x25D2FCu;
    SET_GPR_U32(ctx, 31, 0x25D304u);
    ctx->pc = 0x25D300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D2FCu;
    // 0x25d300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x25D2FCu, 0x25D304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D304u;
label_25d304:
    // 0x25d304: 0xc088ee6  jal         func_223B98
    ctx->pc = 0x25D304u;
    SET_GPR_U32(ctx, 31, 0x25D30Cu);
    ctx->pc = 0x25D308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D304u;
    // 0x25d308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x25D304u, 0x25D30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D30Cu;
label_25d30c:
    // 0x25d30c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25D30Cu;
    {
        const bool branch_taken_0x25d30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D30Cu;
        // 0x25d310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d30c) {
            ctx->pc = 0x25D320u;
            goto label_25d320;
        }
    }
    ctx->pc = 0x25D314u;
    // 0x25d314: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25d314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d318: 0xc08bd3e  jal         func_22F4F8
    ctx->pc = 0x25D318u;
    SET_GPR_U32(ctx, 31, 0x25D320u);
    ctx->pc = 0x25D31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D318u;
    // 0x25d31c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F4F8u, 0x25D318u, 0x25D320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D320u;
label_25d320:
    // 0x25d320: 0xc088ef0  jal         func_223BC0
    ctx->pc = 0x25D320u;
    SET_GPR_U32(ctx, 31, 0x25D328u);
    ctx->pc = 0x25D324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D320u;
    // 0x25d324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x25D320u, 0x25D328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D328u;
label_25d328:
    // 0x25d328: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D328u;
    {
        const bool branch_taken_0x25d328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D328u;
        // 0x25d32c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d328) {
            ctx->pc = 0x25D338u;
            goto label_25d338;
        }
    }
    ctx->pc = 0x25D330u;
    // 0x25d330: 0xc08be78  jal         func_22F9E0
    ctx->pc = 0x25D330u;
    SET_GPR_U32(ctx, 31, 0x25D338u);
    ctx->pc = 0x25D334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D330u;
    // 0x25d334: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F9E0u, 0x25D330u, 0x25D338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D338u;
label_25d338:
    // 0x25d338: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25d338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d33c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25d33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d340: 0x3e00008  jr          $ra
    ctx->pc = 0x25D340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D340u;
        // 0x25d344: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D348u;
}
