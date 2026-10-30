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

// Function: sub_001F80C8
// Address: 0x1f80c8 - 0x1f8110
void sub_001F80C8_0x1f80c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F80C8_0x1f80c8");
#endif

    switch (ctx->pc) {
        case 0x1f80c8u: goto label_1f80c8;
        case 0x1f80ccu: goto label_1f80cc;
        case 0x1f80d0u: goto label_1f80d0;
        case 0x1f80d4u: goto label_1f80d4;
        case 0x1f80d8u: goto label_1f80d8;
        case 0x1f80dcu: goto label_1f80dc;
        case 0x1f80e0u: goto label_1f80e0;
        case 0x1f80e4u: goto label_1f80e4;
        case 0x1f80e8u: goto label_1f80e8;
        case 0x1f80ecu: goto label_1f80ec;
        case 0x1f80f0u: goto label_1f80f0;
        case 0x1f80f4u: goto label_1f80f4;
        case 0x1f80f8u: goto label_1f80f8;
        case 0x1f80fcu: goto label_1f80fc;
        case 0x1f8100u: goto label_1f8100;
        case 0x1f8104u: goto label_1f8104;
        case 0x1f8108u: goto label_1f8108;
        case 0x1f810cu: goto label_1f810c;
        default: break;
    }

    ctx->pc = 0x1f80c8u;

label_1f80c8:
    // 0x1f80c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f80c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f80cc:
    // 0x1f80cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f80ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f80d0:
    // 0x1f80d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f80d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1f80d4:
    // 0x1f80d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f80d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f80d8:
    // 0x1f80d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f80d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f80dc:
    // 0x1f80dc: 0x8e060070  lw          $a2, 0x70($s0)
    ctx->pc = 0x1f80dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_1f80e0:
    // 0x1f80e0: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1f80e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1f80e4:
    // 0x1f80e4: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1f80e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1f80e8:
    // 0x1f80e8: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1f80e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1f80ec:
    // 0x1f80ec: 0x40f809  jalr        $v0
label_1f80f0:
    if (ctx->pc == 0x1F80F0u) {
        ctx->pc = 0x1F80F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F80ECu;
        // 0x1f80f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F80F4u;
        goto label_1f80f4;
    }
    ctx->pc = 0x1F80ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F80F4u);
        ctx->pc = 0x1F80F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F80ECu;
        // 0x1f80f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F80ECu, 0x1F80F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F80F4u;
label_1f80f4:
    // 0x1f80f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f80f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f80f8:
    // 0x1f80f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f80f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f80fc:
    // 0x1f80fc: 0xae030098  sw          $v1, 0x98($s0)
    ctx->pc = 0x1f80fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
label_1f8100:
    // 0x1f8100: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f8100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f8104:
    // 0x1f8104: 0x3e00008  jr          $ra
label_1f8108:
    if (ctx->pc == 0x1F8108u) {
        ctx->pc = 0x1F8108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8104u;
        // 0x1f8108: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F810Cu;
        goto label_1f810c;
    }
    ctx->pc = 0x1F8104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8104u;
        // 0x1f8108: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F810Cu;
label_1f810c:
    // 0x1f810c: 0x0  nop
    ctx->pc = 0x1f810cu;
    // NOP
    ctx->pc = 0x1f8110u;
}
