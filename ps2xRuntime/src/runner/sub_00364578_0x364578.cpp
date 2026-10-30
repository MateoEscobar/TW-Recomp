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

// Function: sub_00364578
// Address: 0x364578 - 0x364640
void sub_00364578_0x364578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364578_0x364578");
#endif

    switch (ctx->pc) {
        case 0x3645a8u: goto label_3645a8;
        case 0x3645b0u: goto label_3645b0;
        case 0x3645c4u: goto label_3645c4;
        case 0x3645ccu: goto label_3645cc;
        case 0x3645e0u: goto label_3645e0;
        case 0x3645e8u: goto label_3645e8;
        case 0x364600u: goto label_364600;
        case 0x364608u: goto label_364608;
        case 0x36461cu: goto label_36461c;
        default: break;
    }

    ctx->pc = 0x364578u;

    // 0x364578: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x364578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x36457c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36457cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364580: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x364580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x364584: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x364584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x364588: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x364588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36458c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36458cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364590: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x364590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x364594: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x364594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x364598: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x364598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36459c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36459cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3645a0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3645A0u;
    SET_GPR_U32(ctx, 31, 0x3645A8u);
    ctx->pc = 0x3645A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3645A0u;
    // 0x3645a4: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3645A0u, 0x3645A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3645A8u;
label_3645a8:
    // 0x3645a8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3645A8u;
    SET_GPR_U32(ctx, 31, 0x3645B0u);
    ctx->pc = 0x3645ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3645A8u;
    // 0x3645ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3645A8u, 0x3645B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3645B0u;
label_3645b0:
    // 0x3645b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3645b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3645b4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3645b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3645b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3645b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3645bc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3645BCu;
    SET_GPR_U32(ctx, 31, 0x3645C4u);
    ctx->pc = 0x3645C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3645BCu;
    // 0x3645c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3645BCu, 0x3645C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3645C4u;
label_3645c4:
    // 0x3645c4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3645C4u;
    SET_GPR_U32(ctx, 31, 0x3645CCu);
    ctx->pc = 0x3645C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3645C4u;
    // 0x3645c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3645C4u, 0x3645CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3645CCu;
label_3645cc:
    // 0x3645cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3645ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3645d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3645d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3645d4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3645d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3645d8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3645D8u;
    SET_GPR_U32(ctx, 31, 0x3645E0u);
    ctx->pc = 0x3645DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3645D8u;
    // 0x3645dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3645D8u, 0x3645E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3645E0u;
label_3645e0:
    // 0x3645e0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3645E0u;
    SET_GPR_U32(ctx, 31, 0x3645E8u);
    ctx->pc = 0x3645E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3645E0u;
    // 0x3645e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3645E0u, 0x3645E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3645E8u;
label_3645e8:
    // 0x3645e8: 0x3406bff0  ori         $a2, $zero, 0xBFF0
    ctx->pc = 0x3645e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x3645ec: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x3645ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x3645f0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3645f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3645f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3645f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3645f8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3645F8u;
    SET_GPR_U32(ctx, 31, 0x364600u);
    ctx->pc = 0x3645FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3645F8u;
    // 0x3645fc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3645F8u, 0x364600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364600u;
label_364600:
    // 0x364600: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x364600u;
    SET_GPR_U32(ctx, 31, 0x364608u);
    ctx->pc = 0x364604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364600u;
    // 0x364604: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x364600u, 0x364608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364608u;
label_364608:
    // 0x364608: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x364608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36460c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36460cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364610: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x364610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364614: 0xc0bf77a  jal         func_2FDDE8
    ctx->pc = 0x364614u;
    SET_GPR_U32(ctx, 31, 0x36461Cu);
    ctx->pc = 0x364618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364614u;
    // 0x364618: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE8u, 0x364614u, 0x36461Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36461Cu;
label_36461c:
    // 0x36461c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x36461cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x364620: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x364620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364624: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x364624u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x364628: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x364628u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36462c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x36462cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x364630: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x364630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364634: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x364634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x364638: 0x3e00008  jr          $ra
    ctx->pc = 0x364638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364638u;
        // 0x36463c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364640u;
}
