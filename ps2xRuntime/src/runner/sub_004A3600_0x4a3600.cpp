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

// Function: sub_004A3600
// Address: 0x4a3600 - 0x4a3700
void sub_004A3600_0x4a3600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A3600_0x4a3600");
#endif

    switch (ctx->pc) {
        case 0x4a3600u: goto label_4a3600;
        case 0x4a3604u: goto label_4a3604;
        case 0x4a3608u: goto label_4a3608;
        case 0x4a360cu: goto label_4a360c;
        case 0x4a3610u: goto label_4a3610;
        case 0x4a3614u: goto label_4a3614;
        case 0x4a3618u: goto label_4a3618;
        case 0x4a361cu: goto label_4a361c;
        case 0x4a3620u: goto label_4a3620;
        case 0x4a3624u: goto label_4a3624;
        case 0x4a3628u: goto label_4a3628;
        case 0x4a362cu: goto label_4a362c;
        case 0x4a3630u: goto label_4a3630;
        case 0x4a3634u: goto label_4a3634;
        case 0x4a3638u: goto label_4a3638;
        case 0x4a363cu: goto label_4a363c;
        case 0x4a3640u: goto label_4a3640;
        case 0x4a3644u: goto label_4a3644;
        case 0x4a3648u: goto label_4a3648;
        case 0x4a364cu: goto label_4a364c;
        case 0x4a3650u: goto label_4a3650;
        case 0x4a3654u: goto label_4a3654;
        case 0x4a3658u: goto label_4a3658;
        case 0x4a365cu: goto label_4a365c;
        case 0x4a3660u: goto label_4a3660;
        case 0x4a3664u: goto label_4a3664;
        case 0x4a3668u: goto label_4a3668;
        case 0x4a366cu: goto label_4a366c;
        case 0x4a3670u: goto label_4a3670;
        case 0x4a3674u: goto label_4a3674;
        case 0x4a3678u: goto label_4a3678;
        case 0x4a367cu: goto label_4a367c;
        case 0x4a3680u: goto label_4a3680;
        case 0x4a3684u: goto label_4a3684;
        case 0x4a3688u: goto label_4a3688;
        case 0x4a368cu: goto label_4a368c;
        case 0x4a3690u: goto label_4a3690;
        case 0x4a3694u: goto label_4a3694;
        case 0x4a3698u: goto label_4a3698;
        case 0x4a369cu: goto label_4a369c;
        case 0x4a36a0u: goto label_4a36a0;
        case 0x4a36a4u: goto label_4a36a4;
        case 0x4a36a8u: goto label_4a36a8;
        case 0x4a36acu: goto label_4a36ac;
        case 0x4a36b0u: goto label_4a36b0;
        case 0x4a36b4u: goto label_4a36b4;
        case 0x4a36b8u: goto label_4a36b8;
        case 0x4a36bcu: goto label_4a36bc;
        case 0x4a36c0u: goto label_4a36c0;
        case 0x4a36c4u: goto label_4a36c4;
        case 0x4a36c8u: goto label_4a36c8;
        case 0x4a36ccu: goto label_4a36cc;
        case 0x4a36d0u: goto label_4a36d0;
        case 0x4a36d4u: goto label_4a36d4;
        case 0x4a36d8u: goto label_4a36d8;
        case 0x4a36dcu: goto label_4a36dc;
        case 0x4a36e0u: goto label_4a36e0;
        case 0x4a36e4u: goto label_4a36e4;
        case 0x4a36e8u: goto label_4a36e8;
        case 0x4a36ecu: goto label_4a36ec;
        case 0x4a36f0u: goto label_4a36f0;
        case 0x4a36f4u: goto label_4a36f4;
        case 0x4a36f8u: goto label_4a36f8;
        case 0x4a36fcu: goto label_4a36fc;
        default: break;
    }

    ctx->pc = 0x4a3600u;

label_4a3600:
    // 0x4a3600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a3600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4a3604:
    // 0x4a3604: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4a3604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4a3608:
    // 0x4a3608: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a3608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4a360c:
    // 0x4a360c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a360cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a3610:
    // 0x4a3610: 0x2450f940  addiu       $s0, $v0, -0x6C0
    ctx->pc = 0x4a3610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965568));
label_4a3614:
    // 0x4a3614: 0x8c43f940  lw          $v1, -0x6C0($v0)
    ctx->pc = 0x4a3614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965568)));
label_4a3618:
    // 0x4a3618: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x4a3618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
label_4a361c:
    // 0x4a361c: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x4a361cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
label_4a3620:
    // 0x4a3620: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x4a3620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_4a3624:
    // 0x4a3624: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_4a3628:
    if (ctx->pc == 0x4A3628u) {
        ctx->pc = 0x4A3628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3624u;
        // 0x4a3628: 0xaf8087b4  sw          $zero, -0x784C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936500), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A362Cu;
        goto label_4a362c;
    }
    ctx->pc = 0x4A3624u;
    {
        const bool branch_taken_0x4a3624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3624u;
        // 0x4a3628: 0xaf8087b4  sw          $zero, -0x784C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936500), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3624) {
            ctx->pc = 0x4A3698u;
            goto label_4a3698;
        }
    }
    ctx->pc = 0x4A362Cu;
label_4a362c:
    // 0x4a362c: 0x8f8287b0  lw          $v0, -0x7850($gp)
    ctx->pc = 0x4a362cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_4a3630:
    // 0x4a3630: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x4a3630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4a3634:
    // 0x4a3634: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4a3634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4a3638:
    // 0x4a3638: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x4a3638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_4a363c:
    // 0x4a363c: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x4a363cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4a3640:
    // 0x4a3640: 0x8c62ae20  lw          $v0, -0x51E0($v1)
    ctx->pc = 0x4a3640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946336)));
label_4a3644:
    // 0x4a3644: 0x2012  mflo        $a0
    ctx->pc = 0x4a3644u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_4a3648:
    // 0x4a3648: 0x40f809  jalr        $v0
label_4a364c:
    if (ctx->pc == 0x4A364Cu) {
        ctx->pc = 0x4A364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3648u;
        // 0x4a364c: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3650u;
        goto label_4a3650;
    }
    ctx->pc = 0x4A3648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A3650u);
        ctx->pc = 0x4A364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3648u;
        // 0x4a364c: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A3648u, 0x4A3650u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A3650u;
label_4a3650:
    // 0x4a3650: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4a3654:
    if (ctx->pc == 0x4A3654u) {
        ctx->pc = 0x4A3654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3650u;
        // 0x4a3654: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3658u;
        goto label_4a3658;
    }
    ctx->pc = 0x4A3650u;
    {
        const bool branch_taken_0x4a3650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3650u;
        // 0x4a3654: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3650) {
            ctx->pc = 0x4A3660u;
            goto label_4a3660;
        }
    }
    ctx->pc = 0x4A3658u;
label_4a3658:
    // 0x4a3658: 0x10000025  b           . + 4 + (0x25 << 2)
label_4a365c:
    if (ctx->pc == 0x4A365Cu) {
        ctx->pc = 0x4A365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3658u;
        // 0x4a365c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3660u;
        goto label_4a3660;
    }
    ctx->pc = 0x4A3658u;
    {
        const bool branch_taken_0x4a3658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3658u;
        // 0x4a365c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3658) {
            ctx->pc = 0x4A36F0u;
            goto label_4a36f0;
        }
    }
    ctx->pc = 0x4A3660u;
label_4a3660:
    // 0x4a3660: 0x8f8487b0  lw          $a0, -0x7850($gp)
    ctx->pc = 0x4a3660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_4a3664:
    // 0x4a3664: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4a3664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4a3668:
    // 0x4a3668: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x4a3668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
label_4a366c:
    // 0x4a366c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a366cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4a3670:
    // 0x4a3670: 0x244230c8  addiu       $v0, $v0, 0x30C8
    ctx->pc = 0x4a3670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12488));
label_4a3674:
    // 0x4a3674: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x4a3674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_4a3678:
    // 0x4a3678: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x4a3678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_4a367c:
    // 0x4a367c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x4a367cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_4a3680:
    // 0x4a3680: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x4a3680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_4a3684:
    // 0x4a3684: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x4a3684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_4a3688:
    // 0x4a3688: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x4a3688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
label_4a368c:
    // 0x4a368c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x4a368cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_4a3690:
    // 0x4a3690: 0x10000004  b           . + 4 + (0x4 << 2)
label_4a3694:
    if (ctx->pc == 0x4A3694u) {
        ctx->pc = 0x4A3694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3690u;
        // 0x4a3694: 0xae03002c  sw          $v1, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3698u;
        goto label_4a3698;
    }
    ctx->pc = 0x4A3690u;
    {
        const bool branch_taken_0x4a3690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3690u;
        // 0x4a3694: 0xae03002c  sw          $v1, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3690) {
            ctx->pc = 0x4A36A4u;
            goto label_4a36a4;
        }
    }
    ctx->pc = 0x4A3698u;
label_4a3698:
    // 0x4a3698: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x4a3698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
label_4a369c:
    // 0x4a369c: 0x24424850  addiu       $v0, $v0, 0x4850
    ctx->pc = 0x4a369cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18512));
label_4a36a0:
    // 0x4a36a0: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x4a36a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_4a36a4:
    // 0x4a36a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a36a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a36a8:
    // 0x4a36a8: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x4a36a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
label_4a36ac:
    // 0x4a36ac: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x4a36acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
label_4a36b0:
    // 0x4a36b0: 0x35088005  ori         $t0, $t0, 0x8005
    ctx->pc = 0x4a36b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32773);
label_4a36b4:
    // 0x4a36b4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x4a36b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_4a36b8:
    // 0x4a36b8: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x4a36b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
label_4a36bc:
    // 0x4a36bc: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x4a36bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_4a36c0:
    // 0x4a36c0: 0x24040051  addiu       $a0, $zero, 0x51
    ctx->pc = 0x4a36c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_4a36c4:
    // 0x4a36c4: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x4a36c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_4a36c8:
    // 0x4a36c8: 0x24c60500  addiu       $a2, $a2, 0x500
    ctx->pc = 0x4a36c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1280));
label_4a36cc:
    // 0x4a36cc: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x4a36ccu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
label_4a36d0:
    // 0x4a36d0: 0x70a82b89  pcpyld      $a1, $a1, $t0
    ctx->pc = 0x4a36d0u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 8)));
label_4a36d4:
    // 0x4a36d4: 0x70671b89  pcpyld      $v1, $v1, $a3
    ctx->pc = 0x4a36d4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
label_4a36d8:
    // 0x4a36d8: 0x70872389  pcpyld      $a0, $a0, $a3
    ctx->pc = 0x4a36d8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
label_4a36dc:
    // 0x4a36dc: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x4a36dcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
label_4a36e0:
    // 0x4a36e0: 0x7cc50030  sq          $a1, 0x30($a2)
    ctx->pc = 0x4a36e0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 5));
label_4a36e4:
    // 0x4a36e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a36e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a36e8:
    // 0x4a36e8: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x4a36e8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
label_4a36ec:
    // 0x4a36ec: 0x7cc40010  sq          $a0, 0x10($a2)
    ctx->pc = 0x4a36ecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 4));
label_4a36f0:
    // 0x4a36f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a36f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a36f4:
    // 0x4a36f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a36f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a36f8:
    // 0x4a36f8: 0x3e00008  jr          $ra
label_4a36fc:
    if (ctx->pc == 0x4A36FCu) {
        ctx->pc = 0x4A36FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A36F8u;
        // 0x4a36fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3700u;
        goto label_fallthrough_0x4a36f8;
    }
    ctx->pc = 0x4A36F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A36FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A36F8u;
        // 0x4a36fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A36F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4a36f8:
    ctx->pc = 0x4A3700u;
}
