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

// Function: sub_003707D0
// Address: 0x3707d0 - 0x3708c8
void sub_003707D0_0x3707d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003707D0_0x3707d0");
#endif

    switch (ctx->pc) {
        case 0x3707f8u: goto label_3707f8;
        case 0x370800u: goto label_370800;
        case 0x370810u: goto label_370810;
        case 0x370828u: goto label_370828;
        case 0x370830u: goto label_370830;
        case 0x37084cu: goto label_37084c;
        case 0x370858u: goto label_370858;
        case 0x37086cu: goto label_37086c;
        case 0x370884u: goto label_370884;
        case 0x370898u: goto label_370898;
        default: break;
    }

    ctx->pc = 0x3707d0u;

    // 0x3707d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3707d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3707d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3707d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3707d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3707d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3707dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3707dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3707e0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3707e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3707e4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3707e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3707e8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3707e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3707ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3707ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3707f0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3707F0u;
    SET_GPR_U32(ctx, 31, 0x3707F8u);
    ctx->pc = 0x3707F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3707F0u;
    // 0x3707f4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3707F0u, 0x3707F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3707F8u;
label_3707f8:
    // 0x3707f8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3707F8u;
    SET_GPR_U32(ctx, 31, 0x370800u);
    ctx->pc = 0x3707FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3707F8u;
    // 0x3707fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3707F8u, 0x370800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370800u;
label_370800:
    // 0x370800: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x370800u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370804: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x370804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370808: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x370808u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37080c: 0x0  nop
    ctx->pc = 0x37080cu;
    // NOP
label_370810:
    // 0x370810: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x370810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x370814: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x370814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370818: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x370818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37081c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37081cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370820: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x370820u;
    SET_GPR_U32(ctx, 31, 0x370828u);
    ctx->pc = 0x370824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370820u;
    // 0x370824: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x370820u, 0x370828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370828u;
label_370828:
    // 0x370828: 0xc10b108  jal         func_42C420
    ctx->pc = 0x370828u;
    SET_GPR_U32(ctx, 31, 0x370830u);
    ctx->pc = 0x37082Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370828u;
    // 0x37082c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x370828u, 0x370830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370830u;
label_370830:
    // 0x370830: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x370830u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x370834: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x370834u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x370838: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x370838u;
    {
        const bool branch_taken_0x370838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370838u;
        // 0x37083c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370838) {
            ctx->pc = 0x370810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_370810;
        }
    }
    ctx->pc = 0x370840u;
    // 0x370840: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x370840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370844: 0xc06cffa  jal         func_1B3FE8
    ctx->pc = 0x370844u;
    SET_GPR_U32(ctx, 31, 0x37084Cu);
    ctx->pc = 0x370848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370844u;
    // 0x370848: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3FE8u, 0x370844u, 0x37084Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37084Cu;
label_37084c:
    // 0x37084c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37084cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370850: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x370850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x370854: 0x0  nop
    ctx->pc = 0x370854u;
    // NOP
label_370858:
    // 0x370858: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x370858u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x37085c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x37085cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x370860: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x370860u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x370864: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x370864u;
    SET_GPR_U32(ctx, 31, 0x37086Cu);
    ctx->pc = 0x370868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370864u;
    // 0x370868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x370864u, 0x37086Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37086Cu;
label_37086c:
    // 0x37086c: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37086Cu;
    {
        const bool branch_taken_0x37086c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x370870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37086Cu;
        // 0x370870: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37086c) {
            ctx->pc = 0x370888u;
            goto label_370888;
        }
    }
    ctx->pc = 0x370874u;
    // 0x370874: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x370874u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x370878: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x370878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x37087c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x37087Cu;
    SET_GPR_U32(ctx, 31, 0x370884u);
    ctx->pc = 0x370880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37087Cu;
    // 0x370880: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x37087Cu, 0x370884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370884u;
label_370884:
    // 0x370884: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x370884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_370888:
    // 0x370888: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x370888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37088c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37088cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370890: 0xc102576  jal         func_4095D8
    ctx->pc = 0x370890u;
    SET_GPR_U32(ctx, 31, 0x370898u);
    ctx->pc = 0x370894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370890u;
    // 0x370894: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x370890u, 0x370898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370898u;
label_370898:
    // 0x370898: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x370898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37089c: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x37089cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3708a0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3708A0u;
    {
        const bool branch_taken_0x3708a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3708A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3708A0u;
        // 0x3708a4: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3708a0) {
            ctx->pc = 0x370858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_370858;
        }
    }
    ctx->pc = 0x3708A8u;
    // 0x3708a8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3708a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3708ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3708acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3708b0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3708b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3708b4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3708b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3708b8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3708b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3708bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3708bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3708c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3708C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3708C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3708C0u;
        // 0x3708c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3708C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3708C8u;
}
