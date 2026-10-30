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

// Function: sub_00235B68
// Address: 0x235b68 - 0x235bc8
void sub_00235B68_0x235b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235B68_0x235b68");
#endif

    switch (ctx->pc) {
        case 0x235b84u: goto label_235b84;
        case 0x235b8cu: goto label_235b8c;
        default: break;
    }

    ctx->pc = 0x235b68u;

    // 0x235b68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x235b6c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x235b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x235b70: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x235b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x235b74: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x235b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x235b7c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x235B7Cu;
    SET_GPR_U32(ctx, 31, 0x235B84u);
    ctx->pc = 0x235B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235B7Cu;
    // 0x235b80: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x235B7Cu, 0x235B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235B84u;
label_235b84:
    // 0x235b84: 0xc08a61a  jal         func_229868
    ctx->pc = 0x235B84u;
    SET_GPR_U32(ctx, 31, 0x235B8Cu);
    ctx->pc = 0x235B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235B84u;
    // 0x235b88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x235B84u, 0x235B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235B8Cu;
label_235b8c:
    // 0x235b8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x235b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b90: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x235B90u;
    {
        const bool branch_taken_0x235b90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x235B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B90u;
        // 0x235b94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235b90) {
            ctx->pc = 0x235BB8u;
            goto label_235bb8;
        }
    }
    ctx->pc = 0x235B98u;
    // 0x235b98: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x235B98u;
    {
        const bool branch_taken_0x235b98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x235B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B98u;
        // 0x235b9c: 0xdc8200e0  ld          $v0, 0xE0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235b98) {
            ctx->pc = 0x235BACu;
            goto label_235bac;
        }
    }
    ctx->pc = 0x235BA0u;
    // 0x235ba0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x235ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x235ba4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x235BA4u;
    {
        const bool branch_taken_0x235ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BA4u;
        // 0x235ba8: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ba4) {
            ctx->pc = 0x235BB4u;
            goto label_235bb4;
        }
    }
    ctx->pc = 0x235BACu;
label_235bac:
    // 0x235bac: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x235bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x235bb0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x235bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_235bb4:
    // 0x235bb4: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x235bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
label_235bb8:
    // 0x235bb8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x235bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235bbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x235BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BC0u;
        // 0x235bc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235BC8u;
}
