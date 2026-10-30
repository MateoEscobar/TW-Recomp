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

// Function: sub_001E7D78
// Address: 0x1e7d78 - 0x1e7df0
void sub_001E7D78_0x1e7d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7D78_0x1e7d78");
#endif

    switch (ctx->pc) {
        case 0x1e7da8u: goto label_1e7da8;
        case 0x1e7dc0u: goto label_1e7dc0;
        case 0x1e7dd0u: goto label_1e7dd0;
        case 0x1e7dd8u: goto label_1e7dd8;
        default: break;
    }

    ctx->pc = 0x1e7d78u;

    // 0x1e7d78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e7d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e7d7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e7d80: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e7d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e7d84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e7d84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7d88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7d8c: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x1e7d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1e7d90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7D90u;
    {
        const bool branch_taken_0x1e7d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7D90u;
        // 0x1e7d94: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7d90) {
            ctx->pc = 0x1E7DB0u;
            goto label_1e7db0;
        }
    }
    ctx->pc = 0x1E7D98u;
    // 0x1e7d98: 0x26300070  addiu       $s0, $s1, 0x70
    ctx->pc = 0x1e7d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x1e7d9c: 0x8c45d310  lw          $a1, -0x2CF0($v0)
    ctx->pc = 0x1e7d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955792)));
    // 0x1e7da0: 0xc06e534  jal         func_1B94D0
    ctx->pc = 0x1E7DA0u;
    SET_GPR_U32(ctx, 31, 0x1E7DA8u);
    ctx->pc = 0x1E7DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7DA0u;
    // 0x1e7da4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B94D0u, 0x1E7DA0u, 0x1E7DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7DA8u;
label_1e7da8:
    // 0x1e7da8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E7DA8u;
    {
        const bool branch_taken_0x1e7da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7DA8u;
        // 0x1e7dac: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7da8) {
            ctx->pc = 0x1E7DC4u;
            goto label_1e7dc4;
        }
    }
    ctx->pc = 0x1E7DB0u;
label_1e7db0:
    // 0x1e7db0: 0x26300070  addiu       $s0, $s1, 0x70
    ctx->pc = 0x1e7db0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x1e7db4: 0x8c45d310  lw          $a1, -0x2CF0($v0)
    ctx->pc = 0x1e7db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955792)));
    // 0x1e7db8: 0xc06e534  jal         func_1B94D0
    ctx->pc = 0x1E7DB8u;
    SET_GPR_U32(ctx, 31, 0x1E7DC0u);
    ctx->pc = 0x1E7DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7DB8u;
    // 0x1e7dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B94D0u, 0x1E7DB8u, 0x1E7DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7DC0u;
label_1e7dc0:
    // 0x1e7dc0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e7dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e7dc4:
    // 0x1e7dc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7dc8: 0xc06ec70  jal         func_1BB1C0
    ctx->pc = 0x1E7DC8u;
    SET_GPR_U32(ctx, 31, 0x1E7DD0u);
    ctx->pc = 0x1E7DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7DC8u;
    // 0x1e7dcc: 0xa202018c  sb          $v0, 0x18C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 396), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB1C0u, 0x1E7DC8u, 0x1E7DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7DD0u;
label_1e7dd0:
    // 0x1e7dd0: 0xc07a4be  jal         func_1E92F8
    ctx->pc = 0x1E7DD0u;
    SET_GPR_U32(ctx, 31, 0x1E7DD8u);
    ctx->pc = 0x1E7DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7DD0u;
    // 0x1e7dd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E92F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E92F8u, 0x1E7DD0u, 0x1E7DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7DD8u;
label_1e7dd8:
    // 0x1e7dd8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e7dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7ddc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e7ddcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7de0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7de4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7DE4u;
        // 0x1e7de8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7DECu;
    // 0x1e7dec: 0x0  nop
    ctx->pc = 0x1e7decu;
    // NOP
    ctx->pc = 0x1e7df0u;
}
