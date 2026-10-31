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

// Function: sub_0020AE38
// Address: 0x20ae38 - 0x20ae68
void sub_0020AE38_0x20ae38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AE38_0x20ae38");
#endif

    switch (ctx->pc) {
        case 0x20ae38u: goto label_20ae38;
        case 0x20ae3cu: goto label_20ae3c;
        case 0x20ae40u: goto label_20ae40;
        case 0x20ae44u: goto label_20ae44;
        case 0x20ae48u: goto label_20ae48;
        case 0x20ae4cu: goto label_20ae4c;
        case 0x20ae50u: goto label_20ae50;
        case 0x20ae54u: goto label_20ae54;
        case 0x20ae58u: goto label_20ae58;
        case 0x20ae5cu: goto label_20ae5c;
        case 0x20ae60u: goto label_20ae60;
        case 0x20ae64u: goto label_20ae64;
        default: break;
    }

    ctx->pc = 0x20ae38u;

label_20ae38:
    // 0x20ae38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20ae38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20ae3c:
    // 0x20ae3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20ae3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20ae40:
    // 0x20ae40: 0xac850070  sw          $a1, 0x70($a0)
    ctx->pc = 0x20ae40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 5));
label_20ae44:
    // 0x20ae44: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20ae48:
    // 0x20ae48: 0x844300a8  lh          $v1, 0xA8($v0)
    ctx->pc = 0x20ae48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_20ae4c:
    // 0x20ae4c: 0x8c4500ac  lw          $a1, 0xAC($v0)
    ctx->pc = 0x20ae4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_20ae50:
    // 0x20ae50: 0xa0f809  jalr        $a1
label_20ae54:
    if (ctx->pc == 0x20AE54u) {
        ctx->pc = 0x20AE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE50u;
        // 0x20ae54: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE58u;
        goto label_20ae58;
    }
    ctx->pc = 0x20AE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x20AE58u);
        ctx->pc = 0x20AE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE50u;
        // 0x20ae54: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AE50u, 0x20AE58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AE58u;
label_20ae58:
    // 0x20ae58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20ae58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20ae5c:
    // 0x20ae5c: 0x3e00008  jr          $ra
label_20ae60:
    if (ctx->pc == 0x20AE60u) {
        ctx->pc = 0x20AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE5Cu;
        // 0x20ae60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE64u;
        goto label_20ae64;
    }
    ctx->pc = 0x20AE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE5Cu;
        // 0x20ae60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AE64u;
label_20ae64:
    // 0x20ae64: 0x0  nop
    ctx->pc = 0x20ae64u;
    // NOP
    ctx->pc = 0x20ae68u;
}
