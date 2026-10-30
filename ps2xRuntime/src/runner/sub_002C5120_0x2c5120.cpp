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

// Function: sub_002C5120
// Address: 0x2c5120 - 0x2c5158
void sub_002C5120_0x2c5120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5120_0x2c5120");
#endif

    switch (ctx->pc) {
        case 0x2c5134u: goto label_2c5134;
        default: break;
    }

    ctx->pc = 0x2c5120u;

    // 0x2c5120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c5120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c5124: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c5124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c5128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c5128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c512c: 0xc0b1402  jal         func_2C5008
    ctx->pc = 0x2C512Cu;
    SET_GPR_U32(ctx, 31, 0x2C5134u);
    ctx->pc = 0x2C5130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C512Cu;
    // 0x2c5130: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5008u, 0x2C512Cu, 0x2C5134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5134u;
label_2c5134:
    // 0x2c5134: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2c5134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2c5138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c5138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c513c: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x2c513cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x2c5140: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2c5140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2c5144: 0x244205dc  addiu       $v0, $v0, 0x5DC
    ctx->pc = 0x2c5144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1500));
    // 0x2c5148: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2c5148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2c514c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c514cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5150: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5150u;
        // 0x2c5154: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5158u;
}
