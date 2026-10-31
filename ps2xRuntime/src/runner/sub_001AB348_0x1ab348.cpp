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

// Function: sub_001AB348
// Address: 0x1ab348 - 0x1ab620
void sub_001AB348_0x1ab348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB348_0x1ab348");
#endif

    switch (ctx->pc) {
        case 0x1ab348u: goto label_1ab348;
        case 0x1ab34cu: goto label_1ab34c;
        case 0x1ab350u: goto label_1ab350;
        case 0x1ab354u: goto label_1ab354;
        case 0x1ab358u: goto label_1ab358;
        case 0x1ab35cu: goto label_1ab35c;
        case 0x1ab360u: goto label_1ab360;
        case 0x1ab364u: goto label_1ab364;
        case 0x1ab368u: goto label_1ab368;
        case 0x1ab36cu: goto label_1ab36c;
        case 0x1ab370u: goto label_1ab370;
        case 0x1ab374u: goto label_1ab374;
        case 0x1ab378u: goto label_1ab378;
        case 0x1ab37cu: goto label_1ab37c;
        case 0x1ab380u: goto label_1ab380;
        case 0x1ab384u: goto label_1ab384;
        case 0x1ab388u: goto label_1ab388;
        case 0x1ab38cu: goto label_1ab38c;
        case 0x1ab390u: goto label_1ab390;
        case 0x1ab394u: goto label_1ab394;
        case 0x1ab398u: goto label_1ab398;
        case 0x1ab39cu: goto label_1ab39c;
        case 0x1ab3a0u: goto label_1ab3a0;
        case 0x1ab3a4u: goto label_1ab3a4;
        case 0x1ab3a8u: goto label_1ab3a8;
        case 0x1ab3acu: goto label_1ab3ac;
        case 0x1ab3b0u: goto label_1ab3b0;
        case 0x1ab3b4u: goto label_1ab3b4;
        case 0x1ab3b8u: goto label_1ab3b8;
        case 0x1ab3bcu: goto label_1ab3bc;
        case 0x1ab3c0u: goto label_1ab3c0;
        case 0x1ab3c4u: goto label_1ab3c4;
        case 0x1ab3c8u: goto label_1ab3c8;
        case 0x1ab3ccu: goto label_1ab3cc;
        case 0x1ab3d0u: goto label_1ab3d0;
        case 0x1ab3d4u: goto label_1ab3d4;
        case 0x1ab3d8u: goto label_1ab3d8;
        case 0x1ab3dcu: goto label_1ab3dc;
        case 0x1ab3e0u: goto label_1ab3e0;
        case 0x1ab3e4u: goto label_1ab3e4;
        case 0x1ab3e8u: goto label_1ab3e8;
        case 0x1ab3ecu: goto label_1ab3ec;
        case 0x1ab3f0u: goto label_1ab3f0;
        case 0x1ab3f4u: goto label_1ab3f4;
        case 0x1ab3f8u: goto label_1ab3f8;
        case 0x1ab3fcu: goto label_1ab3fc;
        case 0x1ab400u: goto label_1ab400;
        case 0x1ab404u: goto label_1ab404;
        case 0x1ab408u: goto label_1ab408;
        case 0x1ab40cu: goto label_1ab40c;
        case 0x1ab410u: goto label_1ab410;
        case 0x1ab414u: goto label_1ab414;
        case 0x1ab418u: goto label_1ab418;
        case 0x1ab41cu: goto label_1ab41c;
        case 0x1ab420u: goto label_1ab420;
        case 0x1ab424u: goto label_1ab424;
        case 0x1ab428u: goto label_1ab428;
        case 0x1ab42cu: goto label_1ab42c;
        case 0x1ab430u: goto label_1ab430;
        case 0x1ab434u: goto label_1ab434;
        case 0x1ab438u: goto label_1ab438;
        case 0x1ab43cu: goto label_1ab43c;
        case 0x1ab440u: goto label_1ab440;
        case 0x1ab444u: goto label_1ab444;
        case 0x1ab448u: goto label_1ab448;
        case 0x1ab44cu: goto label_1ab44c;
        case 0x1ab450u: goto label_1ab450;
        case 0x1ab454u: goto label_1ab454;
        case 0x1ab458u: goto label_1ab458;
        case 0x1ab45cu: goto label_1ab45c;
        case 0x1ab460u: goto label_1ab460;
        case 0x1ab464u: goto label_1ab464;
        case 0x1ab468u: goto label_1ab468;
        case 0x1ab46cu: goto label_1ab46c;
        case 0x1ab470u: goto label_1ab470;
        case 0x1ab474u: goto label_1ab474;
        case 0x1ab478u: goto label_1ab478;
        case 0x1ab47cu: goto label_1ab47c;
        case 0x1ab480u: goto label_1ab480;
        case 0x1ab484u: goto label_1ab484;
        case 0x1ab488u: goto label_1ab488;
        case 0x1ab48cu: goto label_1ab48c;
        case 0x1ab490u: goto label_1ab490;
        case 0x1ab494u: goto label_1ab494;
        case 0x1ab498u: goto label_1ab498;
        case 0x1ab49cu: goto label_1ab49c;
        case 0x1ab4a0u: goto label_1ab4a0;
        case 0x1ab4a4u: goto label_1ab4a4;
        case 0x1ab4a8u: goto label_1ab4a8;
        case 0x1ab4acu: goto label_1ab4ac;
        case 0x1ab4b0u: goto label_1ab4b0;
        case 0x1ab4b4u: goto label_1ab4b4;
        case 0x1ab4b8u: goto label_1ab4b8;
        case 0x1ab4bcu: goto label_1ab4bc;
        case 0x1ab4c0u: goto label_1ab4c0;
        case 0x1ab4c4u: goto label_1ab4c4;
        case 0x1ab4c8u: goto label_1ab4c8;
        case 0x1ab4ccu: goto label_1ab4cc;
        case 0x1ab4d0u: goto label_1ab4d0;
        case 0x1ab4d4u: goto label_1ab4d4;
        case 0x1ab4d8u: goto label_1ab4d8;
        case 0x1ab4dcu: goto label_1ab4dc;
        case 0x1ab4e0u: goto label_1ab4e0;
        case 0x1ab4e4u: goto label_1ab4e4;
        case 0x1ab4e8u: goto label_1ab4e8;
        case 0x1ab4ecu: goto label_1ab4ec;
        case 0x1ab4f0u: goto label_1ab4f0;
        case 0x1ab4f4u: goto label_1ab4f4;
        case 0x1ab4f8u: goto label_1ab4f8;
        case 0x1ab4fcu: goto label_1ab4fc;
        case 0x1ab500u: goto label_1ab500;
        case 0x1ab504u: goto label_1ab504;
        case 0x1ab508u: goto label_1ab508;
        case 0x1ab50cu: goto label_1ab50c;
        case 0x1ab510u: goto label_1ab510;
        case 0x1ab514u: goto label_1ab514;
        case 0x1ab518u: goto label_1ab518;
        case 0x1ab51cu: goto label_1ab51c;
        case 0x1ab520u: goto label_1ab520;
        case 0x1ab524u: goto label_1ab524;
        case 0x1ab528u: goto label_1ab528;
        case 0x1ab52cu: goto label_1ab52c;
        case 0x1ab530u: goto label_1ab530;
        case 0x1ab534u: goto label_1ab534;
        case 0x1ab538u: goto label_1ab538;
        case 0x1ab53cu: goto label_1ab53c;
        case 0x1ab540u: goto label_1ab540;
        case 0x1ab544u: goto label_1ab544;
        case 0x1ab548u: goto label_1ab548;
        case 0x1ab54cu: goto label_1ab54c;
        case 0x1ab550u: goto label_1ab550;
        case 0x1ab554u: goto label_1ab554;
        case 0x1ab558u: goto label_1ab558;
        case 0x1ab55cu: goto label_1ab55c;
        case 0x1ab560u: goto label_1ab560;
        case 0x1ab564u: goto label_1ab564;
        case 0x1ab568u: goto label_1ab568;
        case 0x1ab56cu: goto label_1ab56c;
        case 0x1ab570u: goto label_1ab570;
        case 0x1ab574u: goto label_1ab574;
        case 0x1ab578u: goto label_1ab578;
        case 0x1ab57cu: goto label_1ab57c;
        case 0x1ab580u: goto label_1ab580;
        case 0x1ab584u: goto label_1ab584;
        case 0x1ab588u: goto label_1ab588;
        case 0x1ab58cu: goto label_1ab58c;
        case 0x1ab590u: goto label_1ab590;
        case 0x1ab594u: goto label_1ab594;
        case 0x1ab598u: goto label_1ab598;
        case 0x1ab59cu: goto label_1ab59c;
        case 0x1ab5a0u: goto label_1ab5a0;
        case 0x1ab5a4u: goto label_1ab5a4;
        case 0x1ab5a8u: goto label_1ab5a8;
        case 0x1ab5acu: goto label_1ab5ac;
        case 0x1ab5b0u: goto label_1ab5b0;
        case 0x1ab5b4u: goto label_1ab5b4;
        case 0x1ab5b8u: goto label_1ab5b8;
        case 0x1ab5bcu: goto label_1ab5bc;
        case 0x1ab5c0u: goto label_1ab5c0;
        case 0x1ab5c4u: goto label_1ab5c4;
        case 0x1ab5c8u: goto label_1ab5c8;
        case 0x1ab5ccu: goto label_1ab5cc;
        case 0x1ab5d0u: goto label_1ab5d0;
        case 0x1ab5d4u: goto label_1ab5d4;
        case 0x1ab5d8u: goto label_1ab5d8;
        case 0x1ab5dcu: goto label_1ab5dc;
        case 0x1ab5e0u: goto label_1ab5e0;
        case 0x1ab5e4u: goto label_1ab5e4;
        case 0x1ab5e8u: goto label_1ab5e8;
        case 0x1ab5ecu: goto label_1ab5ec;
        case 0x1ab5f0u: goto label_1ab5f0;
        case 0x1ab5f4u: goto label_1ab5f4;
        case 0x1ab5f8u: goto label_1ab5f8;
        case 0x1ab5fcu: goto label_1ab5fc;
        case 0x1ab600u: goto label_1ab600;
        case 0x1ab604u: goto label_1ab604;
        case 0x1ab608u: goto label_1ab608;
        case 0x1ab60cu: goto label_1ab60c;
        case 0x1ab610u: goto label_1ab610;
        case 0x1ab614u: goto label_1ab614;
        case 0x1ab618u: goto label_1ab618;
        case 0x1ab61cu: goto label_1ab61c;
        default: break;
    }

    ctx->pc = 0x1ab348u;

label_1ab348:
    // 0x1ab348: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ab348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1ab34c:
    // 0x1ab34c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ab34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab350:
    // 0x1ab350: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1ab350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1ab354:
    // 0x1ab354: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1ab354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1ab358:
    // 0x1ab358: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ab358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ab35c:
    // 0x1ab35c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1ab35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1ab360:
    // 0x1ab360: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ab360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ab364:
    // 0x1ab364: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1ab364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_1ab368:
    // 0x1ab368: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ab368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ab36c:
    // 0x1ab36c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ab36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ab370:
    // 0x1ab370: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1ab370u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1ab374:
    // 0x1ab374: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1ab374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1ab378:
    // 0x1ab378: 0x60f809  jalr        $v1
label_1ab37c:
    if (ctx->pc == 0x1AB37Cu) {
        ctx->pc = 0x1AB37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB378u;
        // 0x1ab37c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB380u;
        goto label_1ab380;
    }
    ctx->pc = 0x1AB378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AB380u);
        ctx->pc = 0x1AB37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB378u;
        // 0x1ab37c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB378u, 0x1AB380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB380u;
label_1ab380:
    // 0x1ab380: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x1ab380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1ab384:
    // 0x1ab384: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ab384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ab388:
    // 0x1ab388: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x1ab388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1ab38c:
    // 0x1ab38c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1ab38cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ab390:
    // 0x1ab390: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x1ab390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
label_1ab394:
    // 0x1ab394: 0xc0e409a  jal         func_390268
label_1ab398:
    if (ctx->pc == 0x1AB398u) {
        ctx->pc = 0x1AB398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB394u;
        // 0x1ab398: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB39Cu;
        goto label_1ab39c;
    }
    ctx->pc = 0x1AB394u;
    SET_GPR_U32(ctx, 31, 0x1AB39Cu);
    ctx->pc = 0x1AB398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB394u;
    // 0x1ab398: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1AB394u, 0x1AB39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB39Cu;
label_1ab39c:
    // 0x1ab39c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ab39cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab3a0:
    // 0x1ab3a0: 0x12400097  beqz        $s2, . + 4 + (0x97 << 2)
label_1ab3a4:
    if (ctx->pc == 0x1AB3A4u) {
        ctx->pc = 0x1AB3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB3A0u;
        // 0x1ab3a4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB3A8u;
        goto label_1ab3a8;
    }
    ctx->pc = 0x1AB3A0u;
    {
        const bool branch_taken_0x1ab3a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB3A0u;
        // 0x1ab3a4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab3a0) {
            ctx->pc = 0x1AB600u;
            goto label_1ab600;
        }
    }
    ctx->pc = 0x1AB3A8u;
label_1ab3a8:
    // 0x1ab3a8: 0xc08a162  jal         func_228588
label_1ab3ac:
    if (ctx->pc == 0x1AB3ACu) {
        ctx->pc = 0x1AB3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB3A8u;
        // 0x1ab3ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB3B0u;
        goto label_1ab3b0;
    }
    ctx->pc = 0x1AB3A8u;
    SET_GPR_U32(ctx, 31, 0x1AB3B0u);
    ctx->pc = 0x1AB3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB3A8u;
    // 0x1ab3ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228588u, 0x1AB3A8u, 0x1AB3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB3B0u;
label_1ab3b0:
    // 0x1ab3b0: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_1ab3b4:
    if (ctx->pc == 0x1AB3B4u) {
        ctx->pc = 0x1AB3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB3B0u;
        // 0x1ab3b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB3B8u;
        goto label_1ab3b8;
    }
    ctx->pc = 0x1AB3B0u;
    {
        const bool branch_taken_0x1ab3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB3B0u;
        // 0x1ab3b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab3b0) {
            ctx->pc = 0x1AB470u;
            goto label_1ab470;
        }
    }
    ctx->pc = 0x1AB3B8u;
label_1ab3b8:
    // 0x1ab3b8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ab3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ab3bc:
    // 0x1ab3bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ab3bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab3c0:
    // 0x1ab3c0: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1ab3c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1ab3c4:
    // 0x1ab3c4: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1ab3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1ab3c8:
    // 0x1ab3c8: 0x60f809  jalr        $v1
label_1ab3cc:
    if (ctx->pc == 0x1AB3CCu) {
        ctx->pc = 0x1AB3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB3C8u;
        // 0x1ab3cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB3D0u;
        goto label_1ab3d0;
    }
    ctx->pc = 0x1AB3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AB3D0u);
        ctx->pc = 0x1AB3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB3C8u;
        // 0x1ab3cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB3C8u, 0x1AB3D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB3D0u;
label_1ab3d0:
    // 0x1ab3d0: 0xc088ac6  jal         func_222B18
label_1ab3d4:
    if (ctx->pc == 0x1AB3D4u) {
        ctx->pc = 0x1AB3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB3D0u;
        // 0x1ab3d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB3D8u;
        goto label_1ab3d8;
    }
    ctx->pc = 0x1AB3D0u;
    SET_GPR_U32(ctx, 31, 0x1AB3D8u);
    ctx->pc = 0x1AB3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB3D0u;
    // 0x1ab3d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x1AB3D0u, 0x1AB3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB3D8u;
label_1ab3d8:
    // 0x1ab3d8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1ab3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1ab3dc:
    // 0x1ab3dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab3e0:
    // 0x1ab3e0: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x1ab3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
label_1ab3e4:
    // 0x1ab3e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1ab3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1ab3e8:
    // 0x1ab3e8: 0x2031806  srlv        $v1, $v1, $s0
    ctx->pc = 0x1ab3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
label_1ab3ec:
    // 0x1ab3ec: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_1ab3f0:
    if (ctx->pc == 0x1AB3F0u) {
        ctx->pc = 0x1AB3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB3ECu;
        // 0x1ab3f0: 0x2e020010  sltiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB3F4u;
        goto label_1ab3f4;
    }
    ctx->pc = 0x1AB3ECu;
    {
        const bool branch_taken_0x1ab3ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB3ECu;
        // 0x1ab3f0: 0x2e020010  sltiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab3ec) {
            ctx->pc = 0x1AB460u;
            goto label_1ab460;
        }
    }
    ctx->pc = 0x1AB3F4u;
label_1ab3f4:
    // 0x1ab3f4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1ab3f8:
    if (ctx->pc == 0x1AB3F8u) {
        ctx->pc = 0x1AB3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB3F4u;
        // 0x1ab3f8: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB3FCu;
        goto label_1ab3fc;
    }
    ctx->pc = 0x1AB3F4u;
    {
        const bool branch_taken_0x1ab3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB3F4u;
        // 0x1ab3f8: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab3f4) {
            ctx->pc = 0x1AB45Cu;
            goto label_1ab45c;
        }
    }
    ctx->pc = 0x1AB3FCu;
label_1ab3fc:
    // 0x1ab3fc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1ab3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1ab400:
    // 0x1ab400: 0x244243e0  addiu       $v0, $v0, 0x43E0
    ctx->pc = 0x1ab400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17376));
label_1ab404:
    // 0x1ab404: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ab404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ab408:
    // 0x1ab408: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ab408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ab40c:
    // 0x1ab40c: 0x800008  jr          $a0
label_1ab410:
    if (ctx->pc == 0x1AB410u) {
        ctx->pc = 0x1AB414u;
        goto label_1ab414;
    }
    ctx->pc = 0x1AB40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AB414u: goto label_1ab414;
            case 0x1AB420u: goto label_1ab420;
            case 0x1AB42Cu: goto label_1ab42c;
            case 0x1AB448u: goto label_1ab448;
            case 0x1AB45Cu: goto label_1ab45c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB40Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1AB414u;
label_1ab414:
    // 0x1ab414: 0x132200  sll         $a0, $s3, 8
    ctx->pc = 0x1ab414u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
label_1ab418:
    // 0x1ab418: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ab41c:
    if (ctx->pc == 0x1AB41Cu) {
        ctx->pc = 0x1AB41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB418u;
        // 0x1ab41c: 0x24050049  addiu       $a1, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB420u;
        goto label_1ab420;
    }
    ctx->pc = 0x1AB418u;
    {
        const bool branch_taken_0x1ab418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB418u;
        // 0x1ab41c: 0x24050049  addiu       $a1, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab418) {
            ctx->pc = 0x1AB434u;
            goto label_1ab434;
        }
    }
    ctx->pc = 0x1AB420u;
label_1ab420:
    // 0x1ab420: 0x132200  sll         $a0, $s3, 8
    ctx->pc = 0x1ab420u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
label_1ab424:
    // 0x1ab424: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ab428:
    if (ctx->pc == 0x1AB428u) {
        ctx->pc = 0x1AB428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB424u;
        // 0x1ab428: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB42Cu;
        goto label_1ab42c;
    }
    ctx->pc = 0x1AB424u;
    {
        const bool branch_taken_0x1ab424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB424u;
        // 0x1ab428: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab424) {
            ctx->pc = 0x1AB434u;
            goto label_1ab434;
        }
    }
    ctx->pc = 0x1AB42Cu;
label_1ab42c:
    // 0x1ab42c: 0x132200  sll         $a0, $s3, 8
    ctx->pc = 0x1ab42cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
label_1ab430:
    // 0x1ab430: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1ab430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_1ab434:
    // 0x1ab434: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x1ab434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_1ab438:
    // 0x1ab438: 0xc068a44  jal         func_1A2910
label_1ab43c:
    if (ctx->pc == 0x1AB43Cu) {
        ctx->pc = 0x1AB43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB438u;
        // 0x1ab43c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB440u;
        goto label_1ab440;
    }
    ctx->pc = 0x1AB438u;
    SET_GPR_U32(ctx, 31, 0x1AB440u);
    ctx->pc = 0x1AB43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB438u;
    // 0x1ab43c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2910u, 0x1AB438u, 0x1AB440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB440u;
label_1ab440:
    // 0x1ab440: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ab444:
    if (ctx->pc == 0x1AB444u) {
        ctx->pc = 0x1AB444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB440u;
        // 0x1ab444: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB448u;
        goto label_1ab448;
    }
    ctx->pc = 0x1AB440u;
    {
        const bool branch_taken_0x1ab440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB440u;
        // 0x1ab444: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab440) {
            ctx->pc = 0x1AB460u;
            goto label_1ab460;
        }
    }
    ctx->pc = 0x1AB448u;
label_1ab448:
    // 0x1ab448: 0x132200  sll         $a0, $s3, 8
    ctx->pc = 0x1ab448u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
label_1ab44c:
    // 0x1ab44c: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1ab44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1ab450:
    // 0x1ab450: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x1ab450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_1ab454:
    // 0x1ab454: 0xc068a44  jal         func_1A2910
label_1ab458:
    if (ctx->pc == 0x1AB458u) {
        ctx->pc = 0x1AB458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB454u;
        // 0x1ab458: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB45Cu;
        goto label_1ab45c;
    }
    ctx->pc = 0x1AB454u;
    SET_GPR_U32(ctx, 31, 0x1AB45Cu);
    ctx->pc = 0x1AB458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB454u;
    // 0x1ab458: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2910u, 0x1AB454u, 0x1AB45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB45Cu;
label_1ab45c:
    // 0x1ab45c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ab45cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1ab460:
    // 0x1ab460: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ab460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ab464:
    // 0x1ab464: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x1ab464u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_1ab468:
    // 0x1ab468: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_1ab46c:
    if (ctx->pc == 0x1AB46Cu) {
        ctx->pc = 0x1AB470u;
        goto label_1ab470;
    }
    ctx->pc = 0x1AB468u;
    {
        const bool branch_taken_0x1ab468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab468) {
            ctx->pc = 0x1AB3D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab3d0;
        }
    }
    ctx->pc = 0x1AB470u;
label_1ab470:
    // 0x1ab470: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ab470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ab474:
    // 0x1ab474: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1ab474u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1ab478:
    // 0x1ab478: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1ab478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1ab47c:
    // 0x1ab47c: 0x40f809  jalr        $v0
label_1ab480:
    if (ctx->pc == 0x1AB480u) {
        ctx->pc = 0x1AB480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB47Cu;
        // 0x1ab480: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB484u;
        goto label_1ab484;
    }
    ctx->pc = 0x1AB47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AB484u);
        ctx->pc = 0x1AB480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB47Cu;
        // 0x1ab480: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB47Cu, 0x1AB484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB484u;
label_1ab484:
    // 0x1ab484: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
label_1ab488:
    if (ctx->pc == 0x1AB488u) {
        ctx->pc = 0x1AB488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB484u;
        // 0x1ab488: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB48Cu;
        goto label_1ab48c;
    }
    ctx->pc = 0x1AB484u;
    {
        const bool branch_taken_0x1ab484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB484u;
        // 0x1ab488: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab484) {
            ctx->pc = 0x1AB600u;
            goto label_1ab600;
        }
    }
    ctx->pc = 0x1AB48Cu;
label_1ab48c:
    // 0x1ab48c: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x1ab48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1ab490:
    // 0x1ab490: 0x2604d3d0  addiu       $a0, $s0, -0x2C30
    ctx->pc = 0x1ab490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955984));
label_1ab494:
    // 0x1ab494: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1ab494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1ab498:
    // 0x1ab498: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ab498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ab49c:
    // 0x1ab49c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1ab49cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1ab4a0:
    // 0x1ab4a0: 0xc047ab8  jal         func_11EAE0
label_1ab4a4:
    if (ctx->pc == 0x1AB4A4u) {
        ctx->pc = 0x1AB4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB4A0u;
        // 0x1ab4a4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB4A8u;
        goto label_1ab4a8;
    }
    ctx->pc = 0x1AB4A0u;
    SET_GPR_U32(ctx, 31, 0x1AB4A8u);
    ctx->pc = 0x1AB4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB4A0u;
    // 0x1ab4a4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x1AB4A0u, 0x1AB4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB4A8u;
label_1ab4a8:
    // 0x1ab4a8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1ab4a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1ab4ac:
    // 0x1ab4ac: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
label_1ab4b0:
    if (ctx->pc == 0x1AB4B0u) {
        ctx->pc = 0x1AB4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB4ACu;
        // 0x1ab4b0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB4B4u;
        goto label_1ab4b4;
    }
    ctx->pc = 0x1AB4ACu;
    {
        const bool branch_taken_0x1ab4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab4ac) {
            ctx->pc = 0x1AB4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB4ACu;
            // 0x1ab4b0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB538u;
            goto label_1ab538;
        }
    }
    ctx->pc = 0x1AB4B4u;
label_1ab4b4:
    // 0x1ab4b4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1ab4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ab4b8:
    // 0x1ab4b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ab4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1ab4bc:
    // 0x1ab4bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ab4bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ab4c0:
    // 0x1ab4c0: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x1ab4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1ab4c4:
    // 0x1ab4c4: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1ab4c4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_1ab4c8:
    // 0x1ab4c8: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_1ab4cc:
    if (ctx->pc == 0x1AB4CCu) {
        ctx->pc = 0x1AB4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB4C8u;
        // 0x1ab4cc: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB4D0u;
        goto label_1ab4d0;
    }
    ctx->pc = 0x1AB4C8u;
    {
        const bool branch_taken_0x1ab4c8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1AB4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB4C8u;
        // 0x1ab4cc: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab4c8) {
            ctx->pc = 0x1AB4E4u;
            goto label_1ab4e4;
        }
    }
    ctx->pc = 0x1AB4D0u;
label_1ab4d0:
    // 0x1ab4d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ab4d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ab4d4:
    // 0x1ab4d4: 0x0  nop
    ctx->pc = 0x1ab4d4u;
    // NOP
label_1ab4d8:
    // 0x1ab4d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ab4d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ab4dc:
    // 0x1ab4dc: 0x10000009  b           . + 4 + (0x9 << 2)
label_1ab4e0:
    if (ctx->pc == 0x1AB4E0u) {
        ctx->pc = 0x1AB4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB4DCu;
        // 0x1ab4e0: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB4E4u;
        goto label_1ab4e4;
    }
    ctx->pc = 0x1AB4DCu;
    {
        const bool branch_taken_0x1ab4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB4DCu;
        // 0x1ab4e0: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab4dc) {
            ctx->pc = 0x1AB504u;
            goto label_1ab504;
        }
    }
    ctx->pc = 0x1AB4E4u;
label_1ab4e4:
    // 0x1ab4e4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1ab4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1ab4e8:
    // 0x1ab4e8: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x1ab4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_1ab4ec:
    // 0x1ab4ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ab4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1ab4f0:
    // 0x1ab4f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ab4f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ab4f4:
    // 0x1ab4f4: 0x0  nop
    ctx->pc = 0x1ab4f4u;
    // NOP
label_1ab4f8:
    // 0x1ab4f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ab4f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ab4fc:
    // 0x1ab4fc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ab4fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ab500:
    // 0x1ab500: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ab500u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ab504:
    // 0x1ab504: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ab504u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ab508:
    // 0x1ab508: 0x0  nop
    ctx->pc = 0x1ab508u;
    // NOP
label_1ab50c:
    // 0x1ab50c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ab50cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ab510:
    // 0x1ab510: 0x0  nop
    ctx->pc = 0x1ab510u;
    // NOP
label_1ab514:
    // 0x1ab514: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_1ab518:
    if (ctx->pc == 0x1AB518u) {
        ctx->pc = 0x1AB518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB514u;
        // 0x1ab518: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB51Cu;
        goto label_1ab51c;
    }
    ctx->pc = 0x1AB514u;
    {
        const bool branch_taken_0x1ab514 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ab514) {
            ctx->pc = 0x1AB518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB514u;
            // 0x1ab518: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB530u;
            goto label_1ab530;
        }
    }
    ctx->pc = 0x1AB51Cu;
label_1ab51c:
    // 0x1ab51c: 0x2602d3d0  addiu       $v0, $s0, -0x2C30
    ctx->pc = 0x1ab51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955984));
label_1ab520:
    // 0x1ab520: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x1ab520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1ab524:
    // 0x1ab524: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ab524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ab528:
    // 0x1ab528: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1ab528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ab52c:
    // 0x1ab52c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1ab52cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1ab530:
    // 0x1ab530: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1ab530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1ab534:
    // 0x1ab534: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ab534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ab538:
    // 0x1ab538: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ab538u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab53c:
    // 0x1ab53c: 0x2454d3d0  addiu       $s4, $v0, -0x2C30
    ctx->pc = 0x1ab53cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955984));
label_1ab540:
    // 0x1ab540: 0x26300050  addiu       $s0, $s1, 0x50
    ctx->pc = 0x1ab540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1ab544:
    // 0x1ab544: 0x0  nop
    ctx->pc = 0x1ab544u;
    // NOP
label_1ab548:
    // 0x1ab548: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x1ab548u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_1ab54c:
    // 0x1ab54c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_1ab550:
    if (ctx->pc == 0x1AB550u) {
        ctx->pc = 0x1AB550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB54Cu;
        // 0x1ab550: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB554u;
        goto label_1ab554;
    }
    ctx->pc = 0x1AB54Cu;
    {
        const bool branch_taken_0x1ab54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB54Cu;
        // 0x1ab550: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab54c) {
            ctx->pc = 0x1AB5D8u;
            goto label_1ab5d8;
        }
    }
    ctx->pc = 0x1AB554u;
label_1ab554:
    // 0x1ab554: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ab554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ab558:
    // 0x1ab558: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1ab558u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1ab55c:
    // 0x1ab55c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1ab55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1ab560:
    // 0x1ab560: 0x60f809  jalr        $v1
label_1ab564:
    if (ctx->pc == 0x1AB564u) {
        ctx->pc = 0x1AB564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB560u;
        // 0x1ab564: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB568u;
        goto label_1ab568;
    }
    ctx->pc = 0x1AB560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AB568u);
        ctx->pc = 0x1AB564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB560u;
        // 0x1ab564: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB560u, 0x1AB568u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB568u;
label_1ab568:
    // 0x1ab568: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ab568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ab56c:
    // 0x1ab56c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ab56cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ab570:
    // 0x1ab570: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ab570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab574:
    // 0x1ab574: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1ab574u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1ab578:
    // 0x1ab578: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1ab578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1ab57c:
    // 0x1ab57c: 0x60f809  jalr        $v1
label_1ab580:
    if (ctx->pc == 0x1AB580u) {
        ctx->pc = 0x1AB580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB57Cu;
        // 0x1ab580: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB584u;
        goto label_1ab584;
    }
    ctx->pc = 0x1AB57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AB584u);
        ctx->pc = 0x1AB580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB57Cu;
        // 0x1ab580: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB57Cu, 0x1AB584u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB584u;
label_1ab584:
    // 0x1ab584: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x1ab584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1ab588:
    // 0x1ab588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ab58c:
    // 0x1ab58c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1ab58cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ab590:
    // 0x1ab590: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ab590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab594:
    // 0x1ab594: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1ab594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1ab598:
    // 0x1ab598: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1ab598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1ab59c:
    // 0x1ab59c: 0xc068848  jal         func_1A2120
label_1ab5a0:
    if (ctx->pc == 0x1AB5A0u) {
        ctx->pc = 0x1AB5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB59Cu;
        // 0x1ab5a0: 0xc44c0014  lwc1        $f12, 0x14($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB5A4u;
        goto label_1ab5a4;
    }
    ctx->pc = 0x1AB59Cu;
    SET_GPR_U32(ctx, 31, 0x1AB5A4u);
    ctx->pc = 0x1AB5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB59Cu;
    // 0x1ab5a0: 0xc44c0014  lwc1        $f12, 0x14($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1AB59Cu, 0x1AB5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB5A4u;
label_1ab5a4:
    // 0x1ab5a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ab5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ab5a8:
    // 0x1ab5a8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1ab5a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1ab5ac:
    // 0x1ab5ac: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1ab5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1ab5b0:
    // 0x1ab5b0: 0x60f809  jalr        $v1
label_1ab5b4:
    if (ctx->pc == 0x1AB5B4u) {
        ctx->pc = 0x1AB5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB5B0u;
        // 0x1ab5b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB5B8u;
        goto label_1ab5b8;
    }
    ctx->pc = 0x1AB5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AB5B8u);
        ctx->pc = 0x1AB5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB5B0u;
        // 0x1ab5b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB5B0u, 0x1AB5B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB5B8u;
label_1ab5b8:
    // 0x1ab5b8: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x1ab5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1ab5bc:
    // 0x1ab5bc: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1ab5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ab5c0:
    // 0x1ab5c0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1ab5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1ab5c4:
    // 0x1ab5c4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1ab5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1ab5c8:
    // 0x1ab5c8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1ab5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ab5cc:
    // 0x1ab5cc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ab5ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ab5d0:
    // 0x1ab5d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ab5d4:
    if (ctx->pc == 0x1AB5D4u) {
        ctx->pc = 0x1AB5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB5D0u;
        // 0x1ab5d4: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB5D8u;
        goto label_1ab5d8;
    }
    ctx->pc = 0x1AB5D0u;
    {
        const bool branch_taken_0x1ab5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB5D0u;
        // 0x1ab5d4: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab5d0) {
            ctx->pc = 0x1AB5F0u;
            goto label_1ab5f0;
        }
    }
    ctx->pc = 0x1AB5D8u;
label_1ab5d8:
    // 0x1ab5d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ab5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ab5dc:
    // 0x1ab5dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ab5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab5e0:
    // 0x1ab5e0: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1ab5e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1ab5e4:
    // 0x1ab5e4: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1ab5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1ab5e8:
    // 0x1ab5e8: 0x60f809  jalr        $v1
label_1ab5ec:
    if (ctx->pc == 0x1AB5ECu) {
        ctx->pc = 0x1AB5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB5E8u;
        // 0x1ab5ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB5F0u;
        goto label_1ab5f0;
    }
    ctx->pc = 0x1AB5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AB5F0u);
        ctx->pc = 0x1AB5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB5E8u;
        // 0x1ab5ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB5E8u, 0x1AB5F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB5F0u;
label_1ab5f0:
    // 0x1ab5f0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ab5f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ab5f4:
    // 0x1ab5f4: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x1ab5f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1ab5f8:
    // 0x1ab5f8: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
label_1ab5fc:
    if (ctx->pc == 0x1AB5FCu) {
        ctx->pc = 0x1AB5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB5F8u;
        // 0x1ab5fc: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB600u;
        goto label_1ab600;
    }
    ctx->pc = 0x1AB5F8u;
    {
        const bool branch_taken_0x1ab5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB5F8u;
        // 0x1ab5fc: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab5f8) {
            ctx->pc = 0x1AB548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab548;
        }
    }
    ctx->pc = 0x1AB600u;
label_1ab600:
    // 0x1ab600: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1ab600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ab604:
    // 0x1ab604: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1ab604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ab608:
    // 0x1ab608: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1ab608u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ab60c:
    // 0x1ab60c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ab60cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ab610:
    // 0x1ab610: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1ab610u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ab614:
    // 0x1ab614: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ab614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ab618:
    // 0x1ab618: 0x3e00008  jr          $ra
label_1ab61c:
    if (ctx->pc == 0x1AB61Cu) {
        ctx->pc = 0x1AB61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB618u;
        // 0x1ab61c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB620u;
        goto label_fallthrough_0x1ab618;
    }
    ctx->pc = 0x1AB618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB618u;
        // 0x1ab61c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ab618:
    ctx->pc = 0x1AB620u;
}
