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

// Function: sub_0031B388
// Address: 0x31b388 - 0x31b5d0
void sub_0031B388_0x31b388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B388_0x31b388");
#endif

    switch (ctx->pc) {
        case 0x31b388u: goto label_31b388;
        case 0x31b38cu: goto label_31b38c;
        case 0x31b390u: goto label_31b390;
        case 0x31b394u: goto label_31b394;
        case 0x31b398u: goto label_31b398;
        case 0x31b39cu: goto label_31b39c;
        case 0x31b3a0u: goto label_31b3a0;
        case 0x31b3a4u: goto label_31b3a4;
        case 0x31b3a8u: goto label_31b3a8;
        case 0x31b3acu: goto label_31b3ac;
        case 0x31b3b0u: goto label_31b3b0;
        case 0x31b3b4u: goto label_31b3b4;
        case 0x31b3b8u: goto label_31b3b8;
        case 0x31b3bcu: goto label_31b3bc;
        case 0x31b3c0u: goto label_31b3c0;
        case 0x31b3c4u: goto label_31b3c4;
        case 0x31b3c8u: goto label_31b3c8;
        case 0x31b3ccu: goto label_31b3cc;
        case 0x31b3d0u: goto label_31b3d0;
        case 0x31b3d4u: goto label_31b3d4;
        case 0x31b3d8u: goto label_31b3d8;
        case 0x31b3dcu: goto label_31b3dc;
        case 0x31b3e0u: goto label_31b3e0;
        case 0x31b3e4u: goto label_31b3e4;
        case 0x31b3e8u: goto label_31b3e8;
        case 0x31b3ecu: goto label_31b3ec;
        case 0x31b3f0u: goto label_31b3f0;
        case 0x31b3f4u: goto label_31b3f4;
        case 0x31b3f8u: goto label_31b3f8;
        case 0x31b3fcu: goto label_31b3fc;
        case 0x31b400u: goto label_31b400;
        case 0x31b404u: goto label_31b404;
        case 0x31b408u: goto label_31b408;
        case 0x31b40cu: goto label_31b40c;
        case 0x31b410u: goto label_31b410;
        case 0x31b414u: goto label_31b414;
        case 0x31b418u: goto label_31b418;
        case 0x31b41cu: goto label_31b41c;
        case 0x31b420u: goto label_31b420;
        case 0x31b424u: goto label_31b424;
        case 0x31b428u: goto label_31b428;
        case 0x31b42cu: goto label_31b42c;
        case 0x31b430u: goto label_31b430;
        case 0x31b434u: goto label_31b434;
        case 0x31b438u: goto label_31b438;
        case 0x31b43cu: goto label_31b43c;
        case 0x31b440u: goto label_31b440;
        case 0x31b444u: goto label_31b444;
        case 0x31b448u: goto label_31b448;
        case 0x31b44cu: goto label_31b44c;
        case 0x31b450u: goto label_31b450;
        case 0x31b454u: goto label_31b454;
        case 0x31b458u: goto label_31b458;
        case 0x31b45cu: goto label_31b45c;
        case 0x31b460u: goto label_31b460;
        case 0x31b464u: goto label_31b464;
        case 0x31b468u: goto label_31b468;
        case 0x31b46cu: goto label_31b46c;
        case 0x31b470u: goto label_31b470;
        case 0x31b474u: goto label_31b474;
        case 0x31b478u: goto label_31b478;
        case 0x31b47cu: goto label_31b47c;
        case 0x31b480u: goto label_31b480;
        case 0x31b484u: goto label_31b484;
        case 0x31b488u: goto label_31b488;
        case 0x31b48cu: goto label_31b48c;
        case 0x31b490u: goto label_31b490;
        case 0x31b494u: goto label_31b494;
        case 0x31b498u: goto label_31b498;
        case 0x31b49cu: goto label_31b49c;
        case 0x31b4a0u: goto label_31b4a0;
        case 0x31b4a4u: goto label_31b4a4;
        case 0x31b4a8u: goto label_31b4a8;
        case 0x31b4acu: goto label_31b4ac;
        case 0x31b4b0u: goto label_31b4b0;
        case 0x31b4b4u: goto label_31b4b4;
        case 0x31b4b8u: goto label_31b4b8;
        case 0x31b4bcu: goto label_31b4bc;
        case 0x31b4c0u: goto label_31b4c0;
        case 0x31b4c4u: goto label_31b4c4;
        case 0x31b4c8u: goto label_31b4c8;
        case 0x31b4ccu: goto label_31b4cc;
        case 0x31b4d0u: goto label_31b4d0;
        case 0x31b4d4u: goto label_31b4d4;
        case 0x31b4d8u: goto label_31b4d8;
        case 0x31b4dcu: goto label_31b4dc;
        case 0x31b4e0u: goto label_31b4e0;
        case 0x31b4e4u: goto label_31b4e4;
        case 0x31b4e8u: goto label_31b4e8;
        case 0x31b4ecu: goto label_31b4ec;
        case 0x31b4f0u: goto label_31b4f0;
        case 0x31b4f4u: goto label_31b4f4;
        case 0x31b4f8u: goto label_31b4f8;
        case 0x31b4fcu: goto label_31b4fc;
        case 0x31b500u: goto label_31b500;
        case 0x31b504u: goto label_31b504;
        case 0x31b508u: goto label_31b508;
        case 0x31b50cu: goto label_31b50c;
        case 0x31b510u: goto label_31b510;
        case 0x31b514u: goto label_31b514;
        case 0x31b518u: goto label_31b518;
        case 0x31b51cu: goto label_31b51c;
        case 0x31b520u: goto label_31b520;
        case 0x31b524u: goto label_31b524;
        case 0x31b528u: goto label_31b528;
        case 0x31b52cu: goto label_31b52c;
        case 0x31b530u: goto label_31b530;
        case 0x31b534u: goto label_31b534;
        case 0x31b538u: goto label_31b538;
        case 0x31b53cu: goto label_31b53c;
        case 0x31b540u: goto label_31b540;
        case 0x31b544u: goto label_31b544;
        case 0x31b548u: goto label_31b548;
        case 0x31b54cu: goto label_31b54c;
        case 0x31b550u: goto label_31b550;
        case 0x31b554u: goto label_31b554;
        case 0x31b558u: goto label_31b558;
        case 0x31b55cu: goto label_31b55c;
        case 0x31b560u: goto label_31b560;
        case 0x31b564u: goto label_31b564;
        case 0x31b568u: goto label_31b568;
        case 0x31b56cu: goto label_31b56c;
        case 0x31b570u: goto label_31b570;
        case 0x31b574u: goto label_31b574;
        case 0x31b578u: goto label_31b578;
        case 0x31b57cu: goto label_31b57c;
        case 0x31b580u: goto label_31b580;
        case 0x31b584u: goto label_31b584;
        case 0x31b588u: goto label_31b588;
        case 0x31b58cu: goto label_31b58c;
        case 0x31b590u: goto label_31b590;
        case 0x31b594u: goto label_31b594;
        case 0x31b598u: goto label_31b598;
        case 0x31b59cu: goto label_31b59c;
        case 0x31b5a0u: goto label_31b5a0;
        case 0x31b5a4u: goto label_31b5a4;
        case 0x31b5a8u: goto label_31b5a8;
        case 0x31b5acu: goto label_31b5ac;
        case 0x31b5b0u: goto label_31b5b0;
        case 0x31b5b4u: goto label_31b5b4;
        case 0x31b5b8u: goto label_31b5b8;
        case 0x31b5bcu: goto label_31b5bc;
        case 0x31b5c0u: goto label_31b5c0;
        case 0x31b5c4u: goto label_31b5c4;
        case 0x31b5c8u: goto label_31b5c8;
        case 0x31b5ccu: goto label_31b5cc;
        default: break;
    }

    ctx->pc = 0x31b388u;

label_31b388:
    // 0x31b388: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x31b388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_31b38c:
    // 0x31b38c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x31b38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_31b390:
    // 0x31b390: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x31b390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_31b394:
    // 0x31b394: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31b394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31b398:
    // 0x31b398: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x31b398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_31b39c:
    // 0x31b39c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x31b39cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_31b3a0:
    // 0x31b3a0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x31b3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_31b3a4:
    // 0x31b3a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31b3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_31b3a8:
    // 0x31b3a8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x31b3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_31b3ac:
    // 0x31b3ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31b3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31b3b0:
    // 0x31b3b0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x31b3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_31b3b4:
    // 0x31b3b4: 0x1054007e  beq         $v0, $s4, . + 4 + (0x7E << 2)
label_31b3b8:
    if (ctx->pc == 0x31B3B8u) {
        ctx->pc = 0x31B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B3B4u;
        // 0x31b3b8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B3BCu;
        goto label_31b3bc;
    }
    ctx->pc = 0x31B3B4u;
    {
        const bool branch_taken_0x31b3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x31B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B3B4u;
        // 0x31b3b8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b3b4) {
            ctx->pc = 0x31B5B0u;
            goto label_31b5b0;
        }
    }
    ctx->pc = 0x31B3BCu;
label_31b3bc:
    // 0x31b3bc: 0xc05b0e2  jal         func_16C388
label_31b3c0:
    if (ctx->pc == 0x31B3C0u) {
        ctx->pc = 0x31B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B3BCu;
        // 0x31b3c0: 0x86240020  lh          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B3C4u;
        goto label_31b3c4;
    }
    ctx->pc = 0x31B3BCu;
    SET_GPR_U32(ctx, 31, 0x31B3C4u);
    ctx->pc = 0x31B3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B3BCu;
    // 0x31b3c0: 0x86240020  lh          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x31B3BCu, 0x31B3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B3C4u;
label_31b3c4:
    // 0x31b3c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x31b3c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31b3c8:
    // 0x31b3c8: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x31b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_31b3cc:
    // 0x31b3cc: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
label_31b3d0:
    if (ctx->pc == 0x31B3D0u) {
        ctx->pc = 0x31B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B3CCu;
        // 0x31b3d0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B3D4u;
        goto label_31b3d4;
    }
    ctx->pc = 0x31B3CCu;
    {
        const bool branch_taken_0x31b3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B3CCu;
        // 0x31b3d0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b3cc) {
            ctx->pc = 0x31B5B0u;
            goto label_31b5b0;
        }
    }
    ctx->pc = 0x31B3D4u;
label_31b3d4:
    // 0x31b3d4: 0xc05959e  jal         func_165678
label_31b3d8:
    if (ctx->pc == 0x31B3D8u) {
        ctx->pc = 0x31B3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B3D4u;
        // 0x31b3d8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B3DCu;
        goto label_31b3dc;
    }
    ctx->pc = 0x31B3D4u;
    SET_GPR_U32(ctx, 31, 0x31B3DCu);
    ctx->pc = 0x31B3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B3D4u;
    // 0x31b3d8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x31B3D4u, 0x31B3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B3DCu;
label_31b3dc:
    // 0x31b3dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31b3dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31b3e0:
    // 0x31b3e0: 0x12400073  beqz        $s2, . + 4 + (0x73 << 2)
label_31b3e4:
    if (ctx->pc == 0x31B3E4u) {
        ctx->pc = 0x31B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B3E0u;
        // 0x31b3e4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B3E8u;
        goto label_31b3e8;
    }
    ctx->pc = 0x31B3E0u;
    {
        const bool branch_taken_0x31b3e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B3E0u;
        // 0x31b3e4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b3e0) {
            ctx->pc = 0x31B5B0u;
            goto label_31b5b0;
        }
    }
    ctx->pc = 0x31B3E8u;
label_31b3e8:
    // 0x31b3e8: 0xc087502  jal         func_21D408
label_31b3ec:
    if (ctx->pc == 0x31B3ECu) {
        ctx->pc = 0x31B3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B3E8u;
        // 0x31b3ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B3F0u;
        goto label_31b3f0;
    }
    ctx->pc = 0x31B3E8u;
    SET_GPR_U32(ctx, 31, 0x31B3F0u);
    ctx->pc = 0x31B3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B3E8u;
    // 0x31b3ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31B3E8u, 0x31B3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B3F0u;
label_31b3f0:
    // 0x31b3f0: 0xc0a3630  jal         func_28D8C0
label_31b3f4:
    if (ctx->pc == 0x31B3F4u) {
        ctx->pc = 0x31B3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B3F0u;
        // 0x31b3f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B3F8u;
        goto label_31b3f8;
    }
    ctx->pc = 0x31B3F0u;
    SET_GPR_U32(ctx, 31, 0x31B3F8u);
    ctx->pc = 0x31B3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B3F0u;
    // 0x31b3f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x31B3F0u, 0x31B3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B3F8u;
label_31b3f8:
    // 0x31b3f8: 0xc087502  jal         func_21D408
label_31b3fc:
    if (ctx->pc == 0x31B3FCu) {
        ctx->pc = 0x31B3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B3F8u;
        // 0x31b3fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B400u;
        goto label_31b400;
    }
    ctx->pc = 0x31B3F8u;
    SET_GPR_U32(ctx, 31, 0x31B400u);
    ctx->pc = 0x31B3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B3F8u;
    // 0x31b3fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31B3F8u, 0x31B400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B400u;
label_31b400:
    // 0x31b400: 0xc0a3628  jal         func_28D8A0
label_31b404:
    if (ctx->pc == 0x31B404u) {
        ctx->pc = 0x31B404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B400u;
        // 0x31b404: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B408u;
        goto label_31b408;
    }
    ctx->pc = 0x31B400u;
    SET_GPR_U32(ctx, 31, 0x31B408u);
    ctx->pc = 0x31B404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B400u;
    // 0x31b404: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x31B400u, 0x31B408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B408u;
label_31b408:
    // 0x31b408: 0xc0a4e54  jal         func_293950
label_31b40c:
    if (ctx->pc == 0x31B40Cu) {
        ctx->pc = 0x31B410u;
        goto label_31b410;
    }
    ctx->pc = 0x31B408u;
    SET_GPR_U32(ctx, 31, 0x31B410u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x31B408u, 0x31B410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B410u;
label_31b410:
    // 0x31b410: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31b410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31b414:
    // 0x31b414: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_31b418:
    if (ctx->pc == 0x31B418u) {
        ctx->pc = 0x31B41Cu;
        goto label_31b41c;
    }
    ctx->pc = 0x31B414u;
    {
        const bool branch_taken_0x31b414 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b414) {
            ctx->pc = 0x31B434u;
            goto label_31b434;
        }
    }
    ctx->pc = 0x31B41Cu;
label_31b41c:
    // 0x31b41c: 0xc087502  jal         func_21D408
label_31b420:
    if (ctx->pc == 0x31B420u) {
        ctx->pc = 0x31B420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B41Cu;
        // 0x31b420: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B424u;
        goto label_31b424;
    }
    ctx->pc = 0x31B41Cu;
    SET_GPR_U32(ctx, 31, 0x31B424u);
    ctx->pc = 0x31B420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B41Cu;
    // 0x31b420: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31B41Cu, 0x31B424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B424u;
label_31b424:
    // 0x31b424: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31b424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31b428:
    // 0x31b428: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x31b428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31b42c:
    // 0x31b42c: 0xc0b8b4a  jal         func_2E2D28
label_31b430:
    if (ctx->pc == 0x31B430u) {
        ctx->pc = 0x31B430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B42Cu;
        // 0x31b430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B434u;
        goto label_31b434;
    }
    ctx->pc = 0x31B42Cu;
    SET_GPR_U32(ctx, 31, 0x31B434u);
    ctx->pc = 0x31B430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B42Cu;
    // 0x31b430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2D28u, 0x31B42Cu, 0x31B434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B434u;
label_31b434:
    // 0x31b434: 0xc087502  jal         func_21D408
label_31b438:
    if (ctx->pc == 0x31B438u) {
        ctx->pc = 0x31B438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B434u;
        // 0x31b438: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B43Cu;
        goto label_31b43c;
    }
    ctx->pc = 0x31B434u;
    SET_GPR_U32(ctx, 31, 0x31B43Cu);
    ctx->pc = 0x31B438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B434u;
    // 0x31b438: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31B434u, 0x31B43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B43Cu;
label_31b43c:
    // 0x31b43c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31b43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31b440:
    // 0x31b440: 0xc0a35d6  jal         func_28D758
label_31b444:
    if (ctx->pc == 0x31B444u) {
        ctx->pc = 0x31B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B440u;
        // 0x31b444: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B448u;
        goto label_31b448;
    }
    ctx->pc = 0x31B440u;
    SET_GPR_U32(ctx, 31, 0x31B448u);
    ctx->pc = 0x31B444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B440u;
    // 0x31b444: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x31B440u, 0x31B448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B448u;
label_31b448:
    // 0x31b448: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31b448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31b44c:
    // 0x31b44c: 0xc08750a  jal         func_21D428
label_31b450:
    if (ctx->pc == 0x31B450u) {
        ctx->pc = 0x31B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B44Cu;
        // 0x31b450: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B454u;
        goto label_31b454;
    }
    ctx->pc = 0x31B44Cu;
    SET_GPR_U32(ctx, 31, 0x31B454u);
    ctx->pc = 0x31B450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B44Cu;
    // 0x31b450: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x31B44Cu, 0x31B454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B454u;
label_31b454:
    // 0x31b454: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x31b454u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31b458:
    // 0x31b458: 0x86220034  lh          $v0, 0x34($s1)
    ctx->pc = 0x31b458u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 52)));
label_31b45c:
    // 0x31b45c: 0x54540004  bnel        $v0, $s4, . + 4 + (0x4 << 2)
label_31b460:
    if (ctx->pc == 0x31B460u) {
        ctx->pc = 0x31B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B45Cu;
        // 0x31b460: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B464u;
        goto label_31b464;
    }
    ctx->pc = 0x31B45Cu;
    {
        const bool branch_taken_0x31b45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x31b45c) {
            ctx->pc = 0x31B460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B45Cu;
            // 0x31b460: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B470u;
            goto label_31b470;
        }
    }
    ctx->pc = 0x31B464u;
label_31b464:
    // 0x31b464: 0x92620270  lbu         $v0, 0x270($s3)
    ctx->pc = 0x31b464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 624)));
label_31b468:
    // 0x31b468: 0xa6220034  sh          $v0, 0x34($s1)
    ctx->pc = 0x31b468u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 2));
label_31b46c:
    // 0x31b46c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31b46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31b470:
    // 0x31b470: 0xc059856  jal         func_166158
label_31b474:
    if (ctx->pc == 0x31B474u) {
        ctx->pc = 0x31B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B470u;
        // 0x31b474: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B478u;
        goto label_31b478;
    }
    ctx->pc = 0x31B470u;
    SET_GPR_U32(ctx, 31, 0x31B478u);
    ctx->pc = 0x31B474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B470u;
    // 0x31b474: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x31B470u, 0x31B478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B478u;
label_31b478:
    // 0x31b478: 0x86250036  lh          $a1, 0x36($s1)
    ctx->pc = 0x31b478u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 54)));
label_31b47c:
    // 0x31b47c: 0x14b40011  bne         $a1, $s4, . + 4 + (0x11 << 2)
label_31b480:
    if (ctx->pc == 0x31B480u) {
        ctx->pc = 0x31B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B47Cu;
        // 0x31b480: 0x2450ffff  addiu       $s0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B484u;
        goto label_31b484;
    }
    ctx->pc = 0x31B47Cu;
    {
        const bool branch_taken_0x31b47c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 20));
        ctx->pc = 0x31B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B47Cu;
        // 0x31b480: 0x2450ffff  addiu       $s0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b47c) {
            ctx->pc = 0x31B4C4u;
            goto label_31b4c4;
        }
    }
    ctx->pc = 0x31B484u;
label_31b484:
    // 0x31b484: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x31b484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31b488:
    // 0x31b488: 0xc0a576c  jal         func_295DB0
label_31b48c:
    if (ctx->pc == 0x31B48Cu) {
        ctx->pc = 0x31B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B488u;
        // 0x31b48c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B490u;
        goto label_31b490;
    }
    ctx->pc = 0x31B488u;
    SET_GPR_U32(ctx, 31, 0x31B490u);
    ctx->pc = 0x31B48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B488u;
    // 0x31b48c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DB0u, 0x31B488u, 0x31B490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B490u;
label_31b490:
    // 0x31b490: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x31b490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_31b494:
    // 0x31b494: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x31b494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_31b498:
    // 0x31b498: 0x202280b  movn        $a1, $s0, $v0
    ctx->pc = 0x31b498u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
label_31b49c:
    // 0x31b49c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31b49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31b4a0:
    // 0x31b4a0: 0xc0a5776  jal         func_295DD8
label_31b4a4:
    if (ctx->pc == 0x31B4A4u) {
        ctx->pc = 0x31B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B4A0u;
        // 0x31b4a4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B4A8u;
        goto label_31b4a8;
    }
    ctx->pc = 0x31B4A0u;
    SET_GPR_U32(ctx, 31, 0x31B4A8u);
    ctx->pc = 0x31B4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B4A0u;
    // 0x31b4a4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DD8u, 0x31B4A0u, 0x31B4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B4A8u;
label_31b4a8:
    // 0x31b4a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31b4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_31b4ac:
    // 0x31b4ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x31b4acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_31b4b0:
    // 0x31b4b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31b4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31b4b4:
    // 0x31b4b4: 0xc0a5922  jal         func_296488
label_31b4b8:
    if (ctx->pc == 0x31B4B8u) {
        ctx->pc = 0x31B4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B4B4u;
        // 0x31b4b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B4BCu;
        goto label_31b4bc;
    }
    ctx->pc = 0x31B4B4u;
    SET_GPR_U32(ctx, 31, 0x31B4BCu);
    ctx->pc = 0x31B4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B4B4u;
    // 0x31b4b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296488u, 0x31B4B4u, 0x31B4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B4BCu;
label_31b4bc:
    // 0x31b4bc: 0x10000004  b           . + 4 + (0x4 << 2)
label_31b4c0:
    if (ctx->pc == 0x31B4C0u) {
        ctx->pc = 0x31B4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B4BCu;
        // 0x31b4c0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B4C4u;
        goto label_31b4c4;
    }
    ctx->pc = 0x31B4BCu;
    {
        const bool branch_taken_0x31b4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B4BCu;
        // 0x31b4c0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b4bc) {
            ctx->pc = 0x31B4D0u;
            goto label_31b4d0;
        }
    }
    ctx->pc = 0x31B4C4u;
label_31b4c4:
    // 0x31b4c4: 0xc0a576c  jal         func_295DB0
label_31b4c8:
    if (ctx->pc == 0x31B4C8u) {
        ctx->pc = 0x31B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B4C4u;
        // 0x31b4c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B4CCu;
        goto label_31b4cc;
    }
    ctx->pc = 0x31B4C4u;
    SET_GPR_U32(ctx, 31, 0x31B4CCu);
    ctx->pc = 0x31B4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B4C4u;
    // 0x31b4c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DB0u, 0x31B4C4u, 0x31B4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B4CCu;
label_31b4cc:
    // 0x31b4cc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31b4d0:
    // 0x31b4d0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x31b4d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31b4d4:
    // 0x31b4d4: 0x24550048  addiu       $s5, $v0, 0x48
    ctx->pc = 0x31b4d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_31b4d8:
    // 0x31b4d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31b4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31b4dc:
    // 0x31b4dc: 0x0  nop
    ctx->pc = 0x31b4dcu;
    // NOP
label_31b4e0:
    // 0x31b4e0: 0xc137826  jal         func_4DE098
label_31b4e4:
    if (ctx->pc == 0x31B4E4u) {
        ctx->pc = 0x31B4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B4E0u;
        // 0x31b4e4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B4E8u;
        goto label_31b4e8;
    }
    ctx->pc = 0x31B4E0u;
    SET_GPR_U32(ctx, 31, 0x31B4E8u);
    ctx->pc = 0x31B4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B4E0u;
    // 0x31b4e4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x31B4E0u, 0x31B4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B4E8u;
label_31b4e8:
    // 0x31b4e8: 0xc0e409a  jal         func_390268
label_31b4ec:
    if (ctx->pc == 0x31B4ECu) {
        ctx->pc = 0x31B4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B4E8u;
        // 0x31b4ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B4F0u;
        goto label_31b4f0;
    }
    ctx->pc = 0x31B4E8u;
    SET_GPR_U32(ctx, 31, 0x31B4F0u);
    ctx->pc = 0x31B4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B4E8u;
    // 0x31b4ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31B4E8u, 0x31B4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B4F0u;
label_31b4f0:
    // 0x31b4f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31b4f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31b4f4:
    // 0x31b4f4: 0x5220002a  beql        $s1, $zero, . + 4 + (0x2A << 2)
label_31b4f8:
    if (ctx->pc == 0x31B4F8u) {
        ctx->pc = 0x31B4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B4F4u;
        // 0x31b4f8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B4FCu;
        goto label_31b4fc;
    }
    ctx->pc = 0x31B4F4u;
    {
        const bool branch_taken_0x31b4f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b4f4) {
            ctx->pc = 0x31B4F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B4F4u;
            // 0x31b4f8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B5A0u;
            goto label_31b5a0;
        }
    }
    ctx->pc = 0x31B4FCu;
label_31b4fc:
    // 0x31b4fc: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x31b4fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_31b500:
    // 0x31b500: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x31b500u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_31b504:
    // 0x31b504: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_31b508:
    if (ctx->pc == 0x31B508u) {
        ctx->pc = 0x31B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B504u;
        // 0x31b508: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B50Cu;
        goto label_31b50c;
    }
    ctx->pc = 0x31B504u;
    {
        const bool branch_taken_0x31b504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B504u;
        // 0x31b508: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b504) {
            ctx->pc = 0x31B59Cu;
            goto label_31b59c;
        }
    }
    ctx->pc = 0x31B50Cu;
label_31b50c:
    // 0x31b50c: 0x52320024  beql        $s1, $s2, . + 4 + (0x24 << 2)
label_31b510:
    if (ctx->pc == 0x31B510u) {
        ctx->pc = 0x31B510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B50Cu;
        // 0x31b510: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B514u;
        goto label_31b514;
    }
    ctx->pc = 0x31B50Cu;
    {
        const bool branch_taken_0x31b50c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        if (branch_taken_0x31b50c) {
            ctx->pc = 0x31B510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B50Cu;
            // 0x31b510: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B5A0u;
            goto label_31b5a0;
        }
    }
    ctx->pc = 0x31B514u;
label_31b514:
    // 0x31b514: 0xc088edc  jal         func_223B70
label_31b518:
    if (ctx->pc == 0x31B518u) {
        ctx->pc = 0x31B518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B514u;
        // 0x31b518: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B51Cu;
        goto label_31b51c;
    }
    ctx->pc = 0x31B514u;
    SET_GPR_U32(ctx, 31, 0x31B51Cu);
    ctx->pc = 0x31B518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B514u;
    // 0x31b518: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x31B514u, 0x31B51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B51Cu;
label_31b51c:
    // 0x31b51c: 0x50500020  beql        $v0, $s0, . + 4 + (0x20 << 2)
label_31b520:
    if (ctx->pc == 0x31B520u) {
        ctx->pc = 0x31B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B51Cu;
        // 0x31b520: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B524u;
        goto label_31b524;
    }
    ctx->pc = 0x31B51Cu;
    {
        const bool branch_taken_0x31b51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x31b51c) {
            ctx->pc = 0x31B520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B51Cu;
            // 0x31b520: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B5A0u;
            goto label_31b5a0;
        }
    }
    ctx->pc = 0x31B524u;
label_31b524:
    // 0x31b524: 0xc089f98  jal         func_227E60
label_31b528:
    if (ctx->pc == 0x31B528u) {
        ctx->pc = 0x31B528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B524u;
        // 0x31b528: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B52Cu;
        goto label_31b52c;
    }
    ctx->pc = 0x31B524u;
    SET_GPR_U32(ctx, 31, 0x31B52Cu);
    ctx->pc = 0x31B528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B524u;
    // 0x31b528: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x31B524u, 0x31B52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B52Cu;
label_31b52c:
    // 0x31b52c: 0x1050001b  beq         $v0, $s0, . + 4 + (0x1B << 2)
label_31b530:
    if (ctx->pc == 0x31B530u) {
        ctx->pc = 0x31B530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B52Cu;
        // 0x31b530: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B534u;
        goto label_31b534;
    }
    ctx->pc = 0x31B52Cu;
    {
        const bool branch_taken_0x31b52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x31B530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B52Cu;
        // 0x31b530: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b52c) {
            ctx->pc = 0x31B59Cu;
            goto label_31b59c;
        }
    }
    ctx->pc = 0x31B534u;
label_31b534:
    // 0x31b534: 0xc0a57ca  jal         func_295F28
label_31b538:
    if (ctx->pc == 0x31B538u) {
        ctx->pc = 0x31B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B534u;
        // 0x31b538: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B53Cu;
        goto label_31b53c;
    }
    ctx->pc = 0x31B534u;
    SET_GPR_U32(ctx, 31, 0x31B53Cu);
    ctx->pc = 0x31B538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B534u;
    // 0x31b538: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x31B534u, 0x31B53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B53Cu;
label_31b53c:
    // 0x31b53c: 0xc087502  jal         func_21D408
label_31b540:
    if (ctx->pc == 0x31B540u) {
        ctx->pc = 0x31B540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B53Cu;
        // 0x31b540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B544u;
        goto label_31b544;
    }
    ctx->pc = 0x31B53Cu;
    SET_GPR_U32(ctx, 31, 0x31B544u);
    ctx->pc = 0x31B540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B53Cu;
    // 0x31b540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31B53Cu, 0x31B544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B544u;
label_31b544:
    // 0x31b544: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31b544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31b548:
    // 0x31b548: 0xc0a3630  jal         func_28D8C0
label_31b54c:
    if (ctx->pc == 0x31B54Cu) {
        ctx->pc = 0x31B54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B548u;
        // 0x31b54c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B550u;
        goto label_31b550;
    }
    ctx->pc = 0x31B548u;
    SET_GPR_U32(ctx, 31, 0x31B550u);
    ctx->pc = 0x31B54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B548u;
    // 0x31b54c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x31B548u, 0x31B550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B550u;
label_31b550:
    // 0x31b550: 0xc0a3628  jal         func_28D8A0
label_31b554:
    if (ctx->pc == 0x31B554u) {
        ctx->pc = 0x31B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B550u;
        // 0x31b554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B558u;
        goto label_31b558;
    }
    ctx->pc = 0x31B550u;
    SET_GPR_U32(ctx, 31, 0x31B558u);
    ctx->pc = 0x31B554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B550u;
    // 0x31b554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x31B550u, 0x31B558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B558u;
label_31b558:
    // 0x31b558: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31b558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31b55c:
    // 0x31b55c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x31b55cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_31b560:
    // 0x31b560: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x31b560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_31b564:
    // 0x31b564: 0x40f809  jalr        $v0
label_31b568:
    if (ctx->pc == 0x31B568u) {
        ctx->pc = 0x31B568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B564u;
        // 0x31b568: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B56Cu;
        goto label_31b56c;
    }
    ctx->pc = 0x31B564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31B56Cu);
        ctx->pc = 0x31B568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B564u;
        // 0x31b568: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B564u, 0x31B56Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31B56Cu;
label_31b56c:
    // 0x31b56c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x31b56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_31b570:
    // 0x31b570: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31b570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31b574:
    // 0x31b574: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x31b574u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_31b578:
    // 0x31b578: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x31b578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_31b57c:
    // 0x31b57c: 0x40f809  jalr        $v0
label_31b580:
    if (ctx->pc == 0x31B580u) {
        ctx->pc = 0x31B580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B57Cu;
        // 0x31b580: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B584u;
        goto label_31b584;
    }
    ctx->pc = 0x31B57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31B584u);
        ctx->pc = 0x31B580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B57Cu;
        // 0x31b580: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B57Cu, 0x31B584u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31B584u;
label_31b584:
    // 0x31b584: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31b584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_31b588:
    // 0x31b588: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x31b588u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_31b58c:
    // 0x31b58c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31b590:
    // 0x31b590: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31b590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31b594:
    // 0x31b594: 0xc0b78b2  jal         func_2DE2C8
label_31b598:
    if (ctx->pc == 0x31B598u) {
        ctx->pc = 0x31B598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B594u;
        // 0x31b598: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B59Cu;
        goto label_31b59c;
    }
    ctx->pc = 0x31B594u;
    SET_GPR_U32(ctx, 31, 0x31B59Cu);
    ctx->pc = 0x31B598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B594u;
    // 0x31b598: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2C8u, 0x31B594u, 0x31B59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B59Cu;
label_31b59c:
    // 0x31b59c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x31b59cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_31b5a0:
    // 0x31b5a0: 0x2e820010  sltiu       $v0, $s4, 0x10
    ctx->pc = 0x31b5a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_31b5a4:
    // 0x31b5a4: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
label_31b5a8:
    if (ctx->pc == 0x31B5A8u) {
        ctx->pc = 0x31B5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B5A4u;
        // 0x31b5a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B5ACu;
        goto label_31b5ac;
    }
    ctx->pc = 0x31B5A4u;
    {
        const bool branch_taken_0x31b5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B5A4u;
        // 0x31b5a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b5a4) {
            ctx->pc = 0x31B4E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31b4e0;
        }
    }
    ctx->pc = 0x31B5ACu;
label_31b5ac:
    // 0x31b5ac: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x31b5acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31b5b0:
    // 0x31b5b0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x31b5b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31b5b4:
    // 0x31b5b4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x31b5b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31b5b8:
    // 0x31b5b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31b5b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31b5bc:
    // 0x31b5bc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x31b5bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31b5c0:
    // 0x31b5c0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x31b5c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31b5c4:
    // 0x31b5c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31b5c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31b5c8:
    // 0x31b5c8: 0x3e00008  jr          $ra
label_31b5cc:
    if (ctx->pc == 0x31B5CCu) {
        ctx->pc = 0x31B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B5C8u;
        // 0x31b5cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B5D0u;
        goto label_fallthrough_0x31b5c8;
    }
    ctx->pc = 0x31B5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B5C8u;
        // 0x31b5cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31b5c8:
    ctx->pc = 0x31B5D0u;
}
