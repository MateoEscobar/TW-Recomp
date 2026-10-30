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

// Function: sub_00419460
// Address: 0x419460 - 0x4194b8
void sub_00419460_0x419460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419460_0x419460");
#endif

    switch (ctx->pc) {
        case 0x419484u: goto label_419484;
        case 0x4194a0u: goto label_4194a0;
        default: break;
    }

    ctx->pc = 0x419460u;

    // 0x419460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x419460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x419464: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x419464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x419468: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x419468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41946c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41946cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419470: 0x8e020268  lw          $v0, 0x268($s0)
    ctx->pc = 0x419470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x419474: 0x5c40000c  bgtzl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x419474u;
    {
        const bool branch_taken_0x419474 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x419474) {
            ctx->pc = 0x419478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x419474u;
            // 0x419478: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4194A8u;
            goto label_4194a8;
        }
    }
    ctx->pc = 0x41947Cu;
    // 0x41947c: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x41947Cu;
    SET_GPR_U32(ctx, 31, 0x419484u);
    ctx->pc = 0x419480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41947Cu;
    // 0x419480: 0x26040264  addiu       $a0, $s0, 0x264 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 612));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x41947Cu, 0x419484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419484u;
label_419484:
    // 0x419484: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x419484u;
    {
        const bool branch_taken_0x419484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x419484) {
            ctx->pc = 0x419488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x419484u;
            // 0x419488: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4194A8u;
            goto label_4194a8;
        }
    }
    ctx->pc = 0x41948Cu;
    // 0x41948c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41948cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x419490: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x419490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x419494: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x419494u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x419498: 0xc04402c  jal         func_1100B0
    ctx->pc = 0x419498u;
    SET_GPR_U32(ctx, 31, 0x4194A0u);
    ctx->pc = 0x41949Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419498u;
    // 0x41949c: 0x24a5adf0  addiu       $a1, $a1, -0x5210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1100B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1100B0u, 0x419498u, 0x4194A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4194A0u;
label_4194a0:
    // 0x4194a0: 0xae020264  sw          $v0, 0x264($s0)
    ctx->pc = 0x4194a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
    // 0x4194a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4194a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4194a8:
    // 0x4194a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4194a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4194ac: 0x3e00008  jr          $ra
    ctx->pc = 0x4194ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4194B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4194ACu;
        // 0x4194b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4194ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4194B4u;
    // 0x4194b4: 0x0  nop
    ctx->pc = 0x4194b4u;
    // NOP
    ctx->pc = 0x4194b8u;
}
