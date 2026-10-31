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

// Function: sub_003A9630
// Address: 0x3a9630 - 0x3a9910
void sub_003A9630_0x3a9630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9630_0x3a9630");
#endif

    switch (ctx->pc) {
        case 0x3a9630u: goto label_3a9630;
        case 0x3a9634u: goto label_3a9634;
        case 0x3a9638u: goto label_3a9638;
        case 0x3a963cu: goto label_3a963c;
        case 0x3a9640u: goto label_3a9640;
        case 0x3a9644u: goto label_3a9644;
        case 0x3a9648u: goto label_3a9648;
        case 0x3a964cu: goto label_3a964c;
        case 0x3a9650u: goto label_3a9650;
        case 0x3a9654u: goto label_3a9654;
        case 0x3a9658u: goto label_3a9658;
        case 0x3a965cu: goto label_3a965c;
        case 0x3a9660u: goto label_3a9660;
        case 0x3a9664u: goto label_3a9664;
        case 0x3a9668u: goto label_3a9668;
        case 0x3a966cu: goto label_3a966c;
        case 0x3a9670u: goto label_3a9670;
        case 0x3a9674u: goto label_3a9674;
        case 0x3a9678u: goto label_3a9678;
        case 0x3a967cu: goto label_3a967c;
        case 0x3a9680u: goto label_3a9680;
        case 0x3a9684u: goto label_3a9684;
        case 0x3a9688u: goto label_3a9688;
        case 0x3a968cu: goto label_3a968c;
        case 0x3a9690u: goto label_3a9690;
        case 0x3a9694u: goto label_3a9694;
        case 0x3a9698u: goto label_3a9698;
        case 0x3a969cu: goto label_3a969c;
        case 0x3a96a0u: goto label_3a96a0;
        case 0x3a96a4u: goto label_3a96a4;
        case 0x3a96a8u: goto label_3a96a8;
        case 0x3a96acu: goto label_3a96ac;
        case 0x3a96b0u: goto label_3a96b0;
        case 0x3a96b4u: goto label_3a96b4;
        case 0x3a96b8u: goto label_3a96b8;
        case 0x3a96bcu: goto label_3a96bc;
        case 0x3a96c0u: goto label_3a96c0;
        case 0x3a96c4u: goto label_3a96c4;
        case 0x3a96c8u: goto label_3a96c8;
        case 0x3a96ccu: goto label_3a96cc;
        case 0x3a96d0u: goto label_3a96d0;
        case 0x3a96d4u: goto label_3a96d4;
        case 0x3a96d8u: goto label_3a96d8;
        case 0x3a96dcu: goto label_3a96dc;
        case 0x3a96e0u: goto label_3a96e0;
        case 0x3a96e4u: goto label_3a96e4;
        case 0x3a96e8u: goto label_3a96e8;
        case 0x3a96ecu: goto label_3a96ec;
        case 0x3a96f0u: goto label_3a96f0;
        case 0x3a96f4u: goto label_3a96f4;
        case 0x3a96f8u: goto label_3a96f8;
        case 0x3a96fcu: goto label_3a96fc;
        case 0x3a9700u: goto label_3a9700;
        case 0x3a9704u: goto label_3a9704;
        case 0x3a9708u: goto label_3a9708;
        case 0x3a970cu: goto label_3a970c;
        case 0x3a9710u: goto label_3a9710;
        case 0x3a9714u: goto label_3a9714;
        case 0x3a9718u: goto label_3a9718;
        case 0x3a971cu: goto label_3a971c;
        case 0x3a9720u: goto label_3a9720;
        case 0x3a9724u: goto label_3a9724;
        case 0x3a9728u: goto label_3a9728;
        case 0x3a972cu: goto label_3a972c;
        case 0x3a9730u: goto label_3a9730;
        case 0x3a9734u: goto label_3a9734;
        case 0x3a9738u: goto label_3a9738;
        case 0x3a973cu: goto label_3a973c;
        case 0x3a9740u: goto label_3a9740;
        case 0x3a9744u: goto label_3a9744;
        case 0x3a9748u: goto label_3a9748;
        case 0x3a974cu: goto label_3a974c;
        case 0x3a9750u: goto label_3a9750;
        case 0x3a9754u: goto label_3a9754;
        case 0x3a9758u: goto label_3a9758;
        case 0x3a975cu: goto label_3a975c;
        case 0x3a9760u: goto label_3a9760;
        case 0x3a9764u: goto label_3a9764;
        case 0x3a9768u: goto label_3a9768;
        case 0x3a976cu: goto label_3a976c;
        case 0x3a9770u: goto label_3a9770;
        case 0x3a9774u: goto label_3a9774;
        case 0x3a9778u: goto label_3a9778;
        case 0x3a977cu: goto label_3a977c;
        case 0x3a9780u: goto label_3a9780;
        case 0x3a9784u: goto label_3a9784;
        case 0x3a9788u: goto label_3a9788;
        case 0x3a978cu: goto label_3a978c;
        case 0x3a9790u: goto label_3a9790;
        case 0x3a9794u: goto label_3a9794;
        case 0x3a9798u: goto label_3a9798;
        case 0x3a979cu: goto label_3a979c;
        case 0x3a97a0u: goto label_3a97a0;
        case 0x3a97a4u: goto label_3a97a4;
        case 0x3a97a8u: goto label_3a97a8;
        case 0x3a97acu: goto label_3a97ac;
        case 0x3a97b0u: goto label_3a97b0;
        case 0x3a97b4u: goto label_3a97b4;
        case 0x3a97b8u: goto label_3a97b8;
        case 0x3a97bcu: goto label_3a97bc;
        case 0x3a97c0u: goto label_3a97c0;
        case 0x3a97c4u: goto label_3a97c4;
        case 0x3a97c8u: goto label_3a97c8;
        case 0x3a97ccu: goto label_3a97cc;
        case 0x3a97d0u: goto label_3a97d0;
        case 0x3a97d4u: goto label_3a97d4;
        case 0x3a97d8u: goto label_3a97d8;
        case 0x3a97dcu: goto label_3a97dc;
        case 0x3a97e0u: goto label_3a97e0;
        case 0x3a97e4u: goto label_3a97e4;
        case 0x3a97e8u: goto label_3a97e8;
        case 0x3a97ecu: goto label_3a97ec;
        case 0x3a97f0u: goto label_3a97f0;
        case 0x3a97f4u: goto label_3a97f4;
        case 0x3a97f8u: goto label_3a97f8;
        case 0x3a97fcu: goto label_3a97fc;
        case 0x3a9800u: goto label_3a9800;
        case 0x3a9804u: goto label_3a9804;
        case 0x3a9808u: goto label_3a9808;
        case 0x3a980cu: goto label_3a980c;
        case 0x3a9810u: goto label_3a9810;
        case 0x3a9814u: goto label_3a9814;
        case 0x3a9818u: goto label_3a9818;
        case 0x3a981cu: goto label_3a981c;
        case 0x3a9820u: goto label_3a9820;
        case 0x3a9824u: goto label_3a9824;
        case 0x3a9828u: goto label_3a9828;
        case 0x3a982cu: goto label_3a982c;
        case 0x3a9830u: goto label_3a9830;
        case 0x3a9834u: goto label_3a9834;
        case 0x3a9838u: goto label_3a9838;
        case 0x3a983cu: goto label_3a983c;
        case 0x3a9840u: goto label_3a9840;
        case 0x3a9844u: goto label_3a9844;
        case 0x3a9848u: goto label_3a9848;
        case 0x3a984cu: goto label_3a984c;
        case 0x3a9850u: goto label_3a9850;
        case 0x3a9854u: goto label_3a9854;
        case 0x3a9858u: goto label_3a9858;
        case 0x3a985cu: goto label_3a985c;
        case 0x3a9860u: goto label_3a9860;
        case 0x3a9864u: goto label_3a9864;
        case 0x3a9868u: goto label_3a9868;
        case 0x3a986cu: goto label_3a986c;
        case 0x3a9870u: goto label_3a9870;
        case 0x3a9874u: goto label_3a9874;
        case 0x3a9878u: goto label_3a9878;
        case 0x3a987cu: goto label_3a987c;
        case 0x3a9880u: goto label_3a9880;
        case 0x3a9884u: goto label_3a9884;
        case 0x3a9888u: goto label_3a9888;
        case 0x3a988cu: goto label_3a988c;
        case 0x3a9890u: goto label_3a9890;
        case 0x3a9894u: goto label_3a9894;
        case 0x3a9898u: goto label_3a9898;
        case 0x3a989cu: goto label_3a989c;
        case 0x3a98a0u: goto label_3a98a0;
        case 0x3a98a4u: goto label_3a98a4;
        case 0x3a98a8u: goto label_3a98a8;
        case 0x3a98acu: goto label_3a98ac;
        case 0x3a98b0u: goto label_3a98b0;
        case 0x3a98b4u: goto label_3a98b4;
        case 0x3a98b8u: goto label_3a98b8;
        case 0x3a98bcu: goto label_3a98bc;
        case 0x3a98c0u: goto label_3a98c0;
        case 0x3a98c4u: goto label_3a98c4;
        case 0x3a98c8u: goto label_3a98c8;
        case 0x3a98ccu: goto label_3a98cc;
        case 0x3a98d0u: goto label_3a98d0;
        case 0x3a98d4u: goto label_3a98d4;
        case 0x3a98d8u: goto label_3a98d8;
        case 0x3a98dcu: goto label_3a98dc;
        case 0x3a98e0u: goto label_3a98e0;
        case 0x3a98e4u: goto label_3a98e4;
        case 0x3a98e8u: goto label_3a98e8;
        case 0x3a98ecu: goto label_3a98ec;
        case 0x3a98f0u: goto label_3a98f0;
        case 0x3a98f4u: goto label_3a98f4;
        case 0x3a98f8u: goto label_3a98f8;
        case 0x3a98fcu: goto label_3a98fc;
        case 0x3a9900u: goto label_3a9900;
        case 0x3a9904u: goto label_3a9904;
        case 0x3a9908u: goto label_3a9908;
        case 0x3a990cu: goto label_3a990c;
        default: break;
    }

    ctx->pc = 0x3a9630u;

label_3a9630:
    // 0x3a9630: 0x27bdf680  addiu       $sp, $sp, -0x980
    ctx->pc = 0x3a9630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964864));
label_3a9634:
    // 0x3a9634: 0x7fb00950  sq          $s0, 0x950($sp)
    ctx->pc = 0x3a9634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2384), GPR_VEC(ctx, 16));
label_3a9638:
    // 0x3a9638: 0x7fb10940  sq          $s1, 0x940($sp)
    ctx->pc = 0x3a9638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2368), GPR_VEC(ctx, 17));
label_3a963c:
    // 0x3a963c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a963cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a9640:
    // 0x3a9640: 0x7fb40910  sq          $s4, 0x910($sp)
    ctx->pc = 0x3a9640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2320), GPR_VEC(ctx, 20));
label_3a9644:
    // 0x3a9644: 0x7fb50900  sq          $s5, 0x900($sp)
    ctx->pc = 0x3a9644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2304), GPR_VEC(ctx, 21));
label_3a9648:
    // 0x3a9648: 0x7fb20930  sq          $s2, 0x930($sp)
    ctx->pc = 0x3a9648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 18));
label_3a964c:
    // 0x3a964c: 0x7fb30920  sq          $s3, 0x920($sp)
    ctx->pc = 0x3a964cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2336), GPR_VEC(ctx, 19));
label_3a9650:
    // 0x3a9650: 0xffbf08f0  sd          $ra, 0x8F0($sp)
    ctx->pc = 0x3a9650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2288), GPR_U64(ctx, 31));
label_3a9654:
    // 0x3a9654: 0xe7b70978  swc1        $f23, 0x978($sp)
    ctx->pc = 0x3a9654u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2424), bits); }
label_3a9658:
    // 0x3a9658: 0xe7b60970  swc1        $f22, 0x970($sp)
    ctx->pc = 0x3a9658u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2416), bits); }
label_3a965c:
    // 0x3a965c: 0xe7b50968  swc1        $f21, 0x968($sp)
    ctx->pc = 0x3a965cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2408), bits); }
label_3a9660:
    // 0x3a9660: 0xe7b40960  swc1        $f20, 0x960($sp)
    ctx->pc = 0x3a9660u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2400), bits); }
label_3a9664:
    // 0x3a9664: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a9664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a9668:
    // 0x3a9668: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3a9668u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3a966c:
    // 0x3a966c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3a966cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3a9670:
    // 0x3a9670: 0x40f809  jalr        $v0
label_3a9674:
    if (ctx->pc == 0x3A9674u) {
        ctx->pc = 0x3A9674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9670u;
        // 0x3a9674: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9678u;
        goto label_3a9678;
    }
    ctx->pc = 0x3A9670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A9678u);
        ctx->pc = 0x3A9674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9670u;
        // 0x3a9674: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9670u, 0x3A9678u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A9678u;
label_3a9678:
    // 0x3a9678: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3a9678u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a967c:
    // 0x3a967c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3a967cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3a9680:
    // 0x3a9680: 0x27b50440  addiu       $s5, $sp, 0x440
    ctx->pc = 0x3a9680u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3a9684:
    // 0x3a9684: 0x27b10450  addiu       $s1, $sp, 0x450
    ctx->pc = 0x3a9684u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3a9688:
    // 0x3a9688: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a9688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a968c:
    // 0x3a968c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3a968cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3a9690:
    // 0x3a9690: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a9690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3a9694:
    // 0x3a9694: 0x0  nop
    ctx->pc = 0x3a9694u;
    // NOP
label_3a9698:
    // 0x3a9698: 0x0  nop
    ctx->pc = 0x3a9698u;
    // NOP
label_3a969c:
    // 0x3a969c: 0x0  nop
    ctx->pc = 0x3a969cu;
    // NOP
label_3a96a0:
    // 0x3a96a0: 0x0  nop
    ctx->pc = 0x3a96a0u;
    // NOP
label_3a96a4:
    // 0x3a96a4: 0x0  nop
    ctx->pc = 0x3a96a4u;
    // NOP
label_3a96a8:
    // 0x3a96a8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3a96ac:
    if (ctx->pc == 0x3A96ACu) {
        ctx->pc = 0x3A96ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A96A8u;
        // 0x3a96ac: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A96B0u;
        goto label_3a96b0;
    }
    ctx->pc = 0x3A96A8u;
    {
        const bool branch_taken_0x3a96a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A96ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A96A8u;
        // 0x3a96ac: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a96a8) {
            ctx->pc = 0x3A9698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9698;
        }
    }
    ctx->pc = 0x3A96B0u;
label_3a96b0:
    // 0x3a96b0: 0xc138ddc  jal         func_4E3770
label_3a96b4:
    if (ctx->pc == 0x3A96B4u) {
        ctx->pc = 0x3A96B8u;
        goto label_3a96b8;
    }
    ctx->pc = 0x3A96B0u;
    SET_GPR_U32(ctx, 31, 0x3A96B8u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3A96B0u, 0x3A96B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A96B8u;
label_3a96b8:
    // 0x3a96b8: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x3a96b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
label_3a96bc:
    // 0x3a96bc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3a96bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3a96c0:
    // 0x3a96c0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3a96c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3a96c4:
    // 0x3a96c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a96c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a96c8:
    // 0x3a96c8: 0xc0e90ca  jal         func_3A4328
label_3a96cc:
    if (ctx->pc == 0x3A96CCu) {
        ctx->pc = 0x3A96CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A96C8u;
        // 0x3a96cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A96D0u;
        goto label_3a96d0;
    }
    ctx->pc = 0x3A96C8u;
    SET_GPR_U32(ctx, 31, 0x3A96D0u);
    ctx->pc = 0x3A96CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A96C8u;
    // 0x3a96cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3A96C8u, 0x3A96D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A96D0u;
label_3a96d0:
    // 0x3a96d0: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x3a96d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_3a96d4:
    // 0x3a96d4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3a96d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3a96d8:
    // 0x3a96d8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3a96d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3a96dc:
    // 0x3a96dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3a96dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3a96e0:
    // 0x3a96e0: 0x7ba30440  lq          $v1, 0x440($sp)
    ctx->pc = 0x3a96e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3a96e4:
    // 0x3a96e4: 0x2452b8b8  addiu       $s2, $v0, -0x4748
    ctx->pc = 0x3a96e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3a96e8:
    // 0x3a96e8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3a96e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3a96ec:
    // 0x3a96ec: 0x7fa30430  sq          $v1, 0x430($sp)
    ctx->pc = 0x3a96ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 3));
label_3a96f0:
    // 0x3a96f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a96f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a96f4:
    // 0x3a96f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a96f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3a96f8:
    // 0x3a96f8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3a96f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3a96fc:
    // 0x3a96fc: 0xc0cd518  jal         func_335460
label_3a9700:
    if (ctx->pc == 0x3A9700u) {
        ctx->pc = 0x3A9700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A96FCu;
        // 0x3a9700: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9704u;
        goto label_3a9704;
    }
    ctx->pc = 0x3A96FCu;
    SET_GPR_U32(ctx, 31, 0x3A9704u);
    ctx->pc = 0x3A9700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A96FCu;
    // 0x3a9700: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A96FCu, 0x3A9704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9704u;
label_3a9704:
    // 0x3a9704: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3a9704u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3a9708:
    // 0x3a9708: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3a9708u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3a970c:
    // 0x3a970c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3a970cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_3a9710:
    // 0x3a9710: 0xc0cd518  jal         func_335460
label_3a9714:
    if (ctx->pc == 0x3A9714u) {
        ctx->pc = 0x3A9714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9710u;
        // 0x3a9714: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9718u;
        goto label_3a9718;
    }
    ctx->pc = 0x3A9710u;
    SET_GPR_U32(ctx, 31, 0x3A9718u);
    ctx->pc = 0x3A9714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9710u;
    // 0x3a9714: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A9710u, 0x3A9718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9718u;
label_3a9718:
    // 0x3a9718: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x3a9718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_3a971c:
    // 0x3a971c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a971cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a9720:
    // 0x3a9720: 0xe7b40450  swc1        $f20, 0x450($sp)
    ctx->pc = 0x3a9720u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1104), bits); }
label_3a9724:
    // 0x3a9724: 0xe7a00454  swc1        $f0, 0x454($sp)
    ctx->pc = 0x3a9724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1108), bits); }
label_3a9728:
    // 0x3a9728: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x3a9728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3a972c:
    // 0x3a972c: 0xe637000c  swc1        $f23, 0xC($s1)
    ctx->pc = 0x3a972cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3a9730:
    // 0x3a9730: 0x7ba30450  lq          $v1, 0x450($sp)
    ctx->pc = 0x3a9730u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3a9734:
    // 0x3a9734: 0x7fa30420  sq          $v1, 0x420($sp)
    ctx->pc = 0x3a9734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 3));
label_3a9738:
    // 0x3a9738: 0x7fa30440  sq          $v1, 0x440($sp)
    ctx->pc = 0x3a9738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 3));
label_3a973c:
    // 0x3a973c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3a973cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3a9740:
    // 0x3a9740: 0x2c42001e  sltiu       $v0, $v0, 0x1E
    ctx->pc = 0x3a9740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_3a9744:
    // 0x3a9744: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
label_3a9748:
    if (ctx->pc == 0x3A9748u) {
        ctx->pc = 0x3A9748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9744u;
        // 0x3a9748: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A974Cu;
        goto label_3a974c;
    }
    ctx->pc = 0x3A9744u;
    {
        const bool branch_taken_0x3a9744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9744u;
        // 0x3a9748: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9744) {
            ctx->pc = 0x3A98DCu;
            goto label_3a98dc;
        }
    }
    ctx->pc = 0x3A974Cu;
label_3a974c:
    // 0x3a974c: 0xc0e9694  jal         func_3A5A50
label_3a9750:
    if (ctx->pc == 0x3A9750u) {
        ctx->pc = 0x3A9750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A974Cu;
        // 0x3a9750: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9754u;
        goto label_3a9754;
    }
    ctx->pc = 0x3A974Cu;
    SET_GPR_U32(ctx, 31, 0x3A9754u);
    ctx->pc = 0x3A9750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A974Cu;
    // 0x3a9750: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3A974Cu, 0x3A9754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9754u;
label_3a9754:
    // 0x3a9754: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
label_3a9758:
    if (ctx->pc == 0x3A9758u) {
        ctx->pc = 0x3A9758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9754u;
        // 0x3a9758: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A975Cu;
        goto label_3a975c;
    }
    ctx->pc = 0x3A9754u;
    {
        const bool branch_taken_0x3a9754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9754u;
        // 0x3a9758: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9754) {
            ctx->pc = 0x3A98DCu;
            goto label_3a98dc;
        }
    }
    ctx->pc = 0x3A975Cu;
label_3a975c:
    // 0x3a975c: 0xc0e9694  jal         func_3A5A50
label_3a9760:
    if (ctx->pc == 0x3A9760u) {
        ctx->pc = 0x3A9760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A975Cu;
        // 0x3a9760: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9764u;
        goto label_3a9764;
    }
    ctx->pc = 0x3A975Cu;
    SET_GPR_U32(ctx, 31, 0x3A9764u);
    ctx->pc = 0x3A9760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A975Cu;
    // 0x3a9760: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3A975Cu, 0x3A9764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9764u;
label_3a9764:
    // 0x3a9764: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
label_3a9768:
    if (ctx->pc == 0x3A9768u) {
        ctx->pc = 0x3A9768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9764u;
        // 0x3a9768: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A976Cu;
        goto label_3a976c;
    }
    ctx->pc = 0x3A9764u;
    {
        const bool branch_taken_0x3a9764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9764u;
        // 0x3a9768: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9764) {
            ctx->pc = 0x3A98DCu;
            goto label_3a98dc;
        }
    }
    ctx->pc = 0x3A976Cu;
label_3a976c:
    // 0x3a976c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3a976cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_3a9770:
    // 0x3a9770: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a9770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3a9774:
    // 0x3a9774: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x3a9774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_3a9778:
    // 0x3a9778: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a9778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3a977c:
    // 0x3a977c: 0xc0e9f56  jal         func_3A7D58
label_3a9780:
    if (ctx->pc == 0x3A9780u) {
        ctx->pc = 0x3A9780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A977Cu;
        // 0x3a9780: 0x27a40430  addiu       $a0, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9784u;
        goto label_3a9784;
    }
    ctx->pc = 0x3A977Cu;
    SET_GPR_U32(ctx, 31, 0x3A9784u);
    ctx->pc = 0x3A9780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A977Cu;
    // 0x3a9780: 0x27a40430  addiu       $a0, $sp, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7D58u, 0x3A977Cu, 0x3A9784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9784u;
label_3a9784:
    // 0x3a9784: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
label_3a9788:
    if (ctx->pc == 0x3A9788u) {
        ctx->pc = 0x3A9788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9784u;
        // 0x3a9788: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A978Cu;
        goto label_3a978c;
    }
    ctx->pc = 0x3A9784u;
    {
        const bool branch_taken_0x3a9784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9784u;
        // 0x3a9788: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9784) {
            ctx->pc = 0x3A98DCu;
            goto label_3a98dc;
        }
    }
    ctx->pc = 0x3A978Cu;
label_3a978c:
    // 0x3a978c: 0xc0e9694  jal         func_3A5A50
label_3a9790:
    if (ctx->pc == 0x3A9790u) {
        ctx->pc = 0x3A9790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A978Cu;
        // 0x3a9790: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9794u;
        goto label_3a9794;
    }
    ctx->pc = 0x3A978Cu;
    SET_GPR_U32(ctx, 31, 0x3A9794u);
    ctx->pc = 0x3A9790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A978Cu;
    // 0x3a9790: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3A978Cu, 0x3A9794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9794u;
label_3a9794:
    // 0x3a9794: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3a9798:
    if (ctx->pc == 0x3A9798u) {
        ctx->pc = 0x3A9798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9794u;
        // 0x3a9798: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A979Cu;
        goto label_3a979c;
    }
    ctx->pc = 0x3A9794u;
    {
        const bool branch_taken_0x3a9794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9794u;
        // 0x3a9798: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9794) {
            ctx->pc = 0x3A97B0u;
            goto label_3a97b0;
        }
    }
    ctx->pc = 0x3A979Cu;
label_3a979c:
    // 0x3a979c: 0xc0cd4ee  jal         func_3353B8
label_3a97a0:
    if (ctx->pc == 0x3A97A0u) {
        ctx->pc = 0x3A97A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A979Cu;
        // 0x3a97a0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A97A4u;
        goto label_3a97a4;
    }
    ctx->pc = 0x3A979Cu;
    SET_GPR_U32(ctx, 31, 0x3A97A4u);
    ctx->pc = 0x3A97A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A979Cu;
    // 0x3a97a0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3A979Cu, 0x3A97A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A97A4u;
label_3a97a4:
    // 0x3a97a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a97a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a97a8:
    // 0x3a97a8: 0xc0cd4ee  jal         func_3353B8
label_3a97ac:
    if (ctx->pc == 0x3A97ACu) {
        ctx->pc = 0x3A97ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A97A8u;
        // 0x3a97ac: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A97B0u;
        goto label_3a97b0;
    }
    ctx->pc = 0x3A97A8u;
    SET_GPR_U32(ctx, 31, 0x3A97B0u);
    ctx->pc = 0x3A97ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A97A8u;
    // 0x3a97ac: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3A97A8u, 0x3A97B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A97B0u;
label_3a97b0:
    // 0x3a97b0: 0xc0e9694  jal         func_3A5A50
label_3a97b4:
    if (ctx->pc == 0x3A97B4u) {
        ctx->pc = 0x3A97B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A97B0u;
        // 0x3a97b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A97B8u;
        goto label_3a97b8;
    }
    ctx->pc = 0x3A97B0u;
    SET_GPR_U32(ctx, 31, 0x3A97B8u);
    ctx->pc = 0x3A97B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A97B0u;
    // 0x3a97b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3A97B0u, 0x3A97B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A97B8u;
label_3a97b8:
    // 0x3a97b8: 0x50400045  beql        $v0, $zero, . + 4 + (0x45 << 2)
label_3a97bc:
    if (ctx->pc == 0x3A97BCu) {
        ctx->pc = 0x3A97BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A97B8u;
        // 0x3a97bc: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A97C0u;
        goto label_3a97c0;
    }
    ctx->pc = 0x3A97B8u;
    {
        const bool branch_taken_0x3a97b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a97b8) {
            ctx->pc = 0x3A97BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A97B8u;
            // 0x3a97bc: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A98D0u;
            goto label_3a98d0;
        }
    }
    ctx->pc = 0x3A97C0u;
label_3a97c0:
    // 0x3a97c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a97c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a97c4:
    // 0x3a97c4: 0xc0cd4ee  jal         func_3353B8
label_3a97c8:
    if (ctx->pc == 0x3A97C8u) {
        ctx->pc = 0x3A97C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A97C4u;
        // 0x3a97c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A97CCu;
        goto label_3a97cc;
    }
    ctx->pc = 0x3A97C4u;
    SET_GPR_U32(ctx, 31, 0x3A97CCu);
    ctx->pc = 0x3A97C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A97C4u;
    // 0x3a97c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3A97C4u, 0x3A97CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A97CCu;
label_3a97cc:
    // 0x3a97cc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3a97ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3a97d0:
    // 0x3a97d0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3a97d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3a97d4:
    // 0x3a97d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a97d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a97d8:
    // 0x3a97d8: 0x27b00880  addiu       $s0, $sp, 0x880
    ctx->pc = 0x3a97d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_3a97dc:
    // 0x3a97dc: 0xafa00880  sw          $zero, 0x880($sp)
    ctx->pc = 0x3a97dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2176), GPR_U32(ctx, 0));
label_3a97e0:
    // 0x3a97e0: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x3a97e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3a97e4:
    // 0x3a97e4: 0xafa00884  sw          $zero, 0x884($sp)
    ctx->pc = 0x3a97e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2180), GPR_U32(ctx, 0));
label_3a97e8:
    // 0x3a97e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a97e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a97ec:
    // 0x3a97ec: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x3a97ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3a97f0:
    // 0x3a97f0: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x3a97f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_3a97f4:
    // 0x3a97f4: 0xe617000c  swc1        $f23, 0xC($s0)
    ctx->pc = 0x3a97f4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3a97f8:
    // 0x3a97f8: 0x27b30890  addiu       $s3, $sp, 0x890
    ctx->pc = 0x3a97f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 2192));
label_3a97fc:
    // 0x3a97fc: 0x3c014116  lui         $at, 0x4116
    ctx->pc = 0x3a97fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16662 << 16));
label_3a9800:
    // 0x3a9800: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x3a9800u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
label_3a9804:
    // 0x3a9804: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a9804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a9808:
    // 0x3a9808: 0x27b208a0  addiu       $s2, $sp, 0x8A0
    ctx->pc = 0x3a9808u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 2208));
label_3a980c:
    // 0x3a980c: 0x7ba50880  lq          $a1, 0x880($sp)
    ctx->pc = 0x3a980cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
label_3a9810:
    // 0x3a9810: 0x26311cd0  addiu       $s1, $s1, 0x1CD0
    ctx->pc = 0x3a9810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7376));
label_3a9814:
    // 0x3a9814: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3a9814u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3a9818:
    // 0x3a9818: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3a9818u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3a981c:
    // 0x3a981c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x3a981cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_3a9820:
    // 0x3a9820: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3a9820u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3a9824:
    // 0x3a9824: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3a9824u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3a9828:
    // 0x3a9828: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3a9828u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3a982c:
    // 0x3a982c: 0x7ba30420  lq          $v1, 0x420($sp)
    ctx->pc = 0x3a982cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3a9830:
    // 0x3a9830: 0x7fa208a0  sq          $v0, 0x8A0($sp)
    ctx->pc = 0x3a9830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2208), GPR_VEC(ctx, 2));
label_3a9834:
    // 0x3a9834: 0x7fa20890  sq          $v0, 0x890($sp)
    ctx->pc = 0x3a9834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 2));
label_3a9838:
    // 0x3a9838: 0x3c01c118  lui         $at, 0xC118
    ctx->pc = 0x3a9838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49432 << 16));
label_3a983c:
    // 0x3a983c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a983cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3a9840:
    // 0x3a9840: 0x3c01c148  lui         $at, 0xC148
    ctx->pc = 0x3a9840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49480 << 16));
label_3a9844:
    // 0x3a9844: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a9844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3a9848:
    // 0x3a9848: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3a9848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3a984c:
    // 0x3a984c: 0x7fa30880  sq          $v1, 0x880($sp)
    ctx->pc = 0x3a984cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 3));
label_3a9850:
    // 0x3a9850: 0xafa608a0  sw          $a2, 0x8A0($sp)
    ctx->pc = 0x3a9850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2208), GPR_U32(ctx, 6));
label_3a9854:
    // 0x3a9854: 0x7fa50870  sq          $a1, 0x870($sp)
    ctx->pc = 0x3a9854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 5));
label_3a9858:
    // 0x3a9858: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3a9858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3a985c:
    // 0x3a985c: 0xc0cd518  jal         func_335460
label_3a9860:
    if (ctx->pc == 0x3A9860u) {
        ctx->pc = 0x3A9860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A985Cu;
        // 0x3a9860: 0xe7a00890  swc1        $f0, 0x890($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9864u;
        goto label_3a9864;
    }
    ctx->pc = 0x3A985Cu;
    SET_GPR_U32(ctx, 31, 0x3A9864u);
    ctx->pc = 0x3A9860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A985Cu;
    // 0x3a9860: 0xe7a00890  swc1        $f0, 0x890($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A985Cu, 0x3A9864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9864u;
label_3a9864:
    // 0x3a9864: 0x3c013e38  lui         $at, 0x3E38
    ctx->pc = 0x3a9864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15928 << 16));
label_3a9868:
    // 0x3a9868: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x3a9868u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_3a986c:
    // 0x3a986c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a986cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a9870:
    // 0x3a9870: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3a9870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_3a9874:
    // 0x3a9874: 0x344280ff  ori         $v0, $v0, 0x80FF
    ctx->pc = 0x3a9874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33023);
label_3a9878:
    // 0x3a9878: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3a9878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a987c:
    // 0x3a987c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a987cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3a9880:
    // 0x3a9880: 0xafa208c0  sw          $v0, 0x8C0($sp)
    ctx->pc = 0x3a9880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2240), GPR_U32(ctx, 2));
label_3a9884:
    // 0x3a9884: 0x27b00460  addiu       $s0, $sp, 0x460
    ctx->pc = 0x3a9884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3a9888:
    // 0x3a9888: 0x27a308e0  addiu       $v1, $sp, 0x8E0
    ctx->pc = 0x3a9888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 2272));
label_3a988c:
    // 0x3a988c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3a988cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a9890:
    // 0x3a9890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a9890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a9894:
    // 0x3a9894: 0xe7a008b0  swc1        $f0, 0x8B0($sp)
    ctx->pc = 0x3a9894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2224), bits); }
label_3a9898:
    // 0x3a9898: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3a9898u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a989c:
    // 0x3a989c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x3a989cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a98a0:
    // 0x3a98a0: 0x27a908b0  addiu       $t1, $sp, 0x8B0
    ctx->pc = 0x3a98a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
label_3a98a4:
    // 0x3a98a4: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x3a98a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3a98a8:
    // 0x3a98a8: 0x27aa08c0  addiu       $t2, $sp, 0x8C0
    ctx->pc = 0x3a98a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 2240));
label_3a98ac:
    // 0x3a98ac: 0x27ab08d0  addiu       $t3, $sp, 0x8D0
    ctx->pc = 0x3a98acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 2256));
label_3a98b0:
    // 0x3a98b0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3a98b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_3a98b4:
    // 0x3a98b4: 0xafa208d0  sw          $v0, 0x8D0($sp)
    ctx->pc = 0x3a98b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2256), GPR_U32(ctx, 2));
label_3a98b8:
    // 0x3a98b8: 0xc0ea0d0  jal         func_3A8340
label_3a98bc:
    if (ctx->pc == 0x3A98BCu) {
        ctx->pc = 0x3A98BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A98B8u;
        // 0x3a98bc: 0xafa008e0  sw          $zero, 0x8E0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A98C0u;
        goto label_3a98c0;
    }
    ctx->pc = 0x3A98B8u;
    SET_GPR_U32(ctx, 31, 0x3A98C0u);
    ctx->pc = 0x3A98BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A98B8u;
    // 0x3a98bc: 0xafa008e0  sw          $zero, 0x8E0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2272), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8340u, 0x3A98B8u, 0x3A98C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A98C0u;
label_3a98c0:
    // 0x3a98c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a98c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a98c4:
    // 0x3a98c4: 0xc0f15bc  jal         func_3C56F0
label_3a98c8:
    if (ctx->pc == 0x3A98C8u) {
        ctx->pc = 0x3A98C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A98C4u;
        // 0x3a98c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A98CCu;
        goto label_3a98cc;
    }
    ctx->pc = 0x3A98C4u;
    SET_GPR_U32(ctx, 31, 0x3A98CCu);
    ctx->pc = 0x3A98C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A98C4u;
    // 0x3a98c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3A98C4u, 0x3A98CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A98CCu;
label_3a98cc:
    // 0x3a98cc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3a98ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3a98d0:
    // 0x3a98d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a98d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a98d4:
    // 0x3a98d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a98d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3a98d8:
    // 0x3a98d8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x3a98d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_3a98dc:
    // 0x3a98dc: 0x7bb00950  lq          $s0, 0x950($sp)
    ctx->pc = 0x3a98dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2384)));
label_3a98e0:
    // 0x3a98e0: 0x7bb10940  lq          $s1, 0x940($sp)
    ctx->pc = 0x3a98e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2368)));
label_3a98e4:
    // 0x3a98e4: 0x7bb20930  lq          $s2, 0x930($sp)
    ctx->pc = 0x3a98e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2352)));
label_3a98e8:
    // 0x3a98e8: 0x7bb30920  lq          $s3, 0x920($sp)
    ctx->pc = 0x3a98e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2336)));
label_3a98ec:
    // 0x3a98ec: 0x7bb40910  lq          $s4, 0x910($sp)
    ctx->pc = 0x3a98ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2320)));
label_3a98f0:
    // 0x3a98f0: 0x7bb50900  lq          $s5, 0x900($sp)
    ctx->pc = 0x3a98f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2304)));
label_3a98f4:
    // 0x3a98f4: 0xdfbf08f0  ld          $ra, 0x8F0($sp)
    ctx->pc = 0x3a98f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2288)));
label_3a98f8:
    // 0x3a98f8: 0xc7b70978  lwc1        $f23, 0x978($sp)
    ctx->pc = 0x3a98f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3a98fc:
    // 0x3a98fc: 0xc7b60970  lwc1        $f22, 0x970($sp)
    ctx->pc = 0x3a98fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3a9900:
    // 0x3a9900: 0xc7b50968  lwc1        $f21, 0x968($sp)
    ctx->pc = 0x3a9900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3a9904:
    // 0x3a9904: 0xc7b40960  lwc1        $f20, 0x960($sp)
    ctx->pc = 0x3a9904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a9908:
    // 0x3a9908: 0x3e00008  jr          $ra
label_3a990c:
    if (ctx->pc == 0x3A990Cu) {
        ctx->pc = 0x3A990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9908u;
        // 0x3a990c: 0x27bd0980  addiu       $sp, $sp, 0x980 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9910u;
        goto label_fallthrough_0x3a9908;
    }
    ctx->pc = 0x3A9908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9908u;
        // 0x3a990c: 0x27bd0980  addiu       $sp, $sp, 0x980 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a9908:
    ctx->pc = 0x3A9910u;
}
