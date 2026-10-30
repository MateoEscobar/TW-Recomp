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

// Function: sub_001E7EA8
// Address: 0x1e7ea8 - 0x1e7ef8
void sub_001E7EA8_0x1e7ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7EA8_0x1e7ea8");
#endif

    switch (ctx->pc) {
        case 0x1e7ea8u: goto label_1e7ea8;
        case 0x1e7eacu: goto label_1e7eac;
        case 0x1e7eb0u: goto label_1e7eb0;
        case 0x1e7eb4u: goto label_1e7eb4;
        case 0x1e7eb8u: goto label_1e7eb8;
        case 0x1e7ebcu: goto label_1e7ebc;
        case 0x1e7ec0u: goto label_1e7ec0;
        case 0x1e7ec4u: goto label_1e7ec4;
        case 0x1e7ec8u: goto label_1e7ec8;
        case 0x1e7eccu: goto label_1e7ecc;
        case 0x1e7ed0u: goto label_1e7ed0;
        case 0x1e7ed4u: goto label_1e7ed4;
        case 0x1e7ed8u: goto label_1e7ed8;
        case 0x1e7edcu: goto label_1e7edc;
        case 0x1e7ee0u: goto label_1e7ee0;
        case 0x1e7ee4u: goto label_1e7ee4;
        case 0x1e7ee8u: goto label_1e7ee8;
        case 0x1e7eecu: goto label_1e7eec;
        case 0x1e7ef0u: goto label_1e7ef0;
        case 0x1e7ef4u: goto label_1e7ef4;
        default: break;
    }

    ctx->pc = 0x1e7ea8u;

label_1e7ea8:
    // 0x1e7ea8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e7ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e7eac:
    // 0x1e7eac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e7eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1e7eb0:
    // 0x1e7eb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e7eb4:
    // 0x1e7eb4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e7eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e7eb8:
    // 0x1e7eb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e7ebc:
    // 0x1e7ebc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e7ebcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e7ec0:
    // 0x1e7ec0: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x1e7ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_1e7ec4:
    // 0x1e7ec4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1e7ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e7ec8:
    // 0x1e7ec8: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1e7ec8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1e7ecc:
    // 0x1e7ecc: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1e7eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1e7ed0:
    // 0x1e7ed0: 0x60f809  jalr        $v1
label_1e7ed4:
    if (ctx->pc == 0x1E7ED4u) {
        ctx->pc = 0x1E7ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7ED0u;
        // 0x1e7ed4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7ED8u;
        goto label_1e7ed8;
    }
    ctx->pc = 0x1E7ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E7ED8u);
        ctx->pc = 0x1E7ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7ED0u;
        // 0x1e7ed4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7ED0u, 0x1E7ED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E7ED8u;
label_1e7ed8:
    // 0x1e7ed8: 0xae300264  sw          $s0, 0x264($s1)
    ctx->pc = 0x1e7ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 16));
label_1e7edc:
    // 0x1e7edc: 0xae300074  sw          $s0, 0x74($s1)
    ctx->pc = 0x1e7edcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 16));
label_1e7ee0:
    // 0x1e7ee0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e7ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e7ee4:
    // 0x1e7ee4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e7ee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e7ee8:
    // 0x1e7ee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e7eec:
    // 0x1e7eec: 0x3e00008  jr          $ra
label_1e7ef0:
    if (ctx->pc == 0x1E7EF0u) {
        ctx->pc = 0x1E7EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7EECu;
        // 0x1e7ef0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7EF4u;
        goto label_1e7ef4;
    }
    ctx->pc = 0x1E7EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7EECu;
        // 0x1e7ef0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7EF4u;
label_1e7ef4:
    // 0x1e7ef4: 0x0  nop
    ctx->pc = 0x1e7ef4u;
    // NOP
    ctx->pc = 0x1e7ef8u;
}
