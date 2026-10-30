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

// Function: sub_0039AE48
// Address: 0x39ae48 - 0x39aea0
void sub_0039AE48_0x39ae48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039AE48_0x39ae48");
#endif

    switch (ctx->pc) {
        case 0x39ae5cu: goto label_39ae5c;
        case 0x39ae78u: goto label_39ae78;
        case 0x39ae84u: goto label_39ae84;
        case 0x39ae90u: goto label_39ae90;
        default: break;
    }

    ctx->pc = 0x39ae48u;

    // 0x39ae48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39ae48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39ae4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39ae4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x39ae50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39ae50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39ae54: 0xc051048  jal         func_144120
    ctx->pc = 0x39AE54u;
    SET_GPR_U32(ctx, 31, 0x39AE5Cu);
    ctx->pc = 0x39AE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AE54u;
    // 0x39ae58: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x39AE54u, 0x39AE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AE5Cu;
label_39ae5c:
    // 0x39ae5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39ae5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ae60: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39AE60u;
    {
        const bool branch_taken_0x39ae60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AE60u;
        // 0x39ae64: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ae60) {
            ctx->pc = 0x39AE70u;
            goto label_39ae70;
        }
    }
    ctx->pc = 0x39AE68u;
    // 0x39ae68: 0x24425548  addiu       $v0, $v0, 0x5548
    ctx->pc = 0x39ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21832));
    // 0x39ae6c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x39ae6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_39ae70:
    // 0x39ae70: 0xc051048  jal         func_144120
    ctx->pc = 0x39AE70u;
    SET_GPR_U32(ctx, 31, 0x39AE78u);
    ctx->pc = 0x39AE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AE70u;
    // 0x39ae74: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x39AE70u, 0x39AE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AE78u;
label_39ae78:
    // 0x39ae78: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x39ae78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x39ae7c: 0xc051048  jal         func_144120
    ctx->pc = 0x39AE7Cu;
    SET_GPR_U32(ctx, 31, 0x39AE84u);
    ctx->pc = 0x39AE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AE7Cu;
    // 0x39ae80: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x39AE7Cu, 0x39AE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AE84u;
label_39ae84:
    // 0x39ae84: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x39ae84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x39ae88: 0xc051032  jal         func_1440C8
    ctx->pc = 0x39AE88u;
    SET_GPR_U32(ctx, 31, 0x39AE90u);
    ctx->pc = 0x39AE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AE88u;
    // 0x39ae8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1440C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1440C8u, 0x39AE88u, 0x39AE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AE90u;
label_39ae90:
    // 0x39ae90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39ae90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39ae94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39ae94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39ae98: 0x3e00008  jr          $ra
    ctx->pc = 0x39AE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39AE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AE98u;
        // 0x39ae9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39AEA0u;
}
