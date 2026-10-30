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

// Function: sub_00362868
// Address: 0x362868 - 0x362960
void sub_00362868_0x362868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362868_0x362868");
#endif

    switch (ctx->pc) {
        case 0x36289cu: goto label_36289c;
        case 0x3628a4u: goto label_3628a4;
        case 0x3628b8u: goto label_3628b8;
        case 0x3628c0u: goto label_3628c0;
        case 0x3628d4u: goto label_3628d4;
        case 0x3628e8u: goto label_3628e8;
        case 0x3628fcu: goto label_3628fc;
        case 0x362910u: goto label_362910;
        case 0x36292cu: goto label_36292c;
        case 0x362938u: goto label_362938;
        default: break;
    }

    ctx->pc = 0x362868u;

    // 0x362868: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x362868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x36286c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36286cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362870: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x362870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x362874: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x362874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x362878: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x362878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36287c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36287cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362880: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x362880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x362884: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x362884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x362888: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x362888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x36288c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x36288cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x362890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x362890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x362894: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362894u;
    SET_GPR_U32(ctx, 31, 0x36289Cu);
    ctx->pc = 0x362898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362894u;
    // 0x362898: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362894u, 0x36289Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36289Cu;
label_36289c:
    // 0x36289c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36289Cu;
    SET_GPR_U32(ctx, 31, 0x3628A4u);
    ctx->pc = 0x3628A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36289Cu;
    // 0x3628a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36289Cu, 0x3628A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3628A4u;
label_3628a4:
    // 0x3628a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3628a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3628a8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3628a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3628ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3628acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3628b0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3628B0u;
    SET_GPR_U32(ctx, 31, 0x3628B8u);
    ctx->pc = 0x3628B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3628B0u;
    // 0x3628b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3628B0u, 0x3628B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3628B8u;
label_3628b8:
    // 0x3628b8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3628B8u;
    SET_GPR_U32(ctx, 31, 0x3628C0u);
    ctx->pc = 0x3628BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3628B8u;
    // 0x3628bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3628B8u, 0x3628C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3628C0u;
label_3628c0:
    // 0x3628c0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3628c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3628c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3628c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3628c8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3628c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3628cc: 0xc102488  jal         func_409220
    ctx->pc = 0x3628CCu;
    SET_GPR_U32(ctx, 31, 0x3628D4u);
    ctx->pc = 0x3628D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3628CCu;
    // 0x3628d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3628CCu, 0x3628D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3628D4u;
label_3628d4:
    // 0x3628d4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3628d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3628d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3628d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3628dc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3628dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3628e0: 0xc102488  jal         func_409220
    ctx->pc = 0x3628E0u;
    SET_GPR_U32(ctx, 31, 0x3628E8u);
    ctx->pc = 0x3628E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3628E0u;
    // 0x3628e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3628E0u, 0x3628E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3628E8u;
label_3628e8:
    // 0x3628e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3628e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3628ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3628ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3628f0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3628f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3628f4: 0xc102488  jal         func_409220
    ctx->pc = 0x3628F4u;
    SET_GPR_U32(ctx, 31, 0x3628FCu);
    ctx->pc = 0x3628F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3628F4u;
    // 0x3628f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3628F4u, 0x3628FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3628FCu;
label_3628fc:
    // 0x3628fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3628fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x362900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362904: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x362904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x362908: 0xc1024c6  jal         func_409318
    ctx->pc = 0x362908u;
    SET_GPR_U32(ctx, 31, 0x362910u);
    ctx->pc = 0x36290Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362908u;
    // 0x36290c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x362908u, 0x362910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362910u;
label_362910:
    // 0x362910: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x362910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362914: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x362914u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362918: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x362918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36291c: 0x2482b  sltu        $t1, $zero, $v0
    ctx->pc = 0x36291cu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x362920: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x362920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362924: 0xc0a6492  jal         func_299248
    ctx->pc = 0x362924u;
    SET_GPR_U32(ctx, 31, 0x36292Cu);
    ctx->pc = 0x362928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362924u;
    // 0x362928: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299248u, 0x362924u, 0x36292Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36292Cu;
label_36292c:
    // 0x36292c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36292cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362930: 0xc102562  jal         func_409588
    ctx->pc = 0x362930u;
    SET_GPR_U32(ctx, 31, 0x362938u);
    ctx->pc = 0x362934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362930u;
    // 0x362934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x362930u, 0x362938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362938u;
label_362938:
    // 0x362938: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x362938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36293c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36293cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362940: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x362940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x362944: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x362944u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x362948: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x362948u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36294c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x36294cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x362950: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x362950u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x362954: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x362954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x362958: 0x3e00008  jr          $ra
    ctx->pc = 0x362958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362958u;
        // 0x36295c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362960u;
}
