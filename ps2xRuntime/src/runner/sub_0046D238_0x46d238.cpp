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

// Function: sub_0046D238
// Address: 0x46d238 - 0x46d640
void sub_0046D238_0x46d238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046D238_0x46d238");
#endif

    switch (ctx->pc) {
        case 0x46d238u: goto label_46d238;
        case 0x46d23cu: goto label_46d23c;
        case 0x46d240u: goto label_46d240;
        case 0x46d244u: goto label_46d244;
        case 0x46d248u: goto label_46d248;
        case 0x46d24cu: goto label_46d24c;
        case 0x46d250u: goto label_46d250;
        case 0x46d254u: goto label_46d254;
        case 0x46d258u: goto label_46d258;
        case 0x46d25cu: goto label_46d25c;
        case 0x46d260u: goto label_46d260;
        case 0x46d264u: goto label_46d264;
        case 0x46d268u: goto label_46d268;
        case 0x46d26cu: goto label_46d26c;
        case 0x46d270u: goto label_46d270;
        case 0x46d274u: goto label_46d274;
        case 0x46d278u: goto label_46d278;
        case 0x46d27cu: goto label_46d27c;
        case 0x46d280u: goto label_46d280;
        case 0x46d284u: goto label_46d284;
        case 0x46d288u: goto label_46d288;
        case 0x46d28cu: goto label_46d28c;
        case 0x46d290u: goto label_46d290;
        case 0x46d294u: goto label_46d294;
        case 0x46d298u: goto label_46d298;
        case 0x46d29cu: goto label_46d29c;
        case 0x46d2a0u: goto label_46d2a0;
        case 0x46d2a4u: goto label_46d2a4;
        case 0x46d2a8u: goto label_46d2a8;
        case 0x46d2acu: goto label_46d2ac;
        case 0x46d2b0u: goto label_46d2b0;
        case 0x46d2b4u: goto label_46d2b4;
        case 0x46d2b8u: goto label_46d2b8;
        case 0x46d2bcu: goto label_46d2bc;
        case 0x46d2c0u: goto label_46d2c0;
        case 0x46d2c4u: goto label_46d2c4;
        case 0x46d2c8u: goto label_46d2c8;
        case 0x46d2ccu: goto label_46d2cc;
        case 0x46d2d0u: goto label_46d2d0;
        case 0x46d2d4u: goto label_46d2d4;
        case 0x46d2d8u: goto label_46d2d8;
        case 0x46d2dcu: goto label_46d2dc;
        case 0x46d2e0u: goto label_46d2e0;
        case 0x46d2e4u: goto label_46d2e4;
        case 0x46d2e8u: goto label_46d2e8;
        case 0x46d2ecu: goto label_46d2ec;
        case 0x46d2f0u: goto label_46d2f0;
        case 0x46d2f4u: goto label_46d2f4;
        case 0x46d2f8u: goto label_46d2f8;
        case 0x46d2fcu: goto label_46d2fc;
        case 0x46d300u: goto label_46d300;
        case 0x46d304u: goto label_46d304;
        case 0x46d308u: goto label_46d308;
        case 0x46d30cu: goto label_46d30c;
        case 0x46d310u: goto label_46d310;
        case 0x46d314u: goto label_46d314;
        case 0x46d318u: goto label_46d318;
        case 0x46d31cu: goto label_46d31c;
        case 0x46d320u: goto label_46d320;
        case 0x46d324u: goto label_46d324;
        case 0x46d328u: goto label_46d328;
        case 0x46d32cu: goto label_46d32c;
        case 0x46d330u: goto label_46d330;
        case 0x46d334u: goto label_46d334;
        case 0x46d338u: goto label_46d338;
        case 0x46d33cu: goto label_46d33c;
        case 0x46d340u: goto label_46d340;
        case 0x46d344u: goto label_46d344;
        case 0x46d348u: goto label_46d348;
        case 0x46d34cu: goto label_46d34c;
        case 0x46d350u: goto label_46d350;
        case 0x46d354u: goto label_46d354;
        case 0x46d358u: goto label_46d358;
        case 0x46d35cu: goto label_46d35c;
        case 0x46d360u: goto label_46d360;
        case 0x46d364u: goto label_46d364;
        case 0x46d368u: goto label_46d368;
        case 0x46d36cu: goto label_46d36c;
        case 0x46d370u: goto label_46d370;
        case 0x46d374u: goto label_46d374;
        case 0x46d378u: goto label_46d378;
        case 0x46d37cu: goto label_46d37c;
        case 0x46d380u: goto label_46d380;
        case 0x46d384u: goto label_46d384;
        case 0x46d388u: goto label_46d388;
        case 0x46d38cu: goto label_46d38c;
        case 0x46d390u: goto label_46d390;
        case 0x46d394u: goto label_46d394;
        case 0x46d398u: goto label_46d398;
        case 0x46d39cu: goto label_46d39c;
        case 0x46d3a0u: goto label_46d3a0;
        case 0x46d3a4u: goto label_46d3a4;
        case 0x46d3a8u: goto label_46d3a8;
        case 0x46d3acu: goto label_46d3ac;
        case 0x46d3b0u: goto label_46d3b0;
        case 0x46d3b4u: goto label_46d3b4;
        case 0x46d3b8u: goto label_46d3b8;
        case 0x46d3bcu: goto label_46d3bc;
        case 0x46d3c0u: goto label_46d3c0;
        case 0x46d3c4u: goto label_46d3c4;
        case 0x46d3c8u: goto label_46d3c8;
        case 0x46d3ccu: goto label_46d3cc;
        case 0x46d3d0u: goto label_46d3d0;
        case 0x46d3d4u: goto label_46d3d4;
        case 0x46d3d8u: goto label_46d3d8;
        case 0x46d3dcu: goto label_46d3dc;
        case 0x46d3e0u: goto label_46d3e0;
        case 0x46d3e4u: goto label_46d3e4;
        case 0x46d3e8u: goto label_46d3e8;
        case 0x46d3ecu: goto label_46d3ec;
        case 0x46d3f0u: goto label_46d3f0;
        case 0x46d3f4u: goto label_46d3f4;
        case 0x46d3f8u: goto label_46d3f8;
        case 0x46d3fcu: goto label_46d3fc;
        case 0x46d400u: goto label_46d400;
        case 0x46d404u: goto label_46d404;
        case 0x46d408u: goto label_46d408;
        case 0x46d40cu: goto label_46d40c;
        case 0x46d410u: goto label_46d410;
        case 0x46d414u: goto label_46d414;
        case 0x46d418u: goto label_46d418;
        case 0x46d41cu: goto label_46d41c;
        case 0x46d420u: goto label_46d420;
        case 0x46d424u: goto label_46d424;
        case 0x46d428u: goto label_46d428;
        case 0x46d42cu: goto label_46d42c;
        case 0x46d430u: goto label_46d430;
        case 0x46d434u: goto label_46d434;
        case 0x46d438u: goto label_46d438;
        case 0x46d43cu: goto label_46d43c;
        case 0x46d440u: goto label_46d440;
        case 0x46d444u: goto label_46d444;
        case 0x46d448u: goto label_46d448;
        case 0x46d44cu: goto label_46d44c;
        case 0x46d450u: goto label_46d450;
        case 0x46d454u: goto label_46d454;
        case 0x46d458u: goto label_46d458;
        case 0x46d45cu: goto label_46d45c;
        case 0x46d460u: goto label_46d460;
        case 0x46d464u: goto label_46d464;
        case 0x46d468u: goto label_46d468;
        case 0x46d46cu: goto label_46d46c;
        case 0x46d470u: goto label_46d470;
        case 0x46d474u: goto label_46d474;
        case 0x46d478u: goto label_46d478;
        case 0x46d47cu: goto label_46d47c;
        case 0x46d480u: goto label_46d480;
        case 0x46d484u: goto label_46d484;
        case 0x46d488u: goto label_46d488;
        case 0x46d48cu: goto label_46d48c;
        case 0x46d490u: goto label_46d490;
        case 0x46d494u: goto label_46d494;
        case 0x46d498u: goto label_46d498;
        case 0x46d49cu: goto label_46d49c;
        case 0x46d4a0u: goto label_46d4a0;
        case 0x46d4a4u: goto label_46d4a4;
        case 0x46d4a8u: goto label_46d4a8;
        case 0x46d4acu: goto label_46d4ac;
        case 0x46d4b0u: goto label_46d4b0;
        case 0x46d4b4u: goto label_46d4b4;
        case 0x46d4b8u: goto label_46d4b8;
        case 0x46d4bcu: goto label_46d4bc;
        case 0x46d4c0u: goto label_46d4c0;
        case 0x46d4c4u: goto label_46d4c4;
        case 0x46d4c8u: goto label_46d4c8;
        case 0x46d4ccu: goto label_46d4cc;
        case 0x46d4d0u: goto label_46d4d0;
        case 0x46d4d4u: goto label_46d4d4;
        case 0x46d4d8u: goto label_46d4d8;
        case 0x46d4dcu: goto label_46d4dc;
        case 0x46d4e0u: goto label_46d4e0;
        case 0x46d4e4u: goto label_46d4e4;
        case 0x46d4e8u: goto label_46d4e8;
        case 0x46d4ecu: goto label_46d4ec;
        case 0x46d4f0u: goto label_46d4f0;
        case 0x46d4f4u: goto label_46d4f4;
        case 0x46d4f8u: goto label_46d4f8;
        case 0x46d4fcu: goto label_46d4fc;
        case 0x46d500u: goto label_46d500;
        case 0x46d504u: goto label_46d504;
        case 0x46d508u: goto label_46d508;
        case 0x46d50cu: goto label_46d50c;
        case 0x46d510u: goto label_46d510;
        case 0x46d514u: goto label_46d514;
        case 0x46d518u: goto label_46d518;
        case 0x46d51cu: goto label_46d51c;
        case 0x46d520u: goto label_46d520;
        case 0x46d524u: goto label_46d524;
        case 0x46d528u: goto label_46d528;
        case 0x46d52cu: goto label_46d52c;
        case 0x46d530u: goto label_46d530;
        case 0x46d534u: goto label_46d534;
        case 0x46d538u: goto label_46d538;
        case 0x46d53cu: goto label_46d53c;
        case 0x46d540u: goto label_46d540;
        case 0x46d544u: goto label_46d544;
        case 0x46d548u: goto label_46d548;
        case 0x46d54cu: goto label_46d54c;
        case 0x46d550u: goto label_46d550;
        case 0x46d554u: goto label_46d554;
        case 0x46d558u: goto label_46d558;
        case 0x46d55cu: goto label_46d55c;
        case 0x46d560u: goto label_46d560;
        case 0x46d564u: goto label_46d564;
        case 0x46d568u: goto label_46d568;
        case 0x46d56cu: goto label_46d56c;
        case 0x46d570u: goto label_46d570;
        case 0x46d574u: goto label_46d574;
        case 0x46d578u: goto label_46d578;
        case 0x46d57cu: goto label_46d57c;
        case 0x46d580u: goto label_46d580;
        case 0x46d584u: goto label_46d584;
        case 0x46d588u: goto label_46d588;
        case 0x46d58cu: goto label_46d58c;
        case 0x46d590u: goto label_46d590;
        case 0x46d594u: goto label_46d594;
        case 0x46d598u: goto label_46d598;
        case 0x46d59cu: goto label_46d59c;
        case 0x46d5a0u: goto label_46d5a0;
        case 0x46d5a4u: goto label_46d5a4;
        case 0x46d5a8u: goto label_46d5a8;
        case 0x46d5acu: goto label_46d5ac;
        case 0x46d5b0u: goto label_46d5b0;
        case 0x46d5b4u: goto label_46d5b4;
        case 0x46d5b8u: goto label_46d5b8;
        case 0x46d5bcu: goto label_46d5bc;
        case 0x46d5c0u: goto label_46d5c0;
        case 0x46d5c4u: goto label_46d5c4;
        case 0x46d5c8u: goto label_46d5c8;
        case 0x46d5ccu: goto label_46d5cc;
        case 0x46d5d0u: goto label_46d5d0;
        case 0x46d5d4u: goto label_46d5d4;
        case 0x46d5d8u: goto label_46d5d8;
        case 0x46d5dcu: goto label_46d5dc;
        case 0x46d5e0u: goto label_46d5e0;
        case 0x46d5e4u: goto label_46d5e4;
        case 0x46d5e8u: goto label_46d5e8;
        case 0x46d5ecu: goto label_46d5ec;
        case 0x46d5f0u: goto label_46d5f0;
        case 0x46d5f4u: goto label_46d5f4;
        case 0x46d5f8u: goto label_46d5f8;
        case 0x46d5fcu: goto label_46d5fc;
        case 0x46d600u: goto label_46d600;
        case 0x46d604u: goto label_46d604;
        case 0x46d608u: goto label_46d608;
        case 0x46d60cu: goto label_46d60c;
        case 0x46d610u: goto label_46d610;
        case 0x46d614u: goto label_46d614;
        case 0x46d618u: goto label_46d618;
        case 0x46d61cu: goto label_46d61c;
        case 0x46d620u: goto label_46d620;
        case 0x46d624u: goto label_46d624;
        case 0x46d628u: goto label_46d628;
        case 0x46d62cu: goto label_46d62c;
        case 0x46d630u: goto label_46d630;
        case 0x46d634u: goto label_46d634;
        case 0x46d638u: goto label_46d638;
        case 0x46d63cu: goto label_46d63c;
        default: break;
    }

    ctx->pc = 0x46d238u;

label_46d238:
    // 0x46d238: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x46d238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_46d23c:
    // 0x46d23c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x46d23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_46d240:
    // 0x46d240: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x46d240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_46d244:
    // 0x46d244: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x46d244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_46d248:
    // 0x46d248: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x46d248u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_46d24c:
    // 0x46d24c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x46d24cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46d250:
    // 0x46d250: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x46d250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_46d254:
    // 0x46d254: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x46d254u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_46d258:
    // 0x46d258: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x46d258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46d25c:
    // 0x46d25c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x46d25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_46d260:
    // 0x46d260: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x46d260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_46d264:
    // 0x46d264: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x46d264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_46d268:
    // 0x46d268: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x46d268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_46d26c:
    // 0x46d26c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x46d26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_46d270:
    // 0x46d270: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x46d270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_46d274:
    // 0x46d274: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x46d274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_46d278:
    // 0x46d278: 0xc11eeae  jal         func_47BAB8
label_46d27c:
    if (ctx->pc == 0x46D27Cu) {
        ctx->pc = 0x46D27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D278u;
        // 0x46d27c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D280u;
        goto label_46d280;
    }
    ctx->pc = 0x46D278u;
    SET_GPR_U32(ctx, 31, 0x46D280u);
    ctx->pc = 0x46D27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46D278u;
    // 0x46d27c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x46D278u, 0x46D280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D280u;
label_46d280:
    // 0x46d280: 0x104000e1  beqz        $v0, . + 4 + (0xE1 << 2)
label_46d284:
    if (ctx->pc == 0x46D284u) {
        ctx->pc = 0x46D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D280u;
        // 0x46d284: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D288u;
        goto label_46d288;
    }
    ctx->pc = 0x46D280u;
    {
        const bool branch_taken_0x46d280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D280u;
        // 0x46d284: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d280) {
            ctx->pc = 0x46D608u;
            goto label_46d608;
        }
    }
    ctx->pc = 0x46D288u;
label_46d288:
    // 0x46d288: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x46d288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_46d28c:
    // 0x46d28c: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x46d28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_46d290:
    // 0x46d290: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x46d290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_46d294:
    // 0x46d294: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x46d294u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_46d298:
    // 0x46d298: 0x106000d3  beqz        $v1, . + 4 + (0xD3 << 2)
label_46d29c:
    if (ctx->pc == 0x46D29Cu) {
        ctx->pc = 0x46D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D298u;
        // 0x46d29c: 0x27a50018  addiu       $a1, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D2A0u;
        goto label_46d2a0;
    }
    ctx->pc = 0x46D298u;
    {
        const bool branch_taken_0x46d298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D298u;
        // 0x46d29c: 0x27a50018  addiu       $a1, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d298) {
            ctx->pc = 0x46D5E8u;
            goto label_46d5e8;
        }
    }
    ctx->pc = 0x46D2A0u;
label_46d2a0:
    // 0x46d2a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x46d2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_46d2a4:
    // 0x46d2a4: 0xc11ef80  jal         func_47BE00
label_46d2a8:
    if (ctx->pc == 0x46D2A8u) {
        ctx->pc = 0x46D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D2A4u;
        // 0x46d2a8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D2ACu;
        goto label_46d2ac;
    }
    ctx->pc = 0x46D2A4u;
    SET_GPR_U32(ctx, 31, 0x46D2ACu);
    ctx->pc = 0x46D2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46D2A4u;
    // 0x46d2a8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x46D2A4u, 0x46D2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D2ACu;
label_46d2ac:
    // 0x46d2ac: 0x104000d6  beqz        $v0, . + 4 + (0xD6 << 2)
label_46d2b0:
    if (ctx->pc == 0x46D2B0u) {
        ctx->pc = 0x46D2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D2ACu;
        // 0x46d2b0: 0x8fb10018  lw          $s1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D2B4u;
        goto label_46d2b4;
    }
    ctx->pc = 0x46D2ACu;
    {
        const bool branch_taken_0x46d2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D2ACu;
        // 0x46d2b0: 0x8fb10018  lw          $s1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d2ac) {
            ctx->pc = 0x46D608u;
            goto label_46d608;
        }
    }
    ctx->pc = 0x46D2B4u;
label_46d2b4:
    // 0x46d2b4: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x46d2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_46d2b8:
    // 0x46d2b8: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x46d2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_46d2bc:
    // 0x46d2bc: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_46d2c0:
    if (ctx->pc == 0x46D2C0u) {
        ctx->pc = 0x46D2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D2BCu;
        // 0x46d2c0: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D2C4u;
        goto label_46d2c4;
    }
    ctx->pc = 0x46D2BCu;
    {
        const bool branch_taken_0x46d2bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x46D2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D2BCu;
        // 0x46d2c0: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d2bc) {
            ctx->pc = 0x46D2CCu;
            goto label_46d2cc;
        }
    }
    ctx->pc = 0x46D2C4u;
label_46d2c4:
    // 0x46d2c4: 0x100000d1  b           . + 4 + (0xD1 << 2)
label_46d2c8:
    if (ctx->pc == 0x46D2C8u) {
        ctx->pc = 0x46D2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D2C4u;
        // 0x46d2c8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D2CCu;
        goto label_46d2cc;
    }
    ctx->pc = 0x46D2C4u;
    {
        const bool branch_taken_0x46d2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D2C4u;
        // 0x46d2c8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d2c4) {
            ctx->pc = 0x46D60Cu;
            goto label_46d60c;
        }
    }
    ctx->pc = 0x46D2CCu;
label_46d2cc:
    // 0x46d2cc: 0x1a200015  blez        $s1, . + 4 + (0x15 << 2)
label_46d2d0:
    if (ctx->pc == 0x46D2D0u) {
        ctx->pc = 0x46D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D2CCu;
        // 0x46d2d0: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D2D4u;
        goto label_46d2d4;
    }
    ctx->pc = 0x46D2CCu;
    {
        const bool branch_taken_0x46d2cc = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x46D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D2CCu;
        // 0x46d2d0: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d2cc) {
            ctx->pc = 0x46D324u;
            goto label_46d324;
        }
    }
    ctx->pc = 0x46D2D4u;
label_46d2d4:
    // 0x46d2d4: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x46d2d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_46d2d8:
    // 0x46d2d8: 0x3c050103  lui         $a1, 0x103
    ctx->pc = 0x46d2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
label_46d2dc:
    // 0x46d2dc: 0x8c62ae20  lw          $v0, -0x51E0($v1)
    ctx->pc = 0x46d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946336)));
label_46d2e0:
    // 0x46d2e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46d2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46d2e4:
    // 0x46d2e4: 0x40f809  jalr        $v0
label_46d2e8:
    if (ctx->pc == 0x46D2E8u) {
        ctx->pc = 0x46D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D2E4u;
        // 0x46d2e8: 0x34a50008  ori         $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D2ECu;
        goto label_46d2ec;
    }
    ctx->pc = 0x46D2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46D2ECu);
        ctx->pc = 0x46D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D2E4u;
        // 0x46d2e8: 0x34a50008  ori         $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D2E4u, 0x46D2ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46D2ECu;
label_46d2ec:
    // 0x46d2ec: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_46d2f0:
    if (ctx->pc == 0x46D2F0u) {
        ctx->pc = 0x46D2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D2ECu;
        // 0x46d2f0: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D2F4u;
        goto label_46d2f4;
    }
    ctx->pc = 0x46D2ECu;
    {
        const bool branch_taken_0x46d2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46d2ec) {
            ctx->pc = 0x46D2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46D2ECu;
            // 0x46d2f0: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46D320u;
            goto label_46d320;
        }
    }
    ctx->pc = 0x46D2F4u;
label_46d2f4:
    // 0x46d2f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x46d2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46d2f8:
    // 0x46d2f8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x46d2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_46d2fc:
    // 0x46d2fc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x46d2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_46d300:
    // 0x46d300: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46d300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46d304:
    // 0x46d304: 0xc11eff2  jal         func_47BFC8
label_46d308:
    if (ctx->pc == 0x46D308u) {
        ctx->pc = 0x46D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D304u;
        // 0x46d308: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D30Cu;
        goto label_46d30c;
    }
    ctx->pc = 0x46D304u;
    SET_GPR_U32(ctx, 31, 0x46D30Cu);
    ctx->pc = 0x46D308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46D304u;
    // 0x46d308: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x46D304u, 0x46D30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D30Cu;
label_46d30c:
    // 0x46d30c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x46d30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_46d310:
    // 0x46d310: 0xc11f024  jal         func_47C090
label_46d314:
    if (ctx->pc == 0x46D314u) {
        ctx->pc = 0x46D314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D310u;
        // 0x46d314: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D318u;
        goto label_46d318;
    }
    ctx->pc = 0x46D310u;
    SET_GPR_U32(ctx, 31, 0x46D318u);
    ctx->pc = 0x46D314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46D310u;
    // 0x46d314: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x46D310u, 0x46D318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D318u;
label_46d318:
    // 0x46d318: 0x10000003  b           . + 4 + (0x3 << 2)
label_46d31c:
    if (ctx->pc == 0x46D31Cu) {
        ctx->pc = 0x46D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D318u;
        // 0x46d31c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D320u;
        goto label_46d320;
    }
    ctx->pc = 0x46D318u;
    {
        const bool branch_taken_0x46d318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D318u;
        // 0x46d31c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d318) {
            ctx->pc = 0x46D328u;
            goto label_46d328;
        }
    }
    ctx->pc = 0x46D320u;
label_46d320:
    // 0x46d320: 0xae710008  sw          $s1, 0x8($s3)
    ctx->pc = 0x46d320u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
label_46d324:
    // 0x46d324: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x46d324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_46d328:
    // 0x46d328: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_46d32c:
    if (ctx->pc == 0x46D32Cu) {
        ctx->pc = 0x46D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D328u;
        // 0x46d32c: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D330u;
        goto label_46d330;
    }
    ctx->pc = 0x46D328u;
    {
        const bool branch_taken_0x46d328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D328u;
        // 0x46d32c: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d328) {
            ctx->pc = 0x46D378u;
            goto label_46d378;
        }
    }
    ctx->pc = 0x46D330u;
label_46d330:
    // 0x46d330: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x46d330u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_46d334:
    // 0x46d334: 0x52400092  beql        $s2, $zero, . + 4 + (0x92 << 2)
label_46d338:
    if (ctx->pc == 0x46D338u) {
        ctx->pc = 0x46D338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D334u;
        // 0x46d338: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D33Cu;
        goto label_46d33c;
    }
    ctx->pc = 0x46D334u;
    {
        const bool branch_taken_0x46d334 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d334) {
            ctx->pc = 0x46D338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46D334u;
            // 0x46d338: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46D580u;
            goto label_46d580;
        }
    }
    ctx->pc = 0x46D33Cu;
label_46d33c:
    // 0x46d33c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x46d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_46d340:
    // 0x46d340: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_46d344:
    if (ctx->pc == 0x46D344u) {
        ctx->pc = 0x46D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D340u;
        // 0x46d344: 0x3c170071  lui         $s7, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D348u;
        goto label_46d348;
    }
    ctx->pc = 0x46D340u;
    {
        const bool branch_taken_0x46d340 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x46D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D340u;
        // 0x46d344: 0x3c170071  lui         $s7, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d340) {
            ctx->pc = 0x46D368u;
            goto label_46d368;
        }
    }
    ctx->pc = 0x46D348u;
label_46d348:
    // 0x46d348: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x46d348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46d34c:
    // 0x46d34c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x46d34cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46d350:
    // 0x46d350: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x46d350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_46d354:
    // 0x46d354: 0xc11b3e4  jal         func_46CF90
label_46d358:
    if (ctx->pc == 0x46D358u) {
        ctx->pc = 0x46D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D354u;
        // 0x46d358: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D35Cu;
        goto label_46d35c;
    }
    ctx->pc = 0x46D354u;
    SET_GPR_U32(ctx, 31, 0x46D35Cu);
    ctx->pc = 0x46D358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46D354u;
    // 0x46d358: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46CF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CF90u, 0x46D354u, 0x46D35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D35Cu;
label_46d35c:
    // 0x46d35c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x46d35cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_46d360:
    // 0x46d360: 0x1620fffb  bnez        $s1, . + 4 + (-0x5 << 2)
label_46d364:
    if (ctx->pc == 0x46D364u) {
        ctx->pc = 0x46D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D360u;
        // 0x46d364: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D368u;
        goto label_46d368;
    }
    ctx->pc = 0x46D360u;
    {
        const bool branch_taken_0x46d360 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x46D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D360u;
        // 0x46d364: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d360) {
            ctx->pc = 0x46D350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46d350;
        }
    }
    ctx->pc = 0x46D368u;
label_46d368:
    // 0x46d368: 0x26e3ad18  addiu       $v1, $s7, -0x52E8
    ctx->pc = 0x46d368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946072));
label_46d36c:
    // 0x46d36c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46d36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46d370:
    // 0x46d370: 0x1000007f  b           . + 4 + (0x7F << 2)
label_46d374:
    if (ctx->pc == 0x46D374u) {
        ctx->pc = 0x46D374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D370u;
        // 0x46d374: 0x8c62010c  lw          $v0, 0x10C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D378u;
        goto label_46d378;
    }
    ctx->pc = 0x46D370u;
    {
        const bool branch_taken_0x46d370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D370u;
        // 0x46d374: 0x8c62010c  lw          $v0, 0x10C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d370) {
            ctx->pc = 0x46D570u;
            goto label_46d570;
        }
    }
    ctx->pc = 0x46D378u;
label_46d378:
    // 0x46d378: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x46d378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_46d37c:
    // 0x46d37c: 0x2470ad18  addiu       $s0, $v1, -0x52E8
    ctx->pc = 0x46d37cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_46d380:
    // 0x46d380: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x46d380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_46d384:
    // 0x46d384: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x46d384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_46d388:
    // 0x46d388: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x46d388u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_46d38c:
    // 0x46d38c: 0x34a50501  ori         $a1, $a1, 0x501
    ctx->pc = 0x46d38cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1281);
label_46d390:
    // 0x46d390: 0x40f809  jalr        $v0
label_46d394:
    if (ctx->pc == 0x46D394u) {
        ctx->pc = 0x46D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D390u;
        // 0x46d394: 0x60b82d  daddu       $s7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D398u;
        goto label_46d398;
    }
    ctx->pc = 0x46D390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46D398u);
        ctx->pc = 0x46D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D390u;
        // 0x46d394: 0x60b82d  daddu       $s7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D390u, 0x46D398u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46D398u;
label_46d398:
    // 0x46d398: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x46d398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_46d39c:
    // 0x46d39c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x46d39cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46d3a0:
    // 0x46d3a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x46d3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_46d3a4:
    // 0x46d3a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46d3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46d3a8:
    // 0x46d3a8: 0xc11ef80  jal         func_47BE00
label_46d3ac:
    if (ctx->pc == 0x46D3ACu) {
        ctx->pc = 0x46D3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D3A8u;
        // 0x46d3ac: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D3B0u;
        goto label_46d3b0;
    }
    ctx->pc = 0x46D3A8u;
    SET_GPR_U32(ctx, 31, 0x46D3B0u);
    ctx->pc = 0x46D3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46D3A8u;
    // 0x46d3ac: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x46D3A8u, 0x46D3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D3B0u;
label_46d3b0:
    // 0x46d3b0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_46d3b4:
    if (ctx->pc == 0x46D3B4u) {
        ctx->pc = 0x46D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D3B0u;
        // 0x46d3b4: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D3B8u;
        goto label_46d3b8;
    }
    ctx->pc = 0x46D3B0u;
    {
        const bool branch_taken_0x46d3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D3B0u;
        // 0x46d3b4: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d3b0) {
            ctx->pc = 0x46D408u;
            goto label_46d408;
        }
    }
    ctx->pc = 0x46D3B8u;
label_46d3b8:
    // 0x46d3b8: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x46d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_46d3bc:
    // 0x46d3bc: 0x40f809  jalr        $v0
label_46d3c0:
    if (ctx->pc == 0x46D3C0u) {
        ctx->pc = 0x46D3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D3BCu;
        // 0x46d3c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D3C4u;
        goto label_46d3c4;
    }
    ctx->pc = 0x46D3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46D3C4u);
        ctx->pc = 0x46D3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D3BCu;
        // 0x46d3c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D3BCu, 0x46D3C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46D3C4u;
label_46d3c4:
    // 0x46d3c4: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x46d3c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_46d3c8:
    // 0x46d3c8: 0x5240006d  beql        $s2, $zero, . + 4 + (0x6D << 2)
label_46d3cc:
    if (ctx->pc == 0x46D3CCu) {
        ctx->pc = 0x46D3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D3C8u;
        // 0x46d3cc: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D3D0u;
        goto label_46d3d0;
    }
    ctx->pc = 0x46D3C8u;
    {
        const bool branch_taken_0x46d3c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d3c8) {
            ctx->pc = 0x46D3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46D3C8u;
            // 0x46d3cc: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46D580u;
            goto label_46d580;
        }
    }
    ctx->pc = 0x46D3D0u;
label_46d3d0:
    // 0x46d3d0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x46d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_46d3d4:
    // 0x46d3d4: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_46d3d8:
    if (ctx->pc == 0x46D3D8u) {
        ctx->pc = 0x46D3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D3D4u;
        // 0x46d3d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D3DCu;
        goto label_46d3dc;
    }
    ctx->pc = 0x46D3D4u;
    {
        const bool branch_taken_0x46d3d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x46D3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D3D4u;
        // 0x46d3d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d3d4) {
            ctx->pc = 0x46D3F8u;
            goto label_46d3f8;
        }
    }
    ctx->pc = 0x46D3DCu;
label_46d3dc:
    // 0x46d3dc: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x46d3dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46d3e0:
    // 0x46d3e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x46d3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_46d3e4:
    // 0x46d3e4: 0xc11b3e4  jal         func_46CF90
label_46d3e8:
    if (ctx->pc == 0x46D3E8u) {
        ctx->pc = 0x46D3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D3E4u;
        // 0x46d3e8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D3ECu;
        goto label_46d3ec;
    }
    ctx->pc = 0x46D3E4u;
    SET_GPR_U32(ctx, 31, 0x46D3ECu);
    ctx->pc = 0x46D3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46D3E4u;
    // 0x46d3e8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46CF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CF90u, 0x46D3E4u, 0x46D3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D3ECu;
label_46d3ec:
    // 0x46d3ec: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x46d3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_46d3f0:
    // 0x46d3f0: 0x1620fffb  bnez        $s1, . + 4 + (-0x5 << 2)
label_46d3f4:
    if (ctx->pc == 0x46D3F4u) {
        ctx->pc = 0x46D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D3F0u;
        // 0x46d3f4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D3F8u;
        goto label_46d3f8;
    }
    ctx->pc = 0x46D3F0u;
    {
        const bool branch_taken_0x46d3f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x46D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D3F0u;
        // 0x46d3f4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d3f0) {
            ctx->pc = 0x46D3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46d3e0;
        }
    }
    ctx->pc = 0x46D3F8u;
label_46d3f8:
    // 0x46d3f8: 0x26e3ad18  addiu       $v1, $s7, -0x52E8
    ctx->pc = 0x46d3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946072));
label_46d3fc:
    // 0x46d3fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46d3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46d400:
    // 0x46d400: 0x1000005b  b           . + 4 + (0x5B << 2)
label_46d404:
    if (ctx->pc == 0x46D404u) {
        ctx->pc = 0x46D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D400u;
        // 0x46d404: 0x8c62010c  lw          $v0, 0x10C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D408u;
        goto label_46d408;
    }
    ctx->pc = 0x46D400u;
    {
        const bool branch_taken_0x46d400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D400u;
        // 0x46d404: 0x8c62010c  lw          $v0, 0x10C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d400) {
            ctx->pc = 0x46D570u;
            goto label_46d570;
        }
    }
    ctx->pc = 0x46D408u;
label_46d408:
    // 0x46d408: 0x18400071  blez        $v0, . + 4 + (0x71 << 2)
label_46d40c:
    if (ctx->pc == 0x46D40Cu) {
        ctx->pc = 0x46D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D408u;
        // 0x46d40c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D410u;
        goto label_46d410;
    }
    ctx->pc = 0x46D408u;
    {
        const bool branch_taken_0x46d408 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x46D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D408u;
        // 0x46d40c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d408) {
            ctx->pc = 0x46D5D0u;
            goto label_46d5d0;
        }
    }
    ctx->pc = 0x46D410u;
label_46d410:
    // 0x46d410: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x46d410u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46d414:
    // 0x46d414: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x46d414u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46d418:
    // 0x46d418: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x46d418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_46d41c:
    // 0x46d41c: 0x0  nop
    ctx->pc = 0x46d41cu;
    // NOP
label_46d420:
    // 0x46d420: 0x463005a  bgezl       $v1, . + 4 + (0x5A << 2)
label_46d424:
    if (ctx->pc == 0x46D424u) {
        ctx->pc = 0x46D424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D420u;
        // 0x46d424: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D428u;
        goto label_46d428;
    }
    ctx->pc = 0x46D420u;
    {
        const bool branch_taken_0x46d420 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x46d420) {
            ctx->pc = 0x46D424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46D420u;
            // 0x46d424: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46D58Cu;
            goto label_46d58c;
        }
    }
    ctx->pc = 0x46D428u;
label_46d428:
    // 0x46d428: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x46d428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_46d42c:
    // 0x46d42c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x46d42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_46d430:
    // 0x46d430: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x46d430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46d434:
    // 0x46d434: 0xc11eeae  jal         func_47BAB8
label_46d438:
    if (ctx->pc == 0x46D438u) {
        ctx->pc = 0x46D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D434u;
        // 0x46d438: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D43Cu;
        goto label_46d43c;
    }
    ctx->pc = 0x46D434u;
    SET_GPR_U32(ctx, 31, 0x46D43Cu);
    ctx->pc = 0x46D438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46D434u;
    // 0x46d438: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x46D434u, 0x46D43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D43Cu;
label_46d43c:
    // 0x46d43c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_46d440:
    if (ctx->pc == 0x46D440u) {
        ctx->pc = 0x46D440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D43Cu;
        // 0x46d440: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D444u;
        goto label_46d444;
    }
    ctx->pc = 0x46D43Cu;
    {
        const bool branch_taken_0x46d43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46D440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D43Cu;
        // 0x46d440: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d43c) {
            ctx->pc = 0x46D490u;
            goto label_46d490;
        }
    }
    ctx->pc = 0x46D444u;
label_46d444:
    // 0x46d444: 0x8ec2010c  lw          $v0, 0x10C($s6)
    ctx->pc = 0x46d444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
label_46d448:
    // 0x46d448: 0x40f809  jalr        $v0
label_46d44c:
    if (ctx->pc == 0x46D44Cu) {
        ctx->pc = 0x46D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D448u;
        // 0x46d44c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D450u;
        goto label_46d450;
    }
    ctx->pc = 0x46D448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46D450u);
        ctx->pc = 0x46D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D448u;
        // 0x46d44c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D448u, 0x46D450u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46D450u;
label_46d450:
    // 0x46d450: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x46d450u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_46d454:
    // 0x46d454: 0x5240004a  beql        $s2, $zero, . + 4 + (0x4A << 2)
label_46d458:
    if (ctx->pc == 0x46D458u) {
        ctx->pc = 0x46D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D454u;
        // 0x46d458: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D45Cu;
        goto label_46d45c;
    }
    ctx->pc = 0x46D454u;
    {
        const bool branch_taken_0x46d454 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d454) {
            ctx->pc = 0x46D458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46D454u;
            // 0x46d458: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46D580u;
            goto label_46d580;
        }
    }
    ctx->pc = 0x46D45Cu;
label_46d45c:
    // 0x46d45c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x46d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_46d460:
    // 0x46d460: 0x18400041  blez        $v0, . + 4 + (0x41 << 2)
label_46d464:
    if (ctx->pc == 0x46D464u) {
        ctx->pc = 0x46D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D460u;
        // 0x46d464: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D468u;
        goto label_46d468;
    }
    ctx->pc = 0x46D460u;
    {
        const bool branch_taken_0x46d460 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x46D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D460u;
        // 0x46d464: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d460) {
            ctx->pc = 0x46D568u;
            goto label_46d568;
        }
    }
    ctx->pc = 0x46D468u;
label_46d468:
    // 0x46d468: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x46d468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46d46c:
    // 0x46d46c: 0x0  nop
    ctx->pc = 0x46d46cu;
    // NOP
label_46d470:
    // 0x46d470: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x46d470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_46d474:
    // 0x46d474: 0xc11b3e4  jal         func_46CF90
label_46d478:
    if (ctx->pc == 0x46D478u) {
        ctx->pc = 0x46D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D474u;
        // 0x46d478: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D47Cu;
        goto label_46d47c;
    }
    ctx->pc = 0x46D474u;
    SET_GPR_U32(ctx, 31, 0x46D47Cu);
    ctx->pc = 0x46D478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46D474u;
    // 0x46d478: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46CF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CF90u, 0x46D474u, 0x46D47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D47Cu;
label_46d47c:
    // 0x46d47c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x46d47cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_46d480:
    // 0x46d480: 0x1620fffb  bnez        $s1, . + 4 + (-0x5 << 2)
label_46d484:
    if (ctx->pc == 0x46D484u) {
        ctx->pc = 0x46D484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D480u;
        // 0x46d484: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D488u;
        goto label_46d488;
    }
    ctx->pc = 0x46D480u;
    {
        const bool branch_taken_0x46d480 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x46D484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D480u;
        // 0x46d484: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d480) {
            ctx->pc = 0x46D470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46d470;
        }
    }
    ctx->pc = 0x46D488u;
label_46d488:
    // 0x46d488: 0x10000038  b           . + 4 + (0x38 << 2)
label_46d48c:
    if (ctx->pc == 0x46D48Cu) {
        ctx->pc = 0x46D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D488u;
        // 0x46d48c: 0x8ec2010c  lw          $v0, 0x10C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D490u;
        goto label_46d490;
    }
    ctx->pc = 0x46D488u;
    {
        const bool branch_taken_0x46d488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D488u;
        // 0x46d48c: 0x8ec2010c  lw          $v0, 0x10C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d488) {
            ctx->pc = 0x46D56Cu;
            goto label_46d56c;
        }
    }
    ctx->pc = 0x46D490u;
label_46d490:
    // 0x46d490: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x46d490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_46d494:
    // 0x46d494: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x46d494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_46d498:
    // 0x46d498: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x46d498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_46d49c:
    // 0x46d49c: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x46d49cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_46d4a0:
    // 0x46d4a0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_46d4a4:
    if (ctx->pc == 0x46D4A4u) {
        ctx->pc = 0x46D4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D4A0u;
        // 0x46d4a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D4A8u;
        goto label_46d4a8;
    }
    ctx->pc = 0x46D4A0u;
    {
        const bool branch_taken_0x46d4a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D4A0u;
        // 0x46d4a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d4a0) {
            ctx->pc = 0x46D508u;
            goto label_46d508;
        }
    }
    ctx->pc = 0x46D4A8u;
label_46d4a8:
    // 0x46d4a8: 0xc11b262  jal         func_46C988
label_46d4ac:
    if (ctx->pc == 0x46D4ACu) {
        ctx->pc = 0x46D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D4A8u;
        // 0x46d4ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D4B0u;
        goto label_46d4b0;
    }
    ctx->pc = 0x46D4A8u;
    SET_GPR_U32(ctx, 31, 0x46D4B0u);
    ctx->pc = 0x46D4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46D4A8u;
    // 0x46d4ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C988u, 0x46D4A8u, 0x46D4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D4B0u;
label_46d4b0:
    // 0x46d4b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46d4b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46d4b4:
    // 0x46d4b4: 0x1600003c  bnez        $s0, . + 4 + (0x3C << 2)
label_46d4b8:
    if (ctx->pc == 0x46D4B8u) {
        ctx->pc = 0x46D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D4B4u;
        // 0x46d4b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D4BCu;
        goto label_46d4bc;
    }
    ctx->pc = 0x46D4B4u;
    {
        const bool branch_taken_0x46d4b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x46D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D4B4u;
        // 0x46d4b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d4b4) {
            ctx->pc = 0x46D5A8u;
            goto label_46d5a8;
        }
    }
    ctx->pc = 0x46D4BCu;
label_46d4bc:
    // 0x46d4bc: 0x8ec2010c  lw          $v0, 0x10C($s6)
    ctx->pc = 0x46d4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
label_46d4c0:
    // 0x46d4c0: 0x40f809  jalr        $v0
label_46d4c4:
    if (ctx->pc == 0x46D4C4u) {
        ctx->pc = 0x46D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D4C0u;
        // 0x46d4c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D4C8u;
        goto label_46d4c8;
    }
    ctx->pc = 0x46D4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46D4C8u);
        ctx->pc = 0x46D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D4C0u;
        // 0x46d4c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D4C0u, 0x46D4C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46D4C8u;
label_46d4c8:
    // 0x46d4c8: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x46d4c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_46d4cc:
    // 0x46d4cc: 0x5240002c  beql        $s2, $zero, . + 4 + (0x2C << 2)
label_46d4d0:
    if (ctx->pc == 0x46D4D0u) {
        ctx->pc = 0x46D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D4CCu;
        // 0x46d4d0: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D4D4u;
        goto label_46d4d4;
    }
    ctx->pc = 0x46D4CCu;
    {
        const bool branch_taken_0x46d4cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d4cc) {
            ctx->pc = 0x46D4D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46D4CCu;
            // 0x46d4d0: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46D580u;
            goto label_46d580;
        }
    }
    ctx->pc = 0x46D4D4u;
label_46d4d4:
    // 0x46d4d4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x46d4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_46d4d8:
    // 0x46d4d8: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x46d4d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_46d4dc:
    // 0x46d4dc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_46d4e0:
    if (ctx->pc == 0x46D4E0u) {
        ctx->pc = 0x46D4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D4DCu;
        // 0x46d4e0: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D4E4u;
        goto label_46d4e4;
    }
    ctx->pc = 0x46D4DCu;
    {
        const bool branch_taken_0x46d4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D4DCu;
        // 0x46d4e0: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d4dc) {
            ctx->pc = 0x46D568u;
            goto label_46d568;
        }
    }
    ctx->pc = 0x46D4E4u;
label_46d4e4:
    // 0x46d4e4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x46d4e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46d4e8:
    // 0x46d4e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x46d4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_46d4ec:
    // 0x46d4ec: 0xc11b3e4  jal         func_46CF90
label_46d4f0:
    if (ctx->pc == 0x46D4F0u) {
        ctx->pc = 0x46D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D4ECu;
        // 0x46d4f0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D4F4u;
        goto label_46d4f4;
    }
    ctx->pc = 0x46D4ECu;
    SET_GPR_U32(ctx, 31, 0x46D4F4u);
    ctx->pc = 0x46D4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46D4ECu;
    // 0x46d4f0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46CF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CF90u, 0x46D4ECu, 0x46D4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D4F4u;
label_46d4f4:
    // 0x46d4f4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x46d4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_46d4f8:
    // 0x46d4f8: 0x1620fffb  bnez        $s1, . + 4 + (-0x5 << 2)
label_46d4fc:
    if (ctx->pc == 0x46D4FCu) {
        ctx->pc = 0x46D4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D4F8u;
        // 0x46d4fc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D500u;
        goto label_46d500;
    }
    ctx->pc = 0x46D4F8u;
    {
        const bool branch_taken_0x46d4f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x46D4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D4F8u;
        // 0x46d4fc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d4f8) {
            ctx->pc = 0x46D4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46d4e8;
        }
    }
    ctx->pc = 0x46D500u;
label_46d500:
    // 0x46d500: 0x1000001a  b           . + 4 + (0x1A << 2)
label_46d504:
    if (ctx->pc == 0x46D504u) {
        ctx->pc = 0x46D504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D500u;
        // 0x46d504: 0x8ec2010c  lw          $v0, 0x10C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D508u;
        goto label_46d508;
    }
    ctx->pc = 0x46D500u;
    {
        const bool branch_taken_0x46d500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D500u;
        // 0x46d504: 0x8ec2010c  lw          $v0, 0x10C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d500) {
            ctx->pc = 0x46D56Cu;
            goto label_46d56c;
        }
    }
    ctx->pc = 0x46D508u;
label_46d508:
    // 0x46d508: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x46d508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_46d50c:
    // 0x46d50c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x46d50cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_46d510:
    // 0x46d510: 0xc11eff2  jal         func_47BFC8
label_46d514:
    if (ctx->pc == 0x46D514u) {
        ctx->pc = 0x46D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D510u;
        // 0x46d514: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D518u;
        goto label_46d518;
    }
    ctx->pc = 0x46D510u;
    SET_GPR_U32(ctx, 31, 0x46D518u);
    ctx->pc = 0x46D514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46D510u;
    // 0x46d514: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x46D510u, 0x46D518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D518u;
label_46d518:
    // 0x46d518: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x46d518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_46d51c:
    // 0x46d51c: 0xc11f024  jal         func_47C090
label_46d520:
    if (ctx->pc == 0x46D520u) {
        ctx->pc = 0x46D520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D51Cu;
        // 0x46d520: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D524u;
        goto label_46d524;
    }
    ctx->pc = 0x46D51Cu;
    SET_GPR_U32(ctx, 31, 0x46D524u);
    ctx->pc = 0x46D520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46D51Cu;
    // 0x46d520: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x46D51Cu, 0x46D524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D524u;
label_46d524:
    // 0x46d524: 0x8ec3010c  lw          $v1, 0x10C($s6)
    ctx->pc = 0x46d524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
label_46d528:
    // 0x46d528: 0x60f809  jalr        $v1
label_46d52c:
    if (ctx->pc == 0x46D52Cu) {
        ctx->pc = 0x46D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D528u;
        // 0x46d52c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D530u;
        goto label_46d530;
    }
    ctx->pc = 0x46D528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x46D530u);
        ctx->pc = 0x46D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D528u;
        // 0x46d52c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D528u, 0x46D530u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46D530u;
label_46d530:
    // 0x46d530: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x46d530u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_46d534:
    // 0x46d534: 0x52400012  beql        $s2, $zero, . + 4 + (0x12 << 2)
label_46d538:
    if (ctx->pc == 0x46D538u) {
        ctx->pc = 0x46D538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D534u;
        // 0x46d538: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D53Cu;
        goto label_46d53c;
    }
    ctx->pc = 0x46D534u;
    {
        const bool branch_taken_0x46d534 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d534) {
            ctx->pc = 0x46D538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46D534u;
            // 0x46d538: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46D580u;
            goto label_46d580;
        }
    }
    ctx->pc = 0x46D53Cu;
label_46d53c:
    // 0x46d53c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x46d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_46d540:
    // 0x46d540: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_46d544:
    if (ctx->pc == 0x46D544u) {
        ctx->pc = 0x46D544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D540u;
        // 0x46d544: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D548u;
        goto label_46d548;
    }
    ctx->pc = 0x46D540u;
    {
        const bool branch_taken_0x46d540 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x46D544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D540u;
        // 0x46d544: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d540) {
            ctx->pc = 0x46D568u;
            goto label_46d568;
        }
    }
    ctx->pc = 0x46D548u;
label_46d548:
    // 0x46d548: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x46d548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46d54c:
    // 0x46d54c: 0x0  nop
    ctx->pc = 0x46d54cu;
    // NOP
label_46d550:
    // 0x46d550: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x46d550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_46d554:
    // 0x46d554: 0xc11b3e4  jal         func_46CF90
label_46d558:
    if (ctx->pc == 0x46D558u) {
        ctx->pc = 0x46D558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D554u;
        // 0x46d558: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D55Cu;
        goto label_46d55c;
    }
    ctx->pc = 0x46D554u;
    SET_GPR_U32(ctx, 31, 0x46D55Cu);
    ctx->pc = 0x46D558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46D554u;
    // 0x46d558: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46CF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CF90u, 0x46D554u, 0x46D55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D55Cu;
label_46d55c:
    // 0x46d55c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x46d55cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_46d560:
    // 0x46d560: 0x1620fffb  bnez        $s1, . + 4 + (-0x5 << 2)
label_46d564:
    if (ctx->pc == 0x46D564u) {
        ctx->pc = 0x46D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D560u;
        // 0x46d564: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D568u;
        goto label_46d568;
    }
    ctx->pc = 0x46D560u;
    {
        const bool branch_taken_0x46d560 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x46D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D560u;
        // 0x46d564: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d560) {
            ctx->pc = 0x46D550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46d550;
        }
    }
    ctx->pc = 0x46D568u;
label_46d568:
    // 0x46d568: 0x8ec2010c  lw          $v0, 0x10C($s6)
    ctx->pc = 0x46d568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
label_46d56c:
    // 0x46d56c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46d56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46d570:
    // 0x46d570: 0x40f809  jalr        $v0
label_46d574:
    if (ctx->pc == 0x46D574u) {
        ctx->pc = 0x46D578u;
        goto label_46d578;
    }
    ctx->pc = 0x46D570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46D578u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D570u, 0x46D578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46D578u;
label_46d578:
    // 0x46d578: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x46d578u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_46d57c:
    // 0x46d57c: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x46d57cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_46d580:
    // 0x46d580: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x46d580u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46d584:
    // 0x46d584: 0x10000021  b           . + 4 + (0x21 << 2)
label_46d588:
    if (ctx->pc == 0x46D588u) {
        ctx->pc = 0x46D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D584u;
        // 0x46d588: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D58Cu;
        goto label_46d58c;
    }
    ctx->pc = 0x46D584u;
    {
        const bool branch_taken_0x46d584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D584u;
        // 0x46d588: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d584) {
            ctx->pc = 0x46D60Cu;
            goto label_46d60c;
        }
    }
    ctx->pc = 0x46D58Cu;
label_46d58c:
    // 0x46d58c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x46d58cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_46d590:
    // 0x46d590: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x46d590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_46d594:
    // 0x46d594: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x46d594u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_46d598:
    // 0x46d598: 0x96020018  lhu         $v0, 0x18($s0)
    ctx->pc = 0x46d598u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_46d59c:
    // 0x46d59c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46d59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_46d5a0:
    // 0x46d5a0: 0xa6020018  sh          $v0, 0x18($s0)
    ctx->pc = 0x46d5a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 2));
label_46d5a4:
    // 0x46d5a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x46d5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_46d5a8:
    // 0x46d5a8: 0xc11b448  jal         func_46D120
label_46d5ac:
    if (ctx->pc == 0x46D5ACu) {
        ctx->pc = 0x46D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D5A8u;
        // 0x46d5ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D5B0u;
        goto label_46d5b0;
    }
    ctx->pc = 0x46D5A8u;
    SET_GPR_U32(ctx, 31, 0x46D5B0u);
    ctx->pc = 0x46D5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46D5A8u;
    // 0x46d5ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D120u, 0x46D5A8u, 0x46D5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D5B0u;
label_46d5b0:
    // 0x46d5b0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x46d5b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_46d5b4:
    // 0x46d5b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46d5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46d5b8:
    // 0x46d5b8: 0xc11b3e4  jal         func_46CF90
label_46d5bc:
    if (ctx->pc == 0x46D5BCu) {
        ctx->pc = 0x46D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D5B8u;
        // 0x46d5bc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D5C0u;
        goto label_46d5c0;
    }
    ctx->pc = 0x46D5B8u;
    SET_GPR_U32(ctx, 31, 0x46D5C0u);
    ctx->pc = 0x46D5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46D5B8u;
    // 0x46d5bc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46CF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CF90u, 0x46D5B8u, 0x46D5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D5C0u;
label_46d5c0:
    // 0x46d5c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x46d5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_46d5c4:
    // 0x46d5c4: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x46d5c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_46d5c8:
    // 0x46d5c8: 0x5460ff95  bnel        $v1, $zero, . + 4 + (-0x6B << 2)
label_46d5cc:
    if (ctx->pc == 0x46D5CCu) {
        ctx->pc = 0x46D5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D5C8u;
        // 0x46d5cc: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D5D0u;
        goto label_46d5d0;
    }
    ctx->pc = 0x46D5C8u;
    {
        const bool branch_taken_0x46d5c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x46d5c8) {
            ctx->pc = 0x46D5CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46D5C8u;
            // 0x46d5cc: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46D420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46d420;
        }
    }
    ctx->pc = 0x46D5D0u;
label_46d5d0:
    // 0x46d5d0: 0x26e3ad18  addiu       $v1, $s7, -0x52E8
    ctx->pc = 0x46d5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946072));
label_46d5d4:
    // 0x46d5d4: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x46d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_46d5d8:
    // 0x46d5d8: 0x40f809  jalr        $v0
label_46d5dc:
    if (ctx->pc == 0x46D5DCu) {
        ctx->pc = 0x46D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D5D8u;
        // 0x46d5dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D5E0u;
        goto label_46d5e0;
    }
    ctx->pc = 0x46D5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46D5E0u);
        ctx->pc = 0x46D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D5D8u;
        // 0x46d5dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D5D8u, 0x46D5E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46D5E0u;
label_46d5e0:
    // 0x46d5e0: 0x1000000a  b           . + 4 + (0xA << 2)
label_46d5e4:
    if (ctx->pc == 0x46D5E4u) {
        ctx->pc = 0x46D5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D5E0u;
        // 0x46d5e4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D5E8u;
        goto label_46d5e8;
    }
    ctx->pc = 0x46D5E0u;
    {
        const bool branch_taken_0x46d5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D5E0u;
        // 0x46d5e4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d5e0) {
            ctx->pc = 0x46D60Cu;
            goto label_46d60c;
        }
    }
    ctx->pc = 0x46D5E8u;
label_46d5e8:
    // 0x46d5e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x46d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46d5ec:
    // 0x46d5ec: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x46d5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_46d5f0:
    // 0x46d5f0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x46d5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_46d5f4:
    // 0x46d5f4: 0xc11eff2  jal         func_47BFC8
label_46d5f8:
    if (ctx->pc == 0x46D5F8u) {
        ctx->pc = 0x46D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D5F4u;
        // 0x46d5f8: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D5FCu;
        goto label_46d5fc;
    }
    ctx->pc = 0x46D5F4u;
    SET_GPR_U32(ctx, 31, 0x46D5FCu);
    ctx->pc = 0x46D5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46D5F4u;
    // 0x46d5f8: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x46D5F4u, 0x46D5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D5FCu;
label_46d5fc:
    // 0x46d5fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x46d5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_46d600:
    // 0x46d600: 0xc11f024  jal         func_47C090
label_46d604:
    if (ctx->pc == 0x46D604u) {
        ctx->pc = 0x46D604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D600u;
        // 0x46d604: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D608u;
        goto label_46d608;
    }
    ctx->pc = 0x46D600u;
    SET_GPR_U32(ctx, 31, 0x46D608u);
    ctx->pc = 0x46D604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46D600u;
    // 0x46d604: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x46D600u, 0x46D608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D608u;
label_46d608:
    // 0x46d608: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x46d608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46d60c:
    // 0x46d60c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x46d60cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_46d610:
    // 0x46d610: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x46d610u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_46d614:
    // 0x46d614: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x46d614u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_46d618:
    // 0x46d618: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x46d618u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_46d61c:
    // 0x46d61c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x46d61cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_46d620:
    // 0x46d620: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x46d620u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_46d624:
    // 0x46d624: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x46d624u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_46d628:
    // 0x46d628: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x46d628u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46d62c:
    // 0x46d62c: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x46d62cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46d630:
    // 0x46d630: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x46d630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_46d634:
    // 0x46d634: 0x3e00008  jr          $ra
label_46d638:
    if (ctx->pc == 0x46D638u) {
        ctx->pc = 0x46D638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D634u;
        // 0x46d638: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D63Cu;
        goto label_46d63c;
    }
    ctx->pc = 0x46D634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46D638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D634u;
        // 0x46d638: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46D63Cu;
label_46d63c:
    // 0x46d63c: 0x0  nop
    ctx->pc = 0x46d63cu;
    // NOP
    ctx->pc = 0x46d640u;
}
