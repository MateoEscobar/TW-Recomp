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

// Function: sub_001D7E98
// Address: 0x1d7e98 - 0x1d7ef0
void sub_001D7E98_0x1d7e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7E98_0x1d7e98");
#endif

    switch (ctx->pc) {
        case 0x1d7eacu: goto label_1d7eac;
        case 0x1d7ec0u: goto label_1d7ec0;
        case 0x1d7ed0u: goto label_1d7ed0;
        default: break;
    }

    ctx->pc = 0x1d7e98u;

    // 0x1d7e98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7e9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d7e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d7ea0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d7ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7ea4: 0xc075d08  jal         func_1D7420
    ctx->pc = 0x1D7EA4u;
    SET_GPR_U32(ctx, 31, 0x1D7EACu);
    ctx->pc = 0x1D7EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7EA4u;
    // 0x1d7ea8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7420u, 0x1D7EA4u, 0x1D7EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7EACu;
label_1d7eac:
    // 0x1d7eac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D7EACu;
    {
        const bool branch_taken_0x1d7eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7EACu;
        // 0x1d7eb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7eac) {
            ctx->pc = 0x1D7EE0u;
            goto label_1d7ee0;
        }
    }
    ctx->pc = 0x1D7EB4u;
    // 0x1d7eb4: 0x8e050714  lw          $a1, 0x714($s0)
    ctx->pc = 0x1d7eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1812)));
    // 0x1d7eb8: 0xc06a3aa  jal         func_1A8EA8
    ctx->pc = 0x1D7EB8u;
    SET_GPR_U32(ctx, 31, 0x1D7EC0u);
    ctx->pc = 0x1D7EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7EB8u;
    // 0x1d7ebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1D7EB8u, 0x1D7EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7EC0u;
label_1d7ec0:
    // 0x1d7ec0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D7EC0u;
    {
        const bool branch_taken_0x1d7ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7EC0u;
        // 0x1d7ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ec0) {
            ctx->pc = 0x1D7EDCu;
            goto label_1d7edc;
        }
    }
    ctx->pc = 0x1D7EC8u;
    // 0x1d7ec8: 0xc06a3aa  jal         func_1A8EA8
    ctx->pc = 0x1D7EC8u;
    SET_GPR_U32(ctx, 31, 0x1D7ED0u);
    ctx->pc = 0x1D7ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7EC8u;
    // 0x1d7ecc: 0x8c850814  lw          $a1, 0x814($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1D7EC8u, 0x1D7ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7ED0u;
label_1d7ed0:
    // 0x1d7ed0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d7ed0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ed4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7ED4u;
    {
        const bool branch_taken_0x1d7ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7ED4u;
        // 0x1d7ed8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ed4) {
            ctx->pc = 0x1D7EE0u;
            goto label_1d7ee0;
        }
    }
    ctx->pc = 0x1D7EDCu;
label_1d7edc:
    // 0x1d7edc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d7edcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7ee0:
    // 0x1d7ee0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d7ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7ee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7EE8u;
        // 0x1d7eec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7EF0u;
}
