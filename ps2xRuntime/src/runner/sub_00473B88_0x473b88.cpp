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

// Function: sub_00473B88
// Address: 0x473b88 - 0x473bd0
void sub_00473B88_0x473b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473B88_0x473b88");
#endif

    switch (ctx->pc) {
        case 0x473b88u: goto label_473b88;
        case 0x473b8cu: goto label_473b8c;
        case 0x473b90u: goto label_473b90;
        case 0x473b94u: goto label_473b94;
        case 0x473b98u: goto label_473b98;
        case 0x473b9cu: goto label_473b9c;
        case 0x473ba0u: goto label_473ba0;
        case 0x473ba4u: goto label_473ba4;
        case 0x473ba8u: goto label_473ba8;
        case 0x473bacu: goto label_473bac;
        case 0x473bb0u: goto label_473bb0;
        case 0x473bb4u: goto label_473bb4;
        case 0x473bb8u: goto label_473bb8;
        case 0x473bbcu: goto label_473bbc;
        case 0x473bc0u: goto label_473bc0;
        case 0x473bc4u: goto label_473bc4;
        case 0x473bc8u: goto label_473bc8;
        case 0x473bccu: goto label_473bcc;
        default: break;
    }

    ctx->pc = 0x473b88u;

label_473b88:
    // 0x473b88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x473b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_473b8c:
    // 0x473b8c: 0x8f858518  lw          $a1, -0x7AE8($gp)
    ctx->pc = 0x473b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935832)));
label_473b90:
    // 0x473b90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x473b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_473b94:
    // 0x473b94: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x473b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_473b98:
    // 0x473b98: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x473b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_473b9c:
    // 0x473b9c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x473b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_473ba0:
    // 0x473ba0: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x473ba0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_473ba4:
    // 0x473ba4: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x473ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_473ba8:
    // 0x473ba8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x473ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_473bac:
    // 0x473bac: 0xa4620008  sh          $v0, 0x8($v1)
    ctx->pc = 0x473bacu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
label_473bb0:
    // 0x473bb0: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x473bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
label_473bb4:
    // 0x473bb4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x473bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_473bb8:
    // 0x473bb8: 0x40f809  jalr        $v0
label_473bbc:
    if (ctx->pc == 0x473BBCu) {
        ctx->pc = 0x473BC0u;
        goto label_473bc0;
    }
    ctx->pc = 0x473BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x473BC0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473BB8u, 0x473BC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x473BC0u;
label_473bc0:
    // 0x473bc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x473bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_473bc4:
    // 0x473bc4: 0x3e00008  jr          $ra
label_473bc8:
    if (ctx->pc == 0x473BC8u) {
        ctx->pc = 0x473BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473BC4u;
        // 0x473bc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x473BCCu;
        goto label_473bcc;
    }
    ctx->pc = 0x473BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473BC4u;
        // 0x473bc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x473BCCu;
label_473bcc:
    // 0x473bcc: 0x0  nop
    ctx->pc = 0x473bccu;
    // NOP
    ctx->pc = 0x473bd0u;
}
