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

// Function: sub_00156D88
// Address: 0x156d88 - 0x156dd8
void sub_00156D88_0x156d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156D88_0x156d88");
#endif

    switch (ctx->pc) {
        case 0x156db8u: goto label_156db8;
        case 0x156dc4u: goto label_156dc4;
        default: break;
    }

    ctx->pc = 0x156d88u;

    // 0x156d88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x156d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x156d8c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x156d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x156d90: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x156d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x156d94: 0x244283f0  addiu       $v0, $v0, -0x7C10
    ctx->pc = 0x156d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935536));
    // 0x156d98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x156d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x156d9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x156d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156da0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x156da4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x156da4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156da8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x156da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x156dac: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x156dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x156db0: 0xc0705bc  jal         func_1C16F0
    ctx->pc = 0x156DB0u;
    SET_GPR_U32(ctx, 31, 0x156DB8u);
    ctx->pc = 0x156DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156DB0u;
    // 0x156db4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C16F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C16F0u, 0x156DB0u, 0x156DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156DB8u;
label_156db8:
    // 0x156db8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156dbc: 0xc0557d2  jal         func_155F48
    ctx->pc = 0x156DBCu;
    SET_GPR_U32(ctx, 31, 0x156DC4u);
    ctx->pc = 0x156DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156DBCu;
    // 0x156dc0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155F48u, 0x156DBCu, 0x156DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156DC4u;
label_156dc4:
    // 0x156dc4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x156dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156dc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x156dc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156dcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x156DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156DD0u;
        // 0x156dd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156DD8u;
}
