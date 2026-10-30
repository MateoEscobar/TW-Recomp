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

// Function: sub_004A96D0
// Address: 0x4a96d0 - 0x4a99a0
void sub_004A96D0_0x4a96d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A96D0_0x4a96d0");
#endif

    switch (ctx->pc) {
        case 0x4a96d0u: goto label_4a96d0;
        case 0x4a96d4u: goto label_4a96d4;
        case 0x4a96d8u: goto label_4a96d8;
        case 0x4a96dcu: goto label_4a96dc;
        case 0x4a96e0u: goto label_4a96e0;
        case 0x4a96e4u: goto label_4a96e4;
        case 0x4a96e8u: goto label_4a96e8;
        case 0x4a96ecu: goto label_4a96ec;
        case 0x4a96f0u: goto label_4a96f0;
        case 0x4a96f4u: goto label_4a96f4;
        case 0x4a96f8u: goto label_4a96f8;
        case 0x4a96fcu: goto label_4a96fc;
        case 0x4a9700u: goto label_4a9700;
        case 0x4a9704u: goto label_4a9704;
        case 0x4a9708u: goto label_4a9708;
        case 0x4a970cu: goto label_4a970c;
        case 0x4a9710u: goto label_4a9710;
        case 0x4a9714u: goto label_4a9714;
        case 0x4a9718u: goto label_4a9718;
        case 0x4a971cu: goto label_4a971c;
        case 0x4a9720u: goto label_4a9720;
        case 0x4a9724u: goto label_4a9724;
        case 0x4a9728u: goto label_4a9728;
        case 0x4a972cu: goto label_4a972c;
        case 0x4a9730u: goto label_4a9730;
        case 0x4a9734u: goto label_4a9734;
        case 0x4a9738u: goto label_4a9738;
        case 0x4a973cu: goto label_4a973c;
        case 0x4a9740u: goto label_4a9740;
        case 0x4a9744u: goto label_4a9744;
        case 0x4a9748u: goto label_4a9748;
        case 0x4a974cu: goto label_4a974c;
        case 0x4a9750u: goto label_4a9750;
        case 0x4a9754u: goto label_4a9754;
        case 0x4a9758u: goto label_4a9758;
        case 0x4a975cu: goto label_4a975c;
        case 0x4a9760u: goto label_4a9760;
        case 0x4a9764u: goto label_4a9764;
        case 0x4a9768u: goto label_4a9768;
        case 0x4a976cu: goto label_4a976c;
        case 0x4a9770u: goto label_4a9770;
        case 0x4a9774u: goto label_4a9774;
        case 0x4a9778u: goto label_4a9778;
        case 0x4a977cu: goto label_4a977c;
        case 0x4a9780u: goto label_4a9780;
        case 0x4a9784u: goto label_4a9784;
        case 0x4a9788u: goto label_4a9788;
        case 0x4a978cu: goto label_4a978c;
        case 0x4a9790u: goto label_4a9790;
        case 0x4a9794u: goto label_4a9794;
        case 0x4a9798u: goto label_4a9798;
        case 0x4a979cu: goto label_4a979c;
        case 0x4a97a0u: goto label_4a97a0;
        case 0x4a97a4u: goto label_4a97a4;
        case 0x4a97a8u: goto label_4a97a8;
        case 0x4a97acu: goto label_4a97ac;
        case 0x4a97b0u: goto label_4a97b0;
        case 0x4a97b4u: goto label_4a97b4;
        case 0x4a97b8u: goto label_4a97b8;
        case 0x4a97bcu: goto label_4a97bc;
        case 0x4a97c0u: goto label_4a97c0;
        case 0x4a97c4u: goto label_4a97c4;
        case 0x4a97c8u: goto label_4a97c8;
        case 0x4a97ccu: goto label_4a97cc;
        case 0x4a97d0u: goto label_4a97d0;
        case 0x4a97d4u: goto label_4a97d4;
        case 0x4a97d8u: goto label_4a97d8;
        case 0x4a97dcu: goto label_4a97dc;
        case 0x4a97e0u: goto label_4a97e0;
        case 0x4a97e4u: goto label_4a97e4;
        case 0x4a97e8u: goto label_4a97e8;
        case 0x4a97ecu: goto label_4a97ec;
        case 0x4a97f0u: goto label_4a97f0;
        case 0x4a97f4u: goto label_4a97f4;
        case 0x4a97f8u: goto label_4a97f8;
        case 0x4a97fcu: goto label_4a97fc;
        case 0x4a9800u: goto label_4a9800;
        case 0x4a9804u: goto label_4a9804;
        case 0x4a9808u: goto label_4a9808;
        case 0x4a980cu: goto label_4a980c;
        case 0x4a9810u: goto label_4a9810;
        case 0x4a9814u: goto label_4a9814;
        case 0x4a9818u: goto label_4a9818;
        case 0x4a981cu: goto label_4a981c;
        case 0x4a9820u: goto label_4a9820;
        case 0x4a9824u: goto label_4a9824;
        case 0x4a9828u: goto label_4a9828;
        case 0x4a982cu: goto label_4a982c;
        case 0x4a9830u: goto label_4a9830;
        case 0x4a9834u: goto label_4a9834;
        case 0x4a9838u: goto label_4a9838;
        case 0x4a983cu: goto label_4a983c;
        case 0x4a9840u: goto label_4a9840;
        case 0x4a9844u: goto label_4a9844;
        case 0x4a9848u: goto label_4a9848;
        case 0x4a984cu: goto label_4a984c;
        case 0x4a9850u: goto label_4a9850;
        case 0x4a9854u: goto label_4a9854;
        case 0x4a9858u: goto label_4a9858;
        case 0x4a985cu: goto label_4a985c;
        case 0x4a9860u: goto label_4a9860;
        case 0x4a9864u: goto label_4a9864;
        case 0x4a9868u: goto label_4a9868;
        case 0x4a986cu: goto label_4a986c;
        case 0x4a9870u: goto label_4a9870;
        case 0x4a9874u: goto label_4a9874;
        case 0x4a9878u: goto label_4a9878;
        case 0x4a987cu: goto label_4a987c;
        case 0x4a9880u: goto label_4a9880;
        case 0x4a9884u: goto label_4a9884;
        case 0x4a9888u: goto label_4a9888;
        case 0x4a988cu: goto label_4a988c;
        case 0x4a9890u: goto label_4a9890;
        case 0x4a9894u: goto label_4a9894;
        case 0x4a9898u: goto label_4a9898;
        case 0x4a989cu: goto label_4a989c;
        case 0x4a98a0u: goto label_4a98a0;
        case 0x4a98a4u: goto label_4a98a4;
        case 0x4a98a8u: goto label_4a98a8;
        case 0x4a98acu: goto label_4a98ac;
        case 0x4a98b0u: goto label_4a98b0;
        case 0x4a98b4u: goto label_4a98b4;
        case 0x4a98b8u: goto label_4a98b8;
        case 0x4a98bcu: goto label_4a98bc;
        case 0x4a98c0u: goto label_4a98c0;
        case 0x4a98c4u: goto label_4a98c4;
        case 0x4a98c8u: goto label_4a98c8;
        case 0x4a98ccu: goto label_4a98cc;
        case 0x4a98d0u: goto label_4a98d0;
        case 0x4a98d4u: goto label_4a98d4;
        case 0x4a98d8u: goto label_4a98d8;
        case 0x4a98dcu: goto label_4a98dc;
        case 0x4a98e0u: goto label_4a98e0;
        case 0x4a98e4u: goto label_4a98e4;
        case 0x4a98e8u: goto label_4a98e8;
        case 0x4a98ecu: goto label_4a98ec;
        case 0x4a98f0u: goto label_4a98f0;
        case 0x4a98f4u: goto label_4a98f4;
        case 0x4a98f8u: goto label_4a98f8;
        case 0x4a98fcu: goto label_4a98fc;
        case 0x4a9900u: goto label_4a9900;
        case 0x4a9904u: goto label_4a9904;
        case 0x4a9908u: goto label_4a9908;
        case 0x4a990cu: goto label_4a990c;
        case 0x4a9910u: goto label_4a9910;
        case 0x4a9914u: goto label_4a9914;
        case 0x4a9918u: goto label_4a9918;
        case 0x4a991cu: goto label_4a991c;
        case 0x4a9920u: goto label_4a9920;
        case 0x4a9924u: goto label_4a9924;
        case 0x4a9928u: goto label_4a9928;
        case 0x4a992cu: goto label_4a992c;
        case 0x4a9930u: goto label_4a9930;
        case 0x4a9934u: goto label_4a9934;
        case 0x4a9938u: goto label_4a9938;
        case 0x4a993cu: goto label_4a993c;
        case 0x4a9940u: goto label_4a9940;
        case 0x4a9944u: goto label_4a9944;
        case 0x4a9948u: goto label_4a9948;
        case 0x4a994cu: goto label_4a994c;
        case 0x4a9950u: goto label_4a9950;
        case 0x4a9954u: goto label_4a9954;
        case 0x4a9958u: goto label_4a9958;
        case 0x4a995cu: goto label_4a995c;
        case 0x4a9960u: goto label_4a9960;
        case 0x4a9964u: goto label_4a9964;
        case 0x4a9968u: goto label_4a9968;
        case 0x4a996cu: goto label_4a996c;
        case 0x4a9970u: goto label_4a9970;
        case 0x4a9974u: goto label_4a9974;
        case 0x4a9978u: goto label_4a9978;
        case 0x4a997cu: goto label_4a997c;
        case 0x4a9980u: goto label_4a9980;
        case 0x4a9984u: goto label_4a9984;
        case 0x4a9988u: goto label_4a9988;
        case 0x4a998cu: goto label_4a998c;
        case 0x4a9990u: goto label_4a9990;
        case 0x4a9994u: goto label_4a9994;
        case 0x4a9998u: goto label_4a9998;
        case 0x4a999cu: goto label_4a999c;
        default: break;
    }

    ctx->pc = 0x4a96d0u;

label_4a96d0:
    // 0x4a96d0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x4a96d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_4a96d4:
    // 0x4a96d4: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x4a96d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
label_4a96d8:
    // 0x4a96d8: 0x7fb50140  sq          $s5, 0x140($sp)
    ctx->pc = 0x4a96d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 21));
label_4a96dc:
    // 0x4a96dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a96dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a96e0:
    // 0x4a96e0: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x4a96e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
label_4a96e4:
    // 0x4a96e4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x4a96e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a96e8:
    // 0x4a96e8: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x4a96e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
label_4a96ec:
    // 0x4a96ec: 0x7fb30160  sq          $s3, 0x160($sp)
    ctx->pc = 0x4a96ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 19));
label_4a96f0:
    // 0x4a96f0: 0x7fb40150  sq          $s4, 0x150($sp)
    ctx->pc = 0x4a96f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 20));
label_4a96f4:
    // 0x4a96f4: 0x7fb60130  sq          $s6, 0x130($sp)
    ctx->pc = 0x4a96f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 22));
label_4a96f8:
    // 0x4a96f8: 0x7fb70120  sq          $s7, 0x120($sp)
    ctx->pc = 0x4a96f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 23));
label_4a96fc:
    // 0x4a96fc: 0x7fbe0110  sq          $fp, 0x110($sp)
    ctx->pc = 0x4a96fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 30));
label_4a9700:
    // 0x4a9700: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x4a9700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_4a9704:
    // 0x4a9704: 0x27b300f0  addiu       $s3, $sp, 0xF0
    ctx->pc = 0x4a9704u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4a9708:
    // 0x4a9708: 0x27b100f4  addiu       $s1, $sp, 0xF4
    ctx->pc = 0x4a9708u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
label_4a970c:
    // 0x4a970c: 0x1000008f  b           . + 4 + (0x8F << 2)
label_4a9710:
    if (ctx->pc == 0x4A9710u) {
        ctx->pc = 0x4A9710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A970Cu;
        // 0x4a9710: 0x27b000f8  addiu       $s0, $sp, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9714u;
        goto label_4a9714;
    }
    ctx->pc = 0x4A970Cu;
    {
        const bool branch_taken_0x4a970c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A970Cu;
        // 0x4a9710: 0x27b000f8  addiu       $s0, $sp, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a970c) {
            ctx->pc = 0x4A994Cu;
            goto label_4a994c;
        }
    }
    ctx->pc = 0x4A9714u;
label_4a9714:
    // 0x4a9714: 0x0  nop
    ctx->pc = 0x4a9714u;
    // NOP
label_4a9718:
    // 0x4a9718: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x4a9718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_4a971c:
    // 0x4a971c: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x4a971cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_4a9720:
    // 0x4a9720: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a9720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4a9724:
    // 0x4a9724: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x4a9724u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_4a9728:
    // 0x4a9728: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_4a972c:
    if (ctx->pc == 0x4A972Cu) {
        ctx->pc = 0x4A972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9728u;
        // 0x4a972c: 0x8fa300f0  lw          $v1, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9730u;
        goto label_4a9730;
    }
    ctx->pc = 0x4A9728u;
    {
        const bool branch_taken_0x4a9728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9728u;
        // 0x4a972c: 0x8fa300f0  lw          $v1, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9728) {
            ctx->pc = 0x4A9758u;
            goto label_4a9758;
        }
    }
    ctx->pc = 0x4A9730u;
label_4a9730:
    // 0x4a9730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a9730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a9734:
    // 0x4a9734: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4a9734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4a9738:
    // 0x4a9738: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4a9738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4a973c:
    // 0x4a973c: 0xc11eff2  jal         func_47BFC8
label_4a9740:
    if (ctx->pc == 0x4A9740u) {
        ctx->pc = 0x4A9740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A973Cu;
        // 0x4a9740: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9744u;
        goto label_4a9744;
    }
    ctx->pc = 0x4A973Cu;
    SET_GPR_U32(ctx, 31, 0x4A9744u);
    ctx->pc = 0x4A9740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A973Cu;
    // 0x4a9740: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A973Cu, 0x4A9744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9744u;
label_4a9744:
    // 0x4a9744: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a9744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4a9748:
    // 0x4a9748: 0xc11f024  jal         func_47C090
label_4a974c:
    if (ctx->pc == 0x4A974Cu) {
        ctx->pc = 0x4A974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9748u;
        // 0x4a974c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9750u;
        goto label_4a9750;
    }
    ctx->pc = 0x4A9748u;
    SET_GPR_U32(ctx, 31, 0x4A9750u);
    ctx->pc = 0x4A974Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9748u;
    // 0x4a974c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A9748u, 0x4A9750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9750u;
label_4a9750:
    // 0x4a9750: 0x10000087  b           . + 4 + (0x87 << 2)
label_4a9754:
    if (ctx->pc == 0x4A9754u) {
        ctx->pc = 0x4A9754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9750u;
        // 0x4a9754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9758u;
        goto label_4a9758;
    }
    ctx->pc = 0x4A9750u;
    {
        const bool branch_taken_0x4a9750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9750u;
        // 0x4a9754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9750) {
            ctx->pc = 0x4A9970u;
            goto label_4a9970;
        }
    }
    ctx->pc = 0x4A9758u;
label_4a9758:
    // 0x4a9758: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4a9758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4a975c:
    // 0x4a975c: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
label_4a9760:
    if (ctx->pc == 0x4A9760u) {
        ctx->pc = 0x4A9760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A975Cu;
        // 0x4a9760: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9764u;
        goto label_4a9764;
    }
    ctx->pc = 0x4A975Cu;
    {
        const bool branch_taken_0x4a975c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A9760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A975Cu;
        // 0x4a9760: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a975c) {
            ctx->pc = 0x4A9834u;
            goto label_4a9834;
        }
    }
    ctx->pc = 0x4A9764u;
label_4a9764:
    // 0x4a9764: 0x8fb000f4  lw          $s0, 0xF4($sp)
    ctx->pc = 0x4a9764u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_4a9768:
    // 0x4a9768: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x4a9768u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4a976c:
    // 0x4a976c: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x4a976cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a9770:
    // 0x4a9770: 0x16400015  bnez        $s2, . + 4 + (0x15 << 2)
label_4a9774:
    if (ctx->pc == 0x4A9774u) {
        ctx->pc = 0x4A9774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9770u;
        // 0x4a9774: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9778u;
        goto label_4a9778;
    }
    ctx->pc = 0x4A9770u;
    {
        const bool branch_taken_0x4a9770 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9770u;
        // 0x4a9774: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9770) {
            ctx->pc = 0x4A97C8u;
            goto label_4a97c8;
        }
    }
    ctx->pc = 0x4A9778u;
label_4a9778:
    // 0x4a9778: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4a9778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4a977c:
    // 0x4a977c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4a977cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4a9780:
    // 0x4a9780: 0x8c62ae20  lw          $v0, -0x51E0($v1)
    ctx->pc = 0x4a9780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946336)));
label_4a9784:
    // 0x4a9784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a9784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a9788:
    // 0x4a9788: 0x40f809  jalr        $v0
label_4a978c:
    if (ctx->pc == 0x4A978Cu) {
        ctx->pc = 0x4A978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9788u;
        // 0x4a978c: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9790u;
        goto label_4a9790;
    }
    ctx->pc = 0x4A9788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A9790u);
        ctx->pc = 0x4A978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9788u;
        // 0x4a978c: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9788u, 0x4A9790u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A9790u;
label_4a9790:
    // 0x4a9790: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4a9790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a9794:
    // 0x4a9794: 0x1660000c  bnez        $s3, . + 4 + (0xC << 2)
label_4a9798:
    if (ctx->pc == 0x4A9798u) {
        ctx->pc = 0x4A9798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9794u;
        // 0x4a9798: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A979Cu;
        goto label_4a979c;
    }
    ctx->pc = 0x4A9794u;
    {
        const bool branch_taken_0x4a9794 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9794u;
        // 0x4a9798: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9794) {
            ctx->pc = 0x4A97C8u;
            goto label_4a97c8;
        }
    }
    ctx->pc = 0x4A979Cu;
label_4a979c:
    // 0x4a979c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4a979cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4a97a0:
    // 0x4a97a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4a97a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a97a4:
    // 0x4a97a4: 0xae820040  sw          $v0, 0x40($s4)
    ctx->pc = 0x4a97a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 2));
label_4a97a8:
    // 0x4a97a8: 0xc11eff2  jal         func_47BFC8
label_4a97ac:
    if (ctx->pc == 0x4A97ACu) {
        ctx->pc = 0x4A97ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A97A8u;
        // 0x4a97ac: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A97B0u;
        goto label_4a97b0;
    }
    ctx->pc = 0x4A97A8u;
    SET_GPR_U32(ctx, 31, 0x4A97B0u);
    ctx->pc = 0x4A97ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A97A8u;
    // 0x4a97ac: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A97A8u, 0x4A97B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A97B0u;
label_4a97b0:
    // 0x4a97b0: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x4a97b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_4a97b4:
    // 0x4a97b4: 0xc11f024  jal         func_47C090
label_4a97b8:
    if (ctx->pc == 0x4A97B8u) {
        ctx->pc = 0x4A97B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A97B4u;
        // 0x4a97b8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A97BCu;
        goto label_4a97bc;
    }
    ctx->pc = 0x4A97B4u;
    SET_GPR_U32(ctx, 31, 0x4A97BCu);
    ctx->pc = 0x4A97B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A97B4u;
    // 0x4a97b8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A97B4u, 0x4A97BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A97BCu;
label_4a97bc:
    // 0x4a97bc: 0x1000006c  b           . + 4 + (0x6C << 2)
label_4a97c0:
    if (ctx->pc == 0x4A97C0u) {
        ctx->pc = 0x4A97C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A97BCu;
        // 0x4a97c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A97C4u;
        goto label_4a97c4;
    }
    ctx->pc = 0x4A97BCu;
    {
        const bool branch_taken_0x4a97bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A97C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A97BCu;
        // 0x4a97c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a97bc) {
            ctx->pc = 0x4A9970u;
            goto label_4a9970;
        }
    }
    ctx->pc = 0x4A97C4u;
label_4a97c4:
    // 0x4a97c4: 0x0  nop
    ctx->pc = 0x4a97c4u;
    // NOP
label_4a97c8:
    // 0x4a97c8: 0x1200005a  beqz        $s0, . + 4 + (0x5A << 2)
label_4a97cc:
    if (ctx->pc == 0x4A97CCu) {
        ctx->pc = 0x4A97CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A97C8u;
        // 0x4a97cc: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A97D0u;
        goto label_4a97d0;
    }
    ctx->pc = 0x4A97C8u;
    {
        const bool branch_taken_0x4a97c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A97CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A97C8u;
        // 0x4a97cc: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a97c8) {
            ctx->pc = 0x4A9934u;
            goto label_4a9934;
        }
    }
    ctx->pc = 0x4A97D0u;
label_4a97d0:
    // 0x4a97d0: 0x24160040  addiu       $s6, $zero, 0x40
    ctx->pc = 0x4a97d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4a97d4:
    // 0x4a97d4: 0x0  nop
    ctx->pc = 0x4a97d4u;
    // NOP
label_4a97d8:
    // 0x4a97d8: 0x2e220041  sltiu       $v0, $s1, 0x41
    ctx->pc = 0x4a97d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
label_4a97dc:
    // 0x4a97dc: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x4a97dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4a97e0:
    // 0x4a97e0: 0x222800b  movn        $s0, $s1, $v0
    ctx->pc = 0x4a97e0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
label_4a97e4:
    // 0x4a97e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a97e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a97e8:
    // 0x4a97e8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x4a97e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4a97ec:
    // 0x4a97ec: 0xc11fb56  jal         func_47ED58
label_4a97f0:
    if (ctx->pc == 0x4A97F0u) {
        ctx->pc = 0x4A97F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A97ECu;
        // 0x4a97f0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A97F4u;
        goto label_4a97f4;
    }
    ctx->pc = 0x4A97ECu;
    SET_GPR_U32(ctx, 31, 0x4A97F4u);
    ctx->pc = 0x4A97F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A97ECu;
    // 0x4a97f0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x4A97ECu, 0x4A97F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A97F4u;
label_4a97f4:
    // 0x4a97f4: 0x1450005d  bne         $v0, $s0, . + 4 + (0x5D << 2)
label_4a97f8:
    if (ctx->pc == 0x4A97F8u) {
        ctx->pc = 0x4A97F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A97F4u;
        // 0x4a97f8: 0x2308823  subu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A97FCu;
        goto label_4a97fc;
    }
    ctx->pc = 0x4A97F4u;
    {
        const bool branch_taken_0x4a97f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x4A97F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A97F4u;
        // 0x4a97f8: 0x2308823  subu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a97f4) {
            ctx->pc = 0x4A996Cu;
            goto label_4a996c;
        }
    }
    ctx->pc = 0x4A97FCu;
label_4a97fc:
    // 0x4a97fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a97fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a9800:
    // 0x4a9800: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_4a9804:
    if (ctx->pc == 0x4A9804u) {
        ctx->pc = 0x4A9804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9800u;
        // 0x4a9804: 0x2503021  addu        $a2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9808u;
        goto label_4a9808;
    }
    ctx->pc = 0x4A9800u;
    {
        const bool branch_taken_0x4a9800 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9800u;
        // 0x4a9804: 0x2503021  addu        $a2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9800) {
            ctx->pc = 0x4A9824u;
            goto label_4a9824;
        }
    }
    ctx->pc = 0x4A9808u;
label_4a9808:
    // 0x4a9808: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x4a9808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_4a980c:
    // 0x4a980c: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x4a980cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_4a9810:
    // 0x4a9810: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4a9810u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4a9814:
    // 0x4a9814: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4a9814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4a9818:
    // 0x4a9818: 0xb0102b  sltu        $v0, $a1, $s0
    ctx->pc = 0x4a9818u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4a981c:
    // 0x4a981c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_4a9820:
    if (ctx->pc == 0x4A9820u) {
        ctx->pc = 0x4A9820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A981Cu;
        // 0x4a9820: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9824u;
        goto label_4a9824;
    }
    ctx->pc = 0x4A981Cu;
    {
        const bool branch_taken_0x4a981c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A981Cu;
        // 0x4a9820: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a981c) {
            ctx->pc = 0x4A9808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9808;
        }
    }
    ctx->pc = 0x4A9824u;
label_4a9824:
    // 0x4a9824: 0x1620ffec  bnez        $s1, . + 4 + (-0x14 << 2)
label_4a9828:
    if (ctx->pc == 0x4A9828u) {
        ctx->pc = 0x4A9828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9824u;
        // 0x4a9828: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A982Cu;
        goto label_4a982c;
    }
    ctx->pc = 0x4A9824u;
    {
        const bool branch_taken_0x4a9824 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9824u;
        // 0x4a9828: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9824) {
            ctx->pc = 0x4A97D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a97d8;
        }
    }
    ctx->pc = 0x4A982Cu;
label_4a982c:
    // 0x4a982c: 0x10000050  b           . + 4 + (0x50 << 2)
label_4a9830:
    if (ctx->pc == 0x4A9830u) {
        ctx->pc = 0x4A9830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A982Cu;
        // 0x4a9830: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9834u;
        goto label_4a9834;
    }
    ctx->pc = 0x4A982Cu;
    {
        const bool branch_taken_0x4a982c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A982Cu;
        // 0x4a9830: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a982c) {
            ctx->pc = 0x4A9970u;
            goto label_4a9970;
        }
    }
    ctx->pc = 0x4A9834u;
label_4a9834:
    // 0x4a9834: 0x14620041  bne         $v1, $v0, . + 4 + (0x41 << 2)
label_4a9838:
    if (ctx->pc == 0x4A9838u) {
        ctx->pc = 0x4A9838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9834u;
        // 0x4a9838: 0x8fa500f4  lw          $a1, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A983Cu;
        goto label_4a983c;
    }
    ctx->pc = 0x4A9834u;
    {
        const bool branch_taken_0x4a9834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A9838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9834u;
        // 0x4a9838: 0x8fa500f4  lw          $a1, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9834) {
            ctx->pc = 0x4A993Cu;
            goto label_4a993c;
        }
    }
    ctx->pc = 0x4A983Cu;
label_4a983c:
    // 0x4a983c: 0x8fb000f4  lw          $s0, 0xF4($sp)
    ctx->pc = 0x4a983cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_4a9840:
    // 0x4a9840: 0x27b40060  addiu       $s4, $sp, 0x60
    ctx->pc = 0x4a9840u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4a9844:
    // 0x4a9844: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x4a9844u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a9848:
    // 0x4a9848: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4a9848u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a984c:
    // 0x4a984c: 0x16400016  bnez        $s2, . + 4 + (0x16 << 2)
label_4a9850:
    if (ctx->pc == 0x4A9850u) {
        ctx->pc = 0x4A9850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A984Cu;
        // 0x4a9850: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9854u;
        goto label_4a9854;
    }
    ctx->pc = 0x4A984Cu;
    {
        const bool branch_taken_0x4a984c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A984Cu;
        // 0x4a9850: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a984c) {
            ctx->pc = 0x4A98A8u;
            goto label_4a98a8;
        }
    }
    ctx->pc = 0x4A9854u;
label_4a9854:
    // 0x4a9854: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4a9854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4a9858:
    // 0x4a9858: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4a9858u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4a985c:
    // 0x4a985c: 0x8c62ae20  lw          $v0, -0x51E0($v1)
    ctx->pc = 0x4a985cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946336)));
label_4a9860:
    // 0x4a9860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a9860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a9864:
    // 0x4a9864: 0x40f809  jalr        $v0
label_4a9868:
    if (ctx->pc == 0x4A9868u) {
        ctx->pc = 0x4A9868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9864u;
        // 0x4a9868: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A986Cu;
        goto label_4a986c;
    }
    ctx->pc = 0x4A9864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A986Cu);
        ctx->pc = 0x4A9868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9864u;
        // 0x4a9868: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9864u, 0x4A986Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A986Cu;
label_4a986c:
    // 0x4a986c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4a986cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a9870:
    // 0x4a9870: 0x1660000d  bnez        $s3, . + 4 + (0xD << 2)
label_4a9874:
    if (ctx->pc == 0x4A9874u) {
        ctx->pc = 0x4A9874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9870u;
        // 0x4a9874: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9878u;
        goto label_4a9878;
    }
    ctx->pc = 0x4A9870u;
    {
        const bool branch_taken_0x4a9870 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9870u;
        // 0x4a9874: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9870) {
            ctx->pc = 0x4A98A8u;
            goto label_4a98a8;
        }
    }
    ctx->pc = 0x4A9878u;
label_4a9878:
    // 0x4a9878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a9878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a987c:
    // 0x4a987c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4a987cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4a9880:
    // 0x4a9880: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4a9880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a9884:
    // 0x4a9884: 0xae820080  sw          $v0, 0x80($s4)
    ctx->pc = 0x4a9884u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
label_4a9888:
    // 0x4a9888: 0xc11eff2  jal         func_47BFC8
label_4a988c:
    if (ctx->pc == 0x4A988Cu) {
        ctx->pc = 0x4A988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9888u;
        // 0x4a988c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9890u;
        goto label_4a9890;
    }
    ctx->pc = 0x4A9888u;
    SET_GPR_U32(ctx, 31, 0x4A9890u);
    ctx->pc = 0x4A988Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9888u;
    // 0x4a988c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A9888u, 0x4A9890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9890u;
label_4a9890:
    // 0x4a9890: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x4a9890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_4a9894:
    // 0x4a9894: 0xc11f024  jal         func_47C090
label_4a9898:
    if (ctx->pc == 0x4A9898u) {
        ctx->pc = 0x4A9898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9894u;
        // 0x4a9898: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A989Cu;
        goto label_4a989c;
    }
    ctx->pc = 0x4A9894u;
    SET_GPR_U32(ctx, 31, 0x4A989Cu);
    ctx->pc = 0x4A9898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9894u;
    // 0x4a9898: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A9894u, 0x4A989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A989Cu;
label_4a989c:
    // 0x4a989c: 0x10000034  b           . + 4 + (0x34 << 2)
label_4a98a0:
    if (ctx->pc == 0x4A98A0u) {
        ctx->pc = 0x4A98A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A989Cu;
        // 0x4a98a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A98A4u;
        goto label_4a98a4;
    }
    ctx->pc = 0x4A989Cu;
    {
        const bool branch_taken_0x4a989c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A98A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A989Cu;
        // 0x4a98a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a989c) {
            ctx->pc = 0x4A9970u;
            goto label_4a9970;
        }
    }
    ctx->pc = 0x4A98A4u;
label_4a98a4:
    // 0x4a98a4: 0x0  nop
    ctx->pc = 0x4a98a4u;
    // NOP
label_4a98a8:
    // 0x4a98a8: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
label_4a98ac:
    if (ctx->pc == 0x4A98ACu) {
        ctx->pc = 0x4A98ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A98A8u;
        // 0x4a98ac: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A98B0u;
        goto label_4a98b0;
    }
    ctx->pc = 0x4A98A8u;
    {
        const bool branch_taken_0x4a98a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A98ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A98A8u;
        // 0x4a98ac: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a98a8) {
            ctx->pc = 0x4A9934u;
            goto label_4a9934;
        }
    }
    ctx->pc = 0x4A98B0u;
label_4a98b0:
    // 0x4a98b0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4a98b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4a98b4:
    // 0x4a98b4: 0x24170080  addiu       $s7, $zero, 0x80
    ctx->pc = 0x4a98b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_4a98b8:
    // 0x4a98b8: 0x245ead18  addiu       $fp, $v0, -0x52E8
    ctx->pc = 0x4a98b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_4a98bc:
    // 0x4a98bc: 0x0  nop
    ctx->pc = 0x4a98bcu;
    // NOP
label_4a98c0:
    // 0x4a98c0: 0x2e220081  sltiu       $v0, $s1, 0x81
    ctx->pc = 0x4a98c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_4a98c4:
    // 0x4a98c4: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x4a98c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4a98c8:
    // 0x4a98c8: 0x222800b  movn        $s0, $s1, $v0
    ctx->pc = 0x4a98c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
label_4a98cc:
    // 0x4a98cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a98ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a98d0:
    // 0x4a98d0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x4a98d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4a98d4:
    // 0x4a98d4: 0xc11fb56  jal         func_47ED58
label_4a98d8:
    if (ctx->pc == 0x4A98D8u) {
        ctx->pc = 0x4A98D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A98D4u;
        // 0x4a98d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A98DCu;
        goto label_4a98dc;
    }
    ctx->pc = 0x4A98D4u;
    SET_GPR_U32(ctx, 31, 0x4A98DCu);
    ctx->pc = 0x4A98D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A98D4u;
    // 0x4a98d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x4A98D4u, 0x4A98DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A98DCu;
label_4a98dc:
    // 0x4a98dc: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
label_4a98e0:
    if (ctx->pc == 0x4A98E0u) {
        ctx->pc = 0x4A98E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A98DCu;
        // 0x4a98e0: 0x23842  srl         $a3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A98E4u;
        goto label_4a98e4;
    }
    ctx->pc = 0x4A98DCu;
    {
        const bool branch_taken_0x4a98dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x4A98E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A98DCu;
        // 0x4a98e0: 0x23842  srl         $a3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a98dc) {
            ctx->pc = 0x4A9900u;
            goto label_4a9900;
        }
    }
    ctx->pc = 0x4A98E4u;
label_4a98e4:
    // 0x4a98e4: 0x12c00022  beqz        $s6, . + 4 + (0x22 << 2)
label_4a98e8:
    if (ctx->pc == 0x4A98E8u) {
        ctx->pc = 0x4A98E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A98E4u;
        // 0x4a98e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A98ECu;
        goto label_4a98ec;
    }
    ctx->pc = 0x4A98E4u;
    {
        const bool branch_taken_0x4a98e4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A98E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A98E4u;
        // 0x4a98e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a98e4) {
            ctx->pc = 0x4A9970u;
            goto label_4a9970;
        }
    }
    ctx->pc = 0x4A98ECu;
label_4a98ec:
    // 0x4a98ec: 0x8fc2010c  lw          $v0, 0x10C($fp)
    ctx->pc = 0x4a98ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 268)));
label_4a98f0:
    // 0x4a98f0: 0x40f809  jalr        $v0
label_4a98f4:
    if (ctx->pc == 0x4A98F4u) {
        ctx->pc = 0x4A98F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A98F0u;
        // 0x4a98f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A98F8u;
        goto label_4a98f8;
    }
    ctx->pc = 0x4A98F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A98F8u);
        ctx->pc = 0x4A98F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A98F0u;
        // 0x4a98f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A98F0u, 0x4A98F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A98F8u;
label_4a98f8:
    // 0x4a98f8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_4a98fc:
    if (ctx->pc == 0x4A98FCu) {
        ctx->pc = 0x4A98FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A98F8u;
        // 0x4a98fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9900u;
        goto label_4a9900;
    }
    ctx->pc = 0x4A98F8u;
    {
        const bool branch_taken_0x4a98f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A98FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A98F8u;
        // 0x4a98fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a98f8) {
            ctx->pc = 0x4A9970u;
            goto label_4a9970;
        }
    }
    ctx->pc = 0x4A9900u;
label_4a9900:
    // 0x4a9900: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x4a9900u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4a9904:
    // 0x4a9904: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
label_4a9908:
    if (ctx->pc == 0x4A9908u) {
        ctx->pc = 0x4A9908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9904u;
        // 0x4a9908: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A990Cu;
        goto label_4a990c;
    }
    ctx->pc = 0x4A9904u;
    {
        const bool branch_taken_0x4a9904 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9904u;
        // 0x4a9908: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9904) {
            ctx->pc = 0x4A992Cu;
            goto label_4a992c;
        }
    }
    ctx->pc = 0x4A990Cu;
label_4a990c:
    // 0x4a990c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4a990cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a9910:
    // 0x4a9910: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x4a9910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_4a9914:
    // 0x4a9914: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x4a9914u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_4a9918:
    // 0x4a9918: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4a9918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4a991c:
    // 0x4a991c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x4a991cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_4a9920:
    // 0x4a9920: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x4a9920u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_4a9924:
    // 0x4a9924: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_4a9928:
    if (ctx->pc == 0x4A9928u) {
        ctx->pc = 0x4A9928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9924u;
        // 0x4a9928: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A992Cu;
        goto label_4a992c;
    }
    ctx->pc = 0x4A9924u;
    {
        const bool branch_taken_0x4a9924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9924u;
        // 0x4a9928: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9924) {
            ctx->pc = 0x4A9910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9910;
        }
    }
    ctx->pc = 0x4A992Cu;
label_4a992c:
    // 0x4a992c: 0x1620ffe4  bnez        $s1, . + 4 + (-0x1C << 2)
label_4a9930:
    if (ctx->pc == 0x4A9930u) {
        ctx->pc = 0x4A9930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A992Cu;
        // 0x4a9930: 0x2479021  addu        $s2, $s2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9934u;
        goto label_4a9934;
    }
    ctx->pc = 0x4A992Cu;
    {
        const bool branch_taken_0x4a992c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A992Cu;
        // 0x4a9930: 0x2479021  addu        $s2, $s2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a992c) {
            ctx->pc = 0x4A98C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a98c0;
        }
    }
    ctx->pc = 0x4A9934u;
label_4a9934:
    // 0x4a9934: 0x1000000e  b           . + 4 + (0xE << 2)
label_4a9938:
    if (ctx->pc == 0x4A9938u) {
        ctx->pc = 0x4A9938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9934u;
        // 0x4a9938: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A993Cu;
        goto label_4a993c;
    }
    ctx->pc = 0x4A9934u;
    {
        const bool branch_taken_0x4a9934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9934u;
        // 0x4a9938: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9934) {
            ctx->pc = 0x4A9970u;
            goto label_4a9970;
        }
    }
    ctx->pc = 0x4A993Cu;
label_4a993c:
    // 0x4a993c: 0xc11fc30  jal         func_47F0C0
label_4a9940:
    if (ctx->pc == 0x4A9940u) {
        ctx->pc = 0x4A9940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A993Cu;
        // 0x4a9940: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9944u;
        goto label_4a9944;
    }
    ctx->pc = 0x4A993Cu;
    SET_GPR_U32(ctx, 31, 0x4A9944u);
    ctx->pc = 0x4A9940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A993Cu;
    // 0x4a9940: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F0C0u, 0x4A993Cu, 0x4A9944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9944u;
label_4a9944:
    // 0x4a9944: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_4a9948:
    if (ctx->pc == 0x4A9948u) {
        ctx->pc = 0x4A9948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9944u;
        // 0x4a9948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A994Cu;
        goto label_4a994c;
    }
    ctx->pc = 0x4A9944u;
    {
        const bool branch_taken_0x4a9944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9944u;
        // 0x4a9948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9944) {
            ctx->pc = 0x4A9970u;
            goto label_4a9970;
        }
    }
    ctx->pc = 0x4A994Cu;
label_4a994c:
    // 0x4a994c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a994cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a9950:
    // 0x4a9950: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4a9950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a9954:
    // 0x4a9954: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4a9954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a9958:
    // 0x4a9958: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x4a9958u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a995c:
    // 0x4a995c: 0xc11efa8  jal         func_47BEA0
label_4a9960:
    if (ctx->pc == 0x4A9960u) {
        ctx->pc = 0x4A9960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A995Cu;
        // 0x4a9960: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9964u;
        goto label_4a9964;
    }
    ctx->pc = 0x4A995Cu;
    SET_GPR_U32(ctx, 31, 0x4A9964u);
    ctx->pc = 0x4A9960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A995Cu;
    // 0x4a9960: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BEA0u, 0x4A995Cu, 0x4A9964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9964u;
label_4a9964:
    // 0x4a9964: 0x1440ff6c  bnez        $v0, . + 4 + (-0x94 << 2)
label_4a9968:
    if (ctx->pc == 0x4A9968u) {
        ctx->pc = 0x4A9968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9964u;
        // 0x4a9968: 0x8fa300f8  lw          $v1, 0xF8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A996Cu;
        goto label_4a996c;
    }
    ctx->pc = 0x4A9964u;
    {
        const bool branch_taken_0x4a9964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9964u;
        // 0x4a9968: 0x8fa300f8  lw          $v1, 0xF8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9964) {
            ctx->pc = 0x4A9718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9718;
        }
    }
    ctx->pc = 0x4A996Cu;
label_4a996c:
    // 0x4a996c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a996cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a9970:
    // 0x4a9970: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x4a9970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_4a9974:
    // 0x4a9974: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x4a9974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_4a9978:
    // 0x4a9978: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x4a9978u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_4a997c:
    // 0x4a997c: 0x7bb30160  lq          $s3, 0x160($sp)
    ctx->pc = 0x4a997cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_4a9980:
    // 0x4a9980: 0x7bb40150  lq          $s4, 0x150($sp)
    ctx->pc = 0x4a9980u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_4a9984:
    // 0x4a9984: 0x7bb50140  lq          $s5, 0x140($sp)
    ctx->pc = 0x4a9984u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_4a9988:
    // 0x4a9988: 0x7bb60130  lq          $s6, 0x130($sp)
    ctx->pc = 0x4a9988u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_4a998c:
    // 0x4a998c: 0x7bb70120  lq          $s7, 0x120($sp)
    ctx->pc = 0x4a998cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_4a9990:
    // 0x4a9990: 0x7bbe0110  lq          $fp, 0x110($sp)
    ctx->pc = 0x4a9990u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_4a9994:
    // 0x4a9994: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x4a9994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_4a9998:
    // 0x4a9998: 0x3e00008  jr          $ra
label_4a999c:
    if (ctx->pc == 0x4A999Cu) {
        ctx->pc = 0x4A999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9998u;
        // 0x4a999c: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A99A0u;
        goto label_fallthrough_0x4a9998;
    }
    ctx->pc = 0x4A9998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9998u;
        // 0x4a999c: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4a9998:
    ctx->pc = 0x4A99A0u;
}
