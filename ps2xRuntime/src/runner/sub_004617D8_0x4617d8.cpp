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

// Function: sub_004617D8
// Address: 0x4617d8 - 0x461930
void sub_004617D8_0x4617d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004617D8_0x4617d8");
#endif

    switch (ctx->pc) {
        case 0x461810u: goto label_461810;
        case 0x46182cu: goto label_46182c;
        case 0x461868u: goto label_461868;
        case 0x4618b0u: goto label_4618b0;
        case 0x4618e4u: goto label_4618e4;
        default: break;
    }

    ctx->pc = 0x4617d8u;

    // 0x4617d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4617d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4617dc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4617dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4617e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4617e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4617e4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4617e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4617e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4617e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4617ec: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4617ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x4617f0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4617f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x4617f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4617f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4617f8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4617f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4617fc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4617FCu;
    {
        const bool branch_taken_0x4617fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x461800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4617FCu;
        // 0x461800: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4617fc) {
            ctx->pc = 0x46184Cu;
            goto label_46184c;
        }
    }
    ctx->pc = 0x461804u;
    // 0x461804: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x461804u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x461808: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x461808u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46180c: 0x0  nop
    ctx->pc = 0x46180cu;
    // NOP
label_461810:
    // 0x461810: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x461810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x461814: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x461814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x461818: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x461818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x46181c: 0x54740007  bnel        $v1, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x46181Cu;
    {
        const bool branch_taken_0x46181c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x46181c) {
            ctx->pc = 0x461820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46181Cu;
            // 0x461820: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46183Cu;
            goto label_46183c;
        }
    }
    ctx->pc = 0x461824u;
    // 0x461824: 0xc11869a  jal         func_461A68
    ctx->pc = 0x461824u;
    SET_GPR_U32(ctx, 31, 0x46182Cu);
    ctx->pc = 0x461828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461824u;
    // 0x461828: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461A68u, 0x461824u, 0x46182Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46182Cu;
label_46182c:
    // 0x46182c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x46182cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x461830: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x461830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x461834: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x461834u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x461838: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x461838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_46183c:
    // 0x46183c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x46183cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x461840: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x461840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x461844: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x461844u;
    {
        const bool branch_taken_0x461844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x461848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461844u;
        // 0x461848: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461844) {
            ctx->pc = 0x461810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_461810;
        }
    }
    ctx->pc = 0x46184Cu;
label_46184c:
    // 0x46184c: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x46184cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x461850: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x461850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461854: 0x10e0002a  beqz        $a3, . + 4 + (0x2A << 2)
    ctx->pc = 0x461854u;
    {
        const bool branch_taken_0x461854 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x461858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461854u;
        // 0x461858: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461854) {
            ctx->pc = 0x461900u;
            goto label_461900;
        }
    }
    ctx->pc = 0x46185Cu;
    // 0x46185c: 0x24130014  addiu       $s3, $zero, 0x14
    ctx->pc = 0x46185cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x461860: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x461860u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x461864: 0x0  nop
    ctx->pc = 0x461864u;
    // NOP
label_461868:
    // 0x461868: 0x2332018  mult        $a0, $s1, $s3
    ctx->pc = 0x461868u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x46186c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x46186cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x461870: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x461870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x461874: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x461874u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x461878: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x461878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x46187c: 0x1454001c  bne         $v0, $s4, . + 4 + (0x1C << 2)
    ctx->pc = 0x46187Cu;
    {
        const bool branch_taken_0x46187c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x461880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46187Cu;
        // 0x461880: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46187c) {
            ctx->pc = 0x4618F0u;
            goto label_4618f0;
        }
    }
    ctx->pc = 0x461884u;
    // 0x461884: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x461884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x461888: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x461888u;
    {
        const bool branch_taken_0x461888 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x46188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461888u;
        // 0x46188c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461888) {
            ctx->pc = 0x4618D8u;
            goto label_4618d8;
        }
    }
    ctx->pc = 0x461890u;
    // 0x461890: 0x10e00012  beqz        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x461890u;
    {
        const bool branch_taken_0x461890 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x461894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461890u;
        // 0x461894: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461890) {
            ctx->pc = 0x4618DCu;
            goto label_4618dc;
        }
    }
    ctx->pc = 0x461898u;
    // 0x461898: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x461898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x46189c: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x46189Cu;
    {
        const bool branch_taken_0x46189c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x4618A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46189Cu;
        // 0x4618a0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46189c) {
            ctx->pc = 0x4618B0u;
            goto label_4618b0;
        }
    }
    ctx->pc = 0x4618A4u;
    // 0x4618a4: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x4618a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x4618a8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4618A8u;
    {
        const bool branch_taken_0x4618a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4618ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4618A8u;
        // 0x4618ac: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4618a8) {
            ctx->pc = 0x4618DCu;
            goto label_4618dc;
        }
    }
    ctx->pc = 0x4618B0u;
label_4618b0:
    // 0x4618b0: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x4618b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4618b4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4618B4u;
    {
        const bool branch_taken_0x4618b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4618B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4618B4u;
        // 0x4618b8: 0xb31018  mult        $v0, $a1, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4618b4) {
            ctx->pc = 0x4618DCu;
            goto label_4618dc;
        }
    }
    ctx->pc = 0x4618BCu;
    // 0x4618bc: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x4618bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x4618c0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4618c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4618c4: 0x14c2fffa  bne         $a2, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4618C4u;
    {
        const bool branch_taken_0x4618c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x4618C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4618C4u;
        // 0x4618c8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4618c4) {
            ctx->pc = 0x4618B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4618b0;
        }
    }
    ctx->pc = 0x4618CCu;
    // 0x4618cc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4618ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x4618d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4618D0u;
    {
        const bool branch_taken_0x4618d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4618D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4618D0u;
        // 0x4618d4: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4618d0) {
            ctx->pc = 0x4618DCu;
            goto label_4618dc;
        }
    }
    ctx->pc = 0x4618D8u;
label_4618d8:
    // 0x4618d8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x4618d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_4618dc:
    // 0x4618dc: 0xc118726  jal         func_461C98
    ctx->pc = 0x4618DCu;
    SET_GPR_U32(ctx, 31, 0x4618E4u);
    ctx->pc = 0x461C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461C98u, 0x4618DCu, 0x4618E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4618E4u;
label_4618e4:
    // 0x4618e4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x4618e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4618e8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x4618e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x4618ec: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x4618ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
label_4618f0:
    // 0x4618f0: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x4618f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4618f4: 0x227102b  sltu        $v0, $s1, $a3
    ctx->pc = 0x4618f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4618f8: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x4618F8u;
    {
        const bool branch_taken_0x4618f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4618FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4618F8u;
        // 0x4618fc: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4618f8) {
            ctx->pc = 0x461868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_461868;
        }
    }
    ctx->pc = 0x461900u;
label_461900:
    // 0x461900: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x461900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x461904: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x461904u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461908: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x461908u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x46190c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x46190cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x461910: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x461910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x461914: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x461914u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x461918: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x461918u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46191c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x46191cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x461920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x461920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x461924: 0x3e00008  jr          $ra
    ctx->pc = 0x461924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x461928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461924u;
        // 0x461928: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x461924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46192Cu;
    // 0x46192c: 0x0  nop
    ctx->pc = 0x46192cu;
    // NOP
    ctx->pc = 0x461930u;
}
