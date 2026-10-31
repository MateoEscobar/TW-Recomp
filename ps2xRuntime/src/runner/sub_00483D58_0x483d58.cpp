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

// Function: sub_00483D58
// Address: 0x483d58 - 0x483e00
void sub_00483D58_0x483d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00483D58_0x483d58");
#endif

    switch (ctx->pc) {
        case 0x483d58u: goto label_483d58;
        case 0x483d5cu: goto label_483d5c;
        case 0x483d60u: goto label_483d60;
        case 0x483d64u: goto label_483d64;
        case 0x483d68u: goto label_483d68;
        case 0x483d6cu: goto label_483d6c;
        case 0x483d70u: goto label_483d70;
        case 0x483d74u: goto label_483d74;
        case 0x483d78u: goto label_483d78;
        case 0x483d7cu: goto label_483d7c;
        case 0x483d80u: goto label_483d80;
        case 0x483d84u: goto label_483d84;
        case 0x483d88u: goto label_483d88;
        case 0x483d8cu: goto label_483d8c;
        case 0x483d90u: goto label_483d90;
        case 0x483d94u: goto label_483d94;
        case 0x483d98u: goto label_483d98;
        case 0x483d9cu: goto label_483d9c;
        case 0x483da0u: goto label_483da0;
        case 0x483da4u: goto label_483da4;
        case 0x483da8u: goto label_483da8;
        case 0x483dacu: goto label_483dac;
        case 0x483db0u: goto label_483db0;
        case 0x483db4u: goto label_483db4;
        case 0x483db8u: goto label_483db8;
        case 0x483dbcu: goto label_483dbc;
        case 0x483dc0u: goto label_483dc0;
        case 0x483dc4u: goto label_483dc4;
        case 0x483dc8u: goto label_483dc8;
        case 0x483dccu: goto label_483dcc;
        case 0x483dd0u: goto label_483dd0;
        case 0x483dd4u: goto label_483dd4;
        case 0x483dd8u: goto label_483dd8;
        case 0x483ddcu: goto label_483ddc;
        case 0x483de0u: goto label_483de0;
        case 0x483de4u: goto label_483de4;
        case 0x483de8u: goto label_483de8;
        case 0x483decu: goto label_483dec;
        case 0x483df0u: goto label_483df0;
        case 0x483df4u: goto label_483df4;
        case 0x483df8u: goto label_483df8;
        case 0x483dfcu: goto label_483dfc;
        default: break;
    }

    ctx->pc = 0x483d58u;

label_483d58:
    // 0x483d58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x483d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_483d5c:
    // 0x483d5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x483d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_483d60:
    // 0x483d60: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x483d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_483d64:
    // 0x483d64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x483d64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_483d68:
    // 0x483d68: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
label_483d6c:
    if (ctx->pc == 0x483D6Cu) {
        ctx->pc = 0x483D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483D68u;
        // 0x483d6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483D70u;
        goto label_483d70;
    }
    ctx->pc = 0x483D68u;
    {
        const bool branch_taken_0x483d68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x483D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483D68u;
        // 0x483d6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483d68) {
            ctx->pc = 0x483DE8u;
            goto label_483de8;
        }
    }
    ctx->pc = 0x483D70u;
label_483d70:
    // 0x483d70: 0x8e300098  lw          $s0, 0x98($s1)
    ctx->pc = 0x483d70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_483d74:
    // 0x483d74: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_483d78:
    if (ctx->pc == 0x483D78u) {
        ctx->pc = 0x483D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483D74u;
        // 0x483d78: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483D7Cu;
        goto label_483d7c;
    }
    ctx->pc = 0x483D74u;
    {
        const bool branch_taken_0x483d74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x483D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483D74u;
        // 0x483d78: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483d74) {
            ctx->pc = 0x483D94u;
            goto label_483d94;
        }
    }
    ctx->pc = 0x483D7Cu;
label_483d7c:
    // 0x483d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x483d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_483d80:
    // 0x483d80: 0xc121164  jal         func_484590
label_483d84:
    if (ctx->pc == 0x483D84u) {
        ctx->pc = 0x483D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483D80u;
        // 0x483d84: 0x8e10009c  lw          $s0, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483D88u;
        goto label_483d88;
    }
    ctx->pc = 0x483D80u;
    SET_GPR_U32(ctx, 31, 0x483D88u);
    ctx->pc = 0x483D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x483D80u;
    // 0x483d84: 0x8e10009c  lw          $s0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484590u, 0x483D80u, 0x483D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483D88u;
label_483d88:
    // 0x483d88: 0x5600fffd  bnel        $s0, $zero, . + 4 + (-0x3 << 2)
label_483d8c:
    if (ctx->pc == 0x483D8Cu) {
        ctx->pc = 0x483D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483D88u;
        // 0x483d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483D90u;
        goto label_483d90;
    }
    ctx->pc = 0x483D88u;
    {
        const bool branch_taken_0x483d88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x483d88) {
            ctx->pc = 0x483D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x483D88u;
            // 0x483d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x483D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_483d80;
        }
    }
    ctx->pc = 0x483D90u;
label_483d90:
    // 0x483d90: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x483d90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_483d94:
    // 0x483d94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x483d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_483d98:
    // 0x483d98: 0xc11ffb4  jal         func_47FED0
label_483d9c:
    if (ctx->pc == 0x483D9Cu) {
        ctx->pc = 0x483D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483D98u;
        // 0x483d9c: 0x2484ebc0  addiu       $a0, $a0, -0x1440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483DA0u;
        goto label_483da0;
    }
    ctx->pc = 0x483D98u;
    SET_GPR_U32(ctx, 31, 0x483DA0u);
    ctx->pc = 0x483D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x483D98u;
    // 0x483d9c: 0x2484ebc0  addiu       $a0, $a0, -0x1440 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x483D98u, 0x483DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483DA0u;
label_483da0:
    // 0x483da0: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x483da0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_483da4:
    // 0x483da4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x483da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_483da8:
    // 0x483da8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_483dac:
    if (ctx->pc == 0x483DACu) {
        ctx->pc = 0x483DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483DA8u;
        // 0x483dac: 0x8f838960  lw          $v1, -0x76A0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936928)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483DB0u;
        goto label_483db0;
    }
    ctx->pc = 0x483DA8u;
    {
        const bool branch_taken_0x483da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x483DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483DA8u;
        // 0x483dac: 0x8f838960  lw          $v1, -0x76A0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483da8) {
            ctx->pc = 0x483DCCu;
            goto label_483dcc;
        }
    }
    ctx->pc = 0x483DB0u;
label_483db0:
    // 0x483db0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x483db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_483db4:
    // 0x483db4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x483db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_483db8:
    // 0x483db8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x483db8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_483dbc:
    // 0x483dbc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x483dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_483dc0:
    // 0x483dc0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x483dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_483dc4:
    // 0x483dc4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x483dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_483dc8:
    // 0x483dc8: 0x8f838960  lw          $v1, -0x76A0($gp)
    ctx->pc = 0x483dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936928)));
label_483dcc:
    // 0x483dcc: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x483dccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_483dd0:
    // 0x483dd0: 0x2484ad18  addiu       $a0, $a0, -0x52E8
    ctx->pc = 0x483dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946072));
label_483dd4:
    // 0x483dd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x483dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_483dd8:
    // 0x483dd8: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x483dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_483ddc:
    // 0x483ddc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x483ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_483de0:
    // 0x483de0: 0x40f809  jalr        $v0
label_483de4:
    if (ctx->pc == 0x483DE4u) {
        ctx->pc = 0x483DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483DE0u;
        // 0x483de4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483DE8u;
        goto label_483de8;
    }
    ctx->pc = 0x483DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x483DE8u);
        ctx->pc = 0x483DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483DE0u;
        // 0x483de4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483DE0u, 0x483DE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x483DE8u;
label_483de8:
    // 0x483de8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x483de8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_483dec:
    // 0x483dec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x483decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_483df0:
    // 0x483df0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x483df0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_483df4:
    // 0x483df4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x483df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_483df8:
    // 0x483df8: 0x3e00008  jr          $ra
label_483dfc:
    if (ctx->pc == 0x483DFCu) {
        ctx->pc = 0x483DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483DF8u;
        // 0x483dfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483E00u;
        goto label_fallthrough_0x483df8;
    }
    ctx->pc = 0x483DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x483DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483DF8u;
        // 0x483dfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x483df8:
    ctx->pc = 0x483E00u;
}
