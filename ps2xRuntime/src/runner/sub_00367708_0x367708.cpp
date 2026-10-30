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

// Function: sub_00367708
// Address: 0x367708 - 0x367810
void sub_00367708_0x367708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367708_0x367708");
#endif

    switch (ctx->pc) {
        case 0x367740u: goto label_367740;
        case 0x367748u: goto label_367748;
        case 0x36775cu: goto label_36775c;
        case 0x367764u: goto label_367764;
        case 0x367778u: goto label_367778;
        case 0x36778cu: goto label_36778c;
        case 0x3677a0u: goto label_3677a0;
        case 0x3677b4u: goto label_3677b4;
        case 0x3677bcu: goto label_3677bc;
        case 0x3677d8u: goto label_3677d8;
        case 0x3677e4u: goto label_3677e4;
        default: break;
    }

    ctx->pc = 0x367708u;

    // 0x367708: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x367708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x36770c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36770cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367710: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x367710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x367714: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x367714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x367718: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x367718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36771c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x36771cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367720: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x367720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x367724: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x367724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x367728: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x367728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x36772c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x36772cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x367730: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x367730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x367734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x367734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x367738: 0xc102472  jal         func_4091C8
    ctx->pc = 0x367738u;
    SET_GPR_U32(ctx, 31, 0x367740u);
    ctx->pc = 0x36773Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367738u;
    // 0x36773c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x367738u, 0x367740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367740u;
label_367740:
    // 0x367740: 0xc10b108  jal         func_42C420
    ctx->pc = 0x367740u;
    SET_GPR_U32(ctx, 31, 0x367748u);
    ctx->pc = 0x367744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367740u;
    // 0x367744: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x367740u, 0x367748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367748u;
label_367748:
    // 0x367748: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x367748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36774c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x36774cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367750: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x367750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x367754: 0xc102472  jal         func_4091C8
    ctx->pc = 0x367754u;
    SET_GPR_U32(ctx, 31, 0x36775Cu);
    ctx->pc = 0x367758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367754u;
    // 0x367758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x367754u, 0x36775Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36775Cu;
label_36775c:
    // 0x36775c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36775Cu;
    SET_GPR_U32(ctx, 31, 0x367764u);
    ctx->pc = 0x367760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36775Cu;
    // 0x367760: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36775Cu, 0x367764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367764u;
label_367764:
    // 0x367764: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x367764u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x367768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36776c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36776cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x367770: 0xc102488  jal         func_409220
    ctx->pc = 0x367770u;
    SET_GPR_U32(ctx, 31, 0x367778u);
    ctx->pc = 0x367774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367770u;
    // 0x367774: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x367770u, 0x367778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367778u;
label_367778:
    // 0x367778: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x367778u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36777c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36777cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367780: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x367780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x367784: 0xc1024c6  jal         func_409318
    ctx->pc = 0x367784u;
    SET_GPR_U32(ctx, 31, 0x36778Cu);
    ctx->pc = 0x367788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367784u;
    // 0x367788: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x367784u, 0x36778Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36778Cu;
label_36778c:
    // 0x36778c: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x36778cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x367790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x367790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367794: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x367794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x367798: 0xc1024c6  jal         func_409318
    ctx->pc = 0x367798u;
    SET_GPR_U32(ctx, 31, 0x3677A0u);
    ctx->pc = 0x36779Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367798u;
    // 0x36779c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x367798u, 0x3677A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3677A0u;
label_3677a0:
    // 0x3677a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3677a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3677a4: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x3677a4u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3677a8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3677a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3677ac: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3677ACu;
    SET_GPR_U32(ctx, 31, 0x3677B4u);
    ctx->pc = 0x3677B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3677ACu;
    // 0x3677b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3677ACu, 0x3677B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3677B4u;
label_3677b4:
    // 0x3677b4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3677B4u;
    SET_GPR_U32(ctx, 31, 0x3677BCu);
    ctx->pc = 0x3677B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3677B4u;
    // 0x3677b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3677B4u, 0x3677BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3677BCu;
label_3677bc:
    // 0x3677bc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3677bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3677c0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3677c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3677c4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3677c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3677c8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3677c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x3677cc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3677ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3677d0: 0xc0d4f58  jal         func_353D60
    ctx->pc = 0x3677D0u;
    SET_GPR_U32(ctx, 31, 0x3677D8u);
    ctx->pc = 0x3677D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3677D0u;
    // 0x3677d4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353D60u, 0x3677D0u, 0x3677D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3677D8u;
label_3677d8:
    // 0x3677d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3677d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3677dc: 0xc102562  jal         func_409588
    ctx->pc = 0x3677DCu;
    SET_GPR_U32(ctx, 31, 0x3677E4u);
    ctx->pc = 0x3677E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3677DCu;
    // 0x3677e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x3677DCu, 0x3677E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3677E4u;
label_3677e4:
    // 0x3677e4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3677e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3677e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3677e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3677ec: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3677ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3677f0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3677f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3677f4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3677f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3677f8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3677f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3677fc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3677fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x367800: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x367800u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x367804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x367804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367808: 0x3e00008  jr          $ra
    ctx->pc = 0x367808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367808u;
        // 0x36780c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367810u;
}
