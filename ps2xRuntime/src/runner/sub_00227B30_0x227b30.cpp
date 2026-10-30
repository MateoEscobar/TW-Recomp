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

// Function: sub_00227B30
// Address: 0x227b30 - 0x227b78
void sub_00227B30_0x227b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227B30_0x227b30");
#endif

    switch (ctx->pc) {
        case 0x227b4cu: goto label_227b4c;
        case 0x227b58u: goto label_227b58;
        case 0x227b60u: goto label_227b60;
        case 0x227b68u: goto label_227b68;
        default: break;
    }

    ctx->pc = 0x227b30u;

    // 0x227b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x227b34: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x227b34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x227b38: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x227b38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x227b3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x227b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x227b40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227b44: 0xc089974  jal         func_2265D0
    ctx->pc = 0x227B44u;
    SET_GPR_U32(ctx, 31, 0x227B4Cu);
    ctx->pc = 0x227B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227B44u;
    // 0x227b48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x227B44u, 0x227B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227B4Cu;
label_227b4c:
    // 0x227b4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227b50: 0xc094fb4  jal         func_253ED0
    ctx->pc = 0x227B50u;
    SET_GPR_U32(ctx, 31, 0x227B58u);
    ctx->pc = 0x227B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227B50u;
    // 0x227b54: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x227B50u, 0x227B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227B58u;
label_227b58:
    // 0x227b58: 0xc08840e  jal         func_221038
    ctx->pc = 0x227B58u;
    SET_GPR_U32(ctx, 31, 0x227B60u);
    ctx->pc = 0x227B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227B58u;
    // 0x227b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221038u, 0x227B58u, 0x227B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227B60u;
label_227b60:
    // 0x227b60: 0xc0911ac  jal         func_2446B0
    ctx->pc = 0x227B60u;
    SET_GPR_U32(ctx, 31, 0x227B68u);
    ctx->pc = 0x227B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227B60u;
    // 0x227b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2446B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2446B0u, 0x227B60u, 0x227B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227B68u;
label_227b68:
    // 0x227b68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x227b68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227b6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227b70: 0x3e00008  jr          $ra
    ctx->pc = 0x227B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B70u;
        // 0x227b74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227B78u;
}
