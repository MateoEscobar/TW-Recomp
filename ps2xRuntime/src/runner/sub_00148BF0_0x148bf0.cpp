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

// Function: sub_00148BF0
// Address: 0x148bf0 - 0x148c38
void sub_00148BF0_0x148bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148BF0_0x148bf0");
#endif

    switch (ctx->pc) {
        case 0x148c18u: goto label_148c18;
        case 0x148c28u: goto label_148c28;
        default: break;
    }

    ctx->pc = 0x148bf0u;

    // 0x148bf0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x148bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x148bf4: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x148bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x148bf8: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x148bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x148bfc: 0x2443a210  addiu       $v1, $v0, -0x5DF0
    ctx->pc = 0x148bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943248));
    // 0x148c00: 0xdc46a210  ld          $a2, -0x5DF0($v0)
    ctx->pc = 0x148c00u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x54A210u));
    // 0x148c04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x148c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c08: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x148c08u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x54A218u));
    // 0x148c0c: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x148c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x148c10: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x148C10u;
    SET_GPR_U32(ctx, 31, 0x148C18u);
    ctx->pc = 0x148C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148C10u;
    // 0x148c14: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x148C10u, 0x148C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148C18u;
label_148c18:
    // 0x148c18: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x148c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x148c1c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x148c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c20: 0xc10319a  jal         func_40C668
    ctx->pc = 0x148C20u;
    SET_GPR_U32(ctx, 31, 0x148C28u);
    ctx->pc = 0x148C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148C20u;
    // 0x148c24: 0x8c6447a4  lw          $a0, 0x47A4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C668u, 0x148C20u, 0x148C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148C28u;
label_148c28:
    // 0x148c28: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x148c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x148c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x148C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148C2Cu;
        // 0x148c30: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148C34u;
    // 0x148c34: 0x0  nop
    ctx->pc = 0x148c34u;
    // NOP
    ctx->pc = 0x148c38u;
}
