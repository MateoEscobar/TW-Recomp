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

// Function: sub_0016D798
// Address: 0x16d798 - 0x16d7d8
void sub_0016D798_0x16d798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D798_0x16d798");
#endif

    switch (ctx->pc) {
        case 0x16d798u: goto label_16d798;
        case 0x16d79cu: goto label_16d79c;
        case 0x16d7a0u: goto label_16d7a0;
        case 0x16d7a4u: goto label_16d7a4;
        case 0x16d7a8u: goto label_16d7a8;
        case 0x16d7acu: goto label_16d7ac;
        case 0x16d7b0u: goto label_16d7b0;
        case 0x16d7b4u: goto label_16d7b4;
        case 0x16d7b8u: goto label_16d7b8;
        case 0x16d7bcu: goto label_16d7bc;
        case 0x16d7c0u: goto label_16d7c0;
        case 0x16d7c4u: goto label_16d7c4;
        case 0x16d7c8u: goto label_16d7c8;
        case 0x16d7ccu: goto label_16d7cc;
        case 0x16d7d0u: goto label_16d7d0;
        case 0x16d7d4u: goto label_16d7d4;
        default: break;
    }

    ctx->pc = 0x16d798u;

label_16d798:
    // 0x16d798: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16d798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16d79c:
    // 0x16d79c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x16d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_16d7a0:
    // 0x16d7a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16d7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_16d7a4:
    // 0x16d7a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16d7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16d7a8:
    // 0x16d7a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16d7a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16d7ac:
    // 0x16d7ac: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x16d7acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_16d7b0:
    // 0x16d7b0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x16d7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16d7b4:
    // 0x16d7b4: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x16d7b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_16d7b8:
    // 0x16d7b8: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x16d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_16d7bc:
    // 0x16d7bc: 0x40f809  jalr        $v0
label_16d7c0:
    if (ctx->pc == 0x16D7C0u) {
        ctx->pc = 0x16D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D7BCu;
        // 0x16d7c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D7C4u;
        goto label_16d7c4;
    }
    ctx->pc = 0x16D7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16D7C4u);
        ctx->pc = 0x16D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D7BCu;
        // 0x16d7c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D7BCu, 0x16D7C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16D7C4u;
label_16d7c4:
    // 0x16d7c4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x16d7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_16d7c8:
    // 0x16d7c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16d7c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16d7cc:
    // 0x16d7cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16d7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16d7d0:
    // 0x16d7d0: 0x3e00008  jr          $ra
label_16d7d4:
    if (ctx->pc == 0x16D7D4u) {
        ctx->pc = 0x16D7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D7D0u;
        // 0x16d7d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D7D8u;
        goto label_fallthrough_0x16d7d0;
    }
    ctx->pc = 0x16D7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D7D0u;
        // 0x16d7d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16d7d0:
    ctx->pc = 0x16D7D8u;
}
