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

// Function: sub_003AF280
// Address: 0x3af280 - 0x3af510
void sub_003AF280_0x3af280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AF280_0x3af280");
#endif

    switch (ctx->pc) {
        case 0x3af280u: goto label_3af280;
        case 0x3af284u: goto label_3af284;
        case 0x3af288u: goto label_3af288;
        case 0x3af28cu: goto label_3af28c;
        case 0x3af290u: goto label_3af290;
        case 0x3af294u: goto label_3af294;
        case 0x3af298u: goto label_3af298;
        case 0x3af29cu: goto label_3af29c;
        case 0x3af2a0u: goto label_3af2a0;
        case 0x3af2a4u: goto label_3af2a4;
        case 0x3af2a8u: goto label_3af2a8;
        case 0x3af2acu: goto label_3af2ac;
        case 0x3af2b0u: goto label_3af2b0;
        case 0x3af2b4u: goto label_3af2b4;
        case 0x3af2b8u: goto label_3af2b8;
        case 0x3af2bcu: goto label_3af2bc;
        case 0x3af2c0u: goto label_3af2c0;
        case 0x3af2c4u: goto label_3af2c4;
        case 0x3af2c8u: goto label_3af2c8;
        case 0x3af2ccu: goto label_3af2cc;
        case 0x3af2d0u: goto label_3af2d0;
        case 0x3af2d4u: goto label_3af2d4;
        case 0x3af2d8u: goto label_3af2d8;
        case 0x3af2dcu: goto label_3af2dc;
        case 0x3af2e0u: goto label_3af2e0;
        case 0x3af2e4u: goto label_3af2e4;
        case 0x3af2e8u: goto label_3af2e8;
        case 0x3af2ecu: goto label_3af2ec;
        case 0x3af2f0u: goto label_3af2f0;
        case 0x3af2f4u: goto label_3af2f4;
        case 0x3af2f8u: goto label_3af2f8;
        case 0x3af2fcu: goto label_3af2fc;
        case 0x3af300u: goto label_3af300;
        case 0x3af304u: goto label_3af304;
        case 0x3af308u: goto label_3af308;
        case 0x3af30cu: goto label_3af30c;
        case 0x3af310u: goto label_3af310;
        case 0x3af314u: goto label_3af314;
        case 0x3af318u: goto label_3af318;
        case 0x3af31cu: goto label_3af31c;
        case 0x3af320u: goto label_3af320;
        case 0x3af324u: goto label_3af324;
        case 0x3af328u: goto label_3af328;
        case 0x3af32cu: goto label_3af32c;
        case 0x3af330u: goto label_3af330;
        case 0x3af334u: goto label_3af334;
        case 0x3af338u: goto label_3af338;
        case 0x3af33cu: goto label_3af33c;
        case 0x3af340u: goto label_3af340;
        case 0x3af344u: goto label_3af344;
        case 0x3af348u: goto label_3af348;
        case 0x3af34cu: goto label_3af34c;
        case 0x3af350u: goto label_3af350;
        case 0x3af354u: goto label_3af354;
        case 0x3af358u: goto label_3af358;
        case 0x3af35cu: goto label_3af35c;
        case 0x3af360u: goto label_3af360;
        case 0x3af364u: goto label_3af364;
        case 0x3af368u: goto label_3af368;
        case 0x3af36cu: goto label_3af36c;
        case 0x3af370u: goto label_3af370;
        case 0x3af374u: goto label_3af374;
        case 0x3af378u: goto label_3af378;
        case 0x3af37cu: goto label_3af37c;
        case 0x3af380u: goto label_3af380;
        case 0x3af384u: goto label_3af384;
        case 0x3af388u: goto label_3af388;
        case 0x3af38cu: goto label_3af38c;
        case 0x3af390u: goto label_3af390;
        case 0x3af394u: goto label_3af394;
        case 0x3af398u: goto label_3af398;
        case 0x3af39cu: goto label_3af39c;
        case 0x3af3a0u: goto label_3af3a0;
        case 0x3af3a4u: goto label_3af3a4;
        case 0x3af3a8u: goto label_3af3a8;
        case 0x3af3acu: goto label_3af3ac;
        case 0x3af3b0u: goto label_3af3b0;
        case 0x3af3b4u: goto label_3af3b4;
        case 0x3af3b8u: goto label_3af3b8;
        case 0x3af3bcu: goto label_3af3bc;
        case 0x3af3c0u: goto label_3af3c0;
        case 0x3af3c4u: goto label_3af3c4;
        case 0x3af3c8u: goto label_3af3c8;
        case 0x3af3ccu: goto label_3af3cc;
        case 0x3af3d0u: goto label_3af3d0;
        case 0x3af3d4u: goto label_3af3d4;
        case 0x3af3d8u: goto label_3af3d8;
        case 0x3af3dcu: goto label_3af3dc;
        case 0x3af3e0u: goto label_3af3e0;
        case 0x3af3e4u: goto label_3af3e4;
        case 0x3af3e8u: goto label_3af3e8;
        case 0x3af3ecu: goto label_3af3ec;
        case 0x3af3f0u: goto label_3af3f0;
        case 0x3af3f4u: goto label_3af3f4;
        case 0x3af3f8u: goto label_3af3f8;
        case 0x3af3fcu: goto label_3af3fc;
        case 0x3af400u: goto label_3af400;
        case 0x3af404u: goto label_3af404;
        case 0x3af408u: goto label_3af408;
        case 0x3af40cu: goto label_3af40c;
        case 0x3af410u: goto label_3af410;
        case 0x3af414u: goto label_3af414;
        case 0x3af418u: goto label_3af418;
        case 0x3af41cu: goto label_3af41c;
        case 0x3af420u: goto label_3af420;
        case 0x3af424u: goto label_3af424;
        case 0x3af428u: goto label_3af428;
        case 0x3af42cu: goto label_3af42c;
        case 0x3af430u: goto label_3af430;
        case 0x3af434u: goto label_3af434;
        case 0x3af438u: goto label_3af438;
        case 0x3af43cu: goto label_3af43c;
        case 0x3af440u: goto label_3af440;
        case 0x3af444u: goto label_3af444;
        case 0x3af448u: goto label_3af448;
        case 0x3af44cu: goto label_3af44c;
        case 0x3af450u: goto label_3af450;
        case 0x3af454u: goto label_3af454;
        case 0x3af458u: goto label_3af458;
        case 0x3af45cu: goto label_3af45c;
        case 0x3af460u: goto label_3af460;
        case 0x3af464u: goto label_3af464;
        case 0x3af468u: goto label_3af468;
        case 0x3af46cu: goto label_3af46c;
        case 0x3af470u: goto label_3af470;
        case 0x3af474u: goto label_3af474;
        case 0x3af478u: goto label_3af478;
        case 0x3af47cu: goto label_3af47c;
        case 0x3af480u: goto label_3af480;
        case 0x3af484u: goto label_3af484;
        case 0x3af488u: goto label_3af488;
        case 0x3af48cu: goto label_3af48c;
        case 0x3af490u: goto label_3af490;
        case 0x3af494u: goto label_3af494;
        case 0x3af498u: goto label_3af498;
        case 0x3af49cu: goto label_3af49c;
        case 0x3af4a0u: goto label_3af4a0;
        case 0x3af4a4u: goto label_3af4a4;
        case 0x3af4a8u: goto label_3af4a8;
        case 0x3af4acu: goto label_3af4ac;
        case 0x3af4b0u: goto label_3af4b0;
        case 0x3af4b4u: goto label_3af4b4;
        case 0x3af4b8u: goto label_3af4b8;
        case 0x3af4bcu: goto label_3af4bc;
        case 0x3af4c0u: goto label_3af4c0;
        case 0x3af4c4u: goto label_3af4c4;
        case 0x3af4c8u: goto label_3af4c8;
        case 0x3af4ccu: goto label_3af4cc;
        case 0x3af4d0u: goto label_3af4d0;
        case 0x3af4d4u: goto label_3af4d4;
        case 0x3af4d8u: goto label_3af4d8;
        case 0x3af4dcu: goto label_3af4dc;
        case 0x3af4e0u: goto label_3af4e0;
        case 0x3af4e4u: goto label_3af4e4;
        case 0x3af4e8u: goto label_3af4e8;
        case 0x3af4ecu: goto label_3af4ec;
        case 0x3af4f0u: goto label_3af4f0;
        case 0x3af4f4u: goto label_3af4f4;
        case 0x3af4f8u: goto label_3af4f8;
        case 0x3af4fcu: goto label_3af4fc;
        case 0x3af500u: goto label_3af500;
        case 0x3af504u: goto label_3af504;
        case 0x3af508u: goto label_3af508;
        case 0x3af50cu: goto label_3af50c;
        default: break;
    }

    ctx->pc = 0x3af280u;

label_3af280:
    // 0x3af280: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3af280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_3af284:
    // 0x3af284: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x3af284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_3af288:
    // 0x3af288: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x3af288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_3af28c:
    // 0x3af28c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3af28cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3af290:
    // 0x3af290: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x3af290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_3af294:
    // 0x3af294: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3af294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3af298:
    // 0x3af298: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x3af298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_3af29c:
    // 0x3af29c: 0x3c127a00  lui         $s2, 0x7A00
    ctx->pc = 0x3af29cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)31232 << 16));
label_3af2a0:
    // 0x3af2a0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x3af2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_3af2a4:
    // 0x3af2a4: 0x365215ff  ori         $s2, $s2, 0x15FF
    ctx->pc = 0x3af2a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)5631);
label_3af2a8:
    // 0x3af2a8: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x3af2a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_3af2ac:
    // 0x3af2ac: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x3af2acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_3af2b0:
    // 0x3af2b0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3af2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3af2b4:
    // 0x3af2b4: 0x3c01be80  lui         $at, 0xBE80
    ctx->pc = 0x3af2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48768 << 16));
label_3af2b8:
    // 0x3af2b8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3af2b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3af2bc:
    // 0x3af2bc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3af2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3af2c0:
    // 0x3af2c0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3af2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_3af2c4:
    // 0x3af2c4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3af2c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3af2c8:
    // 0x3af2c8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3af2c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3af2cc:
    // 0x3af2cc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3af2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3af2d0:
    // 0x3af2d0: 0x40f809  jalr        $v0
label_3af2d4:
    if (ctx->pc == 0x3AF2D4u) {
        ctx->pc = 0x3AF2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF2D0u;
        // 0x3af2d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF2D8u;
        goto label_3af2d8;
    }
    ctx->pc = 0x3AF2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AF2D8u);
        ctx->pc = 0x3AF2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF2D0u;
        // 0x3af2d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF2D0u, 0x3AF2D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AF2D8u;
label_3af2d8:
    // 0x3af2d8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3af2d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3af2dc:
    // 0x3af2dc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3af2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3af2e0:
    // 0x3af2e0: 0x3c020480  lui         $v0, 0x480
    ctx->pc = 0x3af2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1152 << 16));
label_3af2e4:
    // 0x3af2e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3af2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3af2e8:
    // 0x3af2e8: 0xc0e858c  jal         func_3A1630
label_3af2ec:
    if (ctx->pc == 0x3AF2ECu) {
        ctx->pc = 0x3AF2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF2E8u;
        // 0x3af2ec: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF2F0u;
        goto label_3af2f0;
    }
    ctx->pc = 0x3AF2E8u;
    SET_GPR_U32(ctx, 31, 0x3AF2F0u);
    ctx->pc = 0x3AF2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF2E8u;
    // 0x3af2ec: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3AF2E8u, 0x3AF2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF2F0u;
label_3af2f0:
    // 0x3af2f0: 0xc0ea146  jal         func_3A8518
label_3af2f4:
    if (ctx->pc == 0x3AF2F4u) {
        ctx->pc = 0x3AF2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF2F0u;
        // 0x3af2f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF2F8u;
        goto label_3af2f8;
    }
    ctx->pc = 0x3AF2F0u;
    SET_GPR_U32(ctx, 31, 0x3AF2F8u);
    ctx->pc = 0x3AF2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF2F0u;
    // 0x3af2f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3AF2F0u, 0x3AF2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF2F8u;
label_3af2f8:
    // 0x3af2f8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3af2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3af2fc:
    // 0x3af2fc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3af2fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3af300:
    // 0x3af300: 0xc0ea12a  jal         func_3A84A8
label_3af304:
    if (ctx->pc == 0x3AF304u) {
        ctx->pc = 0x3AF304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF300u;
        // 0x3af304: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF308u;
        goto label_3af308;
    }
    ctx->pc = 0x3AF300u;
    SET_GPR_U32(ctx, 31, 0x3AF308u);
    ctx->pc = 0x3AF304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF300u;
    // 0x3af304: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AF300u, 0x3AF308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF308u;
label_3af308:
    // 0x3af308: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3af308u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3af30c:
    // 0x3af30c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3af30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3af310:
    // 0x3af310: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3af310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3af314:
    // 0x3af314: 0xc0ea12a  jal         func_3A84A8
label_3af318:
    if (ctx->pc == 0x3AF318u) {
        ctx->pc = 0x3AF318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF314u;
        // 0x3af318: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF31Cu;
        goto label_3af31c;
    }
    ctx->pc = 0x3AF314u;
    SET_GPR_U32(ctx, 31, 0x3AF31Cu);
    ctx->pc = 0x3AF318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF314u;
    // 0x3af318: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AF314u, 0x3AF31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF31Cu;
label_3af31c:
    // 0x3af31c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3af31cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3af320:
    // 0x3af320: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3af320u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3af324:
    // 0x3af324: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3af324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3af328:
    // 0x3af328: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3af328u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3af32c:
    // 0x3af32c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3af32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3af330:
    // 0x3af330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3af330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3af334:
    // 0x3af334: 0xc0cd518  jal         func_335460
label_3af338:
    if (ctx->pc == 0x3AF338u) {
        ctx->pc = 0x3AF338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF334u;
        // 0x3af338: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF33Cu;
        goto label_3af33c;
    }
    ctx->pc = 0x3AF334u;
    SET_GPR_U32(ctx, 31, 0x3AF33Cu);
    ctx->pc = 0x3AF338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF334u;
    // 0x3af338: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AF334u, 0x3AF33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF33Cu;
label_3af33c:
    // 0x3af33c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x3af33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3af340:
    // 0x3af340: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3af340u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3af344:
    // 0x3af344: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3af344u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3af348:
    // 0x3af348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3af348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3af34c:
    // 0x3af34c: 0xc0cd518  jal         func_335460
label_3af350:
    if (ctx->pc == 0x3AF350u) {
        ctx->pc = 0x3AF350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF34Cu;
        // 0x3af350: 0x46000d40  add.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF354u;
        goto label_3af354;
    }
    ctx->pc = 0x3AF34Cu;
    SET_GPR_U32(ctx, 31, 0x3AF354u);
    ctx->pc = 0x3AF350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF34Cu;
    // 0x3af350: 0x46000d40  add.s       $f21, $f1, $f0 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AF34Cu, 0x3AF354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF354u;
label_3af354:
    // 0x3af354: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x3af354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3af358:
    // 0x3af358: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3af358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3af35c:
    // 0x3af35c: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x3af35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_3af360:
    // 0x3af360: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3af360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3af364:
    // 0x3af364: 0xc1073cc  jal         func_41CF30
label_3af368:
    if (ctx->pc == 0x3AF368u) {
        ctx->pc = 0x3AF368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF364u;
        // 0x3af368: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF36Cu;
        goto label_3af36c;
    }
    ctx->pc = 0x3AF364u;
    SET_GPR_U32(ctx, 31, 0x3AF36Cu);
    ctx->pc = 0x3AF368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF364u;
    // 0x3af368: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3AF364u, 0x3AF36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF36Cu;
label_3af36c:
    // 0x3af36c: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x3af36cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3af370:
    // 0x3af370: 0x3c0355c9  lui         $v1, 0x55C9
    ctx->pc = 0x3af370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21961 << 16));
label_3af374:
    // 0x3af374: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x3af374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3af378:
    // 0x3af378: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3af378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_3af37c:
    // 0x3af37c: 0x7e240010  sq          $a0, 0x10($s1)
    ctx->pc = 0x3af37cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 4));
label_3af380:
    // 0x3af380: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3af380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3af384:
    // 0x3af384: 0x62900b  movn        $s2, $v1, $v0
    ctx->pc = 0x3af384u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_3af388:
    // 0x3af388: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3af388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3af38c:
    // 0x3af38c: 0x84c40070  lh          $a0, 0x70($a2)
    ctx->pc = 0x3af38cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
label_3af390:
    // 0x3af390: 0x8cc30074  lw          $v1, 0x74($a2)
    ctx->pc = 0x3af390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_3af394:
    // 0x3af394: 0x60f809  jalr        $v1
label_3af398:
    if (ctx->pc == 0x3AF398u) {
        ctx->pc = 0x3AF398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF394u;
        // 0x3af398: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF39Cu;
        goto label_3af39c;
    }
    ctx->pc = 0x3AF394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AF39Cu);
        ctx->pc = 0x3AF398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF394u;
        // 0x3af398: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF394u, 0x3AF39Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AF39Cu;
label_3af39c:
    // 0x3af39c: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x3af39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
label_3af3a0:
    // 0x3af3a0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3af3a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3af3a4:
    // 0x3af3a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3af3a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3af3a8:
    // 0x3af3a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3af3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3af3ac:
    // 0x3af3ac: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3af3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3af3b0:
    // 0x3af3b0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3af3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3af3b4:
    // 0x3af3b4: 0x2428024  and         $s0, $s2, $v0
    ctx->pc = 0x3af3b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_3af3b8:
    // 0x3af3b8: 0xe62000c0  swc1        $f0, 0xC0($s1)
    ctx->pc = 0x3af3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3af3bc:
    // 0x3af3bc: 0x34630034  ori         $v1, $v1, 0x34
    ctx->pc = 0x3af3bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52);
label_3af3c0:
    // 0x3af3c0: 0xae3000b0  sw          $s0, 0xB0($s1)
    ctx->pc = 0x3af3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 16));
label_3af3c4:
    // 0x3af3c4: 0xae2300c4  sw          $v1, 0xC4($s1)
    ctx->pc = 0x3af3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
label_3af3c8:
    // 0x3af3c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3af3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3af3cc:
    // 0x3af3cc: 0xae3200b4  sw          $s2, 0xB4($s1)
    ctx->pc = 0x3af3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 18));
label_3af3d0:
    // 0x3af3d0: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x3af3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
label_3af3d4:
    // 0x3af3d4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x3af3d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_3af3d8:
    // 0x3af3d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3af3d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3af3dc:
    // 0x3af3dc: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x3af3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_3af3e0:
    // 0x3af3e0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3af3e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3af3e4:
    // 0x3af3e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3af3e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3af3e8:
    // 0x3af3e8: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x3af3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_3af3ec:
    // 0x3af3ec: 0xe62000cc  swc1        $f0, 0xCC($s1)
    ctx->pc = 0x3af3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 204), bits); }
label_3af3f0:
    // 0x3af3f0: 0x1662001d  bne         $s3, $v0, . + 4 + (0x1D << 2)
label_3af3f4:
    if (ctx->pc == 0x3AF3F4u) {
        ctx->pc = 0x3AF3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF3F0u;
        // 0x3af3f4: 0xe62100d0  swc1        $f1, 0xD0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF3F8u;
        goto label_3af3f8;
    }
    ctx->pc = 0x3AF3F0u;
    {
        const bool branch_taken_0x3af3f0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AF3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF3F0u;
        // 0x3af3f4: 0xe62100d0  swc1        $f1, 0xD0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af3f0) {
            ctx->pc = 0x3AF468u;
            goto label_3af468;
        }
    }
    ctx->pc = 0x3AF3F8u;
label_3af3f8:
    // 0x3af3f8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x3af3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3af3fc:
    // 0x3af3fc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3af3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3af400:
    // 0x3af400: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3af400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3af404:
    // 0x3af404: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3af404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3af408:
    // 0x3af408: 0x84c40070  lh          $a0, 0x70($a2)
    ctx->pc = 0x3af408u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
label_3af40c:
    // 0x3af40c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x3af40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_3af410:
    // 0x3af410: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3af410u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3af414:
    // 0x3af414: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3af414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3af418:
    // 0x3af418: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x3af418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_3af41c:
    // 0x3af41c: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x3af41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_3af420:
    // 0x3af420: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x3af420u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3af424:
    // 0x3af424: 0xe7b40044  swc1        $f20, 0x44($sp)
    ctx->pc = 0x3af424u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3af428:
    // 0x3af428: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x3af428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_3af42c:
    // 0x3af42c: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x3af42cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_3af430:
    // 0x3af430: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x3af430u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3af434:
    // 0x3af434: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3af434u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3af438:
    // 0x3af438: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x3af438u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_3af43c:
    // 0x3af43c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3af43cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3af440:
    // 0x3af440: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3af440u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3af444:
    // 0x3af444: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3af444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3af448:
    // 0x3af448: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3af448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3af44c:
    // 0x3af44c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3af44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3af450:
    // 0x3af450: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3af450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3af454:
    // 0x3af454: 0x8cc30074  lw          $v1, 0x74($a2)
    ctx->pc = 0x3af454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_3af458:
    // 0x3af458: 0x60f809  jalr        $v1
label_3af45c:
    if (ctx->pc == 0x3AF45Cu) {
        ctx->pc = 0x3AF460u;
        goto label_3af460;
    }
    ctx->pc = 0x3AF458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AF460u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF458u, 0x3AF460u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AF460u;
label_3af460:
    // 0x3af460: 0x360200eb  ori         $v0, $s0, 0xEB
    ctx->pc = 0x3af460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)235);
label_3af464:
    // 0x3af464: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x3af464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
label_3af468:
    // 0x3af468: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3af468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3af46c:
    // 0x3af46c: 0x5662001e  bnel        $s3, $v0, . + 4 + (0x1E << 2)
label_3af470:
    if (ctx->pc == 0x3AF470u) {
        ctx->pc = 0x3AF470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF46Cu;
        // 0x3af470: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF474u;
        goto label_3af474;
    }
    ctx->pc = 0x3AF46Cu;
    {
        const bool branch_taken_0x3af46c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x3af46c) {
            ctx->pc = 0x3AF470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AF46Cu;
            // 0x3af470: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AF4E8u;
            goto label_3af4e8;
        }
    }
    ctx->pc = 0x3AF474u;
label_3af474:
    // 0x3af474: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x3af474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3af478:
    // 0x3af478: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3af478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3af47c:
    // 0x3af47c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3af47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3af480:
    // 0x3af480: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3af480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3af484:
    // 0x3af484: 0x84c40070  lh          $a0, 0x70($a2)
    ctx->pc = 0x3af484u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
label_3af488:
    // 0x3af488: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x3af488u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3af48c:
    // 0x3af48c: 0xe7b40044  swc1        $f20, 0x44($sp)
    ctx->pc = 0x3af48cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3af490:
    // 0x3af490: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x3af490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_3af494:
    // 0x3af494: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x3af494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_3af498:
    // 0x3af498: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x3af498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_3af49c:
    // 0x3af49c: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x3af49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_3af4a0:
    // 0x3af4a0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3af4a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3af4a4:
    // 0x3af4a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3af4a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3af4a8:
    // 0x3af4a8: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x3af4a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3af4ac:
    // 0x3af4ac: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x3af4acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_3af4b0:
    // 0x3af4b0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3af4b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3af4b4:
    // 0x3af4b4: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x3af4b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_3af4b8:
    // 0x3af4b8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3af4b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3af4bc:
    // 0x3af4bc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3af4bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3af4c0:
    // 0x3af4c0: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3af4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3af4c4:
    // 0x3af4c4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3af4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3af4c8:
    // 0x3af4c8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3af4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3af4cc:
    // 0x3af4cc: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3af4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3af4d0:
    // 0x3af4d0: 0x8cc30074  lw          $v1, 0x74($a2)
    ctx->pc = 0x3af4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_3af4d4:
    // 0x3af4d4: 0x60f809  jalr        $v1
label_3af4d8:
    if (ctx->pc == 0x3AF4D8u) {
        ctx->pc = 0x3AF4DCu;
        goto label_3af4dc;
    }
    ctx->pc = 0x3AF4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AF4DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF4D4u, 0x3AF4DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AF4DCu;
label_3af4dc:
    // 0x3af4dc: 0x360200d7  ori         $v0, $s0, 0xD7
    ctx->pc = 0x3af4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)215);
label_3af4e0:
    // 0x3af4e0: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x3af4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
label_3af4e4:
    // 0x3af4e4: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x3af4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_3af4e8:
    // 0x3af4e8: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x3af4e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3af4ec:
    // 0x3af4ec: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x3af4ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3af4f0:
    // 0x3af4f0: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x3af4f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3af4f4:
    // 0x3af4f4: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x3af4f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3af4f8:
    // 0x3af4f8: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x3af4f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3af4fc:
    // 0x3af4fc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3af4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3af500:
    // 0x3af500: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x3af500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3af504:
    // 0x3af504: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x3af504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3af508:
    // 0x3af508: 0x3e00008  jr          $ra
label_3af50c:
    if (ctx->pc == 0x3AF50Cu) {
        ctx->pc = 0x3AF50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF508u;
        // 0x3af50c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF510u;
        goto label_fallthrough_0x3af508;
    }
    ctx->pc = 0x3AF508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF508u;
        // 0x3af50c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3af508:
    ctx->pc = 0x3AF510u;
}
