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

// Function: sub_00323DF8
// Address: 0x323df8 - 0x323e60
void sub_00323DF8_0x323df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323DF8_0x323df8");
#endif

    switch (ctx->pc) {
        case 0x323e10u: goto label_323e10;
        case 0x323e40u: goto label_323e40;
        default: break;
    }

    ctx->pc = 0x323df8u;

    // 0x323df8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x323dfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x323dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323e00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x323e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x323e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x323e08: 0xc0cc7e6  jal         func_331F98
    ctx->pc = 0x323E08u;
    SET_GPR_U32(ctx, 31, 0x323E10u);
    ctx->pc = 0x323E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323E08u;
    // 0x323e0c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331F98u, 0x323E08u, 0x323E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323E10u;
label_323e10:
    // 0x323e10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x323e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323e14: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x323e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x323e18: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x323e18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x323e1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x323e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323e20: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x323e20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x323e24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x323e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323e28: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x323e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x323e2c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x323E2Cu;
    {
        const bool branch_taken_0x323e2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x323e2c) {
            ctx->pc = 0x323E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323E2Cu;
            // 0x323e30: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323E44u;
            goto label_323e44;
        }
    }
    ctx->pc = 0x323E34u;
    // 0x323e34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323e38: 0xc0ca1dc  jal         func_328770
    ctx->pc = 0x323E38u;
    SET_GPR_U32(ctx, 31, 0x323E40u);
    ctx->pc = 0x323E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323E38u;
    // 0x323e3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328770u, 0x323E38u, 0x323E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323E40u;
label_323e40:
    // 0x323e40: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x323e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_323e44:
    // 0x323e44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323e48: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x323e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x323e4c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x323e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x323e50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x323e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323e54: 0x3e00008  jr          $ra
    ctx->pc = 0x323E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323E54u;
        // 0x323e58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323E5Cu;
    // 0x323e5c: 0x0  nop
    ctx->pc = 0x323e5cu;
    // NOP
    ctx->pc = 0x323e60u;
}
