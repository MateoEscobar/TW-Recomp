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

// Function: sub_00466DC8
// Address: 0x466dc8 - 0x466e38
void sub_00466DC8_0x466dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466DC8_0x466dc8");
#endif

    switch (ctx->pc) {
        case 0x466dc8u: goto label_466dc8;
        case 0x466dccu: goto label_466dcc;
        case 0x466dd0u: goto label_466dd0;
        case 0x466dd4u: goto label_466dd4;
        case 0x466dd8u: goto label_466dd8;
        case 0x466ddcu: goto label_466ddc;
        case 0x466de0u: goto label_466de0;
        case 0x466de4u: goto label_466de4;
        case 0x466de8u: goto label_466de8;
        case 0x466decu: goto label_466dec;
        case 0x466df0u: goto label_466df0;
        case 0x466df4u: goto label_466df4;
        case 0x466df8u: goto label_466df8;
        case 0x466dfcu: goto label_466dfc;
        case 0x466e00u: goto label_466e00;
        case 0x466e04u: goto label_466e04;
        case 0x466e08u: goto label_466e08;
        case 0x466e0cu: goto label_466e0c;
        case 0x466e10u: goto label_466e10;
        case 0x466e14u: goto label_466e14;
        case 0x466e18u: goto label_466e18;
        case 0x466e1cu: goto label_466e1c;
        case 0x466e20u: goto label_466e20;
        case 0x466e24u: goto label_466e24;
        case 0x466e28u: goto label_466e28;
        case 0x466e2cu: goto label_466e2c;
        case 0x466e30u: goto label_466e30;
        case 0x466e34u: goto label_466e34;
        default: break;
    }

    ctx->pc = 0x466dc8u;

label_466dc8:
    // 0x466dc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x466dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_466dcc:
    // 0x466dcc: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x466dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
label_466dd0:
    // 0x466dd0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x466dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_466dd4:
    // 0x466dd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x466dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_466dd8:
    // 0x466dd8: 0x2470e680  addiu       $s0, $v1, -0x1980
    ctx->pc = 0x466dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960768));
label_466ddc:
    // 0x466ddc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x466ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_466de0:
    // 0x466de0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x466de0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_466de4:
    // 0x466de4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x466de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_466de8:
    // 0x466de8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x466de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_466dec:
    // 0x466dec: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_466df0:
    if (ctx->pc == 0x466DF0u) {
        ctx->pc = 0x466DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466DECu;
        // 0x466df0: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466DF4u;
        goto label_466df4;
    }
    ctx->pc = 0x466DECu;
    {
        const bool branch_taken_0x466dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x466DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466DECu;
        // 0x466df0: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466dec) {
            ctx->pc = 0x466E1Cu;
            goto label_466e1c;
        }
    }
    ctx->pc = 0x466DF4u;
label_466df4:
    // 0x466df4: 0xc119dda  jal         func_467768
label_466df8:
    if (ctx->pc == 0x466DF8u) {
        ctx->pc = 0x466DFCu;
        goto label_466dfc;
    }
    ctx->pc = 0x466DF4u;
    SET_GPR_U32(ctx, 31, 0x466DFCu);
    ctx->pc = 0x467768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467768u, 0x466DF4u, 0x466DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466DFCu;
label_466dfc:
    // 0x466dfc: 0xc11f74a  jal         func_47DD28
label_466e00:
    if (ctx->pc == 0x466E00u) {
        ctx->pc = 0x466E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466DFCu;
        // 0x466e00: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466E04u;
        goto label_466e04;
    }
    ctx->pc = 0x466DFCu;
    SET_GPR_U32(ctx, 31, 0x466E04u);
    ctx->pc = 0x466E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466DFCu;
    // 0x466e00: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x466DFCu, 0x466E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466E04u;
label_466e04:
    // 0x466e04: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x466e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_466e08:
    // 0x466e08: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x466e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_466e0c:
    // 0x466e0c: 0x8c62ae24  lw          $v0, -0x51DC($v1)
    ctx->pc = 0x466e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946340)));
label_466e10:
    // 0x466e10: 0x40f809  jalr        $v0
label_466e14:
    if (ctx->pc == 0x466E14u) {
        ctx->pc = 0x466E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466E10u;
        // 0x466e14: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466E18u;
        goto label_466e18;
    }
    ctx->pc = 0x466E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x466E18u);
        ctx->pc = 0x466E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466E10u;
        // 0x466e14: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466E10u, 0x466E18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x466E18u;
label_466e18:
    // 0x466e18: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x466e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_466e1c:
    // 0x466e1c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x466e1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_466e20:
    // 0x466e20: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x466e20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_466e24:
    // 0x466e24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x466e24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_466e28:
    // 0x466e28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x466e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_466e2c:
    // 0x466e2c: 0x3e00008  jr          $ra
label_466e30:
    if (ctx->pc == 0x466E30u) {
        ctx->pc = 0x466E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466E2Cu;
        // 0x466e30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466E34u;
        goto label_466e34;
    }
    ctx->pc = 0x466E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x466E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466E2Cu;
        // 0x466e30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466E34u;
label_466e34:
    // 0x466e34: 0x0  nop
    ctx->pc = 0x466e34u;
    // NOP
    ctx->pc = 0x466e38u;
}
