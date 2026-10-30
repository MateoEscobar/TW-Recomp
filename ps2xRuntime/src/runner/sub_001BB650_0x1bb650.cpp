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

// Function: sub_001BB650
// Address: 0x1bb650 - 0x1bb7c0
void sub_001BB650_0x1bb650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB650_0x1bb650");
#endif

    switch (ctx->pc) {
        case 0x1bb650u: goto label_1bb650;
        case 0x1bb654u: goto label_1bb654;
        case 0x1bb658u: goto label_1bb658;
        case 0x1bb65cu: goto label_1bb65c;
        case 0x1bb660u: goto label_1bb660;
        case 0x1bb664u: goto label_1bb664;
        case 0x1bb668u: goto label_1bb668;
        case 0x1bb66cu: goto label_1bb66c;
        case 0x1bb670u: goto label_1bb670;
        case 0x1bb674u: goto label_1bb674;
        case 0x1bb678u: goto label_1bb678;
        case 0x1bb67cu: goto label_1bb67c;
        case 0x1bb680u: goto label_1bb680;
        case 0x1bb684u: goto label_1bb684;
        case 0x1bb688u: goto label_1bb688;
        case 0x1bb68cu: goto label_1bb68c;
        case 0x1bb690u: goto label_1bb690;
        case 0x1bb694u: goto label_1bb694;
        case 0x1bb698u: goto label_1bb698;
        case 0x1bb69cu: goto label_1bb69c;
        case 0x1bb6a0u: goto label_1bb6a0;
        case 0x1bb6a4u: goto label_1bb6a4;
        case 0x1bb6a8u: goto label_1bb6a8;
        case 0x1bb6acu: goto label_1bb6ac;
        case 0x1bb6b0u: goto label_1bb6b0;
        case 0x1bb6b4u: goto label_1bb6b4;
        case 0x1bb6b8u: goto label_1bb6b8;
        case 0x1bb6bcu: goto label_1bb6bc;
        case 0x1bb6c0u: goto label_1bb6c0;
        case 0x1bb6c4u: goto label_1bb6c4;
        case 0x1bb6c8u: goto label_1bb6c8;
        case 0x1bb6ccu: goto label_1bb6cc;
        case 0x1bb6d0u: goto label_1bb6d0;
        case 0x1bb6d4u: goto label_1bb6d4;
        case 0x1bb6d8u: goto label_1bb6d8;
        case 0x1bb6dcu: goto label_1bb6dc;
        case 0x1bb6e0u: goto label_1bb6e0;
        case 0x1bb6e4u: goto label_1bb6e4;
        case 0x1bb6e8u: goto label_1bb6e8;
        case 0x1bb6ecu: goto label_1bb6ec;
        case 0x1bb6f0u: goto label_1bb6f0;
        case 0x1bb6f4u: goto label_1bb6f4;
        case 0x1bb6f8u: goto label_1bb6f8;
        case 0x1bb6fcu: goto label_1bb6fc;
        case 0x1bb700u: goto label_1bb700;
        case 0x1bb704u: goto label_1bb704;
        case 0x1bb708u: goto label_1bb708;
        case 0x1bb70cu: goto label_1bb70c;
        case 0x1bb710u: goto label_1bb710;
        case 0x1bb714u: goto label_1bb714;
        case 0x1bb718u: goto label_1bb718;
        case 0x1bb71cu: goto label_1bb71c;
        case 0x1bb720u: goto label_1bb720;
        case 0x1bb724u: goto label_1bb724;
        case 0x1bb728u: goto label_1bb728;
        case 0x1bb72cu: goto label_1bb72c;
        case 0x1bb730u: goto label_1bb730;
        case 0x1bb734u: goto label_1bb734;
        case 0x1bb738u: goto label_1bb738;
        case 0x1bb73cu: goto label_1bb73c;
        case 0x1bb740u: goto label_1bb740;
        case 0x1bb744u: goto label_1bb744;
        case 0x1bb748u: goto label_1bb748;
        case 0x1bb74cu: goto label_1bb74c;
        case 0x1bb750u: goto label_1bb750;
        case 0x1bb754u: goto label_1bb754;
        case 0x1bb758u: goto label_1bb758;
        case 0x1bb75cu: goto label_1bb75c;
        case 0x1bb760u: goto label_1bb760;
        case 0x1bb764u: goto label_1bb764;
        case 0x1bb768u: goto label_1bb768;
        case 0x1bb76cu: goto label_1bb76c;
        case 0x1bb770u: goto label_1bb770;
        case 0x1bb774u: goto label_1bb774;
        case 0x1bb778u: goto label_1bb778;
        case 0x1bb77cu: goto label_1bb77c;
        case 0x1bb780u: goto label_1bb780;
        case 0x1bb784u: goto label_1bb784;
        case 0x1bb788u: goto label_1bb788;
        case 0x1bb78cu: goto label_1bb78c;
        case 0x1bb790u: goto label_1bb790;
        case 0x1bb794u: goto label_1bb794;
        case 0x1bb798u: goto label_1bb798;
        case 0x1bb79cu: goto label_1bb79c;
        case 0x1bb7a0u: goto label_1bb7a0;
        case 0x1bb7a4u: goto label_1bb7a4;
        case 0x1bb7a8u: goto label_1bb7a8;
        case 0x1bb7acu: goto label_1bb7ac;
        case 0x1bb7b0u: goto label_1bb7b0;
        case 0x1bb7b4u: goto label_1bb7b4;
        case 0x1bb7b8u: goto label_1bb7b8;
        case 0x1bb7bcu: goto label_1bb7bc;
        default: break;
    }

    ctx->pc = 0x1bb650u;

label_1bb650:
    // 0x1bb650: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1bb650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1bb654:
    // 0x1bb654: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1bb654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1bb658:
    // 0x1bb658: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1bb658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_1bb65c:
    // 0x1bb65c: 0x24a5e700  addiu       $a1, $a1, -0x1900
    ctx->pc = 0x1bb65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960896));
label_1bb660:
    // 0x1bb660: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1bb660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_1bb664:
    // 0x1bb664: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bb664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb668:
    // 0x1bb668: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1bb668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_1bb66c:
    // 0x1bb66c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1bb66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_1bb670:
    // 0x1bb670: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bb670u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bb674:
    // 0x1bb674: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1bb674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_1bb678:
    // 0x1bb678: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x1bb678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_1bb67c:
    // 0x1bb67c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1bb67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1bb680:
    // 0x1bb680: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bb680u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb684:
    // 0x1bb684: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1bb684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1bb688:
    // 0x1bb688: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1bb688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bb68c:
    // 0x1bb68c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1bb68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_1bb690:
    // 0x1bb690: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x1bb690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_1bb694:
    // 0x1bb694: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1bb694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1bb698:
    // 0x1bb698: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1bb698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1bb69c:
    // 0x1bb69c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1bb69cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1bb6a0:
    // 0x1bb6a0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1bb6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1bb6a4:
    // 0x1bb6a4: 0x40f809  jalr        $v0
label_1bb6a8:
    if (ctx->pc == 0x1BB6A8u) {
        ctx->pc = 0x1BB6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB6A4u;
        // 0x1bb6a8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB6ACu;
        goto label_1bb6ac;
    }
    ctx->pc = 0x1BB6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BB6ACu);
        ctx->pc = 0x1BB6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB6A4u;
        // 0x1bb6a8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB6A4u, 0x1BB6ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BB6ACu;
label_1bb6ac:
    // 0x1bb6ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb6b0:
    // 0x1bb6b0: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x1bb6b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1bb6b4:
    // 0x1bb6b4: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1bb6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_1bb6b8:
    // 0x1bb6b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bb6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bb6bc:
    // 0x1bb6bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bb6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb6c0:
    // 0x1bb6c0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1bb6c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1bb6c4:
    // 0x1bb6c4: 0x26100430  addiu       $s0, $s0, 0x430
    ctx->pc = 0x1bb6c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1072));
label_1bb6c8:
    // 0x1bb6c8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1bb6c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1bb6cc:
    // 0x1bb6cc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1bb6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1bb6d0:
    // 0x1bb6d0: 0x40f809  jalr        $v0
label_1bb6d4:
    if (ctx->pc == 0x1BB6D4u) {
        ctx->pc = 0x1BB6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB6D0u;
        // 0x1bb6d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB6D8u;
        goto label_1bb6d8;
    }
    ctx->pc = 0x1BB6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BB6D8u);
        ctx->pc = 0x1BB6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB6D0u;
        // 0x1bb6d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB6D0u, 0x1BB6D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BB6D8u;
label_1bb6d8:
    // 0x1bb6d8: 0x2e620004  sltiu       $v0, $s3, 0x4
    ctx->pc = 0x1bb6d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1bb6dc:
    // 0x1bb6dc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1bb6e0:
    if (ctx->pc == 0x1BB6E0u) {
        ctx->pc = 0x1BB6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB6DCu;
        // 0x1bb6e0: 0x26310430  addiu       $s1, $s1, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB6E4u;
        goto label_1bb6e4;
    }
    ctx->pc = 0x1BB6DCu;
    {
        const bool branch_taken_0x1bb6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB6DCu;
        // 0x1bb6e0: 0x26310430  addiu       $s1, $s1, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb6dc) {
            ctx->pc = 0x1BB6B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb6b8;
        }
    }
    ctx->pc = 0x1BB6E4u;
label_1bb6e4:
    // 0x1bb6e4: 0x26501100  addiu       $s0, $s2, 0x1100
    ctx->pc = 0x1bb6e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4352));
label_1bb6e8:
    // 0x1bb6e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bb6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1bb6ec:
    // 0x1bb6ec: 0x2442e730  addiu       $v0, $v0, -0x18D0
    ctx->pc = 0x1bb6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960944));
label_1bb6f0:
    // 0x1bb6f0: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x1bb6f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1bb6f4:
    // 0x1bb6f4: 0x245effd0  addiu       $fp, $v0, -0x30
    ctx->pc = 0x1bb6f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_1bb6f8:
    // 0x1bb6f8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1bb6f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bb6fc:
    // 0x1bb6fc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1bb6fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb700:
    // 0x1bb700: 0x24130080  addiu       $s3, $zero, 0x80
    ctx->pc = 0x1bb700u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1bb704:
    // 0x1bb704: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x1bb704u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1bb708:
    // 0x1bb708: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1bb708u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb70c:
    // 0x1bb70c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1bb70cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bb710:
    // 0x1bb710: 0xa3b30020  sb          $s3, 0x20($sp)
    ctx->pc = 0x1bb710u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 19));
label_1bb714:
    // 0x1bb714: 0x0  nop
    ctx->pc = 0x1bb714u;
    // NOP
label_1bb718:
    // 0x1bb718: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1bb718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1bb71c:
    // 0x1bb71c: 0xa2530001  sb          $s3, 0x1($s2)
    ctx->pc = 0x1bb71cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 19));
label_1bb720:
    // 0x1bb720: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bb720u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb724:
    // 0x1bb724: 0xa2530002  sb          $s3, 0x2($s2)
    ctx->pc = 0x1bb724u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 19));
label_1bb728:
    // 0x1bb728: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1bb728u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb72c:
    // 0x1bb72c: 0xa2560003  sb          $s6, 0x3($s2)
    ctx->pc = 0x1bb72cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 22));
label_1bb730:
    // 0x1bb730: 0x24090172  addiu       $t1, $zero, 0x172
    ctx->pc = 0x1bb730u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
label_1bb734:
    // 0x1bb734: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1bb734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_1bb738:
    // 0x1bb738: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1bb738u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_1bb73c:
    // 0x1bb73c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1bb73cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1bb740:
    // 0x1bb740: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1bb740u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bb744:
    // 0x1bb744: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bb744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bb748:
    // 0x1bb748: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1bb748u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb74c:
    // 0x1bb74c: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x1bb74cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1bb750:
    // 0x1bb750: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1bb750u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1bb754:
    // 0x1bb754: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1bb754u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1bb758:
    // 0x1bb758: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x1bb758u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_1bb75c:
    // 0x1bb75c: 0xafb70000  sw          $s7, 0x0($sp)
    ctx->pc = 0x1bb75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
label_1bb760:
    // 0x1bb760: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x1bb760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_1bb764:
    // 0x1bb764: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1bb764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1bb768:
    // 0x1bb768: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1bb768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_1bb76c:
    // 0x1bb76c: 0xafb60010  sw          $s6, 0x10($sp)
    ctx->pc = 0x1bb76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 22));
label_1bb770:
    // 0x1bb770: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x1bb770u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_1bb774:
    // 0x1bb774: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1bb774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1bb778:
    // 0x1bb778: 0x60f809  jalr        $v1
label_1bb77c:
    if (ctx->pc == 0x1BB77Cu) {
        ctx->pc = 0x1BB77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB778u;
        // 0x1bb77c: 0xc7cc0070  lwc1        $f12, 0x70($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB780u;
        goto label_1bb780;
    }
    ctx->pc = 0x1BB778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BB780u);
        ctx->pc = 0x1BB77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB778u;
        // 0x1bb77c: 0xc7cc0070  lwc1        $f12, 0x70($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB778u, 0x1BB780u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BB780u;
label_1bb780:
    // 0x1bb780: 0x2e820002  sltiu       $v0, $s4, 0x2
    ctx->pc = 0x1bb780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1bb784:
    // 0x1bb784: 0x5440ffe4  bnel        $v0, $zero, . + 4 + (-0x1C << 2)
label_1bb788:
    if (ctx->pc == 0x1BB788u) {
        ctx->pc = 0x1BB788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB784u;
        // 0x1bb788: 0xa3b30020  sb          $s3, 0x20($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB78Cu;
        goto label_1bb78c;
    }
    ctx->pc = 0x1BB784u;
    {
        const bool branch_taken_0x1bb784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb784) {
            ctx->pc = 0x1BB788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB784u;
            // 0x1bb788: 0xa3b30020  sb          $s3, 0x20($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb718;
        }
    }
    ctx->pc = 0x1BB78Cu;
label_1bb78c:
    // 0x1bb78c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1bb78cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1bb790:
    // 0x1bb790: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1bb790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1bb794:
    // 0x1bb794: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1bb794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1bb798:
    // 0x1bb798: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1bb798u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1bb79c:
    // 0x1bb79c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1bb79cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1bb7a0:
    // 0x1bb7a0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1bb7a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1bb7a4:
    // 0x1bb7a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1bb7a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1bb7a8:
    // 0x1bb7a8: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x1bb7a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1bb7ac:
    // 0x1bb7ac: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x1bb7acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1bb7b0:
    // 0x1bb7b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bb7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1bb7b4:
    // 0x1bb7b4: 0x3e00008  jr          $ra
label_1bb7b8:
    if (ctx->pc == 0x1BB7B8u) {
        ctx->pc = 0x1BB7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB7B4u;
        // 0x1bb7b8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB7BCu;
        goto label_1bb7bc;
    }
    ctx->pc = 0x1BB7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB7B4u;
        // 0x1bb7b8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB7BCu;
label_1bb7bc:
    // 0x1bb7bc: 0x0  nop
    ctx->pc = 0x1bb7bcu;
    // NOP
    ctx->pc = 0x1bb7c0u;
}
