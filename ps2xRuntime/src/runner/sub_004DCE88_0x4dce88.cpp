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

// Function: sub_004DCE88
// Address: 0x4dce88 - 0x4dcec0
void sub_004DCE88_0x4dce88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DCE88_0x4dce88");
#endif

    switch (ctx->pc) {
        case 0x4dce88u: goto label_4dce88;
        case 0x4dce8cu: goto label_4dce8c;
        case 0x4dce90u: goto label_4dce90;
        case 0x4dce94u: goto label_4dce94;
        case 0x4dce98u: goto label_4dce98;
        case 0x4dce9cu: goto label_4dce9c;
        case 0x4dcea0u: goto label_4dcea0;
        case 0x4dcea4u: goto label_4dcea4;
        case 0x4dcea8u: goto label_4dcea8;
        case 0x4dceacu: goto label_4dceac;
        case 0x4dceb0u: goto label_4dceb0;
        case 0x4dceb4u: goto label_4dceb4;
        case 0x4dceb8u: goto label_4dceb8;
        case 0x4dcebcu: goto label_4dcebc;
        default: break;
    }

    ctx->pc = 0x4dce88u;

label_4dce88:
    // 0x4dce88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4dce88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4dce8c:
    // 0x4dce8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4dce8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4dce90:
    // 0x4dce90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dce90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4dce94:
    // 0x4dce94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4dce94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4dce98:
    // 0x4dce98: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4dce98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dce9c:
    // 0x4dce9c: 0x84650028  lh          $a1, 0x28($v1)
    ctx->pc = 0x4dce9cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_4dcea0:
    // 0x4dcea0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x4dcea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_4dcea4:
    // 0x4dcea4: 0x40f809  jalr        $v0
label_4dcea8:
    if (ctx->pc == 0x4DCEA8u) {
        ctx->pc = 0x4DCEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCEA4u;
        // 0x4dcea8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCEACu;
        goto label_4dceac;
    }
    ctx->pc = 0x4DCEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DCEACu);
        ctx->pc = 0x4DCEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCEA4u;
        // 0x4dcea8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DCEA4u, 0x4DCEACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DCEACu;
label_4dceac:
    // 0x4dceac: 0x50102f  dsubu       $v0, $v0, $s0
    ctx->pc = 0x4dceacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 16));
label_4dceb0:
    // 0x4dceb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dceb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4dceb4:
    // 0x4dceb4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4dceb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dceb8:
    // 0x4dceb8: 0x3e00008  jr          $ra
label_4dcebc:
    if (ctx->pc == 0x4DCEBCu) {
        ctx->pc = 0x4DCEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCEB8u;
        // 0x4dcebc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCEC0u;
        goto label_fallthrough_0x4dceb8;
    }
    ctx->pc = 0x4DCEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DCEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCEB8u;
        // 0x4dcebc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DCEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4dceb8:
    ctx->pc = 0x4DCEC0u;
}
