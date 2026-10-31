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

// Function: sub_0020B208
// Address: 0x20b208 - 0x20b5e8
void sub_0020B208_0x20b208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B208_0x20b208");
#endif

    switch (ctx->pc) {
        case 0x20b208u: goto label_20b208;
        case 0x20b20cu: goto label_20b20c;
        case 0x20b210u: goto label_20b210;
        case 0x20b214u: goto label_20b214;
        case 0x20b218u: goto label_20b218;
        case 0x20b21cu: goto label_20b21c;
        case 0x20b220u: goto label_20b220;
        case 0x20b224u: goto label_20b224;
        case 0x20b228u: goto label_20b228;
        case 0x20b22cu: goto label_20b22c;
        case 0x20b230u: goto label_20b230;
        case 0x20b234u: goto label_20b234;
        case 0x20b238u: goto label_20b238;
        case 0x20b23cu: goto label_20b23c;
        case 0x20b240u: goto label_20b240;
        case 0x20b244u: goto label_20b244;
        case 0x20b248u: goto label_20b248;
        case 0x20b24cu: goto label_20b24c;
        case 0x20b250u: goto label_20b250;
        case 0x20b254u: goto label_20b254;
        case 0x20b258u: goto label_20b258;
        case 0x20b25cu: goto label_20b25c;
        case 0x20b260u: goto label_20b260;
        case 0x20b264u: goto label_20b264;
        case 0x20b268u: goto label_20b268;
        case 0x20b26cu: goto label_20b26c;
        case 0x20b270u: goto label_20b270;
        case 0x20b274u: goto label_20b274;
        case 0x20b278u: goto label_20b278;
        case 0x20b27cu: goto label_20b27c;
        case 0x20b280u: goto label_20b280;
        case 0x20b284u: goto label_20b284;
        case 0x20b288u: goto label_20b288;
        case 0x20b28cu: goto label_20b28c;
        case 0x20b290u: goto label_20b290;
        case 0x20b294u: goto label_20b294;
        case 0x20b298u: goto label_20b298;
        case 0x20b29cu: goto label_20b29c;
        case 0x20b2a0u: goto label_20b2a0;
        case 0x20b2a4u: goto label_20b2a4;
        case 0x20b2a8u: goto label_20b2a8;
        case 0x20b2acu: goto label_20b2ac;
        case 0x20b2b0u: goto label_20b2b0;
        case 0x20b2b4u: goto label_20b2b4;
        case 0x20b2b8u: goto label_20b2b8;
        case 0x20b2bcu: goto label_20b2bc;
        case 0x20b2c0u: goto label_20b2c0;
        case 0x20b2c4u: goto label_20b2c4;
        case 0x20b2c8u: goto label_20b2c8;
        case 0x20b2ccu: goto label_20b2cc;
        case 0x20b2d0u: goto label_20b2d0;
        case 0x20b2d4u: goto label_20b2d4;
        case 0x20b2d8u: goto label_20b2d8;
        case 0x20b2dcu: goto label_20b2dc;
        case 0x20b2e0u: goto label_20b2e0;
        case 0x20b2e4u: goto label_20b2e4;
        case 0x20b2e8u: goto label_20b2e8;
        case 0x20b2ecu: goto label_20b2ec;
        case 0x20b2f0u: goto label_20b2f0;
        case 0x20b2f4u: goto label_20b2f4;
        case 0x20b2f8u: goto label_20b2f8;
        case 0x20b2fcu: goto label_20b2fc;
        case 0x20b300u: goto label_20b300;
        case 0x20b304u: goto label_20b304;
        case 0x20b308u: goto label_20b308;
        case 0x20b30cu: goto label_20b30c;
        case 0x20b310u: goto label_20b310;
        case 0x20b314u: goto label_20b314;
        case 0x20b318u: goto label_20b318;
        case 0x20b31cu: goto label_20b31c;
        case 0x20b320u: goto label_20b320;
        case 0x20b324u: goto label_20b324;
        case 0x20b328u: goto label_20b328;
        case 0x20b32cu: goto label_20b32c;
        case 0x20b330u: goto label_20b330;
        case 0x20b334u: goto label_20b334;
        case 0x20b338u: goto label_20b338;
        case 0x20b33cu: goto label_20b33c;
        case 0x20b340u: goto label_20b340;
        case 0x20b344u: goto label_20b344;
        case 0x20b348u: goto label_20b348;
        case 0x20b34cu: goto label_20b34c;
        case 0x20b350u: goto label_20b350;
        case 0x20b354u: goto label_20b354;
        case 0x20b358u: goto label_20b358;
        case 0x20b35cu: goto label_20b35c;
        case 0x20b360u: goto label_20b360;
        case 0x20b364u: goto label_20b364;
        case 0x20b368u: goto label_20b368;
        case 0x20b36cu: goto label_20b36c;
        case 0x20b370u: goto label_20b370;
        case 0x20b374u: goto label_20b374;
        case 0x20b378u: goto label_20b378;
        case 0x20b37cu: goto label_20b37c;
        case 0x20b380u: goto label_20b380;
        case 0x20b384u: goto label_20b384;
        case 0x20b388u: goto label_20b388;
        case 0x20b38cu: goto label_20b38c;
        case 0x20b390u: goto label_20b390;
        case 0x20b394u: goto label_20b394;
        case 0x20b398u: goto label_20b398;
        case 0x20b39cu: goto label_20b39c;
        case 0x20b3a0u: goto label_20b3a0;
        case 0x20b3a4u: goto label_20b3a4;
        case 0x20b3a8u: goto label_20b3a8;
        case 0x20b3acu: goto label_20b3ac;
        case 0x20b3b0u: goto label_20b3b0;
        case 0x20b3b4u: goto label_20b3b4;
        case 0x20b3b8u: goto label_20b3b8;
        case 0x20b3bcu: goto label_20b3bc;
        case 0x20b3c0u: goto label_20b3c0;
        case 0x20b3c4u: goto label_20b3c4;
        case 0x20b3c8u: goto label_20b3c8;
        case 0x20b3ccu: goto label_20b3cc;
        case 0x20b3d0u: goto label_20b3d0;
        case 0x20b3d4u: goto label_20b3d4;
        case 0x20b3d8u: goto label_20b3d8;
        case 0x20b3dcu: goto label_20b3dc;
        case 0x20b3e0u: goto label_20b3e0;
        case 0x20b3e4u: goto label_20b3e4;
        case 0x20b3e8u: goto label_20b3e8;
        case 0x20b3ecu: goto label_20b3ec;
        case 0x20b3f0u: goto label_20b3f0;
        case 0x20b3f4u: goto label_20b3f4;
        case 0x20b3f8u: goto label_20b3f8;
        case 0x20b3fcu: goto label_20b3fc;
        case 0x20b400u: goto label_20b400;
        case 0x20b404u: goto label_20b404;
        case 0x20b408u: goto label_20b408;
        case 0x20b40cu: goto label_20b40c;
        case 0x20b410u: goto label_20b410;
        case 0x20b414u: goto label_20b414;
        case 0x20b418u: goto label_20b418;
        case 0x20b41cu: goto label_20b41c;
        case 0x20b420u: goto label_20b420;
        case 0x20b424u: goto label_20b424;
        case 0x20b428u: goto label_20b428;
        case 0x20b42cu: goto label_20b42c;
        case 0x20b430u: goto label_20b430;
        case 0x20b434u: goto label_20b434;
        case 0x20b438u: goto label_20b438;
        case 0x20b43cu: goto label_20b43c;
        case 0x20b440u: goto label_20b440;
        case 0x20b444u: goto label_20b444;
        case 0x20b448u: goto label_20b448;
        case 0x20b44cu: goto label_20b44c;
        case 0x20b450u: goto label_20b450;
        case 0x20b454u: goto label_20b454;
        case 0x20b458u: goto label_20b458;
        case 0x20b45cu: goto label_20b45c;
        case 0x20b460u: goto label_20b460;
        case 0x20b464u: goto label_20b464;
        case 0x20b468u: goto label_20b468;
        case 0x20b46cu: goto label_20b46c;
        case 0x20b470u: goto label_20b470;
        case 0x20b474u: goto label_20b474;
        case 0x20b478u: goto label_20b478;
        case 0x20b47cu: goto label_20b47c;
        case 0x20b480u: goto label_20b480;
        case 0x20b484u: goto label_20b484;
        case 0x20b488u: goto label_20b488;
        case 0x20b48cu: goto label_20b48c;
        case 0x20b490u: goto label_20b490;
        case 0x20b494u: goto label_20b494;
        case 0x20b498u: goto label_20b498;
        case 0x20b49cu: goto label_20b49c;
        case 0x20b4a0u: goto label_20b4a0;
        case 0x20b4a4u: goto label_20b4a4;
        case 0x20b4a8u: goto label_20b4a8;
        case 0x20b4acu: goto label_20b4ac;
        case 0x20b4b0u: goto label_20b4b0;
        case 0x20b4b4u: goto label_20b4b4;
        case 0x20b4b8u: goto label_20b4b8;
        case 0x20b4bcu: goto label_20b4bc;
        case 0x20b4c0u: goto label_20b4c0;
        case 0x20b4c4u: goto label_20b4c4;
        case 0x20b4c8u: goto label_20b4c8;
        case 0x20b4ccu: goto label_20b4cc;
        case 0x20b4d0u: goto label_20b4d0;
        case 0x20b4d4u: goto label_20b4d4;
        case 0x20b4d8u: goto label_20b4d8;
        case 0x20b4dcu: goto label_20b4dc;
        case 0x20b4e0u: goto label_20b4e0;
        case 0x20b4e4u: goto label_20b4e4;
        case 0x20b4e8u: goto label_20b4e8;
        case 0x20b4ecu: goto label_20b4ec;
        case 0x20b4f0u: goto label_20b4f0;
        case 0x20b4f4u: goto label_20b4f4;
        case 0x20b4f8u: goto label_20b4f8;
        case 0x20b4fcu: goto label_20b4fc;
        case 0x20b500u: goto label_20b500;
        case 0x20b504u: goto label_20b504;
        case 0x20b508u: goto label_20b508;
        case 0x20b50cu: goto label_20b50c;
        case 0x20b510u: goto label_20b510;
        case 0x20b514u: goto label_20b514;
        case 0x20b518u: goto label_20b518;
        case 0x20b51cu: goto label_20b51c;
        case 0x20b520u: goto label_20b520;
        case 0x20b524u: goto label_20b524;
        case 0x20b528u: goto label_20b528;
        case 0x20b52cu: goto label_20b52c;
        case 0x20b530u: goto label_20b530;
        case 0x20b534u: goto label_20b534;
        case 0x20b538u: goto label_20b538;
        case 0x20b53cu: goto label_20b53c;
        case 0x20b540u: goto label_20b540;
        case 0x20b544u: goto label_20b544;
        case 0x20b548u: goto label_20b548;
        case 0x20b54cu: goto label_20b54c;
        case 0x20b550u: goto label_20b550;
        case 0x20b554u: goto label_20b554;
        case 0x20b558u: goto label_20b558;
        case 0x20b55cu: goto label_20b55c;
        case 0x20b560u: goto label_20b560;
        case 0x20b564u: goto label_20b564;
        case 0x20b568u: goto label_20b568;
        case 0x20b56cu: goto label_20b56c;
        case 0x20b570u: goto label_20b570;
        case 0x20b574u: goto label_20b574;
        case 0x20b578u: goto label_20b578;
        case 0x20b57cu: goto label_20b57c;
        case 0x20b580u: goto label_20b580;
        case 0x20b584u: goto label_20b584;
        case 0x20b588u: goto label_20b588;
        case 0x20b58cu: goto label_20b58c;
        case 0x20b590u: goto label_20b590;
        case 0x20b594u: goto label_20b594;
        case 0x20b598u: goto label_20b598;
        case 0x20b59cu: goto label_20b59c;
        case 0x20b5a0u: goto label_20b5a0;
        case 0x20b5a4u: goto label_20b5a4;
        case 0x20b5a8u: goto label_20b5a8;
        case 0x20b5acu: goto label_20b5ac;
        case 0x20b5b0u: goto label_20b5b0;
        case 0x20b5b4u: goto label_20b5b4;
        case 0x20b5b8u: goto label_20b5b8;
        case 0x20b5bcu: goto label_20b5bc;
        case 0x20b5c0u: goto label_20b5c0;
        case 0x20b5c4u: goto label_20b5c4;
        case 0x20b5c8u: goto label_20b5c8;
        case 0x20b5ccu: goto label_20b5cc;
        case 0x20b5d0u: goto label_20b5d0;
        case 0x20b5d4u: goto label_20b5d4;
        case 0x20b5d8u: goto label_20b5d8;
        case 0x20b5dcu: goto label_20b5dc;
        case 0x20b5e0u: goto label_20b5e0;
        case 0x20b5e4u: goto label_20b5e4;
        default: break;
    }

    ctx->pc = 0x20b208u;

label_20b208:
    // 0x20b208: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x20b208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_20b20c:
    // 0x20b20c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x20b20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_20b210:
    // 0x20b210: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x20b210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_20b214:
    // 0x20b214: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20b214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20b218:
    // 0x20b218: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x20b218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_20b21c:
    // 0x20b21c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x20b21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_20b220:
    // 0x20b220: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x20b220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_20b224:
    // 0x20b224: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20b224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_20b228:
    // 0x20b228: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20b228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_20b22c:
    // 0x20b22c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x20b22cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_20b230:
    // 0x20b230: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x20b230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_20b234:
    // 0x20b234: 0x144000e3  bnez        $v0, . + 4 + (0xE3 << 2)
label_20b238:
    if (ctx->pc == 0x20B238u) {
        ctx->pc = 0x20B238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B234u;
        // 0x20b238: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B23Cu;
        goto label_20b23c;
    }
    ctx->pc = 0x20B234u;
    {
        const bool branch_taken_0x20b234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B234u;
        // 0x20b238: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b234) {
            ctx->pc = 0x20B5C4u;
            goto label_20b5c4;
        }
    }
    ctx->pc = 0x20B23Cu;
label_20b23c:
    // 0x20b23c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x20b23cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_20b240:
    // 0x20b240: 0x240205dc  addiu       $v0, $zero, 0x5DC
    ctx->pc = 0x20b240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
label_20b244:
    // 0x20b244: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x20b244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_20b248:
    // 0x20b248: 0xae220094  sw          $v0, 0x94($s1)
    ctx->pc = 0x20b248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
label_20b24c:
    // 0x20b24c: 0xae20008c  sw          $zero, 0x8C($s1)
    ctx->pc = 0x20b24cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
label_20b250:
    // 0x20b250: 0xae200090  sw          $zero, 0x90($s1)
    ctx->pc = 0x20b250u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
label_20b254:
    // 0x20b254: 0xae200098  sw          $zero, 0x98($s1)
    ctx->pc = 0x20b254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
label_20b258:
    // 0x20b258: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20b258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20b25c:
    // 0x20b25c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x20b25cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_20b260:
    // 0x20b260: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x20b260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_20b264:
    // 0x20b264: 0x40f809  jalr        $v0
label_20b268:
    if (ctx->pc == 0x20B268u) {
        ctx->pc = 0x20B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B264u;
        // 0x20b268: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B26Cu;
        goto label_20b26c;
    }
    ctx->pc = 0x20B264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B26Cu);
        ctx->pc = 0x20B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B264u;
        // 0x20b268: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B264u, 0x20B26Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B26Cu;
label_20b26c:
    // 0x20b26c: 0xc080ebe  jal         func_203AF8
label_20b270:
    if (ctx->pc == 0x20B270u) {
        ctx->pc = 0x20B270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B26Cu;
        // 0x20b270: 0xae22009c  sw          $v0, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B274u;
        goto label_20b274;
    }
    ctx->pc = 0x20B26Cu;
    SET_GPR_U32(ctx, 31, 0x20B274u);
    ctx->pc = 0x20B270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B26Cu;
    // 0x20b270: 0xae22009c  sw          $v0, 0x9C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x20B26Cu, 0x20B274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B274u;
label_20b274:
    // 0x20b274: 0x3c013f3d  lui         $at, 0x3F3D
    ctx->pc = 0x20b274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16189 << 16));
label_20b278:
    // 0x20b278: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x20b278u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
label_20b27c:
    // 0x20b27c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20b27cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20b280:
    // 0x20b280: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x20b280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_20b284:
    // 0x20b284: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20b284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20b288:
    // 0x20b288: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20b288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20b28c:
    // 0x20b28c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x20b28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_20b290:
    // 0x20b290: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x20b290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_20b294:
    // 0x20b294: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x20b294u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20b298:
    // 0x20b298: 0x8c64cdb4  lw          $a0, -0x324C($v1)
    ctx->pc = 0x20b298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954420)));
label_20b29c:
    // 0x20b29c: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x20b29cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_20b2a0:
    // 0x20b2a0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x20b2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_20b2a4:
    // 0x20b2a4: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x20b2a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_20b2a8:
    // 0x20b2a8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x20b2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20b2ac:
    // 0x20b2ac: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x20b2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_20b2b0:
    // 0x20b2b0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_20b2b4:
    if (ctx->pc == 0x20B2B4u) {
        ctx->pc = 0x20B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B2B0u;
        // 0x20b2b4: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B2B8u;
        goto label_20b2b8;
    }
    ctx->pc = 0x20B2B0u;
    {
        const bool branch_taken_0x20b2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B2B0u;
        // 0x20b2b4: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b2b0) {
            ctx->pc = 0x20B2E8u;
            goto label_20b2e8;
        }
    }
    ctx->pc = 0x20B2B8u;
label_20b2b8:
    // 0x20b2b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_20b2bc:
    if (ctx->pc == 0x20B2BCu) {
        ctx->pc = 0x20B2C0u;
        goto label_20b2c0;
    }
    ctx->pc = 0x20B2B8u;
    {
        const bool branch_taken_0x20b2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b2b8) {
            ctx->pc = 0x20B2D4u;
            goto label_20b2d4;
        }
    }
    ctx->pc = 0x20B2C0u;
label_20b2c0:
    // 0x20b2c0: 0x3c013f2f  lui         $at, 0x3F2F
    ctx->pc = 0x20b2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16175 << 16));
label_20b2c4:
    // 0x20b2c4: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x20b2c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_20b2c8:
    // 0x20b2c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20b2c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20b2cc:
    // 0x20b2cc: 0x10000014  b           . + 4 + (0x14 << 2)
label_20b2d0:
    if (ctx->pc == 0x20B2D0u) {
        ctx->pc = 0x20B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B2CCu;
        // 0x20b2d0: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B2D4u;
        goto label_20b2d4;
    }
    ctx->pc = 0x20B2CCu;
    {
        const bool branch_taken_0x20b2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B2CCu;
        // 0x20b2d0: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b2cc) {
            ctx->pc = 0x20B320u;
            goto label_20b320;
        }
    }
    ctx->pc = 0x20B2D4u;
label_20b2d4:
    // 0x20b2d4: 0x3c013f2e  lui         $at, 0x3F2E
    ctx->pc = 0x20b2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16174 << 16));
label_20b2d8:
    // 0x20b2d8: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x20b2d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_20b2dc:
    // 0x20b2dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20b2dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20b2e0:
    // 0x20b2e0: 0x1000000f  b           . + 4 + (0xF << 2)
label_20b2e4:
    if (ctx->pc == 0x20B2E4u) {
        ctx->pc = 0x20B2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B2E0u;
        // 0x20b2e4: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B2E8u;
        goto label_20b2e8;
    }
    ctx->pc = 0x20B2E0u;
    {
        const bool branch_taken_0x20b2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B2E0u;
        // 0x20b2e4: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b2e0) {
            ctx->pc = 0x20B320u;
            goto label_20b320;
        }
    }
    ctx->pc = 0x20B2E8u;
label_20b2e8:
    // 0x20b2e8: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x20b2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
label_20b2ec:
    // 0x20b2ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_20b2f0:
    if (ctx->pc == 0x20B2F0u) {
        ctx->pc = 0x20B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B2ECu;
        // 0x20b2f0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B2F4u;
        goto label_20b2f4;
    }
    ctx->pc = 0x20B2ECu;
    {
        const bool branch_taken_0x20b2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B2ECu;
        // 0x20b2f0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b2ec) {
            ctx->pc = 0x20B300u;
            goto label_20b300;
        }
    }
    ctx->pc = 0x20B2F4u;
label_20b2f4:
    // 0x20b2f4: 0xc440f66c  lwc1        $f0, -0x994($v0)
    ctx->pc = 0x20b2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b2f8:
    // 0x20b2f8: 0x10000009  b           . + 4 + (0x9 << 2)
label_20b2fc:
    if (ctx->pc == 0x20B2FCu) {
        ctx->pc = 0x20B2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B2F8u;
        // 0x20b2fc: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B300u;
        goto label_20b300;
    }
    ctx->pc = 0x20B2F8u;
    {
        const bool branch_taken_0x20b2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B2F8u;
        // 0x20b2fc: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b2f8) {
            ctx->pc = 0x20B320u;
            goto label_20b320;
        }
    }
    ctx->pc = 0x20B300u;
label_20b300:
    // 0x20b300: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x20b300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_20b304:
    // 0x20b304: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_20b308:
    if (ctx->pc == 0x20B308u) {
        ctx->pc = 0x20B308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B304u;
        // 0x20b308: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B30Cu;
        goto label_20b30c;
    }
    ctx->pc = 0x20B304u;
    {
        const bool branch_taken_0x20b304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b304) {
            ctx->pc = 0x20B308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B304u;
            // 0x20b308: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B320u;
            goto label_20b320;
        }
    }
    ctx->pc = 0x20B30Cu;
label_20b30c:
    // 0x20b30c: 0x3c013f38  lui         $at, 0x3F38
    ctx->pc = 0x20b30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16184 << 16));
label_20b310:
    // 0x20b310: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x20b310u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_20b314:
    // 0x20b314: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20b314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20b318:
    // 0x20b318: 0x0  nop
    ctx->pc = 0x20b318u;
    // NOP
label_20b31c:
    // 0x20b31c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x20b31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_20b320:
    // 0x20b320: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x20b320u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_20b324:
    // 0x20b324: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x20b324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_20b328:
    // 0x20b328: 0x8e8b27e4  lw          $t3, 0x27E4($s4)
    ctx->pc = 0x20b328u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_20b32c:
    // 0x20b32c: 0x245391e0  addiu       $s3, $v0, -0x6E20
    ctx->pc = 0x20b32cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939104));
label_20b330:
    // 0x20b330: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x20b330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20b334:
    // 0x20b334: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x20b334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_20b338:
    // 0x20b338: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x20b338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_20b33c:
    // 0x20b33c: 0x24a591d0  addiu       $a1, $a1, -0x6E30
    ctx->pc = 0x20b33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939088));
label_20b340:
    // 0x20b340: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x20b340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20b344:
    // 0x20b344: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x20b344u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20b348:
    // 0x20b348: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x20b348u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_20b34c:
    // 0x20b34c: 0x24090058  addiu       $t1, $zero, 0x58
    ctx->pc = 0x20b34cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_20b350:
    // 0x20b350: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x20b350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_20b354:
    // 0x20b354: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20b354u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b358:
    // 0x20b358: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x20b358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_20b35c:
    // 0x20b35c: 0x40f809  jalr        $v0
label_20b360:
    if (ctx->pc == 0x20B360u) {
        ctx->pc = 0x20B360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B35Cu;
        // 0x20b360: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B364u;
        goto label_20b364;
    }
    ctx->pc = 0x20B35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B364u);
        ctx->pc = 0x20B360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B35Cu;
        // 0x20b360: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B35Cu, 0x20B364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B364u;
label_20b364:
    // 0x20b364: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_20b368:
    if (ctx->pc == 0x20B368u) {
        ctx->pc = 0x20B36Cu;
        goto label_20b36c;
    }
    ctx->pc = 0x20B364u;
    {
        const bool branch_taken_0x20b364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b364) {
            ctx->pc = 0x20B374u;
            goto label_20b374;
        }
    }
    ctx->pc = 0x20B36Cu;
label_20b36c:
    // 0x20b36c: 0xc0733e2  jal         func_1CCF88
label_20b370:
    if (ctx->pc == 0x20B370u) {
        ctx->pc = 0x20B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B36Cu;
        // 0x20b370: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B374u;
        goto label_20b374;
    }
    ctx->pc = 0x20B36Cu;
    SET_GPR_U32(ctx, 31, 0x20B374u);
    ctx->pc = 0x20B370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B36Cu;
    // 0x20b370: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x20B36Cu, 0x20B374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B374u;
label_20b374:
    // 0x20b374: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x20b374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_20b378:
    // 0x20b378: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x20b378u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_20b37c:
    // 0x20b37c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x20b37cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_20b380:
    // 0x20b380: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x20b380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_20b384:
    // 0x20b384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20b384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20b388:
    // 0x20b388: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x20b388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_20b38c:
    // 0x20b38c: 0xc05e602  jal         func_179808
label_20b390:
    if (ctx->pc == 0x20B390u) {
        ctx->pc = 0x20B390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B38Cu;
        // 0x20b390: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B394u;
        goto label_20b394;
    }
    ctx->pc = 0x20B38Cu;
    SET_GPR_U32(ctx, 31, 0x20B394u);
    ctx->pc = 0x20B390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B38Cu;
    // 0x20b390: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x20B38Cu, 0x20B394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B394u;
label_20b394:
    // 0x20b394: 0x8e2a00a0  lw          $t2, 0xA0($s1)
    ctx->pc = 0x20b394u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_20b398:
    // 0x20b398: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x20b398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_20b39c:
    // 0x20b39c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20b39cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20b3a0:
    // 0x20b3a0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x20b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_20b3a4:
    // 0x20b3a4: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x20b3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_20b3a8:
    // 0x20b3a8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x20b3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_20b3ac:
    // 0x20b3ac: 0x8c50d328  lw          $s0, -0x2CD8($v0)
    ctx->pc = 0x20b3acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955816)));
label_20b3b0:
    // 0x20b3b0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x20b3b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b3b4:
    // 0x20b3b4: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x20b3b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_20b3b8:
    // 0x20b3b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20b3b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b3bc:
    // 0x20b3bc: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x20b3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_20b3c0:
    // 0x20b3c0: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x20b3c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20b3c4:
    // 0x20b3c4: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x20b3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_20b3c8:
    // 0x20b3c8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x20b3c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20b3cc:
    // 0x20b3cc: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x20b3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_20b3d0:
    // 0x20b3d0: 0x40f809  jalr        $v0
label_20b3d4:
    if (ctx->pc == 0x20B3D4u) {
        ctx->pc = 0x20B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B3D0u;
        // 0x20b3d4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B3D8u;
        goto label_20b3d8;
    }
    ctx->pc = 0x20B3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B3D8u);
        ctx->pc = 0x20B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B3D0u;
        // 0x20b3d4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B3D0u, 0x20B3D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B3D8u;
label_20b3d8:
    // 0x20b3d8: 0xc067b9c  jal         func_19EE70
label_20b3dc:
    if (ctx->pc == 0x20B3DCu) {
        ctx->pc = 0x20B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B3D8u;
        // 0x20b3dc: 0x24040077  addiu       $a0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B3E0u;
        goto label_20b3e0;
    }
    ctx->pc = 0x20B3D8u;
    SET_GPR_U32(ctx, 31, 0x20B3E0u);
    ctx->pc = 0x20B3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B3D8u;
    // 0x20b3dc: 0x24040077  addiu       $a0, $zero, 0x77 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x20B3D8u, 0x20B3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B3E0u;
label_20b3e0:
    // 0x20b3e0: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x20b3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_20b3e4:
    // 0x20b3e4: 0xc073478  jal         func_1CD1E0
label_20b3e8:
    if (ctx->pc == 0x20B3E8u) {
        ctx->pc = 0x20B3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B3E4u;
        // 0x20b3e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B3ECu;
        goto label_20b3ec;
    }
    ctx->pc = 0x20B3E4u;
    SET_GPR_U32(ctx, 31, 0x20B3ECu);
    ctx->pc = 0x20B3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B3E4u;
    // 0x20b3e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x20B3E4u, 0x20B3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B3ECu;
label_20b3ec:
    // 0x20b3ec: 0x8e2600a0  lw          $a2, 0xA0($s1)
    ctx->pc = 0x20b3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_20b3f0:
    // 0x20b3f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20b3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b3f4:
    // 0x20b3f4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x20b3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_20b3f8:
    // 0x20b3f8: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x20b3f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_20b3fc:
    // 0x20b3fc: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x20b3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_20b400:
    // 0x20b400: 0x60f809  jalr        $v1
label_20b404:
    if (ctx->pc == 0x20B404u) {
        ctx->pc = 0x20B404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B400u;
        // 0x20b404: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B408u;
        goto label_20b408;
    }
    ctx->pc = 0x20B400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20B408u);
        ctx->pc = 0x20B404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B400u;
        // 0x20b404: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B400u, 0x20B408u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B408u;
label_20b408:
    // 0x20b408: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20b408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20b40c:
    // 0x20b40c: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x20b40cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_20b410:
    // 0x20b410: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x20b410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_20b414:
    // 0x20b414: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x20b414u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20b418:
    // 0x20b418: 0x24a59220  addiu       $a1, $a1, -0x6DE0
    ctx->pc = 0x20b418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939168));
label_20b41c:
    // 0x20b41c: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x20b41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_20b420:
    // 0x20b420: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x20b420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_20b424:
    // 0x20b424: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x20b424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20b428:
    // 0x20b428: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x20b428u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20b42c:
    // 0x20b42c: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x20b42cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_20b430:
    // 0x20b430: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x20b430u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_20b434:
    // 0x20b434: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20b434u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b438:
    // 0x20b438: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x20b438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_20b43c:
    // 0x20b43c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20b43cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b440:
    // 0x20b440: 0x40f809  jalr        $v0
label_20b444:
    if (ctx->pc == 0x20B444u) {
        ctx->pc = 0x20B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B440u;
        // 0x20b444: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B448u;
        goto label_20b448;
    }
    ctx->pc = 0x20B440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B448u);
        ctx->pc = 0x20B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B440u;
        // 0x20b444: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B440u, 0x20B448u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B448u;
label_20b448:
    // 0x20b448: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_20b44c:
    if (ctx->pc == 0x20B44Cu) {
        ctx->pc = 0x20B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B448u;
        // 0x20b44c: 0xae2200a4  sw          $v0, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B450u;
        goto label_20b450;
    }
    ctx->pc = 0x20B448u;
    {
        const bool branch_taken_0x20b448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b448) {
            ctx->pc = 0x20B44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B448u;
            // 0x20b44c: 0xae2200a4  sw          $v0, 0xA4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B45Cu;
            goto label_20b45c;
        }
    }
    ctx->pc = 0x20B450u;
label_20b450:
    // 0x20b450: 0xc074fbc  jal         func_1D3EF0
label_20b454:
    if (ctx->pc == 0x20B454u) {
        ctx->pc = 0x20B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B450u;
        // 0x20b454: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B458u;
        goto label_20b458;
    }
    ctx->pc = 0x20B450u;
    SET_GPR_U32(ctx, 31, 0x20B458u);
    ctx->pc = 0x20B454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B450u;
    // 0x20b454: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3EF0u, 0x20B450u, 0x20B458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B458u;
label_20b458:
    // 0x20b458: 0xae2200a4  sw          $v0, 0xA4($s1)
    ctx->pc = 0x20b458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
label_20b45c:
    // 0x20b45c: 0xc080ec6  jal         func_203B18
label_20b460:
    if (ctx->pc == 0x20B460u) {
        ctx->pc = 0x20B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B45Cu;
        // 0x20b460: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B464u;
        goto label_20b464;
    }
    ctx->pc = 0x20B45Cu;
    SET_GPR_U32(ctx, 31, 0x20B464u);
    ctx->pc = 0x20B460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B45Cu;
    // 0x20b460: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B18u, 0x20B45Cu, 0x20B464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B464u;
label_20b464:
    // 0x20b464: 0x8e2400a4  lw          $a0, 0xA4($s1)
    ctx->pc = 0x20b464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_20b468:
    // 0x20b468: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x20b468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20b46c:
    // 0x20b46c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x20b46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_20b470:
    // 0x20b470: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x20b470u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_20b474:
    // 0x20b474: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20b474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b478:
    // 0x20b478: 0xc075044  jal         func_1D4110
label_20b47c:
    if (ctx->pc == 0x20B47Cu) {
        ctx->pc = 0x20B47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B478u;
        // 0x20b47c: 0x26270050  addiu       $a3, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B480u;
        goto label_20b480;
    }
    ctx->pc = 0x20B478u;
    SET_GPR_U32(ctx, 31, 0x20B480u);
    ctx->pc = 0x20B47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B478u;
    // 0x20b47c: 0x26270050  addiu       $a3, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4110u, 0x20B478u, 0x20B480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B480u;
label_20b480:
    // 0x20b480: 0xc080ebe  jal         func_203AF8
label_20b484:
    if (ctx->pc == 0x20B484u) {
        ctx->pc = 0x20B488u;
        goto label_20b488;
    }
    ctx->pc = 0x20B480u;
    SET_GPR_U32(ctx, 31, 0x20B488u);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x20B480u, 0x20B488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B488u;
label_20b488:
    // 0x20b488: 0x8e2300a4  lw          $v1, 0xA4($s1)
    ctx->pc = 0x20b488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_20b48c:
    // 0x20b48c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x20b48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20b490:
    // 0x20b490: 0x2404008d  addiu       $a0, $zero, 0x8D
    ctx->pc = 0x20b490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
label_20b494:
    // 0x20b494: 0xe460008c  swc1        $f0, 0x8C($v1)
    ctx->pc = 0x20b494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 140), bits); }
label_20b498:
    // 0x20b498: 0xac720088  sw          $s2, 0x88($v1)
    ctx->pc = 0x20b498u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 18));
label_20b49c:
    // 0x20b49c: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x20b49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_20b4a0:
    // 0x20b4a0: 0xc067b9c  jal         func_19EE70
label_20b4a4:
    if (ctx->pc == 0x20B4A4u) {
        ctx->pc = 0x20B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B4A0u;
        // 0x20b4a4: 0xac450094  sw          $a1, 0x94($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B4A8u;
        goto label_20b4a8;
    }
    ctx->pc = 0x20B4A0u;
    SET_GPR_U32(ctx, 31, 0x20B4A8u);
    ctx->pc = 0x20B4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B4A0u;
    // 0x20b4a4: 0xac450094  sw          $a1, 0x94($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x20B4A0u, 0x20B4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B4A8u;
label_20b4a8:
    // 0x20b4a8: 0x8e2400a4  lw          $a0, 0xA4($s1)
    ctx->pc = 0x20b4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_20b4ac:
    // 0x20b4ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x20b4acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_20b4b0:
    // 0x20b4b0: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x20b4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_20b4b4:
    // 0x20b4b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20b4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20b4b8:
    // 0x20b4b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20b4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b4bc:
    // 0x20b4bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20b4bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b4c0:
    // 0x20b4c0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x20b4c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20b4c4:
    // 0x20b4c4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x20b4c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b4c8:
    // 0x20b4c8: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x20b4c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20b4cc:
    // 0x20b4cc: 0xc07508c  jal         func_1D4230
label_20b4d0:
    if (ctx->pc == 0x20B4D0u) {
        ctx->pc = 0x20B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B4CCu;
        // 0x20b4d0: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B4D4u;
        goto label_20b4d4;
    }
    ctx->pc = 0x20B4CCu;
    SET_GPR_U32(ctx, 31, 0x20B4D4u);
    ctx->pc = 0x20B4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B4CCu;
    // 0x20b4d0: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x20B4CCu, 0x20B4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B4D4u;
label_20b4d4:
    // 0x20b4d4: 0xc067b9c  jal         func_19EE70
label_20b4d8:
    if (ctx->pc == 0x20B4D8u) {
        ctx->pc = 0x20B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B4D4u;
        // 0x20b4d8: 0x2404008e  addiu       $a0, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B4DCu;
        goto label_20b4dc;
    }
    ctx->pc = 0x20B4D4u;
    SET_GPR_U32(ctx, 31, 0x20B4DCu);
    ctx->pc = 0x20B4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B4D4u;
    // 0x20b4d8: 0x2404008e  addiu       $a0, $zero, 0x8E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x20B4D4u, 0x20B4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B4DCu;
label_20b4dc:
    // 0x20b4dc: 0x8e2400a4  lw          $a0, 0xA4($s1)
    ctx->pc = 0x20b4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_20b4e0:
    // 0x20b4e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20b4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20b4e4:
    // 0x20b4e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x20b4e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_20b4e8:
    // 0x20b4e8: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x20b4e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20b4ec:
    // 0x20b4ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20b4ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b4f0:
    // 0x20b4f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20b4f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b4f4:
    // 0x20b4f4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x20b4f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20b4f8:
    // 0x20b4f8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x20b4f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b4fc:
    // 0x20b4fc: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x20b4fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_20b500:
    // 0x20b500: 0xc07508c  jal         func_1D4230
label_20b504:
    if (ctx->pc == 0x20B504u) {
        ctx->pc = 0x20B504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B500u;
        // 0x20b504: 0xafb20000  sw          $s2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B508u;
        goto label_20b508;
    }
    ctx->pc = 0x20B500u;
    SET_GPR_U32(ctx, 31, 0x20B508u);
    ctx->pc = 0x20B504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B500u;
    // 0x20b504: 0xafb20000  sw          $s2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x20B500u, 0x20B508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B508u;
label_20b508:
    // 0x20b508: 0x8e2500a4  lw          $a1, 0xA4($s1)
    ctx->pc = 0x20b508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_20b50c:
    // 0x20b50c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20b50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20b510:
    // 0x20b510: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x20b510u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_20b514:
    // 0x20b514: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x20b514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_20b518:
    // 0x20b518: 0x60f809  jalr        $v1
label_20b51c:
    if (ctx->pc == 0x20B51Cu) {
        ctx->pc = 0x20B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B518u;
        // 0x20b51c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B520u;
        goto label_20b520;
    }
    ctx->pc = 0x20B518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20B520u);
        ctx->pc = 0x20B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B518u;
        // 0x20b51c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B518u, 0x20B520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B520u;
label_20b520:
    // 0x20b520: 0xc080ebe  jal         func_203AF8
label_20b524:
    if (ctx->pc == 0x20B524u) {
        ctx->pc = 0x20B528u;
        goto label_20b528;
    }
    ctx->pc = 0x20B520u;
    SET_GPR_U32(ctx, 31, 0x20B528u);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x20B520u, 0x20B528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B528u;
label_20b528:
    // 0x20b528: 0xc080ec2  jal         func_203B08
label_20b52c:
    if (ctx->pc == 0x20B52Cu) {
        ctx->pc = 0x20B52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B528u;
        // 0x20b52c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B530u;
        goto label_20b530;
    }
    ctx->pc = 0x20B528u;
    SET_GPR_U32(ctx, 31, 0x20B530u);
    ctx->pc = 0x20B52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B528u;
    // 0x20b52c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B08u, 0x20B528u, 0x20B530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B530u;
label_20b530:
    // 0x20b530: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20b530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20b534:
    // 0x20b534: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20b534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20b538:
    // 0x20b538: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x20b538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20b53c:
    // 0x20b53c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x20b53cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_20b540:
    // 0x20b540: 0x24a59230  addiu       $a1, $a1, -0x6DD0
    ctx->pc = 0x20b540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939184));
label_20b544:
    // 0x20b544: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x20b544u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_20b548:
    // 0x20b548: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x20b548u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20b54c:
    // 0x20b54c: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x20b54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_20b550:
    // 0x20b550: 0x240602d0  addiu       $a2, $zero, 0x2D0
    ctx->pc = 0x20b550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
label_20b554:
    // 0x20b554: 0xe6a1000c  swc1        $f1, 0xC($s5)
    ctx->pc = 0x20b554u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_20b558:
    // 0x20b558: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x20b558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20b55c:
    // 0x20b55c: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x20b55cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_20b560:
    // 0x20b560: 0x2409006b  addiu       $t1, $zero, 0x6B
    ctx->pc = 0x20b560u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
label_20b564:
    // 0x20b564: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20b564u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b568:
    // 0x20b568: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20b568u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b56c:
    // 0x20b56c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x20b56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_20b570:
    // 0x20b570: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x20b570u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_20b574:
    // 0x20b574: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x20b574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_20b578:
    // 0x20b578: 0x40f809  jalr        $v0
label_20b57c:
    if (ctx->pc == 0x20B57Cu) {
        ctx->pc = 0x20B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B578u;
        // 0x20b57c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B580u;
        goto label_20b580;
    }
    ctx->pc = 0x20B578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B580u);
        ctx->pc = 0x20B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B578u;
        // 0x20b57c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B578u, 0x20B580u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B580u;
label_20b580:
    // 0x20b580: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_20b584:
    if (ctx->pc == 0x20B584u) {
        ctx->pc = 0x20B584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B580u;
        // 0x20b584: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B588u;
        goto label_20b588;
    }
    ctx->pc = 0x20B580u;
    {
        const bool branch_taken_0x20b580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b580) {
            ctx->pc = 0x20B584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B580u;
            // 0x20b584: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B594u;
            goto label_20b594;
        }
    }
    ctx->pc = 0x20B588u;
label_20b588:
    // 0x20b588: 0xc073a9c  jal         func_1CEA70
label_20b58c:
    if (ctx->pc == 0x20B58Cu) {
        ctx->pc = 0x20B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B588u;
        // 0x20b58c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B590u;
        goto label_20b590;
    }
    ctx->pc = 0x20B588u;
    SET_GPR_U32(ctx, 31, 0x20B590u);
    ctx->pc = 0x20B58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B588u;
    // 0x20b58c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA70u, 0x20B588u, 0x20B590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B590u;
label_20b590:
    // 0x20b590: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x20b590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20b594:
    // 0x20b594: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20b594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20b598:
    // 0x20b598: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20b598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b59c:
    // 0x20b59c: 0xc073ad0  jal         func_1CEB40
label_20b5a0:
    if (ctx->pc == 0x20B5A0u) {
        ctx->pc = 0x20B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B59Cu;
        // 0x20b5a0: 0xae2200a8  sw          $v0, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B5A4u;
        goto label_20b5a4;
    }
    ctx->pc = 0x20B59Cu;
    SET_GPR_U32(ctx, 31, 0x20B5A4u);
    ctx->pc = 0x20B5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B59Cu;
    // 0x20b5a0: 0xae2200a8  sw          $v0, 0xA8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB40u, 0x20B59Cu, 0x20B5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B5A4u;
label_20b5a4:
    // 0x20b5a4: 0xc067b9c  jal         func_19EE70
label_20b5a8:
    if (ctx->pc == 0x20B5A8u) {
        ctx->pc = 0x20B5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B5A4u;
        // 0x20b5a8: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B5ACu;
        goto label_20b5ac;
    }
    ctx->pc = 0x20B5A4u;
    SET_GPR_U32(ctx, 31, 0x20B5ACu);
    ctx->pc = 0x20B5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B5A4u;
    // 0x20b5a8: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x20B5A4u, 0x20B5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B5ACu;
label_20b5ac:
    // 0x20b5ac: 0x8e2400a8  lw          $a0, 0xA8($s1)
    ctx->pc = 0x20b5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_20b5b0:
    // 0x20b5b0: 0xc073b0a  jal         func_1CEC28
label_20b5b4:
    if (ctx->pc == 0x20B5B4u) {
        ctx->pc = 0x20B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B5B0u;
        // 0x20b5b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B5B8u;
        goto label_20b5b8;
    }
    ctx->pc = 0x20B5B0u;
    SET_GPR_U32(ctx, 31, 0x20B5B8u);
    ctx->pc = 0x20B5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B5B0u;
    // 0x20b5b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x20B5B0u, 0x20B5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B5B8u;
label_20b5b8:
    // 0x20b5b8: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x20b5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_20b5bc:
    // 0x20b5bc: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x20b5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_20b5c0:
    // 0x20b5c0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x20b5c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_20b5c4:
    // 0x20b5c4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x20b5c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20b5c8:
    // 0x20b5c8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x20b5c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20b5cc:
    // 0x20b5cc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x20b5ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20b5d0:
    // 0x20b5d0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x20b5d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20b5d4:
    // 0x20b5d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x20b5d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20b5d8:
    // 0x20b5d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20b5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_20b5dc:
    // 0x20b5dc: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x20b5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20b5e0:
    // 0x20b5e0: 0x3e00008  jr          $ra
label_20b5e4:
    if (ctx->pc == 0x20B5E4u) {
        ctx->pc = 0x20B5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B5E0u;
        // 0x20b5e4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B5E8u;
        goto label_fallthrough_0x20b5e0;
    }
    ctx->pc = 0x20B5E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B5E0u;
        // 0x20b5e4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B5E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20b5e0:
    ctx->pc = 0x20B5E8u;
}
