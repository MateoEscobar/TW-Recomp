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

// Function: sub_00108DD0
// Address: 0x108dd0 - 0x108f10
void sub_00108DD0_0x108dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108DD0_0x108dd0");
#endif

    switch (ctx->pc) {
        case 0x108dd0u: goto label_108dd0;
        case 0x108dd4u: goto label_108dd4;
        case 0x108dd8u: goto label_108dd8;
        case 0x108ddcu: goto label_108ddc;
        case 0x108de0u: goto label_108de0;
        case 0x108de4u: goto label_108de4;
        case 0x108de8u: goto label_108de8;
        case 0x108decu: goto label_108dec;
        case 0x108df0u: goto label_108df0;
        case 0x108df4u: goto label_108df4;
        case 0x108df8u: goto label_108df8;
        case 0x108dfcu: goto label_108dfc;
        case 0x108e00u: goto label_108e00;
        case 0x108e04u: goto label_108e04;
        case 0x108e08u: goto label_108e08;
        case 0x108e0cu: goto label_108e0c;
        case 0x108e10u: goto label_108e10;
        case 0x108e14u: goto label_108e14;
        case 0x108e18u: goto label_108e18;
        case 0x108e1cu: goto label_108e1c;
        case 0x108e20u: goto label_108e20;
        case 0x108e24u: goto label_108e24;
        case 0x108e28u: goto label_108e28;
        case 0x108e2cu: goto label_108e2c;
        case 0x108e30u: goto label_108e30;
        case 0x108e34u: goto label_108e34;
        case 0x108e38u: goto label_108e38;
        case 0x108e3cu: goto label_108e3c;
        case 0x108e40u: goto label_108e40;
        case 0x108e44u: goto label_108e44;
        case 0x108e48u: goto label_108e48;
        case 0x108e4cu: goto label_108e4c;
        case 0x108e50u: goto label_108e50;
        case 0x108e54u: goto label_108e54;
        case 0x108e58u: goto label_108e58;
        case 0x108e5cu: goto label_108e5c;
        case 0x108e60u: goto label_108e60;
        case 0x108e64u: goto label_108e64;
        case 0x108e68u: goto label_108e68;
        case 0x108e6cu: goto label_108e6c;
        case 0x108e70u: goto label_108e70;
        case 0x108e74u: goto label_108e74;
        case 0x108e78u: goto label_108e78;
        case 0x108e7cu: goto label_108e7c;
        case 0x108e80u: goto label_108e80;
        case 0x108e84u: goto label_108e84;
        case 0x108e88u: goto label_108e88;
        case 0x108e8cu: goto label_108e8c;
        case 0x108e90u: goto label_108e90;
        case 0x108e94u: goto label_108e94;
        case 0x108e98u: goto label_108e98;
        case 0x108e9cu: goto label_108e9c;
        case 0x108ea0u: goto label_108ea0;
        case 0x108ea4u: goto label_108ea4;
        case 0x108ea8u: goto label_108ea8;
        case 0x108eacu: goto label_108eac;
        case 0x108eb0u: goto label_108eb0;
        case 0x108eb4u: goto label_108eb4;
        case 0x108eb8u: goto label_108eb8;
        case 0x108ebcu: goto label_108ebc;
        case 0x108ec0u: goto label_108ec0;
        case 0x108ec4u: goto label_108ec4;
        case 0x108ec8u: goto label_108ec8;
        case 0x108eccu: goto label_108ecc;
        case 0x108ed0u: goto label_108ed0;
        case 0x108ed4u: goto label_108ed4;
        case 0x108ed8u: goto label_108ed8;
        case 0x108edcu: goto label_108edc;
        case 0x108ee0u: goto label_108ee0;
        case 0x108ee4u: goto label_108ee4;
        case 0x108ee8u: goto label_108ee8;
        case 0x108eecu: goto label_108eec;
        case 0x108ef0u: goto label_108ef0;
        case 0x108ef4u: goto label_108ef4;
        case 0x108ef8u: goto label_108ef8;
        case 0x108efcu: goto label_108efc;
        case 0x108f00u: goto label_108f00;
        case 0x108f04u: goto label_108f04;
        case 0x108f08u: goto label_108f08;
        case 0x108f0cu: goto label_108f0c;
        default: break;
    }

    ctx->pc = 0x108dd0u;

label_108dd0:
    // 0x108dd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x108dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_108dd4:
    // 0x108dd4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x108dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_108dd8:
    // 0x108dd8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x108dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_108ddc:
    // 0x108ddc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x108ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_108de0:
    // 0x108de0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x108de0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_108de4:
    // 0x108de4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x108de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_108de8:
    // 0x108de8: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x108de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_108dec:
    // 0x108dec: 0xc0e409a  jal         func_390268
label_108df0:
    if (ctx->pc == 0x108DF0u) {
        ctx->pc = 0x108DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108DECu;
        // 0x108df0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108DF4u;
        goto label_108df4;
    }
    ctx->pc = 0x108DECu;
    SET_GPR_U32(ctx, 31, 0x108DF4u);
    ctx->pc = 0x108DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108DECu;
    // 0x108df0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x108DECu, 0x108DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108DF4u;
label_108df4:
    // 0x108df4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x108df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108df8:
    // 0x108df8: 0x52000031  beql        $s0, $zero, . + 4 + (0x31 << 2)
label_108dfc:
    if (ctx->pc == 0x108DFCu) {
        ctx->pc = 0x108DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108DF8u;
        // 0x108dfc: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108E00u;
        goto label_108e00;
    }
    ctx->pc = 0x108DF8u;
    {
        const bool branch_taken_0x108df8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x108df8) {
            ctx->pc = 0x108DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108DF8u;
            // 0x108dfc: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108EC0u;
            goto label_108ec0;
        }
    }
    ctx->pc = 0x108E00u;
label_108e00:
    // 0x108e00: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x108e00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_108e04:
    // 0x108e04: 0x52df8  dsll        $a1, $a1, 23
    ctx->pc = 0x108e04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 23);
label_108e08:
    // 0x108e08: 0xc089988  jal         func_226620
label_108e0c:
    if (ctx->pc == 0x108E0Cu) {
        ctx->pc = 0x108E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E08u;
        // 0x108e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108E10u;
        goto label_108e10;
    }
    ctx->pc = 0x108E08u;
    SET_GPR_U32(ctx, 31, 0x108E10u);
    ctx->pc = 0x108E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108E08u;
    // 0x108e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x108E08u, 0x108E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E10u;
label_108e10:
    // 0x108e10: 0xc0874fa  jal         func_21D3E8
label_108e14:
    if (ctx->pc == 0x108E14u) {
        ctx->pc = 0x108E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E10u;
        // 0x108e14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108E18u;
        goto label_108e18;
    }
    ctx->pc = 0x108E10u;
    SET_GPR_U32(ctx, 31, 0x108E18u);
    ctx->pc = 0x108E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108E10u;
    // 0x108e14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x108E10u, 0x108E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E18u;
label_108e18:
    // 0x108e18: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x108e18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_108e1c:
    // 0x108e1c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_108e20:
    if (ctx->pc == 0x108E20u) {
        ctx->pc = 0x108E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E1Cu;
        // 0x108e20: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108E24u;
        goto label_108e24;
    }
    ctx->pc = 0x108E1Cu;
    {
        const bool branch_taken_0x108e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x108E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E1Cu;
        // 0x108e20: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108e1c) {
            ctx->pc = 0x108E30u;
            goto label_108e30;
        }
    }
    ctx->pc = 0x108E24u;
label_108e24:
    // 0x108e24: 0x820501b0  lb          $a1, 0x1B0($s0)
    ctx->pc = 0x108e24u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_108e28:
    // 0x108e28: 0xc106ad8  jal         func_41AB60
label_108e2c:
    if (ctx->pc == 0x108E2Cu) {
        ctx->pc = 0x108E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E28u;
        // 0x108e2c: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108E30u;
        goto label_108e30;
    }
    ctx->pc = 0x108E28u;
    SET_GPR_U32(ctx, 31, 0x108E30u);
    ctx->pc = 0x108E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108E28u;
    // 0x108e2c: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41AB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41AB60u, 0x108E28u, 0x108E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E30u;
label_108e30:
    // 0x108e30: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x108e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_108e34:
    // 0x108e34: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_108e38:
    if (ctx->pc == 0x108E38u) {
        ctx->pc = 0x108E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E34u;
        // 0x108e38: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108E3Cu;
        goto label_108e3c;
    }
    ctx->pc = 0x108E34u;
    {
        const bool branch_taken_0x108e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x108e34) {
            ctx->pc = 0x108E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108E34u;
            // 0x108e38: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108E4Cu;
            goto label_108e4c;
        }
    }
    ctx->pc = 0x108E3Cu;
label_108e3c:
    // 0x108e3c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x108e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_108e40:
    // 0x108e40: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
label_108e44:
    if (ctx->pc == 0x108E44u) {
        ctx->pc = 0x108E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E40u;
        // 0x108e44: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108E48u;
        goto label_108e48;
    }
    ctx->pc = 0x108E40u;
    {
        const bool branch_taken_0x108e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108e40) {
            ctx->pc = 0x108E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108E40u;
            // 0x108e44: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108EC0u;
            goto label_108ec0;
        }
    }
    ctx->pc = 0x108E48u;
label_108e48:
    // 0x108e48: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x108e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_108e4c:
    // 0x108e4c: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x108e4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_108e50:
    // 0x108e50: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x108e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_108e54:
    // 0x108e54: 0x60f809  jalr        $v1
label_108e58:
    if (ctx->pc == 0x108E58u) {
        ctx->pc = 0x108E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E54u;
        // 0x108e58: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108E5Cu;
        goto label_108e5c;
    }
    ctx->pc = 0x108E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x108E5Cu);
        ctx->pc = 0x108E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E54u;
        // 0x108e58: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108E54u, 0x108E5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108E5Cu;
label_108e5c:
    // 0x108e5c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x108e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_108e60:
    // 0x108e60: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_108e64:
    if (ctx->pc == 0x108E64u) {
        ctx->pc = 0x108E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E60u;
        // 0x108e64: 0x31827  nor         $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108E68u;
        goto label_108e68;
    }
    ctx->pc = 0x108E60u;
    {
        const bool branch_taken_0x108e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x108E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E60u;
        // 0x108e64: 0x31827  nor         $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108e60) {
            ctx->pc = 0x108EBCu;
            goto label_108ebc;
        }
    }
    ctx->pc = 0x108E68u;
label_108e68:
    // 0x108e68: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x108e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_108e6c:
    // 0x108e6c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x108e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_108e70:
    // 0x108e70: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x108e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_108e74:
    // 0x108e74: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x108e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_108e78:
    // 0x108e78: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x108e78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_108e7c:
    // 0x108e7c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x108e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_108e80:
    // 0x108e80: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x108e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_108e84:
    // 0x108e84: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
label_108e88:
    if (ctx->pc == 0x108E88u) {
        ctx->pc = 0x108E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E84u;
        // 0x108e88: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108E8Cu;
        goto label_108e8c;
    }
    ctx->pc = 0x108E84u;
    {
        const bool branch_taken_0x108e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x108e84) {
            ctx->pc = 0x108E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108E84u;
            // 0x108e88: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108EC0u;
            goto label_108ec0;
        }
    }
    ctx->pc = 0x108E8Cu;
label_108e8c:
    // 0x108e8c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x108e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_108e90:
    // 0x108e90: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x108e90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_108e94:
    // 0x108e94: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x108e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_108e98:
    // 0x108e98: 0x40f809  jalr        $v0
label_108e9c:
    if (ctx->pc == 0x108E9Cu) {
        ctx->pc = 0x108E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E98u;
        // 0x108e9c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108EA0u;
        goto label_108ea0;
    }
    ctx->pc = 0x108E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x108EA0u);
        ctx->pc = 0x108E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E98u;
        // 0x108e9c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108E98u, 0x108EA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108EA0u;
label_108ea0:
    // 0x108ea0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x108ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108ea4:
    // 0x108ea4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_108ea8:
    if (ctx->pc == 0x108EA8u) {
        ctx->pc = 0x108EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EA4u;
        // 0x108ea8: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108EACu;
        goto label_108eac;
    }
    ctx->pc = 0x108EA4u;
    {
        const bool branch_taken_0x108ea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x108ea4) {
            ctx->pc = 0x108EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108EA4u;
            // 0x108ea8: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108EC0u;
            goto label_108ec0;
        }
    }
    ctx->pc = 0x108EACu;
label_108eac:
    // 0x108eac: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x108eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_108eb0:
    // 0x108eb0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x108eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_108eb4:
    // 0x108eb4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x108eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_108eb8:
    // 0x108eb8: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x108eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_108ebc:
    // 0x108ebc: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x108ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_108ec0:
    // 0x108ec0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x108ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_108ec4:
    // 0x108ec4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x108ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_108ec8:
    // 0x108ec8: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x108ec8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_108ecc:
    // 0x108ecc: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x108eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_108ed0:
    // 0x108ed0: 0x60f809  jalr        $v1
label_108ed4:
    if (ctx->pc == 0x108ED4u) {
        ctx->pc = 0x108ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108ED0u;
        // 0x108ed4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108ED8u;
        goto label_108ed8;
    }
    ctx->pc = 0x108ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x108ED8u);
        ctx->pc = 0x108ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108ED0u;
        // 0x108ed4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108ED0u, 0x108ED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108ED8u;
label_108ed8:
    // 0x108ed8: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x108ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_108edc:
    // 0x108edc: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_108ee0:
    if (ctx->pc == 0x108EE0u) {
        ctx->pc = 0x108EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EDCu;
        // 0x108ee0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108EE4u;
        goto label_108ee4;
    }
    ctx->pc = 0x108EDCu;
    {
        const bool branch_taken_0x108edc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x108EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EDCu;
        // 0x108ee0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108edc) {
            ctx->pc = 0x108EFCu;
            goto label_108efc;
        }
    }
    ctx->pc = 0x108EE4u;
label_108ee4:
    // 0x108ee4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x108ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_108ee8:
    // 0x108ee8: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x108ee8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_108eec:
    // 0x108eec: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x108eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_108ef0:
    // 0x108ef0: 0x60f809  jalr        $v1
label_108ef4:
    if (ctx->pc == 0x108EF4u) {
        ctx->pc = 0x108EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EF0u;
        // 0x108ef4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108EF8u;
        goto label_108ef8;
    }
    ctx->pc = 0x108EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x108EF8u);
        ctx->pc = 0x108EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EF0u;
        // 0x108ef4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108EF0u, 0x108EF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108EF8u;
label_108ef8:
    // 0x108ef8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x108ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_108efc:
    // 0x108efc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x108efcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_108f00:
    // 0x108f00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x108f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_108f04:
    // 0x108f04: 0x3e00008  jr          $ra
label_108f08:
    if (ctx->pc == 0x108F08u) {
        ctx->pc = 0x108F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F04u;
        // 0x108f08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108F0Cu;
        goto label_108f0c;
    }
    ctx->pc = 0x108F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F04u;
        // 0x108f08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108F0Cu;
label_108f0c:
    // 0x108f0c: 0x0  nop
    ctx->pc = 0x108f0cu;
    // NOP
    ctx->pc = 0x108f10u;
}
