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

// Function: sub_004E9EA0
// Address: 0x4e9ea0 - 0x4ea270
void sub_004E9EA0_0x4e9ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E9EA0_0x4e9ea0");
#endif

    switch (ctx->pc) {
        case 0x4e9ea0u: goto label_4e9ea0;
        case 0x4e9ea4u: goto label_4e9ea4;
        case 0x4e9ea8u: goto label_4e9ea8;
        case 0x4e9eacu: goto label_4e9eac;
        case 0x4e9eb0u: goto label_4e9eb0;
        case 0x4e9eb4u: goto label_4e9eb4;
        case 0x4e9eb8u: goto label_4e9eb8;
        case 0x4e9ebcu: goto label_4e9ebc;
        case 0x4e9ec0u: goto label_4e9ec0;
        case 0x4e9ec4u: goto label_4e9ec4;
        case 0x4e9ec8u: goto label_4e9ec8;
        case 0x4e9eccu: goto label_4e9ecc;
        case 0x4e9ed0u: goto label_4e9ed0;
        case 0x4e9ed4u: goto label_4e9ed4;
        case 0x4e9ed8u: goto label_4e9ed8;
        case 0x4e9edcu: goto label_4e9edc;
        case 0x4e9ee0u: goto label_4e9ee0;
        case 0x4e9ee4u: goto label_4e9ee4;
        case 0x4e9ee8u: goto label_4e9ee8;
        case 0x4e9eecu: goto label_4e9eec;
        case 0x4e9ef0u: goto label_4e9ef0;
        case 0x4e9ef4u: goto label_4e9ef4;
        case 0x4e9ef8u: goto label_4e9ef8;
        case 0x4e9efcu: goto label_4e9efc;
        case 0x4e9f00u: goto label_4e9f00;
        case 0x4e9f04u: goto label_4e9f04;
        case 0x4e9f08u: goto label_4e9f08;
        case 0x4e9f0cu: goto label_4e9f0c;
        case 0x4e9f10u: goto label_4e9f10;
        case 0x4e9f14u: goto label_4e9f14;
        case 0x4e9f18u: goto label_4e9f18;
        case 0x4e9f1cu: goto label_4e9f1c;
        case 0x4e9f20u: goto label_4e9f20;
        case 0x4e9f24u: goto label_4e9f24;
        case 0x4e9f28u: goto label_4e9f28;
        case 0x4e9f2cu: goto label_4e9f2c;
        case 0x4e9f30u: goto label_4e9f30;
        case 0x4e9f34u: goto label_4e9f34;
        case 0x4e9f38u: goto label_4e9f38;
        case 0x4e9f3cu: goto label_4e9f3c;
        case 0x4e9f40u: goto label_4e9f40;
        case 0x4e9f44u: goto label_4e9f44;
        case 0x4e9f48u: goto label_4e9f48;
        case 0x4e9f4cu: goto label_4e9f4c;
        case 0x4e9f50u: goto label_4e9f50;
        case 0x4e9f54u: goto label_4e9f54;
        case 0x4e9f58u: goto label_4e9f58;
        case 0x4e9f5cu: goto label_4e9f5c;
        case 0x4e9f60u: goto label_4e9f60;
        case 0x4e9f64u: goto label_4e9f64;
        case 0x4e9f68u: goto label_4e9f68;
        case 0x4e9f6cu: goto label_4e9f6c;
        case 0x4e9f70u: goto label_4e9f70;
        case 0x4e9f74u: goto label_4e9f74;
        case 0x4e9f78u: goto label_4e9f78;
        case 0x4e9f7cu: goto label_4e9f7c;
        case 0x4e9f80u: goto label_4e9f80;
        case 0x4e9f84u: goto label_4e9f84;
        case 0x4e9f88u: goto label_4e9f88;
        case 0x4e9f8cu: goto label_4e9f8c;
        case 0x4e9f90u: goto label_4e9f90;
        case 0x4e9f94u: goto label_4e9f94;
        case 0x4e9f98u: goto label_4e9f98;
        case 0x4e9f9cu: goto label_4e9f9c;
        case 0x4e9fa0u: goto label_4e9fa0;
        case 0x4e9fa4u: goto label_4e9fa4;
        case 0x4e9fa8u: goto label_4e9fa8;
        case 0x4e9facu: goto label_4e9fac;
        case 0x4e9fb0u: goto label_4e9fb0;
        case 0x4e9fb4u: goto label_4e9fb4;
        case 0x4e9fb8u: goto label_4e9fb8;
        case 0x4e9fbcu: goto label_4e9fbc;
        case 0x4e9fc0u: goto label_4e9fc0;
        case 0x4e9fc4u: goto label_4e9fc4;
        case 0x4e9fc8u: goto label_4e9fc8;
        case 0x4e9fccu: goto label_4e9fcc;
        case 0x4e9fd0u: goto label_4e9fd0;
        case 0x4e9fd4u: goto label_4e9fd4;
        case 0x4e9fd8u: goto label_4e9fd8;
        case 0x4e9fdcu: goto label_4e9fdc;
        case 0x4e9fe0u: goto label_4e9fe0;
        case 0x4e9fe4u: goto label_4e9fe4;
        case 0x4e9fe8u: goto label_4e9fe8;
        case 0x4e9fecu: goto label_4e9fec;
        case 0x4e9ff0u: goto label_4e9ff0;
        case 0x4e9ff4u: goto label_4e9ff4;
        case 0x4e9ff8u: goto label_4e9ff8;
        case 0x4e9ffcu: goto label_4e9ffc;
        case 0x4ea000u: goto label_4ea000;
        case 0x4ea004u: goto label_4ea004;
        case 0x4ea008u: goto label_4ea008;
        case 0x4ea00cu: goto label_4ea00c;
        case 0x4ea010u: goto label_4ea010;
        case 0x4ea014u: goto label_4ea014;
        case 0x4ea018u: goto label_4ea018;
        case 0x4ea01cu: goto label_4ea01c;
        case 0x4ea020u: goto label_4ea020;
        case 0x4ea024u: goto label_4ea024;
        case 0x4ea028u: goto label_4ea028;
        case 0x4ea02cu: goto label_4ea02c;
        case 0x4ea030u: goto label_4ea030;
        case 0x4ea034u: goto label_4ea034;
        case 0x4ea038u: goto label_4ea038;
        case 0x4ea03cu: goto label_4ea03c;
        case 0x4ea040u: goto label_4ea040;
        case 0x4ea044u: goto label_4ea044;
        case 0x4ea048u: goto label_4ea048;
        case 0x4ea04cu: goto label_4ea04c;
        case 0x4ea050u: goto label_4ea050;
        case 0x4ea054u: goto label_4ea054;
        case 0x4ea058u: goto label_4ea058;
        case 0x4ea05cu: goto label_4ea05c;
        case 0x4ea060u: goto label_4ea060;
        case 0x4ea064u: goto label_4ea064;
        case 0x4ea068u: goto label_4ea068;
        case 0x4ea06cu: goto label_4ea06c;
        case 0x4ea070u: goto label_4ea070;
        case 0x4ea074u: goto label_4ea074;
        case 0x4ea078u: goto label_4ea078;
        case 0x4ea07cu: goto label_4ea07c;
        case 0x4ea080u: goto label_4ea080;
        case 0x4ea084u: goto label_4ea084;
        case 0x4ea088u: goto label_4ea088;
        case 0x4ea08cu: goto label_4ea08c;
        case 0x4ea090u: goto label_4ea090;
        case 0x4ea094u: goto label_4ea094;
        case 0x4ea098u: goto label_4ea098;
        case 0x4ea09cu: goto label_4ea09c;
        case 0x4ea0a0u: goto label_4ea0a0;
        case 0x4ea0a4u: goto label_4ea0a4;
        case 0x4ea0a8u: goto label_4ea0a8;
        case 0x4ea0acu: goto label_4ea0ac;
        case 0x4ea0b0u: goto label_4ea0b0;
        case 0x4ea0b4u: goto label_4ea0b4;
        case 0x4ea0b8u: goto label_4ea0b8;
        case 0x4ea0bcu: goto label_4ea0bc;
        case 0x4ea0c0u: goto label_4ea0c0;
        case 0x4ea0c4u: goto label_4ea0c4;
        case 0x4ea0c8u: goto label_4ea0c8;
        case 0x4ea0ccu: goto label_4ea0cc;
        case 0x4ea0d0u: goto label_4ea0d0;
        case 0x4ea0d4u: goto label_4ea0d4;
        case 0x4ea0d8u: goto label_4ea0d8;
        case 0x4ea0dcu: goto label_4ea0dc;
        case 0x4ea0e0u: goto label_4ea0e0;
        case 0x4ea0e4u: goto label_4ea0e4;
        case 0x4ea0e8u: goto label_4ea0e8;
        case 0x4ea0ecu: goto label_4ea0ec;
        case 0x4ea0f0u: goto label_4ea0f0;
        case 0x4ea0f4u: goto label_4ea0f4;
        case 0x4ea0f8u: goto label_4ea0f8;
        case 0x4ea0fcu: goto label_4ea0fc;
        case 0x4ea100u: goto label_4ea100;
        case 0x4ea104u: goto label_4ea104;
        case 0x4ea108u: goto label_4ea108;
        case 0x4ea10cu: goto label_4ea10c;
        case 0x4ea110u: goto label_4ea110;
        case 0x4ea114u: goto label_4ea114;
        case 0x4ea118u: goto label_4ea118;
        case 0x4ea11cu: goto label_4ea11c;
        case 0x4ea120u: goto label_4ea120;
        case 0x4ea124u: goto label_4ea124;
        case 0x4ea128u: goto label_4ea128;
        case 0x4ea12cu: goto label_4ea12c;
        case 0x4ea130u: goto label_4ea130;
        case 0x4ea134u: goto label_4ea134;
        case 0x4ea138u: goto label_4ea138;
        case 0x4ea13cu: goto label_4ea13c;
        case 0x4ea140u: goto label_4ea140;
        case 0x4ea144u: goto label_4ea144;
        case 0x4ea148u: goto label_4ea148;
        case 0x4ea14cu: goto label_4ea14c;
        case 0x4ea150u: goto label_4ea150;
        case 0x4ea154u: goto label_4ea154;
        case 0x4ea158u: goto label_4ea158;
        case 0x4ea15cu: goto label_4ea15c;
        case 0x4ea160u: goto label_4ea160;
        case 0x4ea164u: goto label_4ea164;
        case 0x4ea168u: goto label_4ea168;
        case 0x4ea16cu: goto label_4ea16c;
        case 0x4ea170u: goto label_4ea170;
        case 0x4ea174u: goto label_4ea174;
        case 0x4ea178u: goto label_4ea178;
        case 0x4ea17cu: goto label_4ea17c;
        case 0x4ea180u: goto label_4ea180;
        case 0x4ea184u: goto label_4ea184;
        case 0x4ea188u: goto label_4ea188;
        case 0x4ea18cu: goto label_4ea18c;
        case 0x4ea190u: goto label_4ea190;
        case 0x4ea194u: goto label_4ea194;
        case 0x4ea198u: goto label_4ea198;
        case 0x4ea19cu: goto label_4ea19c;
        case 0x4ea1a0u: goto label_4ea1a0;
        case 0x4ea1a4u: goto label_4ea1a4;
        case 0x4ea1a8u: goto label_4ea1a8;
        case 0x4ea1acu: goto label_4ea1ac;
        case 0x4ea1b0u: goto label_4ea1b0;
        case 0x4ea1b4u: goto label_4ea1b4;
        case 0x4ea1b8u: goto label_4ea1b8;
        case 0x4ea1bcu: goto label_4ea1bc;
        case 0x4ea1c0u: goto label_4ea1c0;
        case 0x4ea1c4u: goto label_4ea1c4;
        case 0x4ea1c8u: goto label_4ea1c8;
        case 0x4ea1ccu: goto label_4ea1cc;
        case 0x4ea1d0u: goto label_4ea1d0;
        case 0x4ea1d4u: goto label_4ea1d4;
        case 0x4ea1d8u: goto label_4ea1d8;
        case 0x4ea1dcu: goto label_4ea1dc;
        case 0x4ea1e0u: goto label_4ea1e0;
        case 0x4ea1e4u: goto label_4ea1e4;
        case 0x4ea1e8u: goto label_4ea1e8;
        case 0x4ea1ecu: goto label_4ea1ec;
        case 0x4ea1f0u: goto label_4ea1f0;
        case 0x4ea1f4u: goto label_4ea1f4;
        case 0x4ea1f8u: goto label_4ea1f8;
        case 0x4ea1fcu: goto label_4ea1fc;
        case 0x4ea200u: goto label_4ea200;
        case 0x4ea204u: goto label_4ea204;
        case 0x4ea208u: goto label_4ea208;
        case 0x4ea20cu: goto label_4ea20c;
        case 0x4ea210u: goto label_4ea210;
        case 0x4ea214u: goto label_4ea214;
        case 0x4ea218u: goto label_4ea218;
        case 0x4ea21cu: goto label_4ea21c;
        case 0x4ea220u: goto label_4ea220;
        case 0x4ea224u: goto label_4ea224;
        case 0x4ea228u: goto label_4ea228;
        case 0x4ea22cu: goto label_4ea22c;
        case 0x4ea230u: goto label_4ea230;
        case 0x4ea234u: goto label_4ea234;
        case 0x4ea238u: goto label_4ea238;
        case 0x4ea23cu: goto label_4ea23c;
        case 0x4ea240u: goto label_4ea240;
        case 0x4ea244u: goto label_4ea244;
        case 0x4ea248u: goto label_4ea248;
        case 0x4ea24cu: goto label_4ea24c;
        case 0x4ea250u: goto label_4ea250;
        case 0x4ea254u: goto label_4ea254;
        case 0x4ea258u: goto label_4ea258;
        case 0x4ea25cu: goto label_4ea25c;
        case 0x4ea260u: goto label_4ea260;
        case 0x4ea264u: goto label_4ea264;
        case 0x4ea268u: goto label_4ea268;
        case 0x4ea26cu: goto label_4ea26c;
        default: break;
    }

    ctx->pc = 0x4e9ea0u;

label_4e9ea0:
    // 0x4e9ea0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e9ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e9ea4:
    // 0x4e9ea4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e9ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4e9ea8:
    // 0x4e9ea8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4e9ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4e9eac:
    // 0x4e9eac: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x4e9eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4e9eb0:
    // 0x4e9eb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e9eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e9eb4:
    // 0x4e9eb4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x4e9eb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4e9eb8:
    // 0x4e9eb8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4e9eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4e9ebc:
    // 0x4e9ebc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4e9ebcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e9ec0:
    // 0x4e9ec0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e9ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e9ec4:
    // 0x4e9ec4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4e9ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e9ec8:
    // 0x4e9ec8: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_4e9ecc:
    if (ctx->pc == 0x4E9ECCu) {
        ctx->pc = 0x4E9ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9EC8u;
        // 0x4e9ecc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9ED0u;
        goto label_4e9ed0;
    }
    ctx->pc = 0x4E9EC8u;
    {
        const bool branch_taken_0x4e9ec8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E9ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9EC8u;
        // 0x4e9ecc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9ec8) {
            ctx->pc = 0x4E9EECu;
            goto label_4e9eec;
        }
    }
    ctx->pc = 0x4E9ED0u;
label_4e9ed0:
    // 0x4e9ed0: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
label_4e9ed4:
    if (ctx->pc == 0x4E9ED4u) {
        ctx->pc = 0x4E9ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9ED0u;
        // 0x4e9ed4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9ED8u;
        goto label_4e9ed8;
    }
    ctx->pc = 0x4E9ED0u;
    {
        const bool branch_taken_0x4e9ed0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E9ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9ED0u;
        // 0x4e9ed4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9ed0) {
            ctx->pc = 0x4E9EF0u;
            goto label_4e9ef0;
        }
    }
    ctx->pc = 0x4E9ED8u;
label_4e9ed8:
    // 0x4e9ed8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4e9ed8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4e9edc:
    // 0x4e9edc: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x4e9edcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_4e9ee0:
    // 0x4e9ee0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e9ee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e9ee4:
    // 0x4e9ee4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_4e9ee8:
    if (ctx->pc == 0x4E9EE8u) {
        ctx->pc = 0x4E9EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9EE4u;
        // 0x4e9ee8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9EECu;
        goto label_4e9eec;
    }
    ctx->pc = 0x4E9EE4u;
    {
        const bool branch_taken_0x4e9ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9EE4u;
        // 0x4e9ee8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9ee4) {
            ctx->pc = 0x4E9F80u;
            goto label_4e9f80;
        }
    }
    ctx->pc = 0x4E9EECu;
label_4e9eec:
    // 0x4e9eec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e9eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e9ef0:
    // 0x4e9ef0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e9ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e9ef4:
    // 0x4e9ef4: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x4e9ef4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4e9ef8:
    // 0x4e9ef8: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x4e9ef8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_4e9efc:
    // 0x4e9efc: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e9efcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e9f00:
    // 0x4e9f00: 0x24a57048  addiu       $a1, $a1, 0x7048
    ctx->pc = 0x4e9f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28744));
label_4e9f04:
    // 0x4e9f04: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4e9f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4e9f08:
    // 0x4e9f08: 0x25087050  addiu       $t0, $t0, 0x7050
    ctx->pc = 0x4e9f08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28752));
label_4e9f0c:
    // 0x4e9f0c: 0x254a7078  addiu       $t2, $t2, 0x7078
    ctx->pc = 0x4e9f0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 28792));
label_4e9f10:
    // 0x4e9f10: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x4e9f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4e9f14:
    // 0x4e9f14: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4e9f14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4e9f18:
    // 0x4e9f18: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e9f18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e9f1c:
    // 0x4e9f1c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4e9f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4e9f20:
    // 0x4e9f20: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e9f20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e9f24:
    // 0x4e9f24: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x4e9f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_4e9f28:
    // 0x4e9f28: 0x40f809  jalr        $v0
label_4e9f2c:
    if (ctx->pc == 0x4E9F2Cu) {
        ctx->pc = 0x4E9F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9F28u;
        // 0x4e9f2c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9F30u;
        goto label_4e9f30;
    }
    ctx->pc = 0x4E9F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E9F30u);
        ctx->pc = 0x4E9F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9F28u;
        // 0x4e9f2c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9F28u, 0x4E9F30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E9F30u;
label_4e9f30:
    // 0x4e9f30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e9f30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e9f34:
    // 0x4e9f34: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4e9f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4e9f38:
    // 0x4e9f38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4e9f3c:
    if (ctx->pc == 0x4E9F3Cu) {
        ctx->pc = 0x4E9F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9F38u;
        // 0x4e9f3c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9F40u;
        goto label_4e9f40;
    }
    ctx->pc = 0x4E9F38u;
    {
        const bool branch_taken_0x4e9f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9F38u;
        // 0x4e9f3c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9f38) {
            ctx->pc = 0x4E9F50u;
            goto label_4e9f50;
        }
    }
    ctx->pc = 0x4E9F40u;
label_4e9f40:
    // 0x4e9f40: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4e9f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4e9f44:
    // 0x4e9f44: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4e9f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4e9f48:
    // 0x4e9f48: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x4e9f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e9f4c:
    // 0x4e9f4c: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x4e9f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e9f50:
    // 0x4e9f50: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x4e9f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
label_4e9f54:
    // 0x4e9f54: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4e9f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e9f58:
    // 0x4e9f58: 0x56030005  bnel        $s0, $v1, . + 4 + (0x5 << 2)
label_4e9f5c:
    if (ctx->pc == 0x4E9F5Cu) {
        ctx->pc = 0x4E9F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9F58u;
        // 0x4e9f5c: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9F60u;
        goto label_4e9f60;
    }
    ctx->pc = 0x4E9F58u;
    {
        const bool branch_taken_0x4e9f58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e9f58) {
            ctx->pc = 0x4E9F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E9F58u;
            // 0x4e9f5c: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E9F70u;
            goto label_4e9f70;
        }
    }
    ctx->pc = 0x4E9F60u;
label_4e9f60:
    // 0x4e9f60: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x4e9f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
label_4e9f64:
    // 0x4e9f64: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4e9f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e9f68:
    // 0x4e9f68: 0x10000022  b           . + 4 + (0x22 << 2)
label_4e9f6c:
    if (ctx->pc == 0x4E9F6Cu) {
        ctx->pc = 0x4E9F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9F68u;
        // 0x4e9f6c: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9F70u;
        goto label_4e9f70;
    }
    ctx->pc = 0x4E9F68u;
    {
        const bool branch_taken_0x4e9f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9F68u;
        // 0x4e9f6c: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9f68) {
            ctx->pc = 0x4E9FF4u;
            goto label_4e9ff4;
        }
    }
    ctx->pc = 0x4E9F70u;
label_4e9f70:
    // 0x4e9f70: 0x52020020  beql        $s0, $v0, . + 4 + (0x20 << 2)
label_4e9f74:
    if (ctx->pc == 0x4E9F74u) {
        ctx->pc = 0x4E9F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9F70u;
        // 0x4e9f74: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9F78u;
        goto label_4e9f78;
    }
    ctx->pc = 0x4E9F70u;
    {
        const bool branch_taken_0x4e9f70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e9f70) {
            ctx->pc = 0x4E9F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E9F70u;
            // 0x4e9f74: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E9FF4u;
            goto label_4e9ff4;
        }
    }
    ctx->pc = 0x4E9F78u;
label_4e9f78:
    // 0x4e9f78: 0x1000001f  b           . + 4 + (0x1F << 2)
label_4e9f7c:
    if (ctx->pc == 0x4E9F7Cu) {
        ctx->pc = 0x4E9F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9F78u;
        // 0x4e9f7c: 0xacf00004  sw          $s0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9F80u;
        goto label_4e9f80;
    }
    ctx->pc = 0x4E9F78u;
    {
        const bool branch_taken_0x4e9f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9F78u;
        // 0x4e9f7c: 0xacf00004  sw          $s0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9f78) {
            ctx->pc = 0x4E9FF8u;
            goto label_4e9ff8;
        }
    }
    ctx->pc = 0x4E9F80u;
label_4e9f80:
    // 0x4e9f80: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e9f80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e9f84:
    // 0x4e9f84: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x4e9f84u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4e9f88:
    // 0x4e9f88: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x4e9f88u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_4e9f8c:
    // 0x4e9f8c: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e9f8cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e9f90:
    // 0x4e9f90: 0x24a57048  addiu       $a1, $a1, 0x7048
    ctx->pc = 0x4e9f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28744));
label_4e9f94:
    // 0x4e9f94: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4e9f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4e9f98:
    // 0x4e9f98: 0x25087050  addiu       $t0, $t0, 0x7050
    ctx->pc = 0x4e9f98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28752));
label_4e9f9c:
    // 0x4e9f9c: 0x254a7078  addiu       $t2, $t2, 0x7078
    ctx->pc = 0x4e9f9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 28792));
label_4e9fa0:
    // 0x4e9fa0: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x4e9fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4e9fa4:
    // 0x4e9fa4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4e9fa4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4e9fa8:
    // 0x4e9fa8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e9fa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e9fac:
    // 0x4e9fac: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4e9facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4e9fb0:
    // 0x4e9fb0: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e9fb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e9fb4:
    // 0x4e9fb4: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x4e9fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_4e9fb8:
    // 0x4e9fb8: 0x40f809  jalr        $v0
label_4e9fbc:
    if (ctx->pc == 0x4E9FBCu) {
        ctx->pc = 0x4E9FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9FB8u;
        // 0x4e9fbc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9FC0u;
        goto label_4e9fc0;
    }
    ctx->pc = 0x4E9FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E9FC0u);
        ctx->pc = 0x4E9FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9FB8u;
        // 0x4e9fbc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9FB8u, 0x4E9FC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E9FC0u;
label_4e9fc0:
    // 0x4e9fc0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e9fc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e9fc4:
    // 0x4e9fc4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4e9fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4e9fc8:
    // 0x4e9fc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4e9fcc:
    if (ctx->pc == 0x4E9FCCu) {
        ctx->pc = 0x4E9FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9FC8u;
        // 0x4e9fcc: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9FD0u;
        goto label_4e9fd0;
    }
    ctx->pc = 0x4E9FC8u;
    {
        const bool branch_taken_0x4e9fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9FC8u;
        // 0x4e9fcc: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9fc8) {
            ctx->pc = 0x4E9FE0u;
            goto label_4e9fe0;
        }
    }
    ctx->pc = 0x4E9FD0u;
label_4e9fd0:
    // 0x4e9fd0: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4e9fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4e9fd4:
    // 0x4e9fd4: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4e9fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4e9fd8:
    // 0x4e9fd8: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x4e9fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e9fdc:
    // 0x4e9fdc: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x4e9fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e9fe0:
    // 0x4e9fe0: 0xae07000c  sw          $a3, 0xC($s0)
    ctx->pc = 0x4e9fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
label_4e9fe4:
    // 0x4e9fe4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4e9fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e9fe8:
    // 0x4e9fe8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e9fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e9fec:
    // 0x4e9fec: 0x52020001  beql        $s0, $v0, . + 4 + (0x1 << 2)
label_4e9ff0:
    if (ctx->pc == 0x4E9FF0u) {
        ctx->pc = 0x4E9FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9FECu;
        // 0x4e9ff0: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9FF4u;
        goto label_4e9ff4;
    }
    ctx->pc = 0x4E9FECu;
    {
        const bool branch_taken_0x4e9fec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e9fec) {
            ctx->pc = 0x4E9FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E9FECu;
            // 0x4e9ff0: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E9FF4u;
            goto label_4e9ff4;
        }
    }
    ctx->pc = 0x4E9FF4u;
label_4e9ff4:
    // 0x4e9ff4: 0xacf00004  sw          $s0, 0x4($a3)
    ctx->pc = 0x4e9ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
label_4e9ff8:
    // 0x4e9ff8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4e9ff8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4e9ffc:
    // 0x4e9ffc: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x4e9ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
label_4ea000:
    // 0x4ea000: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x4ea000u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
label_4ea004:
    // 0x4ea004: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4ea004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4ea008:
    // 0x4ea008: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x4ea008u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_4ea00c:
    // 0x4ea00c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4ea00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4ea010:
    // 0x4ea010: 0x10e20088  beq         $a3, $v0, . + 4 + (0x88 << 2)
label_4ea014:
    if (ctx->pc == 0x4EA014u) {
        ctx->pc = 0x4EA014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA010u;
        // 0x4ea014: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA018u;
        goto label_4ea018;
    }
    ctx->pc = 0x4EA010u;
    {
        const bool branch_taken_0x4ea010 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x4EA014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA010u;
        // 0x4ea014: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea010) {
            ctx->pc = 0x4EA234u;
            goto label_4ea234;
        }
    }
    ctx->pc = 0x4EA018u;
label_4ea018:
    // 0x4ea018: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ea018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ea01c:
    // 0x4ea01c: 0x54400086  bnel        $v0, $zero, . + 4 + (0x86 << 2)
label_4ea020:
    if (ctx->pc == 0x4EA020u) {
        ctx->pc = 0x4EA020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA01Cu;
        // 0x4ea020: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA024u;
        goto label_4ea024;
    }
    ctx->pc = 0x4EA01Cu;
    {
        const bool branch_taken_0x4ea01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ea01c) {
            ctx->pc = 0x4EA020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA01Cu;
            // 0x4ea020: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA238u;
            goto label_4ea238;
        }
    }
    ctx->pc = 0x4EA024u;
label_4ea024:
    // 0x4ea024: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4ea024u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ea028:
    // 0x4ea028: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4ea028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4ea02c:
    // 0x4ea02c: 0x0  nop
    ctx->pc = 0x4ea02cu;
    // NOP
label_4ea030:
    // 0x4ea030: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4ea030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4ea034:
    // 0x4ea034: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4ea034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4ea038:
    // 0x4ea038: 0x1464003a  bne         $v1, $a0, . + 4 + (0x3A << 2)
label_4ea03c:
    if (ctx->pc == 0x4EA03Cu) {
        ctx->pc = 0x4EA040u;
        goto label_4ea040;
    }
    ctx->pc = 0x4EA038u;
    {
        const bool branch_taken_0x4ea038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4ea038) {
            ctx->pc = 0x4EA124u;
            goto label_4ea124;
        }
    }
    ctx->pc = 0x4EA040u;
label_4ea040:
    // 0x4ea040: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4ea040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4ea044:
    // 0x4ea044: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_4ea048:
    if (ctx->pc == 0x4EA048u) {
        ctx->pc = 0x4EA048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA044u;
        // 0x4ea048: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA04Cu;
        goto label_4ea04c;
    }
    ctx->pc = 0x4EA044u;
    {
        const bool branch_taken_0x4ea044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ea044) {
            ctx->pc = 0x4EA048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA044u;
            // 0x4ea048: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA064u;
            goto label_4ea064;
        }
    }
    ctx->pc = 0x4EA04Cu;
label_4ea04c:
    // 0x4ea04c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4ea04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4ea050:
    // 0x4ea050: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_4ea054:
    if (ctx->pc == 0x4EA054u) {
        ctx->pc = 0x4EA054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA050u;
        // 0x4ea054: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA058u;
        goto label_4ea058;
    }
    ctx->pc = 0x4EA050u;
    {
        const bool branch_taken_0x4ea050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ea050) {
            ctx->pc = 0x4EA054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA050u;
            // 0x4ea054: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA064u;
            goto label_4ea064;
        }
    }
    ctx->pc = 0x4EA058u;
label_4ea058:
    // 0x4ea058: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x4ea058u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_4ea05c:
    // 0x4ea05c: 0x10000038  b           . + 4 + (0x38 << 2)
label_4ea060:
    if (ctx->pc == 0x4EA060u) {
        ctx->pc = 0x4EA060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA05Cu;
        // 0x4ea060: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA064u;
        goto label_4ea064;
    }
    ctx->pc = 0x4EA05Cu;
    {
        const bool branch_taken_0x4ea05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA05Cu;
        // 0x4ea060: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea05c) {
            ctx->pc = 0x4EA140u;
            goto label_4ea140;
        }
    }
    ctx->pc = 0x4EA064u;
label_4ea064:
    // 0x4ea064: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x4ea064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4ea068:
    // 0x4ea068: 0x55040015  bnel        $t0, $a0, . + 4 + (0x15 << 2)
label_4ea06c:
    if (ctx->pc == 0x4EA06Cu) {
        ctx->pc = 0x4EA06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA068u;
        // 0x4ea06c: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA070u;
        goto label_4ea070;
    }
    ctx->pc = 0x4EA068u;
    {
        const bool branch_taken_0x4ea068 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x4ea068) {
            ctx->pc = 0x4EA06Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA068u;
            // 0x4ea06c: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA0C0u;
            goto label_4ea0c0;
        }
    }
    ctx->pc = 0x4EA070u;
label_4ea070:
    // 0x4ea070: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4ea070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4ea074:
    // 0x4ea074: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4ea074u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4ea078:
    // 0x4ea078: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x4ea078u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
label_4ea07c:
    // 0x4ea07c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4ea07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4ea080:
    // 0x4ea080: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4ea084:
    if (ctx->pc == 0x4EA084u) {
        ctx->pc = 0x4EA084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA080u;
        // 0x4ea084: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA088u;
        goto label_4ea088;
    }
    ctx->pc = 0x4EA080u;
    {
        const bool branch_taken_0x4ea080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ea080) {
            ctx->pc = 0x4EA084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA080u;
            // 0x4ea084: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA088u;
            goto label_4ea088;
        }
    }
    ctx->pc = 0x4EA088u;
label_4ea088:
    // 0x4ea088: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4ea088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4ea08c:
    // 0x4ea08c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4ea08cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4ea090:
    // 0x4ea090: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4ea090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4ea094:
    // 0x4ea094: 0x55030003  bnel        $t0, $v1, . + 4 + (0x3 << 2)
label_4ea098:
    if (ctx->pc == 0x4EA098u) {
        ctx->pc = 0x4EA098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA094u;
        // 0x4ea098: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA09Cu;
        goto label_4ea09c;
    }
    ctx->pc = 0x4EA094u;
    {
        const bool branch_taken_0x4ea094 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x4ea094) {
            ctx->pc = 0x4EA098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA094u;
            // 0x4ea098: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA0A4u;
            goto label_4ea0a4;
        }
    }
    ctx->pc = 0x4EA09Cu;
label_4ea09c:
    // 0x4ea09c: 0x10000005  b           . + 4 + (0x5 << 2)
label_4ea0a0:
    if (ctx->pc == 0x4EA0A0u) {
        ctx->pc = 0x4EA0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA09Cu;
        // 0x4ea0a0: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA0A4u;
        goto label_4ea0a4;
    }
    ctx->pc = 0x4EA09Cu;
    {
        const bool branch_taken_0x4ea09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA09Cu;
        // 0x4ea0a0: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea09c) {
            ctx->pc = 0x4EA0B4u;
            goto label_4ea0b4;
        }
    }
    ctx->pc = 0x4EA0A4u;
label_4ea0a4:
    // 0x4ea0a4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4ea0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4ea0a8:
    // 0x4ea0a8: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
label_4ea0ac:
    if (ctx->pc == 0x4EA0ACu) {
        ctx->pc = 0x4EA0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA0A8u;
        // 0x4ea0ac: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA0B0u;
        goto label_4ea0b0;
    }
    ctx->pc = 0x4EA0A8u;
    {
        const bool branch_taken_0x4ea0a8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x4ea0a8) {
            ctx->pc = 0x4EA0ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA0A8u;
            // 0x4ea0ac: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA0B4u;
            goto label_4ea0b4;
        }
    }
    ctx->pc = 0x4EA0B0u;
label_4ea0b0:
    // 0x4ea0b0: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x4ea0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_4ea0b4:
    // 0x4ea0b4: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x4ea0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_4ea0b8:
    // 0x4ea0b8: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x4ea0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_4ea0bc:
    // 0x4ea0bc: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4ea0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4ea0c0:
    // 0x4ea0c0: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x4ea0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_4ea0c4:
    // 0x4ea0c4: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4ea0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4ea0c8:
    // 0x4ea0c8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4ea0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4ea0cc:
    // 0x4ea0cc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4ea0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4ea0d0:
    // 0x4ea0d0: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4ea0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4ea0d4:
    // 0x4ea0d4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4ea0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4ea0d8:
    // 0x4ea0d8: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x4ea0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4ea0dc:
    // 0x4ea0dc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4ea0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4ea0e0:
    // 0x4ea0e0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x4ea0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_4ea0e4:
    // 0x4ea0e4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4ea0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4ea0e8:
    // 0x4ea0e8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4ea0ec:
    if (ctx->pc == 0x4EA0ECu) {
        ctx->pc = 0x4EA0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA0E8u;
        // 0x4ea0ec: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA0F0u;
        goto label_4ea0f0;
    }
    ctx->pc = 0x4EA0E8u;
    {
        const bool branch_taken_0x4ea0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ea0e8) {
            ctx->pc = 0x4EA0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA0E8u;
            // 0x4ea0ec: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA0F0u;
            goto label_4ea0f0;
        }
    }
    ctx->pc = 0x4EA0F0u;
label_4ea0f0:
    // 0x4ea0f0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4ea0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4ea0f4:
    // 0x4ea0f4: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4ea0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_4ea0f8:
    // 0x4ea0f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4ea0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4ea0fc:
    // 0x4ea0fc: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_4ea100:
    if (ctx->pc == 0x4EA100u) {
        ctx->pc = 0x4EA100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA0FCu;
        // 0x4ea100: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA104u;
        goto label_4ea104;
    }
    ctx->pc = 0x4EA0FCu;
    {
        const bool branch_taken_0x4ea0fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4ea0fc) {
            ctx->pc = 0x4EA100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA0FCu;
            // 0x4ea100: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA10Cu;
            goto label_4ea10c;
        }
    }
    ctx->pc = 0x4EA104u;
label_4ea104:
    // 0x4ea104: 0x10000005  b           . + 4 + (0x5 << 2)
label_4ea108:
    if (ctx->pc == 0x4EA108u) {
        ctx->pc = 0x4EA108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA104u;
        // 0x4ea108: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA10Cu;
        goto label_4ea10c;
    }
    ctx->pc = 0x4EA104u;
    {
        const bool branch_taken_0x4ea104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA104u;
        // 0x4ea108: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea104) {
            ctx->pc = 0x4EA11Cu;
            goto label_4ea11c;
        }
    }
    ctx->pc = 0x4EA10Cu;
label_4ea10c:
    // 0x4ea10c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4ea10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4ea110:
    // 0x4ea110: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_4ea114:
    if (ctx->pc == 0x4EA114u) {
        ctx->pc = 0x4EA114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA110u;
        // 0x4ea114: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA118u;
        goto label_4ea118;
    }
    ctx->pc = 0x4EA110u;
    {
        const bool branch_taken_0x4ea110 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4ea110) {
            ctx->pc = 0x4EA114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA110u;
            // 0x4ea114: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA11Cu;
            goto label_4ea11c;
        }
    }
    ctx->pc = 0x4EA118u;
label_4ea118:
    // 0x4ea118: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x4ea118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_4ea11c:
    // 0x4ea11c: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4ea120:
    if (ctx->pc == 0x4EA120u) {
        ctx->pc = 0x4EA120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA11Cu;
        // 0x4ea120: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA124u;
        goto label_4ea124;
    }
    ctx->pc = 0x4EA11Cu;
    {
        const bool branch_taken_0x4ea11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA11Cu;
        // 0x4ea120: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea11c) {
            ctx->pc = 0x4EA214u;
            goto label_4ea214;
        }
    }
    ctx->pc = 0x4EA124u;
label_4ea124:
    // 0x4ea124: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
label_4ea128:
    if (ctx->pc == 0x4EA128u) {
        ctx->pc = 0x4EA128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA124u;
        // 0x4ea128: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA12Cu;
        goto label_4ea12c;
    }
    ctx->pc = 0x4EA124u;
    {
        const bool branch_taken_0x4ea124 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ea124) {
            ctx->pc = 0x4EA128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA124u;
            // 0x4ea128: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA158u;
            goto label_4ea158;
        }
    }
    ctx->pc = 0x4EA12Cu;
label_4ea12c:
    // 0x4ea12c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4ea12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ea130:
    // 0x4ea130: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_4ea134:
    if (ctx->pc == 0x4EA134u) {
        ctx->pc = 0x4EA134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA130u;
        // 0x4ea134: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA138u;
        goto label_4ea138;
    }
    ctx->pc = 0x4EA130u;
    {
        const bool branch_taken_0x4ea130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ea130) {
            ctx->pc = 0x4EA134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA130u;
            // 0x4ea134: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA158u;
            goto label_4ea158;
        }
    }
    ctx->pc = 0x4EA138u;
label_4ea138:
    // 0x4ea138: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x4ea138u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
label_4ea13c:
    // 0x4ea13c: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x4ea13cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_4ea140:
    // 0x4ea140: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4ea140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4ea144:
    // 0x4ea144: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4ea144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4ea148:
    // 0x4ea148: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4ea148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_4ea14c:
    // 0x4ea14c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4ea14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4ea150:
    // 0x4ea150: 0x10000031  b           . + 4 + (0x31 << 2)
label_4ea154:
    if (ctx->pc == 0x4EA154u) {
        ctx->pc = 0x4EA154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA150u;
        // 0x4ea154: 0x8c480004  lw          $t0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA158u;
        goto label_4ea158;
    }
    ctx->pc = 0x4EA150u;
    {
        const bool branch_taken_0x4ea150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA150u;
        // 0x4ea154: 0x8c480004  lw          $t0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea150) {
            ctx->pc = 0x4EA218u;
            goto label_4ea218;
        }
    }
    ctx->pc = 0x4EA158u;
label_4ea158:
    // 0x4ea158: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x4ea158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4ea15c:
    // 0x4ea15c: 0x55040015  bnel        $t0, $a0, . + 4 + (0x15 << 2)
label_4ea160:
    if (ctx->pc == 0x4EA160u) {
        ctx->pc = 0x4EA160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA15Cu;
        // 0x4ea160: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA164u;
        goto label_4ea164;
    }
    ctx->pc = 0x4EA15Cu;
    {
        const bool branch_taken_0x4ea15c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x4ea15c) {
            ctx->pc = 0x4EA160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA15Cu;
            // 0x4ea160: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA1B4u;
            goto label_4ea1b4;
        }
    }
    ctx->pc = 0x4EA164u;
label_4ea164:
    // 0x4ea164: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4ea164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4ea168:
    // 0x4ea168: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4ea168u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4ea16c:
    // 0x4ea16c: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x4ea16cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
label_4ea170:
    // 0x4ea170: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4ea170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4ea174:
    // 0x4ea174: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4ea178:
    if (ctx->pc == 0x4EA178u) {
        ctx->pc = 0x4EA178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA174u;
        // 0x4ea178: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA17Cu;
        goto label_4ea17c;
    }
    ctx->pc = 0x4EA174u;
    {
        const bool branch_taken_0x4ea174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ea174) {
            ctx->pc = 0x4EA178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA174u;
            // 0x4ea178: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA17Cu;
            goto label_4ea17c;
        }
    }
    ctx->pc = 0x4EA17Cu;
label_4ea17c:
    // 0x4ea17c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4ea17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4ea180:
    // 0x4ea180: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4ea180u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4ea184:
    // 0x4ea184: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4ea184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4ea188:
    // 0x4ea188: 0x55030003  bnel        $t0, $v1, . + 4 + (0x3 << 2)
label_4ea18c:
    if (ctx->pc == 0x4EA18Cu) {
        ctx->pc = 0x4EA18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA188u;
        // 0x4ea18c: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA190u;
        goto label_4ea190;
    }
    ctx->pc = 0x4EA188u;
    {
        const bool branch_taken_0x4ea188 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x4ea188) {
            ctx->pc = 0x4EA18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA188u;
            // 0x4ea18c: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA198u;
            goto label_4ea198;
        }
    }
    ctx->pc = 0x4EA190u;
label_4ea190:
    // 0x4ea190: 0x10000005  b           . + 4 + (0x5 << 2)
label_4ea194:
    if (ctx->pc == 0x4EA194u) {
        ctx->pc = 0x4EA194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA190u;
        // 0x4ea194: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA198u;
        goto label_4ea198;
    }
    ctx->pc = 0x4EA190u;
    {
        const bool branch_taken_0x4ea190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA190u;
        // 0x4ea194: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea190) {
            ctx->pc = 0x4EA1A8u;
            goto label_4ea1a8;
        }
    }
    ctx->pc = 0x4EA198u;
label_4ea198:
    // 0x4ea198: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4ea198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4ea19c:
    // 0x4ea19c: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
label_4ea1a0:
    if (ctx->pc == 0x4EA1A0u) {
        ctx->pc = 0x4EA1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA19Cu;
        // 0x4ea1a0: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA1A4u;
        goto label_4ea1a4;
    }
    ctx->pc = 0x4EA19Cu;
    {
        const bool branch_taken_0x4ea19c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x4ea19c) {
            ctx->pc = 0x4EA1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA19Cu;
            // 0x4ea1a0: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA1A8u;
            goto label_4ea1a8;
        }
    }
    ctx->pc = 0x4EA1A4u;
label_4ea1a4:
    // 0x4ea1a4: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x4ea1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_4ea1a8:
    // 0x4ea1a8: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x4ea1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
label_4ea1ac:
    // 0x4ea1ac: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x4ea1acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_4ea1b0:
    // 0x4ea1b0: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4ea1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4ea1b4:
    // 0x4ea1b4: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x4ea1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_4ea1b8:
    // 0x4ea1b8: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4ea1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4ea1bc:
    // 0x4ea1bc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4ea1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4ea1c0:
    // 0x4ea1c0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4ea1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4ea1c4:
    // 0x4ea1c4: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4ea1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4ea1c8:
    // 0x4ea1c8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4ea1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4ea1cc:
    // 0x4ea1cc: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x4ea1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4ea1d0:
    // 0x4ea1d0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4ea1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4ea1d4:
    // 0x4ea1d4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x4ea1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_4ea1d8:
    // 0x4ea1d8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4ea1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4ea1dc:
    // 0x4ea1dc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4ea1e0:
    if (ctx->pc == 0x4EA1E0u) {
        ctx->pc = 0x4EA1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA1DCu;
        // 0x4ea1e0: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA1E4u;
        goto label_4ea1e4;
    }
    ctx->pc = 0x4EA1DCu;
    {
        const bool branch_taken_0x4ea1dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ea1dc) {
            ctx->pc = 0x4EA1E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA1DCu;
            // 0x4ea1e0: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA1E4u;
            goto label_4ea1e4;
        }
    }
    ctx->pc = 0x4EA1E4u;
label_4ea1e4:
    // 0x4ea1e4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4ea1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4ea1e8:
    // 0x4ea1e8: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4ea1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_4ea1ec:
    // 0x4ea1ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4ea1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4ea1f0:
    // 0x4ea1f0: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_4ea1f4:
    if (ctx->pc == 0x4EA1F4u) {
        ctx->pc = 0x4EA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA1F0u;
        // 0x4ea1f4: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA1F8u;
        goto label_4ea1f8;
    }
    ctx->pc = 0x4EA1F0u;
    {
        const bool branch_taken_0x4ea1f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4ea1f0) {
            ctx->pc = 0x4EA1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA1F0u;
            // 0x4ea1f4: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA200u;
            goto label_4ea200;
        }
    }
    ctx->pc = 0x4EA1F8u;
label_4ea1f8:
    // 0x4ea1f8: 0x10000005  b           . + 4 + (0x5 << 2)
label_4ea1fc:
    if (ctx->pc == 0x4EA1FCu) {
        ctx->pc = 0x4EA1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA1F8u;
        // 0x4ea1fc: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA200u;
        goto label_4ea200;
    }
    ctx->pc = 0x4EA1F8u;
    {
        const bool branch_taken_0x4ea1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA1F8u;
        // 0x4ea1fc: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea1f8) {
            ctx->pc = 0x4EA210u;
            goto label_4ea210;
        }
    }
    ctx->pc = 0x4EA200u;
label_4ea200:
    // 0x4ea200: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4ea200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4ea204:
    // 0x4ea204: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_4ea208:
    if (ctx->pc == 0x4EA208u) {
        ctx->pc = 0x4EA208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA204u;
        // 0x4ea208: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA20Cu;
        goto label_4ea20c;
    }
    ctx->pc = 0x4EA204u;
    {
        const bool branch_taken_0x4ea204 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4ea204) {
            ctx->pc = 0x4EA208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA204u;
            // 0x4ea208: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA210u;
            goto label_4ea210;
        }
    }
    ctx->pc = 0x4EA20Cu;
label_4ea20c:
    // 0x4ea20c: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x4ea20cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_4ea210:
    // 0x4ea210: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x4ea210u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_4ea214:
    // 0x4ea214: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x4ea214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_4ea218:
    // 0x4ea218: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4ea218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4ea21c:
    // 0x4ea21c: 0x51020006  beql        $t0, $v0, . + 4 + (0x6 << 2)
label_4ea220:
    if (ctx->pc == 0x4EA220u) {
        ctx->pc = 0x4EA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA21Cu;
        // 0x4ea220: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA224u;
        goto label_4ea224;
    }
    ctx->pc = 0x4EA21Cu;
    {
        const bool branch_taken_0x4ea21c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x4ea21c) {
            ctx->pc = 0x4EA220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA21Cu;
            // 0x4ea220: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA238u;
            goto label_4ea238;
        }
    }
    ctx->pc = 0x4EA224u;
label_4ea224:
    // 0x4ea224: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4ea224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4ea228:
    // 0x4ea228: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4ea228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4ea22c:
    // 0x4ea22c: 0x5060ff80  beql        $v1, $zero, . + 4 + (-0x80 << 2)
label_4ea230:
    if (ctx->pc == 0x4EA230u) {
        ctx->pc = 0x4EA230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA22Cu;
        // 0x4ea230: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA234u;
        goto label_4ea234;
    }
    ctx->pc = 0x4EA22Cu;
    {
        const bool branch_taken_0x4ea22c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ea22c) {
            ctx->pc = 0x4EA230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA22Cu;
            // 0x4ea230: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ea030;
        }
    }
    ctx->pc = 0x4EA234u;
label_4ea234:
    // 0x4ea234: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4ea234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4ea238:
    // 0x4ea238: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4ea238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ea23c:
    // 0x4ea23c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4ea23cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4ea240:
    // 0x4ea240: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4ea240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4ea244:
    // 0x4ea244: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4ea244u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_4ea248:
    // 0x4ea248: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4ea248u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ea24c:
    // 0x4ea24c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4ea24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4ea250:
    // 0x4ea250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ea250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ea254:
    // 0x4ea254: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4ea254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4ea258:
    // 0x4ea258: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x4ea258u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_4ea25c:
    // 0x4ea25c: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4ea25cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
label_4ea260:
    // 0x4ea260: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ea260u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ea264:
    // 0x4ea264: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4ea264u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ea268:
    // 0x4ea268: 0x3e00008  jr          $ra
label_4ea26c:
    if (ctx->pc == 0x4EA26Cu) {
        ctx->pc = 0x4EA26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA268u;
        // 0x4ea26c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA270u;
        goto label_fallthrough_0x4ea268;
    }
    ctx->pc = 0x4EA268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EA26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA268u;
        // 0x4ea26c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EA268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4ea268:
    ctx->pc = 0x4EA270u;
}
