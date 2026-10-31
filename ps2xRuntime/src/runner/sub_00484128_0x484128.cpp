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

// Function: sub_00484128
// Address: 0x484128 - 0x484168
void sub_00484128_0x484128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00484128_0x484128");
#endif

    switch (ctx->pc) {
        case 0x484154u: goto label_484154;
        default: break;
    }

    ctx->pc = 0x484128u;

    // 0x484128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x484128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48412c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x48412cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x484130: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x484130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x484134: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x484134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x484138: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x484138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x48413c: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x48413cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x484140: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x484140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x484144: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x484144u;
    {
        const bool branch_taken_0x484144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x484148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484144u;
        // 0x484148: 0x26020050  addiu       $v0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484144) {
            ctx->pc = 0x484158u;
            goto label_484158;
        }
    }
    ctx->pc = 0x48414Cu;
    // 0x48414c: 0xc121c20  jal         func_487080
    ctx->pc = 0x48414Cu;
    SET_GPR_U32(ctx, 31, 0x484154u);
    ctx->pc = 0x487080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487080u, 0x48414Cu, 0x484154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484154u;
label_484154:
    // 0x484154: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x484154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_484158:
    // 0x484158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x484158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48415c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x48415cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x484160: 0x3e00008  jr          $ra
    ctx->pc = 0x484160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484160u;
        // 0x484164: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x484168u;
}
