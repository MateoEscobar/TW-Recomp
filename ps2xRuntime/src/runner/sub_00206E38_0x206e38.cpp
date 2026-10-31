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

// Function: sub_00206E38
// Address: 0x206e38 - 0x206e60
void sub_00206E38_0x206e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206E38_0x206e38");
#endif

    switch (ctx->pc) {
        case 0x206e38u: goto label_206e38;
        case 0x206e3cu: goto label_206e3c;
        case 0x206e40u: goto label_206e40;
        case 0x206e44u: goto label_206e44;
        case 0x206e48u: goto label_206e48;
        case 0x206e4cu: goto label_206e4c;
        case 0x206e50u: goto label_206e50;
        case 0x206e54u: goto label_206e54;
        case 0x206e58u: goto label_206e58;
        case 0x206e5cu: goto label_206e5c;
        default: break;
    }

    ctx->pc = 0x206e38u;

label_206e38:
    // 0x206e38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_206e3c:
    // 0x206e3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_206e40:
    // 0x206e40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x206e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_206e44:
    // 0x206e44: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x206e44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_206e48:
    // 0x206e48: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x206e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_206e4c:
    // 0x206e4c: 0xa0f809  jalr        $a1
label_206e50:
    if (ctx->pc == 0x206E50u) {
        ctx->pc = 0x206E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E4Cu;
        // 0x206e50: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206E54u;
        goto label_206e54;
    }
    ctx->pc = 0x206E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x206E54u);
        ctx->pc = 0x206E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E4Cu;
        // 0x206e50: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206E4Cu, 0x206E54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206E54u;
label_206e54:
    // 0x206e54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_206e58:
    // 0x206e58: 0x3e00008  jr          $ra
label_206e5c:
    if (ctx->pc == 0x206E5Cu) {
        ctx->pc = 0x206E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E58u;
        // 0x206e5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206E60u;
        goto label_fallthrough_0x206e58;
    }
    ctx->pc = 0x206E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E58u;
        // 0x206e5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x206e58:
    ctx->pc = 0x206E60u;
}
