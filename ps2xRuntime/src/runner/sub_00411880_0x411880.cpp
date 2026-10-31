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

// Function: sub_00411880
// Address: 0x411880 - 0x4118b8
void sub_00411880_0x411880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00411880_0x411880");
#endif

    switch (ctx->pc) {
        case 0x4118a4u: goto label_4118a4;
        default: break;
    }

    ctx->pc = 0x411880u;

    // 0x411880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x411880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x411884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x411884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x411888: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x411888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x41188c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x41188Cu;
    {
        const bool branch_taken_0x41188c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x411890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41188Cu;
        // 0x411890: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41188c) {
            ctx->pc = 0x41189Cu;
            goto label_41189c;
        }
    }
    ctx->pc = 0x411894u;
    // 0x411894: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x411894u;
    {
        const bool branch_taken_0x411894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x411898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411894u;
        // 0x411898: 0xc4408e1c  lwc1        $f0, -0x71E4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294938140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x411894) {
            ctx->pc = 0x4118A8u;
            goto label_4118a8;
        }
    }
    ctx->pc = 0x41189Cu;
label_41189c:
    // 0x41189c: 0xc10407c  jal         func_4101F0
    ctx->pc = 0x41189Cu;
    SET_GPR_U32(ctx, 31, 0x4118A4u);
    ctx->pc = 0x4118A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41189Cu;
    // 0x4118a0: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4101F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4101F0u, 0x41189Cu, 0x4118A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4118A4u;
label_4118a4:
    // 0x4118a4: 0x46000004  c1          0x4
    ctx->pc = 0x4118a4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_4118a8:
    // 0x4118a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4118a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4118ac: 0x3e00008  jr          $ra
    ctx->pc = 0x4118ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4118B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4118ACu;
        // 0x4118b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4118ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4118B4u;
    // 0x4118b4: 0x0  nop
    ctx->pc = 0x4118b4u;
    // NOP
    ctx->pc = 0x4118b8u;
}
