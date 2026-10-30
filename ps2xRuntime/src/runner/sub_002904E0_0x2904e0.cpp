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

// Function: sub_002904E0
// Address: 0x2904e0 - 0x290588
void sub_002904E0_0x2904e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002904E0_0x2904e0");
#endif

    switch (ctx->pc) {
        case 0x2904e0u: goto label_2904e0;
        case 0x2904e4u: goto label_2904e4;
        case 0x2904e8u: goto label_2904e8;
        case 0x2904ecu: goto label_2904ec;
        case 0x2904f0u: goto label_2904f0;
        case 0x2904f4u: goto label_2904f4;
        case 0x2904f8u: goto label_2904f8;
        case 0x2904fcu: goto label_2904fc;
        case 0x290500u: goto label_290500;
        case 0x290504u: goto label_290504;
        case 0x290508u: goto label_290508;
        case 0x29050cu: goto label_29050c;
        case 0x290510u: goto label_290510;
        case 0x290514u: goto label_290514;
        case 0x290518u: goto label_290518;
        case 0x29051cu: goto label_29051c;
        case 0x290520u: goto label_290520;
        case 0x290524u: goto label_290524;
        case 0x290528u: goto label_290528;
        case 0x29052cu: goto label_29052c;
        case 0x290530u: goto label_290530;
        case 0x290534u: goto label_290534;
        case 0x290538u: goto label_290538;
        case 0x29053cu: goto label_29053c;
        case 0x290540u: goto label_290540;
        case 0x290544u: goto label_290544;
        case 0x290548u: goto label_290548;
        case 0x29054cu: goto label_29054c;
        case 0x290550u: goto label_290550;
        case 0x290554u: goto label_290554;
        case 0x290558u: goto label_290558;
        case 0x29055cu: goto label_29055c;
        case 0x290560u: goto label_290560;
        case 0x290564u: goto label_290564;
        case 0x290568u: goto label_290568;
        case 0x29056cu: goto label_29056c;
        case 0x290570u: goto label_290570;
        case 0x290574u: goto label_290574;
        case 0x290578u: goto label_290578;
        case 0x29057cu: goto label_29057c;
        case 0x290580u: goto label_290580;
        case 0x290584u: goto label_290584;
        default: break;
    }

    ctx->pc = 0x2904e0u;

label_2904e0:
    // 0x2904e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2904e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2904e4:
    // 0x2904e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2904e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2904e8:
    // 0x2904e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2904e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2904ec:
    // 0x2904ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2904ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2904f0:
    // 0x2904f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2904f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2904f4:
    // 0x2904f4: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x2904f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_2904f8:
    // 0x2904f8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2904fc:
    if (ctx->pc == 0x2904FCu) {
        ctx->pc = 0x2904FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2904F8u;
        // 0x2904fc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290500u;
        goto label_290500;
    }
    ctx->pc = 0x2904F8u;
    {
        const bool branch_taken_0x2904f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2904FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2904F8u;
        // 0x2904fc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2904f8) {
            ctx->pc = 0x29050Cu;
            goto label_29050c;
        }
    }
    ctx->pc = 0x290500u;
label_290500:
    // 0x290500: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x290500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_290504:
    // 0x290504: 0x10000002  b           . + 4 + (0x2 << 2)
label_290508:
    if (ctx->pc == 0x290508u) {
        ctx->pc = 0x290508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290504u;
        // 0x290508: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29050Cu;
        goto label_29050c;
    }
    ctx->pc = 0x290504u;
    {
        const bool branch_taken_0x290504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290504u;
        // 0x290508: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290504) {
            ctx->pc = 0x290510u;
            goto label_290510;
        }
    }
    ctx->pc = 0x29050Cu;
label_29050c:
    // 0x29050c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29050cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290510:
    // 0x290510: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x290510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_290514:
    // 0x290514: 0xc0a3658  jal         func_28D960
label_290518:
    if (ctx->pc == 0x290518u) {
        ctx->pc = 0x290518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290514u;
        // 0x290518: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29051Cu;
        goto label_29051c;
    }
    ctx->pc = 0x290514u;
    SET_GPR_U32(ctx, 31, 0x29051Cu);
    ctx->pc = 0x290518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290514u;
    // 0x290518: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x290514u, 0x29051Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29051Cu;
label_29051c:
    // 0x29051c: 0x4410015  bgez        $v0, . + 4 + (0x15 << 2)
label_290520:
    if (ctx->pc == 0x290520u) {
        ctx->pc = 0x290520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29051Cu;
        // 0x290520: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290524u;
        goto label_290524;
    }
    ctx->pc = 0x29051Cu;
    {
        const bool branch_taken_0x29051c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x290520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29051Cu;
        // 0x290520: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29051c) {
            ctx->pc = 0x290574u;
            goto label_290574;
        }
    }
    ctx->pc = 0x290524u;
label_290524:
    // 0x290524: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_290528:
    if (ctx->pc == 0x290528u) {
        ctx->pc = 0x290528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290524u;
        // 0x290528: 0x8e23020c  lw          $v1, 0x20C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29052Cu;
        goto label_29052c;
    }
    ctx->pc = 0x290524u;
    {
        const bool branch_taken_0x290524 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x290524) {
            ctx->pc = 0x290528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290524u;
            // 0x290528: 0x8e23020c  lw          $v1, 0x20C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290550u;
            goto label_290550;
        }
    }
    ctx->pc = 0x29052Cu;
label_29052c:
    // 0x29052c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x29052cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_290530:
    // 0x290530: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x290530u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_290534:
    // 0x290534: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x290534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_290538:
    // 0x290538: 0x40f809  jalr        $v0
label_29053c:
    if (ctx->pc == 0x29053Cu) {
        ctx->pc = 0x29053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290538u;
        // 0x29053c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290540u;
        goto label_290540;
    }
    ctx->pc = 0x290538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x290540u);
        ctx->pc = 0x29053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290538u;
        // 0x29053c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290538u, 0x290540u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x290540u;
label_290540:
    // 0x290540: 0x2403008a  addiu       $v1, $zero, 0x8A
    ctx->pc = 0x290540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
label_290544:
    // 0x290544: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
label_290548:
    if (ctx->pc == 0x290548u) {
        ctx->pc = 0x290548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290544u;
        // 0x290548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29054Cu;
        goto label_29054c;
    }
    ctx->pc = 0x290544u;
    {
        const bool branch_taken_0x290544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x290548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290544u;
        // 0x290548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290544) {
            ctx->pc = 0x290574u;
            goto label_290574;
        }
    }
    ctx->pc = 0x29054Cu;
label_29054c:
    // 0x29054c: 0x8e23020c  lw          $v1, 0x20C($s1)
    ctx->pc = 0x29054cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_290550:
    // 0x290550: 0x84620032  lh          $v0, 0x32($v1)
    ctx->pc = 0x290550u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 50)));
label_290554:
    // 0x290554: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x290554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_290558:
    // 0x290558: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_29055c:
    if (ctx->pc == 0x29055Cu) {
        ctx->pc = 0x29055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290558u;
        // 0x29055c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290560u;
        goto label_290560;
    }
    ctx->pc = 0x290558u;
    {
        const bool branch_taken_0x290558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290558u;
        // 0x29055c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290558) {
            ctx->pc = 0x290570u;
            goto label_290570;
        }
    }
    ctx->pc = 0x290560u;
label_290560:
    // 0x290560: 0xc0a40d2  jal         func_290348
label_290564:
    if (ctx->pc == 0x290564u) {
        ctx->pc = 0x290564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290560u;
        // 0x290564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290568u;
        goto label_290568;
    }
    ctx->pc = 0x290560u;
    SET_GPR_U32(ctx, 31, 0x290568u);
    ctx->pc = 0x290564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290560u;
    // 0x290564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x290560u, 0x290568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290568u;
label_290568:
    // 0x290568: 0x14500002  bne         $v0, $s0, . + 4 + (0x2 << 2)
label_29056c:
    if (ctx->pc == 0x29056Cu) {
        ctx->pc = 0x29056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290568u;
        // 0x29056c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290570u;
        goto label_290570;
    }
    ctx->pc = 0x290568u;
    {
        const bool branch_taken_0x290568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x29056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290568u;
        // 0x29056c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290568) {
            ctx->pc = 0x290574u;
            goto label_290574;
        }
    }
    ctx->pc = 0x290570u;
label_290570:
    // 0x290570: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x290570u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290574:
    // 0x290574: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x290574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_290578:
    // 0x290578: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x290578u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29057c:
    // 0x29057c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29057cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_290580:
    // 0x290580: 0x3e00008  jr          $ra
label_290584:
    if (ctx->pc == 0x290584u) {
        ctx->pc = 0x290584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290580u;
        // 0x290584: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290588u;
        goto label_fallthrough_0x290580;
    }
    ctx->pc = 0x290580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290580u;
        // 0x290584: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x290580:
    ctx->pc = 0x290588u;
}
