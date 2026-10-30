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

// Function: sub_0015C688
// Address: 0x15c688 - 0x15c6c8
void sub_0015C688_0x15c688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C688_0x15c688");
#endif

    switch (ctx->pc) {
        case 0x15c688u: goto label_15c688;
        case 0x15c68cu: goto label_15c68c;
        case 0x15c690u: goto label_15c690;
        case 0x15c694u: goto label_15c694;
        case 0x15c698u: goto label_15c698;
        case 0x15c69cu: goto label_15c69c;
        case 0x15c6a0u: goto label_15c6a0;
        case 0x15c6a4u: goto label_15c6a4;
        case 0x15c6a8u: goto label_15c6a8;
        case 0x15c6acu: goto label_15c6ac;
        case 0x15c6b0u: goto label_15c6b0;
        case 0x15c6b4u: goto label_15c6b4;
        case 0x15c6b8u: goto label_15c6b8;
        case 0x15c6bcu: goto label_15c6bc;
        case 0x15c6c0u: goto label_15c6c0;
        case 0x15c6c4u: goto label_15c6c4;
        default: break;
    }

    ctx->pc = 0x15c688u;

label_15c688:
    // 0x15c688: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15c688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_15c68c:
    // 0x15c68c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15c68cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15c690:
    // 0x15c690: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15c690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15c694:
    // 0x15c694: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15c694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c698:
    // 0x15c698: 0x8c65b734  lw          $a1, -0x48CC($v1)
    ctx->pc = 0x15c698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_15c69c:
    // 0x15c69c: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x15c69cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
label_15c6a0:
    // 0x15c6a0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x15c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_15c6a4:
    // 0x15c6a4: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x15c6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
label_15c6a8:
    // 0x15c6a8: 0x84430028  lh          $v1, 0x28($v0)
    ctx->pc = 0x15c6a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_15c6ac:
    // 0x15c6ac: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x15c6acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_15c6b0:
    // 0x15c6b0: 0xa0f809  jalr        $a1
label_15c6b4:
    if (ctx->pc == 0x15C6B4u) {
        ctx->pc = 0x15C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6B0u;
        // 0x15c6b4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C6B8u;
        goto label_15c6b8;
    }
    ctx->pc = 0x15C6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x15C6B8u);
        ctx->pc = 0x15C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6B0u;
        // 0x15c6b4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C6B0u, 0x15C6B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C6B8u;
label_15c6b8:
    // 0x15c6b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15c6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15c6bc:
    // 0x15c6bc: 0x3e00008  jr          $ra
label_15c6c0:
    if (ctx->pc == 0x15C6C0u) {
        ctx->pc = 0x15C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6BCu;
        // 0x15c6c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C6C4u;
        goto label_15c6c4;
    }
    ctx->pc = 0x15C6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6BCu;
        // 0x15c6c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C6C4u;
label_15c6c4:
    // 0x15c6c4: 0x0  nop
    ctx->pc = 0x15c6c4u;
    // NOP
    ctx->pc = 0x15c6c8u;
}
