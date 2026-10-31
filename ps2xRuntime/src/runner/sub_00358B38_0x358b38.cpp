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

// Function: sub_00358B38
// Address: 0x358b38 - 0x358b98
void sub_00358B38_0x358b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358B38_0x358b38");
#endif

    switch (ctx->pc) {
        case 0x358b58u: goto label_358b58;
        case 0x358b60u: goto label_358b60;
        case 0x358b74u: goto label_358b74;
        case 0x358b80u: goto label_358b80;
        default: break;
    }

    ctx->pc = 0x358b38u;

    // 0x358b38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x358b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x358b3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x358b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358b40: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x358b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x358b44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x358b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358b48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x358b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x358b4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358b50: 0xc102472  jal         func_4091C8
    ctx->pc = 0x358B50u;
    SET_GPR_U32(ctx, 31, 0x358B58u);
    ctx->pc = 0x358B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358B50u;
    // 0x358b54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x358B50u, 0x358B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358B58u;
label_358b58:
    // 0x358b58: 0xc10b108  jal         func_42C420
    ctx->pc = 0x358B58u;
    SET_GPR_U32(ctx, 31, 0x358B60u);
    ctx->pc = 0x358B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358B58u;
    // 0x358b5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x358B58u, 0x358B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358B60u;
label_358b60:
    // 0x358b60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x358b60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x358b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358b68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x358b68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358b6c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x358B6Cu;
    SET_GPR_U32(ctx, 31, 0x358B74u);
    ctx->pc = 0x358B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358B6Cu;
    // 0x358b70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x358B6Cu, 0x358B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358B74u;
label_358b74:
    // 0x358b74: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x358b74u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x358b78: 0xc08e896  jal         func_23A258
    ctx->pc = 0x358B78u;
    SET_GPR_U32(ctx, 31, 0x358B80u);
    ctx->pc = 0x358B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358B78u;
    // 0x358b7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A258u, 0x358B78u, 0x358B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358B80u;
label_358b80:
    // 0x358b80: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x358b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x358b84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358b84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358b88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x358b88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358b8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358b90: 0x3e00008  jr          $ra
    ctx->pc = 0x358B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358B90u;
        // 0x358b94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358B98u;
}
