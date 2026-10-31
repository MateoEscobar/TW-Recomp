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

// Function: sub_001A3C48
// Address: 0x1a3c48 - 0x1a3ca0
void sub_001A3C48_0x1a3c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3C48_0x1a3c48");
#endif

    switch (ctx->pc) {
        case 0x1a3c5cu: goto label_1a3c5c;
        case 0x1a3c70u: goto label_1a3c70;
        case 0x1a3c78u: goto label_1a3c78;
        default: break;
    }

    ctx->pc = 0x1a3c48u;

    // 0x1a3c48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a3c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a3c4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a3c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a3c50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a3c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a3c54: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1A3C54u;
    SET_GPR_U32(ctx, 31, 0x1A3C5Cu);
    ctx->pc = 0x1A3C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3C54u;
    // 0x1a3c58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1A3C54u, 0x1A3C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3C5Cu;
label_1a3c5c:
    // 0x1a3c5c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1a3c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1a3c60: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1a3c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1a3c64: 0x24639698  addiu       $v1, $v1, -0x6968
    ctx->pc = 0x1a3c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940312));
    // 0x1a3c68: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x1A3C68u;
    SET_GPR_U32(ctx, 31, 0x1A3C70u);
    ctx->pc = 0x1A3C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3C68u;
    // 0x1a3c6c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1A3C68u, 0x1A3C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3C70u;
label_1a3c70:
    // 0x1a3c70: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1A3C70u;
    SET_GPR_U32(ctx, 31, 0x1A3C78u);
    ctx->pc = 0x1A3C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3C70u;
    // 0x1a3c74: 0x26040120  addiu       $a0, $s0, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1A3C70u, 0x1A3C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3C78u;
label_1a3c78:
    // 0x1a3c78: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1a3c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a3c7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a3c7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3c80: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x1a3c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x1a3c84: 0xae000224  sw          $zero, 0x224($s0)
    ctx->pc = 0x1a3c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
    // 0x1a3c88: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1a3c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1a3c8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a3c8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3c90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a3c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3c94: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C94u;
        // 0x1a3c98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3C9Cu;
    // 0x1a3c9c: 0x0  nop
    ctx->pc = 0x1a3c9cu;
    // NOP
    ctx->pc = 0x1a3ca0u;
}
