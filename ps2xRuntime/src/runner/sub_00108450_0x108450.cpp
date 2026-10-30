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

// Function: sub_00108450
// Address: 0x108450 - 0x108570
void sub_00108450_0x108450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108450_0x108450");
#endif

    switch (ctx->pc) {
        case 0x108450u: goto label_108450;
        case 0x108454u: goto label_108454;
        case 0x108458u: goto label_108458;
        case 0x10845cu: goto label_10845c;
        case 0x108460u: goto label_108460;
        case 0x108464u: goto label_108464;
        case 0x108468u: goto label_108468;
        case 0x10846cu: goto label_10846c;
        case 0x108470u: goto label_108470;
        case 0x108474u: goto label_108474;
        case 0x108478u: goto label_108478;
        case 0x10847cu: goto label_10847c;
        case 0x108480u: goto label_108480;
        case 0x108484u: goto label_108484;
        case 0x108488u: goto label_108488;
        case 0x10848cu: goto label_10848c;
        case 0x108490u: goto label_108490;
        case 0x108494u: goto label_108494;
        case 0x108498u: goto label_108498;
        case 0x10849cu: goto label_10849c;
        case 0x1084a0u: goto label_1084a0;
        case 0x1084a4u: goto label_1084a4;
        case 0x1084a8u: goto label_1084a8;
        case 0x1084acu: goto label_1084ac;
        case 0x1084b0u: goto label_1084b0;
        case 0x1084b4u: goto label_1084b4;
        case 0x1084b8u: goto label_1084b8;
        case 0x1084bcu: goto label_1084bc;
        case 0x1084c0u: goto label_1084c0;
        case 0x1084c4u: goto label_1084c4;
        case 0x1084c8u: goto label_1084c8;
        case 0x1084ccu: goto label_1084cc;
        case 0x1084d0u: goto label_1084d0;
        case 0x1084d4u: goto label_1084d4;
        case 0x1084d8u: goto label_1084d8;
        case 0x1084dcu: goto label_1084dc;
        case 0x1084e0u: goto label_1084e0;
        case 0x1084e4u: goto label_1084e4;
        case 0x1084e8u: goto label_1084e8;
        case 0x1084ecu: goto label_1084ec;
        case 0x1084f0u: goto label_1084f0;
        case 0x1084f4u: goto label_1084f4;
        case 0x1084f8u: goto label_1084f8;
        case 0x1084fcu: goto label_1084fc;
        case 0x108500u: goto label_108500;
        case 0x108504u: goto label_108504;
        case 0x108508u: goto label_108508;
        case 0x10850cu: goto label_10850c;
        case 0x108510u: goto label_108510;
        case 0x108514u: goto label_108514;
        case 0x108518u: goto label_108518;
        case 0x10851cu: goto label_10851c;
        case 0x108520u: goto label_108520;
        case 0x108524u: goto label_108524;
        case 0x108528u: goto label_108528;
        case 0x10852cu: goto label_10852c;
        case 0x108530u: goto label_108530;
        case 0x108534u: goto label_108534;
        case 0x108538u: goto label_108538;
        case 0x10853cu: goto label_10853c;
        case 0x108540u: goto label_108540;
        case 0x108544u: goto label_108544;
        case 0x108548u: goto label_108548;
        case 0x10854cu: goto label_10854c;
        case 0x108550u: goto label_108550;
        case 0x108554u: goto label_108554;
        case 0x108558u: goto label_108558;
        case 0x10855cu: goto label_10855c;
        case 0x108560u: goto label_108560;
        case 0x108564u: goto label_108564;
        case 0x108568u: goto label_108568;
        case 0x10856cu: goto label_10856c;
        default: break;
    }

    ctx->pc = 0x108450u;

label_108450:
    // 0x108450: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x108450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_108454:
    // 0x108454: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x108454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_108458:
    // 0x108458: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x108458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_10845c:
    // 0x10845c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x10845cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_108460:
    // 0x108460: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x108460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_108464:
    // 0x108464: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x108464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_108468:
    // 0x108468: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x108468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_10846c:
    // 0x10846c: 0x24424668  addiu       $v0, $v0, 0x4668
    ctx->pc = 0x10846cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18024));
label_108470:
    // 0x108470: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x108470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_108474:
    // 0x108474: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x108474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_108478:
    // 0x108478: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x108478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_10847c:
    // 0x10847c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x10847cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_108480:
    // 0x108480: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x108480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_108484:
    // 0x108484: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x108484u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_108488:
    // 0x108488: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x108488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_10848c:
    // 0x10848c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10848cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_108490:
    // 0x108490: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x108490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_108494:
    // 0x108494: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x108494u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_108498:
    // 0x108498: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x108498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_10849c:
    // 0x10849c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x10849cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1084a0:
    // 0x1084a0: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1084a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1084a4:
    // 0x1084a4: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x1084a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_1084a8:
    // 0x1084a8: 0xae080034  sw          $t0, 0x34($s0)
    ctx->pc = 0x1084a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 8));
label_1084ac:
    // 0x1084ac: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1084acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_1084b0:
    // 0x1084b0: 0xc0e409a  jal         func_390268
label_1084b4:
    if (ctx->pc == 0x1084B4u) {
        ctx->pc = 0x1084B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084B0u;
        // 0x1084b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1084B8u;
        goto label_1084b8;
    }
    ctx->pc = 0x1084B0u;
    SET_GPR_U32(ctx, 31, 0x1084B8u);
    ctx->pc = 0x1084B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1084B0u;
    // 0x1084b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1084B0u, 0x1084B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1084B8u;
label_1084b8:
    // 0x1084b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1084b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1084bc:
    // 0x1084bc: 0xc04128e  jal         func_104A38
label_1084c0:
    if (ctx->pc == 0x1084C0u) {
        ctx->pc = 0x1084C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084BCu;
        // 0x1084c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1084C4u;
        goto label_1084c4;
    }
    ctx->pc = 0x1084BCu;
    SET_GPR_U32(ctx, 31, 0x1084C4u);
    ctx->pc = 0x1084C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1084BCu;
    // 0x1084c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A38u, 0x1084BCu, 0x1084C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1084C4u;
label_1084c4:
    // 0x1084c4: 0xae110038  sw          $s1, 0x38($s0)
    ctx->pc = 0x1084c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
label_1084c8:
    // 0x1084c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1084c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1084cc:
    // 0x1084cc: 0xae14003c  sw          $s4, 0x3C($s0)
    ctx->pc = 0x1084ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 20));
label_1084d0:
    // 0x1084d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1084d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1084d4:
    // 0x1084d4: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1084d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_1084d8:
    // 0x1084d8: 0xc05d462  jal         func_175188
label_1084dc:
    if (ctx->pc == 0x1084DCu) {
        ctx->pc = 0x1084DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084D8u;
        // 0x1084dc: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1084E0u;
        goto label_1084e0;
    }
    ctx->pc = 0x1084D8u;
    SET_GPR_U32(ctx, 31, 0x1084E0u);
    ctx->pc = 0x1084DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1084D8u;
    // 0x1084dc: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175188u, 0x1084D8u, 0x1084E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1084E0u;
label_1084e0:
    // 0x1084e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1084e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1084e4:
    // 0x1084e4: 0x84640098  lh          $a0, 0x98($v1)
    ctx->pc = 0x1084e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
label_1084e8:
    // 0x1084e8: 0x8c65009c  lw          $a1, 0x9C($v1)
    ctx->pc = 0x1084e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_1084ec:
    // 0x1084ec: 0xa0f809  jalr        $a1
label_1084f0:
    if (ctx->pc == 0x1084F0u) {
        ctx->pc = 0x1084F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084ECu;
        // 0x1084f0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1084F4u;
        goto label_1084f4;
    }
    ctx->pc = 0x1084ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1084F4u);
        ctx->pc = 0x1084F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084ECu;
        // 0x1084f0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1084ECu, 0x1084F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1084F4u;
label_1084f4:
    // 0x1084f4: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1084f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_1084f8:
    // 0x1084f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1084f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1084fc:
    // 0x1084fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1084fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_108500:
    // 0x108500: 0xc0e409a  jal         func_390268
label_108504:
    if (ctx->pc == 0x108504u) {
        ctx->pc = 0x108504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108500u;
        // 0x108504: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108508u;
        goto label_108508;
    }
    ctx->pc = 0x108500u;
    SET_GPR_U32(ctx, 31, 0x108508u);
    ctx->pc = 0x108504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108500u;
    // 0x108504: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x108500u, 0x108508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108508u;
label_108508:
    // 0x108508: 0x8c4400d8  lw          $a0, 0xD8($v0)
    ctx->pc = 0x108508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
label_10850c:
    // 0x10850c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10850cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_108510:
    // 0x108510: 0xc05d420  jal         func_175080
label_108514:
    if (ctx->pc == 0x108514u) {
        ctx->pc = 0x108514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108510u;
        // 0x108514: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108518u;
        goto label_108518;
    }
    ctx->pc = 0x108510u;
    SET_GPR_U32(ctx, 31, 0x108518u);
    ctx->pc = 0x108514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108510u;
    // 0x108514: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175080u, 0x108510u, 0x108518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108518u;
label_108518:
    // 0x108518: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x108518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_10851c:
    // 0x10851c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10851cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108520:
    // 0x108520: 0xc042ed8  jal         func_10BB60
label_108524:
    if (ctx->pc == 0x108524u) {
        ctx->pc = 0x108524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108520u;
        // 0x108524: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108528u;
        goto label_108528;
    }
    ctx->pc = 0x108520u;
    SET_GPR_U32(ctx, 31, 0x108528u);
    ctx->pc = 0x108524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108520u;
    // 0x108524: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB60u, 0x108520u, 0x108528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108528u;
label_108528:
    // 0x108528: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x108528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10852c:
    // 0x10852c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10852cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108530:
    // 0x108530: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x108530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_108534:
    // 0x108534: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x108534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_108538:
    // 0x108538: 0xc041164  jal         func_104590
label_10853c:
    if (ctx->pc == 0x10853Cu) {
        ctx->pc = 0x10853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108538u;
        // 0x10853c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108540u;
        goto label_108540;
    }
    ctx->pc = 0x108538u;
    SET_GPR_U32(ctx, 31, 0x108540u);
    ctx->pc = 0x10853Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108538u;
    // 0x10853c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x108538u, 0x108540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108540u;
label_108540:
    // 0x108540: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x108540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_108544:
    // 0x108544: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x108544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_108548:
    // 0x108548: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x108548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_10854c:
    // 0x10854c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x10854cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_108550:
    // 0x108550: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x108550u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_108554:
    // 0x108554: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x108554u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_108558:
    // 0x108558: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x108558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10855c:
    // 0x10855c: 0x3e00008  jr          $ra
label_108560:
    if (ctx->pc == 0x108560u) {
        ctx->pc = 0x108560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10855Cu;
        // 0x108560: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108564u;
        goto label_108564;
    }
    ctx->pc = 0x10855Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10855Cu;
        // 0x108560: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10855Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108564u;
label_108564:
    // 0x108564: 0x0  nop
    ctx->pc = 0x108564u;
    // NOP
label_108568:
    // 0x108568: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x108568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_10856c:
    // 0x10856c: 0x0  nop
    ctx->pc = 0x10856cu;
    // NOP
    ctx->pc = 0x108570u;
}
