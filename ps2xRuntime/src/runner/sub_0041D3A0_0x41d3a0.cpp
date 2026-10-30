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

// Function: sub_0041D3A0
// Address: 0x41d3a0 - 0x41d3d4
void sub_0041D3A0_0x41d3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D3A0_0x41d3a0");
#endif

    switch (ctx->pc) {
        case 0x41d3a0u: goto label_41d3a0;
        case 0x41d3a4u: goto label_41d3a4;
        case 0x41d3a8u: goto label_41d3a8;
        case 0x41d3acu: goto label_41d3ac;
        case 0x41d3b0u: goto label_41d3b0;
        case 0x41d3b4u: goto label_41d3b4;
        case 0x41d3b8u: goto label_41d3b8;
        case 0x41d3bcu: goto label_41d3bc;
        case 0x41d3c0u: goto label_41d3c0;
        case 0x41d3c4u: goto label_41d3c4;
        case 0x41d3c8u: goto label_41d3c8;
        case 0x41d3ccu: goto label_41d3cc;
        case 0x41d3d0u: goto label_41d3d0;
        default: break;
    }

    ctx->pc = 0x41d3a0u;

label_41d3a0:
    // 0x41d3a0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x41d3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_41d3a4:
    // 0x41d3a4: 0x3e00008  jr          $ra
label_41d3a8:
    if (ctx->pc == 0x41D3A8u) {
        ctx->pc = 0x41D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D3A4u;
        // 0x41d3a8: 0x2442b0d0  addiu       $v0, $v0, -0x4F30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D3ACu;
        goto label_41d3ac;
    }
    ctx->pc = 0x41D3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D3A4u;
        // 0x41d3a8: 0x2442b0d0  addiu       $v0, $v0, -0x4F30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947024));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D3A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D3ACu;
label_41d3ac:
    // 0x41d3ac: 0x0  nop
    ctx->pc = 0x41d3acu;
    // NOP
label_41d3b0:
    // 0x41d3b0: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x41d3b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_41d3b4:
    // 0x41d3b4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_41d3b8:
    if (ctx->pc == 0x41D3B8u) {
        ctx->pc = 0x41D3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D3B4u;
        // 0x41d3b8: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D3BCu;
        goto label_41d3bc;
    }
    ctx->pc = 0x41D3B4u;
    {
        const bool branch_taken_0x41d3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41D3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D3B4u;
        // 0x41d3b8: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d3b4) {
            ctx->pc = 0x41D410u;
            return;
        }
    }
    ctx->pc = 0x41D3BCu;
label_41d3bc:
    // 0x41d3bc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x41d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_41d3c0:
    // 0x41d3c0: 0x2442b170  addiu       $v0, $v0, -0x4E90
    ctx->pc = 0x41d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947184));
label_41d3c4:
    // 0x41d3c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x41d3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_41d3c8:
    // 0x41d3c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x41d3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_41d3cc:
    // 0x41d3cc: 0x800008  jr          $a0
label_41d3d0:
    if (ctx->pc == 0x41D3D0u) {
        ctx->pc = 0x41D3D4u;
        goto label_fallthrough_0x41d3cc;
    }
    ctx->pc = 0x41D3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D3CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x41d3cc:
    ctx->pc = 0x41D3D4u;
}
