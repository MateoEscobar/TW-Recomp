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

// Function: sub_003E81A8
// Address: 0x3e81a8 - 0x3e81e0
void sub_003E81A8_0x3e81a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E81A8_0x3e81a8");
#endif

    switch (ctx->pc) {
        case 0x3e81a8u: goto label_3e81a8;
        case 0x3e81acu: goto label_3e81ac;
        case 0x3e81b0u: goto label_3e81b0;
        case 0x3e81b4u: goto label_3e81b4;
        case 0x3e81b8u: goto label_3e81b8;
        case 0x3e81bcu: goto label_3e81bc;
        case 0x3e81c0u: goto label_3e81c0;
        case 0x3e81c4u: goto label_3e81c4;
        case 0x3e81c8u: goto label_3e81c8;
        case 0x3e81ccu: goto label_3e81cc;
        case 0x3e81d0u: goto label_3e81d0;
        case 0x3e81d4u: goto label_3e81d4;
        case 0x3e81d8u: goto label_3e81d8;
        case 0x3e81dcu: goto label_3e81dc;
        default: break;
    }

    ctx->pc = 0x3e81a8u;

label_3e81a8:
    // 0x3e81a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e81a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3e81ac:
    // 0x3e81ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e81acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e81b0:
    // 0x3e81b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3e81b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e81b4:
    // 0x3e81b4: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3e81b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e81b8:
    // 0x3e81b8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e81b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e81bc:
    // 0x3e81bc: 0x40f809  jalr        $v0
label_3e81c0:
    if (ctx->pc == 0x3E81C0u) {
        ctx->pc = 0x3E81C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E81BCu;
        // 0x3e81c0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E81C4u;
        goto label_3e81c4;
    }
    ctx->pc = 0x3E81BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E81C4u);
        ctx->pc = 0x3E81C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E81BCu;
        // 0x3e81c0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E81BCu, 0x3E81C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E81C4u;
label_3e81c4:
    // 0x3e81c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3e81c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e81c8:
    // 0x3e81c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e81c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e81cc:
    // 0x3e81cc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3e81ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3e81d0:
    // 0x3e81d0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3e81d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3e81d4:
    // 0x3e81d4: 0x3e00008  jr          $ra
label_3e81d8:
    if (ctx->pc == 0x3E81D8u) {
        ctx->pc = 0x3E81D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E81D4u;
        // 0x3e81d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E81DCu;
        goto label_3e81dc;
    }
    ctx->pc = 0x3E81D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E81D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E81D4u;
        // 0x3e81d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E81D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E81DCu;
label_3e81dc:
    // 0x3e81dc: 0x0  nop
    ctx->pc = 0x3e81dcu;
    // NOP
    ctx->pc = 0x3e81e0u;
}
