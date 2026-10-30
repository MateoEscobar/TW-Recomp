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

// Function: sub_00466CD8
// Address: 0x466cd8 - 0x466dc8
void sub_00466CD8_0x466cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466CD8_0x466cd8");
#endif

    switch (ctx->pc) {
        case 0x466cd8u: goto label_466cd8;
        case 0x466cdcu: goto label_466cdc;
        case 0x466ce0u: goto label_466ce0;
        case 0x466ce4u: goto label_466ce4;
        case 0x466ce8u: goto label_466ce8;
        case 0x466cecu: goto label_466cec;
        case 0x466cf0u: goto label_466cf0;
        case 0x466cf4u: goto label_466cf4;
        case 0x466cf8u: goto label_466cf8;
        case 0x466cfcu: goto label_466cfc;
        case 0x466d00u: goto label_466d00;
        case 0x466d04u: goto label_466d04;
        case 0x466d08u: goto label_466d08;
        case 0x466d0cu: goto label_466d0c;
        case 0x466d10u: goto label_466d10;
        case 0x466d14u: goto label_466d14;
        case 0x466d18u: goto label_466d18;
        case 0x466d1cu: goto label_466d1c;
        case 0x466d20u: goto label_466d20;
        case 0x466d24u: goto label_466d24;
        case 0x466d28u: goto label_466d28;
        case 0x466d2cu: goto label_466d2c;
        case 0x466d30u: goto label_466d30;
        case 0x466d34u: goto label_466d34;
        case 0x466d38u: goto label_466d38;
        case 0x466d3cu: goto label_466d3c;
        case 0x466d40u: goto label_466d40;
        case 0x466d44u: goto label_466d44;
        case 0x466d48u: goto label_466d48;
        case 0x466d4cu: goto label_466d4c;
        case 0x466d50u: goto label_466d50;
        case 0x466d54u: goto label_466d54;
        case 0x466d58u: goto label_466d58;
        case 0x466d5cu: goto label_466d5c;
        case 0x466d60u: goto label_466d60;
        case 0x466d64u: goto label_466d64;
        case 0x466d68u: goto label_466d68;
        case 0x466d6cu: goto label_466d6c;
        case 0x466d70u: goto label_466d70;
        case 0x466d74u: goto label_466d74;
        case 0x466d78u: goto label_466d78;
        case 0x466d7cu: goto label_466d7c;
        case 0x466d80u: goto label_466d80;
        case 0x466d84u: goto label_466d84;
        case 0x466d88u: goto label_466d88;
        case 0x466d8cu: goto label_466d8c;
        case 0x466d90u: goto label_466d90;
        case 0x466d94u: goto label_466d94;
        case 0x466d98u: goto label_466d98;
        case 0x466d9cu: goto label_466d9c;
        case 0x466da0u: goto label_466da0;
        case 0x466da4u: goto label_466da4;
        case 0x466da8u: goto label_466da8;
        case 0x466dacu: goto label_466dac;
        case 0x466db0u: goto label_466db0;
        case 0x466db4u: goto label_466db4;
        case 0x466db8u: goto label_466db8;
        case 0x466dbcu: goto label_466dbc;
        case 0x466dc0u: goto label_466dc0;
        case 0x466dc4u: goto label_466dc4;
        default: break;
    }

    ctx->pc = 0x466cd8u;

label_466cd8:
    // 0x466cd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x466cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_466cdc:
    // 0x466cdc: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x466cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
label_466ce0:
    // 0x466ce0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x466ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_466ce4:
    // 0x466ce4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x466ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_466ce8:
    // 0x466ce8: 0x2471e680  addiu       $s1, $v1, -0x1980
    ctx->pc = 0x466ce8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960768));
label_466cec:
    // 0x466cec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x466cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_466cf0:
    // 0x466cf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x466cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_466cf4:
    // 0x466cf4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x466cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_466cf8:
    // 0x466cf8: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_466cfc:
    if (ctx->pc == 0x466CFCu) {
        ctx->pc = 0x466CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466CF8u;
        // 0x466cfc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466D00u;
        goto label_466d00;
    }
    ctx->pc = 0x466CF8u;
    {
        const bool branch_taken_0x466cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x466CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466CF8u;
        // 0x466cfc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466cf8) {
            ctx->pc = 0x466D9Cu;
            goto label_466d9c;
        }
    }
    ctx->pc = 0x466D00u;
label_466d00:
    // 0x466d00: 0x24040120  addiu       $a0, $zero, 0x120
    ctx->pc = 0x466d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_466d04:
    // 0x466d04: 0xc120daa  jal         func_4836A8
label_466d08:
    if (ctx->pc == 0x466D08u) {
        ctx->pc = 0x466D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466D04u;
        // 0x466d08: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466D0Cu;
        goto label_466d0c;
    }
    ctx->pc = 0x466D04u;
    SET_GPR_U32(ctx, 31, 0x466D0Cu);
    ctx->pc = 0x466D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466D04u;
    // 0x466d08: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4836A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4836A8u, 0x466D04u, 0x466D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466D0Cu;
label_466d0c:
    // 0x466d0c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x466d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_466d10:
    // 0x466d10: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x466d10u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_466d14:
    // 0x466d14: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x466d14u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_466d18:
    // 0x466d18: 0xc120daa  jal         func_4836A8
label_466d1c:
    if (ctx->pc == 0x466D1Cu) {
        ctx->pc = 0x466D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466D18u;
        // 0x466d1c: 0x2404012e  addiu       $a0, $zero, 0x12E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466D20u;
        goto label_466d20;
    }
    ctx->pc = 0x466D18u;
    SET_GPR_U32(ctx, 31, 0x466D20u);
    ctx->pc = 0x466D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466D18u;
    // 0x466d1c: 0x2404012e  addiu       $a0, $zero, 0x12E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4836A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4836A8u, 0x466D18u, 0x466D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466D20u;
label_466d20:
    // 0x466d20: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x466d20u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_466d24:
    // 0x466d24: 0x36040004  ori         $a0, $s0, 0x4
    ctx->pc = 0x466d24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
label_466d28:
    // 0x466d28: 0xc119dd8  jal         func_467760
label_466d2c:
    if (ctx->pc == 0x466D2Cu) {
        ctx->pc = 0x466D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466D28u;
        // 0x466d2c: 0x202200a  movz        $a0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466D30u;
        goto label_466d30;
    }
    ctx->pc = 0x466D28u;
    SET_GPR_U32(ctx, 31, 0x466D30u);
    ctx->pc = 0x466D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466D28u;
    // 0x466d2c: 0x202200a  movz        $a0, $s0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x467760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467760u, 0x466D28u, 0x466D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466D30u;
label_466d30:
    // 0x466d30: 0x8f8784b0  lw          $a3, -0x7B50($gp)
    ctx->pc = 0x466d30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935728)));
label_466d34:
    // 0x466d34: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x466d34u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
label_466d38:
    // 0x466d38: 0x8f8584ac  lw          $a1, -0x7B54($gp)
    ctx->pc = 0x466d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935724)));
label_466d3c:
    // 0x466d3c: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x466d3cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
label_466d40:
    // 0x466d40: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x466d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_466d44:
    // 0x466d44: 0x2508a2f8  addiu       $t0, $t0, -0x5D08
    ctx->pc = 0x466d44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294943480));
label_466d48:
    // 0x466d48: 0x35290116  ori         $t1, $t1, 0x116
    ctx->pc = 0x466d48u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)278);
label_466d4c:
    // 0x466d4c: 0xc11f66e  jal         func_47D9B8
label_466d50:
    if (ctx->pc == 0x466D50u) {
        ctx->pc = 0x466D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466D4Cu;
        // 0x466d50: 0x24040048  addiu       $a0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466D54u;
        goto label_466d54;
    }
    ctx->pc = 0x466D4Cu;
    SET_GPR_U32(ctx, 31, 0x466D54u);
    ctx->pc = 0x466D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466D4Cu;
    // 0x466d50: 0x24040048  addiu       $a0, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D9B8u, 0x466D4Cu, 0x466D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466D54u;
label_466d54:
    // 0x466d54: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x466d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_466d58:
    // 0x466d58: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x466d58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_466d5c:
    // 0x466d5c: 0x8c66ae20  lw          $a2, -0x51E0($v1)
    ctx->pc = 0x466d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946336)));
label_466d60:
    // 0x466d60: 0x2404400f  addiu       $a0, $zero, 0x400F
    ctx->pc = 0x466d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16399));
label_466d64:
    // 0x466d64: 0x34a50116  ori         $a1, $a1, 0x116
    ctx->pc = 0x466d64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)278);
label_466d68:
    // 0x466d68: 0xc0f809  jalr        $a2
label_466d6c:
    if (ctx->pc == 0x466D6Cu) {
        ctx->pc = 0x466D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466D68u;
        // 0x466d6c: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466D70u;
        goto label_466d70;
    }
    ctx->pc = 0x466D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x466D70u);
        ctx->pc = 0x466D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466D68u;
        // 0x466d6c: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466D68u, 0x466D70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x466D70u;
label_466d70:
    // 0x466d70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x466d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_466d74:
    // 0x466d74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x466d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_466d78:
    // 0x466d78: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x466d78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_466d7c:
    // 0x466d7c: 0xc10c1fa  jal         func_4307E8
label_466d80:
    if (ctx->pc == 0x466D80u) {
        ctx->pc = 0x466D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466D7Cu;
        // 0x466d80: 0x2406400f  addiu       $a2, $zero, 0x400F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16399));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466D84u;
        goto label_466d84;
    }
    ctx->pc = 0x466D7Cu;
    SET_GPR_U32(ctx, 31, 0x466D84u);
    ctx->pc = 0x466D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466D7Cu;
    // 0x466d80: 0x2406400f  addiu       $a2, $zero, 0x400F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16399));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x466D7Cu, 0x466D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466D84u;
label_466d84:
    // 0x466d84: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x466d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_466d88:
    // 0x466d88: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x466d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_466d8c:
    // 0x466d8c: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x466d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
label_466d90:
    // 0x466d90: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x466d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_466d94:
    // 0x466d94: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x466d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_466d98:
    // 0x466d98: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x466d98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_466d9c:
    // 0x466d9c: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x466d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_466da0:
    // 0x466da0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x466da0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_466da4:
    // 0x466da4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x466da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_466da8:
    // 0x466da8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x466da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_466dac:
    // 0x466dac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x466dacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_466db0:
    // 0x466db0: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x466db0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_466db4:
    // 0x466db4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x466db4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_466db8:
    // 0x466db8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x466db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_466dbc:
    // 0x466dbc: 0x3e00008  jr          $ra
label_466dc0:
    if (ctx->pc == 0x466DC0u) {
        ctx->pc = 0x466DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466DBCu;
        // 0x466dc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466DC4u;
        goto label_466dc4;
    }
    ctx->pc = 0x466DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x466DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466DBCu;
        // 0x466dc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466DC4u;
label_466dc4:
    // 0x466dc4: 0x0  nop
    ctx->pc = 0x466dc4u;
    // NOP
    ctx->pc = 0x466dc8u;
}
