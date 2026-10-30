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

// Function: sub_001D3DE0
// Address: 0x1d3de0 - 0x1d3e30
void sub_001D3DE0_0x1d3de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3DE0_0x1d3de0");
#endif

    switch (ctx->pc) {
        case 0x1d3de0u: goto label_1d3de0;
        case 0x1d3de4u: goto label_1d3de4;
        case 0x1d3de8u: goto label_1d3de8;
        case 0x1d3decu: goto label_1d3dec;
        case 0x1d3df0u: goto label_1d3df0;
        case 0x1d3df4u: goto label_1d3df4;
        case 0x1d3df8u: goto label_1d3df8;
        case 0x1d3dfcu: goto label_1d3dfc;
        case 0x1d3e00u: goto label_1d3e00;
        case 0x1d3e04u: goto label_1d3e04;
        case 0x1d3e08u: goto label_1d3e08;
        case 0x1d3e0cu: goto label_1d3e0c;
        case 0x1d3e10u: goto label_1d3e10;
        case 0x1d3e14u: goto label_1d3e14;
        case 0x1d3e18u: goto label_1d3e18;
        case 0x1d3e1cu: goto label_1d3e1c;
        case 0x1d3e20u: goto label_1d3e20;
        case 0x1d3e24u: goto label_1d3e24;
        case 0x1d3e28u: goto label_1d3e28;
        case 0x1d3e2cu: goto label_1d3e2c;
        default: break;
    }

    ctx->pc = 0x1d3de0u;

label_1d3de0:
    // 0x1d3de0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d3de4:
    // 0x1d3de4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d3de8:
    // 0x1d3de8: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x1d3de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_1d3dec:
    // 0x1d3dec: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_1d3df0:
    if (ctx->pc == 0x1D3DF0u) {
        ctx->pc = 0x1D3DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DECu;
        // 0x1d3df0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3DF4u;
        goto label_1d3df4;
    }
    ctx->pc = 0x1D3DECu;
    {
        const bool branch_taken_0x1d3dec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DECu;
        // 0x1d3df0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3dec) {
            ctx->pc = 0x1D3E20u;
            goto label_1d3e20;
        }
    }
    ctx->pc = 0x1D3DF4u;
label_1d3df4:
    // 0x1d3df4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1d3df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1d3df8:
    // 0x1d3df8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1d3dfc:
    if (ctx->pc == 0x1D3DFCu) {
        ctx->pc = 0x1D3DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DF8u;
        // 0x1d3dfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3E00u;
        goto label_1d3e00;
    }
    ctx->pc = 0x1D3DF8u;
    {
        const bool branch_taken_0x1d3df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DF8u;
        // 0x1d3dfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3df8) {
            ctx->pc = 0x1D3E20u;
            goto label_1d3e20;
        }
    }
    ctx->pc = 0x1D3E00u;
label_1d3e00:
    // 0x1d3e00: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1d3e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d3e04:
    // 0x1d3e04: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1d3e04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1d3e08:
    // 0x1d3e08: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1d3e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1d3e0c:
    // 0x1d3e0c: 0x40f809  jalr        $v0
label_1d3e10:
    if (ctx->pc == 0x1D3E10u) {
        ctx->pc = 0x1D3E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E0Cu;
        // 0x1d3e10: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3E14u;
        goto label_1d3e14;
    }
    ctx->pc = 0x1D3E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D3E14u);
        ctx->pc = 0x1D3E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E0Cu;
        // 0x1d3e10: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3E0Cu, 0x1D3E14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D3E14u;
label_1d3e14:
    // 0x1d3e14: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1d3e18:
    if (ctx->pc == 0x1D3E18u) {
        ctx->pc = 0x1D3E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E14u;
        // 0x1d3e18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3E1Cu;
        goto label_1d3e1c;
    }
    ctx->pc = 0x1D3E14u;
    {
        const bool branch_taken_0x1d3e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E14u;
        // 0x1d3e18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e14) {
            ctx->pc = 0x1D3E20u;
            goto label_1d3e20;
        }
    }
    ctx->pc = 0x1D3E1Cu;
label_1d3e1c:
    // 0x1d3e1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d3e1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3e20:
    // 0x1d3e20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3e24:
    // 0x1d3e24: 0x3e00008  jr          $ra
label_1d3e28:
    if (ctx->pc == 0x1D3E28u) {
        ctx->pc = 0x1D3E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E24u;
        // 0x1d3e28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3E2Cu;
        goto label_1d3e2c;
    }
    ctx->pc = 0x1D3E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E24u;
        // 0x1d3e28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3E2Cu;
label_1d3e2c:
    // 0x1d3e2c: 0x0  nop
    ctx->pc = 0x1d3e2cu;
    // NOP
    ctx->pc = 0x1d3e30u;
}
