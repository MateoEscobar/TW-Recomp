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

// Function: sub_004E9D98
// Address: 0x4e9d98 - 0x4e9e30
void sub_004E9D98_0x4e9d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E9D98_0x4e9d98");
#endif

    switch (ctx->pc) {
        case 0x4e9d98u: goto label_4e9d98;
        case 0x4e9d9cu: goto label_4e9d9c;
        case 0x4e9da0u: goto label_4e9da0;
        case 0x4e9da4u: goto label_4e9da4;
        case 0x4e9da8u: goto label_4e9da8;
        case 0x4e9dacu: goto label_4e9dac;
        case 0x4e9db0u: goto label_4e9db0;
        case 0x4e9db4u: goto label_4e9db4;
        case 0x4e9db8u: goto label_4e9db8;
        case 0x4e9dbcu: goto label_4e9dbc;
        case 0x4e9dc0u: goto label_4e9dc0;
        case 0x4e9dc4u: goto label_4e9dc4;
        case 0x4e9dc8u: goto label_4e9dc8;
        case 0x4e9dccu: goto label_4e9dcc;
        case 0x4e9dd0u: goto label_4e9dd0;
        case 0x4e9dd4u: goto label_4e9dd4;
        case 0x4e9dd8u: goto label_4e9dd8;
        case 0x4e9ddcu: goto label_4e9ddc;
        case 0x4e9de0u: goto label_4e9de0;
        case 0x4e9de4u: goto label_4e9de4;
        case 0x4e9de8u: goto label_4e9de8;
        case 0x4e9decu: goto label_4e9dec;
        case 0x4e9df0u: goto label_4e9df0;
        case 0x4e9df4u: goto label_4e9df4;
        case 0x4e9df8u: goto label_4e9df8;
        case 0x4e9dfcu: goto label_4e9dfc;
        case 0x4e9e00u: goto label_4e9e00;
        case 0x4e9e04u: goto label_4e9e04;
        case 0x4e9e08u: goto label_4e9e08;
        case 0x4e9e0cu: goto label_4e9e0c;
        case 0x4e9e10u: goto label_4e9e10;
        case 0x4e9e14u: goto label_4e9e14;
        case 0x4e9e18u: goto label_4e9e18;
        case 0x4e9e1cu: goto label_4e9e1c;
        case 0x4e9e20u: goto label_4e9e20;
        case 0x4e9e24u: goto label_4e9e24;
        case 0x4e9e28u: goto label_4e9e28;
        case 0x4e9e2cu: goto label_4e9e2c;
        default: break;
    }

    ctx->pc = 0x4e9d98u;

label_4e9d98:
    // 0x4e9d98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e9d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e9d9c:
    // 0x4e9d9c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e9d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e9da0:
    // 0x4e9da0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e9da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e9da4:
    // 0x4e9da4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e9da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e9da8:
    // 0x4e9da8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e9da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e9dac:
    // 0x4e9dac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e9dacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e9db0:
    // 0x4e9db0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e9db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e9db4:
    // 0x4e9db4: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_4e9db8:
    if (ctx->pc == 0x4E9DB8u) {
        ctx->pc = 0x4E9DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9DB4u;
        // 0x4e9db8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9DBCu;
        goto label_4e9dbc;
    }
    ctx->pc = 0x4E9DB4u;
    {
        const bool branch_taken_0x4e9db4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9DB4u;
        // 0x4e9db8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9db4) {
            ctx->pc = 0x4E9E14u;
            goto label_4e9e14;
        }
    }
    ctx->pc = 0x4E9DBCu;
label_4e9dbc:
    // 0x4e9dbc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x4e9dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4e9dc0:
    // 0x4e9dc0: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_4e9dc4:
    if (ctx->pc == 0x4E9DC4u) {
        ctx->pc = 0x4E9DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9DC0u;
        // 0x4e9dc4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9DC8u;
        goto label_4e9dc8;
    }
    ctx->pc = 0x4E9DC0u;
    {
        const bool branch_taken_0x4e9dc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9DC0u;
        // 0x4e9dc4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9dc0) {
            ctx->pc = 0x4E9DECu;
            goto label_4e9dec;
        }
    }
    ctx->pc = 0x4E9DC8u;
label_4e9dc8:
    // 0x4e9dc8: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x4e9dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_4e9dcc:
    // 0x4e9dcc: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x4e9dccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4e9dd0:
    // 0x4e9dd0: 0x24c66df8  addiu       $a2, $a2, 0x6DF8
    ctx->pc = 0x4e9dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28152));
label_4e9dd4:
    // 0x4e9dd4: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4e9dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4e9dd8:
    // 0x4e9dd8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e9dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e9ddc:
    // 0x4e9ddc: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e9ddcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e9de0:
    // 0x4e9de0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e9de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e9de4:
    // 0x4e9de4: 0x60f809  jalr        $v1
label_4e9de8:
    if (ctx->pc == 0x4E9DE8u) {
        ctx->pc = 0x4E9DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9DE4u;
        // 0x4e9de8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9DECu;
        goto label_4e9dec;
    }
    ctx->pc = 0x4E9DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E9DECu);
        ctx->pc = 0x4E9DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9DE4u;
        // 0x4e9de8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9DE4u, 0x4E9DECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E9DECu;
label_4e9dec:
    // 0x4e9dec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e9decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e9df0:
    // 0x4e9df0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e9df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e9df4:
    // 0x4e9df4: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e9df4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e9df8:
    // 0x4e9df8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e9df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e9dfc:
    // 0x4e9dfc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e9dfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e9e00:
    // 0x4e9e00: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e9e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e9e04:
    // 0x4e9e04: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e9e04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e9e08:
    // 0x4e9e08: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e9e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e9e0c:
    // 0x4e9e0c: 0x60f809  jalr        $v1
label_4e9e10:
    if (ctx->pc == 0x4E9E10u) {
        ctx->pc = 0x4E9E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9E0Cu;
        // 0x4e9e10: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9E14u;
        goto label_4e9e14;
    }
    ctx->pc = 0x4E9E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E9E14u);
        ctx->pc = 0x4E9E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9E0Cu;
        // 0x4e9e10: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9E0Cu, 0x4E9E14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E9E14u;
label_4e9e14:
    // 0x4e9e14: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e9e14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e9e18:
    // 0x4e9e18: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e9e18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e9e1c:
    // 0x4e9e1c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e9e1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e9e20:
    // 0x4e9e20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e9e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e9e24:
    // 0x4e9e24: 0x3e00008  jr          $ra
label_4e9e28:
    if (ctx->pc == 0x4E9E28u) {
        ctx->pc = 0x4E9E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9E24u;
        // 0x4e9e28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9E2Cu;
        goto label_4e9e2c;
    }
    ctx->pc = 0x4E9E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E9E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9E24u;
        // 0x4e9e28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E9E2Cu;
label_4e9e2c:
    // 0x4e9e2c: 0x0  nop
    ctx->pc = 0x4e9e2cu;
    // NOP
    ctx->pc = 0x4e9e30u;
}
