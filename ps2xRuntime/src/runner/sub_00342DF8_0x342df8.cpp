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

// Function: sub_00342DF8
// Address: 0x342df8 - 0x343040
void sub_00342DF8_0x342df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342DF8_0x342df8");
#endif

    switch (ctx->pc) {
        case 0x342df8u: goto label_342df8;
        case 0x342dfcu: goto label_342dfc;
        case 0x342e00u: goto label_342e00;
        case 0x342e04u: goto label_342e04;
        case 0x342e08u: goto label_342e08;
        case 0x342e0cu: goto label_342e0c;
        case 0x342e10u: goto label_342e10;
        case 0x342e14u: goto label_342e14;
        case 0x342e18u: goto label_342e18;
        case 0x342e1cu: goto label_342e1c;
        case 0x342e20u: goto label_342e20;
        case 0x342e24u: goto label_342e24;
        case 0x342e28u: goto label_342e28;
        case 0x342e2cu: goto label_342e2c;
        case 0x342e30u: goto label_342e30;
        case 0x342e34u: goto label_342e34;
        case 0x342e38u: goto label_342e38;
        case 0x342e3cu: goto label_342e3c;
        case 0x342e40u: goto label_342e40;
        case 0x342e44u: goto label_342e44;
        case 0x342e48u: goto label_342e48;
        case 0x342e4cu: goto label_342e4c;
        case 0x342e50u: goto label_342e50;
        case 0x342e54u: goto label_342e54;
        case 0x342e58u: goto label_342e58;
        case 0x342e5cu: goto label_342e5c;
        case 0x342e60u: goto label_342e60;
        case 0x342e64u: goto label_342e64;
        case 0x342e68u: goto label_342e68;
        case 0x342e6cu: goto label_342e6c;
        case 0x342e70u: goto label_342e70;
        case 0x342e74u: goto label_342e74;
        case 0x342e78u: goto label_342e78;
        case 0x342e7cu: goto label_342e7c;
        case 0x342e80u: goto label_342e80;
        case 0x342e84u: goto label_342e84;
        case 0x342e88u: goto label_342e88;
        case 0x342e8cu: goto label_342e8c;
        case 0x342e90u: goto label_342e90;
        case 0x342e94u: goto label_342e94;
        case 0x342e98u: goto label_342e98;
        case 0x342e9cu: goto label_342e9c;
        case 0x342ea0u: goto label_342ea0;
        case 0x342ea4u: goto label_342ea4;
        case 0x342ea8u: goto label_342ea8;
        case 0x342eacu: goto label_342eac;
        case 0x342eb0u: goto label_342eb0;
        case 0x342eb4u: goto label_342eb4;
        case 0x342eb8u: goto label_342eb8;
        case 0x342ebcu: goto label_342ebc;
        case 0x342ec0u: goto label_342ec0;
        case 0x342ec4u: goto label_342ec4;
        case 0x342ec8u: goto label_342ec8;
        case 0x342eccu: goto label_342ecc;
        case 0x342ed0u: goto label_342ed0;
        case 0x342ed4u: goto label_342ed4;
        case 0x342ed8u: goto label_342ed8;
        case 0x342edcu: goto label_342edc;
        case 0x342ee0u: goto label_342ee0;
        case 0x342ee4u: goto label_342ee4;
        case 0x342ee8u: goto label_342ee8;
        case 0x342eecu: goto label_342eec;
        case 0x342ef0u: goto label_342ef0;
        case 0x342ef4u: goto label_342ef4;
        case 0x342ef8u: goto label_342ef8;
        case 0x342efcu: goto label_342efc;
        case 0x342f00u: goto label_342f00;
        case 0x342f04u: goto label_342f04;
        case 0x342f08u: goto label_342f08;
        case 0x342f0cu: goto label_342f0c;
        case 0x342f10u: goto label_342f10;
        case 0x342f14u: goto label_342f14;
        case 0x342f18u: goto label_342f18;
        case 0x342f1cu: goto label_342f1c;
        case 0x342f20u: goto label_342f20;
        case 0x342f24u: goto label_342f24;
        case 0x342f28u: goto label_342f28;
        case 0x342f2cu: goto label_342f2c;
        case 0x342f30u: goto label_342f30;
        case 0x342f34u: goto label_342f34;
        case 0x342f38u: goto label_342f38;
        case 0x342f3cu: goto label_342f3c;
        case 0x342f40u: goto label_342f40;
        case 0x342f44u: goto label_342f44;
        case 0x342f48u: goto label_342f48;
        case 0x342f4cu: goto label_342f4c;
        case 0x342f50u: goto label_342f50;
        case 0x342f54u: goto label_342f54;
        case 0x342f58u: goto label_342f58;
        case 0x342f5cu: goto label_342f5c;
        case 0x342f60u: goto label_342f60;
        case 0x342f64u: goto label_342f64;
        case 0x342f68u: goto label_342f68;
        case 0x342f6cu: goto label_342f6c;
        case 0x342f70u: goto label_342f70;
        case 0x342f74u: goto label_342f74;
        case 0x342f78u: goto label_342f78;
        case 0x342f7cu: goto label_342f7c;
        case 0x342f80u: goto label_342f80;
        case 0x342f84u: goto label_342f84;
        case 0x342f88u: goto label_342f88;
        case 0x342f8cu: goto label_342f8c;
        case 0x342f90u: goto label_342f90;
        case 0x342f94u: goto label_342f94;
        case 0x342f98u: goto label_342f98;
        case 0x342f9cu: goto label_342f9c;
        case 0x342fa0u: goto label_342fa0;
        case 0x342fa4u: goto label_342fa4;
        case 0x342fa8u: goto label_342fa8;
        case 0x342facu: goto label_342fac;
        case 0x342fb0u: goto label_342fb0;
        case 0x342fb4u: goto label_342fb4;
        case 0x342fb8u: goto label_342fb8;
        case 0x342fbcu: goto label_342fbc;
        case 0x342fc0u: goto label_342fc0;
        case 0x342fc4u: goto label_342fc4;
        case 0x342fc8u: goto label_342fc8;
        case 0x342fccu: goto label_342fcc;
        case 0x342fd0u: goto label_342fd0;
        case 0x342fd4u: goto label_342fd4;
        case 0x342fd8u: goto label_342fd8;
        case 0x342fdcu: goto label_342fdc;
        case 0x342fe0u: goto label_342fe0;
        case 0x342fe4u: goto label_342fe4;
        case 0x342fe8u: goto label_342fe8;
        case 0x342fecu: goto label_342fec;
        case 0x342ff0u: goto label_342ff0;
        case 0x342ff4u: goto label_342ff4;
        case 0x342ff8u: goto label_342ff8;
        case 0x342ffcu: goto label_342ffc;
        case 0x343000u: goto label_343000;
        case 0x343004u: goto label_343004;
        case 0x343008u: goto label_343008;
        case 0x34300cu: goto label_34300c;
        case 0x343010u: goto label_343010;
        case 0x343014u: goto label_343014;
        case 0x343018u: goto label_343018;
        case 0x34301cu: goto label_34301c;
        case 0x343020u: goto label_343020;
        case 0x343024u: goto label_343024;
        case 0x343028u: goto label_343028;
        case 0x34302cu: goto label_34302c;
        case 0x343030u: goto label_343030;
        case 0x343034u: goto label_343034;
        case 0x343038u: goto label_343038;
        case 0x34303cu: goto label_34303c;
        default: break;
    }

    ctx->pc = 0x342df8u;

label_342df8:
    // 0x342df8: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x342df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_342dfc:
    // 0x342dfc: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x342dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
label_342e00:
    // 0x342e00: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x342e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
label_342e04:
    // 0x342e04: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x342e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
label_342e08:
    // 0x342e08: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x342e08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_342e0c:
    // 0x342e0c: 0xffbf0160  sd          $ra, 0x160($sp)
    ctx->pc = 0x342e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
label_342e10:
    // 0x342e10: 0x96420032  lhu         $v0, 0x32($s2)
    ctx->pc = 0x342e10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 50)));
label_342e14:
    // 0x342e14: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x342e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_342e18:
    // 0x342e18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_342e1c:
    if (ctx->pc == 0x342E1Cu) {
        ctx->pc = 0x342E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E18u;
        // 0x342e1c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342E20u;
        goto label_342e20;
    }
    ctx->pc = 0x342E18u;
    {
        const bool branch_taken_0x342e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x342E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E18u;
        // 0x342e1c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342e18) {
            ctx->pc = 0x342E28u;
            goto label_342e28;
        }
    }
    ctx->pc = 0x342E20u;
label_342e20:
    // 0x342e20: 0x7a420080  lq          $v0, 0x80($s2)
    ctx->pc = 0x342e20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 128)));
label_342e24:
    // 0x342e24: 0x7e420020  sq          $v0, 0x20($s2)
    ctx->pc = 0x342e24u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
label_342e28:
    // 0x342e28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x342e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_342e2c:
    // 0x342e2c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x342e2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_342e30:
    // 0x342e30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x342e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_342e34:
    // 0x342e34: 0x846500a0  lh          $a1, 0xA0($v1)
    ctx->pc = 0x342e34u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_342e38:
    // 0x342e38: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x342e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_342e3c:
    // 0x342e3c: 0x40f809  jalr        $v0
label_342e40:
    if (ctx->pc == 0x342E40u) {
        ctx->pc = 0x342E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E3Cu;
        // 0x342e40: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342E44u;
        goto label_342e44;
    }
    ctx->pc = 0x342E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x342E44u);
        ctx->pc = 0x342E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E3Cu;
        // 0x342e40: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342E3Cu, 0x342E44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342E44u;
label_342e44:
    // 0x342e44: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x342e44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_342e48:
    // 0x342e48: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x342e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_342e4c:
    // 0x342e4c: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x342e4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_342e50:
    // 0x342e50: 0x82460031  lb          $a2, 0x31($s2)
    ctx->pc = 0x342e50u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
label_342e54:
    // 0x342e54: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x342e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_342e58:
    // 0x342e58: 0x10c4004f  beq         $a2, $a0, . + 4 + (0x4F << 2)
label_342e5c:
    if (ctx->pc == 0x342E5Cu) {
        ctx->pc = 0x342E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E58u;
        // 0x342e5c: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342E60u;
        goto label_342e60;
    }
    ctx->pc = 0x342E58u;
    {
        const bool branch_taken_0x342e58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x342E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E58u;
        // 0x342e5c: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342e58) {
            ctx->pc = 0x342F98u;
            goto label_342f98;
        }
    }
    ctx->pc = 0x342E60u;
label_342e60:
    // 0x342e60: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x342e60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_342e64:
    // 0x342e64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x342e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_342e68:
    // 0x342e68: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x342e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_342e6c:
    // 0x342e6c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x342e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_342e70:
    // 0x342e70: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x342e70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_342e74:
    // 0x342e74: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x342e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_342e78:
    // 0x342e78: 0x40f809  jalr        $v0
label_342e7c:
    if (ctx->pc == 0x342E7Cu) {
        ctx->pc = 0x342E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E78u;
        // 0x342e7c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342E80u;
        goto label_342e80;
    }
    ctx->pc = 0x342E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x342E80u);
        ctx->pc = 0x342E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E78u;
        // 0x342e7c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342E78u, 0x342E80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342E80u;
label_342e80:
    // 0x342e80: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x342e80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_342e84:
    // 0x342e84: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x342e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_342e88:
    // 0x342e88: 0xc0cd940  jal         func_336500
label_342e8c:
    if (ctx->pc == 0x342E8Cu) {
        ctx->pc = 0x342E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E88u;
        // 0x342e8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342E90u;
        goto label_342e90;
    }
    ctx->pc = 0x342E88u;
    SET_GPR_U32(ctx, 31, 0x342E90u);
    ctx->pc = 0x342E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342E88u;
    // 0x342e8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x342E88u, 0x342E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342E90u;
label_342e90:
    // 0x342e90: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x342e90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_342e94:
    // 0x342e94: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x342e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_342e98:
    // 0x342e98: 0xc0cd940  jal         func_336500
label_342e9c:
    if (ctx->pc == 0x342E9Cu) {
        ctx->pc = 0x342E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E98u;
        // 0x342e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342EA0u;
        goto label_342ea0;
    }
    ctx->pc = 0x342E98u;
    SET_GPR_U32(ctx, 31, 0x342EA0u);
    ctx->pc = 0x342E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342E98u;
    // 0x342e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x342E98u, 0x342EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342EA0u;
label_342ea0:
    // 0x342ea0: 0x27a900e0  addiu       $t1, $sp, 0xE0
    ctx->pc = 0x342ea0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_342ea4:
    // 0x342ea4: 0x27a800f0  addiu       $t0, $sp, 0xF0
    ctx->pc = 0x342ea4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_342ea8:
    // 0x342ea8: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x342ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_342eac:
    // 0x342eac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x342eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_342eb0:
    // 0x342eb0: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x342eb0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_342eb4:
    // 0x342eb4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x342eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_342eb8:
    // 0x342eb8: 0xdba50040  lqc2        $vf5, 0x40($sp)
    ctx->pc = 0x342eb8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_342ebc:
    // 0x342ebc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x342ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_342ec0:
    // 0x342ec0: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x342ec0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_342ec4:
    // 0x342ec4: 0xdba20060  lqc2        $vf2, 0x60($sp)
    ctx->pc = 0x342ec4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_342ec8:
    // 0x342ec8: 0xdba10070  lqc2        $vf1, 0x70($sp)
    ctx->pc = 0x342ec8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_342ecc:
    // 0x342ecc: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x342eccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_342ed0:
    // 0x342ed0: 0x4be320bd  vmadday.xyzw $ACC, $vf4, $vf3y
    ctx->pc = 0x342ed0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_342ed4:
    // 0x342ed4: 0x4be310be  vmaddaz.xyzw $ACC, $vf2, $vf3z
    ctx->pc = 0x342ed4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_342ed8:
    // 0x342ed8: 0x4be308cb  vmaddw.xyzw $vf3, $vf1, $vf3w
    ctx->pc = 0x342ed8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_342edc:
    // 0x342edc: 0xfba30150  sqc2        $vf3, 0x150($sp)
    ctx->pc = 0x342edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[3]));
label_342ee0:
    // 0x342ee0: 0xf8430000  sqc2        $vf3, 0x0($v0)
    ctx->pc = 0x342ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[3]));
label_342ee4:
    // 0x342ee4: 0x461fff2  bgez        $v1, . + 4 + (-0xE << 2)
label_342ee8:
    if (ctx->pc == 0x342EE8u) {
        ctx->pc = 0x342EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342EE4u;
        // 0x342ee8: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342EECu;
        goto label_342eec;
    }
    ctx->pc = 0x342EE4u;
    {
        const bool branch_taken_0x342ee4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x342EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342EE4u;
        // 0x342ee8: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342ee4) {
            ctx->pc = 0x342EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342eb0;
        }
    }
    ctx->pc = 0x342EECu;
label_342eec:
    // 0x342eec: 0x7ba40120  lq          $a0, 0x120($sp)
    ctx->pc = 0x342eecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_342ef0:
    // 0x342ef0: 0x7ba50130  lq          $a1, 0x130($sp)
    ctx->pc = 0x342ef0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_342ef4:
    // 0x342ef4: 0x7ba60140  lq          $a2, 0x140($sp)
    ctx->pc = 0x342ef4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_342ef8:
    // 0x342ef8: 0x7ba70110  lq          $a3, 0x110($sp)
    ctx->pc = 0x342ef8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_342efc:
    // 0x342efc: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x342efcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_342f00:
    // 0x342f00: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x342f00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_342f04:
    // 0x342f04: 0x7fa400e0  sq          $a0, 0xE0($sp)
    ctx->pc = 0x342f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 4));
label_342f08:
    // 0x342f08: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x342f08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_342f0c:
    // 0x342f0c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x342f0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_342f10:
    // 0x342f10: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x342f10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_342f14:
    // 0x342f14: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x342f14u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_342f18:
    // 0x342f18: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x342f18u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_342f1c:
    // 0x342f1c: 0x7fa500f0  sq          $a1, 0xF0($sp)
    ctx->pc = 0x342f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 5));
label_342f20:
    // 0x342f20: 0x7fa60100  sq          $a2, 0x100($sp)
    ctx->pc = 0x342f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 6));
label_342f24:
    // 0x342f24: 0x7e470050  sq          $a3, 0x50($s2)
    ctx->pc = 0x342f24u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 7));
label_342f28:
    // 0x342f28: 0x7e440060  sq          $a0, 0x60($s2)
    ctx->pc = 0x342f28u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 96), GPR_VEC(ctx, 4));
label_342f2c:
    // 0x342f2c: 0x7e450070  sq          $a1, 0x70($s2)
    ctx->pc = 0x342f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 112), GPR_VEC(ctx, 5));
label_342f30:
    // 0x342f30: 0x7e460080  sq          $a2, 0x80($s2)
    ctx->pc = 0x342f30u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 128), GPR_VEC(ctx, 6));
label_342f34:
    // 0x342f34: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x342f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
label_342f38:
    // 0x342f38: 0x7fa700d0  sq          $a3, 0xD0($sp)
    ctx->pc = 0x342f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 7));
label_342f3c:
    // 0x342f3c: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x342f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
label_342f40:
    // 0x342f40: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x342f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
label_342f44:
    // 0x342f44: 0xd9250000  lqc2        $vf5, 0x0($t1)
    ctx->pc = 0x342f44u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
label_342f48:
    // 0x342f48: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x342f48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_342f4c:
    // 0x342f4c: 0xda220010  lqc2        $vf2, 0x10($s1)
    ctx->pc = 0x342f4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_342f50:
    // 0x342f50: 0xda230020  lqc2        $vf3, 0x20($s1)
    ctx->pc = 0x342f50u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_342f54:
    // 0x342f54: 0xda240030  lqc2        $vf4, 0x30($s1)
    ctx->pc = 0x342f54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_342f58:
    // 0x342f58: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x342f58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_342f5c:
    // 0x342f5c: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x342f5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_342f60:
    // 0x342f60: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x342f60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_342f64:
    // 0x342f64: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x342f64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_342f68:
    // 0x342f68: 0xf9010000  sqc2        $vf1, 0x0($t0)
    ctx->pc = 0x342f68u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_342f6c:
    // 0x342f6c: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x342f6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_342f70:
    // 0x342f70: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x342f70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_342f74:
    // 0x342f74: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x342f74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_342f78:
    // 0x342f78: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x342f78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_342f7c:
    // 0x342f7c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x342f7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_342f80:
    // 0x342f80: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x342f80u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_342f84:
    // 0x342f84: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x342f84u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_342f88:
    // 0x342f88: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x342f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_342f8c:
    // 0x342f8c: 0x7e430080  sq          $v1, 0x80($s2)
    ctx->pc = 0x342f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 128), GPR_VEC(ctx, 3));
label_342f90:
    // 0x342f90: 0x1000001b  b           . + 4 + (0x1B << 2)
label_342f94:
    if (ctx->pc == 0x342F94u) {
        ctx->pc = 0x342F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342F90u;
        // 0x342f94: 0x7fa300d0  sq          $v1, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342F98u;
        goto label_342f98;
    }
    ctx->pc = 0x342F90u;
    {
        const bool branch_taken_0x342f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342F90u;
        // 0x342f94: 0x7fa300d0  sq          $v1, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342f90) {
            ctx->pc = 0x343000u;
            goto label_343000;
        }
    }
    ctx->pc = 0x342F98u;
label_342f98:
    // 0x342f98: 0x26500050  addiu       $s0, $s2, 0x50
    ctx->pc = 0x342f98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_342f9c:
    // 0x342f9c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x342f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_342fa0:
    // 0x342fa0: 0xc0cd940  jal         func_336500
label_342fa4:
    if (ctx->pc == 0x342FA4u) {
        ctx->pc = 0x342FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342FA0u;
        // 0x342fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342FA8u;
        goto label_342fa8;
    }
    ctx->pc = 0x342FA0u;
    SET_GPR_U32(ctx, 31, 0x342FA8u);
    ctx->pc = 0x342FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342FA0u;
    // 0x342fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x342FA0u, 0x342FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342FA8u;
label_342fa8:
    // 0x342fa8: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x342fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_342fac:
    // 0x342fac: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x342facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_342fb0:
    // 0x342fb0: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x342fb0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_342fb4:
    // 0x342fb4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x342fb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_342fb8:
    // 0x342fb8: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x342fb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_342fbc:
    // 0x342fbc: 0xda030020  lqc2        $vf3, 0x20($s0)
    ctx->pc = 0x342fbcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_342fc0:
    // 0x342fc0: 0xda040030  lqc2        $vf4, 0x30($s0)
    ctx->pc = 0x342fc0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_342fc4:
    // 0x342fc4: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x342fc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_342fc8:
    // 0x342fc8: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x342fc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_342fcc:
    // 0x342fcc: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x342fccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_342fd0:
    // 0x342fd0: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x342fd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_342fd4:
    // 0x342fd4: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x342fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_342fd8:
    // 0x342fd8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x342fd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_342fdc:
    // 0x342fdc: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x342fdcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_342fe0:
    // 0x342fe0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x342fe0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_342fe4:
    // 0x342fe4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x342fe4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_342fe8:
    // 0x342fe8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x342fe8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_342fec:
    // 0x342fec: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x342fecu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_342ff0:
    // 0x342ff0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x342ff0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_342ff4:
    // 0x342ff4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x342ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_342ff8:
    // 0x342ff8: 0x7e430080  sq          $v1, 0x80($s2)
    ctx->pc = 0x342ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 128), GPR_VEC(ctx, 3));
label_342ffc:
    // 0x342ffc: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x342ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_343000:
    // 0x343000: 0x96420032  lhu         $v0, 0x32($s2)
    ctx->pc = 0x343000u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 50)));
label_343004:
    // 0x343004: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x343004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_343008:
    // 0x343008: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_34300c:
    if (ctx->pc == 0x34300Cu) {
        ctx->pc = 0x34300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343008u;
        // 0x34300c: 0x96420032  lhu         $v0, 0x32($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 50)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343010u;
        goto label_343010;
    }
    ctx->pc = 0x343008u;
    {
        const bool branch_taken_0x343008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x343008) {
            ctx->pc = 0x34300Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343008u;
            // 0x34300c: 0x96420032  lhu         $v0, 0x32($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 50)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34301Cu;
            goto label_34301c;
        }
    }
    ctx->pc = 0x343010u;
label_343010:
    // 0x343010: 0x7a420080  lq          $v0, 0x80($s2)
    ctx->pc = 0x343010u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 128)));
label_343014:
    // 0x343014: 0x7e420020  sq          $v0, 0x20($s2)
    ctx->pc = 0x343014u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
label_343018:
    // 0x343018: 0x96420032  lhu         $v0, 0x32($s2)
    ctx->pc = 0x343018u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 50)));
label_34301c:
    // 0x34301c: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x34301cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_343020:
    // 0x343020: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x343020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
label_343024:
    // 0x343024: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x343024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_343028:
    // 0x343028: 0xa6420032  sh          $v0, 0x32($s2)
    ctx->pc = 0x343028u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 50), (uint16_t)GPR_U32(ctx, 2));
label_34302c:
    // 0x34302c: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x34302cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_343030:
    // 0x343030: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x343030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_343034:
    // 0x343034: 0x3e00008  jr          $ra
label_343038:
    if (ctx->pc == 0x343038u) {
        ctx->pc = 0x343038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343034u;
        // 0x343038: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34303Cu;
        goto label_34303c;
    }
    ctx->pc = 0x343034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343034u;
        // 0x343038: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34303Cu;
label_34303c:
    // 0x34303c: 0x0  nop
    ctx->pc = 0x34303cu;
    // NOP
    ctx->pc = 0x343040u;
}
