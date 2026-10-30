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

// Function: sub_001C3608
// Address: 0x1c3608 - 0x1c37f8
void sub_001C3608_0x1c3608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3608_0x1c3608");
#endif

    switch (ctx->pc) {
        case 0x1c3608u: goto label_1c3608;
        case 0x1c360cu: goto label_1c360c;
        case 0x1c3610u: goto label_1c3610;
        case 0x1c3614u: goto label_1c3614;
        case 0x1c3618u: goto label_1c3618;
        case 0x1c361cu: goto label_1c361c;
        case 0x1c3620u: goto label_1c3620;
        case 0x1c3624u: goto label_1c3624;
        case 0x1c3628u: goto label_1c3628;
        case 0x1c362cu: goto label_1c362c;
        case 0x1c3630u: goto label_1c3630;
        case 0x1c3634u: goto label_1c3634;
        case 0x1c3638u: goto label_1c3638;
        case 0x1c363cu: goto label_1c363c;
        case 0x1c3640u: goto label_1c3640;
        case 0x1c3644u: goto label_1c3644;
        case 0x1c3648u: goto label_1c3648;
        case 0x1c364cu: goto label_1c364c;
        case 0x1c3650u: goto label_1c3650;
        case 0x1c3654u: goto label_1c3654;
        case 0x1c3658u: goto label_1c3658;
        case 0x1c365cu: goto label_1c365c;
        case 0x1c3660u: goto label_1c3660;
        case 0x1c3664u: goto label_1c3664;
        case 0x1c3668u: goto label_1c3668;
        case 0x1c366cu: goto label_1c366c;
        case 0x1c3670u: goto label_1c3670;
        case 0x1c3674u: goto label_1c3674;
        case 0x1c3678u: goto label_1c3678;
        case 0x1c367cu: goto label_1c367c;
        case 0x1c3680u: goto label_1c3680;
        case 0x1c3684u: goto label_1c3684;
        case 0x1c3688u: goto label_1c3688;
        case 0x1c368cu: goto label_1c368c;
        case 0x1c3690u: goto label_1c3690;
        case 0x1c3694u: goto label_1c3694;
        case 0x1c3698u: goto label_1c3698;
        case 0x1c369cu: goto label_1c369c;
        case 0x1c36a0u: goto label_1c36a0;
        case 0x1c36a4u: goto label_1c36a4;
        case 0x1c36a8u: goto label_1c36a8;
        case 0x1c36acu: goto label_1c36ac;
        case 0x1c36b0u: goto label_1c36b0;
        case 0x1c36b4u: goto label_1c36b4;
        case 0x1c36b8u: goto label_1c36b8;
        case 0x1c36bcu: goto label_1c36bc;
        case 0x1c36c0u: goto label_1c36c0;
        case 0x1c36c4u: goto label_1c36c4;
        case 0x1c36c8u: goto label_1c36c8;
        case 0x1c36ccu: goto label_1c36cc;
        case 0x1c36d0u: goto label_1c36d0;
        case 0x1c36d4u: goto label_1c36d4;
        case 0x1c36d8u: goto label_1c36d8;
        case 0x1c36dcu: goto label_1c36dc;
        case 0x1c36e0u: goto label_1c36e0;
        case 0x1c36e4u: goto label_1c36e4;
        case 0x1c36e8u: goto label_1c36e8;
        case 0x1c36ecu: goto label_1c36ec;
        case 0x1c36f0u: goto label_1c36f0;
        case 0x1c36f4u: goto label_1c36f4;
        case 0x1c36f8u: goto label_1c36f8;
        case 0x1c36fcu: goto label_1c36fc;
        case 0x1c3700u: goto label_1c3700;
        case 0x1c3704u: goto label_1c3704;
        case 0x1c3708u: goto label_1c3708;
        case 0x1c370cu: goto label_1c370c;
        case 0x1c3710u: goto label_1c3710;
        case 0x1c3714u: goto label_1c3714;
        case 0x1c3718u: goto label_1c3718;
        case 0x1c371cu: goto label_1c371c;
        case 0x1c3720u: goto label_1c3720;
        case 0x1c3724u: goto label_1c3724;
        case 0x1c3728u: goto label_1c3728;
        case 0x1c372cu: goto label_1c372c;
        case 0x1c3730u: goto label_1c3730;
        case 0x1c3734u: goto label_1c3734;
        case 0x1c3738u: goto label_1c3738;
        case 0x1c373cu: goto label_1c373c;
        case 0x1c3740u: goto label_1c3740;
        case 0x1c3744u: goto label_1c3744;
        case 0x1c3748u: goto label_1c3748;
        case 0x1c374cu: goto label_1c374c;
        case 0x1c3750u: goto label_1c3750;
        case 0x1c3754u: goto label_1c3754;
        case 0x1c3758u: goto label_1c3758;
        case 0x1c375cu: goto label_1c375c;
        case 0x1c3760u: goto label_1c3760;
        case 0x1c3764u: goto label_1c3764;
        case 0x1c3768u: goto label_1c3768;
        case 0x1c376cu: goto label_1c376c;
        case 0x1c3770u: goto label_1c3770;
        case 0x1c3774u: goto label_1c3774;
        case 0x1c3778u: goto label_1c3778;
        case 0x1c377cu: goto label_1c377c;
        case 0x1c3780u: goto label_1c3780;
        case 0x1c3784u: goto label_1c3784;
        case 0x1c3788u: goto label_1c3788;
        case 0x1c378cu: goto label_1c378c;
        case 0x1c3790u: goto label_1c3790;
        case 0x1c3794u: goto label_1c3794;
        case 0x1c3798u: goto label_1c3798;
        case 0x1c379cu: goto label_1c379c;
        case 0x1c37a0u: goto label_1c37a0;
        case 0x1c37a4u: goto label_1c37a4;
        case 0x1c37a8u: goto label_1c37a8;
        case 0x1c37acu: goto label_1c37ac;
        case 0x1c37b0u: goto label_1c37b0;
        case 0x1c37b4u: goto label_1c37b4;
        case 0x1c37b8u: goto label_1c37b8;
        case 0x1c37bcu: goto label_1c37bc;
        case 0x1c37c0u: goto label_1c37c0;
        case 0x1c37c4u: goto label_1c37c4;
        case 0x1c37c8u: goto label_1c37c8;
        case 0x1c37ccu: goto label_1c37cc;
        case 0x1c37d0u: goto label_1c37d0;
        case 0x1c37d4u: goto label_1c37d4;
        case 0x1c37d8u: goto label_1c37d8;
        case 0x1c37dcu: goto label_1c37dc;
        case 0x1c37e0u: goto label_1c37e0;
        case 0x1c37e4u: goto label_1c37e4;
        case 0x1c37e8u: goto label_1c37e8;
        case 0x1c37ecu: goto label_1c37ec;
        case 0x1c37f0u: goto label_1c37f0;
        case 0x1c37f4u: goto label_1c37f4;
        default: break;
    }

    ctx->pc = 0x1c3608u;

label_1c3608:
    // 0x1c3608: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1c3608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1c360c:
    // 0x1c360c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1c360cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1c3610:
    // 0x1c3610: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x1c3610u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1c3614:
    // 0x1c3614: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1c3614u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c3618:
    // 0x1c3618: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x1c3618u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1c361c:
    // 0x1c361c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1c361cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1c3620:
    // 0x1c3620: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1c3620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_1c3624:
    // 0x1c3624: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c3624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3628:
    // 0x1c3628: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1c3628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_1c362c:
    // 0x1c362c: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x1c362cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_1c3630:
    // 0x1c3630: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1c3630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_1c3634:
    // 0x1c3634: 0x24170a50  addiu       $s7, $zero, 0xA50
    ctx->pc = 0x1c3634u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2640));
label_1c3638:
    // 0x1c3638: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1c3638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1c363c:
    // 0x1c363c: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x1c363cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c3640:
    // 0x1c3640: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1c3640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1c3644:
    // 0x1c3644: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1c3644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_1c3648:
    // 0x1c3648: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c3648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1c364c:
    // 0x1c364c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c364cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c3650:
    // 0x1c3650: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1c3650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1c3654:
    // 0x1c3654: 0xc070c28  jal         func_1C30A0
label_1c3658:
    if (ctx->pc == 0x1C3658u) {
        ctx->pc = 0x1C3658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3654u;
        // 0x1c3658: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C365Cu;
        goto label_1c365c;
    }
    ctx->pc = 0x1C3654u;
    SET_GPR_U32(ctx, 31, 0x1C365Cu);
    ctx->pc = 0x1C3658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3654u;
    // 0x1c3658: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C30A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C30A0u, 0x1C3654u, 0x1C365Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C365Cu;
label_1c365c:
    // 0x1c365c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c365cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c3660:
    // 0x1c3660: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1c3660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1c3664:
    // 0x1c3664: 0x2571018  mult        $v0, $s2, $s7
    ctx->pc = 0x1c3664u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1c3668:
    // 0x1c3668: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x1c3668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1c366c:
    // 0x1c366c: 0x8e02064c  lw          $v0, 0x64C($s0)
    ctx->pc = 0x1c366cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1612)));
label_1c3670:
    // 0x1c3670: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
label_1c3674:
    if (ctx->pc == 0x1C3674u) {
        ctx->pc = 0x1C3674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3670u;
        // 0x1c3674: 0x26550001  addiu       $s5, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3678u;
        goto label_1c3678;
    }
    ctx->pc = 0x1C3670u;
    {
        const bool branch_taken_0x1c3670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3670u;
        // 0x1c3674: 0x26550001  addiu       $s5, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3670) {
            ctx->pc = 0x1C37A4u;
            goto label_1c37a4;
        }
    }
    ctx->pc = 0x1C3678u;
label_1c3678:
    // 0x1c3678: 0x8e020440  lw          $v0, 0x440($s0)
    ctx->pc = 0x1c3678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1088)));
label_1c367c:
    // 0x1c367c: 0x105e0011  beq         $v0, $fp, . + 4 + (0x11 << 2)
label_1c3680:
    if (ctx->pc == 0x1C3680u) {
        ctx->pc = 0x1C3680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C367Cu;
        // 0x1c3680: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3684u;
        goto label_1c3684;
    }
    ctx->pc = 0x1C367Cu;
    {
        const bool branch_taken_0x1c367c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        ctx->pc = 0x1C3680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C367Cu;
        // 0x1c3680: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c367c) {
            ctx->pc = 0x1C36C4u;
            goto label_1c36c4;
        }
    }
    ctx->pc = 0x1C3684u;
label_1c3684:
    // 0x1c3684: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1c3684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1c3688:
    // 0x1c3688: 0xc441e988  lwc1        $f1, -0x1678($v0)
    ctx->pc = 0x1c3688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c368c:
    // 0x1c368c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c368cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c3690:
    // 0x1c3690: 0xc460e97c  lwc1        $f0, -0x1684($v1)
    ctx->pc = 0x1c3690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c3694:
    // 0x1c3694: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c3694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c3698:
    // 0x1c3698: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1c3698u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c369c:
    // 0x1c369c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1c369cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1c36a0:
    // 0x1c36a0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1c36a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1c36a4:
    // 0x1c36a4: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x1c36a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1c36a8:
    // 0x1c36a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c36a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c36ac:
    // 0x1c36ac: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1c36acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1c36b0:
    // 0x1c36b0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1c36b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1c36b4:
    // 0x1c36b4: 0x60f809  jalr        $v1
label_1c36b8:
    if (ctx->pc == 0x1C36B8u) {
        ctx->pc = 0x1C36B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C36B4u;
        // 0x1c36b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C36BCu;
        goto label_1c36bc;
    }
    ctx->pc = 0x1C36B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C36BCu);
        ctx->pc = 0x1C36B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C36B4u;
        // 0x1c36b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C36B4u, 0x1C36BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C36BCu;
label_1c36bc:
    // 0x1c36bc: 0x10000016  b           . + 4 + (0x16 << 2)
label_1c36c0:
    if (ctx->pc == 0x1C36C0u) {
        ctx->pc = 0x1C36C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C36BCu;
        // 0x1c36c0: 0xc6943390  lwc1        $f20, 0x3390($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 13200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C36C4u;
        goto label_1c36c4;
    }
    ctx->pc = 0x1C36BCu;
    {
        const bool branch_taken_0x1c36bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C36C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C36BCu;
        // 0x1c36c0: 0xc6943390  lwc1        $f20, 0x3390($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 13200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c36bc) {
            ctx->pc = 0x1C3718u;
            goto label_1c3718;
        }
    }
    ctx->pc = 0x1C36C4u;
label_1c36c4:
    // 0x1c36c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c36c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1c36c8:
    // 0x1c36c8: 0xc6c0e994  lwc1        $f0, -0x166C($s6)
    ctx->pc = 0x1c36c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294961556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c36cc:
    // 0x1c36cc: 0xc441e990  lwc1        $f1, -0x1670($v0)
    ctx->pc = 0x1c36ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c36d0:
    // 0x1c36d0: 0x26100650  addiu       $s0, $s0, 0x650
    ctx->pc = 0x1c36d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
label_1c36d4:
    // 0x1c36d4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1c36d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1c36d8:
    // 0x1c36d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c36d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c36dc:
    // 0x1c36dc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1c36dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c36e0:
    // 0x1c36e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c36e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c36e4:
    // 0x1c36e4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1c36e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1c36e8:
    // 0x1c36e8: 0xc070948  jal         func_1C2520
label_1c36ec:
    if (ctx->pc == 0x1C36ECu) {
        ctx->pc = 0x1C36ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C36E8u;
        // 0x1c36ec: 0xe7b5000c  swc1        $f21, 0xC($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C36F0u;
        goto label_1c36f0;
    }
    ctx->pc = 0x1C36E8u;
    SET_GPR_U32(ctx, 31, 0x1C36F0u);
    ctx->pc = 0x1C36ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C36E8u;
    // 0x1c36ec: 0xe7b5000c  swc1        $f21, 0xC($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2520u, 0x1C36E8u, 0x1C36F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C36F0u;
label_1c36f0:
    // 0x1c36f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c36f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1c36f4:
    // 0x1c36f4: 0xc6c0e994  lwc1        $f0, -0x166C($s6)
    ctx->pc = 0x1c36f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294961556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c36f8:
    // 0x1c36f8: 0xc441e98c  lwc1        $f1, -0x1674($v0)
    ctx->pc = 0x1c36f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c36fc:
    // 0x1c36fc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1c36fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1c3700:
    // 0x1c3700: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1c3700u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c3704:
    // 0x1c3704: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1c3704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1c3708:
    // 0x1c3708: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x1c3708u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1c370c:
    // 0x1c370c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1c370cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c3710:
    // 0x1c3710: 0x7e0203c0  sq          $v0, 0x3C0($s0)
    ctx->pc = 0x1c3710u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 960), GPR_VEC(ctx, 2));
label_1c3714:
    // 0x1c3714: 0xc6943390  lwc1        $f20, 0x3390($s4)
    ctx->pc = 0x1c3714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 13200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c3718:
    // 0x1c3718: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c3718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c371c:
    // 0x1c371c: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_1c3720:
    if (ctx->pc == 0x1C3720u) {
        ctx->pc = 0x1C3720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C371Cu;
        // 0x1c3720: 0x26550001  addiu       $s5, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3724u;
        goto label_1c3724;
    }
    ctx->pc = 0x1C371Cu;
    {
        const bool branch_taken_0x1c371c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C371Cu;
        // 0x1c3720: 0x26550001  addiu       $s5, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c371c) {
            ctx->pc = 0x1C3754u;
            goto label_1c3754;
        }
    }
    ctx->pc = 0x1C3724u;
label_1c3724:
    // 0x1c3724: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1c3724u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1c3728:
    // 0x1c3728: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1c3728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c372c:
    // 0x1c372c: 0x0  nop
    ctx->pc = 0x1c372cu;
    // NOP
label_1c3730:
    // 0x1c3730: 0xc070b38  jal         func_1C2CE0
label_1c3734:
    if (ctx->pc == 0x1C3734u) {
        ctx->pc = 0x1C3734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3730u;
        // 0x1c3734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3738u;
        goto label_1c3738;
    }
    ctx->pc = 0x1C3730u;
    SET_GPR_U32(ctx, 31, 0x1C3738u);
    ctx->pc = 0x1C3734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3730u;
    // 0x1c3734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2CE0u, 0x1C3730u, 0x1C3738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3738u;
label_1c3738:
    // 0x1c3738: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1c373c:
    if (ctx->pc == 0x1C373Cu) {
        ctx->pc = 0x1C373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3738u;
        // 0x1c373c: 0xc660e984  lwc1        $f0, -0x167C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294961540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3740u;
        goto label_1c3740;
    }
    ctx->pc = 0x1C3738u;
    {
        const bool branch_taken_0x1c3738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3738u;
        // 0x1c373c: 0xc660e984  lwc1        $f0, -0x167C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294961540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3738) {
            ctx->pc = 0x1C3744u;
            goto label_1c3744;
        }
    }
    ctx->pc = 0x1C3740u;
label_1c3740:
    // 0x1c3740: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1c3740u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1c3744:
    // 0x1c3744: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c3744u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c3748:
    // 0x1c3748: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x1c3748u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_1c374c:
    // 0x1c374c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_1c3750:
    if (ctx->pc == 0x1C3750u) {
        ctx->pc = 0x1C3750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C374Cu;
        // 0x1c3750: 0x26100a50  addiu       $s0, $s0, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3754u;
        goto label_1c3754;
    }
    ctx->pc = 0x1C374Cu;
    {
        const bool branch_taken_0x1c374c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C374Cu;
        // 0x1c3750: 0x26100a50  addiu       $s0, $s0, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c374c) {
            ctx->pc = 0x1C3730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3730;
        }
    }
    ctx->pc = 0x1C3754u;
label_1c3754:
    // 0x1c3754: 0x2571018  mult        $v0, $s2, $s7
    ctx->pc = 0x1c3754u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1c3758:
    // 0x1c3758: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c3758u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1c375c:
    // 0x1c375c: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x1c375cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1c3760:
    // 0x1c3760: 0xc070b46  jal         func_1C2D18
label_1c3764:
    if (ctx->pc == 0x1C3764u) {
        ctx->pc = 0x1C3764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3760u;
        // 0x1c3764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3768u;
        goto label_1c3768;
    }
    ctx->pc = 0x1C3760u;
    SET_GPR_U32(ctx, 31, 0x1C3768u);
    ctx->pc = 0x1C3764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3760u;
    // 0x1c3764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2D18u, 0x1C3760u, 0x1C3768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3768u;
label_1c3768:
    // 0x1c3768: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c3768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c376c:
    // 0x1c376c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1c376cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1c3770:
    // 0x1c3770: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1c3770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1c3774:
    // 0x1c3774: 0x60f809  jalr        $v1
label_1c3778:
    if (ctx->pc == 0x1C3778u) {
        ctx->pc = 0x1C3778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3774u;
        // 0x1c3778: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C377Cu;
        goto label_1c377c;
    }
    ctx->pc = 0x1C3774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C377Cu);
        ctx->pc = 0x1C3778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3774u;
        // 0x1c3778: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3774u, 0x1C377Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C377Cu;
label_1c377c:
    // 0x1c377c: 0xc070b38  jal         func_1C2CE0
label_1c3780:
    if (ctx->pc == 0x1C3780u) {
        ctx->pc = 0x1C3780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C377Cu;
        // 0x1c3780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3784u;
        goto label_1c3784;
    }
    ctx->pc = 0x1C377Cu;
    SET_GPR_U32(ctx, 31, 0x1C3784u);
    ctx->pc = 0x1C3780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C377Cu;
    // 0x1c3780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2CE0u, 0x1C377Cu, 0x1C3784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3784u;
label_1c3784:
    // 0x1c3784: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1c3788:
    if (ctx->pc == 0x1C3788u) {
        ctx->pc = 0x1C3788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3784u;
        // 0x1c3788: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C378Cu;
        goto label_1c378c;
    }
    ctx->pc = 0x1C3784u;
    {
        const bool branch_taken_0x1c3784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3784u;
        // 0x1c3788: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3784) {
            ctx->pc = 0x1C3794u;
            goto label_1c3794;
        }
    }
    ctx->pc = 0x1C378Cu;
label_1c378c:
    // 0x1c378c: 0xc440e980  lwc1        $f0, -0x1680($v0)
    ctx->pc = 0x1c378cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c3790:
    // 0x1c3790: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1c3790u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1c3794:
    // 0x1c3794: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x1c3794u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c3798:
    // 0x1c3798: 0x0  nop
    ctx->pc = 0x1c3798u;
    // NOP
label_1c379c:
    // 0x1c379c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1c37a0:
    if (ctx->pc == 0x1C37A0u) {
        ctx->pc = 0x1C37A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C379Cu;
        // 0x1c37a0: 0x4600a586  mov.s       $f22, $f20 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C37A4u;
        goto label_1c37a4;
    }
    ctx->pc = 0x1C379Cu;
    {
        const bool branch_taken_0x1c379c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c379c) {
            ctx->pc = 0x1C37A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C379Cu;
            // 0x1c37a0: 0x4600a586  mov.s       $f22, $f20 (Delay Slot)
            ctx->f[22] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C37A4u;
            goto label_1c37a4;
        }
    }
    ctx->pc = 0x1C37A4u;
label_1c37a4:
    // 0x1c37a4: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x1c37a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1c37a8:
    // 0x1c37a8: 0x2e420005  sltiu       $v0, $s2, 0x5
    ctx->pc = 0x1c37a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_1c37ac:
    // 0x1c37ac: 0x5440ffae  bnel        $v0, $zero, . + 4 + (-0x52 << 2)
label_1c37b0:
    if (ctx->pc == 0x1C37B0u) {
        ctx->pc = 0x1C37B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37ACu;
        // 0x1c37b0: 0x2571018  mult        $v0, $s2, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C37B4u;
        goto label_1c37b4;
    }
    ctx->pc = 0x1C37ACu;
    {
        const bool branch_taken_0x1c37ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c37ac) {
            ctx->pc = 0x1C37B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C37ACu;
            // 0x1c37b0: 0x2571018  mult        $v0, $s2, $s7 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3668;
        }
    }
    ctx->pc = 0x1C37B4u;
label_1c37b4:
    // 0x1c37b4: 0xe6963394  swc1        $f22, 0x3394($s4)
    ctx->pc = 0x1c37b4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 13204), bits); }
label_1c37b8:
    // 0x1c37b8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1c37b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1c37bc:
    // 0x1c37bc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1c37bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1c37c0:
    // 0x1c37c0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1c37c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c37c4:
    // 0x1c37c4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1c37c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c37c8:
    // 0x1c37c8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1c37c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c37cc:
    // 0x1c37cc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c37ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c37d0:
    // 0x1c37d0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1c37d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c37d4:
    // 0x1c37d4: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1c37d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c37d8:
    // 0x1c37d8: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1c37d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c37dc:
    // 0x1c37dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c37dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c37e0:
    // 0x1c37e0: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x1c37e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1c37e4:
    // 0x1c37e4: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x1c37e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1c37e8:
    // 0x1c37e8: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1c37e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c37ec:
    // 0x1c37ec: 0x3e00008  jr          $ra
label_1c37f0:
    if (ctx->pc == 0x1C37F0u) {
        ctx->pc = 0x1C37F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37ECu;
        // 0x1c37f0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C37F4u;
        goto label_1c37f4;
    }
    ctx->pc = 0x1C37ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C37F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37ECu;
        // 0x1c37f0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C37ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C37F4u;
label_1c37f4:
    // 0x1c37f4: 0x0  nop
    ctx->pc = 0x1c37f4u;
    // NOP
    ctx->pc = 0x1c37f8u;
}
