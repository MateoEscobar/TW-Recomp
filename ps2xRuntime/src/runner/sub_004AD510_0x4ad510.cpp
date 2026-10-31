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

// Function: sub_004AD510
// Address: 0x4ad510 - 0x4ad770
void sub_004AD510_0x4ad510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AD510_0x4ad510");
#endif

    switch (ctx->pc) {
        case 0x4ad510u: goto label_4ad510;
        case 0x4ad514u: goto label_4ad514;
        case 0x4ad518u: goto label_4ad518;
        case 0x4ad51cu: goto label_4ad51c;
        case 0x4ad520u: goto label_4ad520;
        case 0x4ad524u: goto label_4ad524;
        case 0x4ad528u: goto label_4ad528;
        case 0x4ad52cu: goto label_4ad52c;
        case 0x4ad530u: goto label_4ad530;
        case 0x4ad534u: goto label_4ad534;
        case 0x4ad538u: goto label_4ad538;
        case 0x4ad53cu: goto label_4ad53c;
        case 0x4ad540u: goto label_4ad540;
        case 0x4ad544u: goto label_4ad544;
        case 0x4ad548u: goto label_4ad548;
        case 0x4ad54cu: goto label_4ad54c;
        case 0x4ad550u: goto label_4ad550;
        case 0x4ad554u: goto label_4ad554;
        case 0x4ad558u: goto label_4ad558;
        case 0x4ad55cu: goto label_4ad55c;
        case 0x4ad560u: goto label_4ad560;
        case 0x4ad564u: goto label_4ad564;
        case 0x4ad568u: goto label_4ad568;
        case 0x4ad56cu: goto label_4ad56c;
        case 0x4ad570u: goto label_4ad570;
        case 0x4ad574u: goto label_4ad574;
        case 0x4ad578u: goto label_4ad578;
        case 0x4ad57cu: goto label_4ad57c;
        case 0x4ad580u: goto label_4ad580;
        case 0x4ad584u: goto label_4ad584;
        case 0x4ad588u: goto label_4ad588;
        case 0x4ad58cu: goto label_4ad58c;
        case 0x4ad590u: goto label_4ad590;
        case 0x4ad594u: goto label_4ad594;
        case 0x4ad598u: goto label_4ad598;
        case 0x4ad59cu: goto label_4ad59c;
        case 0x4ad5a0u: goto label_4ad5a0;
        case 0x4ad5a4u: goto label_4ad5a4;
        case 0x4ad5a8u: goto label_4ad5a8;
        case 0x4ad5acu: goto label_4ad5ac;
        case 0x4ad5b0u: goto label_4ad5b0;
        case 0x4ad5b4u: goto label_4ad5b4;
        case 0x4ad5b8u: goto label_4ad5b8;
        case 0x4ad5bcu: goto label_4ad5bc;
        case 0x4ad5c0u: goto label_4ad5c0;
        case 0x4ad5c4u: goto label_4ad5c4;
        case 0x4ad5c8u: goto label_4ad5c8;
        case 0x4ad5ccu: goto label_4ad5cc;
        case 0x4ad5d0u: goto label_4ad5d0;
        case 0x4ad5d4u: goto label_4ad5d4;
        case 0x4ad5d8u: goto label_4ad5d8;
        case 0x4ad5dcu: goto label_4ad5dc;
        case 0x4ad5e0u: goto label_4ad5e0;
        case 0x4ad5e4u: goto label_4ad5e4;
        case 0x4ad5e8u: goto label_4ad5e8;
        case 0x4ad5ecu: goto label_4ad5ec;
        case 0x4ad5f0u: goto label_4ad5f0;
        case 0x4ad5f4u: goto label_4ad5f4;
        case 0x4ad5f8u: goto label_4ad5f8;
        case 0x4ad5fcu: goto label_4ad5fc;
        case 0x4ad600u: goto label_4ad600;
        case 0x4ad604u: goto label_4ad604;
        case 0x4ad608u: goto label_4ad608;
        case 0x4ad60cu: goto label_4ad60c;
        case 0x4ad610u: goto label_4ad610;
        case 0x4ad614u: goto label_4ad614;
        case 0x4ad618u: goto label_4ad618;
        case 0x4ad61cu: goto label_4ad61c;
        case 0x4ad620u: goto label_4ad620;
        case 0x4ad624u: goto label_4ad624;
        case 0x4ad628u: goto label_4ad628;
        case 0x4ad62cu: goto label_4ad62c;
        case 0x4ad630u: goto label_4ad630;
        case 0x4ad634u: goto label_4ad634;
        case 0x4ad638u: goto label_4ad638;
        case 0x4ad63cu: goto label_4ad63c;
        case 0x4ad640u: goto label_4ad640;
        case 0x4ad644u: goto label_4ad644;
        case 0x4ad648u: goto label_4ad648;
        case 0x4ad64cu: goto label_4ad64c;
        case 0x4ad650u: goto label_4ad650;
        case 0x4ad654u: goto label_4ad654;
        case 0x4ad658u: goto label_4ad658;
        case 0x4ad65cu: goto label_4ad65c;
        case 0x4ad660u: goto label_4ad660;
        case 0x4ad664u: goto label_4ad664;
        case 0x4ad668u: goto label_4ad668;
        case 0x4ad66cu: goto label_4ad66c;
        case 0x4ad670u: goto label_4ad670;
        case 0x4ad674u: goto label_4ad674;
        case 0x4ad678u: goto label_4ad678;
        case 0x4ad67cu: goto label_4ad67c;
        case 0x4ad680u: goto label_4ad680;
        case 0x4ad684u: goto label_4ad684;
        case 0x4ad688u: goto label_4ad688;
        case 0x4ad68cu: goto label_4ad68c;
        case 0x4ad690u: goto label_4ad690;
        case 0x4ad694u: goto label_4ad694;
        case 0x4ad698u: goto label_4ad698;
        case 0x4ad69cu: goto label_4ad69c;
        case 0x4ad6a0u: goto label_4ad6a0;
        case 0x4ad6a4u: goto label_4ad6a4;
        case 0x4ad6a8u: goto label_4ad6a8;
        case 0x4ad6acu: goto label_4ad6ac;
        case 0x4ad6b0u: goto label_4ad6b0;
        case 0x4ad6b4u: goto label_4ad6b4;
        case 0x4ad6b8u: goto label_4ad6b8;
        case 0x4ad6bcu: goto label_4ad6bc;
        case 0x4ad6c0u: goto label_4ad6c0;
        case 0x4ad6c4u: goto label_4ad6c4;
        case 0x4ad6c8u: goto label_4ad6c8;
        case 0x4ad6ccu: goto label_4ad6cc;
        case 0x4ad6d0u: goto label_4ad6d0;
        case 0x4ad6d4u: goto label_4ad6d4;
        case 0x4ad6d8u: goto label_4ad6d8;
        case 0x4ad6dcu: goto label_4ad6dc;
        case 0x4ad6e0u: goto label_4ad6e0;
        case 0x4ad6e4u: goto label_4ad6e4;
        case 0x4ad6e8u: goto label_4ad6e8;
        case 0x4ad6ecu: goto label_4ad6ec;
        case 0x4ad6f0u: goto label_4ad6f0;
        case 0x4ad6f4u: goto label_4ad6f4;
        case 0x4ad6f8u: goto label_4ad6f8;
        case 0x4ad6fcu: goto label_4ad6fc;
        case 0x4ad700u: goto label_4ad700;
        case 0x4ad704u: goto label_4ad704;
        case 0x4ad708u: goto label_4ad708;
        case 0x4ad70cu: goto label_4ad70c;
        case 0x4ad710u: goto label_4ad710;
        case 0x4ad714u: goto label_4ad714;
        case 0x4ad718u: goto label_4ad718;
        case 0x4ad71cu: goto label_4ad71c;
        case 0x4ad720u: goto label_4ad720;
        case 0x4ad724u: goto label_4ad724;
        case 0x4ad728u: goto label_4ad728;
        case 0x4ad72cu: goto label_4ad72c;
        case 0x4ad730u: goto label_4ad730;
        case 0x4ad734u: goto label_4ad734;
        case 0x4ad738u: goto label_4ad738;
        case 0x4ad73cu: goto label_4ad73c;
        case 0x4ad740u: goto label_4ad740;
        case 0x4ad744u: goto label_4ad744;
        case 0x4ad748u: goto label_4ad748;
        case 0x4ad74cu: goto label_4ad74c;
        case 0x4ad750u: goto label_4ad750;
        case 0x4ad754u: goto label_4ad754;
        case 0x4ad758u: goto label_4ad758;
        case 0x4ad75cu: goto label_4ad75c;
        case 0x4ad760u: goto label_4ad760;
        case 0x4ad764u: goto label_4ad764;
        case 0x4ad768u: goto label_4ad768;
        case 0x4ad76cu: goto label_4ad76c;
        default: break;
    }

    ctx->pc = 0x4ad510u;

label_4ad510:
    // 0x4ad510: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4ad510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4ad514:
    // 0x4ad514: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x4ad514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_4ad518:
    // 0x4ad518: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4ad518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_4ad51c:
    // 0x4ad51c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4ad51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_4ad520:
    // 0x4ad520: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4ad520u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ad524:
    // 0x4ad524: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x4ad524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_4ad528:
    // 0x4ad528: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4ad528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_4ad52c:
    // 0x4ad52c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x4ad52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_4ad530:
    // 0x4ad530: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4ad530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_4ad534:
    // 0x4ad534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ad534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4ad538:
    // 0x4ad538: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4ad538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4ad53c:
    // 0x4ad53c: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x4ad53cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
label_4ad540:
    // 0x4ad540: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4ad544:
    if (ctx->pc == 0x4AD544u) {
        ctx->pc = 0x4AD544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD540u;
        // 0x4ad544: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD548u;
        goto label_4ad548;
    }
    ctx->pc = 0x4AD540u;
    {
        const bool branch_taken_0x4ad540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD540u;
        // 0x4ad544: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad540) {
            ctx->pc = 0x4AD550u;
            goto label_4ad550;
        }
    }
    ctx->pc = 0x4AD548u;
label_4ad548:
    // 0x4ad548: 0x10000007  b           . + 4 + (0x7 << 2)
label_4ad54c:
    if (ctx->pc == 0x4AD54Cu) {
        ctx->pc = 0x4AD54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD548u;
        // 0x4ad54c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD550u;
        goto label_4ad550;
    }
    ctx->pc = 0x4AD548u;
    {
        const bool branch_taken_0x4ad548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD548u;
        // 0x4ad54c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad548) {
            ctx->pc = 0x4AD568u;
            goto label_4ad568;
        }
    }
    ctx->pc = 0x4AD550u;
label_4ad550:
    // 0x4ad550: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4ad550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4ad554:
    // 0x4ad554: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_4ad558:
    if (ctx->pc == 0x4AD558u) {
        ctx->pc = 0x4AD558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD554u;
        // 0x4ad558: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD55Cu;
        goto label_4ad55c;
    }
    ctx->pc = 0x4AD554u;
    {
        const bool branch_taken_0x4ad554 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD554u;
        // 0x4ad558: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad554) {
            ctx->pc = 0x4AD568u;
            goto label_4ad568;
        }
    }
    ctx->pc = 0x4AD55Cu;
label_4ad55c:
    // 0x4ad55c: 0xc12b652  jal         func_4AD948
label_4ad560:
    if (ctx->pc == 0x4AD560u) {
        ctx->pc = 0x4AD564u;
        goto label_4ad564;
    }
    ctx->pc = 0x4AD55Cu;
    SET_GPR_U32(ctx, 31, 0x4AD564u);
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4AD55Cu, 0x4AD564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD564u;
label_4ad564:
    // 0x4ad564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ad564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ad568:
    // 0x4ad568: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_4ad56c:
    if (ctx->pc == 0x4AD56Cu) {
        ctx->pc = 0x4AD56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD568u;
        // 0x4ad56c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD570u;
        goto label_4ad570;
    }
    ctx->pc = 0x4AD568u;
    {
        const bool branch_taken_0x4ad568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD568u;
        // 0x4ad56c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad568) {
            ctx->pc = 0x4AD668u;
            goto label_4ad668;
        }
    }
    ctx->pc = 0x4AD570u;
label_4ad570:
    // 0x4ad570: 0x16a00004  bnez        $s5, . + 4 + (0x4 << 2)
label_4ad574:
    if (ctx->pc == 0x4AD574u) {
        ctx->pc = 0x4AD574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD570u;
        // 0x4ad574: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD578u;
        goto label_4ad578;
    }
    ctx->pc = 0x4AD570u;
    {
        const bool branch_taken_0x4ad570 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AD574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD570u;
        // 0x4ad574: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad570) {
            ctx->pc = 0x4AD584u;
            goto label_4ad584;
        }
    }
    ctx->pc = 0x4AD578u;
label_4ad578:
    // 0x4ad578: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4ad578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_4ad57c:
    // 0x4ad57c: 0x24550458  addiu       $s5, $v0, 0x458
    ctx->pc = 0x4ad57cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1112));
label_4ad580:
    // 0x4ad580: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4ad580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4ad584:
    // 0x4ad584: 0xc10c3ac  jal         func_430EB0
label_4ad588:
    if (ctx->pc == 0x4AD588u) {
        ctx->pc = 0x4AD588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD584u;
        // 0x4ad588: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD58Cu;
        goto label_4ad58c;
    }
    ctx->pc = 0x4AD584u;
    SET_GPR_U32(ctx, 31, 0x4AD58Cu);
    ctx->pc = 0x4AD588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD584u;
    // 0x4ad588: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x4AD584u, 0x4AD58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD58Cu;
label_4ad58c:
    // 0x4ad58c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4ad58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4ad590:
    // 0x4ad590: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4ad590u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ad594:
    // 0x4ad594: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4ad594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4ad598:
    // 0x4ad598: 0xdc640010  ld          $a0, 0x10($v1)
    ctx->pc = 0x4ad598u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_4ad59c:
    // 0x4ad59c: 0x532823  subu        $a1, $v0, $s3
    ctx->pc = 0x4ad59cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_4ad5a0:
    // 0x4ad5a0: 0x80760018  lb          $s6, 0x18($v1)
    ctx->pc = 0x4ad5a0u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
label_4ad5a4:
    // 0x4ad5a4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x4ad5a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4ad5a8:
    // 0x4ad5a8: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x4ad5a8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4ad5ac:
    // 0x4ad5ac: 0xa2880b  movn        $s1, $a1, $v0
    ctx->pc = 0x4ad5acu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
label_4ad5b0:
    // 0x4ad5b0: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x4ad5b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_4ad5b4:
    // 0x4ad5b4: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_4ad5b8:
    if (ctx->pc == 0x4AD5B8u) {
        ctx->pc = 0x4AD5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD5B4u;
        // 0x4ad5b8: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD5BCu;
        goto label_4ad5bc;
    }
    ctx->pc = 0x4AD5B4u;
    {
        const bool branch_taken_0x4ad5b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AD5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD5B4u;
        // 0x4ad5b8: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad5b4) {
            ctx->pc = 0x4AD5DCu;
            goto label_4ad5dc;
        }
    }
    ctx->pc = 0x4AD5BCu;
label_4ad5bc:
    // 0x4ad5bc: 0x1a200007  blez        $s1, . + 4 + (0x7 << 2)
label_4ad5c0:
    if (ctx->pc == 0x4AD5C0u) {
        ctx->pc = 0x4AD5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD5BCu;
        // 0x4ad5c0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD5C4u;
        goto label_4ad5c4;
    }
    ctx->pc = 0x4AD5BCu;
    {
        const bool branch_taken_0x4ad5bc = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x4AD5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD5BCu;
        // 0x4ad5c0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad5bc) {
            ctx->pc = 0x4AD5DCu;
            goto label_4ad5dc;
        }
    }
    ctx->pc = 0x4AD5C4u;
label_4ad5c4:
    // 0x4ad5c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4ad5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ad5c8:
    // 0x4ad5c8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4ad5c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4ad5cc:
    // 0x4ad5cc: 0xc12ca06  jal         func_4B2818
label_4ad5d0:
    if (ctx->pc == 0x4AD5D0u) {
        ctx->pc = 0x4AD5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD5CCu;
        // 0x4ad5d0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD5D4u;
        goto label_4ad5d4;
    }
    ctx->pc = 0x4AD5CCu;
    SET_GPR_U32(ctx, 31, 0x4AD5D4u);
    ctx->pc = 0x4AD5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD5CCu;
    // 0x4ad5d0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2818u, 0x4AD5CCu, 0x4AD5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD5D4u;
label_4ad5d4:
    // 0x4ad5d4: 0x54500009  bnel        $v0, $s0, . + 4 + (0x9 << 2)
label_4ad5d8:
    if (ctx->pc == 0x4AD5D8u) {
        ctx->pc = 0x4AD5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD5D4u;
        // 0x4ad5d8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD5DCu;
        goto label_4ad5dc;
    }
    ctx->pc = 0x4AD5D4u;
    {
        const bool branch_taken_0x4ad5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x4ad5d4) {
            ctx->pc = 0x4AD5D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AD5D4u;
            // 0x4ad5d8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AD5FCu;
            goto label_4ad5fc;
        }
    }
    ctx->pc = 0x4AD5DCu;
label_4ad5dc:
    // 0x4ad5dc: 0x8e830050  lw          $v1, 0x50($s4)
    ctx->pc = 0x4ad5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_4ad5e0:
    // 0x4ad5e0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4ad5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4ad5e4:
    // 0x4ad5e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4ad5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ad5e8:
    // 0x4ad5e8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4ad5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4ad5ec:
    // 0x4ad5ec: 0x40f809  jalr        $v0
label_4ad5f0:
    if (ctx->pc == 0x4AD5F0u) {
        ctx->pc = 0x4AD5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD5ECu;
        // 0x4ad5f0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD5F4u;
        goto label_4ad5f4;
    }
    ctx->pc = 0x4AD5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4AD5F4u);
        ctx->pc = 0x4AD5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD5ECu;
        // 0x4ad5f0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD5ECu, 0x4AD5F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4AD5F4u;
label_4ad5f4:
    // 0x4ad5f4: 0x10530005  beq         $v0, $s3, . + 4 + (0x5 << 2)
label_4ad5f8:
    if (ctx->pc == 0x4AD5F8u) {
        ctx->pc = 0x4AD5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD5F4u;
        // 0x4ad5f8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD5FCu;
        goto label_4ad5fc;
    }
    ctx->pc = 0x4AD5F4u;
    {
        const bool branch_taken_0x4ad5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x4AD5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD5F4u;
        // 0x4ad5f8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad5f4) {
            ctx->pc = 0x4AD60Cu;
            goto label_4ad60c;
        }
    }
    ctx->pc = 0x4AD5FCu;
label_4ad5fc:
    // 0x4ad5fc: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4ad5fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
label_4ad600:
    // 0x4ad600: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4ad600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_4ad604:
    // 0x4ad604: 0x10000017  b           . + 4 + (0x17 << 2)
label_4ad608:
    if (ctx->pc == 0x4AD608u) {
        ctx->pc = 0x4AD608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD604u;
        // 0x4ad608: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD60Cu;
        goto label_4ad60c;
    }
    ctx->pc = 0x4AD604u;
    {
        const bool branch_taken_0x4ad604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD604u;
        // 0x4ad608: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad604) {
            ctx->pc = 0x4AD664u;
            goto label_4ad664;
        }
    }
    ctx->pc = 0x4AD60Cu;
label_4ad60c:
    // 0x4ad60c: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x4ad60cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_4ad610:
    // 0x4ad610: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4ad610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_4ad614:
    // 0x4ad614: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_4ad618:
    if (ctx->pc == 0x4AD618u) {
        ctx->pc = 0x4AD618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD614u;
        // 0x4ad618: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD61Cu;
        goto label_4ad61c;
    }
    ctx->pc = 0x4AD614u;
    {
        const bool branch_taken_0x4ad614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ad614) {
            ctx->pc = 0x4AD618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AD614u;
            // 0x4ad618: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AD650u;
            goto label_4ad650;
        }
    }
    ctx->pc = 0x4AD61Cu;
label_4ad61c:
    // 0x4ad61c: 0x1a20000b  blez        $s1, . + 4 + (0xB << 2)
label_4ad620:
    if (ctx->pc == 0x4AD620u) {
        ctx->pc = 0x4AD620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD61Cu;
        // 0x4ad620: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD624u;
        goto label_4ad624;
    }
    ctx->pc = 0x4AD61Cu;
    {
        const bool branch_taken_0x4ad61c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x4AD620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD61Cu;
        // 0x4ad620: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad61c) {
            ctx->pc = 0x4AD64Cu;
            goto label_4ad64c;
        }
    }
    ctx->pc = 0x4AD624u;
label_4ad624:
    // 0x4ad624: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4ad624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ad628:
    // 0x4ad628: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4ad628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4ad62c:
    // 0x4ad62c: 0xc12ca06  jal         func_4B2818
label_4ad630:
    if (ctx->pc == 0x4AD630u) {
        ctx->pc = 0x4AD630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD62Cu;
        // 0x4ad630: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD634u;
        goto label_4ad634;
    }
    ctx->pc = 0x4AD62Cu;
    SET_GPR_U32(ctx, 31, 0x4AD634u);
    ctx->pc = 0x4AD630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD62Cu;
    // 0x4ad630: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2818u, 0x4AD62Cu, 0x4AD634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD634u;
label_4ad634:
    // 0x4ad634: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
label_4ad638:
    if (ctx->pc == 0x4AD638u) {
        ctx->pc = 0x4AD638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD634u;
        // 0x4ad638: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD63Cu;
        goto label_4ad63c;
    }
    ctx->pc = 0x4AD634u;
    {
        const bool branch_taken_0x4ad634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x4AD638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD634u;
        // 0x4ad638: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad634) {
            ctx->pc = 0x4AD64Cu;
            goto label_4ad64c;
        }
    }
    ctx->pc = 0x4AD63Cu;
label_4ad63c:
    // 0x4ad63c: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4ad63cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
label_4ad640:
    // 0x4ad640: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4ad640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_4ad644:
    // 0x4ad644: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x4ad644u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_4ad648:
    // 0x4ad648: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4ad648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4ad64c:
    // 0x4ad64c: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x4ad64cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_4ad650:
    // 0x4ad650: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x4ad650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
label_4ad654:
    // 0x4ad654: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4ad658:
    if (ctx->pc == 0x4AD658u) {
        ctx->pc = 0x4AD658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD654u;
        // 0x4ad658: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD65Cu;
        goto label_4ad65c;
    }
    ctx->pc = 0x4AD654u;
    {
        const bool branch_taken_0x4ad654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD654u;
        // 0x4ad658: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad654) {
            ctx->pc = 0x4AD668u;
            goto label_4ad668;
        }
    }
    ctx->pc = 0x4AD65Cu;
label_4ad65c:
    // 0x4ad65c: 0xc12b70a  jal         func_4ADC28
label_4ad660:
    if (ctx->pc == 0x4AD660u) {
        ctx->pc = 0x4AD660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD65Cu;
        // 0x4ad660: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD664u;
        goto label_4ad664;
    }
    ctx->pc = 0x4AD65Cu;
    SET_GPR_U32(ctx, 31, 0x4AD664u);
    ctx->pc = 0x4AD660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD65Cu;
    // 0x4ad660: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADC28u, 0x4AD65Cu, 0x4AD664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD664u;
label_4ad664:
    // 0x4ad664: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4ad664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ad668:
    // 0x4ad668: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4ad668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4ad66c:
    // 0x4ad66c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x4ad66cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4ad670:
    // 0x4ad670: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x4ad670u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4ad674:
    // 0x4ad674: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4ad674u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4ad678:
    // 0x4ad678: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x4ad678u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4ad67c:
    // 0x4ad67c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4ad67cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4ad680:
    // 0x4ad680: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4ad680u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4ad684:
    // 0x4ad684: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ad684u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ad688:
    // 0x4ad688: 0x3e00008  jr          $ra
label_4ad68c:
    if (ctx->pc == 0x4AD68Cu) {
        ctx->pc = 0x4AD68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD688u;
        // 0x4ad68c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD690u;
        goto label_4ad690;
    }
    ctx->pc = 0x4AD688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD688u;
        // 0x4ad68c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD690u;
label_4ad690:
    // 0x4ad690: 0x27bdfbb0  addiu       $sp, $sp, -0x450
    ctx->pc = 0x4ad690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966192));
label_4ad694:
    // 0x4ad694: 0xffb30430  sd          $s3, 0x430($sp)
    ctx->pc = 0x4ad694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 19));
label_4ad698:
    // 0x4ad698: 0xffb20420  sd          $s2, 0x420($sp)
    ctx->pc = 0x4ad698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 18));
label_4ad69c:
    // 0x4ad69c: 0xffbf0440  sd          $ra, 0x440($sp)
    ctx->pc = 0x4ad69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 31));
label_4ad6a0:
    // 0x4ad6a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4ad6a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ad6a4:
    // 0x4ad6a4: 0xffb10410  sd          $s1, 0x410($sp)
    ctx->pc = 0x4ad6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 17));
label_4ad6a8:
    // 0x4ad6a8: 0xffb00400  sd          $s0, 0x400($sp)
    ctx->pc = 0x4ad6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 16));
label_4ad6ac:
    // 0x4ad6ac: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4ad6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4ad6b0:
    // 0x4ad6b0: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x4ad6b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
label_4ad6b4:
    // 0x4ad6b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4ad6b8:
    if (ctx->pc == 0x4AD6B8u) {
        ctx->pc = 0x4AD6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD6B4u;
        // 0x4ad6b8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD6BCu;
        goto label_4ad6bc;
    }
    ctx->pc = 0x4AD6B4u;
    {
        const bool branch_taken_0x4ad6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD6B4u;
        // 0x4ad6b8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad6b4) {
            ctx->pc = 0x4AD6C4u;
            goto label_4ad6c4;
        }
    }
    ctx->pc = 0x4AD6BCu;
label_4ad6bc:
    // 0x4ad6bc: 0x10000007  b           . + 4 + (0x7 << 2)
label_4ad6c0:
    if (ctx->pc == 0x4AD6C0u) {
        ctx->pc = 0x4AD6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD6BCu;
        // 0x4ad6c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD6C4u;
        goto label_4ad6c4;
    }
    ctx->pc = 0x4AD6BCu;
    {
        const bool branch_taken_0x4ad6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD6BCu;
        // 0x4ad6c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad6bc) {
            ctx->pc = 0x4AD6DCu;
            goto label_4ad6dc;
        }
    }
    ctx->pc = 0x4AD6C4u;
label_4ad6c4:
    // 0x4ad6c4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4ad6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4ad6c8:
    // 0x4ad6c8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_4ad6cc:
    if (ctx->pc == 0x4AD6CCu) {
        ctx->pc = 0x4AD6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD6C8u;
        // 0x4ad6cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD6D0u;
        goto label_4ad6d0;
    }
    ctx->pc = 0x4AD6C8u;
    {
        const bool branch_taken_0x4ad6c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD6C8u;
        // 0x4ad6cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad6c8) {
            ctx->pc = 0x4AD6DCu;
            goto label_4ad6dc;
        }
    }
    ctx->pc = 0x4AD6D0u;
label_4ad6d0:
    // 0x4ad6d0: 0xc12b652  jal         func_4AD948
label_4ad6d4:
    if (ctx->pc == 0x4AD6D4u) {
        ctx->pc = 0x4AD6D8u;
        goto label_4ad6d8;
    }
    ctx->pc = 0x4AD6D0u;
    SET_GPR_U32(ctx, 31, 0x4AD6D8u);
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4AD6D0u, 0x4AD6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD6D8u;
label_4ad6d8:
    // 0x4ad6d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ad6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ad6dc:
    // 0x4ad6dc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_4ad6e0:
    if (ctx->pc == 0x4AD6E0u) {
        ctx->pc = 0x4AD6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD6DCu;
        // 0x4ad6e0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD6E4u;
        goto label_4ad6e4;
    }
    ctx->pc = 0x4AD6DCu;
    {
        const bool branch_taken_0x4ad6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD6DCu;
        // 0x4ad6e0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad6dc) {
            ctx->pc = 0x4AD754u;
            goto label_4ad754;
        }
    }
    ctx->pc = 0x4AD6E4u;
label_4ad6e4:
    // 0x4ad6e4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4ad6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4ad6e8:
    // 0x4ad6e8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x4ad6e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4ad6ec:
    // 0x4ad6ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4ad6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4ad6f0:
    // 0x4ad6f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4ad6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4ad6f4:
    // 0x4ad6f4: 0xc12c432  jal         func_4B10C8
label_4ad6f8:
    if (ctx->pc == 0x4AD6F8u) {
        ctx->pc = 0x4AD6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD6F4u;
        // 0x4ad6f8: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD6FCu;
        goto label_4ad6fc;
    }
    ctx->pc = 0x4AD6F4u;
    SET_GPR_U32(ctx, 31, 0x4AD6FCu);
    ctx->pc = 0x4AD6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD6F4u;
    // 0x4ad6f8: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B10C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B10C8u, 0x4AD6F4u, 0x4AD6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD6FCu;
label_4ad6fc:
    // 0x4ad6fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ad6fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ad700:
    // 0x4ad700: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_4ad704:
    if (ctx->pc == 0x4AD704u) {
        ctx->pc = 0x4AD704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD700u;
        // 0x4ad704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD708u;
        goto label_4ad708;
    }
    ctx->pc = 0x4AD700u;
    {
        const bool branch_taken_0x4ad700 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD700u;
        // 0x4ad704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad700) {
            ctx->pc = 0x4AD734u;
            goto label_4ad734;
        }
    }
    ctx->pc = 0x4AD708u;
label_4ad708:
    // 0x4ad708: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x4ad708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4ad70c:
    // 0x4ad70c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4ad70cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4ad710:
    // 0x4ad710: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4ad710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4ad714:
    // 0x4ad714: 0x40f809  jalr        $v0
label_4ad718:
    if (ctx->pc == 0x4AD718u) {
        ctx->pc = 0x4AD718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD714u;
        // 0x4ad718: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD71Cu;
        goto label_4ad71c;
    }
    ctx->pc = 0x4AD714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4AD71Cu);
        ctx->pc = 0x4AD718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD714u;
        // 0x4ad718: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD714u, 0x4AD71Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4AD71Cu;
label_4ad71c:
    // 0x4ad71c: 0x1050fff4  beq         $v0, $s0, . + 4 + (-0xC << 2)
label_4ad720:
    if (ctx->pc == 0x4AD720u) {
        ctx->pc = 0x4AD720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD71Cu;
        // 0x4ad720: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD724u;
        goto label_4ad724;
    }
    ctx->pc = 0x4AD71Cu;
    {
        const bool branch_taken_0x4ad71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x4AD720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD71Cu;
        // 0x4ad720: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad71c) {
            ctx->pc = 0x4AD6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ad6f0;
        }
    }
    ctx->pc = 0x4AD724u;
label_4ad724:
    // 0x4ad724: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4ad724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4ad728:
    // 0x4ad728: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4ad728u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
label_4ad72c:
    // 0x4ad72c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4ad72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_4ad730:
    // 0x4ad730: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x4ad730u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_4ad734:
    // 0x4ad734: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4ad734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4ad738:
    // 0x4ad738: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x4ad738u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_4ad73c:
    // 0x4ad73c: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x4ad73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
label_4ad740:
    // 0x4ad740: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4ad744:
    if (ctx->pc == 0x4AD744u) {
        ctx->pc = 0x4AD744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD740u;
        // 0x4ad744: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD748u;
        goto label_4ad748;
    }
    ctx->pc = 0x4AD740u;
    {
        const bool branch_taken_0x4ad740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD740u;
        // 0x4ad744: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad740) {
            ctx->pc = 0x4AD754u;
            goto label_4ad754;
        }
    }
    ctx->pc = 0x4AD748u;
label_4ad748:
    // 0x4ad748: 0xc12b70a  jal         func_4ADC28
label_4ad74c:
    if (ctx->pc == 0x4AD74Cu) {
        ctx->pc = 0x4AD74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD748u;
        // 0x4ad74c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD750u;
        goto label_4ad750;
    }
    ctx->pc = 0x4AD748u;
    SET_GPR_U32(ctx, 31, 0x4AD750u);
    ctx->pc = 0x4AD74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD748u;
    // 0x4ad74c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADC28u, 0x4AD748u, 0x4AD750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD750u;
label_4ad750:
    // 0x4ad750: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4ad750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ad754:
    // 0x4ad754: 0xdfbf0440  ld          $ra, 0x440($sp)
    ctx->pc = 0x4ad754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
label_4ad758:
    // 0x4ad758: 0xdfb30430  ld          $s3, 0x430($sp)
    ctx->pc = 0x4ad758u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
label_4ad75c:
    // 0x4ad75c: 0xdfb20420  ld          $s2, 0x420($sp)
    ctx->pc = 0x4ad75cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
label_4ad760:
    // 0x4ad760: 0xdfb10410  ld          $s1, 0x410($sp)
    ctx->pc = 0x4ad760u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_4ad764:
    // 0x4ad764: 0xdfb00400  ld          $s0, 0x400($sp)
    ctx->pc = 0x4ad764u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
label_4ad768:
    // 0x4ad768: 0x3e00008  jr          $ra
label_4ad76c:
    if (ctx->pc == 0x4AD76Cu) {
        ctx->pc = 0x4AD76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD768u;
        // 0x4ad76c: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD770u;
        goto label_fallthrough_0x4ad768;
    }
    ctx->pc = 0x4AD768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD768u;
        // 0x4ad76c: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4ad768:
    ctx->pc = 0x4AD770u;
}
