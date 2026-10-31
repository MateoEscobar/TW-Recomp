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

// Function: sub_001C1CD0
// Address: 0x1c1cd0 - 0x1c1d30
void sub_001C1CD0_0x1c1cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1CD0_0x1c1cd0");
#endif

    switch (ctx->pc) {
        case 0x1c1ce4u: goto label_1c1ce4;
        case 0x1c1d08u: goto label_1c1d08;
        case 0x1c1d10u: goto label_1c1d10;
        case 0x1c1d18u: goto label_1c1d18;
        default: break;
    }

    ctx->pc = 0x1c1cd0u;

    // 0x1c1cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c1cd4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c1cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c1cd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c1cdc: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1C1CDCu;
    SET_GPR_U32(ctx, 31, 0x1C1CE4u);
    ctx->pc = 0x1C1CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1CDCu;
    // 0x1c1ce0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1C1CDCu, 0x1C1CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1CE4u;
label_1c1ce4:
    // 0x1c1ce4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1c1ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1c1ce8: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1c1ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x1c1cec: 0x2463a628  addiu       $v1, $v1, -0x59D8
    ctx->pc = 0x1c1cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944296));
    // 0x1c1cf0: 0x24a594a0  addiu       $a1, $a1, -0x6B60
    ctx->pc = 0x1c1cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939808));
    // 0x1c1cf4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1c1cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1c1cf8: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x1c1cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1c1cfc: 0xac450068  sw          $a1, 0x68($v0)
    ctx->pc = 0x1c1cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 5));
    // 0x1c1d00: 0xc068426  jal         func_1A1098
    ctx->pc = 0x1C1D00u;
    SET_GPR_U32(ctx, 31, 0x1C1D08u);
    ctx->pc = 0x1C1D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D00u;
    // 0x1c1d04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1098u, 0x1C1D00u, 0x1C1D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D08u;
label_1c1d08:
    // 0x1c1d08: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1C1D08u;
    SET_GPR_U32(ctx, 31, 0x1C1D10u);
    ctx->pc = 0x1C1D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D08u;
    // 0x1c1d0c: 0x260400b0  addiu       $a0, $s0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1C1D08u, 0x1C1D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D10u;
label_1c1d10:
    // 0x1c1d10: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x1C1D10u;
    SET_GPR_U32(ctx, 31, 0x1C1D18u);
    ctx->pc = 0x1C1D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D10u;
    // 0x1c1d14: 0x260401b0  addiu       $a0, $s0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x1C1D10u, 0x1C1D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D18u;
label_1c1d18:
    // 0x1c1d18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c1d18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1d1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1d20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c1d20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1d24: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D24u;
        // 0x1c1d28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1D2Cu;
    // 0x1c1d2c: 0x0  nop
    ctx->pc = 0x1c1d2cu;
    // NOP
    ctx->pc = 0x1c1d30u;
}
