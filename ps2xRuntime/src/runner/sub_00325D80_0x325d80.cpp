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

// Function: sub_00325D80
// Address: 0x325d80 - 0x325ea8
void sub_00325D80_0x325d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325D80_0x325d80");
#endif

    switch (ctx->pc) {
        case 0x325da4u: goto label_325da4;
        case 0x325db8u: goto label_325db8;
        case 0x325dc4u: goto label_325dc4;
        case 0x325de8u: goto label_325de8;
        case 0x325df4u: goto label_325df4;
        case 0x325e08u: goto label_325e08;
        case 0x325e10u: goto label_325e10;
        case 0x325e1cu: goto label_325e1c;
        case 0x325e28u: goto label_325e28;
        case 0x325e38u: goto label_325e38;
        case 0x325e44u: goto label_325e44;
        case 0x325e58u: goto label_325e58;
        case 0x325e70u: goto label_325e70;
        case 0x325e80u: goto label_325e80;
        default: break;
    }

    ctx->pc = 0x325d80u;

    // 0x325d80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x325d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x325d84: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x325d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x325d88: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x325d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x325d8c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x325d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x325d90: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x325d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x325d94: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x325d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x325d98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325d9c: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x325D9Cu;
    SET_GPR_U32(ctx, 31, 0x325DA4u);
    ctx->pc = 0x325DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325D9Cu;
    // 0x325da0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x325D9Cu, 0x325DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325DA4u;
label_325da4:
    // 0x325da4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x325da4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325da8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x325da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325dac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x325dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325db0: 0xc0c916a  jal         func_3245A8
    ctx->pc = 0x325DB0u;
    SET_GPR_U32(ctx, 31, 0x325DB8u);
    ctx->pc = 0x325DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325DB0u;
    // 0x325db4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3245A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3245A8u, 0x325DB0u, 0x325DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325DB8u;
label_325db8:
    // 0x325db8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x325db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325dbc: 0xc0c90b8  jal         func_3242E0
    ctx->pc = 0x325DBCu;
    SET_GPR_U32(ctx, 31, 0x325DC4u);
    ctx->pc = 0x325DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325DBCu;
    // 0x325dc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3242E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3242E0u, 0x325DBCu, 0x325DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325DC4u;
label_325dc4:
    // 0x325dc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x325dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325dc8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x325dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x325dcc: 0x56820004  bnel        $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x325DCCu;
    {
        const bool branch_taken_0x325dcc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x325dcc) {
            ctx->pc = 0x325DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325DCCu;
            // 0x325dd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x325DE0u;
            goto label_325de0;
        }
    }
    ctx->pc = 0x325DD4u;
    // 0x325dd4: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x325dd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x325dd8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x325DD8u;
    {
        const bool branch_taken_0x325dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325DD8u;
        // 0x325ddc: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325dd8) {
            ctx->pc = 0x325DF8u;
            goto label_325df8;
        }
    }
    ctx->pc = 0x325DE0u;
label_325de0:
    // 0x325de0: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x325DE0u;
    SET_GPR_U32(ctx, 31, 0x325DE8u);
    ctx->pc = 0x325DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325DE0u;
    // 0x325de4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x325DE0u, 0x325DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325DE8u;
label_325de8:
    // 0x325de8: 0x26130001  addiu       $s3, $s0, 0x1
    ctx->pc = 0x325de8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x325dec: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x325DECu;
    SET_GPR_U32(ctx, 31, 0x325DF4u);
    ctx->pc = 0x325DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325DECu;
    // 0x325df0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x325DECu, 0x325DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325DF4u;
label_325df4:
    // 0x325df4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x325df4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_325df8:
    // 0x325df8: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x325df8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x325dfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x325dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325e00: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x325E00u;
    SET_GPR_U32(ctx, 31, 0x325E08u);
    ctx->pc = 0x325E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325E00u;
    // 0x325e04: 0x24a54b68  addiu       $a1, $a1, 0x4B68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x325E00u, 0x325E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325E08u;
label_325e08:
    // 0x325e08: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x325E08u;
    SET_GPR_U32(ctx, 31, 0x325E10u);
    ctx->pc = 0x325E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325E08u;
    // 0x325e0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x325E08u, 0x325E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325E10u;
label_325e10:
    // 0x325e10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x325e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325e14: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x325E14u;
    SET_GPR_U32(ctx, 31, 0x325E1Cu);
    ctx->pc = 0x325E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325E14u;
    // 0x325e18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x325E14u, 0x325E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325E1Cu;
label_325e1c:
    // 0x325e1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x325e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325e20: 0xc0c8fc4  jal         func_323F10
    ctx->pc = 0x325E20u;
    SET_GPR_U32(ctx, 31, 0x325E28u);
    ctx->pc = 0x325E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325E20u;
    // 0x325e24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323F10u, 0x325E20u, 0x325E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325E28u;
label_325e28:
    // 0x325e28: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x325e28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x325e2c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x325E2Cu;
    {
        const bool branch_taken_0x325e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x325E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325E2Cu;
        // 0x325e30: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325e2c) {
            ctx->pc = 0x325E68u;
            goto label_325e68;
        }
    }
    ctx->pc = 0x325E34u;
    // 0x325e34: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x325e34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_325e38:
    // 0x325e38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x325e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325e3c: 0xc0c8f10  jal         func_323C40
    ctx->pc = 0x325E3Cu;
    SET_GPR_U32(ctx, 31, 0x325E44u);
    ctx->pc = 0x325E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325E3Cu;
    // 0x325e40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323C40u, 0x325E3Cu, 0x325E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325E44u;
label_325e44:
    // 0x325e44: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x325e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x325e48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x325e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325e4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x325e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325e50: 0xc0c8fe4  jal         func_323F90
    ctx->pc = 0x325E50u;
    SET_GPR_U32(ctx, 31, 0x325E58u);
    ctx->pc = 0x325E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325E50u;
    // 0x325e54: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323F90u, 0x325E50u, 0x325E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325E58u;
label_325e58:
    // 0x325e58: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x325e58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x325e5c: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x325E5Cu;
    {
        const bool branch_taken_0x325e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325E5Cu;
        // 0x325e60: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325e5c) {
            ctx->pc = 0x325E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325e38;
        }
    }
    ctx->pc = 0x325E64u;
    // 0x325e64: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x325e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_325e68:
    // 0x325e68: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x325E68u;
    SET_GPR_U32(ctx, 31, 0x325E70u);
    ctx->pc = 0x325E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325E68u;
    // 0x325e6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x325E68u, 0x325E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325E70u;
label_325e70:
    // 0x325e70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x325e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325e74: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x325e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325e78: 0xc0c8fe4  jal         func_323F90
    ctx->pc = 0x325E78u;
    SET_GPR_U32(ctx, 31, 0x325E80u);
    ctx->pc = 0x325E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325E78u;
    // 0x325e7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323F90u, 0x325E78u, 0x325E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325E80u;
label_325e80:
    // 0x325e80: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x325e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x325e84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x325e84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325e88: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x325e88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x325e8c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x325e8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x325e90: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x325e90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x325e94: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x325e94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325e98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x325e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x325E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325E9Cu;
        // 0x325ea0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325EA4u;
    // 0x325ea4: 0x0  nop
    ctx->pc = 0x325ea4u;
    // NOP
    ctx->pc = 0x325ea8u;
}
