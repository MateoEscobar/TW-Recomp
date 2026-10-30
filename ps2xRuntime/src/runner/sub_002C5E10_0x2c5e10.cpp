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

// Function: sub_002C5E10
// Address: 0x2c5e10 - 0x2c5e50
void sub_002C5E10_0x2c5e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5E10_0x2c5e10");
#endif

    switch (ctx->pc) {
        case 0x2c5e38u: goto label_2c5e38;
        default: break;
    }

    ctx->pc = 0x2c5e10u;

    // 0x2c5e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c5e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c5e14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c5e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c5e18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c5e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c5e1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c5e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5e20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c5e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c5e24: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c5e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c5e28: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C5E28u;
    {
        const bool branch_taken_0x2c5e28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5E28u;
        // 0x2c5e2c: 0x2405014e  addiu       $a1, $zero, 0x14E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5e28) {
            ctx->pc = 0x2C5E40u;
            goto label_2c5e40;
        }
    }
    ctx->pc = 0x2C5E30u;
    // 0x2c5e30: 0xc0886a8  jal         func_221AA0
    ctx->pc = 0x2C5E30u;
    SET_GPR_U32(ctx, 31, 0x2C5E38u);
    ctx->pc = 0x2C5E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5E30u;
    // 0x2c5e34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2C5E30u, 0x2C5E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5E38u;
label_2c5e38:
    // 0x2c5e38: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c5e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c5e3c: 0xa203001f  sb          $v1, 0x1F($s0)
    ctx->pc = 0x2c5e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31), (uint8_t)GPR_U32(ctx, 3));
label_2c5e40:
    // 0x2c5e40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c5e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5e44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c5e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5e48: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5E48u;
        // 0x2c5e4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5E50u;
}
