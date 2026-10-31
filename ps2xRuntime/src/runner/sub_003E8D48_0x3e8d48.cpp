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

// Function: sub_003E8D48
// Address: 0x3e8d48 - 0x3e8e10
void sub_003E8D48_0x3e8d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8D48_0x3e8d48");
#endif

    switch (ctx->pc) {
        case 0x3e8d48u: goto label_3e8d48;
        case 0x3e8d4cu: goto label_3e8d4c;
        case 0x3e8d50u: goto label_3e8d50;
        case 0x3e8d54u: goto label_3e8d54;
        case 0x3e8d58u: goto label_3e8d58;
        case 0x3e8d5cu: goto label_3e8d5c;
        case 0x3e8d60u: goto label_3e8d60;
        case 0x3e8d64u: goto label_3e8d64;
        case 0x3e8d68u: goto label_3e8d68;
        case 0x3e8d6cu: goto label_3e8d6c;
        case 0x3e8d70u: goto label_3e8d70;
        case 0x3e8d74u: goto label_3e8d74;
        case 0x3e8d78u: goto label_3e8d78;
        case 0x3e8d7cu: goto label_3e8d7c;
        case 0x3e8d80u: goto label_3e8d80;
        case 0x3e8d84u: goto label_3e8d84;
        case 0x3e8d88u: goto label_3e8d88;
        case 0x3e8d8cu: goto label_3e8d8c;
        case 0x3e8d90u: goto label_3e8d90;
        case 0x3e8d94u: goto label_3e8d94;
        case 0x3e8d98u: goto label_3e8d98;
        case 0x3e8d9cu: goto label_3e8d9c;
        case 0x3e8da0u: goto label_3e8da0;
        case 0x3e8da4u: goto label_3e8da4;
        case 0x3e8da8u: goto label_3e8da8;
        case 0x3e8dacu: goto label_3e8dac;
        case 0x3e8db0u: goto label_3e8db0;
        case 0x3e8db4u: goto label_3e8db4;
        case 0x3e8db8u: goto label_3e8db8;
        case 0x3e8dbcu: goto label_3e8dbc;
        case 0x3e8dc0u: goto label_3e8dc0;
        case 0x3e8dc4u: goto label_3e8dc4;
        case 0x3e8dc8u: goto label_3e8dc8;
        case 0x3e8dccu: goto label_3e8dcc;
        case 0x3e8dd0u: goto label_3e8dd0;
        case 0x3e8dd4u: goto label_3e8dd4;
        case 0x3e8dd8u: goto label_3e8dd8;
        case 0x3e8ddcu: goto label_3e8ddc;
        case 0x3e8de0u: goto label_3e8de0;
        case 0x3e8de4u: goto label_3e8de4;
        case 0x3e8de8u: goto label_3e8de8;
        case 0x3e8decu: goto label_3e8dec;
        case 0x3e8df0u: goto label_3e8df0;
        case 0x3e8df4u: goto label_3e8df4;
        case 0x3e8df8u: goto label_3e8df8;
        case 0x3e8dfcu: goto label_3e8dfc;
        case 0x3e8e00u: goto label_3e8e00;
        case 0x3e8e04u: goto label_3e8e04;
        case 0x3e8e08u: goto label_3e8e08;
        case 0x3e8e0cu: goto label_3e8e0c;
        default: break;
    }

    ctx->pc = 0x3e8d48u;

label_3e8d48:
    // 0x3e8d48: 0x27bdf780  addiu       $sp, $sp, -0x880
    ctx->pc = 0x3e8d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965120));
label_3e8d4c:
    // 0x3e8d4c: 0x7fb00870  sq          $s0, 0x870($sp)
    ctx->pc = 0x3e8d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 16));
label_3e8d50:
    // 0x3e8d50: 0x7fb20850  sq          $s2, 0x850($sp)
    ctx->pc = 0x3e8d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 18));
label_3e8d54:
    // 0x3e8d54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e8d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e8d58:
    // 0x3e8d58: 0x7fb10860  sq          $s1, 0x860($sp)
    ctx->pc = 0x3e8d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 17));
label_3e8d5c:
    // 0x3e8d5c: 0xffbf0840  sd          $ra, 0x840($sp)
    ctx->pc = 0x3e8d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2112), GPR_U64(ctx, 31));
label_3e8d60:
    // 0x3e8d60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e8d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e8d64:
    // 0x3e8d64: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e8d64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e8d68:
    // 0x3e8d68: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e8d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e8d6c:
    // 0x3e8d6c: 0x40f809  jalr        $v0
label_3e8d70:
    if (ctx->pc == 0x3E8D70u) {
        ctx->pc = 0x3E8D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8D6Cu;
        // 0x3e8d70: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8D74u;
        goto label_3e8d74;
    }
    ctx->pc = 0x3E8D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E8D74u);
        ctx->pc = 0x3E8D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8D6Cu;
        // 0x3e8d70: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8D6Cu, 0x3E8D74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E8D74u;
label_3e8d74:
    // 0x3e8d74: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e8d74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e8d78:
    // 0x3e8d78: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e8d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e8d7c:
    // 0x3e8d7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3e8d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e8d80:
    // 0x3e8d80: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3e8d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3e8d84:
    // 0x3e8d84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e8d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3e8d88:
    // 0x3e8d88: 0x0  nop
    ctx->pc = 0x3e8d88u;
    // NOP
label_3e8d8c:
    // 0x3e8d8c: 0x0  nop
    ctx->pc = 0x3e8d8cu;
    // NOP
label_3e8d90:
    // 0x3e8d90: 0x0  nop
    ctx->pc = 0x3e8d90u;
    // NOP
label_3e8d94:
    // 0x3e8d94: 0x0  nop
    ctx->pc = 0x3e8d94u;
    // NOP
label_3e8d98:
    // 0x3e8d98: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3e8d9c:
    if (ctx->pc == 0x3E8D9Cu) {
        ctx->pc = 0x3E8D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8D98u;
        // 0x3e8d9c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8DA0u;
        goto label_3e8da0;
    }
    ctx->pc = 0x3E8D98u;
    {
        const bool branch_taken_0x3e8d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E8D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8D98u;
        // 0x3e8d9c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8d98) {
            ctx->pc = 0x3E8D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e8d88;
        }
    }
    ctx->pc = 0x3E8DA0u;
label_3e8da0:
    // 0x3e8da0: 0xc138ddc  jal         func_4E3770
label_3e8da4:
    if (ctx->pc == 0x3E8DA4u) {
        ctx->pc = 0x3E8DA8u;
        goto label_3e8da8;
    }
    ctx->pc = 0x3E8DA0u;
    SET_GPR_U32(ctx, 31, 0x3E8DA8u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3E8DA0u, 0x3E8DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8DA8u;
label_3e8da8:
    // 0x3e8da8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3e8da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e8dac:
    // 0x3e8dac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e8dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e8db0:
    // 0x3e8db0: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
label_3e8db4:
    if (ctx->pc == 0x3E8DB4u) {
        ctx->pc = 0x3E8DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8DB0u;
        // 0x3e8db4: 0x7bb00870  lq          $s0, 0x870($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8DB8u;
        goto label_3e8db8;
    }
    ctx->pc = 0x3E8DB0u;
    {
        const bool branch_taken_0x3e8db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e8db0) {
            ctx->pc = 0x3E8DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E8DB0u;
            // 0x3e8db4: 0x7bb00870  lq          $s0, 0x870($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E8DF4u;
            goto label_3e8df4;
        }
    }
    ctx->pc = 0x3E8DB8u;
label_3e8db8:
    // 0x3e8db8: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3e8db8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3e8dbc:
    // 0x3e8dbc: 0x27b10410  addiu       $s1, $sp, 0x410
    ctx->pc = 0x3e8dbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3e8dc0:
    // 0x3e8dc0: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3e8dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3e8dc4:
    // 0x3e8dc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e8dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e8dc8:
    // 0x3e8dc8: 0x7fa20820  sq          $v0, 0x820($sp)
    ctx->pc = 0x3e8dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2080), GPR_VEC(ctx, 2));
label_3e8dcc:
    // 0x3e8dcc: 0x261058e0  addiu       $s0, $s0, 0x58E0
    ctx->pc = 0x3e8dccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22752));
label_3e8dd0:
    // 0x3e8dd0: 0x27a50820  addiu       $a1, $sp, 0x820
    ctx->pc = 0x3e8dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2080));
label_3e8dd4:
    // 0x3e8dd4: 0x27a60830  addiu       $a2, $sp, 0x830
    ctx->pc = 0x3e8dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2096));
label_3e8dd8:
    // 0x3e8dd8: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3e8dd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3e8ddc:
    // 0x3e8ddc: 0xc0e9f84  jal         func_3A7E10
label_3e8de0:
    if (ctx->pc == 0x3E8DE0u) {
        ctx->pc = 0x3E8DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8DDCu;
        // 0x3e8de0: 0x7fa20830  sq          $v0, 0x830($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8DE4u;
        goto label_3e8de4;
    }
    ctx->pc = 0x3E8DDCu;
    SET_GPR_U32(ctx, 31, 0x3E8DE4u);
    ctx->pc = 0x3E8DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8DDCu;
    // 0x3e8de0: 0x7fa20830  sq          $v0, 0x830($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E10u, 0x3E8DDCu, 0x3E8DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8DE4u;
label_3e8de4:
    // 0x3e8de4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e8de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e8de8:
    // 0x3e8de8: 0xc0f15bc  jal         func_3C56F0
label_3e8dec:
    if (ctx->pc == 0x3E8DECu) {
        ctx->pc = 0x3E8DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8DE8u;
        // 0x3e8dec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8DF0u;
        goto label_3e8df0;
    }
    ctx->pc = 0x3E8DE8u;
    SET_GPR_U32(ctx, 31, 0x3E8DF0u);
    ctx->pc = 0x3E8DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8DE8u;
    // 0x3e8dec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3E8DE8u, 0x3E8DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8DF0u;
label_3e8df0:
    // 0x3e8df0: 0x7bb00870  lq          $s0, 0x870($sp)
    ctx->pc = 0x3e8df0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
label_3e8df4:
    // 0x3e8df4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e8df4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e8df8:
    // 0x3e8df8: 0x7bb10860  lq          $s1, 0x860($sp)
    ctx->pc = 0x3e8df8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2144)));
label_3e8dfc:
    // 0x3e8dfc: 0x7bb20850  lq          $s2, 0x850($sp)
    ctx->pc = 0x3e8dfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2128)));
label_3e8e00:
    // 0x3e8e00: 0xdfbf0840  ld          $ra, 0x840($sp)
    ctx->pc = 0x3e8e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2112)));
label_3e8e04:
    // 0x3e8e04: 0x3e00008  jr          $ra
label_3e8e08:
    if (ctx->pc == 0x3E8E08u) {
        ctx->pc = 0x3E8E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8E04u;
        // 0x3e8e08: 0x27bd0880  addiu       $sp, $sp, 0x880 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8E0Cu;
        goto label_3e8e0c;
    }
    ctx->pc = 0x3E8E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8E04u;
        // 0x3e8e08: 0x27bd0880  addiu       $sp, $sp, 0x880 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E8E0Cu;
label_3e8e0c:
    // 0x3e8e0c: 0x0  nop
    ctx->pc = 0x3e8e0cu;
    // NOP
    ctx->pc = 0x3e8e10u;
}
