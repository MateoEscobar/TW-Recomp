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

// Function: sub_001E9088
// Address: 0x1e9088 - 0x1e90f8
void sub_001E9088_0x1e9088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9088_0x1e9088");
#endif

    switch (ctx->pc) {
        case 0x1e90a4u: goto label_1e90a4;
        case 0x1e90acu: goto label_1e90ac;
        case 0x1e90b8u: goto label_1e90b8;
        case 0x1e90c4u: goto label_1e90c4;
        default: break;
    }

    ctx->pc = 0x1e9088u;

    // 0x1e9088: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e9088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e908c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e908cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e9090: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e9090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1e9094: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1e9094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1e9098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e909c: 0xc079fbe  jal         func_1E7EF8
    ctx->pc = 0x1E909Cu;
    SET_GPR_U32(ctx, 31, 0x1E90A4u);
    ctx->pc = 0x1E90A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E909Cu;
    // 0x1e90a0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7EF8u, 0x1E909Cu, 0x1E90A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E90A4u;
label_1e90a4:
    // 0x1e90a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E90A4u;
    {
        const bool branch_taken_0x1e90a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E90A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E90A4u;
        // 0x1e90a8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e90a4) {
            ctx->pc = 0x1E90B4u;
            goto label_1e90b4;
        }
    }
    ctx->pc = 0x1E90ACu;
label_1e90ac:
    // 0x1e90ac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E90ACu;
    {
        const bool branch_taken_0x1e90ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E90B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E90ACu;
        // 0x1e90b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e90ac) {
            ctx->pc = 0x1E90DCu;
            goto label_1e90dc;
        }
    }
    ctx->pc = 0x1E90B4u;
label_1e90b4:
    // 0x1e90b4: 0x26300490  addiu       $s0, $s1, 0x490
    ctx->pc = 0x1e90b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
label_1e90b8:
    // 0x1e90b8: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x1e90b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1e90bc: 0xc06a3aa  jal         func_1A8EA8
    ctx->pc = 0x1E90BCu;
    SET_GPR_U32(ctx, 31, 0x1E90C4u);
    ctx->pc = 0x1E90C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E90BCu;
    // 0x1e90c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1E90BCu, 0x1E90C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E90C4u;
label_1e90c4:
    // 0x1e90c4: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E90C4u;
    {
        const bool branch_taken_0x1e90c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E90C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E90C4u;
        // 0x1e90c8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e90c4) {
            ctx->pc = 0x1E90ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e90ac;
        }
    }
    ctx->pc = 0x1E90CCu;
    // 0x1e90cc: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x1e90ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1e90d0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E90D0u;
    {
        const bool branch_taken_0x1e90d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E90D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E90D0u;
        // 0x1e90d4: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e90d0) {
            ctx->pc = 0x1E90B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e90b8;
        }
    }
    ctx->pc = 0x1E90D8u;
    // 0x1e90d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e90d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e90dc:
    // 0x1e90dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e90dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e90e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e90e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e90e4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1e90e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e90e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e90e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e90ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1E90ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E90F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E90ECu;
        // 0x1e90f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E90ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E90F4u;
    // 0x1e90f4: 0x0  nop
    ctx->pc = 0x1e90f4u;
    // NOP
    ctx->pc = 0x1e90f8u;
}
