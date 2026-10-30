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

// Function: sub_00390D90
// Address: 0x390d90 - 0x390e20
void sub_00390D90_0x390d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390D90_0x390d90");
#endif

    switch (ctx->pc) {
        case 0x390d90u: goto label_390d90;
        case 0x390d94u: goto label_390d94;
        case 0x390d98u: goto label_390d98;
        case 0x390d9cu: goto label_390d9c;
        case 0x390da0u: goto label_390da0;
        case 0x390da4u: goto label_390da4;
        case 0x390da8u: goto label_390da8;
        case 0x390dacu: goto label_390dac;
        case 0x390db0u: goto label_390db0;
        case 0x390db4u: goto label_390db4;
        case 0x390db8u: goto label_390db8;
        case 0x390dbcu: goto label_390dbc;
        case 0x390dc0u: goto label_390dc0;
        case 0x390dc4u: goto label_390dc4;
        case 0x390dc8u: goto label_390dc8;
        case 0x390dccu: goto label_390dcc;
        case 0x390dd0u: goto label_390dd0;
        case 0x390dd4u: goto label_390dd4;
        case 0x390dd8u: goto label_390dd8;
        case 0x390ddcu: goto label_390ddc;
        case 0x390de0u: goto label_390de0;
        case 0x390de4u: goto label_390de4;
        case 0x390de8u: goto label_390de8;
        case 0x390decu: goto label_390dec;
        case 0x390df0u: goto label_390df0;
        case 0x390df4u: goto label_390df4;
        case 0x390df8u: goto label_390df8;
        case 0x390dfcu: goto label_390dfc;
        case 0x390e00u: goto label_390e00;
        case 0x390e04u: goto label_390e04;
        case 0x390e08u: goto label_390e08;
        case 0x390e0cu: goto label_390e0c;
        case 0x390e10u: goto label_390e10;
        case 0x390e14u: goto label_390e14;
        case 0x390e18u: goto label_390e18;
        case 0x390e1cu: goto label_390e1c;
        default: break;
    }

    ctx->pc = 0x390d90u;

label_390d90:
    // 0x390d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x390d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_390d94:
    // 0x390d94: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x390d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_390d98:
    // 0x390d98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x390d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_390d9c:
    // 0x390d9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x390d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_390da0:
    // 0x390da0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x390da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_390da4:
    // 0x390da4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x390da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_390da8:
    // 0x390da8: 0x84650010  lh          $a1, 0x10($v1)
    ctx->pc = 0x390da8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_390dac:
    // 0x390dac: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x390dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_390db0:
    // 0x390db0: 0x40f809  jalr        $v0
label_390db4:
    if (ctx->pc == 0x390DB4u) {
        ctx->pc = 0x390DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390DB0u;
        // 0x390db4: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390DB8u;
        goto label_390db8;
    }
    ctx->pc = 0x390DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x390DB8u);
        ctx->pc = 0x390DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390DB0u;
        // 0x390db4: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390DB0u, 0x390DB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x390DB8u;
label_390db8:
    // 0x390db8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x390db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_390dbc:
    // 0x390dbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x390dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_390dc0:
    // 0x390dc0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x390dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_390dc4:
    // 0x390dc4: 0x84440130  lh          $a0, 0x130($v0)
    ctx->pc = 0x390dc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 304)));
label_390dc8:
    // 0x390dc8: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x390dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_390dcc:
    // 0x390dcc: 0x60f809  jalr        $v1
label_390dd0:
    if (ctx->pc == 0x390DD0u) {
        ctx->pc = 0x390DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390DCCu;
        // 0x390dd0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390DD4u;
        goto label_390dd4;
    }
    ctx->pc = 0x390DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x390DD4u);
        ctx->pc = 0x390DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390DCCu;
        // 0x390dd0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390DCCu, 0x390DD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x390DD4u;
label_390dd4:
    // 0x390dd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x390dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_390dd8:
    // 0x390dd8: 0xc0e4120  jal         func_390480
label_390ddc:
    if (ctx->pc == 0x390DDCu) {
        ctx->pc = 0x390DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390DD8u;
        // 0x390ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390DE0u;
        goto label_390de0;
    }
    ctx->pc = 0x390DD8u;
    SET_GPR_U32(ctx, 31, 0x390DE0u);
    ctx->pc = 0x390DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390DD8u;
    // 0x390ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390480u, 0x390DD8u, 0x390DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390DE0u;
label_390de0:
    // 0x390de0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x390de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_390de4:
    // 0x390de4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x390de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_390de8:
    // 0x390de8: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x390de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_390dec:
    // 0x390dec: 0xc0e8cbc  jal         func_3A32F0
label_390df0:
    if (ctx->pc == 0x390DF0u) {
        ctx->pc = 0x390DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390DECu;
        // 0x390df0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390DF4u;
        goto label_390df4;
    }
    ctx->pc = 0x390DECu;
    SET_GPR_U32(ctx, 31, 0x390DF4u);
    ctx->pc = 0x390DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390DECu;
    // 0x390df0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x390DECu, 0x390DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390DF4u;
label_390df4:
    // 0x390df4: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x390df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_390df8:
    // 0x390df8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x390df8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_390dfc:
    // 0x390dfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x390dfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_390e00:
    // 0x390e00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x390e00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_390e04:
    // 0x390e04: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x390e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_390e08:
    // 0x390e08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x390e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_390e0c:
    // 0x390e0c: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x390e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_390e10:
    // 0x390e10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x390e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_390e14:
    // 0x390e14: 0x3e00008  jr          $ra
label_390e18:
    if (ctx->pc == 0x390E18u) {
        ctx->pc = 0x390E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390E14u;
        // 0x390e18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390E1Cu;
        goto label_390e1c;
    }
    ctx->pc = 0x390E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390E14u;
        // 0x390e18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390E1Cu;
label_390e1c:
    // 0x390e1c: 0x0  nop
    ctx->pc = 0x390e1cu;
    // NOP
    ctx->pc = 0x390e20u;
}
