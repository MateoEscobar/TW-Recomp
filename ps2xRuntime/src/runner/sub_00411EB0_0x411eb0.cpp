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

// Function: sub_00411EB0
// Address: 0x411eb0 - 0x4120a8
void sub_00411EB0_0x411eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00411EB0_0x411eb0");
#endif

    switch (ctx->pc) {
        case 0x411eb0u: goto label_411eb0;
        case 0x411eb4u: goto label_411eb4;
        case 0x411eb8u: goto label_411eb8;
        case 0x411ebcu: goto label_411ebc;
        case 0x411ec0u: goto label_411ec0;
        case 0x411ec4u: goto label_411ec4;
        case 0x411ec8u: goto label_411ec8;
        case 0x411eccu: goto label_411ecc;
        case 0x411ed0u: goto label_411ed0;
        case 0x411ed4u: goto label_411ed4;
        case 0x411ed8u: goto label_411ed8;
        case 0x411edcu: goto label_411edc;
        case 0x411ee0u: goto label_411ee0;
        case 0x411ee4u: goto label_411ee4;
        case 0x411ee8u: goto label_411ee8;
        case 0x411eecu: goto label_411eec;
        case 0x411ef0u: goto label_411ef0;
        case 0x411ef4u: goto label_411ef4;
        case 0x411ef8u: goto label_411ef8;
        case 0x411efcu: goto label_411efc;
        case 0x411f00u: goto label_411f00;
        case 0x411f04u: goto label_411f04;
        case 0x411f08u: goto label_411f08;
        case 0x411f0cu: goto label_411f0c;
        case 0x411f10u: goto label_411f10;
        case 0x411f14u: goto label_411f14;
        case 0x411f18u: goto label_411f18;
        case 0x411f1cu: goto label_411f1c;
        case 0x411f20u: goto label_411f20;
        case 0x411f24u: goto label_411f24;
        case 0x411f28u: goto label_411f28;
        case 0x411f2cu: goto label_411f2c;
        case 0x411f30u: goto label_411f30;
        case 0x411f34u: goto label_411f34;
        case 0x411f38u: goto label_411f38;
        case 0x411f3cu: goto label_411f3c;
        case 0x411f40u: goto label_411f40;
        case 0x411f44u: goto label_411f44;
        case 0x411f48u: goto label_411f48;
        case 0x411f4cu: goto label_411f4c;
        case 0x411f50u: goto label_411f50;
        case 0x411f54u: goto label_411f54;
        case 0x411f58u: goto label_411f58;
        case 0x411f5cu: goto label_411f5c;
        case 0x411f60u: goto label_411f60;
        case 0x411f64u: goto label_411f64;
        case 0x411f68u: goto label_411f68;
        case 0x411f6cu: goto label_411f6c;
        case 0x411f70u: goto label_411f70;
        case 0x411f74u: goto label_411f74;
        case 0x411f78u: goto label_411f78;
        case 0x411f7cu: goto label_411f7c;
        case 0x411f80u: goto label_411f80;
        case 0x411f84u: goto label_411f84;
        case 0x411f88u: goto label_411f88;
        case 0x411f8cu: goto label_411f8c;
        case 0x411f90u: goto label_411f90;
        case 0x411f94u: goto label_411f94;
        case 0x411f98u: goto label_411f98;
        case 0x411f9cu: goto label_411f9c;
        case 0x411fa0u: goto label_411fa0;
        case 0x411fa4u: goto label_411fa4;
        case 0x411fa8u: goto label_411fa8;
        case 0x411facu: goto label_411fac;
        case 0x411fb0u: goto label_411fb0;
        case 0x411fb4u: goto label_411fb4;
        case 0x411fb8u: goto label_411fb8;
        case 0x411fbcu: goto label_411fbc;
        case 0x411fc0u: goto label_411fc0;
        case 0x411fc4u: goto label_411fc4;
        case 0x411fc8u: goto label_411fc8;
        case 0x411fccu: goto label_411fcc;
        case 0x411fd0u: goto label_411fd0;
        case 0x411fd4u: goto label_411fd4;
        case 0x411fd8u: goto label_411fd8;
        case 0x411fdcu: goto label_411fdc;
        case 0x411fe0u: goto label_411fe0;
        case 0x411fe4u: goto label_411fe4;
        case 0x411fe8u: goto label_411fe8;
        case 0x411fecu: goto label_411fec;
        case 0x411ff0u: goto label_411ff0;
        case 0x411ff4u: goto label_411ff4;
        case 0x411ff8u: goto label_411ff8;
        case 0x411ffcu: goto label_411ffc;
        case 0x412000u: goto label_412000;
        case 0x412004u: goto label_412004;
        case 0x412008u: goto label_412008;
        case 0x41200cu: goto label_41200c;
        case 0x412010u: goto label_412010;
        case 0x412014u: goto label_412014;
        case 0x412018u: goto label_412018;
        case 0x41201cu: goto label_41201c;
        case 0x412020u: goto label_412020;
        case 0x412024u: goto label_412024;
        case 0x412028u: goto label_412028;
        case 0x41202cu: goto label_41202c;
        case 0x412030u: goto label_412030;
        case 0x412034u: goto label_412034;
        case 0x412038u: goto label_412038;
        case 0x41203cu: goto label_41203c;
        case 0x412040u: goto label_412040;
        case 0x412044u: goto label_412044;
        case 0x412048u: goto label_412048;
        case 0x41204cu: goto label_41204c;
        case 0x412050u: goto label_412050;
        case 0x412054u: goto label_412054;
        case 0x412058u: goto label_412058;
        case 0x41205cu: goto label_41205c;
        case 0x412060u: goto label_412060;
        case 0x412064u: goto label_412064;
        case 0x412068u: goto label_412068;
        case 0x41206cu: goto label_41206c;
        case 0x412070u: goto label_412070;
        case 0x412074u: goto label_412074;
        case 0x412078u: goto label_412078;
        case 0x41207cu: goto label_41207c;
        case 0x412080u: goto label_412080;
        case 0x412084u: goto label_412084;
        case 0x412088u: goto label_412088;
        case 0x41208cu: goto label_41208c;
        case 0x412090u: goto label_412090;
        case 0x412094u: goto label_412094;
        case 0x412098u: goto label_412098;
        case 0x41209cu: goto label_41209c;
        case 0x4120a0u: goto label_4120a0;
        case 0x4120a4u: goto label_4120a4;
        default: break;
    }

    ctx->pc = 0x411eb0u;

label_411eb0:
    // 0x411eb0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x411eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_411eb4:
    // 0x411eb4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x411eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_411eb8:
    // 0x411eb8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x411eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_411ebc:
    // 0x411ebc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x411ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_411ec0:
    // 0x411ec0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x411ec0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_411ec4:
    // 0x411ec4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x411ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_411ec8:
    // 0x411ec8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x411ec8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_411ecc:
    // 0x411ecc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x411eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_411ed0:
    // 0x411ed0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x411ed0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_411ed4:
    // 0x411ed4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x411ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_411ed8:
    // 0x411ed8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x411ed8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_411edc:
    // 0x411edc: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x411edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_411ee0:
    // 0x411ee0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x411ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_411ee4:
    // 0x411ee4: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x411ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_411ee8:
    // 0x411ee8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x411ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_411eec:
    // 0x411eec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x411eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_411ef0:
    // 0x411ef0: 0xc4408e20  lwc1        $f0, -0x71E0($v0)
    ctx->pc = 0x411ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294938144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_411ef4:
    // 0x411ef4: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x411ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_411ef8:
    // 0x411ef8: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x411ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_411efc:
    // 0x411efc: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x411efcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_411f00:
    // 0x411f00: 0x8e622168  lw          $v0, 0x2168($s3)
    ctx->pc = 0x411f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8552)));
label_411f04:
    // 0x411f04: 0x1840002e  blez        $v0, . + 4 + (0x2E << 2)
label_411f08:
    if (ctx->pc == 0x411F08u) {
        ctx->pc = 0x411F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411F04u;
        // 0x411f08: 0xae600014  sw          $zero, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411F0Cu;
        goto label_411f0c;
    }
    ctx->pc = 0x411F04u;
    {
        const bool branch_taken_0x411f04 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x411F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411F04u;
        // 0x411f08: 0xae600014  sw          $zero, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411f04) {
            ctx->pc = 0x411FC0u;
            goto label_411fc0;
        }
    }
    ctx->pc = 0x411F0Cu;
label_411f0c:
    // 0x411f0c: 0x267708f8  addiu       $s7, $s3, 0x8F8
    ctx->pc = 0x411f0cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 2296));
label_411f10:
    // 0x411f10: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x411f10u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_411f14:
    // 0x411f14: 0x3c1e0055  lui         $fp, 0x55
    ctx->pc = 0x411f14u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)85 << 16));
label_411f18:
    // 0x411f18: 0x26720038  addiu       $s2, $s3, 0x38
    ctx->pc = 0x411f18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
label_411f1c:
    // 0x411f1c: 0x0  nop
    ctx->pc = 0x411f1cu;
    // NOP
label_411f20:
    // 0x411f20: 0x111142  srl         $v0, $s1, 5
    ctx->pc = 0x411f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 5));
label_411f24:
    // 0x411f24: 0x3224001f  andi        $a0, $s1, 0x1F
    ctx->pc = 0x411f24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
label_411f28:
    // 0x411f28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x411f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_411f2c:
    // 0x411f2c: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x411f2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_411f30:
    // 0x411f30: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x411f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_411f34:
    // 0x411f34: 0x962804  sllv        $a1, $s6, $a0
    ctx->pc = 0x411f34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), GPR_U32(ctx, 4) & 0x1F));
label_411f38:
    // 0x411f38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x411f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_411f3c:
    // 0x411f3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x411f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_411f40:
    // 0x411f40: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x411f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_411f44:
    // 0x411f44: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x411f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_411f48:
    // 0x411f48: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_411f4c:
    if (ctx->pc == 0x411F4Cu) {
        ctx->pc = 0x411F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411F48u;
        // 0x411f4c: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411F50u;
        goto label_411f50;
    }
    ctx->pc = 0x411F48u;
    {
        const bool branch_taken_0x411f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x411F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411F48u;
        // 0x411f4c: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411f48) {
            ctx->pc = 0x411F78u;
            goto label_411f78;
        }
    }
    ctx->pc = 0x411F50u;
label_411f50:
    // 0x411f50: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x411f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_411f54:
    // 0x411f54: 0x8fc43790  lw          $a0, 0x3790($fp)
    ctx->pc = 0x411f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 14224)));
label_411f58:
    // 0x411f58: 0x8c62ced0  lw          $v0, -0x3130($v1)
    ctx->pc = 0x411f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954704)));
label_411f5c:
    // 0x411f5c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x411f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_411f60:
    // 0x411f60: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x411f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_411f64:
    // 0x411f64: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
label_411f68:
    if (ctx->pc == 0x411F68u) {
        ctx->pc = 0x411F6Cu;
        goto label_411f6c;
    }
    ctx->pc = 0x411F64u;
    {
        const bool branch_taken_0x411f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x411f64) {
            ctx->pc = 0x411F78u;
            goto label_411f78;
        }
    }
    ctx->pc = 0x411F6Cu;
label_411f6c:
    // 0x411f6c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x411f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_411f70:
    // 0x411f70: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x411f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_411f74:
    // 0x411f74: 0x2c2300b  movn        $a2, $s6, $v0
    ctx->pc = 0x411f74u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 22));
label_411f78:
    // 0x411f78: 0x50c0000d  beql        $a2, $zero, . + 4 + (0xD << 2)
label_411f7c:
    if (ctx->pc == 0x411F7Cu) {
        ctx->pc = 0x411F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411F78u;
        // 0x411f7c: 0x8e622168  lw          $v0, 0x2168($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411F80u;
        goto label_411f80;
    }
    ctx->pc = 0x411F78u;
    {
        const bool branch_taken_0x411f78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x411f78) {
            ctx->pc = 0x411F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x411F78u;
            // 0x411f7c: 0x8e622168  lw          $v0, 0x2168($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x411FB0u;
            goto label_411fb0;
        }
    }
    ctx->pc = 0x411F80u;
label_411f80:
    // 0x411f80: 0xc10407c  jal         func_4101F0
label_411f84:
    if (ctx->pc == 0x411F84u) {
        ctx->pc = 0x411F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411F80u;
        // 0x411f84: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411F88u;
        goto label_411f88;
    }
    ctx->pc = 0x411F80u;
    SET_GPR_U32(ctx, 31, 0x411F88u);
    ctx->pc = 0x411F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411F80u;
    // 0x411f84: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4101F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4101F0u, 0x411F80u, 0x411F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411F88u;
label_411f88:
    // 0x411f88: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x411f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_411f8c:
    // 0x411f8c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x411f8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_411f90:
    // 0x411f90: 0x0  nop
    ctx->pc = 0x411f90u;
    // NOP
label_411f94:
    // 0x411f94: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_411f98:
    if (ctx->pc == 0x411F98u) {
        ctx->pc = 0x411F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411F94u;
        // 0x411f98: 0x8e622168  lw          $v0, 0x2168($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411F9Cu;
        goto label_411f9c;
    }
    ctx->pc = 0x411F94u;
    {
        const bool branch_taken_0x411f94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x411f94) {
            ctx->pc = 0x411F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x411F94u;
            // 0x411f98: 0x8e622168  lw          $v0, 0x2168($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x411FB0u;
            goto label_411fb0;
        }
    }
    ctx->pc = 0x411F9Cu;
label_411f9c:
    // 0x411f9c: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x411f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
label_411fa0:
    // 0x411fa0: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x411fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_411fa4:
    // 0x411fa4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x411fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_411fa8:
    // 0x411fa8: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x411fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_411fac:
    // 0x411fac: 0x8e622168  lw          $v0, 0x2168($s3)
    ctx->pc = 0x411facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8552)));
label_411fb0:
    // 0x411fb0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x411fb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_411fb4:
    // 0x411fb4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x411fb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_411fb8:
    // 0x411fb8: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_411fbc:
    if (ctx->pc == 0x411FBCu) {
        ctx->pc = 0x411FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411FB8u;
        // 0x411fbc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411FC0u;
        goto label_411fc0;
    }
    ctx->pc = 0x411FB8u;
    {
        const bool branch_taken_0x411fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x411FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411FB8u;
        // 0x411fbc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411fb8) {
            ctx->pc = 0x411F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_411f20;
        }
    }
    ctx->pc = 0x411FC0u;
label_411fc0:
    // 0x411fc0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x411fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_411fc4:
    // 0x411fc4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_411fc8:
    if (ctx->pc == 0x411FC8u) {
        ctx->pc = 0x411FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411FC4u;
        // 0x411fc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411FCCu;
        goto label_411fcc;
    }
    ctx->pc = 0x411FC4u;
    {
        const bool branch_taken_0x411fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x411FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411FC4u;
        // 0x411fc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411fc4) {
            ctx->pc = 0x412000u;
            goto label_412000;
        }
    }
    ctx->pc = 0x411FCCu;
label_411fcc:
    // 0x411fcc: 0xc047e6c  jal         func_11F9B0
label_411fd0:
    if (ctx->pc == 0x411FD0u) {
        ctx->pc = 0x411FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411FCCu;
        // 0x411fd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411FD4u;
        goto label_411fd4;
    }
    ctx->pc = 0x411FCCu;
    SET_GPR_U32(ctx, 31, 0x411FD4u);
    ctx->pc = 0x411FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411FCCu;
    // 0x411fd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x411FCCu, 0x411FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411FD4u;
label_411fd4:
    // 0x411fd4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x411fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_411fd8:
    // 0x411fd8: 0x84640210  lh          $a0, 0x210($v1)
    ctx->pc = 0x411fd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 528)));
label_411fdc:
    // 0x411fdc: 0x8c650214  lw          $a1, 0x214($v1)
    ctx->pc = 0x411fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 532)));
label_411fe0:
    // 0x411fe0: 0xa0f809  jalr        $a1
label_411fe4:
    if (ctx->pc == 0x411FE4u) {
        ctx->pc = 0x411FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411FE0u;
        // 0x411fe4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411FE8u;
        goto label_411fe8;
    }
    ctx->pc = 0x411FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x411FE8u);
        ctx->pc = 0x411FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411FE0u;
        // 0x411fe4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411FE0u, 0x411FE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x411FE8u;
label_411fe8:
    // 0x411fe8: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x411fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_411fec:
    // 0x411fec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x411fecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_411ff0:
    // 0x411ff0: 0x0  nop
    ctx->pc = 0x411ff0u;
    // NOP
label_411ff4:
    // 0x411ff4: 0x4502001f  bc1fl       . + 4 + (0x1F << 2)
label_411ff8:
    if (ctx->pc == 0x411FF8u) {
        ctx->pc = 0x411FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411FF4u;
        // 0x411ff8: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411FFCu;
        goto label_411ffc;
    }
    ctx->pc = 0x411FF4u;
    {
        const bool branch_taken_0x411ff4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x411ff4) {
            ctx->pc = 0x411FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x411FF4u;
            // 0x411ff8: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412074u;
            goto label_412074;
        }
    }
    ctx->pc = 0x411FFCu;
label_411ffc:
    // 0x411ffc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x411ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_412000:
    // 0x412000: 0x8e632168  lw          $v1, 0x2168($s3)
    ctx->pc = 0x412000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8552)));
label_412004:
    // 0x412004: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x412004u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_412008:
    // 0x412008: 0x18600019  blez        $v1, . + 4 + (0x19 << 2)
label_41200c:
    if (ctx->pc == 0x41200Cu) {
        ctx->pc = 0x41200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412008u;
        // 0x41200c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412010u;
        goto label_412010;
    }
    ctx->pc = 0x412008u;
    {
        const bool branch_taken_0x412008 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x41200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412008u;
        // 0x41200c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412008) {
            ctx->pc = 0x412070u;
            goto label_412070;
        }
    }
    ctx->pc = 0x412010u;
label_412010:
    // 0x412010: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x412010u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_412014:
    // 0x412014: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x412014u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_412018:
    // 0x412018: 0x26710038  addiu       $s1, $s3, 0x38
    ctx->pc = 0x412018u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
label_41201c:
    // 0x41201c: 0x0  nop
    ctx->pc = 0x41201cu;
    // NOP
label_412020:
    // 0x412020: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x412020u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_412024:
    // 0x412024: 0x8ee2ced0  lw          $v0, -0x3130($s7)
    ctx->pc = 0x412024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954704)));
label_412028:
    // 0x412028: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x412028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_41202c:
    // 0x41202c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x41202cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_412030:
    // 0x412030: 0x5076000b  beql        $v1, $s6, . + 4 + (0xB << 2)
label_412034:
    if (ctx->pc == 0x412034u) {
        ctx->pc = 0x412034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412030u;
        // 0x412034: 0x8e622168  lw          $v0, 0x2168($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412038u;
        goto label_412038;
    }
    ctx->pc = 0x412030u;
    {
        const bool branch_taken_0x412030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        if (branch_taken_0x412030) {
            ctx->pc = 0x412034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412030u;
            // 0x412034: 0x8e622168  lw          $v0, 0x2168($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412060u;
            goto label_412060;
        }
    }
    ctx->pc = 0x412038u;
label_412038:
    // 0x412038: 0xc10407c  jal         func_4101F0
label_41203c:
    if (ctx->pc == 0x41203Cu) {
        ctx->pc = 0x41203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412038u;
        // 0x41203c: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412040u;
        goto label_412040;
    }
    ctx->pc = 0x412038u;
    SET_GPR_U32(ctx, 31, 0x412040u);
    ctx->pc = 0x41203Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412038u;
    // 0x41203c: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4101F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4101F0u, 0x412038u, 0x412040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412040u;
label_412040:
    // 0x412040: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x412040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_412044:
    // 0x412044: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x412044u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_412048:
    // 0x412048: 0x0  nop
    ctx->pc = 0x412048u;
    // NOP
label_41204c:
    // 0x41204c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_412050:
    if (ctx->pc == 0x412050u) {
        ctx->pc = 0x412050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41204Cu;
        // 0x412050: 0x8e622168  lw          $v0, 0x2168($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412054u;
        goto label_412054;
    }
    ctx->pc = 0x41204Cu;
    {
        const bool branch_taken_0x41204c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x41204c) {
            ctx->pc = 0x412050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41204Cu;
            // 0x412050: 0x8e622168  lw          $v0, 0x2168($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412060u;
            goto label_412060;
        }
    }
    ctx->pc = 0x412054u;
label_412054:
    // 0x412054: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x412054u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
label_412058:
    // 0x412058: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x412058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_41205c:
    // 0x41205c: 0x8e622168  lw          $v0, 0x2168($s3)
    ctx->pc = 0x41205cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8552)));
label_412060:
    // 0x412060: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x412060u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_412064:
    // 0x412064: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x412064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_412068:
    // 0x412068: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_41206c:
    if (ctx->pc == 0x41206Cu) {
        ctx->pc = 0x41206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412068u;
        // 0x41206c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412070u;
        goto label_412070;
    }
    ctx->pc = 0x412068u;
    {
        const bool branch_taken_0x412068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412068u;
        // 0x41206c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412068) {
            ctx->pc = 0x412020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_412020;
        }
    }
    ctx->pc = 0x412070u;
label_412070:
    // 0x412070: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x412070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_412074:
    // 0x412074: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x412074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_412078:
    // 0x412078: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x412078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_41207c:
    // 0x41207c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x41207cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_412080:
    // 0x412080: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x412080u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_412084:
    // 0x412084: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x412084u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_412088:
    // 0x412088: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x412088u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_41208c:
    // 0x41208c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x41208cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_412090:
    // 0x412090: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x412090u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_412094:
    // 0x412094: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x412094u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_412098:
    // 0x412098: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x412098u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41209c:
    // 0x41209c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41209cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4120a0:
    // 0x4120a0: 0x3e00008  jr          $ra
label_4120a4:
    if (ctx->pc == 0x4120A4u) {
        ctx->pc = 0x4120A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4120A0u;
        // 0x4120a4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4120A8u;
        goto label_fallthrough_0x4120a0;
    }
    ctx->pc = 0x4120A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4120A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4120A0u;
        // 0x4120a4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4120A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4120a0:
    ctx->pc = 0x4120A8u;
}
