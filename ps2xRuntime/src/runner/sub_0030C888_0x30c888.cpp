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

// Function: sub_0030C888
// Address: 0x30c888 - 0x30c8c8
void sub_0030C888_0x30c888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C888_0x30c888");
#endif

    switch (ctx->pc) {
        case 0x30c888u: goto label_30c888;
        case 0x30c88cu: goto label_30c88c;
        case 0x30c890u: goto label_30c890;
        case 0x30c894u: goto label_30c894;
        case 0x30c898u: goto label_30c898;
        case 0x30c89cu: goto label_30c89c;
        case 0x30c8a0u: goto label_30c8a0;
        case 0x30c8a4u: goto label_30c8a4;
        case 0x30c8a8u: goto label_30c8a8;
        case 0x30c8acu: goto label_30c8ac;
        case 0x30c8b0u: goto label_30c8b0;
        case 0x30c8b4u: goto label_30c8b4;
        case 0x30c8b8u: goto label_30c8b8;
        case 0x30c8bcu: goto label_30c8bc;
        case 0x30c8c0u: goto label_30c8c0;
        case 0x30c8c4u: goto label_30c8c4;
        default: break;
    }

    ctx->pc = 0x30c888u;

label_30c888:
    // 0x30c888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30c888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_30c88c:
    // 0x30c88c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30c88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30c890:
    // 0x30c890: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x30c890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_30c894:
    // 0x30c894: 0x8ca300cc  lw          $v1, 0xCC($a1)
    ctx->pc = 0x30c894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 204)));
label_30c898:
    // 0x30c898: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_30c89c:
    if (ctx->pc == 0x30C89Cu) {
        ctx->pc = 0x30C89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C898u;
        // 0x30c89c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C8A0u;
        goto label_30c8a0;
    }
    ctx->pc = 0x30C898u;
    {
        const bool branch_taken_0x30c898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30C89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C898u;
        // 0x30c89c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c898) {
            ctx->pc = 0x30C8B8u;
            goto label_30c8b8;
        }
    }
    ctx->pc = 0x30C8A0u;
label_30c8a0:
    // 0x30c8a0: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x30c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_30c8a4:
    // 0x30c8a4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x30c8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_30c8a8:
    // 0x30c8a8: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x30c8a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_30c8ac:
    // 0x30c8ac: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x30c8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_30c8b0:
    // 0x30c8b0: 0x60f809  jalr        $v1
label_30c8b4:
    if (ctx->pc == 0x30C8B4u) {
        ctx->pc = 0x30C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C8B0u;
        // 0x30c8b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C8B8u;
        goto label_30c8b8;
    }
    ctx->pc = 0x30C8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x30C8B8u);
        ctx->pc = 0x30C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C8B0u;
        // 0x30c8b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C8B0u, 0x30C8B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30C8B8u;
label_30c8b8:
    // 0x30c8b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30c8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30c8bc:
    // 0x30c8bc: 0x3e00008  jr          $ra
label_30c8c0:
    if (ctx->pc == 0x30C8C0u) {
        ctx->pc = 0x30C8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C8BCu;
        // 0x30c8c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C8C4u;
        goto label_30c8c4;
    }
    ctx->pc = 0x30C8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C8BCu;
        // 0x30c8c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C8C4u;
label_30c8c4:
    // 0x30c8c4: 0x0  nop
    ctx->pc = 0x30c8c4u;
    // NOP
    ctx->pc = 0x30c8c8u;
}
