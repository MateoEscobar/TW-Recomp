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

// Function: sub_001D4DB8
// Address: 0x1d4db8 - 0x1d4e48
void sub_001D4DB8_0x1d4db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4DB8_0x1d4db8");
#endif

    switch (ctx->pc) {
        case 0x1d4db8u: goto label_1d4db8;
        case 0x1d4dbcu: goto label_1d4dbc;
        case 0x1d4dc0u: goto label_1d4dc0;
        case 0x1d4dc4u: goto label_1d4dc4;
        case 0x1d4dc8u: goto label_1d4dc8;
        case 0x1d4dccu: goto label_1d4dcc;
        case 0x1d4dd0u: goto label_1d4dd0;
        case 0x1d4dd4u: goto label_1d4dd4;
        case 0x1d4dd8u: goto label_1d4dd8;
        case 0x1d4ddcu: goto label_1d4ddc;
        case 0x1d4de0u: goto label_1d4de0;
        case 0x1d4de4u: goto label_1d4de4;
        case 0x1d4de8u: goto label_1d4de8;
        case 0x1d4decu: goto label_1d4dec;
        case 0x1d4df0u: goto label_1d4df0;
        case 0x1d4df4u: goto label_1d4df4;
        case 0x1d4df8u: goto label_1d4df8;
        case 0x1d4dfcu: goto label_1d4dfc;
        case 0x1d4e00u: goto label_1d4e00;
        case 0x1d4e04u: goto label_1d4e04;
        case 0x1d4e08u: goto label_1d4e08;
        case 0x1d4e0cu: goto label_1d4e0c;
        case 0x1d4e10u: goto label_1d4e10;
        case 0x1d4e14u: goto label_1d4e14;
        case 0x1d4e18u: goto label_1d4e18;
        case 0x1d4e1cu: goto label_1d4e1c;
        case 0x1d4e20u: goto label_1d4e20;
        case 0x1d4e24u: goto label_1d4e24;
        case 0x1d4e28u: goto label_1d4e28;
        case 0x1d4e2cu: goto label_1d4e2c;
        case 0x1d4e30u: goto label_1d4e30;
        case 0x1d4e34u: goto label_1d4e34;
        case 0x1d4e38u: goto label_1d4e38;
        case 0x1d4e3cu: goto label_1d4e3c;
        case 0x1d4e40u: goto label_1d4e40;
        case 0x1d4e44u: goto label_1d4e44;
        default: break;
    }

    ctx->pc = 0x1d4db8u;

label_1d4db8:
    // 0x1d4db8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d4db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d4dbc:
    // 0x1d4dbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d4dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1d4dc0:
    // 0x1d4dc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d4dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d4dc4:
    // 0x1d4dc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d4dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d4dc8:
    // 0x1d4dc8: 0xc051800  jal         func_146000
label_1d4dcc:
    if (ctx->pc == 0x1D4DCCu) {
        ctx->pc = 0x1D4DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DC8u;
        // 0x1d4dcc: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4DD0u;
        goto label_1d4dd0;
    }
    ctx->pc = 0x1D4DC8u;
    SET_GPR_U32(ctx, 31, 0x1D4DD0u);
    ctx->pc = 0x1D4DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4DC8u;
    // 0x1d4dcc: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146000u, 0x1D4DC8u, 0x1D4DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4DD0u;
label_1d4dd0:
    // 0x1d4dd0: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1d4dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_1d4dd4:
    // 0x1d4dd4: 0x26030070  addiu       $v1, $s0, 0x70
    ctx->pc = 0x1d4dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1d4dd8:
    // 0x1d4dd8: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x1d4dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_1d4ddc:
    // 0x1d4ddc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1d4ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1d4de0:
    // 0x1d4de0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1d4de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1d4de4:
    // 0x1d4de4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1d4de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1d4de8:
    // 0x1d4de8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1d4de8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1d4dec:
    // 0x1d4dec: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1d4decu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d4df0:
    // 0x1d4df0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1d4df4:
    if (ctx->pc == 0x1D4DF4u) {
        ctx->pc = 0x1D4DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DF0u;
        // 0x1d4df4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4DF8u;
        goto label_1d4df8;
    }
    ctx->pc = 0x1D4DF0u;
    {
        const bool branch_taken_0x1d4df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DF0u;
        // 0x1d4df4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4df0) {
            ctx->pc = 0x1D4E14u;
            goto label_1d4e14;
        }
    }
    ctx->pc = 0x1D4DF8u;
label_1d4df8:
    // 0x1d4df8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d4df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d4dfc:
    // 0x1d4dfc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d4dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d4e00:
    // 0x1d4e00: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1d4e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d4e04:
    // 0x1d4e04: 0x84640098  lh          $a0, 0x98($v1)
    ctx->pc = 0x1d4e04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
label_1d4e08:
    // 0x1d4e08: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x1d4e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_1d4e0c:
    // 0x1d4e0c: 0x40f809  jalr        $v0
label_1d4e10:
    if (ctx->pc == 0x1D4E10u) {
        ctx->pc = 0x1D4E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E0Cu;
        // 0x1d4e10: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4E14u;
        goto label_1d4e14;
    }
    ctx->pc = 0x1D4E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D4E14u);
        ctx->pc = 0x1D4E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E0Cu;
        // 0x1d4e10: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4E0Cu, 0x1D4E14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4E14u;
label_1d4e14:
    // 0x1d4e14: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d4e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d4e18:
    // 0x1d4e18: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1d4e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1d4e1c:
    // 0x1d4e1c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1d4e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d4e20:
    // 0x1d4e20: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1d4e20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1d4e24:
    // 0x1d4e24: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1d4e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1d4e28:
    // 0x1d4e28: 0x40f809  jalr        $v0
label_1d4e2c:
    if (ctx->pc == 0x1D4E2Cu) {
        ctx->pc = 0x1D4E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E28u;
        // 0x1d4e2c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4E30u;
        goto label_1d4e30;
    }
    ctx->pc = 0x1D4E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D4E30u);
        ctx->pc = 0x1D4E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E28u;
        // 0x1d4e2c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4E28u, 0x1D4E30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4E30u;
label_1d4e30:
    // 0x1d4e30: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x1d4e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_1d4e34:
    // 0x1d4e34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d4e34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d4e38:
    // 0x1d4e38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d4e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d4e3c:
    // 0x1d4e3c: 0x3e00008  jr          $ra
label_1d4e40:
    if (ctx->pc == 0x1D4E40u) {
        ctx->pc = 0x1D4E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E3Cu;
        // 0x1d4e40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4E44u;
        goto label_1d4e44;
    }
    ctx->pc = 0x1D4E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E3Cu;
        // 0x1d4e40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4E44u;
label_1d4e44:
    // 0x1d4e44: 0x0  nop
    ctx->pc = 0x1d4e44u;
    // NOP
    ctx->pc = 0x1d4e48u;
}
