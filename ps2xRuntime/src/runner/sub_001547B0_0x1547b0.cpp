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

// Function: sub_001547B0
// Address: 0x1547b0 - 0x1548c0
void sub_001547B0_0x1547b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001547B0_0x1547b0");
#endif

    switch (ctx->pc) {
        case 0x1547b0u: goto label_1547b0;
        case 0x1547b4u: goto label_1547b4;
        case 0x1547b8u: goto label_1547b8;
        case 0x1547bcu: goto label_1547bc;
        case 0x1547c0u: goto label_1547c0;
        case 0x1547c4u: goto label_1547c4;
        case 0x1547c8u: goto label_1547c8;
        case 0x1547ccu: goto label_1547cc;
        case 0x1547d0u: goto label_1547d0;
        case 0x1547d4u: goto label_1547d4;
        case 0x1547d8u: goto label_1547d8;
        case 0x1547dcu: goto label_1547dc;
        case 0x1547e0u: goto label_1547e0;
        case 0x1547e4u: goto label_1547e4;
        case 0x1547e8u: goto label_1547e8;
        case 0x1547ecu: goto label_1547ec;
        case 0x1547f0u: goto label_1547f0;
        case 0x1547f4u: goto label_1547f4;
        case 0x1547f8u: goto label_1547f8;
        case 0x1547fcu: goto label_1547fc;
        case 0x154800u: goto label_154800;
        case 0x154804u: goto label_154804;
        case 0x154808u: goto label_154808;
        case 0x15480cu: goto label_15480c;
        case 0x154810u: goto label_154810;
        case 0x154814u: goto label_154814;
        case 0x154818u: goto label_154818;
        case 0x15481cu: goto label_15481c;
        case 0x154820u: goto label_154820;
        case 0x154824u: goto label_154824;
        case 0x154828u: goto label_154828;
        case 0x15482cu: goto label_15482c;
        case 0x154830u: goto label_154830;
        case 0x154834u: goto label_154834;
        case 0x154838u: goto label_154838;
        case 0x15483cu: goto label_15483c;
        case 0x154840u: goto label_154840;
        case 0x154844u: goto label_154844;
        case 0x154848u: goto label_154848;
        case 0x15484cu: goto label_15484c;
        case 0x154850u: goto label_154850;
        case 0x154854u: goto label_154854;
        case 0x154858u: goto label_154858;
        case 0x15485cu: goto label_15485c;
        case 0x154860u: goto label_154860;
        case 0x154864u: goto label_154864;
        case 0x154868u: goto label_154868;
        case 0x15486cu: goto label_15486c;
        case 0x154870u: goto label_154870;
        case 0x154874u: goto label_154874;
        case 0x154878u: goto label_154878;
        case 0x15487cu: goto label_15487c;
        case 0x154880u: goto label_154880;
        case 0x154884u: goto label_154884;
        case 0x154888u: goto label_154888;
        case 0x15488cu: goto label_15488c;
        case 0x154890u: goto label_154890;
        case 0x154894u: goto label_154894;
        case 0x154898u: goto label_154898;
        case 0x15489cu: goto label_15489c;
        case 0x1548a0u: goto label_1548a0;
        case 0x1548a4u: goto label_1548a4;
        case 0x1548a8u: goto label_1548a8;
        case 0x1548acu: goto label_1548ac;
        case 0x1548b0u: goto label_1548b0;
        case 0x1548b4u: goto label_1548b4;
        case 0x1548b8u: goto label_1548b8;
        case 0x1548bcu: goto label_1548bc;
        default: break;
    }

    ctx->pc = 0x1547b0u;

label_1547b0:
    // 0x1547b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1547b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1547b4:
    // 0x1547b4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1547b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1547b8:
    // 0x1547b8: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1547b8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1547bc:
    // 0x1547bc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1547bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1547c0:
    // 0x1547c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1547c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1547c4:
    // 0x1547c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1547c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1547c8:
    // 0x1547c8: 0x8e2427e4  lw          $a0, 0x27E4($s1)
    ctx->pc = 0x1547c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_1547cc:
    // 0x1547cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1547ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1547d0:
    // 0x1547d0: 0x8c920008  lw          $s2, 0x8($a0)
    ctx->pc = 0x1547d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1547d4:
    // 0x1547d4: 0x844300b8  lh          $v1, 0xB8($v0)
    ctx->pc = 0x1547d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_1547d8:
    // 0x1547d8: 0x8c4600bc  lw          $a2, 0xBC($v0)
    ctx->pc = 0x1547d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_1547dc:
    // 0x1547dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1547dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1547e0:
    // 0x1547e0: 0xc0f809  jalr        $a2
label_1547e4:
    if (ctx->pc == 0x1547E4u) {
        ctx->pc = 0x1547E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547E0u;
        // 0x1547e4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1547E8u;
        goto label_1547e8;
    }
    ctx->pc = 0x1547E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1547E8u);
        ctx->pc = 0x1547E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547E0u;
        // 0x1547e4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1547E0u, 0x1547E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1547E8u;
label_1547e8:
    // 0x1547e8: 0x8e2b27e4  lw          $t3, 0x27E4($s1)
    ctx->pc = 0x1547e8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_1547ec:
    // 0x1547ec: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1547ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1547f0:
    // 0x1547f0: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1547f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1547f4:
    // 0x1547f4: 0x24a5e598  addiu       $a1, $a1, -0x1A68
    ctx->pc = 0x1547f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960536));
label_1547f8:
    // 0x1547f8: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1547f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1547fc:
    // 0x1547fc: 0x2508e5a8  addiu       $t0, $t0, -0x1A58
    ctx->pc = 0x1547fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294960552));
label_154800:
    // 0x154800: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x154800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_154804:
    // 0x154804: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x154804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_154808:
    // 0x154808: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x154808u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_15480c:
    // 0x15480c: 0x24090027  addiu       $t1, $zero, 0x27
    ctx->pc = 0x15480cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_154810:
    // 0x154810: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x154810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_154814:
    // 0x154814: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x154814u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_154818:
    // 0x154818: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x154818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_15481c:
    // 0x15481c: 0x40f809  jalr        $v0
label_154820:
    if (ctx->pc == 0x154820u) {
        ctx->pc = 0x154820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15481Cu;
        // 0x154820: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154824u;
        goto label_154824;
    }
    ctx->pc = 0x15481Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x154824u);
        ctx->pc = 0x154820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15481Cu;
        // 0x154820: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15481Cu, 0x154824u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154824u;
label_154824:
    // 0x154824: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x154824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154828:
    // 0x154828: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_15482c:
    if (ctx->pc == 0x15482Cu) {
        ctx->pc = 0x15482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154828u;
        // 0x15482c: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154830u;
        goto label_154830;
    }
    ctx->pc = 0x154828u;
    {
        const bool branch_taken_0x154828 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154828u;
        // 0x15482c: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154828) {
            ctx->pc = 0x154880u;
            goto label_154880;
        }
    }
    ctx->pc = 0x154830u;
label_154830:
    // 0x154830: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x154830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_154834:
    // 0x154834: 0x24428348  addiu       $v0, $v0, -0x7CB8
    ctx->pc = 0x154834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935368));
label_154838:
    // 0x154838: 0x2606001c  addiu       $a2, $s0, 0x1C
    ctx->pc = 0x154838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_15483c:
    // 0x15483c: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x15483cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_154840:
    // 0x154840: 0x2607002c  addiu       $a3, $s0, 0x2C
    ctx->pc = 0x154840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_154844:
    // 0x154844: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x154844u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_154848:
    // 0x154848: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x154848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_15484c:
    // 0x15484c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x15484cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_154850:
    // 0x154850: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x154850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_154854:
    // 0x154854: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x154854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_154858:
    // 0x154858: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x154858u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_15485c:
    // 0x15485c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x15485cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_154860:
    // 0x154860: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x154860u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_154864:
    // 0x154864: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x154864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_154868:
    // 0x154868: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x154868u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
label_15486c:
    // 0x15486c: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x15486cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_154870:
    // 0x154870: 0xc137472  jal         func_4DD1C8
label_154874:
    if (ctx->pc == 0x154874u) {
        ctx->pc = 0x154874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154870u;
        // 0x154874: 0xace00008  sw          $zero, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154878u;
        goto label_154878;
    }
    ctx->pc = 0x154870u;
    SET_GPR_U32(ctx, 31, 0x154878u);
    ctx->pc = 0x154874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154870u;
    // 0x154874: 0xace00008  sw          $zero, 0x8($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DD1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DD1C8u, 0x154870u, 0x154878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154878u;
label_154878:
    // 0x154878: 0xc055230  jal         func_1548C0
label_15487c:
    if (ctx->pc == 0x15487Cu) {
        ctx->pc = 0x15487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154878u;
        // 0x15487c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154880u;
        goto label_154880;
    }
    ctx->pc = 0x154878u;
    SET_GPR_U32(ctx, 31, 0x154880u);
    ctx->pc = 0x15487Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154878u;
    // 0x15487c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1548C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1548C0u, 0x154878u, 0x154880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154880u;
label_154880:
    // 0x154880: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x154880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_154884:
    // 0x154884: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x154884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_154888:
    // 0x154888: 0xac505340  sw          $s0, 0x5340($v0)
    ctx->pc = 0x154888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 21312), GPR_U32(ctx, 16));
label_15488c:
    // 0x15488c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15488cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_154890:
    // 0x154890: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x154890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_154894:
    // 0x154894: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x154894u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_154898:
    // 0x154898: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x154898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_15489c:
    // 0x15489c: 0x40f809  jalr        $v0
label_1548a0:
    if (ctx->pc == 0x1548A0u) {
        ctx->pc = 0x1548A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15489Cu;
        // 0x1548a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1548A4u;
        goto label_1548a4;
    }
    ctx->pc = 0x15489Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1548A4u);
        ctx->pc = 0x1548A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15489Cu;
        // 0x1548a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15489Cu, 0x1548A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1548A4u;
label_1548a4:
    // 0x1548a4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1548a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1548a8:
    // 0x1548a8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1548a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1548ac:
    // 0x1548ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1548acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1548b0:
    // 0x1548b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1548b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1548b4:
    // 0x1548b4: 0x3e00008  jr          $ra
label_1548b8:
    if (ctx->pc == 0x1548B8u) {
        ctx->pc = 0x1548B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1548B4u;
        // 0x1548b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1548BCu;
        goto label_1548bc;
    }
    ctx->pc = 0x1548B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1548B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1548B4u;
        // 0x1548b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1548B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1548BCu;
label_1548bc:
    // 0x1548bc: 0x0  nop
    ctx->pc = 0x1548bcu;
    // NOP
    ctx->pc = 0x1548c0u;
}
