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

// Function: sub_0048C508
// Address: 0x48c508 - 0x48c778
void sub_0048C508_0x48c508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048C508_0x48c508");
#endif

    switch (ctx->pc) {
        case 0x48c508u: goto label_48c508;
        case 0x48c50cu: goto label_48c50c;
        case 0x48c510u: goto label_48c510;
        case 0x48c514u: goto label_48c514;
        case 0x48c518u: goto label_48c518;
        case 0x48c51cu: goto label_48c51c;
        case 0x48c520u: goto label_48c520;
        case 0x48c524u: goto label_48c524;
        case 0x48c528u: goto label_48c528;
        case 0x48c52cu: goto label_48c52c;
        case 0x48c530u: goto label_48c530;
        case 0x48c534u: goto label_48c534;
        case 0x48c538u: goto label_48c538;
        case 0x48c53cu: goto label_48c53c;
        case 0x48c540u: goto label_48c540;
        case 0x48c544u: goto label_48c544;
        case 0x48c548u: goto label_48c548;
        case 0x48c54cu: goto label_48c54c;
        case 0x48c550u: goto label_48c550;
        case 0x48c554u: goto label_48c554;
        case 0x48c558u: goto label_48c558;
        case 0x48c55cu: goto label_48c55c;
        case 0x48c560u: goto label_48c560;
        case 0x48c564u: goto label_48c564;
        case 0x48c568u: goto label_48c568;
        case 0x48c56cu: goto label_48c56c;
        case 0x48c570u: goto label_48c570;
        case 0x48c574u: goto label_48c574;
        case 0x48c578u: goto label_48c578;
        case 0x48c57cu: goto label_48c57c;
        case 0x48c580u: goto label_48c580;
        case 0x48c584u: goto label_48c584;
        case 0x48c588u: goto label_48c588;
        case 0x48c58cu: goto label_48c58c;
        case 0x48c590u: goto label_48c590;
        case 0x48c594u: goto label_48c594;
        case 0x48c598u: goto label_48c598;
        case 0x48c59cu: goto label_48c59c;
        case 0x48c5a0u: goto label_48c5a0;
        case 0x48c5a4u: goto label_48c5a4;
        case 0x48c5a8u: goto label_48c5a8;
        case 0x48c5acu: goto label_48c5ac;
        case 0x48c5b0u: goto label_48c5b0;
        case 0x48c5b4u: goto label_48c5b4;
        case 0x48c5b8u: goto label_48c5b8;
        case 0x48c5bcu: goto label_48c5bc;
        case 0x48c5c0u: goto label_48c5c0;
        case 0x48c5c4u: goto label_48c5c4;
        case 0x48c5c8u: goto label_48c5c8;
        case 0x48c5ccu: goto label_48c5cc;
        case 0x48c5d0u: goto label_48c5d0;
        case 0x48c5d4u: goto label_48c5d4;
        case 0x48c5d8u: goto label_48c5d8;
        case 0x48c5dcu: goto label_48c5dc;
        case 0x48c5e0u: goto label_48c5e0;
        case 0x48c5e4u: goto label_48c5e4;
        case 0x48c5e8u: goto label_48c5e8;
        case 0x48c5ecu: goto label_48c5ec;
        case 0x48c5f0u: goto label_48c5f0;
        case 0x48c5f4u: goto label_48c5f4;
        case 0x48c5f8u: goto label_48c5f8;
        case 0x48c5fcu: goto label_48c5fc;
        case 0x48c600u: goto label_48c600;
        case 0x48c604u: goto label_48c604;
        case 0x48c608u: goto label_48c608;
        case 0x48c60cu: goto label_48c60c;
        case 0x48c610u: goto label_48c610;
        case 0x48c614u: goto label_48c614;
        case 0x48c618u: goto label_48c618;
        case 0x48c61cu: goto label_48c61c;
        case 0x48c620u: goto label_48c620;
        case 0x48c624u: goto label_48c624;
        case 0x48c628u: goto label_48c628;
        case 0x48c62cu: goto label_48c62c;
        case 0x48c630u: goto label_48c630;
        case 0x48c634u: goto label_48c634;
        case 0x48c638u: goto label_48c638;
        case 0x48c63cu: goto label_48c63c;
        case 0x48c640u: goto label_48c640;
        case 0x48c644u: goto label_48c644;
        case 0x48c648u: goto label_48c648;
        case 0x48c64cu: goto label_48c64c;
        case 0x48c650u: goto label_48c650;
        case 0x48c654u: goto label_48c654;
        case 0x48c658u: goto label_48c658;
        case 0x48c65cu: goto label_48c65c;
        case 0x48c660u: goto label_48c660;
        case 0x48c664u: goto label_48c664;
        case 0x48c668u: goto label_48c668;
        case 0x48c66cu: goto label_48c66c;
        case 0x48c670u: goto label_48c670;
        case 0x48c674u: goto label_48c674;
        case 0x48c678u: goto label_48c678;
        case 0x48c67cu: goto label_48c67c;
        case 0x48c680u: goto label_48c680;
        case 0x48c684u: goto label_48c684;
        case 0x48c688u: goto label_48c688;
        case 0x48c68cu: goto label_48c68c;
        case 0x48c690u: goto label_48c690;
        case 0x48c694u: goto label_48c694;
        case 0x48c698u: goto label_48c698;
        case 0x48c69cu: goto label_48c69c;
        case 0x48c6a0u: goto label_48c6a0;
        case 0x48c6a4u: goto label_48c6a4;
        case 0x48c6a8u: goto label_48c6a8;
        case 0x48c6acu: goto label_48c6ac;
        case 0x48c6b0u: goto label_48c6b0;
        case 0x48c6b4u: goto label_48c6b4;
        case 0x48c6b8u: goto label_48c6b8;
        case 0x48c6bcu: goto label_48c6bc;
        case 0x48c6c0u: goto label_48c6c0;
        case 0x48c6c4u: goto label_48c6c4;
        case 0x48c6c8u: goto label_48c6c8;
        case 0x48c6ccu: goto label_48c6cc;
        case 0x48c6d0u: goto label_48c6d0;
        case 0x48c6d4u: goto label_48c6d4;
        case 0x48c6d8u: goto label_48c6d8;
        case 0x48c6dcu: goto label_48c6dc;
        case 0x48c6e0u: goto label_48c6e0;
        case 0x48c6e4u: goto label_48c6e4;
        case 0x48c6e8u: goto label_48c6e8;
        case 0x48c6ecu: goto label_48c6ec;
        case 0x48c6f0u: goto label_48c6f0;
        case 0x48c6f4u: goto label_48c6f4;
        case 0x48c6f8u: goto label_48c6f8;
        case 0x48c6fcu: goto label_48c6fc;
        case 0x48c700u: goto label_48c700;
        case 0x48c704u: goto label_48c704;
        case 0x48c708u: goto label_48c708;
        case 0x48c70cu: goto label_48c70c;
        case 0x48c710u: goto label_48c710;
        case 0x48c714u: goto label_48c714;
        case 0x48c718u: goto label_48c718;
        case 0x48c71cu: goto label_48c71c;
        case 0x48c720u: goto label_48c720;
        case 0x48c724u: goto label_48c724;
        case 0x48c728u: goto label_48c728;
        case 0x48c72cu: goto label_48c72c;
        case 0x48c730u: goto label_48c730;
        case 0x48c734u: goto label_48c734;
        case 0x48c738u: goto label_48c738;
        case 0x48c73cu: goto label_48c73c;
        case 0x48c740u: goto label_48c740;
        case 0x48c744u: goto label_48c744;
        case 0x48c748u: goto label_48c748;
        case 0x48c74cu: goto label_48c74c;
        case 0x48c750u: goto label_48c750;
        case 0x48c754u: goto label_48c754;
        case 0x48c758u: goto label_48c758;
        case 0x48c75cu: goto label_48c75c;
        case 0x48c760u: goto label_48c760;
        case 0x48c764u: goto label_48c764;
        case 0x48c768u: goto label_48c768;
        case 0x48c76cu: goto label_48c76c;
        case 0x48c770u: goto label_48c770;
        case 0x48c774u: goto label_48c774;
        default: break;
    }

    ctx->pc = 0x48c508u;

label_48c508:
    // 0x48c508: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x48c508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_48c50c:
    // 0x48c50c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x48c50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_48c510:
    // 0x48c510: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x48c510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_48c514:
    // 0x48c514: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x48c514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_48c518:
    // 0x48c518: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x48c518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_48c51c:
    // 0x48c51c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x48c51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_48c520:
    // 0x48c520: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48c520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_48c524:
    // 0x48c524: 0xc123024  jal         func_48C090
label_48c528:
    if (ctx->pc == 0x48C528u) {
        ctx->pc = 0x48C52Cu;
        goto label_48c52c;
    }
    ctx->pc = 0x48C524u;
    SET_GPR_U32(ctx, 31, 0x48C52Cu);
    ctx->pc = 0x48C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C090u, 0x48C524u, 0x48C52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C52Cu;
label_48c52c:
    // 0x48c52c: 0x8f8289b8  lw          $v0, -0x7648($gp)
    ctx->pc = 0x48c52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937016)));
label_48c530:
    // 0x48c530: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_48c534:
    if (ctx->pc == 0x48C534u) {
        ctx->pc = 0x48C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C530u;
        // 0x48c534: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48C538u;
        goto label_48c538;
    }
    ctx->pc = 0x48C530u;
    {
        const bool branch_taken_0x48c530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C530u;
        // 0x48c534: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c530) {
            ctx->pc = 0x48C5D4u;
            goto label_48c5d4;
        }
    }
    ctx->pc = 0x48C538u;
label_48c538:
    // 0x48c538: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x48c538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
label_48c53c:
    // 0x48c53c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x48c53cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
label_48c540:
    // 0x48c540: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x48c540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_48c544:
    // 0x48c544: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_48c548:
    if (ctx->pc == 0x48C548u) {
        ctx->pc = 0x48C548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C544u;
        // 0x48c548: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48C54Cu;
        goto label_48c54c;
    }
    ctx->pc = 0x48C544u;
    {
        const bool branch_taken_0x48c544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C544u;
        // 0x48c548: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c544) {
            ctx->pc = 0x48C580u;
            goto label_48c580;
        }
    }
    ctx->pc = 0x48C54Cu;
label_48c54c:
    // 0x48c54c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x48c54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_48c550:
    // 0x48c550: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x48c550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
label_48c554:
    // 0x48c554: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x48c554u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
label_48c558:
    // 0x48c558: 0xf  sync
    ctx->pc = 0x48c558u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_48c55c:
    // 0x48c55c: 0x40f  sync.p
    ctx->pc = 0x48c55cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_48c560:
    // 0x48c560: 0x0  nop
    ctx->pc = 0x48c560u;
    // NOP
label_48c564:
    // 0x48c564: 0x0  nop
    ctx->pc = 0x48c564u;
    // NOP
label_48c568:
    // 0x48c568: 0x0  nop
    ctx->pc = 0x48c568u;
    // NOP
label_48c56c:
    // 0x48c56c: 0x0  nop
    ctx->pc = 0x48c56cu;
    // NOP
label_48c570:
    // 0x48c570: 0x0  nop
    ctx->pc = 0x48c570u;
    // NOP
label_48c574:
    // 0x48c574: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
label_48c578:
    if (ctx->pc == 0x48C578u) {
        ctx->pc = 0x48C57Cu;
        goto label_48c57c;
    }
    ctx->pc = 0x48C574u;
    {
        const bool branch_taken_0x48c574 = (false);
        if (branch_taken_0x48c574) {
            ctx->pc = 0x48C560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48c560;
        }
    }
    ctx->pc = 0x48C57Cu;
label_48c57c:
    // 0x48c57c: 0x0  nop
    ctx->pc = 0x48c57cu;
    // NOP
label_48c580:
    // 0x48c580: 0x8f8789b4  lw          $a3, -0x764C($gp)
    ctx->pc = 0x48c580u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937012)));
label_48c584:
    // 0x48c584: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
label_48c588:
    if (ctx->pc == 0x48C588u) {
        ctx->pc = 0x48C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C584u;
        // 0x48c588: 0x8f8289bc  lw          $v0, -0x7644($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937020)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48C58Cu;
        goto label_48c58c;
    }
    ctx->pc = 0x48C584u;
    {
        const bool branch_taken_0x48c584 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C584u;
        // 0x48c588: 0x8f8289bc  lw          $v0, -0x7644($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c584) {
            ctx->pc = 0x48C5B4u;
            goto label_48c5b4;
        }
    }
    ctx->pc = 0x48C58Cu;
label_48c58c:
    // 0x48c58c: 0x24041121  addiu       $a0, $zero, 0x1121
    ctx->pc = 0x48c58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4385));
label_48c590:
    // 0x48c590: 0x8f8589b0  lw          $a1, -0x7650($gp)
    ctx->pc = 0x48c590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937008)));
label_48c594:
    // 0x48c594: 0x24060122  addiu       $a2, $zero, 0x122
    ctx->pc = 0x48c594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_48c598:
    // 0x48c598: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x48c598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_48c59c:
    // 0x48c59c: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x48c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_48c5a0:
    // 0x48c5a0: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x48c5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_48c5a4:
    // 0x48c5a4: 0xaf8389bc  sw          $v1, -0x7644($gp)
    ctx->pc = 0x48c5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937020), GPR_U32(ctx, 3));
label_48c5a8:
    // 0x48c5a8: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x48c5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
label_48c5ac:
    // 0x48c5ac: 0x10000005  b           . + 4 + (0x5 << 2)
label_48c5b0:
    if (ctx->pc == 0x48C5B0u) {
        ctx->pc = 0x48C5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C5ACu;
        // 0x48c5b0: 0xac670004  sw          $a3, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48C5B4u;
        goto label_48c5b4;
    }
    ctx->pc = 0x48C5ACu;
    {
        const bool branch_taken_0x48c5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C5ACu;
        // 0x48c5b0: 0xac670004  sw          $a3, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c5ac) {
            ctx->pc = 0x48C5C4u;
            goto label_48c5c4;
        }
    }
    ctx->pc = 0x48C5B4u;
label_48c5b4:
    // 0x48c5b4: 0x8f8389b8  lw          $v1, -0x7648($gp)
    ctx->pc = 0x48c5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937016)));
label_48c5b8:
    // 0x48c5b8: 0x8f8489b0  lw          $a0, -0x7650($gp)
    ctx->pc = 0x48c5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937008)));
label_48c5bc:
    // 0x48c5bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x48c5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_48c5c0:
    // 0x48c5c0: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x48c5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_48c5c4:
    // 0x48c5c4: 0xaf8089b0  sw          $zero, -0x7650($gp)
    ctx->pc = 0x48c5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937008), GPR_U32(ctx, 0));
label_48c5c8:
    // 0x48c5c8: 0xaf8089b4  sw          $zero, -0x764C($gp)
    ctx->pc = 0x48c5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937012), GPR_U32(ctx, 0));
label_48c5cc:
    // 0x48c5cc: 0xaf8089b8  sw          $zero, -0x7648($gp)
    ctx->pc = 0x48c5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937016), GPR_U32(ctx, 0));
label_48c5d0:
    // 0x48c5d0: 0xaf8089bc  sw          $zero, -0x7644($gp)
    ctx->pc = 0x48c5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937020), GPR_U32(ctx, 0));
label_48c5d4:
    // 0x48c5d4: 0x8f8389d8  lw          $v1, -0x7628($gp)
    ctx->pc = 0x48c5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937048)));
label_48c5d8:
    // 0x48c5d8: 0x3c1200ff  lui         $s2, 0xFF
    ctx->pc = 0x48c5d8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)255 << 16));
label_48c5dc:
    // 0x48c5dc: 0x8f8289dc  lw          $v0, -0x7624($gp)
    ctx->pc = 0x48c5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937052)));
label_48c5e0:
    // 0x48c5e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x48c5e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48c5e4:
    // 0x48c5e4: 0x279389c0  addiu       $s3, $gp, -0x7640
    ctx->pc = 0x48c5e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937024));
label_48c5e8:
    // 0x48c5e8: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x48c5e8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_48c5ec:
    // 0x48c5ec: 0x62a023  subu        $s4, $v1, $v0
    ctx->pc = 0x48c5ecu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_48c5f0:
    // 0x48c5f0: 0x8f838a00  lw          $v1, -0x7600($gp)
    ctx->pc = 0x48c5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937088)));
label_48c5f4:
    // 0x48c5f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x48c5f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48c5f8:
    // 0x48c5f8: 0x8f828a04  lw          $v0, -0x75FC($gp)
    ctx->pc = 0x48c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937092)));
label_48c5fc:
    // 0x48c5fc: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_48c600:
    if (ctx->pc == 0x48C600u) {
        ctx->pc = 0x48C600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C5FCu;
        // 0x48c600: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48C604u;
        goto label_48c604;
    }
    ctx->pc = 0x48C5FCu;
    {
        const bool branch_taken_0x48c5fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x48c5fc) {
            ctx->pc = 0x48C600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48C5FCu;
            // 0x48c600: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48C614u;
            goto label_48c614;
        }
    }
    ctx->pc = 0x48C604u;
label_48c604:
    // 0x48c604: 0x938289f8  lbu         $v0, -0x7608($gp)
    ctx->pc = 0x48c604u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937080)));
label_48c608:
    // 0x48c608: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48c60c:
    if (ctx->pc == 0x48C60Cu) {
        ctx->pc = 0x48C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C608u;
        // 0x48c60c: 0x8f82867c  lw          $v0, -0x7984($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48C610u;
        goto label_48c610;
    }
    ctx->pc = 0x48C608u;
    {
        const bool branch_taken_0x48c608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C608u;
        // 0x48c60c: 0x8f82867c  lw          $v0, -0x7984($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c608) {
            ctx->pc = 0x48C618u;
            goto label_48c618;
        }
    }
    ctx->pc = 0x48C610u;
label_48c610:
    // 0x48c610: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x48c610u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48c614:
    // 0x48c614: 0x8f82867c  lw          $v0, -0x7984($gp)
    ctx->pc = 0x48c614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936188)));
label_48c618:
    // 0x48c618: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48c61c:
    if (ctx->pc == 0x48C61Cu) {
        ctx->pc = 0x48C61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C618u;
        // 0x48c61c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48C620u;
        goto label_48c620;
    }
    ctx->pc = 0x48C618u;
    {
        const bool branch_taken_0x48c618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C618u;
        // 0x48c61c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c618) {
            ctx->pc = 0x48C628u;
            goto label_48c628;
        }
    }
    ctx->pc = 0x48C620u;
label_48c620:
    // 0x48c620: 0x40f809  jalr        $v0
label_48c624:
    if (ctx->pc == 0x48C624u) {
        ctx->pc = 0x48C624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C620u;
        // 0x48c624: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48C628u;
        goto label_48c628;
    }
    ctx->pc = 0x48C620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48C628u);
        ctx->pc = 0x48C624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C620u;
        // 0x48c624: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48C620u, 0x48C628u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48C628u;
label_48c628:
    // 0x48c628: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x48c628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48c62c:
    // 0x48c62c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x48c62cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_48c630:
    // 0x48c630: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_48c634:
    if (ctx->pc == 0x48C634u) {
        ctx->pc = 0x48C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C630u;
        // 0x48c634: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48C638u;
        goto label_48c638;
    }
    ctx->pc = 0x48C630u;
    {
        const bool branch_taken_0x48c630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C630u;
        // 0x48c634: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c630) {
            ctx->pc = 0x48C660u;
            goto label_48c660;
        }
    }
    ctx->pc = 0x48C638u;
label_48c638:
    // 0x48c638: 0x8f858a00  lw          $a1, -0x7600($gp)
    ctx->pc = 0x48c638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937088)));
label_48c63c:
    // 0x48c63c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x48c63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48c640:
    // 0x48c640: 0x8f82867c  lw          $v0, -0x7984($gp)
    ctx->pc = 0x48c640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936188)));
label_48c644:
    // 0x48c644: 0x40f809  jalr        $v0
label_48c648:
    if (ctx->pc == 0x48C648u) {
        ctx->pc = 0x48C648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C644u;
        // 0x48c648: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48C64Cu;
        goto label_48c64c;
    }
    ctx->pc = 0x48C644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48C64Cu);
        ctx->pc = 0x48C648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C644u;
        // 0x48c648: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48C644u, 0x48C64Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48C64Cu;
label_48c64c:
    // 0x48c64c: 0x3c05cdcd  lui         $a1, 0xCDCD
    ctx->pc = 0x48c64cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52685 << 16));
label_48c650:
    // 0x48c650: 0x8f82867c  lw          $v0, -0x7984($gp)
    ctx->pc = 0x48c650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936188)));
label_48c654:
    // 0x48c654: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x48c654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48c658:
    // 0x48c658: 0x40f809  jalr        $v0
label_48c65c:
    if (ctx->pc == 0x48C65Cu) {
        ctx->pc = 0x48C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C658u;
        // 0x48c65c: 0x34a5cdcd  ori         $a1, $a1, 0xCDCD (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52685);
        ctx->in_delay_slot = false;
        ctx->pc = 0x48C660u;
        goto label_48c660;
    }
    ctx->pc = 0x48C658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48C660u);
        ctx->pc = 0x48C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C658u;
        // 0x48c65c: 0x34a5cdcd  ori         $a1, $a1, 0xCDCD (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52685);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48C658u, 0x48C660u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48C660u;
label_48c660:
    // 0x48c660: 0x1620ffe3  bnez        $s1, . + 4 + (-0x1D << 2)
label_48c664:
    if (ctx->pc == 0x48C664u) {
        ctx->pc = 0x48C668u;
        goto label_48c668;
    }
    ctx->pc = 0x48C660u;
    {
        const bool branch_taken_0x48c660 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x48c660) {
            ctx->pc = 0x48C5F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48c5f0;
        }
    }
    ctx->pc = 0x48C668u;
label_48c668:
    // 0x48c668: 0x3c100001  lui         $s0, 0x1
    ctx->pc = 0x48c668u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
label_48c66c:
    // 0x48c66c: 0x42000039  di
    ctx->pc = 0x48c66cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
label_48c670:
    // 0x48c670: 0x40f  sync.p
    ctx->pc = 0x48c670u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_48c674:
    // 0x48c674: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x48c674u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
label_48c678:
    // 0x48c678: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x48c678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_48c67c:
    // 0x48c67c: 0x0  nop
    ctx->pc = 0x48c67cu;
    // NOP
label_48c680:
    // 0x48c680: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_48c684:
    if (ctx->pc == 0x48C684u) {
        ctx->pc = 0x48C688u;
        goto label_48c688;
    }
    ctx->pc = 0x48C680u;
    {
        const bool branch_taken_0x48c680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48c680) {
            ctx->pc = 0x48C66Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48c66c;
        }
    }
    ctx->pc = 0x48C688u;
label_48c688:
    // 0x48c688: 0x938389cc  lbu         $v1, -0x7634($gp)
    ctx->pc = 0x48c688u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937036)));
label_48c68c:
    // 0x48c68c: 0x8f8489e4  lw          $a0, -0x761C($gp)
    ctx->pc = 0x48c68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937060)));
label_48c690:
    // 0x48c690: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48c690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48c694:
    // 0x48c694: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x48c694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_48c698:
    // 0x48c698: 0xaf848a04  sw          $a0, -0x75FC($gp)
    ctx->pc = 0x48c698u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937092), GPR_U32(ctx, 4));
label_48c69c:
    // 0x48c69c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x48c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_48c6a0:
    // 0x48c6a0: 0xaf828a00  sw          $v0, -0x7600($gp)
    ctx->pc = 0x48c6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937088), GPR_U32(ctx, 2));
label_48c6a4:
    // 0x48c6a4: 0x42000038  ei
    ctx->pc = 0x48c6a4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_48c6a8:
    // 0x48c6a8: 0x938289cc  lbu         $v0, -0x7634($gp)
    ctx->pc = 0x48c6a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937036)));
label_48c6ac:
    // 0x48c6ac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48c6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_48c6b0:
    // 0x48c6b0: 0xa38289cc  sb          $v0, -0x7634($gp)
    ctx->pc = 0x48c6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937036), (uint8_t)GPR_U32(ctx, 2));
label_48c6b4:
    // 0x48c6b4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x48c6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_48c6b8:
    // 0x48c6b8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x48c6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_48c6bc:
    // 0x48c6bc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x48c6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_48c6c0:
    // 0x48c6c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48c6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48c6c4:
    // 0x48c6c4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x48c6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_48c6c8:
    // 0x48c6c8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x48c6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_48c6cc:
    // 0x48c6cc: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x48c6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_48c6d0:
    // 0x48c6d0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x48c6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_48c6d4:
    // 0x48c6d4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x48c6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_48c6d8:
    // 0x48c6d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x48c6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_48c6dc:
    // 0x48c6dc: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x48c6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_48c6e0:
    // 0x48c6e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x48c6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48c6e4:
    // 0x48c6e4: 0x8f8589c8  lw          $a1, -0x7638($gp)
    ctx->pc = 0x48c6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937032)));
label_48c6e8:
    // 0x48c6e8: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x48c6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_48c6ec:
    // 0x48c6ec: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x48c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_48c6f0:
    // 0x48c6f0: 0xaf8389dc  sw          $v1, -0x7624($gp)
    ctx->pc = 0x48c6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937052), GPR_U32(ctx, 3));
label_48c6f4:
    // 0x48c6f4: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x48c6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_48c6f8:
    // 0x48c6f8: 0xaf8289e0  sw          $v0, -0x7620($gp)
    ctx->pc = 0x48c6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937056), GPR_U32(ctx, 2));
label_48c6fc:
    // 0x48c6fc: 0xaf8489d0  sw          $a0, -0x7630($gp)
    ctx->pc = 0x48c6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937040), GPR_U32(ctx, 4));
label_48c700:
    // 0x48c700: 0xaf8689e4  sw          $a2, -0x761C($gp)
    ctx->pc = 0x48c700u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937060), GPR_U32(ctx, 6));
label_48c704:
    // 0x48c704: 0xaf8489d8  sw          $a0, -0x7628($gp)
    ctx->pc = 0x48c704u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937048), GPR_U32(ctx, 4));
label_48c708:
    // 0x48c708: 0xaf80898c  sw          $zero, -0x7674($gp)
    ctx->pc = 0x48c708u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 0));
label_48c70c:
    // 0x48c70c: 0xaf808990  sw          $zero, -0x7670($gp)
    ctx->pc = 0x48c70cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936976), GPR_U32(ctx, 0));
label_48c710:
    // 0x48c710: 0x938289cc  lbu         $v0, -0x7634($gp)
    ctx->pc = 0x48c710u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937036)));
label_48c714:
    // 0x48c714: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48c714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_48c718:
    // 0x48c718: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x48c718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_48c71c:
    // 0x48c71c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48c71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48c720:
    // 0x48c720: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x48c720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_48c724:
    // 0x48c724: 0xc10f690  jal         func_43DA40
label_48c728:
    if (ctx->pc == 0x48C728u) {
        ctx->pc = 0x48C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C724u;
        // 0x48c728: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48C72Cu;
        goto label_48c72c;
    }
    ctx->pc = 0x48C724u;
    SET_GPR_U32(ctx, 31, 0x48C72Cu);
    ctx->pc = 0x48C728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48C724u;
    // 0x48c728: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43DA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43DA40u, 0x48C724u, 0x48C72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C72Cu;
label_48c72c:
    // 0x48c72c: 0x42000039  di
    ctx->pc = 0x48c72cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
label_48c730:
    // 0x48c730: 0x40f  sync.p
    ctx->pc = 0x48c730u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_48c734:
    // 0x48c734: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x48c734u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
label_48c738:
    // 0x48c738: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x48c738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_48c73c:
    // 0x48c73c: 0x0  nop
    ctx->pc = 0x48c73cu;
    // NOP
label_48c740:
    // 0x48c740: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_48c744:
    if (ctx->pc == 0x48C744u) {
        ctx->pc = 0x48C748u;
        goto label_48c748;
    }
    ctx->pc = 0x48C740u;
    {
        const bool branch_taken_0x48c740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48c740) {
            ctx->pc = 0x48C72Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48c72c;
        }
    }
    ctx->pc = 0x48C748u;
label_48c748:
    // 0x48c748: 0xc122dc2  jal         func_48B708
label_48c74c:
    if (ctx->pc == 0x48C74Cu) {
        ctx->pc = 0x48C74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C748u;
        // 0x48c74c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48C750u;
        goto label_48c750;
    }
    ctx->pc = 0x48C748u;
    SET_GPR_U32(ctx, 31, 0x48C750u);
    ctx->pc = 0x48C74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48C748u;
    // 0x48c74c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B708u, 0x48C748u, 0x48C750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C750u;
label_48c750:
    // 0x48c750: 0x42000038  ei
    ctx->pc = 0x48c750u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_48c754:
    // 0x48c754: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x48c754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_48c758:
    // 0x48c758: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x48c758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_48c75c:
    // 0x48c75c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x48c75cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_48c760:
    // 0x48c760: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x48c760u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48c764:
    // 0x48c764: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x48c764u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48c768:
    // 0x48c768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48c768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48c76c:
    // 0x48c76c: 0x3e00008  jr          $ra
label_48c770:
    if (ctx->pc == 0x48C770u) {
        ctx->pc = 0x48C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C76Cu;
        // 0x48c770: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48C774u;
        goto label_48c774;
    }
    ctx->pc = 0x48C76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C76Cu;
        // 0x48c770: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48C76Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48C774u;
label_48c774:
    // 0x48c774: 0x0  nop
    ctx->pc = 0x48c774u;
    // NOP
    ctx->pc = 0x48c778u;
}
