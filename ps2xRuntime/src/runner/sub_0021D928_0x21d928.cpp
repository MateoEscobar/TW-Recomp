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

// Function: sub_0021D928
// Address: 0x21d928 - 0x21de48
void sub_0021D928_0x21d928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D928_0x21d928");
#endif

    switch (ctx->pc) {
        case 0x21d928u: goto label_21d928;
        case 0x21d92cu: goto label_21d92c;
        case 0x21d930u: goto label_21d930;
        case 0x21d934u: goto label_21d934;
        case 0x21d938u: goto label_21d938;
        case 0x21d93cu: goto label_21d93c;
        case 0x21d940u: goto label_21d940;
        case 0x21d944u: goto label_21d944;
        case 0x21d948u: goto label_21d948;
        case 0x21d94cu: goto label_21d94c;
        case 0x21d950u: goto label_21d950;
        case 0x21d954u: goto label_21d954;
        case 0x21d958u: goto label_21d958;
        case 0x21d95cu: goto label_21d95c;
        case 0x21d960u: goto label_21d960;
        case 0x21d964u: goto label_21d964;
        case 0x21d968u: goto label_21d968;
        case 0x21d96cu: goto label_21d96c;
        case 0x21d970u: goto label_21d970;
        case 0x21d974u: goto label_21d974;
        case 0x21d978u: goto label_21d978;
        case 0x21d97cu: goto label_21d97c;
        case 0x21d980u: goto label_21d980;
        case 0x21d984u: goto label_21d984;
        case 0x21d988u: goto label_21d988;
        case 0x21d98cu: goto label_21d98c;
        case 0x21d990u: goto label_21d990;
        case 0x21d994u: goto label_21d994;
        case 0x21d998u: goto label_21d998;
        case 0x21d99cu: goto label_21d99c;
        case 0x21d9a0u: goto label_21d9a0;
        case 0x21d9a4u: goto label_21d9a4;
        case 0x21d9a8u: goto label_21d9a8;
        case 0x21d9acu: goto label_21d9ac;
        case 0x21d9b0u: goto label_21d9b0;
        case 0x21d9b4u: goto label_21d9b4;
        case 0x21d9b8u: goto label_21d9b8;
        case 0x21d9bcu: goto label_21d9bc;
        case 0x21d9c0u: goto label_21d9c0;
        case 0x21d9c4u: goto label_21d9c4;
        case 0x21d9c8u: goto label_21d9c8;
        case 0x21d9ccu: goto label_21d9cc;
        case 0x21d9d0u: goto label_21d9d0;
        case 0x21d9d4u: goto label_21d9d4;
        case 0x21d9d8u: goto label_21d9d8;
        case 0x21d9dcu: goto label_21d9dc;
        case 0x21d9e0u: goto label_21d9e0;
        case 0x21d9e4u: goto label_21d9e4;
        case 0x21d9e8u: goto label_21d9e8;
        case 0x21d9ecu: goto label_21d9ec;
        case 0x21d9f0u: goto label_21d9f0;
        case 0x21d9f4u: goto label_21d9f4;
        case 0x21d9f8u: goto label_21d9f8;
        case 0x21d9fcu: goto label_21d9fc;
        case 0x21da00u: goto label_21da00;
        case 0x21da04u: goto label_21da04;
        case 0x21da08u: goto label_21da08;
        case 0x21da0cu: goto label_21da0c;
        case 0x21da10u: goto label_21da10;
        case 0x21da14u: goto label_21da14;
        case 0x21da18u: goto label_21da18;
        case 0x21da1cu: goto label_21da1c;
        case 0x21da20u: goto label_21da20;
        case 0x21da24u: goto label_21da24;
        case 0x21da28u: goto label_21da28;
        case 0x21da2cu: goto label_21da2c;
        case 0x21da30u: goto label_21da30;
        case 0x21da34u: goto label_21da34;
        case 0x21da38u: goto label_21da38;
        case 0x21da3cu: goto label_21da3c;
        case 0x21da40u: goto label_21da40;
        case 0x21da44u: goto label_21da44;
        case 0x21da48u: goto label_21da48;
        case 0x21da4cu: goto label_21da4c;
        case 0x21da50u: goto label_21da50;
        case 0x21da54u: goto label_21da54;
        case 0x21da58u: goto label_21da58;
        case 0x21da5cu: goto label_21da5c;
        case 0x21da60u: goto label_21da60;
        case 0x21da64u: goto label_21da64;
        case 0x21da68u: goto label_21da68;
        case 0x21da6cu: goto label_21da6c;
        case 0x21da70u: goto label_21da70;
        case 0x21da74u: goto label_21da74;
        case 0x21da78u: goto label_21da78;
        case 0x21da7cu: goto label_21da7c;
        case 0x21da80u: goto label_21da80;
        case 0x21da84u: goto label_21da84;
        case 0x21da88u: goto label_21da88;
        case 0x21da8cu: goto label_21da8c;
        case 0x21da90u: goto label_21da90;
        case 0x21da94u: goto label_21da94;
        case 0x21da98u: goto label_21da98;
        case 0x21da9cu: goto label_21da9c;
        case 0x21daa0u: goto label_21daa0;
        case 0x21daa4u: goto label_21daa4;
        case 0x21daa8u: goto label_21daa8;
        case 0x21daacu: goto label_21daac;
        case 0x21dab0u: goto label_21dab0;
        case 0x21dab4u: goto label_21dab4;
        case 0x21dab8u: goto label_21dab8;
        case 0x21dabcu: goto label_21dabc;
        case 0x21dac0u: goto label_21dac0;
        case 0x21dac4u: goto label_21dac4;
        case 0x21dac8u: goto label_21dac8;
        case 0x21daccu: goto label_21dacc;
        case 0x21dad0u: goto label_21dad0;
        case 0x21dad4u: goto label_21dad4;
        case 0x21dad8u: goto label_21dad8;
        case 0x21dadcu: goto label_21dadc;
        case 0x21dae0u: goto label_21dae0;
        case 0x21dae4u: goto label_21dae4;
        case 0x21dae8u: goto label_21dae8;
        case 0x21daecu: goto label_21daec;
        case 0x21daf0u: goto label_21daf0;
        case 0x21daf4u: goto label_21daf4;
        case 0x21daf8u: goto label_21daf8;
        case 0x21dafcu: goto label_21dafc;
        case 0x21db00u: goto label_21db00;
        case 0x21db04u: goto label_21db04;
        case 0x21db08u: goto label_21db08;
        case 0x21db0cu: goto label_21db0c;
        case 0x21db10u: goto label_21db10;
        case 0x21db14u: goto label_21db14;
        case 0x21db18u: goto label_21db18;
        case 0x21db1cu: goto label_21db1c;
        case 0x21db20u: goto label_21db20;
        case 0x21db24u: goto label_21db24;
        case 0x21db28u: goto label_21db28;
        case 0x21db2cu: goto label_21db2c;
        case 0x21db30u: goto label_21db30;
        case 0x21db34u: goto label_21db34;
        case 0x21db38u: goto label_21db38;
        case 0x21db3cu: goto label_21db3c;
        case 0x21db40u: goto label_21db40;
        case 0x21db44u: goto label_21db44;
        case 0x21db48u: goto label_21db48;
        case 0x21db4cu: goto label_21db4c;
        case 0x21db50u: goto label_21db50;
        case 0x21db54u: goto label_21db54;
        case 0x21db58u: goto label_21db58;
        case 0x21db5cu: goto label_21db5c;
        case 0x21db60u: goto label_21db60;
        case 0x21db64u: goto label_21db64;
        case 0x21db68u: goto label_21db68;
        case 0x21db6cu: goto label_21db6c;
        case 0x21db70u: goto label_21db70;
        case 0x21db74u: goto label_21db74;
        case 0x21db78u: goto label_21db78;
        case 0x21db7cu: goto label_21db7c;
        case 0x21db80u: goto label_21db80;
        case 0x21db84u: goto label_21db84;
        case 0x21db88u: goto label_21db88;
        case 0x21db8cu: goto label_21db8c;
        case 0x21db90u: goto label_21db90;
        case 0x21db94u: goto label_21db94;
        case 0x21db98u: goto label_21db98;
        case 0x21db9cu: goto label_21db9c;
        case 0x21dba0u: goto label_21dba0;
        case 0x21dba4u: goto label_21dba4;
        case 0x21dba8u: goto label_21dba8;
        case 0x21dbacu: goto label_21dbac;
        case 0x21dbb0u: goto label_21dbb0;
        case 0x21dbb4u: goto label_21dbb4;
        case 0x21dbb8u: goto label_21dbb8;
        case 0x21dbbcu: goto label_21dbbc;
        case 0x21dbc0u: goto label_21dbc0;
        case 0x21dbc4u: goto label_21dbc4;
        case 0x21dbc8u: goto label_21dbc8;
        case 0x21dbccu: goto label_21dbcc;
        case 0x21dbd0u: goto label_21dbd0;
        case 0x21dbd4u: goto label_21dbd4;
        case 0x21dbd8u: goto label_21dbd8;
        case 0x21dbdcu: goto label_21dbdc;
        case 0x21dbe0u: goto label_21dbe0;
        case 0x21dbe4u: goto label_21dbe4;
        case 0x21dbe8u: goto label_21dbe8;
        case 0x21dbecu: goto label_21dbec;
        case 0x21dbf0u: goto label_21dbf0;
        case 0x21dbf4u: goto label_21dbf4;
        case 0x21dbf8u: goto label_21dbf8;
        case 0x21dbfcu: goto label_21dbfc;
        case 0x21dc00u: goto label_21dc00;
        case 0x21dc04u: goto label_21dc04;
        case 0x21dc08u: goto label_21dc08;
        case 0x21dc0cu: goto label_21dc0c;
        case 0x21dc10u: goto label_21dc10;
        case 0x21dc14u: goto label_21dc14;
        case 0x21dc18u: goto label_21dc18;
        case 0x21dc1cu: goto label_21dc1c;
        case 0x21dc20u: goto label_21dc20;
        case 0x21dc24u: goto label_21dc24;
        case 0x21dc28u: goto label_21dc28;
        case 0x21dc2cu: goto label_21dc2c;
        case 0x21dc30u: goto label_21dc30;
        case 0x21dc34u: goto label_21dc34;
        case 0x21dc38u: goto label_21dc38;
        case 0x21dc3cu: goto label_21dc3c;
        case 0x21dc40u: goto label_21dc40;
        case 0x21dc44u: goto label_21dc44;
        case 0x21dc48u: goto label_21dc48;
        case 0x21dc4cu: goto label_21dc4c;
        case 0x21dc50u: goto label_21dc50;
        case 0x21dc54u: goto label_21dc54;
        case 0x21dc58u: goto label_21dc58;
        case 0x21dc5cu: goto label_21dc5c;
        case 0x21dc60u: goto label_21dc60;
        case 0x21dc64u: goto label_21dc64;
        case 0x21dc68u: goto label_21dc68;
        case 0x21dc6cu: goto label_21dc6c;
        case 0x21dc70u: goto label_21dc70;
        case 0x21dc74u: goto label_21dc74;
        case 0x21dc78u: goto label_21dc78;
        case 0x21dc7cu: goto label_21dc7c;
        case 0x21dc80u: goto label_21dc80;
        case 0x21dc84u: goto label_21dc84;
        case 0x21dc88u: goto label_21dc88;
        case 0x21dc8cu: goto label_21dc8c;
        case 0x21dc90u: goto label_21dc90;
        case 0x21dc94u: goto label_21dc94;
        case 0x21dc98u: goto label_21dc98;
        case 0x21dc9cu: goto label_21dc9c;
        case 0x21dca0u: goto label_21dca0;
        case 0x21dca4u: goto label_21dca4;
        case 0x21dca8u: goto label_21dca8;
        case 0x21dcacu: goto label_21dcac;
        case 0x21dcb0u: goto label_21dcb0;
        case 0x21dcb4u: goto label_21dcb4;
        case 0x21dcb8u: goto label_21dcb8;
        case 0x21dcbcu: goto label_21dcbc;
        case 0x21dcc0u: goto label_21dcc0;
        case 0x21dcc4u: goto label_21dcc4;
        case 0x21dcc8u: goto label_21dcc8;
        case 0x21dcccu: goto label_21dccc;
        case 0x21dcd0u: goto label_21dcd0;
        case 0x21dcd4u: goto label_21dcd4;
        case 0x21dcd8u: goto label_21dcd8;
        case 0x21dcdcu: goto label_21dcdc;
        case 0x21dce0u: goto label_21dce0;
        case 0x21dce4u: goto label_21dce4;
        case 0x21dce8u: goto label_21dce8;
        case 0x21dcecu: goto label_21dcec;
        case 0x21dcf0u: goto label_21dcf0;
        case 0x21dcf4u: goto label_21dcf4;
        case 0x21dcf8u: goto label_21dcf8;
        case 0x21dcfcu: goto label_21dcfc;
        case 0x21dd00u: goto label_21dd00;
        case 0x21dd04u: goto label_21dd04;
        case 0x21dd08u: goto label_21dd08;
        case 0x21dd0cu: goto label_21dd0c;
        case 0x21dd10u: goto label_21dd10;
        case 0x21dd14u: goto label_21dd14;
        case 0x21dd18u: goto label_21dd18;
        case 0x21dd1cu: goto label_21dd1c;
        case 0x21dd20u: goto label_21dd20;
        case 0x21dd24u: goto label_21dd24;
        case 0x21dd28u: goto label_21dd28;
        case 0x21dd2cu: goto label_21dd2c;
        case 0x21dd30u: goto label_21dd30;
        case 0x21dd34u: goto label_21dd34;
        case 0x21dd38u: goto label_21dd38;
        case 0x21dd3cu: goto label_21dd3c;
        case 0x21dd40u: goto label_21dd40;
        case 0x21dd44u: goto label_21dd44;
        case 0x21dd48u: goto label_21dd48;
        case 0x21dd4cu: goto label_21dd4c;
        case 0x21dd50u: goto label_21dd50;
        case 0x21dd54u: goto label_21dd54;
        case 0x21dd58u: goto label_21dd58;
        case 0x21dd5cu: goto label_21dd5c;
        case 0x21dd60u: goto label_21dd60;
        case 0x21dd64u: goto label_21dd64;
        case 0x21dd68u: goto label_21dd68;
        case 0x21dd6cu: goto label_21dd6c;
        case 0x21dd70u: goto label_21dd70;
        case 0x21dd74u: goto label_21dd74;
        case 0x21dd78u: goto label_21dd78;
        case 0x21dd7cu: goto label_21dd7c;
        case 0x21dd80u: goto label_21dd80;
        case 0x21dd84u: goto label_21dd84;
        case 0x21dd88u: goto label_21dd88;
        case 0x21dd8cu: goto label_21dd8c;
        case 0x21dd90u: goto label_21dd90;
        case 0x21dd94u: goto label_21dd94;
        case 0x21dd98u: goto label_21dd98;
        case 0x21dd9cu: goto label_21dd9c;
        case 0x21dda0u: goto label_21dda0;
        case 0x21dda4u: goto label_21dda4;
        case 0x21dda8u: goto label_21dda8;
        case 0x21ddacu: goto label_21ddac;
        case 0x21ddb0u: goto label_21ddb0;
        case 0x21ddb4u: goto label_21ddb4;
        case 0x21ddb8u: goto label_21ddb8;
        case 0x21ddbcu: goto label_21ddbc;
        case 0x21ddc0u: goto label_21ddc0;
        case 0x21ddc4u: goto label_21ddc4;
        case 0x21ddc8u: goto label_21ddc8;
        case 0x21ddccu: goto label_21ddcc;
        case 0x21ddd0u: goto label_21ddd0;
        case 0x21ddd4u: goto label_21ddd4;
        case 0x21ddd8u: goto label_21ddd8;
        case 0x21dddcu: goto label_21dddc;
        case 0x21dde0u: goto label_21dde0;
        case 0x21dde4u: goto label_21dde4;
        case 0x21dde8u: goto label_21dde8;
        case 0x21ddecu: goto label_21ddec;
        case 0x21ddf0u: goto label_21ddf0;
        case 0x21ddf4u: goto label_21ddf4;
        case 0x21ddf8u: goto label_21ddf8;
        case 0x21ddfcu: goto label_21ddfc;
        case 0x21de00u: goto label_21de00;
        case 0x21de04u: goto label_21de04;
        case 0x21de08u: goto label_21de08;
        case 0x21de0cu: goto label_21de0c;
        case 0x21de10u: goto label_21de10;
        case 0x21de14u: goto label_21de14;
        case 0x21de18u: goto label_21de18;
        case 0x21de1cu: goto label_21de1c;
        case 0x21de20u: goto label_21de20;
        case 0x21de24u: goto label_21de24;
        case 0x21de28u: goto label_21de28;
        case 0x21de2cu: goto label_21de2c;
        case 0x21de30u: goto label_21de30;
        case 0x21de34u: goto label_21de34;
        case 0x21de38u: goto label_21de38;
        case 0x21de3cu: goto label_21de3c;
        case 0x21de40u: goto label_21de40;
        case 0x21de44u: goto label_21de44;
        default: break;
    }

    ctx->pc = 0x21d928u;

label_21d928:
    // 0x21d928: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x21d928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_21d92c:
    // 0x21d92c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x21d92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_21d930:
    // 0x21d930: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x21d930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_21d934:
    // 0x21d934: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x21d934u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21d938:
    // 0x21d938: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x21d938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_21d93c:
    // 0x21d93c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x21d93cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21d940:
    // 0x21d940: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x21d940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_21d944:
    // 0x21d944: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x21d944u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_21d948:
    // 0x21d948: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x21d948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_21d94c:
    // 0x21d94c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21d94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d950:
    // 0x21d950: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x21d950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_21d954:
    // 0x21d954: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21d954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d958:
    // 0x21d958: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x21d958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_21d95c:
    // 0x21d95c: 0x26740090  addiu       $s4, $s3, 0x90
    ctx->pc = 0x21d95cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_21d960:
    // 0x21d960: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x21d960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_21d964:
    // 0x21d964: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x21d964u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_21d968:
    // 0x21d968: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x21d968u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d96c:
    // 0x21d96c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x21d96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_21d970:
    // 0x21d970: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21d970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_21d974:
    // 0x21d974: 0xc047e6c  jal         func_11F9B0
label_21d978:
    if (ctx->pc == 0x21D978u) {
        ctx->pc = 0x21D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D974u;
        // 0x21d978: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D97Cu;
        goto label_21d97c;
    }
    ctx->pc = 0x21D974u;
    SET_GPR_U32(ctx, 31, 0x21D97Cu);
    ctx->pc = 0x21D978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D974u;
    // 0x21d978: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x21D974u, 0x21D97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D97Cu;
label_21d97c:
    // 0x21d97c: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x21d97cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_21d980:
    // 0x21d980: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x21d980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_21d984:
    // 0x21d984: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21d984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21d988:
    // 0x21d988: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21d988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21d98c:
    // 0x21d98c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21d98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21d990:
    // 0x21d990: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x21d990u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_21d994:
    // 0x21d994: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x21d994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_21d998:
    // 0x21d998: 0x40f809  jalr        $v0
label_21d99c:
    if (ctx->pc == 0x21D99Cu) {
        ctx->pc = 0x21D99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D998u;
        // 0x21d99c: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D9A0u;
        goto label_21d9a0;
    }
    ctx->pc = 0x21D998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21D9A0u);
        ctx->pc = 0x21D99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D998u;
        // 0x21d99c: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D998u, 0x21D9A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21D9A0u;
label_21d9a0:
    // 0x21d9a0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x21d9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_21d9a4:
    // 0x21d9a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d9a8:
    // 0x21d9a8: 0x24764b00  addiu       $s6, $v1, 0x4B00
    ctx->pc = 0x21d9a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_21d9ac:
    // 0x21d9ac: 0x0  nop
    ctx->pc = 0x21d9acu;
    // NOP
label_21d9b0:
    // 0x21d9b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21d9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21d9b4:
    // 0x21d9b4: 0x86900002  lh          $s0, 0x2($s4)
    ctx->pc = 0x21d9b4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_21d9b8:
    // 0x21d9b8: 0x84640170  lh          $a0, 0x170($v1)
    ctx->pc = 0x21d9b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 368)));
label_21d9bc:
    // 0x21d9bc: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x21d9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_21d9c0:
    // 0x21d9c0: 0x8c620174  lw          $v0, 0x174($v1)
    ctx->pc = 0x21d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 372)));
label_21d9c4:
    // 0x21d9c4: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x21d9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_21d9c8:
    // 0x21d9c8: 0x40f809  jalr        $v0
label_21d9cc:
    if (ctx->pc == 0x21D9CCu) {
        ctx->pc = 0x21D9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D9C8u;
        // 0x21d9cc: 0x2168021  addu        $s0, $s0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D9D0u;
        goto label_21d9d0;
    }
    ctx->pc = 0x21D9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21D9D0u);
        ctx->pc = 0x21D9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D9C8u;
        // 0x21d9cc: 0x2168021  addu        $s0, $s0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D9C8u, 0x21D9D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21D9D0u;
label_21d9d0:
    // 0x21d9d0: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x21d9d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21d9d4:
    // 0x21d9d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21d9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21d9d8:
    // 0x21d9d8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x21d9d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_21d9dc:
    // 0x21d9dc: 0x84e40170  lh          $a0, 0x170($a3)
    ctx->pc = 0x21d9dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 368)));
label_21d9e0:
    // 0x21d9e0: 0x7a060000  lq          $a2, 0x0($s0)
    ctx->pc = 0x21d9e0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_21d9e4:
    // 0x21d9e4: 0x8ce20174  lw          $v0, 0x174($a3)
    ctx->pc = 0x21d9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
label_21d9e8:
    // 0x21d9e8: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x21d9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_21d9ec:
    // 0x21d9ec: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x21d9ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_21d9f0:
    // 0x21d9f0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x21d9f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_21d9f4:
    // 0x21d9f4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x21d9f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21d9f8:
    // 0x21d9f8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x21d9f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21d9fc:
    // 0x21d9fc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x21d9fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21da00:
    // 0x21da00: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x21da00u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
label_21da04:
    // 0x21da04: 0x4487a000  mtc1        $a3, $f20
    ctx->pc = 0x21da04u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_21da08:
    // 0x21da08: 0x40f809  jalr        $v0
label_21da0c:
    if (ctx->pc == 0x21DA0Cu) {
        ctx->pc = 0x21DA10u;
        goto label_21da10;
    }
    ctx->pc = 0x21DA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21DA10u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DA08u, 0x21DA10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21DA10u;
label_21da10:
    // 0x21da10: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x21da10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21da14:
    // 0x21da14: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x21da14u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_21da18:
    // 0x21da18: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x21da18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21da1c:
    // 0x21da1c: 0x0  nop
    ctx->pc = 0x21da1cu;
    // NOP
label_21da20:
    // 0x21da20: 0x4501009e  bc1t        . + 4 + (0x9E << 2)
label_21da24:
    if (ctx->pc == 0x21DA24u) {
        ctx->pc = 0x21DA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA20u;
        // 0x21da24: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DA28u;
        goto label_21da28;
    }
    ctx->pc = 0x21DA20u;
    {
        const bool branch_taken_0x21da20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21DA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA20u;
        // 0x21da24: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da20) {
            ctx->pc = 0x21DC9Cu;
            goto label_21dc9c;
        }
    }
    ctx->pc = 0x21DA28u;
label_21da28:
    // 0x21da28: 0x2e420006  sltiu       $v0, $s2, 0x6
    ctx->pc = 0x21da28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_21da2c:
    // 0x21da2c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_21da30:
    if (ctx->pc == 0x21DA30u) {
        ctx->pc = 0x21DA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA2Cu;
        // 0x21da30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DA34u;
        goto label_21da34;
    }
    ctx->pc = 0x21DA2Cu;
    {
        const bool branch_taken_0x21da2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA2Cu;
        // 0x21da30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da2c) {
            ctx->pc = 0x21D9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d9b0;
        }
    }
    ctx->pc = 0x21DA34u;
label_21da34:
    // 0x21da34: 0x12e0003b  beqz        $s7, . + 4 + (0x3B << 2)
label_21da38:
    if (ctx->pc == 0x21DA38u) {
        ctx->pc = 0x21DA3Cu;
        goto label_21da3c;
    }
    ctx->pc = 0x21DA34u;
    {
        const bool branch_taken_0x21da34 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x21da34) {
            ctx->pc = 0x21DB24u;
            goto label_21db24;
        }
    }
    ctx->pc = 0x21DA3Cu;
label_21da3c:
    // 0x21da3c: 0xc047e6c  jal         func_11F9B0
label_21da40:
    if (ctx->pc == 0x21DA40u) {
        ctx->pc = 0x21DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA3Cu;
        // 0x21da40: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DA44u;
        goto label_21da44;
    }
    ctx->pc = 0x21DA3Cu;
    SET_GPR_U32(ctx, 31, 0x21DA44u);
    ctx->pc = 0x21DA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DA3Cu;
    // 0x21da40: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x21DA3Cu, 0x21DA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DA44u;
label_21da44:
    // 0x21da44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21da44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21da48:
    // 0x21da48: 0x122000f0  beqz        $s1, . + 4 + (0xF0 << 2)
label_21da4c:
    if (ctx->pc == 0x21DA4Cu) {
        ctx->pc = 0x21DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA48u;
        // 0x21da4c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DA50u;
        goto label_21da50;
    }
    ctx->pc = 0x21DA48u;
    {
        const bool branch_taken_0x21da48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA48u;
        // 0x21da4c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da48) {
            ctx->pc = 0x21DE0Cu;
            goto label_21de0c;
        }
    }
    ctx->pc = 0x21DA50u;
label_21da50:
    // 0x21da50: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21da50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21da54:
    // 0x21da54: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x21da54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_21da58:
    // 0x21da58: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x21da58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_21da5c:
    // 0x21da5c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x21da5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_21da60:
    // 0x21da60: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x21da60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_21da64:
    // 0x21da64: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21da64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21da68:
    // 0x21da68: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x21da68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_21da6c:
    // 0x21da6c: 0x26740090  addiu       $s4, $s3, 0x90
    ctx->pc = 0x21da6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_21da70:
    // 0x21da70: 0x60f809  jalr        $v1
label_21da74:
    if (ctx->pc == 0x21DA74u) {
        ctx->pc = 0x21DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA70u;
        // 0x21da74: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DA78u;
        goto label_21da78;
    }
    ctx->pc = 0x21DA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21DA78u);
        ctx->pc = 0x21DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA70u;
        // 0x21da74: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DA70u, 0x21DA78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21DA78u;
label_21da78:
    // 0x21da78: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x21da78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21da7c:
    // 0x21da7c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x21da7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_21da80:
    // 0x21da80: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x21da80u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21da84:
    // 0x21da84: 0x24764b00  addiu       $s6, $v1, 0x4B00
    ctx->pc = 0x21da84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_21da88:
    // 0x21da88: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x21da88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_21da8c:
    // 0x21da8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21da8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21da90:
    // 0x21da90: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x21da90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
label_21da94:
    // 0x21da94: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21da94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21da98:
    // 0x21da98: 0x86900002  lh          $s0, 0x2($s4)
    ctx->pc = 0x21da98u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_21da9c:
    // 0x21da9c: 0x84640170  lh          $a0, 0x170($v1)
    ctx->pc = 0x21da9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 368)));
label_21daa0:
    // 0x21daa0: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x21daa0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_21daa4:
    // 0x21daa4: 0x8c620174  lw          $v0, 0x174($v1)
    ctx->pc = 0x21daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 372)));
label_21daa8:
    // 0x21daa8: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x21daa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_21daac:
    // 0x21daac: 0x40f809  jalr        $v0
label_21dab0:
    if (ctx->pc == 0x21DAB0u) {
        ctx->pc = 0x21DAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DAACu;
        // 0x21dab0: 0x2168021  addu        $s0, $s0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DAB4u;
        goto label_21dab4;
    }
    ctx->pc = 0x21DAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21DAB4u);
        ctx->pc = 0x21DAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DAACu;
        // 0x21dab0: 0x2168021  addu        $s0, $s0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DAACu, 0x21DAB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21DAB4u;
label_21dab4:
    // 0x21dab4: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x21dab4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21dab8:
    // 0x21dab8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21dab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21dabc:
    // 0x21dabc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x21dabcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_21dac0:
    // 0x21dac0: 0x84e40170  lh          $a0, 0x170($a3)
    ctx->pc = 0x21dac0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 368)));
label_21dac4:
    // 0x21dac4: 0x7a060000  lq          $a2, 0x0($s0)
    ctx->pc = 0x21dac4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_21dac8:
    // 0x21dac8: 0x8ce20174  lw          $v0, 0x174($a3)
    ctx->pc = 0x21dac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
label_21dacc:
    // 0x21dacc: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x21daccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_21dad0:
    // 0x21dad0: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x21dad0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_21dad4:
    // 0x21dad4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x21dad4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_21dad8:
    // 0x21dad8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x21dad8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21dadc:
    // 0x21dadc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x21dadcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21dae0:
    // 0x21dae0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x21dae0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21dae4:
    // 0x21dae4: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x21dae4u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
label_21dae8:
    // 0x21dae8: 0x4487a000  mtc1        $a3, $f20
    ctx->pc = 0x21dae8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_21daec:
    // 0x21daec: 0x40f809  jalr        $v0
label_21daf0:
    if (ctx->pc == 0x21DAF0u) {
        ctx->pc = 0x21DAF4u;
        goto label_21daf4;
    }
    ctx->pc = 0x21DAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21DAF4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DAECu, 0x21DAF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21DAF4u;
label_21daf4:
    // 0x21daf4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x21daf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21daf8:
    // 0x21daf8: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x21daf8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_21dafc:
    // 0x21dafc: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x21dafcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21db00:
    // 0x21db00: 0x0  nop
    ctx->pc = 0x21db00u;
    // NOP
label_21db04:
    // 0x21db04: 0x45010063  bc1t        . + 4 + (0x63 << 2)
label_21db08:
    if (ctx->pc == 0x21DB08u) {
        ctx->pc = 0x21DB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB04u;
        // 0x21db08: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DB0Cu;
        goto label_21db0c;
    }
    ctx->pc = 0x21DB04u;
    {
        const bool branch_taken_0x21db04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21DB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB04u;
        // 0x21db08: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21db04) {
            ctx->pc = 0x21DC94u;
            goto label_21dc94;
        }
    }
    ctx->pc = 0x21DB0Cu;
label_21db0c:
    // 0x21db0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21db0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21db10:
    // 0x21db10: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x21db10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_21db14:
    // 0x21db14: 0x5440ffe0  bnel        $v0, $zero, . + 4 + (-0x20 << 2)
label_21db18:
    if (ctx->pc == 0x21DB18u) {
        ctx->pc = 0x21DB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB14u;
        // 0x21db18: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DB1Cu;
        goto label_21db1c;
    }
    ctx->pc = 0x21DB14u;
    {
        const bool branch_taken_0x21db14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21db14) {
            ctx->pc = 0x21DB18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DB14u;
            // 0x21db18: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21da98;
        }
    }
    ctx->pc = 0x21DB1Cu;
label_21db1c:
    // 0x21db1c: 0x16e000bc  bnez        $s7, . + 4 + (0xBC << 2)
label_21db20:
    if (ctx->pc == 0x21DB20u) {
        ctx->pc = 0x21DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB1Cu;
        // 0x21db20: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DB24u;
        goto label_21db24;
    }
    ctx->pc = 0x21DB1Cu;
    {
        const bool branch_taken_0x21db1c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB1Cu;
        // 0x21db20: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21db1c) {
            ctx->pc = 0x21DE10u;
            goto label_21de10;
        }
    }
    ctx->pc = 0x21DB24u;
label_21db24:
    // 0x21db24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21db24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21db28:
    // 0x21db28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21db28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21db2c:
    // 0x21db2c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x21db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_21db30:
    // 0x21db30: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x21db30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_21db34:
    // 0x21db34: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x21db34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_21db38:
    // 0x21db38: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x21db38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_21db3c:
    // 0x21db3c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x21db3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21db40:
    // 0x21db40: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x21db40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_21db44:
    // 0x21db44: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x21db44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_21db48:
    // 0x21db48: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x21db48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_21db4c:
    // 0x21db4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21db4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21db50:
    // 0x21db50: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x21db50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_21db54:
    // 0x21db54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21db54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21db58:
    // 0x21db58: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x21db58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_21db5c:
    // 0x21db5c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x21db5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_21db60:
    // 0x21db60: 0xc0e9694  jal         func_3A5A50
label_21db64:
    if (ctx->pc == 0x21DB64u) {
        ctx->pc = 0x21DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB60u;
        // 0x21db64: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DB68u;
        goto label_21db68;
    }
    ctx->pc = 0x21DB60u;
    SET_GPR_U32(ctx, 31, 0x21DB68u);
    ctx->pc = 0x21DB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DB60u;
    // 0x21db64: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x21DB60u, 0x21DB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DB68u;
label_21db68:
    // 0x21db68: 0x104000a9  beqz        $v0, . + 4 + (0xA9 << 2)
label_21db6c:
    if (ctx->pc == 0x21DB6Cu) {
        ctx->pc = 0x21DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB68u;
        // 0x21db6c: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DB70u;
        goto label_21db70;
    }
    ctx->pc = 0x21DB68u;
    {
        const bool branch_taken_0x21db68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB68u;
        // 0x21db6c: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21db68) {
            ctx->pc = 0x21DE10u;
            goto label_21de10;
        }
    }
    ctx->pc = 0x21DB70u;
label_21db70:
    // 0x21db70: 0x12a0007e  beqz        $s5, . + 4 + (0x7E << 2)
label_21db74:
    if (ctx->pc == 0x21DB74u) {
        ctx->pc = 0x21DB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB70u;
        // 0x21db74: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DB78u;
        goto label_21db78;
    }
    ctx->pc = 0x21DB70u;
    {
        const bool branch_taken_0x21db70 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB70u;
        // 0x21db74: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21db70) {
            ctx->pc = 0x21DD6Cu;
            goto label_21dd6c;
        }
    }
    ctx->pc = 0x21DB78u;
label_21db78:
    // 0x21db78: 0xc089018  jal         func_224060
label_21db7c:
    if (ctx->pc == 0x21DB7Cu) {
        ctx->pc = 0x21DB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB78u;
        // 0x21db7c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DB80u;
        goto label_21db80;
    }
    ctx->pc = 0x21DB78u;
    SET_GPR_U32(ctx, 31, 0x21DB80u);
    ctx->pc = 0x21DB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DB78u;
    // 0x21db7c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224060u, 0x21DB78u, 0x21DB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DB80u;
label_21db80:
    // 0x21db80: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
label_21db84:
    if (ctx->pc == 0x21DB84u) {
        ctx->pc = 0x21DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB80u;
        // 0x21db84: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DB88u;
        goto label_21db88;
    }
    ctx->pc = 0x21DB80u;
    {
        const bool branch_taken_0x21db80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB80u;
        // 0x21db84: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21db80) {
            ctx->pc = 0x21DD6Cu;
            goto label_21dd6c;
        }
    }
    ctx->pc = 0x21DB88u;
label_21db88:
    // 0x21db88: 0xc089bfc  jal         func_226FF0
label_21db8c:
    if (ctx->pc == 0x21DB8Cu) {
        ctx->pc = 0x21DB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB88u;
        // 0x21db8c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DB90u;
        goto label_21db90;
    }
    ctx->pc = 0x21DB88u;
    SET_GPR_U32(ctx, 31, 0x21DB90u);
    ctx->pc = 0x21DB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DB88u;
    // 0x21db8c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x21DB88u, 0x21DB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DB90u;
label_21db90:
    // 0x21db90: 0xc0e57ce  jal         func_395F38
label_21db94:
    if (ctx->pc == 0x21DB94u) {
        ctx->pc = 0x21DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB90u;
        // 0x21db94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DB98u;
        goto label_21db98;
    }
    ctx->pc = 0x21DB90u;
    SET_GPR_U32(ctx, 31, 0x21DB98u);
    ctx->pc = 0x21DB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DB90u;
    // 0x21db94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x21DB90u, 0x21DB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DB98u;
label_21db98:
    // 0x21db98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21db98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21db9c:
    // 0x21db9c: 0x12000072  beqz        $s0, . + 4 + (0x72 << 2)
label_21dba0:
    if (ctx->pc == 0x21DBA0u) {
        ctx->pc = 0x21DBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB9Cu;
        // 0x21dba0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DBA4u;
        goto label_21dba4;
    }
    ctx->pc = 0x21DB9Cu;
    {
        const bool branch_taken_0x21db9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB9Cu;
        // 0x21dba0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21db9c) {
            ctx->pc = 0x21DD68u;
            goto label_21dd68;
        }
    }
    ctx->pc = 0x21DBA4u;
label_21dba4:
    // 0x21dba4: 0x96050112  lhu         $a1, 0x112($s0)
    ctx->pc = 0x21dba4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
label_21dba8:
    // 0x21dba8: 0xc0e44cc  jal         func_391330
label_21dbac:
    if (ctx->pc == 0x21DBACu) {
        ctx->pc = 0x21DBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DBA8u;
        // 0x21dbac: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DBB0u;
        goto label_21dbb0;
    }
    ctx->pc = 0x21DBA8u;
    SET_GPR_U32(ctx, 31, 0x21DBB0u);
    ctx->pc = 0x21DBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DBA8u;
    // 0x21dbac: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x21DBA8u, 0x21DBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DBB0u;
label_21dbb0:
    // 0x21dbb0: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x21dbb0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_21dbb4:
    // 0x21dbb4: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x21dbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_21dbb8:
    // 0x21dbb8: 0x1462003a  bne         $v1, $v0, . + 4 + (0x3A << 2)
label_21dbbc:
    if (ctx->pc == 0x21DBBCu) {
        ctx->pc = 0x21DBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DBB8u;
        // 0x21dbbc: 0x3c0278ac  lui         $v0, 0x78AC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30892 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DBC0u;
        goto label_21dbc0;
    }
    ctx->pc = 0x21DBB8u;
    {
        const bool branch_taken_0x21dbb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21DBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DBB8u;
        // 0x21dbbc: 0x3c0278ac  lui         $v0, 0x78AC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30892 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dbb8) {
            ctx->pc = 0x21DCA4u;
            goto label_21dca4;
        }
    }
    ctx->pc = 0x21DBC0u;
label_21dbc0:
    // 0x21dbc0: 0xc0874fa  jal         func_21D3E8
label_21dbc4:
    if (ctx->pc == 0x21DBC4u) {
        ctx->pc = 0x21DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DBC0u;
        // 0x21dbc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DBC8u;
        goto label_21dbc8;
    }
    ctx->pc = 0x21DBC0u;
    SET_GPR_U32(ctx, 31, 0x21DBC8u);
    ctx->pc = 0x21DBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DBC0u;
    // 0x21dbc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x21DBC0u, 0x21DBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DBC8u;
label_21dbc8:
    // 0x21dbc8: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x21dbc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_21dbcc:
    // 0x21dbcc: 0x1060008f  beqz        $v1, . + 4 + (0x8F << 2)
label_21dbd0:
    if (ctx->pc == 0x21DBD0u) {
        ctx->pc = 0x21DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DBCCu;
        // 0x21dbd0: 0x3802b  sltu        $s0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DBD4u;
        goto label_21dbd4;
    }
    ctx->pc = 0x21DBCCu;
    {
        const bool branch_taken_0x21dbcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DBCCu;
        // 0x21dbd0: 0x3802b  sltu        $s0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dbcc) {
            ctx->pc = 0x21DE0Cu;
            goto label_21de0c;
        }
    }
    ctx->pc = 0x21DBD4u;
label_21dbd4:
    // 0x21dbd4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21dbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21dbd8:
    // 0x21dbd8: 0xc040680  jal         func_101A00
label_21dbdc:
    if (ctx->pc == 0x21DBDCu) {
        ctx->pc = 0x21DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DBD8u;
        // 0x21dbdc: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DBE0u;
        goto label_21dbe0;
    }
    ctx->pc = 0x21DBD8u;
    SET_GPR_U32(ctx, 31, 0x21DBE0u);
    ctx->pc = 0x21DBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DBD8u;
    // 0x21dbdc: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x21DBD8u, 0x21DBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DBE0u;
label_21dbe0:
    // 0x21dbe0: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x21dbe0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_21dbe4:
    // 0x21dbe4: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x21dbe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
label_21dbe8:
    // 0x21dbe8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21dbe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21dbec:
    // 0x21dbec: 0xc10b1c6  jal         func_42C718
label_21dbf0:
    if (ctx->pc == 0x21DBF0u) {
        ctx->pc = 0x21DBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DBECu;
        // 0x21dbf0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DBF4u;
        goto label_21dbf4;
    }
    ctx->pc = 0x21DBECu;
    SET_GPR_U32(ctx, 31, 0x21DBF4u);
    ctx->pc = 0x21DBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DBECu;
    // 0x21dbf0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x21DBECu, 0x21DBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DBF4u;
label_21dbf4:
    // 0x21dbf4: 0x826701b0  lb          $a3, 0x1B0($s3)
    ctx->pc = 0x21dbf4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_21dbf8:
    // 0x21dbf8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x21dbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_21dbfc:
    // 0x21dbfc: 0x2463deb8  addiu       $v1, $v1, -0x2148
    ctx->pc = 0x21dbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958776));
label_21dc00:
    // 0x21dc00: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x21dc00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_21dc04:
    // 0x21dc04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21dc04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21dc08:
    // 0x21dc08: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x21dc08u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_21dc0c:
    // 0x21dc0c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x21dc0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21dc10:
    // 0x21dc10: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x21dc10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_21dc14:
    // 0x21dc14: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x21dc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21dc18:
    // 0x21dc18: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x21dc18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_21dc1c:
    // 0x21dc1c: 0xc063514  jal         func_18D450
label_21dc20:
    if (ctx->pc == 0x21DC20u) {
        ctx->pc = 0x21DC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC1Cu;
        // 0x21dc20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DC24u;
        goto label_21dc24;
    }
    ctx->pc = 0x21DC1Cu;
    SET_GPR_U32(ctx, 31, 0x21DC24u);
    ctx->pc = 0x21DC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DC1Cu;
    // 0x21dc20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D450u, 0x21DC1Cu, 0x21DC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DC24u;
label_21dc24:
    // 0x21dc24: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x21dc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_21dc28:
    // 0x21dc28: 0x908256e2  lbu         $v0, 0x56E2($a0)
    ctx->pc = 0x21dc28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
label_21dc2c:
    // 0x21dc2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_21dc30:
    if (ctx->pc == 0x21DC30u) {
        ctx->pc = 0x21DC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC2Cu;
        // 0x21dc30: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DC34u;
        goto label_21dc34;
    }
    ctx->pc = 0x21DC2Cu;
    {
        const bool branch_taken_0x21dc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC2Cu;
        // 0x21dc30: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dc2c) {
            ctx->pc = 0x21DC44u;
            goto label_21dc44;
        }
    }
    ctx->pc = 0x21DC34u;
label_21dc34:
    // 0x21dc34: 0xc107444  jal         func_41D110
label_21dc38:
    if (ctx->pc == 0x21DC38u) {
        ctx->pc = 0x21DC3Cu;
        goto label_21dc3c;
    }
    ctx->pc = 0x21DC34u;
    SET_GPR_U32(ctx, 31, 0x21DC3Cu);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x21DC34u, 0x21DC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DC3Cu;
label_21dc3c:
    // 0x21dc3c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x21dc3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21dc40:
    // 0x21dc40: 0x202180a  movz        $v1, $s0, $v0
    ctx->pc = 0x21dc40u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
label_21dc44:
    // 0x21dc44: 0x10600072  beqz        $v1, . + 4 + (0x72 << 2)
label_21dc48:
    if (ctx->pc == 0x21DC48u) {
        ctx->pc = 0x21DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC44u;
        // 0x21dc48: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DC4Cu;
        goto label_21dc4c;
    }
    ctx->pc = 0x21DC44u;
    {
        const bool branch_taken_0x21dc44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC44u;
        // 0x21dc48: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dc44) {
            ctx->pc = 0x21DE10u;
            goto label_21de10;
        }
    }
    ctx->pc = 0x21DC4Cu;
label_21dc4c:
    // 0x21dc4c: 0xc073a8e  jal         func_1CEA38
label_21dc50:
    if (ctx->pc == 0x21DC50u) {
        ctx->pc = 0x21DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC4Cu;
        // 0x21dc50: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DC54u;
        goto label_21dc54;
    }
    ctx->pc = 0x21DC4Cu;
    SET_GPR_U32(ctx, 31, 0x21DC54u);
    ctx->pc = 0x21DC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DC4Cu;
    // 0x21dc50: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x21DC4Cu, 0x21DC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DC54u;
label_21dc54:
    // 0x21dc54: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
label_21dc58:
    if (ctx->pc == 0x21DC58u) {
        ctx->pc = 0x21DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC54u;
        // 0x21dc58: 0x8e25489c  lw          $a1, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DC5Cu;
        goto label_21dc5c;
    }
    ctx->pc = 0x21DC54u;
    {
        const bool branch_taken_0x21dc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC54u;
        // 0x21dc58: 0x8e25489c  lw          $a1, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dc54) {
            ctx->pc = 0x21DE0Cu;
            goto label_21de0c;
        }
    }
    ctx->pc = 0x21DC5Cu;
label_21dc5c:
    // 0x21dc5c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x21dc5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_21dc60:
    // 0x21dc60: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x21dc60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
label_21dc64:
    // 0x21dc64: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x21dc64u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_21dc68:
    // 0x21dc68: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x21dc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_21dc6c:
    // 0x21dc6c: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
label_21dc70:
    if (ctx->pc == 0x21DC70u) {
        ctx->pc = 0x21DC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC6Cu;
        // 0x21dc70: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DC74u;
        goto label_21dc74;
    }
    ctx->pc = 0x21DC6Cu;
    {
        const bool branch_taken_0x21dc6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC6Cu;
        // 0x21dc70: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dc6c) {
            ctx->pc = 0x21DE10u;
            goto label_21de10;
        }
    }
    ctx->pc = 0x21DC74u;
label_21dc74:
    // 0x21dc74: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x21dc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_21dc78:
    // 0x21dc78: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x21dc78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_21dc7c:
    // 0x21dc7c: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x21dc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_21dc80:
    // 0x21dc80: 0x24849250  addiu       $a0, $a0, -0x6DB0
    ctx->pc = 0x21dc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
label_21dc84:
    // 0x21dc84: 0xc07387a  jal         func_1CE1E8
label_21dc88:
    if (ctx->pc == 0x21DC88u) {
        ctx->pc = 0x21DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC84u;
        // 0x21dc88: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DC8Cu;
        goto label_21dc8c;
    }
    ctx->pc = 0x21DC84u;
    SET_GPR_U32(ctx, 31, 0x21DC8Cu);
    ctx->pc = 0x21DC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DC84u;
    // 0x21dc88: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE1E8u, 0x21DC84u, 0x21DC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DC8Cu;
label_21dc8c:
    // 0x21dc8c: 0x10000060  b           . + 4 + (0x60 << 2)
label_21dc90:
    if (ctx->pc == 0x21DC90u) {
        ctx->pc = 0x21DC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC8Cu;
        // 0x21dc90: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DC94u;
        goto label_21dc94;
    }
    ctx->pc = 0x21DC8Cu;
    {
        const bool branch_taken_0x21dc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC8Cu;
        // 0x21dc90: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dc8c) {
            ctx->pc = 0x21DE10u;
            goto label_21de10;
        }
    }
    ctx->pc = 0x21DC94u;
label_21dc94:
    // 0x21dc94: 0x1000ffa1  b           . + 4 + (-0x5F << 2)
label_21dc98:
    if (ctx->pc == 0x21DC98u) {
        ctx->pc = 0x21DC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC94u;
        // 0x21dc98: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DC9Cu;
        goto label_21dc9c;
    }
    ctx->pc = 0x21DC94u;
    {
        const bool branch_taken_0x21dc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC94u;
        // 0x21dc98: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dc94) {
            ctx->pc = 0x21DB1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21db1c;
        }
    }
    ctx->pc = 0x21DC9Cu;
label_21dc9c:
    // 0x21dc9c: 0x1000ff65  b           . + 4 + (-0x9B << 2)
label_21dca0:
    if (ctx->pc == 0x21DCA0u) {
        ctx->pc = 0x21DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC9Cu;
        // 0x21dca0: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DCA4u;
        goto label_21dca4;
    }
    ctx->pc = 0x21DC9Cu;
    {
        const bool branch_taken_0x21dc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC9Cu;
        // 0x21dca0: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dc9c) {
            ctx->pc = 0x21DA34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21da34;
        }
    }
    ctx->pc = 0x21DCA4u;
label_21dca4:
    // 0x21dca4: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x21dca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_21dca8:
    // 0x21dca8: 0x34422b4a  ori         $v0, $v0, 0x2B4A
    ctx->pc = 0x21dca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11082);
label_21dcac:
    // 0x21dcac: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
label_21dcb0:
    if (ctx->pc == 0x21DCB0u) {
        ctx->pc = 0x21DCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DCACu;
        // 0x21dcb0: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DCB4u;
        goto label_21dcb4;
    }
    ctx->pc = 0x21DCACu;
    {
        const bool branch_taken_0x21dcac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21DCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DCACu;
        // 0x21dcb0: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dcac) {
            ctx->pc = 0x21DD64u;
            goto label_21dd64;
        }
    }
    ctx->pc = 0x21DCB4u;
label_21dcb4:
    // 0x21dcb4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_21dcb8:
    if (ctx->pc == 0x21DCB8u) {
        ctx->pc = 0x21DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DCB4u;
        // 0x21dcb8: 0x3c0239b7  lui         $v0, 0x39B7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14775 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DCBCu;
        goto label_21dcbc;
    }
    ctx->pc = 0x21DCB4u;
    {
        const bool branch_taken_0x21dcb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DCB4u;
        // 0x21dcb8: 0x3c0239b7  lui         $v0, 0x39B7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14775 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dcb4) {
            ctx->pc = 0x21DD08u;
            goto label_21dd08;
        }
    }
    ctx->pc = 0x21DCBCu;
label_21dcbc:
    // 0x21dcbc: 0x3442cc9a  ori         $v0, $v0, 0xCC9A
    ctx->pc = 0x21dcbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52378);
label_21dcc0:
    // 0x21dcc0: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
label_21dcc4:
    if (ctx->pc == 0x21DCC4u) {
        ctx->pc = 0x21DCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DCC0u;
        // 0x21dcc4: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DCC8u;
        goto label_21dcc8;
    }
    ctx->pc = 0x21DCC0u;
    {
        const bool branch_taken_0x21dcc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21DCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DCC0u;
        // 0x21dcc4: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dcc0) {
            ctx->pc = 0x21DD64u;
            goto label_21dd64;
        }
    }
    ctx->pc = 0x21DCC8u;
label_21dcc8:
    // 0x21dcc8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_21dccc:
    if (ctx->pc == 0x21DCCCu) {
        ctx->pc = 0x21DCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DCC8u;
        // 0x21dccc: 0x3c0247f7  lui         $v0, 0x47F7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18423 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DCD0u;
        goto label_21dcd0;
    }
    ctx->pc = 0x21DCC8u;
    {
        const bool branch_taken_0x21dcc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DCC8u;
        // 0x21dccc: 0x3c0247f7  lui         $v0, 0x47F7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18423 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dcc8) {
            ctx->pc = 0x21DCE8u;
            goto label_21dce8;
        }
    }
    ctx->pc = 0x21DCD0u;
label_21dcd0:
    // 0x21dcd0: 0x3c022a26  lui         $v0, 0x2A26
    ctx->pc = 0x21dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10790 << 16));
label_21dcd4:
    // 0x21dcd4: 0x34423bb3  ori         $v0, $v0, 0x3BB3
    ctx->pc = 0x21dcd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15283);
label_21dcd8:
    // 0x21dcd8: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
label_21dcdc:
    if (ctx->pc == 0x21DCDCu) {
        ctx->pc = 0x21DCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DCD8u;
        // 0x21dcdc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DCE0u;
        goto label_21dce0;
    }
    ctx->pc = 0x21DCD8u;
    {
        const bool branch_taken_0x21dcd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21DCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DCD8u;
        // 0x21dcdc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dcd8) {
            ctx->pc = 0x21DD64u;
            goto label_21dd64;
        }
    }
    ctx->pc = 0x21DCE0u;
label_21dce0:
    // 0x21dce0: 0x10000023  b           . + 4 + (0x23 << 2)
label_21dce4:
    if (ctx->pc == 0x21DCE4u) {
        ctx->pc = 0x21DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DCE0u;
        // 0x21dce4: 0x8c442c7c  lw          $a0, 0x2C7C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DCE8u;
        goto label_21dce8;
    }
    ctx->pc = 0x21DCE0u;
    {
        const bool branch_taken_0x21dce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DCE0u;
        // 0x21dce4: 0x8c442c7c  lw          $a0, 0x2C7C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dce0) {
            ctx->pc = 0x21DD70u;
            goto label_21dd70;
        }
    }
    ctx->pc = 0x21DCE8u;
label_21dce8:
    // 0x21dce8: 0x344238ee  ori         $v0, $v0, 0x38EE
    ctx->pc = 0x21dce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14574);
label_21dcec:
    // 0x21dcec: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
label_21dcf0:
    if (ctx->pc == 0x21DCF0u) {
        ctx->pc = 0x21DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DCECu;
        // 0x21dcf0: 0x3c024b95  lui         $v0, 0x4B95 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19349 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DCF4u;
        goto label_21dcf4;
    }
    ctx->pc = 0x21DCECu;
    {
        const bool branch_taken_0x21dcec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DCECu;
        // 0x21dcf0: 0x3c024b95  lui         $v0, 0x4B95 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19349 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dcec) {
            ctx->pc = 0x21DD5Cu;
            goto label_21dd5c;
        }
    }
    ctx->pc = 0x21DCF4u;
label_21dcf4:
    // 0x21dcf4: 0x3442d669  ori         $v0, $v0, 0xD669
    ctx->pc = 0x21dcf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54889);
label_21dcf8:
    // 0x21dcf8: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
label_21dcfc:
    if (ctx->pc == 0x21DCFCu) {
        ctx->pc = 0x21DCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DCF8u;
        // 0x21dcfc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD00u;
        goto label_21dd00;
    }
    ctx->pc = 0x21DCF8u;
    {
        const bool branch_taken_0x21dcf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21DCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DCF8u;
        // 0x21dcfc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dcf8) {
            ctx->pc = 0x21DD5Cu;
            goto label_21dd5c;
        }
    }
    ctx->pc = 0x21DD00u;
label_21dd00:
    // 0x21dd00: 0x1000001b  b           . + 4 + (0x1B << 2)
label_21dd04:
    if (ctx->pc == 0x21DD04u) {
        ctx->pc = 0x21DD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD00u;
        // 0x21dd04: 0x8c442c7c  lw          $a0, 0x2C7C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD08u;
        goto label_21dd08;
    }
    ctx->pc = 0x21DD00u;
    {
        const bool branch_taken_0x21dd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD00u;
        // 0x21dd04: 0x8c442c7c  lw          $a0, 0x2C7C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd00) {
            ctx->pc = 0x21DD70u;
            goto label_21dd70;
        }
    }
    ctx->pc = 0x21DD08u;
label_21dd08:
    // 0x21dd08: 0x3c028c6f  lui         $v0, 0x8C6F
    ctx->pc = 0x21dd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35951 << 16));
label_21dd0c:
    // 0x21dd0c: 0x3442bfe3  ori         $v0, $v0, 0xBFE3
    ctx->pc = 0x21dd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49123);
label_21dd10:
    // 0x21dd10: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_21dd14:
    if (ctx->pc == 0x21DD14u) {
        ctx->pc = 0x21DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD10u;
        // 0x21dd14: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD18u;
        goto label_21dd18;
    }
    ctx->pc = 0x21DD10u;
    {
        const bool branch_taken_0x21dd10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD10u;
        // 0x21dd14: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd10) {
            ctx->pc = 0x21DD64u;
            goto label_21dd64;
        }
    }
    ctx->pc = 0x21DD18u;
label_21dd18:
    // 0x21dd18: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_21dd1c:
    if (ctx->pc == 0x21DD1Cu) {
        ctx->pc = 0x21DD20u;
        goto label_21dd20;
    }
    ctx->pc = 0x21DD18u;
    {
        const bool branch_taken_0x21dd18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21dd18) {
            ctx->pc = 0x21DD38u;
            goto label_21dd38;
        }
    }
    ctx->pc = 0x21DD20u;
label_21dd20:
    // 0x21dd20: 0x3c028768  lui         $v0, 0x8768
    ctx->pc = 0x21dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34664 << 16));
label_21dd24:
    // 0x21dd24: 0x344290dd  ori         $v0, $v0, 0x90DD
    ctx->pc = 0x21dd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37085);
label_21dd28:
    // 0x21dd28: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_21dd2c:
    if (ctx->pc == 0x21DD2Cu) {
        ctx->pc = 0x21DD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD28u;
        // 0x21dd2c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD30u;
        goto label_21dd30;
    }
    ctx->pc = 0x21DD28u;
    {
        const bool branch_taken_0x21dd28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21DD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD28u;
        // 0x21dd2c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd28) {
            ctx->pc = 0x21DD64u;
            goto label_21dd64;
        }
    }
    ctx->pc = 0x21DD30u;
label_21dd30:
    // 0x21dd30: 0x1000000f  b           . + 4 + (0xF << 2)
label_21dd34:
    if (ctx->pc == 0x21DD34u) {
        ctx->pc = 0x21DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD30u;
        // 0x21dd34: 0x8c442c7c  lw          $a0, 0x2C7C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD38u;
        goto label_21dd38;
    }
    ctx->pc = 0x21DD30u;
    {
        const bool branch_taken_0x21dd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD30u;
        // 0x21dd34: 0x8c442c7c  lw          $a0, 0x2C7C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd30) {
            ctx->pc = 0x21DD70u;
            goto label_21dd70;
        }
    }
    ctx->pc = 0x21DD38u;
label_21dd38:
    // 0x21dd38: 0x3c029bab  lui         $v0, 0x9BAB
    ctx->pc = 0x21dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39851 << 16));
label_21dd3c:
    // 0x21dd3c: 0x3442b2c7  ori         $v0, $v0, 0xB2C7
    ctx->pc = 0x21dd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45767);
label_21dd40:
    // 0x21dd40: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_21dd44:
    if (ctx->pc == 0x21DD44u) {
        ctx->pc = 0x21DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD40u;
        // 0x21dd44: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD48u;
        goto label_21dd48;
    }
    ctx->pc = 0x21DD40u;
    {
        const bool branch_taken_0x21dd40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD40u;
        // 0x21dd44: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd40) {
            ctx->pc = 0x21DD64u;
            goto label_21dd64;
        }
    }
    ctx->pc = 0x21DD48u;
label_21dd48:
    // 0x21dd48: 0x3c02c68a  lui         $v0, 0xC68A
    ctx->pc = 0x21dd48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50826 << 16));
label_21dd4c:
    // 0x21dd4c: 0x3442017c  ori         $v0, $v0, 0x17C
    ctx->pc = 0x21dd4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)380);
label_21dd50:
    // 0x21dd50: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x21dd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_21dd54:
    // 0x21dd54: 0x10000004  b           . + 4 + (0x4 << 2)
label_21dd58:
    if (ctx->pc == 0x21DD58u) {
        ctx->pc = 0x21DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD54u;
        // 0x21dd58: 0x2880b  movn        $s1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD5Cu;
        goto label_21dd5c;
    }
    ctx->pc = 0x21DD54u;
    {
        const bool branch_taken_0x21dd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD54u;
        // 0x21dd58: 0x2880b  movn        $s1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd54) {
            ctx->pc = 0x21DD68u;
            goto label_21dd68;
        }
    }
    ctx->pc = 0x21DD5Cu;
label_21dd5c:
    // 0x21dd5c: 0x10000002  b           . + 4 + (0x2 << 2)
label_21dd60:
    if (ctx->pc == 0x21DD60u) {
        ctx->pc = 0x21DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD5Cu;
        // 0x21dd60: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD64u;
        goto label_21dd64;
    }
    ctx->pc = 0x21DD5Cu;
    {
        const bool branch_taken_0x21dd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD5Cu;
        // 0x21dd60: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd5c) {
            ctx->pc = 0x21DD68u;
            goto label_21dd68;
        }
    }
    ctx->pc = 0x21DD64u;
label_21dd64:
    // 0x21dd64: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x21dd64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21dd68:
    // 0x21dd68: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x21dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_21dd6c:
    // 0x21dd6c: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x21dd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_21dd70:
    // 0x21dd70: 0xc0e8b48  jal         func_3A2D20
label_21dd74:
    if (ctx->pc == 0x21DD74u) {
        ctx->pc = 0x21DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD70u;
        // 0x21dd74: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD78u;
        goto label_21dd78;
    }
    ctx->pc = 0x21DD70u;
    SET_GPR_U32(ctx, 31, 0x21DD78u);
    ctx->pc = 0x21DD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DD70u;
    // 0x21dd74: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x21DD70u, 0x21DD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DD78u;
label_21dd78:
    // 0x21dd78: 0xc088bfe  jal         func_222FF8
label_21dd7c:
    if (ctx->pc == 0x21DD7Cu) {
        ctx->pc = 0x21DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD78u;
        // 0x21dd7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD80u;
        goto label_21dd80;
    }
    ctx->pc = 0x21DD78u;
    SET_GPR_U32(ctx, 31, 0x21DD80u);
    ctx->pc = 0x21DD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DD78u;
    // 0x21dd7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222FF8u, 0x21DD78u, 0x21DD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DD80u;
label_21dd80:
    // 0x21dd80: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21dd80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21dd84:
    // 0x21dd84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21dd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21dd88:
    // 0x21dd88: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_21dd8c:
    if (ctx->pc == 0x21DD8Cu) {
        ctx->pc = 0x21DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD88u;
        // 0x21dd8c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD90u;
        goto label_21dd90;
    }
    ctx->pc = 0x21DD88u;
    {
        const bool branch_taken_0x21dd88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21dd88) {
            ctx->pc = 0x21DD8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DD88u;
            // 0x21dd8c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DDB0u;
            goto label_21ddb0;
        }
    }
    ctx->pc = 0x21DD90u;
label_21dd90:
    // 0x21dd90: 0x13c00002  beqz        $fp, . + 4 + (0x2 << 2)
label_21dd94:
    if (ctx->pc == 0x21DD94u) {
        ctx->pc = 0x21DD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD90u;
        // 0x21dd94: 0x71880a  movz        $s1, $v1, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD98u;
        goto label_21dd98;
    }
    ctx->pc = 0x21DD90u;
    {
        const bool branch_taken_0x21dd90 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD90u;
        // 0x21dd94: 0x71880a  movz        $s1, $v1, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd90) {
            ctx->pc = 0x21DD9Cu;
            goto label_21dd9c;
        }
    }
    ctx->pc = 0x21DD98u;
label_21dd98:
    // 0x21dd98: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21dd98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21dd9c:
    // 0x21dd9c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x21dd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_21dda0:
    // 0x21dda0: 0xc0e8b68  jal         func_3A2DA0
label_21dda4:
    if (ctx->pc == 0x21DDA4u) {
        ctx->pc = 0x21DDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDA0u;
        // 0x21dda4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DDA8u;
        goto label_21dda8;
    }
    ctx->pc = 0x21DDA0u;
    SET_GPR_U32(ctx, 31, 0x21DDA8u);
    ctx->pc = 0x21DDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DDA0u;
    // 0x21dda4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x21DDA0u, 0x21DDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DDA8u;
label_21dda8:
    // 0x21dda8: 0x10000004  b           . + 4 + (0x4 << 2)
label_21ddac:
    if (ctx->pc == 0x21DDACu) {
        ctx->pc = 0x21DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDA8u;
        // 0x21ddac: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DDB0u;
        goto label_21ddb0;
    }
    ctx->pc = 0x21DDA8u;
    {
        const bool branch_taken_0x21dda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDA8u;
        // 0x21ddac: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dda8) {
            ctx->pc = 0x21DDBCu;
            goto label_21ddbc;
        }
    }
    ctx->pc = 0x21DDB0u;
label_21ddb0:
    // 0x21ddb0: 0xc0e8b68  jal         func_3A2DA0
label_21ddb4:
    if (ctx->pc == 0x21DDB4u) {
        ctx->pc = 0x21DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDB0u;
        // 0x21ddb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DDB8u;
        goto label_21ddb8;
    }
    ctx->pc = 0x21DDB0u;
    SET_GPR_U32(ctx, 31, 0x21DDB8u);
    ctx->pc = 0x21DDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DDB0u;
    // 0x21ddb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x21DDB0u, 0x21DDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DDB8u;
label_21ddb8:
    // 0x21ddb8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x21ddb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_21ddbc:
    // 0x21ddbc: 0xc0e8b70  jal         func_3A2DC0
label_21ddc0:
    if (ctx->pc == 0x21DDC0u) {
        ctx->pc = 0x21DDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDBCu;
        // 0x21ddc0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DDC4u;
        goto label_21ddc4;
    }
    ctx->pc = 0x21DDBCu;
    SET_GPR_U32(ctx, 31, 0x21DDC4u);
    ctx->pc = 0x21DDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DDBCu;
    // 0x21ddc0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x21DDBCu, 0x21DDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DDC4u;
label_21ddc4:
    // 0x21ddc4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x21ddc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_21ddc8:
    // 0x21ddc8: 0xc0e8b68  jal         func_3A2DA0
label_21ddcc:
    if (ctx->pc == 0x21DDCCu) {
        ctx->pc = 0x21DDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDC8u;
        // 0x21ddcc: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DDD0u;
        goto label_21ddd0;
    }
    ctx->pc = 0x21DDC8u;
    SET_GPR_U32(ctx, 31, 0x21DDD0u);
    ctx->pc = 0x21DDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DDC8u;
    // 0x21ddcc: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x21DDC8u, 0x21DDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DDD0u;
label_21ddd0:
    // 0x21ddd0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x21ddd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_21ddd4:
    // 0x21ddd4: 0xc0e8b58  jal         func_3A2D60
label_21ddd8:
    if (ctx->pc == 0x21DDD8u) {
        ctx->pc = 0x21DDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDD4u;
        // 0x21ddd8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DDDCu;
        goto label_21dddc;
    }
    ctx->pc = 0x21DDD4u;
    SET_GPR_U32(ctx, 31, 0x21DDDCu);
    ctx->pc = 0x21DDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DDD4u;
    // 0x21ddd8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x21DDD4u, 0x21DDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DDDCu;
label_21dddc:
    // 0x21dddc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x21dddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_21dde0:
    // 0x21dde0: 0xc0e8b58  jal         func_3A2D60
label_21dde4:
    if (ctx->pc == 0x21DDE4u) {
        ctx->pc = 0x21DDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDE0u;
        // 0x21dde4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DDE8u;
        goto label_21dde8;
    }
    ctx->pc = 0x21DDE0u;
    SET_GPR_U32(ctx, 31, 0x21DDE8u);
    ctx->pc = 0x21DDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DDE0u;
    // 0x21dde4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x21DDE0u, 0x21DDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DDE8u;
label_21dde8:
    // 0x21dde8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x21dde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_21ddec:
    // 0x21ddec: 0xc0e8b68  jal         func_3A2DA0
label_21ddf0:
    if (ctx->pc == 0x21DDF0u) {
        ctx->pc = 0x21DDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDECu;
        // 0x21ddf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DDF4u;
        goto label_21ddf4;
    }
    ctx->pc = 0x21DDECu;
    SET_GPR_U32(ctx, 31, 0x21DDF4u);
    ctx->pc = 0x21DDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DDECu;
    // 0x21ddf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x21DDECu, 0x21DDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DDF4u;
label_21ddf4:
    // 0x21ddf4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x21ddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_21ddf8:
    // 0x21ddf8: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x21ddf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_21ddfc:
    // 0x21ddfc: 0xc0e8b90  jal         func_3A2E40
label_21de00:
    if (ctx->pc == 0x21DE00u) {
        ctx->pc = 0x21DE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDFCu;
        // 0x21de00: 0x24a5a980  addiu       $a1, $a1, -0x5680 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DE04u;
        goto label_21de04;
    }
    ctx->pc = 0x21DDFCu;
    SET_GPR_U32(ctx, 31, 0x21DE04u);
    ctx->pc = 0x21DE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DDFCu;
    // 0x21de00: 0x24a5a980  addiu       $a1, $a1, -0x5680 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x21DDFCu, 0x21DE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DE04u;
label_21de04:
    // 0x21de04: 0xc0e8b50  jal         func_3A2D40
label_21de08:
    if (ctx->pc == 0x21DE08u) {
        ctx->pc = 0x21DE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE04u;
        // 0x21de08: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DE0Cu;
        goto label_21de0c;
    }
    ctx->pc = 0x21DE04u;
    SET_GPR_U32(ctx, 31, 0x21DE0Cu);
    ctx->pc = 0x21DE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DE04u;
    // 0x21de08: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x21DE04u, 0x21DE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DE0Cu;
label_21de0c:
    // 0x21de0c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x21de0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_21de10:
    // 0x21de10: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x21de10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_21de14:
    // 0x21de14: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x21de14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_21de18:
    // 0x21de18: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x21de18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_21de1c:
    // 0x21de1c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x21de1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_21de20:
    // 0x21de20: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x21de20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_21de24:
    // 0x21de24: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x21de24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21de28:
    // 0x21de28: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x21de28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_21de2c:
    // 0x21de2c: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x21de2cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21de30:
    // 0x21de30: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21de30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_21de34:
    // 0x21de34: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x21de34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_21de38:
    // 0x21de38: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x21de38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_21de3c:
    // 0x21de3c: 0x3e00008  jr          $ra
label_21de40:
    if (ctx->pc == 0x21DE40u) {
        ctx->pc = 0x21DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE3Cu;
        // 0x21de40: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DE44u;
        goto label_21de44;
    }
    ctx->pc = 0x21DE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE3Cu;
        // 0x21de40: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DE3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21DE44u;
label_21de44:
    // 0x21de44: 0x0  nop
    ctx->pc = 0x21de44u;
    // NOP
    ctx->pc = 0x21de48u;
}
