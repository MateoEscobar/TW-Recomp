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

// Function: sub_0023D440
// Address: 0x23d440 - 0x23d628
void sub_0023D440_0x23d440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D440_0x23d440");
#endif

    switch (ctx->pc) {
        case 0x23d440u: goto label_23d440;
        case 0x23d444u: goto label_23d444;
        case 0x23d448u: goto label_23d448;
        case 0x23d44cu: goto label_23d44c;
        case 0x23d450u: goto label_23d450;
        case 0x23d454u: goto label_23d454;
        case 0x23d458u: goto label_23d458;
        case 0x23d45cu: goto label_23d45c;
        case 0x23d460u: goto label_23d460;
        case 0x23d464u: goto label_23d464;
        case 0x23d468u: goto label_23d468;
        case 0x23d46cu: goto label_23d46c;
        case 0x23d470u: goto label_23d470;
        case 0x23d474u: goto label_23d474;
        case 0x23d478u: goto label_23d478;
        case 0x23d47cu: goto label_23d47c;
        case 0x23d480u: goto label_23d480;
        case 0x23d484u: goto label_23d484;
        case 0x23d488u: goto label_23d488;
        case 0x23d48cu: goto label_23d48c;
        case 0x23d490u: goto label_23d490;
        case 0x23d494u: goto label_23d494;
        case 0x23d498u: goto label_23d498;
        case 0x23d49cu: goto label_23d49c;
        case 0x23d4a0u: goto label_23d4a0;
        case 0x23d4a4u: goto label_23d4a4;
        case 0x23d4a8u: goto label_23d4a8;
        case 0x23d4acu: goto label_23d4ac;
        case 0x23d4b0u: goto label_23d4b0;
        case 0x23d4b4u: goto label_23d4b4;
        case 0x23d4b8u: goto label_23d4b8;
        case 0x23d4bcu: goto label_23d4bc;
        case 0x23d4c0u: goto label_23d4c0;
        case 0x23d4c4u: goto label_23d4c4;
        case 0x23d4c8u: goto label_23d4c8;
        case 0x23d4ccu: goto label_23d4cc;
        case 0x23d4d0u: goto label_23d4d0;
        case 0x23d4d4u: goto label_23d4d4;
        case 0x23d4d8u: goto label_23d4d8;
        case 0x23d4dcu: goto label_23d4dc;
        case 0x23d4e0u: goto label_23d4e0;
        case 0x23d4e4u: goto label_23d4e4;
        case 0x23d4e8u: goto label_23d4e8;
        case 0x23d4ecu: goto label_23d4ec;
        case 0x23d4f0u: goto label_23d4f0;
        case 0x23d4f4u: goto label_23d4f4;
        case 0x23d4f8u: goto label_23d4f8;
        case 0x23d4fcu: goto label_23d4fc;
        case 0x23d500u: goto label_23d500;
        case 0x23d504u: goto label_23d504;
        case 0x23d508u: goto label_23d508;
        case 0x23d50cu: goto label_23d50c;
        case 0x23d510u: goto label_23d510;
        case 0x23d514u: goto label_23d514;
        case 0x23d518u: goto label_23d518;
        case 0x23d51cu: goto label_23d51c;
        case 0x23d520u: goto label_23d520;
        case 0x23d524u: goto label_23d524;
        case 0x23d528u: goto label_23d528;
        case 0x23d52cu: goto label_23d52c;
        case 0x23d530u: goto label_23d530;
        case 0x23d534u: goto label_23d534;
        case 0x23d538u: goto label_23d538;
        case 0x23d53cu: goto label_23d53c;
        case 0x23d540u: goto label_23d540;
        case 0x23d544u: goto label_23d544;
        case 0x23d548u: goto label_23d548;
        case 0x23d54cu: goto label_23d54c;
        case 0x23d550u: goto label_23d550;
        case 0x23d554u: goto label_23d554;
        case 0x23d558u: goto label_23d558;
        case 0x23d55cu: goto label_23d55c;
        case 0x23d560u: goto label_23d560;
        case 0x23d564u: goto label_23d564;
        case 0x23d568u: goto label_23d568;
        case 0x23d56cu: goto label_23d56c;
        case 0x23d570u: goto label_23d570;
        case 0x23d574u: goto label_23d574;
        case 0x23d578u: goto label_23d578;
        case 0x23d57cu: goto label_23d57c;
        case 0x23d580u: goto label_23d580;
        case 0x23d584u: goto label_23d584;
        case 0x23d588u: goto label_23d588;
        case 0x23d58cu: goto label_23d58c;
        case 0x23d590u: goto label_23d590;
        case 0x23d594u: goto label_23d594;
        case 0x23d598u: goto label_23d598;
        case 0x23d59cu: goto label_23d59c;
        case 0x23d5a0u: goto label_23d5a0;
        case 0x23d5a4u: goto label_23d5a4;
        case 0x23d5a8u: goto label_23d5a8;
        case 0x23d5acu: goto label_23d5ac;
        case 0x23d5b0u: goto label_23d5b0;
        case 0x23d5b4u: goto label_23d5b4;
        case 0x23d5b8u: goto label_23d5b8;
        case 0x23d5bcu: goto label_23d5bc;
        case 0x23d5c0u: goto label_23d5c0;
        case 0x23d5c4u: goto label_23d5c4;
        case 0x23d5c8u: goto label_23d5c8;
        case 0x23d5ccu: goto label_23d5cc;
        case 0x23d5d0u: goto label_23d5d0;
        case 0x23d5d4u: goto label_23d5d4;
        case 0x23d5d8u: goto label_23d5d8;
        case 0x23d5dcu: goto label_23d5dc;
        case 0x23d5e0u: goto label_23d5e0;
        case 0x23d5e4u: goto label_23d5e4;
        case 0x23d5e8u: goto label_23d5e8;
        case 0x23d5ecu: goto label_23d5ec;
        case 0x23d5f0u: goto label_23d5f0;
        case 0x23d5f4u: goto label_23d5f4;
        case 0x23d5f8u: goto label_23d5f8;
        case 0x23d5fcu: goto label_23d5fc;
        case 0x23d600u: goto label_23d600;
        case 0x23d604u: goto label_23d604;
        case 0x23d608u: goto label_23d608;
        case 0x23d60cu: goto label_23d60c;
        case 0x23d610u: goto label_23d610;
        case 0x23d614u: goto label_23d614;
        case 0x23d618u: goto label_23d618;
        case 0x23d61cu: goto label_23d61c;
        case 0x23d620u: goto label_23d620;
        case 0x23d624u: goto label_23d624;
        default: break;
    }

    ctx->pc = 0x23d440u;

label_23d440:
    // 0x23d440: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x23d440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_23d444:
    // 0x23d444: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x23d444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_23d448:
    // 0x23d448: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x23d448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_23d44c:
    // 0x23d44c: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x23d44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_23d450:
    // 0x23d450: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23d450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23d454:
    // 0x23d454: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x23d454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_23d458:
    // 0x23d458: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x23d458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_23d45c:
    // 0x23d45c: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x23d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_23d460:
    // 0x23d460: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_23d464:
    if (ctx->pc == 0x23D464u) {
        ctx->pc = 0x23D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D460u;
        // 0x23d464: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D468u;
        goto label_23d468;
    }
    ctx->pc = 0x23D460u;
    {
        const bool branch_taken_0x23d460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D460u;
        // 0x23d464: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d460) {
            ctx->pc = 0x23D470u;
            goto label_23d470;
        }
    }
    ctx->pc = 0x23D468u;
label_23d468:
    // 0x23d468: 0xc0962a2  jal         func_258A88
label_23d46c:
    if (ctx->pc == 0x23D46Cu) {
        ctx->pc = 0x23D470u;
        goto label_23d470;
    }
    ctx->pc = 0x23D468u;
    SET_GPR_U32(ctx, 31, 0x23D470u);
    ctx->pc = 0x258A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258A88u, 0x23D468u, 0x23D470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D470u;
label_23d470:
    // 0x23d470: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x23d470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_23d474:
    // 0x23d474: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x23d474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_23d478:
    // 0x23d478: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23d478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23d47c:
    // 0x23d47c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23d47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23d480:
    // 0x23d480: 0xa24401b3  sb          $a0, 0x1B3($s2)
    ctx->pc = 0x23d480u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 435), (uint8_t)GPR_U32(ctx, 4));
label_23d484:
    // 0x23d484: 0xc0e8568  jal         func_3A15A0
label_23d488:
    if (ctx->pc == 0x23D488u) {
        ctx->pc = 0x23D488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D484u;
        // 0x23d488: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D48Cu;
        goto label_23d48c;
    }
    ctx->pc = 0x23D484u;
    SET_GPR_U32(ctx, 31, 0x23D48Cu);
    ctx->pc = 0x23D488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D484u;
    // 0x23d488: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A15A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A15A0u, 0x23D484u, 0x23D48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D48Cu;
label_23d48c:
    // 0x23d48c: 0xe6400050  swc1        $f0, 0x50($s2)
    ctx->pc = 0x23d48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
label_23d490:
    // 0x23d490: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23d490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_23d494:
    // 0x23d494: 0x24421770  addiu       $v0, $v0, 0x1770
    ctx->pc = 0x23d494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6000));
label_23d498:
    // 0x23d498: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x23d498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_23d49c:
    // 0x23d49c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23d49cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23d4a0:
    // 0x23d4a0: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x23d4a0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_23d4a4:
    // 0x23d4a4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x23d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_23d4a8:
    // 0x23d4a8: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x23d4a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_23d4ac:
    // 0x23d4ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23d4acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23d4b0:
    // 0x23d4b0: 0x7fa80010  sq          $t0, 0x10($sp)
    ctx->pc = 0x23d4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 8));
label_23d4b4:
    // 0x23d4b4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x23d4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_23d4b8:
    // 0x23d4b8: 0x8c6447c4  lw          $a0, 0x47C4($v1)
    ctx->pc = 0x23d4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18372)));
label_23d4bc:
    // 0x23d4bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23d4bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23d4c0:
    // 0x23d4c0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x23d4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_23d4c4:
    // 0x23d4c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23d4c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23d4c8:
    // 0x23d4c8: 0xc1036e2  jal         func_40DB88
label_23d4cc:
    if (ctx->pc == 0x23D4CCu) {
        ctx->pc = 0x23D4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D4C8u;
        // 0x23d4cc: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D4D0u;
        goto label_23d4d0;
    }
    ctx->pc = 0x23D4C8u;
    SET_GPR_U32(ctx, 31, 0x23D4D0u);
    ctx->pc = 0x23D4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D4C8u;
    // 0x23d4cc: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x23D4C8u, 0x23D4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D4D0u;
label_23d4d0:
    // 0x23d4d0: 0x8e420280  lw          $v0, 0x280($s2)
    ctx->pc = 0x23d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 640)));
label_23d4d4:
    // 0x23d4d4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23d4d4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23d4d8:
    // 0x23d4d8: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_23d4dc:
    if (ctx->pc == 0x23D4DCu) {
        ctx->pc = 0x23D4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D4D8u;
        // 0x23d4dc: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D4E0u;
        goto label_23d4e0;
    }
    ctx->pc = 0x23D4D8u;
    {
        const bool branch_taken_0x23d4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d4d8) {
            ctx->pc = 0x23D4DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D4D8u;
            // 0x23d4dc: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D534u;
            goto label_23d534;
        }
    }
    ctx->pc = 0x23D4E0u;
label_23d4e0:
    // 0x23d4e0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x23d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_23d4e4:
    // 0x23d4e4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_23d4e8:
    if (ctx->pc == 0x23D4E8u) {
        ctx->pc = 0x23D4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D4E4u;
        // 0x23d4e8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D4ECu;
        goto label_23d4ec;
    }
    ctx->pc = 0x23D4E4u;
    {
        const bool branch_taken_0x23d4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D4E4u;
        // 0x23d4e8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d4e4) {
            ctx->pc = 0x23D530u;
            goto label_23d530;
        }
    }
    ctx->pc = 0x23D4ECu;
label_23d4ec:
    // 0x23d4ec: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x23d4ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_23d4f0:
    // 0x23d4f0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x23d4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23d4f4:
    // 0x23d4f4: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x23d4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_23d4f8:
    // 0x23d4f8: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x23d4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23d4fc:
    // 0x23d4fc: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x23d4fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_23d500:
    // 0x23d500: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x23d500u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_23d504:
    // 0x23d504: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x23d504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_23d508:
    // 0x23d508: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x23d508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_23d50c:
    // 0x23d50c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x23d50cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_23d510:
    // 0x23d510: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x23d510u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_23d514:
    // 0x23d514: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x23d514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_23d518:
    // 0x23d518: 0x60f809  jalr        $v1
label_23d51c:
    if (ctx->pc == 0x23D51Cu) {
        ctx->pc = 0x23D51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D518u;
        // 0x23d51c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D520u;
        goto label_23d520;
    }
    ctx->pc = 0x23D518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23D520u);
        ctx->pc = 0x23D51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D518u;
        // 0x23d51c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D518u, 0x23D520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D520u;
label_23d520:
    // 0x23d520: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x23d520u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_23d524:
    // 0x23d524: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x23d524u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_23d528:
    // 0x23d528: 0x1000000a  b           . + 4 + (0xA << 2)
label_23d52c:
    if (ctx->pc == 0x23D52Cu) {
        ctx->pc = 0x23D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D528u;
        // 0x23d52c: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D530u;
        goto label_23d530;
    }
    ctx->pc = 0x23D528u;
    {
        const bool branch_taken_0x23d528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D528u;
        // 0x23d52c: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d528) {
            ctx->pc = 0x23D554u;
            goto label_23d554;
        }
    }
    ctx->pc = 0x23D530u;
label_23d530:
    // 0x23d530: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x23d530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_23d534:
    // 0x23d534: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23d534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23d538:
    // 0x23d538: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x23d538u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_23d53c:
    // 0x23d53c: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x23d53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_23d540:
    // 0x23d540: 0x60f809  jalr        $v1
label_23d544:
    if (ctx->pc == 0x23D544u) {
        ctx->pc = 0x23D544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D540u;
        // 0x23d544: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D548u;
        goto label_23d548;
    }
    ctx->pc = 0x23D540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23D548u);
        ctx->pc = 0x23D544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D540u;
        // 0x23d544: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D540u, 0x23D548u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D548u;
label_23d548:
    // 0x23d548: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x23d548u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_23d54c:
    // 0x23d54c: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x23d54cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
label_23d550:
    // 0x23d550: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x23d550u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_23d554:
    // 0x23d554: 0x7e430020  sq          $v1, 0x20($s2)
    ctx->pc = 0x23d554u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 3));
label_23d558:
    // 0x23d558: 0xae4005dc  sw          $zero, 0x5DC($s2)
    ctx->pc = 0x23d558u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1500), GPR_U32(ctx, 0));
label_23d55c:
    // 0x23d55c: 0x26510090  addiu       $s1, $s2, 0x90
    ctx->pc = 0x23d55cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_23d560:
    // 0x23d560: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x23d560u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_23d564:
    // 0x23d564: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x23d564u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_23d568:
    // 0x23d568: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x23d568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_23d56c:
    // 0x23d56c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x23d56cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_23d570:
    // 0x23d570: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x23d570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_23d574:
    // 0x23d574: 0xc0cd7dc  jal         func_335F70
label_23d578:
    if (ctx->pc == 0x23D578u) {
        ctx->pc = 0x23D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D574u;
        // 0x23d578: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D57Cu;
        goto label_23d57c;
    }
    ctx->pc = 0x23D574u;
    SET_GPR_U32(ctx, 31, 0x23D57Cu);
    ctx->pc = 0x23D578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D574u;
    // 0x23d578: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F70u, 0x23D574u, 0x23D57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D57Cu;
label_23d57c:
    // 0x23d57c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23d57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23d580:
    // 0x23d580: 0xc087502  jal         func_21D408
label_23d584:
    if (ctx->pc == 0x23D584u) {
        ctx->pc = 0x23D584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D580u;
        // 0x23d584: 0xe64005d8  swc1        $f0, 0x5D8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1496), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D588u;
        goto label_23d588;
    }
    ctx->pc = 0x23D580u;
    SET_GPR_U32(ctx, 31, 0x23D588u);
    ctx->pc = 0x23D584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D580u;
    // 0x23d584: 0xe64005d8  swc1        $f0, 0x5D8($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1496), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x23D580u, 0x23D588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D588u;
label_23d588:
    // 0x23d588: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x23d588u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_23d58c:
    // 0x23d58c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23d58cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23d590:
    // 0x23d590: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x23d590u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_23d594:
    // 0x23d594: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x23d594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_23d598:
    // 0x23d598: 0xc0cd7d2  jal         func_335F48
label_23d59c:
    if (ctx->pc == 0x23D59Cu) {
        ctx->pc = 0x23D59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D598u;
        // 0x23d59c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D5A0u;
        goto label_23d5a0;
    }
    ctx->pc = 0x23D598u;
    SET_GPR_U32(ctx, 31, 0x23D5A0u);
    ctx->pc = 0x23D59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D598u;
    // 0x23d59c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x23D598u, 0x23D5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D5A0u;
label_23d5a0:
    // 0x23d5a0: 0x8262002e  lb          $v0, 0x2E($s3)
    ctx->pc = 0x23d5a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 46)));
label_23d5a4:
    // 0x23d5a4: 0xe6600110  swc1        $f0, 0x110($s3)
    ctx->pc = 0x23d5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 272), bits); }
label_23d5a8:
    // 0x23d5a8: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_23d5ac:
    if (ctx->pc == 0x23D5ACu) {
        ctx->pc = 0x23D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5A8u;
        // 0x23d5ac: 0x2802a  slt         $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D5B0u;
        goto label_23d5b0;
    }
    ctx->pc = 0x23D5A8u;
    {
        const bool branch_taken_0x23d5a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5A8u;
        // 0x23d5ac: 0x2802a  slt         $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d5a8) {
            ctx->pc = 0x23D5F0u;
            goto label_23d5f0;
        }
    }
    ctx->pc = 0x23D5B0u;
label_23d5b0:
    // 0x23d5b0: 0x8e6200ec  lw          $v0, 0xEC($s3)
    ctx->pc = 0x23d5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 236)));
label_23d5b4:
    // 0x23d5b4: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x23d5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_23d5b8:
    // 0x23d5b8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_23d5bc:
    if (ctx->pc == 0x23D5BCu) {
        ctx->pc = 0x23D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5B8u;
        // 0x23d5bc: 0x8e4401a0  lw          $a0, 0x1A0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D5C0u;
        goto label_23d5c0;
    }
    ctx->pc = 0x23D5B8u;
    {
        const bool branch_taken_0x23d5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d5b8) {
            ctx->pc = 0x23D5BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D5B8u;
            // 0x23d5bc: 0x8e4401a0  lw          $a0, 0x1A0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D5F4u;
            goto label_23d5f4;
        }
    }
    ctx->pc = 0x23D5C0u;
label_23d5c0:
    // 0x23d5c0: 0xc0a36c2  jal         func_28DB08
label_23d5c4:
    if (ctx->pc == 0x23D5C4u) {
        ctx->pc = 0x23D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5C0u;
        // 0x23d5c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D5C8u;
        goto label_23d5c8;
    }
    ctx->pc = 0x23D5C0u;
    SET_GPR_U32(ctx, 31, 0x23D5C8u);
    ctx->pc = 0x23D5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D5C0u;
    // 0x23d5c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x23D5C0u, 0x23D5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D5C8u;
label_23d5c8:
    // 0x23d5c8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x23d5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_23d5cc:
    // 0x23d5cc: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x23d5ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_23d5d0:
    // 0x23d5d0: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x23d5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_23d5d4:
    // 0x23d5d4: 0xa0f809  jalr        $a1
label_23d5d8:
    if (ctx->pc == 0x23D5D8u) {
        ctx->pc = 0x23D5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5D4u;
        // 0x23d5d8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D5DCu;
        goto label_23d5dc;
    }
    ctx->pc = 0x23D5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x23D5DCu);
        ctx->pc = 0x23D5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5D4u;
        // 0x23d5d8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D5D4u, 0x23D5DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D5DCu;
label_23d5dc:
    // 0x23d5dc: 0x54500005  bnel        $v0, $s0, . + 4 + (0x5 << 2)
label_23d5e0:
    if (ctx->pc == 0x23D5E0u) {
        ctx->pc = 0x23D5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5DCu;
        // 0x23d5e0: 0x8e4401a0  lw          $a0, 0x1A0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D5E4u;
        goto label_23d5e4;
    }
    ctx->pc = 0x23D5DCu;
    {
        const bool branch_taken_0x23d5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x23d5dc) {
            ctx->pc = 0x23D5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D5DCu;
            // 0x23d5e0: 0x8e4401a0  lw          $a0, 0x1A0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D5F4u;
            goto label_23d5f4;
        }
    }
    ctx->pc = 0x23D5E4u;
label_23d5e4:
    // 0x23d5e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23d5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23d5e8:
    // 0x23d5e8: 0xc0a3698  jal         func_28DA60
label_23d5ec:
    if (ctx->pc == 0x23D5ECu) {
        ctx->pc = 0x23D5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5E8u;
        // 0x23d5ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D5F0u;
        goto label_23d5f0;
    }
    ctx->pc = 0x23D5E8u;
    SET_GPR_U32(ctx, 31, 0x23D5F0u);
    ctx->pc = 0x23D5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D5E8u;
    // 0x23d5ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DA60u, 0x23D5E8u, 0x23D5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D5F0u;
label_23d5f0:
    // 0x23d5f0: 0x8e4401a0  lw          $a0, 0x1A0($s2)
    ctx->pc = 0x23d5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
label_23d5f4:
    // 0x23d5f4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_23d5f8:
    if (ctx->pc == 0x23D5F8u) {
        ctx->pc = 0x23D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5F4u;
        // 0x23d5f8: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D5FCu;
        goto label_23d5fc;
    }
    ctx->pc = 0x23D5F4u;
    {
        const bool branch_taken_0x23d5f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5F4u;
        // 0x23d5f8: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d5f4) {
            ctx->pc = 0x23D60Cu;
            goto label_23d60c;
        }
    }
    ctx->pc = 0x23D5FCu;
label_23d5fc:
    // 0x23d5fc: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x23d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_23d600:
    // 0x23d600: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x23d600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_23d604:
    // 0x23d604: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23d604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23d608:
    // 0x23d608: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x23d608u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_23d60c:
    // 0x23d60c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x23d60cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_23d610:
    // 0x23d610: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x23d610u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_23d614:
    // 0x23d614: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x23d614u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_23d618:
    // 0x23d618: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x23d618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_23d61c:
    // 0x23d61c: 0x3e00008  jr          $ra
label_23d620:
    if (ctx->pc == 0x23D620u) {
        ctx->pc = 0x23D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D61Cu;
        // 0x23d620: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D624u;
        goto label_23d624;
    }
    ctx->pc = 0x23D61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D61Cu;
        // 0x23d620: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D624u;
label_23d624:
    // 0x23d624: 0x0  nop
    ctx->pc = 0x23d624u;
    // NOP
    ctx->pc = 0x23d628u;
}
