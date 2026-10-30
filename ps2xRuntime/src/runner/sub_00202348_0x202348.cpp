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

// Function: sub_00202348
// Address: 0x202348 - 0x202398
void sub_00202348_0x202348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202348_0x202348");
#endif

    switch (ctx->pc) {
        case 0x202374u: goto label_202374;
        case 0x20237cu: goto label_20237c;
        case 0x202384u: goto label_202384;
        default: break;
    }

    ctx->pc = 0x202348u;

    // 0x202348: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x202348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20234c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20234cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x202350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x202354: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x202354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202358: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x202358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20235c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x20235Cu;
    {
        const bool branch_taken_0x20235c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20235c) {
            ctx->pc = 0x202360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20235Cu;
            // 0x202360: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202388u;
            goto label_202388;
        }
    }
    ctx->pc = 0x202364u;
    // 0x202364: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x202364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x202368: 0x26040170  addiu       $a0, $s0, 0x170
    ctx->pc = 0x202368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    // 0x20236c: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x20236Cu;
    SET_GPR_U32(ctx, 31, 0x202374u);
    ctx->pc = 0x202370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20236Cu;
    // 0x202370: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x20236Cu, 0x202374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202374u;
label_202374:
    // 0x202374: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x202374u;
    SET_GPR_U32(ctx, 31, 0x20237Cu);
    ctx->pc = 0x202378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202374u;
    // 0x202378: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x202374u, 0x20237Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20237Cu;
label_20237c:
    // 0x20237c: 0xc07431a  jal         func_1D0C68
    ctx->pc = 0x20237Cu;
    SET_GPR_U32(ctx, 31, 0x202384u);
    ctx->pc = 0x202380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20237Cu;
    // 0x202380: 0x26040270  addiu       $a0, $s0, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C68u, 0x20237Cu, 0x202384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202384u;
label_202384:
    // 0x202384: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x202384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_202388:
    // 0x202388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20238c: 0x3e00008  jr          $ra
    ctx->pc = 0x20238Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20238Cu;
        // 0x202390: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20238Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202394u;
    // 0x202394: 0x0  nop
    ctx->pc = 0x202394u;
    // NOP
    ctx->pc = 0x202398u;
}
