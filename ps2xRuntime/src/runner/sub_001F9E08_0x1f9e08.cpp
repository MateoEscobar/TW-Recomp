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

// Function: sub_001F9E08
// Address: 0x1f9e08 - 0x1fa170
void sub_001F9E08_0x1f9e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9E08_0x1f9e08");
#endif

    switch (ctx->pc) {
        case 0x1f9e08u: goto label_1f9e08;
        case 0x1f9e0cu: goto label_1f9e0c;
        case 0x1f9e10u: goto label_1f9e10;
        case 0x1f9e14u: goto label_1f9e14;
        case 0x1f9e18u: goto label_1f9e18;
        case 0x1f9e1cu: goto label_1f9e1c;
        case 0x1f9e20u: goto label_1f9e20;
        case 0x1f9e24u: goto label_1f9e24;
        case 0x1f9e28u: goto label_1f9e28;
        case 0x1f9e2cu: goto label_1f9e2c;
        case 0x1f9e30u: goto label_1f9e30;
        case 0x1f9e34u: goto label_1f9e34;
        case 0x1f9e38u: goto label_1f9e38;
        case 0x1f9e3cu: goto label_1f9e3c;
        case 0x1f9e40u: goto label_1f9e40;
        case 0x1f9e44u: goto label_1f9e44;
        case 0x1f9e48u: goto label_1f9e48;
        case 0x1f9e4cu: goto label_1f9e4c;
        case 0x1f9e50u: goto label_1f9e50;
        case 0x1f9e54u: goto label_1f9e54;
        case 0x1f9e58u: goto label_1f9e58;
        case 0x1f9e5cu: goto label_1f9e5c;
        case 0x1f9e60u: goto label_1f9e60;
        case 0x1f9e64u: goto label_1f9e64;
        case 0x1f9e68u: goto label_1f9e68;
        case 0x1f9e6cu: goto label_1f9e6c;
        case 0x1f9e70u: goto label_1f9e70;
        case 0x1f9e74u: goto label_1f9e74;
        case 0x1f9e78u: goto label_1f9e78;
        case 0x1f9e7cu: goto label_1f9e7c;
        case 0x1f9e80u: goto label_1f9e80;
        case 0x1f9e84u: goto label_1f9e84;
        case 0x1f9e88u: goto label_1f9e88;
        case 0x1f9e8cu: goto label_1f9e8c;
        case 0x1f9e90u: goto label_1f9e90;
        case 0x1f9e94u: goto label_1f9e94;
        case 0x1f9e98u: goto label_1f9e98;
        case 0x1f9e9cu: goto label_1f9e9c;
        case 0x1f9ea0u: goto label_1f9ea0;
        case 0x1f9ea4u: goto label_1f9ea4;
        case 0x1f9ea8u: goto label_1f9ea8;
        case 0x1f9eacu: goto label_1f9eac;
        case 0x1f9eb0u: goto label_1f9eb0;
        case 0x1f9eb4u: goto label_1f9eb4;
        case 0x1f9eb8u: goto label_1f9eb8;
        case 0x1f9ebcu: goto label_1f9ebc;
        case 0x1f9ec0u: goto label_1f9ec0;
        case 0x1f9ec4u: goto label_1f9ec4;
        case 0x1f9ec8u: goto label_1f9ec8;
        case 0x1f9eccu: goto label_1f9ecc;
        case 0x1f9ed0u: goto label_1f9ed0;
        case 0x1f9ed4u: goto label_1f9ed4;
        case 0x1f9ed8u: goto label_1f9ed8;
        case 0x1f9edcu: goto label_1f9edc;
        case 0x1f9ee0u: goto label_1f9ee0;
        case 0x1f9ee4u: goto label_1f9ee4;
        case 0x1f9ee8u: goto label_1f9ee8;
        case 0x1f9eecu: goto label_1f9eec;
        case 0x1f9ef0u: goto label_1f9ef0;
        case 0x1f9ef4u: goto label_1f9ef4;
        case 0x1f9ef8u: goto label_1f9ef8;
        case 0x1f9efcu: goto label_1f9efc;
        case 0x1f9f00u: goto label_1f9f00;
        case 0x1f9f04u: goto label_1f9f04;
        case 0x1f9f08u: goto label_1f9f08;
        case 0x1f9f0cu: goto label_1f9f0c;
        case 0x1f9f10u: goto label_1f9f10;
        case 0x1f9f14u: goto label_1f9f14;
        case 0x1f9f18u: goto label_1f9f18;
        case 0x1f9f1cu: goto label_1f9f1c;
        case 0x1f9f20u: goto label_1f9f20;
        case 0x1f9f24u: goto label_1f9f24;
        case 0x1f9f28u: goto label_1f9f28;
        case 0x1f9f2cu: goto label_1f9f2c;
        case 0x1f9f30u: goto label_1f9f30;
        case 0x1f9f34u: goto label_1f9f34;
        case 0x1f9f38u: goto label_1f9f38;
        case 0x1f9f3cu: goto label_1f9f3c;
        case 0x1f9f40u: goto label_1f9f40;
        case 0x1f9f44u: goto label_1f9f44;
        case 0x1f9f48u: goto label_1f9f48;
        case 0x1f9f4cu: goto label_1f9f4c;
        case 0x1f9f50u: goto label_1f9f50;
        case 0x1f9f54u: goto label_1f9f54;
        case 0x1f9f58u: goto label_1f9f58;
        case 0x1f9f5cu: goto label_1f9f5c;
        case 0x1f9f60u: goto label_1f9f60;
        case 0x1f9f64u: goto label_1f9f64;
        case 0x1f9f68u: goto label_1f9f68;
        case 0x1f9f6cu: goto label_1f9f6c;
        case 0x1f9f70u: goto label_1f9f70;
        case 0x1f9f74u: goto label_1f9f74;
        case 0x1f9f78u: goto label_1f9f78;
        case 0x1f9f7cu: goto label_1f9f7c;
        case 0x1f9f80u: goto label_1f9f80;
        case 0x1f9f84u: goto label_1f9f84;
        case 0x1f9f88u: goto label_1f9f88;
        case 0x1f9f8cu: goto label_1f9f8c;
        case 0x1f9f90u: goto label_1f9f90;
        case 0x1f9f94u: goto label_1f9f94;
        case 0x1f9f98u: goto label_1f9f98;
        case 0x1f9f9cu: goto label_1f9f9c;
        case 0x1f9fa0u: goto label_1f9fa0;
        case 0x1f9fa4u: goto label_1f9fa4;
        case 0x1f9fa8u: goto label_1f9fa8;
        case 0x1f9facu: goto label_1f9fac;
        case 0x1f9fb0u: goto label_1f9fb0;
        case 0x1f9fb4u: goto label_1f9fb4;
        case 0x1f9fb8u: goto label_1f9fb8;
        case 0x1f9fbcu: goto label_1f9fbc;
        case 0x1f9fc0u: goto label_1f9fc0;
        case 0x1f9fc4u: goto label_1f9fc4;
        case 0x1f9fc8u: goto label_1f9fc8;
        case 0x1f9fccu: goto label_1f9fcc;
        case 0x1f9fd0u: goto label_1f9fd0;
        case 0x1f9fd4u: goto label_1f9fd4;
        case 0x1f9fd8u: goto label_1f9fd8;
        case 0x1f9fdcu: goto label_1f9fdc;
        case 0x1f9fe0u: goto label_1f9fe0;
        case 0x1f9fe4u: goto label_1f9fe4;
        case 0x1f9fe8u: goto label_1f9fe8;
        case 0x1f9fecu: goto label_1f9fec;
        case 0x1f9ff0u: goto label_1f9ff0;
        case 0x1f9ff4u: goto label_1f9ff4;
        case 0x1f9ff8u: goto label_1f9ff8;
        case 0x1f9ffcu: goto label_1f9ffc;
        case 0x1fa000u: goto label_1fa000;
        case 0x1fa004u: goto label_1fa004;
        case 0x1fa008u: goto label_1fa008;
        case 0x1fa00cu: goto label_1fa00c;
        case 0x1fa010u: goto label_1fa010;
        case 0x1fa014u: goto label_1fa014;
        case 0x1fa018u: goto label_1fa018;
        case 0x1fa01cu: goto label_1fa01c;
        case 0x1fa020u: goto label_1fa020;
        case 0x1fa024u: goto label_1fa024;
        case 0x1fa028u: goto label_1fa028;
        case 0x1fa02cu: goto label_1fa02c;
        case 0x1fa030u: goto label_1fa030;
        case 0x1fa034u: goto label_1fa034;
        case 0x1fa038u: goto label_1fa038;
        case 0x1fa03cu: goto label_1fa03c;
        case 0x1fa040u: goto label_1fa040;
        case 0x1fa044u: goto label_1fa044;
        case 0x1fa048u: goto label_1fa048;
        case 0x1fa04cu: goto label_1fa04c;
        case 0x1fa050u: goto label_1fa050;
        case 0x1fa054u: goto label_1fa054;
        case 0x1fa058u: goto label_1fa058;
        case 0x1fa05cu: goto label_1fa05c;
        case 0x1fa060u: goto label_1fa060;
        case 0x1fa064u: goto label_1fa064;
        case 0x1fa068u: goto label_1fa068;
        case 0x1fa06cu: goto label_1fa06c;
        case 0x1fa070u: goto label_1fa070;
        case 0x1fa074u: goto label_1fa074;
        case 0x1fa078u: goto label_1fa078;
        case 0x1fa07cu: goto label_1fa07c;
        case 0x1fa080u: goto label_1fa080;
        case 0x1fa084u: goto label_1fa084;
        case 0x1fa088u: goto label_1fa088;
        case 0x1fa08cu: goto label_1fa08c;
        case 0x1fa090u: goto label_1fa090;
        case 0x1fa094u: goto label_1fa094;
        case 0x1fa098u: goto label_1fa098;
        case 0x1fa09cu: goto label_1fa09c;
        case 0x1fa0a0u: goto label_1fa0a0;
        case 0x1fa0a4u: goto label_1fa0a4;
        case 0x1fa0a8u: goto label_1fa0a8;
        case 0x1fa0acu: goto label_1fa0ac;
        case 0x1fa0b0u: goto label_1fa0b0;
        case 0x1fa0b4u: goto label_1fa0b4;
        case 0x1fa0b8u: goto label_1fa0b8;
        case 0x1fa0bcu: goto label_1fa0bc;
        case 0x1fa0c0u: goto label_1fa0c0;
        case 0x1fa0c4u: goto label_1fa0c4;
        case 0x1fa0c8u: goto label_1fa0c8;
        case 0x1fa0ccu: goto label_1fa0cc;
        case 0x1fa0d0u: goto label_1fa0d0;
        case 0x1fa0d4u: goto label_1fa0d4;
        case 0x1fa0d8u: goto label_1fa0d8;
        case 0x1fa0dcu: goto label_1fa0dc;
        case 0x1fa0e0u: goto label_1fa0e0;
        case 0x1fa0e4u: goto label_1fa0e4;
        case 0x1fa0e8u: goto label_1fa0e8;
        case 0x1fa0ecu: goto label_1fa0ec;
        case 0x1fa0f0u: goto label_1fa0f0;
        case 0x1fa0f4u: goto label_1fa0f4;
        case 0x1fa0f8u: goto label_1fa0f8;
        case 0x1fa0fcu: goto label_1fa0fc;
        case 0x1fa100u: goto label_1fa100;
        case 0x1fa104u: goto label_1fa104;
        case 0x1fa108u: goto label_1fa108;
        case 0x1fa10cu: goto label_1fa10c;
        case 0x1fa110u: goto label_1fa110;
        case 0x1fa114u: goto label_1fa114;
        case 0x1fa118u: goto label_1fa118;
        case 0x1fa11cu: goto label_1fa11c;
        case 0x1fa120u: goto label_1fa120;
        case 0x1fa124u: goto label_1fa124;
        case 0x1fa128u: goto label_1fa128;
        case 0x1fa12cu: goto label_1fa12c;
        case 0x1fa130u: goto label_1fa130;
        case 0x1fa134u: goto label_1fa134;
        case 0x1fa138u: goto label_1fa138;
        case 0x1fa13cu: goto label_1fa13c;
        case 0x1fa140u: goto label_1fa140;
        case 0x1fa144u: goto label_1fa144;
        case 0x1fa148u: goto label_1fa148;
        case 0x1fa14cu: goto label_1fa14c;
        case 0x1fa150u: goto label_1fa150;
        case 0x1fa154u: goto label_1fa154;
        case 0x1fa158u: goto label_1fa158;
        case 0x1fa15cu: goto label_1fa15c;
        case 0x1fa160u: goto label_1fa160;
        case 0x1fa164u: goto label_1fa164;
        case 0x1fa168u: goto label_1fa168;
        case 0x1fa16cu: goto label_1fa16c;
        default: break;
    }

    ctx->pc = 0x1f9e08u;

label_1f9e08:
    // 0x1f9e08: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1f9e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_1f9e0c:
    // 0x1f9e0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f9e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f9e10:
    // 0x1f9e10: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x1f9e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
label_1f9e14:
    // 0x1f9e14: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x1f9e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1f9e18:
    // 0x1f9e18: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x1f9e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
label_1f9e1c:
    // 0x1f9e1c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f9e1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f9e20:
    // 0x1f9e20: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x1f9e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
label_1f9e24:
    // 0x1f9e24: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x1f9e24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1f9e28:
    // 0x1f9e28: 0x7fb70110  sq          $s7, 0x110($sp)
    ctx->pc = 0x1f9e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 23));
label_1f9e2c:
    // 0x1f9e2c: 0x27b400a0  addiu       $s4, $sp, 0xA0
    ctx->pc = 0x1f9e2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1f9e30:
    // 0x1f9e30: 0x7fbe0100  sq          $fp, 0x100($sp)
    ctx->pc = 0x1f9e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 30));
label_1f9e34:
    // 0x1f9e34: 0x27b700b0  addiu       $s7, $sp, 0xB0
    ctx->pc = 0x1f9e34u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1f9e38:
    // 0x1f9e38: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x1f9e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
label_1f9e3c:
    // 0x1f9e3c: 0x27be00c0  addiu       $fp, $sp, 0xC0
    ctx->pc = 0x1f9e3cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1f9e40:
    // 0x1f9e40: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x1f9e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
label_1f9e44:
    // 0x1f9e44: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f9e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f9e48:
    // 0x1f9e48: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x1f9e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
label_1f9e4c:
    // 0x1f9e4c: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1f9e4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f9e50:
    // 0x1f9e50: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x1f9e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
label_1f9e54:
    // 0x1f9e54: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x1f9e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
label_1f9e58:
    // 0x1f9e58: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x1f9e58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_1f9e5c:
    // 0x1f9e5c: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x1f9e5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_1f9e60:
    // 0x1f9e60: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1f9e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_1f9e64:
    // 0x1f9e64: 0x0  nop
    ctx->pc = 0x1f9e64u;
    // NOP
label_1f9e68:
    // 0x1f9e68: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1f9e68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1f9e6c:
    // 0x1f9e6c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f9e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1f9e70:
    // 0x1f9e70: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1f9e70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_1f9e74:
    // 0x1f9e74: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1f9e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1f9e78:
    // 0x1f9e78: 0x2ca20014  sltiu       $v0, $a1, 0x14
    ctx->pc = 0x1f9e78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_1f9e7c:
    // 0x1f9e7c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1f9e80:
    if (ctx->pc == 0x1F9E80u) {
        ctx->pc = 0x1F9E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E7Cu;
        // 0x1f9e80: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9E84u;
        goto label_1f9e84;
    }
    ctx->pc = 0x1F9E7Cu;
    {
        const bool branch_taken_0x1f9e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E7Cu;
        // 0x1f9e80: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e7c) {
            ctx->pc = 0x1F9E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9e68;
        }
    }
    ctx->pc = 0x1F9E84u;
label_1f9e84:
    // 0x1f9e84: 0x926200e5  lbu         $v0, 0xE5($s3)
    ctx->pc = 0x1f9e84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 229)));
label_1f9e88:
    // 0x1f9e88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f9e88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f9e8c:
    // 0x1f9e8c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1f9e90:
    if (ctx->pc == 0x1F9E90u) {
        ctx->pc = 0x1F9E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E8Cu;
        // 0x1f9e90: 0x26760090  addiu       $s6, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9E94u;
        goto label_1f9e94;
    }
    ctx->pc = 0x1F9E8Cu;
    {
        const bool branch_taken_0x1f9e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E8Cu;
        // 0x1f9e90: 0x26760090  addiu       $s6, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e8c) {
            ctx->pc = 0x1F9EDCu;
            goto label_1f9edc;
        }
    }
    ctx->pc = 0x1F9E94u;
label_1f9e94:
    // 0x1f9e94: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x1f9e94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f9e98:
    // 0x1f9e98: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x1f9e98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f9e9c:
    // 0x1f9e9c: 0x0  nop
    ctx->pc = 0x1f9e9cu;
    // NOP
label_1f9ea0:
    // 0x1f9ea0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1f9ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f9ea4:
    // 0x1f9ea4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f9ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f9ea8:
    // 0x1f9ea8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f9ea8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1f9eac:
    // 0x1f9eac: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1f9eacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1f9eb0:
    // 0x1f9eb0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f9eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f9eb4:
    // 0x1f9eb4: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x1f9eb4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1f9eb8:
    // 0x1f9eb8: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1f9eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1f9ebc:
    // 0x1f9ebc: 0x60f809  jalr        $v1
label_1f9ec0:
    if (ctx->pc == 0x1F9EC0u) {
        ctx->pc = 0x1F9EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9EBCu;
        // 0x1f9ec0: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9EC4u;
        goto label_1f9ec4;
    }
    ctx->pc = 0x1F9EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F9EC4u);
        ctx->pc = 0x1F9EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9EBCu;
        // 0x1f9ec0: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9EBCu, 0x1F9EC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F9EC4u;
label_1f9ec4:
    // 0x1f9ec4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1f9ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9ec8:
    // 0x1f9ec8: 0x926200e5  lbu         $v0, 0xE5($s3)
    ctx->pc = 0x1f9ec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 229)));
label_1f9ecc:
    // 0x1f9ecc: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1f9eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1f9ed0:
    // 0x1f9ed0: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1f9ed0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f9ed4:
    // 0x1f9ed4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1f9ed8:
    if (ctx->pc == 0x1F9ED8u) {
        ctx->pc = 0x1F9ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9ED4u;
        // 0x1f9ed8: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9EDCu;
        goto label_1f9edc;
    }
    ctx->pc = 0x1F9ED4u;
    {
        const bool branch_taken_0x1f9ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9ED4u;
        // 0x1f9ed8: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ed4) {
            ctx->pc = 0x1F9EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9ea0;
        }
    }
    ctx->pc = 0x1F9EDCu;
label_1f9edc:
    // 0x1f9edc: 0x926300e5  lbu         $v1, 0xE5($s3)
    ctx->pc = 0x1f9edcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 229)));
label_1f9ee0:
    // 0x1f9ee0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f9ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f9ee4:
    // 0x1f9ee4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1f9ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f9ee8:
    // 0x1f9ee8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1f9eec:
    if (ctx->pc == 0x1F9EECu) {
        ctx->pc = 0x1F9EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9EE8u;
        // 0x1f9eec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9EF0u;
        goto label_1f9ef0;
    }
    ctx->pc = 0x1F9EE8u;
    {
        const bool branch_taken_0x1f9ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9EE8u;
        // 0x1f9eec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ee8) {
            ctx->pc = 0x1F9F28u;
            goto label_1f9f28;
        }
    }
    ctx->pc = 0x1F9EF0u;
label_1f9ef0:
    // 0x1f9ef0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f9ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f9ef4:
    // 0x1f9ef4: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x1f9ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
label_1f9ef8:
    // 0x1f9ef8: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1f9ef8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_1f9efc:
    // 0x1f9efc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f9efcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f9f00:
    // 0x1f9f00: 0xc440f48c  lwc1        $f0, -0xB74($v0)
    ctx->pc = 0x1f9f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9f04:
    // 0x1f9f04: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f9f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f9f08:
    // 0x1f9f08: 0x27a30004  addiu       $v1, $sp, 0x4
    ctx->pc = 0x1f9f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1f9f0c:
    // 0x1f9f0c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f9f0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1f9f10:
    // 0x1f9f10: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f9f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1f9f14:
    // 0x1f9f14: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1f9f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1f9f18:
    // 0x1f9f18: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1f9f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1f9f1c:
    // 0x1f9f1c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x1f9f1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1f9f20:
    // 0x1f9f20: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_1f9f24:
    if (ctx->pc == 0x1F9F24u) {
        ctx->pc = 0x1F9F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F20u;
        // 0x1f9f24: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9F28u;
        goto label_1f9f28;
    }
    ctx->pc = 0x1F9F20u;
    {
        const bool branch_taken_0x1f9f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F20u;
        // 0x1f9f24: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f20) {
            ctx->pc = 0x1F9F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9f10;
        }
    }
    ctx->pc = 0x1F9F28u;
label_1f9f28:
    // 0x1f9f28: 0x926400e5  lbu         $a0, 0xE5($s3)
    ctx->pc = 0x1f9f28u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 229)));
label_1f9f2c:
    // 0x1f9f2c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f9f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f9f30:
    // 0x1f9f30: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f9f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1f9f34:
    // 0x1f9f34: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f9f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1f9f38:
    // 0x1f9f38: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1f9f38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f9f3c:
    // 0x1f9f3c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1f9f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1f9f40:
    // 0x1f9f40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f9f40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f9f44:
    // 0x1f9f44: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1f9f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1f9f48:
    // 0x1f9f48: 0xc06d776  jal         func_1B5DD8
label_1f9f4c:
    if (ctx->pc == 0x1F9F4Cu) {
        ctx->pc = 0x1F9F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F48u;
        // 0x1f9f4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9F50u;
        goto label_1f9f50;
    }
    ctx->pc = 0x1F9F48u;
    SET_GPR_U32(ctx, 31, 0x1F9F50u);
    ctx->pc = 0x1F9F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9F48u;
    // 0x1f9f4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5DD8u, 0x1F9F48u, 0x1F9F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9F50u;
label_1f9f50:
    // 0x1f9f50: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x1f9f50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1f9f54:
    // 0x1f9f54: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x1f9f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_1f9f58:
    // 0x1f9f58: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x1f9f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
label_1f9f5c:
    // 0x1f9f5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f9f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1f9f60:
    // 0x1f9f60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f9f60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f9f64:
    // 0x1f9f64: 0x926200e5  lbu         $v0, 0xE5($s3)
    ctx->pc = 0x1f9f64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 229)));
label_1f9f68:
    // 0x1f9f68: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1f9f6c:
    if (ctx->pc == 0x1F9F6Cu) {
        ctx->pc = 0x1F9F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F68u;
        // 0x1f9f6c: 0xe680000c  swc1        $f0, 0xC($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9F70u;
        goto label_1f9f70;
    }
    ctx->pc = 0x1F9F68u;
    {
        const bool branch_taken_0x1f9f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F68u;
        // 0x1f9f6c: 0xe680000c  swc1        $f0, 0xC($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f68) {
            ctx->pc = 0x1F9FDCu;
            goto label_1f9fdc;
        }
    }
    ctx->pc = 0x1F9F70u;
label_1f9f70:
    // 0x1f9f70: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x1f9f70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f9f74:
    // 0x1f9f74: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x1f9f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f9f78:
    // 0x1f9f78: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1f9f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9f7c:
    // 0x1f9f7c: 0x0  nop
    ctx->pc = 0x1f9f7cu;
    // NOP
label_1f9f80:
    // 0x1f9f80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f9f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f9f84:
    // 0x1f9f84: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1f9f84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f9f88:
    // 0x1f9f88: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f9f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f9f8c:
    // 0x1f9f8c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1f9f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1f9f90:
    // 0x1f9f90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9f90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f9f94:
    // 0x1f9f94: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x1f9f94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_1f9f98:
    // 0x1f9f98: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1f9f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1f9f9c:
    // 0x1f9f9c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1f9f9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1f9fa0:
    // 0x1f9fa0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1f9fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1f9fa4:
    // 0x1f9fa4: 0x60f809  jalr        $v1
label_1f9fa8:
    if (ctx->pc == 0x1F9FA8u) {
        ctx->pc = 0x1F9FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9FA4u;
        // 0x1f9fa8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9FACu;
        goto label_1f9fac;
    }
    ctx->pc = 0x1F9FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F9FACu);
        ctx->pc = 0x1F9FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9FA4u;
        // 0x1f9fa8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9FA4u, 0x1F9FACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F9FACu;
label_1f9fac:
    // 0x1f9fac: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1f9facu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f9fb0:
    // 0x1f9fb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f9fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f9fb4:
    // 0x1f9fb4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1f9fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1f9fb8:
    // 0x1f9fb8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f9fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f9fbc:
    // 0x1f9fbc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f9fbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f9fc0:
    // 0x1f9fc0: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f9fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f9fc4:
    // 0x1f9fc4: 0x60f809  jalr        $v1
label_1f9fc8:
    if (ctx->pc == 0x1F9FC8u) {
        ctx->pc = 0x1F9FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9FC4u;
        // 0x1f9fc8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9FCCu;
        goto label_1f9fcc;
    }
    ctx->pc = 0x1F9FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F9FCCu);
        ctx->pc = 0x1F9FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9FC4u;
        // 0x1f9fc8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9FC4u, 0x1F9FCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F9FCCu;
label_1f9fcc:
    // 0x1f9fcc: 0x926200e5  lbu         $v0, 0xE5($s3)
    ctx->pc = 0x1f9fccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 229)));
label_1f9fd0:
    // 0x1f9fd0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1f9fd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f9fd4:
    // 0x1f9fd4: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
label_1f9fd8:
    if (ctx->pc == 0x1F9FD8u) {
        ctx->pc = 0x1F9FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9FD4u;
        // 0x1f9fd8: 0xc6400000  lwc1        $f0, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9FDCu;
        goto label_1f9fdc;
    }
    ctx->pc = 0x1F9FD4u;
    {
        const bool branch_taken_0x1f9fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9fd4) {
            ctx->pc = 0x1F9FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9FD4u;
            // 0x1f9fd8: 0xc6400000  lwc1        $f0, 0x0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9f80;
        }
    }
    ctx->pc = 0x1F9FDCu;
label_1f9fdc:
    // 0x1f9fdc: 0x926300e5  lbu         $v1, 0xE5($s3)
    ctx->pc = 0x1f9fdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 229)));
label_1f9fe0:
    // 0x1f9fe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f9fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f9fe4:
    // 0x1f9fe4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1f9fe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f9fe8:
    // 0x1f9fe8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_1f9fec:
    if (ctx->pc == 0x1F9FECu) {
        ctx->pc = 0x1F9FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9FE8u;
        // 0x1f9fec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9FF0u;
        goto label_1f9ff0;
    }
    ctx->pc = 0x1F9FE8u;
    {
        const bool branch_taken_0x1f9fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9FE8u;
        // 0x1f9fec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9fe8) {
            ctx->pc = 0x1FA068u;
            goto label_1fa068;
        }
    }
    ctx->pc = 0x1F9FF0u;
label_1f9ff0:
    // 0x1f9ff0: 0x26b10004  addiu       $s1, $s5, 0x4
    ctx->pc = 0x1f9ff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_1f9ff4:
    // 0x1f9ff4: 0x267000b8  addiu       $s0, $s3, 0xB8
    ctx->pc = 0x1f9ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 184));
label_1f9ff8:
    // 0x1f9ff8: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x1f9ff8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_1f9ffc:
    // 0x1f9ffc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1f9ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fa000:
    // 0x1fa000: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fa000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fa004:
    // 0x1fa004: 0xc6a1f490  lwc1        $f1, -0xB70($s5)
    ctx->pc = 0x1fa004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294964368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa008:
    // 0x1fa008: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1fa008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fa00c:
    // 0x1fa00c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1fa00cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fa010:
    // 0x1fa010: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1fa010u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1fa014:
    // 0x1fa014: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fa014u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1fa018:
    // 0x1fa018: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x1fa018u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_1fa01c:
    // 0x1fa01c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1fa01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1fa020:
    // 0x1fa020: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1fa020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1fa024:
    // 0x1fa024: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1fa024u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1fa028:
    // 0x1fa028: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1fa028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1fa02c:
    // 0x1fa02c: 0x60f809  jalr        $v1
label_1fa030:
    if (ctx->pc == 0x1FA030u) {
        ctx->pc = 0x1FA030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA02Cu;
        // 0x1fa030: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA034u;
        goto label_1fa034;
    }
    ctx->pc = 0x1FA02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FA034u);
        ctx->pc = 0x1FA030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA02Cu;
        // 0x1fa030: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA02Cu, 0x1FA034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FA034u;
label_1fa034:
    // 0x1fa034: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1fa034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fa038:
    // 0x1fa038: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fa038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fa03c:
    // 0x1fa03c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1fa03cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1fa040:
    // 0x1fa040: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1fa040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fa044:
    // 0x1fa044: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1fa044u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1fa048:
    // 0x1fa048: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1fa048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1fa04c:
    // 0x1fa04c: 0x60f809  jalr        $v1
label_1fa050:
    if (ctx->pc == 0x1FA050u) {
        ctx->pc = 0x1FA050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA04Cu;
        // 0x1fa050: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA054u;
        goto label_1fa054;
    }
    ctx->pc = 0x1FA04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FA054u);
        ctx->pc = 0x1FA050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA04Cu;
        // 0x1fa050: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA04Cu, 0x1FA054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FA054u;
label_1fa054:
    // 0x1fa054: 0x926400e5  lbu         $a0, 0xE5($s3)
    ctx->pc = 0x1fa054u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 229)));
label_1fa058:
    // 0x1fa058: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1fa058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1fa05c:
    // 0x1fa05c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1fa05cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1fa060:
    // 0x1fa060: 0x5440ffe7  bnel        $v0, $zero, . + 4 + (-0x19 << 2)
label_1fa064:
    if (ctx->pc == 0x1FA064u) {
        ctx->pc = 0x1FA064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA060u;
        // 0x1fa064: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA068u;
        goto label_1fa068;
    }
    ctx->pc = 0x1FA060u;
    {
        const bool branch_taken_0x1fa060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa060) {
            ctx->pc = 0x1FA064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA060u;
            // 0x1fa064: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa000;
        }
    }
    ctx->pc = 0x1FA068u;
label_1fa068:
    // 0x1fa068: 0x926200e5  lbu         $v0, 0xE5($s3)
    ctx->pc = 0x1fa068u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 229)));
label_1fa06c:
    // 0x1fa06c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1fa06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1fa070:
    // 0x1fa070: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1fa070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1fa074:
    // 0x1fa074: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1fa074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1fa078:
    // 0x1fa078: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fa078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1fa07c:
    // 0x1fa07c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fa07cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa080:
    // 0x1fa080: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fa080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1fa084:
    // 0x1fa084: 0xe7b500a0  swc1        $f21, 0xA0($sp)
    ctx->pc = 0x1fa084u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1fa088:
    // 0x1fa088: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fa088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fa08c:
    // 0x1fa08c: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x1fa08cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_1fa090:
    // 0x1fa090: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1fa090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_1fa094:
    // 0x1fa094: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x1fa094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
label_1fa098:
    // 0x1fa098: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x1fa098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_1fa09c:
    // 0x1fa09c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1fa09cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fa0a0:
    // 0x1fa0a0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1fa0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1fa0a4:
    // 0x1fa0a4: 0x84650018  lh          $a1, 0x18($v1)
    ctx->pc = 0x1fa0a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_1fa0a8:
    // 0x1fa0a8: 0x8c66001c  lw          $a2, 0x1C($v1)
    ctx->pc = 0x1fa0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1fa0ac:
    // 0x1fa0ac: 0xc0f809  jalr        $a2
label_1fa0b0:
    if (ctx->pc == 0x1FA0B0u) {
        ctx->pc = 0x1FA0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA0ACu;
        // 0x1fa0b0: 0xe52821  addu        $a1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA0B4u;
        goto label_1fa0b4;
    }
    ctx->pc = 0x1FA0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1FA0B4u);
        ctx->pc = 0x1FA0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA0ACu;
        // 0x1fa0b0: 0xe52821  addu        $a1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA0ACu, 0x1FA0B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FA0B4u;
label_1fa0b4:
    // 0x1fa0b4: 0x926200e5  lbu         $v0, 0xE5($s3)
    ctx->pc = 0x1fa0b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 229)));
label_1fa0b8:
    // 0x1fa0b8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fa0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1fa0bc:
    // 0x1fa0bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fa0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1fa0c0:
    // 0x1fa0c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fa0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fa0c4:
    // 0x1fa0c4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1fa0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_1fa0c8:
    // 0x1fa0c8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1fa0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fa0cc:
    // 0x1fa0cc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1fa0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fa0d0:
    // 0x1fa0d0: 0x84650070  lh          $a1, 0x70($v1)
    ctx->pc = 0x1fa0d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_1fa0d4:
    // 0x1fa0d4: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1fa0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1fa0d8:
    // 0x1fa0d8: 0x40f809  jalr        $v0
label_1fa0dc:
    if (ctx->pc == 0x1FA0DCu) {
        ctx->pc = 0x1FA0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA0D8u;
        // 0x1fa0dc: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA0E0u;
        goto label_1fa0e0;
    }
    ctx->pc = 0x1FA0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FA0E0u);
        ctx->pc = 0x1FA0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA0D8u;
        // 0x1fa0dc: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA0D8u, 0x1FA0E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FA0E0u;
label_1fa0e0:
    // 0x1fa0e0: 0x8e6600dc  lw          $a2, 0xDC($s3)
    ctx->pc = 0x1fa0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_1fa0e4:
    // 0x1fa0e4: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1fa0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fa0e8:
    // 0x1fa0e8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1fa0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fa0ec:
    // 0x1fa0ec: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1fa0ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1fa0f0:
    // 0x1fa0f0: 0xc7b400b8  lwc1        $f20, 0xB8($sp)
    ctx->pc = 0x1fa0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1fa0f4:
    // 0x1fa0f4: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x1fa0f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1fa0f8:
    // 0x1fa0f8: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1fa0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1fa0fc:
    // 0x1fa0fc: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1fa0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1fa100:
    // 0x1fa100: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1fa100u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1fa104:
    // 0x1fa104: 0x60f809  jalr        $v1
label_1fa108:
    if (ctx->pc == 0x1FA108u) {
        ctx->pc = 0x1FA108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA104u;
        // 0x1fa108: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA10Cu;
        goto label_1fa10c;
    }
    ctx->pc = 0x1FA104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FA10Cu);
        ctx->pc = 0x1FA108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA104u;
        // 0x1fa108: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA104u, 0x1FA10Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FA10Cu;
label_1fa10c:
    // 0x1fa10c: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x1fa10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fa110:
    // 0x1fa110: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1fa110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fa114:
    // 0x1fa114: 0x8e6700dc  lw          $a3, 0xDC($s3)
    ctx->pc = 0x1fa114u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_1fa118:
    // 0x1fa118: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fa118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fa11c:
    // 0x1fa11c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1fa11cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1fa120:
    // 0x1fa120: 0xe7b400a8  swc1        $f20, 0xA8($sp)
    ctx->pc = 0x1fa120u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1fa124:
    // 0x1fa124: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1fa124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1fa128:
    // 0x1fa128: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1fa128u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1fa12c:
    // 0x1fa12c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1fa12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1fa130:
    // 0x1fa130: 0x60f809  jalr        $v1
label_1fa134:
    if (ctx->pc == 0x1FA134u) {
        ctx->pc = 0x1FA134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA130u;
        // 0x1fa134: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA138u;
        goto label_1fa138;
    }
    ctx->pc = 0x1FA130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FA138u);
        ctx->pc = 0x1FA134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA130u;
        // 0x1fa134: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA130u, 0x1FA138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FA138u;
label_1fa138:
    // 0x1fa138: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x1fa138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_1fa13c:
    // 0x1fa13c: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x1fa13cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_1fa140:
    // 0x1fa140: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x1fa140u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_1fa144:
    // 0x1fa144: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x1fa144u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1fa148:
    // 0x1fa148: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x1fa148u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1fa14c:
    // 0x1fa14c: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x1fa14cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1fa150:
    // 0x1fa150: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x1fa150u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1fa154:
    // 0x1fa154: 0x7bb70110  lq          $s7, 0x110($sp)
    ctx->pc = 0x1fa154u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1fa158:
    // 0x1fa158: 0x7bbe0100  lq          $fp, 0x100($sp)
    ctx->pc = 0x1fa158u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1fa15c:
    // 0x1fa15c: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x1fa15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_1fa160:
    // 0x1fa160: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x1fa160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1fa164:
    // 0x1fa164: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x1fa164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1fa168:
    // 0x1fa168: 0x3e00008  jr          $ra
label_1fa16c:
    if (ctx->pc == 0x1FA16Cu) {
        ctx->pc = 0x1FA16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA168u;
        // 0x1fa16c: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA170u;
        goto label_fallthrough_0x1fa168;
    }
    ctx->pc = 0x1FA168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA168u;
        // 0x1fa16c: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fa168:
    ctx->pc = 0x1FA170u;
}
