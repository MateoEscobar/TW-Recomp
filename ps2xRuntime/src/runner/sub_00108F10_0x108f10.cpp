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

// Function: sub_00108F10
// Address: 0x108f10 - 0x109018
void sub_00108F10_0x108f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108F10_0x108f10");
#endif

    switch (ctx->pc) {
        case 0x108f10u: goto label_108f10;
        case 0x108f14u: goto label_108f14;
        case 0x108f18u: goto label_108f18;
        case 0x108f1cu: goto label_108f1c;
        case 0x108f20u: goto label_108f20;
        case 0x108f24u: goto label_108f24;
        case 0x108f28u: goto label_108f28;
        case 0x108f2cu: goto label_108f2c;
        case 0x108f30u: goto label_108f30;
        case 0x108f34u: goto label_108f34;
        case 0x108f38u: goto label_108f38;
        case 0x108f3cu: goto label_108f3c;
        case 0x108f40u: goto label_108f40;
        case 0x108f44u: goto label_108f44;
        case 0x108f48u: goto label_108f48;
        case 0x108f4cu: goto label_108f4c;
        case 0x108f50u: goto label_108f50;
        case 0x108f54u: goto label_108f54;
        case 0x108f58u: goto label_108f58;
        case 0x108f5cu: goto label_108f5c;
        case 0x108f60u: goto label_108f60;
        case 0x108f64u: goto label_108f64;
        case 0x108f68u: goto label_108f68;
        case 0x108f6cu: goto label_108f6c;
        case 0x108f70u: goto label_108f70;
        case 0x108f74u: goto label_108f74;
        case 0x108f78u: goto label_108f78;
        case 0x108f7cu: goto label_108f7c;
        case 0x108f80u: goto label_108f80;
        case 0x108f84u: goto label_108f84;
        case 0x108f88u: goto label_108f88;
        case 0x108f8cu: goto label_108f8c;
        case 0x108f90u: goto label_108f90;
        case 0x108f94u: goto label_108f94;
        case 0x108f98u: goto label_108f98;
        case 0x108f9cu: goto label_108f9c;
        case 0x108fa0u: goto label_108fa0;
        case 0x108fa4u: goto label_108fa4;
        case 0x108fa8u: goto label_108fa8;
        case 0x108facu: goto label_108fac;
        case 0x108fb0u: goto label_108fb0;
        case 0x108fb4u: goto label_108fb4;
        case 0x108fb8u: goto label_108fb8;
        case 0x108fbcu: goto label_108fbc;
        case 0x108fc0u: goto label_108fc0;
        case 0x108fc4u: goto label_108fc4;
        case 0x108fc8u: goto label_108fc8;
        case 0x108fccu: goto label_108fcc;
        case 0x108fd0u: goto label_108fd0;
        case 0x108fd4u: goto label_108fd4;
        case 0x108fd8u: goto label_108fd8;
        case 0x108fdcu: goto label_108fdc;
        case 0x108fe0u: goto label_108fe0;
        case 0x108fe4u: goto label_108fe4;
        case 0x108fe8u: goto label_108fe8;
        case 0x108fecu: goto label_108fec;
        case 0x108ff0u: goto label_108ff0;
        case 0x108ff4u: goto label_108ff4;
        case 0x108ff8u: goto label_108ff8;
        case 0x108ffcu: goto label_108ffc;
        case 0x109000u: goto label_109000;
        case 0x109004u: goto label_109004;
        case 0x109008u: goto label_109008;
        case 0x10900cu: goto label_10900c;
        case 0x109010u: goto label_109010;
        case 0x109014u: goto label_109014;
        default: break;
    }

    ctx->pc = 0x108f10u;

label_108f10:
    // 0x108f10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x108f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_108f14:
    // 0x108f14: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x108f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_108f18:
    // 0x108f18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x108f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_108f1c:
    // 0x108f1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x108f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_108f20:
    // 0x108f20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x108f20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_108f24:
    // 0x108f24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x108f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_108f28:
    // 0x108f28: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x108f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_108f2c:
    // 0x108f2c: 0xc0e409a  jal         func_390268
label_108f30:
    if (ctx->pc == 0x108F30u) {
        ctx->pc = 0x108F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F2Cu;
        // 0x108f30: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108F34u;
        goto label_108f34;
    }
    ctx->pc = 0x108F2Cu;
    SET_GPR_U32(ctx, 31, 0x108F34u);
    ctx->pc = 0x108F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108F2Cu;
    // 0x108f30: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x108F2Cu, 0x108F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108F34u;
label_108f34:
    // 0x108f34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x108f34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108f38:
    // 0x108f38: 0x52000030  beql        $s0, $zero, . + 4 + (0x30 << 2)
label_108f3c:
    if (ctx->pc == 0x108F3Cu) {
        ctx->pc = 0x108F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F38u;
        // 0x108f3c: 0xae20002c  sw          $zero, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108F40u;
        goto label_108f40;
    }
    ctx->pc = 0x108F38u;
    {
        const bool branch_taken_0x108f38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x108f38) {
            ctx->pc = 0x108F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108F38u;
            // 0x108f3c: 0xae20002c  sw          $zero, 0x2C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108FFCu;
            goto label_108ffc;
        }
    }
    ctx->pc = 0x108F40u;
label_108f40:
    // 0x108f40: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x108f40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_108f44:
    // 0x108f44: 0x52df8  dsll        $a1, $a1, 23
    ctx->pc = 0x108f44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 23);
label_108f48:
    // 0x108f48: 0xc089988  jal         func_226620
label_108f4c:
    if (ctx->pc == 0x108F4Cu) {
        ctx->pc = 0x108F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F48u;
        // 0x108f4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108F50u;
        goto label_108f50;
    }
    ctx->pc = 0x108F48u;
    SET_GPR_U32(ctx, 31, 0x108F50u);
    ctx->pc = 0x108F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108F48u;
    // 0x108f4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x108F48u, 0x108F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108F50u;
label_108f50:
    // 0x108f50: 0xc0874fa  jal         func_21D3E8
label_108f54:
    if (ctx->pc == 0x108F54u) {
        ctx->pc = 0x108F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F50u;
        // 0x108f54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108F58u;
        goto label_108f58;
    }
    ctx->pc = 0x108F50u;
    SET_GPR_U32(ctx, 31, 0x108F58u);
    ctx->pc = 0x108F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108F50u;
    // 0x108f54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x108F50u, 0x108F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108F58u;
label_108f58:
    // 0x108f58: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x108f58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_108f5c:
    // 0x108f5c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_108f60:
    if (ctx->pc == 0x108F60u) {
        ctx->pc = 0x108F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F5Cu;
        // 0x108f60: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108F64u;
        goto label_108f64;
    }
    ctx->pc = 0x108F5Cu;
    {
        const bool branch_taken_0x108f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x108F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F5Cu;
        // 0x108f60: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f5c) {
            ctx->pc = 0x108F70u;
            goto label_108f70;
        }
    }
    ctx->pc = 0x108F64u;
label_108f64:
    // 0x108f64: 0x820501b0  lb          $a1, 0x1B0($s0)
    ctx->pc = 0x108f64u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_108f68:
    // 0x108f68: 0xc106ad8  jal         func_41AB60
label_108f6c:
    if (ctx->pc == 0x108F6Cu) {
        ctx->pc = 0x108F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F68u;
        // 0x108f6c: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108F70u;
        goto label_108f70;
    }
    ctx->pc = 0x108F68u;
    SET_GPR_U32(ctx, 31, 0x108F70u);
    ctx->pc = 0x108F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108F68u;
    // 0x108f6c: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41AB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41AB60u, 0x108F68u, 0x108F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108F70u;
label_108f70:
    // 0x108f70: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x108f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_108f74:
    // 0x108f74: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_108f78:
    if (ctx->pc == 0x108F78u) {
        ctx->pc = 0x108F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F74u;
        // 0x108f78: 0x8e0400d4  lw          $a0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108F7Cu;
        goto label_108f7c;
    }
    ctx->pc = 0x108F74u;
    {
        const bool branch_taken_0x108f74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x108f74) {
            ctx->pc = 0x108F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108F74u;
            // 0x108f78: 0x8e0400d4  lw          $a0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108F90u;
            goto label_108f90;
        }
    }
    ctx->pc = 0x108F7Cu;
label_108f7c:
    // 0x108f7c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x108f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_108f80:
    // 0x108f80: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
label_108f84:
    if (ctx->pc == 0x108F84u) {
        ctx->pc = 0x108F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F80u;
        // 0x108f84: 0xae20002c  sw          $zero, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108F88u;
        goto label_108f88;
    }
    ctx->pc = 0x108F80u;
    {
        const bool branch_taken_0x108f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108f80) {
            ctx->pc = 0x108F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108F80u;
            // 0x108f84: 0xae20002c  sw          $zero, 0x2C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108FFCu;
            goto label_108ffc;
        }
    }
    ctx->pc = 0x108F88u;
label_108f88:
    // 0x108f88: 0x10000017  b           . + 4 + (0x17 << 2)
label_108f8c:
    if (ctx->pc == 0x108F8Cu) {
        ctx->pc = 0x108F90u;
        goto label_108f90;
    }
    ctx->pc = 0x108F88u;
    {
        const bool branch_taken_0x108f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x108f88) {
            ctx->pc = 0x108FE8u;
            goto label_108fe8;
        }
    }
    ctx->pc = 0x108F90u;
label_108f90:
    // 0x108f90: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x108f90u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_108f94:
    // 0x108f94: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x108f94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_108f98:
    // 0x108f98: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x108f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_108f9c:
    // 0x108f9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x108f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_108fa0:
    // 0x108fa0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x108fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_108fa4:
    // 0x108fa4: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x108fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_108fa8:
    // 0x108fa8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x108fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_108fac:
    // 0x108fac: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
label_108fb0:
    if (ctx->pc == 0x108FB0u) {
        ctx->pc = 0x108FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FACu;
        // 0x108fb0: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108FB4u;
        goto label_108fb4;
    }
    ctx->pc = 0x108FACu;
    {
        const bool branch_taken_0x108fac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x108fac) {
            ctx->pc = 0x108FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108FACu;
            // 0x108fb0: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108FE8u;
            goto label_108fe8;
        }
    }
    ctx->pc = 0x108FB4u;
label_108fb4:
    // 0x108fb4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x108fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_108fb8:
    // 0x108fb8: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x108fb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_108fbc:
    // 0x108fbc: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x108fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_108fc0:
    // 0x108fc0: 0x40f809  jalr        $v0
label_108fc4:
    if (ctx->pc == 0x108FC4u) {
        ctx->pc = 0x108FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FC0u;
        // 0x108fc4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108FC8u;
        goto label_108fc8;
    }
    ctx->pc = 0x108FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x108FC8u);
        ctx->pc = 0x108FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FC0u;
        // 0x108fc4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108FC0u, 0x108FC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108FC8u;
label_108fc8:
    // 0x108fc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x108fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108fcc:
    // 0x108fcc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_108fd0:
    if (ctx->pc == 0x108FD0u) {
        ctx->pc = 0x108FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FCCu;
        // 0x108fd0: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108FD4u;
        goto label_108fd4;
    }
    ctx->pc = 0x108FCCu;
    {
        const bool branch_taken_0x108fcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x108fcc) {
            ctx->pc = 0x108FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108FCCu;
            // 0x108fd0: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108FE8u;
            goto label_108fe8;
        }
    }
    ctx->pc = 0x108FD4u;
label_108fd4:
    // 0x108fd4: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x108fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_108fd8:
    // 0x108fd8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x108fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_108fdc:
    // 0x108fdc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x108fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_108fe0:
    // 0x108fe0: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x108fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_108fe4:
    // 0x108fe4: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x108fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_108fe8:
    // 0x108fe8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_108fec:
    if (ctx->pc == 0x108FECu) {
        ctx->pc = 0x108FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FE8u;
        // 0x108fec: 0xae20002c  sw          $zero, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108FF0u;
        goto label_108ff0;
    }
    ctx->pc = 0x108FE8u;
    {
        const bool branch_taken_0x108fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108fe8) {
            ctx->pc = 0x108FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108FE8u;
            // 0x108fec: 0xae20002c  sw          $zero, 0x2C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108FFCu;
            goto label_108ffc;
        }
    }
    ctx->pc = 0x108FF0u;
label_108ff0:
    // 0x108ff0: 0x40f809  jalr        $v0
label_108ff4:
    if (ctx->pc == 0x108FF4u) {
        ctx->pc = 0x108FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FF0u;
        // 0x108ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108FF8u;
        goto label_108ff8;
    }
    ctx->pc = 0x108FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x108FF8u);
        ctx->pc = 0x108FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FF0u;
        // 0x108ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108FF0u, 0x108FF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108FF8u;
label_108ff8:
    // 0x108ff8: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x108ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_108ffc:
    // 0x108ffc: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x108ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_109000:
    // 0x109000: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x109000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_109004:
    // 0x109004: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x109004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_109008:
    // 0x109008: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x109008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10900c:
    // 0x10900c: 0x3e00008  jr          $ra
label_109010:
    if (ctx->pc == 0x109010u) {
        ctx->pc = 0x109010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10900Cu;
        // 0x109010: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109014u;
        goto label_109014;
    }
    ctx->pc = 0x10900Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10900Cu;
        // 0x109010: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10900Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109014u;
label_109014:
    // 0x109014: 0x0  nop
    ctx->pc = 0x109014u;
    // NOP
    ctx->pc = 0x109018u;
}
