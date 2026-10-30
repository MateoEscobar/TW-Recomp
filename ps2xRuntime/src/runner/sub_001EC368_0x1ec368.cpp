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

// Function: sub_001EC368
// Address: 0x1ec368 - 0x1ec448
void sub_001EC368_0x1ec368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC368_0x1ec368");
#endif

    switch (ctx->pc) {
        case 0x1ec368u: goto label_1ec368;
        case 0x1ec36cu: goto label_1ec36c;
        case 0x1ec370u: goto label_1ec370;
        case 0x1ec374u: goto label_1ec374;
        case 0x1ec378u: goto label_1ec378;
        case 0x1ec37cu: goto label_1ec37c;
        case 0x1ec380u: goto label_1ec380;
        case 0x1ec384u: goto label_1ec384;
        case 0x1ec388u: goto label_1ec388;
        case 0x1ec38cu: goto label_1ec38c;
        case 0x1ec390u: goto label_1ec390;
        case 0x1ec394u: goto label_1ec394;
        case 0x1ec398u: goto label_1ec398;
        case 0x1ec39cu: goto label_1ec39c;
        case 0x1ec3a0u: goto label_1ec3a0;
        case 0x1ec3a4u: goto label_1ec3a4;
        case 0x1ec3a8u: goto label_1ec3a8;
        case 0x1ec3acu: goto label_1ec3ac;
        case 0x1ec3b0u: goto label_1ec3b0;
        case 0x1ec3b4u: goto label_1ec3b4;
        case 0x1ec3b8u: goto label_1ec3b8;
        case 0x1ec3bcu: goto label_1ec3bc;
        case 0x1ec3c0u: goto label_1ec3c0;
        case 0x1ec3c4u: goto label_1ec3c4;
        case 0x1ec3c8u: goto label_1ec3c8;
        case 0x1ec3ccu: goto label_1ec3cc;
        case 0x1ec3d0u: goto label_1ec3d0;
        case 0x1ec3d4u: goto label_1ec3d4;
        case 0x1ec3d8u: goto label_1ec3d8;
        case 0x1ec3dcu: goto label_1ec3dc;
        case 0x1ec3e0u: goto label_1ec3e0;
        case 0x1ec3e4u: goto label_1ec3e4;
        case 0x1ec3e8u: goto label_1ec3e8;
        case 0x1ec3ecu: goto label_1ec3ec;
        case 0x1ec3f0u: goto label_1ec3f0;
        case 0x1ec3f4u: goto label_1ec3f4;
        case 0x1ec3f8u: goto label_1ec3f8;
        case 0x1ec3fcu: goto label_1ec3fc;
        case 0x1ec400u: goto label_1ec400;
        case 0x1ec404u: goto label_1ec404;
        case 0x1ec408u: goto label_1ec408;
        case 0x1ec40cu: goto label_1ec40c;
        case 0x1ec410u: goto label_1ec410;
        case 0x1ec414u: goto label_1ec414;
        case 0x1ec418u: goto label_1ec418;
        case 0x1ec41cu: goto label_1ec41c;
        case 0x1ec420u: goto label_1ec420;
        case 0x1ec424u: goto label_1ec424;
        case 0x1ec428u: goto label_1ec428;
        case 0x1ec42cu: goto label_1ec42c;
        case 0x1ec430u: goto label_1ec430;
        case 0x1ec434u: goto label_1ec434;
        case 0x1ec438u: goto label_1ec438;
        case 0x1ec43cu: goto label_1ec43c;
        case 0x1ec440u: goto label_1ec440;
        case 0x1ec444u: goto label_1ec444;
        default: break;
    }

    ctx->pc = 0x1ec368u;

label_1ec368:
    // 0x1ec368: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ec368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ec36c:
    // 0x1ec36c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1ec36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1ec370:
    // 0x1ec370: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ec370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1ec374:
    // 0x1ec374: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1ec374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1ec378:
    // 0x1ec378: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x1ec378u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_1ec37c:
    // 0x1ec37c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ec37cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ec380:
    // 0x1ec380: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ec380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1ec384:
    // 0x1ec384: 0x2442cdc0  addiu       $v0, $v0, -0x3240
    ctx->pc = 0x1ec384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954432));
label_1ec388:
    // 0x1ec388: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1ec388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1ec38c:
    // 0x1ec38c: 0x2463cde8  addiu       $v1, $v1, -0x3218
    ctx->pc = 0x1ec38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954472));
label_1ec390:
    // 0x1ec390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ec390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ec394:
    // 0x1ec394: 0x24c6ce18  addiu       $a2, $a2, -0x31E8
    ctx->pc = 0x1ec394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954520));
label_1ec398:
    // 0x1ec398: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x1ec398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_1ec39c:
    // 0x1ec39c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ec39cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ec3a0:
    // 0x1ec3a0: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x1ec3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
label_1ec3a4:
    // 0x1ec3a4: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x1ec3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_1ec3a8:
    // 0x1ec3a8: 0xc07bb30  jal         func_1EECC0
label_1ec3ac:
    if (ctx->pc == 0x1EC3ACu) {
        ctx->pc = 0x1EC3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3A8u;
        // 0x1ec3ac: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC3B0u;
        goto label_1ec3b0;
    }
    ctx->pc = 0x1EC3A8u;
    SET_GPR_U32(ctx, 31, 0x1EC3B0u);
    ctx->pc = 0x1EC3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC3A8u;
    // 0x1ec3ac: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EECC0u, 0x1EC3A8u, 0x1EC3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC3B0u;
label_1ec3b0:
    // 0x1ec3b0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1ec3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1ec3b4:
    // 0x1ec3b4: 0x2442cc88  addiu       $v0, $v0, -0x3378
    ctx->pc = 0x1ec3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954120));
label_1ec3b8:
    // 0x1ec3b8: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x1ec3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_1ec3bc:
    // 0x1ec3bc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1ec3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ec3c0:
    // 0x1ec3c0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1ec3c4:
    if (ctx->pc == 0x1EC3C4u) {
        ctx->pc = 0x1EC3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3C0u;
        // 0x1ec3c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC3C8u;
        goto label_1ec3c8;
    }
    ctx->pc = 0x1EC3C0u;
    {
        const bool branch_taken_0x1ec3c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3C0u;
        // 0x1ec3c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec3c0) {
            ctx->pc = 0x1EC3F0u;
            goto label_1ec3f0;
        }
    }
    ctx->pc = 0x1EC3C8u;
label_1ec3c8:
    // 0x1ec3c8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ec3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ec3cc:
    // 0x1ec3cc: 0xc1376d6  jal         func_4DDB58
label_1ec3d0:
    if (ctx->pc == 0x1EC3D0u) {
        ctx->pc = 0x1EC3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3CCu;
        // 0x1ec3d0: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC3D4u;
        goto label_1ec3d4;
    }
    ctx->pc = 0x1EC3CCu;
    SET_GPR_U32(ctx, 31, 0x1EC3D4u);
    ctx->pc = 0x1EC3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC3CCu;
    // 0x1ec3d0: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDB58u, 0x1EC3CCu, 0x1EC3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC3D4u;
label_1ec3d4:
    // 0x1ec3d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ec3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ec3d8:
    // 0x1ec3d8: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x1ec3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_1ec3dc:
    // 0x1ec3dc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1ec3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ec3e0:
    // 0x1ec3e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ec3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1ec3e4:
    // 0x1ec3e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ec3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ec3e8:
    // 0x1ec3e8: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x1ec3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
label_1ec3ec:
    // 0x1ec3ec: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1ec3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1ec3f0:
    // 0x1ec3f0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1ec3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ec3f4:
    // 0x1ec3f4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1ec3f8:
    if (ctx->pc == 0x1EC3F8u) {
        ctx->pc = 0x1EC3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3F4u;
        // 0x1ec3f8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC3FCu;
        goto label_1ec3fc;
    }
    ctx->pc = 0x1EC3F4u;
    {
        const bool branch_taken_0x1ec3f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3F4u;
        // 0x1ec3f8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec3f4) {
            ctx->pc = 0x1EC420u;
            goto label_1ec420;
        }
    }
    ctx->pc = 0x1EC3FCu;
label_1ec3fc:
    // 0x1ec3fc: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1ec3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1ec400:
    // 0x1ec400: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x1ec400u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1ec404:
    // 0x1ec404: 0x24c66df8  addiu       $a2, $a2, 0x6DF8
    ctx->pc = 0x1ec404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28152));
label_1ec408:
    // 0x1ec408: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x1ec408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1ec40c:
    // 0x1ec40c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1ec40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1ec410:
    // 0x1ec410: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1ec410u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1ec414:
    // 0x1ec414: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1ec414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1ec418:
    // 0x1ec418: 0x60f809  jalr        $v1
label_1ec41c:
    if (ctx->pc == 0x1EC41Cu) {
        ctx->pc = 0x1EC41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC418u;
        // 0x1ec41c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC420u;
        goto label_1ec420;
    }
    ctx->pc = 0x1EC418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EC420u);
        ctx->pc = 0x1EC41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC418u;
        // 0x1ec41c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC418u, 0x1EC420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EC420u;
label_1ec420:
    // 0x1ec420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ec420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ec424:
    // 0x1ec424: 0xc06a39e  jal         func_1A8E78
label_1ec428:
    if (ctx->pc == 0x1EC428u) {
        ctx->pc = 0x1EC428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC424u;
        // 0x1ec428: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC42Cu;
        goto label_1ec42c;
    }
    ctx->pc = 0x1EC424u;
    SET_GPR_U32(ctx, 31, 0x1EC42Cu);
    ctx->pc = 0x1EC428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC424u;
    // 0x1ec428: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1EC424u, 0x1EC42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC42Cu;
label_1ec42c:
    // 0x1ec42c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ec42cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ec430:
    // 0x1ec430: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ec430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ec434:
    // 0x1ec434: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ec434u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ec438:
    // 0x1ec438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec43c:
    // 0x1ec43c: 0x3e00008  jr          $ra
label_1ec440:
    if (ctx->pc == 0x1EC440u) {
        ctx->pc = 0x1EC440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC43Cu;
        // 0x1ec440: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC444u;
        goto label_1ec444;
    }
    ctx->pc = 0x1EC43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC43Cu;
        // 0x1ec440: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC444u;
label_1ec444:
    // 0x1ec444: 0x0  nop
    ctx->pc = 0x1ec444u;
    // NOP
    ctx->pc = 0x1ec448u;
}
