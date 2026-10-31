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

// Function: sub_00174D00
// Address: 0x174d00 - 0x174e70
void sub_00174D00_0x174d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174D00_0x174d00");
#endif

    switch (ctx->pc) {
        case 0x174d48u: goto label_174d48;
        case 0x174d68u: goto label_174d68;
        case 0x174d8cu: goto label_174d8c;
        case 0x174db4u: goto label_174db4;
        case 0x174dc4u: goto label_174dc4;
        case 0x174dd0u: goto label_174dd0;
        case 0x174e44u: goto label_174e44;
        default: break;
    }

    ctx->pc = 0x174d00u;

    // 0x174d00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x174d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x174d04: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x174d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x174d08: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x174d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x174d0c: 0x24428ad0  addiu       $v0, $v0, -0x7530
    ctx->pc = 0x174d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937296));
    // 0x174d10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x174d10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d14: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x174d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x174d18: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x174d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x174d1c: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x174d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x174d20: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x174d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x174d24: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x174d24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d28: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x174d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x174d2c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x174d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174d34: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x174d34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x174d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d40: 0xc05fd94  jal         func_17F650
    ctx->pc = 0x174D40u;
    SET_GPR_U32(ctx, 31, 0x174D48u);
    ctx->pc = 0x174D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174D40u;
    // 0x174d44: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F650u, 0x174D40u, 0x174D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174D48u;
label_174d48:
    // 0x174d48: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x174d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x174d4c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x174d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x174d50: 0x24638a50  addiu       $v1, $v1, -0x75B0
    ctx->pc = 0x174d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937168));
    // 0x174d54: 0x24428a78  addiu       $v0, $v0, -0x7588
    ctx->pc = 0x174d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937208));
    // 0x174d58: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x174d58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x174d5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x174d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d60: 0xc05fdb4  jal         func_17F6D0
    ctx->pc = 0x174D60u;
    SET_GPR_U32(ctx, 31, 0x174D68u);
    ctx->pc = 0x174D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174D60u;
    // 0x174d64: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F6D0u, 0x174D60u, 0x174D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174D68u;
label_174d68:
    // 0x174d68: 0xae4002a8  sw          $zero, 0x2A8($s2)
    ctx->pc = 0x174d68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 680), GPR_U32(ctx, 0));
    // 0x174d6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x174d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d70: 0xae510024  sw          $s1, 0x24($s2)
    ctx->pc = 0x174d70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 17));
    // 0x174d74: 0xc64c02a8  lwc1        $f12, 0x2A8($s2)
    ctx->pc = 0x174d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x174d78: 0xa64002ac  sh          $zero, 0x2AC($s2)
    ctx->pc = 0x174d78u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 684), (uint16_t)GPR_U32(ctx, 0));
    // 0x174d7c: 0xa64002ae  sh          $zero, 0x2AE($s2)
    ctx->pc = 0x174d7cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 686), (uint16_t)GPR_U32(ctx, 0));
    // 0x174d80: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x174d80u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x174d84: 0xc05d716  jal         func_175C58
    ctx->pc = 0x174D84u;
    SET_GPR_U32(ctx, 31, 0x174D8Cu);
    ctx->pc = 0x174D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174D84u;
    // 0x174d88: 0xae4002b8  sw          $zero, 0x2B8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 696), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175C58u, 0x174D84u, 0x174D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174D8Cu;
label_174d8c:
    // 0x174d8c: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x174d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x174d90: 0x264402bc  addiu       $a0, $s2, 0x2BC
    ctx->pc = 0x174d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 700));
    // 0x174d94: 0x24e71780  addiu       $a3, $a3, 0x1780
    ctx->pc = 0x174d94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6016));
    // 0x174d98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d9c: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x174d9cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x511780u));
    // 0x174da0: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x174da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x174da4: 0x7e430050  sq          $v1, 0x50($s2)
    ctx->pc = 0x174da4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 3));
    // 0x174da8: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x174da8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x511780u));
    // 0x174dac: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x174DACu;
    SET_GPR_U32(ctx, 31, 0x174DB4u);
    ctx->pc = 0x174DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174DACu;
    // 0x174db0: 0x7e420060  sq          $v0, 0x60($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x174DACu, 0x174DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174DB4u;
label_174db4:
    // 0x174db4: 0x26440304  addiu       $a0, $s2, 0x304
    ctx->pc = 0x174db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 772));
    // 0x174db8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174dbc: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x174DBCu;
    SET_GPR_U32(ctx, 31, 0x174DC4u);
    ctx->pc = 0x174DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174DBCu;
    // 0x174dc0: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x174DBCu, 0x174DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174DC4u;
label_174dc4:
    // 0x174dc4: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x174dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x174dc8: 0x26430080  addiu       $v1, $s2, 0x80
    ctx->pc = 0x174dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x174dcc: 0x24440220  addiu       $a0, $v0, 0x220
    ctx->pc = 0x174dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_174dd0:
    // 0x174dd0: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x174dd0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174dd4: 0x78460010  lq          $a2, 0x10($v0)
    ctx->pc = 0x174dd4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x174dd8: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x174dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x174ddc: 0x7c660010  sq          $a2, 0x10($v1)
    ctx->pc = 0x174ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 6));
    // 0x174de0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x174de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x174de4: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x174DE4u;
    {
        const bool branch_taken_0x174de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x174DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174DE4u;
        // 0x174de8: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174de4) {
            ctx->pc = 0x174DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174dd0;
        }
    }
    ctx->pc = 0x174DECu;
    // 0x174dec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x174decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x174df0: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x174df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
    // 0x174df4: 0x8c49cd4c  lw          $t1, -0x32B4($v0)
    ctx->pc = 0x174df4u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x50CD4Cu));
    // 0x174df8: 0x24638420  addiu       $v1, $v1, -0x7BE0
    ctx->pc = 0x174df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935584));
    // 0x174dfc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x174dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x174e00: 0xae430070  sw          $v1, 0x70($s2)
    ctx->pc = 0x174e00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 3));
    // 0x174e04: 0xa64402b0  sh          $a0, 0x2B0($s2)
    ctx->pc = 0x174e04u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 688), (uint16_t)GPR_U32(ctx, 4));
    // 0x174e08: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x174e08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x174e0c: 0xa64002b2  sh          $zero, 0x2B2($s2)
    ctx->pc = 0x174e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 690), (uint16_t)GPR_U32(ctx, 0));
    // 0x174e10: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x174e10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x174e14: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x174E14u;
    {
        const bool branch_taken_0x174e14 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x174e14) {
            ctx->pc = 0x174E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174E14u;
            // 0x174e18: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x174E1Cu;
            goto label_174e1c;
        }
    }
    ctx->pc = 0x174E1Cu;
label_174e1c:
    // 0x174e1c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x174e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e20: 0x8d230074  lw          $v1, 0x74($t1)
    ctx->pc = 0x174e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 116)));
    // 0x174e24: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x174e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x174e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x174e2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e30: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x174e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x174e34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x174e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x174e38: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x174e38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x174e3c: 0xc05d2be  jal         func_174AF8
    ctx->pc = 0x174E3Cu;
    SET_GPR_U32(ctx, 31, 0x174E44u);
    ctx->pc = 0x174E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174E3Cu;
    // 0x174e40: 0x8d270074  lw          $a3, 0x74($t1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174AF8u, 0x174E3Cu, 0x174E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174E44u;
label_174e44:
    // 0x174e44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x174e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174e48: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x174e48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e4c: 0xae4302b4  sw          $v1, 0x2B4($s2)
    ctx->pc = 0x174e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 692), GPR_U32(ctx, 3));
    // 0x174e50: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x174e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x174e54: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x174e54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174e58: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x174e58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174e5c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x174e5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174e60: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x174e60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174e64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174e68: 0x3e00008  jr          $ra
    ctx->pc = 0x174E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E68u;
        // 0x174e6c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174E70u;
}
