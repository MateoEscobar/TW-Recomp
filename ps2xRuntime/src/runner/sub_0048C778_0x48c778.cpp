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

// Function: sub_0048C778
// Address: 0x48c778 - 0x48c8f0
void sub_0048C778_0x48c778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048C778_0x48c778");
#endif

    switch (ctx->pc) {
        case 0x48c7a8u: goto label_48c7a8;
        case 0x48c7dcu: goto label_48c7dc;
        case 0x48c8a4u: goto label_48c8a4;
        default: break;
    }

    ctx->pc = 0x48c778u;

    // 0x48c778: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48c778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48c77c: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x48c77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48c780: 0x8f838990  lw          $v1, -0x7670($gp)
    ctx->pc = 0x48c780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936976)));
    // 0x48c784: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x48c784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x48c788: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48c788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48c78c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x48c78cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c790: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48c790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48c794: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x48c794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x48c798: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48C798u;
    {
        const bool branch_taken_0x48c798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C798u;
        // 0x48c79c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c798) {
            ctx->pc = 0x48C7A8u;
            goto label_48c7a8;
        }
    }
    ctx->pc = 0x48C7A0u;
    // 0x48c7a0: 0xc123024  jal         func_48C090
    ctx->pc = 0x48C7A0u;
    SET_GPR_U32(ctx, 31, 0x48C7A8u);
    ctx->pc = 0x48C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C090u, 0x48C7A0u, 0x48C7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C7A8u;
label_48c7a8:
    // 0x48c7a8: 0x8f8289b8  lw          $v0, -0x7648($gp)
    ctx->pc = 0x48c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937016)));
    // 0x48c7ac: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x48C7ACu;
    {
        const bool branch_taken_0x48c7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C7ACu;
        // 0x48c7b0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c7ac) {
            ctx->pc = 0x48C84Cu;
            goto label_48c84c;
        }
    }
    ctx->pc = 0x48C7B4u;
    // 0x48c7b4: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x48c7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x48c7b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x48c7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x48c7bc: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x48c7bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x48c7c0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x48C7C0u;
    {
        const bool branch_taken_0x48c7c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C7C0u;
        // 0x48c7c4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c7c0) {
            ctx->pc = 0x48C7F8u;
            goto label_48c7f8;
        }
    }
    ctx->pc = 0x48C7C8u;
    // 0x48c7c8: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x48c7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x48c7cc: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x48c7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x48c7d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x48c7d0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x48c7d4: 0xf  sync
    ctx->pc = 0x48c7d4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x48c7d8: 0x40f  sync.p
    ctx->pc = 0x48c7d8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_48c7dc:
    // 0x48c7dc: 0x0  nop
    ctx->pc = 0x48c7dcu;
    // NOP
    // 0x48c7e0: 0x0  nop
    ctx->pc = 0x48c7e0u;
    // NOP
    // 0x48c7e4: 0x0  nop
    ctx->pc = 0x48c7e4u;
    // NOP
    // 0x48c7e8: 0x0  nop
    ctx->pc = 0x48c7e8u;
    // NOP
    // 0x48c7ec: 0x0  nop
    ctx->pc = 0x48c7ecu;
    // NOP
    // 0x48c7f0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x48C7F0u;
    {
        const bool branch_taken_0x48c7f0 = (false);
        if (branch_taken_0x48c7f0) {
            ctx->pc = 0x48C7DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48c7dc;
        }
    }
    ctx->pc = 0x48C7F8u;
label_48c7f8:
    // 0x48c7f8: 0x8f8789b4  lw          $a3, -0x764C($gp)
    ctx->pc = 0x48c7f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937012)));
    // 0x48c7fc: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x48C7FCu;
    {
        const bool branch_taken_0x48c7fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C7FCu;
        // 0x48c800: 0x8f8289bc  lw          $v0, -0x7644($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c7fc) {
            ctx->pc = 0x48C82Cu;
            goto label_48c82c;
        }
    }
    ctx->pc = 0x48C804u;
    // 0x48c804: 0x24041121  addiu       $a0, $zero, 0x1121
    ctx->pc = 0x48c804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4385));
    // 0x48c808: 0x8f8589b0  lw          $a1, -0x7650($gp)
    ctx->pc = 0x48c808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937008)));
    // 0x48c80c: 0x24060122  addiu       $a2, $zero, 0x122
    ctx->pc = 0x48c80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x48c810: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x48c810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x48c814: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x48c814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x48c818: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x48c818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x48c81c: 0xaf8389bc  sw          $v1, -0x7644($gp)
    ctx->pc = 0x48c81cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937020), GPR_U32(ctx, 3));
    // 0x48c820: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x48c820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x48c824: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x48C824u;
    {
        const bool branch_taken_0x48c824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C824u;
        // 0x48c828: 0xac670004  sw          $a3, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c824) {
            ctx->pc = 0x48C83Cu;
            goto label_48c83c;
        }
    }
    ctx->pc = 0x48C82Cu;
label_48c82c:
    // 0x48c82c: 0x8f8389b8  lw          $v1, -0x7648($gp)
    ctx->pc = 0x48c82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937016)));
    // 0x48c830: 0x8f8489b0  lw          $a0, -0x7650($gp)
    ctx->pc = 0x48c830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937008)));
    // 0x48c834: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x48c834u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x48c838: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x48c838u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_48c83c:
    // 0x48c83c: 0xaf8089b0  sw          $zero, -0x7650($gp)
    ctx->pc = 0x48c83cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937008), GPR_U32(ctx, 0));
    // 0x48c840: 0xaf8089b4  sw          $zero, -0x764C($gp)
    ctx->pc = 0x48c840u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937012), GPR_U32(ctx, 0));
    // 0x48c844: 0xaf8089b8  sw          $zero, -0x7648($gp)
    ctx->pc = 0x48c844u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937016), GPR_U32(ctx, 0));
    // 0x48c848: 0xaf8089bc  sw          $zero, -0x7644($gp)
    ctx->pc = 0x48c848u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937020), GPR_U32(ctx, 0));
label_48c84c:
    // 0x48c84c: 0x8f8689e4  lw          $a2, -0x761C($gp)
    ctx->pc = 0x48c84cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937060)));
    // 0x48c850: 0x8f8289e0  lw          $v0, -0x7620($gp)
    ctx->pc = 0x48c850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937056)));
    // 0x48c854: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x48c854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x48c858: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48C858u;
    {
        const bool branch_taken_0x48c858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C858u;
        // 0x48c85c: 0x24c20008  addiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c858) {
            ctx->pc = 0x48C86Cu;
            goto label_48c86c;
        }
    }
    ctx->pc = 0x48C860u;
    // 0x48c860: 0xacd00000  sw          $s0, 0x0($a2)
    ctx->pc = 0x48c860u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
    // 0x48c864: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x48C864u;
    {
        const bool branch_taken_0x48c864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C864u;
        // 0x48c868: 0xacd10004  sw          $s1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c864) {
            ctx->pc = 0x48C8D4u;
            goto label_48c8d4;
        }
    }
    ctx->pc = 0x48C86Cu;
label_48c86c:
    // 0x48c86c: 0x8f8289dc  lw          $v0, -0x7624($gp)
    ctx->pc = 0x48c86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937052)));
    // 0x48c870: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x48c870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x48c874: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x48c874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x48c878: 0x8f8489d8  lw          $a0, -0x7628($gp)
    ctx->pc = 0x48c878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937048)));
    // 0x48c87c: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x48c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x48c880: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x48c880u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x48c884: 0x24a30080  addiu       $v1, $a1, 0x80
    ctx->pc = 0x48c884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x48c888: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x48c888u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x48c88c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x48C88Cu;
    {
        const bool branch_taken_0x48c88c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C88Cu;
        // 0x48c890: 0x24c20008  addiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c88c) {
            ctx->pc = 0x48C8ACu;
            goto label_48c8ac;
        }
    }
    ctx->pc = 0x48C894u;
    // 0x48c894: 0xacd00000  sw          $s0, 0x0($a2)
    ctx->pc = 0x48c894u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
    // 0x48c898: 0xacd10004  sw          $s1, 0x4($a2)
    ctx->pc = 0x48c898u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 17));
    // 0x48c89c: 0xc123142  jal         func_48C508
    ctx->pc = 0x48C89Cu;
    SET_GPR_U32(ctx, 31, 0x48C8A4u);
    ctx->pc = 0x48C8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48C89Cu;
    // 0x48c8a0: 0xaf8289e4  sw          $v0, -0x761C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937060), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C508u, 0x48C89Cu, 0x48C8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C8A4u;
label_48c8a4:
    // 0x48c8a4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x48C8A4u;
    {
        const bool branch_taken_0x48c8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C8A4u;
        // 0x48c8a8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c8a4) {
            ctx->pc = 0x48C8DCu;
            goto label_48c8dc;
        }
    }
    ctx->pc = 0x48C8ACu;
label_48c8ac:
    // 0x48c8ac: 0xaf8389dc  sw          $v1, -0x7624($gp)
    ctx->pc = 0x48c8acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937052), GPR_U32(ctx, 3));
    // 0x48c8b0: 0x24a20078  addiu       $v0, $a1, 0x78
    ctx->pc = 0x48c8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 120));
    // 0x48c8b4: 0xaf8289e0  sw          $v0, -0x7620($gp)
    ctx->pc = 0x48c8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937056), GPR_U32(ctx, 2));
    // 0x48c8b8: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x48c8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x48c8bc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x48c8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x48c8c0: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x48c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x48c8c4: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x48c8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x48c8c8: 0xaf8589e4  sw          $a1, -0x761C($gp)
    ctx->pc = 0x48c8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937060), GPR_U32(ctx, 5));
    // 0x48c8cc: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x48c8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
    // 0x48c8d0: 0xacb10004  sw          $s1, 0x4($a1)
    ctx->pc = 0x48c8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 17));
label_48c8d4:
    // 0x48c8d4: 0xaf8289e4  sw          $v0, -0x761C($gp)
    ctx->pc = 0x48c8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937060), GPR_U32(ctx, 2));
    // 0x48c8d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x48c8d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48c8dc:
    // 0x48c8dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48c8dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48c8e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48c8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48c8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x48C8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C8E4u;
        // 0x48c8e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48C8E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48C8ECu;
    // 0x48c8ec: 0x0  nop
    ctx->pc = 0x48c8ecu;
    // NOP
    ctx->pc = 0x48c8f0u;
}
