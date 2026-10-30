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

// Function: sub_0030E4C8
// Address: 0x30e4c8 - 0x30e508
void sub_0030E4C8_0x30e4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E4C8_0x30e4c8");
#endif

    switch (ctx->pc) {
        case 0x30e4c8u: goto label_30e4c8;
        case 0x30e4ccu: goto label_30e4cc;
        case 0x30e4d0u: goto label_30e4d0;
        case 0x30e4d4u: goto label_30e4d4;
        case 0x30e4d8u: goto label_30e4d8;
        case 0x30e4dcu: goto label_30e4dc;
        case 0x30e4e0u: goto label_30e4e0;
        case 0x30e4e4u: goto label_30e4e4;
        case 0x30e4e8u: goto label_30e4e8;
        case 0x30e4ecu: goto label_30e4ec;
        case 0x30e4f0u: goto label_30e4f0;
        case 0x30e4f4u: goto label_30e4f4;
        case 0x30e4f8u: goto label_30e4f8;
        case 0x30e4fcu: goto label_30e4fc;
        case 0x30e500u: goto label_30e500;
        case 0x30e504u: goto label_30e504;
        default: break;
    }

    ctx->pc = 0x30e4c8u;

label_30e4c8:
    // 0x30e4c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30e4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_30e4cc:
    // 0x30e4cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30e4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30e4d0:
    // 0x30e4d0: 0x24020087  addiu       $v0, $zero, 0x87
    ctx->pc = 0x30e4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
label_30e4d4:
    // 0x30e4d4: 0x8ca300cc  lw          $v1, 0xCC($a1)
    ctx->pc = 0x30e4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 204)));
label_30e4d8:
    // 0x30e4d8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_30e4dc:
    if (ctx->pc == 0x30E4DCu) {
        ctx->pc = 0x30E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E4D8u;
        // 0x30e4dc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E4E0u;
        goto label_30e4e0;
    }
    ctx->pc = 0x30E4D8u;
    {
        const bool branch_taken_0x30e4d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E4D8u;
        // 0x30e4dc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e4d8) {
            ctx->pc = 0x30E4F8u;
            goto label_30e4f8;
        }
    }
    ctx->pc = 0x30E4E0u;
label_30e4e0:
    // 0x30e4e0: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x30e4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_30e4e4:
    // 0x30e4e4: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x30e4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_30e4e8:
    // 0x30e4e8: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x30e4e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_30e4ec:
    // 0x30e4ec: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x30e4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_30e4f0:
    // 0x30e4f0: 0x60f809  jalr        $v1
label_30e4f4:
    if (ctx->pc == 0x30E4F4u) {
        ctx->pc = 0x30E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E4F0u;
        // 0x30e4f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E4F8u;
        goto label_30e4f8;
    }
    ctx->pc = 0x30E4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x30E4F8u);
        ctx->pc = 0x30E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E4F0u;
        // 0x30e4f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E4F0u, 0x30E4F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30E4F8u;
label_30e4f8:
    // 0x30e4f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30e4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30e4fc:
    // 0x30e4fc: 0x3e00008  jr          $ra
label_30e500:
    if (ctx->pc == 0x30E500u) {
        ctx->pc = 0x30E500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E4FCu;
        // 0x30e500: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E504u;
        goto label_30e504;
    }
    ctx->pc = 0x30E4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E4FCu;
        // 0x30e500: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E504u;
label_30e504:
    // 0x30e504: 0x0  nop
    ctx->pc = 0x30e504u;
    // NOP
    ctx->pc = 0x30e508u;
}
