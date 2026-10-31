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

// Function: sub_004A3F58
// Address: 0x4a3f58 - 0x4a4158
void sub_004A3F58_0x4a3f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A3F58_0x4a3f58");
#endif

    switch (ctx->pc) {
        case 0x4a3f58u: goto label_4a3f58;
        case 0x4a3f5cu: goto label_4a3f5c;
        case 0x4a3f60u: goto label_4a3f60;
        case 0x4a3f64u: goto label_4a3f64;
        case 0x4a3f68u: goto label_4a3f68;
        case 0x4a3f6cu: goto label_4a3f6c;
        case 0x4a3f70u: goto label_4a3f70;
        case 0x4a3f74u: goto label_4a3f74;
        case 0x4a3f78u: goto label_4a3f78;
        case 0x4a3f7cu: goto label_4a3f7c;
        case 0x4a3f80u: goto label_4a3f80;
        case 0x4a3f84u: goto label_4a3f84;
        case 0x4a3f88u: goto label_4a3f88;
        case 0x4a3f8cu: goto label_4a3f8c;
        case 0x4a3f90u: goto label_4a3f90;
        case 0x4a3f94u: goto label_4a3f94;
        case 0x4a3f98u: goto label_4a3f98;
        case 0x4a3f9cu: goto label_4a3f9c;
        case 0x4a3fa0u: goto label_4a3fa0;
        case 0x4a3fa4u: goto label_4a3fa4;
        case 0x4a3fa8u: goto label_4a3fa8;
        case 0x4a3facu: goto label_4a3fac;
        case 0x4a3fb0u: goto label_4a3fb0;
        case 0x4a3fb4u: goto label_4a3fb4;
        case 0x4a3fb8u: goto label_4a3fb8;
        case 0x4a3fbcu: goto label_4a3fbc;
        case 0x4a3fc0u: goto label_4a3fc0;
        case 0x4a3fc4u: goto label_4a3fc4;
        case 0x4a3fc8u: goto label_4a3fc8;
        case 0x4a3fccu: goto label_4a3fcc;
        case 0x4a3fd0u: goto label_4a3fd0;
        case 0x4a3fd4u: goto label_4a3fd4;
        case 0x4a3fd8u: goto label_4a3fd8;
        case 0x4a3fdcu: goto label_4a3fdc;
        case 0x4a3fe0u: goto label_4a3fe0;
        case 0x4a3fe4u: goto label_4a3fe4;
        case 0x4a3fe8u: goto label_4a3fe8;
        case 0x4a3fecu: goto label_4a3fec;
        case 0x4a3ff0u: goto label_4a3ff0;
        case 0x4a3ff4u: goto label_4a3ff4;
        case 0x4a3ff8u: goto label_4a3ff8;
        case 0x4a3ffcu: goto label_4a3ffc;
        case 0x4a4000u: goto label_4a4000;
        case 0x4a4004u: goto label_4a4004;
        case 0x4a4008u: goto label_4a4008;
        case 0x4a400cu: goto label_4a400c;
        case 0x4a4010u: goto label_4a4010;
        case 0x4a4014u: goto label_4a4014;
        case 0x4a4018u: goto label_4a4018;
        case 0x4a401cu: goto label_4a401c;
        case 0x4a4020u: goto label_4a4020;
        case 0x4a4024u: goto label_4a4024;
        case 0x4a4028u: goto label_4a4028;
        case 0x4a402cu: goto label_4a402c;
        case 0x4a4030u: goto label_4a4030;
        case 0x4a4034u: goto label_4a4034;
        case 0x4a4038u: goto label_4a4038;
        case 0x4a403cu: goto label_4a403c;
        case 0x4a4040u: goto label_4a4040;
        case 0x4a4044u: goto label_4a4044;
        case 0x4a4048u: goto label_4a4048;
        case 0x4a404cu: goto label_4a404c;
        case 0x4a4050u: goto label_4a4050;
        case 0x4a4054u: goto label_4a4054;
        case 0x4a4058u: goto label_4a4058;
        case 0x4a405cu: goto label_4a405c;
        case 0x4a4060u: goto label_4a4060;
        case 0x4a4064u: goto label_4a4064;
        case 0x4a4068u: goto label_4a4068;
        case 0x4a406cu: goto label_4a406c;
        case 0x4a4070u: goto label_4a4070;
        case 0x4a4074u: goto label_4a4074;
        case 0x4a4078u: goto label_4a4078;
        case 0x4a407cu: goto label_4a407c;
        case 0x4a4080u: goto label_4a4080;
        case 0x4a4084u: goto label_4a4084;
        case 0x4a4088u: goto label_4a4088;
        case 0x4a408cu: goto label_4a408c;
        case 0x4a4090u: goto label_4a4090;
        case 0x4a4094u: goto label_4a4094;
        case 0x4a4098u: goto label_4a4098;
        case 0x4a409cu: goto label_4a409c;
        case 0x4a40a0u: goto label_4a40a0;
        case 0x4a40a4u: goto label_4a40a4;
        case 0x4a40a8u: goto label_4a40a8;
        case 0x4a40acu: goto label_4a40ac;
        case 0x4a40b0u: goto label_4a40b0;
        case 0x4a40b4u: goto label_4a40b4;
        case 0x4a40b8u: goto label_4a40b8;
        case 0x4a40bcu: goto label_4a40bc;
        case 0x4a40c0u: goto label_4a40c0;
        case 0x4a40c4u: goto label_4a40c4;
        case 0x4a40c8u: goto label_4a40c8;
        case 0x4a40ccu: goto label_4a40cc;
        case 0x4a40d0u: goto label_4a40d0;
        case 0x4a40d4u: goto label_4a40d4;
        case 0x4a40d8u: goto label_4a40d8;
        case 0x4a40dcu: goto label_4a40dc;
        case 0x4a40e0u: goto label_4a40e0;
        case 0x4a40e4u: goto label_4a40e4;
        case 0x4a40e8u: goto label_4a40e8;
        case 0x4a40ecu: goto label_4a40ec;
        case 0x4a40f0u: goto label_4a40f0;
        case 0x4a40f4u: goto label_4a40f4;
        case 0x4a40f8u: goto label_4a40f8;
        case 0x4a40fcu: goto label_4a40fc;
        case 0x4a4100u: goto label_4a4100;
        case 0x4a4104u: goto label_4a4104;
        case 0x4a4108u: goto label_4a4108;
        case 0x4a410cu: goto label_4a410c;
        case 0x4a4110u: goto label_4a4110;
        case 0x4a4114u: goto label_4a4114;
        case 0x4a4118u: goto label_4a4118;
        case 0x4a411cu: goto label_4a411c;
        case 0x4a4120u: goto label_4a4120;
        case 0x4a4124u: goto label_4a4124;
        case 0x4a4128u: goto label_4a4128;
        case 0x4a412cu: goto label_4a412c;
        case 0x4a4130u: goto label_4a4130;
        case 0x4a4134u: goto label_4a4134;
        case 0x4a4138u: goto label_4a4138;
        case 0x4a413cu: goto label_4a413c;
        case 0x4a4140u: goto label_4a4140;
        case 0x4a4144u: goto label_4a4144;
        case 0x4a4148u: goto label_4a4148;
        case 0x4a414cu: goto label_4a414c;
        case 0x4a4150u: goto label_4a4150;
        case 0x4a4154u: goto label_4a4154;
        default: break;
    }

    ctx->pc = 0x4a3f58u;

label_4a3f58:
    // 0x4a3f58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4a3f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4a3f5c:
    // 0x4a3f5c: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4a3f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4a3f60:
    // 0x4a3f60: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4a3f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4a3f64:
    // 0x4a3f64: 0x2447f940  addiu       $a3, $v0, -0x6C0
    ctx->pc = 0x4a3f64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965568));
label_4a3f68:
    // 0x4a3f68: 0x8f858a20  lw          $a1, -0x75E0($gp)
    ctx->pc = 0x4a3f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
label_4a3f6c:
    // 0x4a3f6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a3f6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a3f70:
    // 0x4a3f70: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4a3f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4a3f74:
    // 0x4a3f74: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4a3f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4a3f78:
    // 0x4a3f78: 0x2258021  addu        $s0, $s1, $a1
    ctx->pc = 0x4a3f78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_4a3f7c:
    // 0x4a3f7c: 0x8c43f940  lw          $v1, -0x6C0($v0)
    ctx->pc = 0x4a3f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965568)));
label_4a3f80:
    // 0x4a3f80: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4a3f80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a3f84:
    // 0x4a3f84: 0x10600060  beqz        $v1, . + 4 + (0x60 << 2)
label_4a3f88:
    if (ctx->pc == 0x4A3F88u) {
        ctx->pc = 0x4A3F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3F84u;
        // 0x4a3f88: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3F8Cu;
        goto label_4a3f8c;
    }
    ctx->pc = 0x4A3F84u;
    {
        const bool branch_taken_0x4a3f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3F84u;
        // 0x4a3f88: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3f84) {
            ctx->pc = 0x4A4108u;
            goto label_4a4108;
        }
    }
    ctx->pc = 0x4A3F8Cu;
label_4a3f8c:
    // 0x4a3f8c: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x4a3f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4a3f90:
    // 0x4a3f90: 0x50800066  beql        $a0, $zero, . + 4 + (0x66 << 2)
label_4a3f94:
    if (ctx->pc == 0x4A3F94u) {
        ctx->pc = 0x4A3F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3F90u;
        // 0x4a3f94: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3F98u;
        goto label_4a3f98;
    }
    ctx->pc = 0x4A3F90u;
    {
        const bool branch_taken_0x4a3f90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a3f90) {
            ctx->pc = 0x4A3F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3F90u;
            // 0x4a3f94: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A412Cu;
            goto label_4a412c;
        }
    }
    ctx->pc = 0x4A3F98u;
label_4a3f98:
    // 0x4a3f98: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x4a3f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_4a3f9c:
    // 0x4a3f9c: 0x3c02aaaa  lui         $v0, 0xAAAA
    ctx->pc = 0x4a3f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43690 << 16));
label_4a3fa0:
    // 0x4a3fa0: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x4a3fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_4a3fa4:
    // 0x4a3fa4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x4a3fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_4a3fa8:
    // 0x4a3fa8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x4a3fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4a3fac:
    // 0x4a3fac: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x4a3facu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4a3fb0:
    // 0x4a3fb0: 0x8ce4002c  lw          $a0, 0x2C($a3)
    ctx->pc = 0x4a3fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
label_4a3fb4:
    // 0x4a3fb4: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x4a3fb4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_4a3fb8:
    // 0x4a3fb8: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_4a3fbc:
    if (ctx->pc == 0x4A3FBCu) {
        ctx->pc = 0x4A3FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3FB8u;
        // 0x4a3fbc: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3FC0u;
        goto label_4a3fc0;
    }
    ctx->pc = 0x4A3FB8u;
    {
        const bool branch_taken_0x4a3fb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x4A3FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3FB8u;
        // 0x4a3fbc: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3fb8) {
            ctx->pc = 0x4A3FCCu;
            goto label_4a3fcc;
        }
    }
    ctx->pc = 0x4A3FC0u;
label_4a3fc0:
    // 0x4a3fc0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a3fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4a3fc4:
    // 0x4a3fc4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a3fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4a3fc8:
    // 0x4a3fc8: 0xace2002c  sw          $v0, 0x2C($a3)
    ctx->pc = 0x4a3fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 2));
label_4a3fcc:
    // 0x4a3fcc: 0x8ce20030  lw          $v0, 0x30($a3)
    ctx->pc = 0x4a3fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
label_4a3fd0:
    // 0x4a3fd0: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_4a3fd4:
    if (ctx->pc == 0x4A3FD4u) {
        ctx->pc = 0x4A3FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3FD0u;
        // 0x4a3fd4: 0x8ce60004  lw          $a2, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3FD8u;
        goto label_4a3fd8;
    }
    ctx->pc = 0x4A3FD0u;
    {
        const bool branch_taken_0x4a3fd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a3fd0) {
            ctx->pc = 0x4A3FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3FD0u;
            // 0x4a3fd4: 0x8ce60004  lw          $a2, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A3FE8u;
            goto label_4a3fe8;
        }
    }
    ctx->pc = 0x4A3FD8u;
label_4a3fd8:
    // 0x4a3fd8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a3fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4a3fdc:
    // 0x4a3fdc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a3fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4a3fe0:
    // 0x4a3fe0: 0xace20030  sw          $v0, 0x30($a3)
    ctx->pc = 0x4a3fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 2));
label_4a3fe4:
    // 0x4a3fe4: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x4a3fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_4a3fe8:
    // 0x4a3fe8: 0x5466001d  bnel        $v1, $a2, . + 4 + (0x1D << 2)
label_4a3fec:
    if (ctx->pc == 0x4A3FECu) {
        ctx->pc = 0x4A3FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3FE8u;
        // 0x4a3fec: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3FF0u;
        goto label_4a3ff0;
    }
    ctx->pc = 0x4A3FE8u;
    {
        const bool branch_taken_0x4a3fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x4a3fe8) {
            ctx->pc = 0x4A3FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3FE8u;
            // 0x4a3fec: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A4060u;
            goto label_4a4060;
        }
    }
    ctx->pc = 0x4A3FF0u;
label_4a3ff0:
    // 0x4a3ff0: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x4a3ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_4a3ff4:
    // 0x4a3ff4: 0x10660036  beq         $v1, $a2, . + 4 + (0x36 << 2)
label_4a3ff8:
    if (ctx->pc == 0x4A3FF8u) {
        ctx->pc = 0x4A3FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3FF4u;
        // 0x4a3ff8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3FFCu;
        goto label_4a3ffc;
    }
    ctx->pc = 0x4A3FF4u;
    {
        const bool branch_taken_0x4a3ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x4A3FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3FF4u;
        // 0x4a3ff8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3ff4) {
            ctx->pc = 0x4A40D0u;
            goto label_4a40d0;
        }
    }
    ctx->pc = 0x4A3FFCu;
label_4a3ffc:
    // 0x4a3ffc: 0x8ce40014  lw          $a0, 0x14($a3)
    ctx->pc = 0x4a3ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_4a4000:
    // 0x4a4000: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x4a4000u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4a4004:
    // 0x4a4004: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a4004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4a4008:
    // 0x4a4008: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4a4008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a400c:
    // 0x4a400c: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
label_4a4010:
    if (ctx->pc == 0x4A4010u) {
        ctx->pc = 0x4A4010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A400Cu;
        // 0x4a4010: 0x2645f940  addiu       $a1, $s2, -0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A4014u;
        goto label_4a4014;
    }
    ctx->pc = 0x4A400Cu;
    {
        const bool branch_taken_0x4a400c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A4010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A400Cu;
        // 0x4a4010: 0x2645f940  addiu       $a1, $s2, -0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a400c) {
            ctx->pc = 0x4A40D4u;
            goto label_4a40d4;
        }
    }
    ctx->pc = 0x4A4014u;
label_4a4014:
    // 0x4a4014: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x4a4014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4a4018:
    // 0x4a4018: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x4a4018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4a401c:
    // 0x4a401c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4a401cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4a4020:
    // 0x4a4020: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_4a4024:
    if (ctx->pc == 0x4A4024u) {
        ctx->pc = 0x4A4024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4020u;
        // 0x4a4024: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A4028u;
        goto label_4a4028;
    }
    ctx->pc = 0x4A4020u;
    {
        const bool branch_taken_0x4a4020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A4024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4020u;
        // 0x4a4024: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4020) {
            ctx->pc = 0x4A4038u;
            goto label_4a4038;
        }
    }
    ctx->pc = 0x4A4028u;
label_4a4028:
    // 0x4a4028: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x4a4028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_4a402c:
    // 0x4a402c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x4a402cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_4a4030:
    // 0x4a4030: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4a4030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4a4034:
    // 0x4a4034: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a4034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4a4038:
    // 0x4a4038: 0x10460025  beq         $v0, $a2, . + 4 + (0x25 << 2)
label_4a403c:
    if (ctx->pc == 0x4A403Cu) {
        ctx->pc = 0x4A403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4038u;
        // 0x4a403c: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A4040u;
        goto label_4a4040;
    }
    ctx->pc = 0x4A4038u;
    {
        const bool branch_taken_0x4a4038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x4A403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4038u;
        // 0x4a403c: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4038) {
            ctx->pc = 0x4A40D0u;
            goto label_4a40d0;
        }
    }
    ctx->pc = 0x4A4040u;
label_4a4040:
    // 0x4a4040: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x4a4040u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4a4044:
    // 0x4a4044: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x4a4044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_4a4048:
    // 0x4a4048: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a4048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a404c:
    // 0x4a404c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4a404cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a4050:
    // 0x4a4050: 0x5080fff3  beql        $a0, $zero, . + 4 + (-0xD << 2)
label_4a4054:
    if (ctx->pc == 0x4A4054u) {
        ctx->pc = 0x4A4054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4050u;
        // 0x4a4054: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A4058u;
        goto label_4a4058;
    }
    ctx->pc = 0x4A4050u;
    {
        const bool branch_taken_0x4a4050 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a4050) {
            ctx->pc = 0x4A4054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A4050u;
            // 0x4a4054: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A4020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a4020;
        }
    }
    ctx->pc = 0x4A4058u;
label_4a4058:
    // 0x4a4058: 0x1000001e  b           . + 4 + (0x1E << 2)
label_4a405c:
    if (ctx->pc == 0x4A405Cu) {
        ctx->pc = 0x4A405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4058u;
        // 0x4a405c: 0x2645f940  addiu       $a1, $s2, -0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A4060u;
        goto label_4a4060;
    }
    ctx->pc = 0x4A4058u;
    {
        const bool branch_taken_0x4a4058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4058u;
        // 0x4a405c: 0x2645f940  addiu       $a1, $s2, -0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4058) {
            ctx->pc = 0x4A40D4u;
            goto label_4a40d4;
        }
    }
    ctx->pc = 0x4A4060u;
label_4a4060:
    // 0x4a4060: 0x54a2001c  bnel        $a1, $v0, . + 4 + (0x1C << 2)
label_4a4064:
    if (ctx->pc == 0x4A4064u) {
        ctx->pc = 0x4A4064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4060u;
        // 0x4a4064: 0x2645f940  addiu       $a1, $s2, -0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A4068u;
        goto label_4a4068;
    }
    ctx->pc = 0x4A4060u;
    {
        const bool branch_taken_0x4a4060 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a4060) {
            ctx->pc = 0x4A4064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A4060u;
            // 0x4a4064: 0x2645f940  addiu       $a1, $s2, -0x6C0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965568));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A40D4u;
            goto label_4a40d4;
        }
    }
    ctx->pc = 0x4A4068u;
label_4a4068:
    // 0x4a4068: 0x10c50019  beq         $a2, $a1, . + 4 + (0x19 << 2)
label_4a406c:
    if (ctx->pc == 0x4A406Cu) {
        ctx->pc = 0x4A406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4068u;
        // 0x4a406c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A4070u;
        goto label_4a4070;
    }
    ctx->pc = 0x4A4068u;
    {
        const bool branch_taken_0x4a4068 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x4A406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4068u;
        // 0x4a406c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4068) {
            ctx->pc = 0x4A40D0u;
            goto label_4a40d0;
        }
    }
    ctx->pc = 0x4A4070u;
label_4a4070:
    // 0x4a4070: 0x8ce40014  lw          $a0, 0x14($a3)
    ctx->pc = 0x4a4070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_4a4074:
    // 0x4a4074: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x4a4074u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4a4078:
    // 0x4a4078: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a4078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4a407c:
    // 0x4a407c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4a407cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a4080:
    // 0x4a4080: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_4a4084:
    if (ctx->pc == 0x4A4084u) {
        ctx->pc = 0x4A4084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4080u;
        // 0x4a4084: 0x2645f940  addiu       $a1, $s2, -0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A4088u;
        goto label_4a4088;
    }
    ctx->pc = 0x4A4080u;
    {
        const bool branch_taken_0x4a4080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A4084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4080u;
        // 0x4a4084: 0x2645f940  addiu       $a1, $s2, -0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4080) {
            ctx->pc = 0x4A40D4u;
            goto label_4a40d4;
        }
    }
    ctx->pc = 0x4A4088u;
label_4a4088:
    // 0x4a4088: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x4a4088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4a408c:
    // 0x4a408c: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x4a408cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4a4090:
    // 0x4a4090: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x4a4090u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a4094:
    // 0x4a4094: 0x8ca60010  lw          $a2, 0x10($a1)
    ctx->pc = 0x4a4094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_4a4098:
    // 0x4a4098: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4a4098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4a409c:
    // 0x4a409c: 0x0  nop
    ctx->pc = 0x4a409cu;
    // NOP
label_4a40a0:
    // 0x4a40a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a40a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4a40a4:
    // 0x4a40a4: 0x14460002  bne         $v0, $a2, . + 4 + (0x2 << 2)
label_4a40a8:
    if (ctx->pc == 0x4A40A8u) {
        ctx->pc = 0x4A40A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A40A4u;
        // 0x4a40a8: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A40ACu;
        goto label_4a40ac;
    }
    ctx->pc = 0x4A40A4u;
    {
        const bool branch_taken_0x4a40a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x4A40A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A40A4u;
        // 0x4a40a8: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a40a4) {
            ctx->pc = 0x4A40B0u;
            goto label_4a40b0;
        }
    }
    ctx->pc = 0x4A40ACu;
label_4a40ac:
    // 0x4a40ac: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x4a40acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_4a40b0:
    // 0x4a40b0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4a40b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4a40b4:
    // 0x4a40b4: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
label_4a40b8:
    if (ctx->pc == 0x4A40B8u) {
        ctx->pc = 0x4A40B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A40B4u;
        // 0x4a40b8: 0x481018  mult        $v0, $v0, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A40BCu;
        goto label_4a40bc;
    }
    ctx->pc = 0x4A40B4u;
    {
        const bool branch_taken_0x4a40b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A40B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A40B4u;
        // 0x4a40b8: 0x481018  mult        $v0, $v0, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a40b4) {
            ctx->pc = 0x4A40D0u;
            goto label_4a40d0;
        }
    }
    ctx->pc = 0x4A40BCu;
label_4a40bc:
    // 0x4a40bc: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x4a40bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_4a40c0:
    // 0x4a40c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a40c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a40c4:
    // 0x4a40c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4a40c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a40c8:
    // 0x4a40c8: 0x5080fff5  beql        $a0, $zero, . + 4 + (-0xB << 2)
label_4a40cc:
    if (ctx->pc == 0x4A40CCu) {
        ctx->pc = 0x4A40CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A40C8u;
        // 0x4a40cc: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A40D0u;
        goto label_4a40d0;
    }
    ctx->pc = 0x4A40C8u;
    {
        const bool branch_taken_0x4a40c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a40c8) {
            ctx->pc = 0x4A40CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A40C8u;
            // 0x4a40cc: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A40A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a40a0;
        }
    }
    ctx->pc = 0x4A40D0u;
label_4a40d0:
    // 0x4a40d0: 0x2645f940  addiu       $a1, $s2, -0x6C0
    ctx->pc = 0x4a40d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965568));
label_4a40d4:
    // 0x4a40d4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x4a40d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4a40d8:
    // 0x4a40d8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4a40d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4a40dc:
    // 0x4a40dc: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x4a40dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_4a40e0:
    // 0x4a40e0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4a40e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4a40e4:
    // 0x4a40e4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a40e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4a40e8:
    // 0x4a40e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4a40e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a40ec:
    // 0x4a40ec: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
label_4a40f0:
    if (ctx->pc == 0x4A40F0u) {
        ctx->pc = 0x4A40F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A40ECu;
        // 0x4a40f0: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A40F4u;
        goto label_4a40f4;
    }
    ctx->pc = 0x4A40ECu;
    {
        const bool branch_taken_0x4a40ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a40ec) {
            ctx->pc = 0x4A40F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A40ECu;
            // 0x4a40f0: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A412Cu;
            goto label_4a412c;
        }
    }
    ctx->pc = 0x4A40F4u;
label_4a40f4:
    // 0x4a40f4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a40f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4a40f8:
    // 0x4a40f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a40f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4a40fc:
    // 0x4a40fc: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x4a40fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_4a4100:
    // 0x4a4100: 0x10000009  b           . + 4 + (0x9 << 2)
label_4a4104:
    if (ctx->pc == 0x4A4104u) {
        ctx->pc = 0x4A4104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4100u;
        // 0x4a4104: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A4108u;
        goto label_4a4108;
    }
    ctx->pc = 0x4A4100u;
    {
        const bool branch_taken_0x4a4100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4100u;
        // 0x4a4104: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4100) {
            ctx->pc = 0x4A4128u;
            goto label_4a4128;
        }
    }
    ctx->pc = 0x4A4108u;
label_4a4108:
    // 0x4a4108: 0x8ce30038  lw          $v1, 0x38($a3)
    ctx->pc = 0x4a4108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
label_4a410c:
    // 0x4a410c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_4a4110:
    if (ctx->pc == 0x4A4110u) {
        ctx->pc = 0x4A4110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A410Cu;
        // 0x4a4110: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A4114u;
        goto label_4a4114;
    }
    ctx->pc = 0x4A410Cu;
    {
        const bool branch_taken_0x4a410c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a410c) {
            ctx->pc = 0x4A4110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A410Cu;
            // 0x4a4110: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A412Cu;
            goto label_4a412c;
        }
    }
    ctx->pc = 0x4A4114u;
label_4a4114:
    // 0x4a4114: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x4a4114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4a4118:
    // 0x4a4118: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4a411c:
    if (ctx->pc == 0x4A411Cu) {
        ctx->pc = 0x4A411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4118u;
        // 0x4a411c: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A4120u;
        goto label_4a4120;
    }
    ctx->pc = 0x4A4118u;
    {
        const bool branch_taken_0x4a4118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a4118) {
            ctx->pc = 0x4A411Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A4118u;
            // 0x4a411c: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A412Cu;
            goto label_4a412c;
        }
    }
    ctx->pc = 0x4A4120u;
label_4a4120:
    // 0x4a4120: 0x60f809  jalr        $v1
label_4a4124:
    if (ctx->pc == 0x4A4124u) {
        ctx->pc = 0x4A4124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4120u;
        // 0x4a4124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A4128u;
        goto label_4a4128;
    }
    ctx->pc = 0x4A4120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4A4128u);
        ctx->pc = 0x4A4124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4120u;
        // 0x4a4124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A4120u, 0x4A4128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A4128u;
label_4a4128:
    // 0x4a4128: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x4a4128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_4a412c:
    // 0x4a412c: 0x2643f940  addiu       $v1, $s2, -0x6C0
    ctx->pc = 0x4a412cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965568));
label_4a4130:
    // 0x4a4130: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x4a4130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_4a4134:
    // 0x4a4134: 0x52220001  beql        $s1, $v0, . + 4 + (0x1 << 2)
label_4a4138:
    if (ctx->pc == 0x4A4138u) {
        ctx->pc = 0x4A4138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4134u;
        // 0x4a4138: 0xac600024  sw          $zero, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A413Cu;
        goto label_4a413c;
    }
    ctx->pc = 0x4A4134u;
    {
        const bool branch_taken_0x4a4134 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a4134) {
            ctx->pc = 0x4A4138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A4134u;
            // 0x4a4138: 0xac600024  sw          $zero, 0x24($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A413Cu;
            goto label_4a413c;
        }
    }
    ctx->pc = 0x4A413Cu;
label_4a413c:
    // 0x4a413c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4a413cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a4140:
    // 0x4a4140: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4a4140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a4144:
    // 0x4a4144: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4a4144u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a4148:
    // 0x4a4148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a4148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a414c:
    // 0x4a414c: 0x3e00008  jr          $ra
label_4a4150:
    if (ctx->pc == 0x4A4150u) {
        ctx->pc = 0x4A4150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A414Cu;
        // 0x4a4150: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A4154u;
        goto label_4a4154;
    }
    ctx->pc = 0x4A414Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A4150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A414Cu;
        // 0x4a4150: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A414Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A4154u;
label_4a4154:
    // 0x4a4154: 0x0  nop
    ctx->pc = 0x4a4154u;
    // NOP
    ctx->pc = 0x4a4158u;
}
