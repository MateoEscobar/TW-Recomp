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

// Function: sub_00257D70
// Address: 0x257d70 - 0x257e38
void sub_00257D70_0x257d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257D70_0x257d70");
#endif

    switch (ctx->pc) {
        case 0x257d88u: goto label_257d88;
        case 0x257d90u: goto label_257d90;
        case 0x257da0u: goto label_257da0;
        case 0x257dc4u: goto label_257dc4;
        case 0x257ddcu: goto label_257ddc;
        case 0x257df0u: goto label_257df0;
        case 0x257e00u: goto label_257e00;
        case 0x257e10u: goto label_257e10;
        case 0x257e24u: goto label_257e24;
        default: break;
    }

    ctx->pc = 0x257d70u;

    // 0x257d70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x257d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x257d74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x257d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x257d78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x257d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x257d7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x257d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x257d80: 0xc08cade  jal         func_232B78
    ctx->pc = 0x257D80u;
    SET_GPR_U32(ctx, 31, 0x257D88u);
    ctx->pc = 0x257D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257D80u;
    // 0x257d84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232B78u, 0x257D80u, 0x257D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257D88u;
label_257d88:
    // 0x257d88: 0xc089000  jal         func_224000
    ctx->pc = 0x257D88u;
    SET_GPR_U32(ctx, 31, 0x257D90u);
    ctx->pc = 0x257D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257D88u;
    // 0x257d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x257D88u, 0x257D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257D90u;
label_257d90:
    // 0x257d90: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x257D90u;
    {
        const bool branch_taken_0x257d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257d90) {
            ctx->pc = 0x257D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257D90u;
            // 0x257d94: 0xde0200e0  ld          $v0, 0xE0($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257DA4u;
            goto label_257da4;
        }
    }
    ctx->pc = 0x257D98u;
    // 0x257d98: 0xc095fce  jal         func_257F38
    ctx->pc = 0x257D98u;
    SET_GPR_U32(ctx, 31, 0x257DA0u);
    ctx->pc = 0x257D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257D98u;
    // 0x257d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x257D98u, 0x257DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257DA0u;
label_257da0:
    // 0x257da0: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x257da0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_257da4:
    // 0x257da4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x257da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x257da8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x257da8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x257dac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x257dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x257db0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x257db0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x257db4: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x257DB4u;
    {
        const bool branch_taken_0x257db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257db4) {
            ctx->pc = 0x257DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257DB4u;
            // 0x257db8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257E28u;
            goto label_257e28;
        }
    }
    ctx->pc = 0x257DBCu;
    // 0x257dbc: 0xc087502  jal         func_21D408
    ctx->pc = 0x257DBCu;
    SET_GPR_U32(ctx, 31, 0x257DC4u);
    ctx->pc = 0x257DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257DBCu;
    // 0x257dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x257DBCu, 0x257DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257DC4u;
label_257dc4:
    // 0x257dc4: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x257dc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x257dc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257dcc: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x257DCCu;
    {
        const bool branch_taken_0x257dcc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x257dcc) {
            ctx->pc = 0x257DF8u;
            goto label_257df8;
        }
    }
    ctx->pc = 0x257DD4u;
    // 0x257dd4: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x257DD4u;
    SET_GPR_U32(ctx, 31, 0x257DDCu);
    ctx->pc = 0x257DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257DD4u;
    // 0x257dd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x257DD4u, 0x257DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257DDCu;
label_257ddc:
    // 0x257ddc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x257ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x257de0: 0x50430011  beql        $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x257DE0u;
    {
        const bool branch_taken_0x257de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x257de0) {
            ctx->pc = 0x257DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257DE0u;
            // 0x257de4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257E28u;
            goto label_257e28;
        }
    }
    ctx->pc = 0x257DE8u;
    // 0x257de8: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x257DE8u;
    SET_GPR_U32(ctx, 31, 0x257DF0u);
    ctx->pc = 0x257DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257DE8u;
    // 0x257dec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x257DE8u, 0x257DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257DF0u;
label_257df0:
    // 0x257df0: 0x5051000d  beql        $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x257DF0u;
    {
        const bool branch_taken_0x257df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x257df0) {
            ctx->pc = 0x257DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257DF0u;
            // 0x257df4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257E28u;
            goto label_257e28;
        }
    }
    ctx->pc = 0x257DF8u;
label_257df8:
    // 0x257df8: 0xc088bfe  jal         func_222FF8
    ctx->pc = 0x257DF8u;
    SET_GPR_U32(ctx, 31, 0x257E00u);
    ctx->pc = 0x257DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257DF8u;
    // 0x257dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222FF8u, 0x257DF8u, 0x257E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257E00u;
label_257e00:
    // 0x257e00: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x257E00u;
    {
        const bool branch_taken_0x257e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257e00) {
            ctx->pc = 0x257E1Cu;
            goto label_257e1c;
        }
    }
    ctx->pc = 0x257E08u;
    // 0x257e08: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x257E08u;
    SET_GPR_U32(ctx, 31, 0x257E10u);
    ctx->pc = 0x257E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257E08u;
    // 0x257e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x257E08u, 0x257E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257E10u;
label_257e10:
    // 0x257e10: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x257e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x257e14: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x257E14u;
    {
        const bool branch_taken_0x257e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x257e14) {
            ctx->pc = 0x257E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257E14u;
            // 0x257e18: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257E28u;
            goto label_257e28;
        }
    }
    ctx->pc = 0x257E1Cu;
label_257e1c:
    // 0x257e1c: 0xc095fce  jal         func_257F38
    ctx->pc = 0x257E1Cu;
    SET_GPR_U32(ctx, 31, 0x257E24u);
    ctx->pc = 0x257E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257E1Cu;
    // 0x257e20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x257E1Cu, 0x257E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257E24u;
label_257e24:
    // 0x257e24: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x257e24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_257e28:
    // 0x257e28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x257e28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257e2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x257e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257e30: 0x3e00008  jr          $ra
    ctx->pc = 0x257E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257E30u;
        // 0x257e34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257E38u;
}
