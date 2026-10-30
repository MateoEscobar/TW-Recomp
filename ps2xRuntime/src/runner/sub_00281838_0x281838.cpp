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

// Function: sub_00281838
// Address: 0x281838 - 0x281c20
void sub_00281838_0x281838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281838_0x281838");
#endif

    switch (ctx->pc) {
        case 0x281838u: goto label_281838;
        case 0x28183cu: goto label_28183c;
        case 0x281840u: goto label_281840;
        case 0x281844u: goto label_281844;
        case 0x281848u: goto label_281848;
        case 0x28184cu: goto label_28184c;
        case 0x281850u: goto label_281850;
        case 0x281854u: goto label_281854;
        case 0x281858u: goto label_281858;
        case 0x28185cu: goto label_28185c;
        case 0x281860u: goto label_281860;
        case 0x281864u: goto label_281864;
        case 0x281868u: goto label_281868;
        case 0x28186cu: goto label_28186c;
        case 0x281870u: goto label_281870;
        case 0x281874u: goto label_281874;
        case 0x281878u: goto label_281878;
        case 0x28187cu: goto label_28187c;
        case 0x281880u: goto label_281880;
        case 0x281884u: goto label_281884;
        case 0x281888u: goto label_281888;
        case 0x28188cu: goto label_28188c;
        case 0x281890u: goto label_281890;
        case 0x281894u: goto label_281894;
        case 0x281898u: goto label_281898;
        case 0x28189cu: goto label_28189c;
        case 0x2818a0u: goto label_2818a0;
        case 0x2818a4u: goto label_2818a4;
        case 0x2818a8u: goto label_2818a8;
        case 0x2818acu: goto label_2818ac;
        case 0x2818b0u: goto label_2818b0;
        case 0x2818b4u: goto label_2818b4;
        case 0x2818b8u: goto label_2818b8;
        case 0x2818bcu: goto label_2818bc;
        case 0x2818c0u: goto label_2818c0;
        case 0x2818c4u: goto label_2818c4;
        case 0x2818c8u: goto label_2818c8;
        case 0x2818ccu: goto label_2818cc;
        case 0x2818d0u: goto label_2818d0;
        case 0x2818d4u: goto label_2818d4;
        case 0x2818d8u: goto label_2818d8;
        case 0x2818dcu: goto label_2818dc;
        case 0x2818e0u: goto label_2818e0;
        case 0x2818e4u: goto label_2818e4;
        case 0x2818e8u: goto label_2818e8;
        case 0x2818ecu: goto label_2818ec;
        case 0x2818f0u: goto label_2818f0;
        case 0x2818f4u: goto label_2818f4;
        case 0x2818f8u: goto label_2818f8;
        case 0x2818fcu: goto label_2818fc;
        case 0x281900u: goto label_281900;
        case 0x281904u: goto label_281904;
        case 0x281908u: goto label_281908;
        case 0x28190cu: goto label_28190c;
        case 0x281910u: goto label_281910;
        case 0x281914u: goto label_281914;
        case 0x281918u: goto label_281918;
        case 0x28191cu: goto label_28191c;
        case 0x281920u: goto label_281920;
        case 0x281924u: goto label_281924;
        case 0x281928u: goto label_281928;
        case 0x28192cu: goto label_28192c;
        case 0x281930u: goto label_281930;
        case 0x281934u: goto label_281934;
        case 0x281938u: goto label_281938;
        case 0x28193cu: goto label_28193c;
        case 0x281940u: goto label_281940;
        case 0x281944u: goto label_281944;
        case 0x281948u: goto label_281948;
        case 0x28194cu: goto label_28194c;
        case 0x281950u: goto label_281950;
        case 0x281954u: goto label_281954;
        case 0x281958u: goto label_281958;
        case 0x28195cu: goto label_28195c;
        case 0x281960u: goto label_281960;
        case 0x281964u: goto label_281964;
        case 0x281968u: goto label_281968;
        case 0x28196cu: goto label_28196c;
        case 0x281970u: goto label_281970;
        case 0x281974u: goto label_281974;
        case 0x281978u: goto label_281978;
        case 0x28197cu: goto label_28197c;
        case 0x281980u: goto label_281980;
        case 0x281984u: goto label_281984;
        case 0x281988u: goto label_281988;
        case 0x28198cu: goto label_28198c;
        case 0x281990u: goto label_281990;
        case 0x281994u: goto label_281994;
        case 0x281998u: goto label_281998;
        case 0x28199cu: goto label_28199c;
        case 0x2819a0u: goto label_2819a0;
        case 0x2819a4u: goto label_2819a4;
        case 0x2819a8u: goto label_2819a8;
        case 0x2819acu: goto label_2819ac;
        case 0x2819b0u: goto label_2819b0;
        case 0x2819b4u: goto label_2819b4;
        case 0x2819b8u: goto label_2819b8;
        case 0x2819bcu: goto label_2819bc;
        case 0x2819c0u: goto label_2819c0;
        case 0x2819c4u: goto label_2819c4;
        case 0x2819c8u: goto label_2819c8;
        case 0x2819ccu: goto label_2819cc;
        case 0x2819d0u: goto label_2819d0;
        case 0x2819d4u: goto label_2819d4;
        case 0x2819d8u: goto label_2819d8;
        case 0x2819dcu: goto label_2819dc;
        case 0x2819e0u: goto label_2819e0;
        case 0x2819e4u: goto label_2819e4;
        case 0x2819e8u: goto label_2819e8;
        case 0x2819ecu: goto label_2819ec;
        case 0x2819f0u: goto label_2819f0;
        case 0x2819f4u: goto label_2819f4;
        case 0x2819f8u: goto label_2819f8;
        case 0x2819fcu: goto label_2819fc;
        case 0x281a00u: goto label_281a00;
        case 0x281a04u: goto label_281a04;
        case 0x281a08u: goto label_281a08;
        case 0x281a0cu: goto label_281a0c;
        case 0x281a10u: goto label_281a10;
        case 0x281a14u: goto label_281a14;
        case 0x281a18u: goto label_281a18;
        case 0x281a1cu: goto label_281a1c;
        case 0x281a20u: goto label_281a20;
        case 0x281a24u: goto label_281a24;
        case 0x281a28u: goto label_281a28;
        case 0x281a2cu: goto label_281a2c;
        case 0x281a30u: goto label_281a30;
        case 0x281a34u: goto label_281a34;
        case 0x281a38u: goto label_281a38;
        case 0x281a3cu: goto label_281a3c;
        case 0x281a40u: goto label_281a40;
        case 0x281a44u: goto label_281a44;
        case 0x281a48u: goto label_281a48;
        case 0x281a4cu: goto label_281a4c;
        case 0x281a50u: goto label_281a50;
        case 0x281a54u: goto label_281a54;
        case 0x281a58u: goto label_281a58;
        case 0x281a5cu: goto label_281a5c;
        case 0x281a60u: goto label_281a60;
        case 0x281a64u: goto label_281a64;
        case 0x281a68u: goto label_281a68;
        case 0x281a6cu: goto label_281a6c;
        case 0x281a70u: goto label_281a70;
        case 0x281a74u: goto label_281a74;
        case 0x281a78u: goto label_281a78;
        case 0x281a7cu: goto label_281a7c;
        case 0x281a80u: goto label_281a80;
        case 0x281a84u: goto label_281a84;
        case 0x281a88u: goto label_281a88;
        case 0x281a8cu: goto label_281a8c;
        case 0x281a90u: goto label_281a90;
        case 0x281a94u: goto label_281a94;
        case 0x281a98u: goto label_281a98;
        case 0x281a9cu: goto label_281a9c;
        case 0x281aa0u: goto label_281aa0;
        case 0x281aa4u: goto label_281aa4;
        case 0x281aa8u: goto label_281aa8;
        case 0x281aacu: goto label_281aac;
        case 0x281ab0u: goto label_281ab0;
        case 0x281ab4u: goto label_281ab4;
        case 0x281ab8u: goto label_281ab8;
        case 0x281abcu: goto label_281abc;
        case 0x281ac0u: goto label_281ac0;
        case 0x281ac4u: goto label_281ac4;
        case 0x281ac8u: goto label_281ac8;
        case 0x281accu: goto label_281acc;
        case 0x281ad0u: goto label_281ad0;
        case 0x281ad4u: goto label_281ad4;
        case 0x281ad8u: goto label_281ad8;
        case 0x281adcu: goto label_281adc;
        case 0x281ae0u: goto label_281ae0;
        case 0x281ae4u: goto label_281ae4;
        case 0x281ae8u: goto label_281ae8;
        case 0x281aecu: goto label_281aec;
        case 0x281af0u: goto label_281af0;
        case 0x281af4u: goto label_281af4;
        case 0x281af8u: goto label_281af8;
        case 0x281afcu: goto label_281afc;
        case 0x281b00u: goto label_281b00;
        case 0x281b04u: goto label_281b04;
        case 0x281b08u: goto label_281b08;
        case 0x281b0cu: goto label_281b0c;
        case 0x281b10u: goto label_281b10;
        case 0x281b14u: goto label_281b14;
        case 0x281b18u: goto label_281b18;
        case 0x281b1cu: goto label_281b1c;
        case 0x281b20u: goto label_281b20;
        case 0x281b24u: goto label_281b24;
        case 0x281b28u: goto label_281b28;
        case 0x281b2cu: goto label_281b2c;
        case 0x281b30u: goto label_281b30;
        case 0x281b34u: goto label_281b34;
        case 0x281b38u: goto label_281b38;
        case 0x281b3cu: goto label_281b3c;
        case 0x281b40u: goto label_281b40;
        case 0x281b44u: goto label_281b44;
        case 0x281b48u: goto label_281b48;
        case 0x281b4cu: goto label_281b4c;
        case 0x281b50u: goto label_281b50;
        case 0x281b54u: goto label_281b54;
        case 0x281b58u: goto label_281b58;
        case 0x281b5cu: goto label_281b5c;
        case 0x281b60u: goto label_281b60;
        case 0x281b64u: goto label_281b64;
        case 0x281b68u: goto label_281b68;
        case 0x281b6cu: goto label_281b6c;
        case 0x281b70u: goto label_281b70;
        case 0x281b74u: goto label_281b74;
        case 0x281b78u: goto label_281b78;
        case 0x281b7cu: goto label_281b7c;
        case 0x281b80u: goto label_281b80;
        case 0x281b84u: goto label_281b84;
        case 0x281b88u: goto label_281b88;
        case 0x281b8cu: goto label_281b8c;
        case 0x281b90u: goto label_281b90;
        case 0x281b94u: goto label_281b94;
        case 0x281b98u: goto label_281b98;
        case 0x281b9cu: goto label_281b9c;
        case 0x281ba0u: goto label_281ba0;
        case 0x281ba4u: goto label_281ba4;
        case 0x281ba8u: goto label_281ba8;
        case 0x281bacu: goto label_281bac;
        case 0x281bb0u: goto label_281bb0;
        case 0x281bb4u: goto label_281bb4;
        case 0x281bb8u: goto label_281bb8;
        case 0x281bbcu: goto label_281bbc;
        case 0x281bc0u: goto label_281bc0;
        case 0x281bc4u: goto label_281bc4;
        case 0x281bc8u: goto label_281bc8;
        case 0x281bccu: goto label_281bcc;
        case 0x281bd0u: goto label_281bd0;
        case 0x281bd4u: goto label_281bd4;
        case 0x281bd8u: goto label_281bd8;
        case 0x281bdcu: goto label_281bdc;
        case 0x281be0u: goto label_281be0;
        case 0x281be4u: goto label_281be4;
        case 0x281be8u: goto label_281be8;
        case 0x281becu: goto label_281bec;
        case 0x281bf0u: goto label_281bf0;
        case 0x281bf4u: goto label_281bf4;
        case 0x281bf8u: goto label_281bf8;
        case 0x281bfcu: goto label_281bfc;
        case 0x281c00u: goto label_281c00;
        case 0x281c04u: goto label_281c04;
        case 0x281c08u: goto label_281c08;
        case 0x281c0cu: goto label_281c0c;
        case 0x281c10u: goto label_281c10;
        case 0x281c14u: goto label_281c14;
        case 0x281c18u: goto label_281c18;
        case 0x281c1cu: goto label_281c1c;
        default: break;
    }

    ctx->pc = 0x281838u;

label_281838:
    // 0x281838: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x281838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_28183c:
    // 0x28183c: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x28183cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
label_281840:
    // 0x281840: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x281840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
label_281844:
    // 0x281844: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x281844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
label_281848:
    // 0x281848: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x281848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
label_28184c:
    // 0x28184c: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x28184cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
label_281850:
    // 0x281850: 0xc0899ae  jal         func_2266B8
label_281854:
    if (ctx->pc == 0x281854u) {
        ctx->pc = 0x281854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281850u;
        // 0x281854: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281858u;
        goto label_281858;
    }
    ctx->pc = 0x281850u;
    SET_GPR_U32(ctx, 31, 0x281858u);
    ctx->pc = 0x281854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281850u;
    // 0x281854: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x281850u, 0x281858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281858u;
label_281858:
    // 0x281858: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x281858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28185c:
    // 0x28185c: 0x2a0201b5  slti        $v0, $s0, 0x1B5
    ctx->pc = 0x28185cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)437) ? 1 : 0);
label_281860:
    // 0x281860: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x281860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_281864:
    // 0x281864: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_281868:
    if (ctx->pc == 0x281868u) {
        ctx->pc = 0x281868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281864u;
        // 0x281868: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28186Cu;
        goto label_28186c;
    }
    ctx->pc = 0x281864u;
    {
        const bool branch_taken_0x281864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281864u;
        // 0x281868: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281864) {
            ctx->pc = 0x281870u;
            goto label_281870;
        }
    }
    ctx->pc = 0x28186Cu;
label_28186c:
    // 0x28186c: 0x2a0301ce  slti        $v1, $s0, 0x1CE
    ctx->pc = 0x28186cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)462) ? 1 : 0);
label_281870:
    // 0x281870: 0x106000e4  beqz        $v1, . + 4 + (0xE4 << 2)
label_281874:
    if (ctx->pc == 0x281874u) {
        ctx->pc = 0x281874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281870u;
        // 0x281874: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281878u;
        goto label_281878;
    }
    ctx->pc = 0x281870u;
    {
        const bool branch_taken_0x281870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x281874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281870u;
        // 0x281874: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281870) {
            ctx->pc = 0x281C04u;
            goto label_281c04;
        }
    }
    ctx->pc = 0x281878u;
label_281878:
    // 0x281878: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x281878u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28187c:
    // 0x28187c: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x28187cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_281880:
    // 0x281880: 0x3c013f30  lui         $at, 0x3F30
    ctx->pc = 0x281880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16176 << 16));
label_281884:
    // 0x281884: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x281884u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
label_281888:
    // 0x281888: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x281888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28188c:
    // 0x28188c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x28188cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_281890:
    // 0x281890: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x281890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_281894:
    // 0x281894: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x281894u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_281898:
    // 0x281898: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x281898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_28189c:
    // 0x28189c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x28189cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_2818a0:
    // 0x2818a0: 0x84c500a8  lh          $a1, 0xA8($a2)
    ctx->pc = 0x2818a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 168)));
label_2818a4:
    // 0x2818a4: 0x8cc200ac  lw          $v0, 0xAC($a2)
    ctx->pc = 0x2818a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 172)));
label_2818a8:
    // 0x2818a8: 0x40f809  jalr        $v0
label_2818ac:
    if (ctx->pc == 0x2818ACu) {
        ctx->pc = 0x2818ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2818A8u;
        // 0x2818ac: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2818B0u;
        goto label_2818b0;
    }
    ctx->pc = 0x2818A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2818B0u);
        ctx->pc = 0x2818ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2818A8u;
        // 0x2818ac: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2818A8u, 0x2818B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2818B0u;
label_2818b0:
    // 0x2818b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2818b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2818b4:
    // 0x2818b4: 0xc0cd940  jal         func_336500
label_2818b8:
    if (ctx->pc == 0x2818B8u) {
        ctx->pc = 0x2818B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2818B4u;
        // 0x2818b8: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2818BCu;
        goto label_2818bc;
    }
    ctx->pc = 0x2818B4u;
    SET_GPR_U32(ctx, 31, 0x2818BCu);
    ctx->pc = 0x2818B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2818B4u;
    // 0x2818b8: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x2818B4u, 0x2818BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2818BCu;
label_2818bc:
    // 0x2818bc: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x2818bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_2818c0:
    // 0x2818c0: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x2818c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_2818c4:
    // 0x2818c4: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x2818c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2818c8:
    // 0x2818c8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2818c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2818cc:
    // 0x2818cc: 0x7ba90010  lq          $t1, 0x10($sp)
    ctx->pc = 0x2818ccu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2818d0:
    // 0x2818d0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2818d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2818d4:
    // 0x2818d4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2818d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2818d8:
    // 0x2818d8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2818d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2818dc:
    // 0x2818dc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2818dcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2818e0:
    // 0x2818e0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2818e0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2818e4:
    // 0x2818e4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2818e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2818e8:
    // 0x2818e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2818e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2818ec:
    // 0x2818ec: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2818ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2818f0:
    // 0x2818f0: 0x8ce447c4  lw          $a0, 0x47C4($a3)
    ctx->pc = 0x2818f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18372)));
label_2818f4:
    // 0x2818f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2818f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2818f8:
    // 0x2818f8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2818f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2818fc:
    // 0x2818fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2818fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281900:
    // 0x281900: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x281900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_281904:
    // 0x281904: 0x7fa90050  sq          $t1, 0x50($sp)
    ctx->pc = 0x281904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 9));
label_281908:
    // 0x281908: 0xc1036e2  jal         func_40DB88
label_28190c:
    if (ctx->pc == 0x28190Cu) {
        ctx->pc = 0x28190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281908u;
        // 0x28190c: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x281910u;
        goto label_281910;
    }
    ctx->pc = 0x281908u;
    SET_GPR_U32(ctx, 31, 0x281910u);
    ctx->pc = 0x28190Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281908u;
    // 0x28190c: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x281908u, 0x281910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281910u;
label_281910:
    // 0x281910: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x281910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_281914:
    // 0x281914: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
label_281918:
    if (ctx->pc == 0x281918u) {
        ctx->pc = 0x281918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281914u;
        // 0x281918: 0x8fa30098  lw          $v1, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28191Cu;
        goto label_28191c;
    }
    ctx->pc = 0x281914u;
    {
        const bool branch_taken_0x281914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281914u;
        // 0x281918: 0x8fa30098  lw          $v1, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281914) {
            ctx->pc = 0x281AC8u;
            goto label_281ac8;
        }
    }
    ctx->pc = 0x28191Cu;
label_28191c:
    // 0x28191c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x28191cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_281920:
    // 0x281920: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_281924:
    if (ctx->pc == 0x281924u) {
        ctx->pc = 0x281924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281920u;
        // 0x281924: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281928u;
        goto label_281928;
    }
    ctx->pc = 0x281920u;
    {
        const bool branch_taken_0x281920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x281924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281920u;
        // 0x281924: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281920) {
            ctx->pc = 0x281958u;
            goto label_281958;
        }
    }
    ctx->pc = 0x281928u;
label_281928:
    // 0x281928: 0xc0874fa  jal         func_21D3E8
label_28192c:
    if (ctx->pc == 0x28192Cu) {
        ctx->pc = 0x28192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281928u;
        // 0x28192c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281930u;
        goto label_281930;
    }
    ctx->pc = 0x281928u;
    SET_GPR_U32(ctx, 31, 0x281930u);
    ctx->pc = 0x28192Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281928u;
    // 0x28192c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x281928u, 0x281930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281930u;
label_281930:
    // 0x281930: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x281930u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_281934:
    // 0x281934: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_281938:
    if (ctx->pc == 0x281938u) {
        ctx->pc = 0x281938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281934u;
        // 0x281938: 0x97a2009c  lhu         $v0, 0x9C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28193Cu;
        goto label_28193c;
    }
    ctx->pc = 0x281934u;
    {
        const bool branch_taken_0x281934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x281938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281934u;
        // 0x281938: 0x97a2009c  lhu         $v0, 0x9C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281934) {
            ctx->pc = 0x281948u;
            goto label_281948;
        }
    }
    ctx->pc = 0x28193Cu;
label_28193c:
    // 0x28193c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x28193cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_281940:
    // 0x281940: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_281944:
    if (ctx->pc == 0x281944u) {
        ctx->pc = 0x281944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281940u;
        // 0x281944: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281948u;
        goto label_281948;
    }
    ctx->pc = 0x281940u;
    {
        const bool branch_taken_0x281940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281940) {
            ctx->pc = 0x281944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281940u;
            // 0x281944: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28195Cu;
            goto label_28195c;
        }
    }
    ctx->pc = 0x281948u;
label_281948:
    // 0x281948: 0x97a2009c  lhu         $v0, 0x9C($sp)
    ctx->pc = 0x281948u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 156)));
label_28194c:
    // 0x28194c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x28194cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_281950:
    // 0x281950: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_281954:
    if (ctx->pc == 0x281954u) {
        ctx->pc = 0x281958u;
        goto label_281958;
    }
    ctx->pc = 0x281950u;
    {
        const bool branch_taken_0x281950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281950) {
            ctx->pc = 0x28195Cu;
            goto label_28195c;
        }
    }
    ctx->pc = 0x281958u;
label_281958:
    // 0x281958: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x281958u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28195c:
    // 0x28195c: 0x1240005a  beqz        $s2, . + 4 + (0x5A << 2)
label_281960:
    if (ctx->pc == 0x281960u) {
        ctx->pc = 0x281960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28195Cu;
        // 0x281960: 0x26060001  addiu       $a2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281964u;
        goto label_281964;
    }
    ctx->pc = 0x28195Cu;
    {
        const bool branch_taken_0x28195c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x281960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28195Cu;
        // 0x281960: 0x26060001  addiu       $a2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28195c) {
            ctx->pc = 0x281AC8u;
            goto label_281ac8;
        }
    }
    ctx->pc = 0x281964u;
label_281964:
    // 0x281964: 0x7a2202c0  lq          $v0, 0x2C0($s1)
    ctx->pc = 0x281964u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 704)));
label_281968:
    // 0x281968: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x281968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28196c:
    // 0x28196c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28196cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_281970:
    // 0x281970: 0xc040668  jal         func_1019A0
label_281974:
    if (ctx->pc == 0x281974u) {
        ctx->pc = 0x281974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281970u;
        // 0x281974: 0x7fa200d0  sq          $v0, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281978u;
        goto label_281978;
    }
    ctx->pc = 0x281970u;
    SET_GPR_U32(ctx, 31, 0x281978u);
    ctx->pc = 0x281974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281970u;
    // 0x281974: 0x7fa200d0  sq          $v0, 0xD0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1019A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1019A0u, 0x281970u, 0x281978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281978u;
label_281978:
    // 0x281978: 0x26270090  addiu       $a3, $s1, 0x90
    ctx->pc = 0x281978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_28197c:
    // 0x28197c: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x28197cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
label_281980:
    // 0x281980: 0x84e20002  lh          $v0, 0x2($a3)
    ctx->pc = 0x281980u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_281984:
    // 0x281984: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x281984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
label_281988:
    // 0x281988: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x281988u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_28198c:
    // 0x28198c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x28198cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_281990:
    // 0x281990: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x281990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_281994:
    // 0x281994: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x281994u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_281998:
    // 0x281998: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x281998u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_28199c:
    // 0x28199c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x28199cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_2819a0:
    // 0x2819a0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2819a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2819a4:
    // 0x2819a4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2819a4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2819a8:
    // 0x2819a8: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x2819a8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2819ac:
    // 0x2819ac: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2819acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2819b0:
    // 0x2819b0: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x2819b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2819b4:
    // 0x2819b4: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x2819b4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2819b8:
    // 0x2819b8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2819b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2819bc:
    // 0x2819bc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2819bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2819c0:
    // 0x2819c0: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x2819c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2819c4:
    // 0x2819c4: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x2819c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2819c8:
    // 0x2819c8: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x2819c8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2819cc:
    // 0x2819cc: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x2819ccu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2819d0:
    // 0x2819d0: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x2819d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2819d4:
    // 0x2819d4: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x2819d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2819d8:
    // 0x2819d8: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x2819d8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_2819dc:
    // 0x2819dc: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x2819dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_2819e0:
    // 0x2819e0: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x2819e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2819e4:
    // 0x2819e4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2819e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2819e8:
    // 0x2819e8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2819e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2819ec:
    // 0x2819ec: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2819ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2819f0:
    // 0x2819f0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2819f0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2819f4:
    // 0x2819f4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2819f4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2819f8:
    // 0x2819f8: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x2819f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2819fc:
    // 0x2819fc: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2819fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_281a00:
    // 0x281a00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x281a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_281a04:
    // 0x281a04: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x281a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
label_281a08:
    // 0x281a08: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x281a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
label_281a0c:
    // 0x281a0c: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x281a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
label_281a10:
    // 0x281a10: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x281a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_281a14:
    // 0x281a14: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x281a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_281a18:
    // 0x281a18: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x281a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_281a1c:
    // 0x281a1c: 0x84e50002  lh          $a1, 0x2($a3)
    ctx->pc = 0x281a1cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_281a20:
    // 0x281a20: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x281a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_281a24:
    // 0x281a24: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x281a24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_281a28:
    // 0x281a28: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x281a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_281a2c:
    // 0x281a2c: 0xc0cd940  jal         func_336500
label_281a30:
    if (ctx->pc == 0x281A30u) {
        ctx->pc = 0x281A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A2Cu;
        // 0x281a30: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281A34u;
        goto label_281a34;
    }
    ctx->pc = 0x281A2Cu;
    SET_GPR_U32(ctx, 31, 0x281A34u);
    ctx->pc = 0x281A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281A2Cu;
    // 0x281a30: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x281A2Cu, 0x281A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281A34u;
label_281a34:
    // 0x281a34: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x281a34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_281a38:
    // 0x281a38: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x281a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_281a3c:
    // 0x281a3c: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x281a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_281a40:
    // 0x281a40: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x281a40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_281a44:
    // 0x281a44: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x281a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_281a48:
    // 0x281a48: 0x40f809  jalr        $v0
label_281a4c:
    if (ctx->pc == 0x281A4Cu) {
        ctx->pc = 0x281A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A48u;
        // 0x281a4c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281A50u;
        goto label_281a50;
    }
    ctx->pc = 0x281A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x281A50u);
        ctx->pc = 0x281A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A48u;
        // 0x281a4c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281A48u, 0x281A50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x281A50u;
label_281a50:
    // 0x281a50: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x281a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_281a54:
    // 0x281a54: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x281a54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_281a58:
    // 0x281a58: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x281a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_281a5c:
    // 0x281a5c: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x281a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_281a60:
    // 0x281a60: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x281a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_281a64:
    // 0x281a64: 0x84a400f0  lh          $a0, 0xF0($a1)
    ctx->pc = 0x281a64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 240)));
label_281a68:
    // 0x281a68: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x281a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
label_281a6c:
    // 0x281a6c: 0x40f809  jalr        $v0
label_281a70:
    if (ctx->pc == 0x281A70u) {
        ctx->pc = 0x281A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A6Cu;
        // 0x281a70: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281A74u;
        goto label_281a74;
    }
    ctx->pc = 0x281A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x281A74u);
        ctx->pc = 0x281A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A6Cu;
        // 0x281a70: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281A6Cu, 0x281A74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x281A74u;
label_281a74:
    // 0x281a74: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x281a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_281a78:
    // 0x281a78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x281a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_281a7c:
    // 0x281a7c: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x281a7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_281a80:
    // 0x281a80: 0x8c66001c  lw          $a2, 0x1C($v1)
    ctx->pc = 0x281a80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_281a84:
    // 0x281a84: 0xc0f809  jalr        $a2
label_281a88:
    if (ctx->pc == 0x281A88u) {
        ctx->pc = 0x281A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A84u;
        // 0x281a88: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281A8Cu;
        goto label_281a8c;
    }
    ctx->pc = 0x281A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x281A8Cu);
        ctx->pc = 0x281A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A84u;
        // 0x281a88: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281A84u, 0x281A8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x281A8Cu;
label_281a8c:
    // 0x281a8c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x281a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_281a90:
    // 0x281a90: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x281a90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_281a94:
    // 0x281a94: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x281a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_281a98:
    // 0x281a98: 0x40f809  jalr        $v0
label_281a9c:
    if (ctx->pc == 0x281A9Cu) {
        ctx->pc = 0x281A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A98u;
        // 0x281a9c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281AA0u;
        goto label_281aa0;
    }
    ctx->pc = 0x281A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x281AA0u);
        ctx->pc = 0x281A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A98u;
        // 0x281a9c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281A98u, 0x281AA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x281AA0u;
label_281aa0:
    // 0x281aa0: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x281aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_281aa4:
    // 0x281aa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x281aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_281aa8:
    // 0x281aa8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x281aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_281aac:
    // 0x281aac: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x281aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_281ab0:
    // 0x281ab0: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x281ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_281ab4:
    // 0x281ab4: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x281ab4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_281ab8:
    // 0x281ab8: 0xc089990  jal         func_226640
label_281abc:
    if (ctx->pc == 0x281ABCu) {
        ctx->pc = 0x281ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281AB8u;
        // 0x281abc: 0x7e2202c0  sq          $v0, 0x2C0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 704), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281AC0u;
        goto label_281ac0;
    }
    ctx->pc = 0x281AB8u;
    SET_GPR_U32(ctx, 31, 0x281AC0u);
    ctx->pc = 0x281ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281AB8u;
    // 0x281abc: 0x7e2202c0  sq          $v0, 0x2C0($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 704), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x281AB8u, 0x281AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281AC0u;
label_281ac0:
    // 0x281ac0: 0x10000051  b           . + 4 + (0x51 << 2)
label_281ac4:
    if (ctx->pc == 0x281AC4u) {
        ctx->pc = 0x281AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281AC0u;
        // 0x281ac4: 0x7bb00160  lq          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281AC8u;
        goto label_281ac8;
    }
    ctx->pc = 0x281AC0u;
    {
        const bool branch_taken_0x281ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281AC0u;
        // 0x281ac4: 0x7bb00160  lq          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281ac0) {
            ctx->pc = 0x281C08u;
            goto label_281c08;
        }
    }
    ctx->pc = 0x281AC8u;
label_281ac8:
    // 0x281ac8: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x281ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_281acc:
    // 0x281acc: 0x8e3300d8  lw          $s3, 0xD8($s1)
    ctx->pc = 0x281accu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_281ad0:
    // 0x281ad0: 0x2610e9c0  addiu       $s0, $s0, -0x1640
    ctx->pc = 0x281ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961600));
label_281ad4:
    // 0x281ad4: 0xc041532  jal         func_1054C8
label_281ad8:
    if (ctx->pc == 0x281AD8u) {
        ctx->pc = 0x281AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281AD4u;
        // 0x281ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281ADCu;
        goto label_281adc;
    }
    ctx->pc = 0x281AD4u;
    SET_GPR_U32(ctx, 31, 0x281ADCu);
    ctx->pc = 0x281AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281AD4u;
    // 0x281ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x281AD4u, 0x281ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281ADCu;
label_281adc:
    // 0x281adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x281adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_281ae0:
    // 0x281ae0: 0xc041532  jal         func_1054C8
label_281ae4:
    if (ctx->pc == 0x281AE4u) {
        ctx->pc = 0x281AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281AE0u;
        // 0x281ae4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281AE8u;
        goto label_281ae8;
    }
    ctx->pc = 0x281AE0u;
    SET_GPR_U32(ctx, 31, 0x281AE8u);
    ctx->pc = 0x281AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281AE0u;
    // 0x281ae4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x281AE0u, 0x281AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281AE8u;
label_281ae8:
    // 0x281ae8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x281ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_281aec:
    // 0x281aec: 0xc05d462  jal         func_175188
label_281af0:
    if (ctx->pc == 0x281AF0u) {
        ctx->pc = 0x281AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281AECu;
        // 0x281af0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281AF4u;
        goto label_281af4;
    }
    ctx->pc = 0x281AECu;
    SET_GPR_U32(ctx, 31, 0x281AF4u);
    ctx->pc = 0x281AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281AECu;
    // 0x281af0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175188u, 0x281AECu, 0x281AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281AF4u;
label_281af4:
    // 0x281af4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x281af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_281af8:
    // 0x281af8: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x281af8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_281afc:
    // 0x281afc: 0x8c6500c4  lw          $a1, 0xC4($v1)
    ctx->pc = 0x281afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_281b00:
    // 0x281b00: 0xa0f809  jalr        $a1
label_281b04:
    if (ctx->pc == 0x281B04u) {
        ctx->pc = 0x281B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B00u;
        // 0x281b04: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281B08u;
        goto label_281b08;
    }
    ctx->pc = 0x281B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x281B08u);
        ctx->pc = 0x281B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B00u;
        // 0x281b04: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281B00u, 0x281B08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x281B08u;
label_281b08:
    // 0x281b08: 0xc05d462  jal         func_175188
label_281b0c:
    if (ctx->pc == 0x281B0Cu) {
        ctx->pc = 0x281B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B08u;
        // 0x281b0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281B10u;
        goto label_281b10;
    }
    ctx->pc = 0x281B08u;
    SET_GPR_U32(ctx, 31, 0x281B10u);
    ctx->pc = 0x281B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281B08u;
    // 0x281b0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175188u, 0x281B08u, 0x281B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281B10u;
label_281b10:
    // 0x281b10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x281b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_281b14:
    // 0x281b14: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x281b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_281b18:
    // 0x281b18: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x281b18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_281b1c:
    // 0x281b1c: 0x8c6600cc  lw          $a2, 0xCC($v1)
    ctx->pc = 0x281b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_281b20:
    // 0x281b20: 0xc0f809  jalr        $a2
label_281b24:
    if (ctx->pc == 0x281B24u) {
        ctx->pc = 0x281B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B20u;
        // 0x281b24: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281B28u;
        goto label_281b28;
    }
    ctx->pc = 0x281B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x281B28u);
        ctx->pc = 0x281B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B20u;
        // 0x281b24: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281B20u, 0x281B28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x281B28u;
label_281b28:
    // 0x281b28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x281b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_281b2c:
    // 0x281b2c: 0xc08997c  jal         func_2265F0
label_281b30:
    if (ctx->pc == 0x281B30u) {
        ctx->pc = 0x281B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B2Cu;
        // 0x281b30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281B34u;
        goto label_281b34;
    }
    ctx->pc = 0x281B2Cu;
    SET_GPR_U32(ctx, 31, 0x281B34u);
    ctx->pc = 0x281B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281B2Cu;
    // 0x281b30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x281B2Cu, 0x281B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281B34u;
label_281b34:
    // 0x281b34: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_281b38:
    if (ctx->pc == 0x281B38u) {
        ctx->pc = 0x281B3Cu;
        goto label_281b3c;
    }
    ctx->pc = 0x281B34u;
    {
        const bool branch_taken_0x281b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281b34) {
            ctx->pc = 0x281B70u;
            goto label_281b70;
        }
    }
    ctx->pc = 0x281B3Cu;
label_281b3c:
    // 0x281b3c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_281b40:
    if (ctx->pc == 0x281B40u) {
        ctx->pc = 0x281B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B3Cu;
        // 0x281b40: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281B44u;
        goto label_281b44;
    }
    ctx->pc = 0x281B3Cu;
    {
        const bool branch_taken_0x281b3c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x281B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B3Cu;
        // 0x281b40: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281b3c) {
            ctx->pc = 0x281B60u;
            goto label_281b60;
        }
    }
    ctx->pc = 0x281B44u;
label_281b44:
    // 0x281b44: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x281b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_281b48:
    // 0x281b48: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x281b48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_281b4c:
    // 0x281b4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x281b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_281b50:
    // 0x281b50: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x281b50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_281b54:
    // 0x281b54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x281b54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281b58:
    // 0x281b58: 0xc04159e  jal         func_105678
label_281b5c:
    if (ctx->pc == 0x281B5Cu) {
        ctx->pc = 0x281B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B58u;
        // 0x281b5c: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281B60u;
        goto label_281b60;
    }
    ctx->pc = 0x281B58u;
    SET_GPR_U32(ctx, 31, 0x281B60u);
    ctx->pc = 0x281B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281B58u;
    // 0x281b5c: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x281B58u, 0x281B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281B60u;
label_281b60:
    // 0x281b60: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x281b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_281b64:
    // 0x281b64: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x281b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_281b68:
    // 0x281b68: 0x1000000c  b           . + 4 + (0xC << 2)
label_281b6c:
    if (ctx->pc == 0x281B6Cu) {
        ctx->pc = 0x281B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B68u;
        // 0x281b6c: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281B70u;
        goto label_281b70;
    }
    ctx->pc = 0x281B68u;
    {
        const bool branch_taken_0x281b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B68u;
        // 0x281b6c: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281b68) {
            ctx->pc = 0x281B9Cu;
            goto label_281b9c;
        }
    }
    ctx->pc = 0x281B70u;
label_281b70:
    // 0x281b70: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_281b74:
    if (ctx->pc == 0x281B74u) {
        ctx->pc = 0x281B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B70u;
        // 0x281b74: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281B78u;
        goto label_281b78;
    }
    ctx->pc = 0x281B70u;
    {
        const bool branch_taken_0x281b70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x281B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B70u;
        // 0x281b74: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281b70) {
            ctx->pc = 0x281B94u;
            goto label_281b94;
        }
    }
    ctx->pc = 0x281B78u;
label_281b78:
    // 0x281b78: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x281b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_281b7c:
    // 0x281b7c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x281b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_281b80:
    // 0x281b80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x281b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_281b84:
    // 0x281b84: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x281b84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_281b88:
    // 0x281b88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x281b88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281b8c:
    // 0x281b8c: 0xc04159e  jal         func_105678
label_281b90:
    if (ctx->pc == 0x281B90u) {
        ctx->pc = 0x281B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B8Cu;
        // 0x281b90: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281B94u;
        goto label_281b94;
    }
    ctx->pc = 0x281B8Cu;
    SET_GPR_U32(ctx, 31, 0x281B94u);
    ctx->pc = 0x281B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281B8Cu;
    // 0x281b90: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x281B8Cu, 0x281B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281B94u;
label_281b94:
    // 0x281b94: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x281b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_281b98:
    // 0x281b98: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x281b98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_281b9c:
    // 0x281b9c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_281ba0:
    if (ctx->pc == 0x281BA0u) {
        ctx->pc = 0x281BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B9Cu;
        // 0x281ba0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281BA4u;
        goto label_281ba4;
    }
    ctx->pc = 0x281B9Cu;
    {
        const bool branch_taken_0x281b9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x281BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B9Cu;
        // 0x281ba0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281b9c) {
            ctx->pc = 0x281BC4u;
            goto label_281bc4;
        }
    }
    ctx->pc = 0x281BA4u;
label_281ba4:
    // 0x281ba4: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x281ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_281ba8:
    // 0x281ba8: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x281ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_281bac:
    // 0x281bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x281bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_281bb0:
    // 0x281bb0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x281bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_281bb4:
    // 0x281bb4: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x281bb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_281bb8:
    // 0x281bb8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x281bb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_281bbc:
    // 0x281bbc: 0xc041b20  jal         func_106C80
label_281bc0:
    if (ctx->pc == 0x281BC0u) {
        ctx->pc = 0x281BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281BBCu;
        // 0x281bc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281BC4u;
        goto label_281bc4;
    }
    ctx->pc = 0x281BBCu;
    SET_GPR_U32(ctx, 31, 0x281BC4u);
    ctx->pc = 0x281BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281BBCu;
    // 0x281bc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x281BBCu, 0x281BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281BC4u;
label_281bc4:
    // 0x281bc4: 0xc05d484  jal         func_175210
label_281bc8:
    if (ctx->pc == 0x281BC8u) {
        ctx->pc = 0x281BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281BC4u;
        // 0x281bc8: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281BCCu;
        goto label_281bcc;
    }
    ctx->pc = 0x281BC4u;
    SET_GPR_U32(ctx, 31, 0x281BCCu);
    ctx->pc = 0x281BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281BC4u;
    // 0x281bc8: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x281BC4u, 0x281BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281BCCu;
label_281bcc:
    // 0x281bcc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x281bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_281bd0:
    // 0x281bd0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x281bd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_281bd4:
    // 0x281bd4: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x281bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_281bd8:
    // 0x281bd8: 0xa0f809  jalr        $a1
label_281bdc:
    if (ctx->pc == 0x281BDCu) {
        ctx->pc = 0x281BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281BD8u;
        // 0x281bdc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281BE0u;
        goto label_281be0;
    }
    ctx->pc = 0x281BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x281BE0u);
        ctx->pc = 0x281BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281BD8u;
        // 0x281bdc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281BD8u, 0x281BE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x281BE0u;
label_281be0:
    // 0x281be0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x281be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_281be4:
    // 0x281be4: 0xc087016  jal         func_21C058
label_281be8:
    if (ctx->pc == 0x281BE8u) {
        ctx->pc = 0x281BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281BE4u;
        // 0x281be8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281BECu;
        goto label_281bec;
    }
    ctx->pc = 0x281BE4u;
    SET_GPR_U32(ctx, 31, 0x281BECu);
    ctx->pc = 0x281BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281BE4u;
    // 0x281be8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x281BE4u, 0x281BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281BECu;
label_281bec:
    // 0x281bec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x281becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_281bf0:
    // 0x281bf0: 0xc05d53a  jal         func_1754E8
label_281bf4:
    if (ctx->pc == 0x281BF4u) {
        ctx->pc = 0x281BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281BF0u;
        // 0x281bf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281BF8u;
        goto label_281bf8;
    }
    ctx->pc = 0x281BF0u;
    SET_GPR_U32(ctx, 31, 0x281BF8u);
    ctx->pc = 0x281BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281BF0u;
    // 0x281bf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x281BF0u, 0x281BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281BF8u;
label_281bf8:
    // 0x281bf8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x281bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_281bfc:
    // 0x281bfc: 0xc05d4f6  jal         func_1753D8
label_281c00:
    if (ctx->pc == 0x281C00u) {
        ctx->pc = 0x281C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281BFCu;
        // 0x281c00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281C04u;
        goto label_281c04;
    }
    ctx->pc = 0x281BFCu;
    SET_GPR_U32(ctx, 31, 0x281C04u);
    ctx->pc = 0x281C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281BFCu;
    // 0x281c00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x281BFCu, 0x281C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281C04u;
label_281c04:
    // 0x281c04: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x281c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_281c08:
    // 0x281c08: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x281c08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_281c0c:
    // 0x281c0c: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x281c0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_281c10:
    // 0x281c10: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x281c10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_281c14:
    // 0x281c14: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x281c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_281c18:
    // 0x281c18: 0x3e00008  jr          $ra
label_281c1c:
    if (ctx->pc == 0x281C1Cu) {
        ctx->pc = 0x281C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281C18u;
        // 0x281c1c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281C20u;
        goto label_fallthrough_0x281c18;
    }
    ctx->pc = 0x281C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281C18u;
        // 0x281c1c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x281c18:
    ctx->pc = 0x281C20u;
}
