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

// Function: sub_00328818
// Address: 0x328818 - 0x3288a8
void sub_00328818_0x328818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328818_0x328818");
#endif

    switch (ctx->pc) {
        case 0x32885cu: goto label_32885c;
        case 0x328878u: goto label_328878;
        default: break;
    }

    ctx->pc = 0x328818u;

    // 0x328818: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x328818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32881c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32881cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x328820: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x328820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x328824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x328824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x328828: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x328828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32882c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x32882cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x328830: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x328830u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x328834: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x328834u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x328838: 0xc28023  subu        $s0, $a2, $v0
    ctx->pc = 0x328838u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x32883c: 0x5e000005  bgtzl       $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32883Cu;
    {
        const bool branch_taken_0x32883c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x32883c) {
            ctx->pc = 0x328840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32883Cu;
            // 0x328840: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328854u;
            goto label_328854;
        }
    }
    ctx->pc = 0x328844u;
    // 0x328844: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x328844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x328848: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x328848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x32884c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x32884Cu;
    {
        const bool branch_taken_0x32884c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32884Cu;
        // 0x328850: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32884c) {
            ctx->pc = 0x328890u;
            goto label_328890;
        }
    }
    ctx->pc = 0x328854u;
label_328854:
    // 0x328854: 0xc0ca1dc  jal         func_328770
    ctx->pc = 0x328854u;
    SET_GPR_U32(ctx, 31, 0x32885Cu);
    ctx->pc = 0x328858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328854u;
    // 0x328858: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328770u, 0x328854u, 0x32885Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32885Cu;
label_32885c:
    // 0x32885c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x32885cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x328860: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x328860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x328864: 0x5202000b  beql        $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x328864u;
    {
        const bool branch_taken_0x328864 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x328864) {
            ctx->pc = 0x328868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328864u;
            // 0x328868: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328894u;
            goto label_328894;
        }
    }
    ctx->pc = 0x32886Cu;
    // 0x32886c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32886cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328870: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x328870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x328874: 0x0  nop
    ctx->pc = 0x328874u;
    // NOP
label_328878:
    // 0x328878: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x328878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32887c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x32887cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x328880: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x328880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x328884: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x328884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x328888: 0x1603fffb  bne         $s0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x328888u;
    {
        const bool branch_taken_0x328888 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x32888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328888u;
        // 0x32888c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328888) {
            ctx->pc = 0x328878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328878;
        }
    }
    ctx->pc = 0x328890u;
label_328890:
    // 0x328890: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x328890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_328894:
    // 0x328894: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x328894u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x328898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32889c: 0x3e00008  jr          $ra
    ctx->pc = 0x32889Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3288A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32889Cu;
        // 0x3288a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32889Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3288A4u;
    // 0x3288a4: 0x0  nop
    ctx->pc = 0x3288a4u;
    // NOP
    ctx->pc = 0x3288a8u;
}
