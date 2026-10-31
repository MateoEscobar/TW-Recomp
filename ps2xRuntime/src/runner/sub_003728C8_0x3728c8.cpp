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

// Function: sub_003728C8
// Address: 0x3728c8 - 0x3729c0
void sub_003728C8_0x3728c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003728C8_0x3728c8");
#endif

    switch (ctx->pc) {
        case 0x3728fcu: goto label_3728fc;
        case 0x372904u: goto label_372904;
        case 0x372918u: goto label_372918;
        case 0x372920u: goto label_372920;
        case 0x372934u: goto label_372934;
        case 0x37293cu: goto label_37293c;
        case 0x372950u: goto label_372950;
        case 0x372964u: goto label_372964;
        case 0x372978u: goto label_372978;
        case 0x372994u: goto label_372994;
        default: break;
    }

    ctx->pc = 0x3728c8u;

    // 0x3728c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3728c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3728cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3728ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3728d0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3728d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3728d4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3728d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3728d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3728d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3728dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3728dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3728e0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3728e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3728e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3728e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3728e8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3728e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3728ec: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3728ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x3728f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3728f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3728f4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3728F4u;
    SET_GPR_U32(ctx, 31, 0x3728FCu);
    ctx->pc = 0x3728F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3728F4u;
    // 0x3728f8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3728F4u, 0x3728FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3728FCu;
label_3728fc:
    // 0x3728fc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3728FCu;
    SET_GPR_U32(ctx, 31, 0x372904u);
    ctx->pc = 0x372900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3728FCu;
    // 0x372900: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3728FCu, 0x372904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372904u;
label_372904:
    // 0x372904: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x372904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372908: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x372908u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37290c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37290cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x372910: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372910u;
    SET_GPR_U32(ctx, 31, 0x372918u);
    ctx->pc = 0x372914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372910u;
    // 0x372914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372910u, 0x372918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372918u;
label_372918:
    // 0x372918: 0xc10b108  jal         func_42C420
    ctx->pc = 0x372918u;
    SET_GPR_U32(ctx, 31, 0x372920u);
    ctx->pc = 0x37291Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372918u;
    // 0x37291c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x372918u, 0x372920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372920u;
label_372920:
    // 0x372920: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x372920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372924: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x372924u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372928: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x372928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37292c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37292Cu;
    SET_GPR_U32(ctx, 31, 0x372934u);
    ctx->pc = 0x372930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37292Cu;
    // 0x372930: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37292Cu, 0x372934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372934u;
label_372934:
    // 0x372934: 0xc10b108  jal         func_42C420
    ctx->pc = 0x372934u;
    SET_GPR_U32(ctx, 31, 0x37293Cu);
    ctx->pc = 0x372938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372934u;
    // 0x372938: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x372934u, 0x37293Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37293Cu;
label_37293c:
    // 0x37293c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x37293cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x372940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372944: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x372944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x372948: 0xc102488  jal         func_409220
    ctx->pc = 0x372948u;
    SET_GPR_U32(ctx, 31, 0x372950u);
    ctx->pc = 0x37294Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372948u;
    // 0x37294c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x372948u, 0x372950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372950u;
label_372950:
    // 0x372950: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x372950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372954: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x372954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372958: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x372958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37295c: 0xc102488  jal         func_409220
    ctx->pc = 0x37295Cu;
    SET_GPR_U32(ctx, 31, 0x372964u);
    ctx->pc = 0x372960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37295Cu;
    // 0x372960: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x37295Cu, 0x372964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372964u;
label_372964:
    // 0x372964: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x372964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372968: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x372968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37296c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x37296cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x372970: 0xc102488  jal         func_409220
    ctx->pc = 0x372970u;
    SET_GPR_U32(ctx, 31, 0x372978u);
    ctx->pc = 0x372974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372970u;
    // 0x372974: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x372970u, 0x372978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372978u;
label_372978:
    // 0x372978: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x372978u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37297c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x37297cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372980: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x372980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372984: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x372984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372988: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x372988u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37298c: 0xc044f26  jal         func_113C98
    ctx->pc = 0x37298Cu;
    SET_GPR_U32(ctx, 31, 0x372994u);
    ctx->pc = 0x372990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37298Cu;
    // 0x372990: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113C98u, 0x37298Cu, 0x372994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372994u;
label_372994:
    // 0x372994: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x372994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x372998: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x372998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37299c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x37299cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3729a0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3729a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3729a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3729a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3729a8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3729a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3729ac: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3729acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3729b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3729b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3729b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3729B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3729B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3729B4u;
        // 0x3729b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3729B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3729BCu;
    // 0x3729bc: 0x0  nop
    ctx->pc = 0x3729bcu;
    // NOP
    ctx->pc = 0x3729c0u;
}
