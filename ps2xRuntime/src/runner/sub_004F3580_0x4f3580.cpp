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

// Function: sub_004F3580
// Address: 0x4f3580 - 0x4f37e8
void sub_004F3580_0x4f3580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F3580_0x4f3580");
#endif

    switch (ctx->pc) {
        case 0x4f3580u: goto label_4f3580;
        case 0x4f3584u: goto label_4f3584;
        case 0x4f3588u: goto label_4f3588;
        case 0x4f358cu: goto label_4f358c;
        case 0x4f3590u: goto label_4f3590;
        case 0x4f3594u: goto label_4f3594;
        case 0x4f3598u: goto label_4f3598;
        case 0x4f359cu: goto label_4f359c;
        case 0x4f35a0u: goto label_4f35a0;
        case 0x4f35a4u: goto label_4f35a4;
        case 0x4f35a8u: goto label_4f35a8;
        case 0x4f35acu: goto label_4f35ac;
        case 0x4f35b0u: goto label_4f35b0;
        case 0x4f35b4u: goto label_4f35b4;
        case 0x4f35b8u: goto label_4f35b8;
        case 0x4f35bcu: goto label_4f35bc;
        case 0x4f35c0u: goto label_4f35c0;
        case 0x4f35c4u: goto label_4f35c4;
        case 0x4f35c8u: goto label_4f35c8;
        case 0x4f35ccu: goto label_4f35cc;
        case 0x4f35d0u: goto label_4f35d0;
        case 0x4f35d4u: goto label_4f35d4;
        case 0x4f35d8u: goto label_4f35d8;
        case 0x4f35dcu: goto label_4f35dc;
        case 0x4f35e0u: goto label_4f35e0;
        case 0x4f35e4u: goto label_4f35e4;
        case 0x4f35e8u: goto label_4f35e8;
        case 0x4f35ecu: goto label_4f35ec;
        case 0x4f35f0u: goto label_4f35f0;
        case 0x4f35f4u: goto label_4f35f4;
        case 0x4f35f8u: goto label_4f35f8;
        case 0x4f35fcu: goto label_4f35fc;
        case 0x4f3600u: goto label_4f3600;
        case 0x4f3604u: goto label_4f3604;
        case 0x4f3608u: goto label_4f3608;
        case 0x4f360cu: goto label_4f360c;
        case 0x4f3610u: goto label_4f3610;
        case 0x4f3614u: goto label_4f3614;
        case 0x4f3618u: goto label_4f3618;
        case 0x4f361cu: goto label_4f361c;
        case 0x4f3620u: goto label_4f3620;
        case 0x4f3624u: goto label_4f3624;
        case 0x4f3628u: goto label_4f3628;
        case 0x4f362cu: goto label_4f362c;
        case 0x4f3630u: goto label_4f3630;
        case 0x4f3634u: goto label_4f3634;
        case 0x4f3638u: goto label_4f3638;
        case 0x4f363cu: goto label_4f363c;
        case 0x4f3640u: goto label_4f3640;
        case 0x4f3644u: goto label_4f3644;
        case 0x4f3648u: goto label_4f3648;
        case 0x4f364cu: goto label_4f364c;
        case 0x4f3650u: goto label_4f3650;
        case 0x4f3654u: goto label_4f3654;
        case 0x4f3658u: goto label_4f3658;
        case 0x4f365cu: goto label_4f365c;
        case 0x4f3660u: goto label_4f3660;
        case 0x4f3664u: goto label_4f3664;
        case 0x4f3668u: goto label_4f3668;
        case 0x4f366cu: goto label_4f366c;
        case 0x4f3670u: goto label_4f3670;
        case 0x4f3674u: goto label_4f3674;
        case 0x4f3678u: goto label_4f3678;
        case 0x4f367cu: goto label_4f367c;
        case 0x4f3680u: goto label_4f3680;
        case 0x4f3684u: goto label_4f3684;
        case 0x4f3688u: goto label_4f3688;
        case 0x4f368cu: goto label_4f368c;
        case 0x4f3690u: goto label_4f3690;
        case 0x4f3694u: goto label_4f3694;
        case 0x4f3698u: goto label_4f3698;
        case 0x4f369cu: goto label_4f369c;
        case 0x4f36a0u: goto label_4f36a0;
        case 0x4f36a4u: goto label_4f36a4;
        case 0x4f36a8u: goto label_4f36a8;
        case 0x4f36acu: goto label_4f36ac;
        case 0x4f36b0u: goto label_4f36b0;
        case 0x4f36b4u: goto label_4f36b4;
        case 0x4f36b8u: goto label_4f36b8;
        case 0x4f36bcu: goto label_4f36bc;
        case 0x4f36c0u: goto label_4f36c0;
        case 0x4f36c4u: goto label_4f36c4;
        case 0x4f36c8u: goto label_4f36c8;
        case 0x4f36ccu: goto label_4f36cc;
        case 0x4f36d0u: goto label_4f36d0;
        case 0x4f36d4u: goto label_4f36d4;
        case 0x4f36d8u: goto label_4f36d8;
        case 0x4f36dcu: goto label_4f36dc;
        case 0x4f36e0u: goto label_4f36e0;
        case 0x4f36e4u: goto label_4f36e4;
        case 0x4f36e8u: goto label_4f36e8;
        case 0x4f36ecu: goto label_4f36ec;
        case 0x4f36f0u: goto label_4f36f0;
        case 0x4f36f4u: goto label_4f36f4;
        case 0x4f36f8u: goto label_4f36f8;
        case 0x4f36fcu: goto label_4f36fc;
        case 0x4f3700u: goto label_4f3700;
        case 0x4f3704u: goto label_4f3704;
        case 0x4f3708u: goto label_4f3708;
        case 0x4f370cu: goto label_4f370c;
        case 0x4f3710u: goto label_4f3710;
        case 0x4f3714u: goto label_4f3714;
        case 0x4f3718u: goto label_4f3718;
        case 0x4f371cu: goto label_4f371c;
        case 0x4f3720u: goto label_4f3720;
        case 0x4f3724u: goto label_4f3724;
        case 0x4f3728u: goto label_4f3728;
        case 0x4f372cu: goto label_4f372c;
        case 0x4f3730u: goto label_4f3730;
        case 0x4f3734u: goto label_4f3734;
        case 0x4f3738u: goto label_4f3738;
        case 0x4f373cu: goto label_4f373c;
        case 0x4f3740u: goto label_4f3740;
        case 0x4f3744u: goto label_4f3744;
        case 0x4f3748u: goto label_4f3748;
        case 0x4f374cu: goto label_4f374c;
        case 0x4f3750u: goto label_4f3750;
        case 0x4f3754u: goto label_4f3754;
        case 0x4f3758u: goto label_4f3758;
        case 0x4f375cu: goto label_4f375c;
        case 0x4f3760u: goto label_4f3760;
        case 0x4f3764u: goto label_4f3764;
        case 0x4f3768u: goto label_4f3768;
        case 0x4f376cu: goto label_4f376c;
        case 0x4f3770u: goto label_4f3770;
        case 0x4f3774u: goto label_4f3774;
        case 0x4f3778u: goto label_4f3778;
        case 0x4f377cu: goto label_4f377c;
        case 0x4f3780u: goto label_4f3780;
        case 0x4f3784u: goto label_4f3784;
        case 0x4f3788u: goto label_4f3788;
        case 0x4f378cu: goto label_4f378c;
        case 0x4f3790u: goto label_4f3790;
        case 0x4f3794u: goto label_4f3794;
        case 0x4f3798u: goto label_4f3798;
        case 0x4f379cu: goto label_4f379c;
        case 0x4f37a0u: goto label_4f37a0;
        case 0x4f37a4u: goto label_4f37a4;
        case 0x4f37a8u: goto label_4f37a8;
        case 0x4f37acu: goto label_4f37ac;
        case 0x4f37b0u: goto label_4f37b0;
        case 0x4f37b4u: goto label_4f37b4;
        case 0x4f37b8u: goto label_4f37b8;
        case 0x4f37bcu: goto label_4f37bc;
        case 0x4f37c0u: goto label_4f37c0;
        case 0x4f37c4u: goto label_4f37c4;
        case 0x4f37c8u: goto label_4f37c8;
        case 0x4f37ccu: goto label_4f37cc;
        case 0x4f37d0u: goto label_4f37d0;
        case 0x4f37d4u: goto label_4f37d4;
        case 0x4f37d8u: goto label_4f37d8;
        case 0x4f37dcu: goto label_4f37dc;
        case 0x4f37e0u: goto label_4f37e0;
        case 0x4f37e4u: goto label_4f37e4;
        default: break;
    }

    ctx->pc = 0x4f3580u;

label_4f3580:
    // 0x4f3580: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4f3580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_4f3584:
    // 0x4f3584: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4f3584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4f3588:
    // 0x4f3588: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x4f3588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_4f358c:
    // 0x4f358c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4f358cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f3590:
    // 0x4f3590: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x4f3590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_4f3594:
    // 0x4f3594: 0x26a30004  addiu       $v1, $s5, 0x4
    ctx->pc = 0x4f3594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_4f3598:
    // 0x4f3598: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x4f3598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_4f359c:
    // 0x4f359c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x4f359cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_4f35a0:
    // 0x4f35a0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x4f35a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_4f35a4:
    // 0x4f35a4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x4f35a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_4f35a8:
    // 0x4f35a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4f35a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4f35ac:
    // 0x4f35ac: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4f35acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4f35b0:
    // 0x4f35b0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4f35b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4f35b4:
    // 0x4f35b4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4f35b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4f35b8:
    // 0x4f35b8: 0x2b083  sra         $s6, $v0, 2
    ctx->pc = 0x4f35b8u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), 2));
label_4f35bc:
    // 0x4f35bc: 0x2c5182b  sltu        $v1, $s6, $a1
    ctx->pc = 0x4f35bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_4f35c0:
    // 0x4f35c0: 0x1060007e  beqz        $v1, . + 4 + (0x7E << 2)
label_4f35c4:
    if (ctx->pc == 0x4F35C4u) {
        ctx->pc = 0x4F35C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F35C0u;
        // 0x4f35c4: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F35C8u;
        goto label_4f35c8;
    }
    ctx->pc = 0x4F35C0u;
    {
        const bool branch_taken_0x4f35c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F35C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F35C0u;
        // 0x4f35c4: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f35c0) {
            ctx->pc = 0x4F37BCu;
            goto label_4f37bc;
        }
    }
    ctx->pc = 0x4F35C8u;
label_4f35c8:
    // 0x4f35c8: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x4f35c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
label_4f35cc:
    // 0x4f35cc: 0x24510cf0  addiu       $s1, $v0, 0xCF0
    ctx->pc = 0x4f35ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
label_4f35d0:
    // 0x4f35d0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x4f35d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_4f35d4:
    // 0x4f35d4: 0x263000e0  addiu       $s0, $s1, 0xE0
    ctx->pc = 0x4f35d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_4f35d8:
    // 0x4f35d8: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x4f35d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
label_4f35dc:
    // 0x4f35dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f35dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f35e0:
    // 0x4f35e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f35e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f35e4:
    // 0x4f35e4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x4f35e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4f35e8:
    // 0x4f35e8: 0xc136850  jal         func_4DA140
label_4f35ec:
    if (ctx->pc == 0x4F35ECu) {
        ctx->pc = 0x4F35ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F35E8u;
        // 0x4f35ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F35F0u;
        goto label_4f35f0;
    }
    ctx->pc = 0x4F35E8u;
    SET_GPR_U32(ctx, 31, 0x4F35F0u);
    ctx->pc = 0x4F35ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F35E8u;
    // 0x4f35ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DA140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DA140u, 0x4F35E8u, 0x4F35F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F35F0u;
label_4f35f0:
    // 0x4f35f0: 0x54500002  bnel        $v0, $s0, . + 4 + (0x2 << 2)
label_4f35f4:
    if (ctx->pc == 0x4F35F4u) {
        ctx->pc = 0x4F35F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F35F0u;
        // 0x4f35f4: 0xdc420000  ld          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F35F8u;
        goto label_4f35f8;
    }
    ctx->pc = 0x4F35F0u;
    {
        const bool branch_taken_0x4f35f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x4f35f0) {
            ctx->pc = 0x4F35F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F35F0u;
            // 0x4f35f4: 0xdc420000  ld          $v0, 0x0($v0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F35FCu;
            goto label_4f35fc;
        }
    }
    ctx->pc = 0x4F35F8u;
label_4f35f8:
    // 0x4f35f8: 0xde2200d8  ld          $v0, 0xD8($s1)
    ctx->pc = 0x4f35f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 216)));
label_4f35fc:
    // 0x4f35fc: 0x2a03c  dsll32      $s4, $v0, 0
    ctx->pc = 0x4f35fcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 0));
label_4f3600:
    // 0x4f3600: 0x14a03f  dsra32      $s4, $s4, 0
    ctx->pc = 0x4f3600u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 0));
label_4f3604:
    // 0x4f3604: 0x2d4102b  sltu        $v0, $s6, $s4
    ctx->pc = 0x4f3604u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_4f3608:
    // 0x4f3608: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
label_4f360c:
    if (ctx->pc == 0x4F360Cu) {
        ctx->pc = 0x4F360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3608u;
        // 0x4f360c: 0x3c13006f  lui         $s3, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3610u;
        goto label_4f3610;
    }
    ctx->pc = 0x4F3608u;
    {
        const bool branch_taken_0x4f3608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3608u;
        // 0x4f360c: 0x3c13006f  lui         $s3, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3608) {
            ctx->pc = 0x4F37BCu;
            goto label_4f37bc;
        }
    }
    ctx->pc = 0x4F3610u;
label_4f3610:
    // 0x4f3610: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x4f3610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_4f3614:
    // 0x4f3614: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x4f3614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_4f3618:
    // 0x4f3618: 0x148080  sll         $s0, $s4, 2
    ctx->pc = 0x4f3618u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_4f361c:
    // 0x4f361c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x4f361cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_4f3620:
    // 0x4f3620: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x4f3620u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
label_4f3624:
    // 0x4f3624: 0x8e69b9c0  lw          $t1, -0x4640($s3)
    ctx->pc = 0x4f3624u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949312)));
label_4f3628:
    // 0x4f3628: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x4f3628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_4f362c:
    // 0x4f362c: 0x3c0a0058  lui         $t2, 0x58
    ctx->pc = 0x4f362cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)88 << 16));
label_4f3630:
    // 0x4f3630: 0x27b10028  addiu       $s1, $sp, 0x28
    ctx->pc = 0x4f3630u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_4f3634:
    // 0x4f3634: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4f3634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4f3638:
    // 0x4f3638: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4f3638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f363c:
    // 0x4f363c: 0x26480cb0  addiu       $t0, $s2, 0xCB0
    ctx->pc = 0x4f363cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 3248));
label_4f3640:
    // 0x4f3640: 0x254a0ce0  addiu       $t2, $t2, 0xCE0
    ctx->pc = 0x4f3640u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3296));
label_4f3644:
    // 0x4f3644: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4f3644u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4f3648:
    // 0x4f3648: 0x24a50cd8  addiu       $a1, $a1, 0xCD8
    ctx->pc = 0x4f3648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3288));
label_4f364c:
    // 0x4f364c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4f364cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4f3650:
    // 0x4f3650: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4f3650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4f3654:
    // 0x4f3654: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x4f3654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_4f3658:
    // 0x4f3658: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x4f3658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_4f365c:
    // 0x4f365c: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4f365cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4f3660:
    // 0x4f3660: 0x40f809  jalr        $v0
label_4f3664:
    if (ctx->pc == 0x4F3664u) {
        ctx->pc = 0x4F3664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3660u;
        // 0x4f3664: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3668u;
        goto label_4f3668;
    }
    ctx->pc = 0x4F3660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F3668u);
        ctx->pc = 0x4F3664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3660u;
        // 0x4f3664: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3660u, 0x4F3668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F3668u;
label_4f3668:
    // 0x4f3668: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x4f3668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4f366c:
    // 0x4f366c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4f366cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f3670:
    // 0x4f3670: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4f3670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f3674:
    // 0x4f3674: 0xafb0000c  sw          $s0, 0xC($sp)
    ctx->pc = 0x4f3674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
label_4f3678:
    // 0x4f3678: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4f3678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4f367c:
    // 0x4f367c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4f367cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_4f3680:
    // 0x4f3680: 0xc13ccbc  jal         func_4F32F0
label_4f3684:
    if (ctx->pc == 0x4F3684u) {
        ctx->pc = 0x4F3684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3680u;
        // 0x4f3684: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3688u;
        goto label_4f3688;
    }
    ctx->pc = 0x4F3680u;
    SET_GPR_U32(ctx, 31, 0x4F3688u);
    ctx->pc = 0x4F3684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3680u;
    // 0x4f3684: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F32F0u, 0x4F3680u, 0x4F3688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3688u;
label_4f3688:
    // 0x4f3688: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4f3688u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f368c:
    // 0x4f368c: 0x12c00035  beqz        $s6, . + 4 + (0x35 << 2)
label_4f3690:
    if (ctx->pc == 0x4F3690u) {
        ctx->pc = 0x4F3690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F368Cu;
        // 0x4f3690: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3694u;
        goto label_4f3694;
    }
    ctx->pc = 0x4F368Cu;
    {
        const bool branch_taken_0x4f368c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F368Cu;
        // 0x4f3690: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f368c) {
            ctx->pc = 0x4F3764u;
            goto label_4f3764;
        }
    }
    ctx->pc = 0x4F3694u;
label_4f3694:
    // 0x4f3694: 0x26ab0004  addiu       $t3, $s5, 0x4
    ctx->pc = 0x4f3694u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_4f3698:
    // 0x4f3698: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x4f3698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_4f369c:
    // 0x4f369c: 0x0  nop
    ctx->pc = 0x4f369cu;
    // NOP
label_4f36a0:
    // 0x4f36a0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x4f36a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4f36a4:
    // 0x4f36a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4f36a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4f36a8:
    // 0x4f36a8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x4f36a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f36ac:
    // 0x4f36ac: 0x10e00029  beqz        $a3, . + 4 + (0x29 << 2)
label_4f36b0:
    if (ctx->pc == 0x4F36B0u) {
        ctx->pc = 0x4F36B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F36ACu;
        // 0x4f36b0: 0x246c0001  addiu       $t4, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F36B4u;
        goto label_4f36b4;
    }
    ctx->pc = 0x4F36ACu;
    {
        const bool branch_taken_0x4f36ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F36B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F36ACu;
        // 0x4f36b0: 0x246c0001  addiu       $t4, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f36ac) {
            ctx->pc = 0x4F3754u;
            goto label_4f3754;
        }
    }
    ctx->pc = 0x4F36B4u;
label_4f36b4:
    // 0x4f36b4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x4f36b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f36b8:
    // 0x4f36b8: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x4f36b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_4f36bc:
    // 0x4f36bc: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x4f36bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_4f36c0:
    // 0x4f36c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4f36c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f36c4:
    // 0x4f36c4: 0x8cea0000  lw          $t2, 0x0($a3)
    ctx->pc = 0x4f36c4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4f36c8:
    // 0x4f36c8: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x4f36c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4f36cc:
    // 0x4f36cc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_4f36d0:
    if (ctx->pc == 0x4F36D0u) {
        ctx->pc = 0x4F36D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F36CCu;
        // 0x4f36d0: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F36D4u;
        goto label_4f36d4;
    }
    ctx->pc = 0x4F36CCu;
    {
        const bool branch_taken_0x4f36cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F36D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F36CCu;
        // 0x4f36d0: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f36cc) {
            ctx->pc = 0x4F36FCu;
            goto label_4f36fc;
        }
    }
    ctx->pc = 0x4F36D4u;
label_4f36d4:
    // 0x4f36d4: 0x0  nop
    ctx->pc = 0x4f36d4u;
    // NOP
label_4f36d8:
    // 0x4f36d8: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x4f36d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
label_4f36dc:
    // 0x4f36dc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4f36dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4f36e0:
    // 0x4f36e0: 0x618b8  dsll        $v1, $a2, 2
    ctx->pc = 0x4f36e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << 2);
label_4f36e4:
    // 0x4f36e4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x4f36e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_4f36e8:
    // 0x4f36e8: 0x66182d  daddu       $v1, $v1, $a2
    ctx->pc = 0x4f36e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 6));
label_4f36ec:
    // 0x4f36ec: 0x80a40000  lb          $a0, 0x0($a1)
    ctx->pc = 0x4f36ecu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4f36f0:
    // 0x4f36f0: 0x62302d  daddu       $a2, $v1, $v0
    ctx->pc = 0x4f36f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_4f36f4:
    // 0x4f36f4: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
label_4f36f8:
    if (ctx->pc == 0x4F36F8u) {
        ctx->pc = 0x4F36F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F36F4u;
        // 0x4f36f8: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F36FCu;
        goto label_4f36fc;
    }
    ctx->pc = 0x4F36F4u;
    {
        const bool branch_taken_0x4f36f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F36F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F36F4u;
        // 0x4f36f8: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f36f4) {
            ctx->pc = 0x4F36D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f36d8;
        }
    }
    ctx->pc = 0x4F36FCu;
label_4f36fc:
    // 0x4f36fc: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x4f36fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
label_4f3700:
    // 0x4f3700: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4f3700u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_4f3704:
    // 0x4f3704: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
label_4f3708:
    if (ctx->pc == 0x4F3708u) {
        ctx->pc = 0x4F3708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3704u;
        // 0x4f3708: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F370Cu;
        goto label_4f370c;
    }
    ctx->pc = 0x4F3704u;
    {
        const bool branch_taken_0x4f3704 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f3704) {
            ctx->pc = 0x4F3708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F3704u;
            // 0x4f3708: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F370Cu;
            goto label_4f370c;
        }
    }
    ctx->pc = 0x4F370Cu;
label_4f370c:
    // 0x4f370c: 0x74001b  divu        $zero, $v1, $s4
    ctx->pc = 0x4f370cu;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_4f3710:
    // 0x4f3710: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4f3710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4f3714:
    // 0x4f3714: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x4f3714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_4f3718:
    // 0x4f3718: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x4f3718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
label_4f371c:
    // 0x4f371c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4f371cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4f3720:
    // 0x4f3720: 0x2810  mfhi        $a1
    ctx->pc = 0x4f3720u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_4f3724:
    // 0x4f3724: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4f3724u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4f3728:
    // 0x4f3728: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4f3728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4f372c:
    // 0x4f372c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4f372cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4f3730:
    // 0x4f3730: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4f3730u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_4f3734:
    // 0x4f3734: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x4f3734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4f3738:
    // 0x4f3738: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4f3738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4f373c:
    // 0x4f373c: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x4f373cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
label_4f3740:
    // 0x4f3740: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4f3740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4f3744:
    // 0x4f3744: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x4f3744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_4f3748:
    // 0x4f3748: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x4f3748u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4f374c:
    // 0x4f374c: 0x54e0ffdc  bnel        $a3, $zero, . + 4 + (-0x24 << 2)
label_4f3750:
    if (ctx->pc == 0x4F3750u) {
        ctx->pc = 0x4F3750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F374Cu;
        // 0x4f3750: 0x8ce50004  lw          $a1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3754u;
        goto label_4f3754;
    }
    ctx->pc = 0x4F374Cu;
    {
        const bool branch_taken_0x4f374c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f374c) {
            ctx->pc = 0x4F3750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F374Cu;
            // 0x4f3750: 0x8ce50004  lw          $a1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F36C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f36c0;
        }
    }
    ctx->pc = 0x4F3754u;
label_4f3754:
    // 0x4f3754: 0x180182d  daddu       $v1, $t4, $zero
    ctx->pc = 0x4f3754u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_4f3758:
    // 0x4f3758: 0x76102b  sltu        $v0, $v1, $s6
    ctx->pc = 0x4f3758u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_4f375c:
    // 0x4f375c: 0x5440ffd0  bnel        $v0, $zero, . + 4 + (-0x30 << 2)
label_4f3760:
    if (ctx->pc == 0x4F3760u) {
        ctx->pc = 0x4F3760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F375Cu;
        // 0x4f3760: 0x8d620004  lw          $v0, 0x4($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3764u;
        goto label_4f3764;
    }
    ctx->pc = 0x4F375Cu;
    {
        const bool branch_taken_0x4f375c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f375c) {
            ctx->pc = 0x4F3760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F375Cu;
            // 0x4f3760: 0x8d620004  lw          $v0, 0x4($t3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F36A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f36a0;
        }
    }
    ctx->pc = 0x4F3764u;
label_4f3764:
    // 0x4f3764: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4f3764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4f3768:
    // 0x4f3768: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x4f3768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_4f376c:
    // 0x4f376c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x4f376cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_4f3770:
    // 0x4f3770: 0x8ea70008  lw          $a3, 0x8($s5)
    ctx->pc = 0x4f3770u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_4f3774:
    // 0x4f3774: 0x8ea6000c  lw          $a2, 0xC($s5)
    ctx->pc = 0x4f3774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_4f3778:
    // 0x4f3778: 0x8ea50010  lw          $a1, 0x10($s5)
    ctx->pc = 0x4f3778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_4f377c:
    // 0x4f377c: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x4f377cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
label_4f3780:
    // 0x4f3780: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x4f3780u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
label_4f3784:
    // 0x4f3784: 0xaea4000c  sw          $a0, 0xC($s5)
    ctx->pc = 0x4f3784u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 4));
label_4f3788:
    // 0x4f3788: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x4f3788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
label_4f378c:
    // 0x4f378c: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x4f378cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
label_4f3790:
    // 0x4f3790: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
label_4f3794:
    if (ctx->pc == 0x4F3794u) {
        ctx->pc = 0x4F3794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3790u;
        // 0x4f3794: 0xafa70004  sw          $a3, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3798u;
        goto label_4f3798;
    }
    ctx->pc = 0x4F3790u;
    {
        const bool branch_taken_0x4f3790 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3790u;
        // 0x4f3794: 0xafa70004  sw          $a3, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3790) {
            ctx->pc = 0x4F37BCu;
            goto label_4f37bc;
        }
    }
    ctx->pc = 0x4F3798u;
label_4f3798:
    // 0x4f3798: 0x8e68b9c0  lw          $t0, -0x4640($s3)
    ctx->pc = 0x4f3798u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949312)));
label_4f379c:
    // 0x4f379c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x4f379cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4f37a0:
    // 0x4f37a0: 0x26460cb0  addiu       $a2, $s2, 0xCB0
    ctx->pc = 0x4f37a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 3248));
label_4f37a4:
    // 0x4f37a4: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4f37a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4f37a8:
    // 0x4f37a8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f37a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f37ac:
    // 0x4f37ac: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f37acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f37b0:
    // 0x4f37b0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f37b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f37b4:
    // 0x4f37b4: 0x60f809  jalr        $v1
label_4f37b8:
    if (ctx->pc == 0x4F37B8u) {
        ctx->pc = 0x4F37B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F37B4u;
        // 0x4f37b8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F37BCu;
        goto label_4f37bc;
    }
    ctx->pc = 0x4F37B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F37BCu);
        ctx->pc = 0x4F37B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F37B4u;
        // 0x4f37b8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F37B4u, 0x4F37BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F37BCu;
label_4f37bc:
    // 0x4f37bc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x4f37bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4f37c0:
    // 0x4f37c0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x4f37c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4f37c4:
    // 0x4f37c4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x4f37c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4f37c8:
    // 0x4f37c8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x4f37c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4f37cc:
    // 0x4f37cc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x4f37ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4f37d0:
    // 0x4f37d0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4f37d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4f37d4:
    // 0x4f37d4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x4f37d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f37d8:
    // 0x4f37d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4f37d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4f37dc:
    // 0x4f37dc: 0x3e00008  jr          $ra
label_4f37e0:
    if (ctx->pc == 0x4F37E0u) {
        ctx->pc = 0x4F37E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F37DCu;
        // 0x4f37e0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F37E4u;
        goto label_4f37e4;
    }
    ctx->pc = 0x4F37DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F37E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F37DCu;
        // 0x4f37e0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F37DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F37E4u;
label_4f37e4:
    // 0x4f37e4: 0x0  nop
    ctx->pc = 0x4f37e4u;
    // NOP
    ctx->pc = 0x4f37e8u;
}
