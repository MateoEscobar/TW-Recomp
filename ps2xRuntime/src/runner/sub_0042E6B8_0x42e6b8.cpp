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

// Function: sub_0042E6B8
// Address: 0x42e6b8 - 0x42e7c0
void sub_0042E6B8_0x42e6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042E6B8_0x42e6b8");
#endif

    switch (ctx->pc) {
        case 0x42e6f4u: goto label_42e6f4;
        case 0x42e708u: goto label_42e708;
        case 0x42e728u: goto label_42e728;
        case 0x42e73cu: goto label_42e73c;
        case 0x42e760u: goto label_42e760;
        case 0x42e76cu: goto label_42e76c;
        case 0x42e798u: goto label_42e798;
        default: break;
    }

    ctx->pc = 0x42e6b8u;

    // 0x42e6b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x42e6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x42e6bc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x42e6bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e6c0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x42e6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x42e6c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x42e6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x42e6c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x42e6c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e6cc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x42e6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x42e6d0: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x42e6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x42e6d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x42e6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x42e6d8: 0x24a5c1a0  addiu       $a1, $a1, -0x3E60
    ctx->pc = 0x42e6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951328));
    // 0x42e6dc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x42e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x42e6e0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x42e6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x42e6e4: 0x2442000d  addiu       $v0, $v0, 0xD
    ctx->pc = 0x42e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
    // 0x42e6e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42e6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e6ec: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x42E6ECu;
    SET_GPR_U32(ctx, 31, 0x42E6F4u);
    ctx->pc = 0x42E6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42E6ECu;
    // 0x42e6f0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x42E6ECu, 0x42E6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42E6F4u;
label_42e6f4:
    // 0x42e6f4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x42E6F4u;
    {
        const bool branch_taken_0x42e6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E6F4u;
        // 0x42e6f8: 0x3c100059  lui         $s0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e6f4) {
            ctx->pc = 0x42E720u;
            goto label_42e720;
        }
    }
    ctx->pc = 0x42E6FCu;
    // 0x42e6fc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x42e6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x42e700: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x42E700u;
    SET_GPR_U32(ctx, 31, 0x42E708u);
    ctx->pc = 0x42E704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42E700u;
    // 0x42e704: 0x2605c1a8  addiu       $a1, $s0, -0x3E58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x42E700u, 0x42E708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42E708u;
label_42e708:
    // 0x42e708: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x42E708u;
    {
        const bool branch_taken_0x42e708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E708u;
        // 0x42e70c: 0x2404007a  addiu       $a0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e708) {
            ctx->pc = 0x42E720u;
            goto label_42e720;
        }
    }
    ctx->pc = 0x42E710u;
    // 0x42e710: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x42e710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x42e714: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x42e714u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42e718: 0x14640022  bne         $v1, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x42E718u;
    {
        const bool branch_taken_0x42e718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x42E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E718u;
        // 0x42e71c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e718) {
            ctx->pc = 0x42E7A4u;
            goto label_42e7a4;
        }
    }
    ctx->pc = 0x42E720u;
label_42e720:
    // 0x42e720: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x42E720u;
    SET_GPR_U32(ctx, 31, 0x42E728u);
    ctx->pc = 0x42E724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42E720u;
    // 0x42e724: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x42E720u, 0x42E728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42E728u;
label_42e728:
    // 0x42e728: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x42e728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x42e72c: 0x2605c1a8  addiu       $a1, $s0, -0x3E58
    ctx->pc = 0x42e72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951336));
    // 0x42e730: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x42e730u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x42e734: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x42E734u;
    SET_GPR_U32(ctx, 31, 0x42E73Cu);
    ctx->pc = 0x42E738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42E734u;
    // 0x42e738: 0x26500001  addiu       $s0, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x42E734u, 0x42E73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42E73Cu;
label_42e73c:
    // 0x42e73c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x42E73Cu;
    {
        const bool branch_taken_0x42e73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42e73c) {
            ctx->pc = 0x42E740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42E73Cu;
            // 0x42e740: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42E754u;
            goto label_42e754;
        }
    }
    ctx->pc = 0x42E744u;
    // 0x42e744: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x42e744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x42e748: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x42e748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x42e74c: 0x26500005  addiu       $s0, $s2, 0x5
    ctx->pc = 0x42e74cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
    // 0x42e750: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x42e750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_42e754:
    // 0x42e754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42e754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e758: 0xc10b7f0  jal         func_42DFC0
    ctx->pc = 0x42E758u;
    SET_GPR_U32(ctx, 31, 0x42E760u);
    ctx->pc = 0x42E75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42E758u;
    // 0x42e75c: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DFC0u, 0x42E758u, 0x42E760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42E760u;
label_42e760:
    // 0x42e760: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42e760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e764: 0xc10b802  jal         func_42E008
    ctx->pc = 0x42E764u;
    SET_GPR_U32(ctx, 31, 0x42E76Cu);
    ctx->pc = 0x42E768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42E764u;
    // 0x42e768: 0x2625000c  addiu       $a1, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42E008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42E008u, 0x42E764u, 0x42E76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42E76Cu;
label_42e76c:
    // 0x42e76c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42e76cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e770: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x42e770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x42e774: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x42e774u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x42e778: 0x2404007a  addiu       $a0, $zero, 0x7A
    ctx->pc = 0x42e778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x42e77c: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x42e77cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x42e780: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x42e780u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x42e784: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x42E784u;
    {
        const bool branch_taken_0x42e784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x42E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E784u;
        // 0x42e788: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e784) {
            ctx->pc = 0x42E7A0u;
            goto label_42e7a0;
        }
    }
    ctx->pc = 0x42E78Cu;
    // 0x42e78c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42e78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e790: 0xc10b7f0  jal         func_42DFC0
    ctx->pc = 0x42E790u;
    SET_GPR_U32(ctx, 31, 0x42E798u);
    ctx->pc = 0x42E794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42E790u;
    // 0x42e794: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DFC0u, 0x42E790u, 0x42E798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42E798u;
label_42e798:
    // 0x42e798: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x42e798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42e79c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x42e79cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_42e7a0:
    // 0x42e7a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x42e7a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42e7a4:
    // 0x42e7a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x42e7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x42e7a8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x42e7a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x42e7ac: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x42e7acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42e7b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x42e7b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42e7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x42E7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42E7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E7B4u;
        // 0x42e7b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42E7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42E7BCu;
    // 0x42e7bc: 0x0  nop
    ctx->pc = 0x42e7bcu;
    // NOP
    ctx->pc = 0x42e7c0u;
}
