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

// Function: sub_00163888
// Address: 0x163888 - 0x163c08
void sub_00163888_0x163888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163888_0x163888");
#endif

    switch (ctx->pc) {
        case 0x163888u: goto label_163888;
        case 0x16388cu: goto label_16388c;
        case 0x163890u: goto label_163890;
        case 0x163894u: goto label_163894;
        case 0x163898u: goto label_163898;
        case 0x16389cu: goto label_16389c;
        case 0x1638a0u: goto label_1638a0;
        case 0x1638a4u: goto label_1638a4;
        case 0x1638a8u: goto label_1638a8;
        case 0x1638acu: goto label_1638ac;
        case 0x1638b0u: goto label_1638b0;
        case 0x1638b4u: goto label_1638b4;
        case 0x1638b8u: goto label_1638b8;
        case 0x1638bcu: goto label_1638bc;
        case 0x1638c0u: goto label_1638c0;
        case 0x1638c4u: goto label_1638c4;
        case 0x1638c8u: goto label_1638c8;
        case 0x1638ccu: goto label_1638cc;
        case 0x1638d0u: goto label_1638d0;
        case 0x1638d4u: goto label_1638d4;
        case 0x1638d8u: goto label_1638d8;
        case 0x1638dcu: goto label_1638dc;
        case 0x1638e0u: goto label_1638e0;
        case 0x1638e4u: goto label_1638e4;
        case 0x1638e8u: goto label_1638e8;
        case 0x1638ecu: goto label_1638ec;
        case 0x1638f0u: goto label_1638f0;
        case 0x1638f4u: goto label_1638f4;
        case 0x1638f8u: goto label_1638f8;
        case 0x1638fcu: goto label_1638fc;
        case 0x163900u: goto label_163900;
        case 0x163904u: goto label_163904;
        case 0x163908u: goto label_163908;
        case 0x16390cu: goto label_16390c;
        case 0x163910u: goto label_163910;
        case 0x163914u: goto label_163914;
        case 0x163918u: goto label_163918;
        case 0x16391cu: goto label_16391c;
        case 0x163920u: goto label_163920;
        case 0x163924u: goto label_163924;
        case 0x163928u: goto label_163928;
        case 0x16392cu: goto label_16392c;
        case 0x163930u: goto label_163930;
        case 0x163934u: goto label_163934;
        case 0x163938u: goto label_163938;
        case 0x16393cu: goto label_16393c;
        case 0x163940u: goto label_163940;
        case 0x163944u: goto label_163944;
        case 0x163948u: goto label_163948;
        case 0x16394cu: goto label_16394c;
        case 0x163950u: goto label_163950;
        case 0x163954u: goto label_163954;
        case 0x163958u: goto label_163958;
        case 0x16395cu: goto label_16395c;
        case 0x163960u: goto label_163960;
        case 0x163964u: goto label_163964;
        case 0x163968u: goto label_163968;
        case 0x16396cu: goto label_16396c;
        case 0x163970u: goto label_163970;
        case 0x163974u: goto label_163974;
        case 0x163978u: goto label_163978;
        case 0x16397cu: goto label_16397c;
        case 0x163980u: goto label_163980;
        case 0x163984u: goto label_163984;
        case 0x163988u: goto label_163988;
        case 0x16398cu: goto label_16398c;
        case 0x163990u: goto label_163990;
        case 0x163994u: goto label_163994;
        case 0x163998u: goto label_163998;
        case 0x16399cu: goto label_16399c;
        case 0x1639a0u: goto label_1639a0;
        case 0x1639a4u: goto label_1639a4;
        case 0x1639a8u: goto label_1639a8;
        case 0x1639acu: goto label_1639ac;
        case 0x1639b0u: goto label_1639b0;
        case 0x1639b4u: goto label_1639b4;
        case 0x1639b8u: goto label_1639b8;
        case 0x1639bcu: goto label_1639bc;
        case 0x1639c0u: goto label_1639c0;
        case 0x1639c4u: goto label_1639c4;
        case 0x1639c8u: goto label_1639c8;
        case 0x1639ccu: goto label_1639cc;
        case 0x1639d0u: goto label_1639d0;
        case 0x1639d4u: goto label_1639d4;
        case 0x1639d8u: goto label_1639d8;
        case 0x1639dcu: goto label_1639dc;
        case 0x1639e0u: goto label_1639e0;
        case 0x1639e4u: goto label_1639e4;
        case 0x1639e8u: goto label_1639e8;
        case 0x1639ecu: goto label_1639ec;
        case 0x1639f0u: goto label_1639f0;
        case 0x1639f4u: goto label_1639f4;
        case 0x1639f8u: goto label_1639f8;
        case 0x1639fcu: goto label_1639fc;
        case 0x163a00u: goto label_163a00;
        case 0x163a04u: goto label_163a04;
        case 0x163a08u: goto label_163a08;
        case 0x163a0cu: goto label_163a0c;
        case 0x163a10u: goto label_163a10;
        case 0x163a14u: goto label_163a14;
        case 0x163a18u: goto label_163a18;
        case 0x163a1cu: goto label_163a1c;
        case 0x163a20u: goto label_163a20;
        case 0x163a24u: goto label_163a24;
        case 0x163a28u: goto label_163a28;
        case 0x163a2cu: goto label_163a2c;
        case 0x163a30u: goto label_163a30;
        case 0x163a34u: goto label_163a34;
        case 0x163a38u: goto label_163a38;
        case 0x163a3cu: goto label_163a3c;
        case 0x163a40u: goto label_163a40;
        case 0x163a44u: goto label_163a44;
        case 0x163a48u: goto label_163a48;
        case 0x163a4cu: goto label_163a4c;
        case 0x163a50u: goto label_163a50;
        case 0x163a54u: goto label_163a54;
        case 0x163a58u: goto label_163a58;
        case 0x163a5cu: goto label_163a5c;
        case 0x163a60u: goto label_163a60;
        case 0x163a64u: goto label_163a64;
        case 0x163a68u: goto label_163a68;
        case 0x163a6cu: goto label_163a6c;
        case 0x163a70u: goto label_163a70;
        case 0x163a74u: goto label_163a74;
        case 0x163a78u: goto label_163a78;
        case 0x163a7cu: goto label_163a7c;
        case 0x163a80u: goto label_163a80;
        case 0x163a84u: goto label_163a84;
        case 0x163a88u: goto label_163a88;
        case 0x163a8cu: goto label_163a8c;
        case 0x163a90u: goto label_163a90;
        case 0x163a94u: goto label_163a94;
        case 0x163a98u: goto label_163a98;
        case 0x163a9cu: goto label_163a9c;
        case 0x163aa0u: goto label_163aa0;
        case 0x163aa4u: goto label_163aa4;
        case 0x163aa8u: goto label_163aa8;
        case 0x163aacu: goto label_163aac;
        case 0x163ab0u: goto label_163ab0;
        case 0x163ab4u: goto label_163ab4;
        case 0x163ab8u: goto label_163ab8;
        case 0x163abcu: goto label_163abc;
        case 0x163ac0u: goto label_163ac0;
        case 0x163ac4u: goto label_163ac4;
        case 0x163ac8u: goto label_163ac8;
        case 0x163accu: goto label_163acc;
        case 0x163ad0u: goto label_163ad0;
        case 0x163ad4u: goto label_163ad4;
        case 0x163ad8u: goto label_163ad8;
        case 0x163adcu: goto label_163adc;
        case 0x163ae0u: goto label_163ae0;
        case 0x163ae4u: goto label_163ae4;
        case 0x163ae8u: goto label_163ae8;
        case 0x163aecu: goto label_163aec;
        case 0x163af0u: goto label_163af0;
        case 0x163af4u: goto label_163af4;
        case 0x163af8u: goto label_163af8;
        case 0x163afcu: goto label_163afc;
        case 0x163b00u: goto label_163b00;
        case 0x163b04u: goto label_163b04;
        case 0x163b08u: goto label_163b08;
        case 0x163b0cu: goto label_163b0c;
        case 0x163b10u: goto label_163b10;
        case 0x163b14u: goto label_163b14;
        case 0x163b18u: goto label_163b18;
        case 0x163b1cu: goto label_163b1c;
        case 0x163b20u: goto label_163b20;
        case 0x163b24u: goto label_163b24;
        case 0x163b28u: goto label_163b28;
        case 0x163b2cu: goto label_163b2c;
        case 0x163b30u: goto label_163b30;
        case 0x163b34u: goto label_163b34;
        case 0x163b38u: goto label_163b38;
        case 0x163b3cu: goto label_163b3c;
        case 0x163b40u: goto label_163b40;
        case 0x163b44u: goto label_163b44;
        case 0x163b48u: goto label_163b48;
        case 0x163b4cu: goto label_163b4c;
        case 0x163b50u: goto label_163b50;
        case 0x163b54u: goto label_163b54;
        case 0x163b58u: goto label_163b58;
        case 0x163b5cu: goto label_163b5c;
        case 0x163b60u: goto label_163b60;
        case 0x163b64u: goto label_163b64;
        case 0x163b68u: goto label_163b68;
        case 0x163b6cu: goto label_163b6c;
        case 0x163b70u: goto label_163b70;
        case 0x163b74u: goto label_163b74;
        case 0x163b78u: goto label_163b78;
        case 0x163b7cu: goto label_163b7c;
        case 0x163b80u: goto label_163b80;
        case 0x163b84u: goto label_163b84;
        case 0x163b88u: goto label_163b88;
        case 0x163b8cu: goto label_163b8c;
        case 0x163b90u: goto label_163b90;
        case 0x163b94u: goto label_163b94;
        case 0x163b98u: goto label_163b98;
        case 0x163b9cu: goto label_163b9c;
        case 0x163ba0u: goto label_163ba0;
        case 0x163ba4u: goto label_163ba4;
        case 0x163ba8u: goto label_163ba8;
        case 0x163bacu: goto label_163bac;
        case 0x163bb0u: goto label_163bb0;
        case 0x163bb4u: goto label_163bb4;
        case 0x163bb8u: goto label_163bb8;
        case 0x163bbcu: goto label_163bbc;
        case 0x163bc0u: goto label_163bc0;
        case 0x163bc4u: goto label_163bc4;
        case 0x163bc8u: goto label_163bc8;
        case 0x163bccu: goto label_163bcc;
        case 0x163bd0u: goto label_163bd0;
        case 0x163bd4u: goto label_163bd4;
        case 0x163bd8u: goto label_163bd8;
        case 0x163bdcu: goto label_163bdc;
        case 0x163be0u: goto label_163be0;
        case 0x163be4u: goto label_163be4;
        case 0x163be8u: goto label_163be8;
        case 0x163becu: goto label_163bec;
        case 0x163bf0u: goto label_163bf0;
        case 0x163bf4u: goto label_163bf4;
        case 0x163bf8u: goto label_163bf8;
        case 0x163bfcu: goto label_163bfc;
        case 0x163c00u: goto label_163c00;
        case 0x163c04u: goto label_163c04;
        default: break;
    }

    ctx->pc = 0x163888u;

label_163888:
    // 0x163888: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x163888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_16388c:
    // 0x16388c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x16388cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_163890:
    // 0x163890: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x163890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_163894:
    // 0x163894: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x163894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_163898:
    // 0x163898: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x163898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_16389c:
    // 0x16389c: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x16389cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1638a0:
    // 0x1638a0: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1638a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_1638a4:
    // 0x1638a4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1638a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1638a8:
    // 0x1638a8: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1638a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_1638ac:
    // 0x1638ac: 0x24631780  addiu       $v1, $v1, 0x1780
    ctx->pc = 0x1638acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6016));
label_1638b0:
    // 0x1638b0: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1638b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1638b4:
    // 0x1638b4: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1638b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1638b8:
    // 0x1638b8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1638b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1638bc:
    // 0x1638bc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1638bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1638c0:
    // 0x1638c0: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x1638c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_1638c4:
    // 0x1638c4: 0x24120084  addiu       $s2, $zero, 0x84
    ctx->pc = 0x1638c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_1638c8:
    // 0x1638c8: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x1638c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1638cc:
    // 0x1638cc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1638ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1638d0:
    // 0x1638d0: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1638d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_1638d4:
    // 0x1638d4: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x1638d4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_1638d8:
    // 0x1638d8: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x1638d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_1638dc:
    // 0x1638dc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1638dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1638e0:
    // 0x1638e0: 0x8e65489c  lw          $a1, 0x489C($s3)
    ctx->pc = 0x1638e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_1638e4:
    // 0x1638e4: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x1638e4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1638e8:
    // 0x1638e8: 0x84a2033a  lh          $v0, 0x33A($a1)
    ctx->pc = 0x1638e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 826)));
label_1638ec:
    // 0x1638ec: 0x8e24cdb4  lw          $a0, -0x324C($s1)
    ctx->pc = 0x1638ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954420)));
label_1638f0:
    // 0x1638f0: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x1638f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_1638f4:
    // 0x1638f4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1638f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1638f8:
    // 0x1638f8: 0x94b756dc  lhu         $s7, 0x56DC($a1)
    ctx->pc = 0x1638f8u;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 22236)));
label_1638fc:
    // 0x1638fc: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x1638fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
label_163900:
    // 0x163900: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x163900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_163904:
    // 0x163904: 0x2f29018  mult        $s2, $s7, $s2
    ctx->pc = 0x163904u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_163908:
    // 0x163908: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x163908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_16390c:
    // 0x16390c: 0x84500028  lh          $s0, 0x28($v0)
    ctx->pc = 0x16390cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_163910:
    // 0x163910: 0x24540028  addiu       $s4, $v0, 0x28
    ctx->pc = 0x163910u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_163914:
    // 0x163914: 0x844300a8  lh          $v1, 0xA8($v0)
    ctx->pc = 0x163914u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_163918:
    // 0x163918: 0x8c4500ac  lw          $a1, 0xAC($v0)
    ctx->pc = 0x163918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_16391c:
    // 0x16391c: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x16391cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_163920:
    // 0x163920: 0xa0f809  jalr        $a1
label_163924:
    if (ctx->pc == 0x163924u) {
        ctx->pc = 0x163924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163920u;
        // 0x163924: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163928u;
        goto label_163928;
    }
    ctx->pc = 0x163920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x163928u);
        ctx->pc = 0x163924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163920u;
        // 0x163924: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163920u, 0x163928u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163928u;
label_163928:
    // 0x163928: 0x8e26cdb4  lw          $a2, -0x324C($s1)
    ctx->pc = 0x163928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954420)));
label_16392c:
    // 0x16392c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16392cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_163930:
    // 0x163930: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x163930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_163934:
    // 0x163934: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x163934u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_163938:
    // 0x163938: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x163938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_16393c:
    // 0x16393c: 0x60f809  jalr        $v1
label_163940:
    if (ctx->pc == 0x163940u) {
        ctx->pc = 0x163940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16393Cu;
        // 0x163940: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163944u;
        goto label_163944;
    }
    ctx->pc = 0x16393Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x163944u);
        ctx->pc = 0x163940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16393Cu;
        // 0x163940: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16393Cu, 0x163944u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163944u;
label_163944:
    // 0x163944: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x163944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_163948:
    // 0x163948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16394c:
    // 0x16394c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x16394cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_163950:
    // 0x163950: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x163950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_163954:
    // 0x163954: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x163954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_163958:
    // 0x163958: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x163958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_16395c:
    // 0x16395c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x16395cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_163960:
    // 0x163960: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x163960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_163964:
    // 0x163964: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x163964u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_163968:
    // 0x163968: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x163968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
label_16396c:
    // 0x16396c: 0x34215000  ori         $at, $at, 0x5000
    ctx->pc = 0x16396cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20480);
label_163970:
    // 0x163970: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x163970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_163974:
    // 0x163974: 0x40f809  jalr        $v0
label_163978:
    if (ctx->pc == 0x163978u) {
        ctx->pc = 0x163978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163974u;
        // 0x163978: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16397Cu;
        goto label_16397c;
    }
    ctx->pc = 0x163974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16397Cu);
        ctx->pc = 0x163978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163974u;
        // 0x163978: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163974u, 0x16397Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16397Cu;
label_16397c:
    // 0x16397c: 0x8e25cdb4  lw          $a1, -0x324C($s1)
    ctx->pc = 0x16397cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954420)));
label_163980:
    // 0x163980: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x163980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_163984:
    // 0x163984: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x163984u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_163988:
    // 0x163988: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x163988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_16398c:
    // 0x16398c: 0x60f809  jalr        $v1
label_163990:
    if (ctx->pc == 0x163990u) {
        ctx->pc = 0x163990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16398Cu;
        // 0x163990: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163994u;
        goto label_163994;
    }
    ctx->pc = 0x16398Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x163994u);
        ctx->pc = 0x163990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16398Cu;
        // 0x163990: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16398Cu, 0x163994u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163994u;
label_163994:
    // 0x163994: 0x8e63489c  lw          $v1, 0x489C($s3)
    ctx->pc = 0x163994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_163998:
    // 0x163998: 0xaea00010  sw          $zero, 0x10($s5)
    ctx->pc = 0x163998u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
label_16399c:
    // 0x16399c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x16399cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1639a0:
    // 0x1639a0: 0x8c6214d8  lw          $v0, 0x14D8($v1)
    ctx->pc = 0x1639a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5336)));
label_1639a4:
    // 0x1639a4: 0x28420065  slti        $v0, $v0, 0x65
    ctx->pc = 0x1639a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
label_1639a8:
    // 0x1639a8: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_1639ac:
    if (ctx->pc == 0x1639ACu) {
        ctx->pc = 0x1639ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639A8u;
        // 0x1639ac: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1639B0u;
        goto label_1639b0;
    }
    ctx->pc = 0x1639A8u;
    {
        const bool branch_taken_0x1639a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1639ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639A8u;
        // 0x1639ac: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1639a8) {
            ctx->pc = 0x163A88u;
            goto label_163a88;
        }
    }
    ctx->pc = 0x1639B0u;
label_1639b0:
    // 0x1639b0: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1639b0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1639b4:
    // 0x1639b4: 0x26b20004  addiu       $s2, $s5, 0x4
    ctx->pc = 0x1639b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_1639b8:
    // 0x1639b8: 0x8ea80010  lw          $t0, 0x10($s5)
    ctx->pc = 0x1639b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_1639bc:
    // 0x1639bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1639bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1639c0:
    // 0x1639c0: 0x8fa60034  lw          $a2, 0x34($sp)
    ctx->pc = 0x1639c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_1639c4:
    // 0x1639c4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1639c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1639c8:
    // 0x1639c8: 0xc058c9c  jal         func_163270
label_1639cc:
    if (ctx->pc == 0x1639CCu) {
        ctx->pc = 0x1639CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639C8u;
        // 0x1639cc: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1639D0u;
        goto label_1639d0;
    }
    ctx->pc = 0x1639C8u;
    SET_GPR_U32(ctx, 31, 0x1639D0u);
    ctx->pc = 0x1639CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1639C8u;
    // 0x1639cc: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163270u, 0x1639C8u, 0x1639D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1639D0u;
label_1639d0:
    // 0x1639d0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1639d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1639d4:
    // 0x1639d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1639d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1639d8:
    // 0x1639d8: 0x12c3005a  beq         $s6, $v1, . + 4 + (0x5A << 2)
label_1639dc:
    if (ctx->pc == 0x1639DCu) {
        ctx->pc = 0x1639DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639D8u;
        // 0x1639dc: 0xaea20014  sw          $v0, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1639E0u;
        goto label_1639e0;
    }
    ctx->pc = 0x1639D8u;
    {
        const bool branch_taken_0x1639d8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 3));
        ctx->pc = 0x1639DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639D8u;
        // 0x1639dc: 0xaea20014  sw          $v0, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1639d8) {
            ctx->pc = 0x163B44u;
            goto label_163b44;
        }
    }
    ctx->pc = 0x1639E0u;
label_1639e0:
    // 0x1639e0: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x1639e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1639e4:
    // 0x1639e4: 0x8e64cd4c  lw          $a0, -0x32B4($s3)
    ctx->pc = 0x1639e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954316)));
label_1639e8:
    // 0x1639e8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1639e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1639ec:
    // 0x1639ec: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x1639ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
label_1639f0:
    // 0x1639f0: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1639f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_1639f4:
    // 0x1639f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1639f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1639f8:
    // 0x1639f8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1639f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1639fc:
    // 0x1639fc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1639fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_163a00:
    // 0x163a00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x163a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163a04:
    // 0x163a04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x163a04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163a08:
    // 0x163a08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x163a08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163a0c:
    // 0x163a0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x163a0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163a10:
    // 0x163a10: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x163a10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163a14:
    // 0x163a14: 0xc062bb0  jal         func_18AEC0
label_163a18:
    if (ctx->pc == 0x163A18u) {
        ctx->pc = 0x163A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A14u;
        // 0x163a18: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163A1Cu;
        goto label_163a1c;
    }
    ctx->pc = 0x163A14u;
    SET_GPR_U32(ctx, 31, 0x163A1Cu);
    ctx->pc = 0x163A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163A14u;
    // 0x163a18: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x163A14u, 0x163A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163A1Cu;
label_163a1c:
    // 0x163a1c: 0x3c11005e  lui         $s1, 0x5E
    ctx->pc = 0x163a1cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)94 << 16));
label_163a20:
    // 0x163a20: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x163a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_163a24:
    // 0x163a24: 0x8e64cd4c  lw          $a0, -0x32B4($s3)
    ctx->pc = 0x163a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954316)));
label_163a28:
    // 0x163a28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x163a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_163a2c:
    // 0x163a2c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x163a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_163a30:
    // 0x163a30: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x163a30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_163a34:
    // 0x163a34: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x163a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_163a38:
    // 0x163a38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x163a38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_163a3c:
    // 0x163a3c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x163a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_163a40:
    // 0x163a40: 0xc0616ac  jal         func_185AB0
label_163a44:
    if (ctx->pc == 0x163A44u) {
        ctx->pc = 0x163A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A40u;
        // 0x163a44: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163A48u;
        goto label_163a48;
    }
    ctx->pc = 0x163A40u;
    SET_GPR_U32(ctx, 31, 0x163A48u);
    ctx->pc = 0x163A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163A40u;
    // 0x163a44: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x163A40u, 0x163A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163A48u;
label_163a48:
    // 0x163a48: 0x10000003  b           . + 4 + (0x3 << 2)
label_163a4c:
    if (ctx->pc == 0x163A4Cu) {
        ctx->pc = 0x163A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A48u;
        // 0x163a4c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163A50u;
        goto label_163a50;
    }
    ctx->pc = 0x163A48u;
    {
        const bool branch_taken_0x163a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A48u;
        // 0x163a4c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a48) {
            ctx->pc = 0x163A58u;
            goto label_163a58;
        }
    }
    ctx->pc = 0x163A50u;
label_163a50:
    // 0x163a50: 0xc0552b8  jal         func_154AE0
label_163a54:
    if (ctx->pc == 0x163A54u) {
        ctx->pc = 0x163A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A50u;
        // 0x163a54: 0x8e245340  lw          $a0, 0x5340($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163A58u;
        goto label_163a58;
    }
    ctx->pc = 0x163A50u;
    SET_GPR_U32(ctx, 31, 0x163A58u);
    ctx->pc = 0x163A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163A50u;
    // 0x163a54: 0x8e245340  lw          $a0, 0x5340($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x163A50u, 0x163A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163A58u;
label_163a58:
    // 0x163a58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x163a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163a5c:
    // 0x163a5c: 0xc065cac  jal         func_1972B0
label_163a60:
    if (ctx->pc == 0x163A60u) {
        ctx->pc = 0x163A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A5Cu;
        // 0x163a60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163A64u;
        goto label_163a64;
    }
    ctx->pc = 0x163A5Cu;
    SET_GPR_U32(ctx, 31, 0x163A64u);
    ctx->pc = 0x163A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163A5Cu;
    // 0x163a60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1972B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1972B0u, 0x163A5Cu, 0x163A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163A64u;
label_163a64:
    // 0x163a64: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_163a68:
    if (ctx->pc == 0x163A68u) {
        ctx->pc = 0x163A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A64u;
        // 0x163a68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163A6Cu;
        goto label_163a6c;
    }
    ctx->pc = 0x163A64u;
    {
        const bool branch_taken_0x163a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A64u;
        // 0x163a68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a64) {
            ctx->pc = 0x163A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163a50;
        }
    }
    ctx->pc = 0x163A6Cu;
label_163a6c:
    // 0x163a6c: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x163a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_163a70:
    // 0x163a70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x163a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_163a74:
    // 0x163a74: 0x2c430003  sltiu       $v1, $v0, 0x3
    ctx->pc = 0x163a74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_163a78:
    // 0x163a78: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
label_163a7c:
    if (ctx->pc == 0x163A7Cu) {
        ctx->pc = 0x163A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A78u;
        // 0x163a7c: 0xaea20010  sw          $v0, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163A80u;
        goto label_163a80;
    }
    ctx->pc = 0x163A78u;
    {
        const bool branch_taken_0x163a78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x163A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A78u;
        // 0x163a7c: 0xaea20010  sw          $v0, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a78) {
            ctx->pc = 0x1639B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1639b8;
        }
    }
    ctx->pc = 0x163A80u;
label_163a80:
    // 0x163a80: 0x10000031  b           . + 4 + (0x31 << 2)
label_163a84:
    if (ctx->pc == 0x163A84u) {
        ctx->pc = 0x163A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A80u;
        // 0x163a84: 0x8fc5b8b8  lw          $a1, -0x4748($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294949048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163A88u;
        goto label_163a88;
    }
    ctx->pc = 0x163A80u;
    {
        const bool branch_taken_0x163a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A80u;
        // 0x163a84: 0x8fc5b8b8  lw          $a1, -0x4748($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294949048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a80) {
            ctx->pc = 0x163B48u;
            goto label_163b48;
        }
    }
    ctx->pc = 0x163A88u;
label_163a88:
    // 0x163a88: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x163a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_163a8c:
    // 0x163a8c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x163a8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_163a90:
    // 0x163a90: 0x9445eec2  lhu         $a1, -0x113E($v0)
    ctx->pc = 0x163a90u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962882)));
label_163a94:
    // 0x163a94: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x163a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_163a98:
    // 0x163a98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x163a98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163a9c:
    // 0x163a9c: 0xc058d74  jal         func_1635D0
label_163aa0:
    if (ctx->pc == 0x163AA0u) {
        ctx->pc = 0x163AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A9Cu;
        // 0x163aa0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163AA4u;
        goto label_163aa4;
    }
    ctx->pc = 0x163A9Cu;
    SET_GPR_U32(ctx, 31, 0x163AA4u);
    ctx->pc = 0x163AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163A9Cu;
    // 0x163aa0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1635D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1635D0u, 0x163A9Cu, 0x163AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163AA4u;
label_163aa4:
    // 0x163aa4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x163aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_163aa8:
    // 0x163aa8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x163aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_163aac:
    // 0x163aac: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x163aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
label_163ab0:
    // 0x163ab0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x163ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_163ab4:
    // 0x163ab4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x163ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_163ab8:
    // 0x163ab8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x163ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163abc:
    // 0x163abc: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x163abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
label_163ac0:
    // 0x163ac0: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x163ac0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_163ac4:
    // 0x163ac4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x163ac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_163ac8:
    // 0x163ac8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x163ac8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163acc:
    // 0x163acc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x163accu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163ad0:
    // 0x163ad0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x163ad0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163ad4:
    // 0x163ad4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x163ad4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163ad8:
    // 0x163ad8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x163ad8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163adc:
    // 0x163adc: 0xc062bb0  jal         func_18AEC0
label_163ae0:
    if (ctx->pc == 0x163AE0u) {
        ctx->pc = 0x163AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163ADCu;
        // 0x163ae0: 0xaea20014  sw          $v0, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163AE4u;
        goto label_163ae4;
    }
    ctx->pc = 0x163ADCu;
    SET_GPR_U32(ctx, 31, 0x163AE4u);
    ctx->pc = 0x163AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163ADCu;
    // 0x163ae0: 0xaea20014  sw          $v0, 0x14($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x163ADCu, 0x163AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163AE4u;
label_163ae4:
    // 0x163ae4: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x163ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_163ae8:
    // 0x163ae8: 0x26a60004  addiu       $a2, $s5, 0x4
    ctx->pc = 0x163ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_163aec:
    // 0x163aec: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x163aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
label_163af0:
    // 0x163af0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x163af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_163af4:
    // 0x163af4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x163af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_163af8:
    // 0x163af8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x163af8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_163afc:
    // 0x163afc: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x163afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_163b00:
    // 0x163b00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x163b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_163b04:
    // 0x163b04: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x163b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_163b08:
    // 0x163b08: 0xc0616ac  jal         func_185AB0
label_163b0c:
    if (ctx->pc == 0x163B0Cu) {
        ctx->pc = 0x163B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B08u;
        // 0x163b0c: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163B10u;
        goto label_163b10;
    }
    ctx->pc = 0x163B08u;
    SET_GPR_U32(ctx, 31, 0x163B10u);
    ctx->pc = 0x163B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163B08u;
    // 0x163b0c: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x163B08u, 0x163B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163B10u;
label_163b10:
    // 0x163b10: 0x10000003  b           . + 4 + (0x3 << 2)
label_163b14:
    if (ctx->pc == 0x163B14u) {
        ctx->pc = 0x163B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B10u;
        // 0x163b14: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163B18u;
        goto label_163b18;
    }
    ctx->pc = 0x163B10u;
    {
        const bool branch_taken_0x163b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B10u;
        // 0x163b14: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b10) {
            ctx->pc = 0x163B20u;
            goto label_163b20;
        }
    }
    ctx->pc = 0x163B18u;
label_163b18:
    // 0x163b18: 0xc0552b8  jal         func_154AE0
label_163b1c:
    if (ctx->pc == 0x163B1Cu) {
        ctx->pc = 0x163B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B18u;
        // 0x163b1c: 0x8c645340  lw          $a0, 0x5340($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163B20u;
        goto label_163b20;
    }
    ctx->pc = 0x163B18u;
    SET_GPR_U32(ctx, 31, 0x163B20u);
    ctx->pc = 0x163B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163B18u;
    // 0x163b1c: 0x8c645340  lw          $a0, 0x5340($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x163B18u, 0x163B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163B20u;
label_163b20:
    // 0x163b20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x163b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163b24:
    // 0x163b24: 0xc065cac  jal         func_1972B0
label_163b28:
    if (ctx->pc == 0x163B28u) {
        ctx->pc = 0x163B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B24u;
        // 0x163b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163B2Cu;
        goto label_163b2c;
    }
    ctx->pc = 0x163B24u;
    SET_GPR_U32(ctx, 31, 0x163B2Cu);
    ctx->pc = 0x163B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163B24u;
    // 0x163b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1972B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1972B0u, 0x163B24u, 0x163B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163B2Cu;
label_163b2c:
    // 0x163b2c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x163b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_163b30:
    // 0x163b30: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_163b34:
    if (ctx->pc == 0x163B34u) {
        ctx->pc = 0x163B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B30u;
        // 0x163b34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163B38u;
        goto label_163b38;
    }
    ctx->pc = 0x163B30u;
    {
        const bool branch_taken_0x163b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B30u;
        // 0x163b34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b30) {
            ctx->pc = 0x163B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163b18;
        }
    }
    ctx->pc = 0x163B38u;
label_163b38:
    // 0x163b38: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x163b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_163b3c:
    // 0x163b3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x163b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_163b40:
    // 0x163b40: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x163b40u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
label_163b44:
    // 0x163b44: 0x8fc5b8b8  lw          $a1, -0x4748($fp)
    ctx->pc = 0x163b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294949048)));
label_163b48:
    // 0x163b48: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x163b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_163b4c:
    // 0x163b4c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x163b4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_163b50:
    // 0x163b50: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x163b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_163b54:
    // 0x163b54: 0x40f809  jalr        $v0
label_163b58:
    if (ctx->pc == 0x163B58u) {
        ctx->pc = 0x163B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B54u;
        // 0x163b58: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163B5Cu;
        goto label_163b5c;
    }
    ctx->pc = 0x163B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x163B5Cu);
        ctx->pc = 0x163B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B54u;
        // 0x163b58: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163B54u, 0x163B5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163B5Cu;
label_163b5c:
    // 0x163b5c: 0x24060084  addiu       $a2, $zero, 0x84
    ctx->pc = 0x163b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_163b60:
    // 0x163b60: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x163b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_163b64:
    // 0x163b64: 0x2e63018  mult        $a2, $s7, $a2
    ctx->pc = 0x163b64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_163b68:
    // 0x163b68: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x163b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_163b6c:
    // 0x163b6c: 0xaea20018  sw          $v0, 0x18($s5)
    ctx->pc = 0x163b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
label_163b70:
    // 0x163b70: 0x240559d8  addiu       $a1, $zero, 0x59D8
    ctx->pc = 0x163b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23000));
label_163b74:
    // 0x163b74: 0x24077530  addiu       $a3, $zero, 0x7530
    ctx->pc = 0x163b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
label_163b78:
    // 0x163b78: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x163b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_163b7c:
    // 0x163b7c: 0x8c8314d8  lw          $v1, 0x14D8($a0)
    ctx->pc = 0x163b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5336)));
label_163b80:
    // 0x163b80: 0x28630065  slti        $v1, $v1, 0x65
    ctx->pc = 0x163b80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
label_163b84:
    // 0x163b84: 0xe3280a  movz        $a1, $a3, $v1
    ctx->pc = 0x163b84u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_163b88:
    // 0x163b88: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x163b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_163b8c:
    // 0x163b8c: 0x10000006  b           . + 4 + (0x6 << 2)
label_163b90:
    if (ctx->pc == 0x163B90u) {
        ctx->pc = 0x163B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B8Cu;
        // 0x163b90: 0xaea2001c  sw          $v0, 0x1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163B94u;
        goto label_163b94;
    }
    ctx->pc = 0x163B8Cu;
    {
        const bool branch_taken_0x163b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B8Cu;
        // 0x163b90: 0xaea2001c  sw          $v0, 0x1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b8c) {
            ctx->pc = 0x163BA8u;
            goto label_163ba8;
        }
    }
    ctx->pc = 0x163B94u;
label_163b94:
    // 0x163b94: 0x0  nop
    ctx->pc = 0x163b94u;
    // NOP
label_163b98:
    // 0x163b98: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x163b98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_163b9c:
    // 0x163b9c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x163b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_163ba0:
    // 0x163ba0: 0x60f809  jalr        $v1
label_163ba4:
    if (ctx->pc == 0x163BA4u) {
        ctx->pc = 0x163BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BA0u;
        // 0x163ba4: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163BA8u;
        goto label_163ba8;
    }
    ctx->pc = 0x163BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x163BA8u);
        ctx->pc = 0x163BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BA0u;
        // 0x163ba4: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163BA0u, 0x163BA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163BA8u;
label_163ba8:
    // 0x163ba8: 0x8fc5b8b8  lw          $a1, -0x4748($fp)
    ctx->pc = 0x163ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294949048)));
label_163bac:
    // 0x163bac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x163bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_163bb0:
    // 0x163bb0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x163bb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_163bb4:
    // 0x163bb4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x163bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_163bb8:
    // 0x163bb8: 0x40f809  jalr        $v0
label_163bbc:
    if (ctx->pc == 0x163BBCu) {
        ctx->pc = 0x163BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BB8u;
        // 0x163bbc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163BC0u;
        goto label_163bc0;
    }
    ctx->pc = 0x163BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x163BC0u);
        ctx->pc = 0x163BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BB8u;
        // 0x163bbc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163BB8u, 0x163BC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163BC0u;
label_163bc0:
    // 0x163bc0: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x163bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_163bc4:
    // 0x163bc4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x163bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_163bc8:
    // 0x163bc8: 0x2c4200c8  sltiu       $v0, $v0, 0xC8
    ctx->pc = 0x163bc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)200) ? 1 : 0);
label_163bcc:
    // 0x163bcc: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
label_163bd0:
    if (ctx->pc == 0x163BD0u) {
        ctx->pc = 0x163BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BCCu;
        // 0x163bd0: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163BD4u;
        goto label_163bd4;
    }
    ctx->pc = 0x163BCCu;
    {
        const bool branch_taken_0x163bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163bcc) {
            ctx->pc = 0x163BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163BCCu;
            // 0x163bd0: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163b98;
        }
    }
    ctx->pc = 0x163BD4u;
label_163bd4:
    // 0x163bd4: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x163bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_163bd8:
    // 0x163bd8: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x163bd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_163bdc:
    // 0x163bdc: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x163bdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_163be0:
    // 0x163be0: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x163be0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_163be4:
    // 0x163be4: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x163be4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_163be8:
    // 0x163be8: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x163be8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_163bec:
    // 0x163bec: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x163becu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_163bf0:
    // 0x163bf0: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x163bf0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_163bf4:
    // 0x163bf4: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x163bf4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_163bf8:
    // 0x163bf8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x163bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_163bfc:
    // 0x163bfc: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x163bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_163c00:
    // 0x163c00: 0x3e00008  jr          $ra
label_163c04:
    if (ctx->pc == 0x163C04u) {
        ctx->pc = 0x163C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C00u;
        // 0x163c04: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163C08u;
        goto label_fallthrough_0x163c00;
    }
    ctx->pc = 0x163C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C00u;
        // 0x163c04: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x163c00:
    ctx->pc = 0x163C08u;
}
