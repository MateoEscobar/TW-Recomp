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

// Function: sub_0024CEF0
// Address: 0x24cef0 - 0x24d340
void sub_0024CEF0_0x24cef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CEF0_0x24cef0");
#endif

    switch (ctx->pc) {
        case 0x24cef0u: goto label_24cef0;
        case 0x24cef4u: goto label_24cef4;
        case 0x24cef8u: goto label_24cef8;
        case 0x24cefcu: goto label_24cefc;
        case 0x24cf00u: goto label_24cf00;
        case 0x24cf04u: goto label_24cf04;
        case 0x24cf08u: goto label_24cf08;
        case 0x24cf0cu: goto label_24cf0c;
        case 0x24cf10u: goto label_24cf10;
        case 0x24cf14u: goto label_24cf14;
        case 0x24cf18u: goto label_24cf18;
        case 0x24cf1cu: goto label_24cf1c;
        case 0x24cf20u: goto label_24cf20;
        case 0x24cf24u: goto label_24cf24;
        case 0x24cf28u: goto label_24cf28;
        case 0x24cf2cu: goto label_24cf2c;
        case 0x24cf30u: goto label_24cf30;
        case 0x24cf34u: goto label_24cf34;
        case 0x24cf38u: goto label_24cf38;
        case 0x24cf3cu: goto label_24cf3c;
        case 0x24cf40u: goto label_24cf40;
        case 0x24cf44u: goto label_24cf44;
        case 0x24cf48u: goto label_24cf48;
        case 0x24cf4cu: goto label_24cf4c;
        case 0x24cf50u: goto label_24cf50;
        case 0x24cf54u: goto label_24cf54;
        case 0x24cf58u: goto label_24cf58;
        case 0x24cf5cu: goto label_24cf5c;
        case 0x24cf60u: goto label_24cf60;
        case 0x24cf64u: goto label_24cf64;
        case 0x24cf68u: goto label_24cf68;
        case 0x24cf6cu: goto label_24cf6c;
        case 0x24cf70u: goto label_24cf70;
        case 0x24cf74u: goto label_24cf74;
        case 0x24cf78u: goto label_24cf78;
        case 0x24cf7cu: goto label_24cf7c;
        case 0x24cf80u: goto label_24cf80;
        case 0x24cf84u: goto label_24cf84;
        case 0x24cf88u: goto label_24cf88;
        case 0x24cf8cu: goto label_24cf8c;
        case 0x24cf90u: goto label_24cf90;
        case 0x24cf94u: goto label_24cf94;
        case 0x24cf98u: goto label_24cf98;
        case 0x24cf9cu: goto label_24cf9c;
        case 0x24cfa0u: goto label_24cfa0;
        case 0x24cfa4u: goto label_24cfa4;
        case 0x24cfa8u: goto label_24cfa8;
        case 0x24cfacu: goto label_24cfac;
        case 0x24cfb0u: goto label_24cfb0;
        case 0x24cfb4u: goto label_24cfb4;
        case 0x24cfb8u: goto label_24cfb8;
        case 0x24cfbcu: goto label_24cfbc;
        case 0x24cfc0u: goto label_24cfc0;
        case 0x24cfc4u: goto label_24cfc4;
        case 0x24cfc8u: goto label_24cfc8;
        case 0x24cfccu: goto label_24cfcc;
        case 0x24cfd0u: goto label_24cfd0;
        case 0x24cfd4u: goto label_24cfd4;
        case 0x24cfd8u: goto label_24cfd8;
        case 0x24cfdcu: goto label_24cfdc;
        case 0x24cfe0u: goto label_24cfe0;
        case 0x24cfe4u: goto label_24cfe4;
        case 0x24cfe8u: goto label_24cfe8;
        case 0x24cfecu: goto label_24cfec;
        case 0x24cff0u: goto label_24cff0;
        case 0x24cff4u: goto label_24cff4;
        case 0x24cff8u: goto label_24cff8;
        case 0x24cffcu: goto label_24cffc;
        case 0x24d000u: goto label_24d000;
        case 0x24d004u: goto label_24d004;
        case 0x24d008u: goto label_24d008;
        case 0x24d00cu: goto label_24d00c;
        case 0x24d010u: goto label_24d010;
        case 0x24d014u: goto label_24d014;
        case 0x24d018u: goto label_24d018;
        case 0x24d01cu: goto label_24d01c;
        case 0x24d020u: goto label_24d020;
        case 0x24d024u: goto label_24d024;
        case 0x24d028u: goto label_24d028;
        case 0x24d02cu: goto label_24d02c;
        case 0x24d030u: goto label_24d030;
        case 0x24d034u: goto label_24d034;
        case 0x24d038u: goto label_24d038;
        case 0x24d03cu: goto label_24d03c;
        case 0x24d040u: goto label_24d040;
        case 0x24d044u: goto label_24d044;
        case 0x24d048u: goto label_24d048;
        case 0x24d04cu: goto label_24d04c;
        case 0x24d050u: goto label_24d050;
        case 0x24d054u: goto label_24d054;
        case 0x24d058u: goto label_24d058;
        case 0x24d05cu: goto label_24d05c;
        case 0x24d060u: goto label_24d060;
        case 0x24d064u: goto label_24d064;
        case 0x24d068u: goto label_24d068;
        case 0x24d06cu: goto label_24d06c;
        case 0x24d070u: goto label_24d070;
        case 0x24d074u: goto label_24d074;
        case 0x24d078u: goto label_24d078;
        case 0x24d07cu: goto label_24d07c;
        case 0x24d080u: goto label_24d080;
        case 0x24d084u: goto label_24d084;
        case 0x24d088u: goto label_24d088;
        case 0x24d08cu: goto label_24d08c;
        case 0x24d090u: goto label_24d090;
        case 0x24d094u: goto label_24d094;
        case 0x24d098u: goto label_24d098;
        case 0x24d09cu: goto label_24d09c;
        case 0x24d0a0u: goto label_24d0a0;
        case 0x24d0a4u: goto label_24d0a4;
        case 0x24d0a8u: goto label_24d0a8;
        case 0x24d0acu: goto label_24d0ac;
        case 0x24d0b0u: goto label_24d0b0;
        case 0x24d0b4u: goto label_24d0b4;
        case 0x24d0b8u: goto label_24d0b8;
        case 0x24d0bcu: goto label_24d0bc;
        case 0x24d0c0u: goto label_24d0c0;
        case 0x24d0c4u: goto label_24d0c4;
        case 0x24d0c8u: goto label_24d0c8;
        case 0x24d0ccu: goto label_24d0cc;
        case 0x24d0d0u: goto label_24d0d0;
        case 0x24d0d4u: goto label_24d0d4;
        case 0x24d0d8u: goto label_24d0d8;
        case 0x24d0dcu: goto label_24d0dc;
        case 0x24d0e0u: goto label_24d0e0;
        case 0x24d0e4u: goto label_24d0e4;
        case 0x24d0e8u: goto label_24d0e8;
        case 0x24d0ecu: goto label_24d0ec;
        case 0x24d0f0u: goto label_24d0f0;
        case 0x24d0f4u: goto label_24d0f4;
        case 0x24d0f8u: goto label_24d0f8;
        case 0x24d0fcu: goto label_24d0fc;
        case 0x24d100u: goto label_24d100;
        case 0x24d104u: goto label_24d104;
        case 0x24d108u: goto label_24d108;
        case 0x24d10cu: goto label_24d10c;
        case 0x24d110u: goto label_24d110;
        case 0x24d114u: goto label_24d114;
        case 0x24d118u: goto label_24d118;
        case 0x24d11cu: goto label_24d11c;
        case 0x24d120u: goto label_24d120;
        case 0x24d124u: goto label_24d124;
        case 0x24d128u: goto label_24d128;
        case 0x24d12cu: goto label_24d12c;
        case 0x24d130u: goto label_24d130;
        case 0x24d134u: goto label_24d134;
        case 0x24d138u: goto label_24d138;
        case 0x24d13cu: goto label_24d13c;
        case 0x24d140u: goto label_24d140;
        case 0x24d144u: goto label_24d144;
        case 0x24d148u: goto label_24d148;
        case 0x24d14cu: goto label_24d14c;
        case 0x24d150u: goto label_24d150;
        case 0x24d154u: goto label_24d154;
        case 0x24d158u: goto label_24d158;
        case 0x24d15cu: goto label_24d15c;
        case 0x24d160u: goto label_24d160;
        case 0x24d164u: goto label_24d164;
        case 0x24d168u: goto label_24d168;
        case 0x24d16cu: goto label_24d16c;
        case 0x24d170u: goto label_24d170;
        case 0x24d174u: goto label_24d174;
        case 0x24d178u: goto label_24d178;
        case 0x24d17cu: goto label_24d17c;
        case 0x24d180u: goto label_24d180;
        case 0x24d184u: goto label_24d184;
        case 0x24d188u: goto label_24d188;
        case 0x24d18cu: goto label_24d18c;
        case 0x24d190u: goto label_24d190;
        case 0x24d194u: goto label_24d194;
        case 0x24d198u: goto label_24d198;
        case 0x24d19cu: goto label_24d19c;
        case 0x24d1a0u: goto label_24d1a0;
        case 0x24d1a4u: goto label_24d1a4;
        case 0x24d1a8u: goto label_24d1a8;
        case 0x24d1acu: goto label_24d1ac;
        case 0x24d1b0u: goto label_24d1b0;
        case 0x24d1b4u: goto label_24d1b4;
        case 0x24d1b8u: goto label_24d1b8;
        case 0x24d1bcu: goto label_24d1bc;
        case 0x24d1c0u: goto label_24d1c0;
        case 0x24d1c4u: goto label_24d1c4;
        case 0x24d1c8u: goto label_24d1c8;
        case 0x24d1ccu: goto label_24d1cc;
        case 0x24d1d0u: goto label_24d1d0;
        case 0x24d1d4u: goto label_24d1d4;
        case 0x24d1d8u: goto label_24d1d8;
        case 0x24d1dcu: goto label_24d1dc;
        case 0x24d1e0u: goto label_24d1e0;
        case 0x24d1e4u: goto label_24d1e4;
        case 0x24d1e8u: goto label_24d1e8;
        case 0x24d1ecu: goto label_24d1ec;
        case 0x24d1f0u: goto label_24d1f0;
        case 0x24d1f4u: goto label_24d1f4;
        case 0x24d1f8u: goto label_24d1f8;
        case 0x24d1fcu: goto label_24d1fc;
        case 0x24d200u: goto label_24d200;
        case 0x24d204u: goto label_24d204;
        case 0x24d208u: goto label_24d208;
        case 0x24d20cu: goto label_24d20c;
        case 0x24d210u: goto label_24d210;
        case 0x24d214u: goto label_24d214;
        case 0x24d218u: goto label_24d218;
        case 0x24d21cu: goto label_24d21c;
        case 0x24d220u: goto label_24d220;
        case 0x24d224u: goto label_24d224;
        case 0x24d228u: goto label_24d228;
        case 0x24d22cu: goto label_24d22c;
        case 0x24d230u: goto label_24d230;
        case 0x24d234u: goto label_24d234;
        case 0x24d238u: goto label_24d238;
        case 0x24d23cu: goto label_24d23c;
        case 0x24d240u: goto label_24d240;
        case 0x24d244u: goto label_24d244;
        case 0x24d248u: goto label_24d248;
        case 0x24d24cu: goto label_24d24c;
        case 0x24d250u: goto label_24d250;
        case 0x24d254u: goto label_24d254;
        case 0x24d258u: goto label_24d258;
        case 0x24d25cu: goto label_24d25c;
        case 0x24d260u: goto label_24d260;
        case 0x24d264u: goto label_24d264;
        case 0x24d268u: goto label_24d268;
        case 0x24d26cu: goto label_24d26c;
        case 0x24d270u: goto label_24d270;
        case 0x24d274u: goto label_24d274;
        case 0x24d278u: goto label_24d278;
        case 0x24d27cu: goto label_24d27c;
        case 0x24d280u: goto label_24d280;
        case 0x24d284u: goto label_24d284;
        case 0x24d288u: goto label_24d288;
        case 0x24d28cu: goto label_24d28c;
        case 0x24d290u: goto label_24d290;
        case 0x24d294u: goto label_24d294;
        case 0x24d298u: goto label_24d298;
        case 0x24d29cu: goto label_24d29c;
        case 0x24d2a0u: goto label_24d2a0;
        case 0x24d2a4u: goto label_24d2a4;
        case 0x24d2a8u: goto label_24d2a8;
        case 0x24d2acu: goto label_24d2ac;
        case 0x24d2b0u: goto label_24d2b0;
        case 0x24d2b4u: goto label_24d2b4;
        case 0x24d2b8u: goto label_24d2b8;
        case 0x24d2bcu: goto label_24d2bc;
        case 0x24d2c0u: goto label_24d2c0;
        case 0x24d2c4u: goto label_24d2c4;
        case 0x24d2c8u: goto label_24d2c8;
        case 0x24d2ccu: goto label_24d2cc;
        case 0x24d2d0u: goto label_24d2d0;
        case 0x24d2d4u: goto label_24d2d4;
        case 0x24d2d8u: goto label_24d2d8;
        case 0x24d2dcu: goto label_24d2dc;
        case 0x24d2e0u: goto label_24d2e0;
        case 0x24d2e4u: goto label_24d2e4;
        case 0x24d2e8u: goto label_24d2e8;
        case 0x24d2ecu: goto label_24d2ec;
        case 0x24d2f0u: goto label_24d2f0;
        case 0x24d2f4u: goto label_24d2f4;
        case 0x24d2f8u: goto label_24d2f8;
        case 0x24d2fcu: goto label_24d2fc;
        case 0x24d300u: goto label_24d300;
        case 0x24d304u: goto label_24d304;
        case 0x24d308u: goto label_24d308;
        case 0x24d30cu: goto label_24d30c;
        case 0x24d310u: goto label_24d310;
        case 0x24d314u: goto label_24d314;
        case 0x24d318u: goto label_24d318;
        case 0x24d31cu: goto label_24d31c;
        case 0x24d320u: goto label_24d320;
        case 0x24d324u: goto label_24d324;
        case 0x24d328u: goto label_24d328;
        case 0x24d32cu: goto label_24d32c;
        case 0x24d330u: goto label_24d330;
        case 0x24d334u: goto label_24d334;
        case 0x24d338u: goto label_24d338;
        case 0x24d33cu: goto label_24d33c;
        default: break;
    }

    ctx->pc = 0x24cef0u;

label_24cef0:
    // 0x24cef0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x24cef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_24cef4:
    // 0x24cef4: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x24cef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_24cef8:
    // 0x24cef8: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x24cef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_24cefc:
    // 0x24cefc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x24cefcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24cf00:
    // 0x24cf00: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x24cf00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_24cf04:
    // 0x24cf04: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x24cf04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_24cf08:
    // 0x24cf08: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x24cf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_24cf0c:
    // 0x24cf0c: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x24cf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_24cf10:
    // 0x24cf10: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x24cf10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_24cf14:
    // 0x24cf14: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x24cf14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_24cf18:
    // 0x24cf18: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x24cf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_24cf1c:
    // 0x24cf1c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x24cf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_24cf20:
    // 0x24cf20: 0x8e6200d8  lw          $v0, 0xD8($s3)
    ctx->pc = 0x24cf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_24cf24:
    // 0x24cf24: 0x104000fb  beqz        $v0, . + 4 + (0xFB << 2)
label_24cf28:
    if (ctx->pc == 0x24CF28u) {
        ctx->pc = 0x24CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF24u;
        // 0x24cf28: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CF2Cu;
        goto label_24cf2c;
    }
    ctx->pc = 0x24CF24u;
    {
        const bool branch_taken_0x24cf24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF24u;
        // 0x24cf28: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf24) {
            ctx->pc = 0x24D314u;
            goto label_24d314;
        }
    }
    ctx->pc = 0x24CF2Cu;
label_24cf2c:
    // 0x24cf2c: 0x826201b0  lb          $v0, 0x1B0($s3)
    ctx->pc = 0x24cf2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_24cf30:
    // 0x24cf30: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x24cf30u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_24cf34:
    // 0x24cf34: 0x104000f8  beqz        $v0, . + 4 + (0xF8 << 2)
label_24cf38:
    if (ctx->pc == 0x24CF38u) {
        ctx->pc = 0x24CF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF34u;
        // 0x24cf38: 0x7bb10100  lq          $s1, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CF3Cu;
        goto label_24cf3c;
    }
    ctx->pc = 0x24CF34u;
    {
        const bool branch_taken_0x24cf34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF34u;
        // 0x24cf38: 0x7bb10100  lq          $s1, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf34) {
            ctx->pc = 0x24D318u;
            goto label_24d318;
        }
    }
    ctx->pc = 0x24CF3Cu;
label_24cf3c:
    // 0x24cf3c: 0xc088ac6  jal         func_222B18
label_24cf40:
    if (ctx->pc == 0x24CF40u) {
        ctx->pc = 0x24CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF3Cu;
        // 0x24cf40: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CF44u;
        goto label_24cf44;
    }
    ctx->pc = 0x24CF3Cu;
    SET_GPR_U32(ctx, 31, 0x24CF44u);
    ctx->pc = 0x24CF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CF3Cu;
    // 0x24cf40: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x24CF3Cu, 0x24CF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CF44u;
label_24cf44:
    // 0x24cf44: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x24cf44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_24cf48:
    // 0x24cf48: 0x2610e998  addiu       $s0, $s0, -0x1668
    ctx->pc = 0x24cf48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961560));
label_24cf4c:
    // 0x24cf4c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x24cf4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_24cf50:
    // 0x24cf50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24cf50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24cf54:
    // 0x24cf54: 0xc10904c  jal         func_424130
label_24cf58:
    if (ctx->pc == 0x24CF58u) {
        ctx->pc = 0x24CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF54u;
        // 0x24cf58: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CF5Cu;
        goto label_24cf5c;
    }
    ctx->pc = 0x24CF54u;
    SET_GPR_U32(ctx, 31, 0x24CF5Cu);
    ctx->pc = 0x24CF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CF54u;
    // 0x24cf58: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x24CF54u, 0x24CF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CF5Cu;
label_24cf5c:
    // 0x24cf5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24cf5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24cf60:
    // 0x24cf60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24cf60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24cf64:
    // 0x24cf64: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x24cf64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_24cf68:
    // 0x24cf68: 0xc10904c  jal         func_424130
label_24cf6c:
    if (ctx->pc == 0x24CF6Cu) {
        ctx->pc = 0x24CF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF68u;
        // 0x24cf6c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CF70u;
        goto label_24cf70;
    }
    ctx->pc = 0x24CF68u;
    SET_GPR_U32(ctx, 31, 0x24CF70u);
    ctx->pc = 0x24CF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CF68u;
    // 0x24cf6c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x24CF68u, 0x24CF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CF70u;
label_24cf70:
    // 0x24cf70: 0x12200074  beqz        $s1, . + 4 + (0x74 << 2)
label_24cf74:
    if (ctx->pc == 0x24CF74u) {
        ctx->pc = 0x24CF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF70u;
        // 0x24cf74: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CF78u;
        goto label_24cf78;
    }
    ctx->pc = 0x24CF70u;
    {
        const bool branch_taken_0x24cf70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF70u;
        // 0x24cf74: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf70) {
            ctx->pc = 0x24D144u;
            goto label_24d144;
        }
    }
    ctx->pc = 0x24CF78u;
label_24cf78:
    // 0x24cf78: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x24cf78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_24cf7c:
    // 0x24cf7c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x24cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_24cf80:
    // 0x24cf80: 0x8c44bd30  lw          $a0, -0x42D0($v0)
    ctx->pc = 0x24cf80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_24cf84:
    // 0x24cf84: 0x14640070  bne         $v1, $a0, . + 4 + (0x70 << 2)
label_24cf88:
    if (ctx->pc == 0x24CF88u) {
        ctx->pc = 0x24CF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF84u;
        // 0x24cf88: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CF8Cu;
        goto label_24cf8c;
    }
    ctx->pc = 0x24CF84u;
    {
        const bool branch_taken_0x24cf84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x24CF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF84u;
        // 0x24cf88: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf84) {
            ctx->pc = 0x24D148u;
            goto label_24d148;
        }
    }
    ctx->pc = 0x24CF8Cu;
label_24cf8c:
    // 0x24cf8c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x24cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_24cf90:
    // 0x24cf90: 0x1444006d  bne         $v0, $a0, . + 4 + (0x6D << 2)
label_24cf94:
    if (ctx->pc == 0x24CF94u) {
        ctx->pc = 0x24CF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF90u;
        // 0x24cf94: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CF98u;
        goto label_24cf98;
    }
    ctx->pc = 0x24CF90u;
    {
        const bool branch_taken_0x24cf90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x24CF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF90u;
        // 0x24cf94: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf90) {
            ctx->pc = 0x24D148u;
            goto label_24d148;
        }
    }
    ctx->pc = 0x24CF98u;
label_24cf98:
    // 0x24cf98: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x24cf98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_24cf9c:
    // 0x24cf9c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x24cf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_24cfa0:
    // 0x24cfa0: 0x24765480  addiu       $s6, $v1, 0x5480
    ctx->pc = 0x24cfa0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 21632));
label_24cfa4:
    // 0x24cfa4: 0x3c17f9fb  lui         $s7, 0xF9FB
    ctx->pc = 0x24cfa4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)63995 << 16));
label_24cfa8:
    // 0x24cfa8: 0x26630090  addiu       $v1, $s3, 0x90
    ctx->pc = 0x24cfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_24cfac:
    // 0x24cfac: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x24cfacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_24cfb0:
    // 0x24cfb0: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x24cfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
label_24cfb4:
    // 0x24cfb4: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x24cfb4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_24cfb8:
    // 0x24cfb8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x24cfb8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24cfbc:
    // 0x24cfbc: 0x36f7fffb  ori         $s7, $s7, 0xFFFB
    ctx->pc = 0x24cfbcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65531);
label_24cfc0:
    // 0x24cfc0: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x24cfc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_24cfc4:
    // 0x24cfc4: 0x0  nop
    ctx->pc = 0x24cfc4u;
    // NOP
label_24cfc8:
    // 0x24cfc8: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x24cfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_24cfcc:
    // 0x24cfcc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x24cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_24cfd0:
    // 0x24cfd0: 0x24454b00  addiu       $a1, $v0, 0x4B00
    ctx->pc = 0x24cfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_24cfd4:
    // 0x24cfd4: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x24cfd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_24cfd8:
    // 0x24cfd8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x24cfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_24cfdc:
    // 0x24cfdc: 0x248216c0  addiu       $v0, $a0, 0x16C0
    ctx->pc = 0x24cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
label_24cfe0:
    // 0x24cfe0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x24cfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_24cfe4:
    // 0x24cfe4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x24cfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_24cfe8:
    // 0x24cfe8: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x24cfe8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_24cfec:
    // 0x24cfec: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x24cfecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_24cff0:
    // 0x24cff0: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x24cff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
label_24cff4:
    // 0x24cff4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x24cff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_24cff8:
    // 0x24cff8: 0xc0e8b48  jal         func_3A2D20
label_24cffc:
    if (ctx->pc == 0x24CFFCu) {
        ctx->pc = 0x24CFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFF8u;
        // 0x24cffc: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D000u;
        goto label_24d000;
    }
    ctx->pc = 0x24CFF8u;
    SET_GPR_U32(ctx, 31, 0x24D000u);
    ctx->pc = 0x24CFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CFF8u;
    // 0x24cffc: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x24CFF8u, 0x24D000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D000u;
label_24d000:
    // 0x24d000: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x24d000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24d004:
    // 0x24d004: 0xc0e8b58  jal         func_3A2D60
label_24d008:
    if (ctx->pc == 0x24D008u) {
        ctx->pc = 0x24D008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D004u;
        // 0x24d008: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D00Cu;
        goto label_24d00c;
    }
    ctx->pc = 0x24D004u;
    SET_GPR_U32(ctx, 31, 0x24D00Cu);
    ctx->pc = 0x24D008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D004u;
    // 0x24d008: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x24D004u, 0x24D00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D00Cu;
label_24d00c:
    // 0x24d00c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x24d00cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_24d010:
    // 0x24d010: 0xc0e8b58  jal         func_3A2D60
label_24d014:
    if (ctx->pc == 0x24D014u) {
        ctx->pc = 0x24D014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D010u;
        // 0x24d014: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D018u;
        goto label_24d018;
    }
    ctx->pc = 0x24D010u;
    SET_GPR_U32(ctx, 31, 0x24D018u);
    ctx->pc = 0x24D014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D010u;
    // 0x24d014: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x24D010u, 0x24D018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D018u;
label_24d018:
    // 0x24d018: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x24d018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24d01c:
    // 0x24d01c: 0xc0e8b70  jal         func_3A2DC0
label_24d020:
    if (ctx->pc == 0x24D020u) {
        ctx->pc = 0x24D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D01Cu;
        // 0x24d020: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D024u;
        goto label_24d024;
    }
    ctx->pc = 0x24D01Cu;
    SET_GPR_U32(ctx, 31, 0x24D024u);
    ctx->pc = 0x24D020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D01Cu;
    // 0x24d020: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x24D01Cu, 0x24D024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D024u;
label_24d024:
    // 0x24d024: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x24d024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24d028:
    // 0x24d028: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x24d028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_24d02c:
    // 0x24d02c: 0x24a5cfc0  addiu       $a1, $a1, -0x3040
    ctx->pc = 0x24d02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954944));
label_24d030:
    // 0x24d030: 0xc0e8b98  jal         func_3A2E60
label_24d034:
    if (ctx->pc == 0x24D034u) {
        ctx->pc = 0x24D034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D030u;
        // 0x24d034: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D038u;
        goto label_24d038;
    }
    ctx->pc = 0x24D030u;
    SET_GPR_U32(ctx, 31, 0x24D038u);
    ctx->pc = 0x24D034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D030u;
    // 0x24d034: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E60u, 0x24D030u, 0x24D038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D038u;
label_24d038:
    // 0x24d038: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x24d038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24d03c:
    // 0x24d03c: 0xc0e8b50  jal         func_3A2D40
label_24d040:
    if (ctx->pc == 0x24D040u) {
        ctx->pc = 0x24D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D03Cu;
        // 0x24d040: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D044u;
        goto label_24d044;
    }
    ctx->pc = 0x24D03Cu;
    SET_GPR_U32(ctx, 31, 0x24D044u);
    ctx->pc = 0x24D040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D03Cu;
    // 0x24d040: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x24D03Cu, 0x24D044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D044u;
label_24d044:
    // 0x24d044: 0x5220003b  beql        $s1, $zero, . + 4 + (0x3B << 2)
label_24d048:
    if (ctx->pc == 0x24D048u) {
        ctx->pc = 0x24D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D044u;
        // 0x24d048: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D04Cu;
        goto label_24d04c;
    }
    ctx->pc = 0x24D044u;
    {
        const bool branch_taken_0x24d044 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d044) {
            ctx->pc = 0x24D048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D044u;
            // 0x24d048: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D134u;
            goto label_24d134;
        }
    }
    ctx->pc = 0x24D04Cu;
label_24d04c:
    // 0x24d04c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x24d04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24d050:
    // 0x24d050: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x24d050u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_24d054:
    // 0x24d054: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x24d054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_24d058:
    // 0x24d058: 0x40f809  jalr        $v0
label_24d05c:
    if (ctx->pc == 0x24D05Cu) {
        ctx->pc = 0x24D05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D058u;
        // 0x24d05c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D060u;
        goto label_24d060;
    }
    ctx->pc = 0x24D058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24D060u);
        ctx->pc = 0x24D05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D058u;
        // 0x24d05c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D058u, 0x24D060u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D060u;
label_24d060:
    // 0x24d060: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x24d060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_24d064:
    // 0x24d064: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x24d064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_24d068:
    // 0x24d068: 0x8c652c7c  lw          $a1, 0x2C7C($v1)
    ctx->pc = 0x24d068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_24d06c:
    // 0x24d06c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24d06cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24d070:
    // 0x24d070: 0x8c89bd30  lw          $t1, -0x42D0($a0)
    ctx->pc = 0x24d070u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950192)));
label_24d074:
    // 0x24d074: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x24d074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_24d078:
    // 0x24d078: 0x8ca40840  lw          $a0, 0x840($a1)
    ctx->pc = 0x24d078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2112)));
label_24d07c:
    // 0x24d07c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24d07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_24d080:
    // 0x24d080: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x24d080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_24d084:
    // 0x24d084: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x24d084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_24d088:
    // 0x24d088: 0x24a81780  addiu       $t0, $a1, 0x1780
    ctx->pc = 0x24d088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 6016));
label_24d08c:
    // 0x24d08c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x24d08cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_24d090:
    // 0x24d090: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x24d090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_24d094:
    // 0x24d094: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x24d094u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_24d098:
    // 0x24d098: 0x24c6cfc0  addiu       $a2, $a2, -0x3040
    ctx->pc = 0x24d098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954944));
label_24d09c:
    // 0x24d09c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x24d09cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_24d0a0:
    // 0x24d0a0: 0x240a0041  addiu       $t2, $zero, 0x41
    ctx->pc = 0x24d0a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_24d0a4:
    // 0x24d0a4: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x24d0a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24d0a8:
    // 0x24d0a8: 0xc0e6250  jal         func_398940
label_24d0ac:
    if (ctx->pc == 0x24D0ACu) {
        ctx->pc = 0x24D0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D0A8u;
        // 0x24d0ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D0B0u;
        goto label_24d0b0;
    }
    ctx->pc = 0x24D0A8u;
    SET_GPR_U32(ctx, 31, 0x24D0B0u);
    ctx->pc = 0x24D0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D0A8u;
    // 0x24d0ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398940u, 0x24D0A8u, 0x24D0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D0B0u;
label_24d0b0:
    // 0x24d0b0: 0xc087408  jal         func_21D020
label_24d0b4:
    if (ctx->pc == 0x24D0B4u) {
        ctx->pc = 0x24D0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D0B0u;
        // 0x24d0b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D0B8u;
        goto label_24d0b8;
    }
    ctx->pc = 0x24D0B0u;
    SET_GPR_U32(ctx, 31, 0x24D0B8u);
    ctx->pc = 0x24D0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D0B0u;
    // 0x24d0b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x24D0B0u, 0x24D0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D0B8u;
label_24d0b8:
    // 0x24d0b8: 0x7ac20000  lq          $v0, 0x0($s6)
    ctx->pc = 0x24d0b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_24d0bc:
    // 0x24d0bc: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x24d0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_24d0c0:
    // 0x24d0c0: 0x7ac30010  lq          $v1, 0x10($s6)
    ctx->pc = 0x24d0c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 22), 16)));
label_24d0c4:
    // 0x24d0c4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x24d0c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_24d0c8:
    // 0x24d0c8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x24d0c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_24d0cc:
    // 0x24d0cc: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x24d0ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_24d0d0:
    // 0x24d0d0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x24d0d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_24d0d4:
    // 0x24d0d4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x24d0d4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_24d0d8:
    // 0x24d0d8: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x24d0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_24d0dc:
    // 0x24d0dc: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x24d0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_24d0e0:
    // 0x24d0e0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x24d0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_24d0e4:
    // 0x24d0e4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x24d0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_24d0e8:
    // 0x24d0e8: 0x95280b  movn        $a1, $a0, $s5
    ctx->pc = 0x24d0e8u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_24d0ec:
    // 0x24d0ec: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x24d0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_24d0f0:
    // 0x24d0f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24d0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24d0f4:
    // 0x24d0f4: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x24d0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_24d0f8:
    // 0x24d0f8: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x24d0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_24d0fc:
    // 0x24d0fc: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x24d0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_24d100:
    // 0x24d100: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x24d100u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24d104:
    // 0x24d104: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24d104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_24d108:
    // 0x24d108: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x24d108u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
label_24d10c:
    // 0x24d10c: 0xc0e896c  jal         func_3A25B0
label_24d110:
    if (ctx->pc == 0x24D110u) {
        ctx->pc = 0x24D110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D10Cu;
        // 0x24d110: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D114u;
        goto label_24d114;
    }
    ctx->pc = 0x24D10Cu;
    SET_GPR_U32(ctx, 31, 0x24D114u);
    ctx->pc = 0x24D110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D10Cu;
    // 0x24d110: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B0u, 0x24D10Cu, 0x24D114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D114u;
label_24d114:
    // 0x24d114: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24d114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24d118:
    // 0x24d118: 0xc0e862e  jal         func_3A18B8
label_24d11c:
    if (ctx->pc == 0x24D11Cu) {
        ctx->pc = 0x24D11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D118u;
        // 0x24d11c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D120u;
        goto label_24d120;
    }
    ctx->pc = 0x24D118u;
    SET_GPR_U32(ctx, 31, 0x24D120u);
    ctx->pc = 0x24D11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D118u;
    // 0x24d11c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18B8u, 0x24D118u, 0x24D120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D120u;
label_24d120:
    // 0x24d120: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x24d120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_24d124:
    // 0x24d124: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x24d124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
label_24d128:
    // 0x24d128: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x24d128u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_24d12c:
    // 0x24d12c: 0xae900000  sw          $s0, 0x0($s4)
    ctx->pc = 0x24d12cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
label_24d130:
    // 0x24d130: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x24d130u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_24d134:
    // 0x24d134: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x24d134u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_24d138:
    // 0x24d138: 0x2ea20002  sltiu       $v0, $s5, 0x2
    ctx->pc = 0x24d138u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_24d13c:
    // 0x24d13c: 0x1440ffa2  bnez        $v0, . + 4 + (-0x5E << 2)
label_24d140:
    if (ctx->pc == 0x24D140u) {
        ctx->pc = 0x24D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D13Cu;
        // 0x24d140: 0x26d60020  addiu       $s6, $s6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D144u;
        goto label_24d144;
    }
    ctx->pc = 0x24D13Cu;
    {
        const bool branch_taken_0x24d13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D13Cu;
        // 0x24d140: 0x26d60020  addiu       $s6, $s6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d13c) {
            ctx->pc = 0x24CFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24cfc8;
        }
    }
    ctx->pc = 0x24D144u;
label_24d144:
    // 0x24d144: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x24d144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_24d148:
    // 0x24d148: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
label_24d14c:
    if (ctx->pc == 0x24D14Cu) {
        ctx->pc = 0x24D14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D148u;
        // 0x24d14c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D150u;
        goto label_24d150;
    }
    ctx->pc = 0x24D148u;
    {
        const bool branch_taken_0x24d148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D148u;
        // 0x24d14c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d148) {
            ctx->pc = 0x24D310u;
            goto label_24d310;
        }
    }
    ctx->pc = 0x24D150u;
label_24d150:
    // 0x24d150: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x24d150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_24d154:
    // 0x24d154: 0x8c44bd30  lw          $a0, -0x42D0($v0)
    ctx->pc = 0x24d154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_24d158:
    // 0x24d158: 0x1464006e  bne         $v1, $a0, . + 4 + (0x6E << 2)
label_24d15c:
    if (ctx->pc == 0x24D15Cu) {
        ctx->pc = 0x24D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D158u;
        // 0x24d15c: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D160u;
        goto label_24d160;
    }
    ctx->pc = 0x24D158u;
    {
        const bool branch_taken_0x24d158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x24D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D158u;
        // 0x24d15c: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d158) {
            ctx->pc = 0x24D314u;
            goto label_24d314;
        }
    }
    ctx->pc = 0x24D160u;
label_24d160:
    // 0x24d160: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x24d160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_24d164:
    // 0x24d164: 0x1444006c  bne         $v0, $a0, . + 4 + (0x6C << 2)
label_24d168:
    if (ctx->pc == 0x24D168u) {
        ctx->pc = 0x24D168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D164u;
        // 0x24d168: 0x7bb10100  lq          $s1, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D16Cu;
        goto label_24d16c;
    }
    ctx->pc = 0x24D164u;
    {
        const bool branch_taken_0x24d164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x24D168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D164u;
        // 0x24d168: 0x7bb10100  lq          $s1, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d164) {
            ctx->pc = 0x24D318u;
            goto label_24d318;
        }
    }
    ctx->pc = 0x24D16Cu;
label_24d16c:
    // 0x24d16c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x24d16cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_24d170:
    // 0x24d170: 0x3c17f9fb  lui         $s7, 0xF9FB
    ctx->pc = 0x24d170u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)63995 << 16));
label_24d174:
    // 0x24d174: 0x247654c0  addiu       $s6, $v1, 0x54C0
    ctx->pc = 0x24d174u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 21696));
label_24d178:
    // 0x24d178: 0x27d40008  addiu       $s4, $fp, 0x8
    ctx->pc = 0x24d178u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_24d17c:
    // 0x24d17c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x24d17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_24d180:
    // 0x24d180: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x24d180u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_24d184:
    // 0x24d184: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x24d184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
label_24d188:
    // 0x24d188: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x24d188u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d18c:
    // 0x24d18c: 0x267e0090  addiu       $fp, $s3, 0x90
    ctx->pc = 0x24d18cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_24d190:
    // 0x24d190: 0x36f7fffb  ori         $s7, $s7, 0xFFFB
    ctx->pc = 0x24d190u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65531);
label_24d194:
    // 0x24d194: 0x0  nop
    ctx->pc = 0x24d194u;
    // NOP
label_24d198:
    // 0x24d198: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x24d198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_24d19c:
    // 0x24d19c: 0x87c30002  lh          $v1, 0x2($fp)
    ctx->pc = 0x24d19cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
label_24d1a0:
    // 0x24d1a0: 0x24854b00  addiu       $a1, $a0, 0x4B00
    ctx->pc = 0x24d1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_24d1a4:
    // 0x24d1a4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x24d1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_24d1a8:
    // 0x24d1a8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x24d1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_24d1ac:
    // 0x24d1ac: 0x248216c0  addiu       $v0, $a0, 0x16C0
    ctx->pc = 0x24d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
label_24d1b0:
    // 0x24d1b0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x24d1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_24d1b4:
    // 0x24d1b4: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x24d1b4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_24d1b8:
    // 0x24d1b8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x24d1b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_24d1bc:
    // 0x24d1bc: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x24d1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
label_24d1c0:
    // 0x24d1c0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x24d1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_24d1c4:
    // 0x24d1c4: 0xc0e8b48  jal         func_3A2D20
label_24d1c8:
    if (ctx->pc == 0x24D1C8u) {
        ctx->pc = 0x24D1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D1C4u;
        // 0x24d1c8: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D1CCu;
        goto label_24d1cc;
    }
    ctx->pc = 0x24D1C4u;
    SET_GPR_U32(ctx, 31, 0x24D1CCu);
    ctx->pc = 0x24D1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D1C4u;
    // 0x24d1c8: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x24D1C4u, 0x24D1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D1CCu;
label_24d1cc:
    // 0x24d1cc: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x24d1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24d1d0:
    // 0x24d1d0: 0xc0e8b58  jal         func_3A2D60
label_24d1d4:
    if (ctx->pc == 0x24D1D4u) {
        ctx->pc = 0x24D1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D1D0u;
        // 0x24d1d4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D1D8u;
        goto label_24d1d8;
    }
    ctx->pc = 0x24D1D0u;
    SET_GPR_U32(ctx, 31, 0x24D1D8u);
    ctx->pc = 0x24D1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D1D0u;
    // 0x24d1d4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x24D1D0u, 0x24D1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D1D8u;
label_24d1d8:
    // 0x24d1d8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x24d1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_24d1dc:
    // 0x24d1dc: 0xc0e8b58  jal         func_3A2D60
label_24d1e0:
    if (ctx->pc == 0x24D1E0u) {
        ctx->pc = 0x24D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D1DCu;
        // 0x24d1e0: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D1E4u;
        goto label_24d1e4;
    }
    ctx->pc = 0x24D1DCu;
    SET_GPR_U32(ctx, 31, 0x24D1E4u);
    ctx->pc = 0x24D1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D1DCu;
    // 0x24d1e0: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x24D1DCu, 0x24D1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D1E4u;
label_24d1e4:
    // 0x24d1e4: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x24d1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24d1e8:
    // 0x24d1e8: 0xc0e8b70  jal         func_3A2DC0
label_24d1ec:
    if (ctx->pc == 0x24D1ECu) {
        ctx->pc = 0x24D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D1E8u;
        // 0x24d1ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D1F0u;
        goto label_24d1f0;
    }
    ctx->pc = 0x24D1E8u;
    SET_GPR_U32(ctx, 31, 0x24D1F0u);
    ctx->pc = 0x24D1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D1E8u;
    // 0x24d1ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x24D1E8u, 0x24D1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D1F0u;
label_24d1f0:
    // 0x24d1f0: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x24d1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24d1f4:
    // 0x24d1f4: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x24d1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_24d1f8:
    // 0x24d1f8: 0x24a5cfd0  addiu       $a1, $a1, -0x3030
    ctx->pc = 0x24d1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954960));
label_24d1fc:
    // 0x24d1fc: 0xc0e8b98  jal         func_3A2E60
label_24d200:
    if (ctx->pc == 0x24D200u) {
        ctx->pc = 0x24D200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D1FCu;
        // 0x24d200: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D204u;
        goto label_24d204;
    }
    ctx->pc = 0x24D1FCu;
    SET_GPR_U32(ctx, 31, 0x24D204u);
    ctx->pc = 0x24D200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D1FCu;
    // 0x24d200: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E60u, 0x24D1FCu, 0x24D204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D204u;
label_24d204:
    // 0x24d204: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x24d204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24d208:
    // 0x24d208: 0xc0e8b50  jal         func_3A2D40
label_24d20c:
    if (ctx->pc == 0x24D20Cu) {
        ctx->pc = 0x24D20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D208u;
        // 0x24d20c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D210u;
        goto label_24d210;
    }
    ctx->pc = 0x24D208u;
    SET_GPR_U32(ctx, 31, 0x24D210u);
    ctx->pc = 0x24D20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D208u;
    // 0x24d20c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x24D208u, 0x24D210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D210u;
label_24d210:
    // 0x24d210: 0x5220003b  beql        $s1, $zero, . + 4 + (0x3B << 2)
label_24d214:
    if (ctx->pc == 0x24D214u) {
        ctx->pc = 0x24D214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D210u;
        // 0x24d214: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D218u;
        goto label_24d218;
    }
    ctx->pc = 0x24D210u;
    {
        const bool branch_taken_0x24d210 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d210) {
            ctx->pc = 0x24D214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D210u;
            // 0x24d214: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D300u;
            goto label_24d300;
        }
    }
    ctx->pc = 0x24D218u;
label_24d218:
    // 0x24d218: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x24d218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24d21c:
    // 0x24d21c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x24d21cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_24d220:
    // 0x24d220: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x24d220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_24d224:
    // 0x24d224: 0x40f809  jalr        $v0
label_24d228:
    if (ctx->pc == 0x24D228u) {
        ctx->pc = 0x24D228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D224u;
        // 0x24d228: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D22Cu;
        goto label_24d22c;
    }
    ctx->pc = 0x24D224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24D22Cu);
        ctx->pc = 0x24D228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D224u;
        // 0x24d228: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D224u, 0x24D22Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D22Cu;
label_24d22c:
    // 0x24d22c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x24d22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_24d230:
    // 0x24d230: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x24d230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_24d234:
    // 0x24d234: 0x8c652c7c  lw          $a1, 0x2C7C($v1)
    ctx->pc = 0x24d234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_24d238:
    // 0x24d238: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24d238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24d23c:
    // 0x24d23c: 0x8c89bd30  lw          $t1, -0x42D0($a0)
    ctx->pc = 0x24d23cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950192)));
label_24d240:
    // 0x24d240: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x24d240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_24d244:
    // 0x24d244: 0x8ca40840  lw          $a0, 0x840($a1)
    ctx->pc = 0x24d244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2112)));
label_24d248:
    // 0x24d248: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24d248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_24d24c:
    // 0x24d24c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x24d24cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_24d250:
    // 0x24d250: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x24d250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_24d254:
    // 0x24d254: 0x24a81780  addiu       $t0, $a1, 0x1780
    ctx->pc = 0x24d254u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 6016));
label_24d258:
    // 0x24d258: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x24d258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_24d25c:
    // 0x24d25c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x24d25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_24d260:
    // 0x24d260: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x24d260u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_24d264:
    // 0x24d264: 0x24c6cfd0  addiu       $a2, $a2, -0x3030
    ctx->pc = 0x24d264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954960));
label_24d268:
    // 0x24d268: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x24d268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_24d26c:
    // 0x24d26c: 0x240a0041  addiu       $t2, $zero, 0x41
    ctx->pc = 0x24d26cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_24d270:
    // 0x24d270: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x24d270u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24d274:
    // 0x24d274: 0xc0e6250  jal         func_398940
label_24d278:
    if (ctx->pc == 0x24D278u) {
        ctx->pc = 0x24D278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D274u;
        // 0x24d278: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D27Cu;
        goto label_24d27c;
    }
    ctx->pc = 0x24D274u;
    SET_GPR_U32(ctx, 31, 0x24D27Cu);
    ctx->pc = 0x24D278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D274u;
    // 0x24d278: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398940u, 0x24D274u, 0x24D27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D27Cu;
label_24d27c:
    // 0x24d27c: 0xc087408  jal         func_21D020
label_24d280:
    if (ctx->pc == 0x24D280u) {
        ctx->pc = 0x24D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D27Cu;
        // 0x24d280: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D284u;
        goto label_24d284;
    }
    ctx->pc = 0x24D27Cu;
    SET_GPR_U32(ctx, 31, 0x24D284u);
    ctx->pc = 0x24D280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D27Cu;
    // 0x24d280: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x24D27Cu, 0x24D284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D284u;
label_24d284:
    // 0x24d284: 0x7ac20000  lq          $v0, 0x0($s6)
    ctx->pc = 0x24d284u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_24d288:
    // 0x24d288: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x24d288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_24d28c:
    // 0x24d28c: 0x7ac30010  lq          $v1, 0x10($s6)
    ctx->pc = 0x24d28cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 22), 16)));
label_24d290:
    // 0x24d290: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x24d290u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_24d294:
    // 0x24d294: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x24d294u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_24d298:
    // 0x24d298: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x24d298u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_24d29c:
    // 0x24d29c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x24d29cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_24d2a0:
    // 0x24d2a0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x24d2a0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_24d2a4:
    // 0x24d2a4: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x24d2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_24d2a8:
    // 0x24d2a8: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x24d2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_24d2ac:
    // 0x24d2ac: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x24d2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_24d2b0:
    // 0x24d2b0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x24d2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_24d2b4:
    // 0x24d2b4: 0x95280b  movn        $a1, $a0, $s5
    ctx->pc = 0x24d2b4u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_24d2b8:
    // 0x24d2b8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x24d2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_24d2bc:
    // 0x24d2bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24d2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24d2c0:
    // 0x24d2c0: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x24d2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_24d2c4:
    // 0x24d2c4: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x24d2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_24d2c8:
    // 0x24d2c8: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x24d2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_24d2cc:
    // 0x24d2cc: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x24d2ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24d2d0:
    // 0x24d2d0: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24d2d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_24d2d4:
    // 0x24d2d4: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x24d2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
label_24d2d8:
    // 0x24d2d8: 0xc0e896c  jal         func_3A25B0
label_24d2dc:
    if (ctx->pc == 0x24D2DCu) {
        ctx->pc = 0x24D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D2D8u;
        // 0x24d2dc: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D2E0u;
        goto label_24d2e0;
    }
    ctx->pc = 0x24D2D8u;
    SET_GPR_U32(ctx, 31, 0x24D2E0u);
    ctx->pc = 0x24D2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D2D8u;
    // 0x24d2dc: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B0u, 0x24D2D8u, 0x24D2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D2E0u;
label_24d2e0:
    // 0x24d2e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24d2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24d2e4:
    // 0x24d2e4: 0xc0e862e  jal         func_3A18B8
label_24d2e8:
    if (ctx->pc == 0x24D2E8u) {
        ctx->pc = 0x24D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D2E4u;
        // 0x24d2e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D2ECu;
        goto label_24d2ec;
    }
    ctx->pc = 0x24D2E4u;
    SET_GPR_U32(ctx, 31, 0x24D2ECu);
    ctx->pc = 0x24D2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D2E4u;
    // 0x24d2e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18B8u, 0x24D2E4u, 0x24D2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D2ECu;
label_24d2ec:
    // 0x24d2ec: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x24d2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_24d2f0:
    // 0x24d2f0: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x24d2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
label_24d2f4:
    // 0x24d2f4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x24d2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_24d2f8:
    // 0x24d2f8: 0xae900000  sw          $s0, 0x0($s4)
    ctx->pc = 0x24d2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
label_24d2fc:
    // 0x24d2fc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x24d2fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_24d300:
    // 0x24d300: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x24d300u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_24d304:
    // 0x24d304: 0x2ea20002  sltiu       $v0, $s5, 0x2
    ctx->pc = 0x24d304u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_24d308:
    // 0x24d308: 0x1440ffa3  bnez        $v0, . + 4 + (-0x5D << 2)
label_24d30c:
    if (ctx->pc == 0x24D30Cu) {
        ctx->pc = 0x24D30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D308u;
        // 0x24d30c: 0x26d60020  addiu       $s6, $s6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D310u;
        goto label_24d310;
    }
    ctx->pc = 0x24D308u;
    {
        const bool branch_taken_0x24d308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D308u;
        // 0x24d30c: 0x26d60020  addiu       $s6, $s6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d308) {
            ctx->pc = 0x24D198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d198;
        }
    }
    ctx->pc = 0x24D310u;
label_24d310:
    // 0x24d310: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x24d310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_24d314:
    // 0x24d314: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x24d314u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_24d318:
    // 0x24d318: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x24d318u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_24d31c:
    // 0x24d31c: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x24d31cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_24d320:
    // 0x24d320: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x24d320u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_24d324:
    // 0x24d324: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x24d324u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_24d328:
    // 0x24d328: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x24d328u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_24d32c:
    // 0x24d32c: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x24d32cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_24d330:
    // 0x24d330: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x24d330u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_24d334:
    // 0x24d334: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x24d334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_24d338:
    // 0x24d338: 0x3e00008  jr          $ra
label_24d33c:
    if (ctx->pc == 0x24D33Cu) {
        ctx->pc = 0x24D33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D338u;
        // 0x24d33c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D340u;
        goto label_fallthrough_0x24d338;
    }
    ctx->pc = 0x24D338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D338u;
        // 0x24d33c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24d338:
    ctx->pc = 0x24D340u;
}
