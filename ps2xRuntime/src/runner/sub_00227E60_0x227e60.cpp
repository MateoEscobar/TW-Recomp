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

// Function: sub_00227E60
// Address: 0x227e60 - 0x227eb0
void sub_00227E60_0x227e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227E60_0x227e60");
#endif

    switch (ctx->pc) {
        case 0x227e90u: goto label_227e90;
        default: break;
    }

    ctx->pc = 0x227e60u;

    // 0x227e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x227e64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x227e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x227e68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227e6c: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x227e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x227e70: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x227E70u;
    {
        const bool branch_taken_0x227e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E70u;
        // 0x227e74: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227e70) {
            ctx->pc = 0x227E98u;
            goto label_227e98;
        }
    }
    ctx->pc = 0x227E78u;
    // 0x227e78: 0x3405c002  ori         $a1, $zero, 0xC002
    ctx->pc = 0x227e78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49154);
    // 0x227e7c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x227e7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x227e80: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x227e80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x227e84: 0x52878  dsll        $a1, $a1, 1
    ctx->pc = 0x227e84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 1);
    // 0x227e88: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x227E88u;
    SET_GPR_U32(ctx, 31, 0x227E90u);
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x227E88u, 0x227E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227E90u;
label_227e90:
    // 0x227e90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x227E90u;
    {
        const bool branch_taken_0x227e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E90u;
        // 0x227e94: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227e90) {
            ctx->pc = 0x227EA0u;
            goto label_227ea0;
        }
    }
    ctx->pc = 0x227E98u;
label_227e98:
    // 0x227e98: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x227e98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227e9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x227e9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_227ea0:
    // 0x227ea0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227ea4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x227ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x227EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227EA8u;
        // 0x227eac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227EB0u;
}
