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

// Function: sub_002FE658
// Address: 0x2fe658 - 0x2fe6a8
void sub_002FE658_0x2fe658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE658_0x2fe658");
#endif

    switch (ctx->pc) {
        case 0x2fe66cu: goto label_2fe66c;
        case 0x2fe694u: goto label_2fe694;
        default: break;
    }

    ctx->pc = 0x2fe658u;

    // 0x2fe658: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fe658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fe65c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fe65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fe660: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fe660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fe664: 0xc0bf8f6  jal         func_2FE3D8
    ctx->pc = 0x2FE664u;
    SET_GPR_U32(ctx, 31, 0x2FE66Cu);
    ctx->pc = 0x2FE668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE664u;
    // 0x2fe668: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE3D8u, 0x2FE664u, 0x2FE66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE66Cu;
label_2fe66c:
    // 0x2fe66c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE66Cu;
    {
        const bool branch_taken_0x2fe66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fe66c) {
            ctx->pc = 0x2FE670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE66Cu;
            // 0x2fe670: 0x92030014  lbu         $v1, 0x14($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE67Cu;
            goto label_2fe67c;
        }
    }
    ctx->pc = 0x2FE674u;
    // 0x2fe674: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2FE674u;
    {
        const bool branch_taken_0x2fe674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE674u;
        // 0x2fe678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe674) {
            ctx->pc = 0x2FE698u;
            goto label_2fe698;
        }
    }
    ctx->pc = 0x2FE67Cu;
label_2fe67c:
    // 0x2fe67c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fe67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fe680: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FE680u;
    {
        const bool branch_taken_0x2fe680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fe680) {
            ctx->pc = 0x2FE684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE680u;
            // 0x2fe684: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE69Cu;
            goto label_2fe69c;
        }
    }
    ctx->pc = 0x2FE688u;
    // 0x2fe688: 0x82050015  lb          $a1, 0x15($s0)
    ctx->pc = 0x2fe688u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
    // 0x2fe68c: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2FE68Cu;
    SET_GPR_U32(ctx, 31, 0x2FE694u);
    ctx->pc = 0x2FE690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE68Cu;
    // 0x2fe690: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2FE68Cu, 0x2FE694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE694u;
label_2fe694:
    // 0x2fe694: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fe694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fe698:
    // 0x2fe698: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fe698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fe69c:
    // 0x2fe69c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fe69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE6A0u;
        // 0x2fe6a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE6A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE6A8u;
}
