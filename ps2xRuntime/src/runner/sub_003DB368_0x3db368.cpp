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

// Function: sub_003DB368
// Address: 0x3db368 - 0x3db4e0
void sub_003DB368_0x3db368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB368_0x3db368");
#endif

    switch (ctx->pc) {
        case 0x3db368u: goto label_3db368;
        case 0x3db36cu: goto label_3db36c;
        case 0x3db370u: goto label_3db370;
        case 0x3db374u: goto label_3db374;
        case 0x3db378u: goto label_3db378;
        case 0x3db37cu: goto label_3db37c;
        case 0x3db380u: goto label_3db380;
        case 0x3db384u: goto label_3db384;
        case 0x3db388u: goto label_3db388;
        case 0x3db38cu: goto label_3db38c;
        case 0x3db390u: goto label_3db390;
        case 0x3db394u: goto label_3db394;
        case 0x3db398u: goto label_3db398;
        case 0x3db39cu: goto label_3db39c;
        case 0x3db3a0u: goto label_3db3a0;
        case 0x3db3a4u: goto label_3db3a4;
        case 0x3db3a8u: goto label_3db3a8;
        case 0x3db3acu: goto label_3db3ac;
        case 0x3db3b0u: goto label_3db3b0;
        case 0x3db3b4u: goto label_3db3b4;
        case 0x3db3b8u: goto label_3db3b8;
        case 0x3db3bcu: goto label_3db3bc;
        case 0x3db3c0u: goto label_3db3c0;
        case 0x3db3c4u: goto label_3db3c4;
        case 0x3db3c8u: goto label_3db3c8;
        case 0x3db3ccu: goto label_3db3cc;
        case 0x3db3d0u: goto label_3db3d0;
        case 0x3db3d4u: goto label_3db3d4;
        case 0x3db3d8u: goto label_3db3d8;
        case 0x3db3dcu: goto label_3db3dc;
        case 0x3db3e0u: goto label_3db3e0;
        case 0x3db3e4u: goto label_3db3e4;
        case 0x3db3e8u: goto label_3db3e8;
        case 0x3db3ecu: goto label_3db3ec;
        case 0x3db3f0u: goto label_3db3f0;
        case 0x3db3f4u: goto label_3db3f4;
        case 0x3db3f8u: goto label_3db3f8;
        case 0x3db3fcu: goto label_3db3fc;
        case 0x3db400u: goto label_3db400;
        case 0x3db404u: goto label_3db404;
        case 0x3db408u: goto label_3db408;
        case 0x3db40cu: goto label_3db40c;
        case 0x3db410u: goto label_3db410;
        case 0x3db414u: goto label_3db414;
        case 0x3db418u: goto label_3db418;
        case 0x3db41cu: goto label_3db41c;
        case 0x3db420u: goto label_3db420;
        case 0x3db424u: goto label_3db424;
        case 0x3db428u: goto label_3db428;
        case 0x3db42cu: goto label_3db42c;
        case 0x3db430u: goto label_3db430;
        case 0x3db434u: goto label_3db434;
        case 0x3db438u: goto label_3db438;
        case 0x3db43cu: goto label_3db43c;
        case 0x3db440u: goto label_3db440;
        case 0x3db444u: goto label_3db444;
        case 0x3db448u: goto label_3db448;
        case 0x3db44cu: goto label_3db44c;
        case 0x3db450u: goto label_3db450;
        case 0x3db454u: goto label_3db454;
        case 0x3db458u: goto label_3db458;
        case 0x3db45cu: goto label_3db45c;
        case 0x3db460u: goto label_3db460;
        case 0x3db464u: goto label_3db464;
        case 0x3db468u: goto label_3db468;
        case 0x3db46cu: goto label_3db46c;
        case 0x3db470u: goto label_3db470;
        case 0x3db474u: goto label_3db474;
        case 0x3db478u: goto label_3db478;
        case 0x3db47cu: goto label_3db47c;
        case 0x3db480u: goto label_3db480;
        case 0x3db484u: goto label_3db484;
        case 0x3db488u: goto label_3db488;
        case 0x3db48cu: goto label_3db48c;
        case 0x3db490u: goto label_3db490;
        case 0x3db494u: goto label_3db494;
        case 0x3db498u: goto label_3db498;
        case 0x3db49cu: goto label_3db49c;
        case 0x3db4a0u: goto label_3db4a0;
        case 0x3db4a4u: goto label_3db4a4;
        case 0x3db4a8u: goto label_3db4a8;
        case 0x3db4acu: goto label_3db4ac;
        case 0x3db4b0u: goto label_3db4b0;
        case 0x3db4b4u: goto label_3db4b4;
        case 0x3db4b8u: goto label_3db4b8;
        case 0x3db4bcu: goto label_3db4bc;
        case 0x3db4c0u: goto label_3db4c0;
        case 0x3db4c4u: goto label_3db4c4;
        case 0x3db4c8u: goto label_3db4c8;
        case 0x3db4ccu: goto label_3db4cc;
        case 0x3db4d0u: goto label_3db4d0;
        case 0x3db4d4u: goto label_3db4d4;
        case 0x3db4d8u: goto label_3db4d8;
        case 0x3db4dcu: goto label_3db4dc;
        default: break;
    }

    ctx->pc = 0x3db368u;

label_3db368:
    // 0x3db368: 0x27bdfb40  addiu       $sp, $sp, -0x4C0
    ctx->pc = 0x3db368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966080));
label_3db36c:
    // 0x3db36c: 0x7fb004b0  sq          $s0, 0x4B0($sp)
    ctx->pc = 0x3db36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 16));
label_3db370:
    // 0x3db370: 0x7fb20490  sq          $s2, 0x490($sp)
    ctx->pc = 0x3db370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 18));
label_3db374:
    // 0x3db374: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3db374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3db378:
    // 0x3db378: 0x7fb30480  sq          $s3, 0x480($sp)
    ctx->pc = 0x3db378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 19));
label_3db37c:
    // 0x3db37c: 0x7fb104a0  sq          $s1, 0x4A0($sp)
    ctx->pc = 0x3db37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 17));
label_3db380:
    // 0x3db380: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3db380u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3db384:
    // 0x3db384: 0x7fb40470  sq          $s4, 0x470($sp)
    ctx->pc = 0x3db384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 20));
label_3db388:
    // 0x3db388: 0x7fb50460  sq          $s5, 0x460($sp)
    ctx->pc = 0x3db388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 21));
label_3db38c:
    // 0x3db38c: 0x7fb60450  sq          $s6, 0x450($sp)
    ctx->pc = 0x3db38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 22));
label_3db390:
    // 0x3db390: 0xffbf0440  sd          $ra, 0x440($sp)
    ctx->pc = 0x3db390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 31));
label_3db394:
    // 0x3db394: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3db394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3db398:
    // 0x3db398: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3db398u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3db39c:
    // 0x3db39c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3db39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3db3a0:
    // 0x3db3a0: 0x40f809  jalr        $v0
label_3db3a4:
    if (ctx->pc == 0x3DB3A4u) {
        ctx->pc = 0x3DB3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB3A0u;
        // 0x3db3a4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB3A8u;
        goto label_3db3a8;
    }
    ctx->pc = 0x3DB3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DB3A8u);
        ctx->pc = 0x3DB3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB3A0u;
        // 0x3db3a4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB3A0u, 0x3DB3A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DB3A8u;
label_3db3a8:
    // 0x3db3a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3db3a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3db3ac:
    // 0x3db3ac: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3db3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3db3b0:
    // 0x3db3b0: 0x16020042  bne         $s0, $v0, . + 4 + (0x42 << 2)
label_3db3b4:
    if (ctx->pc == 0x3DB3B4u) {
        ctx->pc = 0x3DB3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB3B0u;
        // 0x3db3b4: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB3B8u;
        goto label_3db3b8;
    }
    ctx->pc = 0x3DB3B0u;
    {
        const bool branch_taken_0x3db3b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3DB3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB3B0u;
        // 0x3db3b4: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db3b0) {
            ctx->pc = 0x3DB4BCu;
            goto label_3db4bc;
        }
    }
    ctx->pc = 0x3DB3B8u;
label_3db3b8:
    // 0x3db3b8: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x3db3b8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_3db3bc:
    // 0x3db3bc: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3db3bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3db3c0:
    // 0x3db3c0: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x3db3c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3db3c4:
    // 0x3db3c4: 0x261045d8  addiu       $s0, $s0, 0x45D8
    ctx->pc = 0x3db3c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17880));
label_3db3c8:
    // 0x3db3c8: 0x2631b8b8  addiu       $s1, $s1, -0x4748
    ctx->pc = 0x3db3c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294949048));
label_3db3cc:
    // 0x3db3cc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3db3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3db3d0:
    // 0x3db3d0: 0xc0cd4ee  jal         func_3353B8
label_3db3d4:
    if (ctx->pc == 0x3DB3D4u) {
        ctx->pc = 0x3DB3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB3D0u;
        // 0x3db3d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB3D8u;
        goto label_3db3d8;
    }
    ctx->pc = 0x3DB3D0u;
    SET_GPR_U32(ctx, 31, 0x3DB3D8u);
    ctx->pc = 0x3DB3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB3D0u;
    // 0x3db3d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3DB3D0u, 0x3DB3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB3D8u;
label_3db3d8:
    // 0x3db3d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3db3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3db3dc:
    // 0x3db3dc: 0x7a630010  lq          $v1, 0x10($s3)
    ctx->pc = 0x3db3dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3db3e0:
    // 0x3db3e0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3db3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3db3e4:
    // 0x3db3e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3db3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3db3e8:
    // 0x3db3e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3db3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3db3ec:
    // 0x3db3ec: 0xc045c8e  jal         func_117238
label_3db3f0:
    if (ctx->pc == 0x3DB3F0u) {
        ctx->pc = 0x3DB3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB3ECu;
        // 0x3db3f0: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB3F4u;
        goto label_3db3f4;
    }
    ctx->pc = 0x3DB3ECu;
    SET_GPR_U32(ctx, 31, 0x3DB3F4u);
    ctx->pc = 0x3DB3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB3ECu;
    // 0x3db3f0: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117238u, 0x3DB3ECu, 0x3DB3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB3F4u;
label_3db3f4:
    // 0x3db3f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3db3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3db3f8:
    // 0x3db3f8: 0xc0cd4ee  jal         func_3353B8
label_3db3fc:
    if (ctx->pc == 0x3DB3FCu) {
        ctx->pc = 0x3DB3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB3F8u;
        // 0x3db3fc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB400u;
        goto label_3db400;
    }
    ctx->pc = 0x3DB3F8u;
    SET_GPR_U32(ctx, 31, 0x3DB400u);
    ctx->pc = 0x3DB3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB3F8u;
    // 0x3db3fc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3DB3F8u, 0x3DB400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB400u;
label_3db400:
    // 0x3db400: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x3db400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
label_3db404:
    // 0x3db404: 0x27b10420  addiu       $s1, $sp, 0x420
    ctx->pc = 0x3db404u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3db408:
    // 0x3db408: 0x27b40410  addiu       $s4, $sp, 0x410
    ctx->pc = 0x3db408u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3db40c:
    // 0x3db40c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3db40cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3db410:
    // 0x3db410: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
label_3db414:
    if (ctx->pc == 0x3DB414u) {
        ctx->pc = 0x3DB414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB410u;
        // 0x3db414: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB418u;
        goto label_3db418;
    }
    ctx->pc = 0x3DB410u;
    {
        const bool branch_taken_0x3db410 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3DB414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB410u;
        // 0x3db414: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db410) {
            ctx->pc = 0x3DB484u;
            goto label_3db484;
        }
    }
    ctx->pc = 0x3DB418u;
label_3db418:
    // 0x3db418: 0x3c150058  lui         $s5, 0x58
    ctx->pc = 0x3db418u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)88 << 16));
label_3db41c:
    // 0x3db41c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x3db41cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3db420:
    // 0x3db420: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x3db420u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3db424:
    // 0x3db424: 0x26c4b8b8  addiu       $a0, $s6, -0x4748
    ctx->pc = 0x3db424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949048));
label_3db428:
    // 0x3db428: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x3db428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
label_3db42c:
    // 0x3db42c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3db42cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3db430:
    // 0x3db430: 0x3c01c0c0  lui         $at, 0xC0C0
    ctx->pc = 0x3db430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49344 << 16));
label_3db434:
    // 0x3db434: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3db434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3db438:
    // 0x3db438: 0xc0cd518  jal         func_335460
label_3db43c:
    if (ctx->pc == 0x3DB43Cu) {
        ctx->pc = 0x3DB43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB438u;
        // 0x3db43c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB440u;
        goto label_3db440;
    }
    ctx->pc = 0x3DB438u;
    SET_GPR_U32(ctx, 31, 0x3DB440u);
    ctx->pc = 0x3DB43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB438u;
    // 0x3db43c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DB438u, 0x3DB440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB440u;
label_3db440:
    // 0x3db440: 0xe7a00420  swc1        $f0, 0x420($sp)
    ctx->pc = 0x3db440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1056), bits); }
label_3db444:
    // 0x3db444: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3db444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3db448:
    // 0x3db448: 0x27a70430  addiu       $a3, $sp, 0x430
    ctx->pc = 0x3db448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3db44c:
    // 0x3db44c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3db44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3db450:
    // 0x3db450: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3db450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3db454:
    // 0x3db454: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3db454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3db458:
    // 0x3db458: 0xc0e9fa6  jal         func_3A7E98
label_3db45c:
    if (ctx->pc == 0x3DB45Cu) {
        ctx->pc = 0x3DB45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB458u;
        // 0x3db45c: 0xafa20430  sw          $v0, 0x430($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB460u;
        goto label_3db460;
    }
    ctx->pc = 0x3DB458u;
    SET_GPR_U32(ctx, 31, 0x3DB460u);
    ctx->pc = 0x3DB45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB458u;
    // 0x3db45c: 0xafa20430  sw          $v0, 0x430($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3DB458u, 0x3DB460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB460u;
label_3db460:
    // 0x3db460: 0x26a45138  addiu       $a0, $s5, 0x5138
    ctx->pc = 0x3db460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 20792));
label_3db464:
    // 0x3db464: 0xc0f15bc  jal         func_3C56F0
label_3db468:
    if (ctx->pc == 0x3DB468u) {
        ctx->pc = 0x3DB468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB464u;
        // 0x3db468: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB46Cu;
        goto label_3db46c;
    }
    ctx->pc = 0x3DB464u;
    SET_GPR_U32(ctx, 31, 0x3DB46Cu);
    ctx->pc = 0x3DB468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB464u;
    // 0x3db468: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3DB464u, 0x3DB46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB46Cu;
label_3db46c:
    // 0x3db46c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3db46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3db470:
    // 0x3db470: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3db470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3db474:
    // 0x3db474: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3db474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3db478:
    // 0x3db478: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3db478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3db47c:
    // 0x3db47c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_3db480:
    if (ctx->pc == 0x3DB480u) {
        ctx->pc = 0x3DB480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB47Cu;
        // 0x3db480: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB484u;
        goto label_3db484;
    }
    ctx->pc = 0x3DB47Cu;
    {
        const bool branch_taken_0x3db47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DB480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB47Cu;
        // 0x3db480: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db47c) {
            ctx->pc = 0x3DB420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3db420;
        }
    }
    ctx->pc = 0x3DB484u;
label_3db484:
    // 0x3db484: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x3db484u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3db488:
    // 0x3db488: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3db488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3db48c:
    // 0x3db48c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3db48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3db490:
    // 0x3db490: 0xafb30420  sw          $s3, 0x420($sp)
    ctx->pc = 0x3db490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 19));
label_3db494:
    // 0x3db494: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3db494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3db498:
    // 0x3db498: 0xc0e9f84  jal         func_3A7E10
label_3db49c:
    if (ctx->pc == 0x3DB49Cu) {
        ctx->pc = 0x3DB49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB498u;
        // 0x3db49c: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB4A0u;
        goto label_3db4a0;
    }
    ctx->pc = 0x3DB498u;
    SET_GPR_U32(ctx, 31, 0x3DB4A0u);
    ctx->pc = 0x3DB49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB498u;
    // 0x3db49c: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E10u, 0x3DB498u, 0x3DB4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB4A0u;
label_3db4a0:
    // 0x3db4a0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3db4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3db4a4:
    // 0x3db4a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3db4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3db4a8:
    // 0x3db4a8: 0xc0f15bc  jal         func_3C56F0
label_3db4ac:
    if (ctx->pc == 0x3DB4ACu) {
        ctx->pc = 0x3DB4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB4A8u;
        // 0x3db4ac: 0x24845148  addiu       $a0, $a0, 0x5148 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB4B0u;
        goto label_3db4b0;
    }
    ctx->pc = 0x3DB4A8u;
    SET_GPR_U32(ctx, 31, 0x3DB4B0u);
    ctx->pc = 0x3DB4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB4A8u;
    // 0x3db4ac: 0x24845148  addiu       $a0, $a0, 0x5148 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3DB4A8u, 0x3DB4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB4B0u;
label_3db4b0:
    // 0x3db4b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3db4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3db4b4:
    // 0x3db4b4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3db4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_3db4b8:
    // 0x3db4b8: 0x7bb004b0  lq          $s0, 0x4B0($sp)
    ctx->pc = 0x3db4b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3db4bc:
    // 0x3db4bc: 0x7bb104a0  lq          $s1, 0x4A0($sp)
    ctx->pc = 0x3db4bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3db4c0:
    // 0x3db4c0: 0x7bb20490  lq          $s2, 0x490($sp)
    ctx->pc = 0x3db4c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3db4c4:
    // 0x3db4c4: 0x7bb30480  lq          $s3, 0x480($sp)
    ctx->pc = 0x3db4c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3db4c8:
    // 0x3db4c8: 0x7bb40470  lq          $s4, 0x470($sp)
    ctx->pc = 0x3db4c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3db4cc:
    // 0x3db4cc: 0x7bb50460  lq          $s5, 0x460($sp)
    ctx->pc = 0x3db4ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3db4d0:
    // 0x3db4d0: 0x7bb60450  lq          $s6, 0x450($sp)
    ctx->pc = 0x3db4d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3db4d4:
    // 0x3db4d4: 0xdfbf0440  ld          $ra, 0x440($sp)
    ctx->pc = 0x3db4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
label_3db4d8:
    // 0x3db4d8: 0x3e00008  jr          $ra
label_3db4dc:
    if (ctx->pc == 0x3DB4DCu) {
        ctx->pc = 0x3DB4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB4D8u;
        // 0x3db4dc: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB4E0u;
        goto label_fallthrough_0x3db4d8;
    }
    ctx->pc = 0x3DB4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB4D8u;
        // 0x3db4dc: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3db4d8:
    ctx->pc = 0x3DB4E0u;
}
