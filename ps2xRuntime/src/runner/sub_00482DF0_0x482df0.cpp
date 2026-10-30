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

// Function: sub_00482DF0
// Address: 0x482df0 - 0x482e60
void sub_00482DF0_0x482df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482DF0_0x482df0");
#endif

    switch (ctx->pc) {
        case 0x482e18u: goto label_482e18;
        case 0x482e20u: goto label_482e20;
        case 0x482e30u: goto label_482e30;
        case 0x482e38u: goto label_482e38;
        case 0x482e48u: goto label_482e48;
        default: break;
    }

    ctx->pc = 0x482df0u;

    // 0x482df0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x482df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x482df4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x482df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x482df8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x482df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x482dfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x482dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x482e00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x482e00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482e04: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x482e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x482e08: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x482E08u;
    {
        const bool branch_taken_0x482e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x482e08) {
            ctx->pc = 0x482E28u;
            goto label_482e28;
        }
    }
    ctx->pc = 0x482E10u;
    // 0x482e10: 0xc12075e  jal         func_481D78
    ctx->pc = 0x482E10u;
    SET_GPR_U32(ctx, 31, 0x482E18u);
    ctx->pc = 0x481D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x481D78u, 0x482E10u, 0x482E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482E18u;
label_482e18:
    // 0x482e18: 0xc12052c  jal         func_4814B0
    ctx->pc = 0x482E18u;
    SET_GPR_U32(ctx, 31, 0x482E20u);
    ctx->pc = 0x482E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x482E18u;
    // 0x482e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4814B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4814B0u, 0x482E18u, 0x482E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482E20u;
label_482e20:
    // 0x482e20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x482E20u;
    {
        const bool branch_taken_0x482e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x482E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482E20u;
        // 0x482e24: 0x2604010c  addiu       $a0, $s0, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x482e20) {
            ctx->pc = 0x482E3Cu;
            goto label_482e3c;
        }
    }
    ctx->pc = 0x482E28u;
label_482e28:
    // 0x482e28: 0xc120924  jal         func_482490
    ctx->pc = 0x482E28u;
    SET_GPR_U32(ctx, 31, 0x482E30u);
    ctx->pc = 0x482E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x482E28u;
    // 0x482e2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x482490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482490u, 0x482E28u, 0x482E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482E30u;
label_482e30:
    // 0x482e30: 0xc1207d4  jal         func_481F50
    ctx->pc = 0x482E30u;
    SET_GPR_U32(ctx, 31, 0x482E38u);
    ctx->pc = 0x482E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x482E30u;
    // 0x482e34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x481F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x481F50u, 0x482E30u, 0x482E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482E38u;
label_482e38:
    // 0x482e38: 0x2604010c  addiu       $a0, $s0, 0x10C
    ctx->pc = 0x482e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 268));
label_482e3c:
    // 0x482e3c: 0x26050124  addiu       $a1, $s0, 0x124
    ctx->pc = 0x482e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    // 0x482e40: 0xc1201ea  jal         func_4807A8
    ctx->pc = 0x482E40u;
    SET_GPR_U32(ctx, 31, 0x482E48u);
    ctx->pc = 0x482E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x482E40u;
    // 0x482e44: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4807A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4807A8u, 0x482E40u, 0x482E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482E48u;
label_482e48:
    // 0x482e48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x482e48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482e4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x482e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x482e50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x482e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482e54: 0x3e00008  jr          $ra
    ctx->pc = 0x482E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x482E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482E54u;
        // 0x482e58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x482E5Cu;
    // 0x482e5c: 0x0  nop
    ctx->pc = 0x482e5cu;
    // NOP
    ctx->pc = 0x482e60u;
}
