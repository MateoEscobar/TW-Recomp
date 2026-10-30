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

// Function: sub_004A8838
// Address: 0x4a8838 - 0x4a8888
void sub_004A8838_0x4a8838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8838_0x4a8838");
#endif

    switch (ctx->pc) {
        case 0x4a8858u: goto label_4a8858;
        default: break;
    }

    ctx->pc = 0x4a8838u;

    // 0x4a8838: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a8838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a883c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a883cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4a8840: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4a8840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4a8844: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a8844u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8848: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4a8848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a884c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a884cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a8850: 0xc129c2a  jal         func_4A70A8
    ctx->pc = 0x4A8850u;
    SET_GPR_U32(ctx, 31, 0x4A8858u);
    ctx->pc = 0x4A8854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8850u;
    // 0x4a8854: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A70A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A70A8u, 0x4A8850u, 0x4A8858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8858u;
label_4a8858:
    // 0x4a8858: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4a8858u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a885c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a885cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a8860: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4A8860u;
    {
        const bool branch_taken_0x4a8860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a8860) {
            ctx->pc = 0x4A8864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A8860u;
            // 0x4a8864: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8868u;
            goto label_4a8868;
        }
    }
    ctx->pc = 0x4A8868u;
label_4a8868:
    // 0x4a8868: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x4a8868u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x4a886c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4a886cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a8870: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4a8870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4a8874: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a8874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a8878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a8878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a887c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x4a887cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x4a8880: 0x3e00008  jr          $ra
    ctx->pc = 0x4A8880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8880u;
        // 0x4a8884: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8888u;
}
