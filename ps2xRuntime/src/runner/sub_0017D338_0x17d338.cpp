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

// Function: sub_0017D338
// Address: 0x17d338 - 0x17d510
void sub_0017D338_0x17d338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D338_0x17d338");
#endif

    switch (ctx->pc) {
        case 0x17d338u: goto label_17d338;
        case 0x17d33cu: goto label_17d33c;
        case 0x17d340u: goto label_17d340;
        case 0x17d344u: goto label_17d344;
        case 0x17d348u: goto label_17d348;
        case 0x17d34cu: goto label_17d34c;
        case 0x17d350u: goto label_17d350;
        case 0x17d354u: goto label_17d354;
        case 0x17d358u: goto label_17d358;
        case 0x17d35cu: goto label_17d35c;
        case 0x17d360u: goto label_17d360;
        case 0x17d364u: goto label_17d364;
        case 0x17d368u: goto label_17d368;
        case 0x17d36cu: goto label_17d36c;
        case 0x17d370u: goto label_17d370;
        case 0x17d374u: goto label_17d374;
        case 0x17d378u: goto label_17d378;
        case 0x17d37cu: goto label_17d37c;
        case 0x17d380u: goto label_17d380;
        case 0x17d384u: goto label_17d384;
        case 0x17d388u: goto label_17d388;
        case 0x17d38cu: goto label_17d38c;
        case 0x17d390u: goto label_17d390;
        case 0x17d394u: goto label_17d394;
        case 0x17d398u: goto label_17d398;
        case 0x17d39cu: goto label_17d39c;
        case 0x17d3a0u: goto label_17d3a0;
        case 0x17d3a4u: goto label_17d3a4;
        case 0x17d3a8u: goto label_17d3a8;
        case 0x17d3acu: goto label_17d3ac;
        case 0x17d3b0u: goto label_17d3b0;
        case 0x17d3b4u: goto label_17d3b4;
        case 0x17d3b8u: goto label_17d3b8;
        case 0x17d3bcu: goto label_17d3bc;
        case 0x17d3c0u: goto label_17d3c0;
        case 0x17d3c4u: goto label_17d3c4;
        case 0x17d3c8u: goto label_17d3c8;
        case 0x17d3ccu: goto label_17d3cc;
        case 0x17d3d0u: goto label_17d3d0;
        case 0x17d3d4u: goto label_17d3d4;
        case 0x17d3d8u: goto label_17d3d8;
        case 0x17d3dcu: goto label_17d3dc;
        case 0x17d3e0u: goto label_17d3e0;
        case 0x17d3e4u: goto label_17d3e4;
        case 0x17d3e8u: goto label_17d3e8;
        case 0x17d3ecu: goto label_17d3ec;
        case 0x17d3f0u: goto label_17d3f0;
        case 0x17d3f4u: goto label_17d3f4;
        case 0x17d3f8u: goto label_17d3f8;
        case 0x17d3fcu: goto label_17d3fc;
        case 0x17d400u: goto label_17d400;
        case 0x17d404u: goto label_17d404;
        case 0x17d408u: goto label_17d408;
        case 0x17d40cu: goto label_17d40c;
        case 0x17d410u: goto label_17d410;
        case 0x17d414u: goto label_17d414;
        case 0x17d418u: goto label_17d418;
        case 0x17d41cu: goto label_17d41c;
        case 0x17d420u: goto label_17d420;
        case 0x17d424u: goto label_17d424;
        case 0x17d428u: goto label_17d428;
        case 0x17d42cu: goto label_17d42c;
        case 0x17d430u: goto label_17d430;
        case 0x17d434u: goto label_17d434;
        case 0x17d438u: goto label_17d438;
        case 0x17d43cu: goto label_17d43c;
        case 0x17d440u: goto label_17d440;
        case 0x17d444u: goto label_17d444;
        case 0x17d448u: goto label_17d448;
        case 0x17d44cu: goto label_17d44c;
        case 0x17d450u: goto label_17d450;
        case 0x17d454u: goto label_17d454;
        case 0x17d458u: goto label_17d458;
        case 0x17d45cu: goto label_17d45c;
        case 0x17d460u: goto label_17d460;
        case 0x17d464u: goto label_17d464;
        case 0x17d468u: goto label_17d468;
        case 0x17d46cu: goto label_17d46c;
        case 0x17d470u: goto label_17d470;
        case 0x17d474u: goto label_17d474;
        case 0x17d478u: goto label_17d478;
        case 0x17d47cu: goto label_17d47c;
        case 0x17d480u: goto label_17d480;
        case 0x17d484u: goto label_17d484;
        case 0x17d488u: goto label_17d488;
        case 0x17d48cu: goto label_17d48c;
        case 0x17d490u: goto label_17d490;
        case 0x17d494u: goto label_17d494;
        case 0x17d498u: goto label_17d498;
        case 0x17d49cu: goto label_17d49c;
        case 0x17d4a0u: goto label_17d4a0;
        case 0x17d4a4u: goto label_17d4a4;
        case 0x17d4a8u: goto label_17d4a8;
        case 0x17d4acu: goto label_17d4ac;
        case 0x17d4b0u: goto label_17d4b0;
        case 0x17d4b4u: goto label_17d4b4;
        case 0x17d4b8u: goto label_17d4b8;
        case 0x17d4bcu: goto label_17d4bc;
        case 0x17d4c0u: goto label_17d4c0;
        case 0x17d4c4u: goto label_17d4c4;
        case 0x17d4c8u: goto label_17d4c8;
        case 0x17d4ccu: goto label_17d4cc;
        case 0x17d4d0u: goto label_17d4d0;
        case 0x17d4d4u: goto label_17d4d4;
        case 0x17d4d8u: goto label_17d4d8;
        case 0x17d4dcu: goto label_17d4dc;
        case 0x17d4e0u: goto label_17d4e0;
        case 0x17d4e4u: goto label_17d4e4;
        case 0x17d4e8u: goto label_17d4e8;
        case 0x17d4ecu: goto label_17d4ec;
        case 0x17d4f0u: goto label_17d4f0;
        case 0x17d4f4u: goto label_17d4f4;
        case 0x17d4f8u: goto label_17d4f8;
        case 0x17d4fcu: goto label_17d4fc;
        case 0x17d500u: goto label_17d500;
        case 0x17d504u: goto label_17d504;
        case 0x17d508u: goto label_17d508;
        case 0x17d50cu: goto label_17d50c;
        default: break;
    }

    ctx->pc = 0x17d338u;

label_17d338:
    // 0x17d338: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x17d338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_17d33c:
    // 0x17d33c: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x17d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_17d340:
    // 0x17d340: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x17d340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_17d344:
    // 0x17d344: 0x3406a000  ori         $a2, $zero, 0xA000
    ctx->pc = 0x17d344u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
label_17d348:
    // 0x17d348: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x17d348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_17d34c:
    // 0x17d34c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x17d34cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_17d350:
    // 0x17d350: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x17d350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_17d354:
    // 0x17d354: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17d354u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17d358:
    // 0x17d358: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x17d358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_17d35c:
    // 0x17d35c: 0x3c100055  lui         $s0, 0x55
    ctx->pc = 0x17d35cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
label_17d360:
    // 0x17d360: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x17d360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_17d364:
    // 0x17d364: 0x3c110055  lui         $s1, 0x55
    ctx->pc = 0x17d364u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)85 << 16));
label_17d368:
    // 0x17d368: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x17d368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_17d36c:
    // 0x17d36c: 0x26102240  addiu       $s0, $s0, 0x2240
    ctx->pc = 0x17d36cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8768));
label_17d370:
    // 0x17d370: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x17d370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_17d374:
    // 0x17d374: 0x26312248  addiu       $s1, $s1, 0x2248
    ctx->pc = 0x17d374u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8776));
label_17d378:
    // 0x17d378: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17d378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_17d37c:
    // 0x17d37c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17d37cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17d380:
    // 0x17d380: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x17d380u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_17d384:
    // 0x17d384: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x17d384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_17d388:
    // 0x17d388: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x17d388u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_17d38c:
    // 0x17d38c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x17d38cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17d390:
    // 0x17d390: 0x8e4a27e4  lw          $t2, 0x27E4($s2)
    ctx->pc = 0x17d390u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_17d394:
    // 0x17d394: 0x2409001b  addiu       $t1, $zero, 0x1B
    ctx->pc = 0x17d394u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_17d398:
    // 0x17d398: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x17d398u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17d39c:
    // 0x17d39c: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x17d39cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_17d3a0:
    // 0x17d3a0: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x17d3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_17d3a4:
    // 0x17d3a4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x17d3a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_17d3a8:
    // 0x17d3a8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x17d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_17d3ac:
    // 0x17d3ac: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x17d3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_17d3b0:
    // 0x17d3b0: 0x40f809  jalr        $v0
label_17d3b4:
    if (ctx->pc == 0x17D3B4u) {
        ctx->pc = 0x17D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D3B0u;
        // 0x17d3b4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D3B8u;
        goto label_17d3b8;
    }
    ctx->pc = 0x17D3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17D3B8u);
        ctx->pc = 0x17D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D3B0u;
        // 0x17d3b4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D3B0u, 0x17D3B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17D3B8u;
label_17d3b8:
    // 0x17d3b8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x17d3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_17d3bc:
    // 0x17d3bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17d3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17d3c0:
    // 0x17d3c0: 0x8e4c27e4  lw          $t4, 0x27E4($s2)
    ctx->pc = 0x17d3c0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_17d3c4:
    // 0x17d3c4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x17d3c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17d3c8:
    // 0x17d3c8: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x17d3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_17d3cc:
    // 0x17d3cc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x17d3ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_17d3d0:
    // 0x17d3d0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x17d3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_17d3d4:
    // 0x17d3d4: 0x2409001c  addiu       $t1, $zero, 0x1C
    ctx->pc = 0x17d3d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_17d3d8:
    // 0x17d3d8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x17d3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_17d3dc:
    // 0x17d3dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x17d3dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17d3e0:
    // 0x17d3e0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x17d3e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_17d3e4:
    // 0x17d3e4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x17d3e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17d3e8:
    // 0x17d3e8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x17d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_17d3ec:
    // 0x17d3ec: 0x40f809  jalr        $v0
label_17d3f0:
    if (ctx->pc == 0x17D3F0u) {
        ctx->pc = 0x17D3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D3ECu;
        // 0x17d3f0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D3F4u;
        goto label_17d3f4;
    }
    ctx->pc = 0x17D3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17D3F4u);
        ctx->pc = 0x17D3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D3ECu;
        // 0x17d3f0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D3ECu, 0x17D3F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17D3F4u;
label_17d3f4:
    // 0x17d3f4: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x17d3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_17d3f8:
    // 0x17d3f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17d3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17d3fc:
    // 0x17d3fc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_17d400:
    if (ctx->pc == 0x17D400u) {
        ctx->pc = 0x17D400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D3FCu;
        // 0x17d400: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D404u;
        goto label_17d404;
    }
    ctx->pc = 0x17D3FCu;
    {
        const bool branch_taken_0x17d3fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D3FCu;
        // 0x17d400: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d3fc) {
            ctx->pc = 0x17D434u;
            goto label_17d434;
        }
    }
    ctx->pc = 0x17D404u;
label_17d404:
    // 0x17d404: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17d404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17d408:
    // 0x17d408: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x17d408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_17d40c:
    // 0x17d40c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x17d40cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_17d410:
    // 0x17d410: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x17d410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_17d414:
    // 0x17d414: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17d414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_17d418:
    // 0x17d418: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17d418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17d41c:
    // 0x17d41c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x17d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_17d420:
    // 0x17d420: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x17d420u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_17d424:
    // 0x17d424: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x17d424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_17d428:
    // 0x17d428: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x17d428u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_17d42c:
    // 0x17d42c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_17d430:
    if (ctx->pc == 0x17D430u) {
        ctx->pc = 0x17D430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D42Cu;
        // 0x17d430: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D434u;
        goto label_17d434;
    }
    ctx->pc = 0x17D42Cu;
    {
        const bool branch_taken_0x17d42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D42Cu;
        // 0x17d430: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d42c) {
            ctx->pc = 0x17D408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d408;
        }
    }
    ctx->pc = 0x17D434u;
label_17d434:
    // 0x17d434: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x17d434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_17d438:
    // 0x17d438: 0x26630030  addiu       $v1, $s3, 0x30
    ctx->pc = 0x17d438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_17d43c:
    // 0x17d43c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x17d43cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_17d440:
    // 0x17d440: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17d440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17d444:
    // 0x17d444: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x17d444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_17d448:
    // 0x17d448: 0x26740090  addiu       $s4, $s3, 0x90
    ctx->pc = 0x17d448u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_17d44c:
    // 0x17d44c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x17d44cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_17d450:
    // 0x17d450: 0x267500a0  addiu       $s5, $s3, 0xA0
    ctx->pc = 0x17d450u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_17d454:
    // 0x17d454: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x17d454u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_17d458:
    // 0x17d458: 0x267100b0  addiu       $s1, $s3, 0xB0
    ctx->pc = 0x17d458u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
label_17d45c:
    // 0x17d45c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x17d45cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_17d460:
    // 0x17d460: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x17d460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_17d464:
    // 0x17d464: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x17d464u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_17d468:
    // 0x17d468: 0x26420007  addiu       $v0, $s2, 0x7
    ctx->pc = 0x17d468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 7));
label_17d46c:
    // 0x17d46c: 0x8ec4cd4c  lw          $a0, -0x32B4($s6)
    ctx->pc = 0x17d46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954316)));
label_17d470:
    // 0x17d470: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x17d470u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_17d474:
    // 0x17d474: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17d474u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_17d478:
    // 0x17d478: 0xc0616ac  jal         func_185AB0
label_17d47c:
    if (ctx->pc == 0x17D47Cu) {
        ctx->pc = 0x17D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D478u;
        // 0x17d47c: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D480u;
        goto label_17d480;
    }
    ctx->pc = 0x17D478u;
    SET_GPR_U32(ctx, 31, 0x17D480u);
    ctx->pc = 0x17D47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D478u;
    // 0x17d47c: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x17D478u, 0x17D480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D480u;
label_17d480:
    // 0x17d480: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x17d480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_17d484:
    // 0x17d484: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x17d484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_17d488:
    // 0x17d488: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x17d488u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_17d48c:
    // 0x17d48c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_17d490:
    if (ctx->pc == 0x17D490u) {
        ctx->pc = 0x17D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D48Cu;
        // 0x17d490: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D494u;
        goto label_17d494;
    }
    ctx->pc = 0x17D48Cu;
    {
        const bool branch_taken_0x17d48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D48Cu;
        // 0x17d490: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d48c) {
            ctx->pc = 0x17D468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d468;
        }
    }
    ctx->pc = 0x17D494u;
label_17d494:
    // 0x17d494: 0xc05f9fa  jal         func_17E7E8
label_17d498:
    if (ctx->pc == 0x17D498u) {
        ctx->pc = 0x17D498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D494u;
        // 0x17d498: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D49Cu;
        goto label_17d49c;
    }
    ctx->pc = 0x17D494u;
    SET_GPR_U32(ctx, 31, 0x17D49Cu);
    ctx->pc = 0x17D498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D494u;
    // 0x17d498: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E7E8u, 0x17D494u, 0x17D49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D49Cu;
label_17d49c:
    // 0x17d49c: 0x3c013e0c  lui         $at, 0x3E0C
    ctx->pc = 0x17d49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15884 << 16));
label_17d4a0:
    // 0x17d4a0: 0x34218c8c  ori         $at, $at, 0x8C8C
    ctx->pc = 0x17d4a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35980);
label_17d4a4:
    // 0x17d4a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17d4a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17d4a8:
    // 0x17d4a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17d4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17d4ac:
    // 0x17d4ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17d4acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_17d4b0:
    // 0x17d4b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17d4b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17d4b4:
    // 0x17d4b4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x17d4b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17d4b8:
    // 0x17d4b8: 0xae63001c  sw          $v1, 0x1C($s3)
    ctx->pc = 0x17d4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 3));
label_17d4bc:
    // 0x17d4bc: 0xe6610018  swc1        $f1, 0x18($s3)
    ctx->pc = 0x17d4bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
label_17d4c0:
    // 0x17d4c0: 0xa6600014  sh          $zero, 0x14($s3)
    ctx->pc = 0x17d4c0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 20), (uint16_t)GPR_U32(ctx, 0));
label_17d4c4:
    // 0x17d4c4: 0xe6600090  swc1        $f0, 0x90($s3)
    ctx->pc = 0x17d4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 144), bits); }
label_17d4c8:
    // 0x17d4c8: 0xe681000c  swc1        $f1, 0xC($s4)
    ctx->pc = 0x17d4c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_17d4cc:
    // 0x17d4cc: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x17d4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_17d4d0:
    // 0x17d4d0: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x17d4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_17d4d4:
    // 0x17d4d4: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x17d4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
label_17d4d8:
    // 0x17d4d8: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x17d4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
label_17d4dc:
    // 0x17d4dc: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x17d4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_17d4e0:
    // 0x17d4e0: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x17d4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
label_17d4e4:
    // 0x17d4e4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x17d4e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_17d4e8:
    // 0x17d4e8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x17d4e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_17d4ec:
    // 0x17d4ec: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x17d4ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_17d4f0:
    // 0x17d4f0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x17d4f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17d4f4:
    // 0x17d4f4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x17d4f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17d4f8:
    // 0x17d4f8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x17d4f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17d4fc:
    // 0x17d4fc: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x17d4fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17d500:
    // 0x17d500: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17d500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17d504:
    // 0x17d504: 0x3e00008  jr          $ra
label_17d508:
    if (ctx->pc == 0x17D508u) {
        ctx->pc = 0x17D508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D504u;
        // 0x17d508: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D50Cu;
        goto label_17d50c;
    }
    ctx->pc = 0x17D504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D504u;
        // 0x17d508: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D50Cu;
label_17d50c:
    // 0x17d50c: 0x0  nop
    ctx->pc = 0x17d50cu;
    // NOP
    ctx->pc = 0x17d510u;
}
