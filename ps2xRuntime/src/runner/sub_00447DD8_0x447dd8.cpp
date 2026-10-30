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

// Function: sub_00447DD8
// Address: 0x447dd8 - 0x447e30
void sub_00447DD8_0x447dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00447DD8_0x447dd8");
#endif

    switch (ctx->pc) {
        case 0x447e10u: goto label_447e10;
        case 0x447e20u: goto label_447e20;
        default: break;
    }

    ctx->pc = 0x447dd8u;

    // 0x447dd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x447dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x447ddc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x447ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x447de0: 0x8c830868  lw          $v1, 0x868($a0)
    ctx->pc = 0x447de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2152)));
    // 0x447de4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x447DE4u;
    {
        const bool branch_taken_0x447de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x447de4) {
            ctx->pc = 0x447E18u;
            goto label_447e18;
        }
    }
    ctx->pc = 0x447DECu;
    // 0x447dec: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x447DECu;
    {
        const bool branch_taken_0x447dec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x447dec) {
            ctx->pc = 0x447E18u;
            goto label_447e18;
        }
    }
    ctx->pc = 0x447DF4u;
    // 0x447df4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x447df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x447df8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x447DF8u;
    {
        const bool branch_taken_0x447df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x447DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447DF8u;
        // 0x447dfc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447df8) {
            ctx->pc = 0x447E18u;
            goto label_447e18;
        }
    }
    ctx->pc = 0x447E00u;
    // 0x447e00: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x447e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x447e04: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x447e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x447e08: 0xc111982  jal         func_446608
    ctx->pc = 0x447E08u;
    SET_GPR_U32(ctx, 31, 0x447E10u);
    ctx->pc = 0x447E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447E08u;
    // 0x447e0c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446608u, 0x447E08u, 0x447E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447E10u;
label_447e10:
    // 0x447e10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x447E10u;
    {
        const bool branch_taken_0x447e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x447E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447E10u;
        // 0x447e14: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447e10) {
            ctx->pc = 0x447E24u;
            goto label_447e24;
        }
    }
    ctx->pc = 0x447E18u;
label_447e18:
    // 0x447e18: 0xc111f18  jal         func_447C60
    ctx->pc = 0x447E18u;
    SET_GPR_U32(ctx, 31, 0x447E20u);
    ctx->pc = 0x447E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447E18u;
    // 0x447e1c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447C60u, 0x447E18u, 0x447E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447E20u;
label_447e20:
    // 0x447e20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x447e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_447e24:
    // 0x447e24: 0x3e00008  jr          $ra
    ctx->pc = 0x447E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x447E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447E24u;
        // 0x447e28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x447E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x447E2Cu;
    // 0x447e2c: 0x0  nop
    ctx->pc = 0x447e2cu;
    // NOP
    ctx->pc = 0x447e30u;
}
