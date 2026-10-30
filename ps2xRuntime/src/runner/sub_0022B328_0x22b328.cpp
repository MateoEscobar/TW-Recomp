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

// Function: sub_0022B328
// Address: 0x22b328 - 0x22b5a8
void sub_0022B328_0x22b328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B328_0x22b328");
#endif

    switch (ctx->pc) {
        case 0x22b328u: goto label_22b328;
        case 0x22b32cu: goto label_22b32c;
        case 0x22b330u: goto label_22b330;
        case 0x22b334u: goto label_22b334;
        case 0x22b338u: goto label_22b338;
        case 0x22b33cu: goto label_22b33c;
        case 0x22b340u: goto label_22b340;
        case 0x22b344u: goto label_22b344;
        case 0x22b348u: goto label_22b348;
        case 0x22b34cu: goto label_22b34c;
        case 0x22b350u: goto label_22b350;
        case 0x22b354u: goto label_22b354;
        case 0x22b358u: goto label_22b358;
        case 0x22b35cu: goto label_22b35c;
        case 0x22b360u: goto label_22b360;
        case 0x22b364u: goto label_22b364;
        case 0x22b368u: goto label_22b368;
        case 0x22b36cu: goto label_22b36c;
        case 0x22b370u: goto label_22b370;
        case 0x22b374u: goto label_22b374;
        case 0x22b378u: goto label_22b378;
        case 0x22b37cu: goto label_22b37c;
        case 0x22b380u: goto label_22b380;
        case 0x22b384u: goto label_22b384;
        case 0x22b388u: goto label_22b388;
        case 0x22b38cu: goto label_22b38c;
        case 0x22b390u: goto label_22b390;
        case 0x22b394u: goto label_22b394;
        case 0x22b398u: goto label_22b398;
        case 0x22b39cu: goto label_22b39c;
        case 0x22b3a0u: goto label_22b3a0;
        case 0x22b3a4u: goto label_22b3a4;
        case 0x22b3a8u: goto label_22b3a8;
        case 0x22b3acu: goto label_22b3ac;
        case 0x22b3b0u: goto label_22b3b0;
        case 0x22b3b4u: goto label_22b3b4;
        case 0x22b3b8u: goto label_22b3b8;
        case 0x22b3bcu: goto label_22b3bc;
        case 0x22b3c0u: goto label_22b3c0;
        case 0x22b3c4u: goto label_22b3c4;
        case 0x22b3c8u: goto label_22b3c8;
        case 0x22b3ccu: goto label_22b3cc;
        case 0x22b3d0u: goto label_22b3d0;
        case 0x22b3d4u: goto label_22b3d4;
        case 0x22b3d8u: goto label_22b3d8;
        case 0x22b3dcu: goto label_22b3dc;
        case 0x22b3e0u: goto label_22b3e0;
        case 0x22b3e4u: goto label_22b3e4;
        case 0x22b3e8u: goto label_22b3e8;
        case 0x22b3ecu: goto label_22b3ec;
        case 0x22b3f0u: goto label_22b3f0;
        case 0x22b3f4u: goto label_22b3f4;
        case 0x22b3f8u: goto label_22b3f8;
        case 0x22b3fcu: goto label_22b3fc;
        case 0x22b400u: goto label_22b400;
        case 0x22b404u: goto label_22b404;
        case 0x22b408u: goto label_22b408;
        case 0x22b40cu: goto label_22b40c;
        case 0x22b410u: goto label_22b410;
        case 0x22b414u: goto label_22b414;
        case 0x22b418u: goto label_22b418;
        case 0x22b41cu: goto label_22b41c;
        case 0x22b420u: goto label_22b420;
        case 0x22b424u: goto label_22b424;
        case 0x22b428u: goto label_22b428;
        case 0x22b42cu: goto label_22b42c;
        case 0x22b430u: goto label_22b430;
        case 0x22b434u: goto label_22b434;
        case 0x22b438u: goto label_22b438;
        case 0x22b43cu: goto label_22b43c;
        case 0x22b440u: goto label_22b440;
        case 0x22b444u: goto label_22b444;
        case 0x22b448u: goto label_22b448;
        case 0x22b44cu: goto label_22b44c;
        case 0x22b450u: goto label_22b450;
        case 0x22b454u: goto label_22b454;
        case 0x22b458u: goto label_22b458;
        case 0x22b45cu: goto label_22b45c;
        case 0x22b460u: goto label_22b460;
        case 0x22b464u: goto label_22b464;
        case 0x22b468u: goto label_22b468;
        case 0x22b46cu: goto label_22b46c;
        case 0x22b470u: goto label_22b470;
        case 0x22b474u: goto label_22b474;
        case 0x22b478u: goto label_22b478;
        case 0x22b47cu: goto label_22b47c;
        case 0x22b480u: goto label_22b480;
        case 0x22b484u: goto label_22b484;
        case 0x22b488u: goto label_22b488;
        case 0x22b48cu: goto label_22b48c;
        case 0x22b490u: goto label_22b490;
        case 0x22b494u: goto label_22b494;
        case 0x22b498u: goto label_22b498;
        case 0x22b49cu: goto label_22b49c;
        case 0x22b4a0u: goto label_22b4a0;
        case 0x22b4a4u: goto label_22b4a4;
        case 0x22b4a8u: goto label_22b4a8;
        case 0x22b4acu: goto label_22b4ac;
        case 0x22b4b0u: goto label_22b4b0;
        case 0x22b4b4u: goto label_22b4b4;
        case 0x22b4b8u: goto label_22b4b8;
        case 0x22b4bcu: goto label_22b4bc;
        case 0x22b4c0u: goto label_22b4c0;
        case 0x22b4c4u: goto label_22b4c4;
        case 0x22b4c8u: goto label_22b4c8;
        case 0x22b4ccu: goto label_22b4cc;
        case 0x22b4d0u: goto label_22b4d0;
        case 0x22b4d4u: goto label_22b4d4;
        case 0x22b4d8u: goto label_22b4d8;
        case 0x22b4dcu: goto label_22b4dc;
        case 0x22b4e0u: goto label_22b4e0;
        case 0x22b4e4u: goto label_22b4e4;
        case 0x22b4e8u: goto label_22b4e8;
        case 0x22b4ecu: goto label_22b4ec;
        case 0x22b4f0u: goto label_22b4f0;
        case 0x22b4f4u: goto label_22b4f4;
        case 0x22b4f8u: goto label_22b4f8;
        case 0x22b4fcu: goto label_22b4fc;
        case 0x22b500u: goto label_22b500;
        case 0x22b504u: goto label_22b504;
        case 0x22b508u: goto label_22b508;
        case 0x22b50cu: goto label_22b50c;
        case 0x22b510u: goto label_22b510;
        case 0x22b514u: goto label_22b514;
        case 0x22b518u: goto label_22b518;
        case 0x22b51cu: goto label_22b51c;
        case 0x22b520u: goto label_22b520;
        case 0x22b524u: goto label_22b524;
        case 0x22b528u: goto label_22b528;
        case 0x22b52cu: goto label_22b52c;
        case 0x22b530u: goto label_22b530;
        case 0x22b534u: goto label_22b534;
        case 0x22b538u: goto label_22b538;
        case 0x22b53cu: goto label_22b53c;
        case 0x22b540u: goto label_22b540;
        case 0x22b544u: goto label_22b544;
        case 0x22b548u: goto label_22b548;
        case 0x22b54cu: goto label_22b54c;
        case 0x22b550u: goto label_22b550;
        case 0x22b554u: goto label_22b554;
        case 0x22b558u: goto label_22b558;
        case 0x22b55cu: goto label_22b55c;
        case 0x22b560u: goto label_22b560;
        case 0x22b564u: goto label_22b564;
        case 0x22b568u: goto label_22b568;
        case 0x22b56cu: goto label_22b56c;
        case 0x22b570u: goto label_22b570;
        case 0x22b574u: goto label_22b574;
        case 0x22b578u: goto label_22b578;
        case 0x22b57cu: goto label_22b57c;
        case 0x22b580u: goto label_22b580;
        case 0x22b584u: goto label_22b584;
        case 0x22b588u: goto label_22b588;
        case 0x22b58cu: goto label_22b58c;
        case 0x22b590u: goto label_22b590;
        case 0x22b594u: goto label_22b594;
        case 0x22b598u: goto label_22b598;
        case 0x22b59cu: goto label_22b59c;
        case 0x22b5a0u: goto label_22b5a0;
        case 0x22b5a4u: goto label_22b5a4;
        default: break;
    }

    ctx->pc = 0x22b328u;

label_22b328:
    // 0x22b328: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22b328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22b32c:
    // 0x22b32c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22b32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_22b330:
    // 0x22b330: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22b330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_22b334:
    // 0x22b334: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22b334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22b338:
    // 0x22b338: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22b338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_22b33c:
    // 0x22b33c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22b33cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22b340:
    // 0x22b340: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22b340u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22b344:
    // 0x22b344: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_22b348:
    if (ctx->pc == 0x22B348u) {
        ctx->pc = 0x22B348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B344u;
        // 0x22b348: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B34Cu;
        goto label_22b34c;
    }
    ctx->pc = 0x22B344u;
    {
        const bool branch_taken_0x22b344 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B344u;
        // 0x22b348: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b344) {
            ctx->pc = 0x22B360u;
            goto label_22b360;
        }
    }
    ctx->pc = 0x22B34Cu;
label_22b34c:
    // 0x22b34c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
label_22b350:
    if (ctx->pc == 0x22B350u) {
        ctx->pc = 0x22B354u;
        goto label_22b354;
    }
    ctx->pc = 0x22B34Cu;
    {
        const bool branch_taken_0x22b34c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b34c) {
            ctx->pc = 0x22B360u;
            goto label_22b360;
        }
    }
    ctx->pc = 0x22B354u;
label_22b354:
    // 0x22b354: 0xc089a76  jal         func_2269D8
label_22b358:
    if (ctx->pc == 0x22B358u) {
        ctx->pc = 0x22B358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B354u;
        // 0x22b358: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B35Cu;
        goto label_22b35c;
    }
    ctx->pc = 0x22B354u;
    SET_GPR_U32(ctx, 31, 0x22B35Cu);
    ctx->pc = 0x22B358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B354u;
    // 0x22b358: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2269D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269D8u, 0x22B354u, 0x22B35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B35Cu;
label_22b35c:
    // 0x22b35c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22b35cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b360:
    // 0x22b360: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_22b364:
    if (ctx->pc == 0x22B364u) {
        ctx->pc = 0x22B368u;
        goto label_22b368;
    }
    ctx->pc = 0x22B360u;
    {
        const bool branch_taken_0x22b360 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b360) {
            ctx->pc = 0x22B37Cu;
            goto label_22b37c;
        }
    }
    ctx->pc = 0x22B368u;
label_22b368:
    // 0x22b368: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_22b36c:
    if (ctx->pc == 0x22B36Cu) {
        ctx->pc = 0x22B370u;
        goto label_22b370;
    }
    ctx->pc = 0x22B368u;
    {
        const bool branch_taken_0x22b368 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b368) {
            ctx->pc = 0x22B384u;
            goto label_22b384;
        }
    }
    ctx->pc = 0x22B370u;
label_22b370:
    // 0x22b370: 0xc0e409a  jal         func_390268
label_22b374:
    if (ctx->pc == 0x22B374u) {
        ctx->pc = 0x22B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B370u;
        // 0x22b374: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B378u;
        goto label_22b378;
    }
    ctx->pc = 0x22B370u;
    SET_GPR_U32(ctx, 31, 0x22B378u);
    ctx->pc = 0x22B374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B370u;
    // 0x22b374: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x22B370u, 0x22B378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B378u;
label_22b378:
    // 0x22b378: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22b378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b37c:
    // 0x22b37c: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_22b380:
    if (ctx->pc == 0x22B380u) {
        ctx->pc = 0x22B384u;
        goto label_22b384;
    }
    ctx->pc = 0x22B37Cu;
    {
        const bool branch_taken_0x22b37c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b37c) {
            ctx->pc = 0x22B3B4u;
            goto label_22b3b4;
        }
    }
    ctx->pc = 0x22B384u;
label_22b384:
    // 0x22b384: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_22b388:
    if (ctx->pc == 0x22B388u) {
        ctx->pc = 0x22B38Cu;
        goto label_22b38c;
    }
    ctx->pc = 0x22B384u;
    {
        const bool branch_taken_0x22b384 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b384) {
            ctx->pc = 0x22B398u;
            goto label_22b398;
        }
    }
    ctx->pc = 0x22B38Cu;
label_22b38c:
    // 0x22b38c: 0xc089a76  jal         func_2269D8
label_22b390:
    if (ctx->pc == 0x22B390u) {
        ctx->pc = 0x22B390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B38Cu;
        // 0x22b390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B394u;
        goto label_22b394;
    }
    ctx->pc = 0x22B38Cu;
    SET_GPR_U32(ctx, 31, 0x22B394u);
    ctx->pc = 0x22B390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B38Cu;
    // 0x22b390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2269D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269D8u, 0x22B38Cu, 0x22B394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B394u;
label_22b394:
    // 0x22b394: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22b394u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b398:
    // 0x22b398: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_22b39c:
    if (ctx->pc == 0x22B39Cu) {
        ctx->pc = 0x22B3A0u;
        goto label_22b3a0;
    }
    ctx->pc = 0x22B398u;
    {
        const bool branch_taken_0x22b398 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b398) {
            ctx->pc = 0x22B3B4u;
            goto label_22b3b4;
        }
    }
    ctx->pc = 0x22B3A0u;
label_22b3a0:
    // 0x22b3a0: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_22b3a4:
    if (ctx->pc == 0x22B3A4u) {
        ctx->pc = 0x22B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B3A0u;
        // 0x22b3a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B3A8u;
        goto label_22b3a8;
    }
    ctx->pc = 0x22B3A0u;
    {
        const bool branch_taken_0x22b3a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B3A0u;
        // 0x22b3a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b3a0) {
            ctx->pc = 0x22B3BCu;
            goto label_22b3bc;
        }
    }
    ctx->pc = 0x22B3A8u;
label_22b3a8:
    // 0x22b3a8: 0xc0e409a  jal         func_390268
label_22b3ac:
    if (ctx->pc == 0x22B3ACu) {
        ctx->pc = 0x22B3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B3A8u;
        // 0x22b3ac: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B3B0u;
        goto label_22b3b0;
    }
    ctx->pc = 0x22B3A8u;
    SET_GPR_U32(ctx, 31, 0x22B3B0u);
    ctx->pc = 0x22B3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B3A8u;
    // 0x22b3ac: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x22B3A8u, 0x22B3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B3B0u;
label_22b3b0:
    // 0x22b3b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22b3b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b3b4:
    // 0x22b3b4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_22b3b8:
    if (ctx->pc == 0x22B3B8u) {
        ctx->pc = 0x22B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B3B4u;
        // 0x22b3b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B3BCu;
        goto label_22b3bc;
    }
    ctx->pc = 0x22B3B4u;
    {
        const bool branch_taken_0x22b3b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B3B4u;
        // 0x22b3b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b3b4) {
            ctx->pc = 0x22B448u;
            goto label_22b448;
        }
    }
    ctx->pc = 0x22B3BCu;
label_22b3bc:
    // 0x22b3bc: 0xc089988  jal         func_226620
label_22b3c0:
    if (ctx->pc == 0x22B3C0u) {
        ctx->pc = 0x22B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B3BCu;
        // 0x22b3c0: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B3C4u;
        goto label_22b3c4;
    }
    ctx->pc = 0x22B3BCu;
    SET_GPR_U32(ctx, 31, 0x22B3C4u);
    ctx->pc = 0x22B3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B3BCu;
    // 0x22b3c0: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22B3BCu, 0x22B3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B3C4u;
label_22b3c4:
    // 0x22b3c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22b3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22b3c8:
    // 0x22b3c8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x22b3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22b3cc:
    // 0x22b3cc: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x22b3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_22b3d0:
    // 0x22b3d0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22b3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22b3d4:
    // 0x22b3d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22b3d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22b3d8:
    // 0x22b3d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22b3d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22b3dc:
    // 0x22b3dc: 0xae0300c4  sw          $v1, 0xC4($s0)
    ctx->pc = 0x22b3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
label_22b3e0:
    // 0x22b3e0: 0x84c400e0  lh          $a0, 0xE0($a2)
    ctx->pc = 0x22b3e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 224)));
label_22b3e4:
    // 0x22b3e4: 0x8cc200e4  lw          $v0, 0xE4($a2)
    ctx->pc = 0x22b3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
label_22b3e8:
    // 0x22b3e8: 0x40f809  jalr        $v0
label_22b3ec:
    if (ctx->pc == 0x22B3ECu) {
        ctx->pc = 0x22B3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B3E8u;
        // 0x22b3ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B3F0u;
        goto label_22b3f0;
    }
    ctx->pc = 0x22B3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B3F0u);
        ctx->pc = 0x22B3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B3E8u;
        // 0x22b3ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B3E8u, 0x22B3F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B3F0u;
label_22b3f0:
    // 0x22b3f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22b3f4:
    // 0x22b3f4: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22b3f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22b3f8:
    // 0x22b3f8: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22b3fc:
    // 0x22b3fc: 0x40f809  jalr        $v0
label_22b400:
    if (ctx->pc == 0x22B400u) {
        ctx->pc = 0x22B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B3FCu;
        // 0x22b400: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B404u;
        goto label_22b404;
    }
    ctx->pc = 0x22B3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B404u);
        ctx->pc = 0x22B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B3FCu;
        // 0x22b400: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B3FCu, 0x22B404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B404u;
label_22b404:
    // 0x22b404: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_22b408:
    if (ctx->pc == 0x22B408u) {
        ctx->pc = 0x22B40Cu;
        goto label_22b40c;
    }
    ctx->pc = 0x22B404u;
    {
        const bool branch_taken_0x22b404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b404) {
            ctx->pc = 0x22B448u;
            goto label_22b448;
        }
    }
    ctx->pc = 0x22B40Cu;
label_22b40c:
    // 0x22b40c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22b40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22b410:
    // 0x22b410: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22b410u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22b414:
    // 0x22b414: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22b414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22b418:
    // 0x22b418: 0x40f809  jalr        $v0
label_22b41c:
    if (ctx->pc == 0x22B41Cu) {
        ctx->pc = 0x22B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B418u;
        // 0x22b41c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B420u;
        goto label_22b420;
    }
    ctx->pc = 0x22B418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B420u);
        ctx->pc = 0x22B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B418u;
        // 0x22b41c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B418u, 0x22B420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B420u;
label_22b420:
    // 0x22b420: 0xa440003c  sh          $zero, 0x3C($v0)
    ctx->pc = 0x22b420u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 0));
label_22b424:
    // 0x22b424: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22b424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22b428:
    // 0x22b428: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22b428u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22b42c:
    // 0x22b42c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22b430:
    // 0x22b430: 0x40f809  jalr        $v0
label_22b434:
    if (ctx->pc == 0x22B434u) {
        ctx->pc = 0x22B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B430u;
        // 0x22b434: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B438u;
        goto label_22b438;
    }
    ctx->pc = 0x22B430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B438u);
        ctx->pc = 0x22B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B430u;
        // 0x22b434: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B430u, 0x22B438u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B438u;
label_22b438:
    // 0x22b438: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x22b438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_22b43c:
    // 0x22b43c: 0x2404fdff  addiu       $a0, $zero, -0x201
    ctx->pc = 0x22b43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
label_22b440:
    // 0x22b440: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x22b440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_22b444:
    // 0x22b444: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x22b444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_22b448:
    // 0x22b448: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
label_22b44c:
    if (ctx->pc == 0x22B44Cu) {
        ctx->pc = 0x22B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B448u;
        // 0x22b44c: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B450u;
        goto label_22b450;
    }
    ctx->pc = 0x22B448u;
    {
        const bool branch_taken_0x22b448 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B448u;
        // 0x22b44c: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b448) {
            ctx->pc = 0x22B4F4u;
            goto label_22b4f4;
        }
    }
    ctx->pc = 0x22B450u;
label_22b450:
    // 0x22b450: 0xc089988  jal         func_226620
label_22b454:
    if (ctx->pc == 0x22B454u) {
        ctx->pc = 0x22B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B450u;
        // 0x22b454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B458u;
        goto label_22b458;
    }
    ctx->pc = 0x22B450u;
    SET_GPR_U32(ctx, 31, 0x22B458u);
    ctx->pc = 0x22B454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B450u;
    // 0x22b454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22B450u, 0x22B458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B458u;
label_22b458:
    // 0x22b458: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x22b458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_22b45c:
    // 0x22b45c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22b460:
    // 0x22b460: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x22b460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_22b464:
    // 0x22b464: 0xc089a80  jal         func_226A00
label_22b468:
    if (ctx->pc == 0x22B468u) {
        ctx->pc = 0x22B468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B464u;
        // 0x22b468: 0xae2200c4  sw          $v0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B46Cu;
        goto label_22b46c;
    }
    ctx->pc = 0x22B464u;
    SET_GPR_U32(ctx, 31, 0x22B46Cu);
    ctx->pc = 0x22B468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B464u;
    // 0x22b468: 0xae2200c4  sw          $v0, 0xC4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226A00u, 0x22B464u, 0x22B46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B46Cu;
label_22b46c:
    // 0x22b46c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22b470:
    // 0x22b470: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22b470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22b474:
    // 0x22b474: 0xc08bd3e  jal         func_22F4F8
label_22b478:
    if (ctx->pc == 0x22B478u) {
        ctx->pc = 0x22B478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B474u;
        // 0x22b478: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B47Cu;
        goto label_22b47c;
    }
    ctx->pc = 0x22B474u;
    SET_GPR_U32(ctx, 31, 0x22B47Cu);
    ctx->pc = 0x22B478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B474u;
    // 0x22b478: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F4F8u, 0x22B474u, 0x22B47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B47Cu;
label_22b47c:
    // 0x22b47c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22b47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22b480:
    // 0x22b480: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22b480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22b484:
    // 0x22b484: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22b484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22b488:
    // 0x22b488: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22b488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22b48c:
    // 0x22b48c: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x22b48cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_22b490:
    // 0x22b490: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x22b490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_22b494:
    // 0x22b494: 0x40f809  jalr        $v0
label_22b498:
    if (ctx->pc == 0x22B498u) {
        ctx->pc = 0x22B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B494u;
        // 0x22b498: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B49Cu;
        goto label_22b49c;
    }
    ctx->pc = 0x22B494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B49Cu);
        ctx->pc = 0x22B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B494u;
        // 0x22b498: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B494u, 0x22B49Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B49Cu;
label_22b49c:
    // 0x22b49c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22b49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22b4a0:
    // 0x22b4a0: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22b4a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22b4a4:
    // 0x22b4a4: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22b4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22b4a8:
    // 0x22b4a8: 0x40f809  jalr        $v0
label_22b4ac:
    if (ctx->pc == 0x22B4ACu) {
        ctx->pc = 0x22B4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B4A8u;
        // 0x22b4ac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B4B0u;
        goto label_22b4b0;
    }
    ctx->pc = 0x22B4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B4B0u);
        ctx->pc = 0x22B4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B4A8u;
        // 0x22b4ac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B4A8u, 0x22B4B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B4B0u;
label_22b4b0:
    // 0x22b4b0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_22b4b4:
    if (ctx->pc == 0x22B4B4u) {
        ctx->pc = 0x22B4B8u;
        goto label_22b4b8;
    }
    ctx->pc = 0x22B4B0u;
    {
        const bool branch_taken_0x22b4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b4b0) {
            ctx->pc = 0x22B4F4u;
            goto label_22b4f4;
        }
    }
    ctx->pc = 0x22B4B8u;
label_22b4b8:
    // 0x22b4b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22b4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22b4bc:
    // 0x22b4bc: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22b4bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22b4c0:
    // 0x22b4c0: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22b4c4:
    // 0x22b4c4: 0x40f809  jalr        $v0
label_22b4c8:
    if (ctx->pc == 0x22B4C8u) {
        ctx->pc = 0x22B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B4C4u;
        // 0x22b4c8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B4CCu;
        goto label_22b4cc;
    }
    ctx->pc = 0x22B4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B4CCu);
        ctx->pc = 0x22B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B4C4u;
        // 0x22b4c8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B4C4u, 0x22B4CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B4CCu;
label_22b4cc:
    // 0x22b4cc: 0xa440003c  sh          $zero, 0x3C($v0)
    ctx->pc = 0x22b4ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 0));
label_22b4d0:
    // 0x22b4d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22b4d4:
    // 0x22b4d4: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22b4d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22b4d8:
    // 0x22b4d8: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22b4dc:
    // 0x22b4dc: 0x40f809  jalr        $v0
label_22b4e0:
    if (ctx->pc == 0x22B4E0u) {
        ctx->pc = 0x22B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B4DCu;
        // 0x22b4e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B4E4u;
        goto label_22b4e4;
    }
    ctx->pc = 0x22B4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B4E4u);
        ctx->pc = 0x22B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B4DCu;
        // 0x22b4e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B4DCu, 0x22B4E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B4E4u;
label_22b4e4:
    // 0x22b4e4: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x22b4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_22b4e8:
    // 0x22b4e8: 0x2404fdff  addiu       $a0, $zero, -0x201
    ctx->pc = 0x22b4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
label_22b4ec:
    // 0x22b4ec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x22b4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_22b4f0:
    // 0x22b4f0: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x22b4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_22b4f4:
    // 0x22b4f4: 0x12400026  beqz        $s2, . + 4 + (0x26 << 2)
label_22b4f8:
    if (ctx->pc == 0x22B4F8u) {
        ctx->pc = 0x22B4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B4F4u;
        // 0x22b4f8: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B4FCu;
        goto label_22b4fc;
    }
    ctx->pc = 0x22B4F4u;
    {
        const bool branch_taken_0x22b4f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B4F4u;
        // 0x22b4f8: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b4f4) {
            ctx->pc = 0x22B590u;
            goto label_22b590;
        }
    }
    ctx->pc = 0x22B4FCu;
label_22b4fc:
    // 0x22b4fc: 0xc089988  jal         func_226620
label_22b500:
    if (ctx->pc == 0x22B500u) {
        ctx->pc = 0x22B500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B4FCu;
        // 0x22b500: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B504u;
        goto label_22b504;
    }
    ctx->pc = 0x22B4FCu;
    SET_GPR_U32(ctx, 31, 0x22B504u);
    ctx->pc = 0x22B500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B4FCu;
    // 0x22b500: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22B4FCu, 0x22B504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B504u;
label_22b504:
    // 0x22b504: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x22b504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_22b508:
    // 0x22b508: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22b508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22b50c:
    // 0x22b50c: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x22b50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_22b510:
    // 0x22b510: 0xc089a80  jal         func_226A00
label_22b514:
    if (ctx->pc == 0x22B514u) {
        ctx->pc = 0x22B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B510u;
        // 0x22b514: 0xae4200c4  sw          $v0, 0xC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B518u;
        goto label_22b518;
    }
    ctx->pc = 0x22B510u;
    SET_GPR_U32(ctx, 31, 0x22B518u);
    ctx->pc = 0x22B514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B510u;
    // 0x22b514: 0xae4200c4  sw          $v0, 0xC4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226A00u, 0x22B510u, 0x22B518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B518u;
label_22b518:
    // 0x22b518: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22b518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22b51c:
    // 0x22b51c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22b51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22b520:
    // 0x22b520: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22b520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22b524:
    // 0x22b524: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22b524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22b528:
    // 0x22b528: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x22b528u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_22b52c:
    // 0x22b52c: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x22b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_22b530:
    // 0x22b530: 0x40f809  jalr        $v0
label_22b534:
    if (ctx->pc == 0x22B534u) {
        ctx->pc = 0x22B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B530u;
        // 0x22b534: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B538u;
        goto label_22b538;
    }
    ctx->pc = 0x22B530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B538u);
        ctx->pc = 0x22B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B530u;
        // 0x22b534: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B530u, 0x22B538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B538u;
label_22b538:
    // 0x22b538: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22b538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22b53c:
    // 0x22b53c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22b53cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22b540:
    // 0x22b540: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22b540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22b544:
    // 0x22b544: 0x40f809  jalr        $v0
label_22b548:
    if (ctx->pc == 0x22B548u) {
        ctx->pc = 0x22B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B544u;
        // 0x22b548: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B54Cu;
        goto label_22b54c;
    }
    ctx->pc = 0x22B544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B54Cu);
        ctx->pc = 0x22B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B544u;
        // 0x22b548: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B544u, 0x22B54Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B54Cu;
label_22b54c:
    // 0x22b54c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_22b550:
    if (ctx->pc == 0x22B550u) {
        ctx->pc = 0x22B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B54Cu;
        // 0x22b550: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B554u;
        goto label_22b554;
    }
    ctx->pc = 0x22B54Cu;
    {
        const bool branch_taken_0x22b54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B54Cu;
        // 0x22b550: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b54c) {
            ctx->pc = 0x22B594u;
            goto label_22b594;
        }
    }
    ctx->pc = 0x22B554u;
label_22b554:
    // 0x22b554: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22b554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22b558:
    // 0x22b558: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22b558u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22b55c:
    // 0x22b55c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22b55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22b560:
    // 0x22b560: 0x40f809  jalr        $v0
label_22b564:
    if (ctx->pc == 0x22B564u) {
        ctx->pc = 0x22B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B560u;
        // 0x22b564: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B568u;
        goto label_22b568;
    }
    ctx->pc = 0x22B560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B568u);
        ctx->pc = 0x22B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B560u;
        // 0x22b564: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B560u, 0x22B568u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B568u;
label_22b568:
    // 0x22b568: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x22b568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_22b56c:
    // 0x22b56c: 0x2404fdff  addiu       $a0, $zero, -0x201
    ctx->pc = 0x22b56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
label_22b570:
    // 0x22b570: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x22b570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_22b574:
    // 0x22b574: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x22b574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_22b578:
    // 0x22b578: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x22b578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22b57c:
    // 0x22b57c: 0x84a400f0  lh          $a0, 0xF0($a1)
    ctx->pc = 0x22b57cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 240)));
label_22b580:
    // 0x22b580: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x22b580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
label_22b584:
    // 0x22b584: 0x40f809  jalr        $v0
label_22b588:
    if (ctx->pc == 0x22B588u) {
        ctx->pc = 0x22B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B584u;
        // 0x22b588: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B58Cu;
        goto label_22b58c;
    }
    ctx->pc = 0x22B584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B58Cu);
        ctx->pc = 0x22B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B584u;
        // 0x22b588: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B584u, 0x22B58Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B58Cu;
label_22b58c:
    // 0x22b58c: 0xa440003c  sh          $zero, 0x3C($v0)
    ctx->pc = 0x22b58cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 0));
label_22b590:
    // 0x22b590: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22b590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22b594:
    // 0x22b594: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22b594u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22b598:
    // 0x22b598: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x22b598u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22b59c:
    // 0x22b59c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22b5a0:
    // 0x22b5a0: 0x3e00008  jr          $ra
label_22b5a4:
    if (ctx->pc == 0x22B5A4u) {
        ctx->pc = 0x22B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B5A0u;
        // 0x22b5a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B5A8u;
        goto label_fallthrough_0x22b5a0;
    }
    ctx->pc = 0x22B5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B5A0u;
        // 0x22b5a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22b5a0:
    ctx->pc = 0x22B5A8u;
}
