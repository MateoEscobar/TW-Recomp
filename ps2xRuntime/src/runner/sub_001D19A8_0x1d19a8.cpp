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

// Function: sub_001D19A8
// Address: 0x1d19a8 - 0x1d19e8
void sub_001D19A8_0x1d19a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D19A8_0x1d19a8");
#endif

    switch (ctx->pc) {
        case 0x1d19a8u: goto label_1d19a8;
        case 0x1d19acu: goto label_1d19ac;
        case 0x1d19b0u: goto label_1d19b0;
        case 0x1d19b4u: goto label_1d19b4;
        case 0x1d19b8u: goto label_1d19b8;
        case 0x1d19bcu: goto label_1d19bc;
        case 0x1d19c0u: goto label_1d19c0;
        case 0x1d19c4u: goto label_1d19c4;
        case 0x1d19c8u: goto label_1d19c8;
        case 0x1d19ccu: goto label_1d19cc;
        case 0x1d19d0u: goto label_1d19d0;
        case 0x1d19d4u: goto label_1d19d4;
        case 0x1d19d8u: goto label_1d19d8;
        case 0x1d19dcu: goto label_1d19dc;
        case 0x1d19e0u: goto label_1d19e0;
        case 0x1d19e4u: goto label_1d19e4;
        default: break;
    }

    ctx->pc = 0x1d19a8u;

label_1d19a8:
    // 0x1d19a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d19a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d19ac:
    // 0x1d19ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d19acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1d19b0:
    // 0x1d19b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d19b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d19b4:
    // 0x1d19b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d19b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d19b8:
    // 0x1d19b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d19b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d19bc:
    // 0x1d19bc: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x1d19bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_1d19c0:
    // 0x1d19c0: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x1d19c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_1d19c4:
    // 0x1d19c4: 0x60f809  jalr        $v1
label_1d19c8:
    if (ctx->pc == 0x1D19C8u) {
        ctx->pc = 0x1D19C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19C4u;
        // 0x1d19c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D19CCu;
        goto label_1d19cc;
    }
    ctx->pc = 0x1D19C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D19CCu);
        ctx->pc = 0x1D19C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19C4u;
        // 0x1d19c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D19C4u, 0x1D19CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D19CCu;
label_1d19cc:
    // 0x1d19cc: 0xc06e4a4  jal         func_1B9290
label_1d19d0:
    if (ctx->pc == 0x1D19D0u) {
        ctx->pc = 0x1D19D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19CCu;
        // 0x1d19d0: 0x26040170  addiu       $a0, $s0, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D19D4u;
        goto label_1d19d4;
    }
    ctx->pc = 0x1D19CCu;
    SET_GPR_U32(ctx, 31, 0x1D19D4u);
    ctx->pc = 0x1D19D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19CCu;
    // 0x1d19d0: 0x26040170  addiu       $a0, $s0, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9290u, 0x1D19CCu, 0x1D19D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19D4u;
label_1d19d4:
    // 0x1d19d4: 0xae000700  sw          $zero, 0x700($s0)
    ctx->pc = 0x1d19d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1792), GPR_U32(ctx, 0));
label_1d19d8:
    // 0x1d19d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d19d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d19dc:
    // 0x1d19dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d19dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d19e0:
    // 0x1d19e0: 0x3e00008  jr          $ra
label_1d19e4:
    if (ctx->pc == 0x1D19E4u) {
        ctx->pc = 0x1D19E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19E0u;
        // 0x1d19e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D19E8u;
        goto label_fallthrough_0x1d19e0;
    }
    ctx->pc = 0x1D19E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D19E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19E0u;
        // 0x1d19e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D19E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d19e0:
    ctx->pc = 0x1D19E8u;
}
