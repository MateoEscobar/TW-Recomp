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

// Function: sub_0017D880
// Address: 0x17d880 - 0x17de10
void sub_0017D880_0x17d880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D880_0x17d880");
#endif

    switch (ctx->pc) {
        case 0x17d880u: goto label_17d880;
        case 0x17d884u: goto label_17d884;
        case 0x17d888u: goto label_17d888;
        case 0x17d88cu: goto label_17d88c;
        case 0x17d890u: goto label_17d890;
        case 0x17d894u: goto label_17d894;
        case 0x17d898u: goto label_17d898;
        case 0x17d89cu: goto label_17d89c;
        case 0x17d8a0u: goto label_17d8a0;
        case 0x17d8a4u: goto label_17d8a4;
        case 0x17d8a8u: goto label_17d8a8;
        case 0x17d8acu: goto label_17d8ac;
        case 0x17d8b0u: goto label_17d8b0;
        case 0x17d8b4u: goto label_17d8b4;
        case 0x17d8b8u: goto label_17d8b8;
        case 0x17d8bcu: goto label_17d8bc;
        case 0x17d8c0u: goto label_17d8c0;
        case 0x17d8c4u: goto label_17d8c4;
        case 0x17d8c8u: goto label_17d8c8;
        case 0x17d8ccu: goto label_17d8cc;
        case 0x17d8d0u: goto label_17d8d0;
        case 0x17d8d4u: goto label_17d8d4;
        case 0x17d8d8u: goto label_17d8d8;
        case 0x17d8dcu: goto label_17d8dc;
        case 0x17d8e0u: goto label_17d8e0;
        case 0x17d8e4u: goto label_17d8e4;
        case 0x17d8e8u: goto label_17d8e8;
        case 0x17d8ecu: goto label_17d8ec;
        case 0x17d8f0u: goto label_17d8f0;
        case 0x17d8f4u: goto label_17d8f4;
        case 0x17d8f8u: goto label_17d8f8;
        case 0x17d8fcu: goto label_17d8fc;
        case 0x17d900u: goto label_17d900;
        case 0x17d904u: goto label_17d904;
        case 0x17d908u: goto label_17d908;
        case 0x17d90cu: goto label_17d90c;
        case 0x17d910u: goto label_17d910;
        case 0x17d914u: goto label_17d914;
        case 0x17d918u: goto label_17d918;
        case 0x17d91cu: goto label_17d91c;
        case 0x17d920u: goto label_17d920;
        case 0x17d924u: goto label_17d924;
        case 0x17d928u: goto label_17d928;
        case 0x17d92cu: goto label_17d92c;
        case 0x17d930u: goto label_17d930;
        case 0x17d934u: goto label_17d934;
        case 0x17d938u: goto label_17d938;
        case 0x17d93cu: goto label_17d93c;
        case 0x17d940u: goto label_17d940;
        case 0x17d944u: goto label_17d944;
        case 0x17d948u: goto label_17d948;
        case 0x17d94cu: goto label_17d94c;
        case 0x17d950u: goto label_17d950;
        case 0x17d954u: goto label_17d954;
        case 0x17d958u: goto label_17d958;
        case 0x17d95cu: goto label_17d95c;
        case 0x17d960u: goto label_17d960;
        case 0x17d964u: goto label_17d964;
        case 0x17d968u: goto label_17d968;
        case 0x17d96cu: goto label_17d96c;
        case 0x17d970u: goto label_17d970;
        case 0x17d974u: goto label_17d974;
        case 0x17d978u: goto label_17d978;
        case 0x17d97cu: goto label_17d97c;
        case 0x17d980u: goto label_17d980;
        case 0x17d984u: goto label_17d984;
        case 0x17d988u: goto label_17d988;
        case 0x17d98cu: goto label_17d98c;
        case 0x17d990u: goto label_17d990;
        case 0x17d994u: goto label_17d994;
        case 0x17d998u: goto label_17d998;
        case 0x17d99cu: goto label_17d99c;
        case 0x17d9a0u: goto label_17d9a0;
        case 0x17d9a4u: goto label_17d9a4;
        case 0x17d9a8u: goto label_17d9a8;
        case 0x17d9acu: goto label_17d9ac;
        case 0x17d9b0u: goto label_17d9b0;
        case 0x17d9b4u: goto label_17d9b4;
        case 0x17d9b8u: goto label_17d9b8;
        case 0x17d9bcu: goto label_17d9bc;
        case 0x17d9c0u: goto label_17d9c0;
        case 0x17d9c4u: goto label_17d9c4;
        case 0x17d9c8u: goto label_17d9c8;
        case 0x17d9ccu: goto label_17d9cc;
        case 0x17d9d0u: goto label_17d9d0;
        case 0x17d9d4u: goto label_17d9d4;
        case 0x17d9d8u: goto label_17d9d8;
        case 0x17d9dcu: goto label_17d9dc;
        case 0x17d9e0u: goto label_17d9e0;
        case 0x17d9e4u: goto label_17d9e4;
        case 0x17d9e8u: goto label_17d9e8;
        case 0x17d9ecu: goto label_17d9ec;
        case 0x17d9f0u: goto label_17d9f0;
        case 0x17d9f4u: goto label_17d9f4;
        case 0x17d9f8u: goto label_17d9f8;
        case 0x17d9fcu: goto label_17d9fc;
        case 0x17da00u: goto label_17da00;
        case 0x17da04u: goto label_17da04;
        case 0x17da08u: goto label_17da08;
        case 0x17da0cu: goto label_17da0c;
        case 0x17da10u: goto label_17da10;
        case 0x17da14u: goto label_17da14;
        case 0x17da18u: goto label_17da18;
        case 0x17da1cu: goto label_17da1c;
        case 0x17da20u: goto label_17da20;
        case 0x17da24u: goto label_17da24;
        case 0x17da28u: goto label_17da28;
        case 0x17da2cu: goto label_17da2c;
        case 0x17da30u: goto label_17da30;
        case 0x17da34u: goto label_17da34;
        case 0x17da38u: goto label_17da38;
        case 0x17da3cu: goto label_17da3c;
        case 0x17da40u: goto label_17da40;
        case 0x17da44u: goto label_17da44;
        case 0x17da48u: goto label_17da48;
        case 0x17da4cu: goto label_17da4c;
        case 0x17da50u: goto label_17da50;
        case 0x17da54u: goto label_17da54;
        case 0x17da58u: goto label_17da58;
        case 0x17da5cu: goto label_17da5c;
        case 0x17da60u: goto label_17da60;
        case 0x17da64u: goto label_17da64;
        case 0x17da68u: goto label_17da68;
        case 0x17da6cu: goto label_17da6c;
        case 0x17da70u: goto label_17da70;
        case 0x17da74u: goto label_17da74;
        case 0x17da78u: goto label_17da78;
        case 0x17da7cu: goto label_17da7c;
        case 0x17da80u: goto label_17da80;
        case 0x17da84u: goto label_17da84;
        case 0x17da88u: goto label_17da88;
        case 0x17da8cu: goto label_17da8c;
        case 0x17da90u: goto label_17da90;
        case 0x17da94u: goto label_17da94;
        case 0x17da98u: goto label_17da98;
        case 0x17da9cu: goto label_17da9c;
        case 0x17daa0u: goto label_17daa0;
        case 0x17daa4u: goto label_17daa4;
        case 0x17daa8u: goto label_17daa8;
        case 0x17daacu: goto label_17daac;
        case 0x17dab0u: goto label_17dab0;
        case 0x17dab4u: goto label_17dab4;
        case 0x17dab8u: goto label_17dab8;
        case 0x17dabcu: goto label_17dabc;
        case 0x17dac0u: goto label_17dac0;
        case 0x17dac4u: goto label_17dac4;
        case 0x17dac8u: goto label_17dac8;
        case 0x17daccu: goto label_17dacc;
        case 0x17dad0u: goto label_17dad0;
        case 0x17dad4u: goto label_17dad4;
        case 0x17dad8u: goto label_17dad8;
        case 0x17dadcu: goto label_17dadc;
        case 0x17dae0u: goto label_17dae0;
        case 0x17dae4u: goto label_17dae4;
        case 0x17dae8u: goto label_17dae8;
        case 0x17daecu: goto label_17daec;
        case 0x17daf0u: goto label_17daf0;
        case 0x17daf4u: goto label_17daf4;
        case 0x17daf8u: goto label_17daf8;
        case 0x17dafcu: goto label_17dafc;
        case 0x17db00u: goto label_17db00;
        case 0x17db04u: goto label_17db04;
        case 0x17db08u: goto label_17db08;
        case 0x17db0cu: goto label_17db0c;
        case 0x17db10u: goto label_17db10;
        case 0x17db14u: goto label_17db14;
        case 0x17db18u: goto label_17db18;
        case 0x17db1cu: goto label_17db1c;
        case 0x17db20u: goto label_17db20;
        case 0x17db24u: goto label_17db24;
        case 0x17db28u: goto label_17db28;
        case 0x17db2cu: goto label_17db2c;
        case 0x17db30u: goto label_17db30;
        case 0x17db34u: goto label_17db34;
        case 0x17db38u: goto label_17db38;
        case 0x17db3cu: goto label_17db3c;
        case 0x17db40u: goto label_17db40;
        case 0x17db44u: goto label_17db44;
        case 0x17db48u: goto label_17db48;
        case 0x17db4cu: goto label_17db4c;
        case 0x17db50u: goto label_17db50;
        case 0x17db54u: goto label_17db54;
        case 0x17db58u: goto label_17db58;
        case 0x17db5cu: goto label_17db5c;
        case 0x17db60u: goto label_17db60;
        case 0x17db64u: goto label_17db64;
        case 0x17db68u: goto label_17db68;
        case 0x17db6cu: goto label_17db6c;
        case 0x17db70u: goto label_17db70;
        case 0x17db74u: goto label_17db74;
        case 0x17db78u: goto label_17db78;
        case 0x17db7cu: goto label_17db7c;
        case 0x17db80u: goto label_17db80;
        case 0x17db84u: goto label_17db84;
        case 0x17db88u: goto label_17db88;
        case 0x17db8cu: goto label_17db8c;
        case 0x17db90u: goto label_17db90;
        case 0x17db94u: goto label_17db94;
        case 0x17db98u: goto label_17db98;
        case 0x17db9cu: goto label_17db9c;
        case 0x17dba0u: goto label_17dba0;
        case 0x17dba4u: goto label_17dba4;
        case 0x17dba8u: goto label_17dba8;
        case 0x17dbacu: goto label_17dbac;
        case 0x17dbb0u: goto label_17dbb0;
        case 0x17dbb4u: goto label_17dbb4;
        case 0x17dbb8u: goto label_17dbb8;
        case 0x17dbbcu: goto label_17dbbc;
        case 0x17dbc0u: goto label_17dbc0;
        case 0x17dbc4u: goto label_17dbc4;
        case 0x17dbc8u: goto label_17dbc8;
        case 0x17dbccu: goto label_17dbcc;
        case 0x17dbd0u: goto label_17dbd0;
        case 0x17dbd4u: goto label_17dbd4;
        case 0x17dbd8u: goto label_17dbd8;
        case 0x17dbdcu: goto label_17dbdc;
        case 0x17dbe0u: goto label_17dbe0;
        case 0x17dbe4u: goto label_17dbe4;
        case 0x17dbe8u: goto label_17dbe8;
        case 0x17dbecu: goto label_17dbec;
        case 0x17dbf0u: goto label_17dbf0;
        case 0x17dbf4u: goto label_17dbf4;
        case 0x17dbf8u: goto label_17dbf8;
        case 0x17dbfcu: goto label_17dbfc;
        case 0x17dc00u: goto label_17dc00;
        case 0x17dc04u: goto label_17dc04;
        case 0x17dc08u: goto label_17dc08;
        case 0x17dc0cu: goto label_17dc0c;
        case 0x17dc10u: goto label_17dc10;
        case 0x17dc14u: goto label_17dc14;
        case 0x17dc18u: goto label_17dc18;
        case 0x17dc1cu: goto label_17dc1c;
        case 0x17dc20u: goto label_17dc20;
        case 0x17dc24u: goto label_17dc24;
        case 0x17dc28u: goto label_17dc28;
        case 0x17dc2cu: goto label_17dc2c;
        case 0x17dc30u: goto label_17dc30;
        case 0x17dc34u: goto label_17dc34;
        case 0x17dc38u: goto label_17dc38;
        case 0x17dc3cu: goto label_17dc3c;
        case 0x17dc40u: goto label_17dc40;
        case 0x17dc44u: goto label_17dc44;
        case 0x17dc48u: goto label_17dc48;
        case 0x17dc4cu: goto label_17dc4c;
        case 0x17dc50u: goto label_17dc50;
        case 0x17dc54u: goto label_17dc54;
        case 0x17dc58u: goto label_17dc58;
        case 0x17dc5cu: goto label_17dc5c;
        case 0x17dc60u: goto label_17dc60;
        case 0x17dc64u: goto label_17dc64;
        case 0x17dc68u: goto label_17dc68;
        case 0x17dc6cu: goto label_17dc6c;
        case 0x17dc70u: goto label_17dc70;
        case 0x17dc74u: goto label_17dc74;
        case 0x17dc78u: goto label_17dc78;
        case 0x17dc7cu: goto label_17dc7c;
        case 0x17dc80u: goto label_17dc80;
        case 0x17dc84u: goto label_17dc84;
        case 0x17dc88u: goto label_17dc88;
        case 0x17dc8cu: goto label_17dc8c;
        case 0x17dc90u: goto label_17dc90;
        case 0x17dc94u: goto label_17dc94;
        case 0x17dc98u: goto label_17dc98;
        case 0x17dc9cu: goto label_17dc9c;
        case 0x17dca0u: goto label_17dca0;
        case 0x17dca4u: goto label_17dca4;
        case 0x17dca8u: goto label_17dca8;
        case 0x17dcacu: goto label_17dcac;
        case 0x17dcb0u: goto label_17dcb0;
        case 0x17dcb4u: goto label_17dcb4;
        case 0x17dcb8u: goto label_17dcb8;
        case 0x17dcbcu: goto label_17dcbc;
        case 0x17dcc0u: goto label_17dcc0;
        case 0x17dcc4u: goto label_17dcc4;
        case 0x17dcc8u: goto label_17dcc8;
        case 0x17dcccu: goto label_17dccc;
        case 0x17dcd0u: goto label_17dcd0;
        case 0x17dcd4u: goto label_17dcd4;
        case 0x17dcd8u: goto label_17dcd8;
        case 0x17dcdcu: goto label_17dcdc;
        case 0x17dce0u: goto label_17dce0;
        case 0x17dce4u: goto label_17dce4;
        case 0x17dce8u: goto label_17dce8;
        case 0x17dcecu: goto label_17dcec;
        case 0x17dcf0u: goto label_17dcf0;
        case 0x17dcf4u: goto label_17dcf4;
        case 0x17dcf8u: goto label_17dcf8;
        case 0x17dcfcu: goto label_17dcfc;
        case 0x17dd00u: goto label_17dd00;
        case 0x17dd04u: goto label_17dd04;
        case 0x17dd08u: goto label_17dd08;
        case 0x17dd0cu: goto label_17dd0c;
        case 0x17dd10u: goto label_17dd10;
        case 0x17dd14u: goto label_17dd14;
        case 0x17dd18u: goto label_17dd18;
        case 0x17dd1cu: goto label_17dd1c;
        case 0x17dd20u: goto label_17dd20;
        case 0x17dd24u: goto label_17dd24;
        case 0x17dd28u: goto label_17dd28;
        case 0x17dd2cu: goto label_17dd2c;
        case 0x17dd30u: goto label_17dd30;
        case 0x17dd34u: goto label_17dd34;
        case 0x17dd38u: goto label_17dd38;
        case 0x17dd3cu: goto label_17dd3c;
        case 0x17dd40u: goto label_17dd40;
        case 0x17dd44u: goto label_17dd44;
        case 0x17dd48u: goto label_17dd48;
        case 0x17dd4cu: goto label_17dd4c;
        case 0x17dd50u: goto label_17dd50;
        case 0x17dd54u: goto label_17dd54;
        case 0x17dd58u: goto label_17dd58;
        case 0x17dd5cu: goto label_17dd5c;
        case 0x17dd60u: goto label_17dd60;
        case 0x17dd64u: goto label_17dd64;
        case 0x17dd68u: goto label_17dd68;
        case 0x17dd6cu: goto label_17dd6c;
        case 0x17dd70u: goto label_17dd70;
        case 0x17dd74u: goto label_17dd74;
        case 0x17dd78u: goto label_17dd78;
        case 0x17dd7cu: goto label_17dd7c;
        case 0x17dd80u: goto label_17dd80;
        case 0x17dd84u: goto label_17dd84;
        case 0x17dd88u: goto label_17dd88;
        case 0x17dd8cu: goto label_17dd8c;
        case 0x17dd90u: goto label_17dd90;
        case 0x17dd94u: goto label_17dd94;
        case 0x17dd98u: goto label_17dd98;
        case 0x17dd9cu: goto label_17dd9c;
        case 0x17dda0u: goto label_17dda0;
        case 0x17dda4u: goto label_17dda4;
        case 0x17dda8u: goto label_17dda8;
        case 0x17ddacu: goto label_17ddac;
        case 0x17ddb0u: goto label_17ddb0;
        case 0x17ddb4u: goto label_17ddb4;
        case 0x17ddb8u: goto label_17ddb8;
        case 0x17ddbcu: goto label_17ddbc;
        case 0x17ddc0u: goto label_17ddc0;
        case 0x17ddc4u: goto label_17ddc4;
        case 0x17ddc8u: goto label_17ddc8;
        case 0x17ddccu: goto label_17ddcc;
        case 0x17ddd0u: goto label_17ddd0;
        case 0x17ddd4u: goto label_17ddd4;
        case 0x17ddd8u: goto label_17ddd8;
        case 0x17dddcu: goto label_17dddc;
        case 0x17dde0u: goto label_17dde0;
        case 0x17dde4u: goto label_17dde4;
        case 0x17dde8u: goto label_17dde8;
        case 0x17ddecu: goto label_17ddec;
        case 0x17ddf0u: goto label_17ddf0;
        case 0x17ddf4u: goto label_17ddf4;
        case 0x17ddf8u: goto label_17ddf8;
        case 0x17ddfcu: goto label_17ddfc;
        case 0x17de00u: goto label_17de00;
        case 0x17de04u: goto label_17de04;
        case 0x17de08u: goto label_17de08;
        case 0x17de0cu: goto label_17de0c;
        default: break;
    }

    ctx->pc = 0x17d880u;

label_17d880:
    // 0x17d880: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x17d880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_17d884:
    // 0x17d884: 0xafa50064  sw          $a1, 0x64($sp)
    ctx->pc = 0x17d884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 5));
label_17d888:
    // 0x17d888: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x17d888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_17d88c:
    // 0x17d88c: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x17d88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_17d890:
    // 0x17d890: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x17d890u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17d894:
    // 0x17d894: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x17d894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_17d898:
    // 0x17d898: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x17d898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_17d89c:
    // 0x17d89c: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x17d89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_17d8a0:
    // 0x17d8a0: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x17d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_17d8a4:
    // 0x17d8a4: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x17d8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_17d8a8:
    // 0x17d8a8: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x17d8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_17d8ac:
    // 0x17d8ac: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x17d8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_17d8b0:
    // 0x17d8b0: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x17d8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_17d8b4:
    // 0x17d8b4: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x17d8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_17d8b8:
    // 0x17d8b8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x17d8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_17d8bc:
    // 0x17d8bc: 0xe7b80140  swc1        $f24, 0x140($sp)
    ctx->pc = 0x17d8bcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_17d8c0:
    // 0x17d8c0: 0xe7b70138  swc1        $f23, 0x138($sp)
    ctx->pc = 0x17d8c0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_17d8c4:
    // 0x17d8c4: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x17d8c4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_17d8c8:
    // 0x17d8c8: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x17d8c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_17d8cc:
    // 0x17d8cc: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x17d8ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_17d8d0:
    // 0x17d8d0: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x17d8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_17d8d4:
    // 0x17d8d4: 0x90640011  lbu         $a0, 0x11($v1)
    ctx->pc = 0x17d8d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
label_17d8d8:
    // 0x17d8d8: 0x1080013b  beqz        $a0, . + 4 + (0x13B << 2)
label_17d8dc:
    if (ctx->pc == 0x17D8DCu) {
        ctx->pc = 0x17D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D8D8u;
        // 0x17d8dc: 0x3c110060  lui         $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D8E0u;
        goto label_17d8e0;
    }
    ctx->pc = 0x17D8D8u;
    {
        const bool branch_taken_0x17d8d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D8D8u;
        // 0x17d8dc: 0x3c110060  lui         $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d8d8) {
            ctx->pc = 0x17DDC8u;
            goto label_17ddc8;
        }
    }
    ctx->pc = 0x17D8E0u;
label_17d8e0:
    // 0x17d8e0: 0x8e22de84  lw          $v0, -0x217C($s1)
    ctx->pc = 0x17d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294958724)));
label_17d8e4:
    // 0x17d8e4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_17d8e8:
    if (ctx->pc == 0x17D8E8u) {
        ctx->pc = 0x17D8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D8E4u;
        // 0x17d8e8: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D8ECu;
        goto label_17d8ec;
    }
    ctx->pc = 0x17D8E4u;
    {
        const bool branch_taken_0x17d8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D8E4u;
        // 0x17d8e8: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d8e4) {
            ctx->pc = 0x17D914u;
            goto label_17d914;
        }
    }
    ctx->pc = 0x17D8ECu;
label_17d8ec:
    // 0x17d8ec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x17d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_17d8f0:
    // 0x17d8f0: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x17d8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_17d8f4:
    // 0x17d8f4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x17d8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_17d8f8:
    // 0x17d8f8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x17d8f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_17d8fc:
    // 0x17d8fc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x17d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_17d900:
    // 0x17d900: 0x40f809  jalr        $v0
label_17d904:
    if (ctx->pc == 0x17D904u) {
        ctx->pc = 0x17D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D900u;
        // 0x17d904: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D908u;
        goto label_17d908;
    }
    ctx->pc = 0x17D900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17D908u);
        ctx->pc = 0x17D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D900u;
        // 0x17d904: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D900u, 0x17D908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17D908u;
label_17d908:
    // 0x17d908: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17d908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17d90c:
    // 0x17d90c: 0xae02de80  sw          $v0, -0x2180($s0)
    ctx->pc = 0x17d90cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294958720), GPR_U32(ctx, 2));
label_17d910:
    // 0x17d910: 0xae23de84  sw          $v1, -0x217C($s1)
    ctx->pc = 0x17d910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294958724), GPR_U32(ctx, 3));
label_17d914:
    // 0x17d914: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x17d914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_17d918:
    // 0x17d918: 0x8e05de80  lw          $a1, -0x2180($s0)
    ctx->pc = 0x17d918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294958720)));
label_17d91c:
    // 0x17d91c: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x17d91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_17d920:
    // 0x17d920: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x17d920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_17d924:
    // 0x17d924: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x17d924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_17d928:
    // 0x17d928: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x17d928u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_17d92c:
    // 0x17d92c: 0xae02de80  sw          $v0, -0x2180($s0)
    ctx->pc = 0x17d92cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294958720), GPR_U32(ctx, 2));
label_17d930:
    // 0x17d930: 0xc047e6c  jal         func_11F9B0
label_17d934:
    if (ctx->pc == 0x17D934u) {
        ctx->pc = 0x17D934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D930u;
        // 0x17d934: 0xafa50068  sw          $a1, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D938u;
        goto label_17d938;
    }
    ctx->pc = 0x17D930u;
    SET_GPR_U32(ctx, 31, 0x17D938u);
    ctx->pc = 0x17D934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D930u;
    // 0x17d934: 0xafa50068  sw          $a1, 0x68($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x17D930u, 0x17D938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D938u;
label_17d938:
    // 0x17d938: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17d938u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17d93c:
    // 0x17d93c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x17d93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_17d940:
    // 0x17d940: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x17d940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_17d944:
    // 0x17d944: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x17d944u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_17d948:
    // 0x17d948: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x17d948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_17d94c:
    // 0x17d94c: 0x60f809  jalr        $v1
label_17d950:
    if (ctx->pc == 0x17D950u) {
        ctx->pc = 0x17D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D94Cu;
        // 0x17d950: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D954u;
        goto label_17d954;
    }
    ctx->pc = 0x17D94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17D954u);
        ctx->pc = 0x17D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D94Cu;
        // 0x17d950: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D94Cu, 0x17D954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17D954u;
label_17d954:
    // 0x17d954: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x17d954u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_17d958:
    // 0x17d958: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17d958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_17d95c:
    // 0x17d95c: 0x24a51730  addiu       $a1, $a1, 0x1730
    ctx->pc = 0x17d95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5936));
label_17d960:
    // 0x17d960: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x17d960u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17d964:
    // 0x17d964: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x17d964u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_17d968:
    // 0x17d968: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x17d968u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_17d96c:
    // 0x17d96c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x17d96cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_17d970:
    // 0x17d970: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x17d970u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_17d974:
    // 0x17d974: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x17d974u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_17d978:
    // 0x17d978: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x17d978u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_17d97c:
    // 0x17d97c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x17d97cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_17d980:
    // 0x17d980: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x17d980u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_17d984:
    // 0x17d984: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x17d984u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_17d988:
    // 0x17d988: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x17d988u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_17d98c:
    // 0x17d98c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x17d98cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_17d990:
    // 0x17d990: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x17d990u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_17d994:
    // 0x17d994: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x17d994u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_17d998:
    // 0x17d998: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x17d998u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_17d99c:
    // 0x17d99c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x17d99cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_17d9a0:
    // 0x17d9a0: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x17d9a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_17d9a4:
    // 0x17d9a4: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x17d9a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_17d9a8:
    // 0x17d9a8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x17d9a8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_17d9ac:
    // 0x17d9ac: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x17d9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_17d9b0:
    // 0x17d9b0: 0x26d20030  addiu       $s2, $s6, 0x30
    ctx->pc = 0x17d9b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
label_17d9b4:
    // 0x17d9b4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x17d9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_17d9b8:
    // 0x17d9b8: 0x26d30020  addiu       $s3, $s6, 0x20
    ctx->pc = 0x17d9b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
label_17d9bc:
    // 0x17d9bc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x17d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_17d9c0:
    // 0x17d9c0: 0x240f02d  daddu       $fp, $s2, $zero
    ctx->pc = 0x17d9c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17d9c4:
    // 0x17d9c4: 0x260b82d  daddu       $s7, $s3, $zero
    ctx->pc = 0x17d9c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17d9c8:
    // 0x17d9c8: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x17d9c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_17d9cc:
    // 0x17d9cc: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x17d9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_17d9d0:
    // 0x17d9d0: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x17d9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_17d9d4:
    // 0x17d9d4: 0x60f809  jalr        $v1
label_17d9d8:
    if (ctx->pc == 0x17D9D8u) {
        ctx->pc = 0x17D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D9D4u;
        // 0x17d9d8: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D9DCu;
        goto label_17d9dc;
    }
    ctx->pc = 0x17D9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17D9DCu);
        ctx->pc = 0x17D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D9D4u;
        // 0x17d9d8: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D9D4u, 0x17D9DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17D9DCu;
label_17d9dc:
    // 0x17d9dc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x17d9dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17d9e0:
    // 0x17d9e0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x17d9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_17d9e4:
    // 0x17d9e4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x17d9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17d9e8:
    // 0x17d9e8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x17d9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17d9ec:
    // 0x17d9ec: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17d9ecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_17d9f0:
    // 0x17d9f0: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x17d9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17d9f4:
    // 0x17d9f4: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x17d9f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_17d9f8:
    // 0x17d9f8: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x17d9f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_17d9fc:
    // 0x17d9fc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x17d9fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_17da00:
    // 0x17da00: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x17da00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_17da04:
    // 0x17da04: 0x84440210  lh          $a0, 0x210($v0)
    ctx->pc = 0x17da04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 528)));
label_17da08:
    // 0x17da08: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x17da08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_17da0c:
    // 0x17da0c: 0x60f809  jalr        $v1
label_17da10:
    if (ctx->pc == 0x17DA10u) {
        ctx->pc = 0x17DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DA0Cu;
        // 0x17da10: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DA14u;
        goto label_17da14;
    }
    ctx->pc = 0x17DA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17DA14u);
        ctx->pc = 0x17DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DA0Cu;
        // 0x17da10: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DA0Cu, 0x17DA14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17DA14u;
label_17da14:
    // 0x17da14: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x17da14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_17da18:
    // 0x17da18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17da18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17da1c:
    // 0x17da1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17da1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17da20:
    // 0x17da20: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17da20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_17da24:
    // 0x17da24: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x17da24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_17da28:
    // 0x17da28: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x17da28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_17da2c:
    // 0x17da2c: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x17da2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_17da30:
    // 0x17da30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17da30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17da34:
    // 0x17da34: 0xc10c1bb  jal         func_4306EC
label_17da38:
    if (ctx->pc == 0x17DA38u) {
        ctx->pc = 0x17DA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DA34u;
        // 0x17da38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DA3Cu;
        goto label_17da3c;
    }
    ctx->pc = 0x17DA34u;
    SET_GPR_U32(ctx, 31, 0x17DA3Cu);
    ctx->pc = 0x17DA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DA34u;
    // 0x17da38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x17DA34u, 0x17DA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DA3Cu;
label_17da3c:
    // 0x17da3c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x17da3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_17da40:
    // 0x17da40: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x17da40u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_17da44:
    // 0x17da44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17da44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17da48:
    // 0x17da48: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x17da48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_17da4c:
    // 0x17da4c: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x17da4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_17da50:
    // 0x17da50: 0x8e710004  lw          $s1, 0x4($s3)
    ctx->pc = 0x17da50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_17da54:
    // 0x17da54: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x17da54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_17da58:
    // 0x17da58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17da58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17da5c:
    // 0x17da5c: 0xc10c1bb  jal         func_4306EC
label_17da60:
    if (ctx->pc == 0x17DA60u) {
        ctx->pc = 0x17DA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DA5Cu;
        // 0x17da60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DA64u;
        goto label_17da64;
    }
    ctx->pc = 0x17DA5Cu;
    SET_GPR_U32(ctx, 31, 0x17DA64u);
    ctx->pc = 0x17DA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DA5Cu;
    // 0x17da60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x17DA5Cu, 0x17DA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DA64u;
label_17da64:
    // 0x17da64: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x17da64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_17da68:
    // 0x17da68: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x17da68u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_17da6c:
    // 0x17da6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17da6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17da70:
    // 0x17da70: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x17da70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_17da74:
    // 0x17da74: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x17da74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
label_17da78:
    // 0x17da78: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x17da78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17da7c:
    // 0x17da7c: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x17da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_17da80:
    // 0x17da80: 0x104000cf  beqz        $v0, . + 4 + (0xCF << 2)
label_17da84:
    if (ctx->pc == 0x17DA84u) {
        ctx->pc = 0x17DA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DA80u;
        // 0x17da84: 0x460005c2  mul.s       $f23, $f0, $f0 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DA88u;
        goto label_17da88;
    }
    ctx->pc = 0x17DA80u;
    {
        const bool branch_taken_0x17da80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DA80u;
        // 0x17da84: 0x460005c2  mul.s       $f23, $f0, $f0 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17da80) {
            ctx->pc = 0x17DDC0u;
            goto label_17ddc0;
        }
    }
    ctx->pc = 0x17DA88u;
label_17da88:
    // 0x17da88: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x17da88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_17da8c:
    // 0x17da8c: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x17da8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_17da90:
    // 0x17da90: 0x24535300  addiu       $s3, $v0, 0x5300
    ctx->pc = 0x17da90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 21248));
label_17da94:
    // 0x17da94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17da94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_17da98:
    // 0x17da98: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x17da98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_17da9c:
    // 0x17da9c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x17da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_17daa0:
    // 0x17daa0: 0xafbe0074  sw          $fp, 0x74($sp)
    ctx->pc = 0x17daa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 30));
label_17daa4:
    // 0x17daa4: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x17daa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_17daa8:
    // 0x17daa8: 0xafb70078  sw          $s7, 0x78($sp)
    ctx->pc = 0x17daa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 23));
label_17daac:
    // 0x17daac: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x17daacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_17dab0:
    // 0x17dab0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x17dab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_17dab4:
    // 0x17dab4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17dab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_17dab8:
    // 0x17dab8: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x17dab8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17dabc:
    // 0x17dabc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x17dabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17dac0:
    // 0x17dac0: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x17dac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
label_17dac4:
    // 0x17dac4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x17dac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_17dac8:
    // 0x17dac8: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x17dac8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_17dacc:
    // 0x17dacc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17daccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_17dad0:
    // 0x17dad0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x17dad0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_17dad4:
    // 0x17dad4: 0x50400032  beql        $v0, $zero, . + 4 + (0x32 << 2)
label_17dad8:
    if (ctx->pc == 0x17DAD8u) {
        ctx->pc = 0x17DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DAD4u;
        // 0x17dad8: 0x96220030  lhu         $v0, 0x30($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DADCu;
        goto label_17dadc;
    }
    ctx->pc = 0x17DAD4u;
    {
        const bool branch_taken_0x17dad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dad4) {
            ctx->pc = 0x17DAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DAD4u;
            // 0x17dad8: 0x96220030  lhu         $v0, 0x30($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DBA0u;
            goto label_17dba0;
        }
    }
    ctx->pc = 0x17DADCu;
label_17dadc:
    // 0x17dadc: 0x9622002e  lhu         $v0, 0x2E($s1)
    ctx->pc = 0x17dadcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
label_17dae0:
    // 0x17dae0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17dae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_17dae4:
    // 0x17dae4: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
label_17dae8:
    if (ctx->pc == 0x17DAE8u) {
        ctx->pc = 0x17DAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DAE4u;
        // 0x17dae8: 0x9622002e  lhu         $v0, 0x2E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DAECu;
        goto label_17daec;
    }
    ctx->pc = 0x17DAE4u;
    {
        const bool branch_taken_0x17dae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dae4) {
            ctx->pc = 0x17DAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DAE4u;
            // 0x17dae8: 0x9622002e  lhu         $v0, 0x2E($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DB68u;
            goto label_17db68;
        }
    }
    ctx->pc = 0x17DAECu;
label_17daec:
    // 0x17daec: 0x96220030  lhu         $v0, 0x30($s1)
    ctx->pc = 0x17daecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
label_17daf0:
    // 0x17daf0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_17daf4:
    if (ctx->pc == 0x17DAF4u) {
        ctx->pc = 0x17DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DAF0u;
        // 0x17daf4: 0x8e630068  lw          $v1, 0x68($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DAF8u;
        goto label_17daf8;
    }
    ctx->pc = 0x17DAF0u;
    {
        const bool branch_taken_0x17daf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17daf0) {
            ctx->pc = 0x17DAF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DAF0u;
            // 0x17daf4: 0x8e630068  lw          $v1, 0x68($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DB30u;
            goto label_17db30;
        }
    }
    ctx->pc = 0x17DAF8u;
label_17daf8:
    // 0x17daf8: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x17daf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_17dafc:
    // 0x17dafc: 0x5460001a  bnel        $v1, $zero, . + 4 + (0x1A << 2)
label_17db00:
    if (ctx->pc == 0x17DB00u) {
        ctx->pc = 0x17DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DAFCu;
        // 0x17db00: 0x9622002e  lhu         $v0, 0x2E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DB04u;
        goto label_17db04;
    }
    ctx->pc = 0x17DAFCu;
    {
        const bool branch_taken_0x17dafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dafc) {
            ctx->pc = 0x17DB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DAFCu;
            // 0x17db00: 0x9622002e  lhu         $v0, 0x2E($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DB68u;
            goto label_17db68;
        }
    }
    ctx->pc = 0x17DB04u;
label_17db04:
    // 0x17db04: 0x8e63008c  lw          $v1, 0x8C($s3)
    ctx->pc = 0x17db04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_17db08:
    // 0x17db08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17db08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17db0c:
    // 0x17db0c: 0xafa4006c  sw          $a0, 0x6C($sp)
    ctx->pc = 0x17db0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 4));
label_17db10:
    // 0x17db10: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x17db10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_17db14:
    // 0x17db14: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x17db14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_17db18:
    // 0x17db18: 0x2484536c  addiu       $a0, $a0, 0x536C
    ctx->pc = 0x17db18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21356));
label_17db1c:
    // 0x17db1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17db1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_17db20:
    // 0x17db20: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17db20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_17db24:
    // 0x17db24: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x17db24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_17db28:
    // 0x17db28: 0x1000000e  b           . + 4 + (0xE << 2)
label_17db2c:
    if (ctx->pc == 0x17DB2Cu) {
        ctx->pc = 0x17DB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB28u;
        // 0x17db2c: 0xae63008c  sw          $v1, 0x8C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DB30u;
        goto label_17db30;
    }
    ctx->pc = 0x17DB28u;
    {
        const bool branch_taken_0x17db28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB28u;
        // 0x17db2c: 0xae63008c  sw          $v1, 0x8C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17db28) {
            ctx->pc = 0x17DB64u;
            goto label_17db64;
        }
    }
    ctx->pc = 0x17DB30u;
label_17db30:
    // 0x17db30: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x17db30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_17db34:
    // 0x17db34: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x17db34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_17db38:
    // 0x17db38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17db38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_17db3c:
    // 0x17db3c: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x17db3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_17db40:
    // 0x17db40: 0xae630068  sw          $v1, 0x68($s3)
    ctx->pc = 0x17db40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 3));
label_17db44:
    // 0x17db44: 0x8e64008c  lw          $a0, 0x8C($s3)
    ctx->pc = 0x17db44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_17db48:
    // 0x17db48: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x17db48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_17db4c:
    // 0x17db4c: 0x2463536c  addiu       $v1, $v1, 0x536C
    ctx->pc = 0x17db4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21356));
label_17db50:
    // 0x17db50: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x17db50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_17db54:
    // 0x17db54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17db54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17db58:
    // 0x17db58: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17db58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_17db5c:
    // 0x17db5c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x17db5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_17db60:
    // 0x17db60: 0xae64008c  sw          $a0, 0x8C($s3)
    ctx->pc = 0x17db60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 4));
label_17db64:
    // 0x17db64: 0x9622002e  lhu         $v0, 0x2E($s1)
    ctx->pc = 0x17db64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
label_17db68:
    // 0x17db68: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x17db68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_17db6c:
    // 0x17db6c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x17db6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_17db70:
    // 0x17db70: 0x1040008e  beqz        $v0, . + 4 + (0x8E << 2)
label_17db74:
    if (ctx->pc == 0x17DB74u) {
        ctx->pc = 0x17DB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB70u;
        // 0x17db74: 0xafa6007c  sw          $a2, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DB78u;
        goto label_17db78;
    }
    ctx->pc = 0x17DB70u;
    {
        const bool branch_taken_0x17db70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB70u;
        // 0x17db74: 0xafa6007c  sw          $a2, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17db70) {
            ctx->pc = 0x17DDACu;
            goto label_17ddac;
        }
    }
    ctx->pc = 0x17DB78u;
label_17db78:
    // 0x17db78: 0x96220030  lhu         $v0, 0x30($s1)
    ctx->pc = 0x17db78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
label_17db7c:
    // 0x17db7c: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
label_17db80:
    if (ctx->pc == 0x17DB80u) {
        ctx->pc = 0x17DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB7Cu;
        // 0x17db80: 0x8fa40060  lw          $a0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DB84u;
        goto label_17db84;
    }
    ctx->pc = 0x17DB7Cu;
    {
        const bool branch_taken_0x17db7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB7Cu;
        // 0x17db80: 0x8fa40060  lw          $a0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17db7c) {
            ctx->pc = 0x17DDACu;
            goto label_17ddac;
        }
    }
    ctx->pc = 0x17DB84u;
label_17db84:
    // 0x17db84: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x17db84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_17db88:
    // 0x17db88: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17db88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_17db8c:
    // 0x17db8c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x17db8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_17db90:
    // 0x17db90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17db90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17db94:
    // 0x17db94: 0xac640024  sw          $a0, 0x24($v1)
    ctx->pc = 0x17db94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 4));
label_17db98:
    // 0x17db98: 0x10000084  b           . + 4 + (0x84 << 2)
label_17db9c:
    if (ctx->pc == 0x17DB9Cu) {
        ctx->pc = 0x17DB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB98u;
        // 0x17db9c: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DBA0u;
        goto label_17dba0;
    }
    ctx->pc = 0x17DB98u;
    {
        const bool branch_taken_0x17db98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB98u;
        // 0x17db9c: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17db98) {
            ctx->pc = 0x17DDACu;
            goto label_17ddac;
        }
    }
    ctx->pc = 0x17DBA0u;
label_17dba0:
    // 0x17dba0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x17dba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_17dba4:
    // 0x17dba4: 0x10400081  beqz        $v0, . + 4 + (0x81 << 2)
label_17dba8:
    if (ctx->pc == 0x17DBA8u) {
        ctx->pc = 0x17DBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DBA4u;
        // 0x17dba8: 0xafa6007c  sw          $a2, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DBACu;
        goto label_17dbac;
    }
    ctx->pc = 0x17DBA4u;
    {
        const bool branch_taken_0x17dba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DBA4u;
        // 0x17dba8: 0xafa6007c  sw          $a2, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dba4) {
            ctx->pc = 0x17DDACu;
            goto label_17ddac;
        }
    }
    ctx->pc = 0x17DBACu;
label_17dbac:
    // 0x17dbac: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x17dbacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_17dbb0:
    // 0x17dbb0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x17dbb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17dbb4:
    // 0x17dbb4: 0x78830040  lq          $v1, 0x40($a0)
    ctx->pc = 0x17dbb4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 64)));
label_17dbb8:
    // 0x17dbb8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x17dbb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_17dbbc:
    // 0x17dbbc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x17dbbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_17dbc0:
    // 0x17dbc0: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x17dbc0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_17dbc4:
    // 0x17dbc4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x17dbc4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_17dbc8:
    // 0x17dbc8: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x17dbc8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_17dbcc:
    // 0x17dbcc: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x17dbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_17dbd0:
    // 0x17dbd0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x17dbd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_17dbd4:
    // 0x17dbd4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x17dbd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_17dbd8:
    // 0x17dbd8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x17dbd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_17dbdc:
    // 0x17dbdc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x17dbdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_17dbe0:
    // 0x17dbe0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x17dbe0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_17dbe4:
    // 0x17dbe4: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x17dbe4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_17dbe8:
    // 0x17dbe8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x17dbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_17dbec:
    // 0x17dbec: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x17dbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_17dbf0:
    // 0x17dbf0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x17dbf0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17dbf4:
    // 0x17dbf4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x17dbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17dbf8:
    // 0x17dbf8: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x17dbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17dbfc:
    // 0x17dbfc: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x17dbfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17dc00:
    // 0x17dc00: 0x0  nop
    ctx->pc = 0x17dc00u;
    // NOP
label_17dc04:
    // 0x17dc04: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_17dc08:
    if (ctx->pc == 0x17DC08u) {
        ctx->pc = 0x17DC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC04u;
        // 0x17dc08: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DC0Cu;
        goto label_17dc0c;
    }
    ctx->pc = 0x17DC04u;
    {
        const bool branch_taken_0x17dc04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17DC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC04u;
        // 0x17dc08: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc04) {
            ctx->pc = 0x17DC10u;
            goto label_17dc10;
        }
    }
    ctx->pc = 0x17DC0Cu;
label_17dc0c:
    // 0x17dc0c: 0xc6350014  lwc1        $f21, 0x14($s1)
    ctx->pc = 0x17dc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_17dc10:
    // 0x17dc10: 0x4615a802  mul.s       $f0, $f21, $f21
    ctx->pc = 0x17dc10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
label_17dc14:
    // 0x17dc14: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x17dc14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_17dc18:
    // 0x17dc18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17dc18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17dc1c:
    // 0x17dc1c: 0x0  nop
    ctx->pc = 0x17dc1cu;
    // NOP
label_17dc20:
    // 0x17dc20: 0x45000062  bc1f        . + 4 + (0x62 << 2)
label_17dc24:
    if (ctx->pc == 0x17DC24u) {
        ctx->pc = 0x17DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC20u;
        // 0x17dc24: 0xc7a00048  lwc1        $f0, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DC28u;
        goto label_17dc28;
    }
    ctx->pc = 0x17DC20u;
    {
        const bool branch_taken_0x17dc20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC20u;
        // 0x17dc24: 0xc7a00048  lwc1        $f0, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc20) {
            ctx->pc = 0x17DDACu;
            goto label_17ddac;
        }
    }
    ctx->pc = 0x17DC28u;
label_17dc28:
    // 0x17dc28: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17dc28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17dc2c:
    // 0x17dc2c: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x17dc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17dc30:
    // 0x17dc30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17dc30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17dc34:
    // 0x17dc34: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17dc34u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_17dc38:
    // 0x17dc38: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x17dc38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_17dc3c:
    // 0x17dc3c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x17dc3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_17dc40:
    // 0x17dc40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17dc40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17dc44:
    // 0x17dc44: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x17dc44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17dc48:
    // 0x17dc48: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x17dc48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_17dc4c:
    // 0x17dc4c: 0xe4d8000c  swc1        $f24, 0xC($a2)
    ctx->pc = 0x17dc4cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_17dc50:
    // 0x17dc50: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x17dc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_17dc54:
    // 0x17dc54: 0x0  nop
    ctx->pc = 0x17dc54u;
    // NOP
label_17dc58:
    // 0x17dc58: 0x84640170  lh          $a0, 0x170($v1)
    ctx->pc = 0x17dc58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 368)));
label_17dc5c:
    // 0x17dc5c: 0x8c620174  lw          $v0, 0x174($v1)
    ctx->pc = 0x17dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 372)));
label_17dc60:
    // 0x17dc60: 0x40f809  jalr        $v0
label_17dc64:
    if (ctx->pc == 0x17DC64u) {
        ctx->pc = 0x17DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC60u;
        // 0x17dc64: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DC68u;
        goto label_17dc68;
    }
    ctx->pc = 0x17DC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17DC68u);
        ctx->pc = 0x17DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC60u;
        // 0x17dc64: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DC60u, 0x17DC68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17DC68u;
label_17dc68:
    // 0x17dc68: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x17dc68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_17dc6c:
    // 0x17dc6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17dc6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17dc70:
    // 0x17dc70: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x17dc70u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_17dc74:
    // 0x17dc74: 0x84c40170  lh          $a0, 0x170($a2)
    ctx->pc = 0x17dc74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 368)));
label_17dc78:
    // 0x17dc78: 0x8cc20174  lw          $v0, 0x174($a2)
    ctx->pc = 0x17dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 372)));
label_17dc7c:
    // 0x17dc7c: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x17dc7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17dc80:
    // 0x17dc80: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x17dc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_17dc84:
    // 0x17dc84: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x17dc84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_17dc88:
    // 0x17dc88: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x17dc88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_17dc8c:
    // 0x17dc8c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x17dc8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_17dc90:
    // 0x17dc90: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x17dc90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_17dc94:
    // 0x17dc94: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x17dc94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_17dc98:
    // 0x17dc98: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x17dc98u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_17dc9c:
    // 0x17dc9c: 0x4486a000  mtc1        $a2, $f20
    ctx->pc = 0x17dc9cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_17dca0:
    // 0x17dca0: 0x40f809  jalr        $v0
label_17dca4:
    if (ctx->pc == 0x17DCA4u) {
        ctx->pc = 0x17DCA8u;
        goto label_17dca8;
    }
    ctx->pc = 0x17DCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17DCA8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DCA0u, 0x17DCA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17DCA8u;
label_17dca8:
    // 0x17dca8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x17dca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17dcac:
    // 0x17dcac: 0x4600a847  neg.s       $f1, $f21
    ctx->pc = 0x17dcacu;
    ctx->f[1] = FPU_NEG_S(ctx->f[21]);
label_17dcb0:
    // 0x17dcb0: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x17dcb0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_17dcb4:
    // 0x17dcb4: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x17dcb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17dcb8:
    // 0x17dcb8: 0x0  nop
    ctx->pc = 0x17dcb8u;
    // NOP
label_17dcbc:
    // 0x17dcbc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_17dcc0:
    if (ctx->pc == 0x17DCC0u) {
        ctx->pc = 0x17DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DCBCu;
        // 0x17dcc0: 0x2151004  sllv        $v0, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DCC4u;
        goto label_17dcc4;
    }
    ctx->pc = 0x17DCBCu;
    {
        const bool branch_taken_0x17dcbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DCBCu;
        // 0x17dcc0: 0x2151004  sllv        $v0, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dcbc) {
            ctx->pc = 0x17DCC8u;
            goto label_17dcc8;
        }
    }
    ctx->pc = 0x17DCC4u;
label_17dcc4:
    // 0x17dcc4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x17dcc4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_17dcc8:
    // 0x17dcc8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17dcc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17dccc:
    // 0x17dccc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17dcccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17dcd0:
    // 0x17dcd0: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x17dcd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_17dcd4:
    // 0x17dcd4: 0x5440ffe0  bnel        $v0, $zero, . + 4 + (-0x20 << 2)
label_17dcd8:
    if (ctx->pc == 0x17DCD8u) {
        ctx->pc = 0x17DCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DCD4u;
        // 0x17dcd8: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DCDCu;
        goto label_17dcdc;
    }
    ctx->pc = 0x17DCD4u;
    {
        const bool branch_taken_0x17dcd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dcd4) {
            ctx->pc = 0x17DCD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DCD4u;
            // 0x17dcd8: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17dc58;
        }
    }
    ctx->pc = 0x17DCDCu;
label_17dcdc:
    // 0x17dcdc: 0x56400034  bnel        $s2, $zero, . + 4 + (0x34 << 2)
label_17dce0:
    if (ctx->pc == 0x17DCE0u) {
        ctx->pc = 0x17DCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DCDCu;
        // 0x17dce0: 0x8ec2000c  lw          $v0, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DCE4u;
        goto label_17dce4;
    }
    ctx->pc = 0x17DCDCu;
    {
        const bool branch_taken_0x17dcdc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dcdc) {
            ctx->pc = 0x17DCE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DCDCu;
            // 0x17dce0: 0x8ec2000c  lw          $v0, 0xC($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DDB0u;
            goto label_17ddb0;
        }
    }
    ctx->pc = 0x17DCE4u;
label_17dce4:
    // 0x17dce4: 0x4615b034  c.lt.s      $f22, $f21
    ctx->pc = 0x17dce4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17dce8:
    // 0x17dce8: 0x0  nop
    ctx->pc = 0x17dce8u;
    // NOP
label_17dcec:
    // 0x17dcec: 0x45020028  bc1fl       . + 4 + (0x28 << 2)
label_17dcf0:
    if (ctx->pc == 0x17DCF0u) {
        ctx->pc = 0x17DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DCECu;
        // 0x17dcf0: 0x9622002c  lhu         $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DCF4u;
        goto label_17dcf4;
    }
    ctx->pc = 0x17DCECu;
    {
        const bool branch_taken_0x17dcec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17dcec) {
            ctx->pc = 0x17DCF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DCECu;
            // 0x17dcf0: 0x9622002c  lhu         $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DD90u;
            goto label_17dd90;
        }
    }
    ctx->pc = 0x17DCF4u;
label_17dcf4:
    // 0x17dcf4: 0x9622002e  lhu         $v0, 0x2E($s1)
    ctx->pc = 0x17dcf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
label_17dcf8:
    // 0x17dcf8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x17dcf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_17dcfc:
    // 0x17dcfc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_17dd00:
    if (ctx->pc == 0x17DD00u) {
        ctx->pc = 0x17DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DCFCu;
        // 0x17dd00: 0x27b00060  addiu       $s0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DD04u;
        goto label_17dd04;
    }
    ctx->pc = 0x17DCFCu;
    {
        const bool branch_taken_0x17dcfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DCFCu;
        // 0x17dd00: 0x27b00060  addiu       $s0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dcfc) {
            ctx->pc = 0x17DD3Cu;
            goto label_17dd3c;
        }
    }
    ctx->pc = 0x17DD04u;
label_17dd04:
    // 0x17dd04: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x17dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_17dd08:
    // 0x17dd08: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x17dd08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_17dd0c:
    // 0x17dd0c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x17dd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_17dd10:
    // 0x17dd10: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
label_17dd14:
    if (ctx->pc == 0x17DD14u) {
        ctx->pc = 0x17DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD10u;
        // 0x17dd14: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DD18u;
        goto label_17dd18;
    }
    ctx->pc = 0x17DD10u;
    {
        const bool branch_taken_0x17dd10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x17DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD10u;
        // 0x17dd14: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd10) {
            ctx->pc = 0x17DD34u;
            goto label_17dd34;
        }
    }
    ctx->pc = 0x17DD18u;
label_17dd18:
    // 0x17dd18: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_17dd1c:
    if (ctx->pc == 0x17DD1Cu) {
        ctx->pc = 0x17DD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD18u;
        // 0x17dd1c: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DD20u;
        goto label_17dd20;
    }
    ctx->pc = 0x17DD18u;
    {
        const bool branch_taken_0x17dd18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD18u;
        // 0x17dd1c: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd18) {
            ctx->pc = 0x17DD24u;
            goto label_17dd24;
        }
    }
    ctx->pc = 0x17DD20u;
label_17dd20:
    // 0x17dd20: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x17dd20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_17dd24:
    // 0x17dd24: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x17dd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_17dd28:
    // 0x17dd28: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_17dd2c:
    // 0x17dd2c: 0x10000003  b           . + 4 + (0x3 << 2)
label_17dd30:
    if (ctx->pc == 0x17DD30u) {
        ctx->pc = 0x17DD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD2Cu;
        // 0x17dd30: 0xafc20008  sw          $v0, 0x8($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DD34u;
        goto label_17dd34;
    }
    ctx->pc = 0x17DD2Cu;
    {
        const bool branch_taken_0x17dd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD2Cu;
        // 0x17dd30: 0xafc20008  sw          $v0, 0x8($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd2c) {
            ctx->pc = 0x17DD3Cu;
            goto label_17dd3c;
        }
    }
    ctx->pc = 0x17DD34u;
label_17dd34:
    // 0x17dd34: 0xc137b96  jal         func_4DEE58
label_17dd38:
    if (ctx->pc == 0x17DD38u) {
        ctx->pc = 0x17DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD34u;
        // 0x17dd38: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DD3Cu;
        goto label_17dd3c;
    }
    ctx->pc = 0x17DD34u;
    SET_GPR_U32(ctx, 31, 0x17DD3Cu);
    ctx->pc = 0x17DD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DD34u;
    // 0x17dd38: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DEE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DEE58u, 0x17DD34u, 0x17DD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DD3Cu;
label_17dd3c:
    // 0x17dd3c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x17dd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_17dd40:
    // 0x17dd40: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x17dd40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_17dd44:
    // 0x17dd44: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x17dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_17dd48:
    // 0x17dd48: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
label_17dd4c:
    if (ctx->pc == 0x17DD4Cu) {
        ctx->pc = 0x17DD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD48u;
        // 0x17dd4c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DD50u;
        goto label_17dd50;
    }
    ctx->pc = 0x17DD48u;
    {
        const bool branch_taken_0x17dd48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x17DD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD48u;
        // 0x17dd4c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd48) {
            ctx->pc = 0x17DD6Cu;
            goto label_17dd6c;
        }
    }
    ctx->pc = 0x17DD50u;
label_17dd50:
    // 0x17dd50: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_17dd54:
    if (ctx->pc == 0x17DD54u) {
        ctx->pc = 0x17DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD50u;
        // 0x17dd54: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DD58u;
        goto label_17dd58;
    }
    ctx->pc = 0x17DD50u;
    {
        const bool branch_taken_0x17dd50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD50u;
        // 0x17dd54: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd50) {
            ctx->pc = 0x17DD5Cu;
            goto label_17dd5c;
        }
    }
    ctx->pc = 0x17DD58u;
label_17dd58:
    // 0x17dd58: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x17dd58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_17dd5c:
    // 0x17dd5c: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x17dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_17dd60:
    // 0x17dd60: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_17dd64:
    // 0x17dd64: 0x10000003  b           . + 4 + (0x3 << 2)
label_17dd68:
    if (ctx->pc == 0x17DD68u) {
        ctx->pc = 0x17DD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD64u;
        // 0x17dd68: 0xaee20008  sw          $v0, 0x8($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DD6Cu;
        goto label_17dd6c;
    }
    ctx->pc = 0x17DD64u;
    {
        const bool branch_taken_0x17dd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD64u;
        // 0x17dd68: 0xaee20008  sw          $v0, 0x8($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd64) {
            ctx->pc = 0x17DD74u;
            goto label_17dd74;
        }
    }
    ctx->pc = 0x17DD6Cu;
label_17dd6c:
    // 0x17dd6c: 0xc137b96  jal         func_4DEE58
label_17dd70:
    if (ctx->pc == 0x17DD70u) {
        ctx->pc = 0x17DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD6Cu;
        // 0x17dd70: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DD74u;
        goto label_17dd74;
    }
    ctx->pc = 0x17DD6Cu;
    SET_GPR_U32(ctx, 31, 0x17DD74u);
    ctx->pc = 0x17DD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DD6Cu;
    // 0x17dd70: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DEE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DEE58u, 0x17DD6Cu, 0x17DD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DD74u;
label_17dd74:
    // 0x17dd74: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x17dd74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_17dd78:
    // 0x17dd78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17dd78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17dd7c:
    // 0x17dd7c: 0x8fa70064  lw          $a3, 0x64($sp)
    ctx->pc = 0x17dd7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_17dd80:
    // 0x17dd80: 0xc05f2aa  jal         func_17CAA8
label_17dd84:
    if (ctx->pc == 0x17DD84u) {
        ctx->pc = 0x17DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD80u;
        // 0x17dd84: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DD88u;
        goto label_17dd88;
    }
    ctx->pc = 0x17DD80u;
    SET_GPR_U32(ctx, 31, 0x17DD88u);
    ctx->pc = 0x17DD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DD80u;
    // 0x17dd84: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CAA8u, 0x17DD80u, 0x17DD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DD88u;
label_17dd88:
    // 0x17dd88: 0x10000009  b           . + 4 + (0x9 << 2)
label_17dd8c:
    if (ctx->pc == 0x17DD8Cu) {
        ctx->pc = 0x17DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD88u;
        // 0x17dd8c: 0x8ec2000c  lw          $v0, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DD90u;
        goto label_17dd90;
    }
    ctx->pc = 0x17DD88u;
    {
        const bool branch_taken_0x17dd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD88u;
        // 0x17dd8c: 0x8ec2000c  lw          $v0, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd88) {
            ctx->pc = 0x17DDB0u;
            goto label_17ddb0;
        }
    }
    ctx->pc = 0x17DD90u;
label_17dd90:
    // 0x17dd90: 0x3842ffff  xori        $v0, $v0, 0xFFFF
    ctx->pc = 0x17dd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)65535);
label_17dd94:
    // 0x17dd94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_17dd98:
    if (ctx->pc == 0x17DD98u) {
        ctx->pc = 0x17DD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD94u;
        // 0x17dd98: 0x8fa50068  lw          $a1, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DD9Cu;
        goto label_17dd9c;
    }
    ctx->pc = 0x17DD94u;
    {
        const bool branch_taken_0x17dd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD94u;
        // 0x17dd98: 0x8fa50068  lw          $a1, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd94) {
            ctx->pc = 0x17DDACu;
            goto label_17ddac;
        }
    }
    ctx->pc = 0x17DD9Cu;
label_17dd9c:
    // 0x17dd9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17dd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17dda0:
    // 0x17dda0: 0x8fa70064  lw          $a3, 0x64($sp)
    ctx->pc = 0x17dda0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_17dda4:
    // 0x17dda4: 0xc05f2aa  jal         func_17CAA8
label_17dda8:
    if (ctx->pc == 0x17DDA8u) {
        ctx->pc = 0x17DDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DDA4u;
        // 0x17dda8: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DDACu;
        goto label_17ddac;
    }
    ctx->pc = 0x17DDA4u;
    SET_GPR_U32(ctx, 31, 0x17DDACu);
    ctx->pc = 0x17DDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DDA4u;
    // 0x17dda8: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CAA8u, 0x17DDA4u, 0x17DDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DDACu;
label_17ddac:
    // 0x17ddac: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x17ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_17ddb0:
    // 0x17ddb0: 0x8fa6007c  lw          $a2, 0x7C($sp)
    ctx->pc = 0x17ddb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_17ddb4:
    // 0x17ddb4: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x17ddb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_17ddb8:
    // 0x17ddb8: 0x5440ff3d  bnel        $v0, $zero, . + 4 + (-0xC3 << 2)
label_17ddbc:
    if (ctx->pc == 0x17DDBCu) {
        ctx->pc = 0x17DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DDB8u;
        // 0x17ddbc: 0x8ec20004  lw          $v0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DDC0u;
        goto label_17ddc0;
    }
    ctx->pc = 0x17DDB8u;
    {
        const bool branch_taken_0x17ddb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ddb8) {
            ctx->pc = 0x17DDBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DDB8u;
            // 0x17ddbc: 0x8ec20004  lw          $v0, 0x4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17dab0;
        }
    }
    ctx->pc = 0x17DDC0u;
label_17ddc0:
    // 0x17ddc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17ddc4:
    // 0x17ddc4: 0xaec2001c  sw          $v0, 0x1C($s6)
    ctx->pc = 0x17ddc4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 28), GPR_U32(ctx, 2));
label_17ddc8:
    // 0x17ddc8: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x17ddc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_17ddcc:
    // 0x17ddcc: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x17ddccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_17ddd0:
    // 0x17ddd0: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x17ddd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_17ddd4:
    // 0x17ddd4: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x17ddd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_17ddd8:
    // 0x17ddd8: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x17ddd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_17dddc:
    // 0x17dddc: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x17dddcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_17dde0:
    // 0x17dde0: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x17dde0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_17dde4:
    // 0x17dde4: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x17dde4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_17dde8:
    // 0x17dde8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x17dde8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_17ddec:
    // 0x17ddec: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x17ddecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_17ddf0:
    // 0x17ddf0: 0xc7b80140  lwc1        $f24, 0x140($sp)
    ctx->pc = 0x17ddf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_17ddf4:
    // 0x17ddf4: 0xc7b70138  lwc1        $f23, 0x138($sp)
    ctx->pc = 0x17ddf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_17ddf8:
    // 0x17ddf8: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x17ddf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_17ddfc:
    // 0x17ddfc: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x17ddfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_17de00:
    // 0x17de00: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x17de00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_17de04:
    // 0x17de04: 0x3e00008  jr          $ra
label_17de08:
    if (ctx->pc == 0x17DE08u) {
        ctx->pc = 0x17DE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE04u;
        // 0x17de08: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DE0Cu;
        goto label_17de0c;
    }
    ctx->pc = 0x17DE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE04u;
        // 0x17de08: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DE0Cu;
label_17de0c:
    // 0x17de0c: 0x0  nop
    ctx->pc = 0x17de0cu;
    // NOP
    ctx->pc = 0x17de10u;
}
