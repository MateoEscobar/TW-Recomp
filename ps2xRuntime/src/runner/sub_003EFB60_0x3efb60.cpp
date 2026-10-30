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

// Function: sub_003EFB60
// Address: 0x3efb60 - 0x3efb90
void sub_003EFB60_0x3efb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EFB60_0x3efb60");
#endif

    switch (ctx->pc) {
        case 0x3efb60u: goto label_3efb60;
        case 0x3efb64u: goto label_3efb64;
        case 0x3efb68u: goto label_3efb68;
        case 0x3efb6cu: goto label_3efb6c;
        case 0x3efb70u: goto label_3efb70;
        case 0x3efb74u: goto label_3efb74;
        case 0x3efb78u: goto label_3efb78;
        case 0x3efb7cu: goto label_3efb7c;
        case 0x3efb80u: goto label_3efb80;
        case 0x3efb84u: goto label_3efb84;
        case 0x3efb88u: goto label_3efb88;
        case 0x3efb8cu: goto label_3efb8c;
        default: break;
    }

    ctx->pc = 0x3efb60u;

label_3efb60:
    // 0x3efb60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3efb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3efb64:
    // 0x3efb64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3efb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3efb68:
    // 0x3efb68: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3efb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3efb6c:
    // 0x3efb6c: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3efb6cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3efb70:
    // 0x3efb70: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3efb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3efb74:
    // 0x3efb74: 0x40f809  jalr        $v0
label_3efb78:
    if (ctx->pc == 0x3EFB78u) {
        ctx->pc = 0x3EFB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFB74u;
        // 0x3efb78: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFB7Cu;
        goto label_3efb7c;
    }
    ctx->pc = 0x3EFB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EFB7Cu);
        ctx->pc = 0x3EFB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFB74u;
        // 0x3efb78: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EFB74u, 0x3EFB7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EFB7Cu;
label_3efb7c:
    // 0x3efb7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3efb7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3efb80:
    // 0x3efb80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3efb80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3efb84:
    // 0x3efb84: 0x3e00008  jr          $ra
label_3efb88:
    if (ctx->pc == 0x3EFB88u) {
        ctx->pc = 0x3EFB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFB84u;
        // 0x3efb88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFB8Cu;
        goto label_3efb8c;
    }
    ctx->pc = 0x3EFB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EFB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFB84u;
        // 0x3efb88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EFB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EFB8Cu;
label_3efb8c:
    // 0x3efb8c: 0x0  nop
    ctx->pc = 0x3efb8cu;
    // NOP
    ctx->pc = 0x3efb90u;
}
