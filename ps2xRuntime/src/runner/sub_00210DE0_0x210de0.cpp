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

// Function: sub_00210DE0
// Address: 0x210de0 - 0x210e48
void sub_00210DE0_0x210de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210DE0_0x210de0");
#endif

    switch (ctx->pc) {
        case 0x210df8u: goto label_210df8;
        case 0x210e0cu: goto label_210e0c;
        case 0x210e20u: goto label_210e20;
        default: break;
    }

    ctx->pc = 0x210de0u;

    // 0x210de0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x210de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x210de4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x210de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x210de8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x210de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x210dec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x210decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x210df0: 0xc08383e  jal         func_20E0F8
    ctx->pc = 0x210DF0u;
    SET_GPR_U32(ctx, 31, 0x210DF8u);
    ctx->pc = 0x210DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210DF0u;
    // 0x210df4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E0F8u, 0x210DF0u, 0x210DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210DF8u;
label_210df8:
    // 0x210df8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x210DF8u;
    {
        const bool branch_taken_0x210df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210DF8u;
        // 0x210dfc: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210df8) {
            ctx->pc = 0x210E2Cu;
            goto label_210e2c;
        }
    }
    ctx->pc = 0x210E00u;
    // 0x210e00: 0x8e0541f4  lw          $a1, 0x41F4($s0)
    ctx->pc = 0x210e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16884)));
    // 0x210e04: 0xc0616ac  jal         func_185AB0
    ctx->pc = 0x210E04u;
    SET_GPR_U32(ctx, 31, 0x210E0Cu);
    ctx->pc = 0x210E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210E04u;
    // 0x210e08: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x210E04u, 0x210E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210E0Cu;
label_210e0c:
    // 0x210e0c: 0x90430011  lbu         $v1, 0x11($v0)
    ctx->pc = 0x210e0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x210e10: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x210E10u;
    {
        const bool branch_taken_0x210e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x210E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E10u;
        // 0x210e14: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210e10) {
            ctx->pc = 0x210E2Cu;
            goto label_210e2c;
        }
    }
    ctx->pc = 0x210E18u;
    // 0x210e18: 0xc0616ac  jal         func_185AB0
    ctx->pc = 0x210E18u;
    SET_GPR_U32(ctx, 31, 0x210E20u);
    ctx->pc = 0x210E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210E18u;
    // 0x210e1c: 0x8e0542f4  lw          $a1, 0x42F4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x210E18u, 0x210E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210E20u;
label_210e20:
    // 0x210e20: 0x90420011  lbu         $v0, 0x11($v0)
    ctx->pc = 0x210e20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x210e24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x210E24u;
    {
        const bool branch_taken_0x210e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E24u;
        // 0x210e28: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x210e24) {
            ctx->pc = 0x210E30u;
            goto label_210e30;
        }
    }
    ctx->pc = 0x210E2Cu;
label_210e2c:
    // 0x210e2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x210e2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210e30:
    // 0x210e30: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x210e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210e34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x210e34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210e38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x210e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x210E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E3Cu;
        // 0x210e40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210E44u;
    // 0x210e44: 0x0  nop
    ctx->pc = 0x210e44u;
    // NOP
    ctx->pc = 0x210e48u;
}
