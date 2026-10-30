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

// Function: sub_003F61A8
// Address: 0x3f61a8 - 0x3f61d8
void sub_003F61A8_0x3f61a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F61A8_0x3f61a8");
#endif

    switch (ctx->pc) {
        case 0x3f61a8u: goto label_3f61a8;
        case 0x3f61acu: goto label_3f61ac;
        case 0x3f61b0u: goto label_3f61b0;
        case 0x3f61b4u: goto label_3f61b4;
        case 0x3f61b8u: goto label_3f61b8;
        case 0x3f61bcu: goto label_3f61bc;
        case 0x3f61c0u: goto label_3f61c0;
        case 0x3f61c4u: goto label_3f61c4;
        case 0x3f61c8u: goto label_3f61c8;
        case 0x3f61ccu: goto label_3f61cc;
        case 0x3f61d0u: goto label_3f61d0;
        case 0x3f61d4u: goto label_3f61d4;
        default: break;
    }

    ctx->pc = 0x3f61a8u;

label_3f61a8:
    // 0x3f61a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f61a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3f61ac:
    // 0x3f61ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f61acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3f61b0:
    // 0x3f61b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3f61b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f61b4:
    // 0x3f61b4: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3f61b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f61b8:
    // 0x3f61b8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f61b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f61bc:
    // 0x3f61bc: 0x40f809  jalr        $v0
label_3f61c0:
    if (ctx->pc == 0x3F61C0u) {
        ctx->pc = 0x3F61C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F61BCu;
        // 0x3f61c0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F61C4u;
        goto label_3f61c4;
    }
    ctx->pc = 0x3F61BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F61C4u);
        ctx->pc = 0x3F61C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F61BCu;
        // 0x3f61c0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F61BCu, 0x3F61C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F61C4u;
label_3f61c4:
    // 0x3f61c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f61c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3f61c8:
    // 0x3f61c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f61c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f61cc:
    // 0x3f61cc: 0x3e00008  jr          $ra
label_3f61d0:
    if (ctx->pc == 0x3F61D0u) {
        ctx->pc = 0x3F61D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F61CCu;
        // 0x3f61d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F61D4u;
        goto label_3f61d4;
    }
    ctx->pc = 0x3F61CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F61D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F61CCu;
        // 0x3f61d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F61CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F61D4u;
label_3f61d4:
    // 0x3f61d4: 0x0  nop
    ctx->pc = 0x3f61d4u;
    // NOP
    ctx->pc = 0x3f61d8u;
}
