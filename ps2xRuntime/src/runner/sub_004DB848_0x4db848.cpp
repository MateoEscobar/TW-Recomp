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

// Function: sub_004DB848
// Address: 0x4db848 - 0x4db8f8
void sub_004DB848_0x4db848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB848_0x4db848");
#endif

    switch (ctx->pc) {
        case 0x4db878u: goto label_4db878;
        case 0x4db890u: goto label_4db890;
        default: break;
    }

    ctx->pc = 0x4db848u;

    // 0x4db848: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4db848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4db84c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4db84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4db850: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4db850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4db854: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4db854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db858: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4db858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4db85c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x4db85cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db860: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4db860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x4db864: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4db864u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db868: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4db868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x4db86c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4db86cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db870: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4db870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4db874: 0x3c14006f  lui         $s4, 0x6F
    ctx->pc = 0x4db874u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)111 << 16));
label_4db878:
    // 0x4db878: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4db878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4db87c: 0x8e82bd30  lw          $v0, -0x42D0($s4)
    ctx->pc = 0x4db87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950192)));
    // 0x4db880: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4DB880u;
    {
        const bool branch_taken_0x4db880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4db880) {
            ctx->pc = 0x4DB884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DB880u;
            // 0x4db884: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DB8C4u;
            goto label_4db8c4;
        }
    }
    ctx->pc = 0x4DB888u;
    // 0x4db888: 0xc0e4060  jal         func_390180
    ctx->pc = 0x4DB888u;
    SET_GPR_U32(ctx, 31, 0x4DB890u);
    ctx->pc = 0x4DB88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB888u;
    // 0x4db88c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x4DB888u, 0x4DB890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB890u;
label_4db890:
    // 0x4db890: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4DB890u;
    {
        const bool branch_taken_0x4db890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DB894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB890u;
        // 0x4db894: 0x8e82bd30  lw          $v0, -0x42D0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db890) {
            ctx->pc = 0x4DB8BCu;
            goto label_4db8bc;
        }
    }
    ctx->pc = 0x4DB898u;
    // 0x4db898: 0x52720006  beql        $s3, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x4DB898u;
    {
        const bool branch_taken_0x4db898 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 18));
        if (branch_taken_0x4db898) {
            ctx->pc = 0x4DB89Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DB898u;
            // 0x4db89c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DB8B4u;
            goto label_4db8b4;
        }
    }
    ctx->pc = 0x4DB8A0u;
    // 0x4db8a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4db8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4db8a4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4db8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4db8a8: 0x8e83bd30  lw          $v1, -0x42D0($s4)
    ctx->pc = 0x4db8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950192)));
    // 0x4db8ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4db8acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4db8b0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x4db8b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_4db8b4:
    // 0x4db8b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4DB8B4u;
    {
        const bool branch_taken_0x4db8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DB8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB8B4u;
        // 0x4db8b8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db8b4) {
            ctx->pc = 0x4DB8C0u;
            goto label_4db8c0;
        }
    }
    ctx->pc = 0x4DB8BCu;
label_4db8bc:
    // 0x4db8bc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4db8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4db8c0:
    // 0x4db8c0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4db8c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4db8c4:
    // 0x4db8c4: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x4db8c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4db8c8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x4DB8C8u;
    {
        const bool branch_taken_0x4db8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DB8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB8C8u;
        // 0x4db8cc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db8c8) {
            ctx->pc = 0x4DB878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4db878;
        }
    }
    ctx->pc = 0x4DB8D0u;
    // 0x4db8d0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4db8d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db8d4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4db8d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4db8d8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4db8d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4db8dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4db8dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4db8e0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4db8e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4db8e4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4db8e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4db8e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4db8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4db8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4DB8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB8ECu;
        // 0x4db8f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DB8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DB8F4u;
    // 0x4db8f4: 0x0  nop
    ctx->pc = 0x4db8f4u;
    // NOP
    ctx->pc = 0x4db8f8u;
}
