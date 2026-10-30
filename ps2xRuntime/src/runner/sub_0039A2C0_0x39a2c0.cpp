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

// Function: sub_0039A2C0
// Address: 0x39a2c0 - 0x39a580
void sub_0039A2C0_0x39a2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A2C0_0x39a2c0");
#endif

    switch (ctx->pc) {
        case 0x39a2c0u: goto label_39a2c0;
        case 0x39a2c4u: goto label_39a2c4;
        case 0x39a2c8u: goto label_39a2c8;
        case 0x39a2ccu: goto label_39a2cc;
        case 0x39a2d0u: goto label_39a2d0;
        case 0x39a2d4u: goto label_39a2d4;
        case 0x39a2d8u: goto label_39a2d8;
        case 0x39a2dcu: goto label_39a2dc;
        case 0x39a2e0u: goto label_39a2e0;
        case 0x39a2e4u: goto label_39a2e4;
        case 0x39a2e8u: goto label_39a2e8;
        case 0x39a2ecu: goto label_39a2ec;
        case 0x39a2f0u: goto label_39a2f0;
        case 0x39a2f4u: goto label_39a2f4;
        case 0x39a2f8u: goto label_39a2f8;
        case 0x39a2fcu: goto label_39a2fc;
        case 0x39a300u: goto label_39a300;
        case 0x39a304u: goto label_39a304;
        case 0x39a308u: goto label_39a308;
        case 0x39a30cu: goto label_39a30c;
        case 0x39a310u: goto label_39a310;
        case 0x39a314u: goto label_39a314;
        case 0x39a318u: goto label_39a318;
        case 0x39a31cu: goto label_39a31c;
        case 0x39a320u: goto label_39a320;
        case 0x39a324u: goto label_39a324;
        case 0x39a328u: goto label_39a328;
        case 0x39a32cu: goto label_39a32c;
        case 0x39a330u: goto label_39a330;
        case 0x39a334u: goto label_39a334;
        case 0x39a338u: goto label_39a338;
        case 0x39a33cu: goto label_39a33c;
        case 0x39a340u: goto label_39a340;
        case 0x39a344u: goto label_39a344;
        case 0x39a348u: goto label_39a348;
        case 0x39a34cu: goto label_39a34c;
        case 0x39a350u: goto label_39a350;
        case 0x39a354u: goto label_39a354;
        case 0x39a358u: goto label_39a358;
        case 0x39a35cu: goto label_39a35c;
        case 0x39a360u: goto label_39a360;
        case 0x39a364u: goto label_39a364;
        case 0x39a368u: goto label_39a368;
        case 0x39a36cu: goto label_39a36c;
        case 0x39a370u: goto label_39a370;
        case 0x39a374u: goto label_39a374;
        case 0x39a378u: goto label_39a378;
        case 0x39a37cu: goto label_39a37c;
        case 0x39a380u: goto label_39a380;
        case 0x39a384u: goto label_39a384;
        case 0x39a388u: goto label_39a388;
        case 0x39a38cu: goto label_39a38c;
        case 0x39a390u: goto label_39a390;
        case 0x39a394u: goto label_39a394;
        case 0x39a398u: goto label_39a398;
        case 0x39a39cu: goto label_39a39c;
        case 0x39a3a0u: goto label_39a3a0;
        case 0x39a3a4u: goto label_39a3a4;
        case 0x39a3a8u: goto label_39a3a8;
        case 0x39a3acu: goto label_39a3ac;
        case 0x39a3b0u: goto label_39a3b0;
        case 0x39a3b4u: goto label_39a3b4;
        case 0x39a3b8u: goto label_39a3b8;
        case 0x39a3bcu: goto label_39a3bc;
        case 0x39a3c0u: goto label_39a3c0;
        case 0x39a3c4u: goto label_39a3c4;
        case 0x39a3c8u: goto label_39a3c8;
        case 0x39a3ccu: goto label_39a3cc;
        case 0x39a3d0u: goto label_39a3d0;
        case 0x39a3d4u: goto label_39a3d4;
        case 0x39a3d8u: goto label_39a3d8;
        case 0x39a3dcu: goto label_39a3dc;
        case 0x39a3e0u: goto label_39a3e0;
        case 0x39a3e4u: goto label_39a3e4;
        case 0x39a3e8u: goto label_39a3e8;
        case 0x39a3ecu: goto label_39a3ec;
        case 0x39a3f0u: goto label_39a3f0;
        case 0x39a3f4u: goto label_39a3f4;
        case 0x39a3f8u: goto label_39a3f8;
        case 0x39a3fcu: goto label_39a3fc;
        case 0x39a400u: goto label_39a400;
        case 0x39a404u: goto label_39a404;
        case 0x39a408u: goto label_39a408;
        case 0x39a40cu: goto label_39a40c;
        case 0x39a410u: goto label_39a410;
        case 0x39a414u: goto label_39a414;
        case 0x39a418u: goto label_39a418;
        case 0x39a41cu: goto label_39a41c;
        case 0x39a420u: goto label_39a420;
        case 0x39a424u: goto label_39a424;
        case 0x39a428u: goto label_39a428;
        case 0x39a42cu: goto label_39a42c;
        case 0x39a430u: goto label_39a430;
        case 0x39a434u: goto label_39a434;
        case 0x39a438u: goto label_39a438;
        case 0x39a43cu: goto label_39a43c;
        case 0x39a440u: goto label_39a440;
        case 0x39a444u: goto label_39a444;
        case 0x39a448u: goto label_39a448;
        case 0x39a44cu: goto label_39a44c;
        case 0x39a450u: goto label_39a450;
        case 0x39a454u: goto label_39a454;
        case 0x39a458u: goto label_39a458;
        case 0x39a45cu: goto label_39a45c;
        case 0x39a460u: goto label_39a460;
        case 0x39a464u: goto label_39a464;
        case 0x39a468u: goto label_39a468;
        case 0x39a46cu: goto label_39a46c;
        case 0x39a470u: goto label_39a470;
        case 0x39a474u: goto label_39a474;
        case 0x39a478u: goto label_39a478;
        case 0x39a47cu: goto label_39a47c;
        case 0x39a480u: goto label_39a480;
        case 0x39a484u: goto label_39a484;
        case 0x39a488u: goto label_39a488;
        case 0x39a48cu: goto label_39a48c;
        case 0x39a490u: goto label_39a490;
        case 0x39a494u: goto label_39a494;
        case 0x39a498u: goto label_39a498;
        case 0x39a49cu: goto label_39a49c;
        case 0x39a4a0u: goto label_39a4a0;
        case 0x39a4a4u: goto label_39a4a4;
        case 0x39a4a8u: goto label_39a4a8;
        case 0x39a4acu: goto label_39a4ac;
        case 0x39a4b0u: goto label_39a4b0;
        case 0x39a4b4u: goto label_39a4b4;
        case 0x39a4b8u: goto label_39a4b8;
        case 0x39a4bcu: goto label_39a4bc;
        case 0x39a4c0u: goto label_39a4c0;
        case 0x39a4c4u: goto label_39a4c4;
        case 0x39a4c8u: goto label_39a4c8;
        case 0x39a4ccu: goto label_39a4cc;
        case 0x39a4d0u: goto label_39a4d0;
        case 0x39a4d4u: goto label_39a4d4;
        case 0x39a4d8u: goto label_39a4d8;
        case 0x39a4dcu: goto label_39a4dc;
        case 0x39a4e0u: goto label_39a4e0;
        case 0x39a4e4u: goto label_39a4e4;
        case 0x39a4e8u: goto label_39a4e8;
        case 0x39a4ecu: goto label_39a4ec;
        case 0x39a4f0u: goto label_39a4f0;
        case 0x39a4f4u: goto label_39a4f4;
        case 0x39a4f8u: goto label_39a4f8;
        case 0x39a4fcu: goto label_39a4fc;
        case 0x39a500u: goto label_39a500;
        case 0x39a504u: goto label_39a504;
        case 0x39a508u: goto label_39a508;
        case 0x39a50cu: goto label_39a50c;
        case 0x39a510u: goto label_39a510;
        case 0x39a514u: goto label_39a514;
        case 0x39a518u: goto label_39a518;
        case 0x39a51cu: goto label_39a51c;
        case 0x39a520u: goto label_39a520;
        case 0x39a524u: goto label_39a524;
        case 0x39a528u: goto label_39a528;
        case 0x39a52cu: goto label_39a52c;
        case 0x39a530u: goto label_39a530;
        case 0x39a534u: goto label_39a534;
        case 0x39a538u: goto label_39a538;
        case 0x39a53cu: goto label_39a53c;
        case 0x39a540u: goto label_39a540;
        case 0x39a544u: goto label_39a544;
        case 0x39a548u: goto label_39a548;
        case 0x39a54cu: goto label_39a54c;
        case 0x39a550u: goto label_39a550;
        case 0x39a554u: goto label_39a554;
        case 0x39a558u: goto label_39a558;
        case 0x39a55cu: goto label_39a55c;
        case 0x39a560u: goto label_39a560;
        case 0x39a564u: goto label_39a564;
        case 0x39a568u: goto label_39a568;
        case 0x39a56cu: goto label_39a56c;
        case 0x39a570u: goto label_39a570;
        case 0x39a574u: goto label_39a574;
        case 0x39a578u: goto label_39a578;
        case 0x39a57cu: goto label_39a57c;
        default: break;
    }

    ctx->pc = 0x39a2c0u;

label_39a2c0:
    // 0x39a2c0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x39a2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_39a2c4:
    // 0x39a2c4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x39a2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_39a2c8:
    // 0x39a2c8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x39a2c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39a2cc:
    // 0x39a2cc: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x39a2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_39a2d0:
    // 0x39a2d0: 0x151142  srl         $v0, $s5, 5
    ctx->pc = 0x39a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 5));
label_39a2d4:
    // 0x39a2d4: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x39a2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_39a2d8:
    // 0x39a2d8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x39a2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_39a2dc:
    // 0x39a2dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39a2dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39a2e0:
    // 0x39a2e0: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x39a2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_39a2e4:
    // 0x39a2e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x39a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_39a2e8:
    // 0x39a2e8: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x39a2e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_39a2ec:
    // 0x39a2ec: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x39a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_39a2f0:
    // 0x39a2f0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x39a2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_39a2f4:
    // 0x39a2f4: 0x32a4001f  andi        $a0, $s5, 0x1F
    ctx->pc = 0x39a2f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)31);
label_39a2f8:
    // 0x39a2f8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x39a2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_39a2fc:
    // 0x39a2fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39a2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39a300:
    // 0x39a300: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x39a300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_39a304:
    // 0x39a304: 0x852004  sllv        $a0, $a1, $a0
    ctx->pc = 0x39a304u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_39a308:
    // 0x39a308: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x39a308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_39a30c:
    // 0x39a30c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x39a30cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39a310:
    // 0x39a310: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x39a310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_39a314:
    // 0x39a314: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x39a314u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_39a318:
    // 0x39a318: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x39a318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_39a31c:
    // 0x39a31c: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x39a31cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_39a320:
    // 0x39a320: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x39a320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_39a324:
    // 0x39a324: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x39a324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_39a328:
    // 0x39a328: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x39a328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_39a32c:
    // 0x39a32c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x39a32cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_39a330:
    // 0x39a330: 0x1465007e  bne         $v1, $a1, . + 4 + (0x7E << 2)
label_39a334:
    if (ctx->pc == 0x39A334u) {
        ctx->pc = 0x39A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A330u;
        // 0x39a334: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A338u;
        goto label_39a338;
    }
    ctx->pc = 0x39A330u;
    {
        const bool branch_taken_0x39a330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x39A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A330u;
        // 0x39a334: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a330) {
            ctx->pc = 0x39A52Cu;
            goto label_39a52c;
        }
    }
    ctx->pc = 0x39A338u;
label_39a338:
    // 0x39a338: 0x96420018  lhu         $v0, 0x18($s2)
    ctx->pc = 0x39a338u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
label_39a33c:
    // 0x39a33c: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
label_39a340:
    if (ctx->pc == 0x39A340u) {
        ctx->pc = 0x39A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A33Cu;
        // 0x39a340: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A344u;
        goto label_39a344;
    }
    ctx->pc = 0x39A33Cu;
    {
        const bool branch_taken_0x39a33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A33Cu;
        // 0x39a340: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a33c) {
            ctx->pc = 0x39A52Cu;
            goto label_39a52c;
        }
    }
    ctx->pc = 0x39A344u;
label_39a344:
    // 0x39a344: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x39a344u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39a348:
    // 0x39a348: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x39a348u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_39a34c:
    // 0x39a34c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x39a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_39a350:
    // 0x39a350: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x39a350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_39a354:
    // 0x39a354: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x39a354u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_39a358:
    // 0x39a358: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x39a358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_39a35c:
    // 0x39a35c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x39a35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_39a360:
    // 0x39a360: 0x51582  srl         $v0, $a1, 22
    ctx->pc = 0x39a360u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 22));
label_39a364:
    // 0x39a364: 0x5455006d  bnel        $v0, $s5, . + 4 + (0x6D << 2)
label_39a368:
    if (ctx->pc == 0x39A368u) {
        ctx->pc = 0x39A368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A364u;
        // 0x39a368: 0x96420018  lhu         $v0, 0x18($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A36Cu;
        goto label_39a36c;
    }
    ctx->pc = 0x39A364u;
    {
        const bool branch_taken_0x39a364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x39a364) {
            ctx->pc = 0x39A368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A364u;
            // 0x39a368: 0x96420018  lhu         $v0, 0x18($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A51Cu;
            goto label_39a51c;
        }
    }
    ctx->pc = 0x39A36Cu;
label_39a36c:
    // 0x39a36c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x39a36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_39a370:
    // 0x39a370: 0x31482  srl         $v0, $v1, 18
    ctx->pc = 0x39a370u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 18));
label_39a374:
    // 0x39a374: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39a374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_39a378:
    // 0x39a378: 0x10530067  beq         $v0, $s3, . + 4 + (0x67 << 2)
label_39a37c:
    if (ctx->pc == 0x39A37Cu) {
        ctx->pc = 0x39A37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A378u;
        // 0x39a37c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A380u;
        goto label_39a380;
    }
    ctx->pc = 0x39A378u;
    {
        const bool branch_taken_0x39a378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x39A37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A378u;
        // 0x39a37c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a378) {
            ctx->pc = 0x39A518u;
            goto label_39a518;
        }
    }
    ctx->pc = 0x39A380u;
label_39a380:
    // 0x39a380: 0x1682001a  bne         $s4, $v0, . + 4 + (0x1A << 2)
label_39a384:
    if (ctx->pc == 0x39A384u) {
        ctx->pc = 0x39A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A380u;
        // 0x39a384: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A388u;
        goto label_39a388;
    }
    ctx->pc = 0x39A380u;
    {
        const bool branch_taken_0x39a380 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x39A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A380u;
        // 0x39a384: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a380) {
            ctx->pc = 0x39A3ECu;
            goto label_39a3ec;
        }
    }
    ctx->pc = 0x39A388u;
label_39a388:
    // 0x39a388: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x39a388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_39a38c:
    // 0x39a38c: 0x30a53fff  andi        $a1, $a1, 0x3FFF
    ctx->pc = 0x39a38cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
label_39a390:
    // 0x39a390: 0xc0e44cc  jal         func_391330
label_39a394:
    if (ctx->pc == 0x39A394u) {
        ctx->pc = 0x39A394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A390u;
        // 0x39a394: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A398u;
        goto label_39a398;
    }
    ctx->pc = 0x39A390u;
    SET_GPR_U32(ctx, 31, 0x39A398u);
    ctx->pc = 0x39A394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A390u;
    // 0x39a394: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x39A390u, 0x39A398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A398u;
label_39a398:
    // 0x39a398: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39a398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39a39c:
    // 0x39a39c: 0x80830087  lb          $v1, 0x87($a0)
    ctx->pc = 0x39a39cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 135)));
label_39a3a0:
    // 0x39a3a0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x39a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_39a3a4:
    // 0x39a3a4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_39a3a8:
    if (ctx->pc == 0x39A3A8u) {
        ctx->pc = 0x39A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A3A4u;
        // 0x39a3a8: 0x9485005e  lhu         $a1, 0x5E($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 94)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A3ACu;
        goto label_39a3ac;
    }
    ctx->pc = 0x39A3A4u;
    {
        const bool branch_taken_0x39a3a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x39A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A3A4u;
        // 0x39a3a8: 0x9485005e  lhu         $a1, 0x5E($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 94)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a3a4) {
            ctx->pc = 0x39A3C0u;
            goto label_39a3c0;
        }
    }
    ctx->pc = 0x39A3ACu;
label_39a3ac:
    // 0x39a3ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x39a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39a3b0:
    // 0x39a3b0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_39a3b4:
    if (ctx->pc == 0x39A3B4u) {
        ctx->pc = 0x39A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A3B0u;
        // 0x39a3b4: 0x30a20024  andi        $v0, $a1, 0x24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)36);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A3B8u;
        goto label_39a3b8;
    }
    ctx->pc = 0x39A3B0u;
    {
        const bool branch_taken_0x39a3b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x39A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A3B0u;
        // 0x39a3b4: 0x30a20024  andi        $v0, $a1, 0x24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)36);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a3b0) {
            ctx->pc = 0x39A3C0u;
            goto label_39a3c0;
        }
    }
    ctx->pc = 0x39A3B8u;
label_39a3b8:
    // 0x39a3b8: 0x50400058  beql        $v0, $zero, . + 4 + (0x58 << 2)
label_39a3bc:
    if (ctx->pc == 0x39A3BCu) {
        ctx->pc = 0x39A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A3B8u;
        // 0x39a3bc: 0x96420018  lhu         $v0, 0x18($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A3C0u;
        goto label_39a3c0;
    }
    ctx->pc = 0x39A3B8u;
    {
        const bool branch_taken_0x39a3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a3b8) {
            ctx->pc = 0x39A3BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A3B8u;
            // 0x39a3bc: 0x96420018  lhu         $v0, 0x18($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A51Cu;
            goto label_39a51c;
        }
    }
    ctx->pc = 0x39A3C0u;
label_39a3c0:
    // 0x39a3c0: 0x8082005a  lb          $v0, 0x5A($a0)
    ctx->pc = 0x39a3c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 90)));
label_39a3c4:
    // 0x39a3c4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_39a3c8:
    if (ctx->pc == 0x39A3C8u) {
        ctx->pc = 0x39A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A3C4u;
        // 0x39a3c8: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A3CCu;
        goto label_39a3cc;
    }
    ctx->pc = 0x39A3C4u;
    {
        const bool branch_taken_0x39a3c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a3c4) {
            ctx->pc = 0x39A3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A3C4u;
            // 0x39a3c8: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A408u;
            goto label_39a408;
        }
    }
    ctx->pc = 0x39A3CCu;
label_39a3cc:
    // 0x39a3cc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x39a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_39a3d0:
    // 0x39a3d0: 0x24840043  addiu       $a0, $a0, 0x43
    ctx->pc = 0x39a3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 67));
label_39a3d4:
    // 0x39a3d4: 0xc10c313  jal         func_430C4C
label_39a3d8:
    if (ctx->pc == 0x39A3D8u) {
        ctx->pc = 0x39A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A3D4u;
        // 0x39a3d8: 0x24451260  addiu       $a1, $v0, 0x1260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A3DCu;
        goto label_39a3dc;
    }
    ctx->pc = 0x39A3D4u;
    SET_GPR_U32(ctx, 31, 0x39A3DCu);
    ctx->pc = 0x39A3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A3D4u;
    // 0x39a3d8: 0x24451260  addiu       $a1, $v0, 0x1260 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x39A3D4u, 0x39A3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A3DCu;
label_39a3dc:
    // 0x39a3dc: 0x5440004f  bnel        $v0, $zero, . + 4 + (0x4F << 2)
label_39a3e0:
    if (ctx->pc == 0x39A3E0u) {
        ctx->pc = 0x39A3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A3DCu;
        // 0x39a3e0: 0x96420018  lhu         $v0, 0x18($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A3E4u;
        goto label_39a3e4;
    }
    ctx->pc = 0x39A3DCu;
    {
        const bool branch_taken_0x39a3dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a3dc) {
            ctx->pc = 0x39A3E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A3DCu;
            // 0x39a3e0: 0x96420018  lhu         $v0, 0x18($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A51Cu;
            goto label_39a51c;
        }
    }
    ctx->pc = 0x39A3E4u;
label_39a3e4:
    // 0x39a3e4: 0x10000008  b           . + 4 + (0x8 << 2)
label_39a3e8:
    if (ctx->pc == 0x39A3E8u) {
        ctx->pc = 0x39A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A3E4u;
        // 0x39a3e8: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A3ECu;
        goto label_39a3ec;
    }
    ctx->pc = 0x39A3E4u;
    {
        const bool branch_taken_0x39a3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A3E4u;
        // 0x39a3e8: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a3e4) {
            ctx->pc = 0x39A408u;
            goto label_39a408;
        }
    }
    ctx->pc = 0x39A3ECu;
label_39a3ec:
    // 0x39a3ec: 0x56820006  bnel        $s4, $v0, . + 4 + (0x6 << 2)
label_39a3f0:
    if (ctx->pc == 0x39A3F0u) {
        ctx->pc = 0x39A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A3ECu;
        // 0x39a3f0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A3F4u;
        goto label_39a3f4;
    }
    ctx->pc = 0x39A3ECu;
    {
        const bool branch_taken_0x39a3ec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x39a3ec) {
            ctx->pc = 0x39A3F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A3ECu;
            // 0x39a3f0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A408u;
            goto label_39a408;
        }
    }
    ctx->pc = 0x39A3F4u;
label_39a3f4:
    // 0x39a3f4: 0x314c2  srl         $v0, $v1, 19
    ctx->pc = 0x39a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 19));
label_39a3f8:
    // 0x39a3f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39a3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_39a3fc:
    // 0x39a3fc: 0x50400047  beql        $v0, $zero, . + 4 + (0x47 << 2)
label_39a400:
    if (ctx->pc == 0x39A400u) {
        ctx->pc = 0x39A400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A3FCu;
        // 0x39a400: 0x96420018  lhu         $v0, 0x18($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A404u;
        goto label_39a404;
    }
    ctx->pc = 0x39A3FCu;
    {
        const bool branch_taken_0x39a3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a3fc) {
            ctx->pc = 0x39A400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A3FCu;
            // 0x39a400: 0x96420018  lhu         $v0, 0x18($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A51Cu;
            goto label_39a51c;
        }
    }
    ctx->pc = 0x39A404u;
label_39a404:
    // 0x39a404: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x39a404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_39a408:
    // 0x39a408: 0x21442  srl         $v0, $v0, 17
    ctx->pc = 0x39a408u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 17));
label_39a40c:
    // 0x39a40c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39a40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_39a410:
    // 0x39a410: 0x5453002d  bnel        $v0, $s3, . + 4 + (0x2D << 2)
label_39a414:
    if (ctx->pc == 0x39A414u) {
        ctx->pc = 0x39A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A410u;
        // 0x39a414: 0xc6000008  lwc1        $f0, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A418u;
        goto label_39a418;
    }
    ctx->pc = 0x39A410u;
    {
        const bool branch_taken_0x39a410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x39a410) {
            ctx->pc = 0x39A414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A410u;
            // 0x39a414: 0xc6000008  lwc1        $f0, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A4C8u;
            goto label_39a4c8;
        }
    }
    ctx->pc = 0x39A418u;
label_39a418:
    // 0x39a418: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39a418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39a41c:
    // 0x39a41c: 0xc0e63f8  jal         func_398FE0
label_39a420:
    if (ctx->pc == 0x39A420u) {
        ctx->pc = 0x39A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A41Cu;
        // 0x39a420: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A424u;
        goto label_39a424;
    }
    ctx->pc = 0x39A41Cu;
    SET_GPR_U32(ctx, 31, 0x39A424u);
    ctx->pc = 0x39A420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A41Cu;
    // 0x39a420: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398FE0u, 0x39A41Cu, 0x39A424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A424u;
label_39a424:
    // 0x39a424: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x39a424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_39a428:
    // 0x39a428: 0xc0e4060  jal         func_390180
label_39a42c:
    if (ctx->pc == 0x39A42Cu) {
        ctx->pc = 0x39A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A428u;
        // 0x39a42c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A430u;
        goto label_39a430;
    }
    ctx->pc = 0x39A428u;
    SET_GPR_U32(ctx, 31, 0x39A430u);
    ctx->pc = 0x39A42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A428u;
    // 0x39a42c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x39A428u, 0x39A430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A430u;
label_39a430:
    // 0x39a430: 0xc0e57ce  jal         func_395F38
label_39a434:
    if (ctx->pc == 0x39A434u) {
        ctx->pc = 0x39A434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A430u;
        // 0x39a434: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A438u;
        goto label_39a438;
    }
    ctx->pc = 0x39A430u;
    SET_GPR_U32(ctx, 31, 0x39A438u);
    ctx->pc = 0x39A434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A430u;
    // 0x39a434: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x39A430u, 0x39A438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A438u;
label_39a438:
    // 0x39a438: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39a438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39a43c:
    // 0x39a43c: 0x52000018  beql        $s0, $zero, . + 4 + (0x18 << 2)
label_39a440:
    if (ctx->pc == 0x39A440u) {
        ctx->pc = 0x39A440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A43Cu;
        // 0x39a440: 0x8e0200ec  lw          $v0, 0xEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A444u;
        goto label_39a444;
    }
    ctx->pc = 0x39A43Cu;
    {
        const bool branch_taken_0x39a43c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a43c) {
            ctx->pc = 0x39A440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A43Cu;
            // 0x39a440: 0x8e0200ec  lw          $v0, 0xEC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A4A0u;
            goto label_39a4a0;
        }
    }
    ctx->pc = 0x39A444u;
label_39a444:
    // 0x39a444: 0xc0e53c8  jal         func_394F20
label_39a448:
    if (ctx->pc == 0x39A448u) {
        ctx->pc = 0x39A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A444u;
        // 0x39a448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A44Cu;
        goto label_39a44c;
    }
    ctx->pc = 0x39A444u;
    SET_GPR_U32(ctx, 31, 0x39A44Cu);
    ctx->pc = 0x39A448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A444u;
    // 0x39a448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394F20u, 0x39A444u, 0x39A44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A44Cu;
label_39a44c:
    // 0x39a44c: 0x50530033  beql        $v0, $s3, . + 4 + (0x33 << 2)
label_39a450:
    if (ctx->pc == 0x39A450u) {
        ctx->pc = 0x39A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A44Cu;
        // 0x39a450: 0x96420018  lhu         $v0, 0x18($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A454u;
        goto label_39a454;
    }
    ctx->pc = 0x39A44Cu;
    {
        const bool branch_taken_0x39a44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x39a44c) {
            ctx->pc = 0x39A450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A44Cu;
            // 0x39a450: 0x96420018  lhu         $v0, 0x18($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A51Cu;
            goto label_39a51c;
        }
    }
    ctx->pc = 0x39A454u;
label_39a454:
    // 0x39a454: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39a454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39a458:
    // 0x39a458: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x39a458u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_39a45c:
    // 0x39a45c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x39a45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_39a460:
    // 0x39a460: 0x40f809  jalr        $v0
label_39a464:
    if (ctx->pc == 0x39A464u) {
        ctx->pc = 0x39A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A460u;
        // 0x39a464: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A468u;
        goto label_39a468;
    }
    ctx->pc = 0x39A460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39A468u);
        ctx->pc = 0x39A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A460u;
        // 0x39a464: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A460u, 0x39A468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A468u;
label_39a468:
    // 0x39a468: 0x21683  sra         $v0, $v0, 26
    ctx->pc = 0x39a468u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 26));
label_39a46c:
    // 0x39a46c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39a46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_39a470:
    // 0x39a470: 0x5053002a  beql        $v0, $s3, . + 4 + (0x2A << 2)
label_39a474:
    if (ctx->pc == 0x39A474u) {
        ctx->pc = 0x39A474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A470u;
        // 0x39a474: 0x96420018  lhu         $v0, 0x18($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A478u;
        goto label_39a478;
    }
    ctx->pc = 0x39A470u;
    {
        const bool branch_taken_0x39a470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x39a470) {
            ctx->pc = 0x39A474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A470u;
            // 0x39a474: 0x96420018  lhu         $v0, 0x18($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A51Cu;
            goto label_39a51c;
        }
    }
    ctx->pc = 0x39A478u;
label_39a478:
    // 0x39a478: 0x9202010d  lbu         $v0, 0x10D($s0)
    ctx->pc = 0x39a478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_39a47c:
    // 0x39a47c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_39a480:
    if (ctx->pc == 0x39A480u) {
        ctx->pc = 0x39A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A47Cu;
        // 0x39a480: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A484u;
        goto label_39a484;
    }
    ctx->pc = 0x39A47Cu;
    {
        const bool branch_taken_0x39a47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A47Cu;
        // 0x39a480: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a47c) {
            ctx->pc = 0x39A490u;
            goto label_39a490;
        }
    }
    ctx->pc = 0x39A484u;
label_39a484:
    // 0x39a484: 0x9202010e  lbu         $v0, 0x10E($s0)
    ctx->pc = 0x39a484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 270)));
label_39a488:
    // 0x39a488: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_39a48c:
    if (ctx->pc == 0x39A48Cu) {
        ctx->pc = 0x39A490u;
        goto label_39a490;
    }
    ctx->pc = 0x39A488u;
    {
        const bool branch_taken_0x39a488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a488) {
            ctx->pc = 0x39A494u;
            goto label_39a494;
        }
    }
    ctx->pc = 0x39A490u;
label_39a490:
    // 0x39a490: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39a490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39a494:
    // 0x39a494: 0x50730021  beql        $v1, $s3, . + 4 + (0x21 << 2)
label_39a498:
    if (ctx->pc == 0x39A498u) {
        ctx->pc = 0x39A498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A494u;
        // 0x39a498: 0x96420018  lhu         $v0, 0x18($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A49Cu;
        goto label_39a49c;
    }
    ctx->pc = 0x39A494u;
    {
        const bool branch_taken_0x39a494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x39a494) {
            ctx->pc = 0x39A498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A494u;
            // 0x39a498: 0x96420018  lhu         $v0, 0x18($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A51Cu;
            goto label_39a51c;
        }
    }
    ctx->pc = 0x39A49Cu;
label_39a49c:
    // 0x39a49c: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x39a49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_39a4a0:
    // 0x39a4a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_39a4a4:
    if (ctx->pc == 0x39A4A4u) {
        ctx->pc = 0x39A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A4A0u;
        // 0x39a4a4: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A4A8u;
        goto label_39a4a8;
    }
    ctx->pc = 0x39A4A0u;
    {
        const bool branch_taken_0x39a4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A4A0u;
        // 0x39a4a4: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a4a0) {
            ctx->pc = 0x39A4C0u;
            goto label_39a4c0;
        }
    }
    ctx->pc = 0x39A4A8u;
label_39a4a8:
    // 0x39a4a8: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x39a4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_39a4ac:
    // 0x39a4ac: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x39a4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_39a4b0:
    // 0x39a4b0: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x39a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_39a4b4:
    // 0x39a4b4: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x39a4b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_39a4b8:
    // 0x39a4b8: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_39a4bc:
    if (ctx->pc == 0x39A4BCu) {
        ctx->pc = 0x39A4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A4B8u;
        // 0x39a4bc: 0x96420018  lhu         $v0, 0x18($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A4C0u;
        goto label_39a4c0;
    }
    ctx->pc = 0x39A4B8u;
    {
        const bool branch_taken_0x39a4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a4b8) {
            ctx->pc = 0x39A4BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A4B8u;
            // 0x39a4bc: 0x96420018  lhu         $v0, 0x18($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A51Cu;
            goto label_39a51c;
        }
    }
    ctx->pc = 0x39A4C0u;
label_39a4c0:
    // 0x39a4c0: 0x1000000f  b           . + 4 + (0xF << 2)
label_39a4c4:
    if (ctx->pc == 0x39A4C4u) {
        ctx->pc = 0x39A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A4C0u;
        // 0x39a4c4: 0xc6000134  lwc1        $f0, 0x134($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A4C8u;
        goto label_39a4c8;
    }
    ctx->pc = 0x39A4C0u;
    {
        const bool branch_taken_0x39a4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A4C0u;
        // 0x39a4c4: 0xc6000134  lwc1        $f0, 0x134($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a4c0) {
            ctx->pc = 0x39A500u;
            goto label_39a500;
        }
    }
    ctx->pc = 0x39A4C8u;
label_39a4c8:
    // 0x39a4c8: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x39a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_39a4cc:
    // 0x39a4cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x39a4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_39a4d0:
    // 0x39a4d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x39a4d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_39a4d4:
    // 0x39a4d4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x39a4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_39a4d8:
    // 0x39a4d8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x39a4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_39a4dc:
    // 0x39a4dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x39a4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39a4e0:
    // 0x39a4e0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x39a4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39a4e4:
    // 0x39a4e4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x39a4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_39a4e8:
    // 0x39a4e8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x39a4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39a4ec:
    // 0x39a4ec: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x39a4ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_39a4f0:
    // 0x39a4f0: 0xe6e2000c  swc1        $f2, 0xC($s7)
    ctx->pc = 0x39a4f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_39a4f4:
    // 0x39a4f4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x39a4f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39a4f8:
    // 0x39a4f8: 0xc0cdb38  jal         func_336CE0
label_39a4fc:
    if (ctx->pc == 0x39A4FCu) {
        ctx->pc = 0x39A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A4F8u;
        // 0x39a4fc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A500u;
        goto label_39a500;
    }
    ctx->pc = 0x39A4F8u;
    SET_GPR_U32(ctx, 31, 0x39A500u);
    ctx->pc = 0x39A4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A4F8u;
    // 0x39a4fc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x39A4F8u, 0x39A500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A500u;
label_39a500:
    // 0x39a500: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x39a500u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39a504:
    // 0x39a504: 0x0  nop
    ctx->pc = 0x39a504u;
    // NOP
label_39a508:
    // 0x39a508: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_39a50c:
    if (ctx->pc == 0x39A50Cu) {
        ctx->pc = 0x39A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A508u;
        // 0x39a50c: 0x96420018  lhu         $v0, 0x18($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A510u;
        goto label_39a510;
    }
    ctx->pc = 0x39A508u;
    {
        const bool branch_taken_0x39a508 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x39a508) {
            ctx->pc = 0x39A50Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A508u;
            // 0x39a50c: 0x96420018  lhu         $v0, 0x18($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A51Cu;
            goto label_39a51c;
        }
    }
    ctx->pc = 0x39A510u;
label_39a510:
    // 0x39a510: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x39a510u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_39a514:
    // 0x39a514: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x39a514u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39a518:
    // 0x39a518: 0x96420018  lhu         $v0, 0x18($s2)
    ctx->pc = 0x39a518u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
label_39a51c:
    // 0x39a51c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x39a51cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_39a520:
    // 0x39a520: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x39a520u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39a524:
    // 0x39a524: 0x1440ff8a  bnez        $v0, . + 4 + (-0x76 << 2)
label_39a528:
    if (ctx->pc == 0x39A528u) {
        ctx->pc = 0x39A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A524u;
        // 0x39a528: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A52Cu;
        goto label_39a52c;
    }
    ctx->pc = 0x39A524u;
    {
        const bool branch_taken_0x39a524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A524u;
        // 0x39a528: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a524) {
            ctx->pc = 0x39A350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39a350;
        }
    }
    ctx->pc = 0x39A52Cu;
label_39a52c:
    // 0x39a52c: 0x6c10004  bgez        $s6, . + 4 + (0x4 << 2)
label_39a530:
    if (ctx->pc == 0x39A530u) {
        ctx->pc = 0x39A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A52Cu;
        // 0x39a530: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A534u;
        goto label_39a534;
    }
    ctx->pc = 0x39A52Cu;
    {
        const bool branch_taken_0x39a52c = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x39A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A52Cu;
        // 0x39a530: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a52c) {
            ctx->pc = 0x39A540u;
            goto label_39a540;
        }
    }
    ctx->pc = 0x39A534u;
label_39a534:
    // 0x39a534: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x39a534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39a538:
    // 0x39a538: 0x10000003  b           . + 4 + (0x3 << 2)
label_39a53c:
    if (ctx->pc == 0x39A53Cu) {
        ctx->pc = 0x39A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A538u;
        // 0x39a53c: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A540u;
        goto label_39a540;
    }
    ctx->pc = 0x39A538u;
    {
        const bool branch_taken_0x39a538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A538u;
        // 0x39a53c: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a538) {
            ctx->pc = 0x39A548u;
            goto label_39a548;
        }
    }
    ctx->pc = 0x39A540u;
label_39a540:
    // 0x39a540: 0xc0e63f8  jal         func_398FE0
label_39a544:
    if (ctx->pc == 0x39A544u) {
        ctx->pc = 0x39A544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A540u;
        // 0x39a544: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A548u;
        goto label_39a548;
    }
    ctx->pc = 0x39A540u;
    SET_GPR_U32(ctx, 31, 0x39A548u);
    ctx->pc = 0x39A544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A540u;
    // 0x39a544: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398FE0u, 0x39A540u, 0x39A548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A548u;
label_39a548:
    // 0x39a548: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x39a548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_39a54c:
    // 0x39a54c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x39a54cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_39a550:
    // 0x39a550: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x39a550u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_39a554:
    // 0x39a554: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x39a554u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_39a558:
    // 0x39a558: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x39a558u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_39a55c:
    // 0x39a55c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x39a55cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_39a560:
    // 0x39a560: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x39a560u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39a564:
    // 0x39a564: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x39a564u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39a568:
    // 0x39a568: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x39a568u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39a56c:
    // 0x39a56c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x39a56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_39a570:
    // 0x39a570: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x39a570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_39a574:
    // 0x39a574: 0x3e00008  jr          $ra
label_39a578:
    if (ctx->pc == 0x39A578u) {
        ctx->pc = 0x39A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A574u;
        // 0x39a578: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A57Cu;
        goto label_39a57c;
    }
    ctx->pc = 0x39A574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A574u;
        // 0x39a578: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A57Cu;
label_39a57c:
    // 0x39a57c: 0x0  nop
    ctx->pc = 0x39a57cu;
    // NOP
    ctx->pc = 0x39a580u;
}
