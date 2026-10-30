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

// Function: sub_003607F8
// Address: 0x3607f8 - 0x360870
void sub_003607F8_0x3607f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003607F8_0x3607f8");
#endif

    switch (ctx->pc) {
        case 0x360820u: goto label_360820;
        case 0x360828u: goto label_360828;
        case 0x36083cu: goto label_36083c;
        case 0x360844u: goto label_360844;
        case 0x360850u: goto label_360850;
        default: break;
    }

    ctx->pc = 0x3607f8u;

    // 0x3607f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3607f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3607fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3607fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360800: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x360800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x360804: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x360804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x360808: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x360808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36080c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36080cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360810: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x360810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x360814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x360814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x360818: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360818u;
    SET_GPR_U32(ctx, 31, 0x360820u);
    ctx->pc = 0x36081Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360818u;
    // 0x36081c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360818u, 0x360820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360820u;
label_360820:
    // 0x360820: 0xc10b108  jal         func_42C420
    ctx->pc = 0x360820u;
    SET_GPR_U32(ctx, 31, 0x360828u);
    ctx->pc = 0x360824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360820u;
    // 0x360824: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x360820u, 0x360828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360828u;
label_360828:
    // 0x360828: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x360828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36082c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36082cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x360830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360834: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360834u;
    SET_GPR_U32(ctx, 31, 0x36083Cu);
    ctx->pc = 0x360838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360834u;
    // 0x360838: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360834u, 0x36083Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36083Cu;
label_36083c:
    // 0x36083c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36083Cu;
    SET_GPR_U32(ctx, 31, 0x360844u);
    ctx->pc = 0x360840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36083Cu;
    // 0x360840: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36083Cu, 0x360844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360844u;
label_360844:
    // 0x360844: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x360844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360848: 0xc0b7ec0  jal         func_2DFB00
    ctx->pc = 0x360848u;
    SET_GPR_U32(ctx, 31, 0x360850u);
    ctx->pc = 0x36084Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360848u;
    // 0x36084c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFB00u, 0x360848u, 0x360850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360850u;
label_360850:
    // 0x360850: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x360850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x360854: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x360854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360858: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x360858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36085c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x36085cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x360860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360864: 0x3e00008  jr          $ra
    ctx->pc = 0x360864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360864u;
        // 0x360868: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36086Cu;
    // 0x36086c: 0x0  nop
    ctx->pc = 0x36086cu;
    // NOP
    ctx->pc = 0x360870u;
}
