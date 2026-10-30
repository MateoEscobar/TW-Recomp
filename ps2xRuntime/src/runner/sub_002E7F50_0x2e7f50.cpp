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

// Function: sub_002E7F50
// Address: 0x2e7f50 - 0x2e81b8
void sub_002E7F50_0x2e7f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7F50_0x2e7f50");
#endif

    switch (ctx->pc) {
        case 0x2e7f50u: goto label_2e7f50;
        case 0x2e7f54u: goto label_2e7f54;
        case 0x2e7f58u: goto label_2e7f58;
        case 0x2e7f5cu: goto label_2e7f5c;
        case 0x2e7f60u: goto label_2e7f60;
        case 0x2e7f64u: goto label_2e7f64;
        case 0x2e7f68u: goto label_2e7f68;
        case 0x2e7f6cu: goto label_2e7f6c;
        case 0x2e7f70u: goto label_2e7f70;
        case 0x2e7f74u: goto label_2e7f74;
        case 0x2e7f78u: goto label_2e7f78;
        case 0x2e7f7cu: goto label_2e7f7c;
        case 0x2e7f80u: goto label_2e7f80;
        case 0x2e7f84u: goto label_2e7f84;
        case 0x2e7f88u: goto label_2e7f88;
        case 0x2e7f8cu: goto label_2e7f8c;
        case 0x2e7f90u: goto label_2e7f90;
        case 0x2e7f94u: goto label_2e7f94;
        case 0x2e7f98u: goto label_2e7f98;
        case 0x2e7f9cu: goto label_2e7f9c;
        case 0x2e7fa0u: goto label_2e7fa0;
        case 0x2e7fa4u: goto label_2e7fa4;
        case 0x2e7fa8u: goto label_2e7fa8;
        case 0x2e7facu: goto label_2e7fac;
        case 0x2e7fb0u: goto label_2e7fb0;
        case 0x2e7fb4u: goto label_2e7fb4;
        case 0x2e7fb8u: goto label_2e7fb8;
        case 0x2e7fbcu: goto label_2e7fbc;
        case 0x2e7fc0u: goto label_2e7fc0;
        case 0x2e7fc4u: goto label_2e7fc4;
        case 0x2e7fc8u: goto label_2e7fc8;
        case 0x2e7fccu: goto label_2e7fcc;
        case 0x2e7fd0u: goto label_2e7fd0;
        case 0x2e7fd4u: goto label_2e7fd4;
        case 0x2e7fd8u: goto label_2e7fd8;
        case 0x2e7fdcu: goto label_2e7fdc;
        case 0x2e7fe0u: goto label_2e7fe0;
        case 0x2e7fe4u: goto label_2e7fe4;
        case 0x2e7fe8u: goto label_2e7fe8;
        case 0x2e7fecu: goto label_2e7fec;
        case 0x2e7ff0u: goto label_2e7ff0;
        case 0x2e7ff4u: goto label_2e7ff4;
        case 0x2e7ff8u: goto label_2e7ff8;
        case 0x2e7ffcu: goto label_2e7ffc;
        case 0x2e8000u: goto label_2e8000;
        case 0x2e8004u: goto label_2e8004;
        case 0x2e8008u: goto label_2e8008;
        case 0x2e800cu: goto label_2e800c;
        case 0x2e8010u: goto label_2e8010;
        case 0x2e8014u: goto label_2e8014;
        case 0x2e8018u: goto label_2e8018;
        case 0x2e801cu: goto label_2e801c;
        case 0x2e8020u: goto label_2e8020;
        case 0x2e8024u: goto label_2e8024;
        case 0x2e8028u: goto label_2e8028;
        case 0x2e802cu: goto label_2e802c;
        case 0x2e8030u: goto label_2e8030;
        case 0x2e8034u: goto label_2e8034;
        case 0x2e8038u: goto label_2e8038;
        case 0x2e803cu: goto label_2e803c;
        case 0x2e8040u: goto label_2e8040;
        case 0x2e8044u: goto label_2e8044;
        case 0x2e8048u: goto label_2e8048;
        case 0x2e804cu: goto label_2e804c;
        case 0x2e8050u: goto label_2e8050;
        case 0x2e8054u: goto label_2e8054;
        case 0x2e8058u: goto label_2e8058;
        case 0x2e805cu: goto label_2e805c;
        case 0x2e8060u: goto label_2e8060;
        case 0x2e8064u: goto label_2e8064;
        case 0x2e8068u: goto label_2e8068;
        case 0x2e806cu: goto label_2e806c;
        case 0x2e8070u: goto label_2e8070;
        case 0x2e8074u: goto label_2e8074;
        case 0x2e8078u: goto label_2e8078;
        case 0x2e807cu: goto label_2e807c;
        case 0x2e8080u: goto label_2e8080;
        case 0x2e8084u: goto label_2e8084;
        case 0x2e8088u: goto label_2e8088;
        case 0x2e808cu: goto label_2e808c;
        case 0x2e8090u: goto label_2e8090;
        case 0x2e8094u: goto label_2e8094;
        case 0x2e8098u: goto label_2e8098;
        case 0x2e809cu: goto label_2e809c;
        case 0x2e80a0u: goto label_2e80a0;
        case 0x2e80a4u: goto label_2e80a4;
        case 0x2e80a8u: goto label_2e80a8;
        case 0x2e80acu: goto label_2e80ac;
        case 0x2e80b0u: goto label_2e80b0;
        case 0x2e80b4u: goto label_2e80b4;
        case 0x2e80b8u: goto label_2e80b8;
        case 0x2e80bcu: goto label_2e80bc;
        case 0x2e80c0u: goto label_2e80c0;
        case 0x2e80c4u: goto label_2e80c4;
        case 0x2e80c8u: goto label_2e80c8;
        case 0x2e80ccu: goto label_2e80cc;
        case 0x2e80d0u: goto label_2e80d0;
        case 0x2e80d4u: goto label_2e80d4;
        case 0x2e80d8u: goto label_2e80d8;
        case 0x2e80dcu: goto label_2e80dc;
        case 0x2e80e0u: goto label_2e80e0;
        case 0x2e80e4u: goto label_2e80e4;
        case 0x2e80e8u: goto label_2e80e8;
        case 0x2e80ecu: goto label_2e80ec;
        case 0x2e80f0u: goto label_2e80f0;
        case 0x2e80f4u: goto label_2e80f4;
        case 0x2e80f8u: goto label_2e80f8;
        case 0x2e80fcu: goto label_2e80fc;
        case 0x2e8100u: goto label_2e8100;
        case 0x2e8104u: goto label_2e8104;
        case 0x2e8108u: goto label_2e8108;
        case 0x2e810cu: goto label_2e810c;
        case 0x2e8110u: goto label_2e8110;
        case 0x2e8114u: goto label_2e8114;
        case 0x2e8118u: goto label_2e8118;
        case 0x2e811cu: goto label_2e811c;
        case 0x2e8120u: goto label_2e8120;
        case 0x2e8124u: goto label_2e8124;
        case 0x2e8128u: goto label_2e8128;
        case 0x2e812cu: goto label_2e812c;
        case 0x2e8130u: goto label_2e8130;
        case 0x2e8134u: goto label_2e8134;
        case 0x2e8138u: goto label_2e8138;
        case 0x2e813cu: goto label_2e813c;
        case 0x2e8140u: goto label_2e8140;
        case 0x2e8144u: goto label_2e8144;
        case 0x2e8148u: goto label_2e8148;
        case 0x2e814cu: goto label_2e814c;
        case 0x2e8150u: goto label_2e8150;
        case 0x2e8154u: goto label_2e8154;
        case 0x2e8158u: goto label_2e8158;
        case 0x2e815cu: goto label_2e815c;
        case 0x2e8160u: goto label_2e8160;
        case 0x2e8164u: goto label_2e8164;
        case 0x2e8168u: goto label_2e8168;
        case 0x2e816cu: goto label_2e816c;
        case 0x2e8170u: goto label_2e8170;
        case 0x2e8174u: goto label_2e8174;
        case 0x2e8178u: goto label_2e8178;
        case 0x2e817cu: goto label_2e817c;
        case 0x2e8180u: goto label_2e8180;
        case 0x2e8184u: goto label_2e8184;
        case 0x2e8188u: goto label_2e8188;
        case 0x2e818cu: goto label_2e818c;
        case 0x2e8190u: goto label_2e8190;
        case 0x2e8194u: goto label_2e8194;
        case 0x2e8198u: goto label_2e8198;
        case 0x2e819cu: goto label_2e819c;
        case 0x2e81a0u: goto label_2e81a0;
        case 0x2e81a4u: goto label_2e81a4;
        case 0x2e81a8u: goto label_2e81a8;
        case 0x2e81acu: goto label_2e81ac;
        case 0x2e81b0u: goto label_2e81b0;
        case 0x2e81b4u: goto label_2e81b4;
        default: break;
    }

    ctx->pc = 0x2e7f50u;

label_2e7f50:
    // 0x2e7f50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e7f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2e7f54:
    // 0x2e7f54: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2e7f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2e7f58:
    // 0x2e7f58: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2e7f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2e7f5c:
    // 0x2e7f5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e7f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2e7f60:
    // 0x2e7f60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e7f60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e7f64:
    // 0x2e7f64: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2e7f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2e7f68:
    // 0x2e7f68: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2e7f68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7f6c:
    // 0x2e7f6c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2e7f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2e7f70:
    // 0x2e7f70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e7f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e7f74:
    // 0x2e7f74: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2e7f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2e7f78:
    // 0x2e7f78: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e7f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e7f7c:
    // 0x2e7f7c: 0x8c730048  lw          $s3, 0x48($v1)
    ctx->pc = 0x2e7f7cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2e7f80:
    // 0x2e7f80: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2e7f80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2e7f84:
    // 0x2e7f84: 0x1c400083  bgtz        $v0, . + 4 + (0x83 << 2)
label_2e7f88:
    if (ctx->pc == 0x2E7F88u) {
        ctx->pc = 0x2E7F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F84u;
        // 0x2e7f88: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7F8Cu;
        goto label_2e7f8c;
    }
    ctx->pc = 0x2E7F84u;
    {
        const bool branch_taken_0x2e7f84 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2E7F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F84u;
        // 0x2e7f88: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f84) {
            ctx->pc = 0x2E8194u;
            goto label_2e8194;
        }
    }
    ctx->pc = 0x2E7F8Cu;
label_2e7f8c:
    // 0x2e7f8c: 0xc089f86  jal         func_227E18
label_2e7f90:
    if (ctx->pc == 0x2E7F90u) {
        ctx->pc = 0x2E7F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F8Cu;
        // 0x2e7f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7F94u;
        goto label_2e7f94;
    }
    ctx->pc = 0x2E7F8Cu;
    SET_GPR_U32(ctx, 31, 0x2E7F94u);
    ctx->pc = 0x2E7F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7F8Cu;
    // 0x2e7f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x2E7F8Cu, 0x2E7F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7F94u;
label_2e7f94:
    // 0x2e7f94: 0x10520080  beq         $v0, $s2, . + 4 + (0x80 << 2)
label_2e7f98:
    if (ctx->pc == 0x2E7F98u) {
        ctx->pc = 0x2E7F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F94u;
        // 0x2e7f98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7F9Cu;
        goto label_2e7f9c;
    }
    ctx->pc = 0x2E7F94u;
    {
        const bool branch_taken_0x2e7f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2E7F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F94u;
        // 0x2e7f98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f94) {
            ctx->pc = 0x2E8198u;
            goto label_2e8198;
        }
    }
    ctx->pc = 0x2E7F9Cu;
label_2e7f9c:
    // 0x2e7f9c: 0x92220021  lbu         $v0, 0x21($s1)
    ctx->pc = 0x2e7f9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
label_2e7fa0:
    // 0x2e7fa0: 0x1052007d  beq         $v0, $s2, . + 4 + (0x7D << 2)
label_2e7fa4:
    if (ctx->pc == 0x2E7FA4u) {
        ctx->pc = 0x2E7FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FA0u;
        // 0x2e7fa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7FA8u;
        goto label_2e7fa8;
    }
    ctx->pc = 0x2E7FA0u;
    {
        const bool branch_taken_0x2e7fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2E7FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FA0u;
        // 0x2e7fa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7fa0) {
            ctx->pc = 0x2E8198u;
            goto label_2e8198;
        }
    }
    ctx->pc = 0x2E7FA8u;
label_2e7fa8:
    // 0x2e7fa8: 0x9222001c  lbu         $v0, 0x1C($s1)
    ctx->pc = 0x2e7fa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
label_2e7fac:
    // 0x2e7fac: 0x14520038  bne         $v0, $s2, . + 4 + (0x38 << 2)
label_2e7fb0:
    if (ctx->pc == 0x2E7FB0u) {
        ctx->pc = 0x2E7FB4u;
        goto label_2e7fb4;
    }
    ctx->pc = 0x2E7FACu;
    {
        const bool branch_taken_0x2e7fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2e7fac) {
            ctx->pc = 0x2E8090u;
            goto label_2e8090;
        }
    }
    ctx->pc = 0x2E7FB4u;
label_2e7fb4:
    // 0x2e7fb4: 0x92220020  lbu         $v0, 0x20($s1)
    ctx->pc = 0x2e7fb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
label_2e7fb8:
    // 0x2e7fb8: 0x14400077  bnez        $v0, . + 4 + (0x77 << 2)
label_2e7fbc:
    if (ctx->pc == 0x2E7FBCu) {
        ctx->pc = 0x2E7FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FB8u;
        // 0x2e7fbc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7FC0u;
        goto label_2e7fc0;
    }
    ctx->pc = 0x2E7FB8u;
    {
        const bool branch_taken_0x2e7fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FB8u;
        // 0x2e7fbc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7fb8) {
            ctx->pc = 0x2E8198u;
            goto label_2e8198;
        }
    }
    ctx->pc = 0x2E7FC0u;
label_2e7fc0:
    // 0x2e7fc0: 0xc088ef0  jal         func_223BC0
label_2e7fc4:
    if (ctx->pc == 0x2E7FC4u) {
        ctx->pc = 0x2E7FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FC0u;
        // 0x2e7fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7FC8u;
        goto label_2e7fc8;
    }
    ctx->pc = 0x2E7FC0u;
    SET_GPR_U32(ctx, 31, 0x2E7FC8u);
    ctx->pc = 0x2E7FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7FC0u;
    // 0x2e7fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x2E7FC0u, 0x2E7FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7FC8u;
label_2e7fc8:
    // 0x2e7fc8: 0x1452000a  bne         $v0, $s2, . + 4 + (0xA << 2)
label_2e7fcc:
    if (ctx->pc == 0x2E7FCCu) {
        ctx->pc = 0x2E7FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FC8u;
        // 0x2e7fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7FD0u;
        goto label_2e7fd0;
    }
    ctx->pc = 0x2E7FC8u;
    {
        const bool branch_taken_0x2e7fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2E7FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FC8u;
        // 0x2e7fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7fc8) {
            ctx->pc = 0x2E7FF4u;
            goto label_2e7ff4;
        }
    }
    ctx->pc = 0x2E7FD0u;
label_2e7fd0:
    // 0x2e7fd0: 0xc08be36  jal         func_22F8D8
label_2e7fd4:
    if (ctx->pc == 0x2E7FD4u) {
        ctx->pc = 0x2E7FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FD0u;
        // 0x2e7fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7FD8u;
        goto label_2e7fd8;
    }
    ctx->pc = 0x2E7FD0u;
    SET_GPR_U32(ctx, 31, 0x2E7FD8u);
    ctx->pc = 0x2E7FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7FD0u;
    // 0x2e7fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F8D8u, 0x2E7FD0u, 0x2E7FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7FD8u;
label_2e7fd8:
    // 0x2e7fd8: 0xde0300e0  ld          $v1, 0xE0($s0)
    ctx->pc = 0x2e7fd8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_2e7fdc:
    // 0x2e7fdc: 0x3c04f7ff  lui         $a0, 0xF7FF
    ctx->pc = 0x2e7fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63487 << 16));
label_2e7fe0:
    // 0x2e7fe0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2e7fe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2e7fe4:
    // 0x2e7fe4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e7fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7fe8:
    // 0x2e7fe8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2e7fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2e7fec:
    // 0x2e7fec: 0x1000006a  b           . + 4 + (0x6A << 2)
label_2e7ff0:
    if (ctx->pc == 0x2E7FF0u) {
        ctx->pc = 0x2E7FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FECu;
        // 0x2e7ff0: 0xfe0300e0  sd          $v1, 0xE0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7FF4u;
        goto label_2e7ff4;
    }
    ctx->pc = 0x2E7FECu;
    {
        const bool branch_taken_0x2e7fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FECu;
        // 0x2e7ff0: 0xfe0300e0  sd          $v1, 0xE0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7fec) {
            ctx->pc = 0x2E8198u;
            goto label_2e8198;
        }
    }
    ctx->pc = 0x2E7FF4u;
label_2e7ff4:
    // 0x2e7ff4: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2e7ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
label_2e7ff8:
    // 0x2e7ff8: 0xc089998  jal         func_226660
label_2e7ffc:
    if (ctx->pc == 0x2E7FFCu) {
        ctx->pc = 0x2E7FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FF8u;
        // 0x2e7ffc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8000u;
        goto label_2e8000;
    }
    ctx->pc = 0x2E7FF8u;
    SET_GPR_U32(ctx, 31, 0x2E8000u);
    ctx->pc = 0x2E7FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7FF8u;
    // 0x2e7ffc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2E7FF8u, 0x2E8000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8000u;
label_2e8000:
    // 0x2e8000: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
label_2e8004:
    if (ctx->pc == 0x2E8004u) {
        ctx->pc = 0x2E8004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8000u;
        // 0x2e8004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8008u;
        goto label_2e8008;
    }
    ctx->pc = 0x2E8000u;
    {
        const bool branch_taken_0x2e8000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8000u;
        // 0x2e8004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8000) {
            ctx->pc = 0x2E8198u;
            goto label_2e8198;
        }
    }
    ctx->pc = 0x2E8008u;
label_2e8008:
    // 0x2e8008: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x2e8008u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_2e800c:
    // 0x2e800c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2e800cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2e8010:
    // 0x2e8010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e8014:
    // 0x2e8014: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e8014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2e8018:
    // 0x2e8018: 0xc0a47b4  jal         func_291ED0
label_2e801c:
    if (ctx->pc == 0x2E801Cu) {
        ctx->pc = 0x2E801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8018u;
        // 0x2e801c: 0xfe0200e0  sd          $v0, 0xE0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8020u;
        goto label_2e8020;
    }
    ctx->pc = 0x2E8018u;
    SET_GPR_U32(ctx, 31, 0x2E8020u);
    ctx->pc = 0x2E801Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8018u;
    // 0x2e801c: 0xfe0200e0  sd          $v0, 0xE0($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2E8018u, 0x2E8020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8020u;
label_2e8020:
    // 0x2e8020: 0x1452000b  bne         $v0, $s2, . + 4 + (0xB << 2)
label_2e8024:
    if (ctx->pc == 0x2E8024u) {
        ctx->pc = 0x2E8024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8020u;
        // 0x2e8024: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8028u;
        goto label_2e8028;
    }
    ctx->pc = 0x2E8020u;
    {
        const bool branch_taken_0x2e8020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2E8024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8020u;
        // 0x2e8024: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8020) {
            ctx->pc = 0x2E8050u;
            goto label_2e8050;
        }
    }
    ctx->pc = 0x2E8028u;
label_2e8028:
    // 0x2e8028: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2e8028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2e802c:
    // 0x2e802c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e802cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e8030:
    // 0x2e8030: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2e8030u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2e8034:
    // 0x2e8034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e8038:
    // 0x2e8038: 0x24050096  addiu       $a1, $zero, 0x96
    ctx->pc = 0x2e8038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_2e803c:
    // 0x2e803c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e803cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8040:
    // 0x2e8040: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e8040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8044:
    // 0x2e8044: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e8044u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8048:
    // 0x2e8048: 0xc088178  jal         func_2205E0
label_2e804c:
    if (ctx->pc == 0x2E804Cu) {
        ctx->pc = 0x2E804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8048u;
        // 0x2e804c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8050u;
        goto label_2e8050;
    }
    ctx->pc = 0x2E8048u;
    SET_GPR_U32(ctx, 31, 0x2E8050u);
    ctx->pc = 0x2E804Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8048u;
    // 0x2e804c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2E8048u, 0x2E8050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8050u;
label_2e8050:
    // 0x2e8050: 0xc0a367c  jal         func_28D9F0
label_2e8054:
    if (ctx->pc == 0x2E8054u) {
        ctx->pc = 0x2E8054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8050u;
        // 0x2e8054: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8058u;
        goto label_2e8058;
    }
    ctx->pc = 0x2E8050u;
    SET_GPR_U32(ctx, 31, 0x2E8058u);
    ctx->pc = 0x2E8054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8050u;
    // 0x2e8054: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E8050u, 0x2E8058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8058u;
label_2e8058:
    // 0x2e8058: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2e805c:
    if (ctx->pc == 0x2E805Cu) {
        ctx->pc = 0x2E805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8058u;
        // 0x2e805c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8060u;
        goto label_2e8060;
    }
    ctx->pc = 0x2E8058u;
    {
        const bool branch_taken_0x2e8058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8058u;
        // 0x2e805c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8058) {
            ctx->pc = 0x2E8088u;
            goto label_2e8088;
        }
    }
    ctx->pc = 0x2E8060u;
label_2e8060:
    // 0x2e8060: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2e8060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2e8064:
    // 0x2e8064: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e8064u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2e8068:
    // 0x2e8068: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e8068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e806c:
    // 0x2e806c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e806cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e8070:
    // 0x2e8070: 0x24060283  addiu       $a2, $zero, 0x283
    ctx->pc = 0x2e8070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 643));
label_2e8074:
    // 0x2e8074: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e8074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8078:
    // 0x2e8078: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2e8078u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2e807c:
    // 0x2e807c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e807cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8080:
    // 0x2e8080: 0xc0be968  jal         func_2FA5A0
label_2e8084:
    if (ctx->pc == 0x2E8084u) {
        ctx->pc = 0x2E8084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8080u;
        // 0x2e8084: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8088u;
        goto label_2e8088;
    }
    ctx->pc = 0x2E8080u;
    SET_GPR_U32(ctx, 31, 0x2E8088u);
    ctx->pc = 0x2E8084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8080u;
    // 0x2e8084: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2E8080u, 0x2E8088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8088u;
label_2e8088:
    // 0x2e8088: 0x10000042  b           . + 4 + (0x42 << 2)
label_2e808c:
    if (ctx->pc == 0x2E808Cu) {
        ctx->pc = 0x2E808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8088u;
        // 0x2e808c: 0xa2320020  sb          $s2, 0x20($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8090u;
        goto label_2e8090;
    }
    ctx->pc = 0x2E8088u;
    {
        const bool branch_taken_0x2e8088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8088u;
        // 0x2e808c: 0xa2320020  sb          $s2, 0x20($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8088) {
            ctx->pc = 0x2E8194u;
            goto label_2e8194;
        }
    }
    ctx->pc = 0x2E8090u;
label_2e8090:
    // 0x2e8090: 0xc088b90  jal         func_222E40
label_2e8094:
    if (ctx->pc == 0x2E8094u) {
        ctx->pc = 0x2E8094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8090u;
        // 0x2e8094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8098u;
        goto label_2e8098;
    }
    ctx->pc = 0x2E8090u;
    SET_GPR_U32(ctx, 31, 0x2E8098u);
    ctx->pc = 0x2E8094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8090u;
    // 0x2e8094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E40u, 0x2E8090u, 0x2E8098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8098u;
label_2e8098:
    // 0x2e8098: 0x96230018  lhu         $v1, 0x18($s1)
    ctx->pc = 0x2e8098u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
label_2e809c:
    // 0x2e809c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2e809cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2e80a0:
    // 0x2e80a0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2e80a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2e80a4:
    // 0x2e80a4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2e80a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_2e80a8:
    // 0x2e80a8: 0x93202b  sltu        $a0, $a0, $s3
    ctx->pc = 0x2e80a8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_2e80ac:
    // 0x2e80ac: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_2e80b0:
    if (ctx->pc == 0x2E80B0u) {
        ctx->pc = 0x2E80B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80ACu;
        // 0x2e80b0: 0x31c03  sra         $v1, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E80B4u;
        goto label_2e80b4;
    }
    ctx->pc = 0x2E80ACu;
    {
        const bool branch_taken_0x2e80ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E80B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80ACu;
        // 0x2e80b0: 0x31c03  sra         $v1, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e80ac) {
            ctx->pc = 0x2E80C4u;
            goto label_2e80c4;
        }
    }
    ctx->pc = 0x2E80B4u;
label_2e80b4:
    // 0x2e80b4: 0x8622001a  lh          $v0, 0x1A($s1)
    ctx->pc = 0x2e80b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
label_2e80b8:
    // 0x2e80b8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2e80b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2e80bc:
    // 0x2e80bc: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_2e80c0:
    if (ctx->pc == 0x2E80C0u) {
        ctx->pc = 0x2E80C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80BCu;
        // 0x2e80c0: 0x92220020  lbu         $v0, 0x20($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E80C4u;
        goto label_2e80c4;
    }
    ctx->pc = 0x2E80BCu;
    {
        const bool branch_taken_0x2e80bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e80bc) {
            ctx->pc = 0x2E80C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E80BCu;
            // 0x2e80c0: 0x92220020  lbu         $v0, 0x20($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8108u;
            goto label_2e8108;
        }
    }
    ctx->pc = 0x2E80C4u;
label_2e80c4:
    // 0x2e80c4: 0xa232001c  sb          $s2, 0x1C($s1)
    ctx->pc = 0x2e80c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 18));
label_2e80c8:
    // 0x2e80c8: 0xa2200020  sb          $zero, 0x20($s1)
    ctx->pc = 0x2e80c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 0));
label_2e80cc:
    // 0x2e80cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e80ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e80d0:
    // 0x2e80d0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e80d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e80d4:
    // 0x2e80d4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e80d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e80d8:
    // 0x2e80d8: 0x40f809  jalr        $v0
label_2e80dc:
    if (ctx->pc == 0x2E80DCu) {
        ctx->pc = 0x2E80DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80D8u;
        // 0x2e80dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E80E0u;
        goto label_2e80e0;
    }
    ctx->pc = 0x2E80D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E80E0u);
        ctx->pc = 0x2E80DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80D8u;
        // 0x2e80dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E80D8u, 0x2E80E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E80E0u;
label_2e80e0:
    // 0x2e80e0: 0x9225001d  lbu         $a1, 0x1D($s1)
    ctx->pc = 0x2e80e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 29)));
label_2e80e4:
    // 0x2e80e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e80e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e80e8:
    // 0x2e80e8: 0xc08d68a  jal         func_235A28
label_2e80ec:
    if (ctx->pc == 0x2E80ECu) {
        ctx->pc = 0x2E80ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80E8u;
        // 0x2e80ec: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E80F0u;
        goto label_2e80f0;
    }
    ctx->pc = 0x2E80E8u;
    SET_GPR_U32(ctx, 31, 0x2E80F0u);
    ctx->pc = 0x2E80ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E80E8u;
    // 0x2e80ec: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x235A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A28u, 0x2E80E8u, 0x2E80F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E80F0u;
label_2e80f0:
    // 0x2e80f0: 0xde0300e0  ld          $v1, 0xE0($s0)
    ctx->pc = 0x2e80f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_2e80f4:
    // 0x2e80f4: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x2e80f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_2e80f8:
    // 0x2e80f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e80f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e80fc:
    // 0x2e80fc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e80fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2e8100:
    // 0x2e8100: 0x10000025  b           . + 4 + (0x25 << 2)
label_2e8104:
    if (ctx->pc == 0x2E8104u) {
        ctx->pc = 0x2E8104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8100u;
        // 0x2e8104: 0xfe0300e0  sd          $v1, 0xE0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8108u;
        goto label_2e8108;
    }
    ctx->pc = 0x2E8100u;
    {
        const bool branch_taken_0x2e8100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8100u;
        // 0x2e8104: 0xfe0300e0  sd          $v1, 0xE0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8100) {
            ctx->pc = 0x2E8198u;
            goto label_2e8198;
        }
    }
    ctx->pc = 0x2E8108u;
label_2e8108:
    // 0x2e8108: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_2e810c:
    if (ctx->pc == 0x2E810Cu) {
        ctx->pc = 0x2E810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8108u;
        // 0x2e810c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8110u;
        goto label_2e8110;
    }
    ctx->pc = 0x2E8108u;
    {
        const bool branch_taken_0x2e8108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8108u;
        // 0x2e810c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8108) {
            ctx->pc = 0x2E816Cu;
            goto label_2e816c;
        }
    }
    ctx->pc = 0x2E8110u;
label_2e8110:
    // 0x2e8110: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2e8110u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
label_2e8114:
    // 0x2e8114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e8118:
    // 0x2e8118: 0xc089998  jal         func_226660
label_2e811c:
    if (ctx->pc == 0x2E811Cu) {
        ctx->pc = 0x2E811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8118u;
        // 0x2e811c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8120u;
        goto label_2e8120;
    }
    ctx->pc = 0x2E8118u;
    SET_GPR_U32(ctx, 31, 0x2E8120u);
    ctx->pc = 0x2E811Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8118u;
    // 0x2e811c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2E8118u, 0x2E8120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8120u;
label_2e8120:
    // 0x2e8120: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_2e8124:
    if (ctx->pc == 0x2E8124u) {
        ctx->pc = 0x2E8124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8120u;
        // 0x2e8124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8128u;
        goto label_2e8128;
    }
    ctx->pc = 0x2E8120u;
    {
        const bool branch_taken_0x2e8120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8120u;
        // 0x2e8124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8120) {
            ctx->pc = 0x2E8198u;
            goto label_2e8198;
        }
    }
    ctx->pc = 0x2E8128u;
label_2e8128:
    // 0x2e8128: 0xc0a47b4  jal         func_291ED0
label_2e812c:
    if (ctx->pc == 0x2E812Cu) {
        ctx->pc = 0x2E812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8128u;
        // 0x2e812c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8130u;
        goto label_2e8130;
    }
    ctx->pc = 0x2E8128u;
    SET_GPR_U32(ctx, 31, 0x2E8130u);
    ctx->pc = 0x2E812Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8128u;
    // 0x2e812c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2E8128u, 0x2E8130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8130u;
label_2e8130:
    // 0x2e8130: 0x54520018  bnel        $v0, $s2, . + 4 + (0x18 << 2)
label_2e8134:
    if (ctx->pc == 0x2E8134u) {
        ctx->pc = 0x2E8134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8130u;
        // 0x2e8134: 0xa2320020  sb          $s2, 0x20($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8138u;
        goto label_2e8138;
    }
    ctx->pc = 0x2E8130u;
    {
        const bool branch_taken_0x2e8130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2e8130) {
            ctx->pc = 0x2E8134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8130u;
            // 0x2e8134: 0xa2320020  sb          $s2, 0x20($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8194u;
            goto label_2e8194;
        }
    }
    ctx->pc = 0x2E8138u;
label_2e8138:
    // 0x2e8138: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2e8138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2e813c:
    // 0x2e813c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2e813cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2e8140:
    // 0x2e8140: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e8140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e8144:
    // 0x2e8144: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2e8144u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2e8148:
    // 0x2e8148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e814c:
    // 0x2e814c: 0x24050095  addiu       $a1, $zero, 0x95
    ctx->pc = 0x2e814cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
label_2e8150:
    // 0x2e8150: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e8150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8154:
    // 0x2e8154: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e8154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8158:
    // 0x2e8158: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e8158u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e815c:
    // 0x2e815c: 0xc088178  jal         func_2205E0
label_2e8160:
    if (ctx->pc == 0x2E8160u) {
        ctx->pc = 0x2E8160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E815Cu;
        // 0x2e8160: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8164u;
        goto label_2e8164;
    }
    ctx->pc = 0x2E815Cu;
    SET_GPR_U32(ctx, 31, 0x2E8164u);
    ctx->pc = 0x2E8160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E815Cu;
    // 0x2e8160: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2E815Cu, 0x2E8164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8164u;
label_2e8164:
    // 0x2e8164: 0x1000000b  b           . + 4 + (0xB << 2)
label_2e8168:
    if (ctx->pc == 0x2E8168u) {
        ctx->pc = 0x2E8168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8164u;
        // 0x2e8168: 0xa2320020  sb          $s2, 0x20($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E816Cu;
        goto label_2e816c;
    }
    ctx->pc = 0x2E8164u;
    {
        const bool branch_taken_0x2e8164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8164u;
        // 0x2e8168: 0xa2320020  sb          $s2, 0x20($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8164) {
            ctx->pc = 0x2E8194u;
            goto label_2e8194;
        }
    }
    ctx->pc = 0x2E816Cu;
label_2e816c:
    // 0x2e816c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e816cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e8170:
    // 0x2e8170: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e8170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e8174:
    // 0x2e8174: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2e8174u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2e8178:
    // 0x2e8178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e817c:
    // 0x2e817c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2e817cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2e8180:
    // 0x2e8180: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e8180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8184:
    // 0x2e8184: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e8184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8188:
    // 0x2e8188: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e8188u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e818c:
    // 0x2e818c: 0xc088178  jal         func_2205E0
label_2e8190:
    if (ctx->pc == 0x2E8190u) {
        ctx->pc = 0x2E8190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E818Cu;
        // 0x2e8190: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8194u;
        goto label_2e8194;
    }
    ctx->pc = 0x2E818Cu;
    SET_GPR_U32(ctx, 31, 0x2E8194u);
    ctx->pc = 0x2E8190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E818Cu;
    // 0x2e8190: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2E818Cu, 0x2E8194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8194u;
label_2e8194:
    // 0x2e8194: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e8194u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8198:
    // 0x2e8198: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2e8198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e819c:
    // 0x2e819c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2e819cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e81a0:
    // 0x2e81a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e81a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e81a4:
    // 0x2e81a4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2e81a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e81a8:
    // 0x2e81a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e81a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e81ac:
    // 0x2e81ac: 0x3e00008  jr          $ra
label_2e81b0:
    if (ctx->pc == 0x2E81B0u) {
        ctx->pc = 0x2E81B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81ACu;
        // 0x2e81b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E81B4u;
        goto label_2e81b4;
    }
    ctx->pc = 0x2E81ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E81B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81ACu;
        // 0x2e81b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E81ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E81B4u;
label_2e81b4:
    // 0x2e81b4: 0x0  nop
    ctx->pc = 0x2e81b4u;
    // NOP
    ctx->pc = 0x2e81b8u;
}
