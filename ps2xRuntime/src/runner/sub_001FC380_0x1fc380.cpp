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

// Function: sub_001FC380
// Address: 0x1fc380 - 0x1fc488
void sub_001FC380_0x1fc380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC380_0x1fc380");
#endif

    switch (ctx->pc) {
        case 0x1fc380u: goto label_1fc380;
        case 0x1fc384u: goto label_1fc384;
        case 0x1fc388u: goto label_1fc388;
        case 0x1fc38cu: goto label_1fc38c;
        case 0x1fc390u: goto label_1fc390;
        case 0x1fc394u: goto label_1fc394;
        case 0x1fc398u: goto label_1fc398;
        case 0x1fc39cu: goto label_1fc39c;
        case 0x1fc3a0u: goto label_1fc3a0;
        case 0x1fc3a4u: goto label_1fc3a4;
        case 0x1fc3a8u: goto label_1fc3a8;
        case 0x1fc3acu: goto label_1fc3ac;
        case 0x1fc3b0u: goto label_1fc3b0;
        case 0x1fc3b4u: goto label_1fc3b4;
        case 0x1fc3b8u: goto label_1fc3b8;
        case 0x1fc3bcu: goto label_1fc3bc;
        case 0x1fc3c0u: goto label_1fc3c0;
        case 0x1fc3c4u: goto label_1fc3c4;
        case 0x1fc3c8u: goto label_1fc3c8;
        case 0x1fc3ccu: goto label_1fc3cc;
        case 0x1fc3d0u: goto label_1fc3d0;
        case 0x1fc3d4u: goto label_1fc3d4;
        case 0x1fc3d8u: goto label_1fc3d8;
        case 0x1fc3dcu: goto label_1fc3dc;
        case 0x1fc3e0u: goto label_1fc3e0;
        case 0x1fc3e4u: goto label_1fc3e4;
        case 0x1fc3e8u: goto label_1fc3e8;
        case 0x1fc3ecu: goto label_1fc3ec;
        case 0x1fc3f0u: goto label_1fc3f0;
        case 0x1fc3f4u: goto label_1fc3f4;
        case 0x1fc3f8u: goto label_1fc3f8;
        case 0x1fc3fcu: goto label_1fc3fc;
        case 0x1fc400u: goto label_1fc400;
        case 0x1fc404u: goto label_1fc404;
        case 0x1fc408u: goto label_1fc408;
        case 0x1fc40cu: goto label_1fc40c;
        case 0x1fc410u: goto label_1fc410;
        case 0x1fc414u: goto label_1fc414;
        case 0x1fc418u: goto label_1fc418;
        case 0x1fc41cu: goto label_1fc41c;
        case 0x1fc420u: goto label_1fc420;
        case 0x1fc424u: goto label_1fc424;
        case 0x1fc428u: goto label_1fc428;
        case 0x1fc42cu: goto label_1fc42c;
        case 0x1fc430u: goto label_1fc430;
        case 0x1fc434u: goto label_1fc434;
        case 0x1fc438u: goto label_1fc438;
        case 0x1fc43cu: goto label_1fc43c;
        case 0x1fc440u: goto label_1fc440;
        case 0x1fc444u: goto label_1fc444;
        case 0x1fc448u: goto label_1fc448;
        case 0x1fc44cu: goto label_1fc44c;
        case 0x1fc450u: goto label_1fc450;
        case 0x1fc454u: goto label_1fc454;
        case 0x1fc458u: goto label_1fc458;
        case 0x1fc45cu: goto label_1fc45c;
        case 0x1fc460u: goto label_1fc460;
        case 0x1fc464u: goto label_1fc464;
        case 0x1fc468u: goto label_1fc468;
        case 0x1fc46cu: goto label_1fc46c;
        case 0x1fc470u: goto label_1fc470;
        case 0x1fc474u: goto label_1fc474;
        case 0x1fc478u: goto label_1fc478;
        case 0x1fc47cu: goto label_1fc47c;
        case 0x1fc480u: goto label_1fc480;
        case 0x1fc484u: goto label_1fc484;
        default: break;
    }

    ctx->pc = 0x1fc380u;

label_1fc380:
    // 0x1fc380: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fc380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1fc384:
    // 0x1fc384: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1fc384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1fc388:
    // 0x1fc388: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fc388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1fc38c:
    // 0x1fc38c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fc38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1fc390:
    // 0x1fc390: 0xc06a38c  jal         func_1A8E30
label_1fc394:
    if (ctx->pc == 0x1FC394u) {
        ctx->pc = 0x1FC394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC390u;
        // 0x1fc394: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC398u;
        goto label_1fc398;
    }
    ctx->pc = 0x1FC390u;
    SET_GPR_U32(ctx, 31, 0x1FC398u);
    ctx->pc = 0x1FC394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC390u;
    // 0x1fc394: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1FC390u, 0x1FC398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC398u;
label_1fc398:
    // 0x1fc398: 0x26110078  addiu       $s1, $s0, 0x78
    ctx->pc = 0x1fc398u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_1fc39c:
    // 0x1fc39c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1fc39cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1fc3a0:
    // 0x1fc3a0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fc3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fc3a4:
    // 0x1fc3a4: 0x24638778  addiu       $v1, $v1, -0x7888
    ctx->pc = 0x1fc3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936440));
label_1fc3a8:
    // 0x1fc3a8: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1fc3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_1fc3ac:
    // 0x1fc3ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1fc3acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1fc3b0:
    // 0x1fc3b0: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1fc3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1fc3b4:
    // 0x1fc3b4: 0x24428510  addiu       $v0, $v0, -0x7AF0
    ctx->pc = 0x1fc3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935824));
label_1fc3b8:
    // 0x1fc3b8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1fc3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1fc3bc:
    // 0x1fc3bc: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x1fc3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_1fc3c0:
    // 0x1fc3c0: 0x2463cc88  addiu       $v1, $v1, -0x3378
    ctx->pc = 0x1fc3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954120));
label_1fc3c4:
    // 0x1fc3c4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1fc3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_1fc3c8:
    // 0x1fc3c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1fc3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1fc3cc:
    // 0x1fc3cc: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1fc3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_1fc3d0:
    // 0x1fc3d0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1fc3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1fc3d4:
    // 0x1fc3d4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1fc3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1fc3d8:
    // 0x1fc3d8: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1fc3d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1fc3dc:
    // 0x1fc3dc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1fc3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_1fc3e0:
    // 0x1fc3e0: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x1fc3e0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_1fc3e4:
    // 0x1fc3e4: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x1fc3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_1fc3e8:
    // 0x1fc3e8: 0x24a57f18  addiu       $a1, $a1, 0x7F18
    ctx->pc = 0x1fc3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32536));
label_1fc3ec:
    // 0x1fc3ec: 0x8c4cb9c0  lw          $t4, -0x4640($v0)
    ctx->pc = 0x1fc3ecu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1fc3f0:
    // 0x1fc3f0: 0x25087f20  addiu       $t0, $t0, 0x7F20
    ctx->pc = 0x1fc3f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32544));
label_1fc3f4:
    // 0x1fc3f4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1fc3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1fc3f8:
    // 0x1fc3f8: 0x254a7f48  addiu       $t2, $t2, 0x7F48
    ctx->pc = 0x1fc3f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32584));
label_1fc3fc:
    // 0x1fc3fc: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1fc3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1fc400:
    // 0x1fc400: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1fc400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fc404:
    // 0x1fc404: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1fc404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1fc408:
    // 0x1fc408: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x1fc408u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1fc40c:
    // 0x1fc40c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fc40cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc410:
    // 0x1fc410: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1fc410u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1fc414:
    // 0x1fc414: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1fc414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1fc418:
    // 0x1fc418: 0x40f809  jalr        $v0
label_1fc41c:
    if (ctx->pc == 0x1FC41Cu) {
        ctx->pc = 0x1FC41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC418u;
        // 0x1fc41c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC420u;
        goto label_1fc420;
    }
    ctx->pc = 0x1FC418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FC420u);
        ctx->pc = 0x1FC41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC418u;
        // 0x1fc41c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC418u, 0x1FC420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FC420u;
label_1fc420:
    // 0x1fc420: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1fc420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1fc424:
    // 0x1fc424: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x1fc424u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
label_1fc428:
    // 0x1fc428: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1fc428u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1fc42c:
    // 0x1fc42c: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x1fc42cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_1fc430:
    // 0x1fc430: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x1fc430u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
label_1fc434:
    // 0x1fc434: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1fc434u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_1fc438:
    // 0x1fc438: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1fc438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1fc43c:
    // 0x1fc43c: 0x24e7d6e8  addiu       $a3, $a3, -0x2918
    ctx->pc = 0x1fc43cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956776));
label_1fc440:
    // 0x1fc440: 0x24c6d710  addiu       $a2, $a2, -0x28F0
    ctx->pc = 0x1fc440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956816));
label_1fc444:
    // 0x1fc444: 0x24a5d740  addiu       $a1, $a1, -0x28C0
    ctx->pc = 0x1fc444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956864));
label_1fc448:
    // 0x1fc448: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1fc448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1fc44c:
    // 0x1fc44c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fc44cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fc450:
    // 0x1fc450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fc450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fc454:
    // 0x1fc454: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1fc454u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1fc458:
    // 0x1fc458: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1fc458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1fc45c:
    // 0x1fc45c: 0xac630008  sw          $v1, 0x8($v1)
    ctx->pc = 0x1fc45cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 3));
label_1fc460:
    // 0x1fc460: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1fc460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1fc464:
    // 0x1fc464: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fc464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fc468:
    // 0x1fc468: 0xac84000c  sw          $a0, 0xC($a0)
    ctx->pc = 0x1fc468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 4));
label_1fc46c:
    // 0x1fc46c: 0xae07006c  sw          $a3, 0x6C($s0)
    ctx->pc = 0x1fc46cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 7));
label_1fc470:
    // 0x1fc470: 0xae060088  sw          $a2, 0x88($s0)
    ctx->pc = 0x1fc470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 6));
label_1fc474:
    // 0x1fc474: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1fc474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_1fc478:
    // 0x1fc478: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1fc478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fc47c:
    // 0x1fc47c: 0x3e00008  jr          $ra
label_1fc480:
    if (ctx->pc == 0x1FC480u) {
        ctx->pc = 0x1FC480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC47Cu;
        // 0x1fc480: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC484u;
        goto label_1fc484;
    }
    ctx->pc = 0x1FC47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC47Cu;
        // 0x1fc480: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC47Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC484u;
label_1fc484:
    // 0x1fc484: 0x0  nop
    ctx->pc = 0x1fc484u;
    // NOP
    ctx->pc = 0x1fc488u;
}
