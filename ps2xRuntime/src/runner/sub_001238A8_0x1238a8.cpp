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

// Function: sub_001238A8
// Address: 0x1238a8 - 0x123ba0
void sub_001238A8_0x1238a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001238A8_0x1238a8");
#endif

    switch (ctx->pc) {
        case 0x1238a8u: goto label_1238a8;
        case 0x1238acu: goto label_1238ac;
        case 0x1238b0u: goto label_1238b0;
        case 0x1238b4u: goto label_1238b4;
        case 0x1238b8u: goto label_1238b8;
        case 0x1238bcu: goto label_1238bc;
        case 0x1238c0u: goto label_1238c0;
        case 0x1238c4u: goto label_1238c4;
        case 0x1238c8u: goto label_1238c8;
        case 0x1238ccu: goto label_1238cc;
        case 0x1238d0u: goto label_1238d0;
        case 0x1238d4u: goto label_1238d4;
        case 0x1238d8u: goto label_1238d8;
        case 0x1238dcu: goto label_1238dc;
        case 0x1238e0u: goto label_1238e0;
        case 0x1238e4u: goto label_1238e4;
        case 0x1238e8u: goto label_1238e8;
        case 0x1238ecu: goto label_1238ec;
        case 0x1238f0u: goto label_1238f0;
        case 0x1238f4u: goto label_1238f4;
        case 0x1238f8u: goto label_1238f8;
        case 0x1238fcu: goto label_1238fc;
        case 0x123900u: goto label_123900;
        case 0x123904u: goto label_123904;
        case 0x123908u: goto label_123908;
        case 0x12390cu: goto label_12390c;
        case 0x123910u: goto label_123910;
        case 0x123914u: goto label_123914;
        case 0x123918u: goto label_123918;
        case 0x12391cu: goto label_12391c;
        case 0x123920u: goto label_123920;
        case 0x123924u: goto label_123924;
        case 0x123928u: goto label_123928;
        case 0x12392cu: goto label_12392c;
        case 0x123930u: goto label_123930;
        case 0x123934u: goto label_123934;
        case 0x123938u: goto label_123938;
        case 0x12393cu: goto label_12393c;
        case 0x123940u: goto label_123940;
        case 0x123944u: goto label_123944;
        case 0x123948u: goto label_123948;
        case 0x12394cu: goto label_12394c;
        case 0x123950u: goto label_123950;
        case 0x123954u: goto label_123954;
        case 0x123958u: goto label_123958;
        case 0x12395cu: goto label_12395c;
        case 0x123960u: goto label_123960;
        case 0x123964u: goto label_123964;
        case 0x123968u: goto label_123968;
        case 0x12396cu: goto label_12396c;
        case 0x123970u: goto label_123970;
        case 0x123974u: goto label_123974;
        case 0x123978u: goto label_123978;
        case 0x12397cu: goto label_12397c;
        case 0x123980u: goto label_123980;
        case 0x123984u: goto label_123984;
        case 0x123988u: goto label_123988;
        case 0x12398cu: goto label_12398c;
        case 0x123990u: goto label_123990;
        case 0x123994u: goto label_123994;
        case 0x123998u: goto label_123998;
        case 0x12399cu: goto label_12399c;
        case 0x1239a0u: goto label_1239a0;
        case 0x1239a4u: goto label_1239a4;
        case 0x1239a8u: goto label_1239a8;
        case 0x1239acu: goto label_1239ac;
        case 0x1239b0u: goto label_1239b0;
        case 0x1239b4u: goto label_1239b4;
        case 0x1239b8u: goto label_1239b8;
        case 0x1239bcu: goto label_1239bc;
        case 0x1239c0u: goto label_1239c0;
        case 0x1239c4u: goto label_1239c4;
        case 0x1239c8u: goto label_1239c8;
        case 0x1239ccu: goto label_1239cc;
        case 0x1239d0u: goto label_1239d0;
        case 0x1239d4u: goto label_1239d4;
        case 0x1239d8u: goto label_1239d8;
        case 0x1239dcu: goto label_1239dc;
        case 0x1239e0u: goto label_1239e0;
        case 0x1239e4u: goto label_1239e4;
        case 0x1239e8u: goto label_1239e8;
        case 0x1239ecu: goto label_1239ec;
        case 0x1239f0u: goto label_1239f0;
        case 0x1239f4u: goto label_1239f4;
        case 0x1239f8u: goto label_1239f8;
        case 0x1239fcu: goto label_1239fc;
        case 0x123a00u: goto label_123a00;
        case 0x123a04u: goto label_123a04;
        case 0x123a08u: goto label_123a08;
        case 0x123a0cu: goto label_123a0c;
        case 0x123a10u: goto label_123a10;
        case 0x123a14u: goto label_123a14;
        case 0x123a18u: goto label_123a18;
        case 0x123a1cu: goto label_123a1c;
        case 0x123a20u: goto label_123a20;
        case 0x123a24u: goto label_123a24;
        case 0x123a28u: goto label_123a28;
        case 0x123a2cu: goto label_123a2c;
        case 0x123a30u: goto label_123a30;
        case 0x123a34u: goto label_123a34;
        case 0x123a38u: goto label_123a38;
        case 0x123a3cu: goto label_123a3c;
        case 0x123a40u: goto label_123a40;
        case 0x123a44u: goto label_123a44;
        case 0x123a48u: goto label_123a48;
        case 0x123a4cu: goto label_123a4c;
        case 0x123a50u: goto label_123a50;
        case 0x123a54u: goto label_123a54;
        case 0x123a58u: goto label_123a58;
        case 0x123a5cu: goto label_123a5c;
        case 0x123a60u: goto label_123a60;
        case 0x123a64u: goto label_123a64;
        case 0x123a68u: goto label_123a68;
        case 0x123a6cu: goto label_123a6c;
        case 0x123a70u: goto label_123a70;
        case 0x123a74u: goto label_123a74;
        case 0x123a78u: goto label_123a78;
        case 0x123a7cu: goto label_123a7c;
        case 0x123a80u: goto label_123a80;
        case 0x123a84u: goto label_123a84;
        case 0x123a88u: goto label_123a88;
        case 0x123a8cu: goto label_123a8c;
        case 0x123a90u: goto label_123a90;
        case 0x123a94u: goto label_123a94;
        case 0x123a98u: goto label_123a98;
        case 0x123a9cu: goto label_123a9c;
        case 0x123aa0u: goto label_123aa0;
        case 0x123aa4u: goto label_123aa4;
        case 0x123aa8u: goto label_123aa8;
        case 0x123aacu: goto label_123aac;
        case 0x123ab0u: goto label_123ab0;
        case 0x123ab4u: goto label_123ab4;
        case 0x123ab8u: goto label_123ab8;
        case 0x123abcu: goto label_123abc;
        case 0x123ac0u: goto label_123ac0;
        case 0x123ac4u: goto label_123ac4;
        case 0x123ac8u: goto label_123ac8;
        case 0x123accu: goto label_123acc;
        case 0x123ad0u: goto label_123ad0;
        case 0x123ad4u: goto label_123ad4;
        case 0x123ad8u: goto label_123ad8;
        case 0x123adcu: goto label_123adc;
        case 0x123ae0u: goto label_123ae0;
        case 0x123ae4u: goto label_123ae4;
        case 0x123ae8u: goto label_123ae8;
        case 0x123aecu: goto label_123aec;
        case 0x123af0u: goto label_123af0;
        case 0x123af4u: goto label_123af4;
        case 0x123af8u: goto label_123af8;
        case 0x123afcu: goto label_123afc;
        case 0x123b00u: goto label_123b00;
        case 0x123b04u: goto label_123b04;
        case 0x123b08u: goto label_123b08;
        case 0x123b0cu: goto label_123b0c;
        case 0x123b10u: goto label_123b10;
        case 0x123b14u: goto label_123b14;
        case 0x123b18u: goto label_123b18;
        case 0x123b1cu: goto label_123b1c;
        case 0x123b20u: goto label_123b20;
        case 0x123b24u: goto label_123b24;
        case 0x123b28u: goto label_123b28;
        case 0x123b2cu: goto label_123b2c;
        case 0x123b30u: goto label_123b30;
        case 0x123b34u: goto label_123b34;
        case 0x123b38u: goto label_123b38;
        case 0x123b3cu: goto label_123b3c;
        case 0x123b40u: goto label_123b40;
        case 0x123b44u: goto label_123b44;
        case 0x123b48u: goto label_123b48;
        case 0x123b4cu: goto label_123b4c;
        case 0x123b50u: goto label_123b50;
        case 0x123b54u: goto label_123b54;
        case 0x123b58u: goto label_123b58;
        case 0x123b5cu: goto label_123b5c;
        case 0x123b60u: goto label_123b60;
        case 0x123b64u: goto label_123b64;
        case 0x123b68u: goto label_123b68;
        case 0x123b6cu: goto label_123b6c;
        case 0x123b70u: goto label_123b70;
        case 0x123b74u: goto label_123b74;
        case 0x123b78u: goto label_123b78;
        case 0x123b7cu: goto label_123b7c;
        case 0x123b80u: goto label_123b80;
        case 0x123b84u: goto label_123b84;
        case 0x123b88u: goto label_123b88;
        case 0x123b8cu: goto label_123b8c;
        case 0x123b90u: goto label_123b90;
        case 0x123b94u: goto label_123b94;
        case 0x123b98u: goto label_123b98;
        case 0x123b9cu: goto label_123b9c;
        default: break;
    }

    ctx->pc = 0x1238a8u;

label_1238a8:
    // 0x1238a8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1238a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_1238ac:
    // 0x1238ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1238acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1238b0:
    // 0x1238b0: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x1238b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_1238b4:
    // 0x1238b4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x1238b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_1238b8:
    // 0x1238b8: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x1238b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_1238bc:
    // 0x1238bc: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x1238bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_1238c0:
    // 0x1238c0: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x1238c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_1238c4:
    // 0x1238c4: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x1238c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1238c8:
    // 0x1238c8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1238c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1238cc:
    // 0x1238cc: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x1238ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1238d0:
    // 0x1238d0: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1238d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_1238d4:
    // 0x1238d4: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1238d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_1238d8:
    // 0x1238d8: 0x8c4447c4  lw          $a0, 0x47C4($v0)
    ctx->pc = 0x1238d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
label_1238dc:
    // 0x1238dc: 0x8e6501e0  lw          $a1, 0x1E0($s3)
    ctx->pc = 0x1238dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 480)));
label_1238e0:
    // 0x1238e0: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x1238e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1238e4:
    // 0x1238e4: 0x84a20092  lh          $v0, 0x92($a1)
    ctx->pc = 0x1238e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 146)));
label_1238e8:
    // 0x1238e8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1238e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_1238ec:
    // 0x1238ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1238ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1238f0:
    // 0x1238f0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1238f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1238f4:
    // 0x1238f4: 0x8cd10004  lw          $s1, 0x4($a2)
    ctx->pc = 0x1238f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1238f8:
    // 0x1238f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1238f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1238fc:
    // 0x1238fc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1238fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_123900:
    // 0x123900: 0xe67401e8  swc1        $f20, 0x1E8($s3)
    ctx->pc = 0x123900u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 488), bits); }
label_123904:
    // 0x123904: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x123904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_123908:
    // 0x123908: 0x7e630180  sq          $v1, 0x180($s3)
    ctx->pc = 0x123908u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 384), GPR_VEC(ctx, 3));
label_12390c:
    // 0x12390c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x12390cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_123910:
    // 0x123910: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x123910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_123914:
    // 0x123914: 0x60f809  jalr        $v1
label_123918:
    if (ctx->pc == 0x123918u) {
        ctx->pc = 0x123918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123914u;
        // 0x123918: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12391Cu;
        goto label_12391c;
    }
    ctx->pc = 0x123914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12391Cu);
        ctx->pc = 0x123918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123914u;
        // 0x123918: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123914u, 0x12391Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12391Cu;
label_12391c:
    // 0x12391c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x12391cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_123920:
    // 0x123920: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x123920u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_123924:
    // 0x123924: 0x26101740  addiu       $s0, $s0, 0x1740
    ctx->pc = 0x123924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
label_123928:
    // 0x123928: 0x4614ad00  add.s       $f20, $f21, $f20
    ctx->pc = 0x123928u;
    ctx->f[20] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
label_12392c:
    // 0x12392c: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x12392cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_123930:
    // 0x123930: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x123930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_123934:
    // 0x123934: 0x7a620180  lq          $v0, 0x180($s3)
    ctx->pc = 0x123934u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 384)));
label_123938:
    // 0x123938: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x123938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12393c:
    // 0x12393c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x12393cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_123940:
    // 0x123940: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x123940u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123944:
    // 0x123944: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x123944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_123948:
    // 0x123948: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x123948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_12394c:
    // 0x12394c: 0xe7b40044  swc1        $f20, 0x44($sp)
    ctx->pc = 0x12394cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_123950:
    // 0x123950: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x123950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_123954:
    // 0x123954: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x123954u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_123958:
    // 0x123958: 0xc0d4336  jal         func_350CD8
label_12395c:
    if (ctx->pc == 0x12395Cu) {
        ctx->pc = 0x12395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123958u;
        // 0x12395c: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123960u;
        goto label_123960;
    }
    ctx->pc = 0x123958u;
    SET_GPR_U32(ctx, 31, 0x123960u);
    ctx->pc = 0x12395Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123958u;
    // 0x12395c: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x123958u, 0x123960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123960u;
label_123960:
    // 0x123960: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x123960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_123964:
    // 0x123964: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x123964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_123968:
    // 0x123968: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x123968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_12396c:
    // 0x12396c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x12396cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_123970:
    // 0x123970: 0x46156301  sub.s       $f12, $f12, $f21
    ctx->pc = 0x123970u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[21]);
label_123974:
    // 0x123974: 0x245201b8  addiu       $s2, $v0, 0x1B8
    ctx->pc = 0x123974u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 440));
label_123978:
    // 0x123978: 0xe66c01e8  swc1        $f12, 0x1E8($s3)
    ctx->pc = 0x123978u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 488), bits); }
label_12397c:
    // 0x12397c: 0x845001b8  lh          $s0, 0x1B8($v0)
    ctx->pc = 0x12397cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 440)));
label_123980:
    // 0x123980: 0xc136b24  jal         func_4DAC90
label_123984:
    if (ctx->pc == 0x123984u) {
        ctx->pc = 0x123984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123980u;
        // 0x123984: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123988u;
        goto label_123988;
    }
    ctx->pc = 0x123980u;
    SET_GPR_U32(ctx, 31, 0x123988u);
    ctx->pc = 0x123984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123980u;
    // 0x123984: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x123980u, 0x123988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123988u;
label_123988:
    // 0x123988: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x123988u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_12398c:
    // 0x12398c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x12398cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_123990:
    // 0x123990: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x123990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_123994:
    // 0x123994: 0x26650180  addiu       $a1, $s3, 0x180
    ctx->pc = 0x123994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
label_123998:
    // 0x123998: 0xc136b18  jal         func_4DAC60
label_12399c:
    if (ctx->pc == 0x12399Cu) {
        ctx->pc = 0x12399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123998u;
        // 0x12399c: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1239A0u;
        goto label_1239a0;
    }
    ctx->pc = 0x123998u;
    SET_GPR_U32(ctx, 31, 0x1239A0u);
    ctx->pc = 0x12399Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123998u;
    // 0x12399c: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x123998u, 0x1239A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1239A0u;
label_1239a0:
    // 0x1239a0: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x1239a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1239a4:
    // 0x1239a4: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x1239a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1239a8:
    // 0x1239a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1239a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1239ac:
    // 0x1239ac: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x1239acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_1239b0:
    // 0x1239b0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1239b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1239b4:
    // 0x1239b4: 0x40f809  jalr        $v0
label_1239b8:
    if (ctx->pc == 0x1239B8u) {
        ctx->pc = 0x1239B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1239B4u;
        // 0x1239b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1239BCu;
        goto label_1239bc;
    }
    ctx->pc = 0x1239B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1239BCu);
        ctx->pc = 0x1239B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1239B4u;
        // 0x1239b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1239B4u, 0x1239BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1239BCu;
label_1239bc:
    // 0x1239bc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1239bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1239c0:
    // 0x1239c0: 0x3c01bf45  lui         $at, 0xBF45
    ctx->pc = 0x1239c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48965 << 16));
label_1239c4:
    // 0x1239c4: 0x3421382c  ori         $at, $at, 0x382C
    ctx->pc = 0x1239c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14380);
label_1239c8:
    // 0x1239c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1239c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1239cc:
    // 0x1239cc: 0x24631720  addiu       $v1, $v1, 0x1720
    ctx->pc = 0x1239ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5920));
label_1239d0:
    // 0x1239d0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1239d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1239d4:
    // 0x1239d4: 0xc12e310  jal         func_4B8C40
label_1239d8:
    if (ctx->pc == 0x1239D8u) {
        ctx->pc = 0x1239D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1239D4u;
        // 0x1239d8: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1239DCu;
        goto label_1239dc;
    }
    ctx->pc = 0x1239D4u;
    SET_GPR_U32(ctx, 31, 0x1239DCu);
    ctx->pc = 0x1239D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1239D4u;
    // 0x1239d8: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x1239D4u, 0x1239DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1239DCu;
label_1239dc:
    // 0x1239dc: 0x3c01bf45  lui         $at, 0xBF45
    ctx->pc = 0x1239dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48965 << 16));
label_1239e0:
    // 0x1239e0: 0x3421382c  ori         $at, $at, 0x382C
    ctx->pc = 0x1239e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14380);
label_1239e4:
    // 0x1239e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1239e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1239e8:
    // 0x1239e8: 0xc12e29c  jal         func_4B8A70
label_1239ec:
    if (ctx->pc == 0x1239ECu) {
        ctx->pc = 0x1239ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1239E8u;
        // 0x1239ec: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1239F0u;
        goto label_1239f0;
    }
    ctx->pc = 0x1239E8u;
    SET_GPR_U32(ctx, 31, 0x1239F0u);
    ctx->pc = 0x1239ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1239E8u;
    // 0x1239ec: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x1239E8u, 0x1239F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1239F0u;
label_1239f0:
    // 0x1239f0: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x1239f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1239f4:
    // 0x1239f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1239f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1239f8:
    // 0x1239f8: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x1239f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1239fc:
    // 0x1239fc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1239fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_123a00:
    // 0x123a00: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x123a00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_123a04:
    // 0x123a04: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x123a04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_123a08:
    // 0x123a08: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x123a08u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_123a0c:
    // 0x123a0c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x123a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_123a10:
    // 0x123a10: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x123a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_123a14:
    // 0x123a14: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x123a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_123a18:
    // 0x123a18: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x123a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_123a1c:
    // 0x123a1c: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x123a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_123a20:
    // 0x123a20: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x123a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_123a24:
    // 0x123a24: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x123a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_123a28:
    // 0x123a28: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x123a28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_123a2c:
    // 0x123a2c: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x123a2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_123a30:
    // 0x123a30: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x123a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_123a34:
    // 0x123a34: 0x8c6201c4  lw          $v0, 0x1C4($v1)
    ctx->pc = 0x123a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 452)));
label_123a38:
    // 0x123a38: 0x846401c0  lh          $a0, 0x1C0($v1)
    ctx->pc = 0x123a38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 448)));
label_123a3c:
    // 0x123a3c: 0x40f809  jalr        $v0
label_123a40:
    if (ctx->pc == 0x123A40u) {
        ctx->pc = 0x123A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A3Cu;
        // 0x123a40: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123A44u;
        goto label_123a44;
    }
    ctx->pc = 0x123A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x123A44u);
        ctx->pc = 0x123A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A3Cu;
        // 0x123a40: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123A3Cu, 0x123A44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123A44u;
label_123a44:
    // 0x123a44: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x123a44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_123a48:
    // 0x123a48: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x123a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_123a4c:
    // 0x123a4c: 0xc0cd4ee  jal         func_3353B8
label_123a50:
    if (ctx->pc == 0x123A50u) {
        ctx->pc = 0x123A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A4Cu;
        // 0x123a50: 0x2484b888  addiu       $a0, $a0, -0x4778 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123A54u;
        goto label_123a54;
    }
    ctx->pc = 0x123A4Cu;
    SET_GPR_U32(ctx, 31, 0x123A54u);
    ctx->pc = 0x123A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123A4Cu;
    // 0x123a50: 0x2484b888  addiu       $a0, $a0, -0x4778 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x123A4Cu, 0x123A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123A54u;
label_123a54:
    // 0x123a54: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_123a58:
    if (ctx->pc == 0x123A58u) {
        ctx->pc = 0x123A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A54u;
        // 0x123a58: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123A5Cu;
        goto label_123a5c;
    }
    ctx->pc = 0x123A54u;
    {
        const bool branch_taken_0x123a54 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x123A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A54u;
        // 0x123a58: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a54) {
            ctx->pc = 0x123A70u;
            goto label_123a70;
        }
    }
    ctx->pc = 0x123A5Cu;
label_123a5c:
    // 0x123a5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x123a5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123a60:
    // 0x123a60: 0x0  nop
    ctx->pc = 0x123a60u;
    // NOP
label_123a64:
    // 0x123a64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x123a64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_123a68:
    // 0x123a68: 0x10000007  b           . + 4 + (0x7 << 2)
label_123a6c:
    if (ctx->pc == 0x123A6Cu) {
        ctx->pc = 0x123A70u;
        goto label_123a70;
    }
    ctx->pc = 0x123A68u;
    {
        const bool branch_taken_0x123a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123a68) {
            ctx->pc = 0x123A88u;
            goto label_123a88;
        }
    }
    ctx->pc = 0x123A70u;
label_123a70:
    // 0x123a70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x123a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_123a74:
    // 0x123a74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x123a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_123a78:
    // 0x123a78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x123a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123a7c:
    // 0x123a7c: 0x0  nop
    ctx->pc = 0x123a7cu;
    // NOP
label_123a80:
    // 0x123a80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x123a80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_123a84:
    // 0x123a84: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x123a84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_123a88:
    // 0x123a88: 0x3c013e32  lui         $at, 0x3E32
    ctx->pc = 0x123a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15922 << 16));
label_123a8c:
    // 0x123a8c: 0x3421b8c3  ori         $at, $at, 0xB8C3
    ctx->pc = 0x123a8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47299);
label_123a90:
    // 0x123a90: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x123a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_123a94:
    // 0x123a94: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x123a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_123a98:
    // 0x123a98: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x123a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_123a9c:
    // 0x123a9c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x123a9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_123aa0:
    // 0x123aa0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x123aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_123aa4:
    // 0x123aa4: 0x24631730  addiu       $v1, $v1, 0x1730
    ctx->pc = 0x123aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5936));
label_123aa8:
    // 0x123aa8: 0x46140502  mul.s       $f20, $f0, $f20
    ctx->pc = 0x123aa8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_123aac:
    // 0x123aac: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x123aacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_123ab0:
    // 0x123ab0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x123ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_123ab4:
    // 0x123ab4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x123ab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123ab8:
    // 0x123ab8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x123ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_123abc:
    // 0x123abc: 0x4601a501  sub.s       $f20, $f20, $f1
    ctx->pc = 0x123abcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_123ac0:
    // 0x123ac0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x123ac0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_123ac4:
    // 0x123ac4: 0xc12e310  jal         func_4B8C40
label_123ac8:
    if (ctx->pc == 0x123AC8u) {
        ctx->pc = 0x123AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123AC4u;
        // 0x123ac8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x123ACCu;
        goto label_123acc;
    }
    ctx->pc = 0x123AC4u;
    SET_GPR_U32(ctx, 31, 0x123ACCu);
    ctx->pc = 0x123AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123AC4u;
    // 0x123ac8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x123AC4u, 0x123ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123ACCu;
label_123acc:
    // 0x123acc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x123accu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_123ad0:
    // 0x123ad0: 0xc12e29c  jal         func_4B8A70
label_123ad4:
    if (ctx->pc == 0x123AD4u) {
        ctx->pc = 0x123AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123AD0u;
        // 0x123ad4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x123AD8u;
        goto label_123ad8;
    }
    ctx->pc = 0x123AD0u;
    SET_GPR_U32(ctx, 31, 0x123AD8u);
    ctx->pc = 0x123AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123AD0u;
    // 0x123ad4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x123AD0u, 0x123AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123AD8u;
label_123ad8:
    // 0x123ad8: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x123ad8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_123adc:
    // 0x123adc: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x123adcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_123ae0:
    // 0x123ae0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x123ae0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_123ae4:
    // 0x123ae4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x123ae4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_123ae8:
    // 0x123ae8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x123ae8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_123aec:
    // 0x123aec: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x123aecu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_123af0:
    // 0x123af0: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x123af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_123af4:
    // 0x123af4: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x123af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_123af8:
    // 0x123af8: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x123af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_123afc:
    // 0x123afc: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x123afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_123b00:
    // 0x123b00: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x123b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_123b04:
    // 0x123b04: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x123b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_123b08:
    // 0x123b08: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x123b08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_123b0c:
    // 0x123b0c: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x123b0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_123b10:
    // 0x123b10: 0x247101c0  addiu       $s1, $v1, 0x1C0
    ctx->pc = 0x123b10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
label_123b14:
    // 0x123b14: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x123b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_123b18:
    // 0x123b18: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x123b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_123b1c:
    // 0x123b1c: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x123b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_123b20:
    // 0x123b20: 0x847001c0  lh          $s0, 0x1C0($v1)
    ctx->pc = 0x123b20u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 448)));
label_123b24:
    // 0x123b24: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x123b24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_123b28:
    // 0x123b28: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x123b28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_123b2c:
    // 0x123b2c: 0x40f809  jalr        $v0
label_123b30:
    if (ctx->pc == 0x123B30u) {
        ctx->pc = 0x123B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B2Cu;
        // 0x123b30: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123B34u;
        goto label_123b34;
    }
    ctx->pc = 0x123B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x123B34u);
        ctx->pc = 0x123B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B2Cu;
        // 0x123b30: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123B2Cu, 0x123B34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123B34u;
label_123b34:
    // 0x123b34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x123b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123b38:
    // 0x123b38: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x123b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_123b3c:
    // 0x123b3c: 0xc136d44  jal         func_4DB510
label_123b40:
    if (ctx->pc == 0x123B40u) {
        ctx->pc = 0x123B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B3Cu;
        // 0x123b40: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123B44u;
        goto label_123b44;
    }
    ctx->pc = 0x123B3Cu;
    SET_GPR_U32(ctx, 31, 0x123B44u);
    ctx->pc = 0x123B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123B3Cu;
    // 0x123b40: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB510u, 0x123B3Cu, 0x123B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123B44u;
label_123b44:
    // 0x123b44: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x123b44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_123b48:
    // 0x123b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x123b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_123b4c:
    // 0x123b4c: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x123b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_123b50:
    // 0x123b50: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x123b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_123b54:
    // 0x123b54: 0x40f809  jalr        $v0
label_123b58:
    if (ctx->pc == 0x123B58u) {
        ctx->pc = 0x123B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B54u;
        // 0x123b58: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123B5Cu;
        goto label_123b5c;
    }
    ctx->pc = 0x123B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x123B5Cu);
        ctx->pc = 0x123B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B54u;
        // 0x123b58: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123B54u, 0x123B5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123B5Cu;
label_123b5c:
    // 0x123b5c: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x123b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_123b60:
    // 0x123b60: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x123b60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_123b64:
    // 0x123b64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x123b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_123b68:
    // 0x123b68: 0xc04828c  jal         func_120A30
label_123b6c:
    if (ctx->pc == 0x123B6Cu) {
        ctx->pc = 0x123B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B68u;
        // 0x123b6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123B70u;
        goto label_123b70;
    }
    ctx->pc = 0x123B68u;
    SET_GPR_U32(ctx, 31, 0x123B70u);
    ctx->pc = 0x123B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123B68u;
    // 0x123b6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A30u, 0x123B68u, 0x123B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123B70u;
label_123b70:
    // 0x123b70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123b74:
    // 0x123b74: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x123b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_123b78:
    // 0x123b78: 0xa66201fe  sh          $v0, 0x1FE($s3)
    ctx->pc = 0x123b78u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 510), (uint16_t)GPR_U32(ctx, 2));
label_123b7c:
    // 0x123b7c: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x123b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_123b80:
    // 0x123b80: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x123b80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_123b84:
    // 0x123b84: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x123b84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_123b88:
    // 0x123b88: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x123b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_123b8c:
    // 0x123b8c: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x123b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_123b90:
    // 0x123b90: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x123b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_123b94:
    // 0x123b94: 0x3e00008  jr          $ra
label_123b98:
    if (ctx->pc == 0x123B98u) {
        ctx->pc = 0x123B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B94u;
        // 0x123b98: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123B9Cu;
        goto label_123b9c;
    }
    ctx->pc = 0x123B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B94u;
        // 0x123b98: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123B9Cu;
label_123b9c:
    // 0x123b9c: 0x0  nop
    ctx->pc = 0x123b9cu;
    // NOP
    ctx->pc = 0x123ba0u;
}
