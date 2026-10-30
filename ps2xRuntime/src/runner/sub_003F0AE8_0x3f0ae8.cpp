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

// Function: sub_003F0AE8
// Address: 0x3f0ae8 - 0x3f0b10
void sub_003F0AE8_0x3f0ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F0AE8_0x3f0ae8");
#endif

    switch (ctx->pc) {
        case 0x3f0ae8u: goto label_3f0ae8;
        case 0x3f0aecu: goto label_3f0aec;
        case 0x3f0af0u: goto label_3f0af0;
        case 0x3f0af4u: goto label_3f0af4;
        case 0x3f0af8u: goto label_3f0af8;
        case 0x3f0afcu: goto label_3f0afc;
        case 0x3f0b00u: goto label_3f0b00;
        case 0x3f0b04u: goto label_3f0b04;
        case 0x3f0b08u: goto label_3f0b08;
        case 0x3f0b0cu: goto label_3f0b0c;
        default: break;
    }

    ctx->pc = 0x3f0ae8u;

label_3f0ae8:
    // 0x3f0ae8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f0ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3f0aec:
    // 0x3f0aec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f0aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3f0af0:
    // 0x3f0af0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3f0af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f0af4:
    // 0x3f0af4: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3f0af4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f0af8:
    // 0x3f0af8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f0af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f0afc:
    // 0x3f0afc: 0x40f809  jalr        $v0
label_3f0b00:
    if (ctx->pc == 0x3F0B00u) {
        ctx->pc = 0x3F0B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0AFCu;
        // 0x3f0b00: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0B04u;
        goto label_3f0b04;
    }
    ctx->pc = 0x3F0AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F0B04u);
        ctx->pc = 0x3F0B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0AFCu;
        // 0x3f0b00: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F0AFCu, 0x3F0B04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F0B04u;
label_3f0b04:
    // 0x3f0b04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f0b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3f0b08:
    // 0x3f0b08: 0x3e00008  jr          $ra
label_3f0b0c:
    if (ctx->pc == 0x3F0B0Cu) {
        ctx->pc = 0x3F0B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0B08u;
        // 0x3f0b0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0B10u;
        goto label_fallthrough_0x3f0b08;
    }
    ctx->pc = 0x3F0B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F0B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0B08u;
        // 0x3f0b0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F0B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f0b08:
    ctx->pc = 0x3F0B10u;
}
