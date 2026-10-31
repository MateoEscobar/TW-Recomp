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

// Function: sub_00139EF8
// Address: 0x139ef8 - 0x13a170
void sub_00139EF8_0x139ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139EF8_0x139ef8");
#endif

    switch (ctx->pc) {
        case 0x139ef8u: goto label_139ef8;
        case 0x139efcu: goto label_139efc;
        case 0x139f00u: goto label_139f00;
        case 0x139f04u: goto label_139f04;
        case 0x139f08u: goto label_139f08;
        case 0x139f0cu: goto label_139f0c;
        case 0x139f10u: goto label_139f10;
        case 0x139f14u: goto label_139f14;
        case 0x139f18u: goto label_139f18;
        case 0x139f1cu: goto label_139f1c;
        case 0x139f20u: goto label_139f20;
        case 0x139f24u: goto label_139f24;
        case 0x139f28u: goto label_139f28;
        case 0x139f2cu: goto label_139f2c;
        case 0x139f30u: goto label_139f30;
        case 0x139f34u: goto label_139f34;
        case 0x139f38u: goto label_139f38;
        case 0x139f3cu: goto label_139f3c;
        case 0x139f40u: goto label_139f40;
        case 0x139f44u: goto label_139f44;
        case 0x139f48u: goto label_139f48;
        case 0x139f4cu: goto label_139f4c;
        case 0x139f50u: goto label_139f50;
        case 0x139f54u: goto label_139f54;
        case 0x139f58u: goto label_139f58;
        case 0x139f5cu: goto label_139f5c;
        case 0x139f60u: goto label_139f60;
        case 0x139f64u: goto label_139f64;
        case 0x139f68u: goto label_139f68;
        case 0x139f6cu: goto label_139f6c;
        case 0x139f70u: goto label_139f70;
        case 0x139f74u: goto label_139f74;
        case 0x139f78u: goto label_139f78;
        case 0x139f7cu: goto label_139f7c;
        case 0x139f80u: goto label_139f80;
        case 0x139f84u: goto label_139f84;
        case 0x139f88u: goto label_139f88;
        case 0x139f8cu: goto label_139f8c;
        case 0x139f90u: goto label_139f90;
        case 0x139f94u: goto label_139f94;
        case 0x139f98u: goto label_139f98;
        case 0x139f9cu: goto label_139f9c;
        case 0x139fa0u: goto label_139fa0;
        case 0x139fa4u: goto label_139fa4;
        case 0x139fa8u: goto label_139fa8;
        case 0x139facu: goto label_139fac;
        case 0x139fb0u: goto label_139fb0;
        case 0x139fb4u: goto label_139fb4;
        case 0x139fb8u: goto label_139fb8;
        case 0x139fbcu: goto label_139fbc;
        case 0x139fc0u: goto label_139fc0;
        case 0x139fc4u: goto label_139fc4;
        case 0x139fc8u: goto label_139fc8;
        case 0x139fccu: goto label_139fcc;
        case 0x139fd0u: goto label_139fd0;
        case 0x139fd4u: goto label_139fd4;
        case 0x139fd8u: goto label_139fd8;
        case 0x139fdcu: goto label_139fdc;
        case 0x139fe0u: goto label_139fe0;
        case 0x139fe4u: goto label_139fe4;
        case 0x139fe8u: goto label_139fe8;
        case 0x139fecu: goto label_139fec;
        case 0x139ff0u: goto label_139ff0;
        case 0x139ff4u: goto label_139ff4;
        case 0x139ff8u: goto label_139ff8;
        case 0x139ffcu: goto label_139ffc;
        case 0x13a000u: goto label_13a000;
        case 0x13a004u: goto label_13a004;
        case 0x13a008u: goto label_13a008;
        case 0x13a00cu: goto label_13a00c;
        case 0x13a010u: goto label_13a010;
        case 0x13a014u: goto label_13a014;
        case 0x13a018u: goto label_13a018;
        case 0x13a01cu: goto label_13a01c;
        case 0x13a020u: goto label_13a020;
        case 0x13a024u: goto label_13a024;
        case 0x13a028u: goto label_13a028;
        case 0x13a02cu: goto label_13a02c;
        case 0x13a030u: goto label_13a030;
        case 0x13a034u: goto label_13a034;
        case 0x13a038u: goto label_13a038;
        case 0x13a03cu: goto label_13a03c;
        case 0x13a040u: goto label_13a040;
        case 0x13a044u: goto label_13a044;
        case 0x13a048u: goto label_13a048;
        case 0x13a04cu: goto label_13a04c;
        case 0x13a050u: goto label_13a050;
        case 0x13a054u: goto label_13a054;
        case 0x13a058u: goto label_13a058;
        case 0x13a05cu: goto label_13a05c;
        case 0x13a060u: goto label_13a060;
        case 0x13a064u: goto label_13a064;
        case 0x13a068u: goto label_13a068;
        case 0x13a06cu: goto label_13a06c;
        case 0x13a070u: goto label_13a070;
        case 0x13a074u: goto label_13a074;
        case 0x13a078u: goto label_13a078;
        case 0x13a07cu: goto label_13a07c;
        case 0x13a080u: goto label_13a080;
        case 0x13a084u: goto label_13a084;
        case 0x13a088u: goto label_13a088;
        case 0x13a08cu: goto label_13a08c;
        case 0x13a090u: goto label_13a090;
        case 0x13a094u: goto label_13a094;
        case 0x13a098u: goto label_13a098;
        case 0x13a09cu: goto label_13a09c;
        case 0x13a0a0u: goto label_13a0a0;
        case 0x13a0a4u: goto label_13a0a4;
        case 0x13a0a8u: goto label_13a0a8;
        case 0x13a0acu: goto label_13a0ac;
        case 0x13a0b0u: goto label_13a0b0;
        case 0x13a0b4u: goto label_13a0b4;
        case 0x13a0b8u: goto label_13a0b8;
        case 0x13a0bcu: goto label_13a0bc;
        case 0x13a0c0u: goto label_13a0c0;
        case 0x13a0c4u: goto label_13a0c4;
        case 0x13a0c8u: goto label_13a0c8;
        case 0x13a0ccu: goto label_13a0cc;
        case 0x13a0d0u: goto label_13a0d0;
        case 0x13a0d4u: goto label_13a0d4;
        case 0x13a0d8u: goto label_13a0d8;
        case 0x13a0dcu: goto label_13a0dc;
        case 0x13a0e0u: goto label_13a0e0;
        case 0x13a0e4u: goto label_13a0e4;
        case 0x13a0e8u: goto label_13a0e8;
        case 0x13a0ecu: goto label_13a0ec;
        case 0x13a0f0u: goto label_13a0f0;
        case 0x13a0f4u: goto label_13a0f4;
        case 0x13a0f8u: goto label_13a0f8;
        case 0x13a0fcu: goto label_13a0fc;
        case 0x13a100u: goto label_13a100;
        case 0x13a104u: goto label_13a104;
        case 0x13a108u: goto label_13a108;
        case 0x13a10cu: goto label_13a10c;
        case 0x13a110u: goto label_13a110;
        case 0x13a114u: goto label_13a114;
        case 0x13a118u: goto label_13a118;
        case 0x13a11cu: goto label_13a11c;
        case 0x13a120u: goto label_13a120;
        case 0x13a124u: goto label_13a124;
        case 0x13a128u: goto label_13a128;
        case 0x13a12cu: goto label_13a12c;
        case 0x13a130u: goto label_13a130;
        case 0x13a134u: goto label_13a134;
        case 0x13a138u: goto label_13a138;
        case 0x13a13cu: goto label_13a13c;
        case 0x13a140u: goto label_13a140;
        case 0x13a144u: goto label_13a144;
        case 0x13a148u: goto label_13a148;
        case 0x13a14cu: goto label_13a14c;
        case 0x13a150u: goto label_13a150;
        case 0x13a154u: goto label_13a154;
        case 0x13a158u: goto label_13a158;
        case 0x13a15cu: goto label_13a15c;
        case 0x13a160u: goto label_13a160;
        case 0x13a164u: goto label_13a164;
        case 0x13a168u: goto label_13a168;
        case 0x13a16cu: goto label_13a16c;
        default: break;
    }

    ctx->pc = 0x139ef8u;

label_139ef8:
    // 0x139ef8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x139ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_139efc:
    // 0x139efc: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x139efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_139f00:
    // 0x139f00: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x139f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_139f04:
    // 0x139f04: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x139f04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_139f08:
    // 0x139f08: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x139f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_139f0c:
    // 0x139f0c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x139f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_139f10:
    // 0x139f10: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x139f10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_139f14:
    // 0x139f14: 0xe64c01a0  swc1        $f12, 0x1A0($s2)
    ctx->pc = 0x139f14u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 416), bits); }
label_139f18:
    // 0x139f18: 0x8e440320  lw          $a0, 0x320($s2)
    ctx->pc = 0x139f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
label_139f1c:
    // 0x139f1c: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
label_139f20:
    if (ctx->pc == 0x139F20u) {
        ctx->pc = 0x139F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139F1Cu;
        // 0x139f20: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139F24u;
        goto label_139f24;
    }
    ctx->pc = 0x139F1Cu;
    {
        const bool branch_taken_0x139f1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x139F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139F1Cu;
        // 0x139f20: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139f1c) {
            ctx->pc = 0x139FA4u;
            goto label_139fa4;
        }
    }
    ctx->pc = 0x139F24u;
label_139f24:
    // 0x139f24: 0x8c43b1dc  lw          $v1, -0x4E24($v0)
    ctx->pc = 0x139f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947292)));
label_139f28:
    // 0x139f28: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
label_139f2c:
    if (ctx->pc == 0x139F2Cu) {
        ctx->pc = 0x139F30u;
        goto label_139f30;
    }
    ctx->pc = 0x139F28u;
    {
        const bool branch_taken_0x139f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x139f28) {
            ctx->pc = 0x139F94u;
            goto label_139f94;
        }
    }
    ctx->pc = 0x139F30u;
label_139f30:
    // 0x139f30: 0x9242032f  lbu         $v0, 0x32F($s2)
    ctx->pc = 0x139f30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 815)));
label_139f34:
    // 0x139f34: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_139f38:
    if (ctx->pc == 0x139F38u) {
        ctx->pc = 0x139F3Cu;
        goto label_139f3c;
    }
    ctx->pc = 0x139F34u;
    {
        const bool branch_taken_0x139f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139f34) {
            ctx->pc = 0x139F5Cu;
            goto label_139f5c;
        }
    }
    ctx->pc = 0x139F3Cu;
label_139f3c:
    // 0x139f3c: 0xc088e78  jal         func_2239E0
label_139f40:
    if (ctx->pc == 0x139F40u) {
        ctx->pc = 0x139F44u;
        goto label_139f44;
    }
    ctx->pc = 0x139F3Cu;
    SET_GPR_U32(ctx, 31, 0x139F44u);
    ctx->pc = 0x2239E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239E0u, 0x139F3Cu, 0x139F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139F44u;
label_139f44:
    // 0x139f44: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_139f48:
    if (ctx->pc == 0x139F48u) {
        ctx->pc = 0x139F4Cu;
        goto label_139f4c;
    }
    ctx->pc = 0x139F44u;
    {
        const bool branch_taken_0x139f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x139f44) {
            ctx->pc = 0x139F5Cu;
            goto label_139f5c;
        }
    }
    ctx->pc = 0x139F4Cu;
label_139f4c:
    // 0x139f4c: 0xc088e80  jal         func_223A00
label_139f50:
    if (ctx->pc == 0x139F50u) {
        ctx->pc = 0x139F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139F4Cu;
        // 0x139f50: 0x8e440320  lw          $a0, 0x320($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139F54u;
        goto label_139f54;
    }
    ctx->pc = 0x139F4Cu;
    SET_GPR_U32(ctx, 31, 0x139F54u);
    ctx->pc = 0x139F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139F4Cu;
    // 0x139f50: 0x8e440320  lw          $a0, 0x320($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A00u, 0x139F4Cu, 0x139F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139F54u;
label_139f54:
    // 0x139f54: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_139f58:
    if (ctx->pc == 0x139F58u) {
        ctx->pc = 0x139F5Cu;
        goto label_139f5c;
    }
    ctx->pc = 0x139F54u;
    {
        const bool branch_taken_0x139f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139f54) {
            ctx->pc = 0x139FA4u;
            goto label_139fa4;
        }
    }
    ctx->pc = 0x139F5Cu;
label_139f5c:
    // 0x139f5c: 0xc088e80  jal         func_223A00
label_139f60:
    if (ctx->pc == 0x139F60u) {
        ctx->pc = 0x139F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139F5Cu;
        // 0x139f60: 0x8e440320  lw          $a0, 0x320($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139F64u;
        goto label_139f64;
    }
    ctx->pc = 0x139F5Cu;
    SET_GPR_U32(ctx, 31, 0x139F64u);
    ctx->pc = 0x139F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139F5Cu;
    // 0x139f60: 0x8e440320  lw          $a0, 0x320($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A00u, 0x139F5Cu, 0x139F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139F64u;
label_139f64:
    // 0x139f64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x139f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_139f68:
    // 0x139f68: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_139f6c:
    if (ctx->pc == 0x139F6Cu) {
        ctx->pc = 0x139F70u;
        goto label_139f70;
    }
    ctx->pc = 0x139F68u;
    {
        const bool branch_taken_0x139f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x139f68) {
            ctx->pc = 0x139F94u;
            goto label_139f94;
        }
    }
    ctx->pc = 0x139F70u;
label_139f70:
    // 0x139f70: 0x8e440320  lw          $a0, 0x320($s2)
    ctx->pc = 0x139f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
label_139f74:
    // 0x139f74: 0xc0e409a  jal         func_390268
label_139f78:
    if (ctx->pc == 0x139F78u) {
        ctx->pc = 0x139F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139F74u;
        // 0x139f78: 0x248400c4  addiu       $a0, $a0, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139F7Cu;
        goto label_139f7c;
    }
    ctx->pc = 0x139F74u;
    SET_GPR_U32(ctx, 31, 0x139F7Cu);
    ctx->pc = 0x139F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139F74u;
    // 0x139f78: 0x248400c4  addiu       $a0, $a0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x139F74u, 0x139F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139F7Cu;
label_139f7c:
    // 0x139f7c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_139f80:
    if (ctx->pc == 0x139F80u) {
        ctx->pc = 0x139F84u;
        goto label_139f84;
    }
    ctx->pc = 0x139F7Cu;
    {
        const bool branch_taken_0x139f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139f7c) {
            ctx->pc = 0x139FA4u;
            goto label_139fa4;
        }
    }
    ctx->pc = 0x139F84u;
label_139f84:
    // 0x139f84: 0xc088e78  jal         func_2239E0
label_139f88:
    if (ctx->pc == 0x139F88u) {
        ctx->pc = 0x139F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139F84u;
        // 0x139f88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139F8Cu;
        goto label_139f8c;
    }
    ctx->pc = 0x139F84u;
    SET_GPR_U32(ctx, 31, 0x139F8Cu);
    ctx->pc = 0x139F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139F84u;
    // 0x139f88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239E0u, 0x139F84u, 0x139F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139F8Cu;
label_139f8c:
    // 0x139f8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_139f90:
    if (ctx->pc == 0x139F90u) {
        ctx->pc = 0x139F94u;
        goto label_139f94;
    }
    ctx->pc = 0x139F8Cu;
    {
        const bool branch_taken_0x139f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139f8c) {
            ctx->pc = 0x139FA4u;
            goto label_139fa4;
        }
    }
    ctx->pc = 0x139F94u;
label_139f94:
    // 0x139f94: 0xc089f98  jal         func_227E60
label_139f98:
    if (ctx->pc == 0x139F98u) {
        ctx->pc = 0x139F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139F94u;
        // 0x139f98: 0x8e440320  lw          $a0, 0x320($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139F9Cu;
        goto label_139f9c;
    }
    ctx->pc = 0x139F94u;
    SET_GPR_U32(ctx, 31, 0x139F9Cu);
    ctx->pc = 0x139F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139F94u;
    // 0x139f98: 0x8e440320  lw          $a0, 0x320($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x139F94u, 0x139F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139F9Cu;
label_139f9c:
    // 0x139f9c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_139fa0:
    if (ctx->pc == 0x139FA0u) {
        ctx->pc = 0x139FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139F9Cu;
        // 0x139fa0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139FA4u;
        goto label_139fa4;
    }
    ctx->pc = 0x139F9Cu;
    {
        const bool branch_taken_0x139f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139f9c) {
            ctx->pc = 0x139FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139F9Cu;
            // 0x139fa0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139FB4u;
            goto label_139fb4;
        }
    }
    ctx->pc = 0x139FA4u;
label_139fa4:
    // 0x139fa4: 0xc04e8ec  jal         func_13A3B0
label_139fa8:
    if (ctx->pc == 0x139FA8u) {
        ctx->pc = 0x139FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139FA4u;
        // 0x139fa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139FACu;
        goto label_139fac;
    }
    ctx->pc = 0x139FA4u;
    SET_GPR_U32(ctx, 31, 0x139FACu);
    ctx->pc = 0x139FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139FA4u;
    // 0x139fa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A3B0u, 0x139FA4u, 0x139FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139FACu;
label_139fac:
    // 0x139fac: 0x10000069  b           . + 4 + (0x69 << 2)
label_139fb0:
    if (ctx->pc == 0x139FB0u) {
        ctx->pc = 0x139FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139FACu;
        // 0x139fb0: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139FB4u;
        goto label_139fb4;
    }
    ctx->pc = 0x139FACu;
    {
        const bool branch_taken_0x139fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139FACu;
        // 0x139fb0: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139fac) {
            ctx->pc = 0x13A154u;
            goto label_13a154;
        }
    }
    ctx->pc = 0x139FB4u;
label_139fb4:
    // 0x139fb4: 0x26450270  addiu       $a1, $s2, 0x270
    ctx->pc = 0x139fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 624));
label_139fb8:
    // 0x139fb8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x139fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_139fbc:
    // 0x139fbc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x139fbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_139fc0:
    // 0x139fc0: 0x846401b8  lh          $a0, 0x1B8($v1)
    ctx->pc = 0x139fc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 440)));
label_139fc4:
    // 0x139fc4: 0x8c6201bc  lw          $v0, 0x1BC($v1)
    ctx->pc = 0x139fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 444)));
label_139fc8:
    // 0x139fc8: 0x40f809  jalr        $v0
label_139fcc:
    if (ctx->pc == 0x139FCCu) {
        ctx->pc = 0x139FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139FC8u;
        // 0x139fcc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139FD0u;
        goto label_139fd0;
    }
    ctx->pc = 0x139FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x139FD0u);
        ctx->pc = 0x139FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139FC8u;
        // 0x139fcc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139FC8u, 0x139FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x139FD0u;
label_139fd0:
    // 0x139fd0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x139fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_139fd4:
    // 0x139fd4: 0x26450310  addiu       $a1, $s2, 0x310
    ctx->pc = 0x139fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 784));
label_139fd8:
    // 0x139fd8: 0x846401c0  lh          $a0, 0x1C0($v1)
    ctx->pc = 0x139fd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 448)));
label_139fdc:
    // 0x139fdc: 0x8c6201c4  lw          $v0, 0x1C4($v1)
    ctx->pc = 0x139fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 452)));
label_139fe0:
    // 0x139fe0: 0x40f809  jalr        $v0
label_139fe4:
    if (ctx->pc == 0x139FE4u) {
        ctx->pc = 0x139FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139FE0u;
        // 0x139fe4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139FE8u;
        goto label_139fe8;
    }
    ctx->pc = 0x139FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x139FE8u);
        ctx->pc = 0x139FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139FE0u;
        // 0x139fe4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139FE0u, 0x139FE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x139FE8u;
label_139fe8:
    // 0x139fe8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x139fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_139fec:
    // 0x139fec: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x139fecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_139ff0:
    // 0x139ff0: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x139ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_139ff4:
    // 0x139ff4: 0x40f809  jalr        $v0
label_139ff8:
    if (ctx->pc == 0x139FF8u) {
        ctx->pc = 0x139FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139FF4u;
        // 0x139ff8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139FFCu;
        goto label_139ffc;
    }
    ctx->pc = 0x139FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x139FFCu);
        ctx->pc = 0x139FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139FF4u;
        // 0x139ff8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139FF4u, 0x139FFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x139FFCu;
label_139ffc:
    // 0x139ffc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x139ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13a000:
    // 0x13a000: 0xc0cd916  jal         func_336458
label_13a004:
    if (ctx->pc == 0x13A004u) {
        ctx->pc = 0x13A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A000u;
        // 0x13a004: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A008u;
        goto label_13a008;
    }
    ctx->pc = 0x13A000u;
    SET_GPR_U32(ctx, 31, 0x13A008u);
    ctx->pc = 0x13A004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A000u;
    // 0x13a004: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336458u, 0x13A000u, 0x13A008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A008u;
label_13a008:
    // 0x13a008: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13a008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13a00c:
    // 0x13a00c: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x13a00cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_13a010:
    // 0x13a010: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x13a010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_13a014:
    // 0x13a014: 0x40f809  jalr        $v0
label_13a018:
    if (ctx->pc == 0x13A018u) {
        ctx->pc = 0x13A018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A014u;
        // 0x13a018: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A01Cu;
        goto label_13a01c;
    }
    ctx->pc = 0x13A014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13A01Cu);
        ctx->pc = 0x13A018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A014u;
        // 0x13a018: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A014u, 0x13A01Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A01Cu;
label_13a01c:
    // 0x13a01c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13a01cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_13a020:
    // 0x13a020: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x13a020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_13a024:
    // 0x13a024: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13a024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a028:
    // 0x13a028: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13a028u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a02c:
    // 0x13a02c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x13a02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_13a030:
    // 0x13a030: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13a030u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a034:
    // 0x13a034: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13a034u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a038:
    // 0x13a038: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13a038u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_13a03c:
    // 0x13a03c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13a03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13a040:
    // 0x13a040: 0xc0489ca  jal         func_122728
label_13a044:
    if (ctx->pc == 0x13A044u) {
        ctx->pc = 0x13A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A040u;
        // 0x13a044: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A048u;
        goto label_13a048;
    }
    ctx->pc = 0x13A040u;
    SET_GPR_U32(ctx, 31, 0x13A048u);
    ctx->pc = 0x13A044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A040u;
    // 0x13a044: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122728u, 0x13A040u, 0x13A048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A048u;
label_13a048:
    // 0x13a048: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x13a048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13a04c:
    // 0x13a04c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13a04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13a050:
    // 0x13a050: 0x844401b8  lh          $a0, 0x1B8($v0)
    ctx->pc = 0x13a050u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 440)));
label_13a054:
    // 0x13a054: 0x8c4601bc  lw          $a2, 0x1BC($v0)
    ctx->pc = 0x13a054u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
label_13a058:
    // 0x13a058: 0xc0f809  jalr        $a2
label_13a05c:
    if (ctx->pc == 0x13A05Cu) {
        ctx->pc = 0x13A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A058u;
        // 0x13a05c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A060u;
        goto label_13a060;
    }
    ctx->pc = 0x13A058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x13A060u);
        ctx->pc = 0x13A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A058u;
        // 0x13a05c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A058u, 0x13A060u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A060u;
label_13a060:
    // 0x13a060: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13a060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13a064:
    // 0x13a064: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x13a064u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_13a068:
    // 0x13a068: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x13a068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_13a06c:
    // 0x13a06c: 0x40f809  jalr        $v0
label_13a070:
    if (ctx->pc == 0x13A070u) {
        ctx->pc = 0x13A070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A06Cu;
        // 0x13a070: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A074u;
        goto label_13a074;
    }
    ctx->pc = 0x13A06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13A074u);
        ctx->pc = 0x13A070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A06Cu;
        // 0x13a070: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A06Cu, 0x13A074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A074u;
label_13a074:
    // 0x13a074: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13a074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13a078:
    // 0x13a078: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13a078u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13a07c:
    // 0x13a07c: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x13a07cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_13a080:
    // 0x13a080: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x13a080u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_13a084:
    // 0x13a084: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x13a084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_13a088:
    // 0x13a088: 0x40f809  jalr        $v0
label_13a08c:
    if (ctx->pc == 0x13A08Cu) {
        ctx->pc = 0x13A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A088u;
        // 0x13a08c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A090u;
        goto label_13a090;
    }
    ctx->pc = 0x13A088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13A090u);
        ctx->pc = 0x13A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A088u;
        // 0x13a08c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A088u, 0x13A090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A090u;
label_13a090:
    // 0x13a090: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13a090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13a094:
    // 0x13a094: 0xc0cd8ec  jal         func_3363B0
label_13a098:
    if (ctx->pc == 0x13A098u) {
        ctx->pc = 0x13A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A094u;
        // 0x13a098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A09Cu;
        goto label_13a09c;
    }
    ctx->pc = 0x13A094u;
    SET_GPR_U32(ctx, 31, 0x13A09Cu);
    ctx->pc = 0x13A098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A094u;
    // 0x13a098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x13A094u, 0x13A09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A09Cu;
label_13a09c:
    // 0x13a09c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13a09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13a0a0:
    // 0x13a0a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13a0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13a0a4:
    // 0x13a0a4: 0xc136b24  jal         func_4DAC90
label_13a0a8:
    if (ctx->pc == 0x13A0A8u) {
        ctx->pc = 0x13A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A0A4u;
        // 0x13a0a8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A0ACu;
        goto label_13a0ac;
    }
    ctx->pc = 0x13A0A4u;
    SET_GPR_U32(ctx, 31, 0x13A0ACu);
    ctx->pc = 0x13A0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A0A4u;
    // 0x13a0a8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13A0A4u, 0x13A0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A0ACu;
label_13a0ac:
    // 0x13a0ac: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x13a0acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13a0b0:
    // 0x13a0b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13a0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13a0b4:
    // 0x13a0b4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13a0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13a0b8:
    // 0x13a0b8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x13a0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13a0bc:
    // 0x13a0bc: 0xc136b18  jal         func_4DAC60
label_13a0c0:
    if (ctx->pc == 0x13A0C0u) {
        ctx->pc = 0x13A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A0BCu;
        // 0x13a0c0: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A0C4u;
        goto label_13a0c4;
    }
    ctx->pc = 0x13A0BCu;
    SET_GPR_U32(ctx, 31, 0x13A0C4u);
    ctx->pc = 0x13A0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A0BCu;
    // 0x13a0c0: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13A0BCu, 0x13A0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A0C4u;
label_13a0c4:
    // 0x13a0c4: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x13a0c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13a0c8:
    // 0x13a0c8: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x13a0c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13a0cc:
    // 0x13a0cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13a0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13a0d0:
    // 0x13a0d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13a0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13a0d4:
    // 0x13a0d4: 0xc0484a6  jal         func_121298
label_13a0d8:
    if (ctx->pc == 0x13A0D8u) {
        ctx->pc = 0x13A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A0D4u;
        // 0x13a0d8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A0DCu;
        goto label_13a0dc;
    }
    ctx->pc = 0x13A0D4u;
    SET_GPR_U32(ctx, 31, 0x13A0DCu);
    ctx->pc = 0x13A0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A0D4u;
    // 0x13a0d8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121298u, 0x13A0D4u, 0x13A0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A0DCu;
label_13a0dc:
    // 0x13a0dc: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_13a0e0:
    if (ctx->pc == 0x13A0E0u) {
        ctx->pc = 0x13A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A0DCu;
        // 0x13a0e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A0E4u;
        goto label_13a0e4;
    }
    ctx->pc = 0x13A0DCu;
    {
        const bool branch_taken_0x13a0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a0dc) {
            ctx->pc = 0x13A0E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A0DCu;
            // 0x13a0e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A148u;
            goto label_13a148;
        }
    }
    ctx->pc = 0x13A0E4u;
label_13a0e4:
    // 0x13a0e4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13a0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13a0e8:
    // 0x13a0e8: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x13a0e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_13a0ec:
    // 0x13a0ec: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x13a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_13a0f0:
    // 0x13a0f0: 0x40f809  jalr        $v0
label_13a0f4:
    if (ctx->pc == 0x13A0F4u) {
        ctx->pc = 0x13A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A0F0u;
        // 0x13a0f4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A0F8u;
        goto label_13a0f8;
    }
    ctx->pc = 0x13A0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13A0F8u);
        ctx->pc = 0x13A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A0F0u;
        // 0x13a0f4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A0F0u, 0x13A0F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A0F8u;
label_13a0f8:
    // 0x13a0f8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13a0f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_13a0fc:
    // 0x13a0fc: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x13a0fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_13a100:
    // 0x13a100: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x13a100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13a104:
    // 0x13a104: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x13a104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_13a108:
    // 0x13a108: 0x84a40218  lh          $a0, 0x218($a1)
    ctx->pc = 0x13a108u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 536)));
label_13a10c:
    // 0x13a10c: 0x8ca2021c  lw          $v0, 0x21C($a1)
    ctx->pc = 0x13a10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 540)));
label_13a110:
    // 0x13a110: 0x40f809  jalr        $v0
label_13a114:
    if (ctx->pc == 0x13A114u) {
        ctx->pc = 0x13A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A110u;
        // 0x13a114: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A118u;
        goto label_13a118;
    }
    ctx->pc = 0x13A110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13A118u);
        ctx->pc = 0x13A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A110u;
        // 0x13a114: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A110u, 0x13A118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A118u;
label_13a118:
    // 0x13a118: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13a118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13a11c:
    // 0x13a11c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13a11cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13a120:
    // 0x13a120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13a120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13a124:
    // 0x13a124: 0xc0cdc5a  jal         func_337168
label_13a128:
    if (ctx->pc == 0x13A128u) {
        ctx->pc = 0x13A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A124u;
        // 0x13a128: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A12Cu;
        goto label_13a12c;
    }
    ctx->pc = 0x13A124u;
    SET_GPR_U32(ctx, 31, 0x13A12Cu);
    ctx->pc = 0x13A128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A124u;
    // 0x13a128: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337168u, 0x13A124u, 0x13A12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A12Cu;
label_13a12c:
    // 0x13a12c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_13a130:
    if (ctx->pc == 0x13A130u) {
        ctx->pc = 0x13A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A12Cu;
        // 0x13a130: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A134u;
        goto label_13a134;
    }
    ctx->pc = 0x13A12Cu;
    {
        const bool branch_taken_0x13a12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A12Cu;
        // 0x13a130: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a12c) {
            ctx->pc = 0x13A144u;
            goto label_13a144;
        }
    }
    ctx->pc = 0x13A134u;
label_13a134:
    // 0x13a134: 0xc0cd972  jal         func_3365C8
label_13a138:
    if (ctx->pc == 0x13A138u) {
        ctx->pc = 0x13A138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A134u;
        // 0x13a138: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A13Cu;
        goto label_13a13c;
    }
    ctx->pc = 0x13A134u;
    SET_GPR_U32(ctx, 31, 0x13A13Cu);
    ctx->pc = 0x13A138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A134u;
    // 0x13a138: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365C8u, 0x13A134u, 0x13A13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A13Cu;
label_13a13c:
    // 0x13a13c: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x13a13cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_13a140:
    // 0x13a140: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x13a140u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
label_13a144:
    // 0x13a144: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13a144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13a148:
    // 0x13a148: 0xc04828c  jal         func_120A30
label_13a14c:
    if (ctx->pc == 0x13A14Cu) {
        ctx->pc = 0x13A14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A148u;
        // 0x13a14c: 0xc48c01a0  lwc1        $f12, 0x1A0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A150u;
        goto label_13a150;
    }
    ctx->pc = 0x13A148u;
    SET_GPR_U32(ctx, 31, 0x13A150u);
    ctx->pc = 0x13A14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A148u;
    // 0x13a14c: 0xc48c01a0  lwc1        $f12, 0x1A0($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A30u, 0x13A148u, 0x13A150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A150u;
label_13a150:
    // 0x13a150: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x13a150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_13a154:
    // 0x13a154: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x13a154u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_13a158:
    // 0x13a158: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x13a158u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_13a15c:
    // 0x13a15c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x13a15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_13a160:
    // 0x13a160: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x13a160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13a164:
    // 0x13a164: 0x3e00008  jr          $ra
label_13a168:
    if (ctx->pc == 0x13A168u) {
        ctx->pc = 0x13A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A164u;
        // 0x13a168: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A16Cu;
        goto label_13a16c;
    }
    ctx->pc = 0x13A164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A164u;
        // 0x13a168: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A16Cu;
label_13a16c:
    // 0x13a16c: 0x0  nop
    ctx->pc = 0x13a16cu;
    // NOP
    ctx->pc = 0x13a170u;
}
