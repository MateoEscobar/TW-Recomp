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

// Function: sub_00323568
// Address: 0x323568 - 0x3235b8
void sub_00323568_0x323568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323568_0x323568");
#endif

    switch (ctx->pc) {
        case 0x323578u: goto label_323578;
        case 0x323598u: goto label_323598;
        default: break;
    }

    ctx->pc = 0x323568u;

    // 0x323568: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32356c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32356cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x323570: 0xc0c8cb0  jal         func_3232C0
    ctx->pc = 0x323570u;
    SET_GPR_U32(ctx, 31, 0x323578u);
    ctx->pc = 0x3232C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3232C0u, 0x323570u, 0x323578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323578u;
label_323578:
    // 0x323578: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x323578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32357c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x32357Cu;
    {
        const bool branch_taken_0x32357c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x323580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32357Cu;
        // 0x323580: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32357c) {
            ctx->pc = 0x3235A4u;
            goto label_3235a4;
        }
    }
    ctx->pc = 0x323584u;
    // 0x323584: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x323584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x323588: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x323588u;
    {
        const bool branch_taken_0x323588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323588u;
        // 0x32358c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323588) {
            ctx->pc = 0x32359Cu;
            goto label_32359c;
        }
    }
    ctx->pc = 0x323590u;
    // 0x323590: 0xc0ccda2  jal         func_333688
    ctx->pc = 0x323590u;
    SET_GPR_U32(ctx, 31, 0x323598u);
    ctx->pc = 0x333688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333688u, 0x323590u, 0x323598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323598u;
label_323598:
    // 0x323598: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x323598u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_32359c:
    // 0x32359c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x32359Cu;
    {
        const bool branch_taken_0x32359c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3235A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32359Cu;
        // 0x3235a0: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32359c) {
            ctx->pc = 0x3235A8u;
            goto label_3235a8;
        }
    }
    ctx->pc = 0x3235A4u;
label_3235a4:
    // 0x3235a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3235a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3235a8:
    // 0x3235a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3235a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3235ac: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3235acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3235b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3235B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3235B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3235B0u;
        // 0x3235b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3235B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3235B8u;
}
