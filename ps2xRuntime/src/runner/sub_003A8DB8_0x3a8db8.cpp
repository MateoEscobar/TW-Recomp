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

// Function: sub_003A8DB8
// Address: 0x3a8db8 - 0x3a8e58
void sub_003A8DB8_0x3a8db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A8DB8_0x3a8db8");
#endif

    switch (ctx->pc) {
        case 0x3a8db8u: goto label_3a8db8;
        case 0x3a8dbcu: goto label_3a8dbc;
        case 0x3a8dc0u: goto label_3a8dc0;
        case 0x3a8dc4u: goto label_3a8dc4;
        case 0x3a8dc8u: goto label_3a8dc8;
        case 0x3a8dccu: goto label_3a8dcc;
        case 0x3a8dd0u: goto label_3a8dd0;
        case 0x3a8dd4u: goto label_3a8dd4;
        case 0x3a8dd8u: goto label_3a8dd8;
        case 0x3a8ddcu: goto label_3a8ddc;
        case 0x3a8de0u: goto label_3a8de0;
        case 0x3a8de4u: goto label_3a8de4;
        case 0x3a8de8u: goto label_3a8de8;
        case 0x3a8decu: goto label_3a8dec;
        case 0x3a8df0u: goto label_3a8df0;
        case 0x3a8df4u: goto label_3a8df4;
        case 0x3a8df8u: goto label_3a8df8;
        case 0x3a8dfcu: goto label_3a8dfc;
        case 0x3a8e00u: goto label_3a8e00;
        case 0x3a8e04u: goto label_3a8e04;
        case 0x3a8e08u: goto label_3a8e08;
        case 0x3a8e0cu: goto label_3a8e0c;
        case 0x3a8e10u: goto label_3a8e10;
        case 0x3a8e14u: goto label_3a8e14;
        case 0x3a8e18u: goto label_3a8e18;
        case 0x3a8e1cu: goto label_3a8e1c;
        case 0x3a8e20u: goto label_3a8e20;
        case 0x3a8e24u: goto label_3a8e24;
        case 0x3a8e28u: goto label_3a8e28;
        case 0x3a8e2cu: goto label_3a8e2c;
        case 0x3a8e30u: goto label_3a8e30;
        case 0x3a8e34u: goto label_3a8e34;
        case 0x3a8e38u: goto label_3a8e38;
        case 0x3a8e3cu: goto label_3a8e3c;
        case 0x3a8e40u: goto label_3a8e40;
        case 0x3a8e44u: goto label_3a8e44;
        case 0x3a8e48u: goto label_3a8e48;
        case 0x3a8e4cu: goto label_3a8e4c;
        case 0x3a8e50u: goto label_3a8e50;
        case 0x3a8e54u: goto label_3a8e54;
        default: break;
    }

    ctx->pc = 0x3a8db8u;

label_3a8db8:
    // 0x3a8db8: 0x27bdfb70  addiu       $sp, $sp, -0x490
    ctx->pc = 0x3a8db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966128));
label_3a8dbc:
    // 0x3a8dbc: 0x7fb00480  sq          $s0, 0x480($sp)
    ctx->pc = 0x3a8dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 16));
label_3a8dc0:
    // 0x3a8dc0: 0x7fb10470  sq          $s1, 0x470($sp)
    ctx->pc = 0x3a8dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 17));
label_3a8dc4:
    // 0x3a8dc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a8dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a8dc8:
    // 0x3a8dc8: 0x7fb20460  sq          $s2, 0x460($sp)
    ctx->pc = 0x3a8dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 18));
label_3a8dcc:
    // 0x3a8dcc: 0xffbf0450  sd          $ra, 0x450($sp)
    ctx->pc = 0x3a8dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 31));
label_3a8dd0:
    // 0x3a8dd0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a8dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a8dd4:
    // 0x3a8dd4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3a8dd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3a8dd8:
    // 0x3a8dd8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3a8dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3a8ddc:
    // 0x3a8ddc: 0x40f809  jalr        $v0
label_3a8de0:
    if (ctx->pc == 0x3A8DE0u) {
        ctx->pc = 0x3A8DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8DDCu;
        // 0x3a8de0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8DE4u;
        goto label_3a8de4;
    }
    ctx->pc = 0x3A8DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A8DE4u);
        ctx->pc = 0x3A8DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8DDCu;
        // 0x3a8de0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8DDCu, 0x3A8DE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A8DE4u;
label_3a8de4:
    // 0x3a8de4: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x3a8de4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_3a8de8:
    // 0x3a8de8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a8de8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a8dec:
    // 0x3a8dec: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x3a8decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3a8df0:
    // 0x3a8df0: 0x26311c78  addiu       $s1, $s1, 0x1C78
    ctx->pc = 0x3a8df0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7288));
label_3a8df4:
    // 0x3a8df4: 0xc0e90ca  jal         func_3A4328
label_3a8df8:
    if (ctx->pc == 0x3A8DF8u) {
        ctx->pc = 0x3A8DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8DF4u;
        // 0x3a8df8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8DFCu;
        goto label_3a8dfc;
    }
    ctx->pc = 0x3A8DF4u;
    SET_GPR_U32(ctx, 31, 0x3A8DFCu);
    ctx->pc = 0x3A8DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8DF4u;
    // 0x3a8df8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3A8DF4u, 0x3A8DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8DFCu;
label_3a8dfc:
    // 0x3a8dfc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a8dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3a8e00:
    // 0x3a8e00: 0x7ba80420  lq          $t0, 0x420($sp)
    ctx->pc = 0x3a8e00u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3a8e04:
    // 0x3a8e04: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x3a8e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_3a8e08:
    // 0x3a8e08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a8e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a8e0c:
    // 0x3a8e0c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a8e0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3a8e10:
    // 0x3a8e10: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x3a8e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3a8e14:
    // 0x3a8e14: 0x7fa80410  sq          $t0, 0x410($sp)
    ctx->pc = 0x3a8e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 8));
label_3a8e18:
    // 0x3a8e18: 0x27a60430  addiu       $a2, $sp, 0x430
    ctx->pc = 0x3a8e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3a8e1c:
    // 0x3a8e1c: 0x7fa30430  sq          $v1, 0x430($sp)
    ctx->pc = 0x3a8e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 3));
label_3a8e20:
    // 0x3a8e20: 0x27a70440  addiu       $a3, $sp, 0x440
    ctx->pc = 0x3a8e20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3a8e24:
    // 0x3a8e24: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3a8e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a8e28:
    // 0x3a8e28: 0xc0e9fa6  jal         func_3A7E98
label_3a8e2c:
    if (ctx->pc == 0x3A8E2Cu) {
        ctx->pc = 0x3A8E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8E28u;
        // 0x3a8e2c: 0xafa20440  sw          $v0, 0x440($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8E30u;
        goto label_3a8e30;
    }
    ctx->pc = 0x3A8E28u;
    SET_GPR_U32(ctx, 31, 0x3A8E30u);
    ctx->pc = 0x3A8E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8E28u;
    // 0x3a8e2c: 0xafa20440  sw          $v0, 0x440($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3A8E28u, 0x3A8E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8E30u;
label_3a8e30:
    // 0x3a8e30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a8e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a8e34:
    // 0x3a8e34: 0xc0f15bc  jal         func_3C56F0
label_3a8e38:
    if (ctx->pc == 0x3A8E38u) {
        ctx->pc = 0x3A8E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8E34u;
        // 0x3a8e38: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8E3Cu;
        goto label_3a8e3c;
    }
    ctx->pc = 0x3A8E34u;
    SET_GPR_U32(ctx, 31, 0x3A8E3Cu);
    ctx->pc = 0x3A8E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8E34u;
    // 0x3a8e38: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3A8E34u, 0x3A8E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8E3Cu;
label_3a8e3c:
    // 0x3a8e3c: 0x7bb00480  lq          $s0, 0x480($sp)
    ctx->pc = 0x3a8e3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3a8e40:
    // 0x3a8e40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a8e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a8e44:
    // 0x3a8e44: 0x7bb10470  lq          $s1, 0x470($sp)
    ctx->pc = 0x3a8e44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3a8e48:
    // 0x3a8e48: 0x7bb20460  lq          $s2, 0x460($sp)
    ctx->pc = 0x3a8e48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3a8e4c:
    // 0x3a8e4c: 0xdfbf0450  ld          $ra, 0x450($sp)
    ctx->pc = 0x3a8e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
label_3a8e50:
    // 0x3a8e50: 0x3e00008  jr          $ra
label_3a8e54:
    if (ctx->pc == 0x3A8E54u) {
        ctx->pc = 0x3A8E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8E50u;
        // 0x3a8e54: 0x27bd0490  addiu       $sp, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8E58u;
        goto label_fallthrough_0x3a8e50;
    }
    ctx->pc = 0x3A8E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A8E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8E50u;
        // 0x3a8e54: 0x27bd0490  addiu       $sp, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a8e50:
    ctx->pc = 0x3A8E58u;
}
