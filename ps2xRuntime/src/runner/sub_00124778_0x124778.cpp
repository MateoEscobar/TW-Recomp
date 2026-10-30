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

// Function: sub_00124778
// Address: 0x124778 - 0x124be0
void sub_00124778_0x124778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124778_0x124778");
#endif

    switch (ctx->pc) {
        case 0x124778u: goto label_124778;
        case 0x12477cu: goto label_12477c;
        case 0x124780u: goto label_124780;
        case 0x124784u: goto label_124784;
        case 0x124788u: goto label_124788;
        case 0x12478cu: goto label_12478c;
        case 0x124790u: goto label_124790;
        case 0x124794u: goto label_124794;
        case 0x124798u: goto label_124798;
        case 0x12479cu: goto label_12479c;
        case 0x1247a0u: goto label_1247a0;
        case 0x1247a4u: goto label_1247a4;
        case 0x1247a8u: goto label_1247a8;
        case 0x1247acu: goto label_1247ac;
        case 0x1247b0u: goto label_1247b0;
        case 0x1247b4u: goto label_1247b4;
        case 0x1247b8u: goto label_1247b8;
        case 0x1247bcu: goto label_1247bc;
        case 0x1247c0u: goto label_1247c0;
        case 0x1247c4u: goto label_1247c4;
        case 0x1247c8u: goto label_1247c8;
        case 0x1247ccu: goto label_1247cc;
        case 0x1247d0u: goto label_1247d0;
        case 0x1247d4u: goto label_1247d4;
        case 0x1247d8u: goto label_1247d8;
        case 0x1247dcu: goto label_1247dc;
        case 0x1247e0u: goto label_1247e0;
        case 0x1247e4u: goto label_1247e4;
        case 0x1247e8u: goto label_1247e8;
        case 0x1247ecu: goto label_1247ec;
        case 0x1247f0u: goto label_1247f0;
        case 0x1247f4u: goto label_1247f4;
        case 0x1247f8u: goto label_1247f8;
        case 0x1247fcu: goto label_1247fc;
        case 0x124800u: goto label_124800;
        case 0x124804u: goto label_124804;
        case 0x124808u: goto label_124808;
        case 0x12480cu: goto label_12480c;
        case 0x124810u: goto label_124810;
        case 0x124814u: goto label_124814;
        case 0x124818u: goto label_124818;
        case 0x12481cu: goto label_12481c;
        case 0x124820u: goto label_124820;
        case 0x124824u: goto label_124824;
        case 0x124828u: goto label_124828;
        case 0x12482cu: goto label_12482c;
        case 0x124830u: goto label_124830;
        case 0x124834u: goto label_124834;
        case 0x124838u: goto label_124838;
        case 0x12483cu: goto label_12483c;
        case 0x124840u: goto label_124840;
        case 0x124844u: goto label_124844;
        case 0x124848u: goto label_124848;
        case 0x12484cu: goto label_12484c;
        case 0x124850u: goto label_124850;
        case 0x124854u: goto label_124854;
        case 0x124858u: goto label_124858;
        case 0x12485cu: goto label_12485c;
        case 0x124860u: goto label_124860;
        case 0x124864u: goto label_124864;
        case 0x124868u: goto label_124868;
        case 0x12486cu: goto label_12486c;
        case 0x124870u: goto label_124870;
        case 0x124874u: goto label_124874;
        case 0x124878u: goto label_124878;
        case 0x12487cu: goto label_12487c;
        case 0x124880u: goto label_124880;
        case 0x124884u: goto label_124884;
        case 0x124888u: goto label_124888;
        case 0x12488cu: goto label_12488c;
        case 0x124890u: goto label_124890;
        case 0x124894u: goto label_124894;
        case 0x124898u: goto label_124898;
        case 0x12489cu: goto label_12489c;
        case 0x1248a0u: goto label_1248a0;
        case 0x1248a4u: goto label_1248a4;
        case 0x1248a8u: goto label_1248a8;
        case 0x1248acu: goto label_1248ac;
        case 0x1248b0u: goto label_1248b0;
        case 0x1248b4u: goto label_1248b4;
        case 0x1248b8u: goto label_1248b8;
        case 0x1248bcu: goto label_1248bc;
        case 0x1248c0u: goto label_1248c0;
        case 0x1248c4u: goto label_1248c4;
        case 0x1248c8u: goto label_1248c8;
        case 0x1248ccu: goto label_1248cc;
        case 0x1248d0u: goto label_1248d0;
        case 0x1248d4u: goto label_1248d4;
        case 0x1248d8u: goto label_1248d8;
        case 0x1248dcu: goto label_1248dc;
        case 0x1248e0u: goto label_1248e0;
        case 0x1248e4u: goto label_1248e4;
        case 0x1248e8u: goto label_1248e8;
        case 0x1248ecu: goto label_1248ec;
        case 0x1248f0u: goto label_1248f0;
        case 0x1248f4u: goto label_1248f4;
        case 0x1248f8u: goto label_1248f8;
        case 0x1248fcu: goto label_1248fc;
        case 0x124900u: goto label_124900;
        case 0x124904u: goto label_124904;
        case 0x124908u: goto label_124908;
        case 0x12490cu: goto label_12490c;
        case 0x124910u: goto label_124910;
        case 0x124914u: goto label_124914;
        case 0x124918u: goto label_124918;
        case 0x12491cu: goto label_12491c;
        case 0x124920u: goto label_124920;
        case 0x124924u: goto label_124924;
        case 0x124928u: goto label_124928;
        case 0x12492cu: goto label_12492c;
        case 0x124930u: goto label_124930;
        case 0x124934u: goto label_124934;
        case 0x124938u: goto label_124938;
        case 0x12493cu: goto label_12493c;
        case 0x124940u: goto label_124940;
        case 0x124944u: goto label_124944;
        case 0x124948u: goto label_124948;
        case 0x12494cu: goto label_12494c;
        case 0x124950u: goto label_124950;
        case 0x124954u: goto label_124954;
        case 0x124958u: goto label_124958;
        case 0x12495cu: goto label_12495c;
        case 0x124960u: goto label_124960;
        case 0x124964u: goto label_124964;
        case 0x124968u: goto label_124968;
        case 0x12496cu: goto label_12496c;
        case 0x124970u: goto label_124970;
        case 0x124974u: goto label_124974;
        case 0x124978u: goto label_124978;
        case 0x12497cu: goto label_12497c;
        case 0x124980u: goto label_124980;
        case 0x124984u: goto label_124984;
        case 0x124988u: goto label_124988;
        case 0x12498cu: goto label_12498c;
        case 0x124990u: goto label_124990;
        case 0x124994u: goto label_124994;
        case 0x124998u: goto label_124998;
        case 0x12499cu: goto label_12499c;
        case 0x1249a0u: goto label_1249a0;
        case 0x1249a4u: goto label_1249a4;
        case 0x1249a8u: goto label_1249a8;
        case 0x1249acu: goto label_1249ac;
        case 0x1249b0u: goto label_1249b0;
        case 0x1249b4u: goto label_1249b4;
        case 0x1249b8u: goto label_1249b8;
        case 0x1249bcu: goto label_1249bc;
        case 0x1249c0u: goto label_1249c0;
        case 0x1249c4u: goto label_1249c4;
        case 0x1249c8u: goto label_1249c8;
        case 0x1249ccu: goto label_1249cc;
        case 0x1249d0u: goto label_1249d0;
        case 0x1249d4u: goto label_1249d4;
        case 0x1249d8u: goto label_1249d8;
        case 0x1249dcu: goto label_1249dc;
        case 0x1249e0u: goto label_1249e0;
        case 0x1249e4u: goto label_1249e4;
        case 0x1249e8u: goto label_1249e8;
        case 0x1249ecu: goto label_1249ec;
        case 0x1249f0u: goto label_1249f0;
        case 0x1249f4u: goto label_1249f4;
        case 0x1249f8u: goto label_1249f8;
        case 0x1249fcu: goto label_1249fc;
        case 0x124a00u: goto label_124a00;
        case 0x124a04u: goto label_124a04;
        case 0x124a08u: goto label_124a08;
        case 0x124a0cu: goto label_124a0c;
        case 0x124a10u: goto label_124a10;
        case 0x124a14u: goto label_124a14;
        case 0x124a18u: goto label_124a18;
        case 0x124a1cu: goto label_124a1c;
        case 0x124a20u: goto label_124a20;
        case 0x124a24u: goto label_124a24;
        case 0x124a28u: goto label_124a28;
        case 0x124a2cu: goto label_124a2c;
        case 0x124a30u: goto label_124a30;
        case 0x124a34u: goto label_124a34;
        case 0x124a38u: goto label_124a38;
        case 0x124a3cu: goto label_124a3c;
        case 0x124a40u: goto label_124a40;
        case 0x124a44u: goto label_124a44;
        case 0x124a48u: goto label_124a48;
        case 0x124a4cu: goto label_124a4c;
        case 0x124a50u: goto label_124a50;
        case 0x124a54u: goto label_124a54;
        case 0x124a58u: goto label_124a58;
        case 0x124a5cu: goto label_124a5c;
        case 0x124a60u: goto label_124a60;
        case 0x124a64u: goto label_124a64;
        case 0x124a68u: goto label_124a68;
        case 0x124a6cu: goto label_124a6c;
        case 0x124a70u: goto label_124a70;
        case 0x124a74u: goto label_124a74;
        case 0x124a78u: goto label_124a78;
        case 0x124a7cu: goto label_124a7c;
        case 0x124a80u: goto label_124a80;
        case 0x124a84u: goto label_124a84;
        case 0x124a88u: goto label_124a88;
        case 0x124a8cu: goto label_124a8c;
        case 0x124a90u: goto label_124a90;
        case 0x124a94u: goto label_124a94;
        case 0x124a98u: goto label_124a98;
        case 0x124a9cu: goto label_124a9c;
        case 0x124aa0u: goto label_124aa0;
        case 0x124aa4u: goto label_124aa4;
        case 0x124aa8u: goto label_124aa8;
        case 0x124aacu: goto label_124aac;
        case 0x124ab0u: goto label_124ab0;
        case 0x124ab4u: goto label_124ab4;
        case 0x124ab8u: goto label_124ab8;
        case 0x124abcu: goto label_124abc;
        case 0x124ac0u: goto label_124ac0;
        case 0x124ac4u: goto label_124ac4;
        case 0x124ac8u: goto label_124ac8;
        case 0x124accu: goto label_124acc;
        case 0x124ad0u: goto label_124ad0;
        case 0x124ad4u: goto label_124ad4;
        case 0x124ad8u: goto label_124ad8;
        case 0x124adcu: goto label_124adc;
        case 0x124ae0u: goto label_124ae0;
        case 0x124ae4u: goto label_124ae4;
        case 0x124ae8u: goto label_124ae8;
        case 0x124aecu: goto label_124aec;
        case 0x124af0u: goto label_124af0;
        case 0x124af4u: goto label_124af4;
        case 0x124af8u: goto label_124af8;
        case 0x124afcu: goto label_124afc;
        case 0x124b00u: goto label_124b00;
        case 0x124b04u: goto label_124b04;
        case 0x124b08u: goto label_124b08;
        case 0x124b0cu: goto label_124b0c;
        case 0x124b10u: goto label_124b10;
        case 0x124b14u: goto label_124b14;
        case 0x124b18u: goto label_124b18;
        case 0x124b1cu: goto label_124b1c;
        case 0x124b20u: goto label_124b20;
        case 0x124b24u: goto label_124b24;
        case 0x124b28u: goto label_124b28;
        case 0x124b2cu: goto label_124b2c;
        case 0x124b30u: goto label_124b30;
        case 0x124b34u: goto label_124b34;
        case 0x124b38u: goto label_124b38;
        case 0x124b3cu: goto label_124b3c;
        case 0x124b40u: goto label_124b40;
        case 0x124b44u: goto label_124b44;
        case 0x124b48u: goto label_124b48;
        case 0x124b4cu: goto label_124b4c;
        case 0x124b50u: goto label_124b50;
        case 0x124b54u: goto label_124b54;
        case 0x124b58u: goto label_124b58;
        case 0x124b5cu: goto label_124b5c;
        case 0x124b60u: goto label_124b60;
        case 0x124b64u: goto label_124b64;
        case 0x124b68u: goto label_124b68;
        case 0x124b6cu: goto label_124b6c;
        case 0x124b70u: goto label_124b70;
        case 0x124b74u: goto label_124b74;
        case 0x124b78u: goto label_124b78;
        case 0x124b7cu: goto label_124b7c;
        case 0x124b80u: goto label_124b80;
        case 0x124b84u: goto label_124b84;
        case 0x124b88u: goto label_124b88;
        case 0x124b8cu: goto label_124b8c;
        case 0x124b90u: goto label_124b90;
        case 0x124b94u: goto label_124b94;
        case 0x124b98u: goto label_124b98;
        case 0x124b9cu: goto label_124b9c;
        case 0x124ba0u: goto label_124ba0;
        case 0x124ba4u: goto label_124ba4;
        case 0x124ba8u: goto label_124ba8;
        case 0x124bacu: goto label_124bac;
        case 0x124bb0u: goto label_124bb0;
        case 0x124bb4u: goto label_124bb4;
        case 0x124bb8u: goto label_124bb8;
        case 0x124bbcu: goto label_124bbc;
        case 0x124bc0u: goto label_124bc0;
        case 0x124bc4u: goto label_124bc4;
        case 0x124bc8u: goto label_124bc8;
        case 0x124bccu: goto label_124bcc;
        case 0x124bd0u: goto label_124bd0;
        case 0x124bd4u: goto label_124bd4;
        case 0x124bd8u: goto label_124bd8;
        case 0x124bdcu: goto label_124bdc;
        default: break;
    }

    ctx->pc = 0x124778u;

label_124778:
    // 0x124778: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x124778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_12477c:
    // 0x12477c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x12477cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_124780:
    // 0x124780: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x124780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_124784:
    // 0x124784: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x124784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_124788:
    // 0x124788: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x124788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_12478c:
    // 0x12478c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x12478cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_124790:
    // 0x124790: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x124790u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_124794:
    // 0x124794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x124794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_124798:
    // 0x124798: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x124798u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12479c:
    // 0x12479c: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x12479cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1247a0:
    // 0x1247a0: 0x26110370  addiu       $s1, $s0, 0x370
    ctx->pc = 0x1247a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
label_1247a4:
    // 0x1247a4: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1247a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1247a8:
    // 0x1247a8: 0xc04821a  jal         func_120868
label_1247ac:
    if (ctx->pc == 0x1247ACu) {
        ctx->pc = 0x1247ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1247A8u;
        // 0x1247ac: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1247B0u;
        goto label_1247b0;
    }
    ctx->pc = 0x1247A8u;
    SET_GPR_U32(ctx, 31, 0x1247B0u);
    ctx->pc = 0x1247ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1247A8u;
    // 0x1247ac: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x120868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120868u, 0x1247A8u, 0x1247B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1247B0u;
label_1247b0:
    // 0x1247b0: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x1247b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
label_1247b4:
    // 0x1247b4: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1247b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1247b8:
    // 0x1247b8: 0x24635d50  addiu       $v1, $v1, 0x5D50
    ctx->pc = 0x1247b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23888));
label_1247bc:
    // 0x1247bc: 0xc4428a98  lwc1        $f2, -0x7568($v0)
    ctx->pc = 0x1247bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1247c0:
    // 0x1247c0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1247c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1247c4:
    // 0x1247c4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x1247c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_1247c8:
    // 0x1247c8: 0x3c01493f  lui         $at, 0x493F
    ctx->pc = 0x1247c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18751 << 16));
label_1247cc:
    // 0x1247cc: 0x34218800  ori         $at, $at, 0x8800
    ctx->pc = 0x1247ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34816);
label_1247d0:
    // 0x1247d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1247d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1247d4:
    // 0x1247d4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1247d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1247d8:
    // 0x1247d8: 0x8ce2bd30  lw          $v0, -0x42D0($a3)
    ctx->pc = 0x1247d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294950192)));
label_1247dc:
    // 0x1247dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1247dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1247e0:
    // 0x1247e0: 0x3c013f5f  lui         $at, 0x3F5F
    ctx->pc = 0x1247e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16223 << 16));
label_1247e4:
    // 0x1247e4: 0x342166f4  ori         $at, $at, 0x66F4
    ctx->pc = 0x1247e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26356);
label_1247e8:
    // 0x1247e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1247e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1247ec:
    // 0x1247ec: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1247ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1247f0:
    // 0x1247f0: 0xae02031c  sw          $v0, 0x31C($s0)
    ctx->pc = 0x1247f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 2));
label_1247f4:
    // 0x1247f4: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1247f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1247f8:
    // 0x1247f8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1247f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_1247fc:
    // 0x1247fc: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1247fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_124800:
    // 0x124800: 0x24a58a90  addiu       $a1, $a1, -0x7570
    ctx->pc = 0x124800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937232));
label_124804:
    // 0x124804: 0x8ce2bd30  lw          $v0, -0x42D0($a3)
    ctx->pc = 0x124804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294950192)));
label_124808:
    // 0x124808: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x124808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_12480c:
    // 0x12480c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12480cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_124810:
    // 0x124810: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x124810u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_124814:
    // 0x124814: 0x3c013e61  lui         $at, 0x3E61
    ctx->pc = 0x124814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15969 << 16));
label_124818:
    // 0x124818: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x124818u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_12481c:
    // 0x12481c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x12481cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_124820:
    // 0x124820: 0x3c01beb2  lui         $at, 0xBEB2
    ctx->pc = 0x124820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48818 << 16));
label_124824:
    // 0x124824: 0x3421b8c3  ori         $at, $at, 0xB8C3
    ctx->pc = 0x124824u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47299);
label_124828:
    // 0x124828: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x124828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_12482c:
    // 0x12482c: 0xe6000390  swc1        $f0, 0x390($s0)
    ctx->pc = 0x12482cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 912), bits); }
label_124830:
    // 0x124830: 0xe60103ac  swc1        $f1, 0x3AC($s0)
    ctx->pc = 0x124830u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 940), bits); }
label_124834:
    // 0x124834: 0xae020320  sw          $v0, 0x320($s0)
    ctx->pc = 0x124834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 2));
label_124838:
    // 0x124838: 0xe6040388  swc1        $f4, 0x388($s0)
    ctx->pc = 0x124838u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 904), bits); }
label_12483c:
    // 0x12483c: 0xe60303b0  swc1        $f3, 0x3B0($s0)
    ctx->pc = 0x12483cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 944), bits); }
label_124840:
    // 0x124840: 0xe606034c  swc1        $f6, 0x34C($s0)
    ctx->pc = 0x124840u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 844), bits); }
label_124844:
    // 0x124844: 0xe6020350  swc1        $f2, 0x350($s0)
    ctx->pc = 0x124844u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 848), bits); }
label_124848:
    // 0x124848: 0xe6020354  swc1        $f2, 0x354($s0)
    ctx->pc = 0x124848u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 852), bits); }
label_12484c:
    // 0x12484c: 0xe6050398  swc1        $f5, 0x398($s0)
    ctx->pc = 0x12484cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 920), bits); }
label_124850:
    // 0x124850: 0xe605039c  swc1        $f5, 0x39C($s0)
    ctx->pc = 0x124850u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 924), bits); }
label_124854:
    // 0x124854: 0xe60203a0  swc1        $f2, 0x3A0($s0)
    ctx->pc = 0x124854u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 928), bits); }
label_124858:
    // 0x124858: 0x3c0140d0  lui         $at, 0x40D0
    ctx->pc = 0x124858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16592 << 16));
label_12485c:
    // 0x12485c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12485cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_124860:
    // 0x124860: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x124860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
label_124864:
    // 0x124864: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x124864u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_124868:
    // 0x124868: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x124868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12486c:
    // 0x12486c: 0xae000324  sw          $zero, 0x324($s0)
    ctx->pc = 0x12486cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 804), GPR_U32(ctx, 0));
label_124870:
    // 0x124870: 0xae000328  sw          $zero, 0x328($s0)
    ctx->pc = 0x124870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 808), GPR_U32(ctx, 0));
label_124874:
    // 0x124874: 0xae000358  sw          $zero, 0x358($s0)
    ctx->pc = 0x124874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 856), GPR_U32(ctx, 0));
label_124878:
    // 0x124878: 0xae00035c  sw          $zero, 0x35C($s0)
    ctx->pc = 0x124878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 0));
label_12487c:
    // 0x12487c: 0xae000360  sw          $zero, 0x360($s0)
    ctx->pc = 0x12487cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
label_124880:
    // 0x124880: 0xae000364  sw          $zero, 0x364($s0)
    ctx->pc = 0x124880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 0));
label_124884:
    // 0x124884: 0xae000368  sw          $zero, 0x368($s0)
    ctx->pc = 0x124884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 0));
label_124888:
    // 0x124888: 0xae00036c  sw          $zero, 0x36C($s0)
    ctx->pc = 0x124888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 0));
label_12488c:
    // 0x12488c: 0xae000378  sw          $zero, 0x378($s0)
    ctx->pc = 0x12488cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 888), GPR_U32(ctx, 0));
label_124890:
    // 0x124890: 0xae00037c  sw          $zero, 0x37C($s0)
    ctx->pc = 0x124890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 892), GPR_U32(ctx, 0));
label_124894:
    // 0x124894: 0xae000380  sw          $zero, 0x380($s0)
    ctx->pc = 0x124894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 896), GPR_U32(ctx, 0));
label_124898:
    // 0x124898: 0xae000384  sw          $zero, 0x384($s0)
    ctx->pc = 0x124898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 0));
label_12489c:
    // 0x12489c: 0xae00038c  sw          $zero, 0x38C($s0)
    ctx->pc = 0x12489cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 908), GPR_U32(ctx, 0));
label_1248a0:
    // 0x1248a0: 0xae0003a4  sw          $zero, 0x3A4($s0)
    ctx->pc = 0x1248a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 932), GPR_U32(ctx, 0));
label_1248a4:
    // 0x1248a4: 0xae0003a8  sw          $zero, 0x3A8($s0)
    ctx->pc = 0x1248a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 936), GPR_U32(ctx, 0));
label_1248a8:
    // 0x1248a8: 0xae0003b8  sw          $zero, 0x3B8($s0)
    ctx->pc = 0x1248a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 0));
label_1248ac:
    // 0x1248ac: 0xae0003bc  sw          $zero, 0x3BC($s0)
    ctx->pc = 0x1248acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 956), GPR_U32(ctx, 0));
label_1248b0:
    // 0x1248b0: 0xae0003c0  sw          $zero, 0x3C0($s0)
    ctx->pc = 0x1248b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 0));
label_1248b4:
    // 0x1248b4: 0xe6000400  swc1        $f0, 0x400($s0)
    ctx->pc = 0x1248b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1024), bits); }
label_1248b8:
    // 0x1248b8: 0xe6010418  swc1        $f1, 0x418($s0)
    ctx->pc = 0x1248b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1048), bits); }
label_1248bc:
    // 0x1248bc: 0xe6050438  swc1        $f5, 0x438($s0)
    ctx->pc = 0x1248bcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1080), bits); }
label_1248c0:
    // 0x1248c0: 0xe602043c  swc1        $f2, 0x43C($s0)
    ctx->pc = 0x1248c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1084), bits); }
label_1248c4:
    // 0x1248c4: 0xe6060440  swc1        $f6, 0x440($s0)
    ctx->pc = 0x1248c4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1088), bits); }
label_1248c8:
    // 0x1248c8: 0xe60203d0  swc1        $f2, 0x3D0($s0)
    ctx->pc = 0x1248c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 976), bits); }
label_1248cc:
    // 0x1248cc: 0xe60203d4  swc1        $f2, 0x3D4($s0)
    ctx->pc = 0x1248ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 980), bits); }
label_1248d0:
    // 0x1248d0: 0xe60203d8  swc1        $f2, 0x3D8($s0)
    ctx->pc = 0x1248d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 984), bits); }
label_1248d4:
    // 0x1248d4: 0xe60203dc  swc1        $f2, 0x3DC($s0)
    ctx->pc = 0x1248d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 988), bits); }
label_1248d8:
    // 0x1248d8: 0xe60203e4  swc1        $f2, 0x3E4($s0)
    ctx->pc = 0x1248d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 996), bits); }
label_1248dc:
    // 0x1248dc: 0xe60203ec  swc1        $f2, 0x3EC($s0)
    ctx->pc = 0x1248dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1004), bits); }
label_1248e0:
    // 0x1248e0: 0xe60203f0  swc1        $f2, 0x3F0($s0)
    ctx->pc = 0x1248e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1008), bits); }
label_1248e4:
    // 0x1248e4: 0xe60503f4  swc1        $f5, 0x3F4($s0)
    ctx->pc = 0x1248e4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1012), bits); }
label_1248e8:
    // 0x1248e8: 0xe606040c  swc1        $f6, 0x40C($s0)
    ctx->pc = 0x1248e8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1036), bits); }
label_1248ec:
    // 0x1248ec: 0xe6060410  swc1        $f6, 0x410($s0)
    ctx->pc = 0x1248ecu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1040), bits); }
label_1248f0:
    // 0x1248f0: 0xe6060414  swc1        $f6, 0x414($s0)
    ctx->pc = 0x1248f0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1044), bits); }
label_1248f4:
    // 0x1248f4: 0xe6050434  swc1        $f5, 0x434($s0)
    ctx->pc = 0x1248f4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1076), bits); }
label_1248f8:
    // 0x1248f8: 0xae0003c4  sw          $zero, 0x3C4($s0)
    ctx->pc = 0x1248f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 964), GPR_U32(ctx, 0));
label_1248fc:
    // 0x1248fc: 0xae0003c8  sw          $zero, 0x3C8($s0)
    ctx->pc = 0x1248fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 968), GPR_U32(ctx, 0));
label_124900:
    // 0x124900: 0xae0003cc  sw          $zero, 0x3CC($s0)
    ctx->pc = 0x124900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 972), GPR_U32(ctx, 0));
label_124904:
    // 0x124904: 0xae0003e0  sw          $zero, 0x3E0($s0)
    ctx->pc = 0x124904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 992), GPR_U32(ctx, 0));
label_124908:
    // 0x124908: 0xae0003e8  sw          $zero, 0x3E8($s0)
    ctx->pc = 0x124908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1000), GPR_U32(ctx, 0));
label_12490c:
    // 0x12490c: 0xae0003f8  sw          $zero, 0x3F8($s0)
    ctx->pc = 0x12490cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1016), GPR_U32(ctx, 0));
label_124910:
    // 0x124910: 0xae0003fc  sw          $zero, 0x3FC($s0)
    ctx->pc = 0x124910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1020), GPR_U32(ctx, 0));
label_124914:
    // 0x124914: 0xae000404  sw          $zero, 0x404($s0)
    ctx->pc = 0x124914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 0));
label_124918:
    // 0x124918: 0xae000408  sw          $zero, 0x408($s0)
    ctx->pc = 0x124918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1032), GPR_U32(ctx, 0));
label_12491c:
    // 0x12491c: 0xae00041c  sw          $zero, 0x41C($s0)
    ctx->pc = 0x12491cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1052), GPR_U32(ctx, 0));
label_124920:
    // 0x124920: 0xae000420  sw          $zero, 0x420($s0)
    ctx->pc = 0x124920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 0));
label_124924:
    // 0x124924: 0xae000424  sw          $zero, 0x424($s0)
    ctx->pc = 0x124924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1060), GPR_U32(ctx, 0));
label_124928:
    // 0x124928: 0xae000428  sw          $zero, 0x428($s0)
    ctx->pc = 0x124928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1064), GPR_U32(ctx, 0));
label_12492c:
    // 0x12492c: 0xae00042c  sw          $zero, 0x42C($s0)
    ctx->pc = 0x12492cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1068), GPR_U32(ctx, 0));
label_124930:
    // 0x124930: 0xae000430  sw          $zero, 0x430($s0)
    ctx->pc = 0x124930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1072), GPR_U32(ctx, 0));
label_124934:
    // 0x124934: 0xa6000444  sh          $zero, 0x444($s0)
    ctx->pc = 0x124934u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1092), (uint16_t)GPR_U32(ctx, 0));
label_124938:
    // 0x124938: 0xa6000446  sh          $zero, 0x446($s0)
    ctx->pc = 0x124938u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1094), (uint16_t)GPR_U32(ctx, 0));
label_12493c:
    // 0x12493c: 0xa2030458  sb          $v1, 0x458($s0)
    ctx->pc = 0x12493cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1112), (uint8_t)GPR_U32(ctx, 3));
label_124940:
    // 0x124940: 0xa2080450  sb          $t0, 0x450($s0)
    ctx->pc = 0x124940u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1104), (uint8_t)GPR_U32(ctx, 8));
label_124944:
    // 0x124944: 0xa2080451  sb          $t0, 0x451($s0)
    ctx->pc = 0x124944u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1105), (uint8_t)GPR_U32(ctx, 8));
label_124948:
    // 0x124948: 0xa2080452  sb          $t0, 0x452($s0)
    ctx->pc = 0x124948u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1106), (uint8_t)GPR_U32(ctx, 8));
label_12494c:
    // 0x12494c: 0xa2080468  sb          $t0, 0x468($s0)
    ctx->pc = 0x12494cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1128), (uint8_t)GPR_U32(ctx, 8));
label_124950:
    // 0x124950: 0xa208046a  sb          $t0, 0x46A($s0)
    ctx->pc = 0x124950u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1130), (uint8_t)GPR_U32(ctx, 8));
label_124954:
    // 0x124954: 0xae000448  sw          $zero, 0x448($s0)
    ctx->pc = 0x124954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1096), GPR_U32(ctx, 0));
label_124958:
    // 0x124958: 0xae00044c  sw          $zero, 0x44C($s0)
    ctx->pc = 0x124958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1100), GPR_U32(ctx, 0));
label_12495c:
    // 0x12495c: 0xa2000453  sb          $zero, 0x453($s0)
    ctx->pc = 0x12495cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1107), (uint8_t)GPR_U32(ctx, 0));
label_124960:
    // 0x124960: 0xa2000454  sb          $zero, 0x454($s0)
    ctx->pc = 0x124960u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1108), (uint8_t)GPR_U32(ctx, 0));
label_124964:
    // 0x124964: 0xa2000455  sb          $zero, 0x455($s0)
    ctx->pc = 0x124964u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1109), (uint8_t)GPR_U32(ctx, 0));
label_124968:
    // 0x124968: 0xa2000456  sb          $zero, 0x456($s0)
    ctx->pc = 0x124968u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1110), (uint8_t)GPR_U32(ctx, 0));
label_12496c:
    // 0x12496c: 0xa2000457  sb          $zero, 0x457($s0)
    ctx->pc = 0x12496cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1111), (uint8_t)GPR_U32(ctx, 0));
label_124970:
    // 0x124970: 0xa2000459  sb          $zero, 0x459($s0)
    ctx->pc = 0x124970u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1113), (uint8_t)GPR_U32(ctx, 0));
label_124974:
    // 0x124974: 0xa200045a  sb          $zero, 0x45A($s0)
    ctx->pc = 0x124974u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1114), (uint8_t)GPR_U32(ctx, 0));
label_124978:
    // 0x124978: 0xa200045b  sb          $zero, 0x45B($s0)
    ctx->pc = 0x124978u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1115), (uint8_t)GPR_U32(ctx, 0));
label_12497c:
    // 0x12497c: 0xa200045c  sb          $zero, 0x45C($s0)
    ctx->pc = 0x12497cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1116), (uint8_t)GPR_U32(ctx, 0));
label_124980:
    // 0x124980: 0xa200045d  sb          $zero, 0x45D($s0)
    ctx->pc = 0x124980u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1117), (uint8_t)GPR_U32(ctx, 0));
label_124984:
    // 0x124984: 0xa200045e  sb          $zero, 0x45E($s0)
    ctx->pc = 0x124984u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1118), (uint8_t)GPR_U32(ctx, 0));
label_124988:
    // 0x124988: 0xa200045f  sb          $zero, 0x45F($s0)
    ctx->pc = 0x124988u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1119), (uint8_t)GPR_U32(ctx, 0));
label_12498c:
    // 0x12498c: 0xa2000460  sb          $zero, 0x460($s0)
    ctx->pc = 0x12498cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1120), (uint8_t)GPR_U32(ctx, 0));
label_124990:
    // 0x124990: 0xa2000461  sb          $zero, 0x461($s0)
    ctx->pc = 0x124990u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1121), (uint8_t)GPR_U32(ctx, 0));
label_124994:
    // 0x124994: 0xa2000462  sb          $zero, 0x462($s0)
    ctx->pc = 0x124994u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1122), (uint8_t)GPR_U32(ctx, 0));
label_124998:
    // 0x124998: 0xa2000463  sb          $zero, 0x463($s0)
    ctx->pc = 0x124998u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1123), (uint8_t)GPR_U32(ctx, 0));
label_12499c:
    // 0x12499c: 0xa2000464  sb          $zero, 0x464($s0)
    ctx->pc = 0x12499cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1124), (uint8_t)GPR_U32(ctx, 0));
label_1249a0:
    // 0x1249a0: 0xa2000465  sb          $zero, 0x465($s0)
    ctx->pc = 0x1249a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1125), (uint8_t)GPR_U32(ctx, 0));
label_1249a4:
    // 0x1249a4: 0xa2000466  sb          $zero, 0x466($s0)
    ctx->pc = 0x1249a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1126), (uint8_t)GPR_U32(ctx, 0));
label_1249a8:
    // 0x1249a8: 0xa2000467  sb          $zero, 0x467($s0)
    ctx->pc = 0x1249a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1127), (uint8_t)GPR_U32(ctx, 0));
label_1249ac:
    // 0x1249ac: 0xa2000469  sb          $zero, 0x469($s0)
    ctx->pc = 0x1249acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1129), (uint8_t)GPR_U32(ctx, 0));
label_1249b0:
    // 0x1249b0: 0xa200046b  sb          $zero, 0x46B($s0)
    ctx->pc = 0x1249b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1131), (uint8_t)GPR_U32(ctx, 0));
label_1249b4:
    // 0x1249b4: 0xa200046c  sb          $zero, 0x46C($s0)
    ctx->pc = 0x1249b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 0));
label_1249b8:
    // 0x1249b8: 0xa200046e  sb          $zero, 0x46E($s0)
    ctx->pc = 0x1249b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1134), (uint8_t)GPR_U32(ctx, 0));
label_1249bc:
    // 0x1249bc: 0xa200046f  sb          $zero, 0x46F($s0)
    ctx->pc = 0x1249bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1135), (uint8_t)GPR_U32(ctx, 0));
label_1249c0:
    // 0x1249c0: 0xa2000470  sb          $zero, 0x470($s0)
    ctx->pc = 0x1249c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1136), (uint8_t)GPR_U32(ctx, 0));
label_1249c4:
    // 0x1249c4: 0xa2000471  sb          $zero, 0x471($s0)
    ctx->pc = 0x1249c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1137), (uint8_t)GPR_U32(ctx, 0));
label_1249c8:
    // 0x1249c8: 0xa2000472  sb          $zero, 0x472($s0)
    ctx->pc = 0x1249c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1138), (uint8_t)GPR_U32(ctx, 0));
label_1249cc:
    // 0x1249cc: 0xa2000475  sb          $zero, 0x475($s0)
    ctx->pc = 0x1249ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1141), (uint8_t)GPR_U32(ctx, 0));
label_1249d0:
    // 0x1249d0: 0xa2000478  sb          $zero, 0x478($s0)
    ctx->pc = 0x1249d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1144), (uint8_t)GPR_U32(ctx, 0));
label_1249d4:
    // 0x1249d4: 0xa2000479  sb          $zero, 0x479($s0)
    ctx->pc = 0x1249d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1145), (uint8_t)GPR_U32(ctx, 0));
label_1249d8:
    // 0x1249d8: 0xae00047c  sw          $zero, 0x47C($s0)
    ctx->pc = 0x1249d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1148), GPR_U32(ctx, 0));
label_1249dc:
    // 0x1249dc: 0xa200003f  sb          $zero, 0x3F($s0)
    ctx->pc = 0x1249dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 0));
label_1249e0:
    // 0x1249e0: 0xa2030477  sb          $v1, 0x477($s0)
    ctx->pc = 0x1249e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1143), (uint8_t)GPR_U32(ctx, 3));
label_1249e4:
    // 0x1249e4: 0xa2030476  sb          $v1, 0x476($s0)
    ctx->pc = 0x1249e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1142), (uint8_t)GPR_U32(ctx, 3));
label_1249e8:
    // 0x1249e8: 0xa2080474  sb          $t0, 0x474($s0)
    ctx->pc = 0x1249e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1140), (uint8_t)GPR_U32(ctx, 8));
label_1249ec:
    // 0x1249ec: 0xc10c4de  jal         func_431378
label_1249f0:
    if (ctx->pc == 0x1249F0u) {
        ctx->pc = 0x1249F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1249ECu;
        // 0x1249f0: 0xa2080473  sb          $t0, 0x473($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1139), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1249F4u;
        goto label_1249f4;
    }
    ctx->pc = 0x1249ECu;
    SET_GPR_U32(ctx, 31, 0x1249F4u);
    ctx->pc = 0x1249F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1249ECu;
    // 0x1249f0: 0xa2080473  sb          $t0, 0x473($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1139), (uint8_t)GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1249ECu, 0x1249F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1249F4u;
label_1249f4:
    // 0x1249f4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1249f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1249f8:
    // 0x1249f8: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x1249f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
label_1249fc:
    // 0x1249fc: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1249fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_124a00:
    // 0x124a00: 0x7e020180  sq          $v0, 0x180($s0)
    ctx->pc = 0x124a00u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 384), GPR_VEC(ctx, 2));
label_124a04:
    // 0x124a04: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x124a04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_124a08:
    // 0x124a08: 0x7e030260  sq          $v1, 0x260($s0)
    ctx->pc = 0x124a08u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 608), GPR_VEC(ctx, 3));
label_124a0c:
    // 0x124a0c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x124a0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_124a10:
    // 0x124a10: 0x7e020220  sq          $v0, 0x220($s0)
    ctx->pc = 0x124a10u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 544), GPR_VEC(ctx, 2));
label_124a14:
    // 0x124a14: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x124a14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_124a18:
    // 0x124a18: 0x7e030230  sq          $v1, 0x230($s0)
    ctx->pc = 0x124a18u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 560), GPR_VEC(ctx, 3));
label_124a1c:
    // 0x124a1c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x124a1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_124a20:
    // 0x124a20: 0x7e020240  sq          $v0, 0x240($s0)
    ctx->pc = 0x124a20u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 576), GPR_VEC(ctx, 2));
label_124a24:
    // 0x124a24: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x124a24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_124a28:
    // 0x124a28: 0x7e030280  sq          $v1, 0x280($s0)
    ctx->pc = 0x124a28u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 640), GPR_VEC(ctx, 3));
label_124a2c:
    // 0x124a2c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x124a2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_124a30:
    // 0x124a30: 0x7e020290  sq          $v0, 0x290($s0)
    ctx->pc = 0x124a30u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 656), GPR_VEC(ctx, 2));
label_124a34:
    // 0x124a34: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x124a34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_124a38:
    // 0x124a38: 0x7e0302a0  sq          $v1, 0x2A0($s0)
    ctx->pc = 0x124a38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 672), GPR_VEC(ctx, 3));
label_124a3c:
    // 0x124a3c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x124a3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_124a40:
    // 0x124a40: 0x7e0202b0  sq          $v0, 0x2B0($s0)
    ctx->pc = 0x124a40u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 688), GPR_VEC(ctx, 2));
label_124a44:
    // 0x124a44: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x124a44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_124a48:
    // 0x124a48: 0x7e0302c0  sq          $v1, 0x2C0($s0)
    ctx->pc = 0x124a48u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 704), GPR_VEC(ctx, 3));
label_124a4c:
    // 0x124a4c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x124a4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_124a50:
    // 0x124a50: 0x7e020210  sq          $v0, 0x210($s0)
    ctx->pc = 0x124a50u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 528), GPR_VEC(ctx, 2));
label_124a54:
    // 0x124a54: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x124a54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_124a58:
    // 0x124a58: 0x7e0302d0  sq          $v1, 0x2D0($s0)
    ctx->pc = 0x124a58u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 720), GPR_VEC(ctx, 3));
label_124a5c:
    // 0x124a5c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x124a5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_124a60:
    // 0x124a60: 0x7e020250  sq          $v0, 0x250($s0)
    ctx->pc = 0x124a60u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 592), GPR_VEC(ctx, 2));
label_124a64:
    // 0x124a64: 0x0  nop
    ctx->pc = 0x124a64u;
    // NOP
label_124a68:
    // 0x124a68: 0xae20ffa4  sw          $zero, -0x5C($s1)
    ctx->pc = 0x124a68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967204), GPR_U32(ctx, 0));
label_124a6c:
    // 0x124a6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x124a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_124a70:
    // 0x124a70: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x124a70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_124a74:
    // 0x124a74: 0xc047e78  jal         func_11F9E0
label_124a78:
    if (ctx->pc == 0x124A78u) {
        ctx->pc = 0x124A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A74u;
        // 0x124a78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124A7Cu;
        goto label_124a7c;
    }
    ctx->pc = 0x124A74u;
    SET_GPR_U32(ctx, 31, 0x124A7Cu);
    ctx->pc = 0x124A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124A74u;
    // 0x124a78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x124A74u, 0x124A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124A7Cu;
label_124a7c:
    // 0x124a7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_124a80:
    if (ctx->pc == 0x124A80u) {
        ctx->pc = 0x124A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A7Cu;
        // 0x124a80: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124A84u;
        goto label_124a84;
    }
    ctx->pc = 0x124A7Cu;
    {
        const bool branch_taken_0x124a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A7Cu;
        // 0x124a80: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a7c) {
            ctx->pc = 0x124A8Cu;
            goto label_124a8c;
        }
    }
    ctx->pc = 0x124A84u;
label_124a84:
    // 0x124a84: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x124a84u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_124a88:
    // 0x124a88: 0x13982b  sltu        $s3, $zero, $s3
    ctx->pc = 0x124a88u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_124a8c:
    // 0x124a8c: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x124a8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_124a90:
    // 0x124a90: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_124a94:
    if (ctx->pc == 0x124A94u) {
        ctx->pc = 0x124A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A90u;
        // 0x124a94: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124A98u;
        goto label_124a98;
    }
    ctx->pc = 0x124A90u;
    {
        const bool branch_taken_0x124a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A90u;
        // 0x124a94: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a90) {
            ctx->pc = 0x124A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124a68;
        }
    }
    ctx->pc = 0x124A98u;
label_124a98:
    // 0x124a98: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x124a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_124a9c:
    // 0x124a9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x124a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_124aa0:
    // 0x124aa0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x124aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_124aa4:
    // 0x124aa4: 0x24421790  addiu       $v0, $v0, 0x1790
    ctx->pc = 0x124aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6032));
label_124aa8:
    // 0x124aa8: 0x3c014282  lui         $at, 0x4282
    ctx->pc = 0x124aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17026 << 16));
label_124aac:
    // 0x124aac: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x124aacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_124ab0:
    // 0x124ab0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x124ab0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_124ab4:
    // 0x124ab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124ab8:
    // 0x124ab8: 0x7e0302e0  sq          $v1, 0x2E0($s0)
    ctx->pc = 0x124ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 736), GPR_VEC(ctx, 3));
label_124abc:
    // 0x124abc: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x124abcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_124ac0:
    // 0x124ac0: 0xe61501a0  swc1        $f21, 0x1A0($s0)
    ctx->pc = 0x124ac0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
label_124ac4:
    // 0x124ac4: 0xe6160044  swc1        $f22, 0x44($s0)
    ctx->pc = 0x124ac4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_124ac8:
    // 0x124ac8: 0xc0482a6  jal         func_120A98
label_124acc:
    if (ctx->pc == 0x124ACCu) {
        ctx->pc = 0x124ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124AC8u;
        // 0x124acc: 0x7e0502f0  sq          $a1, 0x2F0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 752), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124AD0u;
        goto label_124ad0;
    }
    ctx->pc = 0x124AC8u;
    SET_GPR_U32(ctx, 31, 0x124AD0u);
    ctx->pc = 0x124ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124AC8u;
    // 0x124acc: 0x7e0502f0  sq          $a1, 0x2F0($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 752), GPR_VEC(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A98u, 0x124AC8u, 0x124AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124AD0u;
label_124ad0:
    // 0x124ad0: 0xc6140044  lwc1        $f20, 0x44($s0)
    ctx->pc = 0x124ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_124ad4:
    // 0x124ad4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x124ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_124ad8:
    // 0x124ad8: 0xe6140394  swc1        $f20, 0x394($s0)
    ctx->pc = 0x124ad8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 916), bits); }
label_124adc:
    // 0x124adc: 0x844401f0  lh          $a0, 0x1F0($v0)
    ctx->pc = 0x124adcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
label_124ae0:
    // 0x124ae0: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x124ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_124ae4:
    // 0x124ae4: 0x60f809  jalr        $v1
label_124ae8:
    if (ctx->pc == 0x124AE8u) {
        ctx->pc = 0x124AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124AE4u;
        // 0x124ae8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124AECu;
        goto label_124aec;
    }
    ctx->pc = 0x124AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x124AECu);
        ctx->pc = 0x124AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124AE4u;
        // 0x124ae8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124AE4u, 0x124AECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124AECu;
label_124aec:
    // 0x124aec: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x124aecu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_124af0:
    // 0x124af0: 0x26030200  addiu       $v1, $s0, 0x200
    ctx->pc = 0x124af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
label_124af4:
    // 0x124af4: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x124af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
label_124af8:
    // 0x124af8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x124af8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_124afc:
    // 0x124afc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x124afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_124b00:
    // 0x124b00: 0x4600a505  abs.s       $f20, $f20
    ctx->pc = 0x124b00u;
    ctx->f[20] = FPU_ABS_S(ctx->f[20]);
label_124b04:
    // 0x124b04: 0xe614039c  swc1        $f20, 0x39C($s0)
    ctx->pc = 0x124b04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 924), bits); }
label_124b08:
    // 0x124b08: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x124b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_124b0c:
    // 0x124b0c: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x124b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_124b10:
    // 0x124b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124b14:
    // 0x124b14: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x124b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_124b18:
    // 0x124b18: 0xe475000c  swc1        $f21, 0xC($v1)
    ctx->pc = 0x124b18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_124b1c:
    // 0x124b1c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x124b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_124b20:
    // 0x124b20: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x124b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_124b24:
    // 0x124b24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x124b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_124b28:
    // 0x124b28: 0x3c0140d0  lui         $at, 0x40D0
    ctx->pc = 0x124b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16592 << 16));
label_124b2c:
    // 0x124b2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x124b2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_124b30:
    // 0x124b30: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x124b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_124b34:
    // 0x124b34: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x124b34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_124b38:
    // 0x124b38: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x124b38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_124b3c:
    // 0x124b3c: 0xc44691c0  lwc1        $f6, -0x6E40($v0)
    ctx->pc = 0x124b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294939072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_124b40:
    // 0x124b40: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x124b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_124b44:
    // 0x124b44: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x124b44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_124b48:
    // 0x124b48: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x124b48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_124b4c:
    // 0x124b4c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x124b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_124b50:
    // 0x124b50: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x124b50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_124b54:
    // 0x124b54: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x124b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_124b58:
    // 0x124b58: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x124b58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_124b5c:
    // 0x124b5c: 0xe6160310  swc1        $f22, 0x310($s0)
    ctx->pc = 0x124b5cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 784), bits); }
label_124b60:
    // 0x124b60: 0xe6020050  swc1        $f2, 0x50($s0)
    ctx->pc = 0x124b60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_124b64:
    // 0x124b64: 0xe6060054  swc1        $f6, 0x54($s0)
    ctx->pc = 0x124b64u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
label_124b68:
    // 0x124b68: 0xe6030300  swc1        $f3, 0x300($s0)
    ctx->pc = 0x124b68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
label_124b6c:
    // 0x124b6c: 0xe6040304  swc1        $f4, 0x304($s0)
    ctx->pc = 0x124b6cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 772), bits); }
label_124b70:
    // 0x124b70: 0xe60503b4  swc1        $f5, 0x3B4($s0)
    ctx->pc = 0x124b70u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 948), bits); }
label_124b74:
    // 0x124b74: 0xe600033c  swc1        $f0, 0x33C($s0)
    ctx->pc = 0x124b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 828), bits); }
label_124b78:
    // 0x124b78: 0xe6010340  swc1        $f1, 0x340($s0)
    ctx->pc = 0x124b78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 832), bits); }
label_124b7c:
    // 0x124b7c: 0xe6000308  swc1        $f0, 0x308($s0)
    ctx->pc = 0x124b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 776), bits); }
label_124b80:
    // 0x124b80: 0xe605030c  swc1        $f5, 0x30C($s0)
    ctx->pc = 0x124b80u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 780), bits); }
label_124b84:
    // 0x124b84: 0xe600032c  swc1        $f0, 0x32C($s0)
    ctx->pc = 0x124b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 812), bits); }
label_124b88:
    // 0x124b88: 0xe6010330  swc1        $f1, 0x330($s0)
    ctx->pc = 0x124b88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 816), bits); }
label_124b8c:
    // 0x124b8c: 0xe6000344  swc1        $f0, 0x344($s0)
    ctx->pc = 0x124b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 836), bits); }
label_124b90:
    // 0x124b90: 0xe6010348  swc1        $f1, 0x348($s0)
    ctx->pc = 0x124b90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 840), bits); }
label_124b94:
    // 0x124b94: 0xe6000334  swc1        $f0, 0x334($s0)
    ctx->pc = 0x124b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 820), bits); }
label_124b98:
    // 0x124b98: 0xc049622  jal         func_125888
label_124b9c:
    if (ctx->pc == 0x124B9Cu) {
        ctx->pc = 0x124B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B98u;
        // 0x124b9c: 0xe6010338  swc1        $f1, 0x338($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x124BA0u;
        goto label_124ba0;
    }
    ctx->pc = 0x124B98u;
    SET_GPR_U32(ctx, 31, 0x124BA0u);
    ctx->pc = 0x124B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124B98u;
    // 0x124b9c: 0xe6010338  swc1        $f1, 0x338($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125888u, 0x124B98u, 0x124BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124BA0u;
label_124ba0:
    // 0x124ba0: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
label_124ba4:
    if (ctx->pc == 0x124BA4u) {
        ctx->pc = 0x124BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124BA0u;
        // 0x124ba4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124BA8u;
        goto label_124ba8;
    }
    ctx->pc = 0x124BA0u;
    {
        const bool branch_taken_0x124ba0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x124BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124BA0u;
        // 0x124ba4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ba0) {
            ctx->pc = 0x124BB4u;
            goto label_124bb4;
        }
    }
    ctx->pc = 0x124BA8u;
label_124ba8:
    // 0x124ba8: 0xc049948  jal         func_126520
label_124bac:
    if (ctx->pc == 0x124BACu) {
        ctx->pc = 0x124BB0u;
        goto label_124bb0;
    }
    ctx->pc = 0x124BA8u;
    SET_GPR_U32(ctx, 31, 0x124BB0u);
    ctx->pc = 0x126520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126520u, 0x124BA8u, 0x124BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124BB0u;
label_124bb0:
    // 0x124bb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x124bb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124bb4:
    // 0x124bb4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x124bb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_124bb8:
    // 0x124bb8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x124bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_124bbc:
    // 0x124bbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x124bbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_124bc0:
    // 0x124bc0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x124bc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_124bc4:
    // 0x124bc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x124bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_124bc8:
    // 0x124bc8: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x124bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_124bcc:
    // 0x124bcc: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x124bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_124bd0:
    // 0x124bd0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x124bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_124bd4:
    // 0x124bd4: 0x3e00008  jr          $ra
label_124bd8:
    if (ctx->pc == 0x124BD8u) {
        ctx->pc = 0x124BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124BD4u;
        // 0x124bd8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124BDCu;
        goto label_124bdc;
    }
    ctx->pc = 0x124BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124BD4u;
        // 0x124bd8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124BDCu;
label_124bdc:
    // 0x124bdc: 0x0  nop
    ctx->pc = 0x124bdcu;
    // NOP
    ctx->pc = 0x124be0u;
}
