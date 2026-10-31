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

// Function: sub_004077B8
// Address: 0x4077b8 - 0x407ae0
void sub_004077B8_0x4077b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004077B8_0x4077b8");
#endif

    switch (ctx->pc) {
        case 0x4077b8u: goto label_4077b8;
        case 0x4077bcu: goto label_4077bc;
        case 0x4077c0u: goto label_4077c0;
        case 0x4077c4u: goto label_4077c4;
        case 0x4077c8u: goto label_4077c8;
        case 0x4077ccu: goto label_4077cc;
        case 0x4077d0u: goto label_4077d0;
        case 0x4077d4u: goto label_4077d4;
        case 0x4077d8u: goto label_4077d8;
        case 0x4077dcu: goto label_4077dc;
        case 0x4077e0u: goto label_4077e0;
        case 0x4077e4u: goto label_4077e4;
        case 0x4077e8u: goto label_4077e8;
        case 0x4077ecu: goto label_4077ec;
        case 0x4077f0u: goto label_4077f0;
        case 0x4077f4u: goto label_4077f4;
        case 0x4077f8u: goto label_4077f8;
        case 0x4077fcu: goto label_4077fc;
        case 0x407800u: goto label_407800;
        case 0x407804u: goto label_407804;
        case 0x407808u: goto label_407808;
        case 0x40780cu: goto label_40780c;
        case 0x407810u: goto label_407810;
        case 0x407814u: goto label_407814;
        case 0x407818u: goto label_407818;
        case 0x40781cu: goto label_40781c;
        case 0x407820u: goto label_407820;
        case 0x407824u: goto label_407824;
        case 0x407828u: goto label_407828;
        case 0x40782cu: goto label_40782c;
        case 0x407830u: goto label_407830;
        case 0x407834u: goto label_407834;
        case 0x407838u: goto label_407838;
        case 0x40783cu: goto label_40783c;
        case 0x407840u: goto label_407840;
        case 0x407844u: goto label_407844;
        case 0x407848u: goto label_407848;
        case 0x40784cu: goto label_40784c;
        case 0x407850u: goto label_407850;
        case 0x407854u: goto label_407854;
        case 0x407858u: goto label_407858;
        case 0x40785cu: goto label_40785c;
        case 0x407860u: goto label_407860;
        case 0x407864u: goto label_407864;
        case 0x407868u: goto label_407868;
        case 0x40786cu: goto label_40786c;
        case 0x407870u: goto label_407870;
        case 0x407874u: goto label_407874;
        case 0x407878u: goto label_407878;
        case 0x40787cu: goto label_40787c;
        case 0x407880u: goto label_407880;
        case 0x407884u: goto label_407884;
        case 0x407888u: goto label_407888;
        case 0x40788cu: goto label_40788c;
        case 0x407890u: goto label_407890;
        case 0x407894u: goto label_407894;
        case 0x407898u: goto label_407898;
        case 0x40789cu: goto label_40789c;
        case 0x4078a0u: goto label_4078a0;
        case 0x4078a4u: goto label_4078a4;
        case 0x4078a8u: goto label_4078a8;
        case 0x4078acu: goto label_4078ac;
        case 0x4078b0u: goto label_4078b0;
        case 0x4078b4u: goto label_4078b4;
        case 0x4078b8u: goto label_4078b8;
        case 0x4078bcu: goto label_4078bc;
        case 0x4078c0u: goto label_4078c0;
        case 0x4078c4u: goto label_4078c4;
        case 0x4078c8u: goto label_4078c8;
        case 0x4078ccu: goto label_4078cc;
        case 0x4078d0u: goto label_4078d0;
        case 0x4078d4u: goto label_4078d4;
        case 0x4078d8u: goto label_4078d8;
        case 0x4078dcu: goto label_4078dc;
        case 0x4078e0u: goto label_4078e0;
        case 0x4078e4u: goto label_4078e4;
        case 0x4078e8u: goto label_4078e8;
        case 0x4078ecu: goto label_4078ec;
        case 0x4078f0u: goto label_4078f0;
        case 0x4078f4u: goto label_4078f4;
        case 0x4078f8u: goto label_4078f8;
        case 0x4078fcu: goto label_4078fc;
        case 0x407900u: goto label_407900;
        case 0x407904u: goto label_407904;
        case 0x407908u: goto label_407908;
        case 0x40790cu: goto label_40790c;
        case 0x407910u: goto label_407910;
        case 0x407914u: goto label_407914;
        case 0x407918u: goto label_407918;
        case 0x40791cu: goto label_40791c;
        case 0x407920u: goto label_407920;
        case 0x407924u: goto label_407924;
        case 0x407928u: goto label_407928;
        case 0x40792cu: goto label_40792c;
        case 0x407930u: goto label_407930;
        case 0x407934u: goto label_407934;
        case 0x407938u: goto label_407938;
        case 0x40793cu: goto label_40793c;
        case 0x407940u: goto label_407940;
        case 0x407944u: goto label_407944;
        case 0x407948u: goto label_407948;
        case 0x40794cu: goto label_40794c;
        case 0x407950u: goto label_407950;
        case 0x407954u: goto label_407954;
        case 0x407958u: goto label_407958;
        case 0x40795cu: goto label_40795c;
        case 0x407960u: goto label_407960;
        case 0x407964u: goto label_407964;
        case 0x407968u: goto label_407968;
        case 0x40796cu: goto label_40796c;
        case 0x407970u: goto label_407970;
        case 0x407974u: goto label_407974;
        case 0x407978u: goto label_407978;
        case 0x40797cu: goto label_40797c;
        case 0x407980u: goto label_407980;
        case 0x407984u: goto label_407984;
        case 0x407988u: goto label_407988;
        case 0x40798cu: goto label_40798c;
        case 0x407990u: goto label_407990;
        case 0x407994u: goto label_407994;
        case 0x407998u: goto label_407998;
        case 0x40799cu: goto label_40799c;
        case 0x4079a0u: goto label_4079a0;
        case 0x4079a4u: goto label_4079a4;
        case 0x4079a8u: goto label_4079a8;
        case 0x4079acu: goto label_4079ac;
        case 0x4079b0u: goto label_4079b0;
        case 0x4079b4u: goto label_4079b4;
        case 0x4079b8u: goto label_4079b8;
        case 0x4079bcu: goto label_4079bc;
        case 0x4079c0u: goto label_4079c0;
        case 0x4079c4u: goto label_4079c4;
        case 0x4079c8u: goto label_4079c8;
        case 0x4079ccu: goto label_4079cc;
        case 0x4079d0u: goto label_4079d0;
        case 0x4079d4u: goto label_4079d4;
        case 0x4079d8u: goto label_4079d8;
        case 0x4079dcu: goto label_4079dc;
        case 0x4079e0u: goto label_4079e0;
        case 0x4079e4u: goto label_4079e4;
        case 0x4079e8u: goto label_4079e8;
        case 0x4079ecu: goto label_4079ec;
        case 0x4079f0u: goto label_4079f0;
        case 0x4079f4u: goto label_4079f4;
        case 0x4079f8u: goto label_4079f8;
        case 0x4079fcu: goto label_4079fc;
        case 0x407a00u: goto label_407a00;
        case 0x407a04u: goto label_407a04;
        case 0x407a08u: goto label_407a08;
        case 0x407a0cu: goto label_407a0c;
        case 0x407a10u: goto label_407a10;
        case 0x407a14u: goto label_407a14;
        case 0x407a18u: goto label_407a18;
        case 0x407a1cu: goto label_407a1c;
        case 0x407a20u: goto label_407a20;
        case 0x407a24u: goto label_407a24;
        case 0x407a28u: goto label_407a28;
        case 0x407a2cu: goto label_407a2c;
        case 0x407a30u: goto label_407a30;
        case 0x407a34u: goto label_407a34;
        case 0x407a38u: goto label_407a38;
        case 0x407a3cu: goto label_407a3c;
        case 0x407a40u: goto label_407a40;
        case 0x407a44u: goto label_407a44;
        case 0x407a48u: goto label_407a48;
        case 0x407a4cu: goto label_407a4c;
        case 0x407a50u: goto label_407a50;
        case 0x407a54u: goto label_407a54;
        case 0x407a58u: goto label_407a58;
        case 0x407a5cu: goto label_407a5c;
        case 0x407a60u: goto label_407a60;
        case 0x407a64u: goto label_407a64;
        case 0x407a68u: goto label_407a68;
        case 0x407a6cu: goto label_407a6c;
        case 0x407a70u: goto label_407a70;
        case 0x407a74u: goto label_407a74;
        case 0x407a78u: goto label_407a78;
        case 0x407a7cu: goto label_407a7c;
        case 0x407a80u: goto label_407a80;
        case 0x407a84u: goto label_407a84;
        case 0x407a88u: goto label_407a88;
        case 0x407a8cu: goto label_407a8c;
        case 0x407a90u: goto label_407a90;
        case 0x407a94u: goto label_407a94;
        case 0x407a98u: goto label_407a98;
        case 0x407a9cu: goto label_407a9c;
        case 0x407aa0u: goto label_407aa0;
        case 0x407aa4u: goto label_407aa4;
        case 0x407aa8u: goto label_407aa8;
        case 0x407aacu: goto label_407aac;
        case 0x407ab0u: goto label_407ab0;
        case 0x407ab4u: goto label_407ab4;
        case 0x407ab8u: goto label_407ab8;
        case 0x407abcu: goto label_407abc;
        case 0x407ac0u: goto label_407ac0;
        case 0x407ac4u: goto label_407ac4;
        case 0x407ac8u: goto label_407ac8;
        case 0x407accu: goto label_407acc;
        case 0x407ad0u: goto label_407ad0;
        case 0x407ad4u: goto label_407ad4;
        case 0x407ad8u: goto label_407ad8;
        case 0x407adcu: goto label_407adc;
        default: break;
    }

    ctx->pc = 0x4077b8u;

label_4077b8:
    // 0x4077b8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x4077b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_4077bc:
    // 0x4077bc: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x4077bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_4077c0:
    // 0x4077c0: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x4077c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_4077c4:
    // 0x4077c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4077c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4077c8:
    // 0x4077c8: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x4077c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_4077cc:
    // 0x4077cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4077ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4077d0:
    // 0x4077d0: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x4077d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_4077d4:
    // 0x4077d4: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x4077d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_4077d8:
    // 0x4077d8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x4077d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_4077dc:
    // 0x4077dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4077dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4077e0:
    // 0x4077e0: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x4077e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_4077e4:
    // 0x4077e4: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x4077e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_4077e8:
    // 0x4077e8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4077e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4077ec:
    // 0x4077ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4077ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4077f0:
    // 0x4077f0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x4077f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_4077f4:
    // 0x4077f4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x4077f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_4077f8:
    // 0x4077f8: 0x40f809  jalr        $v0
label_4077fc:
    if (ctx->pc == 0x4077FCu) {
        ctx->pc = 0x4077FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4077F8u;
        // 0x4077fc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407800u;
        goto label_407800;
    }
    ctx->pc = 0x4077F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x407800u);
        ctx->pc = 0x4077FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4077F8u;
        // 0x4077fc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4077F8u, 0x407800u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x407800u;
label_407800:
    // 0x407800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x407800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_407804:
    // 0x407804: 0xc0ea146  jal         func_3A8518
label_407808:
    if (ctx->pc == 0x407808u) {
        ctx->pc = 0x407808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407804u;
        // 0x407808: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40780Cu;
        goto label_40780c;
    }
    ctx->pc = 0x407804u;
    SET_GPR_U32(ctx, 31, 0x40780Cu);
    ctx->pc = 0x407808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407804u;
    // 0x407808: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x407804u, 0x40780Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40780Cu;
label_40780c:
    // 0x40780c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40780cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_407810:
    // 0x407810: 0xc0ea146  jal         func_3A8518
label_407814:
    if (ctx->pc == 0x407814u) {
        ctx->pc = 0x407814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407810u;
        // 0x407814: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407818u;
        goto label_407818;
    }
    ctx->pc = 0x407810u;
    SET_GPR_U32(ctx, 31, 0x407818u);
    ctx->pc = 0x407814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407810u;
    // 0x407814: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x407810u, 0x407818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407818u;
label_407818:
    // 0x407818: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x407818u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40781c:
    // 0x40781c: 0xc0ea13a  jal         func_3A84E8
label_407820:
    if (ctx->pc == 0x407820u) {
        ctx->pc = 0x407820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40781Cu;
        // 0x407820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407824u;
        goto label_407824;
    }
    ctx->pc = 0x40781Cu;
    SET_GPR_U32(ctx, 31, 0x407824u);
    ctx->pc = 0x407820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40781Cu;
    // 0x407820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x40781Cu, 0x407824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407824u;
label_407824:
    // 0x407824: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x407824u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_407828:
    // 0x407828: 0xc0ea146  jal         func_3A8518
label_40782c:
    if (ctx->pc == 0x40782Cu) {
        ctx->pc = 0x40782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407828u;
        // 0x40782c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407830u;
        goto label_407830;
    }
    ctx->pc = 0x407828u;
    SET_GPR_U32(ctx, 31, 0x407830u);
    ctx->pc = 0x40782Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407828u;
    // 0x40782c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x407828u, 0x407830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407830u;
label_407830:
    // 0x407830: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x407830u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_407834:
    // 0x407834: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x407834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_407838:
    // 0x407838: 0xc0ea12a  jal         func_3A84A8
label_40783c:
    if (ctx->pc == 0x40783Cu) {
        ctx->pc = 0x40783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407838u;
        // 0x40783c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407840u;
        goto label_407840;
    }
    ctx->pc = 0x407838u;
    SET_GPR_U32(ctx, 31, 0x407840u);
    ctx->pc = 0x40783Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407838u;
    // 0x40783c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x407838u, 0x407840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407840u;
label_407840:
    // 0x407840: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x407840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_407844:
    // 0x407844: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x407844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_407848:
    // 0x407848: 0xc0ea12a  jal         func_3A84A8
label_40784c:
    if (ctx->pc == 0x40784Cu) {
        ctx->pc = 0x40784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407848u;
        // 0x40784c: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407850u;
        goto label_407850;
    }
    ctx->pc = 0x407848u;
    SET_GPR_U32(ctx, 31, 0x407850u);
    ctx->pc = 0x40784Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407848u;
    // 0x40784c: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x407848u, 0x407850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407850u;
label_407850:
    // 0x407850: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x407850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_407854:
    // 0x407854: 0xc0ea12a  jal         func_3A84A8
label_407858:
    if (ctx->pc == 0x407858u) {
        ctx->pc = 0x407858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407854u;
        // 0x407858: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40785Cu;
        goto label_40785c;
    }
    ctx->pc = 0x407854u;
    SET_GPR_U32(ctx, 31, 0x40785Cu);
    ctx->pc = 0x407858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407854u;
    // 0x407858: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x407854u, 0x40785Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40785Cu;
label_40785c:
    // 0x40785c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x40785cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_407860:
    // 0x407860: 0x3c021440  lui         $v0, 0x1440
    ctx->pc = 0x407860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5184 << 16));
label_407864:
    // 0x407864: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x407864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_407868:
    // 0x407868: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x407868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_40786c:
    // 0x40786c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x40786cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_407870:
    // 0x407870: 0xc1073cc  jal         func_41CF30
label_407874:
    if (ctx->pc == 0x407874u) {
        ctx->pc = 0x407874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407870u;
        // 0x407874: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407878u;
        goto label_407878;
    }
    ctx->pc = 0x407870u;
    SET_GPR_U32(ctx, 31, 0x407878u);
    ctx->pc = 0x407874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407870u;
    // 0x407874: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x407870u, 0x407878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407878u;
label_407878:
    // 0x407878: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x407878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40787c:
    // 0x40787c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x40787cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_407880:
    // 0x407880: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_407884:
    if (ctx->pc == 0x407884u) {
        ctx->pc = 0x407888u;
        goto label_407888;
    }
    ctx->pc = 0x407880u;
    {
        const bool branch_taken_0x407880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x407880) {
            ctx->pc = 0x40789Cu;
            goto label_40789c;
        }
    }
    ctx->pc = 0x407888u;
label_407888:
    // 0x407888: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x407888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_40788c:
    // 0x40788c: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x40788cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
label_407890:
    // 0x407890: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x407890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_407894:
    // 0x407894: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x407894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_407898:
    // 0x407898: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x407898u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_40789c:
    // 0x40789c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40789cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4078a0:
    // 0x4078a0: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x4078a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_4078a4:
    // 0x4078a4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x4078a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4078a8:
    // 0x4078a8: 0x0  nop
    ctx->pc = 0x4078a8u;
    // NOP
label_4078ac:
    // 0x4078ac: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_4078b0:
    if (ctx->pc == 0x4078B0u) {
        ctx->pc = 0x4078B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4078ACu;
        // 0x4078b0: 0x2980b  movn        $s3, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4078B4u;
        goto label_4078b4;
    }
    ctx->pc = 0x4078ACu;
    {
        const bool branch_taken_0x4078ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4078B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4078ACu;
        // 0x4078b0: 0x2980b  movn        $s3, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4078ac) {
            ctx->pc = 0x4078C0u;
            goto label_4078c0;
        }
    }
    ctx->pc = 0x4078B4u;
label_4078b4:
    // 0x4078b4: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x4078b4u;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
label_4078b8:
    // 0x4078b8: 0x10000002  b           . + 4 + (0x2 << 2)
label_4078bc:
    if (ctx->pc == 0x4078BCu) {
        ctx->pc = 0x4078BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4078B8u;
        // 0x4078bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4078C0u;
        goto label_4078c0;
    }
    ctx->pc = 0x4078B8u;
    {
        const bool branch_taken_0x4078b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4078BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4078B8u;
        // 0x4078bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4078b8) {
            ctx->pc = 0x4078C4u;
            goto label_4078c4;
        }
    }
    ctx->pc = 0x4078C0u;
label_4078c0:
    // 0x4078c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4078c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4078c4:
    // 0x4078c4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4078c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4078c8:
    // 0x4078c8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4078c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4078cc:
    // 0x4078cc: 0xc0cd4ee  jal         func_3353B8
label_4078d0:
    if (ctx->pc == 0x4078D0u) {
        ctx->pc = 0x4078D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4078CCu;
        // 0x4078d0: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4078D4u;
        goto label_4078d4;
    }
    ctx->pc = 0x4078CCu;
    SET_GPR_U32(ctx, 31, 0x4078D4u);
    ctx->pc = 0x4078D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4078CCu;
    // 0x4078d0: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x4078CCu, 0x4078D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4078D4u;
label_4078d4:
    // 0x4078d4: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x4078d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_4078d8:
    // 0x4078d8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x4078d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_4078dc:
    // 0x4078dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4078dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4078e0:
    // 0x4078e0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x4078e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_4078e4:
    // 0x4078e4: 0x3463003c  ori         $v1, $v1, 0x3C
    ctx->pc = 0x4078e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)60);
label_4078e8:
    // 0x4078e8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x4078e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4078ec:
    // 0x4078ec: 0x0  nop
    ctx->pc = 0x4078ecu;
    // NOP
label_4078f0:
    // 0x4078f0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_4078f4:
    if (ctx->pc == 0x4078F4u) {
        ctx->pc = 0x4078F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4078F0u;
        // 0x4078f4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4078F8u;
        goto label_4078f8;
    }
    ctx->pc = 0x4078F0u;
    {
        const bool branch_taken_0x4078f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4078F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4078F0u;
        // 0x4078f4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4078f0) {
            ctx->pc = 0x407908u;
            goto label_407908;
        }
    }
    ctx->pc = 0x4078F8u;
label_4078f8:
    // 0x4078f8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4078f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_4078fc:
    // 0x4078fc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x4078fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_407900:
    // 0x407900: 0x10000002  b           . + 4 + (0x2 << 2)
label_407904:
    if (ctx->pc == 0x407904u) {
        ctx->pc = 0x407904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407900u;
        // 0x407904: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407908u;
        goto label_407908;
    }
    ctx->pc = 0x407900u;
    {
        const bool branch_taken_0x407900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x407904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407900u;
        // 0x407904: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407900) {
            ctx->pc = 0x40790Cu;
            goto label_40790c;
        }
    }
    ctx->pc = 0x407908u;
label_407908:
    // 0x407908: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x407908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_40790c:
    // 0x40790c: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x40790cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_407910:
    // 0x407910: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x407910u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_407914:
    // 0x407914: 0x2690b8b8  addiu       $s0, $s4, -0x4748
    ctx->pc = 0x407914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949048));
label_407918:
    // 0x407918: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x407918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_40791c:
    // 0x40791c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x40791cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_407920:
    // 0x407920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x407920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_407924:
    // 0x407924: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x407924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_407928:
    // 0x407928: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x407928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_40792c:
    // 0x40792c: 0xc0cd508  jal         func_335420
label_407930:
    if (ctx->pc == 0x407930u) {
        ctx->pc = 0x407930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40792Cu;
        // 0x407930: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407934u;
        goto label_407934;
    }
    ctx->pc = 0x40792Cu;
    SET_GPR_U32(ctx, 31, 0x407934u);
    ctx->pc = 0x407930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40792Cu;
    // 0x407930: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x40792Cu, 0x407934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407934u;
label_407934:
    // 0x407934: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x407934u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_407938:
    // 0x407938: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x407938u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_40793c:
    // 0x40793c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x40793cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_407940:
    // 0x407940: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x407940u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_407944:
    // 0x407944: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x407944u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_407948:
    // 0x407948: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x407948u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_40794c:
    // 0x40794c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40794cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_407950:
    // 0x407950: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x407950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_407954:
    // 0x407954: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x407954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_407958:
    // 0x407958: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x407958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_40795c:
    // 0x40795c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x40795cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_407960:
    // 0x407960: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x407960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_407964:
    // 0x407964: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x407964u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_407968:
    // 0x407968: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x407968u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_40796c:
    // 0x40796c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x40796cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_407970:
    // 0x407970: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x407970u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_407974:
    // 0x407974: 0x0  nop
    ctx->pc = 0x407974u;
    // NOP
label_407978:
    // 0x407978: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_40797c:
    if (ctx->pc == 0x40797Cu) {
        ctx->pc = 0x407980u;
        goto label_407980;
    }
    ctx->pc = 0x407978u;
    {
        const bool branch_taken_0x407978 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x407978) {
            ctx->pc = 0x4079A4u;
            goto label_4079a4;
        }
    }
    ctx->pc = 0x407980u;
label_407980:
    // 0x407980: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x407980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_407984:
    // 0x407984: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x407984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_407988:
    // 0x407988: 0xc0cd518  jal         func_335460
label_40798c:
    if (ctx->pc == 0x40798Cu) {
        ctx->pc = 0x40798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407988u;
        // 0x40798c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407990u;
        goto label_407990;
    }
    ctx->pc = 0x407988u;
    SET_GPR_U32(ctx, 31, 0x407990u);
    ctx->pc = 0x40798Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407988u;
    // 0x40798c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x407988u, 0x407990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407990u;
label_407990:
    // 0x407990: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x407990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_407994:
    // 0x407994: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x407994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_407998:
    // 0x407998: 0x46020868  max.s       $f1, $f1, $f2
    ctx->pc = 0x407998u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[2]);
label_40799c:
    // 0x40799c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x40799cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4079a0:
    // 0x4079a0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x4079a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_4079a4:
    // 0x4079a4: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_4079a8:
    if (ctx->pc == 0x4079A8u) {
        ctx->pc = 0x4079A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4079A4u;
        // 0x4079a8: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4079ACu;
        goto label_4079ac;
    }
    ctx->pc = 0x4079A4u;
    {
        const bool branch_taken_0x4079a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4079A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4079A4u;
        // 0x4079a8: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4079a4) {
            ctx->pc = 0x4079C4u;
            goto label_4079c4;
        }
    }
    ctx->pc = 0x4079ACu;
label_4079ac:
    // 0x4079ac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4079acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4079b0:
    // 0x4079b0: 0x0  nop
    ctx->pc = 0x4079b0u;
    // NOP
label_4079b4:
    // 0x4079b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4079b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4079b8:
    // 0x4079b8: 0x0  nop
    ctx->pc = 0x4079b8u;
    // NOP
label_4079bc:
    // 0x4079bc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_4079c0:
    if (ctx->pc == 0x4079C0u) {
        ctx->pc = 0x4079C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4079BCu;
        // 0x4079c0: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4079C4u;
        goto label_4079c4;
    }
    ctx->pc = 0x4079BCu;
    {
        const bool branch_taken_0x4079bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4079bc) {
            ctx->pc = 0x4079C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4079BCu;
            // 0x4079c0: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4079C4u;
            goto label_4079c4;
        }
    }
    ctx->pc = 0x4079C4u;
label_4079c4:
    // 0x4079c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4079c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_4079c8:
    // 0x4079c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4079c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4079cc:
    // 0x4079cc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4079ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4079d0:
    // 0x4079d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4079d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4079d4:
    // 0x4079d4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x4079d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_4079d8:
    // 0x4079d8: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x4079d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_4079dc:
    // 0x4079dc: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x4079dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_4079e0:
    // 0x4079e0: 0x60f809  jalr        $v1
label_4079e4:
    if (ctx->pc == 0x4079E4u) {
        ctx->pc = 0x4079E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4079E0u;
        // 0x4079e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4079E8u;
        goto label_4079e8;
    }
    ctx->pc = 0x4079E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4079E8u);
        ctx->pc = 0x4079E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4079E0u;
        // 0x4079e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4079E0u, 0x4079E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4079E8u;
label_4079e8:
    // 0x4079e8: 0x2684b8b8  addiu       $a0, $s4, -0x4748
    ctx->pc = 0x4079e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949048));
label_4079ec:
    // 0x4079ec: 0xc0cd4ee  jal         func_3353B8
label_4079f0:
    if (ctx->pc == 0x4079F0u) {
        ctx->pc = 0x4079F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4079ECu;
        // 0x4079f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4079F4u;
        goto label_4079f4;
    }
    ctx->pc = 0x4079ECu;
    SET_GPR_U32(ctx, 31, 0x4079F4u);
    ctx->pc = 0x4079F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4079ECu;
    // 0x4079f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x4079ECu, 0x4079F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4079F4u;
label_4079f4:
    // 0x4079f4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_4079f8:
    if (ctx->pc == 0x4079F8u) {
        ctx->pc = 0x4079F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4079F4u;
        // 0x4079f8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4079FCu;
        goto label_4079fc;
    }
    ctx->pc = 0x4079F4u;
    {
        const bool branch_taken_0x4079f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4079F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4079F4u;
        // 0x4079f8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4079f4) {
            ctx->pc = 0x407A1Cu;
            goto label_407a1c;
        }
    }
    ctx->pc = 0x4079FCu;
label_4079fc:
    // 0x4079fc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4079fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_407a00:
    // 0x407a00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x407a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_407a04:
    // 0x407a04: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x407a04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_407a08:
    // 0x407a08: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x407a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_407a0c:
    // 0x407a0c: 0x60f809  jalr        $v1
label_407a10:
    if (ctx->pc == 0x407A10u) {
        ctx->pc = 0x407A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407A0Cu;
        // 0x407a10: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407A14u;
        goto label_407a14;
    }
    ctx->pc = 0x407A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x407A14u);
        ctx->pc = 0x407A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407A0Cu;
        // 0x407a10: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x407A0Cu, 0x407A14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x407A14u;
label_407a14:
    // 0x407a14: 0x10000011  b           . + 4 + (0x11 << 2)
label_407a18:
    if (ctx->pc == 0x407A18u) {
        ctx->pc = 0x407A1Cu;
        goto label_407a1c;
    }
    ctx->pc = 0x407A14u;
    {
        const bool branch_taken_0x407a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x407a14) {
            ctx->pc = 0x407A5Cu;
            goto label_407a5c;
        }
    }
    ctx->pc = 0x407A1Cu;
label_407a1c:
    // 0x407a1c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x407a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_407a20:
    // 0x407a20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x407a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_407a24:
    // 0x407a24: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x407a24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_407a28:
    // 0x407a28: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x407a28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_407a2c:
    // 0x407a2c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x407a2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_407a30:
    // 0x407a30: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x407a30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_407a34:
    // 0x407a34: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x407a34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_407a38:
    // 0x407a38: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x407a38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_407a3c:
    // 0x407a3c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x407a3cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_407a40:
    // 0x407a40: 0x84c40078  lh          $a0, 0x78($a2)
    ctx->pc = 0x407a40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 120)));
label_407a44:
    // 0x407a44: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x407a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_407a48:
    // 0x407a48: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x407a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_407a4c:
    // 0x407a4c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x407a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_407a50:
    // 0x407a50: 0x8cc3007c  lw          $v1, 0x7C($a2)
    ctx->pc = 0x407a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
label_407a54:
    // 0x407a54: 0x60f809  jalr        $v1
label_407a58:
    if (ctx->pc == 0x407A58u) {
        ctx->pc = 0x407A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407A54u;
        // 0x407a58: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407A5Cu;
        goto label_407a5c;
    }
    ctx->pc = 0x407A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x407A5Cu);
        ctx->pc = 0x407A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407A54u;
        // 0x407a58: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x407A54u, 0x407A5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x407A5Cu;
label_407a5c:
    // 0x407a5c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x407a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_407a60:
    // 0x407a60: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x407a60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_407a64:
    // 0x407a64: 0x2684b8b8  addiu       $a0, $s4, -0x4748
    ctx->pc = 0x407a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949048));
label_407a68:
    // 0x407a68: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x407a68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
label_407a6c:
    // 0x407a6c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x407a6cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_407a70:
    // 0x407a70: 0xc0cd508  jal         func_335420
label_407a74:
    if (ctx->pc == 0x407A74u) {
        ctx->pc = 0x407A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407A70u;
        // 0x407a74: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x407A78u;
        goto label_407a78;
    }
    ctx->pc = 0x407A70u;
    SET_GPR_U32(ctx, 31, 0x407A78u);
    ctx->pc = 0x407A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407A70u;
    // 0x407a74: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x407A70u, 0x407A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407A78u;
label_407a78:
    // 0x407a78: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x407a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_407a7c:
    // 0x407a7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x407a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_407a80:
    // 0x407a80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x407a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_407a84:
    // 0x407a84: 0xae3500b4  sw          $s5, 0xB4($s1)
    ctx->pc = 0x407a84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 21));
label_407a88:
    // 0x407a88: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x407a88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_407a8c:
    // 0x407a8c: 0xae3500b0  sw          $s5, 0xB0($s1)
    ctx->pc = 0x407a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 21));
label_407a90:
    // 0x407a90: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x407a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_407a94:
    // 0x407a94: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x407a94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_407a98:
    // 0x407a98: 0xe62000c0  swc1        $f0, 0xC0($s1)
    ctx->pc = 0x407a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_407a9c:
    // 0x407a9c: 0xae530024  sw          $s3, 0x24($s2)
    ctx->pc = 0x407a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 19));
label_407aa0:
    // 0x407aa0: 0xae56001c  sw          $s6, 0x1C($s2)
    ctx->pc = 0x407aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 22));
label_407aa4:
    // 0x407aa4: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x407aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_407aa8:
    // 0x407aa8: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x407aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_407aac:
    // 0x407aac: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x407aacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_407ab0:
    // 0x407ab0: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x407ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_407ab4:
    // 0x407ab4: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x407ab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_407ab8:
    // 0x407ab8: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x407ab8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_407abc:
    // 0x407abc: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x407abcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_407ac0:
    // 0x407ac0: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x407ac0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_407ac4:
    // 0x407ac4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x407ac4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_407ac8:
    // 0x407ac8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x407ac8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_407acc:
    // 0x407acc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x407accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_407ad0:
    // 0x407ad0: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x407ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_407ad4:
    // 0x407ad4: 0x3e00008  jr          $ra
label_407ad8:
    if (ctx->pc == 0x407AD8u) {
        ctx->pc = 0x407AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407AD4u;
        // 0x407ad8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407ADCu;
        goto label_407adc;
    }
    ctx->pc = 0x407AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x407AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407AD4u;
        // 0x407ad8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x407AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x407ADCu;
label_407adc:
    // 0x407adc: 0x0  nop
    ctx->pc = 0x407adcu;
    // NOP
    ctx->pc = 0x407ae0u;
}
