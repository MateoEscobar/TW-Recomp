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

// Function: sub_00162688
// Address: 0x162688 - 0x162b88
void sub_00162688_0x162688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162688_0x162688");
#endif

    switch (ctx->pc) {
        case 0x162688u: goto label_162688;
        case 0x16268cu: goto label_16268c;
        case 0x162690u: goto label_162690;
        case 0x162694u: goto label_162694;
        case 0x162698u: goto label_162698;
        case 0x16269cu: goto label_16269c;
        case 0x1626a0u: goto label_1626a0;
        case 0x1626a4u: goto label_1626a4;
        case 0x1626a8u: goto label_1626a8;
        case 0x1626acu: goto label_1626ac;
        case 0x1626b0u: goto label_1626b0;
        case 0x1626b4u: goto label_1626b4;
        case 0x1626b8u: goto label_1626b8;
        case 0x1626bcu: goto label_1626bc;
        case 0x1626c0u: goto label_1626c0;
        case 0x1626c4u: goto label_1626c4;
        case 0x1626c8u: goto label_1626c8;
        case 0x1626ccu: goto label_1626cc;
        case 0x1626d0u: goto label_1626d0;
        case 0x1626d4u: goto label_1626d4;
        case 0x1626d8u: goto label_1626d8;
        case 0x1626dcu: goto label_1626dc;
        case 0x1626e0u: goto label_1626e0;
        case 0x1626e4u: goto label_1626e4;
        case 0x1626e8u: goto label_1626e8;
        case 0x1626ecu: goto label_1626ec;
        case 0x1626f0u: goto label_1626f0;
        case 0x1626f4u: goto label_1626f4;
        case 0x1626f8u: goto label_1626f8;
        case 0x1626fcu: goto label_1626fc;
        case 0x162700u: goto label_162700;
        case 0x162704u: goto label_162704;
        case 0x162708u: goto label_162708;
        case 0x16270cu: goto label_16270c;
        case 0x162710u: goto label_162710;
        case 0x162714u: goto label_162714;
        case 0x162718u: goto label_162718;
        case 0x16271cu: goto label_16271c;
        case 0x162720u: goto label_162720;
        case 0x162724u: goto label_162724;
        case 0x162728u: goto label_162728;
        case 0x16272cu: goto label_16272c;
        case 0x162730u: goto label_162730;
        case 0x162734u: goto label_162734;
        case 0x162738u: goto label_162738;
        case 0x16273cu: goto label_16273c;
        case 0x162740u: goto label_162740;
        case 0x162744u: goto label_162744;
        case 0x162748u: goto label_162748;
        case 0x16274cu: goto label_16274c;
        case 0x162750u: goto label_162750;
        case 0x162754u: goto label_162754;
        case 0x162758u: goto label_162758;
        case 0x16275cu: goto label_16275c;
        case 0x162760u: goto label_162760;
        case 0x162764u: goto label_162764;
        case 0x162768u: goto label_162768;
        case 0x16276cu: goto label_16276c;
        case 0x162770u: goto label_162770;
        case 0x162774u: goto label_162774;
        case 0x162778u: goto label_162778;
        case 0x16277cu: goto label_16277c;
        case 0x162780u: goto label_162780;
        case 0x162784u: goto label_162784;
        case 0x162788u: goto label_162788;
        case 0x16278cu: goto label_16278c;
        case 0x162790u: goto label_162790;
        case 0x162794u: goto label_162794;
        case 0x162798u: goto label_162798;
        case 0x16279cu: goto label_16279c;
        case 0x1627a0u: goto label_1627a0;
        case 0x1627a4u: goto label_1627a4;
        case 0x1627a8u: goto label_1627a8;
        case 0x1627acu: goto label_1627ac;
        case 0x1627b0u: goto label_1627b0;
        case 0x1627b4u: goto label_1627b4;
        case 0x1627b8u: goto label_1627b8;
        case 0x1627bcu: goto label_1627bc;
        case 0x1627c0u: goto label_1627c0;
        case 0x1627c4u: goto label_1627c4;
        case 0x1627c8u: goto label_1627c8;
        case 0x1627ccu: goto label_1627cc;
        case 0x1627d0u: goto label_1627d0;
        case 0x1627d4u: goto label_1627d4;
        case 0x1627d8u: goto label_1627d8;
        case 0x1627dcu: goto label_1627dc;
        case 0x1627e0u: goto label_1627e0;
        case 0x1627e4u: goto label_1627e4;
        case 0x1627e8u: goto label_1627e8;
        case 0x1627ecu: goto label_1627ec;
        case 0x1627f0u: goto label_1627f0;
        case 0x1627f4u: goto label_1627f4;
        case 0x1627f8u: goto label_1627f8;
        case 0x1627fcu: goto label_1627fc;
        case 0x162800u: goto label_162800;
        case 0x162804u: goto label_162804;
        case 0x162808u: goto label_162808;
        case 0x16280cu: goto label_16280c;
        case 0x162810u: goto label_162810;
        case 0x162814u: goto label_162814;
        case 0x162818u: goto label_162818;
        case 0x16281cu: goto label_16281c;
        case 0x162820u: goto label_162820;
        case 0x162824u: goto label_162824;
        case 0x162828u: goto label_162828;
        case 0x16282cu: goto label_16282c;
        case 0x162830u: goto label_162830;
        case 0x162834u: goto label_162834;
        case 0x162838u: goto label_162838;
        case 0x16283cu: goto label_16283c;
        case 0x162840u: goto label_162840;
        case 0x162844u: goto label_162844;
        case 0x162848u: goto label_162848;
        case 0x16284cu: goto label_16284c;
        case 0x162850u: goto label_162850;
        case 0x162854u: goto label_162854;
        case 0x162858u: goto label_162858;
        case 0x16285cu: goto label_16285c;
        case 0x162860u: goto label_162860;
        case 0x162864u: goto label_162864;
        case 0x162868u: goto label_162868;
        case 0x16286cu: goto label_16286c;
        case 0x162870u: goto label_162870;
        case 0x162874u: goto label_162874;
        case 0x162878u: goto label_162878;
        case 0x16287cu: goto label_16287c;
        case 0x162880u: goto label_162880;
        case 0x162884u: goto label_162884;
        case 0x162888u: goto label_162888;
        case 0x16288cu: goto label_16288c;
        case 0x162890u: goto label_162890;
        case 0x162894u: goto label_162894;
        case 0x162898u: goto label_162898;
        case 0x16289cu: goto label_16289c;
        case 0x1628a0u: goto label_1628a0;
        case 0x1628a4u: goto label_1628a4;
        case 0x1628a8u: goto label_1628a8;
        case 0x1628acu: goto label_1628ac;
        case 0x1628b0u: goto label_1628b0;
        case 0x1628b4u: goto label_1628b4;
        case 0x1628b8u: goto label_1628b8;
        case 0x1628bcu: goto label_1628bc;
        case 0x1628c0u: goto label_1628c0;
        case 0x1628c4u: goto label_1628c4;
        case 0x1628c8u: goto label_1628c8;
        case 0x1628ccu: goto label_1628cc;
        case 0x1628d0u: goto label_1628d0;
        case 0x1628d4u: goto label_1628d4;
        case 0x1628d8u: goto label_1628d8;
        case 0x1628dcu: goto label_1628dc;
        case 0x1628e0u: goto label_1628e0;
        case 0x1628e4u: goto label_1628e4;
        case 0x1628e8u: goto label_1628e8;
        case 0x1628ecu: goto label_1628ec;
        case 0x1628f0u: goto label_1628f0;
        case 0x1628f4u: goto label_1628f4;
        case 0x1628f8u: goto label_1628f8;
        case 0x1628fcu: goto label_1628fc;
        case 0x162900u: goto label_162900;
        case 0x162904u: goto label_162904;
        case 0x162908u: goto label_162908;
        case 0x16290cu: goto label_16290c;
        case 0x162910u: goto label_162910;
        case 0x162914u: goto label_162914;
        case 0x162918u: goto label_162918;
        case 0x16291cu: goto label_16291c;
        case 0x162920u: goto label_162920;
        case 0x162924u: goto label_162924;
        case 0x162928u: goto label_162928;
        case 0x16292cu: goto label_16292c;
        case 0x162930u: goto label_162930;
        case 0x162934u: goto label_162934;
        case 0x162938u: goto label_162938;
        case 0x16293cu: goto label_16293c;
        case 0x162940u: goto label_162940;
        case 0x162944u: goto label_162944;
        case 0x162948u: goto label_162948;
        case 0x16294cu: goto label_16294c;
        case 0x162950u: goto label_162950;
        case 0x162954u: goto label_162954;
        case 0x162958u: goto label_162958;
        case 0x16295cu: goto label_16295c;
        case 0x162960u: goto label_162960;
        case 0x162964u: goto label_162964;
        case 0x162968u: goto label_162968;
        case 0x16296cu: goto label_16296c;
        case 0x162970u: goto label_162970;
        case 0x162974u: goto label_162974;
        case 0x162978u: goto label_162978;
        case 0x16297cu: goto label_16297c;
        case 0x162980u: goto label_162980;
        case 0x162984u: goto label_162984;
        case 0x162988u: goto label_162988;
        case 0x16298cu: goto label_16298c;
        case 0x162990u: goto label_162990;
        case 0x162994u: goto label_162994;
        case 0x162998u: goto label_162998;
        case 0x16299cu: goto label_16299c;
        case 0x1629a0u: goto label_1629a0;
        case 0x1629a4u: goto label_1629a4;
        case 0x1629a8u: goto label_1629a8;
        case 0x1629acu: goto label_1629ac;
        case 0x1629b0u: goto label_1629b0;
        case 0x1629b4u: goto label_1629b4;
        case 0x1629b8u: goto label_1629b8;
        case 0x1629bcu: goto label_1629bc;
        case 0x1629c0u: goto label_1629c0;
        case 0x1629c4u: goto label_1629c4;
        case 0x1629c8u: goto label_1629c8;
        case 0x1629ccu: goto label_1629cc;
        case 0x1629d0u: goto label_1629d0;
        case 0x1629d4u: goto label_1629d4;
        case 0x1629d8u: goto label_1629d8;
        case 0x1629dcu: goto label_1629dc;
        case 0x1629e0u: goto label_1629e0;
        case 0x1629e4u: goto label_1629e4;
        case 0x1629e8u: goto label_1629e8;
        case 0x1629ecu: goto label_1629ec;
        case 0x1629f0u: goto label_1629f0;
        case 0x1629f4u: goto label_1629f4;
        case 0x1629f8u: goto label_1629f8;
        case 0x1629fcu: goto label_1629fc;
        case 0x162a00u: goto label_162a00;
        case 0x162a04u: goto label_162a04;
        case 0x162a08u: goto label_162a08;
        case 0x162a0cu: goto label_162a0c;
        case 0x162a10u: goto label_162a10;
        case 0x162a14u: goto label_162a14;
        case 0x162a18u: goto label_162a18;
        case 0x162a1cu: goto label_162a1c;
        case 0x162a20u: goto label_162a20;
        case 0x162a24u: goto label_162a24;
        case 0x162a28u: goto label_162a28;
        case 0x162a2cu: goto label_162a2c;
        case 0x162a30u: goto label_162a30;
        case 0x162a34u: goto label_162a34;
        case 0x162a38u: goto label_162a38;
        case 0x162a3cu: goto label_162a3c;
        case 0x162a40u: goto label_162a40;
        case 0x162a44u: goto label_162a44;
        case 0x162a48u: goto label_162a48;
        case 0x162a4cu: goto label_162a4c;
        case 0x162a50u: goto label_162a50;
        case 0x162a54u: goto label_162a54;
        case 0x162a58u: goto label_162a58;
        case 0x162a5cu: goto label_162a5c;
        case 0x162a60u: goto label_162a60;
        case 0x162a64u: goto label_162a64;
        case 0x162a68u: goto label_162a68;
        case 0x162a6cu: goto label_162a6c;
        case 0x162a70u: goto label_162a70;
        case 0x162a74u: goto label_162a74;
        case 0x162a78u: goto label_162a78;
        case 0x162a7cu: goto label_162a7c;
        case 0x162a80u: goto label_162a80;
        case 0x162a84u: goto label_162a84;
        case 0x162a88u: goto label_162a88;
        case 0x162a8cu: goto label_162a8c;
        case 0x162a90u: goto label_162a90;
        case 0x162a94u: goto label_162a94;
        case 0x162a98u: goto label_162a98;
        case 0x162a9cu: goto label_162a9c;
        case 0x162aa0u: goto label_162aa0;
        case 0x162aa4u: goto label_162aa4;
        case 0x162aa8u: goto label_162aa8;
        case 0x162aacu: goto label_162aac;
        case 0x162ab0u: goto label_162ab0;
        case 0x162ab4u: goto label_162ab4;
        case 0x162ab8u: goto label_162ab8;
        case 0x162abcu: goto label_162abc;
        case 0x162ac0u: goto label_162ac0;
        case 0x162ac4u: goto label_162ac4;
        case 0x162ac8u: goto label_162ac8;
        case 0x162accu: goto label_162acc;
        case 0x162ad0u: goto label_162ad0;
        case 0x162ad4u: goto label_162ad4;
        case 0x162ad8u: goto label_162ad8;
        case 0x162adcu: goto label_162adc;
        case 0x162ae0u: goto label_162ae0;
        case 0x162ae4u: goto label_162ae4;
        case 0x162ae8u: goto label_162ae8;
        case 0x162aecu: goto label_162aec;
        case 0x162af0u: goto label_162af0;
        case 0x162af4u: goto label_162af4;
        case 0x162af8u: goto label_162af8;
        case 0x162afcu: goto label_162afc;
        case 0x162b00u: goto label_162b00;
        case 0x162b04u: goto label_162b04;
        case 0x162b08u: goto label_162b08;
        case 0x162b0cu: goto label_162b0c;
        case 0x162b10u: goto label_162b10;
        case 0x162b14u: goto label_162b14;
        case 0x162b18u: goto label_162b18;
        case 0x162b1cu: goto label_162b1c;
        case 0x162b20u: goto label_162b20;
        case 0x162b24u: goto label_162b24;
        case 0x162b28u: goto label_162b28;
        case 0x162b2cu: goto label_162b2c;
        case 0x162b30u: goto label_162b30;
        case 0x162b34u: goto label_162b34;
        case 0x162b38u: goto label_162b38;
        case 0x162b3cu: goto label_162b3c;
        case 0x162b40u: goto label_162b40;
        case 0x162b44u: goto label_162b44;
        case 0x162b48u: goto label_162b48;
        case 0x162b4cu: goto label_162b4c;
        case 0x162b50u: goto label_162b50;
        case 0x162b54u: goto label_162b54;
        case 0x162b58u: goto label_162b58;
        case 0x162b5cu: goto label_162b5c;
        case 0x162b60u: goto label_162b60;
        case 0x162b64u: goto label_162b64;
        case 0x162b68u: goto label_162b68;
        case 0x162b6cu: goto label_162b6c;
        case 0x162b70u: goto label_162b70;
        case 0x162b74u: goto label_162b74;
        case 0x162b78u: goto label_162b78;
        case 0x162b7cu: goto label_162b7c;
        case 0x162b80u: goto label_162b80;
        case 0x162b84u: goto label_162b84;
        default: break;
    }

    ctx->pc = 0x162688u;

label_162688:
    // 0x162688: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x162688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_16268c:
    // 0x16268c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x16268cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_162690:
    // 0x162690: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x162690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
label_162694:
    // 0x162694: 0x24070084  addiu       $a3, $zero, 0x84
    ctx->pc = 0x162694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_162698:
    // 0x162698: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x162698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
label_16269c:
    // 0x16269c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16269cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1626a0:
    // 0x1626a0: 0xffbf0150  sd          $ra, 0x150($sp)
    ctx->pc = 0x1626a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 31));
label_1626a4:
    // 0x1626a4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1626a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1626a8:
    // 0x1626a8: 0xe7b801a0  swc1        $f24, 0x1A0($sp)
    ctx->pc = 0x1626a8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_1626ac:
    // 0x1626ac: 0xe7b70198  swc1        $f23, 0x198($sp)
    ctx->pc = 0x1626acu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_1626b0:
    // 0x1626b0: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x1626b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_1626b4:
    // 0x1626b4: 0xe7b60190  swc1        $f22, 0x190($sp)
    ctx->pc = 0x1626b4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_1626b8:
    // 0x1626b8: 0xe7b50188  swc1        $f21, 0x188($sp)
    ctx->pc = 0x1626b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_1626bc:
    // 0x1626bc: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x1626bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_1626c0:
    // 0x1626c0: 0x8c46489c  lw          $a2, 0x489C($v0)
    ctx->pc = 0x1626c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1626c4:
    // 0x1626c4: 0x94c256dc  lhu         $v0, 0x56DC($a2)
    ctx->pc = 0x1626c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 22236)));
label_1626c8:
    // 0x1626c8: 0x472018  mult        $a0, $v0, $a3
    ctx->pc = 0x1626c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1626cc:
    // 0x1626cc: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x1626ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1626d0:
    // 0x1626d0: 0x8c4414d8  lw          $a0, 0x14D8($v0)
    ctx->pc = 0x1626d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_1626d4:
    // 0x1626d4: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_1626d8:
    if (ctx->pc == 0x1626D8u) {
        ctx->pc = 0x1626D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1626D4u;
        // 0x1626d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1626DCu;
        goto label_1626dc;
    }
    ctx->pc = 0x1626D4u;
    {
        const bool branch_taken_0x1626d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1626D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1626D4u;
        // 0x1626d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1626d4) {
            ctx->pc = 0x162700u;
            goto label_162700;
        }
    }
    ctx->pc = 0x1626DCu;
label_1626dc:
    // 0x1626dc: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x1626dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_1626e0:
    // 0x1626e0: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
label_1626e4:
    if (ctx->pc == 0x1626E4u) {
        ctx->pc = 0x1626E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1626E0u;
        // 0x1626e4: 0x24020053  addiu       $v0, $zero, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1626E8u;
        goto label_1626e8;
    }
    ctx->pc = 0x1626E0u;
    {
        const bool branch_taken_0x1626e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1626E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1626E0u;
        // 0x1626e4: 0x24020053  addiu       $v0, $zero, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1626e0) {
            ctx->pc = 0x162700u;
            goto label_162700;
        }
    }
    ctx->pc = 0x1626E8u;
label_1626e8:
    // 0x1626e8: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_1626ec:
    if (ctx->pc == 0x1626ECu) {
        ctx->pc = 0x1626ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1626E8u;
        // 0x1626ec: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1626F0u;
        goto label_1626f0;
    }
    ctx->pc = 0x1626E8u;
    {
        const bool branch_taken_0x1626e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1626ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1626E8u;
        // 0x1626ec: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1626e8) {
            ctx->pc = 0x162700u;
            goto label_162700;
        }
    }
    ctx->pc = 0x1626F0u;
label_1626f0:
    // 0x1626f0: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_1626f4:
    if (ctx->pc == 0x1626F4u) {
        ctx->pc = 0x1626F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1626F0u;
        // 0x1626f4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1626F8u;
        goto label_1626f8;
    }
    ctx->pc = 0x1626F0u;
    {
        const bool branch_taken_0x1626f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1626F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1626F0u;
        // 0x1626f4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1626f0) {
            ctx->pc = 0x162700u;
            goto label_162700;
        }
    }
    ctx->pc = 0x1626F8u;
label_1626f8:
    // 0x1626f8: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
label_1626fc:
    if (ctx->pc == 0x1626FCu) {
        ctx->pc = 0x162700u;
        goto label_162700;
    }
    ctx->pc = 0x1626F8u;
    {
        const bool branch_taken_0x1626f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1626f8) {
            ctx->pc = 0x162704u;
            goto label_162704;
        }
    }
    ctx->pc = 0x162700u;
label_162700:
    // 0x162700: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x162700u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162704:
    // 0x162704: 0x1100000c  beqz        $t0, . + 4 + (0xC << 2)
label_162708:
    if (ctx->pc == 0x162708u) {
        ctx->pc = 0x16270Cu;
        goto label_16270c;
    }
    ctx->pc = 0x162704u;
    {
        const bool branch_taken_0x162704 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x162704) {
            ctx->pc = 0x162738u;
            goto label_162738;
        }
    }
    ctx->pc = 0x16270Cu;
label_16270c:
    // 0x16270c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x16270cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_162710:
    // 0x162710: 0x0  nop
    ctx->pc = 0x162710u;
    // NOP
label_162714:
    // 0x162714: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x162714u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_162718:
    // 0x162718: 0x3c01435f  lui         $at, 0x435F
    ctx->pc = 0x162718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17247 << 16));
label_16271c:
    // 0x16271c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16271cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162720:
    // 0x162720: 0x0  nop
    ctx->pc = 0x162720u;
    // NOP
label_162724:
    // 0x162724: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x162724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_162728:
    // 0x162728: 0xe7a1010c  swc1        $f1, 0x10C($sp)
    ctx->pc = 0x162728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_16272c:
    // 0x16272c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x16272cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_162730:
    // 0x162730: 0x1000000c  b           . + 4 + (0xC << 2)
label_162734:
    if (ctx->pc == 0x162734u) {
        ctx->pc = 0x162734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162730u;
        // 0x162734: 0xe7a00104  swc1        $f0, 0x104($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x162738u;
        goto label_162738;
    }
    ctx->pc = 0x162730u;
    {
        const bool branch_taken_0x162730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162730u;
        // 0x162734: 0xe7a00104  swc1        $f0, 0x104($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x162730) {
            ctx->pc = 0x162764u;
            goto label_162764;
        }
    }
    ctx->pc = 0x162738u;
label_162738:
    // 0x162738: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x162738u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16273c:
    // 0x16273c: 0x0  nop
    ctx->pc = 0x16273cu;
    // NOP
label_162740:
    // 0x162740: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x162740u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_162744:
    // 0x162744: 0x3c01422c  lui         $at, 0x422C
    ctx->pc = 0x162744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16940 << 16));
label_162748:
    // 0x162748: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x162748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16274c:
    // 0x16274c: 0x3c01432a  lui         $at, 0x432A
    ctx->pc = 0x16274cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17194 << 16));
label_162750:
    // 0x162750: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x162750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162754:
    // 0x162754: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x162754u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_162758:
    // 0x162758: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x162758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_16275c:
    // 0x16275c: 0xe7a2010c  swc1        $f2, 0x10C($sp)
    ctx->pc = 0x16275cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_162760:
    // 0x162760: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x162760u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_162764:
    // 0x162764: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x162764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_162768:
    // 0x162768: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x162768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_16276c:
    // 0x16276c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x16276cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_162770:
    // 0x162770: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x162770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_162774:
    // 0x162774: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x162774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_162778:
    // 0x162778: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16277c:
    // 0x16277c: 0x3c01be92  lui         $at, 0xBE92
    ctx->pc = 0x16277cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48786 << 16));
label_162780:
    // 0x162780: 0x34216e98  ori         $at, $at, 0x6E98
    ctx->pc = 0x162780u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28312);
label_162784:
    // 0x162784: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x162784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_162788:
    // 0x162788: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x162788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16278c:
    // 0x16278c: 0x3c014333  lui         $at, 0x4333
    ctx->pc = 0x16278cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17203 << 16));
label_162790:
    // 0x162790: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x162790u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_162794:
    // 0x162794: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x162794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_162798:
    // 0x162798: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_16279c:
    if (ctx->pc == 0x16279Cu) {
        ctx->pc = 0x16279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162798u;
        // 0x16279c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1627A0u;
        goto label_1627a0;
    }
    ctx->pc = 0x162798u;
    {
        const bool branch_taken_0x162798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162798u;
        // 0x16279c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162798) {
            ctx->pc = 0x1627F8u;
            goto label_1627f8;
        }
    }
    ctx->pc = 0x1627A0u;
label_1627a0:
    // 0x1627a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1627a4:
    if (ctx->pc == 0x1627A4u) {
        ctx->pc = 0x1627A8u;
        goto label_1627a8;
    }
    ctx->pc = 0x1627A0u;
    {
        const bool branch_taken_0x1627a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1627a0) {
            ctx->pc = 0x1627D0u;
            goto label_1627d0;
        }
    }
    ctx->pc = 0x1627A8u;
label_1627a8:
    // 0x1627a8: 0x3c013e32  lui         $at, 0x3E32
    ctx->pc = 0x1627a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15922 << 16));
label_1627ac:
    // 0x1627ac: 0x34212d0e  ori         $at, $at, 0x2D0E
    ctx->pc = 0x1627acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11534);
label_1627b0:
    // 0x1627b0: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1627b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_1627b4:
    // 0x1627b4: 0x3c01be95  lui         $at, 0xBE95
    ctx->pc = 0x1627b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48789 << 16));
label_1627b8:
    // 0x1627b8: 0x34218106  ori         $at, $at, 0x8106
    ctx->pc = 0x1627b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33030);
label_1627bc:
    // 0x1627bc: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1627bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1627c0:
    // 0x1627c0: 0x3c014328  lui         $at, 0x4328
    ctx->pc = 0x1627c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17192 << 16));
label_1627c4:
    // 0x1627c4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1627c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1627c8:
    // 0x1627c8: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1627cc:
    if (ctx->pc == 0x1627CCu) {
        ctx->pc = 0x1627D0u;
        goto label_1627d0;
    }
    ctx->pc = 0x1627C8u;
    {
        const bool branch_taken_0x1627c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1627c8) {
            ctx->pc = 0x162888u;
            goto label_162888;
        }
    }
    ctx->pc = 0x1627D0u;
label_1627d0:
    // 0x1627d0: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x1627d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
label_1627d4:
    // 0x1627d4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1627d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1627d8:
    // 0x1627d8: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1627d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_1627dc:
    // 0x1627dc: 0x3c01be79  lui         $at, 0xBE79
    ctx->pc = 0x1627dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48761 << 16));
label_1627e0:
    // 0x1627e0: 0x3421db23  ori         $at, $at, 0xDB23
    ctx->pc = 0x1627e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56099);
label_1627e4:
    // 0x1627e4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1627e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1627e8:
    // 0x1627e8: 0x3c01434d  lui         $at, 0x434D
    ctx->pc = 0x1627e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17229 << 16));
label_1627ec:
    // 0x1627ec: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1627ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1627f0:
    // 0x1627f0: 0x10000025  b           . + 4 + (0x25 << 2)
label_1627f4:
    if (ctx->pc == 0x1627F4u) {
        ctx->pc = 0x1627F8u;
        goto label_1627f8;
    }
    ctx->pc = 0x1627F0u;
    {
        const bool branch_taken_0x1627f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1627f0) {
            ctx->pc = 0x162888u;
            goto label_162888;
        }
    }
    ctx->pc = 0x1627F8u;
label_1627f8:
    // 0x1627f8: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1627f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1627fc:
    // 0x1627fc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_162800:
    if (ctx->pc == 0x162800u) {
        ctx->pc = 0x162800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1627FCu;
        // 0x162800: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x162804u;
        goto label_162804;
    }
    ctx->pc = 0x1627FCu;
    {
        const bool branch_taken_0x1627fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1627FCu;
        // 0x162800: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1627fc) {
            ctx->pc = 0x162834u;
            goto label_162834;
        }
    }
    ctx->pc = 0x162804u;
label_162804:
    // 0x162804: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_162808:
    if (ctx->pc == 0x162808u) {
        ctx->pc = 0x16280Cu;
        goto label_16280c;
    }
    ctx->pc = 0x162804u;
    {
        const bool branch_taken_0x162804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162804) {
            ctx->pc = 0x162888u;
            goto label_162888;
        }
    }
    ctx->pc = 0x16280Cu;
label_16280c:
    // 0x16280c: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x16280cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_162810:
    // 0x162810: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x162810u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_162814:
    // 0x162814: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x162814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_162818:
    // 0x162818: 0x3c01be9b  lui         $at, 0xBE9B
    ctx->pc = 0x162818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48795 << 16));
label_16281c:
    // 0x16281c: 0x342122d1  ori         $at, $at, 0x22D1
    ctx->pc = 0x16281cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8913);
label_162820:
    // 0x162820: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x162820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_162824:
    // 0x162824: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x162824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
label_162828:
    // 0x162828: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x162828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_16282c:
    // 0x16282c: 0x10000016  b           . + 4 + (0x16 << 2)
label_162830:
    if (ctx->pc == 0x162830u) {
        ctx->pc = 0x162834u;
        goto label_162834;
    }
    ctx->pc = 0x16282Cu;
    {
        const bool branch_taken_0x16282c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16282c) {
            ctx->pc = 0x162888u;
            goto label_162888;
        }
    }
    ctx->pc = 0x162834u;
label_162834:
    // 0x162834: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_162838:
    if (ctx->pc == 0x162838u) {
        ctx->pc = 0x16283Cu;
        goto label_16283c;
    }
    ctx->pc = 0x162834u;
    {
        const bool branch_taken_0x162834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162834) {
            ctx->pc = 0x162864u;
            goto label_162864;
        }
    }
    ctx->pc = 0x16283Cu;
label_16283c:
    // 0x16283c: 0x3c013e66  lui         $at, 0x3E66
    ctx->pc = 0x16283cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15974 << 16));
label_162840:
    // 0x162840: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x162840u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_162844:
    // 0x162844: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x162844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_162848:
    // 0x162848: 0x3c01beb4  lui         $at, 0xBEB4
    ctx->pc = 0x162848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48820 << 16));
label_16284c:
    // 0x16284c: 0x34213958  ori         $at, $at, 0x3958
    ctx->pc = 0x16284cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14680);
label_162850:
    // 0x162850: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x162850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_162854:
    // 0x162854: 0x3c014354  lui         $at, 0x4354
    ctx->pc = 0x162854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17236 << 16));
label_162858:
    // 0x162858: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x162858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_16285c:
    // 0x16285c: 0x1000000a  b           . + 4 + (0xA << 2)
label_162860:
    if (ctx->pc == 0x162860u) {
        ctx->pc = 0x162864u;
        goto label_162864;
    }
    ctx->pc = 0x16285Cu;
    {
        const bool branch_taken_0x16285c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16285c) {
            ctx->pc = 0x162888u;
            goto label_162888;
        }
    }
    ctx->pc = 0x162864u;
label_162864:
    // 0x162864: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x162864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_162868:
    // 0x162868: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x162868u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_16286c:
    // 0x16286c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x16286cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_162870:
    // 0x162870: 0x3c01bea7  lui         $at, 0xBEA7
    ctx->pc = 0x162870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48807 << 16));
label_162874:
    // 0x162874: 0x3421ef9e  ori         $at, $at, 0xEF9E
    ctx->pc = 0x162874u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61342);
label_162878:
    // 0x162878: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x162878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_16287c:
    // 0x16287c: 0x3c014388  lui         $at, 0x4388
    ctx->pc = 0x16287cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17288 << 16));
label_162880:
    // 0x162880: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x162880u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
label_162884:
    // 0x162884: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x162884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_162888:
    // 0x162888: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x162888u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16288c:
    // 0x16288c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x16288cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_162890:
    // 0x162890: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x162890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_162894:
    // 0x162894: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x162894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_162898:
    // 0x162898: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x162898u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_16289c:
    // 0x16289c: 0xc05eb2a  jal         func_17ACA8
label_1628a0:
    if (ctx->pc == 0x1628A0u) {
        ctx->pc = 0x1628A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16289Cu;
        // 0x1628a0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1628A4u;
        goto label_1628a4;
    }
    ctx->pc = 0x16289Cu;
    SET_GPR_U32(ctx, 31, 0x1628A4u);
    ctx->pc = 0x1628A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16289Cu;
    // 0x1628a0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ACA8u, 0x16289Cu, 0x1628A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1628A4u;
label_1628a4:
    // 0x1628a4: 0x8e05cdb4  lw          $a1, -0x324C($s0)
    ctx->pc = 0x1628a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_1628a8:
    // 0x1628a8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1628a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1628ac:
    // 0x1628ac: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x1628acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_1628b0:
    // 0x1628b0: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1628b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1628b4:
    // 0x1628b4: 0x40f809  jalr        $v0
label_1628b8:
    if (ctx->pc == 0x1628B8u) {
        ctx->pc = 0x1628B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628B4u;
        // 0x1628b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1628BCu;
        goto label_1628bc;
    }
    ctx->pc = 0x1628B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1628BCu);
        ctx->pc = 0x1628B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628B4u;
        // 0x1628b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1628B4u, 0x1628BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1628BCu;
label_1628bc:
    // 0x1628bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1628bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1628c0:
    // 0x1628c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1628c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1628c4:
    // 0x1628c4: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1628c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1628c8:
    // 0x1628c8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1628c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1628cc:
    // 0x1628cc: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1628ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1628d0:
    // 0x1628d0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1628d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1628d4:
    // 0x1628d4: 0x40f809  jalr        $v0
label_1628d8:
    if (ctx->pc == 0x1628D8u) {
        ctx->pc = 0x1628D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628D4u;
        // 0x1628d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1628DCu;
        goto label_1628dc;
    }
    ctx->pc = 0x1628D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1628DCu);
        ctx->pc = 0x1628D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628D4u;
        // 0x1628d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1628D4u, 0x1628DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1628DCu;
label_1628dc:
    // 0x1628dc: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1628dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1628e0:
    // 0x1628e0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1628e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1628e4:
    // 0x1628e4: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
label_1628e8:
    if (ctx->pc == 0x1628E8u) {
        ctx->pc = 0x1628E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628E4u;
        // 0x1628e8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1628ECu;
        goto label_1628ec;
    }
    ctx->pc = 0x1628E4u;
    {
        const bool branch_taken_0x1628e4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1628e4) {
            ctx->pc = 0x1628E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1628E4u;
            // 0x1628e8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162900u;
            goto label_162900;
        }
    }
    ctx->pc = 0x1628ECu;
label_1628ec:
    // 0x1628ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1628ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1628f0:
    // 0x1628f0: 0x0  nop
    ctx->pc = 0x1628f0u;
    // NOP
label_1628f4:
    // 0x1628f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1628f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1628f8:
    // 0x1628f8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1628fc:
    if (ctx->pc == 0x1628FCu) {
        ctx->pc = 0x1628FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628F8u;
        // 0x1628fc: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162900u;
        goto label_162900;
    }
    ctx->pc = 0x1628F8u;
    {
        const bool branch_taken_0x1628f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1628FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628F8u;
        // 0x1628fc: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1628f8) {
            ctx->pc = 0x162920u;
            goto label_162920;
        }
    }
    ctx->pc = 0x162900u;
label_162900:
    // 0x162900: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x162900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_162904:
    // 0x162904: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x162904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_162908:
    // 0x162908: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x162908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16290c:
    // 0x16290c: 0x0  nop
    ctx->pc = 0x16290cu;
    // NOP
label_162910:
    // 0x162910: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x162910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_162914:
    // 0x162914: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x162914u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_162918:
    // 0x162918: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x162918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_16291c:
    // 0x16291c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x16291cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_162920:
    // 0x162920: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x162920u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_162924:
    // 0x162924: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_162928:
    if (ctx->pc == 0x162928u) {
        ctx->pc = 0x162928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162924u;
        // 0x162928: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16292Cu;
        goto label_16292c;
    }
    ctx->pc = 0x162924u;
    {
        const bool branch_taken_0x162924 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x162928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162924u;
        // 0x162928: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162924) {
            ctx->pc = 0x162940u;
            goto label_162940;
        }
    }
    ctx->pc = 0x16292Cu;
label_16292c:
    // 0x16292c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16292cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162930:
    // 0x162930: 0x0  nop
    ctx->pc = 0x162930u;
    // NOP
label_162934:
    // 0x162934: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x162934u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_162938:
    // 0x162938: 0x10000008  b           . + 4 + (0x8 << 2)
label_16293c:
    if (ctx->pc == 0x16293Cu) {
        ctx->pc = 0x16293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162938u;
        // 0x16293c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162940u;
        goto label_162940;
    }
    ctx->pc = 0x162938u;
    {
        const bool branch_taken_0x162938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162938u;
        // 0x16293c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162938) {
            ctx->pc = 0x16295Cu;
            goto label_16295c;
        }
    }
    ctx->pc = 0x162940u;
label_162940:
    // 0x162940: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x162940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_162944:
    // 0x162944: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x162944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_162948:
    // 0x162948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16294c:
    // 0x16294c: 0x0  nop
    ctx->pc = 0x16294cu;
    // NOP
label_162950:
    // 0x162950: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x162950u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_162954:
    // 0x162954: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x162954u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_162958:
    // 0x162958: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x162958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_16295c:
    // 0x16295c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x16295cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_162960:
    // 0x162960: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x162960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_162964:
    // 0x162964: 0x24631780  addiu       $v1, $v1, 0x1780
    ctx->pc = 0x162964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6016));
label_162968:
    // 0x162968: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x162968u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_16296c:
    // 0x16296c: 0x0  nop
    ctx->pc = 0x16296cu;
    // NOP
label_162970:
    // 0x162970: 0x0  nop
    ctx->pc = 0x162970u;
    // NOP
label_162974:
    // 0x162974: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x162974u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_162978:
    // 0x162978: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x162978u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_16297c:
    // 0x16297c: 0x7fa40110  sq          $a0, 0x110($sp)
    ctx->pc = 0x16297cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 4));
label_162980:
    // 0x162980: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x162980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_162984:
    // 0x162984: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x162984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_162988:
    // 0x162988: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x162988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_16298c:
    // 0x16298c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16298cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_162990:
    // 0x162990: 0x4615a569  min.s       $f21, $f20, $f21
    ctx->pc = 0x162990u;
    ctx->f[21] = std::min(ctx->f[20], ctx->f[21]);
label_162994:
    // 0x162994: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x162994u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_162998:
    // 0x162998: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x162998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_16299c:
    // 0x16299c: 0x60f809  jalr        $v1
label_1629a0:
    if (ctx->pc == 0x1629A0u) {
        ctx->pc = 0x1629A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16299Cu;
        // 0x1629a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1629A4u;
        goto label_1629a4;
    }
    ctx->pc = 0x16299Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1629A4u);
        ctx->pc = 0x1629A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16299Cu;
        // 0x1629a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16299Cu, 0x1629A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1629A4u;
label_1629a4:
    // 0x1629a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1629a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1629a8:
    // 0x1629a8: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x1629a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1629ac:
    // 0x1629ac: 0xc440c7e4  lwc1        $f0, -0x381C($v0)
    ctx->pc = 0x1629acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1629b0:
    // 0x1629b0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1629b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1629b4:
    // 0x1629b4: 0xe7b80130  swc1        $f24, 0x130($sp)
    ctx->pc = 0x1629b4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1629b8:
    // 0x1629b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1629b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1629bc:
    // 0x1629bc: 0xe7b70134  swc1        $f23, 0x134($sp)
    ctx->pc = 0x1629bcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_1629c0:
    // 0x1629c0: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x1629c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1629c4:
    // 0x1629c4: 0xc066118  jal         func_198460
label_1629c8:
    if (ctx->pc == 0x1629C8u) {
        ctx->pc = 0x1629C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1629C4u;
        // 0x1629c8: 0xe474000c  swc1        $f20, 0xC($v1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1629CCu;
        goto label_1629cc;
    }
    ctx->pc = 0x1629C4u;
    SET_GPR_U32(ctx, 31, 0x1629CCu);
    ctx->pc = 0x1629C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1629C4u;
    // 0x1629c8: 0xe474000c  swc1        $f20, 0xC($v1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x198460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198460u, 0x1629C4u, 0x1629CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1629CCu;
label_1629cc:
    // 0x1629cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1629ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1629d0:
    // 0x1629d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1629d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1629d4:
    // 0x1629d4: 0xc442c7e8  lwc1        $f2, -0x3818($v0)
    ctx->pc = 0x1629d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1629d8:
    // 0x1629d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1629d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1629dc:
    // 0x1629dc: 0x0  nop
    ctx->pc = 0x1629dcu;
    // NOP
label_1629e0:
    // 0x1629e0: 0x51042  srl         $v0, $a1, 1
    ctx->pc = 0x1629e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_1629e4:
    // 0x1629e4: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
label_1629e8:
    if (ctx->pc == 0x1629E8u) {
        ctx->pc = 0x1629E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1629E4u;
        // 0x1629e8: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1629ECu;
        goto label_1629ec;
    }
    ctx->pc = 0x1629E4u;
    {
        const bool branch_taken_0x1629e4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1629e4) {
            ctx->pc = 0x1629E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1629E4u;
            // 0x1629e8: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x162A00u;
            goto label_162a00;
        }
    }
    ctx->pc = 0x1629ECu;
label_1629ec:
    // 0x1629ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1629ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1629f0:
    // 0x1629f0: 0x0  nop
    ctx->pc = 0x1629f0u;
    // NOP
label_1629f4:
    // 0x1629f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1629f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1629f8:
    // 0x1629f8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1629fc:
    if (ctx->pc == 0x1629FCu) {
        ctx->pc = 0x1629FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1629F8u;
        // 0x1629fc: 0x46160002  mul.s       $f0, $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x162A00u;
        goto label_162a00;
    }
    ctx->pc = 0x1629F8u;
    {
        const bool branch_taken_0x1629f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1629FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1629F8u;
        // 0x1629fc: 0x46160002  mul.s       $f0, $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1629f8) {
            ctx->pc = 0x162A1Cu;
            goto label_162a1c;
        }
    }
    ctx->pc = 0x162A00u;
label_162a00:
    // 0x162a00: 0x51882  srl         $v1, $a1, 2
    ctx->pc = 0x162a00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
label_162a04:
    // 0x162a04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x162a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_162a08:
    // 0x162a08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162a08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162a0c:
    // 0x162a0c: 0x0  nop
    ctx->pc = 0x162a0cu;
    // NOP
label_162a10:
    // 0x162a10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x162a10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_162a14:
    // 0x162a14: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x162a14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_162a18:
    // 0x162a18: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x162a18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_162a1c:
    // 0x162a1c: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x162a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162a20:
    // 0x162a20: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x162a20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_162a24:
    // 0x162a24: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x162a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_162a28:
    // 0x162a28: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x162a28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_162a2c:
    // 0x162a2c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x162a2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_162a30:
    // 0x162a30: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_162a34:
    if (ctx->pc == 0x162A34u) {
        ctx->pc = 0x162A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A30u;
        // 0x162a34: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x162A38u;
        goto label_162a38;
    }
    ctx->pc = 0x162A30u;
    {
        const bool branch_taken_0x162a30 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x162A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A30u;
        // 0x162a34: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a30) {
            ctx->pc = 0x162A4Cu;
            goto label_162a4c;
        }
    }
    ctx->pc = 0x162A38u;
label_162a38:
    // 0x162a38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x162a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_162a3c:
    // 0x162a3c: 0x0  nop
    ctx->pc = 0x162a3cu;
    // NOP
label_162a40:
    // 0x162a40: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x162a40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_162a44:
    // 0x162a44: 0x10000006  b           . + 4 + (0x6 << 2)
label_162a48:
    if (ctx->pc == 0x162A48u) {
        ctx->pc = 0x162A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A44u;
        // 0x162a48: 0x46020842  mul.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x162A4Cu;
        goto label_162a4c;
    }
    ctx->pc = 0x162A44u;
    {
        const bool branch_taken_0x162a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A44u;
        // 0x162a48: 0x46020842  mul.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a44) {
            ctx->pc = 0x162A60u;
            goto label_162a60;
        }
    }
    ctx->pc = 0x162A4Cu;
label_162a4c:
    // 0x162a4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x162a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_162a50:
    // 0x162a50: 0x0  nop
    ctx->pc = 0x162a50u;
    // NOP
label_162a54:
    // 0x162a54: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x162a54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_162a58:
    // 0x162a58: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x162a58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_162a5c:
    // 0x162a5c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x162a5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_162a60:
    // 0x162a60: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x162a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_162a64:
    // 0x162a64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x162a64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_162a68:
    // 0x162a68: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x162a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_162a6c:
    // 0x162a6c: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x162a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162a70:
    // 0x162a70: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x162a70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_162a74:
    // 0x162a74: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x162a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_162a78:
    // 0x162a78: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x162a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_162a7c:
    // 0x162a7c: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x162a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162a80:
    // 0x162a80: 0xe4810024  swc1        $f1, 0x24($a0)
    ctx->pc = 0x162a80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_162a84:
    // 0x162a84: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x162a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_162a88:
    // 0x162a88: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x162a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_162a8c:
    // 0x162a8c: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x162a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162a90:
    // 0x162a90: 0xe481002c  swc1        $f1, 0x2C($a0)
    ctx->pc = 0x162a90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_162a94:
    // 0x162a94: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x162a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_162a98:
    // 0x162a98: 0x0  nop
    ctx->pc = 0x162a98u;
    // NOP
label_162a9c:
    // 0x162a9c: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x162a9cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_162aa0:
    // 0x162aa0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x162aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_162aa4:
    // 0x162aa4: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x162aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_162aa8:
    // 0x162aa8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x162aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_162aac:
    // 0x162aac: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x162aacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_162ab0:
    // 0x162ab0: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x162ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_162ab4:
    // 0x162ab4: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
label_162ab8:
    if (ctx->pc == 0x162AB8u) {
        ctx->pc = 0x162AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162AB4u;
        // 0x162ab8: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162ABCu;
        goto label_162abc;
    }
    ctx->pc = 0x162AB4u;
    {
        const bool branch_taken_0x162ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162AB4u;
        // 0x162ab8: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162ab4) {
            ctx->pc = 0x1629E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1629e0;
        }
    }
    ctx->pc = 0x162ABCu;
label_162abc:
    // 0x162abc: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x162abcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_162ac0:
    // 0x162ac0: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x162ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_162ac4:
    // 0x162ac4: 0x2610ad28  addiu       $s0, $s0, -0x52D8
    ctx->pc = 0x162ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946088));
label_162ac8:
    // 0x162ac8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x162ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_162acc:
    // 0x162acc: 0x40f809  jalr        $v0
label_162ad0:
    if (ctx->pc == 0x162AD0u) {
        ctx->pc = 0x162AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162ACCu;
        // 0x162ad0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162AD4u;
        goto label_162ad4;
    }
    ctx->pc = 0x162ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162AD4u);
        ctx->pc = 0x162AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162ACCu;
        // 0x162ad0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162ACCu, 0x162AD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162AD4u;
label_162ad4:
    // 0x162ad4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x162ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_162ad8:
    // 0x162ad8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x162ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_162adc:
    // 0x162adc: 0x40f809  jalr        $v0
label_162ae0:
    if (ctx->pc == 0x162AE0u) {
        ctx->pc = 0x162AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162ADCu;
        // 0x162ae0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162AE4u;
        goto label_162ae4;
    }
    ctx->pc = 0x162ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162AE4u);
        ctx->pc = 0x162AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162ADCu;
        // 0x162ae0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162ADCu, 0x162AE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162AE4u;
label_162ae4:
    // 0x162ae4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x162ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_162ae8:
    // 0x162ae8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x162ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_162aec:
    // 0x162aec: 0x40f809  jalr        $v0
label_162af0:
    if (ctx->pc == 0x162AF0u) {
        ctx->pc = 0x162AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162AECu;
        // 0x162af0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162AF4u;
        goto label_162af4;
    }
    ctx->pc = 0x162AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162AF4u);
        ctx->pc = 0x162AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162AECu;
        // 0x162af0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162AECu, 0x162AF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162AF4u;
label_162af4:
    // 0x162af4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x162af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_162af8:
    // 0x162af8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x162af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_162afc:
    // 0x162afc: 0x40f809  jalr        $v0
label_162b00:
    if (ctx->pc == 0x162B00u) {
        ctx->pc = 0x162B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162AFCu;
        // 0x162b00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162B04u;
        goto label_162b04;
    }
    ctx->pc = 0x162AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162B04u);
        ctx->pc = 0x162B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162AFCu;
        // 0x162b00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162AFCu, 0x162B04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162B04u;
label_162b04:
    // 0x162b04: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x162b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_162b08:
    // 0x162b08: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x162b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_162b0c:
    // 0x162b0c: 0x40f809  jalr        $v0
label_162b10:
    if (ctx->pc == 0x162B10u) {
        ctx->pc = 0x162B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B0Cu;
        // 0x162b10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162B14u;
        goto label_162b14;
    }
    ctx->pc = 0x162B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162B14u);
        ctx->pc = 0x162B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B0Cu;
        // 0x162b10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162B0Cu, 0x162B14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162B14u;
label_162b14:
    // 0x162b14: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x162b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_162b18:
    // 0x162b18: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x162b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_162b1c:
    // 0x162b1c: 0x40f809  jalr        $v0
label_162b20:
    if (ctx->pc == 0x162B20u) {
        ctx->pc = 0x162B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B1Cu;
        // 0x162b20: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162B24u;
        goto label_162b24;
    }
    ctx->pc = 0x162B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162B24u);
        ctx->pc = 0x162B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B1Cu;
        // 0x162b20: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162B1Cu, 0x162B24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162B24u;
label_162b24:
    // 0x162b24: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x162b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_162b28:
    // 0x162b28: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x162b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_162b2c:
    // 0x162b2c: 0x40f809  jalr        $v0
label_162b30:
    if (ctx->pc == 0x162B30u) {
        ctx->pc = 0x162B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B2Cu;
        // 0x162b30: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162B34u;
        goto label_162b34;
    }
    ctx->pc = 0x162B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162B34u);
        ctx->pc = 0x162B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B2Cu;
        // 0x162b30: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162B2Cu, 0x162B34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162B34u;
label_162b34:
    // 0x162b34: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x162b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_162b38:
    // 0x162b38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x162b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162b3c:
    // 0x162b3c: 0x40f809  jalr        $v0
label_162b40:
    if (ctx->pc == 0x162B40u) {
        ctx->pc = 0x162B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B3Cu;
        // 0x162b40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162B44u;
        goto label_162b44;
    }
    ctx->pc = 0x162B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162B44u);
        ctx->pc = 0x162B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B3Cu;
        // 0x162b40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162B3Cu, 0x162B44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162B44u;
label_162b44:
    // 0x162b44: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x162b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_162b48:
    // 0x162b48: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x162b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_162b4c:
    // 0x162b4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x162b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_162b50:
    // 0x162b50: 0x40f809  jalr        $v0
label_162b54:
    if (ctx->pc == 0x162B54u) {
        ctx->pc = 0x162B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B50u;
        // 0x162b54: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162B58u;
        goto label_162b58;
    }
    ctx->pc = 0x162B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162B58u);
        ctx->pc = 0x162B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B50u;
        // 0x162b54: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162B50u, 0x162B58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162B58u;
label_162b58:
    // 0x162b58: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x162b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_162b5c:
    // 0x162b5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162b60:
    // 0x162b60: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x162b60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_162b64:
    // 0x162b64: 0xdfbf0150  ld          $ra, 0x150($sp)
    ctx->pc = 0x162b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_162b68:
    // 0x162b68: 0xc7b801a0  lwc1        $f24, 0x1A0($sp)
    ctx->pc = 0x162b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_162b6c:
    // 0x162b6c: 0xc7b70198  lwc1        $f23, 0x198($sp)
    ctx->pc = 0x162b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_162b70:
    // 0x162b70: 0xc7b60190  lwc1        $f22, 0x190($sp)
    ctx->pc = 0x162b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_162b74:
    // 0x162b74: 0xc7b50188  lwc1        $f21, 0x188($sp)
    ctx->pc = 0x162b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_162b78:
    // 0x162b78: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x162b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_162b7c:
    // 0x162b7c: 0x3e00008  jr          $ra
label_162b80:
    if (ctx->pc == 0x162B80u) {
        ctx->pc = 0x162B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B7Cu;
        // 0x162b80: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162B84u;
        goto label_162b84;
    }
    ctx->pc = 0x162B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B7Cu;
        // 0x162b80: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162B84u;
label_162b84:
    // 0x162b84: 0x0  nop
    ctx->pc = 0x162b84u;
    // NOP
    ctx->pc = 0x162b88u;
}
