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

// Function: sub_0017E6C0
// Address: 0x17e6c0 - 0x17e7e8
void sub_0017E6C0_0x17e6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E6C0_0x17e6c0");
#endif

    switch (ctx->pc) {
        case 0x17e6f8u: goto label_17e6f8;
        case 0x17e708u: goto label_17e708;
        case 0x17e740u: goto label_17e740;
        case 0x17e784u: goto label_17e784;
        case 0x17e7a0u: goto label_17e7a0;
        default: break;
    }

    ctx->pc = 0x17e6c0u;

    // 0x17e6c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17e6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17e6c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17e6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17e6c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17e6c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e6cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17e6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17e6d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e6d4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x17e6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x17e6d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17e6d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e6dc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17e6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17e6e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e6e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17e6e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e6e8: 0xa6200014  sh          $zero, 0x14($s1)
    ctx->pc = 0x17e6e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x17e6ec: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x17e6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x17e6f0: 0xc05f9fa  jal         func_17E7E8
    ctx->pc = 0x17E6F0u;
    SET_GPR_U32(ctx, 31, 0x17E6F8u);
    ctx->pc = 0x17E6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E6F0u;
    // 0x17e6f4: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E7E8u, 0x17E6F0u, 0x17E6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E6F8u;
label_17e6f8:
    // 0x17e6f8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x17e6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x17e6fc: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x17E6FCu;
    {
        const bool branch_taken_0x17e6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E6FCu;
        // 0x17e700: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e6fc) {
            ctx->pc = 0x17E7D0u;
            goto label_17e7d0;
        }
    }
    ctx->pc = 0x17E704u;
    // 0x17e704: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x17e704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17e708:
    // 0x17e708: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x17e708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x17e70c: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x17e70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x17e710: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17e710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17e714: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x17e714u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17e718: 0x52040028  beql        $s0, $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x17E718u;
    {
        const bool branch_taken_0x17e718 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x17e718) {
            ctx->pc = 0x17E71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E718u;
            // 0x17e71c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E7BCu;
            goto label_17e7bc;
        }
    }
    ctx->pc = 0x17E720u;
    // 0x17e720: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x17e720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x17e724: 0x52020025  beql        $s0, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x17E724u;
    {
        const bool branch_taken_0x17e724 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x17e724) {
            ctx->pc = 0x17E728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E724u;
            // 0x17e728: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E7BCu;
            goto label_17e7bc;
        }
    }
    ctx->pc = 0x17E72Cu;
    // 0x17e72c: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x17e72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x17e730: 0x1602000f  bne         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x17E730u;
    {
        const bool branch_taken_0x17e730 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x17e730) {
            ctx->pc = 0x17E770u;
            goto label_17e770;
        }
    }
    ctx->pc = 0x17E738u;
    // 0x17e738: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x17E738u;
    {
        const bool branch_taken_0x17e738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E738u;
        // 0x17e73c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e738) {
            ctx->pc = 0x17E7BCu;
            goto label_17e7bc;
        }
    }
    ctx->pc = 0x17E740u;
label_17e740:
    // 0x17e740: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17e740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17e744: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x17e744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x17e748: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x17e748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17e74c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x17e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x17e750: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17e750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e754: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x17e754u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x17e758: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x17e758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x17e75c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x17e75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17e760: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17e760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17e764: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17e764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17e768: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x17E768u;
    {
        const bool branch_taken_0x17e768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E768u;
        // 0x17e76c: 0xac470000  sw          $a3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e768) {
            ctx->pc = 0x17E7BCu;
            goto label_17e7bc;
        }
    }
    ctx->pc = 0x17E770u;
label_17e770:
    // 0x17e770: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x17E770u;
    {
        const bool branch_taken_0x17e770 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e770) {
            ctx->pc = 0x17E774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E770u;
            // 0x17e774: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E7C0u;
            goto label_17e7c0;
        }
    }
    ctx->pc = 0x17E778u;
    // 0x17e778: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17e778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17e77c: 0xc05f1a4  jal         func_17C690
    ctx->pc = 0x17E77Cu;
    SET_GPR_U32(ctx, 31, 0x17E784u);
    ctx->pc = 0x17E780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E77Cu;
    // 0x17e780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C690u, 0x17E77Cu, 0x17E784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E784u;
label_17e784:
    // 0x17e784: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x17e784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x17e788: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x17E788u;
    {
        const bool branch_taken_0x17e788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E788u;
        // 0x17e78c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e788) {
            ctx->pc = 0x17E7BCu;
            goto label_17e7bc;
        }
    }
    ctx->pc = 0x17E790u;
    // 0x17e790: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x17e790u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17e794: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x17e794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e798: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x17e798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e79c: 0x0  nop
    ctx->pc = 0x17e79cu;
    // NOP
label_17e7a0:
    // 0x17e7a0: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x17e7a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17e7a4: 0x10f0ffe6  beq         $a3, $s0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x17E7A4u;
    {
        const bool branch_taken_0x17e7a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 16));
        ctx->pc = 0x17E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E7A4u;
        // 0x17e7a8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e7a4) {
            ctx->pc = 0x17E740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e740;
        }
    }
    ctx->pc = 0x17E7ACu;
    // 0x17e7ac: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x17e7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x17e7b0: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x17e7b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x17e7b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17E7B4u;
    {
        const bool branch_taken_0x17e7b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E7B4u;
        // 0x17e7b8: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e7b4) {
            ctx->pc = 0x17E7A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e7a0;
        }
    }
    ctx->pc = 0x17E7BCu;
label_17e7bc:
    // 0x17e7bc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x17e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_17e7c0:
    // 0x17e7c0: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x17e7c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17e7c4: 0x5440ffd0  bnel        $v0, $zero, . + 4 + (-0x30 << 2)
    ctx->pc = 0x17E7C4u;
    {
        const bool branch_taken_0x17e7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e7c4) {
            ctx->pc = 0x17E7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E7C4u;
            // 0x17e7c8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e708;
        }
    }
    ctx->pc = 0x17E7CCu;
    // 0x17e7cc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17e7ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17e7d0:
    // 0x17e7d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e7d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17e7d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e7d8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x17e7d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e7dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x17E7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E7E0u;
        // 0x17e7e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E7E8u;
}
