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

// Function: sub_001F29B8
// Address: 0x1f29b8 - 0x1f2a00
void sub_001F29B8_0x1f29b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F29B8_0x1f29b8");
#endif

    switch (ctx->pc) {
        case 0x1f29b8u: goto label_1f29b8;
        case 0x1f29bcu: goto label_1f29bc;
        case 0x1f29c0u: goto label_1f29c0;
        case 0x1f29c4u: goto label_1f29c4;
        case 0x1f29c8u: goto label_1f29c8;
        case 0x1f29ccu: goto label_1f29cc;
        case 0x1f29d0u: goto label_1f29d0;
        case 0x1f29d4u: goto label_1f29d4;
        case 0x1f29d8u: goto label_1f29d8;
        case 0x1f29dcu: goto label_1f29dc;
        case 0x1f29e0u: goto label_1f29e0;
        case 0x1f29e4u: goto label_1f29e4;
        case 0x1f29e8u: goto label_1f29e8;
        case 0x1f29ecu: goto label_1f29ec;
        case 0x1f29f0u: goto label_1f29f0;
        case 0x1f29f4u: goto label_1f29f4;
        case 0x1f29f8u: goto label_1f29f8;
        case 0x1f29fcu: goto label_1f29fc;
        default: break;
    }

    ctx->pc = 0x1f29b8u;

label_1f29b8:
    // 0x1f29b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f29b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f29bc:
    // 0x1f29bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f29bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f29c0:
    // 0x1f29c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f29c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1f29c4:
    // 0x1f29c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f29c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f29c8:
    // 0x1f29c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f29c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f29cc:
    // 0x1f29cc: 0x8e060070  lw          $a2, 0x70($s0)
    ctx->pc = 0x1f29ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_1f29d0:
    // 0x1f29d0: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1f29d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1f29d4:
    // 0x1f29d4: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1f29d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1f29d8:
    // 0x1f29d8: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1f29d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1f29dc:
    // 0x1f29dc: 0x40f809  jalr        $v0
label_1f29e0:
    if (ctx->pc == 0x1F29E0u) {
        ctx->pc = 0x1F29E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F29DCu;
        // 0x1f29e0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F29E4u;
        goto label_1f29e4;
    }
    ctx->pc = 0x1F29DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F29E4u);
        ctx->pc = 0x1F29E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F29DCu;
        // 0x1f29e0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F29DCu, 0x1F29E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F29E4u;
label_1f29e4:
    // 0x1f29e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f29e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f29e8:
    // 0x1f29e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f29e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f29ec:
    // 0x1f29ec: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x1f29ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
label_1f29f0:
    // 0x1f29f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f29f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f29f4:
    // 0x1f29f4: 0x3e00008  jr          $ra
label_1f29f8:
    if (ctx->pc == 0x1F29F8u) {
        ctx->pc = 0x1F29F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F29F4u;
        // 0x1f29f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F29FCu;
        goto label_1f29fc;
    }
    ctx->pc = 0x1F29F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F29F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F29F4u;
        // 0x1f29f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F29F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F29FCu;
label_1f29fc:
    // 0x1f29fc: 0x0  nop
    ctx->pc = 0x1f29fcu;
    // NOP
    ctx->pc = 0x1f2a00u;
}
