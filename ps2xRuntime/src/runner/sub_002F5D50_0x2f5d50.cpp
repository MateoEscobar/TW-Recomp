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

// Function: sub_002F5D50
// Address: 0x2f5d50 - 0x2f60e8
void sub_002F5D50_0x2f5d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5D50_0x2f5d50");
#endif

    switch (ctx->pc) {
        case 0x2f5d50u: goto label_2f5d50;
        case 0x2f5d54u: goto label_2f5d54;
        case 0x2f5d58u: goto label_2f5d58;
        case 0x2f5d5cu: goto label_2f5d5c;
        case 0x2f5d60u: goto label_2f5d60;
        case 0x2f5d64u: goto label_2f5d64;
        case 0x2f5d68u: goto label_2f5d68;
        case 0x2f5d6cu: goto label_2f5d6c;
        case 0x2f5d70u: goto label_2f5d70;
        case 0x2f5d74u: goto label_2f5d74;
        case 0x2f5d78u: goto label_2f5d78;
        case 0x2f5d7cu: goto label_2f5d7c;
        case 0x2f5d80u: goto label_2f5d80;
        case 0x2f5d84u: goto label_2f5d84;
        case 0x2f5d88u: goto label_2f5d88;
        case 0x2f5d8cu: goto label_2f5d8c;
        case 0x2f5d90u: goto label_2f5d90;
        case 0x2f5d94u: goto label_2f5d94;
        case 0x2f5d98u: goto label_2f5d98;
        case 0x2f5d9cu: goto label_2f5d9c;
        case 0x2f5da0u: goto label_2f5da0;
        case 0x2f5da4u: goto label_2f5da4;
        case 0x2f5da8u: goto label_2f5da8;
        case 0x2f5dacu: goto label_2f5dac;
        case 0x2f5db0u: goto label_2f5db0;
        case 0x2f5db4u: goto label_2f5db4;
        case 0x2f5db8u: goto label_2f5db8;
        case 0x2f5dbcu: goto label_2f5dbc;
        case 0x2f5dc0u: goto label_2f5dc0;
        case 0x2f5dc4u: goto label_2f5dc4;
        case 0x2f5dc8u: goto label_2f5dc8;
        case 0x2f5dccu: goto label_2f5dcc;
        case 0x2f5dd0u: goto label_2f5dd0;
        case 0x2f5dd4u: goto label_2f5dd4;
        case 0x2f5dd8u: goto label_2f5dd8;
        case 0x2f5ddcu: goto label_2f5ddc;
        case 0x2f5de0u: goto label_2f5de0;
        case 0x2f5de4u: goto label_2f5de4;
        case 0x2f5de8u: goto label_2f5de8;
        case 0x2f5decu: goto label_2f5dec;
        case 0x2f5df0u: goto label_2f5df0;
        case 0x2f5df4u: goto label_2f5df4;
        case 0x2f5df8u: goto label_2f5df8;
        case 0x2f5dfcu: goto label_2f5dfc;
        case 0x2f5e00u: goto label_2f5e00;
        case 0x2f5e04u: goto label_2f5e04;
        case 0x2f5e08u: goto label_2f5e08;
        case 0x2f5e0cu: goto label_2f5e0c;
        case 0x2f5e10u: goto label_2f5e10;
        case 0x2f5e14u: goto label_2f5e14;
        case 0x2f5e18u: goto label_2f5e18;
        case 0x2f5e1cu: goto label_2f5e1c;
        case 0x2f5e20u: goto label_2f5e20;
        case 0x2f5e24u: goto label_2f5e24;
        case 0x2f5e28u: goto label_2f5e28;
        case 0x2f5e2cu: goto label_2f5e2c;
        case 0x2f5e30u: goto label_2f5e30;
        case 0x2f5e34u: goto label_2f5e34;
        case 0x2f5e38u: goto label_2f5e38;
        case 0x2f5e3cu: goto label_2f5e3c;
        case 0x2f5e40u: goto label_2f5e40;
        case 0x2f5e44u: goto label_2f5e44;
        case 0x2f5e48u: goto label_2f5e48;
        case 0x2f5e4cu: goto label_2f5e4c;
        case 0x2f5e50u: goto label_2f5e50;
        case 0x2f5e54u: goto label_2f5e54;
        case 0x2f5e58u: goto label_2f5e58;
        case 0x2f5e5cu: goto label_2f5e5c;
        case 0x2f5e60u: goto label_2f5e60;
        case 0x2f5e64u: goto label_2f5e64;
        case 0x2f5e68u: goto label_2f5e68;
        case 0x2f5e6cu: goto label_2f5e6c;
        case 0x2f5e70u: goto label_2f5e70;
        case 0x2f5e74u: goto label_2f5e74;
        case 0x2f5e78u: goto label_2f5e78;
        case 0x2f5e7cu: goto label_2f5e7c;
        case 0x2f5e80u: goto label_2f5e80;
        case 0x2f5e84u: goto label_2f5e84;
        case 0x2f5e88u: goto label_2f5e88;
        case 0x2f5e8cu: goto label_2f5e8c;
        case 0x2f5e90u: goto label_2f5e90;
        case 0x2f5e94u: goto label_2f5e94;
        case 0x2f5e98u: goto label_2f5e98;
        case 0x2f5e9cu: goto label_2f5e9c;
        case 0x2f5ea0u: goto label_2f5ea0;
        case 0x2f5ea4u: goto label_2f5ea4;
        case 0x2f5ea8u: goto label_2f5ea8;
        case 0x2f5eacu: goto label_2f5eac;
        case 0x2f5eb0u: goto label_2f5eb0;
        case 0x2f5eb4u: goto label_2f5eb4;
        case 0x2f5eb8u: goto label_2f5eb8;
        case 0x2f5ebcu: goto label_2f5ebc;
        case 0x2f5ec0u: goto label_2f5ec0;
        case 0x2f5ec4u: goto label_2f5ec4;
        case 0x2f5ec8u: goto label_2f5ec8;
        case 0x2f5eccu: goto label_2f5ecc;
        case 0x2f5ed0u: goto label_2f5ed0;
        case 0x2f5ed4u: goto label_2f5ed4;
        case 0x2f5ed8u: goto label_2f5ed8;
        case 0x2f5edcu: goto label_2f5edc;
        case 0x2f5ee0u: goto label_2f5ee0;
        case 0x2f5ee4u: goto label_2f5ee4;
        case 0x2f5ee8u: goto label_2f5ee8;
        case 0x2f5eecu: goto label_2f5eec;
        case 0x2f5ef0u: goto label_2f5ef0;
        case 0x2f5ef4u: goto label_2f5ef4;
        case 0x2f5ef8u: goto label_2f5ef8;
        case 0x2f5efcu: goto label_2f5efc;
        case 0x2f5f00u: goto label_2f5f00;
        case 0x2f5f04u: goto label_2f5f04;
        case 0x2f5f08u: goto label_2f5f08;
        case 0x2f5f0cu: goto label_2f5f0c;
        case 0x2f5f10u: goto label_2f5f10;
        case 0x2f5f14u: goto label_2f5f14;
        case 0x2f5f18u: goto label_2f5f18;
        case 0x2f5f1cu: goto label_2f5f1c;
        case 0x2f5f20u: goto label_2f5f20;
        case 0x2f5f24u: goto label_2f5f24;
        case 0x2f5f28u: goto label_2f5f28;
        case 0x2f5f2cu: goto label_2f5f2c;
        case 0x2f5f30u: goto label_2f5f30;
        case 0x2f5f34u: goto label_2f5f34;
        case 0x2f5f38u: goto label_2f5f38;
        case 0x2f5f3cu: goto label_2f5f3c;
        case 0x2f5f40u: goto label_2f5f40;
        case 0x2f5f44u: goto label_2f5f44;
        case 0x2f5f48u: goto label_2f5f48;
        case 0x2f5f4cu: goto label_2f5f4c;
        case 0x2f5f50u: goto label_2f5f50;
        case 0x2f5f54u: goto label_2f5f54;
        case 0x2f5f58u: goto label_2f5f58;
        case 0x2f5f5cu: goto label_2f5f5c;
        case 0x2f5f60u: goto label_2f5f60;
        case 0x2f5f64u: goto label_2f5f64;
        case 0x2f5f68u: goto label_2f5f68;
        case 0x2f5f6cu: goto label_2f5f6c;
        case 0x2f5f70u: goto label_2f5f70;
        case 0x2f5f74u: goto label_2f5f74;
        case 0x2f5f78u: goto label_2f5f78;
        case 0x2f5f7cu: goto label_2f5f7c;
        case 0x2f5f80u: goto label_2f5f80;
        case 0x2f5f84u: goto label_2f5f84;
        case 0x2f5f88u: goto label_2f5f88;
        case 0x2f5f8cu: goto label_2f5f8c;
        case 0x2f5f90u: goto label_2f5f90;
        case 0x2f5f94u: goto label_2f5f94;
        case 0x2f5f98u: goto label_2f5f98;
        case 0x2f5f9cu: goto label_2f5f9c;
        case 0x2f5fa0u: goto label_2f5fa0;
        case 0x2f5fa4u: goto label_2f5fa4;
        case 0x2f5fa8u: goto label_2f5fa8;
        case 0x2f5facu: goto label_2f5fac;
        case 0x2f5fb0u: goto label_2f5fb0;
        case 0x2f5fb4u: goto label_2f5fb4;
        case 0x2f5fb8u: goto label_2f5fb8;
        case 0x2f5fbcu: goto label_2f5fbc;
        case 0x2f5fc0u: goto label_2f5fc0;
        case 0x2f5fc4u: goto label_2f5fc4;
        case 0x2f5fc8u: goto label_2f5fc8;
        case 0x2f5fccu: goto label_2f5fcc;
        case 0x2f5fd0u: goto label_2f5fd0;
        case 0x2f5fd4u: goto label_2f5fd4;
        case 0x2f5fd8u: goto label_2f5fd8;
        case 0x2f5fdcu: goto label_2f5fdc;
        case 0x2f5fe0u: goto label_2f5fe0;
        case 0x2f5fe4u: goto label_2f5fe4;
        case 0x2f5fe8u: goto label_2f5fe8;
        case 0x2f5fecu: goto label_2f5fec;
        case 0x2f5ff0u: goto label_2f5ff0;
        case 0x2f5ff4u: goto label_2f5ff4;
        case 0x2f5ff8u: goto label_2f5ff8;
        case 0x2f5ffcu: goto label_2f5ffc;
        case 0x2f6000u: goto label_2f6000;
        case 0x2f6004u: goto label_2f6004;
        case 0x2f6008u: goto label_2f6008;
        case 0x2f600cu: goto label_2f600c;
        case 0x2f6010u: goto label_2f6010;
        case 0x2f6014u: goto label_2f6014;
        case 0x2f6018u: goto label_2f6018;
        case 0x2f601cu: goto label_2f601c;
        case 0x2f6020u: goto label_2f6020;
        case 0x2f6024u: goto label_2f6024;
        case 0x2f6028u: goto label_2f6028;
        case 0x2f602cu: goto label_2f602c;
        case 0x2f6030u: goto label_2f6030;
        case 0x2f6034u: goto label_2f6034;
        case 0x2f6038u: goto label_2f6038;
        case 0x2f603cu: goto label_2f603c;
        case 0x2f6040u: goto label_2f6040;
        case 0x2f6044u: goto label_2f6044;
        case 0x2f6048u: goto label_2f6048;
        case 0x2f604cu: goto label_2f604c;
        case 0x2f6050u: goto label_2f6050;
        case 0x2f6054u: goto label_2f6054;
        case 0x2f6058u: goto label_2f6058;
        case 0x2f605cu: goto label_2f605c;
        case 0x2f6060u: goto label_2f6060;
        case 0x2f6064u: goto label_2f6064;
        case 0x2f6068u: goto label_2f6068;
        case 0x2f606cu: goto label_2f606c;
        case 0x2f6070u: goto label_2f6070;
        case 0x2f6074u: goto label_2f6074;
        case 0x2f6078u: goto label_2f6078;
        case 0x2f607cu: goto label_2f607c;
        case 0x2f6080u: goto label_2f6080;
        case 0x2f6084u: goto label_2f6084;
        case 0x2f6088u: goto label_2f6088;
        case 0x2f608cu: goto label_2f608c;
        case 0x2f6090u: goto label_2f6090;
        case 0x2f6094u: goto label_2f6094;
        case 0x2f6098u: goto label_2f6098;
        case 0x2f609cu: goto label_2f609c;
        case 0x2f60a0u: goto label_2f60a0;
        case 0x2f60a4u: goto label_2f60a4;
        case 0x2f60a8u: goto label_2f60a8;
        case 0x2f60acu: goto label_2f60ac;
        case 0x2f60b0u: goto label_2f60b0;
        case 0x2f60b4u: goto label_2f60b4;
        case 0x2f60b8u: goto label_2f60b8;
        case 0x2f60bcu: goto label_2f60bc;
        case 0x2f60c0u: goto label_2f60c0;
        case 0x2f60c4u: goto label_2f60c4;
        case 0x2f60c8u: goto label_2f60c8;
        case 0x2f60ccu: goto label_2f60cc;
        case 0x2f60d0u: goto label_2f60d0;
        case 0x2f60d4u: goto label_2f60d4;
        case 0x2f60d8u: goto label_2f60d8;
        case 0x2f60dcu: goto label_2f60dc;
        case 0x2f60e0u: goto label_2f60e0;
        case 0x2f60e4u: goto label_2f60e4;
        default: break;
    }

    ctx->pc = 0x2f5d50u;

label_2f5d50:
    // 0x2f5d50: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2f5d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2f5d54:
    // 0x2f5d54: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2f5d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_2f5d58:
    // 0x2f5d58: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2f5d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2f5d5c:
    // 0x2f5d5c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2f5d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f5d60:
    // 0x2f5d60: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2f5d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_2f5d64:
    // 0x2f5d64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f5d64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f5d68:
    // 0x2f5d68: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2f5d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_2f5d6c:
    // 0x2f5d6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f5d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2f5d70:
    // 0x2f5d70: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f5d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2f5d74:
    // 0x2f5d74: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x2f5d74u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_2f5d78:
    // 0x2f5d78: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2f5d78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2f5d7c:
    // 0x2f5d7c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f5d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f5d80:
    // 0x2f5d80: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2f5d80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2f5d84:
    // 0x2f5d84: 0x1c4000cd  bgtz        $v0, . + 4 + (0xCD << 2)
label_2f5d88:
    if (ctx->pc == 0x2F5D88u) {
        ctx->pc = 0x2F5D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D84u;
        // 0x2f5d88: 0x8c730000  lw          $s3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D8Cu;
        goto label_2f5d8c;
    }
    ctx->pc = 0x2F5D84u;
    {
        const bool branch_taken_0x2f5d84 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2F5D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D84u;
        // 0x2f5d88: 0x8c730000  lw          $s3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d84) {
            ctx->pc = 0x2F60BCu;
            goto label_2f60bc;
        }
    }
    ctx->pc = 0x2F5D8Cu;
label_2f5d8c:
    // 0x2f5d8c: 0x92220014  lbu         $v0, 0x14($s1)
    ctx->pc = 0x2f5d8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
label_2f5d90:
    // 0x2f5d90: 0x1450004c  bne         $v0, $s0, . + 4 + (0x4C << 2)
label_2f5d94:
    if (ctx->pc == 0x2F5D94u) {
        ctx->pc = 0x2F5D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D90u;
        // 0x2f5d94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D98u;
        goto label_2f5d98;
    }
    ctx->pc = 0x2F5D90u;
    {
        const bool branch_taken_0x2f5d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2F5D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D90u;
        // 0x2f5d94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d90) {
            ctx->pc = 0x2F5EC4u;
            goto label_2f5ec4;
        }
    }
    ctx->pc = 0x2F5D98u;
label_2f5d98:
    // 0x2f5d98: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2f5d98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2f5d9c:
    // 0x2f5d9c: 0x34a5fbff  ori         $a1, $a1, 0xFBFF
    ctx->pc = 0x2f5d9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64511);
label_2f5da0:
    // 0x2f5da0: 0xc0a7c8c  jal         func_29F230
label_2f5da4:
    if (ctx->pc == 0x2F5DA4u) {
        ctx->pc = 0x2F5DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DA0u;
        // 0x2f5da4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5DA8u;
        goto label_2f5da8;
    }
    ctx->pc = 0x2F5DA0u;
    SET_GPR_U32(ctx, 31, 0x2F5DA8u);
    ctx->pc = 0x2F5DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5DA0u;
    // 0x2f5da4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F230u, 0x2F5DA0u, 0x2F5DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5DA8u;
label_2f5da8:
    // 0x2f5da8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f5da8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f5dac:
    // 0x2f5dac: 0x12400025  beqz        $s2, . + 4 + (0x25 << 2)
label_2f5db0:
    if (ctx->pc == 0x2F5DB0u) {
        ctx->pc = 0x2F5DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DACu;
        // 0x2f5db0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5DB4u;
        goto label_2f5db4;
    }
    ctx->pc = 0x2F5DACu;
    {
        const bool branch_taken_0x2f5dac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DACu;
        // 0x2f5db0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5dac) {
            ctx->pc = 0x2F5E44u;
            goto label_2f5e44;
        }
    }
    ctx->pc = 0x2F5DB4u;
label_2f5db4:
    // 0x2f5db4: 0x92220016  lbu         $v0, 0x16($s1)
    ctx->pc = 0x2f5db4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
label_2f5db8:
    // 0x2f5db8: 0x14500022  bne         $v0, $s0, . + 4 + (0x22 << 2)
label_2f5dbc:
    if (ctx->pc == 0x2F5DBCu) {
        ctx->pc = 0x2F5DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DB8u;
        // 0x2f5dbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5DC0u;
        goto label_2f5dc0;
    }
    ctx->pc = 0x2F5DB8u;
    {
        const bool branch_taken_0x2f5db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2F5DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DB8u;
        // 0x2f5dbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5db8) {
            ctx->pc = 0x2F5E44u;
            goto label_2f5e44;
        }
    }
    ctx->pc = 0x2F5DC0u;
label_2f5dc0:
    // 0x2f5dc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f5dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f5dc4:
    // 0x2f5dc4: 0xc088680  jal         func_221A00
label_2f5dc8:
    if (ctx->pc == 0x2F5DC8u) {
        ctx->pc = 0x2F5DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DC4u;
        // 0x2f5dc8: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5DCCu;
        goto label_2f5dcc;
    }
    ctx->pc = 0x2F5DC4u;
    SET_GPR_U32(ctx, 31, 0x2F5DCCu);
    ctx->pc = 0x2F5DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5DC4u;
    // 0x2f5dc8: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A00u, 0x2F5DC4u, 0x2F5DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5DCCu;
label_2f5dcc:
    // 0x2f5dcc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_2f5dd0:
    if (ctx->pc == 0x2F5DD0u) {
        ctx->pc = 0x2F5DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DCCu;
        // 0x2f5dd0: 0x3c100071  lui         $s0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5DD4u;
        goto label_2f5dd4;
    }
    ctx->pc = 0x2F5DCCu;
    {
        const bool branch_taken_0x2f5dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DCCu;
        // 0x2f5dd0: 0x3c100071  lui         $s0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5dcc) {
            ctx->pc = 0x2F5E40u;
            goto label_2f5e40;
        }
    }
    ctx->pc = 0x2F5DD4u;
label_2f5dd4:
    // 0x2f5dd4: 0x86450092  lh          $a1, 0x92($s2)
    ctx->pc = 0x2f5dd4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2f5dd8:
    // 0x2f5dd8: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x2f5dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_2f5ddc:
    // 0x2f5ddc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f5ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f5de0:
    // 0x2f5de0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2f5de0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2f5de4:
    // 0x2f5de4: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2f5de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_2f5de8:
    // 0x2f5de8: 0xc0cd8ec  jal         func_3363B0
label_2f5dec:
    if (ctx->pc == 0x2F5DECu) {
        ctx->pc = 0x2F5DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DE8u;
        // 0x2f5dec: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5DF0u;
        goto label_2f5df0;
    }
    ctx->pc = 0x2F5DE8u;
    SET_GPR_U32(ctx, 31, 0x2F5DF0u);
    ctx->pc = 0x2F5DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5DE8u;
    // 0x2f5dec: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2F5DE8u, 0x2F5DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5DF0u;
label_2f5df0:
    // 0x2f5df0: 0x86650092  lh          $a1, 0x92($s3)
    ctx->pc = 0x2f5df0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2f5df4:
    // 0x2f5df4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2f5df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f5df8:
    // 0x2f5df8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2f5df8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2f5dfc:
    // 0x2f5dfc: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2f5dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_2f5e00:
    // 0x2f5e00: 0xc0cd8ec  jal         func_3363B0
label_2f5e04:
    if (ctx->pc == 0x2F5E04u) {
        ctx->pc = 0x2F5E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E00u;
        // 0x2f5e04: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E08u;
        goto label_2f5e08;
    }
    ctx->pc = 0x2F5E00u;
    SET_GPR_U32(ctx, 31, 0x2F5E08u);
    ctx->pc = 0x2F5E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5E00u;
    // 0x2f5e04: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2F5E00u, 0x2F5E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5E08u;
label_2f5e08:
    // 0x2f5e08: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x2f5e08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f5e0c:
    // 0x2f5e0c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2f5e0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f5e10:
    // 0x2f5e10: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2f5e10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2f5e14:
    // 0x2f5e14: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f5e14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2f5e18:
    // 0x2f5e18: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x2f5e18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2f5e1c:
    // 0x2f5e1c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2f5e1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2f5e20:
    // 0x2f5e20: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x2f5e20u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_2f5e24:
    // 0x2f5e24: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2f5e24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f5e28:
    // 0x2f5e28: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f5e28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f5e2c:
    // 0x2f5e2c: 0x0  nop
    ctx->pc = 0x2f5e2cu;
    // NOP
label_2f5e30:
    // 0x2f5e30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f5e30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f5e34:
    // 0x2f5e34: 0x0  nop
    ctx->pc = 0x2f5e34u;
    // NOP
label_2f5e38:
    // 0x2f5e38: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2f5e3c:
    if (ctx->pc == 0x2F5E3Cu) {
        ctx->pc = 0x2F5E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E38u;
        // 0x2f5e3c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E40u;
        goto label_2f5e40;
    }
    ctx->pc = 0x2F5E38u;
    {
        const bool branch_taken_0x2f5e38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f5e38) {
            ctx->pc = 0x2F5E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5E38u;
            // 0x2f5e3c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5E40u;
            goto label_2f5e40;
        }
    }
    ctx->pc = 0x2F5E40u;
label_2f5e40:
    // 0x2f5e40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f5e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f5e44:
    // 0x2f5e44: 0x5682009d  bnel        $s4, $v0, . + 4 + (0x9D << 2)
label_2f5e48:
    if (ctx->pc == 0x2F5E48u) {
        ctx->pc = 0x2F5E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E44u;
        // 0x2f5e48: 0xa2200014  sb          $zero, 0x14($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E4Cu;
        goto label_2f5e4c;
    }
    ctx->pc = 0x2F5E44u;
    {
        const bool branch_taken_0x2f5e44 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f5e44) {
            ctx->pc = 0x2F5E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5E44u;
            // 0x2f5e48: 0xa2200014  sb          $zero, 0x14($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F60BCu;
            goto label_2f60bc;
        }
    }
    ctx->pc = 0x2F5E4Cu;
label_2f5e4c:
    // 0x2f5e4c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f5e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f5e50:
    // 0x2f5e50: 0xc0a4e54  jal         func_293950
label_2f5e54:
    if (ctx->pc == 0x2F5E54u) {
        ctx->pc = 0x2F5E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E50u;
        // 0x2f5e54: 0xc455013c  lwc1        $f21, 0x13C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E58u;
        goto label_2f5e58;
    }
    ctx->pc = 0x2F5E50u;
    SET_GPR_U32(ctx, 31, 0x2F5E58u);
    ctx->pc = 0x2F5E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5E50u;
    // 0x2f5e54: 0xc455013c  lwc1        $f21, 0x13C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2F5E50u, 0x2F5E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5E58u;
label_2f5e58:
    // 0x2f5e58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f5e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f5e5c:
    // 0x2f5e5c: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_2f5e60:
    if (ctx->pc == 0x2F5E60u) {
        ctx->pc = 0x2F5E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E5Cu;
        // 0x2f5e60: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E64u;
        goto label_2f5e64;
    }
    ctx->pc = 0x2F5E5Cu;
    {
        const bool branch_taken_0x2f5e5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E5Cu;
        // 0x2f5e60: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e5c) {
            ctx->pc = 0x2F5EACu;
            goto label_2f5eac;
        }
    }
    ctx->pc = 0x2F5E64u;
label_2f5e64:
    // 0x2f5e64: 0x24050fa0  addiu       $a1, $zero, 0xFA0
    ctx->pc = 0x2f5e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
label_2f5e68:
    // 0x2f5e68: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2f5e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2f5e6c:
    // 0x2f5e6c: 0xc0cd4fc  jal         func_3353F0
label_2f5e70:
    if (ctx->pc == 0x2F5E70u) {
        ctx->pc = 0x2F5E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E6Cu;
        // 0x2f5e70: 0x24061f40  addiu       $a2, $zero, 0x1F40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E74u;
        goto label_2f5e74;
    }
    ctx->pc = 0x2F5E6Cu;
    SET_GPR_U32(ctx, 31, 0x2F5E74u);
    ctx->pc = 0x2F5E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5E6Cu;
    // 0x2f5e70: 0x24061f40  addiu       $a2, $zero, 0x1F40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2F5E6Cu, 0x2F5E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5E74u;
label_2f5e74:
    // 0x2f5e74: 0x4615ad00  add.s       $f20, $f21, $f21
    ctx->pc = 0x2f5e74u;
    ctx->f[20] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_2f5e78:
    // 0x2f5e78: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2f5e78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2f5e7c:
    // 0x2f5e7c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2f5e7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2f5e80:
    // 0x2f5e80: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f5e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f5e84:
    // 0x2f5e84: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2f5e84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f5e88:
    // 0x2f5e88: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2f5e88u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2f5e8c:
    // 0x2f5e8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f5e90:
    // 0x2f5e90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f5e90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5e94:
    // 0x2f5e94: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f5e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f5e98:
    // 0x2f5e98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f5e98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5e9c:
    // 0x2f5e9c: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x2f5e9cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
label_2f5ea0:
    // 0x2f5ea0: 0x46007406  mov.s       $f16, $f14
    ctx->pc = 0x2f5ea0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[14]);
label_2f5ea4:
    // 0x2f5ea4: 0xc0b8c60  jal         func_2E3180
label_2f5ea8:
    if (ctx->pc == 0x2F5EA8u) {
        ctx->pc = 0x2F5EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5EA4u;
        // 0x2f5ea8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5EACu;
        goto label_2f5eac;
    }
    ctx->pc = 0x2F5EA4u;
    SET_GPR_U32(ctx, 31, 0x2F5EACu);
    ctx->pc = 0x2F5EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5EA4u;
    // 0x2f5ea8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2F5EA4u, 0x2F5EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5EACu;
label_2f5eac:
    // 0x2f5eac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f5eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f5eb0:
    // 0x2f5eb0: 0xc0a35d6  jal         func_28D758
label_2f5eb4:
    if (ctx->pc == 0x2F5EB4u) {
        ctx->pc = 0x2F5EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5EB0u;
        // 0x2f5eb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5EB8u;
        goto label_2f5eb8;
    }
    ctx->pc = 0x2F5EB0u;
    SET_GPR_U32(ctx, 31, 0x2F5EB8u);
    ctx->pc = 0x2F5EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5EB0u;
    // 0x2f5eb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2F5EB0u, 0x2F5EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5EB8u;
label_2f5eb8:
    // 0x2f5eb8: 0xa2340016  sb          $s4, 0x16($s1)
    ctx->pc = 0x2f5eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 20));
label_2f5ebc:
    // 0x2f5ebc: 0x10000080  b           . + 4 + (0x80 << 2)
label_2f5ec0:
    if (ctx->pc == 0x2F5EC0u) {
        ctx->pc = 0x2F5EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5EBCu;
        // 0x2f5ec0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5EC4u;
        goto label_2f5ec4;
    }
    ctx->pc = 0x2F5EBCu;
    {
        const bool branch_taken_0x2f5ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5EBCu;
        // 0x2f5ec0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5ebc) {
            ctx->pc = 0x2F60C0u;
            goto label_2f60c0;
        }
    }
    ctx->pc = 0x2F5EC4u;
label_2f5ec4:
    // 0x2f5ec4: 0x1440007e  bnez        $v0, . + 4 + (0x7E << 2)
label_2f5ec8:
    if (ctx->pc == 0x2F5EC8u) {
        ctx->pc = 0x2F5EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5EC4u;
        // 0x2f5ec8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5ECCu;
        goto label_2f5ecc;
    }
    ctx->pc = 0x2F5EC4u;
    {
        const bool branch_taken_0x2f5ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5EC4u;
        // 0x2f5ec8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5ec4) {
            ctx->pc = 0x2F60C0u;
            goto label_2f60c0;
        }
    }
    ctx->pc = 0x2F5ECCu;
label_2f5ecc:
    // 0x2f5ecc: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x2f5eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
label_2f5ed0:
    // 0x2f5ed0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f5ed4:
    if (ctx->pc == 0x2F5ED4u) {
        ctx->pc = 0x2F5ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5ED0u;
        // 0x2f5ed4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5ED8u;
        goto label_2f5ed8;
    }
    ctx->pc = 0x2F5ED0u;
    {
        const bool branch_taken_0x2f5ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5ED0u;
        // 0x2f5ed4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5ed0) {
            ctx->pc = 0x2F5EE4u;
            goto label_2f5ee4;
        }
    }
    ctx->pc = 0x2F5ED8u;
label_2f5ed8:
    // 0x2f5ed8: 0xac600284  sw          $zero, 0x284($v1)
    ctx->pc = 0x2f5ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
label_2f5edc:
    // 0x2f5edc: 0x10000078  b           . + 4 + (0x78 << 2)
label_2f5ee0:
    if (ctx->pc == 0x2F5EE0u) {
        ctx->pc = 0x2F5EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5EDCu;
        // 0x2f5ee0: 0xa2300014  sb          $s0, 0x14($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5EE4u;
        goto label_2f5ee4;
    }
    ctx->pc = 0x2F5EDCu;
    {
        const bool branch_taken_0x2f5edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5EDCu;
        // 0x2f5ee0: 0xa2300014  sb          $s0, 0x14($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5edc) {
            ctx->pc = 0x2F60C0u;
            goto label_2f60c0;
        }
    }
    ctx->pc = 0x2F5EE4u;
label_2f5ee4:
    // 0x2f5ee4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2f5ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2f5ee8:
    // 0x2f5ee8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f5ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f5eec:
    // 0x2f5eec: 0xc0a7c8c  jal         func_29F230
label_2f5ef0:
    if (ctx->pc == 0x2F5EF0u) {
        ctx->pc = 0x2F5EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5EECu;
        // 0x2f5ef0: 0x34a5fbff  ori         $a1, $a1, 0xFBFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64511);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5EF4u;
        goto label_2f5ef4;
    }
    ctx->pc = 0x2F5EECu;
    SET_GPR_U32(ctx, 31, 0x2F5EF4u);
    ctx->pc = 0x2F5EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5EECu;
    // 0x2f5ef0: 0x34a5fbff  ori         $a1, $a1, 0xFBFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64511);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F230u, 0x2F5EECu, 0x2F5EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5EF4u;
label_2f5ef4:
    // 0x2f5ef4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f5ef4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f5ef8:
    // 0x2f5ef8: 0x1240006d  beqz        $s2, . + 4 + (0x6D << 2)
label_2f5efc:
    if (ctx->pc == 0x2F5EFCu) {
        ctx->pc = 0x2F5EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5EF8u;
        // 0x2f5efc: 0x3c060071  lui         $a2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5F00u;
        goto label_2f5f00;
    }
    ctx->pc = 0x2F5EF8u;
    {
        const bool branch_taken_0x2f5ef8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5EF8u;
        // 0x2f5efc: 0x3c060071  lui         $a2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5ef8) {
            ctx->pc = 0x2F60B0u;
            goto label_2f60b0;
        }
    }
    ctx->pc = 0x2F5F00u;
label_2f5f00:
    // 0x2f5f00: 0x86630092  lh          $v1, 0x92($s3)
    ctx->pc = 0x2f5f00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2f5f04:
    // 0x2f5f04: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x2f5f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
label_2f5f08:
    // 0x2f5f08: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2f5f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f5f0c:
    // 0x2f5f0c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f5f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2f5f10:
    // 0x2f5f10: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f5f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f5f14:
    // 0x2f5f14: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2f5f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2f5f18:
    // 0x2f5f18: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2f5f18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f5f1c:
    // 0x2f5f1c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2f5f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2f5f20:
    // 0x2f5f20: 0x86430092  lh          $v1, 0x92($s2)
    ctx->pc = 0x2f5f20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2f5f24:
    // 0x2f5f24: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f5f24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2f5f28:
    // 0x2f5f28: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2f5f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2f5f2c:
    // 0x2f5f2c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2f5f2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f5f30:
    // 0x2f5f30: 0xc0cdb38  jal         func_336CE0
label_2f5f34:
    if (ctx->pc == 0x2F5F34u) {
        ctx->pc = 0x2F5F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F30u;
        // 0x2f5f34: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5F38u;
        goto label_2f5f38;
    }
    ctx->pc = 0x2F5F30u;
    SET_GPR_U32(ctx, 31, 0x2F5F38u);
    ctx->pc = 0x2F5F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5F30u;
    // 0x2f5f34: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2F5F30u, 0x2F5F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5F38u;
label_2f5f38:
    // 0x2f5f38: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f5f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f5f3c:
    // 0x2f5f3c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2f5f3cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2f5f40:
    // 0x2f5f40: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2f5f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_2f5f44:
    // 0x2f5f44: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f5f44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2f5f48:
    // 0x2f5f48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f5f48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f5f4c:
    // 0x2f5f4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f5f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f5f50:
    // 0x2f5f50: 0xc4400140  lwc1        $f0, 0x140($v0)
    ctx->pc = 0x2f5f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f5f54:
    // 0x2f5f54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f5f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5f58:
    // 0x2f5f58: 0xc088fa8  jal         func_223EA0
label_2f5f5c:
    if (ctx->pc == 0x2F5F5Cu) {
        ctx->pc = 0x2F5F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F58u;
        // 0x2f5f5c: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5F60u;
        goto label_2f5f60;
    }
    ctx->pc = 0x2F5F58u;
    SET_GPR_U32(ctx, 31, 0x2F5F60u);
    ctx->pc = 0x2F5F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5F58u;
    // 0x2f5f5c: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EA0u, 0x2F5F58u, 0x2F5F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5F60u;
label_2f5f60:
    // 0x2f5f60: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_2f5f64:
    if (ctx->pc == 0x2F5F64u) {
        ctx->pc = 0x2F5F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F60u;
        // 0x2f5f64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5F68u;
        goto label_2f5f68;
    }
    ctx->pc = 0x2F5F60u;
    {
        const bool branch_taken_0x2f5f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F60u;
        // 0x2f5f64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5f60) {
            ctx->pc = 0x2F5FDCu;
            goto label_2f5fdc;
        }
    }
    ctx->pc = 0x2F5F68u;
label_2f5f68:
    // 0x2f5f68: 0xc089000  jal         func_224000
label_2f5f6c:
    if (ctx->pc == 0x2F5F6Cu) {
        ctx->pc = 0x2F5F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F68u;
        // 0x2f5f6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5F70u;
        goto label_2f5f70;
    }
    ctx->pc = 0x2F5F68u;
    SET_GPR_U32(ctx, 31, 0x2F5F70u);
    ctx->pc = 0x2F5F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5F68u;
    // 0x2f5f6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x2F5F68u, 0x2F5F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5F70u;
label_2f5f70:
    // 0x2f5f70: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_2f5f74:
    if (ctx->pc == 0x2F5F74u) {
        ctx->pc = 0x2F5F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F70u;
        // 0x2f5f74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5F78u;
        goto label_2f5f78;
    }
    ctx->pc = 0x2F5F70u;
    {
        const bool branch_taken_0x2f5f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F70u;
        // 0x2f5f74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5f70) {
            ctx->pc = 0x2F5FDCu;
            goto label_2f5fdc;
        }
    }
    ctx->pc = 0x2F5F78u;
label_2f5f78:
    // 0x2f5f78: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x2f5f78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2f5f7c:
    // 0x2f5f7c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2f5f7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f5f80:
    // 0x2f5f80: 0x0  nop
    ctx->pc = 0x2f5f80u;
    // NOP
label_2f5f84:
    // 0x2f5f84: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_2f5f88:
    if (ctx->pc == 0x2F5F88u) {
        ctx->pc = 0x2F5F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F84u;
        // 0x2f5f88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5F8Cu;
        goto label_2f5f8c;
    }
    ctx->pc = 0x2F5F84u;
    {
        const bool branch_taken_0x2f5f84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F5F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F84u;
        // 0x2f5f88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5f84) {
            ctx->pc = 0x2F5FE0u;
            goto label_2f5fe0;
        }
    }
    ctx->pc = 0x2F5F8Cu;
label_2f5f8c:
    // 0x2f5f8c: 0xc0a4e54  jal         func_293950
label_2f5f90:
    if (ctx->pc == 0x2F5F90u) {
        ctx->pc = 0x2F5F94u;
        goto label_2f5f94;
    }
    ctx->pc = 0x2F5F8Cu;
    SET_GPR_U32(ctx, 31, 0x2F5F94u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2F5F8Cu, 0x2F5F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5F94u;
label_2f5f94:
    // 0x2f5f94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f5f94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f5f98:
    // 0x2f5f98: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_2f5f9c:
    if (ctx->pc == 0x2F5F9Cu) {
        ctx->pc = 0x2F5F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F98u;
        // 0x2f5f9c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5FA0u;
        goto label_2f5fa0;
    }
    ctx->pc = 0x2F5F98u;
    {
        const bool branch_taken_0x2f5f98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5f98) {
            ctx->pc = 0x2F5F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5F98u;
            // 0x2f5f9c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5FCCu;
            goto label_2f5fcc;
        }
    }
    ctx->pc = 0x2F5FA0u;
label_2f5fa0:
    // 0x2f5fa0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2f5fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f5fa4:
    // 0x2f5fa4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2f5fa4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2f5fa8:
    // 0x2f5fa8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2f5fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f5fac:
    // 0x2f5fac: 0x40f809  jalr        $v0
label_2f5fb0:
    if (ctx->pc == 0x2F5FB0u) {
        ctx->pc = 0x2F5FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FACu;
        // 0x2f5fb0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5FB4u;
        goto label_2f5fb4;
    }
    ctx->pc = 0x2F5FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F5FB4u);
        ctx->pc = 0x2F5FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FACu;
        // 0x2f5fb0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5FACu, 0x2F5FB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F5FB4u;
label_2f5fb4:
    // 0x2f5fb4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f5fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f5fb8:
    // 0x2f5fb8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f5fb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f5fbc:
    // 0x2f5fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f5fc0:
    // 0x2f5fc0: 0xc0abd6c  jal         func_2AF5B0
label_2f5fc4:
    if (ctx->pc == 0x2F5FC4u) {
        ctx->pc = 0x2F5FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FC0u;
        // 0x2f5fc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5FC8u;
        goto label_2f5fc8;
    }
    ctx->pc = 0x2F5FC0u;
    SET_GPR_U32(ctx, 31, 0x2F5FC8u);
    ctx->pc = 0x2F5FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5FC0u;
    // 0x2f5fc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF5B0u, 0x2F5FC0u, 0x2F5FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5FC8u;
label_2f5fc8:
    // 0x2f5fc8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f5fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f5fcc:
    // 0x2f5fcc: 0xc0a35d6  jal         func_28D758
label_2f5fd0:
    if (ctx->pc == 0x2F5FD0u) {
        ctx->pc = 0x2F5FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FCCu;
        // 0x2f5fd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5FD4u;
        goto label_2f5fd4;
    }
    ctx->pc = 0x2F5FCCu;
    SET_GPR_U32(ctx, 31, 0x2F5FD4u);
    ctx->pc = 0x2F5FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5FCCu;
    // 0x2f5fd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2F5FCCu, 0x2F5FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5FD4u;
label_2f5fd4:
    // 0x2f5fd4: 0x1000003a  b           . + 4 + (0x3A << 2)
label_2f5fd8:
    if (ctx->pc == 0x2F5FD8u) {
        ctx->pc = 0x2F5FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FD4u;
        // 0x2f5fd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5FDCu;
        goto label_2f5fdc;
    }
    ctx->pc = 0x2F5FD4u;
    {
        const bool branch_taken_0x2f5fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FD4u;
        // 0x2f5fd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5fd4) {
            ctx->pc = 0x2F60C0u;
            goto label_2f60c0;
        }
    }
    ctx->pc = 0x2F5FDCu;
label_2f5fdc:
    // 0x2f5fdc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f5fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f5fe0:
    // 0x2f5fe0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2f5fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_2f5fe4:
    // 0x2f5fe4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f5fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f5fe8:
    // 0x2f5fe8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2f5fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2f5fec:
    // 0x2f5fec: 0xc0888a2  jal         func_222288
label_2f5ff0:
    if (ctx->pc == 0x2F5FF0u) {
        ctx->pc = 0x2F5FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FECu;
        // 0x2f5ff0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5FF4u;
        goto label_2f5ff4;
    }
    ctx->pc = 0x2F5FECu;
    SET_GPR_U32(ctx, 31, 0x2F5FF4u);
    ctx->pc = 0x2F5FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5FECu;
    // 0x2f5ff0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2F5FECu, 0x2F5FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5FF4u;
label_2f5ff4:
    // 0x2f5ff4: 0x1040ffe5  beqz        $v0, . + 4 + (-0x1B << 2)
label_2f5ff8:
    if (ctx->pc == 0x2F5FF8u) {
        ctx->pc = 0x2F5FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FF4u;
        // 0x2f5ff8: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5FFCu;
        goto label_2f5ffc;
    }
    ctx->pc = 0x2F5FF4u;
    {
        const bool branch_taken_0x2f5ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FF4u;
        // 0x2f5ff8: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5ff4) {
            ctx->pc = 0x2F5F8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5f8c;
        }
    }
    ctx->pc = 0x2F5FFCu;
label_2f5ffc:
    // 0x2f5ffc: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2f5ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2f6000:
    // 0x2f6000: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_2f6004:
    if (ctx->pc == 0x2F6004u) {
        ctx->pc = 0x2F6004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6000u;
        // 0x2f6004: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6008u;
        goto label_2f6008;
    }
    ctx->pc = 0x2F6000u;
    {
        const bool branch_taken_0x2f6000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F6004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6000u;
        // 0x2f6004: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6000) {
            ctx->pc = 0x2F6028u;
            goto label_2f6028;
        }
    }
    ctx->pc = 0x2F6008u;
label_2f6008:
    // 0x2f6008: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2f600c:
    if (ctx->pc == 0x2F600Cu) {
        ctx->pc = 0x2F600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6008u;
        // 0x2f600c: 0x240200bb  addiu       $v0, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6010u;
        goto label_2f6010;
    }
    ctx->pc = 0x2F6008u;
    {
        const bool branch_taken_0x2f6008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6008u;
        // 0x2f600c: 0x240200bb  addiu       $v0, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6008) {
            ctx->pc = 0x2F6028u;
            goto label_2f6028;
        }
    }
    ctx->pc = 0x2F6010u;
label_2f6010:
    // 0x2f6010: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2f6014:
    if (ctx->pc == 0x2F6014u) {
        ctx->pc = 0x2F6014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6010u;
        // 0x2f6014: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6018u;
        goto label_2f6018;
    }
    ctx->pc = 0x2F6010u;
    {
        const bool branch_taken_0x2f6010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F6014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6010u;
        // 0x2f6014: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6010) {
            ctx->pc = 0x2F6028u;
            goto label_2f6028;
        }
    }
    ctx->pc = 0x2F6018u;
label_2f6018:
    // 0x2f6018: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2f601c:
    if (ctx->pc == 0x2F601Cu) {
        ctx->pc = 0x2F601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6018u;
        // 0x2f601c: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6020u;
        goto label_2f6020;
    }
    ctx->pc = 0x2F6018u;
    {
        const bool branch_taken_0x2f6018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6018u;
        // 0x2f601c: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6018) {
            ctx->pc = 0x2F6028u;
            goto label_2f6028;
        }
    }
    ctx->pc = 0x2F6020u;
label_2f6020:
    // 0x2f6020: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
label_2f6024:
    if (ctx->pc == 0x2F6024u) {
        ctx->pc = 0x2F6028u;
        goto label_2f6028;
    }
    ctx->pc = 0x2F6020u;
    {
        const bool branch_taken_0x2f6020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f6020) {
            ctx->pc = 0x2F6080u;
            goto label_2f6080;
        }
    }
    ctx->pc = 0x2F6028u;
label_2f6028:
    // 0x2f6028: 0xc0a367c  jal         func_28D9F0
label_2f602c:
    if (ctx->pc == 0x2F602Cu) {
        ctx->pc = 0x2F602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6028u;
        // 0x2f602c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6030u;
        goto label_2f6030;
    }
    ctx->pc = 0x2F6028u;
    SET_GPR_U32(ctx, 31, 0x2F6030u);
    ctx->pc = 0x2F602Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6028u;
    // 0x2f602c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F6028u, 0x2F6030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6030u;
label_2f6030:
    // 0x2f6030: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f6030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f6034:
    // 0x2f6034: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
label_2f6038:
    if (ctx->pc == 0x2F6038u) {
        ctx->pc = 0x2F6038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6034u;
        // 0x2f6038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F603Cu;
        goto label_2f603c;
    }
    ctx->pc = 0x2F6034u;
    {
        const bool branch_taken_0x2f6034 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6034u;
        // 0x2f6038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6034) {
            ctx->pc = 0x2F60C0u;
            goto label_2f60c0;
        }
    }
    ctx->pc = 0x2F603Cu;
label_2f603c:
    // 0x2f603c: 0xc087420  jal         func_21D080
label_2f6040:
    if (ctx->pc == 0x2F6040u) {
        ctx->pc = 0x2F6040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F603Cu;
        // 0x2f6040: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6044u;
        goto label_2f6044;
    }
    ctx->pc = 0x2F603Cu;
    SET_GPR_U32(ctx, 31, 0x2F6044u);
    ctx->pc = 0x2F6040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F603Cu;
    // 0x2f6040: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2F603Cu, 0x2F6044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6044u;
label_2f6044:
    // 0x2f6044: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2f6044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2f6048:
    // 0x2f6048: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f6048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f604c:
    // 0x2f604c: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2f604cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2f6050:
    // 0x2f6050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f6054:
    // 0x2f6054: 0x3c013f81  lui         $at, 0x3F81
    ctx->pc = 0x2f6054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16257 << 16));
label_2f6058:
    // 0x2f6058: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x2f6058u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_2f605c:
    // 0x2f605c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f605cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f6060:
    // 0x2f6060: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f6060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f6064:
    // 0x2f6064: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2f6064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f6068:
    // 0x2f6068: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2f6068u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f606c:
    // 0x2f606c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f606cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f6070:
    // 0x2f6070: 0xc0bee7a  jal         func_2FB9E8
label_2f6074:
    if (ctx->pc == 0x2F6074u) {
        ctx->pc = 0x2F6074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6070u;
        // 0x2f6074: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6078u;
        goto label_2f6078;
    }
    ctx->pc = 0x2F6070u;
    SET_GPR_U32(ctx, 31, 0x2F6078u);
    ctx->pc = 0x2F6074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6070u;
    // 0x2f6074: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2F6070u, 0x2F6078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6078u;
label_2f6078:
    // 0x2f6078: 0x10000011  b           . + 4 + (0x11 << 2)
label_2f607c:
    if (ctx->pc == 0x2F607Cu) {
        ctx->pc = 0x2F607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6078u;
        // 0x2f607c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6080u;
        goto label_2f6080;
    }
    ctx->pc = 0x2F6078u;
    {
        const bool branch_taken_0x2f6078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6078u;
        // 0x2f607c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6078) {
            ctx->pc = 0x2F60C0u;
            goto label_2f60c0;
        }
    }
    ctx->pc = 0x2F6080u;
label_2f6080:
    // 0x2f6080: 0xc0a4e54  jal         func_293950
label_2f6084:
    if (ctx->pc == 0x2F6084u) {
        ctx->pc = 0x2F6088u;
        goto label_2f6088;
    }
    ctx->pc = 0x2F6080u;
    SET_GPR_U32(ctx, 31, 0x2F6088u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2F6080u, 0x2F6088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6088u;
label_2f6088:
    // 0x2f6088: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f6088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f608c:
    // 0x2f608c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2f6090:
    if (ctx->pc == 0x2F6090u) {
        ctx->pc = 0x2F6090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F608Cu;
        // 0x2f6090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6094u;
        goto label_2f6094;
    }
    ctx->pc = 0x2F608Cu;
    {
        const bool branch_taken_0x2f608c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F608Cu;
        // 0x2f6090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f608c) {
            ctx->pc = 0x2F60A4u;
            goto label_2f60a4;
        }
    }
    ctx->pc = 0x2F6094u;
label_2f6094:
    // 0x2f6094: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f6094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f6098:
    // 0x2f6098: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x2f6098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2f609c:
    // 0x2f609c: 0xc0acb08  jal         func_2B2C20
label_2f60a0:
    if (ctx->pc == 0x2F60A0u) {
        ctx->pc = 0x2F60A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F609Cu;
        // 0x2f60a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F60A4u;
        goto label_2f60a4;
    }
    ctx->pc = 0x2F609Cu;
    SET_GPR_U32(ctx, 31, 0x2F60A4u);
    ctx->pc = 0x2F60A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F609Cu;
    // 0x2f60a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2C20u, 0x2F609Cu, 0x2F60A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F60A4u;
label_2f60a4:
    // 0x2f60a4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f60a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f60a8:
    // 0x2f60a8: 0xc0a35d6  jal         func_28D758
label_2f60ac:
    if (ctx->pc == 0x2F60ACu) {
        ctx->pc = 0x2F60ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F60A8u;
        // 0x2f60ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F60B0u;
        goto label_2f60b0;
    }
    ctx->pc = 0x2F60A8u;
    SET_GPR_U32(ctx, 31, 0x2F60B0u);
    ctx->pc = 0x2F60ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F60A8u;
    // 0x2f60ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2F60A8u, 0x2F60B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F60B0u;
label_2f60b0:
    // 0x2f60b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f60b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f60b4:
    // 0x2f60b4: 0xa2200016  sb          $zero, 0x16($s1)
    ctx->pc = 0x2f60b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 0));
label_2f60b8:
    // 0x2f60b8: 0xa2220014  sb          $v0, 0x14($s1)
    ctx->pc = 0x2f60b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 2));
label_2f60bc:
    // 0x2f60bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f60bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f60c0:
    // 0x2f60c0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2f60c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2f60c4:
    // 0x2f60c4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2f60c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2f60c8:
    // 0x2f60c8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2f60c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2f60cc:
    // 0x2f60cc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2f60ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f60d0:
    // 0x2f60d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f60d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f60d4:
    // 0x2f60d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f60d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f60d8:
    // 0x2f60d8: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x2f60d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2f60dc:
    // 0x2f60dc: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2f60dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f60e0:
    // 0x2f60e0: 0x3e00008  jr          $ra
label_2f60e4:
    if (ctx->pc == 0x2F60E4u) {
        ctx->pc = 0x2F60E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F60E0u;
        // 0x2f60e4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F60E8u;
        goto label_fallthrough_0x2f60e0;
    }
    ctx->pc = 0x2F60E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F60E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F60E0u;
        // 0x2f60e4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F60E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f60e0:
    ctx->pc = 0x2F60E8u;
}
