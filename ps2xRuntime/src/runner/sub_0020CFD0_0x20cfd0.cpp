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

// Function: sub_0020CFD0
// Address: 0x20cfd0 - 0x20d000
void sub_0020CFD0_0x20cfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CFD0_0x20cfd0");
#endif

    switch (ctx->pc) {
        case 0x20cfd0u: goto label_20cfd0;
        case 0x20cfd4u: goto label_20cfd4;
        case 0x20cfd8u: goto label_20cfd8;
        case 0x20cfdcu: goto label_20cfdc;
        case 0x20cfe0u: goto label_20cfe0;
        case 0x20cfe4u: goto label_20cfe4;
        case 0x20cfe8u: goto label_20cfe8;
        case 0x20cfecu: goto label_20cfec;
        case 0x20cff0u: goto label_20cff0;
        case 0x20cff4u: goto label_20cff4;
        case 0x20cff8u: goto label_20cff8;
        case 0x20cffcu: goto label_20cffc;
        default: break;
    }

    ctx->pc = 0x20cfd0u;

label_20cfd0:
    // 0x20cfd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20cfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20cfd4:
    // 0x20cfd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20cfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20cfd8:
    // 0x20cfd8: 0xac850070  sw          $a1, 0x70($a0)
    ctx->pc = 0x20cfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 5));
label_20cfdc:
    // 0x20cfdc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20cfe0:
    // 0x20cfe0: 0x844300a8  lh          $v1, 0xA8($v0)
    ctx->pc = 0x20cfe0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_20cfe4:
    // 0x20cfe4: 0x8c4500ac  lw          $a1, 0xAC($v0)
    ctx->pc = 0x20cfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_20cfe8:
    // 0x20cfe8: 0xa0f809  jalr        $a1
label_20cfec:
    if (ctx->pc == 0x20CFECu) {
        ctx->pc = 0x20CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CFE8u;
        // 0x20cfec: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CFF0u;
        goto label_20cff0;
    }
    ctx->pc = 0x20CFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x20CFF0u);
        ctx->pc = 0x20CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CFE8u;
        // 0x20cfec: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CFE8u, 0x20CFF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20CFF0u;
label_20cff0:
    // 0x20cff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20cff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20cff4:
    // 0x20cff4: 0x3e00008  jr          $ra
label_20cff8:
    if (ctx->pc == 0x20CFF8u) {
        ctx->pc = 0x20CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CFF4u;
        // 0x20cff8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CFFCu;
        goto label_20cffc;
    }
    ctx->pc = 0x20CFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CFF4u;
        // 0x20cff8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CFF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CFFCu;
label_20cffc:
    // 0x20cffc: 0x0  nop
    ctx->pc = 0x20cffcu;
    // NOP
    ctx->pc = 0x20d000u;
}
