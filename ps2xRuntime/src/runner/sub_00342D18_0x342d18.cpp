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

// Function: sub_00342D18
// Address: 0x342d18 - 0x342d98
void sub_00342D18_0x342d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342D18_0x342d18");
#endif

    switch (ctx->pc) {
        case 0x342d30u: goto label_342d30;
        default: break;
    }

    ctx->pc = 0x342d18u;

    // 0x342d18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x342d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x342d1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x342d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x342d20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x342d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x342d24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x342d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x342d28: 0xc0d0a8c  jal         func_342A30
    ctx->pc = 0x342D28u;
    SET_GPR_U32(ctx, 31, 0x342D30u);
    ctx->pc = 0x342D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342D28u;
    // 0x342d2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342A30u, 0x342D28u, 0x342D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342D30u;
label_342d30:
    // 0x342d30: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x342d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x342d34: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x342d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x342d38: 0x246347f0  addiu       $v1, $v1, 0x47F0
    ctx->pc = 0x342d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18416));
    // 0x342d3c: 0x244217a0  addiu       $v0, $v0, 0x17A0
    ctx->pc = 0x342d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6048));
    // 0x342d40: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x342d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x342d44: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x342d44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x342d48: 0x248417b0  addiu       $a0, $a0, 0x17B0
    ctx->pc = 0x342d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6064));
    // 0x342d4c: 0x26070050  addiu       $a3, $s0, 0x50
    ctx->pc = 0x342d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x342d50: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x342d50u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5117A0u));
    // 0x342d54: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x342d54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x342d58: 0x24a517c0  addiu       $a1, $a1, 0x17C0
    ctx->pc = 0x342d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6080));
    // 0x342d5c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x342d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x342d60: 0x7e030050  sq          $v1, 0x50($s0)
    ctx->pc = 0x342d60u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 3));
    // 0x342d64: 0x24c617d0  addiu       $a2, $a2, 0x17D0
    ctx->pc = 0x342d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6096));
    // 0x342d68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x342d68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342d6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x342d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342d70: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x342d70u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5117B0u));
    // 0x342d74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x342d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x342d78: 0x7ce30010  sq          $v1, 0x10($a3)
    ctx->pc = 0x342d78u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 3));
    // 0x342d7c: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x342d7cu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x5117C0u));
    // 0x342d80: 0x7ce40020  sq          $a0, 0x20($a3)
    ctx->pc = 0x342d80u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 4));
    // 0x342d84: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x342d84u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5117D0u));
    // 0x342d88: 0x7ce30030  sq          $v1, 0x30($a3)
    ctx->pc = 0x342d88u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 3));
    // 0x342d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x342D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342D8Cu;
        // 0x342d90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342D94u;
    // 0x342d94: 0x0  nop
    ctx->pc = 0x342d94u;
    // NOP
    ctx->pc = 0x342d98u;
}
