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

// Function: sub_0032A2F0
// Address: 0x32a2f0 - 0x32a358
void sub_0032A2F0_0x32a2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A2F0_0x32a2f0");
#endif

    switch (ctx->pc) {
        case 0x32a314u: goto label_32a314;
        case 0x32a330u: goto label_32a330;
        case 0x32a344u: goto label_32a344;
        default: break;
    }

    ctx->pc = 0x32a2f0u;

    // 0x32a2f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32a2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32a2f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x32a2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x32a2f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32a2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x32a2fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32a2fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a300: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32a300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a304: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32a304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32a308: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x32a308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a30c: 0xc0ca8d6  jal         func_32A358
    ctx->pc = 0x32A30Cu;
    SET_GPR_U32(ctx, 31, 0x32A314u);
    ctx->pc = 0x32A310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A30Cu;
    // 0x32a310: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A358u, 0x32A30Cu, 0x32A314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A314u;
label_32a314:
    // 0x32a314: 0x83a20000  lb          $v0, 0x0($sp)
    ctx->pc = 0x32a314u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a318: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32A318u;
    {
        const bool branch_taken_0x32a318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A318u;
        // 0x32a31c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a318) {
            ctx->pc = 0x32A338u;
            goto label_32a338;
        }
    }
    ctx->pc = 0x32A320u;
    // 0x32a320: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x32a320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x32a324: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32a324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a328: 0xc0ca8a0  jal         func_32A280
    ctx->pc = 0x32A328u;
    SET_GPR_U32(ctx, 31, 0x32A330u);
    ctx->pc = 0x32A32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A328u;
    // 0x32a32c: 0x8c460018  lw          $a2, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A280u, 0x32A328u, 0x32A330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A330u;
label_32a330:
    // 0x32a330: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32A330u;
    {
        const bool branch_taken_0x32a330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A330u;
        // 0x32a334: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a330) {
            ctx->pc = 0x32A348u;
            goto label_32a348;
        }
    }
    ctx->pc = 0x32A338u;
label_32a338:
    // 0x32a338: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32a338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a33c: 0xc0ca8a0  jal         func_32A280
    ctx->pc = 0x32A33Cu;
    SET_GPR_U32(ctx, 31, 0x32A344u);
    ctx->pc = 0x32A340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A33Cu;
    // 0x32a340: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A280u, 0x32A33Cu, 0x32A344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A344u;
label_32a344:
    // 0x32a344: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x32a344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32a348:
    // 0x32a348: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32a348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32a34c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32a34cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a350: 0x3e00008  jr          $ra
    ctx->pc = 0x32A350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A350u;
        // 0x32a354: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A358u;
}
