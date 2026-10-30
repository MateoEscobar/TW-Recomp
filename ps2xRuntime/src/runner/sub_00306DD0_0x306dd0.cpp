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

// Function: sub_00306DD0
// Address: 0x306dd0 - 0x306ec0
void sub_00306DD0_0x306dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306DD0_0x306dd0");
#endif

    switch (ctx->pc) {
        case 0x306dd0u: goto label_306dd0;
        case 0x306dd4u: goto label_306dd4;
        case 0x306dd8u: goto label_306dd8;
        case 0x306ddcu: goto label_306ddc;
        case 0x306de0u: goto label_306de0;
        case 0x306de4u: goto label_306de4;
        case 0x306de8u: goto label_306de8;
        case 0x306decu: goto label_306dec;
        case 0x306df0u: goto label_306df0;
        case 0x306df4u: goto label_306df4;
        case 0x306df8u: goto label_306df8;
        case 0x306dfcu: goto label_306dfc;
        case 0x306e00u: goto label_306e00;
        case 0x306e04u: goto label_306e04;
        case 0x306e08u: goto label_306e08;
        case 0x306e0cu: goto label_306e0c;
        case 0x306e10u: goto label_306e10;
        case 0x306e14u: goto label_306e14;
        case 0x306e18u: goto label_306e18;
        case 0x306e1cu: goto label_306e1c;
        case 0x306e20u: goto label_306e20;
        case 0x306e24u: goto label_306e24;
        case 0x306e28u: goto label_306e28;
        case 0x306e2cu: goto label_306e2c;
        case 0x306e30u: goto label_306e30;
        case 0x306e34u: goto label_306e34;
        case 0x306e38u: goto label_306e38;
        case 0x306e3cu: goto label_306e3c;
        case 0x306e40u: goto label_306e40;
        case 0x306e44u: goto label_306e44;
        case 0x306e48u: goto label_306e48;
        case 0x306e4cu: goto label_306e4c;
        case 0x306e50u: goto label_306e50;
        case 0x306e54u: goto label_306e54;
        case 0x306e58u: goto label_306e58;
        case 0x306e5cu: goto label_306e5c;
        case 0x306e60u: goto label_306e60;
        case 0x306e64u: goto label_306e64;
        case 0x306e68u: goto label_306e68;
        case 0x306e6cu: goto label_306e6c;
        case 0x306e70u: goto label_306e70;
        case 0x306e74u: goto label_306e74;
        case 0x306e78u: goto label_306e78;
        case 0x306e7cu: goto label_306e7c;
        case 0x306e80u: goto label_306e80;
        case 0x306e84u: goto label_306e84;
        case 0x306e88u: goto label_306e88;
        case 0x306e8cu: goto label_306e8c;
        case 0x306e90u: goto label_306e90;
        case 0x306e94u: goto label_306e94;
        case 0x306e98u: goto label_306e98;
        case 0x306e9cu: goto label_306e9c;
        case 0x306ea0u: goto label_306ea0;
        case 0x306ea4u: goto label_306ea4;
        case 0x306ea8u: goto label_306ea8;
        case 0x306eacu: goto label_306eac;
        case 0x306eb0u: goto label_306eb0;
        case 0x306eb4u: goto label_306eb4;
        case 0x306eb8u: goto label_306eb8;
        case 0x306ebcu: goto label_306ebc;
        default: break;
    }

    ctx->pc = 0x306dd0u;

label_306dd0:
    // 0x306dd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x306dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_306dd4:
    // 0x306dd4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x306dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_306dd8:
    // 0x306dd8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x306dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_306ddc:
    // 0x306ddc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x306ddcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_306de0:
    // 0x306de0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x306de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_306de4:
    // 0x306de4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x306de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_306de8:
    // 0x306de8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x306de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_306dec:
    // 0x306dec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x306decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_306df0:
    // 0x306df0: 0xc05959e  jal         func_165678
label_306df4:
    if (ctx->pc == 0x306DF4u) {
        ctx->pc = 0x306DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306DF0u;
        // 0x306df4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306DF8u;
        goto label_306df8;
    }
    ctx->pc = 0x306DF0u;
    SET_GPR_U32(ctx, 31, 0x306DF8u);
    ctx->pc = 0x306DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306DF0u;
    // 0x306df4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x306DF0u, 0x306DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306DF8u;
label_306df8:
    // 0x306df8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x306df8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306dfc:
    // 0x306dfc: 0x12800028  beqz        $s4, . + 4 + (0x28 << 2)
label_306e00:
    if (ctx->pc == 0x306E00u) {
        ctx->pc = 0x306E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306DFCu;
        // 0x306e00: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306E04u;
        goto label_306e04;
    }
    ctx->pc = 0x306DFCu;
    {
        const bool branch_taken_0x306dfc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x306E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306DFCu;
        // 0x306e00: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306dfc) {
            ctx->pc = 0x306EA0u;
            goto label_306ea0;
        }
    }
    ctx->pc = 0x306E04u;
label_306e04:
    // 0x306e04: 0xc05959e  jal         func_165678
label_306e08:
    if (ctx->pc == 0x306E08u) {
        ctx->pc = 0x306E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E04u;
        // 0x306e08: 0x8e440020  lw          $a0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306E0Cu;
        goto label_306e0c;
    }
    ctx->pc = 0x306E04u;
    SET_GPR_U32(ctx, 31, 0x306E0Cu);
    ctx->pc = 0x306E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306E04u;
    // 0x306e08: 0x8e440020  lw          $a0, 0x20($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x306E04u, 0x306E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E0Cu;
label_306e0c:
    // 0x306e0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x306e0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306e10:
    // 0x306e10: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
label_306e14:
    if (ctx->pc == 0x306E14u) {
        ctx->pc = 0x306E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E10u;
        // 0x306e14: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306E18u;
        goto label_306e18;
    }
    ctx->pc = 0x306E10u;
    {
        const bool branch_taken_0x306e10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x306E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E10u;
        // 0x306e14: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306e10) {
            ctx->pc = 0x306EA0u;
            goto label_306ea0;
        }
    }
    ctx->pc = 0x306E18u;
label_306e18:
    // 0x306e18: 0xc0a4e54  jal         func_293950
label_306e1c:
    if (ctx->pc == 0x306E1Cu) {
        ctx->pc = 0x306E20u;
        goto label_306e20;
    }
    ctx->pc = 0x306E18u;
    SET_GPR_U32(ctx, 31, 0x306E20u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x306E18u, 0x306E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E20u;
label_306e20:
    // 0x306e20: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x306e20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306e24:
    // 0x306e24: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
label_306e28:
    if (ctx->pc == 0x306E28u) {
        ctx->pc = 0x306E2Cu;
        goto label_306e2c;
    }
    ctx->pc = 0x306E24u;
    {
        const bool branch_taken_0x306e24 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x306e24) {
            ctx->pc = 0x306E78u;
            goto label_306e78;
        }
    }
    ctx->pc = 0x306E2Cu;
label_306e2c:
    // 0x306e2c: 0xc087502  jal         func_21D408
label_306e30:
    if (ctx->pc == 0x306E30u) {
        ctx->pc = 0x306E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E2Cu;
        // 0x306e30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306E34u;
        goto label_306e34;
    }
    ctx->pc = 0x306E2Cu;
    SET_GPR_U32(ctx, 31, 0x306E34u);
    ctx->pc = 0x306E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306E2Cu;
    // 0x306e30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x306E2Cu, 0x306E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E34u;
label_306e34:
    // 0x306e34: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x306e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_306e38:
    // 0x306e38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x306e38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306e3c:
    // 0x306e3c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x306e3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_306e40:
    // 0x306e40: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x306e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_306e44:
    // 0x306e44: 0x40f809  jalr        $v0
label_306e48:
    if (ctx->pc == 0x306E48u) {
        ctx->pc = 0x306E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E44u;
        // 0x306e48: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306E4Cu;
        goto label_306e4c;
    }
    ctx->pc = 0x306E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x306E4Cu);
        ctx->pc = 0x306E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E44u;
        // 0x306e48: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306E44u, 0x306E4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x306E4Cu;
label_306e4c:
    // 0x306e4c: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x306e4cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_306e50:
    // 0x306e50: 0xc64c0024  lwc1        $f12, 0x24($s2)
    ctx->pc = 0x306e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_306e54:
    // 0x306e54: 0xc64d0028  lwc1        $f13, 0x28($s2)
    ctx->pc = 0x306e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_306e58:
    // 0x306e58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x306e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_306e5c:
    // 0x306e5c: 0x8e47003c  lw          $a3, 0x3C($s2)
    ctx->pc = 0x306e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_306e60:
    // 0x306e60: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x306e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306e64:
    // 0x306e64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x306e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_306e68:
    // 0x306e68: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x306e68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306e6c:
    // 0x306e6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x306e6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306e70:
    // 0x306e70: 0xc0b3102  jal         func_2CC408
label_306e74:
    if (ctx->pc == 0x306E74u) {
        ctx->pc = 0x306E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E70u;
        // 0x306e74: 0x354affff  ori         $t2, $t2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x306E78u;
        goto label_306e78;
    }
    ctx->pc = 0x306E70u;
    SET_GPR_U32(ctx, 31, 0x306E78u);
    ctx->pc = 0x306E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306E70u;
    // 0x306e74: 0x354affff  ori         $t2, $t2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC408u, 0x306E70u, 0x306E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E78u;
label_306e78:
    // 0x306e78: 0xc087502  jal         func_21D408
label_306e7c:
    if (ctx->pc == 0x306E7Cu) {
        ctx->pc = 0x306E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E78u;
        // 0x306e7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306E80u;
        goto label_306e80;
    }
    ctx->pc = 0x306E78u;
    SET_GPR_U32(ctx, 31, 0x306E80u);
    ctx->pc = 0x306E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306E78u;
    // 0x306e7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x306E78u, 0x306E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E80u;
label_306e80:
    // 0x306e80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x306e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306e84:
    // 0x306e84: 0xc0a35d6  jal         func_28D758
label_306e88:
    if (ctx->pc == 0x306E88u) {
        ctx->pc = 0x306E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E84u;
        // 0x306e88: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306E8Cu;
        goto label_306e8c;
    }
    ctx->pc = 0x306E84u;
    SET_GPR_U32(ctx, 31, 0x306E8Cu);
    ctx->pc = 0x306E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306E84u;
    // 0x306e88: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x306E84u, 0x306E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E8Cu;
label_306e8c:
    // 0x306e8c: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x306e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_306e90:
    // 0x306e90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x306e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306e94:
    // 0x306e94: 0x50820001  beql        $a0, $v0, . + 4 + (0x1 << 2)
label_306e98:
    if (ctx->pc == 0x306E98u) {
        ctx->pc = 0x306E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E94u;
        // 0x306e98: 0xa28401b2  sb          $a0, 0x1B2($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 434), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306E9Cu;
        goto label_306e9c;
    }
    ctx->pc = 0x306E94u;
    {
        const bool branch_taken_0x306e94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x306e94) {
            ctx->pc = 0x306E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306E94u;
            // 0x306e98: 0xa28401b2  sb          $a0, 0x1B2($s4) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 20), 434), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306E9Cu;
            goto label_306e9c;
        }
    }
    ctx->pc = 0x306E9Cu;
label_306e9c:
    // 0x306e9c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x306e9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_306ea0:
    // 0x306ea0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x306ea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_306ea4:
    // 0x306ea4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x306ea4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_306ea8:
    // 0x306ea8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x306ea8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_306eac:
    // 0x306eac: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x306eacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_306eb0:
    // 0x306eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x306eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_306eb4:
    // 0x306eb4: 0x3e00008  jr          $ra
label_306eb8:
    if (ctx->pc == 0x306EB8u) {
        ctx->pc = 0x306EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306EB4u;
        // 0x306eb8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306EBCu;
        goto label_306ebc;
    }
    ctx->pc = 0x306EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306EB4u;
        // 0x306eb8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306EBCu;
label_306ebc:
    // 0x306ebc: 0x0  nop
    ctx->pc = 0x306ebcu;
    // NOP
    ctx->pc = 0x306ec0u;
}
