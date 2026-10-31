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

// Function: sub_00235C28
// Address: 0x235c28 - 0x235c88
void sub_00235C28_0x235c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235C28_0x235c28");
#endif

    switch (ctx->pc) {
        case 0x235c44u: goto label_235c44;
        case 0x235c4cu: goto label_235c4c;
        default: break;
    }

    ctx->pc = 0x235c28u;

    // 0x235c28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x235c2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x235c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x235c30: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x235c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x235c34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x235c34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x235c3c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x235C3Cu;
    SET_GPR_U32(ctx, 31, 0x235C44u);
    ctx->pc = 0x235C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235C3Cu;
    // 0x235c40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x235C3Cu, 0x235C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235C44u;
label_235c44:
    // 0x235c44: 0xc08a61a  jal         func_229868
    ctx->pc = 0x235C44u;
    SET_GPR_U32(ctx, 31, 0x235C4Cu);
    ctx->pc = 0x235C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235C44u;
    // 0x235c48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x235C44u, 0x235C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235C4Cu;
label_235c4c:
    // 0x235c4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x235c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c50: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x235C50u;
    {
        const bool branch_taken_0x235c50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x235C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C50u;
        // 0x235c54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c50) {
            ctx->pc = 0x235C78u;
            goto label_235c78;
        }
    }
    ctx->pc = 0x235C58u;
    // 0x235c58: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x235C58u;
    {
        const bool branch_taken_0x235c58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x235C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C58u;
        // 0x235c5c: 0xdc8200e0  ld          $v0, 0xE0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c58) {
            ctx->pc = 0x235C6Cu;
            goto label_235c6c;
        }
    }
    ctx->pc = 0x235C60u;
    // 0x235c60: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x235c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x235c64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x235C64u;
    {
        const bool branch_taken_0x235c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C64u;
        // 0x235c68: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c64) {
            ctx->pc = 0x235C74u;
            goto label_235c74;
        }
    }
    ctx->pc = 0x235C6Cu;
label_235c6c:
    // 0x235c6c: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x235c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x235c70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x235c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_235c74:
    // 0x235c74: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x235c74u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
label_235c78:
    // 0x235c78: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x235c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235c7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235c80: 0x3e00008  jr          $ra
    ctx->pc = 0x235C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C80u;
        // 0x235c84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235C88u;
}
