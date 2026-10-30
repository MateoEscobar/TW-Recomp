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

// Function: sub_003605C8
// Address: 0x3605c8 - 0x360690
void sub_003605C8_0x3605c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003605C8_0x3605c8");
#endif

    switch (ctx->pc) {
        case 0x3605f8u: goto label_3605f8;
        case 0x360600u: goto label_360600;
        case 0x360614u: goto label_360614;
        case 0x36061cu: goto label_36061c;
        case 0x360630u: goto label_360630;
        case 0x360638u: goto label_360638;
        case 0x36064cu: goto label_36064c;
        case 0x360654u: goto label_360654;
        case 0x360668u: goto label_360668;
        default: break;
    }

    ctx->pc = 0x3605c8u;

    // 0x3605c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3605c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3605cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3605ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3605d0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3605d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3605d4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3605d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3605d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3605d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3605dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3605dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3605e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3605e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3605e4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3605e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3605e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3605e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3605ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3605ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3605f0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3605F0u;
    SET_GPR_U32(ctx, 31, 0x3605F8u);
    ctx->pc = 0x3605F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3605F0u;
    // 0x3605f4: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3605F0u, 0x3605F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3605F8u;
label_3605f8:
    // 0x3605f8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3605F8u;
    SET_GPR_U32(ctx, 31, 0x360600u);
    ctx->pc = 0x3605FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3605F8u;
    // 0x3605fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3605F8u, 0x360600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360600u;
label_360600:
    // 0x360600: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360604: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x360604u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360608: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x360608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36060c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36060Cu;
    SET_GPR_U32(ctx, 31, 0x360614u);
    ctx->pc = 0x360610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36060Cu;
    // 0x360610: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36060Cu, 0x360614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360614u;
label_360614:
    // 0x360614: 0xc10b108  jal         func_42C420
    ctx->pc = 0x360614u;
    SET_GPR_U32(ctx, 31, 0x36061Cu);
    ctx->pc = 0x360618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360614u;
    // 0x360618: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x360614u, 0x36061Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36061Cu;
label_36061c:
    // 0x36061c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36061cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360620: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x360620u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360624: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x360624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x360628: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360628u;
    SET_GPR_U32(ctx, 31, 0x360630u);
    ctx->pc = 0x36062Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360628u;
    // 0x36062c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360628u, 0x360630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360630u;
label_360630:
    // 0x360630: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x360630u;
    SET_GPR_U32(ctx, 31, 0x360638u);
    ctx->pc = 0x360634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360630u;
    // 0x360634: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x360630u, 0x360638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360638u;
label_360638:
    // 0x360638: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x360638u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36063c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36063cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360640: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x360640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360644: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360644u;
    SET_GPR_U32(ctx, 31, 0x36064Cu);
    ctx->pc = 0x360648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360644u;
    // 0x360648: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360644u, 0x36064Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36064Cu;
label_36064c:
    // 0x36064c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36064Cu;
    SET_GPR_U32(ctx, 31, 0x360654u);
    ctx->pc = 0x360650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36064Cu;
    // 0x360650: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36064Cu, 0x360654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360654u;
label_360654:
    // 0x360654: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x360654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360658: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x360658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36065c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x36065cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360660: 0xc0b78b2  jal         func_2DE2C8
    ctx->pc = 0x360660u;
    SET_GPR_U32(ctx, 31, 0x360668u);
    ctx->pc = 0x360664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360660u;
    // 0x360664: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2C8u, 0x360660u, 0x360668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360668u;
label_360668:
    // 0x360668: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x360668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36066c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36066cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360670: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x360670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x360674: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x360674u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x360678: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x360678u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36067c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36067cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360680: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x360680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x360684: 0x3e00008  jr          $ra
    ctx->pc = 0x360684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360684u;
        // 0x360688: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36068Cu;
    // 0x36068c: 0x0  nop
    ctx->pc = 0x36068cu;
    // NOP
    ctx->pc = 0x360690u;
}
