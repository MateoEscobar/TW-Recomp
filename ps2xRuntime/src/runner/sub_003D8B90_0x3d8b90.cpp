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

// Function: sub_003D8B90
// Address: 0x3d8b90 - 0x3d8bd8
void sub_003D8B90_0x3d8b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8B90_0x3d8b90");
#endif

    switch (ctx->pc) {
        case 0x3d8b90u: goto label_3d8b90;
        case 0x3d8b94u: goto label_3d8b94;
        case 0x3d8b98u: goto label_3d8b98;
        case 0x3d8b9cu: goto label_3d8b9c;
        case 0x3d8ba0u: goto label_3d8ba0;
        case 0x3d8ba4u: goto label_3d8ba4;
        case 0x3d8ba8u: goto label_3d8ba8;
        case 0x3d8bacu: goto label_3d8bac;
        case 0x3d8bb0u: goto label_3d8bb0;
        case 0x3d8bb4u: goto label_3d8bb4;
        case 0x3d8bb8u: goto label_3d8bb8;
        case 0x3d8bbcu: goto label_3d8bbc;
        case 0x3d8bc0u: goto label_3d8bc0;
        case 0x3d8bc4u: goto label_3d8bc4;
        case 0x3d8bc8u: goto label_3d8bc8;
        case 0x3d8bccu: goto label_3d8bcc;
        case 0x3d8bd0u: goto label_3d8bd0;
        case 0x3d8bd4u: goto label_3d8bd4;
        default: break;
    }

    ctx->pc = 0x3d8b90u;

label_3d8b90:
    // 0x3d8b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d8b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3d8b94:
    // 0x3d8b94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d8b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d8b98:
    // 0x3d8b98: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d8b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d8b9c:
    // 0x3d8b9c: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3d8b9cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d8ba0:
    // 0x3d8ba0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d8ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d8ba4:
    // 0x3d8ba4: 0x40f809  jalr        $v0
label_3d8ba8:
    if (ctx->pc == 0x3D8BA8u) {
        ctx->pc = 0x3D8BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8BA4u;
        // 0x3d8ba8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8BACu;
        goto label_3d8bac;
    }
    ctx->pc = 0x3D8BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D8BACu);
        ctx->pc = 0x3D8BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8BA4u;
        // 0x3d8ba8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8BA4u, 0x3D8BACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D8BACu;
label_3d8bac:
    // 0x3d8bac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d8bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d8bb0:
    // 0x3d8bb0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d8bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d8bb4:
    // 0x3d8bb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d8bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d8bb8:
    // 0x3d8bb8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_3d8bbc:
    if (ctx->pc == 0x3D8BBCu) {
        ctx->pc = 0x3D8BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8BB8u;
        // 0x3d8bbc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8BC0u;
        goto label_3d8bc0;
    }
    ctx->pc = 0x3D8BB8u;
    {
        const bool branch_taken_0x3d8bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D8BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8BB8u;
        // 0x3d8bbc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8bb8) {
            ctx->pc = 0x3D8BC8u;
            goto label_3d8bc8;
        }
    }
    ctx->pc = 0x3D8BC0u;
label_3d8bc0:
    // 0x3d8bc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d8bc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d8bc4:
    // 0x3d8bc4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3d8bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3d8bc8:
    // 0x3d8bc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d8bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d8bcc:
    // 0x3d8bcc: 0x3e00008  jr          $ra
label_3d8bd0:
    if (ctx->pc == 0x3D8BD0u) {
        ctx->pc = 0x3D8BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8BCCu;
        // 0x3d8bd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8BD4u;
        goto label_3d8bd4;
    }
    ctx->pc = 0x3D8BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8BCCu;
        // 0x3d8bd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8BD4u;
label_3d8bd4:
    // 0x3d8bd4: 0x0  nop
    ctx->pc = 0x3d8bd4u;
    // NOP
    ctx->pc = 0x3d8bd8u;
}
