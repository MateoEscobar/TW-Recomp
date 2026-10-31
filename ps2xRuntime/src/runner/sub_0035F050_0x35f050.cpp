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

// Function: sub_0035F050
// Address: 0x35f050 - 0x35f0a0
void sub_0035F050_0x35f050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F050_0x35f050");
#endif

    switch (ctx->pc) {
        case 0x35f06cu: goto label_35f06c;
        case 0x35f074u: goto label_35f074;
        case 0x35f07cu: goto label_35f07c;
        case 0x35f088u: goto label_35f088;
        default: break;
    }

    ctx->pc = 0x35f050u;

    // 0x35f050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35f050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35f054: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35f054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f058: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35f058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35f05c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35f05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f060: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35f060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35f064: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F064u;
    SET_GPR_U32(ctx, 31, 0x35F06Cu);
    ctx->pc = 0x35F068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F064u;
    // 0x35f068: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F064u, 0x35F06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F06Cu;
label_35f06c:
    // 0x35f06c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35F06Cu;
    SET_GPR_U32(ctx, 31, 0x35F074u);
    ctx->pc = 0x35F070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F06Cu;
    // 0x35f070: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35F06Cu, 0x35F074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F074u;
label_35f074:
    // 0x35f074: 0xc0a4b1a  jal         func_292C68
    ctx->pc = 0x35F074u;
    SET_GPR_U32(ctx, 31, 0x35F07Cu);
    ctx->pc = 0x35F078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F074u;
    // 0x35f078: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292C68u, 0x35F074u, 0x35F07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F07Cu;
label_35f07c:
    // 0x35f07c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35f07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f080: 0xc102562  jal         func_409588
    ctx->pc = 0x35F080u;
    SET_GPR_U32(ctx, 31, 0x35F088u);
    ctx->pc = 0x35F084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F080u;
    // 0x35f084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x35F080u, 0x35F088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F088u;
label_35f088:
    // 0x35f088: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35f088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f08c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35f08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f090: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35f090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f094: 0x3e00008  jr          $ra
    ctx->pc = 0x35F094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F094u;
        // 0x35f098: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F09Cu;
    // 0x35f09c: 0x0  nop
    ctx->pc = 0x35f09cu;
    // NOP
    ctx->pc = 0x35f0a0u;
}
