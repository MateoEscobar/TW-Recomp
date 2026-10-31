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

// Function: sub_00339D48
// Address: 0x339d48 - 0x339e28
void sub_00339D48_0x339d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339D48_0x339d48");
#endif

    switch (ctx->pc) {
        case 0x339d78u: goto label_339d78;
        case 0x339d88u: goto label_339d88;
        case 0x339db8u: goto label_339db8;
        case 0x339de0u: goto label_339de0;
        case 0x339df4u: goto label_339df4;
        default: break;
    }

    ctx->pc = 0x339d48u;

label_339d48:
    // 0x339d48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x339d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x339d4c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x339d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x339d50: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x339d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x339d54: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x339d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339d58: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x339d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x339d5c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x339d5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339d60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x339d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x339d64: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x339d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x339d68: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x339D68u;
    {
        const bool branch_taken_0x339d68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x339D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D68u;
        // 0x339d6c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339d68) {
            ctx->pc = 0x339D78u;
            goto label_339d78;
        }
    }
    ctx->pc = 0x339D70u;
    // 0x339d70: 0xc0ce752  jal         func_339D48
    ctx->pc = 0x339D70u;
    SET_GPR_U32(ctx, 31, 0x339D78u);
    ctx->pc = 0x339D48u;
    goto label_339d48;
    ctx->pc = 0x339D78u;
label_339d78:
    // 0x339d78: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x339d78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339d7c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x339D7Cu;
    {
        const bool branch_taken_0x339d7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x339D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D7Cu;
        // 0x339d80: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339d7c) {
            ctx->pc = 0x339DA0u;
            goto label_339da0;
        }
    }
    ctx->pc = 0x339D84u;
    // 0x339d84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x339d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_339d88:
    // 0x339d88: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x339d88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x339d8c: 0x0  nop
    ctx->pc = 0x339d8cu;
    // NOP
    // 0x339d90: 0x0  nop
    ctx->pc = 0x339d90u;
    // NOP
    // 0x339d94: 0x0  nop
    ctx->pc = 0x339d94u;
    // NOP
    // 0x339d98: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x339D98u;
    {
        const bool branch_taken_0x339d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x339D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D98u;
        // 0x339d9c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339d98) {
            ctx->pc = 0x339D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_339d88;
        }
    }
    ctx->pc = 0x339DA0u;
label_339da0:
    // 0x339da0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x339da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x339da4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x339da4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x339da8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x339DA8u;
    {
        const bool branch_taken_0x339da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339DA8u;
        // 0x339dac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339da8) {
            ctx->pc = 0x339DD0u;
            goto label_339dd0;
        }
    }
    ctx->pc = 0x339DB0u;
    // 0x339db0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x339db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339db4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x339db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_339db8:
    // 0x339db8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x339db8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x339dbc: 0x0  nop
    ctx->pc = 0x339dbcu;
    // NOP
    // 0x339dc0: 0x0  nop
    ctx->pc = 0x339dc0u;
    // NOP
    // 0x339dc4: 0x0  nop
    ctx->pc = 0x339dc4u;
    // NOP
    // 0x339dc8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x339DC8u;
    {
        const bool branch_taken_0x339dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x339dc8) {
            ctx->pc = 0x339DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339DC8u;
            // 0x339dcc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_339db8;
        }
    }
    ctx->pc = 0x339DD0u;
label_339dd0:
    // 0x339dd0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x339DD0u;
    {
        const bool branch_taken_0x339dd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x339DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339DD0u;
        // 0x339dd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339dd0) {
            ctx->pc = 0x339DE0u;
            goto label_339de0;
        }
    }
    ctx->pc = 0x339DD8u;
    // 0x339dd8: 0xc0ce752  jal         func_339D48
    ctx->pc = 0x339DD8u;
    SET_GPR_U32(ctx, 31, 0x339DE0u);
    ctx->pc = 0x339DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339DD8u;
    // 0x339ddc: 0x26060001  addiu       $a2, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339D48u;
    goto label_339d48;
    ctx->pc = 0x339DE0u;
label_339de0:
    // 0x339de0: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x339de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x339de4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x339DE4u;
    {
        const bool branch_taken_0x339de4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x339DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339DE4u;
        // 0x339de8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339de4) {
            ctx->pc = 0x339DF4u;
            goto label_339df4;
        }
    }
    ctx->pc = 0x339DECu;
    // 0x339dec: 0xc0ce752  jal         func_339D48
    ctx->pc = 0x339DECu;
    SET_GPR_U32(ctx, 31, 0x339DF4u);
    ctx->pc = 0x339DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339DECu;
    // 0x339df0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339D48u;
    goto label_339d48;
    ctx->pc = 0x339DF4u;
label_339df4:
    // 0x339df4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x339df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x339df8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x339df8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x339dfc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x339dfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x339e00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339e04: 0x3e00008  jr          $ra
    ctx->pc = 0x339E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339E04u;
        // 0x339e08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339E0Cu;
    // 0x339e0c: 0x0  nop
    ctx->pc = 0x339e0cu;
    // NOP
    // 0x339e10: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x339e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x339e14: 0x0  nop
    ctx->pc = 0x339e14u;
    // NOP
    // 0x339e18: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x339e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x339e1c: 0x0  nop
    ctx->pc = 0x339e1cu;
    // NOP
    // 0x339e20: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x339e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x339e24: 0x0  nop
    ctx->pc = 0x339e24u;
    // NOP
    ctx->pc = 0x339e28u;
}
