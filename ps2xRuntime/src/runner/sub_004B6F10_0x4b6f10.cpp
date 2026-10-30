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

// Function: sub_004B6F10
// Address: 0x4b6f10 - 0x4b7078
void sub_004B6F10_0x4b6f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B6F10_0x4b6f10");
#endif

    switch (ctx->pc) {
        case 0x4b6f10u: goto label_4b6f10;
        case 0x4b6f14u: goto label_4b6f14;
        case 0x4b6f18u: goto label_4b6f18;
        case 0x4b6f1cu: goto label_4b6f1c;
        case 0x4b6f20u: goto label_4b6f20;
        case 0x4b6f24u: goto label_4b6f24;
        case 0x4b6f28u: goto label_4b6f28;
        case 0x4b6f2cu: goto label_4b6f2c;
        case 0x4b6f30u: goto label_4b6f30;
        case 0x4b6f34u: goto label_4b6f34;
        case 0x4b6f38u: goto label_4b6f38;
        case 0x4b6f3cu: goto label_4b6f3c;
        case 0x4b6f40u: goto label_4b6f40;
        case 0x4b6f44u: goto label_4b6f44;
        case 0x4b6f48u: goto label_4b6f48;
        case 0x4b6f4cu: goto label_4b6f4c;
        case 0x4b6f50u: goto label_4b6f50;
        case 0x4b6f54u: goto label_4b6f54;
        case 0x4b6f58u: goto label_4b6f58;
        case 0x4b6f5cu: goto label_4b6f5c;
        case 0x4b6f60u: goto label_4b6f60;
        case 0x4b6f64u: goto label_4b6f64;
        case 0x4b6f68u: goto label_4b6f68;
        case 0x4b6f6cu: goto label_4b6f6c;
        case 0x4b6f70u: goto label_4b6f70;
        case 0x4b6f74u: goto label_4b6f74;
        case 0x4b6f78u: goto label_4b6f78;
        case 0x4b6f7cu: goto label_4b6f7c;
        case 0x4b6f80u: goto label_4b6f80;
        case 0x4b6f84u: goto label_4b6f84;
        case 0x4b6f88u: goto label_4b6f88;
        case 0x4b6f8cu: goto label_4b6f8c;
        case 0x4b6f90u: goto label_4b6f90;
        case 0x4b6f94u: goto label_4b6f94;
        case 0x4b6f98u: goto label_4b6f98;
        case 0x4b6f9cu: goto label_4b6f9c;
        case 0x4b6fa0u: goto label_4b6fa0;
        case 0x4b6fa4u: goto label_4b6fa4;
        case 0x4b6fa8u: goto label_4b6fa8;
        case 0x4b6facu: goto label_4b6fac;
        case 0x4b6fb0u: goto label_4b6fb0;
        case 0x4b6fb4u: goto label_4b6fb4;
        case 0x4b6fb8u: goto label_4b6fb8;
        case 0x4b6fbcu: goto label_4b6fbc;
        case 0x4b6fc0u: goto label_4b6fc0;
        case 0x4b6fc4u: goto label_4b6fc4;
        case 0x4b6fc8u: goto label_4b6fc8;
        case 0x4b6fccu: goto label_4b6fcc;
        case 0x4b6fd0u: goto label_4b6fd0;
        case 0x4b6fd4u: goto label_4b6fd4;
        case 0x4b6fd8u: goto label_4b6fd8;
        case 0x4b6fdcu: goto label_4b6fdc;
        case 0x4b6fe0u: goto label_4b6fe0;
        case 0x4b6fe4u: goto label_4b6fe4;
        case 0x4b6fe8u: goto label_4b6fe8;
        case 0x4b6fecu: goto label_4b6fec;
        case 0x4b6ff0u: goto label_4b6ff0;
        case 0x4b6ff4u: goto label_4b6ff4;
        case 0x4b6ff8u: goto label_4b6ff8;
        case 0x4b6ffcu: goto label_4b6ffc;
        case 0x4b7000u: goto label_4b7000;
        case 0x4b7004u: goto label_4b7004;
        case 0x4b7008u: goto label_4b7008;
        case 0x4b700cu: goto label_4b700c;
        case 0x4b7010u: goto label_4b7010;
        case 0x4b7014u: goto label_4b7014;
        case 0x4b7018u: goto label_4b7018;
        case 0x4b701cu: goto label_4b701c;
        case 0x4b7020u: goto label_4b7020;
        case 0x4b7024u: goto label_4b7024;
        case 0x4b7028u: goto label_4b7028;
        case 0x4b702cu: goto label_4b702c;
        case 0x4b7030u: goto label_4b7030;
        case 0x4b7034u: goto label_4b7034;
        case 0x4b7038u: goto label_4b7038;
        case 0x4b703cu: goto label_4b703c;
        case 0x4b7040u: goto label_4b7040;
        case 0x4b7044u: goto label_4b7044;
        case 0x4b7048u: goto label_4b7048;
        case 0x4b704cu: goto label_4b704c;
        case 0x4b7050u: goto label_4b7050;
        case 0x4b7054u: goto label_4b7054;
        case 0x4b7058u: goto label_4b7058;
        case 0x4b705cu: goto label_4b705c;
        case 0x4b7060u: goto label_4b7060;
        case 0x4b7064u: goto label_4b7064;
        case 0x4b7068u: goto label_4b7068;
        case 0x4b706cu: goto label_4b706c;
        case 0x4b7070u: goto label_4b7070;
        case 0x4b7074u: goto label_4b7074;
        default: break;
    }

    ctx->pc = 0x4b6f10u;

label_4b6f10:
    // 0x4b6f10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b6f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4b6f14:
    // 0x4b6f14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4b6f14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b6f18:
    // 0x4b6f18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b6f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4b6f1c:
    // 0x4b6f1c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b6f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4b6f20:
    // 0x4b6f20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b6f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b6f24:
    // 0x4b6f24: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b6f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_4b6f28:
    // 0x4b6f28: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x4b6f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_4b6f2c:
    // 0x4b6f2c: 0x441001e  bgez        $v0, . + 4 + (0x1E << 2)
label_4b6f30:
    if (ctx->pc == 0x4B6F30u) {
        ctx->pc = 0x4B6F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6F2Cu;
        // 0x4b6f30: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B6F34u;
        goto label_4b6f34;
    }
    ctx->pc = 0x4B6F2Cu;
    {
        const bool branch_taken_0x4b6f2c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4B6F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6F2Cu;
        // 0x4b6f30: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6f2c) {
            ctx->pc = 0x4B6FA8u;
            goto label_4b6fa8;
        }
    }
    ctx->pc = 0x4B6F34u;
label_4b6f34:
    // 0x4b6f34: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x4b6f34u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_4b6f38:
    // 0x4b6f38: 0x24020072  addiu       $v0, $zero, 0x72
    ctx->pc = 0x4b6f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_4b6f3c:
    // 0x4b6f3c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_4b6f40:
    if (ctx->pc == 0x4B6F40u) {
        ctx->pc = 0x4B6F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6F3Cu;
        // 0x4b6f40: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B6F44u;
        goto label_4b6f44;
    }
    ctx->pc = 0x4B6F3Cu;
    {
        const bool branch_taken_0x4b6f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B6F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6F3Cu;
        // 0x4b6f40: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6f3c) {
            ctx->pc = 0x4B6F74u;
            goto label_4b6f74;
        }
    }
    ctx->pc = 0x4B6F44u;
label_4b6f44:
    // 0x4b6f44: 0x28620073  slti        $v0, $v1, 0x73
    ctx->pc = 0x4b6f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)115) ? 1 : 0);
label_4b6f48:
    // 0x4b6f48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4b6f4c:
    if (ctx->pc == 0x4B6F4Cu) {
        ctx->pc = 0x4B6F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6F48u;
        // 0x4b6f4c: 0x24020061  addiu       $v0, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B6F50u;
        goto label_4b6f50;
    }
    ctx->pc = 0x4B6F48u;
    {
        const bool branch_taken_0x4b6f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6F48u;
        // 0x4b6f4c: 0x24020061  addiu       $v0, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6f48) {
            ctx->pc = 0x4B6F60u;
            goto label_4b6f60;
        }
    }
    ctx->pc = 0x4B6F50u;
label_4b6f50:
    // 0x4b6f50: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_4b6f54:
    if (ctx->pc == 0x4B6F54u) {
        ctx->pc = 0x4B6F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6F50u;
        // 0x4b6f54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B6F58u;
        goto label_4b6f58;
    }
    ctx->pc = 0x4B6F50u;
    {
        const bool branch_taken_0x4b6f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B6F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6F50u;
        // 0x4b6f54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6f50) {
            ctx->pc = 0x4B6F8Cu;
            goto label_4b6f8c;
        }
    }
    ctx->pc = 0x4B6F58u;
label_4b6f58:
    // 0x4b6f58: 0x1000000f  b           . + 4 + (0xF << 2)
label_4b6f5c:
    if (ctx->pc == 0x4B6F5Cu) {
        ctx->pc = 0x4B6F60u;
        goto label_4b6f60;
    }
    ctx->pc = 0x4B6F58u;
    {
        const bool branch_taken_0x4b6f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b6f58) {
            ctx->pc = 0x4B6F98u;
            goto label_4b6f98;
        }
    }
    ctx->pc = 0x4B6F60u;
label_4b6f60:
    // 0x4b6f60: 0x24020077  addiu       $v0, $zero, 0x77
    ctx->pc = 0x4b6f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_4b6f64:
    // 0x4b6f64: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_4b6f68:
    if (ctx->pc == 0x4B6F68u) {
        ctx->pc = 0x4B6F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6F64u;
        // 0x4b6f68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B6F6Cu;
        goto label_4b6f6c;
    }
    ctx->pc = 0x4B6F64u;
    {
        const bool branch_taken_0x4b6f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B6F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6F64u;
        // 0x4b6f68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6f64) {
            ctx->pc = 0x4B6F80u;
            goto label_4b6f80;
        }
    }
    ctx->pc = 0x4B6F6Cu;
label_4b6f6c:
    // 0x4b6f6c: 0x1000000a  b           . + 4 + (0xA << 2)
label_4b6f70:
    if (ctx->pc == 0x4B6F70u) {
        ctx->pc = 0x4B6F74u;
        goto label_4b6f74;
    }
    ctx->pc = 0x4B6F6Cu;
    {
        const bool branch_taken_0x4b6f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b6f6c) {
            ctx->pc = 0x4B6F98u;
            goto label_4b6f98;
        }
    }
    ctx->pc = 0x4B6F74u;
label_4b6f74:
    // 0x4b6f74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b6f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b6f78:
    // 0x4b6f78: 0x1000000d  b           . + 4 + (0xD << 2)
label_4b6f7c:
    if (ctx->pc == 0x4B6F7Cu) {
        ctx->pc = 0x4B6F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6F78u;
        // 0x4b6f7c: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B6F80u;
        goto label_4b6f80;
    }
    ctx->pc = 0x4B6F78u;
    {
        const bool branch_taken_0x4b6f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6F78u;
        // 0x4b6f7c: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6f78) {
            ctx->pc = 0x4B6FB0u;
            goto label_4b6fb0;
        }
    }
    ctx->pc = 0x4B6F80u;
label_4b6f80:
    // 0x4b6f80: 0x24080600  addiu       $t0, $zero, 0x600
    ctx->pc = 0x4b6f80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
label_4b6f84:
    // 0x4b6f84: 0x1000000a  b           . + 4 + (0xA << 2)
label_4b6f88:
    if (ctx->pc == 0x4B6F88u) {
        ctx->pc = 0x4B6F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6F84u;
        // 0x4b6f88: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B6F8Cu;
        goto label_4b6f8c;
    }
    ctx->pc = 0x4B6F84u;
    {
        const bool branch_taken_0x4b6f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6F84u;
        // 0x4b6f88: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6f84) {
            ctx->pc = 0x4B6FB0u;
            goto label_4b6fb0;
        }
    }
    ctx->pc = 0x4B6F8Cu;
label_4b6f8c:
    // 0x4b6f8c: 0x24080208  addiu       $t0, $zero, 0x208
    ctx->pc = 0x4b6f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
label_4b6f90:
    // 0x4b6f90: 0x10000007  b           . + 4 + (0x7 << 2)
label_4b6f94:
    if (ctx->pc == 0x4B6F94u) {
        ctx->pc = 0x4B6F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6F90u;
        // 0x4b6f94: 0x24111004  addiu       $s1, $zero, 0x1004 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B6F98u;
        goto label_4b6f98;
    }
    ctx->pc = 0x4B6F90u;
    {
        const bool branch_taken_0x4b6f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6F90u;
        // 0x4b6f94: 0x24111004  addiu       $s1, $zero, 0x1004 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6f90) {
            ctx->pc = 0x4B6FB0u;
            goto label_4b6fb0;
        }
    }
    ctx->pc = 0x4B6F98u;
label_4b6f98:
    // 0x4b6f98: 0xc136270  jal         func_4D89C0
label_4b6f9c:
    if (ctx->pc == 0x4B6F9Cu) {
        ctx->pc = 0x4B6FA0u;
        goto label_4b6fa0;
    }
    ctx->pc = 0x4B6F98u;
    SET_GPR_U32(ctx, 31, 0x4B6FA0u);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B6F98u, 0x4B6FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6FA0u;
label_4b6fa0:
    // 0x4b6fa0: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x4b6fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_4b6fa4:
    // 0x4b6fa4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4b6fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_4b6fa8:
    // 0x4b6fa8: 0x1000002e  b           . + 4 + (0x2E << 2)
label_4b6fac:
    if (ctx->pc == 0x4B6FACu) {
        ctx->pc = 0x4B6FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6FA8u;
        // 0x4b6fac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B6FB0u;
        goto label_4b6fb0;
    }
    ctx->pc = 0x4B6FA8u;
    {
        const bool branch_taken_0x4b6fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6FA8u;
        // 0x4b6fac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6fa8) {
            ctx->pc = 0x4B7064u;
            goto label_4b7064;
        }
    }
    ctx->pc = 0x4B6FB0u;
label_4b6fb0:
    // 0x4b6fb0: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x4b6fb0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_4b6fb4:
    // 0x4b6fb4: 0x2407002b  addiu       $a3, $zero, 0x2B
    ctx->pc = 0x4b6fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_4b6fb8:
    // 0x4b6fb8: 0x50670008  beql        $v1, $a3, . + 4 + (0x8 << 2)
label_4b6fbc:
    if (ctx->pc == 0x4B6FBCu) {
        ctx->pc = 0x4B6FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6FB8u;
        // 0x4b6fbc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B6FC0u;
        goto label_4b6fc0;
    }
    ctx->pc = 0x4B6FB8u;
    {
        const bool branch_taken_0x4b6fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x4b6fb8) {
            ctx->pc = 0x4B6FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B6FB8u;
            // 0x4b6fbc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B6FDCu;
            goto label_4b6fdc;
        }
    }
    ctx->pc = 0x4B6FC0u;
label_4b6fc0:
    // 0x4b6fc0: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x4b6fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_4b6fc4:
    // 0x4b6fc4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_4b6fc8:
    if (ctx->pc == 0x4B6FC8u) {
        ctx->pc = 0x4B6FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6FC4u;
        // 0x4b6fc8: 0xa82825  or          $a1, $a1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B6FCCu;
        goto label_4b6fcc;
    }
    ctx->pc = 0x4B6FC4u;
    {
        const bool branch_taken_0x4b6fc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B6FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6FC4u;
        // 0x4b6fc8: 0xa82825  or          $a1, $a1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6fc4) {
            ctx->pc = 0x4B6FE4u;
            goto label_4b6fe4;
        }
    }
    ctx->pc = 0x4B6FCCu;
label_4b6fcc:
    // 0x4b6fcc: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x4b6fccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_4b6fd0:
    // 0x4b6fd0: 0x14470004  bne         $v0, $a3, . + 4 + (0x4 << 2)
label_4b6fd4:
    if (ctx->pc == 0x4B6FD4u) {
        ctx->pc = 0x4B6FD8u;
        goto label_4b6fd8;
    }
    ctx->pc = 0x4B6FD0u;
    {
        const bool branch_taken_0x4b6fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x4b6fd0) {
            ctx->pc = 0x4B6FE4u;
            goto label_4b6fe4;
        }
    }
    ctx->pc = 0x4B6FD8u;
label_4b6fd8:
    // 0x4b6fd8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4b6fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b6fdc:
    // 0x4b6fdc: 0x32311000  andi        $s1, $s1, 0x1000
    ctx->pc = 0x4b6fdcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4096);
label_4b6fe0:
    // 0x4b6fe0: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x4b6fe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
label_4b6fe4:
    // 0x4b6fe4: 0xc10f5d8  jal         func_43D760
label_4b6fe8:
    if (ctx->pc == 0x4B6FE8u) {
        ctx->pc = 0x4B6FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6FE4u;
        // 0x4b6fe8: 0x240601b6  addiu       $a2, $zero, 0x1B6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 438));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B6FECu;
        goto label_4b6fec;
    }
    ctx->pc = 0x4B6FE4u;
    SET_GPR_U32(ctx, 31, 0x4B6FECu);
    ctx->pc = 0x4B6FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6FE4u;
    // 0x4b6fe8: 0x240601b6  addiu       $a2, $zero, 0x1B6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 438));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D760u, 0x4B6FE4u, 0x4B6FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6FECu;
label_4b6fec:
    // 0x4b6fec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b6fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b6ff0:
    // 0x4b6ff0: 0x480001c  bltz        $a0, . + 4 + (0x1C << 2)
label_4b6ff4:
    if (ctx->pc == 0x4B6FF4u) {
        ctx->pc = 0x4B6FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6FF0u;
        // 0x4b6ff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B6FF8u;
        goto label_4b6ff8;
    }
    ctx->pc = 0x4B6FF0u;
    {
        const bool branch_taken_0x4b6ff0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x4B6FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6FF0u;
        // 0x4b6ff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6ff0) {
            ctx->pc = 0x4B7064u;
            goto label_4b7064;
        }
    }
    ctx->pc = 0x4B6FF8u;
label_4b6ff8:
    // 0x4b6ff8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4b6ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4b6ffc:
    // 0x4b6ffc: 0x2403eff3  addiu       $v1, $zero, -0x100D
    ctx->pc = 0x4b6ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963187));
label_4b7000:
    // 0x4b7000: 0xae040038  sw          $a0, 0x38($s0)
    ctx->pc = 0x4b7000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
label_4b7004:
    // 0x4b7004: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b7004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4b7008:
    // 0x4b7008: 0x32241000  andi        $a0, $s1, 0x1000
    ctx->pc = 0x4b7008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4096);
label_4b700c:
    // 0x4b700c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b700cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_4b7010:
    // 0x4b7010: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_4b7014:
    if (ctx->pc == 0x4B7014u) {
        ctx->pc = 0x4B7014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7010u;
        // 0x4b7014: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7018u;
        goto label_4b7018;
    }
    ctx->pc = 0x4B7010u;
    {
        const bool branch_taken_0x4b7010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7010u;
        // 0x4b7014: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7010) {
            ctx->pc = 0x4B7058u;
            goto label_4b7058;
        }
    }
    ctx->pc = 0x4B7018u;
label_4b7018:
    // 0x4b7018: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x4b7018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4b701c:
    // 0x4b701c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b701cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b7020:
    // 0x4b7020: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b7020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b7024:
    // 0x4b7024: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4b7024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b7028:
    // 0x4b7028: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x4b7028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_4b702c:
    // 0x4b702c: 0x40f809  jalr        $v0
label_4b7030:
    if (ctx->pc == 0x4B7030u) {
        ctx->pc = 0x4B7030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B702Cu;
        // 0x4b7030: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7034u;
        goto label_4b7034;
    }
    ctx->pc = 0x4B702Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B7034u);
        ctx->pc = 0x4B7030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B702Cu;
        // 0x4b7030: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B702Cu, 0x4B7034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B7034u;
label_4b7034:
    // 0x4b7034: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4b7034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b7038:
    // 0x4b7038: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_4b703c:
    if (ctx->pc == 0x4B703Cu) {
        ctx->pc = 0x4B7040u;
        goto label_4b7040;
    }
    ctx->pc = 0x4B7038u;
    {
        const bool branch_taken_0x4b7038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4b7038) {
            ctx->pc = 0x4B7058u;
            goto label_4b7058;
        }
    }
    ctx->pc = 0x4B7040u;
label_4b7040:
    // 0x4b7040: 0xc136270  jal         func_4D89C0
label_4b7044:
    if (ctx->pc == 0x4B7044u) {
        ctx->pc = 0x4B7048u;
        goto label_4b7048;
    }
    ctx->pc = 0x4B7040u;
    SET_GPR_U32(ctx, 31, 0x4B7048u);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B7040u, 0x4B7048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7048u;
label_4b7048:
    // 0x4b7048: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4b7048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4b704c:
    // 0x4b704c: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x4b704cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_4b7050:
    // 0x4b7050: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_4b7054:
    if (ctx->pc == 0x4B7054u) {
        ctx->pc = 0x4B7054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7050u;
        // 0x4b7054: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7058u;
        goto label_4b7058;
    }
    ctx->pc = 0x4B7050u;
    {
        const bool branch_taken_0x4b7050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B7054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7050u;
        // 0x4b7054: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7050) {
            ctx->pc = 0x4B7064u;
            goto label_4b7064;
        }
    }
    ctx->pc = 0x4B7058u;
label_4b7058:
    // 0x4b7058: 0xc12c23a  jal         func_4B08E8
label_4b705c:
    if (ctx->pc == 0x4B705Cu) {
        ctx->pc = 0x4B705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7058u;
        // 0x4b705c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7060u;
        goto label_4b7060;
    }
    ctx->pc = 0x4B7058u;
    SET_GPR_U32(ctx, 31, 0x4B7060u);
    ctx->pc = 0x4B705Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7058u;
    // 0x4b705c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B08E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B08E8u, 0x4B7058u, 0x4B7060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7060u;
label_4b7060:
    // 0x4b7060: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b7060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b7064:
    // 0x4b7064: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b7064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b7068:
    // 0x4b7068: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b7068u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b706c:
    // 0x4b706c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b706cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b7070:
    // 0x4b7070: 0x3e00008  jr          $ra
label_4b7074:
    if (ctx->pc == 0x4B7074u) {
        ctx->pc = 0x4B7074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7070u;
        // 0x4b7074: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7078u;
        goto label_fallthrough_0x4b7070;
    }
    ctx->pc = 0x4B7070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B7074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7070u;
        // 0x4b7074: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B7070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4b7070:
    ctx->pc = 0x4B7078u;
}
