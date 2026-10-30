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

// Function: sub_003F0898
// Address: 0x3f0898 - 0x3f08c0
void sub_003F0898_0x3f0898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F0898_0x3f0898");
#endif

    switch (ctx->pc) {
        case 0x3f0898u: goto label_3f0898;
        case 0x3f089cu: goto label_3f089c;
        case 0x3f08a0u: goto label_3f08a0;
        case 0x3f08a4u: goto label_3f08a4;
        case 0x3f08a8u: goto label_3f08a8;
        case 0x3f08acu: goto label_3f08ac;
        case 0x3f08b0u: goto label_3f08b0;
        case 0x3f08b4u: goto label_3f08b4;
        case 0x3f08b8u: goto label_3f08b8;
        case 0x3f08bcu: goto label_3f08bc;
        default: break;
    }

    ctx->pc = 0x3f0898u;

label_3f0898:
    // 0x3f0898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f0898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3f089c:
    // 0x3f089c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f089cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3f08a0:
    // 0x3f08a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3f08a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f08a4:
    // 0x3f08a4: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3f08a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f08a8:
    // 0x3f08a8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f08a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f08ac:
    // 0x3f08ac: 0x40f809  jalr        $v0
label_3f08b0:
    if (ctx->pc == 0x3F08B0u) {
        ctx->pc = 0x3F08B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F08ACu;
        // 0x3f08b0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F08B4u;
        goto label_3f08b4;
    }
    ctx->pc = 0x3F08ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F08B4u);
        ctx->pc = 0x3F08B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F08ACu;
        // 0x3f08b0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F08ACu, 0x3F08B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F08B4u;
label_3f08b4:
    // 0x3f08b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f08b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3f08b8:
    // 0x3f08b8: 0x3e00008  jr          $ra
label_3f08bc:
    if (ctx->pc == 0x3F08BCu) {
        ctx->pc = 0x3F08BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F08B8u;
        // 0x3f08bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F08C0u;
        goto label_fallthrough_0x3f08b8;
    }
    ctx->pc = 0x3F08B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F08BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F08B8u;
        // 0x3f08bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F08B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f08b8:
    ctx->pc = 0x3F08C0u;
}
