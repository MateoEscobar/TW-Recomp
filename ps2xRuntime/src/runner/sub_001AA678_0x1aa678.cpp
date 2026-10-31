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

// Function: sub_001AA678
// Address: 0x1aa678 - 0x1aa6b8
void sub_001AA678_0x1aa678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA678_0x1aa678");
#endif

    switch (ctx->pc) {
        case 0x1aa678u: goto label_1aa678;
        case 0x1aa67cu: goto label_1aa67c;
        case 0x1aa680u: goto label_1aa680;
        case 0x1aa684u: goto label_1aa684;
        case 0x1aa688u: goto label_1aa688;
        case 0x1aa68cu: goto label_1aa68c;
        case 0x1aa690u: goto label_1aa690;
        case 0x1aa694u: goto label_1aa694;
        case 0x1aa698u: goto label_1aa698;
        case 0x1aa69cu: goto label_1aa69c;
        case 0x1aa6a0u: goto label_1aa6a0;
        case 0x1aa6a4u: goto label_1aa6a4;
        case 0x1aa6a8u: goto label_1aa6a8;
        case 0x1aa6acu: goto label_1aa6ac;
        case 0x1aa6b0u: goto label_1aa6b0;
        case 0x1aa6b4u: goto label_1aa6b4;
        default: break;
    }

    ctx->pc = 0x1aa678u;

label_1aa678:
    // 0x1aa678: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aa678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1aa67c:
    // 0x1aa67c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1aa67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1aa680:
    // 0x1aa680: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1aa680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1aa684:
    // 0x1aa684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1aa688:
    // 0x1aa688: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aa688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aa68c:
    // 0x1aa68c: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x1aa68cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_1aa690:
    // 0x1aa690: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1aa690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1aa694:
    // 0x1aa694: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1aa694u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_1aa698:
    // 0x1aa698: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1aa698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_1aa69c:
    // 0x1aa69c: 0x40f809  jalr        $v0
label_1aa6a0:
    if (ctx->pc == 0x1AA6A0u) {
        ctx->pc = 0x1AA6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA69Cu;
        // 0x1aa6a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA6A4u;
        goto label_1aa6a4;
    }
    ctx->pc = 0x1AA69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AA6A4u);
        ctx->pc = 0x1AA6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA69Cu;
        // 0x1aa6a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA69Cu, 0x1AA6A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA6A4u;
label_1aa6a4:
    // 0x1aa6a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1aa6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1aa6a8:
    // 0x1aa6a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1aa6a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1aa6ac:
    // 0x1aa6ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aa6b0:
    // 0x1aa6b0: 0x3e00008  jr          $ra
label_1aa6b4:
    if (ctx->pc == 0x1AA6B4u) {
        ctx->pc = 0x1AA6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA6B0u;
        // 0x1aa6b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA6B8u;
        goto label_fallthrough_0x1aa6b0;
    }
    ctx->pc = 0x1AA6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA6B0u;
        // 0x1aa6b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1aa6b0:
    ctx->pc = 0x1AA6B8u;
}
