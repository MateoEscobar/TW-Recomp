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

// Function: sub_003E33D0
// Address: 0x3e33d0 - 0x3e36c0
void sub_003E33D0_0x3e33d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E33D0_0x3e33d0");
#endif

    switch (ctx->pc) {
        case 0x3e33d0u: goto label_3e33d0;
        case 0x3e33d4u: goto label_3e33d4;
        case 0x3e33d8u: goto label_3e33d8;
        case 0x3e33dcu: goto label_3e33dc;
        case 0x3e33e0u: goto label_3e33e0;
        case 0x3e33e4u: goto label_3e33e4;
        case 0x3e33e8u: goto label_3e33e8;
        case 0x3e33ecu: goto label_3e33ec;
        case 0x3e33f0u: goto label_3e33f0;
        case 0x3e33f4u: goto label_3e33f4;
        case 0x3e33f8u: goto label_3e33f8;
        case 0x3e33fcu: goto label_3e33fc;
        case 0x3e3400u: goto label_3e3400;
        case 0x3e3404u: goto label_3e3404;
        case 0x3e3408u: goto label_3e3408;
        case 0x3e340cu: goto label_3e340c;
        case 0x3e3410u: goto label_3e3410;
        case 0x3e3414u: goto label_3e3414;
        case 0x3e3418u: goto label_3e3418;
        case 0x3e341cu: goto label_3e341c;
        case 0x3e3420u: goto label_3e3420;
        case 0x3e3424u: goto label_3e3424;
        case 0x3e3428u: goto label_3e3428;
        case 0x3e342cu: goto label_3e342c;
        case 0x3e3430u: goto label_3e3430;
        case 0x3e3434u: goto label_3e3434;
        case 0x3e3438u: goto label_3e3438;
        case 0x3e343cu: goto label_3e343c;
        case 0x3e3440u: goto label_3e3440;
        case 0x3e3444u: goto label_3e3444;
        case 0x3e3448u: goto label_3e3448;
        case 0x3e344cu: goto label_3e344c;
        case 0x3e3450u: goto label_3e3450;
        case 0x3e3454u: goto label_3e3454;
        case 0x3e3458u: goto label_3e3458;
        case 0x3e345cu: goto label_3e345c;
        case 0x3e3460u: goto label_3e3460;
        case 0x3e3464u: goto label_3e3464;
        case 0x3e3468u: goto label_3e3468;
        case 0x3e346cu: goto label_3e346c;
        case 0x3e3470u: goto label_3e3470;
        case 0x3e3474u: goto label_3e3474;
        case 0x3e3478u: goto label_3e3478;
        case 0x3e347cu: goto label_3e347c;
        case 0x3e3480u: goto label_3e3480;
        case 0x3e3484u: goto label_3e3484;
        case 0x3e3488u: goto label_3e3488;
        case 0x3e348cu: goto label_3e348c;
        case 0x3e3490u: goto label_3e3490;
        case 0x3e3494u: goto label_3e3494;
        case 0x3e3498u: goto label_3e3498;
        case 0x3e349cu: goto label_3e349c;
        case 0x3e34a0u: goto label_3e34a0;
        case 0x3e34a4u: goto label_3e34a4;
        case 0x3e34a8u: goto label_3e34a8;
        case 0x3e34acu: goto label_3e34ac;
        case 0x3e34b0u: goto label_3e34b0;
        case 0x3e34b4u: goto label_3e34b4;
        case 0x3e34b8u: goto label_3e34b8;
        case 0x3e34bcu: goto label_3e34bc;
        case 0x3e34c0u: goto label_3e34c0;
        case 0x3e34c4u: goto label_3e34c4;
        case 0x3e34c8u: goto label_3e34c8;
        case 0x3e34ccu: goto label_3e34cc;
        case 0x3e34d0u: goto label_3e34d0;
        case 0x3e34d4u: goto label_3e34d4;
        case 0x3e34d8u: goto label_3e34d8;
        case 0x3e34dcu: goto label_3e34dc;
        case 0x3e34e0u: goto label_3e34e0;
        case 0x3e34e4u: goto label_3e34e4;
        case 0x3e34e8u: goto label_3e34e8;
        case 0x3e34ecu: goto label_3e34ec;
        case 0x3e34f0u: goto label_3e34f0;
        case 0x3e34f4u: goto label_3e34f4;
        case 0x3e34f8u: goto label_3e34f8;
        case 0x3e34fcu: goto label_3e34fc;
        case 0x3e3500u: goto label_3e3500;
        case 0x3e3504u: goto label_3e3504;
        case 0x3e3508u: goto label_3e3508;
        case 0x3e350cu: goto label_3e350c;
        case 0x3e3510u: goto label_3e3510;
        case 0x3e3514u: goto label_3e3514;
        case 0x3e3518u: goto label_3e3518;
        case 0x3e351cu: goto label_3e351c;
        case 0x3e3520u: goto label_3e3520;
        case 0x3e3524u: goto label_3e3524;
        case 0x3e3528u: goto label_3e3528;
        case 0x3e352cu: goto label_3e352c;
        case 0x3e3530u: goto label_3e3530;
        case 0x3e3534u: goto label_3e3534;
        case 0x3e3538u: goto label_3e3538;
        case 0x3e353cu: goto label_3e353c;
        case 0x3e3540u: goto label_3e3540;
        case 0x3e3544u: goto label_3e3544;
        case 0x3e3548u: goto label_3e3548;
        case 0x3e354cu: goto label_3e354c;
        case 0x3e3550u: goto label_3e3550;
        case 0x3e3554u: goto label_3e3554;
        case 0x3e3558u: goto label_3e3558;
        case 0x3e355cu: goto label_3e355c;
        case 0x3e3560u: goto label_3e3560;
        case 0x3e3564u: goto label_3e3564;
        case 0x3e3568u: goto label_3e3568;
        case 0x3e356cu: goto label_3e356c;
        case 0x3e3570u: goto label_3e3570;
        case 0x3e3574u: goto label_3e3574;
        case 0x3e3578u: goto label_3e3578;
        case 0x3e357cu: goto label_3e357c;
        case 0x3e3580u: goto label_3e3580;
        case 0x3e3584u: goto label_3e3584;
        case 0x3e3588u: goto label_3e3588;
        case 0x3e358cu: goto label_3e358c;
        case 0x3e3590u: goto label_3e3590;
        case 0x3e3594u: goto label_3e3594;
        case 0x3e3598u: goto label_3e3598;
        case 0x3e359cu: goto label_3e359c;
        case 0x3e35a0u: goto label_3e35a0;
        case 0x3e35a4u: goto label_3e35a4;
        case 0x3e35a8u: goto label_3e35a8;
        case 0x3e35acu: goto label_3e35ac;
        case 0x3e35b0u: goto label_3e35b0;
        case 0x3e35b4u: goto label_3e35b4;
        case 0x3e35b8u: goto label_3e35b8;
        case 0x3e35bcu: goto label_3e35bc;
        case 0x3e35c0u: goto label_3e35c0;
        case 0x3e35c4u: goto label_3e35c4;
        case 0x3e35c8u: goto label_3e35c8;
        case 0x3e35ccu: goto label_3e35cc;
        case 0x3e35d0u: goto label_3e35d0;
        case 0x3e35d4u: goto label_3e35d4;
        case 0x3e35d8u: goto label_3e35d8;
        case 0x3e35dcu: goto label_3e35dc;
        case 0x3e35e0u: goto label_3e35e0;
        case 0x3e35e4u: goto label_3e35e4;
        case 0x3e35e8u: goto label_3e35e8;
        case 0x3e35ecu: goto label_3e35ec;
        case 0x3e35f0u: goto label_3e35f0;
        case 0x3e35f4u: goto label_3e35f4;
        case 0x3e35f8u: goto label_3e35f8;
        case 0x3e35fcu: goto label_3e35fc;
        case 0x3e3600u: goto label_3e3600;
        case 0x3e3604u: goto label_3e3604;
        case 0x3e3608u: goto label_3e3608;
        case 0x3e360cu: goto label_3e360c;
        case 0x3e3610u: goto label_3e3610;
        case 0x3e3614u: goto label_3e3614;
        case 0x3e3618u: goto label_3e3618;
        case 0x3e361cu: goto label_3e361c;
        case 0x3e3620u: goto label_3e3620;
        case 0x3e3624u: goto label_3e3624;
        case 0x3e3628u: goto label_3e3628;
        case 0x3e362cu: goto label_3e362c;
        case 0x3e3630u: goto label_3e3630;
        case 0x3e3634u: goto label_3e3634;
        case 0x3e3638u: goto label_3e3638;
        case 0x3e363cu: goto label_3e363c;
        case 0x3e3640u: goto label_3e3640;
        case 0x3e3644u: goto label_3e3644;
        case 0x3e3648u: goto label_3e3648;
        case 0x3e364cu: goto label_3e364c;
        case 0x3e3650u: goto label_3e3650;
        case 0x3e3654u: goto label_3e3654;
        case 0x3e3658u: goto label_3e3658;
        case 0x3e365cu: goto label_3e365c;
        case 0x3e3660u: goto label_3e3660;
        case 0x3e3664u: goto label_3e3664;
        case 0x3e3668u: goto label_3e3668;
        case 0x3e366cu: goto label_3e366c;
        case 0x3e3670u: goto label_3e3670;
        case 0x3e3674u: goto label_3e3674;
        case 0x3e3678u: goto label_3e3678;
        case 0x3e367cu: goto label_3e367c;
        case 0x3e3680u: goto label_3e3680;
        case 0x3e3684u: goto label_3e3684;
        case 0x3e3688u: goto label_3e3688;
        case 0x3e368cu: goto label_3e368c;
        case 0x3e3690u: goto label_3e3690;
        case 0x3e3694u: goto label_3e3694;
        case 0x3e3698u: goto label_3e3698;
        case 0x3e369cu: goto label_3e369c;
        case 0x3e36a0u: goto label_3e36a0;
        case 0x3e36a4u: goto label_3e36a4;
        case 0x3e36a8u: goto label_3e36a8;
        case 0x3e36acu: goto label_3e36ac;
        case 0x3e36b0u: goto label_3e36b0;
        case 0x3e36b4u: goto label_3e36b4;
        case 0x3e36b8u: goto label_3e36b8;
        case 0x3e36bcu: goto label_3e36bc;
        default: break;
    }

    ctx->pc = 0x3e33d0u;

label_3e33d0:
    // 0x3e33d0: 0x27bdfb20  addiu       $sp, $sp, -0x4E0
    ctx->pc = 0x3e33d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966048));
label_3e33d4:
    // 0x3e33d4: 0x7fb10490  sq          $s1, 0x490($sp)
    ctx->pc = 0x3e33d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 17));
label_3e33d8:
    // 0x3e33d8: 0x7fb20480  sq          $s2, 0x480($sp)
    ctx->pc = 0x3e33d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 18));
label_3e33dc:
    // 0x3e33dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e33dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e33e0:
    // 0x3e33e0: 0x7fb30470  sq          $s3, 0x470($sp)
    ctx->pc = 0x3e33e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 19));
label_3e33e4:
    // 0x3e33e4: 0x7fb004a0  sq          $s0, 0x4A0($sp)
    ctx->pc = 0x3e33e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 16));
label_3e33e8:
    // 0x3e33e8: 0xffbf0460  sd          $ra, 0x460($sp)
    ctx->pc = 0x3e33e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 31));
label_3e33ec:
    // 0x3e33ec: 0xe7b804d0  swc1        $f24, 0x4D0($sp)
    ctx->pc = 0x3e33ecu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1232), bits); }
label_3e33f0:
    // 0x3e33f0: 0xe7b704c8  swc1        $f23, 0x4C8($sp)
    ctx->pc = 0x3e33f0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1224), bits); }
label_3e33f4:
    // 0x3e33f4: 0xe7b604c0  swc1        $f22, 0x4C0($sp)
    ctx->pc = 0x3e33f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1216), bits); }
label_3e33f8:
    // 0x3e33f8: 0xe7b504b8  swc1        $f21, 0x4B8($sp)
    ctx->pc = 0x3e33f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1208), bits); }
label_3e33fc:
    // 0x3e33fc: 0xe7b404b0  swc1        $f20, 0x4B0($sp)
    ctx->pc = 0x3e33fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1200), bits); }
label_3e3400:
    // 0x3e3400: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e3400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e3404:
    // 0x3e3404: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e3404u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e3408:
    // 0x3e3408: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e3408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e340c:
    // 0x3e340c: 0x40f809  jalr        $v0
label_3e3410:
    if (ctx->pc == 0x3E3410u) {
        ctx->pc = 0x3E3410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E340Cu;
        // 0x3e3410: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3414u;
        goto label_3e3414;
    }
    ctx->pc = 0x3E340Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E3414u);
        ctx->pc = 0x3E3410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E340Cu;
        // 0x3e3410: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E340Cu, 0x3E3414u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E3414u;
label_3e3414:
    // 0x3e3414: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e3414u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e3418:
    // 0x3e3418: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e3418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e341c:
    // 0x3e341c: 0x27b30430  addiu       $s3, $sp, 0x430
    ctx->pc = 0x3e341cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3e3420:
    // 0x3e3420: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3e3420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e3424:
    // 0x3e3424: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3e3424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3e3428:
    // 0x3e3428: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e3428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3e342c:
    // 0x3e342c: 0x0  nop
    ctx->pc = 0x3e342cu;
    // NOP
label_3e3430:
    // 0x3e3430: 0x0  nop
    ctx->pc = 0x3e3430u;
    // NOP
label_3e3434:
    // 0x3e3434: 0x0  nop
    ctx->pc = 0x3e3434u;
    // NOP
label_3e3438:
    // 0x3e3438: 0x0  nop
    ctx->pc = 0x3e3438u;
    // NOP
label_3e343c:
    // 0x3e343c: 0x0  nop
    ctx->pc = 0x3e343cu;
    // NOP
label_3e3440:
    // 0x3e3440: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3e3444:
    if (ctx->pc == 0x3E3444u) {
        ctx->pc = 0x3E3444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3440u;
        // 0x3e3444: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3448u;
        goto label_3e3448;
    }
    ctx->pc = 0x3E3440u;
    {
        const bool branch_taken_0x3e3440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E3444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3440u;
        // 0x3e3444: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3440) {
            ctx->pc = 0x3E3430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e3430;
        }
    }
    ctx->pc = 0x3E3448u;
label_3e3448:
    // 0x3e3448: 0xc138ddc  jal         func_4E3770
label_3e344c:
    if (ctx->pc == 0x3E344Cu) {
        ctx->pc = 0x3E3450u;
        goto label_3e3450;
    }
    ctx->pc = 0x3E3448u;
    SET_GPR_U32(ctx, 31, 0x3E3450u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3E3448u, 0x3E3450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3450u;
label_3e3450:
    // 0x3e3450: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3e3450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3e3454:
    // 0x3e3454: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3e3454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3e3458:
    // 0x3e3458: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e3458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e345c:
    // 0x3e345c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3e345cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3e3460:
    // 0x3e3460: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3e3460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3e3464:
    // 0x3e3464: 0x2450b8b8  addiu       $s0, $v0, -0x4748
    ctx->pc = 0x3e3464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3e3468:
    // 0x3e3468: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3e3468u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3e346c:
    // 0x3e346c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e346cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3470:
    // 0x3e3470: 0xc0cd518  jal         func_335460
label_3e3474:
    if (ctx->pc == 0x3E3474u) {
        ctx->pc = 0x3E3474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3470u;
        // 0x3e3474: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3478u;
        goto label_3e3478;
    }
    ctx->pc = 0x3E3470u;
    SET_GPR_U32(ctx, 31, 0x3E3478u);
    ctx->pc = 0x3E3474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3470u;
    // 0x3e3474: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E3470u, 0x3E3478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3478u;
label_3e3478:
    // 0x3e3478: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x3e3478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3e347c:
    // 0x3e347c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3e347cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3e3480:
    // 0x3e3480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3484:
    // 0x3e3484: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3e3484u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3e3488:
    // 0x3e3488: 0xc0cd518  jal         func_335460
label_3e348c:
    if (ctx->pc == 0x3E348Cu) {
        ctx->pc = 0x3E348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3488u;
        // 0x3e348c: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3490u;
        goto label_3e3490;
    }
    ctx->pc = 0x3E3488u;
    SET_GPR_U32(ctx, 31, 0x3E3490u);
    ctx->pc = 0x3E348Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3488u;
    // 0x3e348c: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E3488u, 0x3E3490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3490u;
label_3e3490:
    // 0x3e3490: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3e3490u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3e3494:
    // 0x3e3494: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x3e3494u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_3e3498:
    // 0x3e3498: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3e3498u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3e349c:
    // 0x3e349c: 0xc0cd518  jal         func_335460
label_3e34a0:
    if (ctx->pc == 0x3E34A0u) {
        ctx->pc = 0x3E34A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E349Cu;
        // 0x3e34a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E34A4u;
        goto label_3e34a4;
    }
    ctx->pc = 0x3E349Cu;
    SET_GPR_U32(ctx, 31, 0x3E34A4u);
    ctx->pc = 0x3E34A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E349Cu;
    // 0x3e34a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E349Cu, 0x3E34A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E34A4u;
label_3e34a4:
    // 0x3e34a4: 0xe7b50430  swc1        $f21, 0x430($sp)
    ctx->pc = 0x3e34a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1072), bits); }
label_3e34a8:
    // 0x3e34a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e34a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e34ac:
    // 0x3e34ac: 0xe7b40434  swc1        $f20, 0x434($sp)
    ctx->pc = 0x3e34acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1076), bits); }
label_3e34b0:
    // 0x3e34b0: 0xe7a00438  swc1        $f0, 0x438($sp)
    ctx->pc = 0x3e34b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1080), bits); }
label_3e34b4:
    // 0x3e34b4: 0xe676000c  swc1        $f22, 0xC($s3)
    ctx->pc = 0x3e34b4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3e34b8:
    // 0x3e34b8: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3e34b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3e34bc:
    // 0x3e34bc: 0xc0e87c0  jal         func_3A1F00
label_3e34c0:
    if (ctx->pc == 0x3E34C0u) {
        ctx->pc = 0x3E34C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E34BCu;
        // 0x3e34c0: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E34C4u;
        goto label_3e34c4;
    }
    ctx->pc = 0x3E34BCu;
    SET_GPR_U32(ctx, 31, 0x3E34C4u);
    ctx->pc = 0x3E34C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E34BCu;
    // 0x3e34c0: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3E34BCu, 0x3E34C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E34C4u;
label_3e34c4:
    // 0x3e34c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3e34c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e34c8:
    // 0x3e34c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e34c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e34cc:
    // 0x3e34cc: 0xc136b18  jal         func_4DAC60
label_3e34d0:
    if (ctx->pc == 0x3E34D0u) {
        ctx->pc = 0x3E34D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E34CCu;
        // 0x3e34d0: 0x27a50420  addiu       $a1, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E34D4u;
        goto label_3e34d4;
    }
    ctx->pc = 0x3E34CCu;
    SET_GPR_U32(ctx, 31, 0x3E34D4u);
    ctx->pc = 0x3E34D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E34CCu;
    // 0x3e34d0: 0x27a50420  addiu       $a1, $sp, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3E34CCu, 0x3E34D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E34D4u;
label_3e34d4:
    // 0x3e34d4: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3e34d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3e34d8:
    // 0x3e34d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e34d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e34dc:
    // 0x3e34dc: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3e34dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3e34e0:
    // 0x3e34e0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3e34e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3e34e4:
    // 0x3e34e4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3e34e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3e34e8:
    // 0x3e34e8: 0x40f809  jalr        $v0
label_3e34ec:
    if (ctx->pc == 0x3E34ECu) {
        ctx->pc = 0x3E34ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E34E8u;
        // 0x3e34ec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E34F0u;
        goto label_3e34f0;
    }
    ctx->pc = 0x3E34E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E34F0u);
        ctx->pc = 0x3E34ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E34E8u;
        // 0x3e34ec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E34E8u, 0x3E34F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E34F0u;
label_3e34f0:
    // 0x3e34f0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x3e34f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_3e34f4:
    // 0x3e34f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e34f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3e34f8:
    // 0x3e34f8: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_3e34fc:
    if (ctx->pc == 0x3E34FCu) {
        ctx->pc = 0x3E34FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E34F8u;
        // 0x3e34fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3500u;
        goto label_3e3500;
    }
    ctx->pc = 0x3E34F8u;
    {
        const bool branch_taken_0x3e34f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E34FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E34F8u;
        // 0x3e34fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e34f8) {
            ctx->pc = 0x3E3638u;
            goto label_3e3638;
        }
    }
    ctx->pc = 0x3E3500u;
label_3e3500:
    // 0x3e3500: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x3e3500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3e3504:
    // 0x3e3504: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x3e3504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
label_3e3508:
    // 0x3e3508: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3e3508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3e350c:
    // 0x3e350c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3e350cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3e3510:
    // 0x3e3510: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e3510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e3514:
    // 0x3e3514: 0xc0cd4ee  jal         func_3353B8
label_3e3518:
    if (ctx->pc == 0x3E3518u) {
        ctx->pc = 0x3E3518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3514u;
        // 0x3e3518: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E351Cu;
        goto label_3e351c;
    }
    ctx->pc = 0x3E3514u;
    SET_GPR_U32(ctx, 31, 0x3E351Cu);
    ctx->pc = 0x3E3518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3514u;
    // 0x3e3518: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E3514u, 0x3E351Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E351Cu;
label_3e351c:
    // 0x3e351c: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x3e351cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3e3520:
    // 0x3e3520: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3e3520u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3e3524:
    // 0x3e3524: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_3e3528:
    if (ctx->pc == 0x3E3528u) {
        ctx->pc = 0x3E3528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3524u;
        // 0x3e3528: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E352Cu;
        goto label_3e352c;
    }
    ctx->pc = 0x3E3524u;
    {
        const bool branch_taken_0x3e3524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3524u;
        // 0x3e3528: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3524) {
            ctx->pc = 0x3E3574u;
            goto label_3e3574;
        }
    }
    ctx->pc = 0x3E352Cu;
label_3e352c:
    // 0x3e352c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e352cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e3530:
    // 0x3e3530: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3e3530u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3e3534:
    // 0x3e3534: 0x261016c0  addiu       $s0, $s0, 0x16C0
    ctx->pc = 0x3e3534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_3e3538:
    // 0x3e3538: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3e3538u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3e353c:
    // 0x3e353c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e353cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3540:
    // 0x3e3540: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3e3540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3e3544:
    // 0x3e3544: 0x60f809  jalr        $v1
label_3e3548:
    if (ctx->pc == 0x3E3548u) {
        ctx->pc = 0x3E3548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3544u;
        // 0x3e3548: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E354Cu;
        goto label_3e354c;
    }
    ctx->pc = 0x3E3544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E354Cu);
        ctx->pc = 0x3E3548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3544u;
        // 0x3e3548: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3544u, 0x3E354Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E354Cu;
label_3e354c:
    // 0x3e354c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x3e354cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_3e3550:
    // 0x3e3550: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e3550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3554:
    // 0x3e3554: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x3e3554u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
label_3e3558:
    // 0x3e3558: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e3558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e355c:
    // 0x3e355c: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x3e355cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_3e3560:
    // 0x3e3560: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x3e3560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_3e3564:
    // 0x3e3564: 0x40f809  jalr        $v0
label_3e3568:
    if (ctx->pc == 0x3E3568u) {
        ctx->pc = 0x3E3568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3564u;
        // 0x3e3568: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E356Cu;
        goto label_3e356c;
    }
    ctx->pc = 0x3E3564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E356Cu);
        ctx->pc = 0x3E3568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3564u;
        // 0x3e3568: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3564u, 0x3E356Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E356Cu;
label_3e356c:
    // 0x3e356c: 0x1000002e  b           . + 4 + (0x2E << 2)
label_3e3570:
    if (ctx->pc == 0x3E3570u) {
        ctx->pc = 0x3E3570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E356Cu;
        // 0x3e3570: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3574u;
        goto label_3e3574;
    }
    ctx->pc = 0x3E356Cu;
    {
        const bool branch_taken_0x3e356c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E356Cu;
        // 0x3e3570: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e356c) {
            ctx->pc = 0x3E3628u;
            goto label_3e3628;
        }
    }
    ctx->pc = 0x3E3574u;
label_3e3574:
    // 0x3e3574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3578:
    // 0x3e3578: 0xc0cd518  jal         func_335460
label_3e357c:
    if (ctx->pc == 0x3E357Cu) {
        ctx->pc = 0x3E357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3578u;
        // 0x3e357c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3580u;
        goto label_3e3580;
    }
    ctx->pc = 0x3E3578u;
    SET_GPR_U32(ctx, 31, 0x3E3580u);
    ctx->pc = 0x3E357Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3578u;
    // 0x3e357c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E3578u, 0x3E3580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3580u;
label_3e3580:
    // 0x3e3580: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x3e3580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3e3584:
    // 0x3e3584: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e3584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e3588:
    // 0x3e3588: 0xc136b24  jal         func_4DAC90
label_3e358c:
    if (ctx->pc == 0x3E358Cu) {
        ctx->pc = 0x3E358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3588u;
        // 0x3e358c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3590u;
        goto label_3e3590;
    }
    ctx->pc = 0x3E3588u;
    SET_GPR_U32(ctx, 31, 0x3E3590u);
    ctx->pc = 0x3E358Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3588u;
    // 0x3e358c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3E3588u, 0x3E3590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3590u;
label_3e3590:
    // 0x3e3590: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3e3590u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3e3594:
    // 0x3e3594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3598:
    // 0x3e3598: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3e3598u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3e359c:
    // 0x3e359c: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x3e359cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_3e35a0:
    // 0x3e35a0: 0xc0cd518  jal         func_335460
label_3e35a4:
    if (ctx->pc == 0x3E35A4u) {
        ctx->pc = 0x3E35A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E35A0u;
        // 0x3e35a4: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E35A8u;
        goto label_3e35a8;
    }
    ctx->pc = 0x3E35A0u;
    SET_GPR_U32(ctx, 31, 0x3E35A8u);
    ctx->pc = 0x3E35A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E35A0u;
    // 0x3e35a4: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E35A0u, 0x3E35A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E35A8u;
label_3e35a8:
    // 0x3e35a8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3e35a8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3e35ac:
    // 0x3e35ac: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x3e35acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_3e35b0:
    // 0x3e35b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e35b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e35b4:
    // 0x3e35b4: 0xc0cd518  jal         func_335460
label_3e35b8:
    if (ctx->pc == 0x3E35B8u) {
        ctx->pc = 0x3E35B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E35B4u;
        // 0x3e35b8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E35BCu;
        goto label_3e35bc;
    }
    ctx->pc = 0x3E35B4u;
    SET_GPR_U32(ctx, 31, 0x3E35BCu);
    ctx->pc = 0x3E35B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E35B4u;
    // 0x3e35b8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E35B4u, 0x3E35BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E35BCu;
label_3e35bc:
    // 0x3e35bc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3e35bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3e35c0:
    // 0x3e35c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e35c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e35c4:
    // 0x3e35c4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3e35c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3e35c8:
    // 0x3e35c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e35c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e35cc:
    // 0x3e35cc: 0xc0cd518  jal         func_335460
label_3e35d0:
    if (ctx->pc == 0x3E35D0u) {
        ctx->pc = 0x3E35D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E35CCu;
        // 0x3e35d0: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E35D4u;
        goto label_3e35d4;
    }
    ctx->pc = 0x3E35CCu;
    SET_GPR_U32(ctx, 31, 0x3E35D4u);
    ctx->pc = 0x3E35D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E35CCu;
    // 0x3e35d0: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E35CCu, 0x3E35D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E35D4u;
label_3e35d4:
    // 0x3e35d4: 0x27a30450  addiu       $v1, $sp, 0x450
    ctx->pc = 0x3e35d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3e35d8:
    // 0x3e35d8: 0xe7b50450  swc1        $f21, 0x450($sp)
    ctx->pc = 0x3e35d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1104), bits); }
label_3e35dc:
    // 0x3e35dc: 0xe7b40454  swc1        $f20, 0x454($sp)
    ctx->pc = 0x3e35dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1108), bits); }
label_3e35e0:
    // 0x3e35e0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3e35e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3e35e4:
    // 0x3e35e4: 0xe7a00458  swc1        $f0, 0x458($sp)
    ctx->pc = 0x3e35e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1112), bits); }
label_3e35e8:
    // 0x3e35e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3e35e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e35ec:
    // 0x3e35ec: 0xe476000c  swc1        $f22, 0xC($v1)
    ctx->pc = 0x3e35ecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3e35f0:
    // 0x3e35f0: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x3e35f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3e35f4:
    // 0x3e35f4: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x3e35f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3e35f8:
    // 0x3e35f8: 0xc136b18  jal         func_4DAC60
label_3e35fc:
    if (ctx->pc == 0x3E35FCu) {
        ctx->pc = 0x3E35FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E35F8u;
        // 0x3e35fc: 0x7fa20440  sq          $v0, 0x440($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3600u;
        goto label_3e3600;
    }
    ctx->pc = 0x3E35F8u;
    SET_GPR_U32(ctx, 31, 0x3E3600u);
    ctx->pc = 0x3E35FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E35F8u;
    // 0x3e35fc: 0x7fa20440  sq          $v0, 0x440($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3E35F8u, 0x3E3600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3600u;
label_3e3600:
    // 0x3e3600: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x3e3600u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3e3604:
    // 0x3e3604: 0x27a40410  addiu       $a0, $sp, 0x410
    ctx->pc = 0x3e3604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3e3608:
    // 0x3e3608: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3e3608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_3e360c:
    // 0x3e360c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3e360cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3e3610:
    // 0x3e3610: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e3610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e3614:
    // 0x3e3614: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3e3614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e3618:
    // 0x3e3618: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3e3618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3e361c:
    // 0x3e361c: 0xc136b24  jal         func_4DAC90
label_3e3620:
    if (ctx->pc == 0x3E3620u) {
        ctx->pc = 0x3E3620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E361Cu;
        // 0x3e3620: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3624u;
        goto label_3e3624;
    }
    ctx->pc = 0x3E361Cu;
    SET_GPR_U32(ctx, 31, 0x3E3624u);
    ctx->pc = 0x3E3620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E361Cu;
    // 0x3e3620: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3E361Cu, 0x3E3624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3624u;
label_3e3624:
    // 0x3e3624: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x3e3624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3e3628:
    // 0x3e3628: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e3628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e362c:
    // 0x3e362c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e362cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e3630:
    // 0x3e3630: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
label_3e3634:
    if (ctx->pc == 0x3E3634u) {
        ctx->pc = 0x3E3634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3630u;
        // 0x3e3634: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3638u;
        goto label_3e3638;
    }
    ctx->pc = 0x3E3630u;
    {
        const bool branch_taken_0x3e3630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E3634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3630u;
        // 0x3e3634: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3630) {
            ctx->pc = 0x3E3670u;
            goto label_3e3670;
        }
    }
    ctx->pc = 0x3E3638u;
label_3e3638:
    // 0x3e3638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e3638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e363c:
    // 0x3e363c: 0xc0e858c  jal         func_3A1630
label_3e3640:
    if (ctx->pc == 0x3E3640u) {
        ctx->pc = 0x3E3640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E363Cu;
        // 0x3e3640: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3644u;
        goto label_3e3644;
    }
    ctx->pc = 0x3E363Cu;
    SET_GPR_U32(ctx, 31, 0x3E3644u);
    ctx->pc = 0x3E3640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E363Cu;
    // 0x3e3640: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E363Cu, 0x3E3644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3644u;
label_3e3644:
    // 0x3e3644: 0x9623006e  lhu         $v1, 0x6E($s1)
    ctx->pc = 0x3e3644u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 110)));
label_3e3648:
    // 0x3e3648: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x3e3648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3e364c:
    // 0x3e364c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e364cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e3650:
    // 0x3e3650: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x3e3650u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_3e3654:
    // 0x3e3654: 0x2c420078  sltiu       $v0, $v0, 0x78
    ctx->pc = 0x3e3654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)120) ? 1 : 0);
label_3e3658:
    // 0x3e3658: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3e365c:
    if (ctx->pc == 0x3E365Cu) {
        ctx->pc = 0x3E365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3658u;
        // 0x3e365c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3660u;
        goto label_3e3660;
    }
    ctx->pc = 0x3E3658u;
    {
        const bool branch_taken_0x3e3658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3658u;
        // 0x3e365c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3658) {
            ctx->pc = 0x3E3690u;
            goto label_3e3690;
        }
    }
    ctx->pc = 0x3E3660u;
label_3e3660:
    // 0x3e3660: 0xc0e9694  jal         func_3A5A50
label_3e3664:
    if (ctx->pc == 0x3E3664u) {
        ctx->pc = 0x3E3664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3660u;
        // 0x3e3664: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3668u;
        goto label_3e3668;
    }
    ctx->pc = 0x3E3660u;
    SET_GPR_U32(ctx, 31, 0x3E3668u);
    ctx->pc = 0x3E3664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3660u;
    // 0x3e3664: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3E3660u, 0x3E3668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3668u;
label_3e3668:
    // 0x3e3668: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3e366c:
    if (ctx->pc == 0x3E366Cu) {
        ctx->pc = 0x3E366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3668u;
        // 0x3e366c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3670u;
        goto label_3e3670;
    }
    ctx->pc = 0x3E3668u;
    {
        const bool branch_taken_0x3e3668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e3668) {
            ctx->pc = 0x3E366Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3668u;
            // 0x3e366c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3678u;
            goto label_3e3678;
        }
    }
    ctx->pc = 0x3E3670u;
label_3e3670:
    // 0x3e3670: 0x10000007  b           . + 4 + (0x7 << 2)
label_3e3674:
    if (ctx->pc == 0x3E3674u) {
        ctx->pc = 0x3E3674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3670u;
        // 0x3e3674: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3678u;
        goto label_3e3678;
    }
    ctx->pc = 0x3E3670u;
    {
        const bool branch_taken_0x3e3670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3670u;
        // 0x3e3674: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3670) {
            ctx->pc = 0x3E3690u;
            goto label_3e3690;
        }
    }
    ctx->pc = 0x3E3678u;
label_3e3678:
    // 0x3e3678: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x3e3678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3e367c:
    // 0x3e367c: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3e367cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3e3680:
    // 0x3e3680: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3e3680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3e3684:
    // 0x3e3684: 0x60f809  jalr        $v1
label_3e3688:
    if (ctx->pc == 0x3E3688u) {
        ctx->pc = 0x3E3688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3684u;
        // 0x3e3688: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E368Cu;
        goto label_3e368c;
    }
    ctx->pc = 0x3E3684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E368Cu);
        ctx->pc = 0x3E3688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3684u;
        // 0x3e3688: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3684u, 0x3E368Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E368Cu;
label_3e368c:
    // 0x3e368c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e368cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e3690:
    // 0x3e3690: 0x7bb004a0  lq          $s0, 0x4A0($sp)
    ctx->pc = 0x3e3690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3e3694:
    // 0x3e3694: 0x7bb10490  lq          $s1, 0x490($sp)
    ctx->pc = 0x3e3694u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3e3698:
    // 0x3e3698: 0x7bb20480  lq          $s2, 0x480($sp)
    ctx->pc = 0x3e3698u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3e369c:
    // 0x3e369c: 0x7bb30470  lq          $s3, 0x470($sp)
    ctx->pc = 0x3e369cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3e36a0:
    // 0x3e36a0: 0xdfbf0460  ld          $ra, 0x460($sp)
    ctx->pc = 0x3e36a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
label_3e36a4:
    // 0x3e36a4: 0xc7b804d0  lwc1        $f24, 0x4D0($sp)
    ctx->pc = 0x3e36a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3e36a8:
    // 0x3e36a8: 0xc7b704c8  lwc1        $f23, 0x4C8($sp)
    ctx->pc = 0x3e36a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3e36ac:
    // 0x3e36ac: 0xc7b604c0  lwc1        $f22, 0x4C0($sp)
    ctx->pc = 0x3e36acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3e36b0:
    // 0x3e36b0: 0xc7b504b8  lwc1        $f21, 0x4B8($sp)
    ctx->pc = 0x3e36b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3e36b4:
    // 0x3e36b4: 0xc7b404b0  lwc1        $f20, 0x4B0($sp)
    ctx->pc = 0x3e36b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3e36b8:
    // 0x3e36b8: 0x3e00008  jr          $ra
label_3e36bc:
    if (ctx->pc == 0x3E36BCu) {
        ctx->pc = 0x3E36BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E36B8u;
        // 0x3e36bc: 0x27bd04e0  addiu       $sp, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E36C0u;
        goto label_fallthrough_0x3e36b8;
    }
    ctx->pc = 0x3E36B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E36BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E36B8u;
        // 0x3e36bc: 0x27bd04e0  addiu       $sp, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E36B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e36b8:
    ctx->pc = 0x3E36C0u;
}
