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

// Function: sub_0016D6D8
// Address: 0x16d6d8 - 0x16d718
void sub_0016D6D8_0x16d6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D6D8_0x16d6d8");
#endif

    switch (ctx->pc) {
        case 0x16d6d8u: goto label_16d6d8;
        case 0x16d6dcu: goto label_16d6dc;
        case 0x16d6e0u: goto label_16d6e0;
        case 0x16d6e4u: goto label_16d6e4;
        case 0x16d6e8u: goto label_16d6e8;
        case 0x16d6ecu: goto label_16d6ec;
        case 0x16d6f0u: goto label_16d6f0;
        case 0x16d6f4u: goto label_16d6f4;
        case 0x16d6f8u: goto label_16d6f8;
        case 0x16d6fcu: goto label_16d6fc;
        case 0x16d700u: goto label_16d700;
        case 0x16d704u: goto label_16d704;
        case 0x16d708u: goto label_16d708;
        case 0x16d70cu: goto label_16d70c;
        case 0x16d710u: goto label_16d710;
        case 0x16d714u: goto label_16d714;
        default: break;
    }

    ctx->pc = 0x16d6d8u;

label_16d6d8:
    // 0x16d6d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16d6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16d6dc:
    // 0x16d6dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x16d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_16d6e0:
    // 0x16d6e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16d6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_16d6e4:
    // 0x16d6e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16d6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16d6e8:
    // 0x16d6e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16d6e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16d6ec:
    // 0x16d6ec: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x16d6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_16d6f0:
    // 0x16d6f0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x16d6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16d6f4:
    // 0x16d6f4: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x16d6f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_16d6f8:
    // 0x16d6f8: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x16d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_16d6fc:
    // 0x16d6fc: 0x40f809  jalr        $v0
label_16d700:
    if (ctx->pc == 0x16D700u) {
        ctx->pc = 0x16D700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D6FCu;
        // 0x16d700: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D704u;
        goto label_16d704;
    }
    ctx->pc = 0x16D6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16D704u);
        ctx->pc = 0x16D700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D6FCu;
        // 0x16d700: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D6FCu, 0x16D704u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16D704u;
label_16d704:
    // 0x16d704: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x16d704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_16d708:
    // 0x16d708: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16d708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16d70c:
    // 0x16d70c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16d70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16d710:
    // 0x16d710: 0x3e00008  jr          $ra
label_16d714:
    if (ctx->pc == 0x16D714u) {
        ctx->pc = 0x16D714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D710u;
        // 0x16d714: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D718u;
        goto label_fallthrough_0x16d710;
    }
    ctx->pc = 0x16D710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D710u;
        // 0x16d714: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16d710:
    ctx->pc = 0x16D718u;
}
