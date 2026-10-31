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

// Function: sub_001F9D78
// Address: 0x1f9d78 - 0x1f9e08
void sub_001F9D78_0x1f9d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9D78_0x1f9d78");
#endif

    switch (ctx->pc) {
        case 0x1f9db8u: goto label_1f9db8;
        case 0x1f9dd0u: goto label_1f9dd0;
        case 0x1f9decu: goto label_1f9dec;
        default: break;
    }

    ctx->pc = 0x1f9d78u;

    // 0x1f9d78: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1f9d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1f9d7c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f9d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f9d80: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x1f9d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x1f9d84: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x1f9d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x1f9d88: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9D88u;
    {
        const bool branch_taken_0x1f9d88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F9D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D88u;
        // 0x1f9d8c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d88) {
            ctx->pc = 0x1F9D98u;
            goto label_1f9d98;
        }
    }
    ctx->pc = 0x1F9D90u;
    // 0x1f9d90: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1F9D90u;
    {
        const bool branch_taken_0x1f9d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D90u;
        // 0x1f9d94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d90) {
            ctx->pc = 0x1F9DF4u;
            goto label_1f9df4;
        }
    }
    ctx->pc = 0x1F9D98u;
label_1f9d98:
    // 0x1f9d98: 0x920200e4  lbu         $v0, 0xE4($s0)
    ctx->pc = 0x1f9d98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x1f9d9c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1f9d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x1f9da0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1f9da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f9da4: 0x2484b8a8  addiu       $a0, $a0, -0x4758
    ctx->pc = 0x1f9da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
    // 0x1f9da8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f9da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f9dac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f9dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9db0: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x1F9DB0u;
    SET_GPR_U32(ctx, 31, 0x1F9DB8u);
    ctx->pc = 0x1F9DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9DB0u;
    // 0x1f9db4: 0xa20200e4  sb          $v0, 0xE4($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 228), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x1F9DB0u, 0x1F9DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9DB8u;
label_1f9db8:
    // 0x1f9db8: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1f9db8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x1f9dbc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f9dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9dc0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f9dc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9dc4: 0x24c67b28  addiu       $a2, $a2, 0x7B28
    ctx->pc = 0x1f9dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31528));
    // 0x1f9dc8: 0xc10ca04  jal         func_432810
    ctx->pc = 0x1F9DC8u;
    SET_GPR_U32(ctx, 31, 0x1F9DD0u);
    ctx->pc = 0x1F9DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9DC8u;
    // 0x1f9dcc: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1F9DC8u, 0x1F9DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9DD0u;
label_1f9dd0:
    // 0x1f9dd0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1f9dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1f9dd4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f9dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9dd8: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x1f9dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x1f9ddc: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x1f9ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1f9de0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f9de0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9de4: 0xc043f1c  jal         func_10FC70
    ctx->pc = 0x1F9DE4u;
    SET_GPR_U32(ctx, 31, 0x1F9DECu);
    ctx->pc = 0x1F9DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9DE4u;
    // 0x1f9de8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC70u, 0x1F9DE4u, 0x1F9DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9DECu;
label_1f9dec:
    // 0x1f9dec: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x1f9decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
    // 0x1f9df0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f9df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f9df4:
    // 0x1f9df4: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x1f9df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1f9df8: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x1f9df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1f9dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9DFCu;
        // 0x1f9e00: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9E04u;
    // 0x1f9e04: 0x0  nop
    ctx->pc = 0x1f9e04u;
    // NOP
    ctx->pc = 0x1f9e08u;
}
