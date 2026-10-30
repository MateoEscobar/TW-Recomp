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

// Function: sub_0040DBB8
// Address: 0x40dbb8 - 0x40e0b8
void sub_0040DBB8_0x40dbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040DBB8_0x40dbb8");
#endif

    switch (ctx->pc) {
        case 0x40dbb8u: goto label_40dbb8;
        case 0x40dbbcu: goto label_40dbbc;
        case 0x40dbc0u: goto label_40dbc0;
        case 0x40dbc4u: goto label_40dbc4;
        case 0x40dbc8u: goto label_40dbc8;
        case 0x40dbccu: goto label_40dbcc;
        case 0x40dbd0u: goto label_40dbd0;
        case 0x40dbd4u: goto label_40dbd4;
        case 0x40dbd8u: goto label_40dbd8;
        case 0x40dbdcu: goto label_40dbdc;
        case 0x40dbe0u: goto label_40dbe0;
        case 0x40dbe4u: goto label_40dbe4;
        case 0x40dbe8u: goto label_40dbe8;
        case 0x40dbecu: goto label_40dbec;
        case 0x40dbf0u: goto label_40dbf0;
        case 0x40dbf4u: goto label_40dbf4;
        case 0x40dbf8u: goto label_40dbf8;
        case 0x40dbfcu: goto label_40dbfc;
        case 0x40dc00u: goto label_40dc00;
        case 0x40dc04u: goto label_40dc04;
        case 0x40dc08u: goto label_40dc08;
        case 0x40dc0cu: goto label_40dc0c;
        case 0x40dc10u: goto label_40dc10;
        case 0x40dc14u: goto label_40dc14;
        case 0x40dc18u: goto label_40dc18;
        case 0x40dc1cu: goto label_40dc1c;
        case 0x40dc20u: goto label_40dc20;
        case 0x40dc24u: goto label_40dc24;
        case 0x40dc28u: goto label_40dc28;
        case 0x40dc2cu: goto label_40dc2c;
        case 0x40dc30u: goto label_40dc30;
        case 0x40dc34u: goto label_40dc34;
        case 0x40dc38u: goto label_40dc38;
        case 0x40dc3cu: goto label_40dc3c;
        case 0x40dc40u: goto label_40dc40;
        case 0x40dc44u: goto label_40dc44;
        case 0x40dc48u: goto label_40dc48;
        case 0x40dc4cu: goto label_40dc4c;
        case 0x40dc50u: goto label_40dc50;
        case 0x40dc54u: goto label_40dc54;
        case 0x40dc58u: goto label_40dc58;
        case 0x40dc5cu: goto label_40dc5c;
        case 0x40dc60u: goto label_40dc60;
        case 0x40dc64u: goto label_40dc64;
        case 0x40dc68u: goto label_40dc68;
        case 0x40dc6cu: goto label_40dc6c;
        case 0x40dc70u: goto label_40dc70;
        case 0x40dc74u: goto label_40dc74;
        case 0x40dc78u: goto label_40dc78;
        case 0x40dc7cu: goto label_40dc7c;
        case 0x40dc80u: goto label_40dc80;
        case 0x40dc84u: goto label_40dc84;
        case 0x40dc88u: goto label_40dc88;
        case 0x40dc8cu: goto label_40dc8c;
        case 0x40dc90u: goto label_40dc90;
        case 0x40dc94u: goto label_40dc94;
        case 0x40dc98u: goto label_40dc98;
        case 0x40dc9cu: goto label_40dc9c;
        case 0x40dca0u: goto label_40dca0;
        case 0x40dca4u: goto label_40dca4;
        case 0x40dca8u: goto label_40dca8;
        case 0x40dcacu: goto label_40dcac;
        case 0x40dcb0u: goto label_40dcb0;
        case 0x40dcb4u: goto label_40dcb4;
        case 0x40dcb8u: goto label_40dcb8;
        case 0x40dcbcu: goto label_40dcbc;
        case 0x40dcc0u: goto label_40dcc0;
        case 0x40dcc4u: goto label_40dcc4;
        case 0x40dcc8u: goto label_40dcc8;
        case 0x40dcccu: goto label_40dccc;
        case 0x40dcd0u: goto label_40dcd0;
        case 0x40dcd4u: goto label_40dcd4;
        case 0x40dcd8u: goto label_40dcd8;
        case 0x40dcdcu: goto label_40dcdc;
        case 0x40dce0u: goto label_40dce0;
        case 0x40dce4u: goto label_40dce4;
        case 0x40dce8u: goto label_40dce8;
        case 0x40dcecu: goto label_40dcec;
        case 0x40dcf0u: goto label_40dcf0;
        case 0x40dcf4u: goto label_40dcf4;
        case 0x40dcf8u: goto label_40dcf8;
        case 0x40dcfcu: goto label_40dcfc;
        case 0x40dd00u: goto label_40dd00;
        case 0x40dd04u: goto label_40dd04;
        case 0x40dd08u: goto label_40dd08;
        case 0x40dd0cu: goto label_40dd0c;
        case 0x40dd10u: goto label_40dd10;
        case 0x40dd14u: goto label_40dd14;
        case 0x40dd18u: goto label_40dd18;
        case 0x40dd1cu: goto label_40dd1c;
        case 0x40dd20u: goto label_40dd20;
        case 0x40dd24u: goto label_40dd24;
        case 0x40dd28u: goto label_40dd28;
        case 0x40dd2cu: goto label_40dd2c;
        case 0x40dd30u: goto label_40dd30;
        case 0x40dd34u: goto label_40dd34;
        case 0x40dd38u: goto label_40dd38;
        case 0x40dd3cu: goto label_40dd3c;
        case 0x40dd40u: goto label_40dd40;
        case 0x40dd44u: goto label_40dd44;
        case 0x40dd48u: goto label_40dd48;
        case 0x40dd4cu: goto label_40dd4c;
        case 0x40dd50u: goto label_40dd50;
        case 0x40dd54u: goto label_40dd54;
        case 0x40dd58u: goto label_40dd58;
        case 0x40dd5cu: goto label_40dd5c;
        case 0x40dd60u: goto label_40dd60;
        case 0x40dd64u: goto label_40dd64;
        case 0x40dd68u: goto label_40dd68;
        case 0x40dd6cu: goto label_40dd6c;
        case 0x40dd70u: goto label_40dd70;
        case 0x40dd74u: goto label_40dd74;
        case 0x40dd78u: goto label_40dd78;
        case 0x40dd7cu: goto label_40dd7c;
        case 0x40dd80u: goto label_40dd80;
        case 0x40dd84u: goto label_40dd84;
        case 0x40dd88u: goto label_40dd88;
        case 0x40dd8cu: goto label_40dd8c;
        case 0x40dd90u: goto label_40dd90;
        case 0x40dd94u: goto label_40dd94;
        case 0x40dd98u: goto label_40dd98;
        case 0x40dd9cu: goto label_40dd9c;
        case 0x40dda0u: goto label_40dda0;
        case 0x40dda4u: goto label_40dda4;
        case 0x40dda8u: goto label_40dda8;
        case 0x40ddacu: goto label_40ddac;
        case 0x40ddb0u: goto label_40ddb0;
        case 0x40ddb4u: goto label_40ddb4;
        case 0x40ddb8u: goto label_40ddb8;
        case 0x40ddbcu: goto label_40ddbc;
        case 0x40ddc0u: goto label_40ddc0;
        case 0x40ddc4u: goto label_40ddc4;
        case 0x40ddc8u: goto label_40ddc8;
        case 0x40ddccu: goto label_40ddcc;
        case 0x40ddd0u: goto label_40ddd0;
        case 0x40ddd4u: goto label_40ddd4;
        case 0x40ddd8u: goto label_40ddd8;
        case 0x40dddcu: goto label_40dddc;
        case 0x40dde0u: goto label_40dde0;
        case 0x40dde4u: goto label_40dde4;
        case 0x40dde8u: goto label_40dde8;
        case 0x40ddecu: goto label_40ddec;
        case 0x40ddf0u: goto label_40ddf0;
        case 0x40ddf4u: goto label_40ddf4;
        case 0x40ddf8u: goto label_40ddf8;
        case 0x40ddfcu: goto label_40ddfc;
        case 0x40de00u: goto label_40de00;
        case 0x40de04u: goto label_40de04;
        case 0x40de08u: goto label_40de08;
        case 0x40de0cu: goto label_40de0c;
        case 0x40de10u: goto label_40de10;
        case 0x40de14u: goto label_40de14;
        case 0x40de18u: goto label_40de18;
        case 0x40de1cu: goto label_40de1c;
        case 0x40de20u: goto label_40de20;
        case 0x40de24u: goto label_40de24;
        case 0x40de28u: goto label_40de28;
        case 0x40de2cu: goto label_40de2c;
        case 0x40de30u: goto label_40de30;
        case 0x40de34u: goto label_40de34;
        case 0x40de38u: goto label_40de38;
        case 0x40de3cu: goto label_40de3c;
        case 0x40de40u: goto label_40de40;
        case 0x40de44u: goto label_40de44;
        case 0x40de48u: goto label_40de48;
        case 0x40de4cu: goto label_40de4c;
        case 0x40de50u: goto label_40de50;
        case 0x40de54u: goto label_40de54;
        case 0x40de58u: goto label_40de58;
        case 0x40de5cu: goto label_40de5c;
        case 0x40de60u: goto label_40de60;
        case 0x40de64u: goto label_40de64;
        case 0x40de68u: goto label_40de68;
        case 0x40de6cu: goto label_40de6c;
        case 0x40de70u: goto label_40de70;
        case 0x40de74u: goto label_40de74;
        case 0x40de78u: goto label_40de78;
        case 0x40de7cu: goto label_40de7c;
        case 0x40de80u: goto label_40de80;
        case 0x40de84u: goto label_40de84;
        case 0x40de88u: goto label_40de88;
        case 0x40de8cu: goto label_40de8c;
        case 0x40de90u: goto label_40de90;
        case 0x40de94u: goto label_40de94;
        case 0x40de98u: goto label_40de98;
        case 0x40de9cu: goto label_40de9c;
        case 0x40dea0u: goto label_40dea0;
        case 0x40dea4u: goto label_40dea4;
        case 0x40dea8u: goto label_40dea8;
        case 0x40deacu: goto label_40deac;
        case 0x40deb0u: goto label_40deb0;
        case 0x40deb4u: goto label_40deb4;
        case 0x40deb8u: goto label_40deb8;
        case 0x40debcu: goto label_40debc;
        case 0x40dec0u: goto label_40dec0;
        case 0x40dec4u: goto label_40dec4;
        case 0x40dec8u: goto label_40dec8;
        case 0x40deccu: goto label_40decc;
        case 0x40ded0u: goto label_40ded0;
        case 0x40ded4u: goto label_40ded4;
        case 0x40ded8u: goto label_40ded8;
        case 0x40dedcu: goto label_40dedc;
        case 0x40dee0u: goto label_40dee0;
        case 0x40dee4u: goto label_40dee4;
        case 0x40dee8u: goto label_40dee8;
        case 0x40deecu: goto label_40deec;
        case 0x40def0u: goto label_40def0;
        case 0x40def4u: goto label_40def4;
        case 0x40def8u: goto label_40def8;
        case 0x40defcu: goto label_40defc;
        case 0x40df00u: goto label_40df00;
        case 0x40df04u: goto label_40df04;
        case 0x40df08u: goto label_40df08;
        case 0x40df0cu: goto label_40df0c;
        case 0x40df10u: goto label_40df10;
        case 0x40df14u: goto label_40df14;
        case 0x40df18u: goto label_40df18;
        case 0x40df1cu: goto label_40df1c;
        case 0x40df20u: goto label_40df20;
        case 0x40df24u: goto label_40df24;
        case 0x40df28u: goto label_40df28;
        case 0x40df2cu: goto label_40df2c;
        case 0x40df30u: goto label_40df30;
        case 0x40df34u: goto label_40df34;
        case 0x40df38u: goto label_40df38;
        case 0x40df3cu: goto label_40df3c;
        case 0x40df40u: goto label_40df40;
        case 0x40df44u: goto label_40df44;
        case 0x40df48u: goto label_40df48;
        case 0x40df4cu: goto label_40df4c;
        case 0x40df50u: goto label_40df50;
        case 0x40df54u: goto label_40df54;
        case 0x40df58u: goto label_40df58;
        case 0x40df5cu: goto label_40df5c;
        case 0x40df60u: goto label_40df60;
        case 0x40df64u: goto label_40df64;
        case 0x40df68u: goto label_40df68;
        case 0x40df6cu: goto label_40df6c;
        case 0x40df70u: goto label_40df70;
        case 0x40df74u: goto label_40df74;
        case 0x40df78u: goto label_40df78;
        case 0x40df7cu: goto label_40df7c;
        case 0x40df80u: goto label_40df80;
        case 0x40df84u: goto label_40df84;
        case 0x40df88u: goto label_40df88;
        case 0x40df8cu: goto label_40df8c;
        case 0x40df90u: goto label_40df90;
        case 0x40df94u: goto label_40df94;
        case 0x40df98u: goto label_40df98;
        case 0x40df9cu: goto label_40df9c;
        case 0x40dfa0u: goto label_40dfa0;
        case 0x40dfa4u: goto label_40dfa4;
        case 0x40dfa8u: goto label_40dfa8;
        case 0x40dfacu: goto label_40dfac;
        case 0x40dfb0u: goto label_40dfb0;
        case 0x40dfb4u: goto label_40dfb4;
        case 0x40dfb8u: goto label_40dfb8;
        case 0x40dfbcu: goto label_40dfbc;
        case 0x40dfc0u: goto label_40dfc0;
        case 0x40dfc4u: goto label_40dfc4;
        case 0x40dfc8u: goto label_40dfc8;
        case 0x40dfccu: goto label_40dfcc;
        case 0x40dfd0u: goto label_40dfd0;
        case 0x40dfd4u: goto label_40dfd4;
        case 0x40dfd8u: goto label_40dfd8;
        case 0x40dfdcu: goto label_40dfdc;
        case 0x40dfe0u: goto label_40dfe0;
        case 0x40dfe4u: goto label_40dfe4;
        case 0x40dfe8u: goto label_40dfe8;
        case 0x40dfecu: goto label_40dfec;
        case 0x40dff0u: goto label_40dff0;
        case 0x40dff4u: goto label_40dff4;
        case 0x40dff8u: goto label_40dff8;
        case 0x40dffcu: goto label_40dffc;
        case 0x40e000u: goto label_40e000;
        case 0x40e004u: goto label_40e004;
        case 0x40e008u: goto label_40e008;
        case 0x40e00cu: goto label_40e00c;
        case 0x40e010u: goto label_40e010;
        case 0x40e014u: goto label_40e014;
        case 0x40e018u: goto label_40e018;
        case 0x40e01cu: goto label_40e01c;
        case 0x40e020u: goto label_40e020;
        case 0x40e024u: goto label_40e024;
        case 0x40e028u: goto label_40e028;
        case 0x40e02cu: goto label_40e02c;
        case 0x40e030u: goto label_40e030;
        case 0x40e034u: goto label_40e034;
        case 0x40e038u: goto label_40e038;
        case 0x40e03cu: goto label_40e03c;
        case 0x40e040u: goto label_40e040;
        case 0x40e044u: goto label_40e044;
        case 0x40e048u: goto label_40e048;
        case 0x40e04cu: goto label_40e04c;
        case 0x40e050u: goto label_40e050;
        case 0x40e054u: goto label_40e054;
        case 0x40e058u: goto label_40e058;
        case 0x40e05cu: goto label_40e05c;
        case 0x40e060u: goto label_40e060;
        case 0x40e064u: goto label_40e064;
        case 0x40e068u: goto label_40e068;
        case 0x40e06cu: goto label_40e06c;
        case 0x40e070u: goto label_40e070;
        case 0x40e074u: goto label_40e074;
        case 0x40e078u: goto label_40e078;
        case 0x40e07cu: goto label_40e07c;
        case 0x40e080u: goto label_40e080;
        case 0x40e084u: goto label_40e084;
        case 0x40e088u: goto label_40e088;
        case 0x40e08cu: goto label_40e08c;
        case 0x40e090u: goto label_40e090;
        case 0x40e094u: goto label_40e094;
        case 0x40e098u: goto label_40e098;
        case 0x40e09cu: goto label_40e09c;
        case 0x40e0a0u: goto label_40e0a0;
        case 0x40e0a4u: goto label_40e0a4;
        case 0x40e0a8u: goto label_40e0a8;
        case 0x40e0acu: goto label_40e0ac;
        case 0x40e0b0u: goto label_40e0b0;
        case 0x40e0b4u: goto label_40e0b4;
        default: break;
    }

    ctx->pc = 0x40dbb8u;

label_40dbb8:
    // 0x40dbb8: 0x27bdfd50  addiu       $sp, $sp, -0x2B0
    ctx->pc = 0x40dbb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966608));
label_40dbbc:
    // 0x40dbbc: 0xafa50200  sw          $a1, 0x200($sp)
    ctx->pc = 0x40dbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 5));
label_40dbc0:
    // 0x40dbc0: 0x7fb50250  sq          $s5, 0x250($sp)
    ctx->pc = 0x40dbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 21));
label_40dbc4:
    // 0x40dbc4: 0x7fb20280  sq          $s2, 0x280($sp)
    ctx->pc = 0x40dbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 18));
label_40dbc8:
    // 0x40dbc8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x40dbc8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_40dbcc:
    // 0x40dbcc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x40dbccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_40dbd0:
    // 0x40dbd0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x40dbd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40dbd4:
    // 0x40dbd4: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40dbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_40dbd8:
    // 0x40dbd8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40dbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_40dbdc:
    // 0x40dbdc: 0x7fb002a0  sq          $s0, 0x2A0($sp)
    ctx->pc = 0x40dbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 16));
label_40dbe0:
    // 0x40dbe0: 0x24c68b28  addiu       $a2, $a2, -0x74D8
    ctx->pc = 0x40dbe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937384));
label_40dbe4:
    // 0x40dbe4: 0x7fb10290  sq          $s1, 0x290($sp)
    ctx->pc = 0x40dbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 17));
label_40dbe8:
    // 0x40dbe8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x40dbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_40dbec:
    // 0x40dbec: 0x7fb30270  sq          $s3, 0x270($sp)
    ctx->pc = 0x40dbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 19));
label_40dbf0:
    // 0x40dbf0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x40dbf0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_40dbf4:
    // 0x40dbf4: 0x7fb40260  sq          $s4, 0x260($sp)
    ctx->pc = 0x40dbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 20));
label_40dbf8:
    // 0x40dbf8: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x40dbf8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_40dbfc:
    // 0x40dbfc: 0x7fb60240  sq          $s6, 0x240($sp)
    ctx->pc = 0x40dbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 22));
label_40dc00:
    // 0x40dc00: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x40dc00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40dc04:
    // 0x40dc04: 0x7fb70230  sq          $s7, 0x230($sp)
    ctx->pc = 0x40dc04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 23));
label_40dc08:
    // 0x40dc08: 0x7fbe0220  sq          $fp, 0x220($sp)
    ctx->pc = 0x40dc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 30));
label_40dc0c:
    // 0x40dc0c: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x40dc0cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40dc10:
    // 0x40dc10: 0xffbf0210  sd          $ra, 0x210($sp)
    ctx->pc = 0x40dc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 31));
label_40dc14:
    // 0x40dc14: 0xc10ca04  jal         func_432810
label_40dc18:
    if (ctx->pc == 0x40DC18u) {
        ctx->pc = 0x40DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DC14u;
        // 0x40dc18: 0x3c1e0051  lui         $fp, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DC1Cu;
        goto label_40dc1c;
    }
    ctx->pc = 0x40DC14u;
    SET_GPR_U32(ctx, 31, 0x40DC1Cu);
    ctx->pc = 0x40DC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40DC14u;
    // 0x40dc18: 0x3c1e0051  lui         $fp, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x40DC14u, 0x40DC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40DC1Cu;
label_40dc1c:
    // 0x40dc1c: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x40dc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_40dc20:
    // 0x40dc20: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x40dc20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_40dc24:
    // 0x40dc24: 0xc10c978  jal         func_4325E0
label_40dc28:
    if (ctx->pc == 0x40DC28u) {
        ctx->pc = 0x40DC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DC24u;
        // 0x40dc28: 0x24848b30  addiu       $a0, $a0, -0x74D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DC2Cu;
        goto label_40dc2c;
    }
    ctx->pc = 0x40DC24u;
    SET_GPR_U32(ctx, 31, 0x40DC2Cu);
    ctx->pc = 0x40DC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40DC24u;
    // 0x40dc28: 0x24848b30  addiu       $a0, $a0, -0x74D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4325E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4325E0u, 0x40DC24u, 0x40DC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40DC2Cu;
label_40dc2c:
    // 0x40dc2c: 0x8fc2b788  lw          $v0, -0x4878($fp)
    ctx->pc = 0x40dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294948744)));
label_40dc30:
    // 0x40dc30: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x40dc30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_40dc34:
    // 0x40dc34: 0x8c460090  lw          $a2, 0x90($v0)
    ctx->pc = 0x40dc34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_40dc38:
    // 0x40dc38: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x40dc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_40dc3c:
    // 0x40dc3c: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x40dc3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_40dc40:
    // 0x40dc40: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x40dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_40dc44:
    // 0x40dc44: 0x40f809  jalr        $v0
label_40dc48:
    if (ctx->pc == 0x40DC48u) {
        ctx->pc = 0x40DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DC44u;
        // 0x40dc48: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DC4Cu;
        goto label_40dc4c;
    }
    ctx->pc = 0x40DC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40DC4Cu);
        ctx->pc = 0x40DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DC44u;
        // 0x40dc48: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DC44u, 0x40DC4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40DC4Cu;
label_40dc4c:
    // 0x40dc4c: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x40dc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_40dc50:
    // 0x40dc50: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x40dc50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40dc54:
    // 0x40dc54: 0x8e25b9c8  lw          $a1, -0x4638($s1)
    ctx->pc = 0x40dc54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949320)));
label_40dc58:
    // 0x40dc58: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x40dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_40dc5c:
    // 0x40dc5c: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x40dc5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_40dc60:
    // 0x40dc60: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x40dc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_40dc64:
    // 0x40dc64: 0x60f809  jalr        $v1
label_40dc68:
    if (ctx->pc == 0x40DC68u) {
        ctx->pc = 0x40DC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DC64u;
        // 0x40dc68: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DC6Cu;
        goto label_40dc6c;
    }
    ctx->pc = 0x40DC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40DC6Cu);
        ctx->pc = 0x40DC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DC64u;
        // 0x40dc68: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DC64u, 0x40DC6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40DC6Cu;
label_40dc6c:
    // 0x40dc6c: 0x8e0a27e4  lw          $t2, 0x27E4($s0)
    ctx->pc = 0x40dc6cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_40dc70:
    // 0x40dc70: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x40dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_40dc74:
    // 0x40dc74: 0x24568a88  addiu       $s6, $v0, -0x7578
    ctx->pc = 0x40dc74u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937224));
label_40dc78:
    // 0x40dc78: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40dc78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_40dc7c:
    // 0x40dc7c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x40dc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_40dc80:
    // 0x40dc80: 0x24a58910  addiu       $a1, $a1, -0x76F0
    ctx->pc = 0x40dc80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936848));
label_40dc84:
    // 0x40dc84: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x40dc84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_40dc88:
    // 0x40dc88: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x40dc88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_40dc8c:
    // 0x40dc8c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x40dc8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_40dc90:
    // 0x40dc90: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x40dc90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_40dc94:
    // 0x40dc94: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x40dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_40dc98:
    // 0x40dc98: 0x240900ea  addiu       $t1, $zero, 0xEA
    ctx->pc = 0x40dc98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
label_40dc9c:
    // 0x40dc9c: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x40dc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_40dca0:
    // 0x40dca0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x40dca0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40dca4:
    // 0x40dca4: 0x40f809  jalr        $v0
label_40dca8:
    if (ctx->pc == 0x40DCA8u) {
        ctx->pc = 0x40DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DCA4u;
        // 0x40dca8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DCACu;
        goto label_40dcac;
    }
    ctx->pc = 0x40DCA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40DCACu);
        ctx->pc = 0x40DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DCA4u;
        // 0x40dca8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DCA4u, 0x40DCACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40DCACu;
label_40dcac:
    // 0x40dcac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x40dcacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40dcb0:
    // 0x40dcb0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_40dcb4:
    if (ctx->pc == 0x40DCB4u) {
        ctx->pc = 0x40DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DCB0u;
        // 0x40dcb4: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DCB8u;
        goto label_40dcb8;
    }
    ctx->pc = 0x40DCB0u;
    {
        const bool branch_taken_0x40dcb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x40DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DCB0u;
        // 0x40dcb4: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40dcb0) {
            ctx->pc = 0x40DCC0u;
            goto label_40dcc0;
        }
    }
    ctx->pc = 0x40DCB8u;
label_40dcb8:
    // 0x40dcb8: 0x24424370  addiu       $v0, $v0, 0x4370
    ctx->pc = 0x40dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17264));
label_40dcbc:
    // 0x40dcbc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x40dcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_40dcc0:
    // 0x40dcc0: 0x24060067  addiu       $a2, $zero, 0x67
    ctx->pc = 0x40dcc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
label_40dcc4:
    // 0x40dcc4: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x40dcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_40dcc8:
    // 0x40dcc8: 0x2863018  mult        $a2, $s4, $a2
    ctx->pc = 0x40dcc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_40dccc:
    // 0x40dccc: 0x3c080004  lui         $t0, 0x4
    ctx->pc = 0x40dcccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4 << 16));
label_40dcd0:
    // 0x40dcd0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_40dcd4:
    if (ctx->pc == 0x40DCD4u) {
        ctx->pc = 0x40DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DCD0u;
        // 0x40dcd4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DCD8u;
        goto label_40dcd8;
    }
    ctx->pc = 0x40DCD0u;
    {
        const bool branch_taken_0x40dcd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x40dcd0) {
            ctx->pc = 0x40DCD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40DCD0u;
            // 0x40dcd4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x40DCD8u;
            goto label_40dcd8;
        }
    }
    ctx->pc = 0x40DCD8u;
label_40dcd8:
    // 0x40dcd8: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x40dcd8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
label_40dcdc:
    // 0x40dcdc: 0x26108b48  addiu       $s0, $s0, -0x74B8
    ctx->pc = 0x40dcdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294937416));
label_40dce0:
    // 0x40dce0: 0x8ee5b9c8  lw          $a1, -0x4638($s7)
    ctx->pc = 0x40dce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949320)));
label_40dce4:
    // 0x40dce4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40dce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40dce8:
    // 0x40dce8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x40dce8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40dcec:
    // 0x40dcec: 0xc3001b  divu        $zero, $a2, $v1
    ctx->pc = 0x40dcecu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
label_40dcf0:
    // 0x40dcf0: 0x3012  mflo        $a2
    ctx->pc = 0x40dcf0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_40dcf4:
    // 0x40dcf4: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x40dcf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_40dcf8:
    // 0x40dcf8: 0xc0ce108  jal         func_338420
label_40dcfc:
    if (ctx->pc == 0x40DCFCu) {
        ctx->pc = 0x40DCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DCF8u;
        // 0x40dcfc: 0x102300b  movn        $a2, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DD00u;
        goto label_40dd00;
    }
    ctx->pc = 0x40DCF8u;
    SET_GPR_U32(ctx, 31, 0x40DD00u);
    ctx->pc = 0x40DCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40DCF8u;
    // 0x40dcfc: 0x102300b  movn        $a2, $t0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338420u, 0x40DCF8u, 0x40DD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40DD00u;
label_40dd00:
    // 0x40dd00: 0x8e6827e4  lw          $t0, 0x27E4($s3)
    ctx->pc = 0x40dd00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_40dd04:
    // 0x40dd04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40dd04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40dd08:
    // 0x40dd08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x40dd08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40dd0c:
    // 0x40dd0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40dd0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40dd10:
    // 0x40dd10: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x40dd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_40dd14:
    // 0x40dd14: 0x846400d8  lh          $a0, 0xD8($v1)
    ctx->pc = 0x40dd14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 216)));
label_40dd18:
    // 0x40dd18: 0x8c6200dc  lw          $v0, 0xDC($v1)
    ctx->pc = 0x40dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
label_40dd1c:
    // 0x40dd1c: 0x40f809  jalr        $v0
label_40dd20:
    if (ctx->pc == 0x40DD20u) {
        ctx->pc = 0x40DD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DD1Cu;
        // 0x40dd20: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DD24u;
        goto label_40dd24;
    }
    ctx->pc = 0x40DD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40DD24u);
        ctx->pc = 0x40DD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DD1Cu;
        // 0x40dd20: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DD1Cu, 0x40DD24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40DD24u;
label_40dd24:
    // 0x40dd24: 0x8e6827e4  lw          $t0, 0x27E4($s3)
    ctx->pc = 0x40dd24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_40dd28:
    // 0x40dd28: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x40dd28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40dd2c:
    // 0x40dd2c: 0xae420038  sw          $v0, 0x38($s2)
    ctx->pc = 0x40dd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
label_40dd30:
    // 0x40dd30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40dd30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40dd34:
    // 0x40dd34: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x40dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_40dd38:
    // 0x40dd38: 0x8ee7b9c8  lw          $a3, -0x4638($s7)
    ctx->pc = 0x40dd38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949320)));
label_40dd3c:
    // 0x40dd3c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x40dd3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_40dd40:
    // 0x40dd40: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x40dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_40dd44:
    // 0x40dd44: 0x60f809  jalr        $v1
label_40dd48:
    if (ctx->pc == 0x40DD48u) {
        ctx->pc = 0x40DD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DD44u;
        // 0x40dd48: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DD4Cu;
        goto label_40dd4c;
    }
    ctx->pc = 0x40DD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40DD4Cu);
        ctx->pc = 0x40DD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DD44u;
        // 0x40dd48: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DD44u, 0x40DD4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40DD4Cu;
label_40dd4c:
    // 0x40dd4c: 0x8e6627e4  lw          $a2, 0x27E4($s3)
    ctx->pc = 0x40dd4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_40dd50:
    // 0x40dd50: 0x8ee5b9c8  lw          $a1, -0x4638($s7)
    ctx->pc = 0x40dd50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949320)));
label_40dd54:
    // 0x40dd54: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x40dd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_40dd58:
    // 0x40dd58: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x40dd58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_40dd5c:
    // 0x40dd5c: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x40dd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_40dd60:
    // 0x40dd60: 0x60f809  jalr        $v1
label_40dd64:
    if (ctx->pc == 0x40DD64u) {
        ctx->pc = 0x40DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DD60u;
        // 0x40dd64: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DD68u;
        goto label_40dd68;
    }
    ctx->pc = 0x40DD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40DD68u);
        ctx->pc = 0x40DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DD60u;
        // 0x40dd64: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DD60u, 0x40DD68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40DD68u;
label_40dd68:
    // 0x40dd68: 0x8e6627e4  lw          $a2, 0x27E4($s3)
    ctx->pc = 0x40dd68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_40dd6c:
    // 0x40dd6c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40dd70:
    // 0x40dd70: 0x8c45b9b8  lw          $a1, -0x4648($v0)
    ctx->pc = 0x40dd70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949304)));
label_40dd74:
    // 0x40dd74: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x40dd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_40dd78:
    // 0x40dd78: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x40dd78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_40dd7c:
    // 0x40dd7c: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x40dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_40dd80:
    // 0x40dd80: 0x40f809  jalr        $v0
label_40dd84:
    if (ctx->pc == 0x40DD84u) {
        ctx->pc = 0x40DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DD80u;
        // 0x40dd84: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DD88u;
        goto label_40dd88;
    }
    ctx->pc = 0x40DD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40DD88u);
        ctx->pc = 0x40DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DD80u;
        // 0x40dd84: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DD80u, 0x40DD88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40DD88u;
label_40dd88:
    // 0x40dd88: 0x16a00088  bnez        $s5, . + 4 + (0x88 << 2)
label_40dd8c:
    if (ctx->pc == 0x40DD8Cu) {
        ctx->pc = 0x40DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DD88u;
        // 0x40dd8c: 0x8e6627e4  lw          $a2, 0x27E4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DD90u;
        goto label_40dd90;
    }
    ctx->pc = 0x40DD88u;
    {
        const bool branch_taken_0x40dd88 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x40DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DD88u;
        // 0x40dd8c: 0x8e6627e4  lw          $a2, 0x27E4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40dd88) {
            ctx->pc = 0x40DFACu;
            goto label_40dfac;
        }
    }
    ctx->pc = 0x40DD90u;
label_40dd90:
    // 0x40dd90: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x40dd90u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_40dd94:
    // 0x40dd94: 0x24140084  addiu       $s4, $zero, 0x84
    ctx->pc = 0x40dd94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_40dd98:
    // 0x40dd98: 0x8e22489c  lw          $v0, 0x489C($s1)
    ctx->pc = 0x40dd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_40dd9c:
    // 0x40dd9c: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x40dd9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_40dda0:
    // 0x40dda0: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40dda0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_40dda4:
    // 0x40dda4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40dda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40dda8:
    // 0x40dda8: 0x944756dc  lhu         $a3, 0x56DC($v0)
    ctx->pc = 0x40dda8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22236)));
label_40ddac:
    // 0x40ddac: 0x24c68b60  addiu       $a2, $a2, -0x74A0
    ctx->pc = 0x40ddacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937440));
label_40ddb0:
    // 0x40ddb0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x40ddb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_40ddb4:
    // 0x40ddb4: 0xf41818  mult        $v1, $a3, $s4
    ctx->pc = 0x40ddb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_40ddb8:
    // 0x40ddb8: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x40ddb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_40ddbc:
    // 0x40ddbc: 0xc10ca04  jal         func_432810
label_40ddc0:
    if (ctx->pc == 0x40DDC0u) {
        ctx->pc = 0x40DDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DDBCu;
        // 0x40ddc0: 0x24e7150d  addiu       $a3, $a3, 0x150D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5389));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DDC4u;
        goto label_40ddc4;
    }
    ctx->pc = 0x40DDBCu;
    SET_GPR_U32(ctx, 31, 0x40DDC4u);
    ctx->pc = 0x40DDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40DDBCu;
    // 0x40ddc0: 0x24e7150d  addiu       $a3, $a3, 0x150D (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5389));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x40DDBCu, 0x40DDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40DDC4u;
label_40ddc4:
    // 0x40ddc4: 0x8fc4b788  lw          $a0, -0x4878($fp)
    ctx->pc = 0x40ddc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294948744)));
label_40ddc8:
    // 0x40ddc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40ddc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40ddcc:
    // 0x40ddcc: 0x8c860090  lw          $a2, 0x90($a0)
    ctx->pc = 0x40ddccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_40ddd0:
    // 0x40ddd0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x40ddd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_40ddd4:
    // 0x40ddd4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x40ddd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_40ddd8:
    // 0x40ddd8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x40ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_40dddc:
    // 0x40dddc: 0x40f809  jalr        $v0
label_40dde0:
    if (ctx->pc == 0x40DDE0u) {
        ctx->pc = 0x40DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DDDCu;
        // 0x40dde0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DDE4u;
        goto label_40dde4;
    }
    ctx->pc = 0x40DDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40DDE4u);
        ctx->pc = 0x40DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DDDCu;
        // 0x40dde0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DDDCu, 0x40DDE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40DDE4u;
label_40dde4:
    // 0x40dde4: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_40dde8:
    if (ctx->pc == 0x40DDE8u) {
        ctx->pc = 0x40DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DDE4u;
        // 0x40dde8: 0x8e6b27e4  lw          $t3, 0x27E4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DDECu;
        goto label_40ddec;
    }
    ctx->pc = 0x40DDE4u;
    {
        const bool branch_taken_0x40dde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DDE4u;
        // 0x40dde8: 0x8e6b27e4  lw          $t3, 0x27E4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40dde4) {
            ctx->pc = 0x40DF10u;
            goto label_40df10;
        }
    }
    ctx->pc = 0x40DDECu;
label_40ddec:
    // 0x40ddec: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x40ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_40ddf0:
    // 0x40ddf0: 0x24558b70  addiu       $s5, $v0, -0x7490
    ctx->pc = 0x40ddf0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937456));
label_40ddf4:
    // 0x40ddf4: 0x24062188  addiu       $a2, $zero, 0x2188
    ctx->pc = 0x40ddf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8584));
label_40ddf8:
    // 0x40ddf8: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x40ddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_40ddfc:
    // 0x40ddfc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x40ddfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_40de00:
    // 0x40de00: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x40de00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_40de04:
    // 0x40de04: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x40de04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_40de08:
    // 0x40de08: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x40de08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_40de0c:
    // 0x40de0c: 0x240900fb  addiu       $t1, $zero, 0xFB
    ctx->pc = 0x40de0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
label_40de10:
    // 0x40de10: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x40de10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_40de14:
    // 0x40de14: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x40de14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40de18:
    // 0x40de18: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x40de18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_40de1c:
    // 0x40de1c: 0x40f809  jalr        $v0
label_40de20:
    if (ctx->pc == 0x40DE20u) {
        ctx->pc = 0x40DE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DE1Cu;
        // 0x40de20: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DE24u;
        goto label_40de24;
    }
    ctx->pc = 0x40DE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40DE24u);
        ctx->pc = 0x40DE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DE1Cu;
        // 0x40de20: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DE1Cu, 0x40DE24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40DE24u;
label_40de24:
    // 0x40de24: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_40de28:
    if (ctx->pc == 0x40DE28u) {
        ctx->pc = 0x40DE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DE24u;
        // 0x40de28: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DE2Cu;
        goto label_40de2c;
    }
    ctx->pc = 0x40DE24u;
    {
        const bool branch_taken_0x40de24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40de24) {
            ctx->pc = 0x40DE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40DE24u;
            // 0x40de28: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40DE38u;
            goto label_40de38;
        }
    }
    ctx->pc = 0x40DE2Cu;
label_40de2c:
    // 0x40de2c: 0xc1040c2  jal         func_410308
label_40de30:
    if (ctx->pc == 0x40DE30u) {
        ctx->pc = 0x40DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DE2Cu;
        // 0x40de30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DE34u;
        goto label_40de34;
    }
    ctx->pc = 0x40DE2Cu;
    SET_GPR_U32(ctx, 31, 0x40DE34u);
    ctx->pc = 0x40DE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40DE2Cu;
    // 0x40de30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410308u, 0x40DE2Cu, 0x40DE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40DE34u;
label_40de34:
    // 0x40de34: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x40de34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
label_40de38:
    // 0x40de38: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40de38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_40de3c:
    // 0x40de3c: 0x8e22489c  lw          $v0, 0x489C($s1)
    ctx->pc = 0x40de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_40de40:
    // 0x40de40: 0x24c68b78  addiu       $a2, $a2, -0x7488
    ctx->pc = 0x40de40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937464));
label_40de44:
    // 0x40de44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40de44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40de48:
    // 0x40de48: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x40de48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_40de4c:
    // 0x40de4c: 0x944756dc  lhu         $a3, 0x56DC($v0)
    ctx->pc = 0x40de4cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22236)));
label_40de50:
    // 0x40de50: 0xf41818  mult        $v1, $a3, $s4
    ctx->pc = 0x40de50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_40de54:
    // 0x40de54: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x40de54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_40de58:
    // 0x40de58: 0xc10ca04  jal         func_432810
label_40de5c:
    if (ctx->pc == 0x40DE5Cu) {
        ctx->pc = 0x40DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DE58u;
        // 0x40de5c: 0x24e7150d  addiu       $a3, $a3, 0x150D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5389));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DE60u;
        goto label_40de60;
    }
    ctx->pc = 0x40DE58u;
    SET_GPR_U32(ctx, 31, 0x40DE60u);
    ctx->pc = 0x40DE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40DE58u;
    // 0x40de5c: 0x24e7150d  addiu       $a3, $a3, 0x150D (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5389));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x40DE58u, 0x40DE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40DE60u;
label_40de60:
    // 0x40de60: 0x8e440044  lw          $a0, 0x44($s2)
    ctx->pc = 0x40de60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_40de64:
    // 0x40de64: 0xc104382  jal         func_410E08
label_40de68:
    if (ctx->pc == 0x40DE68u) {
        ctx->pc = 0x40DE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DE64u;
        // 0x40de68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DE6Cu;
        goto label_40de6c;
    }
    ctx->pc = 0x40DE64u;
    SET_GPR_U32(ctx, 31, 0x40DE6Cu);
    ctx->pc = 0x40DE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40DE64u;
    // 0x40de68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410E08u, 0x40DE64u, 0x40DE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40DE6Cu;
label_40de6c:
    // 0x40de6c: 0x8e440044  lw          $a0, 0x44($s2)
    ctx->pc = 0x40de6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_40de70:
    // 0x40de70: 0xc104192  jal         func_410648
label_40de74:
    if (ctx->pc == 0x40DE74u) {
        ctx->pc = 0x40DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DE70u;
        // 0x40de74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DE78u;
        goto label_40de78;
    }
    ctx->pc = 0x40DE70u;
    SET_GPR_U32(ctx, 31, 0x40DE78u);
    ctx->pc = 0x40DE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40DE70u;
    // 0x40de74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410648u, 0x40DE70u, 0x40DE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40DE78u;
label_40de78:
    // 0x40de78: 0x8e6c27e4  lw          $t4, 0x27E4($s3)
    ctx->pc = 0x40de78u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_40de7c:
    // 0x40de7c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x40de7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_40de80:
    // 0x40de80: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x40de80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_40de84:
    // 0x40de84: 0x24062188  addiu       $a2, $zero, 0x2188
    ctx->pc = 0x40de84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8584));
label_40de88:
    // 0x40de88: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x40de88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_40de8c:
    // 0x40de8c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x40de8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_40de90:
    // 0x40de90: 0x24090103  addiu       $t1, $zero, 0x103
    ctx->pc = 0x40de90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
label_40de94:
    // 0x40de94: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x40de94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40de98:
    // 0x40de98: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x40de98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_40de9c:
    // 0x40de9c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x40de9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40dea0:
    // 0x40dea0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x40dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_40dea4:
    // 0x40dea4: 0x40f809  jalr        $v0
label_40dea8:
    if (ctx->pc == 0x40DEA8u) {
        ctx->pc = 0x40DEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DEA4u;
        // 0x40dea8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DEACu;
        goto label_40deac;
    }
    ctx->pc = 0x40DEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40DEACu);
        ctx->pc = 0x40DEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DEA4u;
        // 0x40dea8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DEA4u, 0x40DEACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40DEACu;
label_40deac:
    // 0x40deac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x40deacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40deb0:
    // 0x40deb0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_40deb4:
    if (ctx->pc == 0x40DEB4u) {
        ctx->pc = 0x40DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DEB0u;
        // 0x40deb4: 0x8e22489c  lw          $v0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DEB8u;
        goto label_40deb8;
    }
    ctx->pc = 0x40DEB0u;
    {
        const bool branch_taken_0x40deb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DEB0u;
        // 0x40deb4: 0x8e22489c  lw          $v0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40deb0) {
            ctx->pc = 0x40DEC8u;
            goto label_40dec8;
        }
    }
    ctx->pc = 0x40DEB8u;
label_40deb8:
    // 0x40deb8: 0xc1040c2  jal         func_410308
label_40debc:
    if (ctx->pc == 0x40DEBCu) {
        ctx->pc = 0x40DEC0u;
        goto label_40dec0;
    }
    ctx->pc = 0x40DEB8u;
    SET_GPR_U32(ctx, 31, 0x40DEC0u);
    ctx->pc = 0x410308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410308u, 0x40DEB8u, 0x40DEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40DEC0u;
label_40dec0:
    // 0x40dec0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x40dec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40dec4:
    // 0x40dec4: 0x8e22489c  lw          $v0, 0x489C($s1)
    ctx->pc = 0x40dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_40dec8:
    // 0x40dec8: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40dec8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_40decc:
    // 0x40decc: 0xae440048  sw          $a0, 0x48($s2)
    ctx->pc = 0x40deccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 4));
label_40ded0:
    // 0x40ded0: 0x24c68b80  addiu       $a2, $a2, -0x7480
    ctx->pc = 0x40ded0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937472));
label_40ded4:
    // 0x40ded4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40ded4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40ded8:
    // 0x40ded8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x40ded8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_40dedc:
    // 0x40dedc: 0x944756dc  lhu         $a3, 0x56DC($v0)
    ctx->pc = 0x40dedcu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22236)));
label_40dee0:
    // 0x40dee0: 0xf41818  mult        $v1, $a3, $s4
    ctx->pc = 0x40dee0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_40dee4:
    // 0x40dee4: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x40dee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_40dee8:
    // 0x40dee8: 0xc10ca04  jal         func_432810
label_40deec:
    if (ctx->pc == 0x40DEECu) {
        ctx->pc = 0x40DEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DEE8u;
        // 0x40deec: 0x24e7150d  addiu       $a3, $a3, 0x150D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5389));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DEF0u;
        goto label_40def0;
    }
    ctx->pc = 0x40DEE8u;
    SET_GPR_U32(ctx, 31, 0x40DEF0u);
    ctx->pc = 0x40DEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40DEE8u;
    // 0x40deec: 0x24e7150d  addiu       $a3, $a3, 0x150D (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5389));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x40DEE8u, 0x40DEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40DEF0u;
label_40def0:
    // 0x40def0: 0x8e440048  lw          $a0, 0x48($s2)
    ctx->pc = 0x40def0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_40def4:
    // 0x40def4: 0xc104382  jal         func_410E08
label_40def8:
    if (ctx->pc == 0x40DEF8u) {
        ctx->pc = 0x40DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DEF4u;
        // 0x40def8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DEFCu;
        goto label_40defc;
    }
    ctx->pc = 0x40DEF4u;
    SET_GPR_U32(ctx, 31, 0x40DEFCu);
    ctx->pc = 0x40DEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40DEF4u;
    // 0x40def8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410E08u, 0x40DEF4u, 0x40DEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40DEFCu;
label_40defc:
    // 0x40defc: 0x8e440048  lw          $a0, 0x48($s2)
    ctx->pc = 0x40defcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_40df00:
    // 0x40df00: 0xc104192  jal         func_410648
label_40df04:
    if (ctx->pc == 0x40DF04u) {
        ctx->pc = 0x40DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DF00u;
        // 0x40df04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DF08u;
        goto label_40df08;
    }
    ctx->pc = 0x40DF00u;
    SET_GPR_U32(ctx, 31, 0x40DF08u);
    ctx->pc = 0x40DF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40DF00u;
    // 0x40df04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410648u, 0x40DF00u, 0x40DF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40DF08u;
label_40df08:
    // 0x40df08: 0x10000028  b           . + 4 + (0x28 << 2)
label_40df0c:
    if (ctx->pc == 0x40DF0Cu) {
        ctx->pc = 0x40DF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DF08u;
        // 0x40df0c: 0x8e6627e4  lw          $a2, 0x27E4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DF10u;
        goto label_40df10;
    }
    ctx->pc = 0x40DF08u;
    {
        const bool branch_taken_0x40df08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40DF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DF08u;
        // 0x40df0c: 0x8e6627e4  lw          $a2, 0x27E4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40df08) {
            ctx->pc = 0x40DFACu;
            goto label_40dfac;
        }
    }
    ctx->pc = 0x40DF10u;
label_40df10:
    // 0x40df10: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x40df10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
label_40df14:
    // 0x40df14: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40df14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_40df18:
    // 0x40df18: 0x8e6c27e4  lw          $t4, 0x27E4($s3)
    ctx->pc = 0x40df18u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_40df1c:
    // 0x40df1c: 0x24a58b70  addiu       $a1, $a1, -0x7490
    ctx->pc = 0x40df1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937456));
label_40df20:
    // 0x40df20: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x40df20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_40df24:
    // 0x40df24: 0x24062188  addiu       $a2, $zero, 0x2188
    ctx->pc = 0x40df24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8584));
label_40df28:
    // 0x40df28: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x40df28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_40df2c:
    // 0x40df2c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x40df2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_40df30:
    // 0x40df30: 0x2409010e  addiu       $t1, $zero, 0x10E
    ctx->pc = 0x40df30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
label_40df34:
    // 0x40df34: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x40df34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40df38:
    // 0x40df38: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x40df38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_40df3c:
    // 0x40df3c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x40df3cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40df40:
    // 0x40df40: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x40df40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_40df44:
    // 0x40df44: 0x40f809  jalr        $v0
label_40df48:
    if (ctx->pc == 0x40DF48u) {
        ctx->pc = 0x40DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DF44u;
        // 0x40df48: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DF4Cu;
        goto label_40df4c;
    }
    ctx->pc = 0x40DF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40DF4Cu);
        ctx->pc = 0x40DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DF44u;
        // 0x40df48: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DF44u, 0x40DF4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40DF4Cu;
label_40df4c:
    // 0x40df4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x40df4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40df50:
    // 0x40df50: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_40df54:
    if (ctx->pc == 0x40DF54u) {
        ctx->pc = 0x40DF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DF50u;
        // 0x40df54: 0x8e22489c  lw          $v0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DF58u;
        goto label_40df58;
    }
    ctx->pc = 0x40DF50u;
    {
        const bool branch_taken_0x40df50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40DF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DF50u;
        // 0x40df54: 0x8e22489c  lw          $v0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40df50) {
            ctx->pc = 0x40DF68u;
            goto label_40df68;
        }
    }
    ctx->pc = 0x40DF58u;
label_40df58:
    // 0x40df58: 0xc1040c2  jal         func_410308
label_40df5c:
    if (ctx->pc == 0x40DF5Cu) {
        ctx->pc = 0x40DF60u;
        goto label_40df60;
    }
    ctx->pc = 0x40DF58u;
    SET_GPR_U32(ctx, 31, 0x40DF60u);
    ctx->pc = 0x410308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410308u, 0x40DF58u, 0x40DF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40DF60u;
label_40df60:
    // 0x40df60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x40df60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40df64:
    // 0x40df64: 0x8e22489c  lw          $v0, 0x489C($s1)
    ctx->pc = 0x40df64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_40df68:
    // 0x40df68: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40df68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_40df6c:
    // 0x40df6c: 0xae440044  sw          $a0, 0x44($s2)
    ctx->pc = 0x40df6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 4));
label_40df70:
    // 0x40df70: 0x24c68b88  addiu       $a2, $a2, -0x7478
    ctx->pc = 0x40df70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937480));
label_40df74:
    // 0x40df74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40df74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40df78:
    // 0x40df78: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x40df78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_40df7c:
    // 0x40df7c: 0x944756dc  lhu         $a3, 0x56DC($v0)
    ctx->pc = 0x40df7cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22236)));
label_40df80:
    // 0x40df80: 0xf41818  mult        $v1, $a3, $s4
    ctx->pc = 0x40df80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_40df84:
    // 0x40df84: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x40df84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_40df88:
    // 0x40df88: 0xc10ca04  jal         func_432810
label_40df8c:
    if (ctx->pc == 0x40DF8Cu) {
        ctx->pc = 0x40DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DF88u;
        // 0x40df8c: 0x24e7150d  addiu       $a3, $a3, 0x150D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5389));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DF90u;
        goto label_40df90;
    }
    ctx->pc = 0x40DF88u;
    SET_GPR_U32(ctx, 31, 0x40DF90u);
    ctx->pc = 0x40DF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40DF88u;
    // 0x40df8c: 0x24e7150d  addiu       $a3, $a3, 0x150D (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5389));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x40DF88u, 0x40DF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40DF90u;
label_40df90:
    // 0x40df90: 0x8e440044  lw          $a0, 0x44($s2)
    ctx->pc = 0x40df90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_40df94:
    // 0x40df94: 0xc104382  jal         func_410E08
label_40df98:
    if (ctx->pc == 0x40DF98u) {
        ctx->pc = 0x40DF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DF94u;
        // 0x40df98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DF9Cu;
        goto label_40df9c;
    }
    ctx->pc = 0x40DF94u;
    SET_GPR_U32(ctx, 31, 0x40DF9Cu);
    ctx->pc = 0x40DF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40DF94u;
    // 0x40df98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410E08u, 0x40DF94u, 0x40DF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40DF9Cu;
label_40df9c:
    // 0x40df9c: 0x8e440044  lw          $a0, 0x44($s2)
    ctx->pc = 0x40df9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_40dfa0:
    // 0x40dfa0: 0xc104192  jal         func_410648
label_40dfa4:
    if (ctx->pc == 0x40DFA4u) {
        ctx->pc = 0x40DFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DFA0u;
        // 0x40dfa4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DFA8u;
        goto label_40dfa8;
    }
    ctx->pc = 0x40DFA0u;
    SET_GPR_U32(ctx, 31, 0x40DFA8u);
    ctx->pc = 0x40DFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40DFA0u;
    // 0x40dfa4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410648u, 0x40DFA0u, 0x40DFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40DFA8u;
label_40dfa8:
    // 0x40dfa8: 0x8e6627e4  lw          $a2, 0x27E4($s3)
    ctx->pc = 0x40dfa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_40dfac:
    // 0x40dfac: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x40dfacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_40dfb0:
    // 0x40dfb0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x40dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_40dfb4:
    // 0x40dfb4: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x40dfb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_40dfb8:
    // 0x40dfb8: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x40dfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_40dfbc:
    // 0x40dfbc: 0x60f809  jalr        $v1
label_40dfc0:
    if (ctx->pc == 0x40DFC0u) {
        ctx->pc = 0x40DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DFBCu;
        // 0x40dfc0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DFC4u;
        goto label_40dfc4;
    }
    ctx->pc = 0x40DFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40DFC4u);
        ctx->pc = 0x40DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DFBCu;
        // 0x40dfc0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DFBCu, 0x40DFC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40DFC4u;
label_40dfc4:
    // 0x40dfc4: 0xc1031a2  jal         func_40C688
label_40dfc8:
    if (ctx->pc == 0x40DFC8u) {
        ctx->pc = 0x40DFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DFC4u;
        // 0x40dfc8: 0x8fa40200  lw          $a0, 0x200($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DFCCu;
        goto label_40dfcc;
    }
    ctx->pc = 0x40DFC4u;
    SET_GPR_U32(ctx, 31, 0x40DFCCu);
    ctx->pc = 0x40DFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40DFC4u;
    // 0x40dfc8: 0x8fa40200  lw          $a0, 0x200($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C688u, 0x40DFC4u, 0x40DFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40DFCCu;
label_40dfcc:
    // 0x40dfcc: 0x8e6627e4  lw          $a2, 0x27E4($s3)
    ctx->pc = 0x40dfccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_40dfd0:
    // 0x40dfd0: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x40dfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
label_40dfd4:
    // 0x40dfd4: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x40dfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_40dfd8:
    // 0x40dfd8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x40dfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_40dfdc:
    // 0x40dfdc: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x40dfdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_40dfe0:
    // 0x40dfe0: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x40dfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_40dfe4:
    // 0x40dfe4: 0x60f809  jalr        $v1
label_40dfe8:
    if (ctx->pc == 0x40DFE8u) {
        ctx->pc = 0x40DFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DFE4u;
        // 0x40dfe8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DFECu;
        goto label_40dfec;
    }
    ctx->pc = 0x40DFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40DFECu);
        ctx->pc = 0x40DFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DFE4u;
        // 0x40dfe8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DFE4u, 0x40DFECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40DFECu;
label_40dfec:
    // 0x40dfec: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x40dfecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
label_40dff0:
    // 0x40dff0: 0x26108b90  addiu       $s0, $s0, -0x7470
    ctx->pc = 0x40dff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294937488));
label_40dff4:
    // 0x40dff4: 0xc10c978  jal         func_4325E0
label_40dff8:
    if (ctx->pc == 0x40DFF8u) {
        ctx->pc = 0x40DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DFF4u;
        // 0x40dff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DFFCu;
        goto label_40dffc;
    }
    ctx->pc = 0x40DFF4u;
    SET_GPR_U32(ctx, 31, 0x40DFFCu);
    ctx->pc = 0x40DFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40DFF4u;
    // 0x40dff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4325E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4325E0u, 0x40DFF4u, 0x40DFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40DFFCu;
label_40dffc:
    // 0x40dffc: 0xc10c978  jal         func_4325E0
label_40e000:
    if (ctx->pc == 0x40E000u) {
        ctx->pc = 0x40E000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DFFCu;
        // 0x40e000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E004u;
        goto label_40e004;
    }
    ctx->pc = 0x40DFFCu;
    SET_GPR_U32(ctx, 31, 0x40E004u);
    ctx->pc = 0x40E000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40DFFCu;
    // 0x40e000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4325E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4325E0u, 0x40DFFCu, 0x40E004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E004u;
label_40e004:
    // 0x40e004: 0xc10c978  jal         func_4325E0
label_40e008:
    if (ctx->pc == 0x40E008u) {
        ctx->pc = 0x40E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E004u;
        // 0x40e008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E00Cu;
        goto label_40e00c;
    }
    ctx->pc = 0x40E004u;
    SET_GPR_U32(ctx, 31, 0x40E00Cu);
    ctx->pc = 0x40E008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E004u;
    // 0x40e008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4325E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4325E0u, 0x40E004u, 0x40E00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E00Cu;
label_40e00c:
    // 0x40e00c: 0x8ee5b9c8  lw          $a1, -0x4638($s7)
    ctx->pc = 0x40e00cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949320)));
label_40e010:
    // 0x40e010: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x40e010u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
label_40e014:
    // 0x40e014: 0x26318bf0  addiu       $s1, $s1, -0x7410
    ctx->pc = 0x40e014u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294937584));
label_40e018:
    // 0x40e018: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x40e018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_40e01c:
    // 0x40e01c: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x40e01cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_40e020:
    // 0x40e020: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x40e020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_40e024:
    // 0x40e024: 0x40f809  jalr        $v0
label_40e028:
    if (ctx->pc == 0x40E028u) {
        ctx->pc = 0x40E028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E024u;
        // 0x40e028: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E02Cu;
        goto label_40e02c;
    }
    ctx->pc = 0x40E024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40E02Cu);
        ctx->pc = 0x40E028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E024u;
        // 0x40e028: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40E024u, 0x40E02Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40E02Cu;
label_40e02c:
    // 0x40e02c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40e02cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40e030:
    // 0x40e030: 0xc10c978  jal         func_4325E0
label_40e034:
    if (ctx->pc == 0x40E034u) {
        ctx->pc = 0x40E034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E030u;
        // 0x40e034: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E038u;
        goto label_40e038;
    }
    ctx->pc = 0x40E030u;
    SET_GPR_U32(ctx, 31, 0x40E038u);
    ctx->pc = 0x40E034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E030u;
    // 0x40e034: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4325E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4325E0u, 0x40E030u, 0x40E038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E038u;
label_40e038:
    // 0x40e038: 0xc10c978  jal         func_4325E0
label_40e03c:
    if (ctx->pc == 0x40E03Cu) {
        ctx->pc = 0x40E03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E038u;
        // 0x40e03c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E040u;
        goto label_40e040;
    }
    ctx->pc = 0x40E038u;
    SET_GPR_U32(ctx, 31, 0x40E040u);
    ctx->pc = 0x40E03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E038u;
    // 0x40e03c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4325E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4325E0u, 0x40E038u, 0x40E040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E040u;
label_40e040:
    // 0x40e040: 0xc10c978  jal         func_4325E0
label_40e044:
    if (ctx->pc == 0x40E044u) {
        ctx->pc = 0x40E044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E040u;
        // 0x40e044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E048u;
        goto label_40e048;
    }
    ctx->pc = 0x40E040u;
    SET_GPR_U32(ctx, 31, 0x40E048u);
    ctx->pc = 0x40E044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E040u;
    // 0x40e044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4325E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4325E0u, 0x40E040u, 0x40E048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E048u;
label_40e048:
    // 0x40e048: 0xc10c978  jal         func_4325E0
label_40e04c:
    if (ctx->pc == 0x40E04Cu) {
        ctx->pc = 0x40E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E048u;
        // 0x40e04c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E050u;
        goto label_40e050;
    }
    ctx->pc = 0x40E048u;
    SET_GPR_U32(ctx, 31, 0x40E050u);
    ctx->pc = 0x40E04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E048u;
    // 0x40e04c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4325E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4325E0u, 0x40E048u, 0x40E050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E050u;
label_40e050:
    // 0x40e050: 0x8ee5b9c8  lw          $a1, -0x4638($s7)
    ctx->pc = 0x40e050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949320)));
label_40e054:
    // 0x40e054: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x40e054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_40e058:
    // 0x40e058: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x40e058u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_40e05c:
    // 0x40e05c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x40e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_40e060:
    // 0x40e060: 0x40f809  jalr        $v0
label_40e064:
    if (ctx->pc == 0x40E064u) {
        ctx->pc = 0x40E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E060u;
        // 0x40e064: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E068u;
        goto label_40e068;
    }
    ctx->pc = 0x40E060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40E068u);
        ctx->pc = 0x40E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E060u;
        // 0x40e064: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40E060u, 0x40E068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40E068u;
label_40e068:
    // 0x40e068: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x40e068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_40e06c:
    // 0x40e06c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x40e06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_40e070:
    // 0x40e070: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x40e070u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_40e074:
    // 0x40e074: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x40e074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40e078:
    // 0x40e078: 0xac6247d0  sw          $v0, 0x47D0($v1)
    ctx->pc = 0x40e078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18384), GPR_U32(ctx, 2));
label_40e07c:
    // 0x40e07c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x40e07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_40e080:
    // 0x40e080: 0x7bb002a0  lq          $s0, 0x2A0($sp)
    ctx->pc = 0x40e080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_40e084:
    // 0x40e084: 0xe44047cc  swc1        $f0, 0x47CC($v0)
    ctx->pc = 0x40e084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 18380), bits); }
label_40e088:
    // 0x40e088: 0x7bb10290  lq          $s1, 0x290($sp)
    ctx->pc = 0x40e088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_40e08c:
    // 0x40e08c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40e08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40e090:
    // 0x40e090: 0x7bb20280  lq          $s2, 0x280($sp)
    ctx->pc = 0x40e090u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_40e094:
    // 0x40e094: 0x7bb30270  lq          $s3, 0x270($sp)
    ctx->pc = 0x40e094u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_40e098:
    // 0x40e098: 0x7bb40260  lq          $s4, 0x260($sp)
    ctx->pc = 0x40e098u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_40e09c:
    // 0x40e09c: 0x7bb50250  lq          $s5, 0x250($sp)
    ctx->pc = 0x40e09cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_40e0a0:
    // 0x40e0a0: 0x7bb60240  lq          $s6, 0x240($sp)
    ctx->pc = 0x40e0a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_40e0a4:
    // 0x40e0a4: 0x7bb70230  lq          $s7, 0x230($sp)
    ctx->pc = 0x40e0a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_40e0a8:
    // 0x40e0a8: 0x7bbe0220  lq          $fp, 0x220($sp)
    ctx->pc = 0x40e0a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_40e0ac:
    // 0x40e0ac: 0xdfbf0210  ld          $ra, 0x210($sp)
    ctx->pc = 0x40e0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 528)));
label_40e0b0:
    // 0x40e0b0: 0x3e00008  jr          $ra
label_40e0b4:
    if (ctx->pc == 0x40E0B4u) {
        ctx->pc = 0x40E0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E0B0u;
        // 0x40e0b4: 0x27bd02b0  addiu       $sp, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E0B8u;
        goto label_fallthrough_0x40e0b0;
    }
    ctx->pc = 0x40E0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40E0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E0B0u;
        // 0x40e0b4: 0x27bd02b0  addiu       $sp, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40E0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x40e0b0:
    ctx->pc = 0x40E0B8u;
}
