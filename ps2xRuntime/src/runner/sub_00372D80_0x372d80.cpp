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

// Function: sub_00372D80
// Address: 0x372d80 - 0x372e20
void sub_00372D80_0x372d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372D80_0x372d80");
#endif

    switch (ctx->pc) {
        case 0x372dacu: goto label_372dac;
        case 0x372db4u: goto label_372db4;
        case 0x372dc8u: goto label_372dc8;
        case 0x372dd0u: goto label_372dd0;
        case 0x372de4u: goto label_372de4;
        case 0x372decu: goto label_372dec;
        case 0x372dfcu: goto label_372dfc;
        default: break;
    }

    ctx->pc = 0x372d80u;

    // 0x372d80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x372d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x372d84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x372d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372d88: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x372d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x372d8c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x372d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x372d90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x372d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372d94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x372d94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372d98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x372d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x372d9c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x372d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x372da0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x372da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x372da4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372DA4u;
    SET_GPR_U32(ctx, 31, 0x372DACu);
    ctx->pc = 0x372DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372DA4u;
    // 0x372da8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372DA4u, 0x372DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372DACu;
label_372dac:
    // 0x372dac: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x372DACu;
    SET_GPR_U32(ctx, 31, 0x372DB4u);
    ctx->pc = 0x372DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372DACu;
    // 0x372db0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x372DACu, 0x372DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372DB4u;
label_372db4:
    // 0x372db4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x372db4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372db8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x372db8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372dbc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x372dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x372dc0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372DC0u;
    SET_GPR_U32(ctx, 31, 0x372DC8u);
    ctx->pc = 0x372DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372DC0u;
    // 0x372dc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372DC0u, 0x372DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372DC8u;
label_372dc8:
    // 0x372dc8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x372DC8u;
    SET_GPR_U32(ctx, 31, 0x372DD0u);
    ctx->pc = 0x372DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372DC8u;
    // 0x372dcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x372DC8u, 0x372DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372DD0u;
label_372dd0:
    // 0x372dd0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x372dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372dd4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x372dd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372dd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x372dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372ddc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372DDCu;
    SET_GPR_U32(ctx, 31, 0x372DE4u);
    ctx->pc = 0x372DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372DDCu;
    // 0x372de0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372DDCu, 0x372DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372DE4u;
label_372de4:
    // 0x372de4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x372DE4u;
    SET_GPR_U32(ctx, 31, 0x372DECu);
    ctx->pc = 0x372DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372DE4u;
    // 0x372de8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x372DE4u, 0x372DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372DECu;
label_372dec:
    // 0x372dec: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x372decu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x372df0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x372df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372df4: 0xc044f7e  jal         func_113DF8
    ctx->pc = 0x372DF4u;
    SET_GPR_U32(ctx, 31, 0x372DFCu);
    ctx->pc = 0x372DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372DF4u;
    // 0x372df8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113DF8u, 0x372DF4u, 0x372DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372DFCu;
label_372dfc:
    // 0x372dfc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x372dfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x372e00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x372e00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372e04: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x372e04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x372e08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x372e08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x372e0c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x372e0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x372e10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x372e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372e14: 0x3e00008  jr          $ra
    ctx->pc = 0x372E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372E14u;
        // 0x372e18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372E1Cu;
    // 0x372e1c: 0x0  nop
    ctx->pc = 0x372e1cu;
    // NOP
    ctx->pc = 0x372e20u;
}
