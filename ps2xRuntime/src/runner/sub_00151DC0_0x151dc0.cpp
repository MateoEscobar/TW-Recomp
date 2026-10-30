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

// Function: sub_00151DC0
// Address: 0x151dc0 - 0x151e68
void sub_00151DC0_0x151dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151DC0_0x151dc0");
#endif

    switch (ctx->pc) {
        case 0x151ddcu: goto label_151ddc;
        case 0x151de4u: goto label_151de4;
        case 0x151decu: goto label_151dec;
        case 0x151df4u: goto label_151df4;
        case 0x151dfcu: goto label_151dfc;
        case 0x151e04u: goto label_151e04;
        default: break;
    }

    ctx->pc = 0x151dc0u;

    // 0x151dc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x151dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x151dc4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x151dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x151dc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x151dcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x151dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151dd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x151dd4: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x151DD4u;
    SET_GPR_U32(ctx, 31, 0x151DDCu);
    ctx->pc = 0x151DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151DD4u;
    // 0x151dd8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x151DD4u, 0x151DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151DDCu;
label_151ddc:
    // 0x151ddc: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x151DDCu;
    SET_GPR_U32(ctx, 31, 0x151DE4u);
    ctx->pc = 0x151DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151DDCu;
    // 0x151de0: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x151DDCu, 0x151DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151DE4u;
label_151de4:
    // 0x151de4: 0xc05373e  jal         func_14DCF8
    ctx->pc = 0x151DE4u;
    SET_GPR_U32(ctx, 31, 0x151DECu);
    ctx->pc = 0x151DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151DE4u;
    // 0x151de8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DCF8u, 0x151DE4u, 0x151DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151DECu;
label_151dec:
    // 0x151dec: 0xc05373e  jal         func_14DCF8
    ctx->pc = 0x151DECu;
    SET_GPR_U32(ctx, 31, 0x151DF4u);
    ctx->pc = 0x151DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151DECu;
    // 0x151df0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DCF8u, 0x151DECu, 0x151DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151DF4u;
label_151df4:
    // 0x151df4: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x151DF4u;
    SET_GPR_U32(ctx, 31, 0x151DFCu);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x151DF4u, 0x151DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151DFCu;
label_151dfc:
    // 0x151dfc: 0xc05471c  jal         func_151C70
    ctx->pc = 0x151DFCu;
    SET_GPR_U32(ctx, 31, 0x151E04u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x151DFCu, 0x151E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151E04u;
label_151e04:
    // 0x151e04: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x151e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151e08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151e08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151e0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151e10: 0x3e00008  jr          $ra
    ctx->pc = 0x151E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151E10u;
        // 0x151e14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151E18u;
    // 0x151e18: 0x0  nop
    ctx->pc = 0x151e18u;
    // NOP
    // 0x151e1c: 0x0  nop
    ctx->pc = 0x151e1cu;
    // NOP
    // 0x151e20: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x151e20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x151e24: 0x0  nop
    ctx->pc = 0x151e24u;
    // NOP
    // 0x151e28: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x151e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x151e2c: 0x0  nop
    ctx->pc = 0x151e2cu;
    // NOP
    // 0x151e30: 0x0  nop
    ctx->pc = 0x151e30u;
    // NOP
    // 0x151e34: 0x0  nop
    ctx->pc = 0x151e34u;
    // NOP
    // 0x151e38: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x151e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x151e3c: 0x0  nop
    ctx->pc = 0x151e3cu;
    // NOP
    // 0x151e40: 0xfc8900d0  sd          $t1, 0xD0($a0)
    ctx->pc = 0x151e40u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 208), GPR_U64(ctx, 9));
    // 0x151e44: 0x0  nop
    ctx->pc = 0x151e44u;
    // NOP
    // 0x151e48: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x151e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x151e4c: 0x0  nop
    ctx->pc = 0x151e4cu;
    // NOP
    // 0x151e50: 0x0  nop
    ctx->pc = 0x151e50u;
    // NOP
    // 0x151e54: 0x0  nop
    ctx->pc = 0x151e54u;
    // NOP
    // 0x151e58: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x151e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x151e5c: 0x0  nop
    ctx->pc = 0x151e5cu;
    // NOP
    // 0x151e60: 0x0  nop
    ctx->pc = 0x151e60u;
    // NOP
    // 0x151e64: 0x0  nop
    ctx->pc = 0x151e64u;
    // NOP
    ctx->pc = 0x151e68u;
}
