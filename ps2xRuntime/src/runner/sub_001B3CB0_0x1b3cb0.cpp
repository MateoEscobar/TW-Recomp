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

// Function: sub_001B3CB0
// Address: 0x1b3cb0 - 0x1b3d10
void sub_001B3CB0_0x1b3cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3CB0_0x1b3cb0");
#endif

    switch (ctx->pc) {
        case 0x1b3ce0u: goto label_1b3ce0;
        case 0x1b3cfcu: goto label_1b3cfc;
        default: break;
    }

    ctx->pc = 0x1b3cb0u;

    // 0x1b3cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b3cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b3cb4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1b3cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1b3cb8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b3cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b3cbc: 0x24422e20  addiu       $v0, $v0, 0x2E20
    ctx->pc = 0x1b3cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11808));
    // 0x1b3cc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3cc4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1b3cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b3cc8: 0x3403e340  ori         $v1, $zero, 0xE340
    ctx->pc = 0x1b3cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58176);
    // 0x1b3ccc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1b3cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b3cd0: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x1b3cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b3cd4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1b3cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b3cd8: 0xc06ec94  jal         func_1BB250
    ctx->pc = 0x1B3CD8u;
    SET_GPR_U32(ctx, 31, 0x1B3CE0u);
    ctx->pc = 0x1B3CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3CD8u;
    // 0x1b3cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1B3CD8u, 0x1B3CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3CE0u;
label_1b3ce0:
    // 0x1b3ce0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b3ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1b3ce4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b3ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3ce8: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x1b3ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x1b3cec: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1b3cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1b3cf0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1b3cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1b3cf4: 0xc04444c  jal         func_111130
    ctx->pc = 0x1B3CF4u;
    SET_GPR_U32(ctx, 31, 0x1B3CFCu);
    ctx->pc = 0x1B3CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3CF4u;
    // 0x1b3cf8: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1B3CF4u, 0x1B3CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3CFCu;
label_1b3cfc:
    // 0x1b3cfc: 0xae020194  sw          $v0, 0x194($s0)
    ctx->pc = 0x1b3cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 2));
    // 0x1b3d00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b3d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3d04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3d08: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D08u;
        // 0x1b3d0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3D10u;
}
