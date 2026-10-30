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

// Function: sub_002B4F40
// Address: 0x2b4f40 - 0x2b5110
void sub_002B4F40_0x2b4f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4F40_0x2b4f40");
#endif

    switch (ctx->pc) {
        case 0x2b4f40u: goto label_2b4f40;
        case 0x2b4f44u: goto label_2b4f44;
        case 0x2b4f48u: goto label_2b4f48;
        case 0x2b4f4cu: goto label_2b4f4c;
        case 0x2b4f50u: goto label_2b4f50;
        case 0x2b4f54u: goto label_2b4f54;
        case 0x2b4f58u: goto label_2b4f58;
        case 0x2b4f5cu: goto label_2b4f5c;
        case 0x2b4f60u: goto label_2b4f60;
        case 0x2b4f64u: goto label_2b4f64;
        case 0x2b4f68u: goto label_2b4f68;
        case 0x2b4f6cu: goto label_2b4f6c;
        case 0x2b4f70u: goto label_2b4f70;
        case 0x2b4f74u: goto label_2b4f74;
        case 0x2b4f78u: goto label_2b4f78;
        case 0x2b4f7cu: goto label_2b4f7c;
        case 0x2b4f80u: goto label_2b4f80;
        case 0x2b4f84u: goto label_2b4f84;
        case 0x2b4f88u: goto label_2b4f88;
        case 0x2b4f8cu: goto label_2b4f8c;
        case 0x2b4f90u: goto label_2b4f90;
        case 0x2b4f94u: goto label_2b4f94;
        case 0x2b4f98u: goto label_2b4f98;
        case 0x2b4f9cu: goto label_2b4f9c;
        case 0x2b4fa0u: goto label_2b4fa0;
        case 0x2b4fa4u: goto label_2b4fa4;
        case 0x2b4fa8u: goto label_2b4fa8;
        case 0x2b4facu: goto label_2b4fac;
        case 0x2b4fb0u: goto label_2b4fb0;
        case 0x2b4fb4u: goto label_2b4fb4;
        case 0x2b4fb8u: goto label_2b4fb8;
        case 0x2b4fbcu: goto label_2b4fbc;
        case 0x2b4fc0u: goto label_2b4fc0;
        case 0x2b4fc4u: goto label_2b4fc4;
        case 0x2b4fc8u: goto label_2b4fc8;
        case 0x2b4fccu: goto label_2b4fcc;
        case 0x2b4fd0u: goto label_2b4fd0;
        case 0x2b4fd4u: goto label_2b4fd4;
        case 0x2b4fd8u: goto label_2b4fd8;
        case 0x2b4fdcu: goto label_2b4fdc;
        case 0x2b4fe0u: goto label_2b4fe0;
        case 0x2b4fe4u: goto label_2b4fe4;
        case 0x2b4fe8u: goto label_2b4fe8;
        case 0x2b4fecu: goto label_2b4fec;
        case 0x2b4ff0u: goto label_2b4ff0;
        case 0x2b4ff4u: goto label_2b4ff4;
        case 0x2b4ff8u: goto label_2b4ff8;
        case 0x2b4ffcu: goto label_2b4ffc;
        case 0x2b5000u: goto label_2b5000;
        case 0x2b5004u: goto label_2b5004;
        case 0x2b5008u: goto label_2b5008;
        case 0x2b500cu: goto label_2b500c;
        case 0x2b5010u: goto label_2b5010;
        case 0x2b5014u: goto label_2b5014;
        case 0x2b5018u: goto label_2b5018;
        case 0x2b501cu: goto label_2b501c;
        case 0x2b5020u: goto label_2b5020;
        case 0x2b5024u: goto label_2b5024;
        case 0x2b5028u: goto label_2b5028;
        case 0x2b502cu: goto label_2b502c;
        case 0x2b5030u: goto label_2b5030;
        case 0x2b5034u: goto label_2b5034;
        case 0x2b5038u: goto label_2b5038;
        case 0x2b503cu: goto label_2b503c;
        case 0x2b5040u: goto label_2b5040;
        case 0x2b5044u: goto label_2b5044;
        case 0x2b5048u: goto label_2b5048;
        case 0x2b504cu: goto label_2b504c;
        case 0x2b5050u: goto label_2b5050;
        case 0x2b5054u: goto label_2b5054;
        case 0x2b5058u: goto label_2b5058;
        case 0x2b505cu: goto label_2b505c;
        case 0x2b5060u: goto label_2b5060;
        case 0x2b5064u: goto label_2b5064;
        case 0x2b5068u: goto label_2b5068;
        case 0x2b506cu: goto label_2b506c;
        case 0x2b5070u: goto label_2b5070;
        case 0x2b5074u: goto label_2b5074;
        case 0x2b5078u: goto label_2b5078;
        case 0x2b507cu: goto label_2b507c;
        case 0x2b5080u: goto label_2b5080;
        case 0x2b5084u: goto label_2b5084;
        case 0x2b5088u: goto label_2b5088;
        case 0x2b508cu: goto label_2b508c;
        case 0x2b5090u: goto label_2b5090;
        case 0x2b5094u: goto label_2b5094;
        case 0x2b5098u: goto label_2b5098;
        case 0x2b509cu: goto label_2b509c;
        case 0x2b50a0u: goto label_2b50a0;
        case 0x2b50a4u: goto label_2b50a4;
        case 0x2b50a8u: goto label_2b50a8;
        case 0x2b50acu: goto label_2b50ac;
        case 0x2b50b0u: goto label_2b50b0;
        case 0x2b50b4u: goto label_2b50b4;
        case 0x2b50b8u: goto label_2b50b8;
        case 0x2b50bcu: goto label_2b50bc;
        case 0x2b50c0u: goto label_2b50c0;
        case 0x2b50c4u: goto label_2b50c4;
        case 0x2b50c8u: goto label_2b50c8;
        case 0x2b50ccu: goto label_2b50cc;
        case 0x2b50d0u: goto label_2b50d0;
        case 0x2b50d4u: goto label_2b50d4;
        case 0x2b50d8u: goto label_2b50d8;
        case 0x2b50dcu: goto label_2b50dc;
        case 0x2b50e0u: goto label_2b50e0;
        case 0x2b50e4u: goto label_2b50e4;
        case 0x2b50e8u: goto label_2b50e8;
        case 0x2b50ecu: goto label_2b50ec;
        case 0x2b50f0u: goto label_2b50f0;
        case 0x2b50f4u: goto label_2b50f4;
        case 0x2b50f8u: goto label_2b50f8;
        case 0x2b50fcu: goto label_2b50fc;
        case 0x2b5100u: goto label_2b5100;
        case 0x2b5104u: goto label_2b5104;
        case 0x2b5108u: goto label_2b5108;
        case 0x2b510cu: goto label_2b510c;
        default: break;
    }

    ctx->pc = 0x2b4f40u;

label_2b4f40:
    // 0x2b4f40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b4f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2b4f44:
    // 0x2b4f44: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2b4f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2b4f48:
    // 0x2b4f48: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2b4f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2b4f4c:
    // 0x2b4f4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b4f4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b4f50:
    // 0x2b4f50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b4f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2b4f54:
    // 0x2b4f54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b4f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2b4f58:
    // 0x2b4f58: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b4f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b4f5c:
    // 0x2b4f5c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2b4f5cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b4f60:
    // 0x2b4f60: 0xc089bdc  jal         func_226F70
label_2b4f64:
    if (ctx->pc == 0x2B4F64u) {
        ctx->pc = 0x2B4F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F60u;
        // 0x2b4f64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4F68u;
        goto label_2b4f68;
    }
    ctx->pc = 0x2B4F60u;
    SET_GPR_U32(ctx, 31, 0x2B4F68u);
    ctx->pc = 0x2B4F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4F60u;
    // 0x2b4f64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2B4F60u, 0x2B4F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4F68u;
label_2b4f68:
    // 0x2b4f68: 0xc089fee  jal         func_227FB8
label_2b4f6c:
    if (ctx->pc == 0x2B4F6Cu) {
        ctx->pc = 0x2B4F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F68u;
        // 0x2b4f6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4F70u;
        goto label_2b4f70;
    }
    ctx->pc = 0x2B4F68u;
    SET_GPR_U32(ctx, 31, 0x2B4F70u);
    ctx->pc = 0x2B4F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4F68u;
    // 0x2b4f6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227FB8u, 0x2B4F68u, 0x2B4F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4F70u;
label_2b4f70:
    // 0x2b4f70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2b4f74:
    if (ctx->pc == 0x2B4F74u) {
        ctx->pc = 0x2B4F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F70u;
        // 0x2b4f74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4F78u;
        goto label_2b4f78;
    }
    ctx->pc = 0x2B4F70u;
    {
        const bool branch_taken_0x2b4f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F70u;
        // 0x2b4f74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4f70) {
            ctx->pc = 0x2B4F80u;
            goto label_2b4f80;
        }
    }
    ctx->pc = 0x2B4F78u;
label_2b4f78:
    // 0x2b4f78: 0x1000005e  b           . + 4 + (0x5E << 2)
label_2b4f7c:
    if (ctx->pc == 0x2B4F7Cu) {
        ctx->pc = 0x2B4F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F78u;
        // 0x2b4f7c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4F80u;
        goto label_2b4f80;
    }
    ctx->pc = 0x2B4F78u;
    {
        const bool branch_taken_0x2b4f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F78u;
        // 0x2b4f7c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4f78) {
            ctx->pc = 0x2B50F4u;
            goto label_2b50f4;
        }
    }
    ctx->pc = 0x2B4F80u;
label_2b4f80:
    // 0x2b4f80: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2b4f80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
label_2b4f84:
    // 0x2b4f84: 0xc089998  jal         func_226660
label_2b4f88:
    if (ctx->pc == 0x2B4F88u) {
        ctx->pc = 0x2B4F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F84u;
        // 0x2b4f88: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4F8Cu;
        goto label_2b4f8c;
    }
    ctx->pc = 0x2B4F84u;
    SET_GPR_U32(ctx, 31, 0x2B4F8Cu);
    ctx->pc = 0x2B4F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4F84u;
    // 0x2b4f88: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2B4F84u, 0x2B4F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4F8Cu;
label_2b4f8c:
    // 0x2b4f8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b4f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b4f90:
    // 0x2b4f90: 0x10460057  beq         $v0, $a2, . + 4 + (0x57 << 2)
label_2b4f94:
    if (ctx->pc == 0x2B4F94u) {
        ctx->pc = 0x2B4F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F90u;
        // 0x2b4f94: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4F98u;
        goto label_2b4f98;
    }
    ctx->pc = 0x2B4F90u;
    {
        const bool branch_taken_0x2b4f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B4F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F90u;
        // 0x2b4f94: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4f90) {
            ctx->pc = 0x2B50F0u;
            goto label_2b50f0;
        }
    }
    ctx->pc = 0x2B4F98u;
label_2b4f98:
    // 0x2b4f98: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2b4f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2b4f9c:
    // 0x2b4f9c: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2b4f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2b4fa0:
    // 0x2b4fa0: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2b4fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2b4fa4:
    // 0x2b4fa4: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2b4fa4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b4fa8:
    // 0x2b4fa8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2b4fac:
    if (ctx->pc == 0x2B4FACu) {
        ctx->pc = 0x2B4FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4FA8u;
        // 0x2b4fac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4FB0u;
        goto label_2b4fb0;
    }
    ctx->pc = 0x2B4FA8u;
    {
        const bool branch_taken_0x2b4fa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4FA8u;
        // 0x2b4fac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4fa8) {
            ctx->pc = 0x2B4FBCu;
            goto label_2b4fbc;
        }
    }
    ctx->pc = 0x2B4FB0u;
label_2b4fb0:
    // 0x2b4fb0: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x2b4fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
label_2b4fb4:
    // 0x2b4fb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b4fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b4fb8:
    // 0x2b4fb8: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2b4fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_2b4fbc:
    // 0x2b4fbc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b4fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b4fc0:
    // 0x2b4fc0: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2b4fc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2b4fc4:
    // 0x2b4fc4: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2b4fc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2b4fc8:
    // 0x2b4fc8: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
label_2b4fcc:
    if (ctx->pc == 0x2B4FCCu) {
        ctx->pc = 0x2B4FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4FC8u;
        // 0x2b4fcc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4FD0u;
        goto label_2b4fd0;
    }
    ctx->pc = 0x2B4FC8u;
    {
        const bool branch_taken_0x2b4fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x2B4FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4FC8u;
        // 0x2b4fcc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4fc8) {
            ctx->pc = 0x2B4FD8u;
            goto label_2b4fd8;
        }
    }
    ctx->pc = 0x2B4FD0u;
label_2b4fd0:
    // 0x2b4fd0: 0x10a00048  beqz        $a1, . + 4 + (0x48 << 2)
label_2b4fd4:
    if (ctx->pc == 0x2B4FD4u) {
        ctx->pc = 0x2B4FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4FD0u;
        // 0x2b4fd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4FD8u;
        goto label_2b4fd8;
    }
    ctx->pc = 0x2B4FD0u;
    {
        const bool branch_taken_0x2b4fd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4FD0u;
        // 0x2b4fd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4fd0) {
            ctx->pc = 0x2B50F4u;
            goto label_2b50f4;
        }
    }
    ctx->pc = 0x2B4FD8u;
label_2b4fd8:
    // 0x2b4fd8: 0x8c820284  lw          $v0, 0x284($a0)
    ctx->pc = 0x2b4fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 644)));
label_2b4fdc:
    // 0x2b4fdc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2b4fe0:
    if (ctx->pc == 0x2B4FE0u) {
        ctx->pc = 0x2B4FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4FDCu;
        // 0x2b4fe0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4FE4u;
        goto label_2b4fe4;
    }
    ctx->pc = 0x2B4FDCu;
    {
        const bool branch_taken_0x2b4fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4FDCu;
        // 0x2b4fe0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4fdc) {
            ctx->pc = 0x2B501Cu;
            goto label_2b501c;
        }
    }
    ctx->pc = 0x2B4FE4u;
label_2b4fe4:
    // 0x2b4fe4: 0x92220024  lbu         $v0, 0x24($s1)
    ctx->pc = 0x2b4fe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
label_2b4fe8:
    // 0x2b4fe8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b4fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b4fec:
    // 0x2b4fec: 0xa2220024  sb          $v0, 0x24($s1)
    ctx->pc = 0x2b4fecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 36), (uint8_t)GPR_U32(ctx, 2));
label_2b4ff0:
    // 0x2b4ff0: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_2b4ff4:
    if (ctx->pc == 0x2B4FF4u) {
        ctx->pc = 0x2B4FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4FF0u;
        // 0x2b4ff4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4FF8u;
        goto label_2b4ff8;
    }
    ctx->pc = 0x2B4FF0u;
    {
        const bool branch_taken_0x2b4ff0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4ff0) {
            ctx->pc = 0x2B4FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4FF0u;
            // 0x2b4ff4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4FF8u;
            goto label_2b4ff8;
        }
    }
    ctx->pc = 0x2B4FF8u;
label_2b4ff8:
    // 0x2b4ff8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b4ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b4ffc:
    // 0x2b4ffc: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x2b4ffcu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2b5000:
    // 0x2b5000: 0x1810  mfhi        $v1
    ctx->pc = 0x2b5000u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2b5004:
    // 0x2b5004: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
label_2b5008:
    if (ctx->pc == 0x2B5008u) {
        ctx->pc = 0x2B5008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5004u;
        // 0x2b5008: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B500Cu;
        goto label_2b500c;
    }
    ctx->pc = 0x2B5004u;
    {
        const bool branch_taken_0x2b5004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5004u;
        // 0x2b5008: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5004) {
            ctx->pc = 0x2B50F4u;
            goto label_2b50f4;
        }
    }
    ctx->pc = 0x2B500Cu;
label_2b500c:
    // 0x2b500c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b500cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b5010:
    // 0x2b5010: 0xac400284  sw          $zero, 0x284($v0)
    ctx->pc = 0x2b5010u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 644), GPR_U32(ctx, 0));
label_2b5014:
    // 0x2b5014: 0x10000036  b           . + 4 + (0x36 << 2)
label_2b5018:
    if (ctx->pc == 0x2B5018u) {
        ctx->pc = 0x2B5018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5014u;
        // 0x2b5018: 0xa2200024  sb          $zero, 0x24($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 36), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B501Cu;
        goto label_2b501c;
    }
    ctx->pc = 0x2B5014u;
    {
        const bool branch_taken_0x2b5014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5014u;
        // 0x2b5018: 0xa2200024  sb          $zero, 0x24($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 36), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5014) {
            ctx->pc = 0x2B50F0u;
            goto label_2b50f0;
        }
    }
    ctx->pc = 0x2B501Cu;
label_2b501c:
    // 0x2b501c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b501cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b5020:
    // 0x2b5020: 0xc0ad326  jal         func_2B4C98
label_2b5024:
    if (ctx->pc == 0x2B5024u) {
        ctx->pc = 0x2B5024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5020u;
        // 0x2b5024: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5028u;
        goto label_2b5028;
    }
    ctx->pc = 0x2B5020u;
    SET_GPR_U32(ctx, 31, 0x2B5028u);
    ctx->pc = 0x2B5024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5020u;
    // 0x2b5024: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C98u, 0x2B5020u, 0x2B5028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5028u;
label_2b5028:
    // 0x2b5028: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b5028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b502c:
    // 0x2b502c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b502cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b5030:
    // 0x2b5030: 0x16020030  bne         $s0, $v0, . + 4 + (0x30 << 2)
label_2b5034:
    if (ctx->pc == 0x2B5034u) {
        ctx->pc = 0x2B5034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5030u;
        // 0x2b5034: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5038u;
        goto label_2b5038;
    }
    ctx->pc = 0x2B5030u;
    {
        const bool branch_taken_0x2b5030 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B5034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5030u;
        // 0x2b5034: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5030) {
            ctx->pc = 0x2B50F4u;
            goto label_2b50f4;
        }
    }
    ctx->pc = 0x2B5038u;
label_2b5038:
    // 0x2b5038: 0xc08bfbc  jal         func_22FEF0
label_2b503c:
    if (ctx->pc == 0x2B503Cu) {
        ctx->pc = 0x2B503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5038u;
        // 0x2b503c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5040u;
        goto label_2b5040;
    }
    ctx->pc = 0x2B5038u;
    SET_GPR_U32(ctx, 31, 0x2B5040u);
    ctx->pc = 0x2B503Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5038u;
    // 0x2b503c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2B5038u, 0x2B5040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5040u;
label_2b5040:
    // 0x2b5040: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b5040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b5044:
    // 0x2b5044: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2b5044u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2b5048:
    // 0x2b5048: 0x2902a  slt         $s2, $zero, $v0
    ctx->pc = 0x2b5048u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2b504c:
    // 0x2b504c: 0x16500019  bne         $s2, $s0, . + 4 + (0x19 << 2)
label_2b5050:
    if (ctx->pc == 0x2B5050u) {
        ctx->pc = 0x2B5054u;
        goto label_2b5054;
    }
    ctx->pc = 0x2B504Cu;
    {
        const bool branch_taken_0x2b504c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x2b504c) {
            ctx->pc = 0x2B50B4u;
            goto label_2b50b4;
        }
    }
    ctx->pc = 0x2B5054u;
label_2b5054:
    // 0x2b5054: 0xc0a36c2  jal         func_28DB08
label_2b5058:
    if (ctx->pc == 0x2B5058u) {
        ctx->pc = 0x2B505Cu;
        goto label_2b505c;
    }
    ctx->pc = 0x2B5054u;
    SET_GPR_U32(ctx, 31, 0x2B505Cu);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2B5054u, 0x2B505Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B505Cu;
label_2b505c:
    // 0x2b505c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b505cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b5060:
    // 0x2b5060: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2b5060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2b5064:
    // 0x2b5064: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2b5064u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2b5068:
    // 0x2b5068: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2b5068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2b506c:
    // 0x2b506c: 0x40f809  jalr        $v0
label_2b5070:
    if (ctx->pc == 0x2B5070u) {
        ctx->pc = 0x2B5070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B506Cu;
        // 0x2b5070: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5074u;
        goto label_2b5074;
    }
    ctx->pc = 0x2B506Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B5074u);
        ctx->pc = 0x2B5070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B506Cu;
        // 0x2b5070: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B506Cu, 0x2B5074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B5074u;
label_2b5074:
    // 0x2b5074: 0x14520008  bne         $v0, $s2, . + 4 + (0x8 << 2)
label_2b5078:
    if (ctx->pc == 0x2B5078u) {
        ctx->pc = 0x2B5078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5074u;
        // 0x2b5078: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B507Cu;
        goto label_2b507c;
    }
    ctx->pc = 0x2B5074u;
    {
        const bool branch_taken_0x2b5074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2B5078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5074u;
        // 0x2b5078: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5074) {
            ctx->pc = 0x2B5098u;
            goto label_2b5098;
        }
    }
    ctx->pc = 0x2B507Cu;
label_2b507c:
    // 0x2b507c: 0xc0beefa  jal         func_2FBBE8
label_2b5080:
    if (ctx->pc == 0x2B5080u) {
        ctx->pc = 0x2B5080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B507Cu;
        // 0x2b5080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5084u;
        goto label_2b5084;
    }
    ctx->pc = 0x2B507Cu;
    SET_GPR_U32(ctx, 31, 0x2B5084u);
    ctx->pc = 0x2B5080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B507Cu;
    // 0x2b5080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBE8u, 0x2B507Cu, 0x2B5084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5084u;
label_2b5084:
    // 0x2b5084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b5084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b5088:
    // 0x2b5088: 0xc0bf0fa  jal         func_2FC3E8
label_2b508c:
    if (ctx->pc == 0x2B508Cu) {
        ctx->pc = 0x2B508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5088u;
        // 0x2b508c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5090u;
        goto label_2b5090;
    }
    ctx->pc = 0x2B5088u;
    SET_GPR_U32(ctx, 31, 0x2B5090u);
    ctx->pc = 0x2B508Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5088u;
    // 0x2b508c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC3E8u, 0x2B5088u, 0x2B5090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5090u;
label_2b5090:
    // 0x2b5090: 0x10000018  b           . + 4 + (0x18 << 2)
label_2b5094:
    if (ctx->pc == 0x2B5094u) {
        ctx->pc = 0x2B5094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5090u;
        // 0x2b5094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5098u;
        goto label_2b5098;
    }
    ctx->pc = 0x2B5090u;
    {
        const bool branch_taken_0x2b5090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5090u;
        // 0x2b5094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5090) {
            ctx->pc = 0x2B50F4u;
            goto label_2b50f4;
        }
    }
    ctx->pc = 0x2B5098u;
label_2b5098:
    // 0x2b5098: 0xc0a36c8  jal         func_28DB20
label_2b509c:
    if (ctx->pc == 0x2B509Cu) {
        ctx->pc = 0x2B509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5098u;
        // 0x2b509c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B50A0u;
        goto label_2b50a0;
    }
    ctx->pc = 0x2B5098u;
    SET_GPR_U32(ctx, 31, 0x2B50A0u);
    ctx->pc = 0x2B509Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5098u;
    // 0x2b509c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2B5098u, 0x2B50A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B50A0u;
label_2b50a0:
    // 0x2b50a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b50a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b50a4:
    // 0x2b50a4: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2b50a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2b50a8:
    // 0x2b50a8: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2b50a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2b50ac:
    // 0x2b50ac: 0x10520011  beq         $v0, $s2, . + 4 + (0x11 << 2)
label_2b50b0:
    if (ctx->pc == 0x2B50B0u) {
        ctx->pc = 0x2B50B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B50ACu;
        // 0x2b50b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B50B4u;
        goto label_2b50b4;
    }
    ctx->pc = 0x2B50ACu;
    {
        const bool branch_taken_0x2b50ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2B50B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B50ACu;
        // 0x2b50b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b50ac) {
            ctx->pc = 0x2B50F4u;
            goto label_2b50f4;
        }
    }
    ctx->pc = 0x2B50B4u;
label_2b50b4:
    // 0x2b50b4: 0xc0a367c  jal         func_28D9F0
label_2b50b8:
    if (ctx->pc == 0x2B50B8u) {
        ctx->pc = 0x2B50B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B50B4u;
        // 0x2b50b8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B50BCu;
        goto label_2b50bc;
    }
    ctx->pc = 0x2B50B4u;
    SET_GPR_U32(ctx, 31, 0x2B50BCu);
    ctx->pc = 0x2B50B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B50B4u;
    // 0x2b50b8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B50B4u, 0x2B50BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B50BCu;
label_2b50bc:
    // 0x2b50bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b50bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b50c0:
    // 0x2b50c0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_2b50c4:
    if (ctx->pc == 0x2B50C4u) {
        ctx->pc = 0x2B50C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B50C0u;
        // 0x2b50c4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B50C8u;
        goto label_2b50c8;
    }
    ctx->pc = 0x2B50C0u;
    {
        const bool branch_taken_0x2b50c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B50C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B50C0u;
        // 0x2b50c4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b50c0) {
            ctx->pc = 0x2B50F0u;
            goto label_2b50f0;
        }
    }
    ctx->pc = 0x2B50C8u;
label_2b50c8:
    // 0x2b50c8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b50c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b50cc:
    // 0x2b50cc: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2b50ccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2b50d0:
    // 0x2b50d0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2b50d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b50d4:
    // 0x2b50d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b50d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2b50d8:
    // 0x2b50d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b50d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b50dc:
    // 0x2b50dc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2b50dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b50e0:
    // 0x2b50e0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2b50e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b50e4:
    // 0x2b50e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2b50e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b50e8:
    // 0x2b50e8: 0xc0bee7a  jal         func_2FB9E8
label_2b50ec:
    if (ctx->pc == 0x2B50ECu) {
        ctx->pc = 0x2B50ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B50E8u;
        // 0x2b50ec: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B50F0u;
        goto label_2b50f0;
    }
    ctx->pc = 0x2B50E8u;
    SET_GPR_U32(ctx, 31, 0x2B50F0u);
    ctx->pc = 0x2B50ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B50E8u;
    // 0x2b50ec: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2B50E8u, 0x2B50F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B50F0u;
label_2b50f0:
    // 0x2b50f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b50f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b50f4:
    // 0x2b50f4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2b50f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2b50f8:
    // 0x2b50f8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2b50f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b50fc:
    // 0x2b50fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b50fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b5100:
    // 0x2b5100: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b5100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b5104:
    // 0x2b5104: 0x3e00008  jr          $ra
label_2b5108:
    if (ctx->pc == 0x2B5108u) {
        ctx->pc = 0x2B5108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5104u;
        // 0x2b5108: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B510Cu;
        goto label_2b510c;
    }
    ctx->pc = 0x2B5104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5104u;
        // 0x2b5108: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B510Cu;
label_2b510c:
    // 0x2b510c: 0x0  nop
    ctx->pc = 0x2b510cu;
    // NOP
    ctx->pc = 0x2b5110u;
}
