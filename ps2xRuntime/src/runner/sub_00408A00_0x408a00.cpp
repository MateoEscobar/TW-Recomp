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

// Function: sub_00408A00
// Address: 0x408a00 - 0x408a28
void sub_00408A00_0x408a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00408A00_0x408a00");
#endif

    switch (ctx->pc) {
        case 0x408a00u: goto label_408a00;
        case 0x408a04u: goto label_408a04;
        case 0x408a08u: goto label_408a08;
        case 0x408a0cu: goto label_408a0c;
        case 0x408a10u: goto label_408a10;
        case 0x408a14u: goto label_408a14;
        case 0x408a18u: goto label_408a18;
        case 0x408a1cu: goto label_408a1c;
        case 0x408a20u: goto label_408a20;
        case 0x408a24u: goto label_408a24;
        default: break;
    }

    ctx->pc = 0x408a00u;

label_408a00:
    // 0x408a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x408a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_408a04:
    // 0x408a04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x408a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_408a08:
    // 0x408a08: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x408a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_408a0c:
    // 0x408a0c: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x408a0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_408a10:
    // 0x408a10: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x408a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_408a14:
    // 0x408a14: 0x40f809  jalr        $v0
label_408a18:
    if (ctx->pc == 0x408A18u) {
        ctx->pc = 0x408A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408A14u;
        // 0x408a18: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408A1Cu;
        goto label_408a1c;
    }
    ctx->pc = 0x408A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x408A1Cu);
        ctx->pc = 0x408A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408A14u;
        // 0x408a18: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x408A14u, 0x408A1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x408A1Cu;
label_408a1c:
    // 0x408a1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x408a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_408a20:
    // 0x408a20: 0x3e00008  jr          $ra
label_408a24:
    if (ctx->pc == 0x408A24u) {
        ctx->pc = 0x408A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408A20u;
        // 0x408a24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408A28u;
        goto label_fallthrough_0x408a20;
    }
    ctx->pc = 0x408A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x408A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408A20u;
        // 0x408a24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x408A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x408a20:
    ctx->pc = 0x408A28u;
}
