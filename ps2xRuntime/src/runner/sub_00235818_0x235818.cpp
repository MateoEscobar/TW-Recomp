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

// Function: sub_00235818
// Address: 0x235818 - 0x235890
void sub_00235818_0x235818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235818_0x235818");
#endif

    switch (ctx->pc) {
        case 0x235834u: goto label_235834;
        case 0x23583cu: goto label_23583c;
        case 0x235858u: goto label_235858;
        case 0x235868u: goto label_235868;
        default: break;
    }

    ctx->pc = 0x235818u;

    // 0x235818: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x235818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23581c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23581cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x235820: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x235820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x235824: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x235824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x235828: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23582c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23582Cu;
    SET_GPR_U32(ctx, 31, 0x235834u);
    ctx->pc = 0x235830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23582Cu;
    // 0x235830: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23582Cu, 0x235834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235834u;
label_235834:
    // 0x235834: 0xc08a61a  jal         func_229868
    ctx->pc = 0x235834u;
    SET_GPR_U32(ctx, 31, 0x23583Cu);
    ctx->pc = 0x235838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235834u;
    // 0x235838: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x235834u, 0x23583Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23583Cu;
label_23583c:
    // 0x23583c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23583cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235840: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x235840u;
    {
        const bool branch_taken_0x235840 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x235844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235840u;
        // 0x235844: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235840) {
            ctx->pc = 0x235850u;
            goto label_235850;
        }
    }
    ctx->pc = 0x235848u;
    // 0x235848: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x235848u;
    {
        const bool branch_taken_0x235848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23584Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235848u;
        // 0x23584c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235848) {
            ctx->pc = 0x235878u;
            goto label_235878;
        }
    }
    ctx->pc = 0x235850u;
label_235850:
    // 0x235850: 0xc088ed2  jal         func_223B48
    ctx->pc = 0x235850u;
    SET_GPR_U32(ctx, 31, 0x235858u);
    ctx->pc = 0x235854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235850u;
    // 0x235854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x235850u, 0x235858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235858u;
label_235858:
    // 0x235858: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x235858u;
    {
        const bool branch_taken_0x235858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235858) {
            ctx->pc = 0x23585Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235858u;
            // 0x23585c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235874u;
            goto label_235874;
        }
    }
    ctx->pc = 0x235860u;
    // 0x235860: 0xc088e80  jal         func_223A00
    ctx->pc = 0x235860u;
    SET_GPR_U32(ctx, 31, 0x235868u);
    ctx->pc = 0x235864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235860u;
    // 0x235864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A00u, 0x235860u, 0x235868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235868u;
label_235868:
    // 0x235868: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x235868u;
    {
        const bool branch_taken_0x235868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235868u;
        // 0x23586c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235868) {
            ctx->pc = 0x235878u;
            goto label_235878;
        }
    }
    ctx->pc = 0x235870u;
    // 0x235870: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x235870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_235874:
    // 0x235874: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x235874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_235878:
    // 0x235878: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x235878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23587c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x23587cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235880: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235884: 0x3e00008  jr          $ra
    ctx->pc = 0x235884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235884u;
        // 0x235888: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23588Cu;
    // 0x23588c: 0x0  nop
    ctx->pc = 0x23588cu;
    // NOP
    ctx->pc = 0x235890u;
}
