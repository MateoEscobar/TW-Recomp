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

// Function: sub_0039C3F0
// Address: 0x39c3f0 - 0x39c518
void sub_0039C3F0_0x39c3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C3F0_0x39c3f0");
#endif

    switch (ctx->pc) {
        case 0x39c3f0u: goto label_39c3f0;
        case 0x39c3f4u: goto label_39c3f4;
        case 0x39c3f8u: goto label_39c3f8;
        case 0x39c3fcu: goto label_39c3fc;
        case 0x39c400u: goto label_39c400;
        case 0x39c404u: goto label_39c404;
        case 0x39c408u: goto label_39c408;
        case 0x39c40cu: goto label_39c40c;
        case 0x39c410u: goto label_39c410;
        case 0x39c414u: goto label_39c414;
        case 0x39c418u: goto label_39c418;
        case 0x39c41cu: goto label_39c41c;
        case 0x39c420u: goto label_39c420;
        case 0x39c424u: goto label_39c424;
        case 0x39c428u: goto label_39c428;
        case 0x39c42cu: goto label_39c42c;
        case 0x39c430u: goto label_39c430;
        case 0x39c434u: goto label_39c434;
        case 0x39c438u: goto label_39c438;
        case 0x39c43cu: goto label_39c43c;
        case 0x39c440u: goto label_39c440;
        case 0x39c444u: goto label_39c444;
        case 0x39c448u: goto label_39c448;
        case 0x39c44cu: goto label_39c44c;
        case 0x39c450u: goto label_39c450;
        case 0x39c454u: goto label_39c454;
        case 0x39c458u: goto label_39c458;
        case 0x39c45cu: goto label_39c45c;
        case 0x39c460u: goto label_39c460;
        case 0x39c464u: goto label_39c464;
        case 0x39c468u: goto label_39c468;
        case 0x39c46cu: goto label_39c46c;
        case 0x39c470u: goto label_39c470;
        case 0x39c474u: goto label_39c474;
        case 0x39c478u: goto label_39c478;
        case 0x39c47cu: goto label_39c47c;
        case 0x39c480u: goto label_39c480;
        case 0x39c484u: goto label_39c484;
        case 0x39c488u: goto label_39c488;
        case 0x39c48cu: goto label_39c48c;
        case 0x39c490u: goto label_39c490;
        case 0x39c494u: goto label_39c494;
        case 0x39c498u: goto label_39c498;
        case 0x39c49cu: goto label_39c49c;
        case 0x39c4a0u: goto label_39c4a0;
        case 0x39c4a4u: goto label_39c4a4;
        case 0x39c4a8u: goto label_39c4a8;
        case 0x39c4acu: goto label_39c4ac;
        case 0x39c4b0u: goto label_39c4b0;
        case 0x39c4b4u: goto label_39c4b4;
        case 0x39c4b8u: goto label_39c4b8;
        case 0x39c4bcu: goto label_39c4bc;
        case 0x39c4c0u: goto label_39c4c0;
        case 0x39c4c4u: goto label_39c4c4;
        case 0x39c4c8u: goto label_39c4c8;
        case 0x39c4ccu: goto label_39c4cc;
        case 0x39c4d0u: goto label_39c4d0;
        case 0x39c4d4u: goto label_39c4d4;
        case 0x39c4d8u: goto label_39c4d8;
        case 0x39c4dcu: goto label_39c4dc;
        case 0x39c4e0u: goto label_39c4e0;
        case 0x39c4e4u: goto label_39c4e4;
        case 0x39c4e8u: goto label_39c4e8;
        case 0x39c4ecu: goto label_39c4ec;
        case 0x39c4f0u: goto label_39c4f0;
        case 0x39c4f4u: goto label_39c4f4;
        case 0x39c4f8u: goto label_39c4f8;
        case 0x39c4fcu: goto label_39c4fc;
        case 0x39c500u: goto label_39c500;
        case 0x39c504u: goto label_39c504;
        case 0x39c508u: goto label_39c508;
        case 0x39c50cu: goto label_39c50c;
        case 0x39c510u: goto label_39c510;
        case 0x39c514u: goto label_39c514;
        default: break;
    }

    ctx->pc = 0x39c3f0u;

label_39c3f0:
    // 0x39c3f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x39c3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_39c3f4:
    // 0x39c3f4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x39c3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_39c3f8:
    // 0x39c3f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39c3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_39c3fc:
    // 0x39c3fc: 0x24425868  addiu       $v0, $v0, 0x5868
    ctx->pc = 0x39c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22632));
label_39c400:
    // 0x39c400: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x39c400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_39c404:
    // 0x39c404: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x39c404u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_39c408:
    // 0x39c408: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x39c408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_39c40c:
    // 0x39c40c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x39c40cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39c410:
    // 0x39c410: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x39c410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_39c414:
    // 0x39c414: 0x240600f0  addiu       $a2, $zero, 0xF0
    ctx->pc = 0x39c414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_39c418:
    // 0x39c418: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39c418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39c41c:
    // 0x39c41c: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x39c41cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_39c420:
    // 0x39c420: 0xae65000c  sw          $a1, 0xC($s3)
    ctx->pc = 0x39c420u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 5));
label_39c424:
    // 0x39c424: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x39c424u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_39c428:
    // 0x39c428: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x39c428u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_39c42c:
    // 0x39c42c: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x39c42cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_39c430:
    // 0x39c430: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x39c430u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_39c434:
    // 0x39c434: 0x26101430  addiu       $s0, $s0, 0x1430
    ctx->pc = 0x39c434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5168));
label_39c438:
    // 0x39c438: 0x8e4a27e4  lw          $t2, 0x27E4($s2)
    ctx->pc = 0x39c438u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_39c43c:
    // 0x39c43c: 0x26311438  addiu       $s1, $s1, 0x1438
    ctx->pc = 0x39c43cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 5176));
label_39c440:
    // 0x39c440: 0x3012  mflo        $a2
    ctx->pc = 0x39c440u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_39c444:
    // 0x39c444: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39c444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39c448:
    // 0x39c448: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x39c448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_39c44c:
    // 0x39c44c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x39c44cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_39c450:
    // 0x39c450: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x39c450u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39c454:
    // 0x39c454: 0x2409001b  addiu       $t1, $zero, 0x1B
    ctx->pc = 0x39c454u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_39c458:
    // 0x39c458: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x39c458u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_39c45c:
    // 0x39c45c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x39c45cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39c460:
    // 0x39c460: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x39c460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_39c464:
    // 0x39c464: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x39c464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_39c468:
    // 0x39c468: 0x40f809  jalr        $v0
label_39c46c:
    if (ctx->pc == 0x39C46Cu) {
        ctx->pc = 0x39C46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C468u;
        // 0x39c46c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C470u;
        goto label_39c470;
    }
    ctx->pc = 0x39C468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39C470u);
        ctx->pc = 0x39C46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C468u;
        // 0x39c46c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C468u, 0x39C470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C470u;
label_39c470:
    // 0x39c470: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x39c470u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_39c474:
    // 0x39c474: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39c474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39c478:
    // 0x39c478: 0x8e4c27e4  lw          $t4, 0x27E4($s2)
    ctx->pc = 0x39c478u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_39c47c:
    // 0x39c47c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x39c47cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39c480:
    // 0x39c480: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x39c480u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_39c484:
    // 0x39c484: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x39c484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39c488:
    // 0x39c488: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x39c488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_39c48c:
    // 0x39c48c: 0x2409001c  addiu       $t1, $zero, 0x1C
    ctx->pc = 0x39c48cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_39c490:
    // 0x39c490: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x39c490u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_39c494:
    // 0x39c494: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x39c494u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39c498:
    // 0x39c498: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x39c498u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_39c49c:
    // 0x39c49c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x39c49cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39c4a0:
    // 0x39c4a0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x39c4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_39c4a4:
    // 0x39c4a4: 0x40f809  jalr        $v0
label_39c4a8:
    if (ctx->pc == 0x39C4A8u) {
        ctx->pc = 0x39C4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C4A4u;
        // 0x39c4a8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C4ACu;
        goto label_39c4ac;
    }
    ctx->pc = 0x39C4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39C4ACu);
        ctx->pc = 0x39C4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C4A4u;
        // 0x39c4a8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C4A4u, 0x39C4ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C4ACu;
label_39c4ac:
    // 0x39c4ac: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x39c4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_39c4b0:
    // 0x39c4b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39c4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39c4b4:
    // 0x39c4b4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_39c4b8:
    if (ctx->pc == 0x39C4B8u) {
        ctx->pc = 0x39C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C4B4u;
        // 0x39c4b8: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C4BCu;
        goto label_39c4bc;
    }
    ctx->pc = 0x39C4B4u;
    {
        const bool branch_taken_0x39c4b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C4B4u;
        // 0x39c4b8: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c4b4) {
            ctx->pc = 0x39C4ECu;
            goto label_39c4ec;
        }
    }
    ctx->pc = 0x39C4BCu;
label_39c4bc:
    // 0x39c4bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39c4bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39c4c0:
    // 0x39c4c0: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x39c4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_39c4c4:
    // 0x39c4c4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x39c4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_39c4c8:
    // 0x39c4c8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x39c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_39c4cc:
    // 0x39c4cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x39c4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_39c4d0:
    // 0x39c4d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x39c4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_39c4d4:
    // 0x39c4d4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x39c4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_39c4d8:
    // 0x39c4d8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x39c4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_39c4dc:
    // 0x39c4dc: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x39c4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_39c4e0:
    // 0x39c4e0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x39c4e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39c4e4:
    // 0x39c4e4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_39c4e8:
    if (ctx->pc == 0x39C4E8u) {
        ctx->pc = 0x39C4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C4E4u;
        // 0x39c4e8: 0x24c600f0  addiu       $a2, $a2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C4ECu;
        goto label_39c4ec;
    }
    ctx->pc = 0x39C4E4u;
    {
        const bool branch_taken_0x39c4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39C4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C4E4u;
        // 0x39c4e8: 0x24c600f0  addiu       $a2, $a2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c4e4) {
            ctx->pc = 0x39C4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39c4c0;
        }
    }
    ctx->pc = 0x39C4ECu;
label_39c4ec:
    // 0x39c4ec: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x39c4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_39c4f0:
    // 0x39c4f0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x39c4f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39c4f4:
    // 0x39c4f4: 0x24635808  addiu       $v1, $v1, 0x5808
    ctx->pc = 0x39c4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22536));
label_39c4f8:
    // 0x39c4f8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x39c4f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39c4fc:
    // 0x39c4fc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x39c4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_39c500:
    // 0x39c500: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x39c500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39c504:
    // 0x39c504: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39c504u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39c508:
    // 0x39c508: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x39c508u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39c50c:
    // 0x39c50c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39c50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39c510:
    // 0x39c510: 0x3e00008  jr          $ra
label_39c514:
    if (ctx->pc == 0x39C514u) {
        ctx->pc = 0x39C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C510u;
        // 0x39c514: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C518u;
        goto label_fallthrough_0x39c510;
    }
    ctx->pc = 0x39C510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C510u;
        // 0x39c514: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39c510:
    ctx->pc = 0x39C518u;
}
