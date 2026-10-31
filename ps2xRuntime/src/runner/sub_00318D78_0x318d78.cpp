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

// Function: sub_00318D78
// Address: 0x318d78 - 0x318ed8
void sub_00318D78_0x318d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318D78_0x318d78");
#endif

    switch (ctx->pc) {
        case 0x318dd0u: goto label_318dd0;
        case 0x318dd8u: goto label_318dd8;
        case 0x318de0u: goto label_318de0;
        case 0x318dfcu: goto label_318dfc;
        case 0x318e10u: goto label_318e10;
        case 0x318e28u: goto label_318e28;
        case 0x318e38u: goto label_318e38;
        case 0x318e4cu: goto label_318e4c;
        case 0x318e68u: goto label_318e68;
        case 0x318e84u: goto label_318e84;
        default: break;
    }

    ctx->pc = 0x318d78u;

    // 0x318d78: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x318d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x318d7c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x318d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x318d80: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x318d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x318d84: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x318d84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318d88: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x318d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x318d8c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x318d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x318d90: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x318d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x318d94: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x318d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x318d98: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x318d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x318d9c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x318d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x318da0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x318da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x318da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x318da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x318da8: 0x8ea2002c  lw          $v0, 0x2C($s5)
    ctx->pc = 0x318da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x318dac: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x318DACu;
    {
        const bool branch_taken_0x318dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318DACu;
        // 0x318db0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318dac) {
            ctx->pc = 0x318EACu;
            goto label_318eac;
        }
    }
    ctx->pc = 0x318DB4u;
    // 0x318db4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x318db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x318db8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x318db8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318dbc: 0x241e0010  addiu       $fp, $zero, 0x10
    ctx->pc = 0x318dbcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x318dc0: 0x24170027  addiu       $s7, $zero, 0x27
    ctx->pc = 0x318dc0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x318dc4: 0x24560048  addiu       $s6, $v0, 0x48
    ctx->pc = 0x318dc4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x318dc8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x318dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318dcc: 0x0  nop
    ctx->pc = 0x318dccu;
    // NOP
label_318dd0:
    // 0x318dd0: 0xc137826  jal         func_4DE098
    ctx->pc = 0x318DD0u;
    SET_GPR_U32(ctx, 31, 0x318DD8u);
    ctx->pc = 0x318DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318DD0u;
    // 0x318dd4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x318DD0u, 0x318DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318DD8u;
label_318dd8:
    // 0x318dd8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x318DD8u;
    SET_GPR_U32(ctx, 31, 0x318DE0u);
    ctx->pc = 0x318DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318DD8u;
    // 0x318ddc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x318DD8u, 0x318DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318DE0u;
label_318de0:
    // 0x318de0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x318de0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318de4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x318DE4u;
    {
        const bool branch_taken_0x318de4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x318DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318DE4u;
        // 0x318de8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318de4) {
            ctx->pc = 0x318E84u;
            goto label_318e84;
        }
    }
    ctx->pc = 0x318DECu;
    // 0x318dec: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x318decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x318df0: 0x2453b880  addiu       $s3, $v0, -0x4780
    ctx->pc = 0x318df0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948992));
    // 0x318df4: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x318DF4u;
    SET_GPR_U32(ctx, 31, 0x318DFCu);
    ctx->pc = 0x318DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318DF4u;
    // 0x318df8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x318DF4u, 0x318DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318DFCu;
label_318dfc:
    // 0x318dfc: 0x2c42003c  sltiu       $v0, $v0, 0x3C
    ctx->pc = 0x318dfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x318e00: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x318E00u;
    {
        const bool branch_taken_0x318e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318e00) {
            ctx->pc = 0x318E04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318E00u;
            // 0x318e04: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318E88u;
            goto label_318e88;
        }
    }
    ctx->pc = 0x318E08u;
    // 0x318e08: 0xc087502  jal         func_21D408
    ctx->pc = 0x318E08u;
    SET_GPR_U32(ctx, 31, 0x318E10u);
    ctx->pc = 0x318E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318E08u;
    // 0x318e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x318E08u, 0x318E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318E10u;
label_318e10:
    // 0x318e10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x318e10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318e14: 0x8222002e  lb          $v0, 0x2E($s1)
    ctx->pc = 0x318e14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
    // 0x318e18: 0x5c40001b  bgtzl       $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x318E18u;
    {
        const bool branch_taken_0x318e18 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x318e18) {
            ctx->pc = 0x318E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318E18u;
            // 0x318e1c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318E88u;
            goto label_318e88;
        }
    }
    ctx->pc = 0x318E20u;
    // 0x318e20: 0xc0a47b4  jal         func_291ED0
    ctx->pc = 0x318E20u;
    SET_GPR_U32(ctx, 31, 0x318E28u);
    ctx->pc = 0x318E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318E20u;
    // 0x318e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x318E20u, 0x318E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318E28u;
label_318e28:
    // 0x318e28: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x318E28u;
    {
        const bool branch_taken_0x318e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318e28) {
            ctx->pc = 0x318E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318E28u;
            // 0x318e2c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318E88u;
            goto label_318e88;
        }
    }
    ctx->pc = 0x318E30u;
    // 0x318e30: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x318E30u;
    SET_GPR_U32(ctx, 31, 0x318E38u);
    ctx->pc = 0x318E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318E30u;
    // 0x318e34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x318E30u, 0x318E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318E38u;
label_318e38:
    // 0x318e38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x318e38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318e3c: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x318E3Cu;
    {
        const bool branch_taken_0x318e3c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x318E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E3Cu;
        // 0x318e40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318e3c) {
            ctx->pc = 0x318E84u;
            goto label_318e84;
        }
    }
    ctx->pc = 0x318E44u;
    // 0x318e44: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x318E44u;
    SET_GPR_U32(ctx, 31, 0x318E4Cu);
    ctx->pc = 0x318E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318E44u;
    // 0x318e48: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x318E44u, 0x318E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318E4Cu;
label_318e4c:
    // 0x318e4c: 0x24100011  addiu       $s0, $zero, 0x11
    ctx->pc = 0x318e4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x318e50: 0x2e2102b  sltu        $v0, $s7, $v0
    ctx->pc = 0x318e50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x318e54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x318e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318e58: 0x3c2800a  movz        $s0, $fp, $v0
    ctx->pc = 0x318e58u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 30));
    // 0x318e5c: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x318e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x318e60: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x318E60u;
    SET_GPR_U32(ctx, 31, 0x318E68u);
    ctx->pc = 0x318E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318E60u;
    // 0x318e64: 0x240607d0  addiu       $a2, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x318E60u, 0x318E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318E68u;
label_318e68:
    // 0x318e68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x318e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318e6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x318e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318e70: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x318e70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318e74: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x318e74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318e78: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x318e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x318e7c: 0xc0bec3c  jal         func_2FB0F0
    ctx->pc = 0x318E7Cu;
    SET_GPR_U32(ctx, 31, 0x318E84u);
    ctx->pc = 0x318E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318E7Cu;
    // 0x318e80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F0u, 0x318E7Cu, 0x318E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318E84u;
label_318e84:
    // 0x318e84: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x318e84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_318e88:
    // 0x318e88: 0x2e820010  sltiu       $v0, $s4, 0x10
    ctx->pc = 0x318e88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x318e8c: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x318E8Cu;
    {
        const bool branch_taken_0x318e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E8Cu;
        // 0x318e90: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318e8c) {
            ctx->pc = 0x318DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_318dd0;
        }
    }
    ctx->pc = 0x318E94u;
    // 0x318e94: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x318e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x318e98: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x318e98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x318e9c: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x318e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x318ea0: 0x246305dc  addiu       $v1, $v1, 0x5DC
    ctx->pc = 0x318ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1500));
    // 0x318ea4: 0xaea3002c  sw          $v1, 0x2C($s5)
    ctx->pc = 0x318ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 3));
    // 0x318ea8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x318ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_318eac:
    // 0x318eac: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x318eacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x318eb0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x318eb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x318eb4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x318eb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x318eb8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x318eb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x318ebc: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x318ebcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x318ec0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x318ec0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x318ec4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x318ec4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x318ec8: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x318ec8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x318ecc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x318eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x318ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x318ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318ED0u;
        // 0x318ed4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318ED8u;
}
