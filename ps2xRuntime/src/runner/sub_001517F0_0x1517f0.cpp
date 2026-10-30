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

// Function: sub_001517F0
// Address: 0x1517f0 - 0x1518c0
void sub_001517F0_0x1517f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001517F0_0x1517f0");
#endif

    switch (ctx->pc) {
        case 0x151830u: goto label_151830;
        case 0x151840u: goto label_151840;
        case 0x151848u: goto label_151848;
        case 0x151850u: goto label_151850;
        case 0x15185cu: goto label_15185c;
        case 0x151868u: goto label_151868;
        case 0x151870u: goto label_151870;
        case 0x151878u: goto label_151878;
        case 0x15188cu: goto label_15188c;
        case 0x15189cu: goto label_15189c;
        default: break;
    }

    ctx->pc = 0x1517f0u;

    // 0x1517f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1517f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1517f4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1517f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1517f8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1517f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1517fc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1517fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x151800: 0x48403  sra         $s0, $a0, 16
    ctx->pc = 0x151800u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 4), 16));
    // 0x151804: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x151804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x151808: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x151808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x15180c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x15180cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x151810: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x151810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x151814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x151818: 0x59403  sra         $s2, $a1, 16
    ctx->pc = 0x151818u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 5), 16));
    // 0x15181c: 0x2c420030  sltiu       $v0, $v0, 0x30
    ctx->pc = 0x15181cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x151820: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x151820u;
    {
        const bool branch_taken_0x151820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151820u;
        // 0x151824: 0x68c03  sra         $s1, $a2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151820) {
            ctx->pc = 0x151880u;
            goto label_151880;
        }
    }
    ctx->pc = 0x151828u;
    // 0x151828: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x151828u;
    SET_GPR_U32(ctx, 31, 0x151830u);
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x151828u, 0x151830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151830u;
label_151830:
    // 0x151830: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x151830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151834: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x151834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151838: 0xc054494  jal         func_151250
    ctx->pc = 0x151838u;
    SET_GPR_U32(ctx, 31, 0x151840u);
    ctx->pc = 0x15183Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151838u;
    // 0x15183c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151250u, 0x151838u, 0x151840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151840u;
label_151840:
    // 0x151840: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x151840u;
    SET_GPR_U32(ctx, 31, 0x151848u);
    ctx->pc = 0x151844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151840u;
    // 0x151844: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x151840u, 0x151848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151848u;
label_151848:
    // 0x151848: 0xc053722  jal         func_14DC88
    ctx->pc = 0x151848u;
    SET_GPR_U32(ctx, 31, 0x151850u);
    ctx->pc = 0x15184Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151848u;
    // 0x15184c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x151848u, 0x151850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151850u;
label_151850:
    // 0x151850: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x151850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x151854: 0xc053722  jal         func_14DC88
    ctx->pc = 0x151854u;
    SET_GPR_U32(ctx, 31, 0x15185Cu);
    ctx->pc = 0x151858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151854u;
    // 0x151858: 0x844441a8  lh          $a0, 0x41A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16808)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x151854u, 0x15185Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15185Cu;
label_15185c:
    // 0x15185c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15185cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x151860: 0xc053722  jal         func_14DC88
    ctx->pc = 0x151860u;
    SET_GPR_U32(ctx, 31, 0x151868u);
    ctx->pc = 0x151864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151860u;
    // 0x151864: 0x844441ac  lh          $a0, 0x41AC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16812)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x151860u, 0x151868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151868u;
label_151868:
    // 0x151868: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x151868u;
    SET_GPR_U32(ctx, 31, 0x151870u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x151868u, 0x151870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151870u;
label_151870:
    // 0x151870: 0xc05471c  jal         func_151C70
    ctx->pc = 0x151870u;
    SET_GPR_U32(ctx, 31, 0x151878u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x151870u, 0x151878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151878u;
label_151878:
    // 0x151878: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x151878u;
    {
        const bool branch_taken_0x151878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151878u;
        // 0x15187c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151878) {
            ctx->pc = 0x1518A0u;
            goto label_1518a0;
        }
    }
    ctx->pc = 0x151880u;
label_151880:
    // 0x151880: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x151880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x151884: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x151884u;
    SET_GPR_U32(ctx, 31, 0x15188Cu);
    ctx->pc = 0x151888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151884u;
    // 0x151888: 0x2484cbb8  addiu       $a0, $a0, -0x3448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x151884u, 0x15188Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15188Cu;
label_15188c:
    // 0x15188c: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x15188cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x151890: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x151890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151894: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x151894u;
    SET_GPR_U32(ctx, 31, 0x15189Cu);
    ctx->pc = 0x151898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151894u;
    // 0x151898: 0x2484cbe8  addiu       $a0, $a0, -0x3418 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x151894u, 0x15189Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15189Cu;
label_15189c:
    // 0x15189c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15189cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1518a0:
    // 0x1518a0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1518a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1518a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1518a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1518a8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1518a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1518ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1518acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1518b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1518B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1518B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1518B0u;
        // 0x1518b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1518B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1518B8u;
    // 0x1518b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1518b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1518bc: 0x0  nop
    ctx->pc = 0x1518bcu;
    // NOP
    ctx->pc = 0x1518c0u;
}
