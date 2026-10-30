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

// Function: sub_003AC4D0
// Address: 0x3ac4d0 - 0x3ac600
void sub_003AC4D0_0x3ac4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AC4D0_0x3ac4d0");
#endif

    switch (ctx->pc) {
        case 0x3ac4d0u: goto label_3ac4d0;
        case 0x3ac4d4u: goto label_3ac4d4;
        case 0x3ac4d8u: goto label_3ac4d8;
        case 0x3ac4dcu: goto label_3ac4dc;
        case 0x3ac4e0u: goto label_3ac4e0;
        case 0x3ac4e4u: goto label_3ac4e4;
        case 0x3ac4e8u: goto label_3ac4e8;
        case 0x3ac4ecu: goto label_3ac4ec;
        case 0x3ac4f0u: goto label_3ac4f0;
        case 0x3ac4f4u: goto label_3ac4f4;
        case 0x3ac4f8u: goto label_3ac4f8;
        case 0x3ac4fcu: goto label_3ac4fc;
        case 0x3ac500u: goto label_3ac500;
        case 0x3ac504u: goto label_3ac504;
        case 0x3ac508u: goto label_3ac508;
        case 0x3ac50cu: goto label_3ac50c;
        case 0x3ac510u: goto label_3ac510;
        case 0x3ac514u: goto label_3ac514;
        case 0x3ac518u: goto label_3ac518;
        case 0x3ac51cu: goto label_3ac51c;
        case 0x3ac520u: goto label_3ac520;
        case 0x3ac524u: goto label_3ac524;
        case 0x3ac528u: goto label_3ac528;
        case 0x3ac52cu: goto label_3ac52c;
        case 0x3ac530u: goto label_3ac530;
        case 0x3ac534u: goto label_3ac534;
        case 0x3ac538u: goto label_3ac538;
        case 0x3ac53cu: goto label_3ac53c;
        case 0x3ac540u: goto label_3ac540;
        case 0x3ac544u: goto label_3ac544;
        case 0x3ac548u: goto label_3ac548;
        case 0x3ac54cu: goto label_3ac54c;
        case 0x3ac550u: goto label_3ac550;
        case 0x3ac554u: goto label_3ac554;
        case 0x3ac558u: goto label_3ac558;
        case 0x3ac55cu: goto label_3ac55c;
        case 0x3ac560u: goto label_3ac560;
        case 0x3ac564u: goto label_3ac564;
        case 0x3ac568u: goto label_3ac568;
        case 0x3ac56cu: goto label_3ac56c;
        case 0x3ac570u: goto label_3ac570;
        case 0x3ac574u: goto label_3ac574;
        case 0x3ac578u: goto label_3ac578;
        case 0x3ac57cu: goto label_3ac57c;
        case 0x3ac580u: goto label_3ac580;
        case 0x3ac584u: goto label_3ac584;
        case 0x3ac588u: goto label_3ac588;
        case 0x3ac58cu: goto label_3ac58c;
        case 0x3ac590u: goto label_3ac590;
        case 0x3ac594u: goto label_3ac594;
        case 0x3ac598u: goto label_3ac598;
        case 0x3ac59cu: goto label_3ac59c;
        case 0x3ac5a0u: goto label_3ac5a0;
        case 0x3ac5a4u: goto label_3ac5a4;
        case 0x3ac5a8u: goto label_3ac5a8;
        case 0x3ac5acu: goto label_3ac5ac;
        case 0x3ac5b0u: goto label_3ac5b0;
        case 0x3ac5b4u: goto label_3ac5b4;
        case 0x3ac5b8u: goto label_3ac5b8;
        case 0x3ac5bcu: goto label_3ac5bc;
        case 0x3ac5c0u: goto label_3ac5c0;
        case 0x3ac5c4u: goto label_3ac5c4;
        case 0x3ac5c8u: goto label_3ac5c8;
        case 0x3ac5ccu: goto label_3ac5cc;
        case 0x3ac5d0u: goto label_3ac5d0;
        case 0x3ac5d4u: goto label_3ac5d4;
        case 0x3ac5d8u: goto label_3ac5d8;
        case 0x3ac5dcu: goto label_3ac5dc;
        case 0x3ac5e0u: goto label_3ac5e0;
        case 0x3ac5e4u: goto label_3ac5e4;
        case 0x3ac5e8u: goto label_3ac5e8;
        case 0x3ac5ecu: goto label_3ac5ec;
        case 0x3ac5f0u: goto label_3ac5f0;
        case 0x3ac5f4u: goto label_3ac5f4;
        case 0x3ac5f8u: goto label_3ac5f8;
        case 0x3ac5fcu: goto label_3ac5fc;
        default: break;
    }

    ctx->pc = 0x3ac4d0u;

label_3ac4d0:
    // 0x3ac4d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3ac4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3ac4d4:
    // 0x3ac4d4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3ac4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3ac4d8:
    // 0x3ac4d8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3ac4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3ac4dc:
    // 0x3ac4dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ac4dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ac4e0:
    // 0x3ac4e0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3ac4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3ac4e4:
    // 0x3ac4e4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3ac4e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3ac4e8:
    // 0x3ac4e8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x3ac4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_3ac4ec:
    // 0x3ac4ec: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3ac4ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ac4f0:
    // 0x3ac4f0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3ac4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_3ac4f4:
    // 0x3ac4f4: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x3ac4f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3ac4f8:
    // 0x3ac4f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ac4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ac4fc:
    // 0x3ac4fc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3ac4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3ac500:
    // 0x3ac500: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3ac500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3ac504:
    // 0x3ac504: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3ac504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_3ac508:
    // 0x3ac508: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ac508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3ac50c:
    // 0x3ac50c: 0xc0e4080  jal         func_390200
label_3ac510:
    if (ctx->pc == 0x3AC510u) {
        ctx->pc = 0x3AC510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC50Cu;
        // 0x3ac510: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC514u;
        goto label_3ac514;
    }
    ctx->pc = 0x3AC50Cu;
    SET_GPR_U32(ctx, 31, 0x3AC514u);
    ctx->pc = 0x3AC510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC50Cu;
    // 0x3ac510: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x3AC50Cu, 0x3AC514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC514u;
label_3ac514:
    // 0x3ac514: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3ac514u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ac518:
    // 0x3ac518: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3ac518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3ac51c:
    // 0x3ac51c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ac51cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ac520:
    // 0x3ac520: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ac520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ac524:
    // 0x3ac524: 0x40f809  jalr        $v0
label_3ac528:
    if (ctx->pc == 0x3AC528u) {
        ctx->pc = 0x3AC528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC524u;
        // 0x3ac528: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC52Cu;
        goto label_3ac52c;
    }
    ctx->pc = 0x3AC524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC52Cu);
        ctx->pc = 0x3AC528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC524u;
        // 0x3ac528: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC524u, 0x3AC52Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC52Cu;
label_3ac52c:
    // 0x3ac52c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3ac52cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ac530:
    // 0x3ac530: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x3ac530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_3ac534:
    // 0x3ac534: 0xa6600036  sh          $zero, 0x36($s3)
    ctx->pc = 0x3ac534u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 54), (uint16_t)GPR_U32(ctx, 0));
label_3ac538:
    // 0x3ac538: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ac538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ac53c:
    // 0x3ac53c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3ac53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3ac540:
    // 0x3ac540: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3ac540u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3ac544:
    // 0x3ac544: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3ac544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3ac548:
    // 0x3ac548: 0x40f809  jalr        $v0
label_3ac54c:
    if (ctx->pc == 0x3AC54Cu) {
        ctx->pc = 0x3AC54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC548u;
        // 0x3ac54c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC550u;
        goto label_3ac550;
    }
    ctx->pc = 0x3AC548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC550u);
        ctx->pc = 0x3AC54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC548u;
        // 0x3ac54c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC548u, 0x3AC550u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC550u;
label_3ac550:
    // 0x3ac550: 0xae620038  sw          $v0, 0x38($s3)
    ctx->pc = 0x3ac550u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
label_3ac554:
    // 0x3ac554: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3ac554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ac558:
    // 0x3ac558: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x3ac558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_3ac55c:
    // 0x3ac55c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3ac55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3ac560:
    // 0x3ac560: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3ac560u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3ac564:
    // 0x3ac564: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3ac564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3ac568:
    // 0x3ac568: 0x40f809  jalr        $v0
label_3ac56c:
    if (ctx->pc == 0x3AC56Cu) {
        ctx->pc = 0x3AC56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC568u;
        // 0x3ac56c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC570u;
        goto label_3ac570;
    }
    ctx->pc = 0x3AC568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC570u);
        ctx->pc = 0x3AC56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC568u;
        // 0x3ac56c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC568u, 0x3AC570u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC570u;
label_3ac570:
    // 0x3ac570: 0x16c0000b  bnez        $s6, . + 4 + (0xB << 2)
label_3ac574:
    if (ctx->pc == 0x3AC574u) {
        ctx->pc = 0x3AC574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC570u;
        // 0x3ac574: 0xae62003c  sw          $v0, 0x3C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC578u;
        goto label_3ac578;
    }
    ctx->pc = 0x3AC570u;
    {
        const bool branch_taken_0x3ac570 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC570u;
        // 0x3ac574: 0xae62003c  sw          $v0, 0x3C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac570) {
            ctx->pc = 0x3AC5A0u;
            goto label_3ac5a0;
        }
    }
    ctx->pc = 0x3AC578u;
label_3ac578:
    // 0x3ac578: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_3ac57c:
    if (ctx->pc == 0x3AC57Cu) {
        ctx->pc = 0x3AC57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC578u;
        // 0x3ac57c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC580u;
        goto label_3ac580;
    }
    ctx->pc = 0x3AC578u;
    {
        const bool branch_taken_0x3ac578 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC578u;
        // 0x3ac57c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac578) {
            ctx->pc = 0x3AC598u;
            goto label_3ac598;
        }
    }
    ctx->pc = 0x3AC580u;
label_3ac580:
    // 0x3ac580: 0x6800004  bltz        $s4, . + 4 + (0x4 << 2)
label_3ac584:
    if (ctx->pc == 0x3AC584u) {
        ctx->pc = 0x3AC584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC580u;
        // 0x3ac584: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC588u;
        goto label_3ac588;
    }
    ctx->pc = 0x3AC580u;
    {
        const bool branch_taken_0x3ac580 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x3AC584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC580u;
        // 0x3ac584: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac580) {
            ctx->pc = 0x3AC594u;
            goto label_3ac594;
        }
    }
    ctx->pc = 0x3AC588u;
label_3ac588:
    // 0x3ac588: 0xae740028  sw          $s4, 0x28($s3)
    ctx->pc = 0x3ac588u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 20));
label_3ac58c:
    // 0x3ac58c: 0x1000000b  b           . + 4 + (0xB << 2)
label_3ac590:
    if (ctx->pc == 0x3AC590u) {
        ctx->pc = 0x3AC590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC58Cu;
        // 0x3ac590: 0xae620030  sw          $v0, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC594u;
        goto label_3ac594;
    }
    ctx->pc = 0x3AC58Cu;
    {
        const bool branch_taken_0x3ac58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC58Cu;
        // 0x3ac590: 0xae620030  sw          $v0, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac58c) {
            ctx->pc = 0x3AC5BCu;
            goto label_3ac5bc;
        }
    }
    ctx->pc = 0x3AC594u;
label_3ac594:
    // 0x3ac594: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3ac594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3ac598:
    // 0x3ac598: 0x10000008  b           . + 4 + (0x8 << 2)
label_3ac59c:
    if (ctx->pc == 0x3AC59Cu) {
        ctx->pc = 0x3AC59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC598u;
        // 0x3ac59c: 0xae620030  sw          $v0, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC5A0u;
        goto label_3ac5a0;
    }
    ctx->pc = 0x3AC598u;
    {
        const bool branch_taken_0x3ac598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC598u;
        // 0x3ac59c: 0xae620030  sw          $v0, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac598) {
            ctx->pc = 0x3AC5BCu;
            goto label_3ac5bc;
        }
    }
    ctx->pc = 0x3AC5A0u;
label_3ac5a0:
    // 0x3ac5a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ac5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ac5a4:
    // 0x3ac5a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3ac5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ac5a8:
    // 0x3ac5a8: 0xae76002c  sw          $s6, 0x2C($s3)
    ctx->pc = 0x3ac5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 22));
label_3ac5ac:
    // 0x3ac5ac: 0xa6630036  sh          $v1, 0x36($s3)
    ctx->pc = 0x3ac5acu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 54), (uint16_t)GPR_U32(ctx, 3));
label_3ac5b0:
    // 0x3ac5b0: 0xa6620034  sh          $v0, 0x34($s3)
    ctx->pc = 0x3ac5b0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 52), (uint16_t)GPR_U32(ctx, 2));
label_3ac5b4:
    // 0x3ac5b4: 0xae740028  sw          $s4, 0x28($s3)
    ctx->pc = 0x3ac5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 20));
label_3ac5b8:
    // 0x3ac5b8: 0xae630030  sw          $v1, 0x30($s3)
    ctx->pc = 0x3ac5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 3));
label_3ac5bc:
    // 0x3ac5bc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3ac5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3ac5c0:
    // 0x3ac5c0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3ac5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ac5c4:
    // 0x3ac5c4: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x3ac5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_3ac5c8:
    // 0x3ac5c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3ac5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ac5cc:
    // 0x3ac5cc: 0xc0e637e  jal         func_398DF8
label_3ac5d0:
    if (ctx->pc == 0x3AC5D0u) {
        ctx->pc = 0x3AC5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC5CCu;
        // 0x3ac5d0: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC5D4u;
        goto label_3ac5d4;
    }
    ctx->pc = 0x3AC5CCu;
    SET_GPR_U32(ctx, 31, 0x3AC5D4u);
    ctx->pc = 0x3AC5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC5CCu;
    // 0x3ac5d0: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x3AC5CCu, 0x3AC5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC5D4u;
label_3ac5d4:
    // 0x3ac5d4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3ac5d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3ac5d8:
    // 0x3ac5d8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3ac5d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ac5dc:
    // 0x3ac5dc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3ac5dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ac5e0:
    // 0x3ac5e0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3ac5e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ac5e4:
    // 0x3ac5e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3ac5e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ac5e8:
    // 0x3ac5e8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3ac5e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ac5ec:
    // 0x3ac5ec: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x3ac5ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ac5f0:
    // 0x3ac5f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ac5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ac5f4:
    // 0x3ac5f4: 0x3e00008  jr          $ra
label_3ac5f8:
    if (ctx->pc == 0x3AC5F8u) {
        ctx->pc = 0x3AC5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC5F4u;
        // 0x3ac5f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC5FCu;
        goto label_3ac5fc;
    }
    ctx->pc = 0x3AC5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC5F4u;
        // 0x3ac5f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AC5FCu;
label_3ac5fc:
    // 0x3ac5fc: 0x0  nop
    ctx->pc = 0x3ac5fcu;
    // NOP
    ctx->pc = 0x3ac600u;
}
