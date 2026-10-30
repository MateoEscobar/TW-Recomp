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

// Function: sub_001C2AF8
// Address: 0x1c2af8 - 0x1c2b48
void sub_001C2AF8_0x1c2af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2AF8_0x1c2af8");
#endif

    switch (ctx->pc) {
        case 0x1c2b28u: goto label_1c2b28;
        case 0x1c2b34u: goto label_1c2b34;
        default: break;
    }

    ctx->pc = 0x1c2af8u;

    // 0x1c2af8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c2afc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1c2afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1c2b00: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c2b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c2b04: 0x2442a6c0  addiu       $v0, $v0, -0x5940
    ctx->pc = 0x1c2b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944448));
    // 0x1c2b08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c2b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c2b0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c2b0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2b14: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c2b14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b18: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c2b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1c2b1c: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x1c2b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x1c2b20: 0xc070a50  jal         func_1C2940
    ctx->pc = 0x1C2B20u;
    SET_GPR_U32(ctx, 31, 0x1C2B28u);
    ctx->pc = 0x1C2B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2B20u;
    // 0x1c2b24: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2940u, 0x1C2B20u, 0x1C2B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2B28u;
label_1c2b28:
    // 0x1c2b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b2c: 0xc079bbc  jal         func_1E6EF0
    ctx->pc = 0x1C2B2Cu;
    SET_GPR_U32(ctx, 31, 0x1C2B34u);
    ctx->pc = 0x1C2B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2B2Cu;
    // 0x1c2b30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6EF0u, 0x1C2B2Cu, 0x1C2B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2B34u;
label_1c2b34:
    // 0x1c2b34: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c2b34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2b38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c2b38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2b3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2b40: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B40u;
        // 0x1c2b44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2B48u;
}
