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

// Function: sub_004A08C8
// Address: 0x4a08c8 - 0x4a0b58
void sub_004A08C8_0x4a08c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A08C8_0x4a08c8");
#endif

    switch (ctx->pc) {
        case 0x4a08c8u: goto label_4a08c8;
        case 0x4a08ccu: goto label_4a08cc;
        case 0x4a08d0u: goto label_4a08d0;
        case 0x4a08d4u: goto label_4a08d4;
        case 0x4a08d8u: goto label_4a08d8;
        case 0x4a08dcu: goto label_4a08dc;
        case 0x4a08e0u: goto label_4a08e0;
        case 0x4a08e4u: goto label_4a08e4;
        case 0x4a08e8u: goto label_4a08e8;
        case 0x4a08ecu: goto label_4a08ec;
        case 0x4a08f0u: goto label_4a08f0;
        case 0x4a08f4u: goto label_4a08f4;
        case 0x4a08f8u: goto label_4a08f8;
        case 0x4a08fcu: goto label_4a08fc;
        case 0x4a0900u: goto label_4a0900;
        case 0x4a0904u: goto label_4a0904;
        case 0x4a0908u: goto label_4a0908;
        case 0x4a090cu: goto label_4a090c;
        case 0x4a0910u: goto label_4a0910;
        case 0x4a0914u: goto label_4a0914;
        case 0x4a0918u: goto label_4a0918;
        case 0x4a091cu: goto label_4a091c;
        case 0x4a0920u: goto label_4a0920;
        case 0x4a0924u: goto label_4a0924;
        case 0x4a0928u: goto label_4a0928;
        case 0x4a092cu: goto label_4a092c;
        case 0x4a0930u: goto label_4a0930;
        case 0x4a0934u: goto label_4a0934;
        case 0x4a0938u: goto label_4a0938;
        case 0x4a093cu: goto label_4a093c;
        case 0x4a0940u: goto label_4a0940;
        case 0x4a0944u: goto label_4a0944;
        case 0x4a0948u: goto label_4a0948;
        case 0x4a094cu: goto label_4a094c;
        case 0x4a0950u: goto label_4a0950;
        case 0x4a0954u: goto label_4a0954;
        case 0x4a0958u: goto label_4a0958;
        case 0x4a095cu: goto label_4a095c;
        case 0x4a0960u: goto label_4a0960;
        case 0x4a0964u: goto label_4a0964;
        case 0x4a0968u: goto label_4a0968;
        case 0x4a096cu: goto label_4a096c;
        case 0x4a0970u: goto label_4a0970;
        case 0x4a0974u: goto label_4a0974;
        case 0x4a0978u: goto label_4a0978;
        case 0x4a097cu: goto label_4a097c;
        case 0x4a0980u: goto label_4a0980;
        case 0x4a0984u: goto label_4a0984;
        case 0x4a0988u: goto label_4a0988;
        case 0x4a098cu: goto label_4a098c;
        case 0x4a0990u: goto label_4a0990;
        case 0x4a0994u: goto label_4a0994;
        case 0x4a0998u: goto label_4a0998;
        case 0x4a099cu: goto label_4a099c;
        case 0x4a09a0u: goto label_4a09a0;
        case 0x4a09a4u: goto label_4a09a4;
        case 0x4a09a8u: goto label_4a09a8;
        case 0x4a09acu: goto label_4a09ac;
        case 0x4a09b0u: goto label_4a09b0;
        case 0x4a09b4u: goto label_4a09b4;
        case 0x4a09b8u: goto label_4a09b8;
        case 0x4a09bcu: goto label_4a09bc;
        case 0x4a09c0u: goto label_4a09c0;
        case 0x4a09c4u: goto label_4a09c4;
        case 0x4a09c8u: goto label_4a09c8;
        case 0x4a09ccu: goto label_4a09cc;
        case 0x4a09d0u: goto label_4a09d0;
        case 0x4a09d4u: goto label_4a09d4;
        case 0x4a09d8u: goto label_4a09d8;
        case 0x4a09dcu: goto label_4a09dc;
        case 0x4a09e0u: goto label_4a09e0;
        case 0x4a09e4u: goto label_4a09e4;
        case 0x4a09e8u: goto label_4a09e8;
        case 0x4a09ecu: goto label_4a09ec;
        case 0x4a09f0u: goto label_4a09f0;
        case 0x4a09f4u: goto label_4a09f4;
        case 0x4a09f8u: goto label_4a09f8;
        case 0x4a09fcu: goto label_4a09fc;
        case 0x4a0a00u: goto label_4a0a00;
        case 0x4a0a04u: goto label_4a0a04;
        case 0x4a0a08u: goto label_4a0a08;
        case 0x4a0a0cu: goto label_4a0a0c;
        case 0x4a0a10u: goto label_4a0a10;
        case 0x4a0a14u: goto label_4a0a14;
        case 0x4a0a18u: goto label_4a0a18;
        case 0x4a0a1cu: goto label_4a0a1c;
        case 0x4a0a20u: goto label_4a0a20;
        case 0x4a0a24u: goto label_4a0a24;
        case 0x4a0a28u: goto label_4a0a28;
        case 0x4a0a2cu: goto label_4a0a2c;
        case 0x4a0a30u: goto label_4a0a30;
        case 0x4a0a34u: goto label_4a0a34;
        case 0x4a0a38u: goto label_4a0a38;
        case 0x4a0a3cu: goto label_4a0a3c;
        case 0x4a0a40u: goto label_4a0a40;
        case 0x4a0a44u: goto label_4a0a44;
        case 0x4a0a48u: goto label_4a0a48;
        case 0x4a0a4cu: goto label_4a0a4c;
        case 0x4a0a50u: goto label_4a0a50;
        case 0x4a0a54u: goto label_4a0a54;
        case 0x4a0a58u: goto label_4a0a58;
        case 0x4a0a5cu: goto label_4a0a5c;
        case 0x4a0a60u: goto label_4a0a60;
        case 0x4a0a64u: goto label_4a0a64;
        case 0x4a0a68u: goto label_4a0a68;
        case 0x4a0a6cu: goto label_4a0a6c;
        case 0x4a0a70u: goto label_4a0a70;
        case 0x4a0a74u: goto label_4a0a74;
        case 0x4a0a78u: goto label_4a0a78;
        case 0x4a0a7cu: goto label_4a0a7c;
        case 0x4a0a80u: goto label_4a0a80;
        case 0x4a0a84u: goto label_4a0a84;
        case 0x4a0a88u: goto label_4a0a88;
        case 0x4a0a8cu: goto label_4a0a8c;
        case 0x4a0a90u: goto label_4a0a90;
        case 0x4a0a94u: goto label_4a0a94;
        case 0x4a0a98u: goto label_4a0a98;
        case 0x4a0a9cu: goto label_4a0a9c;
        case 0x4a0aa0u: goto label_4a0aa0;
        case 0x4a0aa4u: goto label_4a0aa4;
        case 0x4a0aa8u: goto label_4a0aa8;
        case 0x4a0aacu: goto label_4a0aac;
        case 0x4a0ab0u: goto label_4a0ab0;
        case 0x4a0ab4u: goto label_4a0ab4;
        case 0x4a0ab8u: goto label_4a0ab8;
        case 0x4a0abcu: goto label_4a0abc;
        case 0x4a0ac0u: goto label_4a0ac0;
        case 0x4a0ac4u: goto label_4a0ac4;
        case 0x4a0ac8u: goto label_4a0ac8;
        case 0x4a0accu: goto label_4a0acc;
        case 0x4a0ad0u: goto label_4a0ad0;
        case 0x4a0ad4u: goto label_4a0ad4;
        case 0x4a0ad8u: goto label_4a0ad8;
        case 0x4a0adcu: goto label_4a0adc;
        case 0x4a0ae0u: goto label_4a0ae0;
        case 0x4a0ae4u: goto label_4a0ae4;
        case 0x4a0ae8u: goto label_4a0ae8;
        case 0x4a0aecu: goto label_4a0aec;
        case 0x4a0af0u: goto label_4a0af0;
        case 0x4a0af4u: goto label_4a0af4;
        case 0x4a0af8u: goto label_4a0af8;
        case 0x4a0afcu: goto label_4a0afc;
        case 0x4a0b00u: goto label_4a0b00;
        case 0x4a0b04u: goto label_4a0b04;
        case 0x4a0b08u: goto label_4a0b08;
        case 0x4a0b0cu: goto label_4a0b0c;
        case 0x4a0b10u: goto label_4a0b10;
        case 0x4a0b14u: goto label_4a0b14;
        case 0x4a0b18u: goto label_4a0b18;
        case 0x4a0b1cu: goto label_4a0b1c;
        case 0x4a0b20u: goto label_4a0b20;
        case 0x4a0b24u: goto label_4a0b24;
        case 0x4a0b28u: goto label_4a0b28;
        case 0x4a0b2cu: goto label_4a0b2c;
        case 0x4a0b30u: goto label_4a0b30;
        case 0x4a0b34u: goto label_4a0b34;
        case 0x4a0b38u: goto label_4a0b38;
        case 0x4a0b3cu: goto label_4a0b3c;
        case 0x4a0b40u: goto label_4a0b40;
        case 0x4a0b44u: goto label_4a0b44;
        case 0x4a0b48u: goto label_4a0b48;
        case 0x4a0b4cu: goto label_4a0b4c;
        case 0x4a0b50u: goto label_4a0b50;
        case 0x4a0b54u: goto label_4a0b54;
        default: break;
    }

    ctx->pc = 0x4a08c8u;

label_4a08c8:
    // 0x4a08c8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4a08c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4a08cc:
    // 0x4a08cc: 0x24e3fffe  addiu       $v1, $a3, -0x2
    ctx->pc = 0x4a08ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
label_4a08d0:
    // 0x4a08d0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4a08d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4a08d4:
    // 0x4a08d4: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4a08d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4a08d8:
    // 0x4a08d8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4a08d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4a08dc:
    // 0x4a08dc: 0x2ce70003  sltiu       $a3, $a3, 0x3
    ctx->pc = 0x4a08dcu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_4a08e0:
    // 0x4a08e0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4a08e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4a08e4:
    // 0x4a08e4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4a08e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a08e8:
    // 0x4a08e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4a08e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4a08ec:
    // 0x4a08ec: 0x67980a  movz        $s3, $v1, $a3
    ctx->pc = 0x4a08ecu;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_4a08f0:
    // 0x4a08f0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4a08f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_4a08f4:
    // 0x4a08f4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4a08f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a08f8:
    // 0x4a08f8: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4a08f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_4a08fc:
    // 0x4a08fc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x4a08fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a0900:
    // 0x4a0900: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4a0900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4a0904:
    // 0x4a0904: 0x2457f7a0  addiu       $s7, $v0, -0x860
    ctx->pc = 0x4a0904u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965152));
label_4a0908:
    // 0x4a0908: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4a0908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4a090c:
    // 0x4a090c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4a090cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a0910:
    // 0x4a0910: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a0910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a0914:
    // 0x4a0914: 0x10000074  b           . + 4 + (0x74 << 2)
label_4a0918:
    if (ctx->pc == 0x4A0918u) {
        ctx->pc = 0x4A0918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0914u;
        // 0x4a0918: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A091Cu;
        goto label_4a091c;
    }
    ctx->pc = 0x4A0914u;
    {
        const bool branch_taken_0x4a0914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0914u;
        // 0x4a0918: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0914) {
            ctx->pc = 0x4A0AE8u;
            goto label_4a0ae8;
        }
    }
    ctx->pc = 0x4A091Cu;
label_4a091c:
    // 0x4a091c: 0x0  nop
    ctx->pc = 0x4a091cu;
    // NOP
label_4a0920:
    // 0x4a0920: 0x3c0c7c00  lui         $t4, 0x7C00
    ctx->pc = 0x4a0920u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)31744 << 16));
label_4a0924:
    // 0x4a0924: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x4a0924u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
label_4a0928:
    // 0x4a0928: 0x7aea0000  lq          $t2, 0x0($s7)
    ctx->pc = 0x4a0928u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_4a092c:
    // 0x4a092c: 0x2455f700  addiu       $s5, $v0, -0x900
    ctx->pc = 0x4a092cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
label_4a0930:
    // 0x4a0930: 0x2709823  subu        $s3, $s3, $s0
    ctx->pc = 0x4a0930u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_4a0934:
    // 0x4a0934: 0x24190010  addiu       $t9, $zero, 0x10
    ctx->pc = 0x4a0934u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4a0938:
    // 0x4a0938: 0x2418000c  addiu       $t8, $zero, 0xC
    ctx->pc = 0x4a0938u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4a093c:
    // 0x4a093c: 0x3c0f1000  lui         $t7, 0x1000
    ctx->pc = 0x4a093cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4096 << 16));
label_4a0940:
    // 0x4a0940: 0x3c0e0400  lui         $t6, 0x400
    ctx->pc = 0x4a0940u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)1024 << 16));
label_4a0944:
    // 0x4a0944: 0x3c0d0100  lui         $t5, 0x100
    ctx->pc = 0x4a0944u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)256 << 16));
label_4a0948:
    // 0x4a0948: 0x35ad0404  ori         $t5, $t5, 0x404
    ctx->pc = 0x4a0948u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)1028);
label_4a094c:
    // 0x4a094c: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x4a094cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
label_4a0950:
    // 0x4a0950: 0x358c8000  ori         $t4, $t4, 0x8000
    ctx->pc = 0x4a0950u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)32768);
label_4a0954:
    // 0x4a0954: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x4a0954u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
label_4a0958:
    // 0x4a0958: 0x2e020011  sltiu       $v0, $s0, 0x11
    ctx->pc = 0x4a0958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_4a095c:
    // 0x4a095c: 0x320402d  daddu       $t0, $t9, $zero
    ctx->pc = 0x4a095cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_4a0960:
    // 0x4a0960: 0x202400b  movn        $t0, $s0, $v0
    ctx->pc = 0x4a0960u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
label_4a0964:
    // 0x4a0964: 0x1182018  mult        $a0, $t0, $t8
    ctx->pc = 0x4a0964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4a0968:
    // 0x4a0968: 0x10e1825  or          $v1, $t0, $t6
    ctx->pc = 0x4a0968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 14));
label_4a096c:
    // 0x4a096c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4a096cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_4a0970:
    // 0x4a0970: 0x2088023  subu        $s0, $s0, $t0
    ctx->pc = 0x4a0970u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_4a0974:
    // 0x4a0974: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x4a0974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_4a0978:
    // 0x4a0978: 0x6d2825  or          $a1, $v1, $t5
    ctx->pc = 0x4a0978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
label_4a097c:
    // 0x4a097c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x4a097cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
label_4a0980:
    // 0x4a0980: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4a0980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_4a0984:
    // 0x4a0984: 0x64420002  daddiu      $v0, $v0, 0x2
    ctx->pc = 0x4a0984u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2);
label_4a0988:
    // 0x4a0988: 0x4f1825  or          $v1, $v0, $t7
    ctx->pc = 0x4a0988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
label_4a098c:
    // 0x4a098c: 0x70a31b89  pcpyld      $v1, $a1, $v1
    ctx->pc = 0x4a098cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
label_4a0990:
    // 0x4a0990: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x4a0990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a0994:
    // 0x4a0994: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x4a0994u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_4a0998:
    // 0x4a0998: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a0998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a099c:
    // 0x4a099c: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a099cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_4a09a0:
    // 0x4a09a0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4a09a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_4a09a4:
    // 0x4a09a4: 0x8c2025  or          $a0, $a0, $t4
    ctx->pc = 0x4a09a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 12));
label_4a09a8:
    // 0x4a09a8: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x4a09a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_4a09ac:
    // 0x4a09ac: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x4a09acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_4a09b0:
    // 0x4a09b0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4a09b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_4a09b4:
    // 0x4a09b4: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x4a09b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_4a09b8:
    // 0x4a09b8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4a09b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_4a09bc:
    // 0x4a09bc: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x4a09bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_4a09c0:
    // 0x4a09c0: 0x70a31b89  pcpyld      $v1, $a1, $v1
    ctx->pc = 0x4a09c0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
label_4a09c4:
    // 0x4a09c4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x4a09c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_4a09c8:
    // 0x4a09c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a09c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a09cc:
    // 0x4a09cc: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x4a09ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_4a09d0:
    // 0x4a09d0: 0x110b003d  beq         $t0, $t3, . + 4 + (0x3D << 2)
label_4a09d4:
    if (ctx->pc == 0x4A09D4u) {
        ctx->pc = 0x4A09D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A09D0u;
        // 0x4a09d4: 0xaf82898c  sw          $v0, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A09D8u;
        goto label_4a09d8;
    }
    ctx->pc = 0x4A09D0u;
    {
        const bool branch_taken_0x4a09d0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 11));
        ctx->pc = 0x4A09D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A09D0u;
        // 0x4a09d4: 0xaf82898c  sw          $v0, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a09d0) {
            ctx->pc = 0x4A0AC8u;
            goto label_4a0ac8;
        }
    }
    ctx->pc = 0x4A09D8u;
label_4a09d8:
    // 0x4a09d8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4a09d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_4a09dc:
    // 0x4a09dc: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4a09dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_4a09e0:
    // 0x4a09e0: 0x3a470003  xori        $a3, $s2, 0x3
    ctx->pc = 0x4a09e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)3);
label_4a09e4:
    // 0x4a09e4: 0x122980  sll         $a1, $s2, 6
    ctx->pc = 0x4a09e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_4a09e8:
    // 0x4a09e8: 0x73180  sll         $a2, $a3, 6
    ctx->pc = 0x4a09e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_4a09ec:
    // 0x4a09ec: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x4a09ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_4a09f0:
    // 0x4a09f0: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x4a09f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_4a09f4:
    // 0x4a09f4: 0x8f84898c  lw          $a0, -0x7674($gp)
    ctx->pc = 0x4a09f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a09f8:
    // 0x4a09f8: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x4a09f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_4a09fc:
    // 0x4a09fc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4a09fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_4a0a00:
    // 0x4a0a00: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4a0a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4a0a04:
    // 0x4a0a04: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x4a0a04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
label_4a0a08:
    // 0x4a0a08: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x4a0a08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_4a0a0c:
    // 0x4a0a0c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4a0a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_4a0a10:
    // 0x4a0a10: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x4a0a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4a0a14:
    // 0x4a0a14: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0a14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0a18:
    // 0x4a0a18: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x4a0a18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_4a0a1c:
    // 0x4a0a1c: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x4a0a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_4a0a20:
    // 0x4a0a20: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x4a0a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_4a0a24:
    // 0x4a0a24: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0a24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0a28:
    // 0x4a0a28: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x4a0a28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_4a0a2c:
    // 0x4a0a2c: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x4a0a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_4a0a30:
    // 0x4a0a30: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x4a0a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_4a0a34:
    // 0x4a0a34: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0a34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0a38:
    // 0x4a0a38: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x4a0a38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_4a0a3c:
    // 0x4a0a3c: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x4a0a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_4a0a40:
    // 0x4a0a40: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x4a0a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_4a0a44:
    // 0x4a0a44: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0a44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0a48:
    // 0x4a0a48: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x4a0a48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_4a0a4c:
    // 0x4a0a4c: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x4a0a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_4a0a50:
    // 0x4a0a50: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x4a0a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_4a0a54:
    // 0x4a0a54: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0a54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0a58:
    // 0x4a0a58: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x4a0a58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_4a0a5c:
    // 0x4a0a5c: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x4a0a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
label_4a0a60:
    // 0x4a0a60: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x4a0a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_4a0a64:
    // 0x4a0a64: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0a64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0a68:
    // 0x4a0a68: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x4a0a68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_4a0a6c:
    // 0x4a0a6c: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x4a0a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
label_4a0a70:
    // 0x4a0a70: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x4a0a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_4a0a74:
    // 0x4a0a74: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0a74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0a78:
    // 0x4a0a78: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x4a0a78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_4a0a7c:
    // 0x4a0a7c: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x4a0a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
label_4a0a80:
    // 0x4a0a80: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x4a0a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_4a0a84:
    // 0x4a0a84: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0a84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0a88:
    // 0x4a0a88: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x4a0a88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_4a0a8c:
    // 0x4a0a8c: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x4a0a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
label_4a0a90:
    // 0x4a0a90: 0x24830090  addiu       $v1, $a0, 0x90
    ctx->pc = 0x4a0a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
label_4a0a94:
    // 0x4a0a94: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0a94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0a98:
    // 0x4a0a98: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x4a0a98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_4a0a9c:
    // 0x4a0a9c: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x4a0a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
label_4a0aa0:
    // 0x4a0aa0: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x4a0aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
label_4a0aa4:
    // 0x4a0aa4: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0aa8:
    // 0x4a0aa8: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x4a0aa8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 48)));
label_4a0aac:
    // 0x4a0aac: 0x7c8200a0  sq          $v0, 0xA0($a0)
    ctx->pc = 0x4a0aacu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 2));
label_4a0ab0:
    // 0x4a0ab0: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x4a0ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
label_4a0ab4:
    // 0x4a0ab4: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x4a0ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
label_4a0ab8:
    // 0x4a0ab8: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x4a0ab8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_4a0abc:
    // 0x4a0abc: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x4a0abcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_4a0ac0:
    // 0x4a0ac0: 0x1509ffc7  bne         $t0, $t1, . + 4 + (-0x39 << 2)
label_4a0ac4:
    if (ctx->pc == 0x4A0AC4u) {
        ctx->pc = 0x4A0AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0AC0u;
        // 0x4a0ac4: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0AC8u;
        goto label_4a0ac8;
    }
    ctx->pc = 0x4A0AC0u;
    {
        const bool branch_taken_0x4a0ac0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        ctx->pc = 0x4A0AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0AC0u;
        // 0x4a0ac4: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0ac0) {
            ctx->pc = 0x4A09E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a09e0;
        }
    }
    ctx->pc = 0x4A0AC8u;
label_4a0ac8:
    // 0x4a0ac8: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x4a0ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a0acc:
    // 0x4a0acc: 0x7c4a0000  sq          $t2, 0x0($v0)
    ctx->pc = 0x4a0accu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 10));
label_4a0ad0:
    // 0x4a0ad0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a0ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a0ad4:
    // 0x4a0ad4: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a0ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_4a0ad8:
    // 0x4a0ad8: 0x1600ff9f  bnez        $s0, . + 4 + (-0x61 << 2)
label_4a0adc:
    if (ctx->pc == 0x4A0ADCu) {
        ctx->pc = 0x4A0ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0AD8u;
        // 0x4a0adc: 0x7aaa0000  lq          $t2, 0x0($s5) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0AE0u;
        goto label_4a0ae0;
    }
    ctx->pc = 0x4A0AD8u;
    {
        const bool branch_taken_0x4a0ad8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A0ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0AD8u;
        // 0x4a0adc: 0x7aaa0000  lq          $t2, 0x0($s5) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0ad8) {
            ctx->pc = 0x4A0958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0958;
        }
    }
    ctx->pc = 0x4A0AE0u;
label_4a0ae0:
    // 0x4a0ae0: 0xc127ec8  jal         func_49FB20
label_4a0ae4:
    if (ctx->pc == 0x4A0AE4u) {
        ctx->pc = 0x4A0AE8u;
        goto label_4a0ae8;
    }
    ctx->pc = 0x4A0AE0u;
    SET_GPR_U32(ctx, 31, 0x4A0AE8u);
    ctx->pc = 0x49FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FB20u, 0x4A0AE0u, 0x4A0AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0AE8u;
label_4a0ae8:
    // 0x4a0ae8: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
label_4a0aec:
    if (ctx->pc == 0x4A0AECu) {
        ctx->pc = 0x4A0AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0AE8u;
        // 0x4a0aec: 0x8f90879c  lw          $s0, -0x7864($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0AF0u;
        goto label_4a0af0;
    }
    ctx->pc = 0x4A0AE8u;
    {
        const bool branch_taken_0x4a0ae8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0AE8u;
        // 0x4a0aec: 0x8f90879c  lw          $s0, -0x7864($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0ae8) {
            ctx->pc = 0x4A0B20u;
            goto label_4a0b20;
        }
    }
    ctx->pc = 0x4A0AF0u;
label_4a0af0:
    // 0x4a0af0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a0af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a0af4:
    // 0x4a0af4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4a0af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4a0af8:
    // 0x4a0af8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x4a0af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4a0afc:
    // 0x4a0afc: 0x213182b  sltu        $v1, $s0, $s3
    ctx->pc = 0x4a0afcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_4a0b00:
    // 0x4a0b00: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x4a0b00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_4a0b04:
    // 0x4a0b04: 0x263800a  movz        $s0, $s3, $v1
    ctx->pc = 0x4a0b04u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 19));
label_4a0b08:
    // 0x4a0b08: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x4a0b08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a0b0c:
    // 0x4a0b0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4a0b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a0b10:
    // 0x4a0b10: 0x40f809  jalr        $v0
label_4a0b14:
    if (ctx->pc == 0x4A0B14u) {
        ctx->pc = 0x4A0B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0B10u;
        // 0x4a0b14: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0B18u;
        goto label_4a0b18;
    }
    ctx->pc = 0x4A0B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A0B18u);
        ctx->pc = 0x4A0B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0B10u;
        // 0x4a0b14: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0B10u, 0x4A0B18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A0B18u;
label_4a0b18:
    // 0x4a0b18: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4a0b1c:
    if (ctx->pc == 0x4A0B1Cu) {
        ctx->pc = 0x4A0B20u;
        goto label_4a0b20;
    }
    ctx->pc = 0x4A0B18u;
    {
        const bool branch_taken_0x4a0b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a0b18) {
            ctx->pc = 0x4A0B24u;
            goto label_4a0b24;
        }
    }
    ctx->pc = 0x4A0B20u;
label_4a0b20:
    // 0x4a0b20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4a0b20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a0b24:
    // 0x4a0b24: 0x1600ff7e  bnez        $s0, . + 4 + (-0x82 << 2)
label_4a0b28:
    if (ctx->pc == 0x4A0B28u) {
        ctx->pc = 0x4A0B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0B24u;
        // 0x4a0b28: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0B2Cu;
        goto label_4a0b2c;
    }
    ctx->pc = 0x4A0B24u;
    {
        const bool branch_taken_0x4a0b24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A0B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0B24u;
        // 0x4a0b28: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0b24) {
            ctx->pc = 0x4A0920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0920;
        }
    }
    ctx->pc = 0x4A0B2Cu;
label_4a0b2c:
    // 0x4a0b2c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4a0b2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4a0b30:
    // 0x4a0b30: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4a0b30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4a0b34:
    // 0x4a0b34: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4a0b34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a0b38:
    // 0x4a0b38: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4a0b38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a0b3c:
    // 0x4a0b3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4a0b3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a0b40:
    // 0x4a0b40: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4a0b40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a0b44:
    // 0x4a0b44: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4a0b44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a0b48:
    // 0x4a0b48: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4a0b48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a0b4c:
    // 0x4a0b4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a0b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a0b50:
    // 0x4a0b50: 0x3e00008  jr          $ra
label_4a0b54:
    if (ctx->pc == 0x4A0B54u) {
        ctx->pc = 0x4A0B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0B50u;
        // 0x4a0b54: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0B58u;
        goto label_fallthrough_0x4a0b50;
    }
    ctx->pc = 0x4A0B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0B50u;
        // 0x4a0b54: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4a0b50:
    ctx->pc = 0x4A0B58u;
}
