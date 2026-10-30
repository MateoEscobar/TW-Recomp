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

// Function: sub_003C8090
// Address: 0x3c8090 - 0x3c80d8
void sub_003C8090_0x3c8090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C8090_0x3c8090");
#endif

    switch (ctx->pc) {
        case 0x3c8090u: goto label_3c8090;
        case 0x3c8094u: goto label_3c8094;
        case 0x3c8098u: goto label_3c8098;
        case 0x3c809cu: goto label_3c809c;
        case 0x3c80a0u: goto label_3c80a0;
        case 0x3c80a4u: goto label_3c80a4;
        case 0x3c80a8u: goto label_3c80a8;
        case 0x3c80acu: goto label_3c80ac;
        case 0x3c80b0u: goto label_3c80b0;
        case 0x3c80b4u: goto label_3c80b4;
        case 0x3c80b8u: goto label_3c80b8;
        case 0x3c80bcu: goto label_3c80bc;
        case 0x3c80c0u: goto label_3c80c0;
        case 0x3c80c4u: goto label_3c80c4;
        case 0x3c80c8u: goto label_3c80c8;
        case 0x3c80ccu: goto label_3c80cc;
        case 0x3c80d0u: goto label_3c80d0;
        case 0x3c80d4u: goto label_3c80d4;
        default: break;
    }

    ctx->pc = 0x3c8090u;

label_3c8090:
    // 0x3c8090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c8090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3c8094:
    // 0x3c8094: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c8094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3c8098:
    // 0x3c8098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c8098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c809c:
    // 0x3c809c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c809cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c80a0:
    // 0x3c80a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3c80a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c80a4:
    // 0x3c80a4: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3c80a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c80a8:
    // 0x3c80a8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c80a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c80ac:
    // 0x3c80ac: 0x40f809  jalr        $v0
label_3c80b0:
    if (ctx->pc == 0x3C80B0u) {
        ctx->pc = 0x3C80B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C80ACu;
        // 0x3c80b0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C80B4u;
        goto label_3c80b4;
    }
    ctx->pc = 0x3C80ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C80B4u);
        ctx->pc = 0x3C80B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C80ACu;
        // 0x3c80b0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C80ACu, 0x3C80B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C80B4u;
label_3c80b4:
    // 0x3c80b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3c80b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c80b8:
    // 0x3c80b8: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3c80b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3c80bc:
    // 0x3c80bc: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_3c80c0:
    if (ctx->pc == 0x3C80C0u) {
        ctx->pc = 0x3C80C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C80BCu;
        // 0x3c80c0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C80C4u;
        goto label_3c80c4;
    }
    ctx->pc = 0x3C80BCu;
    {
        const bool branch_taken_0x3c80bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C80C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C80BCu;
        // 0x3c80c0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c80bc) {
            ctx->pc = 0x3C80CCu;
            goto label_3c80cc;
        }
    }
    ctx->pc = 0x3C80C4u;
label_3c80c4:
    // 0x3c80c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c80c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c80c8:
    // 0x3c80c8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3c80c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3c80cc:
    // 0x3c80cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c80ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c80d0:
    // 0x3c80d0: 0x3e00008  jr          $ra
label_3c80d4:
    if (ctx->pc == 0x3C80D4u) {
        ctx->pc = 0x3C80D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C80D0u;
        // 0x3c80d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C80D8u;
        goto label_fallthrough_0x3c80d0;
    }
    ctx->pc = 0x3C80D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C80D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C80D0u;
        // 0x3c80d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C80D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c80d0:
    ctx->pc = 0x3C80D8u;
}
