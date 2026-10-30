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

// Function: sub_001D5808
// Address: 0x1d5808 - 0x1d5870
void sub_001D5808_0x1d5808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5808_0x1d5808");
#endif

    switch (ctx->pc) {
        case 0x1d5824u: goto label_1d5824;
        case 0x1d5844u: goto label_1d5844;
        case 0x1d5860u: goto label_1d5860;
        default: break;
    }

    ctx->pc = 0x1d5808u;

    // 0x1d5808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d580c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d580cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d5810: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5810u;
    {
        const bool branch_taken_0x1d5810 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D5814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5810u;
        // 0x1d5814: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5810) {
            ctx->pc = 0x1D582Cu;
            goto label_1d582c;
        }
    }
    ctx->pc = 0x1D5818u;
    // 0x1d5818: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d5818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d581c: 0xc076a74  jal         func_1DA9D0
    ctx->pc = 0x1D581Cu;
    SET_GPR_U32(ctx, 31, 0x1D5824u);
    ctx->pc = 0x1D5820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D581Cu;
    // 0x1d5820: 0x8c44ecec  lw          $a0, -0x1314($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA9D0u, 0x1D581Cu, 0x1D5824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5824u;
label_1d5824:
    // 0x1d5824: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D5824u;
    {
        const bool branch_taken_0x1d5824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5824u;
        // 0x1d5828: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5824) {
            ctx->pc = 0x1D5864u;
            goto label_1d5864;
        }
    }
    ctx->pc = 0x1D582Cu;
label_1d582c:
    // 0x1d582c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d582cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d5830: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5830u;
    {
        const bool branch_taken_0x1d5830 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D5834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5830u;
        // 0x1d5834: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5830) {
            ctx->pc = 0x1D584Cu;
            goto label_1d584c;
        }
    }
    ctx->pc = 0x1D5838u;
    // 0x1d5838: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d5838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d583c: 0xc076a6e  jal         func_1DA9B8
    ctx->pc = 0x1D583Cu;
    SET_GPR_U32(ctx, 31, 0x1D5844u);
    ctx->pc = 0x1D5840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D583Cu;
    // 0x1d5840: 0x8c44ecec  lw          $a0, -0x1314($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA9B8u, 0x1D583Cu, 0x1D5844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5844u;
label_1d5844:
    // 0x1d5844: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5844u;
    {
        const bool branch_taken_0x1d5844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5844u;
        // 0x1d5848: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5844) {
            ctx->pc = 0x1D5864u;
            goto label_1d5864;
        }
    }
    ctx->pc = 0x1D584Cu;
label_1d584c:
    // 0x1d584c: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D584Cu;
    {
        const bool branch_taken_0x1d584c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D5850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D584Cu;
        // 0x1d5850: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d584c) {
            ctx->pc = 0x1D5864u;
            goto label_1d5864;
        }
    }
    ctx->pc = 0x1D5854u;
    // 0x1d5854: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d5854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d5858: 0xc076a6e  jal         func_1DA9B8
    ctx->pc = 0x1D5858u;
    SET_GPR_U32(ctx, 31, 0x1D5860u);
    ctx->pc = 0x1D585Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5858u;
    // 0x1d585c: 0x8c44ecec  lw          $a0, -0x1314($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA9B8u, 0x1D5858u, 0x1D5860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5860u;
label_1d5860:
    // 0x1d5860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5864:
    // 0x1d5864: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5864u;
        // 0x1d5868: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D586Cu;
    // 0x1d586c: 0x0  nop
    ctx->pc = 0x1d586cu;
    // NOP
    ctx->pc = 0x1d5870u;
}
