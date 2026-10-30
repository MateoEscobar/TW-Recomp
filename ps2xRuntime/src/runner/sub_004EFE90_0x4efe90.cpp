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

// Function: sub_004EFE90
// Address: 0x4efe90 - 0x4efec0
void sub_004EFE90_0x4efe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EFE90_0x4efe90");
#endif

    switch (ctx->pc) {
        case 0x4efe90u: goto label_4efe90;
        case 0x4efe94u: goto label_4efe94;
        case 0x4efe98u: goto label_4efe98;
        case 0x4efe9cu: goto label_4efe9c;
        case 0x4efea0u: goto label_4efea0;
        case 0x4efea4u: goto label_4efea4;
        case 0x4efea8u: goto label_4efea8;
        case 0x4efeacu: goto label_4efeac;
        case 0x4efeb0u: goto label_4efeb0;
        case 0x4efeb4u: goto label_4efeb4;
        case 0x4efeb8u: goto label_4efeb8;
        case 0x4efebcu: goto label_4efebc;
        default: break;
    }

    ctx->pc = 0x4efe90u;

label_4efe90:
    // 0x4efe90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4efe90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4efe94:
    // 0x4efe94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4efe94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4efe98:
    // 0x4efe98: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4efe98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4efe9c:
    // 0x4efe9c: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4efe9cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4efea0:
    // 0x4efea0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4efea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4efea4:
    // 0x4efea4: 0x40f809  jalr        $v0
label_4efea8:
    if (ctx->pc == 0x4EFEA8u) {
        ctx->pc = 0x4EFEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFEA4u;
        // 0x4efea8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EFEACu;
        goto label_4efeac;
    }
    ctx->pc = 0x4EFEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4EFEACu);
        ctx->pc = 0x4EFEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFEA4u;
        // 0x4efea8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EFEA4u, 0x4EFEACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EFEACu;
label_4efeac:
    // 0x4efeac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4efeacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4efeb0:
    // 0x4efeb0: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x4efeb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_4efeb4:
    // 0x4efeb4: 0x3e00008  jr          $ra
label_4efeb8:
    if (ctx->pc == 0x4EFEB8u) {
        ctx->pc = 0x4EFEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFEB4u;
        // 0x4efeb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EFEBCu;
        goto label_4efebc;
    }
    ctx->pc = 0x4EFEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EFEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFEB4u;
        // 0x4efeb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EFEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EFEBCu;
label_4efebc:
    // 0x4efebc: 0x0  nop
    ctx->pc = 0x4efebcu;
    // NOP
    ctx->pc = 0x4efec0u;
}
