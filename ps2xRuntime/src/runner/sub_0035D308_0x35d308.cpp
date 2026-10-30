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

// Function: sub_0035D308
// Address: 0x35d308 - 0x35d360
void sub_0035D308_0x35d308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D308_0x35d308");
#endif

    switch (ctx->pc) {
        case 0x35d324u: goto label_35d324;
        case 0x35d32cu: goto label_35d32c;
        case 0x35d334u: goto label_35d334;
        case 0x35d33cu: goto label_35d33c;
        case 0x35d348u: goto label_35d348;
        default: break;
    }

    ctx->pc = 0x35d308u;

    // 0x35d308: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35d308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35d30c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35d30cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d310: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35d310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35d314: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35d314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35d318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35d31c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D31Cu;
    SET_GPR_U32(ctx, 31, 0x35D324u);
    ctx->pc = 0x35D320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D31Cu;
    // 0x35d320: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D31Cu, 0x35D324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D324u;
label_35d324:
    // 0x35d324: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35D324u;
    SET_GPR_U32(ctx, 31, 0x35D32Cu);
    ctx->pc = 0x35D328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D324u;
    // 0x35d328: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35D324u, 0x35D32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D32Cu;
label_35d32c:
    // 0x35d32c: 0xc08eb72  jal         func_23ADC8
    ctx->pc = 0x35D32Cu;
    SET_GPR_U32(ctx, 31, 0x35D334u);
    ctx->pc = 0x35D330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D32Cu;
    // 0x35d330: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23ADC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ADC8u, 0x35D32Cu, 0x35D334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D334u;
label_35d334:
    // 0x35d334: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x35D334u;
    SET_GPR_U32(ctx, 31, 0x35D33Cu);
    ctx->pc = 0x35D338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D334u;
    // 0x35d338: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x35D334u, 0x35D33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D33Cu;
label_35d33c:
    // 0x35d33c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35d33cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d340: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x35D340u;
    SET_GPR_U32(ctx, 31, 0x35D348u);
    ctx->pc = 0x35D344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D340u;
    // 0x35d344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x35D340u, 0x35D348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D348u;
label_35d348:
    // 0x35d348: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35d348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d34c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35d350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d354: 0x3e00008  jr          $ra
    ctx->pc = 0x35D354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D354u;
        // 0x35d358: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D35Cu;
    // 0x35d35c: 0x0  nop
    ctx->pc = 0x35d35cu;
    // NOP
    ctx->pc = 0x35d360u;
}
