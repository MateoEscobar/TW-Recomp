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

// Function: sub_0044DC10
// Address: 0x44dc10 - 0x44e060
void sub_0044DC10_0x44dc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044DC10_0x44dc10");
#endif

    switch (ctx->pc) {
        case 0x44dc10u: goto label_44dc10;
        case 0x44dc14u: goto label_44dc14;
        case 0x44dc18u: goto label_44dc18;
        case 0x44dc1cu: goto label_44dc1c;
        case 0x44dc20u: goto label_44dc20;
        case 0x44dc24u: goto label_44dc24;
        case 0x44dc28u: goto label_44dc28;
        case 0x44dc2cu: goto label_44dc2c;
        case 0x44dc30u: goto label_44dc30;
        case 0x44dc34u: goto label_44dc34;
        case 0x44dc38u: goto label_44dc38;
        case 0x44dc3cu: goto label_44dc3c;
        case 0x44dc40u: goto label_44dc40;
        case 0x44dc44u: goto label_44dc44;
        case 0x44dc48u: goto label_44dc48;
        case 0x44dc4cu: goto label_44dc4c;
        case 0x44dc50u: goto label_44dc50;
        case 0x44dc54u: goto label_44dc54;
        case 0x44dc58u: goto label_44dc58;
        case 0x44dc5cu: goto label_44dc5c;
        case 0x44dc60u: goto label_44dc60;
        case 0x44dc64u: goto label_44dc64;
        case 0x44dc68u: goto label_44dc68;
        case 0x44dc6cu: goto label_44dc6c;
        case 0x44dc70u: goto label_44dc70;
        case 0x44dc74u: goto label_44dc74;
        case 0x44dc78u: goto label_44dc78;
        case 0x44dc7cu: goto label_44dc7c;
        case 0x44dc80u: goto label_44dc80;
        case 0x44dc84u: goto label_44dc84;
        case 0x44dc88u: goto label_44dc88;
        case 0x44dc8cu: goto label_44dc8c;
        case 0x44dc90u: goto label_44dc90;
        case 0x44dc94u: goto label_44dc94;
        case 0x44dc98u: goto label_44dc98;
        case 0x44dc9cu: goto label_44dc9c;
        case 0x44dca0u: goto label_44dca0;
        case 0x44dca4u: goto label_44dca4;
        case 0x44dca8u: goto label_44dca8;
        case 0x44dcacu: goto label_44dcac;
        case 0x44dcb0u: goto label_44dcb0;
        case 0x44dcb4u: goto label_44dcb4;
        case 0x44dcb8u: goto label_44dcb8;
        case 0x44dcbcu: goto label_44dcbc;
        case 0x44dcc0u: goto label_44dcc0;
        case 0x44dcc4u: goto label_44dcc4;
        case 0x44dcc8u: goto label_44dcc8;
        case 0x44dcccu: goto label_44dccc;
        case 0x44dcd0u: goto label_44dcd0;
        case 0x44dcd4u: goto label_44dcd4;
        case 0x44dcd8u: goto label_44dcd8;
        case 0x44dcdcu: goto label_44dcdc;
        case 0x44dce0u: goto label_44dce0;
        case 0x44dce4u: goto label_44dce4;
        case 0x44dce8u: goto label_44dce8;
        case 0x44dcecu: goto label_44dcec;
        case 0x44dcf0u: goto label_44dcf0;
        case 0x44dcf4u: goto label_44dcf4;
        case 0x44dcf8u: goto label_44dcf8;
        case 0x44dcfcu: goto label_44dcfc;
        case 0x44dd00u: goto label_44dd00;
        case 0x44dd04u: goto label_44dd04;
        case 0x44dd08u: goto label_44dd08;
        case 0x44dd0cu: goto label_44dd0c;
        case 0x44dd10u: goto label_44dd10;
        case 0x44dd14u: goto label_44dd14;
        case 0x44dd18u: goto label_44dd18;
        case 0x44dd1cu: goto label_44dd1c;
        case 0x44dd20u: goto label_44dd20;
        case 0x44dd24u: goto label_44dd24;
        case 0x44dd28u: goto label_44dd28;
        case 0x44dd2cu: goto label_44dd2c;
        case 0x44dd30u: goto label_44dd30;
        case 0x44dd34u: goto label_44dd34;
        case 0x44dd38u: goto label_44dd38;
        case 0x44dd3cu: goto label_44dd3c;
        case 0x44dd40u: goto label_44dd40;
        case 0x44dd44u: goto label_44dd44;
        case 0x44dd48u: goto label_44dd48;
        case 0x44dd4cu: goto label_44dd4c;
        case 0x44dd50u: goto label_44dd50;
        case 0x44dd54u: goto label_44dd54;
        case 0x44dd58u: goto label_44dd58;
        case 0x44dd5cu: goto label_44dd5c;
        case 0x44dd60u: goto label_44dd60;
        case 0x44dd64u: goto label_44dd64;
        case 0x44dd68u: goto label_44dd68;
        case 0x44dd6cu: goto label_44dd6c;
        case 0x44dd70u: goto label_44dd70;
        case 0x44dd74u: goto label_44dd74;
        case 0x44dd78u: goto label_44dd78;
        case 0x44dd7cu: goto label_44dd7c;
        case 0x44dd80u: goto label_44dd80;
        case 0x44dd84u: goto label_44dd84;
        case 0x44dd88u: goto label_44dd88;
        case 0x44dd8cu: goto label_44dd8c;
        case 0x44dd90u: goto label_44dd90;
        case 0x44dd94u: goto label_44dd94;
        case 0x44dd98u: goto label_44dd98;
        case 0x44dd9cu: goto label_44dd9c;
        case 0x44dda0u: goto label_44dda0;
        case 0x44dda4u: goto label_44dda4;
        case 0x44dda8u: goto label_44dda8;
        case 0x44ddacu: goto label_44ddac;
        case 0x44ddb0u: goto label_44ddb0;
        case 0x44ddb4u: goto label_44ddb4;
        case 0x44ddb8u: goto label_44ddb8;
        case 0x44ddbcu: goto label_44ddbc;
        case 0x44ddc0u: goto label_44ddc0;
        case 0x44ddc4u: goto label_44ddc4;
        case 0x44ddc8u: goto label_44ddc8;
        case 0x44ddccu: goto label_44ddcc;
        case 0x44ddd0u: goto label_44ddd0;
        case 0x44ddd4u: goto label_44ddd4;
        case 0x44ddd8u: goto label_44ddd8;
        case 0x44dddcu: goto label_44dddc;
        case 0x44dde0u: goto label_44dde0;
        case 0x44dde4u: goto label_44dde4;
        case 0x44dde8u: goto label_44dde8;
        case 0x44ddecu: goto label_44ddec;
        case 0x44ddf0u: goto label_44ddf0;
        case 0x44ddf4u: goto label_44ddf4;
        case 0x44ddf8u: goto label_44ddf8;
        case 0x44ddfcu: goto label_44ddfc;
        case 0x44de00u: goto label_44de00;
        case 0x44de04u: goto label_44de04;
        case 0x44de08u: goto label_44de08;
        case 0x44de0cu: goto label_44de0c;
        case 0x44de10u: goto label_44de10;
        case 0x44de14u: goto label_44de14;
        case 0x44de18u: goto label_44de18;
        case 0x44de1cu: goto label_44de1c;
        case 0x44de20u: goto label_44de20;
        case 0x44de24u: goto label_44de24;
        case 0x44de28u: goto label_44de28;
        case 0x44de2cu: goto label_44de2c;
        case 0x44de30u: goto label_44de30;
        case 0x44de34u: goto label_44de34;
        case 0x44de38u: goto label_44de38;
        case 0x44de3cu: goto label_44de3c;
        case 0x44de40u: goto label_44de40;
        case 0x44de44u: goto label_44de44;
        case 0x44de48u: goto label_44de48;
        case 0x44de4cu: goto label_44de4c;
        case 0x44de50u: goto label_44de50;
        case 0x44de54u: goto label_44de54;
        case 0x44de58u: goto label_44de58;
        case 0x44de5cu: goto label_44de5c;
        case 0x44de60u: goto label_44de60;
        case 0x44de64u: goto label_44de64;
        case 0x44de68u: goto label_44de68;
        case 0x44de6cu: goto label_44de6c;
        case 0x44de70u: goto label_44de70;
        case 0x44de74u: goto label_44de74;
        case 0x44de78u: goto label_44de78;
        case 0x44de7cu: goto label_44de7c;
        case 0x44de80u: goto label_44de80;
        case 0x44de84u: goto label_44de84;
        case 0x44de88u: goto label_44de88;
        case 0x44de8cu: goto label_44de8c;
        case 0x44de90u: goto label_44de90;
        case 0x44de94u: goto label_44de94;
        case 0x44de98u: goto label_44de98;
        case 0x44de9cu: goto label_44de9c;
        case 0x44dea0u: goto label_44dea0;
        case 0x44dea4u: goto label_44dea4;
        case 0x44dea8u: goto label_44dea8;
        case 0x44deacu: goto label_44deac;
        case 0x44deb0u: goto label_44deb0;
        case 0x44deb4u: goto label_44deb4;
        case 0x44deb8u: goto label_44deb8;
        case 0x44debcu: goto label_44debc;
        case 0x44dec0u: goto label_44dec0;
        case 0x44dec4u: goto label_44dec4;
        case 0x44dec8u: goto label_44dec8;
        case 0x44deccu: goto label_44decc;
        case 0x44ded0u: goto label_44ded0;
        case 0x44ded4u: goto label_44ded4;
        case 0x44ded8u: goto label_44ded8;
        case 0x44dedcu: goto label_44dedc;
        case 0x44dee0u: goto label_44dee0;
        case 0x44dee4u: goto label_44dee4;
        case 0x44dee8u: goto label_44dee8;
        case 0x44deecu: goto label_44deec;
        case 0x44def0u: goto label_44def0;
        case 0x44def4u: goto label_44def4;
        case 0x44def8u: goto label_44def8;
        case 0x44defcu: goto label_44defc;
        case 0x44df00u: goto label_44df00;
        case 0x44df04u: goto label_44df04;
        case 0x44df08u: goto label_44df08;
        case 0x44df0cu: goto label_44df0c;
        case 0x44df10u: goto label_44df10;
        case 0x44df14u: goto label_44df14;
        case 0x44df18u: goto label_44df18;
        case 0x44df1cu: goto label_44df1c;
        case 0x44df20u: goto label_44df20;
        case 0x44df24u: goto label_44df24;
        case 0x44df28u: goto label_44df28;
        case 0x44df2cu: goto label_44df2c;
        case 0x44df30u: goto label_44df30;
        case 0x44df34u: goto label_44df34;
        case 0x44df38u: goto label_44df38;
        case 0x44df3cu: goto label_44df3c;
        case 0x44df40u: goto label_44df40;
        case 0x44df44u: goto label_44df44;
        case 0x44df48u: goto label_44df48;
        case 0x44df4cu: goto label_44df4c;
        case 0x44df50u: goto label_44df50;
        case 0x44df54u: goto label_44df54;
        case 0x44df58u: goto label_44df58;
        case 0x44df5cu: goto label_44df5c;
        case 0x44df60u: goto label_44df60;
        case 0x44df64u: goto label_44df64;
        case 0x44df68u: goto label_44df68;
        case 0x44df6cu: goto label_44df6c;
        case 0x44df70u: goto label_44df70;
        case 0x44df74u: goto label_44df74;
        case 0x44df78u: goto label_44df78;
        case 0x44df7cu: goto label_44df7c;
        case 0x44df80u: goto label_44df80;
        case 0x44df84u: goto label_44df84;
        case 0x44df88u: goto label_44df88;
        case 0x44df8cu: goto label_44df8c;
        case 0x44df90u: goto label_44df90;
        case 0x44df94u: goto label_44df94;
        case 0x44df98u: goto label_44df98;
        case 0x44df9cu: goto label_44df9c;
        case 0x44dfa0u: goto label_44dfa0;
        case 0x44dfa4u: goto label_44dfa4;
        case 0x44dfa8u: goto label_44dfa8;
        case 0x44dfacu: goto label_44dfac;
        case 0x44dfb0u: goto label_44dfb0;
        case 0x44dfb4u: goto label_44dfb4;
        case 0x44dfb8u: goto label_44dfb8;
        case 0x44dfbcu: goto label_44dfbc;
        case 0x44dfc0u: goto label_44dfc0;
        case 0x44dfc4u: goto label_44dfc4;
        case 0x44dfc8u: goto label_44dfc8;
        case 0x44dfccu: goto label_44dfcc;
        case 0x44dfd0u: goto label_44dfd0;
        case 0x44dfd4u: goto label_44dfd4;
        case 0x44dfd8u: goto label_44dfd8;
        case 0x44dfdcu: goto label_44dfdc;
        case 0x44dfe0u: goto label_44dfe0;
        case 0x44dfe4u: goto label_44dfe4;
        case 0x44dfe8u: goto label_44dfe8;
        case 0x44dfecu: goto label_44dfec;
        case 0x44dff0u: goto label_44dff0;
        case 0x44dff4u: goto label_44dff4;
        case 0x44dff8u: goto label_44dff8;
        case 0x44dffcu: goto label_44dffc;
        case 0x44e000u: goto label_44e000;
        case 0x44e004u: goto label_44e004;
        case 0x44e008u: goto label_44e008;
        case 0x44e00cu: goto label_44e00c;
        case 0x44e010u: goto label_44e010;
        case 0x44e014u: goto label_44e014;
        case 0x44e018u: goto label_44e018;
        case 0x44e01cu: goto label_44e01c;
        case 0x44e020u: goto label_44e020;
        case 0x44e024u: goto label_44e024;
        case 0x44e028u: goto label_44e028;
        case 0x44e02cu: goto label_44e02c;
        case 0x44e030u: goto label_44e030;
        case 0x44e034u: goto label_44e034;
        case 0x44e038u: goto label_44e038;
        case 0x44e03cu: goto label_44e03c;
        case 0x44e040u: goto label_44e040;
        case 0x44e044u: goto label_44e044;
        case 0x44e048u: goto label_44e048;
        case 0x44e04cu: goto label_44e04c;
        case 0x44e050u: goto label_44e050;
        case 0x44e054u: goto label_44e054;
        case 0x44e058u: goto label_44e058;
        case 0x44e05cu: goto label_44e05c;
        default: break;
    }

    ctx->pc = 0x44dc10u;

label_44dc10:
    // 0x44dc10: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x44dc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_44dc14:
    // 0x44dc14: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x44dc14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_44dc18:
    // 0x44dc18: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x44dc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_44dc1c:
    // 0x44dc1c: 0x3442fe00  ori         $v0, $v0, 0xFE00
    ctx->pc = 0x44dc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65024);
label_44dc20:
    // 0x44dc20: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x44dc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_44dc24:
    // 0x44dc24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44dc24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44dc28:
    // 0x44dc28: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x44dc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_44dc2c:
    // 0x44dc2c: 0x55203  sra         $t2, $a1, 8
    ctx->pc = 0x44dc2cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 8));
label_44dc30:
    // 0x44dc30: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x44dc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_44dc34:
    // 0x44dc34: 0x590c3  sra         $s2, $a1, 3
    ctx->pc = 0x44dc34u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 5), 3));
label_44dc38:
    // 0x44dc38: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x44dc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_44dc3c:
    // 0x44dc3c: 0x5a083  sra         $s4, $a1, 2
    ctx->pc = 0x44dc3cu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 5), 2));
label_44dc40:
    // 0x44dc40: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x44dc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_44dc44:
    // 0x44dc44: 0x5a843  sra         $s5, $a1, 1
    ctx->pc = 0x44dc44u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 5), 1));
label_44dc48:
    // 0x44dc48: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x44dc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_44dc4c:
    // 0x44dc4c: 0x59903  sra         $s3, $a1, 4
    ctx->pc = 0x44dc4cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 5), 4));
label_44dc50:
    // 0x44dc50: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x44dc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_44dc54:
    // 0x44dc54: 0x5b983  sra         $s7, $a1, 6
    ctx->pc = 0x44dc54u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 5), 6));
label_44dc58:
    // 0x44dc58: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x44dc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_44dc5c:
    // 0x44dc5c: 0x5f143  sra         $fp, $a1, 5
    ctx->pc = 0x44dc5cu;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 5), 5));
label_44dc60:
    // 0x44dc60: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x44dc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_44dc64:
    // 0x44dc64: 0x549c3  sra         $t1, $a1, 7
    ctx->pc = 0x44dc64u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 5), 7));
label_44dc68:
    // 0x44dc68: 0x30b60001  andi        $s6, $a1, 0x1
    ctx->pc = 0x44dc68u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_44dc6c:
    // 0x44dc6c: 0x32b50001  andi        $s5, $s5, 0x1
    ctx->pc = 0x44dc6cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_44dc70:
    // 0x44dc70: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x44dc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_44dc74:
    // 0x44dc74: 0x32940001  andi        $s4, $s4, 0x1
    ctx->pc = 0x44dc74u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_44dc78:
    // 0x44dc78: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x44dc78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_44dc7c:
    // 0x44dc7c: 0x32520001  andi        $s2, $s2, 0x1
    ctx->pc = 0x44dc7cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_44dc80:
    // 0x44dc80: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x44dc80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_44dc84:
    // 0x44dc84: 0x32730001  andi        $s3, $s3, 0x1
    ctx->pc = 0x44dc84u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_44dc88:
    // 0x44dc88: 0x33de0001  andi        $fp, $fp, 0x1
    ctx->pc = 0x44dc88u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_44dc8c:
    // 0x44dc8c: 0x32f70001  andi        $s7, $s7, 0x1
    ctx->pc = 0x44dc8cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
label_44dc90:
    // 0x44dc90: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x44dc90u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
label_44dc94:
    // 0x44dc94: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x44dc94u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
label_44dc98:
    // 0x44dc98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x44dc98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44dc9c:
    // 0x44dc9c: 0xae0700a8  sw          $a3, 0xA8($s0)
    ctx->pc = 0x44dc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 7));
label_44dca0:
    // 0x44dca0: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x44dca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_44dca4:
    // 0x44dca4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44dca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44dca8:
    // 0x44dca8: 0x16c20009  bne         $s6, $v0, . + 4 + (0x9 << 2)
label_44dcac:
    if (ctx->pc == 0x44DCACu) {
        ctx->pc = 0x44DCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DCA8u;
        // 0x44dcac: 0xae00003c  sw          $zero, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44DCB0u;
        goto label_44dcb0;
    }
    ctx->pc = 0x44DCA8u;
    {
        const bool branch_taken_0x44dca8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x44DCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DCA8u;
        // 0x44dcac: 0xae00003c  sw          $zero, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44dca8) {
            ctx->pc = 0x44DCD0u;
            goto label_44dcd0;
        }
    }
    ctx->pc = 0x44DCB0u;
label_44dcb0:
    // 0x44dcb0: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x44dcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_44dcb4:
    // 0x44dcb4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x44dcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44dcb8:
    // 0x44dcb8: 0x8c64e788  lw          $a0, -0x1878($v1)
    ctx->pc = 0x44dcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961032)));
label_44dcbc:
    // 0x44dcbc: 0x34e20001  ori         $v0, $a3, 0x1
    ctx->pc = 0x44dcbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
label_44dcc0:
    // 0x44dcc0: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x44dcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
label_44dcc4:
    // 0x44dcc4: 0x853018  mult        $a2, $a0, $a1
    ctx->pc = 0x44dcc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_44dcc8:
    // 0x44dcc8: 0xae1600a0  sw          $s6, 0xA0($s0)
    ctx->pc = 0x44dcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 22));
label_44dccc:
    // 0x44dccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44dcd0:
    // 0x44dcd0: 0x1642000c  bne         $s2, $v0, . + 4 + (0xC << 2)
label_44dcd4:
    if (ctx->pc == 0x44DCD4u) {
        ctx->pc = 0x44DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DCD0u;
        // 0x44dcd4: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44DCD8u;
        goto label_44dcd8;
    }
    ctx->pc = 0x44DCD0u;
    {
        const bool branch_taken_0x44dcd0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x44DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DCD0u;
        // 0x44dcd4: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44dcd0) {
            ctx->pc = 0x44DD04u;
            goto label_44dd04;
        }
    }
    ctx->pc = 0x44DCD8u;
label_44dcd8:
    // 0x44dcd8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x44dcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44dcdc:
    // 0x44dcdc: 0x8c64e78c  lw          $a0, -0x1874($v1)
    ctx->pc = 0x44dcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961036)));
label_44dce0:
    // 0x44dce0: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x44dce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_44dce4:
    // 0x44dce4: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x44dce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_44dce8:
    // 0x44dce8: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x44dce8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_44dcec:
    // 0x44dcec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x44dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_44dcf0:
    // 0x44dcf0: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x44dcf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_44dcf4:
    // 0x44dcf4: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x44dcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_44dcf8:
    // 0x44dcf8: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x44dcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_44dcfc:
    // 0x44dcfc: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x44dcfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_44dd00:
    // 0x44dd00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44dd04:
    // 0x44dd04: 0x1662000d  bne         $s3, $v0, . + 4 + (0xD << 2)
label_44dd08:
    if (ctx->pc == 0x44DD08u) {
        ctx->pc = 0x44DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DD04u;
        // 0x44dd08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44DD0Cu;
        goto label_44dd0c;
    }
    ctx->pc = 0x44DD04u;
    {
        const bool branch_taken_0x44dd04 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x44DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DD04u;
        // 0x44dd08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44dd04) {
            ctx->pc = 0x44DD3Cu;
            goto label_44dd3c;
        }
    }
    ctx->pc = 0x44DD0Cu;
label_44dd0c:
    // 0x44dd0c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x44dd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_44dd10:
    // 0x44dd10: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x44dd10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44dd14:
    // 0x44dd14: 0x8c64e790  lw          $a0, -0x1870($v1)
    ctx->pc = 0x44dd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961040)));
label_44dd18:
    // 0x44dd18: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x44dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_44dd1c:
    // 0x44dd1c: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x44dd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_44dd20:
    // 0x44dd20: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x44dd20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_44dd24:
    // 0x44dd24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x44dd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_44dd28:
    // 0x44dd28: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x44dd28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_44dd2c:
    // 0x44dd2c: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x44dd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_44dd30:
    // 0x44dd30: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x44dd30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_44dd34:
    // 0x44dd34: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x44dd34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_44dd38:
    // 0x44dd38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44dd3c:
    // 0x44dd3c: 0x1682000d  bne         $s4, $v0, . + 4 + (0xD << 2)
label_44dd40:
    if (ctx->pc == 0x44DD40u) {
        ctx->pc = 0x44DD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DD3Cu;
        // 0x44dd40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44DD44u;
        goto label_44dd44;
    }
    ctx->pc = 0x44DD3Cu;
    {
        const bool branch_taken_0x44dd3c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x44DD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DD3Cu;
        // 0x44dd40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44dd3c) {
            ctx->pc = 0x44DD74u;
            goto label_44dd74;
        }
    }
    ctx->pc = 0x44DD44u;
label_44dd44:
    // 0x44dd44: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x44dd44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_44dd48:
    // 0x44dd48: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x44dd48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44dd4c:
    // 0x44dd4c: 0x8c64e794  lw          $a0, -0x186C($v1)
    ctx->pc = 0x44dd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961044)));
label_44dd50:
    // 0x44dd50: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x44dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_44dd54:
    // 0x44dd54: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x44dd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_44dd58:
    // 0x44dd58: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x44dd58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_44dd5c:
    // 0x44dd5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x44dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_44dd60:
    // 0x44dd60: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x44dd60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_44dd64:
    // 0x44dd64: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x44dd64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_44dd68:
    // 0x44dd68: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x44dd68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_44dd6c:
    // 0x44dd6c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x44dd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_44dd70:
    // 0x44dd70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44dd74:
    // 0x44dd74: 0x16a2000d  bne         $s5, $v0, . + 4 + (0xD << 2)
label_44dd78:
    if (ctx->pc == 0x44DD78u) {
        ctx->pc = 0x44DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DD74u;
        // 0x44dd78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44DD7Cu;
        goto label_44dd7c;
    }
    ctx->pc = 0x44DD74u;
    {
        const bool branch_taken_0x44dd74 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x44DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DD74u;
        // 0x44dd78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44dd74) {
            ctx->pc = 0x44DDACu;
            goto label_44ddac;
        }
    }
    ctx->pc = 0x44DD7Cu;
label_44dd7c:
    // 0x44dd7c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x44dd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_44dd80:
    // 0x44dd80: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x44dd80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44dd84:
    // 0x44dd84: 0x8c64e798  lw          $a0, -0x1868($v1)
    ctx->pc = 0x44dd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961048)));
label_44dd88:
    // 0x44dd88: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x44dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_44dd8c:
    // 0x44dd8c: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x44dd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_44dd90:
    // 0x44dd90: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x44dd90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_44dd94:
    // 0x44dd94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x44dd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_44dd98:
    // 0x44dd98: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x44dd98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_44dd9c:
    // 0x44dd9c: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x44dd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_44dda0:
    // 0x44dda0: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x44dda0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_44dda4:
    // 0x44dda4: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x44dda4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_44dda8:
    // 0x44dda8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44dda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44ddac:
    // 0x44ddac: 0x16e2000d  bne         $s7, $v0, . + 4 + (0xD << 2)
label_44ddb0:
    if (ctx->pc == 0x44DDB0u) {
        ctx->pc = 0x44DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DDACu;
        // 0x44ddb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44DDB4u;
        goto label_44ddb4;
    }
    ctx->pc = 0x44DDACu;
    {
        const bool branch_taken_0x44ddac = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x44DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DDACu;
        // 0x44ddb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ddac) {
            ctx->pc = 0x44DDE4u;
            goto label_44dde4;
        }
    }
    ctx->pc = 0x44DDB4u;
label_44ddb4:
    // 0x44ddb4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x44ddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_44ddb8:
    // 0x44ddb8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x44ddb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44ddbc:
    // 0x44ddbc: 0x8c64e79c  lw          $a0, -0x1864($v1)
    ctx->pc = 0x44ddbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961052)));
label_44ddc0:
    // 0x44ddc0: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x44ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_44ddc4:
    // 0x44ddc4: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x44ddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_44ddc8:
    // 0x44ddc8: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x44ddc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_44ddcc:
    // 0x44ddcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x44ddccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_44ddd0:
    // 0x44ddd0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x44ddd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_44ddd4:
    // 0x44ddd4: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x44ddd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_44ddd8:
    // 0x44ddd8: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x44ddd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_44dddc:
    // 0x44dddc: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x44dddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_44dde0:
    // 0x44dde0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44dde4:
    // 0x44dde4: 0x17c2000d  bne         $fp, $v0, . + 4 + (0xD << 2)
label_44dde8:
    if (ctx->pc == 0x44DDE8u) {
        ctx->pc = 0x44DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DDE4u;
        // 0x44dde8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44DDECu;
        goto label_44ddec;
    }
    ctx->pc = 0x44DDE4u;
    {
        const bool branch_taken_0x44dde4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x44DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DDE4u;
        // 0x44dde8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44dde4) {
            ctx->pc = 0x44DE1Cu;
            goto label_44de1c;
        }
    }
    ctx->pc = 0x44DDECu;
label_44ddec:
    // 0x44ddec: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x44ddecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_44ddf0:
    // 0x44ddf0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x44ddf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44ddf4:
    // 0x44ddf4: 0x8c64e7a0  lw          $a0, -0x1860($v1)
    ctx->pc = 0x44ddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961056)));
label_44ddf8:
    // 0x44ddf8: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x44ddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_44ddfc:
    // 0x44ddfc: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x44ddfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_44de00:
    // 0x44de00: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x44de00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_44de04:
    // 0x44de04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x44de04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_44de08:
    // 0x44de08: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x44de08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_44de0c:
    // 0x44de0c: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x44de0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_44de10:
    // 0x44de10: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x44de10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_44de14:
    // 0x44de14: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x44de14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_44de18:
    // 0x44de18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44de18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44de1c:
    // 0x44de1c: 0x1522000c  bne         $t1, $v0, . + 4 + (0xC << 2)
label_44de20:
    if (ctx->pc == 0x44DE20u) {
        ctx->pc = 0x44DE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DE1Cu;
        // 0x44de20: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44DE24u;
        goto label_44de24;
    }
    ctx->pc = 0x44DE1Cu;
    {
        const bool branch_taken_0x44de1c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x44DE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DE1Cu;
        // 0x44de20: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44de1c) {
            ctx->pc = 0x44DE50u;
            goto label_44de50;
        }
    }
    ctx->pc = 0x44DE24u;
label_44de24:
    // 0x44de24: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x44de24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_44de28:
    // 0x44de28: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x44de28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44de2c:
    // 0x44de2c: 0x8c64e7a4  lw          $a0, -0x185C($v1)
    ctx->pc = 0x44de2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961060)));
label_44de30:
    // 0x44de30: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x44de30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_44de34:
    // 0x44de34: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x44de34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_44de38:
    // 0x44de38: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x44de38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_44de3c:
    // 0x44de3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x44de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_44de40:
    // 0x44de40: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x44de40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
label_44de44:
    // 0x44de44: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x44de44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_44de48:
    // 0x44de48: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x44de48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_44de4c:
    // 0x44de4c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x44de4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_44de50:
    // 0x44de50: 0x1551000d  bne         $t2, $s1, . + 4 + (0xD << 2)
label_44de54:
    if (ctx->pc == 0x44DE54u) {
        ctx->pc = 0x44DE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DE50u;
        // 0x44de54: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44DE58u;
        goto label_44de58;
    }
    ctx->pc = 0x44DE50u;
    {
        const bool branch_taken_0x44de50 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 17));
        ctx->pc = 0x44DE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DE50u;
        // 0x44de54: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44de50) {
            ctx->pc = 0x44DE88u;
            goto label_44de88;
        }
    }
    ctx->pc = 0x44DE58u;
label_44de58:
    // 0x44de58: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x44de58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_44de5c:
    // 0x44de5c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x44de5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44de60:
    // 0x44de60: 0x8c64e7a8  lw          $a0, -0x1858($v1)
    ctx->pc = 0x44de60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961064)));
label_44de64:
    // 0x44de64: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x44de64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_44de68:
    // 0x44de68: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x44de68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_44de6c:
    // 0x44de6c: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x44de6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_44de70:
    // 0x44de70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x44de70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_44de74:
    // 0x44de74: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x44de74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_44de78:
    // 0x44de78: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x44de78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_44de7c:
    // 0x44de7c: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x44de7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_44de80:
    // 0x44de80: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x44de80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_44de84:
    // 0x44de84: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x44de84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_44de88:
    // 0x44de88: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x44de88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_44de8c:
    // 0x44de8c: 0x8c62ae20  lw          $v0, -0x51E0($v1)
    ctx->pc = 0x44de8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946336)));
label_44de90:
    // 0x44de90: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x44de90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_44de94:
    // 0x44de94: 0x7fa90010  sq          $t1, 0x10($sp)
    ctx->pc = 0x44de94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 9));
label_44de98:
    // 0x44de98: 0x34a5012f  ori         $a1, $a1, 0x12F
    ctx->pc = 0x44de98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)303);
label_44de9c:
    // 0x44de9c: 0x40f809  jalr        $v0
label_44dea0:
    if (ctx->pc == 0x44DEA0u) {
        ctx->pc = 0x44DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DE9Cu;
        // 0x44dea0: 0x7faa0020  sq          $t2, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44DEA4u;
        goto label_44dea4;
    }
    ctx->pc = 0x44DE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44DEA4u);
        ctx->pc = 0x44DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DE9Cu;
        // 0x44dea0: 0x7faa0020  sq          $t2, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44DE9Cu, 0x44DEA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44DEA4u;
label_44dea4:
    // 0x44dea4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x44dea4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44dea8:
    // 0x44dea8: 0x7ba90010  lq          $t1, 0x10($sp)
    ctx->pc = 0x44dea8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44deac:
    // 0x44deac: 0x1100005e  beqz        $t0, . + 4 + (0x5E << 2)
label_44deb0:
    if (ctx->pc == 0x44DEB0u) {
        ctx->pc = 0x44DEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DEACu;
        // 0x44deb0: 0x7baa0020  lq          $t2, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44DEB4u;
        goto label_44deb4;
    }
    ctx->pc = 0x44DEACu;
    {
        const bool branch_taken_0x44deac = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x44DEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DEACu;
        // 0x44deb0: 0x7baa0020  lq          $t2, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44deac) {
            ctx->pc = 0x44E028u;
            goto label_44e028;
        }
    }
    ctx->pc = 0x44DEB4u;
label_44deb4:
    // 0x44deb4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x44deb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_44deb8:
    // 0x44deb8: 0x2503000f  addiu       $v1, $t0, 0xF
    ctx->pc = 0x44deb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
label_44debc:
    // 0x44debc: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x44debcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
label_44dec0:
    // 0x44dec0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x44dec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44dec4:
    // 0x44dec4: 0x16d10008  bne         $s6, $s1, . + 4 + (0x8 << 2)
label_44dec8:
    if (ctx->pc == 0x44DEC8u) {
        ctx->pc = 0x44DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DEC4u;
        // 0x44dec8: 0x623824  and         $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44DECCu;
        goto label_44decc;
    }
    ctx->pc = 0x44DEC4u;
    {
        const bool branch_taken_0x44dec4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 17));
        ctx->pc = 0x44DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DEC4u;
        // 0x44dec8: 0x623824  and         $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44dec4) {
            ctx->pc = 0x44DEE8u;
            goto label_44dee8;
        }
    }
    ctx->pc = 0x44DECCu;
label_44decc:
    // 0x44decc: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x44deccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_44ded0:
    // 0x44ded0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x44ded0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44ded4:
    // 0x44ded4: 0x8c64e788  lw          $a0, -0x1878($v1)
    ctx->pc = 0x44ded4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961032)));
label_44ded8:
    // 0x44ded8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x44ded8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_44dedc:
    // 0x44dedc: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x44dedcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_44dee0:
    // 0x44dee0: 0x853018  mult        $a2, $a0, $a1
    ctx->pc = 0x44dee0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_44dee4:
    // 0x44dee4: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x44dee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
label_44dee8:
    // 0x44dee8: 0x16510009  bne         $s2, $s1, . + 4 + (0x9 << 2)
label_44deec:
    if (ctx->pc == 0x44DEECu) {
        ctx->pc = 0x44DEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DEE8u;
        // 0x44deec: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44DEF0u;
        goto label_44def0;
    }
    ctx->pc = 0x44DEE8u;
    {
        const bool branch_taken_0x44dee8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x44DEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DEE8u;
        // 0x44deec: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44dee8) {
            ctx->pc = 0x44DF10u;
            goto label_44df10;
        }
    }
    ctx->pc = 0x44DEF0u;
label_44def0:
    // 0x44def0: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x44def0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_44def4:
    // 0x44def4: 0x8c44e78c  lw          $a0, -0x1874($v0)
    ctx->pc = 0x44def4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961036)));
label_44def8:
    // 0x44def8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x44def8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44defc:
    // 0x44defc: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x44defcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_44df00:
    // 0x44df00: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x44df00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
label_44df04:
    // 0x44df04: 0x851818  mult        $v1, $a0, $a1
    ctx->pc = 0x44df04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_44df08:
    // 0x44df08: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x44df08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_44df0c:
    // 0x44df0c: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x44df0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_44df10:
    // 0x44df10: 0x16710009  bne         $s3, $s1, . + 4 + (0x9 << 2)
label_44df14:
    if (ctx->pc == 0x44DF14u) {
        ctx->pc = 0x44DF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DF10u;
        // 0x44df14: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44DF18u;
        goto label_44df18;
    }
    ctx->pc = 0x44DF10u;
    {
        const bool branch_taken_0x44df10 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 17));
        ctx->pc = 0x44DF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DF10u;
        // 0x44df14: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44df10) {
            ctx->pc = 0x44DF38u;
            goto label_44df38;
        }
    }
    ctx->pc = 0x44DF18u;
label_44df18:
    // 0x44df18: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x44df18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_44df1c:
    // 0x44df1c: 0x8c44e790  lw          $a0, -0x1870($v0)
    ctx->pc = 0x44df1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961040)));
label_44df20:
    // 0x44df20: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x44df20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44df24:
    // 0x44df24: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x44df24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_44df28:
    // 0x44df28: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x44df28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
label_44df2c:
    // 0x44df2c: 0x851818  mult        $v1, $a0, $a1
    ctx->pc = 0x44df2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_44df30:
    // 0x44df30: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x44df30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_44df34:
    // 0x44df34: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x44df34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_44df38:
    // 0x44df38: 0x16910009  bne         $s4, $s1, . + 4 + (0x9 << 2)
label_44df3c:
    if (ctx->pc == 0x44DF3Cu) {
        ctx->pc = 0x44DF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DF38u;
        // 0x44df3c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44DF40u;
        goto label_44df40;
    }
    ctx->pc = 0x44DF38u;
    {
        const bool branch_taken_0x44df38 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 17));
        ctx->pc = 0x44DF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DF38u;
        // 0x44df3c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44df38) {
            ctx->pc = 0x44DF60u;
            goto label_44df60;
        }
    }
    ctx->pc = 0x44DF40u;
label_44df40:
    // 0x44df40: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x44df40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_44df44:
    // 0x44df44: 0x8c44e794  lw          $a0, -0x186C($v0)
    ctx->pc = 0x44df44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961044)));
label_44df48:
    // 0x44df48: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x44df48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44df4c:
    // 0x44df4c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x44df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_44df50:
    // 0x44df50: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x44df50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
label_44df54:
    // 0x44df54: 0x851818  mult        $v1, $a0, $a1
    ctx->pc = 0x44df54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_44df58:
    // 0x44df58: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x44df58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
label_44df5c:
    // 0x44df5c: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x44df5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_44df60:
    // 0x44df60: 0x16b10009  bne         $s5, $s1, . + 4 + (0x9 << 2)
label_44df64:
    if (ctx->pc == 0x44DF64u) {
        ctx->pc = 0x44DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DF60u;
        // 0x44df64: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44DF68u;
        goto label_44df68;
    }
    ctx->pc = 0x44DF60u;
    {
        const bool branch_taken_0x44df60 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 17));
        ctx->pc = 0x44DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DF60u;
        // 0x44df64: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44df60) {
            ctx->pc = 0x44DF88u;
            goto label_44df88;
        }
    }
    ctx->pc = 0x44DF68u;
label_44df68:
    // 0x44df68: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x44df68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_44df6c:
    // 0x44df6c: 0x8c44e798  lw          $a0, -0x1868($v0)
    ctx->pc = 0x44df6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961048)));
label_44df70:
    // 0x44df70: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x44df70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44df74:
    // 0x44df74: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x44df74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_44df78:
    // 0x44df78: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x44df78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
label_44df7c:
    // 0x44df7c: 0x851818  mult        $v1, $a0, $a1
    ctx->pc = 0x44df7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_44df80:
    // 0x44df80: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x44df80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
label_44df84:
    // 0x44df84: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x44df84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_44df88:
    // 0x44df88: 0x16f10009  bne         $s7, $s1, . + 4 + (0x9 << 2)
label_44df8c:
    if (ctx->pc == 0x44DF8Cu) {
        ctx->pc = 0x44DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DF88u;
        // 0x44df8c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44DF90u;
        goto label_44df90;
    }
    ctx->pc = 0x44DF88u;
    {
        const bool branch_taken_0x44df88 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 17));
        ctx->pc = 0x44DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DF88u;
        // 0x44df8c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44df88) {
            ctx->pc = 0x44DFB0u;
            goto label_44dfb0;
        }
    }
    ctx->pc = 0x44DF90u;
label_44df90:
    // 0x44df90: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x44df90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_44df94:
    // 0x44df94: 0x8c44e79c  lw          $a0, -0x1864($v0)
    ctx->pc = 0x44df94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961052)));
label_44df98:
    // 0x44df98: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x44df98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44df9c:
    // 0x44df9c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x44df9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_44dfa0:
    // 0x44dfa0: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x44dfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
label_44dfa4:
    // 0x44dfa4: 0x851818  mult        $v1, $a0, $a1
    ctx->pc = 0x44dfa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_44dfa8:
    // 0x44dfa8: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x44dfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_44dfac:
    // 0x44dfac: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x44dfacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_44dfb0:
    // 0x44dfb0: 0x17d10009  bne         $fp, $s1, . + 4 + (0x9 << 2)
label_44dfb4:
    if (ctx->pc == 0x44DFB4u) {
        ctx->pc = 0x44DFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DFB0u;
        // 0x44dfb4: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44DFB8u;
        goto label_44dfb8;
    }
    ctx->pc = 0x44DFB0u;
    {
        const bool branch_taken_0x44dfb0 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 17));
        ctx->pc = 0x44DFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DFB0u;
        // 0x44dfb4: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44dfb0) {
            ctx->pc = 0x44DFD8u;
            goto label_44dfd8;
        }
    }
    ctx->pc = 0x44DFB8u;
label_44dfb8:
    // 0x44dfb8: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x44dfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_44dfbc:
    // 0x44dfbc: 0x8c44e7a0  lw          $a0, -0x1860($v0)
    ctx->pc = 0x44dfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961056)));
label_44dfc0:
    // 0x44dfc0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x44dfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44dfc4:
    // 0x44dfc4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x44dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_44dfc8:
    // 0x44dfc8: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x44dfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
label_44dfcc:
    // 0x44dfcc: 0x851818  mult        $v1, $a0, $a1
    ctx->pc = 0x44dfccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_44dfd0:
    // 0x44dfd0: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x44dfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
label_44dfd4:
    // 0x44dfd4: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x44dfd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_44dfd8:
    // 0x44dfd8: 0x15310009  bne         $t1, $s1, . + 4 + (0x9 << 2)
label_44dfdc:
    if (ctx->pc == 0x44DFDCu) {
        ctx->pc = 0x44DFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DFD8u;
        // 0x44dfdc: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44DFE0u;
        goto label_44dfe0;
    }
    ctx->pc = 0x44DFD8u;
    {
        const bool branch_taken_0x44dfd8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 17));
        ctx->pc = 0x44DFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44DFD8u;
        // 0x44dfdc: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44dfd8) {
            ctx->pc = 0x44E000u;
            goto label_44e000;
        }
    }
    ctx->pc = 0x44DFE0u;
label_44dfe0:
    // 0x44dfe0: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x44dfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_44dfe4:
    // 0x44dfe4: 0x8c44e7a4  lw          $a0, -0x185C($v0)
    ctx->pc = 0x44dfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961060)));
label_44dfe8:
    // 0x44dfe8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x44dfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44dfec:
    // 0x44dfec: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x44dfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_44dff0:
    // 0x44dff0: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x44dff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
label_44dff4:
    // 0x44dff4: 0x851818  mult        $v1, $a0, $a1
    ctx->pc = 0x44dff4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_44dff8:
    // 0x44dff8: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x44dff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_44dffc:
    // 0x44dffc: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x44dffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_44e000:
    // 0x44e000: 0x55510006  bnel        $t2, $s1, . + 4 + (0x6 << 2)
label_44e004:
    if (ctx->pc == 0x44E004u) {
        ctx->pc = 0x44E004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E000u;
        // 0x44e004: 0xae08000c  sw          $t0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E008u;
        goto label_44e008;
    }
    ctx->pc = 0x44E000u;
    {
        const bool branch_taken_0x44e000 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 17));
        if (branch_taken_0x44e000) {
            ctx->pc = 0x44E004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44E000u;
            // 0x44e004: 0xae08000c  sw          $t0, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44E01Cu;
            goto label_44e01c;
        }
    }
    ctx->pc = 0x44E008u;
label_44e008:
    // 0x44e008: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x44e008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_44e00c:
    // 0x44e00c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x44e00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_44e010:
    // 0x44e010: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x44e010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_44e014:
    // 0x44e014: 0xae030098  sw          $v1, 0x98($s0)
    ctx->pc = 0x44e014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
label_44e018:
    // 0x44e018: 0xae08000c  sw          $t0, 0xC($s0)
    ctx->pc = 0x44e018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 8));
label_44e01c:
    // 0x44e01c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x44e01cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44e020:
    // 0x44e020: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x44e020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_44e024:
    // 0x44e024: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x44e024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_44e028:
    // 0x44e028: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x44e028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44e02c:
    // 0x44e02c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x44e02cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_44e030:
    // 0x44e030: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x44e030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_44e034:
    // 0x44e034: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x44e034u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_44e038:
    // 0x44e038: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x44e038u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_44e03c:
    // 0x44e03c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x44e03cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_44e040:
    // 0x44e040: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x44e040u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_44e044:
    // 0x44e044: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x44e044u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_44e048:
    // 0x44e048: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x44e048u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_44e04c:
    // 0x44e04c: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x44e04cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_44e050:
    // 0x44e050: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x44e050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_44e054:
    // 0x44e054: 0x3e00008  jr          $ra
label_44e058:
    if (ctx->pc == 0x44E058u) {
        ctx->pc = 0x44E058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E054u;
        // 0x44e058: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E05Cu;
        goto label_44e05c;
    }
    ctx->pc = 0x44E054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44E058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E054u;
        // 0x44e058: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44E05Cu;
label_44e05c:
    // 0x44e05c: 0x0  nop
    ctx->pc = 0x44e05cu;
    // NOP
    ctx->pc = 0x44e060u;
}
