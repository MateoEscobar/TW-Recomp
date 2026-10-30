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

// Function: sub_004B07B8
// Address: 0x4b07b8 - 0x4b0808
void sub_004B07B8_0x4b07b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B07B8_0x4b07b8");
#endif

    switch (ctx->pc) {
        case 0x4b07dcu: goto label_4b07dc;
        case 0x4b07f4u: goto label_4b07f4;
        default: break;
    }

    ctx->pc = 0x4b07b8u;

    // 0x4b07b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b07b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b07bc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4b07bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4b07c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b07c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b07c4: 0x8c625af0  lw          $v0, 0x5AF0($v1)
    ctx->pc = 0x4b07c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x715AF0u));
    // 0x4b07c8: 0x24705af0  addiu       $s0, $v1, 0x5AF0
    ctx->pc = 0x4b07c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23280));
    // 0x4b07cc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B07CCu;
    {
        const bool branch_taken_0x4b07cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B07D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B07CCu;
        // 0x4b07d0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b07cc) {
            ctx->pc = 0x4B07F4u;
            goto label_4b07f4;
        }
    }
    ctx->pc = 0x4B07D4u;
    // 0x4b07d4: 0xc12c202  jal         func_4B0808
    ctx->pc = 0x4B07D4u;
    SET_GPR_U32(ctx, 31, 0x4B07DCu);
    ctx->pc = 0x4B0808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0808u, 0x4B07D4u, 0x4B07DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B07DCu;
label_4b07dc:
    // 0x4b07dc: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4b07dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x4b07e0: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x4b07e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x4b07e4: 0x24a50698  addiu       $a1, $a1, 0x698
    ctx->pc = 0x4b07e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1688));
    // 0x4b07e8: 0x24c671e8  addiu       $a2, $a2, 0x71E8
    ctx->pc = 0x4b07e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29160));
    // 0x4b07ec: 0xc10bbf8  jal         func_42EFE0
    ctx->pc = 0x4B07ECu;
    SET_GPR_U32(ctx, 31, 0x4B07F4u);
    ctx->pc = 0x4B07F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B07ECu;
    // 0x4b07f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EFE0u, 0x4B07ECu, 0x4B07F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B07F4u;
label_4b07f4:
    // 0x4b07f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b07f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b07f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b07f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b07fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b07fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0800: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0800u;
        // 0x4b0804: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0808u;
}
