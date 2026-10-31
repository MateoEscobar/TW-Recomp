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

// Function: sub_003CC510
// Address: 0x3cc510 - 0x3cc650
void sub_003CC510_0x3cc510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CC510_0x3cc510");
#endif

    switch (ctx->pc) {
        case 0x3cc510u: goto label_3cc510;
        case 0x3cc514u: goto label_3cc514;
        case 0x3cc518u: goto label_3cc518;
        case 0x3cc51cu: goto label_3cc51c;
        case 0x3cc520u: goto label_3cc520;
        case 0x3cc524u: goto label_3cc524;
        case 0x3cc528u: goto label_3cc528;
        case 0x3cc52cu: goto label_3cc52c;
        case 0x3cc530u: goto label_3cc530;
        case 0x3cc534u: goto label_3cc534;
        case 0x3cc538u: goto label_3cc538;
        case 0x3cc53cu: goto label_3cc53c;
        case 0x3cc540u: goto label_3cc540;
        case 0x3cc544u: goto label_3cc544;
        case 0x3cc548u: goto label_3cc548;
        case 0x3cc54cu: goto label_3cc54c;
        case 0x3cc550u: goto label_3cc550;
        case 0x3cc554u: goto label_3cc554;
        case 0x3cc558u: goto label_3cc558;
        case 0x3cc55cu: goto label_3cc55c;
        case 0x3cc560u: goto label_3cc560;
        case 0x3cc564u: goto label_3cc564;
        case 0x3cc568u: goto label_3cc568;
        case 0x3cc56cu: goto label_3cc56c;
        case 0x3cc570u: goto label_3cc570;
        case 0x3cc574u: goto label_3cc574;
        case 0x3cc578u: goto label_3cc578;
        case 0x3cc57cu: goto label_3cc57c;
        case 0x3cc580u: goto label_3cc580;
        case 0x3cc584u: goto label_3cc584;
        case 0x3cc588u: goto label_3cc588;
        case 0x3cc58cu: goto label_3cc58c;
        case 0x3cc590u: goto label_3cc590;
        case 0x3cc594u: goto label_3cc594;
        case 0x3cc598u: goto label_3cc598;
        case 0x3cc59cu: goto label_3cc59c;
        case 0x3cc5a0u: goto label_3cc5a0;
        case 0x3cc5a4u: goto label_3cc5a4;
        case 0x3cc5a8u: goto label_3cc5a8;
        case 0x3cc5acu: goto label_3cc5ac;
        case 0x3cc5b0u: goto label_3cc5b0;
        case 0x3cc5b4u: goto label_3cc5b4;
        case 0x3cc5b8u: goto label_3cc5b8;
        case 0x3cc5bcu: goto label_3cc5bc;
        case 0x3cc5c0u: goto label_3cc5c0;
        case 0x3cc5c4u: goto label_3cc5c4;
        case 0x3cc5c8u: goto label_3cc5c8;
        case 0x3cc5ccu: goto label_3cc5cc;
        case 0x3cc5d0u: goto label_3cc5d0;
        case 0x3cc5d4u: goto label_3cc5d4;
        case 0x3cc5d8u: goto label_3cc5d8;
        case 0x3cc5dcu: goto label_3cc5dc;
        case 0x3cc5e0u: goto label_3cc5e0;
        case 0x3cc5e4u: goto label_3cc5e4;
        case 0x3cc5e8u: goto label_3cc5e8;
        case 0x3cc5ecu: goto label_3cc5ec;
        case 0x3cc5f0u: goto label_3cc5f0;
        case 0x3cc5f4u: goto label_3cc5f4;
        case 0x3cc5f8u: goto label_3cc5f8;
        case 0x3cc5fcu: goto label_3cc5fc;
        case 0x3cc600u: goto label_3cc600;
        case 0x3cc604u: goto label_3cc604;
        case 0x3cc608u: goto label_3cc608;
        case 0x3cc60cu: goto label_3cc60c;
        case 0x3cc610u: goto label_3cc610;
        case 0x3cc614u: goto label_3cc614;
        case 0x3cc618u: goto label_3cc618;
        case 0x3cc61cu: goto label_3cc61c;
        case 0x3cc620u: goto label_3cc620;
        case 0x3cc624u: goto label_3cc624;
        case 0x3cc628u: goto label_3cc628;
        case 0x3cc62cu: goto label_3cc62c;
        case 0x3cc630u: goto label_3cc630;
        case 0x3cc634u: goto label_3cc634;
        case 0x3cc638u: goto label_3cc638;
        case 0x3cc63cu: goto label_3cc63c;
        case 0x3cc640u: goto label_3cc640;
        case 0x3cc644u: goto label_3cc644;
        case 0x3cc648u: goto label_3cc648;
        case 0x3cc64cu: goto label_3cc64c;
        default: break;
    }

    ctx->pc = 0x3cc510u;

label_3cc510:
    // 0x3cc510: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3cc510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3cc514:
    // 0x3cc514: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3cc514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3cc518:
    // 0x3cc518: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3cc518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3cc51c:
    // 0x3cc51c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3cc51cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3cc520:
    // 0x3cc520: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3cc520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3cc524:
    // 0x3cc524: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3cc524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3cc528:
    // 0x3cc528: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3cc528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3cc52c:
    // 0x3cc52c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3cc52cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cc530:
    // 0x3cc530: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3cc530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3cc534:
    // 0x3cc534: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3cc534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3cc538:
    // 0x3cc538: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3cc538u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3cc53c:
    // 0x3cc53c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3cc53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3cc540:
    // 0x3cc540: 0x40f809  jalr        $v0
label_3cc544:
    if (ctx->pc == 0x3CC544u) {
        ctx->pc = 0x3CC544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC540u;
        // 0x3cc544: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC548u;
        goto label_3cc548;
    }
    ctx->pc = 0x3CC540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CC548u);
        ctx->pc = 0x3CC544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC540u;
        // 0x3cc544: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC540u, 0x3CC548u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CC548u;
label_3cc548:
    // 0x3cc548: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3cc548u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cc54c:
    // 0x3cc54c: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3cc54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3cc550:
    // 0x3cc550: 0x1202001e  beq         $s0, $v0, . + 4 + (0x1E << 2)
label_3cc554:
    if (ctx->pc == 0x3CC554u) {
        ctx->pc = 0x3CC554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC550u;
        // 0x3cc554: 0x2e020016  sltiu       $v0, $s0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC558u;
        goto label_3cc558;
    }
    ctx->pc = 0x3CC550u;
    {
        const bool branch_taken_0x3cc550 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3CC554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC550u;
        // 0x3cc554: 0x2e020016  sltiu       $v0, $s0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc550) {
            ctx->pc = 0x3CC5CCu;
            goto label_3cc5cc;
        }
    }
    ctx->pc = 0x3CC558u;
label_3cc558:
    // 0x3cc558: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3cc55c:
    if (ctx->pc == 0x3CC55Cu) {
        ctx->pc = 0x3CC55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC558u;
        // 0x3cc55c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC560u;
        goto label_3cc560;
    }
    ctx->pc = 0x3CC558u;
    {
        const bool branch_taken_0x3cc558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC558u;
        // 0x3cc55c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc558) {
            ctx->pc = 0x3CC570u;
            goto label_3cc570;
        }
    }
    ctx->pc = 0x3CC560u;
label_3cc560:
    // 0x3cc560: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_3cc564:
    if (ctx->pc == 0x3CC564u) {
        ctx->pc = 0x3CC564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC560u;
        // 0x3cc564: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC568u;
        goto label_3cc568;
    }
    ctx->pc = 0x3CC560u;
    {
        const bool branch_taken_0x3cc560 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3CC564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC560u;
        // 0x3cc564: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc560) {
            ctx->pc = 0x3CC584u;
            goto label_3cc584;
        }
    }
    ctx->pc = 0x3CC568u;
label_3cc568:
    // 0x3cc568: 0x10000033  b           . + 4 + (0x33 << 2)
label_3cc56c:
    if (ctx->pc == 0x3CC56Cu) {
        ctx->pc = 0x3CC56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC568u;
        // 0x3cc56c: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC570u;
        goto label_3cc570;
    }
    ctx->pc = 0x3CC568u;
    {
        const bool branch_taken_0x3cc568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC568u;
        // 0x3cc56c: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc568) {
            ctx->pc = 0x3CC638u;
            goto label_3cc638;
        }
    }
    ctx->pc = 0x3CC570u;
label_3cc570:
    // 0x3cc570: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3cc570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3cc574:
    // 0x3cc574: 0x1202001c  beq         $s0, $v0, . + 4 + (0x1C << 2)
label_3cc578:
    if (ctx->pc == 0x3CC578u) {
        ctx->pc = 0x3CC578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC574u;
        // 0x3cc578: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC57Cu;
        goto label_3cc57c;
    }
    ctx->pc = 0x3CC574u;
    {
        const bool branch_taken_0x3cc574 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3CC578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC574u;
        // 0x3cc578: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc574) {
            ctx->pc = 0x3CC5E8u;
            goto label_3cc5e8;
        }
    }
    ctx->pc = 0x3CC57Cu;
label_3cc57c:
    // 0x3cc57c: 0x1000002e  b           . + 4 + (0x2E << 2)
label_3cc580:
    if (ctx->pc == 0x3CC580u) {
        ctx->pc = 0x3CC580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC57Cu;
        // 0x3cc580: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC584u;
        goto label_3cc584;
    }
    ctx->pc = 0x3CC57Cu;
    {
        const bool branch_taken_0x3cc57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC57Cu;
        // 0x3cc580: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc57c) {
            ctx->pc = 0x3CC638u;
            goto label_3cc638;
        }
    }
    ctx->pc = 0x3CC584u;
label_3cc584:
    // 0x3cc584: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3cc584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3cc588:
    // 0x3cc588: 0xc0ea12a  jal         func_3A84A8
label_3cc58c:
    if (ctx->pc == 0x3CC58Cu) {
        ctx->pc = 0x3CC58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC588u;
        // 0x3cc58c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC590u;
        goto label_3cc590;
    }
    ctx->pc = 0x3CC588u;
    SET_GPR_U32(ctx, 31, 0x3CC590u);
    ctx->pc = 0x3CC58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC588u;
    // 0x3cc58c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3CC588u, 0x3CC590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC590u;
label_3cc590:
    // 0x3cc590: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3cc590u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cc594:
    // 0x3cc594: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3cc594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3cc598:
    // 0x3cc598: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3cc598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cc59c:
    // 0x3cc59c: 0xc0ea12a  jal         func_3A84A8
label_3cc5a0:
    if (ctx->pc == 0x3CC5A0u) {
        ctx->pc = 0x3CC5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC59Cu;
        // 0x3cc5a0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC5A4u;
        goto label_3cc5a4;
    }
    ctx->pc = 0x3CC59Cu;
    SET_GPR_U32(ctx, 31, 0x3CC5A4u);
    ctx->pc = 0x3CC5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC59Cu;
    // 0x3cc5a0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3CC59Cu, 0x3CC5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC5A4u;
label_3cc5a4:
    // 0x3cc5a4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3cc5a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cc5a8:
    // 0x3cc5a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cc5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cc5ac:
    // 0x3cc5ac: 0xc0ea146  jal         func_3A8518
label_3cc5b0:
    if (ctx->pc == 0x3CC5B0u) {
        ctx->pc = 0x3CC5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC5ACu;
        // 0x3cc5b0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC5B4u;
        goto label_3cc5b4;
    }
    ctx->pc = 0x3CC5ACu;
    SET_GPR_U32(ctx, 31, 0x3CC5B4u);
    ctx->pc = 0x3CC5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC5ACu;
    // 0x3cc5b0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3CC5ACu, 0x3CC5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC5B4u;
label_3cc5b4:
    // 0x3cc5b4: 0xc0ea146  jal         func_3A8518
label_3cc5b8:
    if (ctx->pc == 0x3CC5B8u) {
        ctx->pc = 0x3CC5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC5B4u;
        // 0x3cc5b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC5BCu;
        goto label_3cc5bc;
    }
    ctx->pc = 0x3CC5B4u;
    SET_GPR_U32(ctx, 31, 0x3CC5BCu);
    ctx->pc = 0x3CC5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC5B4u;
    // 0x3cc5b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3CC5B4u, 0x3CC5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC5BCu;
label_3cc5bc:
    // 0x3cc5bc: 0xc0ea14c  jal         func_3A8530
label_3cc5c0:
    if (ctx->pc == 0x3CC5C0u) {
        ctx->pc = 0x3CC5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC5BCu;
        // 0x3cc5c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC5C4u;
        goto label_3cc5c4;
    }
    ctx->pc = 0x3CC5BCu;
    SET_GPR_U32(ctx, 31, 0x3CC5C4u);
    ctx->pc = 0x3CC5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC5BCu;
    // 0x3cc5c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3CC5BCu, 0x3CC5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC5C4u;
label_3cc5c4:
    // 0x3cc5c4: 0xc0ea14c  jal         func_3A8530
label_3cc5c8:
    if (ctx->pc == 0x3CC5C8u) {
        ctx->pc = 0x3CC5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC5C4u;
        // 0x3cc5c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC5CCu;
        goto label_3cc5cc;
    }
    ctx->pc = 0x3CC5C4u;
    SET_GPR_U32(ctx, 31, 0x3CC5CCu);
    ctx->pc = 0x3CC5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC5C4u;
    // 0x3cc5c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3CC5C4u, 0x3CC5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC5CCu;
label_3cc5cc:
    // 0x3cc5cc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3cc5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3cc5d0:
    // 0x3cc5d0: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3cc5d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3cc5d4:
    // 0x3cc5d4: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3cc5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3cc5d8:
    // 0x3cc5d8: 0x60f809  jalr        $v1
label_3cc5dc:
    if (ctx->pc == 0x3CC5DCu) {
        ctx->pc = 0x3CC5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC5D8u;
        // 0x3cc5dc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC5E0u;
        goto label_3cc5e0;
    }
    ctx->pc = 0x3CC5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CC5E0u);
        ctx->pc = 0x3CC5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC5D8u;
        // 0x3cc5dc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC5D8u, 0x3CC5E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CC5E0u;
label_3cc5e0:
    // 0x3cc5e0: 0x10000014  b           . + 4 + (0x14 << 2)
label_3cc5e4:
    if (ctx->pc == 0x3CC5E4u) {
        ctx->pc = 0x3CC5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC5E0u;
        // 0x3cc5e4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC5E8u;
        goto label_3cc5e8;
    }
    ctx->pc = 0x3CC5E0u;
    {
        const bool branch_taken_0x3cc5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC5E0u;
        // 0x3cc5e4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc5e0) {
            ctx->pc = 0x3CC634u;
            goto label_3cc634;
        }
    }
    ctx->pc = 0x3CC5E8u;
label_3cc5e8:
    // 0x3cc5e8: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x3cc5e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3cc5ec:
    // 0x3cc5ec: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
label_3cc5f0:
    if (ctx->pc == 0x3CC5F0u) {
        ctx->pc = 0x3CC5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC5ECu;
        // 0x3cc5f0: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC5F4u;
        goto label_3cc5f4;
    }
    ctx->pc = 0x3CC5ECu;
    {
        const bool branch_taken_0x3cc5ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC5ECu;
        // 0x3cc5f0: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc5ec) {
            ctx->pc = 0x3CC60Cu;
            goto label_3cc60c;
        }
    }
    ctx->pc = 0x3CC5F4u;
label_3cc5f4:
    // 0x3cc5f4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3cc5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3cc5f8:
    // 0x3cc5f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cc5f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cc5fc:
    // 0x3cc5fc: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3cc5fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3cc600:
    // 0x3cc600: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3cc600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3cc604:
    // 0x3cc604: 0x60f809  jalr        $v1
label_3cc608:
    if (ctx->pc == 0x3CC608u) {
        ctx->pc = 0x3CC608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC604u;
        // 0x3cc608: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC60Cu;
        goto label_3cc60c;
    }
    ctx->pc = 0x3CC604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CC60Cu);
        ctx->pc = 0x3CC608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC604u;
        // 0x3cc608: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC604u, 0x3CC60Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CC60Cu;
label_3cc60c:
    // 0x3cc60c: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x3cc60cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3cc610:
    // 0x3cc610: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
label_3cc614:
    if (ctx->pc == 0x3CC614u) {
        ctx->pc = 0x3CC614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC610u;
        // 0x3cc614: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC618u;
        goto label_3cc618;
    }
    ctx->pc = 0x3CC610u;
    {
        const bool branch_taken_0x3cc610 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC610u;
        // 0x3cc614: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc610) {
            ctx->pc = 0x3CC630u;
            goto label_3cc630;
        }
    }
    ctx->pc = 0x3CC618u;
label_3cc618:
    // 0x3cc618: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3cc618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3cc61c:
    // 0x3cc61c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x3cc61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3cc620:
    // 0x3cc620: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3cc620u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3cc624:
    // 0x3cc624: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3cc624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3cc628:
    // 0x3cc628: 0x60f809  jalr        $v1
label_3cc62c:
    if (ctx->pc == 0x3CC62Cu) {
        ctx->pc = 0x3CC62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC628u;
        // 0x3cc62c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC630u;
        goto label_3cc630;
    }
    ctx->pc = 0x3CC628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CC630u);
        ctx->pc = 0x3CC62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC628u;
        // 0x3cc62c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC628u, 0x3CC630u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CC630u;
label_3cc630:
    // 0x3cc630: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3cc630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cc634:
    // 0x3cc634: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3cc634u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cc638:
    // 0x3cc638: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3cc638u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3cc63c:
    // 0x3cc63c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3cc63cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3cc640:
    // 0x3cc640: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3cc640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3cc644:
    // 0x3cc644: 0x3e00008  jr          $ra
label_3cc648:
    if (ctx->pc == 0x3CC648u) {
        ctx->pc = 0x3CC648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC644u;
        // 0x3cc648: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC64Cu;
        goto label_3cc64c;
    }
    ctx->pc = 0x3CC644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CC648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC644u;
        // 0x3cc648: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CC64Cu;
label_3cc64c:
    // 0x3cc64c: 0x0  nop
    ctx->pc = 0x3cc64cu;
    // NOP
    ctx->pc = 0x3cc650u;
}
