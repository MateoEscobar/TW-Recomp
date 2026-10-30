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

// Function: sub_00488D90
// Address: 0x488d90 - 0x488e48
void sub_00488D90_0x488d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488D90_0x488d90");
#endif

    switch (ctx->pc) {
        case 0x488d90u: goto label_488d90;
        case 0x488d94u: goto label_488d94;
        case 0x488d98u: goto label_488d98;
        case 0x488d9cu: goto label_488d9c;
        case 0x488da0u: goto label_488da0;
        case 0x488da4u: goto label_488da4;
        case 0x488da8u: goto label_488da8;
        case 0x488dacu: goto label_488dac;
        case 0x488db0u: goto label_488db0;
        case 0x488db4u: goto label_488db4;
        case 0x488db8u: goto label_488db8;
        case 0x488dbcu: goto label_488dbc;
        case 0x488dc0u: goto label_488dc0;
        case 0x488dc4u: goto label_488dc4;
        case 0x488dc8u: goto label_488dc8;
        case 0x488dccu: goto label_488dcc;
        case 0x488dd0u: goto label_488dd0;
        case 0x488dd4u: goto label_488dd4;
        case 0x488dd8u: goto label_488dd8;
        case 0x488ddcu: goto label_488ddc;
        case 0x488de0u: goto label_488de0;
        case 0x488de4u: goto label_488de4;
        case 0x488de8u: goto label_488de8;
        case 0x488decu: goto label_488dec;
        case 0x488df0u: goto label_488df0;
        case 0x488df4u: goto label_488df4;
        case 0x488df8u: goto label_488df8;
        case 0x488dfcu: goto label_488dfc;
        case 0x488e00u: goto label_488e00;
        case 0x488e04u: goto label_488e04;
        case 0x488e08u: goto label_488e08;
        case 0x488e0cu: goto label_488e0c;
        case 0x488e10u: goto label_488e10;
        case 0x488e14u: goto label_488e14;
        case 0x488e18u: goto label_488e18;
        case 0x488e1cu: goto label_488e1c;
        case 0x488e20u: goto label_488e20;
        case 0x488e24u: goto label_488e24;
        case 0x488e28u: goto label_488e28;
        case 0x488e2cu: goto label_488e2c;
        case 0x488e30u: goto label_488e30;
        case 0x488e34u: goto label_488e34;
        case 0x488e38u: goto label_488e38;
        case 0x488e3cu: goto label_488e3c;
        case 0x488e40u: goto label_488e40;
        case 0x488e44u: goto label_488e44;
        default: break;
    }

    ctx->pc = 0x488d90u;

label_488d90:
    // 0x488d90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x488d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_488d94:
    // 0x488d94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x488d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_488d98:
    // 0x488d98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x488d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_488d9c:
    // 0x488d9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x488d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_488da0:
    // 0x488da0: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x488da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_488da4:
    // 0x488da4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x488da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_488da8:
    // 0x488da8: 0x1c400020  bgtz        $v0, . + 4 + (0x20 << 2)
label_488dac:
    if (ctx->pc == 0x488DACu) {
        ctx->pc = 0x488DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488DA8u;
        // 0x488dac: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488DB0u;
        goto label_488db0;
    }
    ctx->pc = 0x488DA8u;
    {
        const bool branch_taken_0x488da8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x488DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488DA8u;
        // 0x488dac: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488da8) {
            ctx->pc = 0x488E2Cu;
            goto label_488e2c;
        }
    }
    ctx->pc = 0x488DB0u;
label_488db0:
    // 0x488db0: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x488db0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_488db4:
    // 0x488db4: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x488db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_488db8:
    // 0x488db8: 0x2484ec08  addiu       $a0, $a0, -0x13F8
    ctx->pc = 0x488db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962184));
label_488dbc:
    // 0x488dbc: 0xc11ffb4  jal         func_47FED0
label_488dc0:
    if (ctx->pc == 0x488DC0u) {
        ctx->pc = 0x488DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488DBCu;
        // 0x488dc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488DC4u;
        goto label_488dc4;
    }
    ctx->pc = 0x488DBCu;
    SET_GPR_U32(ctx, 31, 0x488DC4u);
    ctx->pc = 0x488DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488DBCu;
    // 0x488dc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x488DBCu, 0x488DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488DC4u;
label_488dc4:
    // 0x488dc4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x488dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_488dc8:
    // 0x488dc8: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_488dcc:
    if (ctx->pc == 0x488DCCu) {
        ctx->pc = 0x488DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488DC8u;
        // 0x488dcc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488DD0u;
        goto label_488dd0;
    }
    ctx->pc = 0x488DC8u;
    {
        const bool branch_taken_0x488dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x488dc8) {
            ctx->pc = 0x488DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x488DC8u;
            // 0x488dcc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x488DECu;
            goto label_488dec;
        }
    }
    ctx->pc = 0x488DD0u;
label_488dd0:
    // 0x488dd0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x488dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_488dd4:
    // 0x488dd4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x488dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_488dd8:
    // 0x488dd8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x488dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_488ddc:
    // 0x488ddc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x488ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_488de0:
    // 0x488de0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x488de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_488de4:
    // 0x488de4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x488de4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_488de8:
    // 0x488de8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x488de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_488dec:
    // 0x488dec: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_488df0:
    if (ctx->pc == 0x488DF0u) {
        ctx->pc = 0x488DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488DECu;
        // 0x488df0: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488DF4u;
        goto label_488df4;
    }
    ctx->pc = 0x488DECu;
    {
        const bool branch_taken_0x488dec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x488dec) {
            ctx->pc = 0x488DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x488DECu;
            // 0x488df0: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x488E04u;
            goto label_488e04;
        }
    }
    ctx->pc = 0x488DF4u;
label_488df4:
    // 0x488df4: 0xc121888  jal         func_486220
label_488df8:
    if (ctx->pc == 0x488DF8u) {
        ctx->pc = 0x488DFCu;
        goto label_488dfc;
    }
    ctx->pc = 0x488DF4u;
    SET_GPR_U32(ctx, 31, 0x488DFCu);
    ctx->pc = 0x486220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486220u, 0x488DF4u, 0x488DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488DFCu;
label_488dfc:
    // 0x488dfc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x488dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_488e00:
    // 0x488e00: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x488e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_488e04:
    // 0x488e04: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x488e04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_488e08:
    // 0x488e08: 0x2484ad18  addiu       $a0, $a0, -0x52E8
    ctx->pc = 0x488e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946072));
label_488e0c:
    // 0x488e0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x488e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_488e10:
    // 0x488e10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x488e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_488e14:
    // 0x488e14: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x488e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_488e18:
    // 0x488e18: 0x8f838978  lw          $v1, -0x7688($gp)
    ctx->pc = 0x488e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_488e1c:
    // 0x488e1c: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x488e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_488e20:
    // 0x488e20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x488e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_488e24:
    // 0x488e24: 0x40f809  jalr        $v0
label_488e28:
    if (ctx->pc == 0x488E28u) {
        ctx->pc = 0x488E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488E24u;
        // 0x488e28: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488E2Cu;
        goto label_488e2c;
    }
    ctx->pc = 0x488E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x488E2Cu);
        ctx->pc = 0x488E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488E24u;
        // 0x488e28: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488E24u, 0x488E2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x488E2Cu;
label_488e2c:
    // 0x488e2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x488e2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_488e30:
    // 0x488e30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x488e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_488e34:
    // 0x488e34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x488e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_488e38:
    // 0x488e38: 0x3e00008  jr          $ra
label_488e3c:
    if (ctx->pc == 0x488E3Cu) {
        ctx->pc = 0x488E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488E38u;
        // 0x488e3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488E40u;
        goto label_488e40;
    }
    ctx->pc = 0x488E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488E38u;
        // 0x488e3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488E40u;
label_488e40:
    // 0x488e40: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x488e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_488e44:
    // 0x488e44: 0x0  nop
    ctx->pc = 0x488e44u;
    // NOP
    ctx->pc = 0x488e48u;
}
