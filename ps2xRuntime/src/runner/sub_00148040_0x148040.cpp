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

// Function: sub_00148040
// Address: 0x148040 - 0x1480a0
void sub_00148040_0x148040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148040_0x148040");
#endif

    switch (ctx->pc) {
        case 0x14807cu: goto label_14807c;
        case 0x14808cu: goto label_14808c;
        default: break;
    }

    ctx->pc = 0x148040u;

    // 0x148040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x148040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x148044: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x148044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x148048: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x148048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x14804c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14804cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x148050: 0x80830019  lb          $v1, 0x19($a0)
    ctx->pc = 0x148050u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 25)));
    // 0x148054: 0x460000d  bltz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x148054u;
    {
        const bool branch_taken_0x148054 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x148058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148054u;
        // 0x148058: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148054) {
            ctx->pc = 0x14808Cu;
            goto label_14808c;
        }
    }
    ctx->pc = 0x14805Cu;
    // 0x14805c: 0x24100050  addiu       $s0, $zero, 0x50
    ctx->pc = 0x14805cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x148060: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x148060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x148064: 0x708018  mult        $s0, $v1, $s0
    ctx->pc = 0x148064u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x148068: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x148068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
    // 0x14806c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14806cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148070: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x148070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x148074: 0xc051282  jal         func_144A08
    ctx->pc = 0x148074u;
    SET_GPR_U32(ctx, 31, 0x14807Cu);
    ctx->pc = 0x148078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148074u;
    // 0x148078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A08u, 0x148074u, 0x14807Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14807Cu;
label_14807c:
    // 0x14807c: 0x112827  nor         $a1, $zero, $s1
    ctx->pc = 0x14807cu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 17)));
    // 0x148080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148084: 0xc0513e6  jal         func_144F98
    ctx->pc = 0x148084u;
    SET_GPR_U32(ctx, 31, 0x14808Cu);
    ctx->pc = 0x148088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148084u;
    // 0x148088: 0x452824  and         $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144F98u, 0x148084u, 0x14808Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14808Cu;
label_14808c:
    // 0x14808c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x14808cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148090: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x148090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x148094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148098: 0x3e00008  jr          $ra
    ctx->pc = 0x148098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148098u;
        // 0x14809c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1480A0u;
}
