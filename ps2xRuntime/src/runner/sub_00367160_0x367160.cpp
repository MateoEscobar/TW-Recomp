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

// Function: sub_00367160
// Address: 0x367160 - 0x3671e0
void sub_00367160_0x367160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367160_0x367160");
#endif

    switch (ctx->pc) {
        case 0x367188u: goto label_367188;
        case 0x367190u: goto label_367190;
        case 0x3671a4u: goto label_3671a4;
        case 0x3671acu: goto label_3671ac;
        case 0x3671b8u: goto label_3671b8;
        case 0x3671c4u: goto label_3671c4;
        default: break;
    }

    ctx->pc = 0x367160u;

    // 0x367160: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x367160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x367164: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x367164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367168: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x367168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36716c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36716cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x367170: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x367170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367174: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x367174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367178: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x367178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36717c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36717cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x367180: 0xc102472  jal         func_4091C8
    ctx->pc = 0x367180u;
    SET_GPR_U32(ctx, 31, 0x367188u);
    ctx->pc = 0x367184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367180u;
    // 0x367184: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x367180u, 0x367188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367188u;
label_367188:
    // 0x367188: 0xc10b108  jal         func_42C420
    ctx->pc = 0x367188u;
    SET_GPR_U32(ctx, 31, 0x367190u);
    ctx->pc = 0x36718Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367188u;
    // 0x36718c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x367188u, 0x367190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367190u;
label_367190:
    // 0x367190: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x367190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367194: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x367194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x367198: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x367198u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36719c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36719Cu;
    SET_GPR_U32(ctx, 31, 0x3671A4u);
    ctx->pc = 0x3671A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36719Cu;
    // 0x3671a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36719Cu, 0x3671A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3671A4u;
label_3671a4:
    // 0x3671a4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3671A4u;
    SET_GPR_U32(ctx, 31, 0x3671ACu);
    ctx->pc = 0x3671A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3671A4u;
    // 0x3671a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3671A4u, 0x3671ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3671ACu;
label_3671ac:
    // 0x3671ac: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3671acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x3671b0: 0xc04775e  jal         func_11DD78
    ctx->pc = 0x3671B0u;
    SET_GPR_U32(ctx, 31, 0x3671B8u);
    ctx->pc = 0x3671B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3671B0u;
    // 0x3671b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DD78u, 0x3671B0u, 0x3671B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3671B8u;
label_3671b8:
    // 0x3671b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3671b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3671bc: 0xc102562  jal         func_409588
    ctx->pc = 0x3671BCu;
    SET_GPR_U32(ctx, 31, 0x3671C4u);
    ctx->pc = 0x3671C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3671BCu;
    // 0x3671c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x3671BCu, 0x3671C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3671C4u;
label_3671c4:
    // 0x3671c4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3671c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3671c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3671c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3671cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3671ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3671d0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3671d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3671d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3671d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3671d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3671D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3671DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3671D8u;
        // 0x3671dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3671D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3671E0u;
}
