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

// Function: sub_00370D98
// Address: 0x370d98 - 0x370e28
void sub_00370D98_0x370d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370D98_0x370d98");
#endif

    switch (ctx->pc) {
        case 0x370dc0u: goto label_370dc0;
        case 0x370dc8u: goto label_370dc8;
        case 0x370ddcu: goto label_370ddc;
        case 0x370de4u: goto label_370de4;
        case 0x370df8u: goto label_370df8;
        case 0x370e08u: goto label_370e08;
        default: break;
    }

    ctx->pc = 0x370d98u;

    // 0x370d98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x370d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x370d9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x370d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370da0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x370da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x370da4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x370da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x370da8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x370da8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370dac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x370dacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370db0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x370db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x370db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x370db8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x370DB8u;
    SET_GPR_U32(ctx, 31, 0x370DC0u);
    ctx->pc = 0x370DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370DB8u;
    // 0x370dbc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x370DB8u, 0x370DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370DC0u;
label_370dc0:
    // 0x370dc0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x370DC0u;
    SET_GPR_U32(ctx, 31, 0x370DC8u);
    ctx->pc = 0x370DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370DC0u;
    // 0x370dc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x370DC0u, 0x370DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370DC8u;
label_370dc8:
    // 0x370dc8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x370dc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370dcc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x370dccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370dd0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x370dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x370dd4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x370DD4u;
    SET_GPR_U32(ctx, 31, 0x370DDCu);
    ctx->pc = 0x370DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370DD4u;
    // 0x370dd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x370DD4u, 0x370DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370DDCu;
label_370ddc:
    // 0x370ddc: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x370DDCu;
    SET_GPR_U32(ctx, 31, 0x370DE4u);
    ctx->pc = 0x370DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370DDCu;
    // 0x370de0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x370DDCu, 0x370DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370DE4u;
label_370de4:
    // 0x370de4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x370de4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370de8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x370de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370dec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x370decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x370df0: 0xc102488  jal         func_409220
    ctx->pc = 0x370DF0u;
    SET_GPR_U32(ctx, 31, 0x370DF8u);
    ctx->pc = 0x370DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370DF0u;
    // 0x370df4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x370DF0u, 0x370DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370DF8u;
label_370df8:
    // 0x370df8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x370df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370dfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x370dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370e00: 0xc108d7c  jal         func_4235F0
    ctx->pc = 0x370E00u;
    SET_GPR_U32(ctx, 31, 0x370E08u);
    ctx->pc = 0x370E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370E00u;
    // 0x370e04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4235F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4235F0u, 0x370E00u, 0x370E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370E08u;
label_370e08:
    // 0x370e08: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x370e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x370e0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x370e0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370e10: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x370e10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x370e14: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x370e14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370e18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x370E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370E1Cu;
        // 0x370e20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370E24u;
    // 0x370e24: 0x0  nop
    ctx->pc = 0x370e24u;
    // NOP
    ctx->pc = 0x370e28u;
}
