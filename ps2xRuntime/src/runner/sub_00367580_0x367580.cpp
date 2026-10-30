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

// Function: sub_00367580
// Address: 0x367580 - 0x367708
void sub_00367580_0x367580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367580_0x367580");
#endif

    switch (ctx->pc) {
        case 0x3675c4u: goto label_3675c4;
        case 0x3675ccu: goto label_3675cc;
        case 0x3675e0u: goto label_3675e0;
        case 0x3675e8u: goto label_3675e8;
        case 0x3675fcu: goto label_3675fc;
        case 0x367610u: goto label_367610;
        case 0x367624u: goto label_367624;
        case 0x367638u: goto label_367638;
        case 0x36764cu: goto label_36764c;
        case 0x367660u: goto label_367660;
        case 0x367668u: goto label_367668;
        case 0x36767cu: goto label_36767c;
        case 0x367690u: goto label_367690;
        case 0x3676c0u: goto label_3676c0;
        case 0x3676ccu: goto label_3676cc;
        default: break;
    }

    ctx->pc = 0x367580u;

    // 0x367580: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x367580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x367584: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x367584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367588: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x367588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x36758c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x36758cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x367590: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x367590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367594: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x367594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367598: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x367598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x36759c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x36759cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x3675a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3675a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3675a4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3675a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3675a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3675a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3675ac: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3675acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x3675b0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3675b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x3675b4: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x3675b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x3675b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3675b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3675bc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3675BCu;
    SET_GPR_U32(ctx, 31, 0x3675C4u);
    ctx->pc = 0x3675C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3675BCu;
    // 0x3675c0: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3675BCu, 0x3675C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3675C4u;
label_3675c4:
    // 0x3675c4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3675C4u;
    SET_GPR_U32(ctx, 31, 0x3675CCu);
    ctx->pc = 0x3675C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3675C4u;
    // 0x3675c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3675C4u, 0x3675CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3675CCu;
label_3675cc:
    // 0x3675cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3675ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3675d0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x3675d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3675d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3675d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3675d8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3675D8u;
    SET_GPR_U32(ctx, 31, 0x3675E0u);
    ctx->pc = 0x3675DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3675D8u;
    // 0x3675dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3675D8u, 0x3675E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3675E0u;
label_3675e0:
    // 0x3675e0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3675E0u;
    SET_GPR_U32(ctx, 31, 0x3675E8u);
    ctx->pc = 0x3675E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3675E0u;
    // 0x3675e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3675E0u, 0x3675E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3675E8u;
label_3675e8:
    // 0x3675e8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3675e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3675ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3675ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3675f0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3675f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3675f4: 0xc102488  jal         func_409220
    ctx->pc = 0x3675F4u;
    SET_GPR_U32(ctx, 31, 0x3675FCu);
    ctx->pc = 0x3675F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3675F4u;
    // 0x3675f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3675F4u, 0x3675FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3675FCu;
label_3675fc:
    // 0x3675fc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3675fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x367600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367604: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x367604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x367608: 0xc1024c6  jal         func_409318
    ctx->pc = 0x367608u;
    SET_GPR_U32(ctx, 31, 0x367610u);
    ctx->pc = 0x36760Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367608u;
    // 0x36760c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x367608u, 0x367610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367610u;
label_367610:
    // 0x367610: 0x2a82b  sltu        $s5, $zero, $v0
    ctx->pc = 0x367610u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x367614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x367614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367618: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x367618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36761c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36761Cu;
    SET_GPR_U32(ctx, 31, 0x367624u);
    ctx->pc = 0x367620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36761Cu;
    // 0x367620: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36761Cu, 0x367624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367624u;
label_367624:
    // 0x367624: 0x2a02b  sltu        $s4, $zero, $v0
    ctx->pc = 0x367624u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x367628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x367628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36762c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36762cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x367630: 0xc1024c6  jal         func_409318
    ctx->pc = 0x367630u;
    SET_GPR_U32(ctx, 31, 0x367638u);
    ctx->pc = 0x367634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367630u;
    // 0x367634: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x367630u, 0x367638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367638u;
label_367638:
    // 0x367638: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x367638u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36763c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36763cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367640: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x367640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x367644: 0xc1024c6  jal         func_409318
    ctx->pc = 0x367644u;
    SET_GPR_U32(ctx, 31, 0x36764Cu);
    ctx->pc = 0x367648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367644u;
    // 0x367648: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x367644u, 0x36764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36764Cu;
label_36764c:
    // 0x36764c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36764cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367650: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x367650u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x367654: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x367654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x367658: 0xc102472  jal         func_4091C8
    ctx->pc = 0x367658u;
    SET_GPR_U32(ctx, 31, 0x367660u);
    ctx->pc = 0x36765Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367658u;
    // 0x36765c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x367658u, 0x367660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367660u;
label_367660:
    // 0x367660: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x367660u;
    SET_GPR_U32(ctx, 31, 0x367668u);
    ctx->pc = 0x367664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367660u;
    // 0x367664: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x367660u, 0x367668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367668u;
label_367668:
    // 0x367668: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x367668u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36766c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36766cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367670: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x367670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x367674: 0xc1024c6  jal         func_409318
    ctx->pc = 0x367674u;
    SET_GPR_U32(ctx, 31, 0x36767Cu);
    ctx->pc = 0x367678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367674u;
    // 0x367678: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x367674u, 0x36767Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36767Cu;
label_36767c:
    // 0x36767c: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x36767cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x367680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x367680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367684: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x367684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x367688: 0xc1024c6  jal         func_409318
    ctx->pc = 0x367688u;
    SET_GPR_U32(ctx, 31, 0x367690u);
    ctx->pc = 0x36768Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367688u;
    // 0x36768c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x367688u, 0x367690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367690u;
label_367690:
    // 0x367690: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x367690u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x367694: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x367694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367698: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x367698u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36769c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x36769cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3676a0: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x3676a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3676a4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3676a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3676a8: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x3676a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3676ac: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3676acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3676b0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3676b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3676b4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3676b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3676b8: 0xc0d4f1a  jal         func_353C68
    ctx->pc = 0x3676B8u;
    SET_GPR_U32(ctx, 31, 0x3676C0u);
    ctx->pc = 0x3676BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3676B8u;
    // 0x3676bc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353C68u, 0x3676B8u, 0x3676C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3676C0u;
label_3676c0:
    // 0x3676c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3676c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3676c4: 0xc102562  jal         func_409588
    ctx->pc = 0x3676C4u;
    SET_GPR_U32(ctx, 31, 0x3676CCu);
    ctx->pc = 0x3676C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3676C4u;
    // 0x3676c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x3676C4u, 0x3676CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3676CCu;
label_3676cc:
    // 0x3676cc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3676ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3676d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3676d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3676d4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3676d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3676d8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3676d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3676dc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3676dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3676e0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3676e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3676e4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3676e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3676e8: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3676e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3676ec: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3676ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3676f0: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3676f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3676f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3676f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3676f8: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x3676f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3676fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3676FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3676FCu;
        // 0x367700: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3676FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367704u;
    // 0x367704: 0x0  nop
    ctx->pc = 0x367704u;
    // NOP
    ctx->pc = 0x367708u;
}
