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

// Function: sub_003652B0
// Address: 0x3652b0 - 0x365370
void sub_003652B0_0x3652b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003652B0_0x3652b0");
#endif

    switch (ctx->pc) {
        case 0x3652e0u: goto label_3652e0;
        case 0x3652e8u: goto label_3652e8;
        case 0x3652fcu: goto label_3652fc;
        case 0x365304u: goto label_365304;
        case 0x365318u: goto label_365318;
        case 0x36532cu: goto label_36532c;
        case 0x365334u: goto label_365334;
        case 0x365348u: goto label_365348;
        default: break;
    }

    ctx->pc = 0x3652b0u;

    // 0x3652b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3652b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3652b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3652b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3652b8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3652b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3652bc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3652bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3652c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3652c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3652c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3652c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3652c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3652c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3652cc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3652ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3652d0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3652d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3652d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3652d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3652d8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3652D8u;
    SET_GPR_U32(ctx, 31, 0x3652E0u);
    ctx->pc = 0x3652DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3652D8u;
    // 0x3652dc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3652D8u, 0x3652E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3652E0u;
label_3652e0:
    // 0x3652e0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3652E0u;
    SET_GPR_U32(ctx, 31, 0x3652E8u);
    ctx->pc = 0x3652E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3652E0u;
    // 0x3652e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3652E0u, 0x3652E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3652E8u;
label_3652e8:
    // 0x3652e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3652e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3652ec: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3652ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3652f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3652f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3652f4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3652F4u;
    SET_GPR_U32(ctx, 31, 0x3652FCu);
    ctx->pc = 0x3652F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3652F4u;
    // 0x3652f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3652F4u, 0x3652FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3652FCu;
label_3652fc:
    // 0x3652fc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3652FCu;
    SET_GPR_U32(ctx, 31, 0x365304u);
    ctx->pc = 0x365300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3652FCu;
    // 0x365300: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3652FCu, 0x365304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365304u;
label_365304:
    // 0x365304: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x365304u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36530c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36530cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x365310: 0xc102488  jal         func_409220
    ctx->pc = 0x365310u;
    SET_GPR_U32(ctx, 31, 0x365318u);
    ctx->pc = 0x365314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365310u;
    // 0x365314: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x365310u, 0x365318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365318u;
label_365318:
    // 0x365318: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x365318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36531c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36531cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365324: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365324u;
    SET_GPR_U32(ctx, 31, 0x36532Cu);
    ctx->pc = 0x365328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365324u;
    // 0x365328: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365324u, 0x36532Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36532Cu;
label_36532c:
    // 0x36532c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36532Cu;
    SET_GPR_U32(ctx, 31, 0x365334u);
    ctx->pc = 0x365330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36532Cu;
    // 0x365330: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36532Cu, 0x365334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365334u;
label_365334:
    // 0x365334: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x365334u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365338: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x365338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36533c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x36533cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365340: 0xc08e27a  jal         func_2389E8
    ctx->pc = 0x365340u;
    SET_GPR_U32(ctx, 31, 0x365348u);
    ctx->pc = 0x365344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365340u;
    // 0x365344: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2389E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2389E8u, 0x365340u, 0x365348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365348u;
label_365348:
    // 0x365348: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x365348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36534c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36534cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365350: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x365350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x365354: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x365354u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x365358: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x365358u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36535c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x36535cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x365360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x365360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365364: 0x3e00008  jr          $ra
    ctx->pc = 0x365364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365364u;
        // 0x365368: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36536Cu;
    // 0x36536c: 0x0  nop
    ctx->pc = 0x36536cu;
    // NOP
    ctx->pc = 0x365370u;
}
