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

// Function: sub_002C5BE0
// Address: 0x2c5be0 - 0x2c5c10
void sub_002C5BE0_0x2c5be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5BE0_0x2c5be0");
#endif

    switch (ctx->pc) {
        case 0x2c5be0u: goto label_2c5be0;
        case 0x2c5be4u: goto label_2c5be4;
        case 0x2c5be8u: goto label_2c5be8;
        case 0x2c5becu: goto label_2c5bec;
        case 0x2c5bf0u: goto label_2c5bf0;
        case 0x2c5bf4u: goto label_2c5bf4;
        case 0x2c5bf8u: goto label_2c5bf8;
        case 0x2c5bfcu: goto label_2c5bfc;
        case 0x2c5c00u: goto label_2c5c00;
        case 0x2c5c04u: goto label_2c5c04;
        case 0x2c5c08u: goto label_2c5c08;
        case 0x2c5c0cu: goto label_2c5c0c;
        default: break;
    }

    ctx->pc = 0x2c5be0u;

label_2c5be0:
    // 0x2c5be0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c5be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c5be4:
    // 0x2c5be4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c5be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c5be8:
    // 0x2c5be8: 0xa080001e  sb          $zero, 0x1E($a0)
    ctx->pc = 0x2c5be8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 30), (uint8_t)GPR_U32(ctx, 0));
label_2c5bec:
    // 0x2c5bec: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2c5becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2c5bf0:
    // 0x2c5bf0: 0x84430030  lh          $v1, 0x30($v0)
    ctx->pc = 0x2c5bf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2c5bf4:
    // 0x2c5bf4: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x2c5bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2c5bf8:
    // 0x2c5bf8: 0xa0f809  jalr        $a1
label_2c5bfc:
    if (ctx->pc == 0x2C5BFCu) {
        ctx->pc = 0x2C5BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5BF8u;
        // 0x2c5bfc: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5C00u;
        goto label_2c5c00;
    }
    ctx->pc = 0x2C5BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2C5C00u);
        ctx->pc = 0x2C5BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5BF8u;
        // 0x2c5bfc: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5BF8u, 0x2C5C00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C5C00u;
label_2c5c00:
    // 0x2c5c00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c5c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c5c04:
    // 0x2c5c04: 0x3e00008  jr          $ra
label_2c5c08:
    if (ctx->pc == 0x2C5C08u) {
        ctx->pc = 0x2C5C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C04u;
        // 0x2c5c08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5C0Cu;
        goto label_2c5c0c;
    }
    ctx->pc = 0x2C5C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C04u;
        // 0x2c5c08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5C0Cu;
label_2c5c0c:
    // 0x2c5c0c: 0x0  nop
    ctx->pc = 0x2c5c0cu;
    // NOP
    ctx->pc = 0x2c5c10u;
}
