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

// Function: sub_001596D0
// Address: 0x1596d0 - 0x1599a8
void sub_001596D0_0x1596d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001596D0_0x1596d0");
#endif

    switch (ctx->pc) {
        case 0x1596d0u: goto label_1596d0;
        case 0x1596d4u: goto label_1596d4;
        case 0x1596d8u: goto label_1596d8;
        case 0x1596dcu: goto label_1596dc;
        case 0x1596e0u: goto label_1596e0;
        case 0x1596e4u: goto label_1596e4;
        case 0x1596e8u: goto label_1596e8;
        case 0x1596ecu: goto label_1596ec;
        case 0x1596f0u: goto label_1596f0;
        case 0x1596f4u: goto label_1596f4;
        case 0x1596f8u: goto label_1596f8;
        case 0x1596fcu: goto label_1596fc;
        case 0x159700u: goto label_159700;
        case 0x159704u: goto label_159704;
        case 0x159708u: goto label_159708;
        case 0x15970cu: goto label_15970c;
        case 0x159710u: goto label_159710;
        case 0x159714u: goto label_159714;
        case 0x159718u: goto label_159718;
        case 0x15971cu: goto label_15971c;
        case 0x159720u: goto label_159720;
        case 0x159724u: goto label_159724;
        case 0x159728u: goto label_159728;
        case 0x15972cu: goto label_15972c;
        case 0x159730u: goto label_159730;
        case 0x159734u: goto label_159734;
        case 0x159738u: goto label_159738;
        case 0x15973cu: goto label_15973c;
        case 0x159740u: goto label_159740;
        case 0x159744u: goto label_159744;
        case 0x159748u: goto label_159748;
        case 0x15974cu: goto label_15974c;
        case 0x159750u: goto label_159750;
        case 0x159754u: goto label_159754;
        case 0x159758u: goto label_159758;
        case 0x15975cu: goto label_15975c;
        case 0x159760u: goto label_159760;
        case 0x159764u: goto label_159764;
        case 0x159768u: goto label_159768;
        case 0x15976cu: goto label_15976c;
        case 0x159770u: goto label_159770;
        case 0x159774u: goto label_159774;
        case 0x159778u: goto label_159778;
        case 0x15977cu: goto label_15977c;
        case 0x159780u: goto label_159780;
        case 0x159784u: goto label_159784;
        case 0x159788u: goto label_159788;
        case 0x15978cu: goto label_15978c;
        case 0x159790u: goto label_159790;
        case 0x159794u: goto label_159794;
        case 0x159798u: goto label_159798;
        case 0x15979cu: goto label_15979c;
        case 0x1597a0u: goto label_1597a0;
        case 0x1597a4u: goto label_1597a4;
        case 0x1597a8u: goto label_1597a8;
        case 0x1597acu: goto label_1597ac;
        case 0x1597b0u: goto label_1597b0;
        case 0x1597b4u: goto label_1597b4;
        case 0x1597b8u: goto label_1597b8;
        case 0x1597bcu: goto label_1597bc;
        case 0x1597c0u: goto label_1597c0;
        case 0x1597c4u: goto label_1597c4;
        case 0x1597c8u: goto label_1597c8;
        case 0x1597ccu: goto label_1597cc;
        case 0x1597d0u: goto label_1597d0;
        case 0x1597d4u: goto label_1597d4;
        case 0x1597d8u: goto label_1597d8;
        case 0x1597dcu: goto label_1597dc;
        case 0x1597e0u: goto label_1597e0;
        case 0x1597e4u: goto label_1597e4;
        case 0x1597e8u: goto label_1597e8;
        case 0x1597ecu: goto label_1597ec;
        case 0x1597f0u: goto label_1597f0;
        case 0x1597f4u: goto label_1597f4;
        case 0x1597f8u: goto label_1597f8;
        case 0x1597fcu: goto label_1597fc;
        case 0x159800u: goto label_159800;
        case 0x159804u: goto label_159804;
        case 0x159808u: goto label_159808;
        case 0x15980cu: goto label_15980c;
        case 0x159810u: goto label_159810;
        case 0x159814u: goto label_159814;
        case 0x159818u: goto label_159818;
        case 0x15981cu: goto label_15981c;
        case 0x159820u: goto label_159820;
        case 0x159824u: goto label_159824;
        case 0x159828u: goto label_159828;
        case 0x15982cu: goto label_15982c;
        case 0x159830u: goto label_159830;
        case 0x159834u: goto label_159834;
        case 0x159838u: goto label_159838;
        case 0x15983cu: goto label_15983c;
        case 0x159840u: goto label_159840;
        case 0x159844u: goto label_159844;
        case 0x159848u: goto label_159848;
        case 0x15984cu: goto label_15984c;
        case 0x159850u: goto label_159850;
        case 0x159854u: goto label_159854;
        case 0x159858u: goto label_159858;
        case 0x15985cu: goto label_15985c;
        case 0x159860u: goto label_159860;
        case 0x159864u: goto label_159864;
        case 0x159868u: goto label_159868;
        case 0x15986cu: goto label_15986c;
        case 0x159870u: goto label_159870;
        case 0x159874u: goto label_159874;
        case 0x159878u: goto label_159878;
        case 0x15987cu: goto label_15987c;
        case 0x159880u: goto label_159880;
        case 0x159884u: goto label_159884;
        case 0x159888u: goto label_159888;
        case 0x15988cu: goto label_15988c;
        case 0x159890u: goto label_159890;
        case 0x159894u: goto label_159894;
        case 0x159898u: goto label_159898;
        case 0x15989cu: goto label_15989c;
        case 0x1598a0u: goto label_1598a0;
        case 0x1598a4u: goto label_1598a4;
        case 0x1598a8u: goto label_1598a8;
        case 0x1598acu: goto label_1598ac;
        case 0x1598b0u: goto label_1598b0;
        case 0x1598b4u: goto label_1598b4;
        case 0x1598b8u: goto label_1598b8;
        case 0x1598bcu: goto label_1598bc;
        case 0x1598c0u: goto label_1598c0;
        case 0x1598c4u: goto label_1598c4;
        case 0x1598c8u: goto label_1598c8;
        case 0x1598ccu: goto label_1598cc;
        case 0x1598d0u: goto label_1598d0;
        case 0x1598d4u: goto label_1598d4;
        case 0x1598d8u: goto label_1598d8;
        case 0x1598dcu: goto label_1598dc;
        case 0x1598e0u: goto label_1598e0;
        case 0x1598e4u: goto label_1598e4;
        case 0x1598e8u: goto label_1598e8;
        case 0x1598ecu: goto label_1598ec;
        case 0x1598f0u: goto label_1598f0;
        case 0x1598f4u: goto label_1598f4;
        case 0x1598f8u: goto label_1598f8;
        case 0x1598fcu: goto label_1598fc;
        case 0x159900u: goto label_159900;
        case 0x159904u: goto label_159904;
        case 0x159908u: goto label_159908;
        case 0x15990cu: goto label_15990c;
        case 0x159910u: goto label_159910;
        case 0x159914u: goto label_159914;
        case 0x159918u: goto label_159918;
        case 0x15991cu: goto label_15991c;
        case 0x159920u: goto label_159920;
        case 0x159924u: goto label_159924;
        case 0x159928u: goto label_159928;
        case 0x15992cu: goto label_15992c;
        case 0x159930u: goto label_159930;
        case 0x159934u: goto label_159934;
        case 0x159938u: goto label_159938;
        case 0x15993cu: goto label_15993c;
        case 0x159940u: goto label_159940;
        case 0x159944u: goto label_159944;
        case 0x159948u: goto label_159948;
        case 0x15994cu: goto label_15994c;
        case 0x159950u: goto label_159950;
        case 0x159954u: goto label_159954;
        case 0x159958u: goto label_159958;
        case 0x15995cu: goto label_15995c;
        case 0x159960u: goto label_159960;
        case 0x159964u: goto label_159964;
        case 0x159968u: goto label_159968;
        case 0x15996cu: goto label_15996c;
        case 0x159970u: goto label_159970;
        case 0x159974u: goto label_159974;
        case 0x159978u: goto label_159978;
        case 0x15997cu: goto label_15997c;
        case 0x159980u: goto label_159980;
        case 0x159984u: goto label_159984;
        case 0x159988u: goto label_159988;
        case 0x15998cu: goto label_15998c;
        case 0x159990u: goto label_159990;
        case 0x159994u: goto label_159994;
        case 0x159998u: goto label_159998;
        case 0x15999cu: goto label_15999c;
        case 0x1599a0u: goto label_1599a0;
        case 0x1599a4u: goto label_1599a4;
        default: break;
    }

    ctx->pc = 0x1596d0u;

label_1596d0:
    // 0x1596d0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1596d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_1596d4:
    // 0x1596d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1596d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1596d8:
    // 0x1596d8: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1596d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_1596dc:
    // 0x1596dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1596dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1596e0:
    // 0x1596e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1596e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1596e4:
    // 0x1596e4: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1596e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_1596e8:
    // 0x1596e8: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x1596e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_1596ec:
    // 0x1596ec: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1596ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1596f0:
    // 0x1596f0: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1596f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_1596f4:
    // 0x1596f4: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1596f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_1596f8:
    // 0x1596f8: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1596f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1596fc:
    // 0x1596fc: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x1596fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_159700:
    // 0x159700: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x159700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_159704:
    // 0x159704: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x159704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_159708:
    // 0x159708: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x159708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_15970c:
    // 0x15970c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15970cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_159710:
    // 0x159710: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x159710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_159714:
    // 0x159714: 0xc0517d8  jal         func_145F60
label_159718:
    if (ctx->pc == 0x159718u) {
        ctx->pc = 0x159718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159714u;
        // 0x159718: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15971Cu;
        goto label_15971c;
    }
    ctx->pc = 0x159714u;
    SET_GPR_U32(ctx, 31, 0x15971Cu);
    ctx->pc = 0x159718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159714u;
    // 0x159718: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145F60u, 0x159714u, 0x15971Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15971Cu;
label_15971c:
    // 0x15971c: 0xc05587e  jal         func_1561F8
label_159720:
    if (ctx->pc == 0x159720u) {
        ctx->pc = 0x159720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15971Cu;
        // 0x159720: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159724u;
        goto label_159724;
    }
    ctx->pc = 0x15971Cu;
    SET_GPR_U32(ctx, 31, 0x159724u);
    ctx->pc = 0x159720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15971Cu;
    // 0x159720: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1561F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1561F8u, 0x15971Cu, 0x159724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159724u;
label_159724:
    // 0x159724: 0xc055888  jal         func_156220
label_159728:
    if (ctx->pc == 0x159728u) {
        ctx->pc = 0x159728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159724u;
        // 0x159728: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15972Cu;
        goto label_15972c;
    }
    ctx->pc = 0x159724u;
    SET_GPR_U32(ctx, 31, 0x15972Cu);
    ctx->pc = 0x159728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159724u;
    // 0x159728: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156220u, 0x159724u, 0x15972Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15972Cu;
label_15972c:
    // 0x15972c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x15972cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_159730:
    // 0x159730: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x159730u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_159734:
    // 0x159734: 0xc0e8c52  jal         func_3A3148
label_159738:
    if (ctx->pc == 0x159738u) {
        ctx->pc = 0x159738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159734u;
        // 0x159738: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15973Cu;
        goto label_15973c;
    }
    ctx->pc = 0x159734u;
    SET_GPR_U32(ctx, 31, 0x15973Cu);
    ctx->pc = 0x159738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159734u;
    // 0x159738: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3148u, 0x159734u, 0x15973Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15973Cu;
label_15973c:
    // 0x15973c: 0xc0558b2  jal         func_1562C8
label_159740:
    if (ctx->pc == 0x159740u) {
        ctx->pc = 0x159740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15973Cu;
        // 0x159740: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159744u;
        goto label_159744;
    }
    ctx->pc = 0x15973Cu;
    SET_GPR_U32(ctx, 31, 0x159744u);
    ctx->pc = 0x159740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15973Cu;
    // 0x159740: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1562C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1562C8u, 0x15973Cu, 0x159744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159744u;
label_159744:
    // 0x159744: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x159744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_159748:
    // 0x159748: 0x8c43536c  lw          $v1, 0x536C($v0)
    ctx->pc = 0x159748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21356)));
label_15974c:
    // 0x15974c: 0x14730009  bne         $v1, $s3, . + 4 + (0x9 << 2)
label_159750:
    if (ctx->pc == 0x159750u) {
        ctx->pc = 0x159750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15974Cu;
        // 0x159750: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159754u;
        goto label_159754;
    }
    ctx->pc = 0x15974Cu;
    {
        const bool branch_taken_0x15974c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x159750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15974Cu;
        // 0x159750: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15974c) {
            ctx->pc = 0x159774u;
            goto label_159774;
        }
    }
    ctx->pc = 0x159754u;
label_159754:
    // 0x159754: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x159754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_159758:
    // 0x159758: 0xc0e8c6a  jal         func_3A31A8
label_15975c:
    if (ctx->pc == 0x15975Cu) {
        ctx->pc = 0x15975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159758u;
        // 0x15975c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159760u;
        goto label_159760;
    }
    ctx->pc = 0x159758u;
    SET_GPR_U32(ctx, 31, 0x159760u);
    ctx->pc = 0x15975Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159758u;
    // 0x15975c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A31A8u, 0x159758u, 0x159760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159760u;
label_159760:
    // 0x159760: 0x8e2347c4  lw          $v1, 0x47C4($s1)
    ctx->pc = 0x159760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18372)));
label_159764:
    // 0x159764: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x159764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_159768:
    // 0x159768: 0xc0d4456  jal         func_351158
label_15976c:
    if (ctx->pc == 0x15976Cu) {
        ctx->pc = 0x15976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159768u;
        // 0x15976c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159770u;
        goto label_159770;
    }
    ctx->pc = 0x159768u;
    SET_GPR_U32(ctx, 31, 0x159770u);
    ctx->pc = 0x15976Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159768u;
    // 0x15976c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351158u, 0x159768u, 0x159770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159770u;
label_159770:
    // 0x159770: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x159770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_159774:
    // 0x159774: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x159774u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_159778:
    // 0x159778: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x159778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
label_15977c:
    // 0x15977c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x15977cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_159780:
    // 0x159780: 0xc062a60  jal         func_18A980
label_159784:
    if (ctx->pc == 0x159784u) {
        ctx->pc = 0x159784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159780u;
        // 0x159784: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159788u;
        goto label_159788;
    }
    ctx->pc = 0x159780u;
    SET_GPR_U32(ctx, 31, 0x159788u);
    ctx->pc = 0x159784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159780u;
    // 0x159784: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A980u, 0x159780u, 0x159788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159788u;
label_159788:
    // 0x159788: 0x8e05cdb4  lw          $a1, -0x324C($s0)
    ctx->pc = 0x159788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_15978c:
    // 0x15978c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15978cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_159790:
    // 0x159790: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x159790u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_159794:
    // 0x159794: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x159794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_159798:
    // 0x159798: 0x60f809  jalr        $v1
label_15979c:
    if (ctx->pc == 0x15979Cu) {
        ctx->pc = 0x15979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159798u;
        // 0x15979c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1597A0u;
        goto label_1597a0;
    }
    ctx->pc = 0x159798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1597A0u);
        ctx->pc = 0x15979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159798u;
        // 0x15979c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159798u, 0x1597A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1597A0u;
label_1597a0:
    // 0x1597a0: 0xc103e28  jal         func_40F8A0
label_1597a4:
    if (ctx->pc == 0x1597A4u) {
        ctx->pc = 0x1597A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597A0u;
        // 0x1597a4: 0x8e2447c4  lw          $a0, 0x47C4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1597A8u;
        goto label_1597a8;
    }
    ctx->pc = 0x1597A0u;
    SET_GPR_U32(ctx, 31, 0x1597A8u);
    ctx->pc = 0x1597A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1597A0u;
    // 0x1597a4: 0x8e2447c4  lw          $a0, 0x47C4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F8A0u, 0x1597A0u, 0x1597A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1597A8u;
label_1597a8:
    // 0x1597a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1597a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1597ac:
    // 0x1597ac: 0x10730013  beq         $v1, $s3, . + 4 + (0x13 << 2)
label_1597b0:
    if (ctx->pc == 0x1597B0u) {
        ctx->pc = 0x1597B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597ACu;
        // 0x1597b0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1597B4u;
        goto label_1597b4;
    }
    ctx->pc = 0x1597ACu;
    {
        const bool branch_taken_0x1597ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x1597B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597ACu;
        // 0x1597b0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1597ac) {
            ctx->pc = 0x1597FCu;
            goto label_1597fc;
        }
    }
    ctx->pc = 0x1597B4u;
label_1597b4:
    // 0x1597b4: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
label_1597b8:
    if (ctx->pc == 0x1597B8u) {
        ctx->pc = 0x1597B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597B4u;
        // 0x1597b8: 0x8ec4cd4c  lw          $a0, -0x32B4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1597BCu;
        goto label_1597bc;
    }
    ctx->pc = 0x1597B4u;
    {
        const bool branch_taken_0x1597b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1597b4) {
            ctx->pc = 0x1597B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1597B4u;
            // 0x1597b8: 0x8ec4cd4c  lw          $a0, -0x32B4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954316)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159800u;
            goto label_159800;
        }
    }
    ctx->pc = 0x1597BCu;
label_1597bc:
    // 0x1597bc: 0x8e2447c4  lw          $a0, 0x47C4($s1)
    ctx->pc = 0x1597bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18372)));
label_1597c0:
    // 0x1597c0: 0xc103e14  jal         func_40F850
label_1597c4:
    if (ctx->pc == 0x1597C4u) {
        ctx->pc = 0x1597C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597C0u;
        // 0x1597c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1597C8u;
        goto label_1597c8;
    }
    ctx->pc = 0x1597C0u;
    SET_GPR_U32(ctx, 31, 0x1597C8u);
    ctx->pc = 0x1597C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1597C0u;
    // 0x1597c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F850u, 0x1597C0u, 0x1597C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1597C8u;
label_1597c8:
    // 0x1597c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1597c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1597cc:
    // 0x1597cc: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1597ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1597d0:
    // 0x1597d0: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x1597d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1597d4:
    // 0x1597d4: 0xa0f809  jalr        $a1
label_1597d8:
    if (ctx->pc == 0x1597D8u) {
        ctx->pc = 0x1597D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597D4u;
        // 0x1597d8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1597DCu;
        goto label_1597dc;
    }
    ctx->pc = 0x1597D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1597DCu);
        ctx->pc = 0x1597D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597D4u;
        // 0x1597d8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1597D4u, 0x1597DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1597DCu;
label_1597dc:
    // 0x1597dc: 0x8e2447c4  lw          $a0, 0x47C4($s1)
    ctx->pc = 0x1597dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18372)));
label_1597e0:
    // 0x1597e0: 0xc103e14  jal         func_40F850
label_1597e4:
    if (ctx->pc == 0x1597E4u) {
        ctx->pc = 0x1597E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597E0u;
        // 0x1597e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1597E8u;
        goto label_1597e8;
    }
    ctx->pc = 0x1597E0u;
    SET_GPR_U32(ctx, 31, 0x1597E8u);
    ctx->pc = 0x1597E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1597E0u;
    // 0x1597e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F850u, 0x1597E0u, 0x1597E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1597E8u;
label_1597e8:
    // 0x1597e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1597e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1597ec:
    // 0x1597ec: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1597ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1597f0:
    // 0x1597f0: 0x8c65008c  lw          $a1, 0x8C($v1)
    ctx->pc = 0x1597f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1597f4:
    // 0x1597f4: 0xa0f809  jalr        $a1
label_1597f8:
    if (ctx->pc == 0x1597F8u) {
        ctx->pc = 0x1597F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597F4u;
        // 0x1597f8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1597FCu;
        goto label_1597fc;
    }
    ctx->pc = 0x1597F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1597FCu);
        ctx->pc = 0x1597F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597F4u;
        // 0x1597f8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1597F4u, 0x1597FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1597FCu;
label_1597fc:
    // 0x1597fc: 0x8ec4cd4c  lw          $a0, -0x32B4($s6)
    ctx->pc = 0x1597fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954316)));
label_159800:
    // 0x159800: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x159800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159804:
    // 0x159804: 0x26530020  addiu       $s3, $s2, 0x20
    ctx->pc = 0x159804u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_159808:
    // 0x159808: 0xc06181a  jal         func_186068
label_15980c:
    if (ctx->pc == 0x15980Cu) {
        ctx->pc = 0x15980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159808u;
        // 0x15980c: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159810u;
        goto label_159810;
    }
    ctx->pc = 0x159808u;
    SET_GPR_U32(ctx, 31, 0x159810u);
    ctx->pc = 0x15980Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159808u;
    // 0x15980c: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186068u, 0x159808u, 0x159810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159810u;
label_159810:
    // 0x159810: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x159810u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_159814:
    // 0x159814: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x159814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_159818:
    // 0x159818: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x159818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15981c:
    // 0x15981c: 0xc047e6c  jal         func_11F9B0
label_159820:
    if (ctx->pc == 0x159820u) {
        ctx->pc = 0x159820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15981Cu;
        // 0x159820: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159824u;
        goto label_159824;
    }
    ctx->pc = 0x15981Cu;
    SET_GPR_U32(ctx, 31, 0x159824u);
    ctx->pc = 0x159820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15981Cu;
    // 0x159820: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x15981Cu, 0x159824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159824u;
label_159824:
    // 0x159824: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x159824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_159828:
    // 0x159828: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x159828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15982c:
    // 0x15982c: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x15982cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_159830:
    // 0x159830: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x159830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_159834:
    // 0x159834: 0xc0f809  jalr        $a2
label_159838:
    if (ctx->pc == 0x159838u) {
        ctx->pc = 0x159838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159834u;
        // 0x159838: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15983Cu;
        goto label_15983c;
    }
    ctx->pc = 0x159834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x15983Cu);
        ctx->pc = 0x159838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159834u;
        // 0x159838: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159834u, 0x15983Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15983Cu;
label_15983c:
    // 0x15983c: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x15983cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_159840:
    // 0x159840: 0x2e240002  sltiu       $a0, $s1, 0x2
    ctx->pc = 0x159840u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_159844:
    // 0x159844: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x159844u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
label_159848:
    // 0x159848: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x159848u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15984c:
    // 0x15984c: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x15984cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_159850:
    // 0x159850: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
label_159854:
    if (ctx->pc == 0x159854u) {
        ctx->pc = 0x159854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159850u;
        // 0x159854: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159858u;
        goto label_159858;
    }
    ctx->pc = 0x159850u;
    {
        const bool branch_taken_0x159850 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x159854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159850u;
        // 0x159854: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159850) {
            ctx->pc = 0x159818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159818;
        }
    }
    ctx->pc = 0x159858u;
label_159858:
    // 0x159858: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x159858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15985c:
    // 0x15985c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15985cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_159860:
    // 0x159860: 0xc043e04  jal         func_10F810
label_159864:
    if (ctx->pc == 0x159864u) {
        ctx->pc = 0x159864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159860u;
        // 0x159864: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159868u;
        goto label_159868;
    }
    ctx->pc = 0x159860u;
    SET_GPR_U32(ctx, 31, 0x159868u);
    ctx->pc = 0x159864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159860u;
    // 0x159864: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F810u, 0x159860u, 0x159868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159868u;
label_159868:
    // 0x159868: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x159868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_15986c:
    // 0x15986c: 0xc06ba0a  jal         func_1AE828
label_159870:
    if (ctx->pc == 0x159870u) {
        ctx->pc = 0x159870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15986Cu;
        // 0x159870: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159874u;
        goto label_159874;
    }
    ctx->pc = 0x15986Cu;
    SET_GPR_U32(ctx, 31, 0x159874u);
    ctx->pc = 0x159870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15986Cu;
    // 0x159870: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x15986Cu, 0x159874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159874u;
label_159874:
    // 0x159874: 0xc085a42  jal         func_216908
label_159878:
    if (ctx->pc == 0x159878u) {
        ctx->pc = 0x159878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159874u;
        // 0x159878: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15987Cu;
        goto label_15987c;
    }
    ctx->pc = 0x159874u;
    SET_GPR_U32(ctx, 31, 0x15987Cu);
    ctx->pc = 0x159878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159874u;
    // 0x159878: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216908u, 0x159874u, 0x15987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15987Cu;
label_15987c:
    // 0x15987c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_159880:
    if (ctx->pc == 0x159880u) {
        ctx->pc = 0x159884u;
        goto label_159884;
    }
    ctx->pc = 0x15987Cu;
    {
        const bool branch_taken_0x15987c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15987c) {
            ctx->pc = 0x1598A4u;
            goto label_1598a4;
        }
    }
    ctx->pc = 0x159884u;
label_159884:
    // 0x159884: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x159884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_159888:
    // 0x159888: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_15988c:
    if (ctx->pc == 0x15988Cu) {
        ctx->pc = 0x159890u;
        goto label_159890;
    }
    ctx->pc = 0x159888u;
    {
        const bool branch_taken_0x159888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x159888) {
            ctx->pc = 0x1598A4u;
            goto label_1598a4;
        }
    }
    ctx->pc = 0x159890u;
label_159890:
    // 0x159890: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x159890u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
label_159894:
    // 0x159894: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x159894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_159898:
    // 0x159898: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x159898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15989c:
    // 0x15989c: 0xc062c5a  jal         func_18B168
label_1598a0:
    if (ctx->pc == 0x1598A0u) {
        ctx->pc = 0x1598A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15989Cu;
        // 0x1598a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1598A4u;
        goto label_1598a4;
    }
    ctx->pc = 0x15989Cu;
    SET_GPR_U32(ctx, 31, 0x1598A4u);
    ctx->pc = 0x1598A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15989Cu;
    // 0x1598a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B168u, 0x15989Cu, 0x1598A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1598A4u;
label_1598a4:
    // 0x1598a4: 0xc085a98  jal         func_216A60
label_1598a8:
    if (ctx->pc == 0x1598A8u) {
        ctx->pc = 0x1598A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598A4u;
        // 0x1598a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1598ACu;
        goto label_1598ac;
    }
    ctx->pc = 0x1598A4u;
    SET_GPR_U32(ctx, 31, 0x1598ACu);
    ctx->pc = 0x1598A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1598A4u;
    // 0x1598a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216A60u, 0x1598A4u, 0x1598ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1598ACu;
label_1598ac:
    // 0x1598ac: 0xc085b52  jal         func_216D48
label_1598b0:
    if (ctx->pc == 0x1598B0u) {
        ctx->pc = 0x1598B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598ACu;
        // 0x1598b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1598B4u;
        goto label_1598b4;
    }
    ctx->pc = 0x1598ACu;
    SET_GPR_U32(ctx, 31, 0x1598B4u);
    ctx->pc = 0x1598B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1598ACu;
    // 0x1598b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216D48u, 0x1598ACu, 0x1598B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1598B4u;
label_1598b4:
    // 0x1598b4: 0xc061748  jal         func_185D20
label_1598b8:
    if (ctx->pc == 0x1598B8u) {
        ctx->pc = 0x1598B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598B4u;
        // 0x1598b8: 0x8ec4cd4c  lw          $a0, -0x32B4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1598BCu;
        goto label_1598bc;
    }
    ctx->pc = 0x1598B4u;
    SET_GPR_U32(ctx, 31, 0x1598BCu);
    ctx->pc = 0x1598B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1598B4u;
    // 0x1598b8: 0x8ec4cd4c  lw          $a0, -0x32B4($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185D20u, 0x1598B4u, 0x1598BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1598BCu;
label_1598bc:
    // 0x1598bc: 0x8ee5cdb4  lw          $a1, -0x324C($s7)
    ctx->pc = 0x1598bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954420)));
label_1598c0:
    // 0x1598c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1598c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1598c4:
    // 0x1598c4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1598c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1598c8:
    // 0x1598c8: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x1598c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_1598cc:
    // 0x1598cc: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x1598ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_1598d0:
    // 0x1598d0: 0x60f809  jalr        $v1
label_1598d4:
    if (ctx->pc == 0x1598D4u) {
        ctx->pc = 0x1598D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598D0u;
        // 0x1598d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1598D8u;
        goto label_1598d8;
    }
    ctx->pc = 0x1598D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1598D8u);
        ctx->pc = 0x1598D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598D0u;
        // 0x1598d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1598D0u, 0x1598D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1598D8u;
label_1598d8:
    // 0x1598d8: 0x8ee5cdb4  lw          $a1, -0x324C($s7)
    ctx->pc = 0x1598d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954420)));
label_1598dc:
    // 0x1598dc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1598dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1598e0:
    // 0x1598e0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1598e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1598e4:
    // 0x1598e4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1598e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1598e8:
    // 0x1598e8: 0x60f809  jalr        $v1
label_1598ec:
    if (ctx->pc == 0x1598ECu) {
        ctx->pc = 0x1598ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598E8u;
        // 0x1598ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1598F0u;
        goto label_1598f0;
    }
    ctx->pc = 0x1598E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1598F0u);
        ctx->pc = 0x1598ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598E8u;
        // 0x1598ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1598E8u, 0x1598F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1598F0u;
label_1598f0:
    // 0x1598f0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1598f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_1598f4:
    // 0x1598f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1598f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1598f8:
    // 0x1598f8: 0xc0552b8  jal         func_154AE0
label_1598fc:
    if (ctx->pc == 0x1598FCu) {
        ctx->pc = 0x1598FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598F8u;
        // 0x1598fc: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159900u;
        goto label_159900;
    }
    ctx->pc = 0x1598F8u;
    SET_GPR_U32(ctx, 31, 0x159900u);
    ctx->pc = 0x1598FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1598F8u;
    // 0x1598fc: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x1598F8u, 0x159900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159900u;
label_159900:
    // 0x159900: 0xc055880  jal         func_156200
label_159904:
    if (ctx->pc == 0x159904u) {
        ctx->pc = 0x159904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159900u;
        // 0x159904: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159908u;
        goto label_159908;
    }
    ctx->pc = 0x159900u;
    SET_GPR_U32(ctx, 31, 0x159908u);
    ctx->pc = 0x159904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159900u;
    // 0x159904: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156200u, 0x159900u, 0x159908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159908u;
label_159908:
    // 0x159908: 0xc055a70  jal         func_1569C0
label_15990c:
    if (ctx->pc == 0x15990Cu) {
        ctx->pc = 0x159910u;
        goto label_159910;
    }
    ctx->pc = 0x159908u;
    SET_GPR_U32(ctx, 31, 0x159910u);
    ctx->pc = 0x1569C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569C0u, 0x159908u, 0x159910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159910u;
label_159910:
    // 0x159910: 0x8ea2c6e4  lw          $v0, -0x391C($s5)
    ctx->pc = 0x159910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952676)));
label_159914:
    // 0x159914: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_159918:
    if (ctx->pc == 0x159918u) {
        ctx->pc = 0x159918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159914u;
        // 0x159918: 0x8e4200d0  lw          $v0, 0xD0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15991Cu;
        goto label_15991c;
    }
    ctx->pc = 0x159914u;
    {
        const bool branch_taken_0x159914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159914u;
        // 0x159918: 0x8e4200d0  lw          $v0, 0xD0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159914) {
            ctx->pc = 0x159940u;
            goto label_159940;
        }
    }
    ctx->pc = 0x15991Cu;
label_15991c:
    // 0x15991c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_159920:
    if (ctx->pc == 0x159920u) {
        ctx->pc = 0x159920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15991Cu;
        // 0x159920: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159924u;
        goto label_159924;
    }
    ctx->pc = 0x15991Cu;
    {
        const bool branch_taken_0x15991c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15991Cu;
        // 0x159920: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15991c) {
            ctx->pc = 0x159948u;
            goto label_159948;
        }
    }
    ctx->pc = 0x159924u;
label_159924:
    // 0x159924: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x159924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_159928:
    // 0x159928: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x159928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15992c:
    // 0x15992c: 0xc062c5a  jal         func_18B168
label_159930:
    if (ctx->pc == 0x159930u) {
        ctx->pc = 0x159930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15992Cu;
        // 0x159930: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159934u;
        goto label_159934;
    }
    ctx->pc = 0x15992Cu;
    SET_GPR_U32(ctx, 31, 0x159934u);
    ctx->pc = 0x159930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15992Cu;
    // 0x159930: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B168u, 0x15992Cu, 0x159934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159934u;
label_159934:
    // 0x159934: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x159934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_159938:
    // 0x159938: 0x10000007  b           . + 4 + (0x7 << 2)
label_15993c:
    if (ctx->pc == 0x15993Cu) {
        ctx->pc = 0x15993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159938u;
        // 0x15993c: 0xae4200d0  sw          $v0, 0xD0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159940u;
        goto label_159940;
    }
    ctx->pc = 0x159938u;
    {
        const bool branch_taken_0x159938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159938u;
        // 0x15993c: 0xae4200d0  sw          $v0, 0xD0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159938) {
            ctx->pc = 0x159958u;
            goto label_159958;
        }
    }
    ctx->pc = 0x159940u;
label_159940:
    // 0x159940: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_159944:
    if (ctx->pc == 0x159944u) {
        ctx->pc = 0x159944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159940u;
        // 0x159944: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159948u;
        goto label_159948;
    }
    ctx->pc = 0x159940u;
    {
        const bool branch_taken_0x159940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159940u;
        // 0x159944: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159940) {
            ctx->pc = 0x159958u;
            goto label_159958;
        }
    }
    ctx->pc = 0x159948u;
label_159948:
    // 0x159948: 0x8c43deb8  lw          $v1, -0x2148($v0)
    ctx->pc = 0x159948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958776)));
label_15994c:
    // 0x15994c: 0x8c6401d4  lw          $a0, 0x1D4($v1)
    ctx->pc = 0x15994cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 468)));
label_159950:
    // 0x159950: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_159954:
    if (ctx->pc == 0x159954u) {
        ctx->pc = 0x159954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159950u;
        // 0x159954: 0xae4000d0  sw          $zero, 0xD0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159958u;
        goto label_159958;
    }
    ctx->pc = 0x159950u;
    {
        const bool branch_taken_0x159950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x159950) {
            ctx->pc = 0x159954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159950u;
            // 0x159954: 0xae4000d0  sw          $zero, 0xD0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159958u;
            goto label_159958;
        }
    }
    ctx->pc = 0x159958u;
label_159958:
    // 0x159958: 0x8ea2c6e4  lw          $v0, -0x391C($s5)
    ctx->pc = 0x159958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952676)));
label_15995c:
    // 0x15995c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_159960:
    if (ctx->pc == 0x159960u) {
        ctx->pc = 0x159960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15995Cu;
        // 0x159960: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159964u;
        goto label_159964;
    }
    ctx->pc = 0x15995Cu;
    {
        const bool branch_taken_0x15995c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15995Cu;
        // 0x159960: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15995c) {
            ctx->pc = 0x159974u;
            goto label_159974;
        }
    }
    ctx->pc = 0x159964u;
label_159964:
    // 0x159964: 0x8e4300d0  lw          $v1, 0xD0($s2)
    ctx->pc = 0x159964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_159968:
    // 0x159968: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_15996c:
    if (ctx->pc == 0x15996Cu) {
        ctx->pc = 0x15996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159968u;
        // 0x15996c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159970u;
        goto label_159970;
    }
    ctx->pc = 0x159968u;
    {
        const bool branch_taken_0x159968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159968u;
        // 0x15996c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159968) {
            ctx->pc = 0x159974u;
            goto label_159974;
        }
    }
    ctx->pc = 0x159970u;
label_159970:
    // 0x159970: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x159970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_159974:
    // 0x159974: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x159974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_159978:
    // 0x159978: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x159978u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_15997c:
    // 0x15997c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x15997cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_159980:
    // 0x159980: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x159980u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_159984:
    // 0x159984: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x159984u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_159988:
    // 0x159988: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x159988u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_15998c:
    // 0x15998c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x15998cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_159990:
    // 0x159990: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x159990u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_159994:
    // 0x159994: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x159994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_159998:
    // 0x159998: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x159998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_15999c:
    // 0x15999c: 0x3e00008  jr          $ra
label_1599a0:
    if (ctx->pc == 0x1599A0u) {
        ctx->pc = 0x1599A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15999Cu;
        // 0x1599a0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1599A4u;
        goto label_1599a4;
    }
    ctx->pc = 0x15999Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1599A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15999Cu;
        // 0x1599a0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15999Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1599A4u;
label_1599a4:
    // 0x1599a4: 0x0  nop
    ctx->pc = 0x1599a4u;
    // NOP
    ctx->pc = 0x1599a8u;
}
