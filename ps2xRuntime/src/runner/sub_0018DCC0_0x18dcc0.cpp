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

// Function: sub_0018DCC0
// Address: 0x18dcc0 - 0x18dd38
void sub_0018DCC0_0x18dcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DCC0_0x18dcc0");
#endif

    switch (ctx->pc) {
        case 0x18dce8u: goto label_18dce8;
        case 0x18dcf8u: goto label_18dcf8;
        case 0x18dd0cu: goto label_18dd0c;
        default: break;
    }

    ctx->pc = 0x18dcc0u;

    // 0x18dcc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18dcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18dcc4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x18dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x18dcc8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x18dcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x18dccc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18dcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18dcd0: 0x2450deb8  addiu       $s0, $v0, -0x2148
    ctx->pc = 0x18dcd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
    // 0x18dcd4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x18dcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x18dcd8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18dcd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dcdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18dcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18dce0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18dce0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dce4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18dce4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_18dce8:
    // 0x18dce8: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x18DCE8u;
    {
        const bool branch_taken_0x18dce8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DCE8u;
        // 0x18dcec: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dce8) {
            ctx->pc = 0x18DD00u;
            goto label_18dd00;
        }
    }
    ctx->pc = 0x18DCF0u;
    // 0x18dcf0: 0xc062df4  jal         func_18B7D0
    ctx->pc = 0x18DCF0u;
    SET_GPR_U32(ctx, 31, 0x18DCF8u);
    ctx->pc = 0x18DCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DCF0u;
    // 0x18dcf4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B7D0u, 0x18DCF0u, 0x18DCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DCF8u;
label_18dcf8:
    // 0x18dcf8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18DCF8u;
    {
        const bool branch_taken_0x18dcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DCF8u;
        // 0x18dcfc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dcf8) {
            ctx->pc = 0x18DD10u;
            goto label_18dd10;
        }
    }
    ctx->pc = 0x18DD00u;
label_18dd00:
    // 0x18dd00: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18dd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18dd04: 0xc062e54  jal         func_18B950
    ctx->pc = 0x18DD04u;
    SET_GPR_U32(ctx, 31, 0x18DD0Cu);
    ctx->pc = 0x18DD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD04u;
    // 0x18dd08: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B950u, 0x18DD04u, 0x18DD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD0Cu;
label_18dd0c:
    // 0x18dd0c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x18dd0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_18dd10:
    // 0x18dd10: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x18dd10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x18dd14: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x18DD14u;
    {
        const bool branch_taken_0x18dd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD14u;
        // 0x18dd18: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dd14) {
            ctx->pc = 0x18DCE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18dce8;
        }
    }
    ctx->pc = 0x18DD1Cu;
    // 0x18dd1c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x18dd1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18dd20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18dd20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18dd24: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x18dd24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18dd28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18dd28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18dd2c: 0x3e00008  jr          $ra
    ctx->pc = 0x18DD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD2Cu;
        // 0x18dd30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DD2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DD34u;
    // 0x18dd34: 0x0  nop
    ctx->pc = 0x18dd34u;
    // NOP
    ctx->pc = 0x18dd38u;
}
