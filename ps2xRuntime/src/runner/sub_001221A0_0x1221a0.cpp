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

// Function: sub_001221A0
// Address: 0x1221a0 - 0x1221e0
void sub_001221A0_0x1221a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001221A0_0x1221a0");
#endif

    switch (ctx->pc) {
        case 0x1221a0u: goto label_1221a0;
        case 0x1221a4u: goto label_1221a4;
        case 0x1221a8u: goto label_1221a8;
        case 0x1221acu: goto label_1221ac;
        case 0x1221b0u: goto label_1221b0;
        case 0x1221b4u: goto label_1221b4;
        case 0x1221b8u: goto label_1221b8;
        case 0x1221bcu: goto label_1221bc;
        case 0x1221c0u: goto label_1221c0;
        case 0x1221c4u: goto label_1221c4;
        case 0x1221c8u: goto label_1221c8;
        case 0x1221ccu: goto label_1221cc;
        case 0x1221d0u: goto label_1221d0;
        case 0x1221d4u: goto label_1221d4;
        case 0x1221d8u: goto label_1221d8;
        case 0x1221dcu: goto label_1221dc;
        default: break;
    }

    ctx->pc = 0x1221a0u;

label_1221a0:
    // 0x1221a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1221a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1221a4:
    // 0x1221a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1221a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1221a8:
    // 0x1221a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1221a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1221ac:
    // 0x1221ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1221acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1221b0:
    // 0x1221b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1221b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1221b4:
    // 0x1221b4: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x1221b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_1221b8:
    // 0x1221b8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1221b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1221bc:
    // 0x1221bc: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1221bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_1221c0:
    // 0x1221c0: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1221c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_1221c4:
    // 0x1221c4: 0x40f809  jalr        $v0
label_1221c8:
    if (ctx->pc == 0x1221C8u) {
        ctx->pc = 0x1221C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1221C4u;
        // 0x1221c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1221CCu;
        goto label_1221cc;
    }
    ctx->pc = 0x1221C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1221CCu);
        ctx->pc = 0x1221C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1221C4u;
        // 0x1221c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1221C4u, 0x1221CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1221CCu;
label_1221cc:
    // 0x1221cc: 0xae0201cc  sw          $v0, 0x1CC($s0)
    ctx->pc = 0x1221ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 2));
label_1221d0:
    // 0x1221d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1221d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1221d4:
    // 0x1221d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1221d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1221d8:
    // 0x1221d8: 0x3e00008  jr          $ra
label_1221dc:
    if (ctx->pc == 0x1221DCu) {
        ctx->pc = 0x1221DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1221D8u;
        // 0x1221dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1221E0u;
        goto label_fallthrough_0x1221d8;
    }
    ctx->pc = 0x1221D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1221DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1221D8u;
        // 0x1221dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1221D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1221d8:
    ctx->pc = 0x1221E0u;
}
