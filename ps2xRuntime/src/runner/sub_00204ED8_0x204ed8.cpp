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

// Function: sub_00204ED8
// Address: 0x204ed8 - 0x204f08
void sub_00204ED8_0x204ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204ED8_0x204ed8");
#endif

    switch (ctx->pc) {
        case 0x204ed8u: goto label_204ed8;
        case 0x204edcu: goto label_204edc;
        case 0x204ee0u: goto label_204ee0;
        case 0x204ee4u: goto label_204ee4;
        case 0x204ee8u: goto label_204ee8;
        case 0x204eecu: goto label_204eec;
        case 0x204ef0u: goto label_204ef0;
        case 0x204ef4u: goto label_204ef4;
        case 0x204ef8u: goto label_204ef8;
        case 0x204efcu: goto label_204efc;
        case 0x204f00u: goto label_204f00;
        case 0x204f04u: goto label_204f04;
        default: break;
    }

    ctx->pc = 0x204ed8u;

label_204ed8:
    // 0x204ed8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x204ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_204edc:
    // 0x204edc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_204ee0:
    // 0x204ee0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x204ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_204ee4:
    // 0x204ee4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x204ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_204ee8:
    // 0x204ee8: 0x84650088  lh          $a1, 0x88($v1)
    ctx->pc = 0x204ee8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_204eec:
    // 0x204eec: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x204eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_204ef0:
    // 0x204ef0: 0x40f809  jalr        $v0
label_204ef4:
    if (ctx->pc == 0x204EF4u) {
        ctx->pc = 0x204EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204EF0u;
        // 0x204ef4: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204EF8u;
        goto label_204ef8;
    }
    ctx->pc = 0x204EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x204EF8u);
        ctx->pc = 0x204EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204EF0u;
        // 0x204ef4: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204EF0u, 0x204EF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x204EF8u;
label_204ef8:
    // 0x204ef8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_204efc:
    // 0x204efc: 0x3e00008  jr          $ra
label_204f00:
    if (ctx->pc == 0x204F00u) {
        ctx->pc = 0x204F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204EFCu;
        // 0x204f00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204F04u;
        goto label_204f04;
    }
    ctx->pc = 0x204EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204EFCu;
        // 0x204f00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204F04u;
label_204f04:
    // 0x204f04: 0x0  nop
    ctx->pc = 0x204f04u;
    // NOP
    ctx->pc = 0x204f08u;
}
