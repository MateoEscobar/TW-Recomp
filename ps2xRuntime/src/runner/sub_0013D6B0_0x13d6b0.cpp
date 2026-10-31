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

// Function: sub_0013D6B0
// Address: 0x13d6b0 - 0x13dcc8
void sub_0013D6B0_0x13d6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D6B0_0x13d6b0");
#endif

    switch (ctx->pc) {
        case 0x13d6b0u: goto label_13d6b0;
        case 0x13d6b4u: goto label_13d6b4;
        case 0x13d6b8u: goto label_13d6b8;
        case 0x13d6bcu: goto label_13d6bc;
        case 0x13d6c0u: goto label_13d6c0;
        case 0x13d6c4u: goto label_13d6c4;
        case 0x13d6c8u: goto label_13d6c8;
        case 0x13d6ccu: goto label_13d6cc;
        case 0x13d6d0u: goto label_13d6d0;
        case 0x13d6d4u: goto label_13d6d4;
        case 0x13d6d8u: goto label_13d6d8;
        case 0x13d6dcu: goto label_13d6dc;
        case 0x13d6e0u: goto label_13d6e0;
        case 0x13d6e4u: goto label_13d6e4;
        case 0x13d6e8u: goto label_13d6e8;
        case 0x13d6ecu: goto label_13d6ec;
        case 0x13d6f0u: goto label_13d6f0;
        case 0x13d6f4u: goto label_13d6f4;
        case 0x13d6f8u: goto label_13d6f8;
        case 0x13d6fcu: goto label_13d6fc;
        case 0x13d700u: goto label_13d700;
        case 0x13d704u: goto label_13d704;
        case 0x13d708u: goto label_13d708;
        case 0x13d70cu: goto label_13d70c;
        case 0x13d710u: goto label_13d710;
        case 0x13d714u: goto label_13d714;
        case 0x13d718u: goto label_13d718;
        case 0x13d71cu: goto label_13d71c;
        case 0x13d720u: goto label_13d720;
        case 0x13d724u: goto label_13d724;
        case 0x13d728u: goto label_13d728;
        case 0x13d72cu: goto label_13d72c;
        case 0x13d730u: goto label_13d730;
        case 0x13d734u: goto label_13d734;
        case 0x13d738u: goto label_13d738;
        case 0x13d73cu: goto label_13d73c;
        case 0x13d740u: goto label_13d740;
        case 0x13d744u: goto label_13d744;
        case 0x13d748u: goto label_13d748;
        case 0x13d74cu: goto label_13d74c;
        case 0x13d750u: goto label_13d750;
        case 0x13d754u: goto label_13d754;
        case 0x13d758u: goto label_13d758;
        case 0x13d75cu: goto label_13d75c;
        case 0x13d760u: goto label_13d760;
        case 0x13d764u: goto label_13d764;
        case 0x13d768u: goto label_13d768;
        case 0x13d76cu: goto label_13d76c;
        case 0x13d770u: goto label_13d770;
        case 0x13d774u: goto label_13d774;
        case 0x13d778u: goto label_13d778;
        case 0x13d77cu: goto label_13d77c;
        case 0x13d780u: goto label_13d780;
        case 0x13d784u: goto label_13d784;
        case 0x13d788u: goto label_13d788;
        case 0x13d78cu: goto label_13d78c;
        case 0x13d790u: goto label_13d790;
        case 0x13d794u: goto label_13d794;
        case 0x13d798u: goto label_13d798;
        case 0x13d79cu: goto label_13d79c;
        case 0x13d7a0u: goto label_13d7a0;
        case 0x13d7a4u: goto label_13d7a4;
        case 0x13d7a8u: goto label_13d7a8;
        case 0x13d7acu: goto label_13d7ac;
        case 0x13d7b0u: goto label_13d7b0;
        case 0x13d7b4u: goto label_13d7b4;
        case 0x13d7b8u: goto label_13d7b8;
        case 0x13d7bcu: goto label_13d7bc;
        case 0x13d7c0u: goto label_13d7c0;
        case 0x13d7c4u: goto label_13d7c4;
        case 0x13d7c8u: goto label_13d7c8;
        case 0x13d7ccu: goto label_13d7cc;
        case 0x13d7d0u: goto label_13d7d0;
        case 0x13d7d4u: goto label_13d7d4;
        case 0x13d7d8u: goto label_13d7d8;
        case 0x13d7dcu: goto label_13d7dc;
        case 0x13d7e0u: goto label_13d7e0;
        case 0x13d7e4u: goto label_13d7e4;
        case 0x13d7e8u: goto label_13d7e8;
        case 0x13d7ecu: goto label_13d7ec;
        case 0x13d7f0u: goto label_13d7f0;
        case 0x13d7f4u: goto label_13d7f4;
        case 0x13d7f8u: goto label_13d7f8;
        case 0x13d7fcu: goto label_13d7fc;
        case 0x13d800u: goto label_13d800;
        case 0x13d804u: goto label_13d804;
        case 0x13d808u: goto label_13d808;
        case 0x13d80cu: goto label_13d80c;
        case 0x13d810u: goto label_13d810;
        case 0x13d814u: goto label_13d814;
        case 0x13d818u: goto label_13d818;
        case 0x13d81cu: goto label_13d81c;
        case 0x13d820u: goto label_13d820;
        case 0x13d824u: goto label_13d824;
        case 0x13d828u: goto label_13d828;
        case 0x13d82cu: goto label_13d82c;
        case 0x13d830u: goto label_13d830;
        case 0x13d834u: goto label_13d834;
        case 0x13d838u: goto label_13d838;
        case 0x13d83cu: goto label_13d83c;
        case 0x13d840u: goto label_13d840;
        case 0x13d844u: goto label_13d844;
        case 0x13d848u: goto label_13d848;
        case 0x13d84cu: goto label_13d84c;
        case 0x13d850u: goto label_13d850;
        case 0x13d854u: goto label_13d854;
        case 0x13d858u: goto label_13d858;
        case 0x13d85cu: goto label_13d85c;
        case 0x13d860u: goto label_13d860;
        case 0x13d864u: goto label_13d864;
        case 0x13d868u: goto label_13d868;
        case 0x13d86cu: goto label_13d86c;
        case 0x13d870u: goto label_13d870;
        case 0x13d874u: goto label_13d874;
        case 0x13d878u: goto label_13d878;
        case 0x13d87cu: goto label_13d87c;
        case 0x13d880u: goto label_13d880;
        case 0x13d884u: goto label_13d884;
        case 0x13d888u: goto label_13d888;
        case 0x13d88cu: goto label_13d88c;
        case 0x13d890u: goto label_13d890;
        case 0x13d894u: goto label_13d894;
        case 0x13d898u: goto label_13d898;
        case 0x13d89cu: goto label_13d89c;
        case 0x13d8a0u: goto label_13d8a0;
        case 0x13d8a4u: goto label_13d8a4;
        case 0x13d8a8u: goto label_13d8a8;
        case 0x13d8acu: goto label_13d8ac;
        case 0x13d8b0u: goto label_13d8b0;
        case 0x13d8b4u: goto label_13d8b4;
        case 0x13d8b8u: goto label_13d8b8;
        case 0x13d8bcu: goto label_13d8bc;
        case 0x13d8c0u: goto label_13d8c0;
        case 0x13d8c4u: goto label_13d8c4;
        case 0x13d8c8u: goto label_13d8c8;
        case 0x13d8ccu: goto label_13d8cc;
        case 0x13d8d0u: goto label_13d8d0;
        case 0x13d8d4u: goto label_13d8d4;
        case 0x13d8d8u: goto label_13d8d8;
        case 0x13d8dcu: goto label_13d8dc;
        case 0x13d8e0u: goto label_13d8e0;
        case 0x13d8e4u: goto label_13d8e4;
        case 0x13d8e8u: goto label_13d8e8;
        case 0x13d8ecu: goto label_13d8ec;
        case 0x13d8f0u: goto label_13d8f0;
        case 0x13d8f4u: goto label_13d8f4;
        case 0x13d8f8u: goto label_13d8f8;
        case 0x13d8fcu: goto label_13d8fc;
        case 0x13d900u: goto label_13d900;
        case 0x13d904u: goto label_13d904;
        case 0x13d908u: goto label_13d908;
        case 0x13d90cu: goto label_13d90c;
        case 0x13d910u: goto label_13d910;
        case 0x13d914u: goto label_13d914;
        case 0x13d918u: goto label_13d918;
        case 0x13d91cu: goto label_13d91c;
        case 0x13d920u: goto label_13d920;
        case 0x13d924u: goto label_13d924;
        case 0x13d928u: goto label_13d928;
        case 0x13d92cu: goto label_13d92c;
        case 0x13d930u: goto label_13d930;
        case 0x13d934u: goto label_13d934;
        case 0x13d938u: goto label_13d938;
        case 0x13d93cu: goto label_13d93c;
        case 0x13d940u: goto label_13d940;
        case 0x13d944u: goto label_13d944;
        case 0x13d948u: goto label_13d948;
        case 0x13d94cu: goto label_13d94c;
        case 0x13d950u: goto label_13d950;
        case 0x13d954u: goto label_13d954;
        case 0x13d958u: goto label_13d958;
        case 0x13d95cu: goto label_13d95c;
        case 0x13d960u: goto label_13d960;
        case 0x13d964u: goto label_13d964;
        case 0x13d968u: goto label_13d968;
        case 0x13d96cu: goto label_13d96c;
        case 0x13d970u: goto label_13d970;
        case 0x13d974u: goto label_13d974;
        case 0x13d978u: goto label_13d978;
        case 0x13d97cu: goto label_13d97c;
        case 0x13d980u: goto label_13d980;
        case 0x13d984u: goto label_13d984;
        case 0x13d988u: goto label_13d988;
        case 0x13d98cu: goto label_13d98c;
        case 0x13d990u: goto label_13d990;
        case 0x13d994u: goto label_13d994;
        case 0x13d998u: goto label_13d998;
        case 0x13d99cu: goto label_13d99c;
        case 0x13d9a0u: goto label_13d9a0;
        case 0x13d9a4u: goto label_13d9a4;
        case 0x13d9a8u: goto label_13d9a8;
        case 0x13d9acu: goto label_13d9ac;
        case 0x13d9b0u: goto label_13d9b0;
        case 0x13d9b4u: goto label_13d9b4;
        case 0x13d9b8u: goto label_13d9b8;
        case 0x13d9bcu: goto label_13d9bc;
        case 0x13d9c0u: goto label_13d9c0;
        case 0x13d9c4u: goto label_13d9c4;
        case 0x13d9c8u: goto label_13d9c8;
        case 0x13d9ccu: goto label_13d9cc;
        case 0x13d9d0u: goto label_13d9d0;
        case 0x13d9d4u: goto label_13d9d4;
        case 0x13d9d8u: goto label_13d9d8;
        case 0x13d9dcu: goto label_13d9dc;
        case 0x13d9e0u: goto label_13d9e0;
        case 0x13d9e4u: goto label_13d9e4;
        case 0x13d9e8u: goto label_13d9e8;
        case 0x13d9ecu: goto label_13d9ec;
        case 0x13d9f0u: goto label_13d9f0;
        case 0x13d9f4u: goto label_13d9f4;
        case 0x13d9f8u: goto label_13d9f8;
        case 0x13d9fcu: goto label_13d9fc;
        case 0x13da00u: goto label_13da00;
        case 0x13da04u: goto label_13da04;
        case 0x13da08u: goto label_13da08;
        case 0x13da0cu: goto label_13da0c;
        case 0x13da10u: goto label_13da10;
        case 0x13da14u: goto label_13da14;
        case 0x13da18u: goto label_13da18;
        case 0x13da1cu: goto label_13da1c;
        case 0x13da20u: goto label_13da20;
        case 0x13da24u: goto label_13da24;
        case 0x13da28u: goto label_13da28;
        case 0x13da2cu: goto label_13da2c;
        case 0x13da30u: goto label_13da30;
        case 0x13da34u: goto label_13da34;
        case 0x13da38u: goto label_13da38;
        case 0x13da3cu: goto label_13da3c;
        case 0x13da40u: goto label_13da40;
        case 0x13da44u: goto label_13da44;
        case 0x13da48u: goto label_13da48;
        case 0x13da4cu: goto label_13da4c;
        case 0x13da50u: goto label_13da50;
        case 0x13da54u: goto label_13da54;
        case 0x13da58u: goto label_13da58;
        case 0x13da5cu: goto label_13da5c;
        case 0x13da60u: goto label_13da60;
        case 0x13da64u: goto label_13da64;
        case 0x13da68u: goto label_13da68;
        case 0x13da6cu: goto label_13da6c;
        case 0x13da70u: goto label_13da70;
        case 0x13da74u: goto label_13da74;
        case 0x13da78u: goto label_13da78;
        case 0x13da7cu: goto label_13da7c;
        case 0x13da80u: goto label_13da80;
        case 0x13da84u: goto label_13da84;
        case 0x13da88u: goto label_13da88;
        case 0x13da8cu: goto label_13da8c;
        case 0x13da90u: goto label_13da90;
        case 0x13da94u: goto label_13da94;
        case 0x13da98u: goto label_13da98;
        case 0x13da9cu: goto label_13da9c;
        case 0x13daa0u: goto label_13daa0;
        case 0x13daa4u: goto label_13daa4;
        case 0x13daa8u: goto label_13daa8;
        case 0x13daacu: goto label_13daac;
        case 0x13dab0u: goto label_13dab0;
        case 0x13dab4u: goto label_13dab4;
        case 0x13dab8u: goto label_13dab8;
        case 0x13dabcu: goto label_13dabc;
        case 0x13dac0u: goto label_13dac0;
        case 0x13dac4u: goto label_13dac4;
        case 0x13dac8u: goto label_13dac8;
        case 0x13daccu: goto label_13dacc;
        case 0x13dad0u: goto label_13dad0;
        case 0x13dad4u: goto label_13dad4;
        case 0x13dad8u: goto label_13dad8;
        case 0x13dadcu: goto label_13dadc;
        case 0x13dae0u: goto label_13dae0;
        case 0x13dae4u: goto label_13dae4;
        case 0x13dae8u: goto label_13dae8;
        case 0x13daecu: goto label_13daec;
        case 0x13daf0u: goto label_13daf0;
        case 0x13daf4u: goto label_13daf4;
        case 0x13daf8u: goto label_13daf8;
        case 0x13dafcu: goto label_13dafc;
        case 0x13db00u: goto label_13db00;
        case 0x13db04u: goto label_13db04;
        case 0x13db08u: goto label_13db08;
        case 0x13db0cu: goto label_13db0c;
        case 0x13db10u: goto label_13db10;
        case 0x13db14u: goto label_13db14;
        case 0x13db18u: goto label_13db18;
        case 0x13db1cu: goto label_13db1c;
        case 0x13db20u: goto label_13db20;
        case 0x13db24u: goto label_13db24;
        case 0x13db28u: goto label_13db28;
        case 0x13db2cu: goto label_13db2c;
        case 0x13db30u: goto label_13db30;
        case 0x13db34u: goto label_13db34;
        case 0x13db38u: goto label_13db38;
        case 0x13db3cu: goto label_13db3c;
        case 0x13db40u: goto label_13db40;
        case 0x13db44u: goto label_13db44;
        case 0x13db48u: goto label_13db48;
        case 0x13db4cu: goto label_13db4c;
        case 0x13db50u: goto label_13db50;
        case 0x13db54u: goto label_13db54;
        case 0x13db58u: goto label_13db58;
        case 0x13db5cu: goto label_13db5c;
        case 0x13db60u: goto label_13db60;
        case 0x13db64u: goto label_13db64;
        case 0x13db68u: goto label_13db68;
        case 0x13db6cu: goto label_13db6c;
        case 0x13db70u: goto label_13db70;
        case 0x13db74u: goto label_13db74;
        case 0x13db78u: goto label_13db78;
        case 0x13db7cu: goto label_13db7c;
        case 0x13db80u: goto label_13db80;
        case 0x13db84u: goto label_13db84;
        case 0x13db88u: goto label_13db88;
        case 0x13db8cu: goto label_13db8c;
        case 0x13db90u: goto label_13db90;
        case 0x13db94u: goto label_13db94;
        case 0x13db98u: goto label_13db98;
        case 0x13db9cu: goto label_13db9c;
        case 0x13dba0u: goto label_13dba0;
        case 0x13dba4u: goto label_13dba4;
        case 0x13dba8u: goto label_13dba8;
        case 0x13dbacu: goto label_13dbac;
        case 0x13dbb0u: goto label_13dbb0;
        case 0x13dbb4u: goto label_13dbb4;
        case 0x13dbb8u: goto label_13dbb8;
        case 0x13dbbcu: goto label_13dbbc;
        case 0x13dbc0u: goto label_13dbc0;
        case 0x13dbc4u: goto label_13dbc4;
        case 0x13dbc8u: goto label_13dbc8;
        case 0x13dbccu: goto label_13dbcc;
        case 0x13dbd0u: goto label_13dbd0;
        case 0x13dbd4u: goto label_13dbd4;
        case 0x13dbd8u: goto label_13dbd8;
        case 0x13dbdcu: goto label_13dbdc;
        case 0x13dbe0u: goto label_13dbe0;
        case 0x13dbe4u: goto label_13dbe4;
        case 0x13dbe8u: goto label_13dbe8;
        case 0x13dbecu: goto label_13dbec;
        case 0x13dbf0u: goto label_13dbf0;
        case 0x13dbf4u: goto label_13dbf4;
        case 0x13dbf8u: goto label_13dbf8;
        case 0x13dbfcu: goto label_13dbfc;
        case 0x13dc00u: goto label_13dc00;
        case 0x13dc04u: goto label_13dc04;
        case 0x13dc08u: goto label_13dc08;
        case 0x13dc0cu: goto label_13dc0c;
        case 0x13dc10u: goto label_13dc10;
        case 0x13dc14u: goto label_13dc14;
        case 0x13dc18u: goto label_13dc18;
        case 0x13dc1cu: goto label_13dc1c;
        case 0x13dc20u: goto label_13dc20;
        case 0x13dc24u: goto label_13dc24;
        case 0x13dc28u: goto label_13dc28;
        case 0x13dc2cu: goto label_13dc2c;
        case 0x13dc30u: goto label_13dc30;
        case 0x13dc34u: goto label_13dc34;
        case 0x13dc38u: goto label_13dc38;
        case 0x13dc3cu: goto label_13dc3c;
        case 0x13dc40u: goto label_13dc40;
        case 0x13dc44u: goto label_13dc44;
        case 0x13dc48u: goto label_13dc48;
        case 0x13dc4cu: goto label_13dc4c;
        case 0x13dc50u: goto label_13dc50;
        case 0x13dc54u: goto label_13dc54;
        case 0x13dc58u: goto label_13dc58;
        case 0x13dc5cu: goto label_13dc5c;
        case 0x13dc60u: goto label_13dc60;
        case 0x13dc64u: goto label_13dc64;
        case 0x13dc68u: goto label_13dc68;
        case 0x13dc6cu: goto label_13dc6c;
        case 0x13dc70u: goto label_13dc70;
        case 0x13dc74u: goto label_13dc74;
        case 0x13dc78u: goto label_13dc78;
        case 0x13dc7cu: goto label_13dc7c;
        case 0x13dc80u: goto label_13dc80;
        case 0x13dc84u: goto label_13dc84;
        case 0x13dc88u: goto label_13dc88;
        case 0x13dc8cu: goto label_13dc8c;
        case 0x13dc90u: goto label_13dc90;
        case 0x13dc94u: goto label_13dc94;
        case 0x13dc98u: goto label_13dc98;
        case 0x13dc9cu: goto label_13dc9c;
        case 0x13dca0u: goto label_13dca0;
        case 0x13dca4u: goto label_13dca4;
        case 0x13dca8u: goto label_13dca8;
        case 0x13dcacu: goto label_13dcac;
        case 0x13dcb0u: goto label_13dcb0;
        case 0x13dcb4u: goto label_13dcb4;
        case 0x13dcb8u: goto label_13dcb8;
        case 0x13dcbcu: goto label_13dcbc;
        case 0x13dcc0u: goto label_13dcc0;
        case 0x13dcc4u: goto label_13dcc4;
        default: break;
    }

    ctx->pc = 0x13d6b0u;

label_13d6b0:
    // 0x13d6b0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x13d6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_13d6b4:
    // 0x13d6b4: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x13d6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_13d6b8:
    // 0x13d6b8: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x13d6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_13d6bc:
    // 0x13d6bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13d6bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13d6c0:
    // 0x13d6c0: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x13d6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_13d6c4:
    // 0x13d6c4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13d6c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13d6c8:
    // 0x13d6c8: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x13d6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_13d6cc:
    // 0x13d6cc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x13d6ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13d6d0:
    // 0x13d6d0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x13d6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_13d6d4:
    // 0x13d6d4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x13d6d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_13d6d8:
    // 0x13d6d8: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x13d6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_13d6dc:
    // 0x13d6dc: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x13d6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_13d6e0:
    // 0x13d6e0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x13d6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_13d6e4:
    // 0x13d6e4: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x13d6e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_13d6e8:
    // 0x13d6e8: 0x922203e4  lbu         $v0, 0x3E4($s1)
    ctx->pc = 0x13d6e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 996)));
label_13d6ec:
    // 0x13d6ec: 0x14400104  bnez        $v0, . + 4 + (0x104 << 2)
label_13d6f0:
    if (ctx->pc == 0x13D6F0u) {
        ctx->pc = 0x13D6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D6ECu;
        // 0x13d6f0: 0x100b02d  daddu       $s6, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D6F4u;
        goto label_13d6f4;
    }
    ctx->pc = 0x13D6ECu;
    {
        const bool branch_taken_0x13d6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D6ECu;
        // 0x13d6f0: 0x100b02d  daddu       $s6, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d6ec) {
            ctx->pc = 0x13DB00u;
            goto label_13db00;
        }
    }
    ctx->pc = 0x13D6F4u;
label_13d6f4:
    // 0x13d6f4: 0x26300180  addiu       $s0, $s1, 0x180
    ctx->pc = 0x13d6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
label_13d6f8:
    // 0x13d6f8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x13d6f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_13d6fc:
    // 0x13d6fc: 0xc04fee8  jal         func_13FBA0
label_13d700:
    if (ctx->pc == 0x13D700u) {
        ctx->pc = 0x13D700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D6FCu;
        // 0x13d700: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D704u;
        goto label_13d704;
    }
    ctx->pc = 0x13D6FCu;
    SET_GPR_U32(ctx, 31, 0x13D704u);
    ctx->pc = 0x13D700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D6FCu;
    // 0x13d700: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FBA0u, 0x13D6FCu, 0x13D704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D704u;
label_13d704:
    // 0x13d704: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x13d704u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13d708:
    // 0x13d708: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13d708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13d70c:
    // 0x13d70c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13d70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13d710:
    // 0x13d710: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13d710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13d714:
    // 0x13d714: 0xc0500c2  jal         func_140308
label_13d718:
    if (ctx->pc == 0x13D718u) {
        ctx->pc = 0x13D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D714u;
        // 0x13d718: 0x26300330  addiu       $s0, $s1, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D71Cu;
        goto label_13d71c;
    }
    ctx->pc = 0x13D714u;
    SET_GPR_U32(ctx, 31, 0x13D71Cu);
    ctx->pc = 0x13D718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D714u;
    // 0x13d718: 0x26300330  addiu       $s0, $s1, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140308u, 0x13D714u, 0x13D71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D71Cu;
label_13d71c:
    // 0x13d71c: 0xc62003cc  lwc1        $f0, 0x3CC($s1)
    ctx->pc = 0x13d71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13d720:
    // 0x13d720: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x13d720u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13d724:
    // 0x13d724: 0x0  nop
    ctx->pc = 0x13d724u;
    // NOP
label_13d728:
    // 0x13d728: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
label_13d72c:
    if (ctx->pc == 0x13D72Cu) {
        ctx->pc = 0x13D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D728u;
        // 0x13d72c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D730u;
        goto label_13d730;
    }
    ctx->pc = 0x13D728u;
    {
        const bool branch_taken_0x13d728 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D728u;
        // 0x13d72c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d728) {
            ctx->pc = 0x13D820u;
            goto label_13d820;
        }
    }
    ctx->pc = 0x13D730u;
label_13d730:
    // 0x13d730: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13d730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13d734:
    // 0x13d734: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x13d734u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_13d738:
    // 0x13d738: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x13d738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_13d73c:
    // 0x13d73c: 0x40f809  jalr        $v0
label_13d740:
    if (ctx->pc == 0x13D740u) {
        ctx->pc = 0x13D740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D73Cu;
        // 0x13d740: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D744u;
        goto label_13d744;
    }
    ctx->pc = 0x13D73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13D744u);
        ctx->pc = 0x13D740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D73Cu;
        // 0x13d740: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D73Cu, 0x13D744u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D744u;
label_13d744:
    // 0x13d744: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13d744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13d748:
    // 0x13d748: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13d748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13d74c:
    // 0x13d74c: 0xc136afa  jal         func_4DABE8
label_13d750:
    if (ctx->pc == 0x13D750u) {
        ctx->pc = 0x13D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D74Cu;
        // 0x13d750: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D754u;
        goto label_13d754;
    }
    ctx->pc = 0x13D74Cu;
    SET_GPR_U32(ctx, 31, 0x13D754u);
    ctx->pc = 0x13D750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D74Cu;
    // 0x13d750: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13D74Cu, 0x13D754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D754u;
label_13d754:
    // 0x13d754: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x13d754u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13d758:
    // 0x13d758: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13d758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13d75c:
    // 0x13d75c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x13d75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_13d760:
    // 0x13d760: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x13d760u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_13d764:
    // 0x13d764: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x13d764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_13d768:
    // 0x13d768: 0x40f809  jalr        $v0
label_13d76c:
    if (ctx->pc == 0x13D76Cu) {
        ctx->pc = 0x13D76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D768u;
        // 0x13d76c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D770u;
        goto label_13d770;
    }
    ctx->pc = 0x13D768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13D770u);
        ctx->pc = 0x13D76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D768u;
        // 0x13d76c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D768u, 0x13D770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D770u;
label_13d770:
    // 0x13d770: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13d770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13d774:
    // 0x13d774: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x13d774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_13d778:
    // 0x13d778: 0xc136afa  jal         func_4DABE8
label_13d77c:
    if (ctx->pc == 0x13D77Cu) {
        ctx->pc = 0x13D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D778u;
        // 0x13d77c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D780u;
        goto label_13d780;
    }
    ctx->pc = 0x13D778u;
    SET_GPR_U32(ctx, 31, 0x13D780u);
    ctx->pc = 0x13D77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D778u;
    // 0x13d77c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13D778u, 0x13D780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D780u;
label_13d780:
    // 0x13d780: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x13d780u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13d784:
    // 0x13d784: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13d784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13d788:
    // 0x13d788: 0xc62c03cc  lwc1        $f12, 0x3CC($s1)
    ctx->pc = 0x13d788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13d78c:
    // 0x13d78c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x13d78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_13d790:
    // 0x13d790: 0xc136b24  jal         func_4DAC90
label_13d794:
    if (ctx->pc == 0x13D794u) {
        ctx->pc = 0x13D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D790u;
        // 0x13d794: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D798u;
        goto label_13d798;
    }
    ctx->pc = 0x13D790u;
    SET_GPR_U32(ctx, 31, 0x13D798u);
    ctx->pc = 0x13D794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D790u;
    // 0x13d794: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13D790u, 0x13D798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D798u;
label_13d798:
    // 0x13d798: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x13d798u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13d79c:
    // 0x13d79c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13d79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13d7a0:
    // 0x13d7a0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x13d7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13d7a4:
    // 0x13d7a4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x13d7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_13d7a8:
    // 0x13d7a8: 0xc136b18  jal         func_4DAC60
label_13d7ac:
    if (ctx->pc == 0x13D7ACu) {
        ctx->pc = 0x13D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D7A8u;
        // 0x13d7ac: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D7B0u;
        goto label_13d7b0;
    }
    ctx->pc = 0x13D7A8u;
    SET_GPR_U32(ctx, 31, 0x13D7B0u);
    ctx->pc = 0x13D7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D7A8u;
    // 0x13d7ac: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13D7A8u, 0x13D7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D7B0u;
label_13d7b0:
    // 0x13d7b0: 0xc62103cc  lwc1        $f1, 0x3CC($s1)
    ctx->pc = 0x13d7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13d7b4:
    // 0x13d7b4: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x13d7b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_13d7b8:
    // 0x13d7b8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x13d7b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_13d7bc:
    // 0x13d7bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13d7bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13d7c0:
    // 0x13d7c0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x13d7c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13d7c4:
    // 0x13d7c4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x13d7c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_13d7c8:
    // 0x13d7c8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13d7c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13d7cc:
    // 0x13d7cc: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x13d7ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13d7d0:
    // 0x13d7d0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13d7d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13d7d4:
    // 0x13d7d4: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x13d7d4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_13d7d8:
    // 0x13d7d8: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x13d7d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
label_13d7dc:
    // 0x13d7dc: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x13d7dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
label_13d7e0:
    // 0x13d7e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13d7e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_13d7e4:
    // 0x13d7e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x13d7e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13d7e8:
    // 0x13d7e8: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x13d7e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13d7ec:
    // 0x13d7ec: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x13d7ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13d7f0:
    // 0x13d7f0: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x13d7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_13d7f4:
    // 0x13d7f4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_13d7f8:
    if (ctx->pc == 0x13D7F8u) {
        ctx->pc = 0x13D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D7F4u;
        // 0x13d7f8: 0xe62103cc  swc1        $f1, 0x3CC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 972), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D7FCu;
        goto label_13d7fc;
    }
    ctx->pc = 0x13D7F4u;
    {
        const bool branch_taken_0x13d7f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D7F4u;
        // 0x13d7f8: 0xe62103cc  swc1        $f1, 0x3CC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 972), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d7f4) {
            ctx->pc = 0x13D818u;
            goto label_13d818;
        }
    }
    ctx->pc = 0x13D7FCu;
label_13d7fc:
    // 0x13d7fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13d7fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_13d800:
    // 0x13d800: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13d800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13d804:
    // 0x13d804: 0x0  nop
    ctx->pc = 0x13d804u;
    // NOP
label_13d808:
    // 0x13d808: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13d808u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13d80c:
    // 0x13d80c: 0x0  nop
    ctx->pc = 0x13d80cu;
    // NOP
label_13d810:
    // 0x13d810: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_13d814:
    if (ctx->pc == 0x13D814u) {
        ctx->pc = 0x13D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D810u;
        // 0x13d814: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D818u;
        goto label_13d818;
    }
    ctx->pc = 0x13D810u;
    {
        const bool branch_taken_0x13d810 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d810) {
            ctx->pc = 0x13D814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D810u;
            // 0x13d814: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D81Cu;
            goto label_13d81c;
        }
    }
    ctx->pc = 0x13D818u;
label_13d818:
    // 0x13d818: 0xe63403cc  swc1        $f20, 0x3CC($s1)
    ctx->pc = 0x13d818u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 972), bits); }
label_13d81c:
    // 0x13d81c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13d81cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13d820:
    // 0x13d820: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13d820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13d824:
    // 0x13d824: 0xc136b18  jal         func_4DAC60
label_13d828:
    if (ctx->pc == 0x13D828u) {
        ctx->pc = 0x13D828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D824u;
        // 0x13d828: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D82Cu;
        goto label_13d82c;
    }
    ctx->pc = 0x13D824u;
    SET_GPR_U32(ctx, 31, 0x13D82Cu);
    ctx->pc = 0x13D828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D824u;
    // 0x13d828: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13D824u, 0x13D82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D82Cu;
label_13d82c:
    // 0x13d82c: 0xc6220358  lwc1        $f2, 0x358($s1)
    ctx->pc = 0x13d82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13d830:
    // 0x13d830: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13d830u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13d834:
    // 0x13d834: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x13d834u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13d838:
    // 0x13d838: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x13d838u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13d83c:
    // 0x13d83c: 0x0  nop
    ctx->pc = 0x13d83cu;
    // NOP
label_13d840:
    // 0x13d840: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_13d844:
    if (ctx->pc == 0x13D844u) {
        ctx->pc = 0x13D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D840u;
        // 0x13d844: 0x7e2202e0  sq          $v0, 0x2E0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 736), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D848u;
        goto label_13d848;
    }
    ctx->pc = 0x13D840u;
    {
        const bool branch_taken_0x13d840 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D840u;
        // 0x13d844: 0x7e2202e0  sq          $v0, 0x2E0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 736), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d840) {
            ctx->pc = 0x13D884u;
            goto label_13d884;
        }
    }
    ctx->pc = 0x13D848u;
label_13d848:
    // 0x13d848: 0x8e240340  lw          $a0, 0x340($s1)
    ctx->pc = 0x13d848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
label_13d84c:
    // 0x13d84c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x13d84cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_13d850:
    // 0x13d850: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x13d850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_13d854:
    // 0x13d854: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x13d854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13d858:
    // 0x13d858: 0x84820092  lh          $v0, 0x92($a0)
    ctx->pc = 0x13d858u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 146)));
label_13d85c:
    // 0x13d85c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x13d85cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_13d860:
    // 0x13d860: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13d860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13d864:
    // 0x13d864: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x13d864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13d868:
    // 0x13d868: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x13d868u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_13d86c:
    // 0x13d86c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x13d86cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13d870:
    // 0x13d870: 0x0  nop
    ctx->pc = 0x13d870u;
    // NOP
label_13d874:
    // 0x13d874: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_13d878:
    if (ctx->pc == 0x13D878u) {
        ctx->pc = 0x13D878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D874u;
        // 0x13d878: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D87Cu;
        goto label_13d87c;
    }
    ctx->pc = 0x13D874u;
    {
        const bool branch_taken_0x13d874 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d874) {
            ctx->pc = 0x13D878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D874u;
            // 0x13d878: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D888u;
            goto label_13d888;
        }
    }
    ctx->pc = 0x13D87Cu;
label_13d87c:
    // 0x13d87c: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x13d87cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_13d880:
    // 0x13d880: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x13d880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_13d884:
    // 0x13d884: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x13d884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13d888:
    // 0x13d888: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13d888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13d88c:
    // 0x13d88c: 0x844401b8  lh          $a0, 0x1B8($v0)
    ctx->pc = 0x13d88cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 440)));
label_13d890:
    // 0x13d890: 0x8c4301bc  lw          $v1, 0x1BC($v0)
    ctx->pc = 0x13d890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
label_13d894:
    // 0x13d894: 0x60f809  jalr        $v1
label_13d898:
    if (ctx->pc == 0x13D898u) {
        ctx->pc = 0x13D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D894u;
        // 0x13d898: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D89Cu;
        goto label_13d89c;
    }
    ctx->pc = 0x13D894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13D89Cu);
        ctx->pc = 0x13D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D894u;
        // 0x13d898: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D894u, 0x13D89Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D89Cu;
label_13d89c:
    // 0x13d89c: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x13d89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_13d8a0:
    // 0x13d8a0: 0xc621036c  lwc1        $f1, 0x36C($s1)
    ctx->pc = 0x13d8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13d8a4:
    // 0x13d8a4: 0xc440929c  lwc1        $f0, -0x6D64($v0)
    ctx->pc = 0x13d8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294939292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13d8a8:
    // 0x13d8a8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x13d8a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13d8ac:
    // 0x13d8ac: 0x0  nop
    ctx->pc = 0x13d8acu;
    // NOP
label_13d8b0:
    // 0x13d8b0: 0x45030029  bc1tl       . + 4 + (0x29 << 2)
label_13d8b4:
    if (ctx->pc == 0x13D8B4u) {
        ctx->pc = 0x13D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D8B0u;
        // 0x13d8b4: 0x86220352  lh          $v0, 0x352($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D8B8u;
        goto label_13d8b8;
    }
    ctx->pc = 0x13D8B0u;
    {
        const bool branch_taken_0x13d8b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d8b0) {
            ctx->pc = 0x13D8B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D8B0u;
            // 0x13d8b4: 0x86220352  lh          $v0, 0x352($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D958u;
            goto label_13d958;
        }
    }
    ctx->pc = 0x13D8B8u;
label_13d8b8:
    // 0x13d8b8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13d8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13d8bc:
    // 0x13d8bc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x13d8bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13d8c0:
    // 0x13d8c0: 0xc136afa  jal         func_4DABE8
label_13d8c4:
    if (ctx->pc == 0x13D8C4u) {
        ctx->pc = 0x13D8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D8C0u;
        // 0x13d8c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D8C8u;
        goto label_13d8c8;
    }
    ctx->pc = 0x13D8C0u;
    SET_GPR_U32(ctx, 31, 0x13D8C8u);
    ctx->pc = 0x13D8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D8C0u;
    // 0x13d8c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13D8C0u, 0x13D8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D8C8u;
label_13d8c8:
    // 0x13d8c8: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x13d8c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13d8cc:
    // 0x13d8cc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x13d8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_13d8d0:
    // 0x13d8d0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x13d8d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13d8d4:
    // 0x13d8d4: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x13d8d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13d8d8:
    // 0x13d8d8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x13d8d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13d8dc:
    // 0x13d8dc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x13d8dcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_13d8e0:
    // 0x13d8e0: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x13d8e0u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_13d8e4:
    // 0x13d8e4: 0x4a0003bf  vwaitq
    ctx->pc = 0x13d8e4u;
    // VWAITQ (Q already resolved in this runtime)
label_13d8e8:
    // 0x13d8e8: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x13d8e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_13d8ec:
    // 0x13d8ec: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x13d8ecu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_13d8f0:
    // 0x13d8f0: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x13d8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_13d8f4:
    // 0x13d8f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13d8f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13d8f8:
    // 0x13d8f8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x13d8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_13d8fc:
    // 0x13d8fc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x13d8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_13d900:
    // 0x13d900: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x13d900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_13d904:
    // 0x13d904: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x13d904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_13d908:
    // 0x13d908: 0xc136b24  jal         func_4DAC90
label_13d90c:
    if (ctx->pc == 0x13D90Cu) {
        ctx->pc = 0x13D90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D908u;
        // 0x13d90c: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D910u;
        goto label_13d910;
    }
    ctx->pc = 0x13D908u;
    SET_GPR_U32(ctx, 31, 0x13D910u);
    ctx->pc = 0x13D90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D908u;
    // 0x13d90c: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13D908u, 0x13D910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D910u;
label_13d910:
    // 0x13d910: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x13d910u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13d914:
    // 0x13d914: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x13d914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_13d918:
    // 0x13d918: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13d918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13d91c:
    // 0x13d91c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x13d91cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13d920:
    // 0x13d920: 0xc136b18  jal         func_4DAC60
label_13d924:
    if (ctx->pc == 0x13D924u) {
        ctx->pc = 0x13D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D920u;
        // 0x13d924: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D928u;
        goto label_13d928;
    }
    ctx->pc = 0x13D920u;
    SET_GPR_U32(ctx, 31, 0x13D928u);
    ctx->pc = 0x13D924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D920u;
    // 0x13d924: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13D920u, 0x13D928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D928u;
label_13d928:
    // 0x13d928: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x13d928u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13d92c:
    // 0x13d92c: 0xc62c036c  lwc1        $f12, 0x36C($s1)
    ctx->pc = 0x13d92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13d930:
    // 0x13d930: 0x7e2202f0  sq          $v0, 0x2F0($s1)
    ctx->pc = 0x13d930u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 752), GPR_VEC(ctx, 2));
label_13d934:
    // 0x13d934: 0xc12e34c  jal         func_4B8D30
label_13d938:
    if (ctx->pc == 0x13D938u) {
        ctx->pc = 0x13D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D934u;
        // 0x13d938: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D93Cu;
        goto label_13d93c;
    }
    ctx->pc = 0x13D934u;
    SET_GPR_U32(ctx, 31, 0x13D93Cu);
    ctx->pc = 0x13D938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D934u;
    // 0x13d938: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8D30u, 0x13D934u, 0x13D93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D93Cu;
label_13d93c:
    // 0x13d93c: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x13d93cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_13d940:
    // 0x13d940: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13d940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_13d944:
    // 0x13d944: 0xc62102f8  lwc1        $f1, 0x2F8($s1)
    ctx->pc = 0x13d944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13d948:
    // 0x13d948: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x13d948u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_13d94c:
    // 0x13d94c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13d94cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_13d950:
    // 0x13d950: 0xe62102f8  swc1        $f1, 0x2F8($s1)
    ctx->pc = 0x13d950u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 760), bits); }
label_13d954:
    // 0x13d954: 0x86220352  lh          $v0, 0x352($s1)
    ctx->pc = 0x13d954u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_13d958:
    // 0x13d958: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
label_13d95c:
    if (ctx->pc == 0x13D95Cu) {
        ctx->pc = 0x13D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D958u;
        // 0x13d95c: 0x86260350  lh          $a2, 0x350($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 848)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D960u;
        goto label_13d960;
    }
    ctx->pc = 0x13D958u;
    {
        const bool branch_taken_0x13d958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d958) {
            ctx->pc = 0x13D95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D958u;
            // 0x13d95c: 0x86260350  lh          $a2, 0x350($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 848)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DA18u;
            goto label_13da18;
        }
    }
    ctx->pc = 0x13D960u;
label_13d960:
    // 0x13d960: 0x263001e0  addiu       $s0, $s1, 0x1E0
    ctx->pc = 0x13d960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
label_13d964:
    // 0x13d964: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13d964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13d968:
    // 0x13d968: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13d968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13d96c:
    // 0x13d96c: 0xc136afa  jal         func_4DABE8
label_13d970:
    if (ctx->pc == 0x13D970u) {
        ctx->pc = 0x13D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D96Cu;
        // 0x13d970: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D974u;
        goto label_13d974;
    }
    ctx->pc = 0x13D96Cu;
    SET_GPR_U32(ctx, 31, 0x13D974u);
    ctx->pc = 0x13D970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D96Cu;
    // 0x13d970: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13D96Cu, 0x13D974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D974u;
label_13d974:
    // 0x13d974: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x13d974u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13d978:
    // 0x13d978: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13d978u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13d97c:
    // 0x13d97c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x13d97cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13d980:
    // 0x13d980: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13d980u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13d984:
    // 0x13d984: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x13d984u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13d988:
    // 0x13d988: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x13d988u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_13d98c:
    // 0x13d98c: 0x3c012edb  lui         $at, 0x2EDB
    ctx->pc = 0x13d98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11995 << 16));
label_13d990:
    // 0x13d990: 0x3421e6fe  ori         $at, $at, 0xE6FE
    ctx->pc = 0x13d990u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59134);
label_13d994:
    // 0x13d994: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13d994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13d998:
    // 0x13d998: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13d998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13d99c:
    // 0x13d99c: 0x0  nop
    ctx->pc = 0x13d99cu;
    // NOP
label_13d9a0:
    // 0x13d9a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13d9a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13d9a4:
    // 0x13d9a4: 0x0  nop
    ctx->pc = 0x13d9a4u;
    // NOP
label_13d9a8:
    // 0x13d9a8: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_13d9ac:
    if (ctx->pc == 0x13D9ACu) {
        ctx->pc = 0x13D9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D9A8u;
        // 0x13d9ac: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D9B0u;
        goto label_13d9b0;
    }
    ctx->pc = 0x13D9A8u;
    {
        const bool branch_taken_0x13d9a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D9A8u;
        // 0x13d9ac: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d9a8) {
            ctx->pc = 0x13DA14u;
            goto label_13da14;
        }
    }
    ctx->pc = 0x13D9B0u;
label_13d9b0:
    // 0x13d9b0: 0x7a2201e0  lq          $v0, 0x1E0($s1)
    ctx->pc = 0x13d9b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 480)));
label_13d9b4:
    // 0x13d9b4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13d9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13d9b8:
    // 0x13d9b8: 0x262501f0  addiu       $a1, $s1, 0x1F0
    ctx->pc = 0x13d9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
label_13d9bc:
    // 0x13d9bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13d9bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13d9c0:
    // 0x13d9c0: 0xc136afa  jal         func_4DABE8
label_13d9c4:
    if (ctx->pc == 0x13D9C4u) {
        ctx->pc = 0x13D9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D9C0u;
        // 0x13d9c4: 0x7e420000  sq          $v0, 0x0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D9C8u;
        goto label_13d9c8;
    }
    ctx->pc = 0x13D9C0u;
    SET_GPR_U32(ctx, 31, 0x13D9C8u);
    ctx->pc = 0x13D9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D9C0u;
    // 0x13d9c4: 0x7e420000  sq          $v0, 0x0($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13D9C0u, 0x13D9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D9C8u;
label_13d9c8:
    // 0x13d9c8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x13d9c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13d9cc:
    // 0x13d9cc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x13d9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_13d9d0:
    // 0x13d9d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13d9d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13d9d4:
    // 0x13d9d4: 0x26250300  addiu       $a1, $s1, 0x300
    ctx->pc = 0x13d9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
label_13d9d8:
    // 0x13d9d8: 0xc136afa  jal         func_4DABE8
label_13d9dc:
    if (ctx->pc == 0x13D9DCu) {
        ctx->pc = 0x13D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D9D8u;
        // 0x13d9dc: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D9E0u;
        goto label_13d9e0;
    }
    ctx->pc = 0x13D9D8u;
    SET_GPR_U32(ctx, 31, 0x13D9E0u);
    ctx->pc = 0x13D9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D9D8u;
    // 0x13d9dc: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13D9D8u, 0x13D9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D9E0u;
label_13d9e0:
    // 0x13d9e0: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x13d9e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13d9e4:
    // 0x13d9e4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x13d9e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13d9e8:
    // 0x13d9e8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13d9e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13d9ec:
    // 0x13d9ec: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x13d9ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13d9f0:
    // 0x13d9f0: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x13d9f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13d9f4:
    // 0x13d9f4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13d9f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13d9f8:
    // 0x13d9f8: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x13d9f8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_13d9fc:
    // 0x13d9fc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13d9fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13da00:
    // 0x13da00: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x13da00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13da04:
    // 0x13da04: 0x0  nop
    ctx->pc = 0x13da04u;
    // NOP
label_13da08:
    // 0x13da08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13da08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13da0c:
    // 0x13da0c: 0x10000038  b           . + 4 + (0x38 << 2)
label_13da10:
    if (ctx->pc == 0x13DA10u) {
        ctx->pc = 0x13DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DA0Cu;
        // 0x13da10: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DA14u;
        goto label_13da14;
    }
    ctx->pc = 0x13DA0Cu;
    {
        const bool branch_taken_0x13da0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DA0Cu;
        // 0x13da10: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13da0c) {
            ctx->pc = 0x13DAF0u;
            goto label_13daf0;
        }
    }
    ctx->pc = 0x13DA14u;
label_13da14:
    // 0x13da14: 0x86260350  lh          $a2, 0x350($s1)
    ctx->pc = 0x13da14u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 848)));
label_13da18:
    // 0x13da18: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13da18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13da1c:
    // 0x13da1c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13da1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13da20:
    // 0x13da20: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x13da20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_13da24:
    // 0x13da24: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x13da24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_13da28:
    // 0x13da28: 0xc136afa  jal         func_4DABE8
label_13da2c:
    if (ctx->pc == 0x13DA2Cu) {
        ctx->pc = 0x13DA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DA28u;
        // 0x13da2c: 0x24c601d0  addiu       $a2, $a2, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DA30u;
        goto label_13da30;
    }
    ctx->pc = 0x13DA28u;
    SET_GPR_U32(ctx, 31, 0x13DA30u);
    ctx->pc = 0x13DA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DA28u;
    // 0x13da2c: 0x24c601d0  addiu       $a2, $a2, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13DA28u, 0x13DA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DA30u;
label_13da30:
    // 0x13da30: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x13da30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13da34:
    // 0x13da34: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13da34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13da38:
    // 0x13da38: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x13da38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13da3c:
    // 0x13da3c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13da3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13da40:
    // 0x13da40: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x13da40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13da44:
    // 0x13da44: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x13da44u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_13da48:
    // 0x13da48: 0x3c012edb  lui         $at, 0x2EDB
    ctx->pc = 0x13da48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11995 << 16));
label_13da4c:
    // 0x13da4c: 0x3421e6fe  ori         $at, $at, 0xE6FE
    ctx->pc = 0x13da4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59134);
label_13da50:
    // 0x13da50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13da50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13da54:
    // 0x13da54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13da54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13da58:
    // 0x13da58: 0x0  nop
    ctx->pc = 0x13da58u;
    // NOP
label_13da5c:
    // 0x13da5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13da5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13da60:
    // 0x13da60: 0x0  nop
    ctx->pc = 0x13da60u;
    // NOP
label_13da64:
    // 0x13da64: 0x45000026  bc1f        . + 4 + (0x26 << 2)
label_13da68:
    if (ctx->pc == 0x13DA68u) {
        ctx->pc = 0x13DA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DA64u;
        // 0x13da68: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DA6Cu;
        goto label_13da6c;
    }
    ctx->pc = 0x13DA64u;
    {
        const bool branch_taken_0x13da64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13DA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DA64u;
        // 0x13da68: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13da64) {
            ctx->pc = 0x13DB00u;
            goto label_13db00;
        }
    }
    ctx->pc = 0x13DA6Cu;
label_13da6c:
    // 0x13da6c: 0x86230350  lh          $v1, 0x350($s1)
    ctx->pc = 0x13da6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 848)));
label_13da70:
    // 0x13da70: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x13da70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_13da74:
    // 0x13da74: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13da74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_13da78:
    // 0x13da78: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x13da78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_13da7c:
    // 0x13da7c: 0x786201d0  lq          $v0, 0x1D0($v1)
    ctx->pc = 0x13da7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 464)));
label_13da80:
    // 0x13da80: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x13da80u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_13da84:
    // 0x13da84: 0x86250350  lh          $a1, 0x350($s1)
    ctx->pc = 0x13da84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 848)));
label_13da88:
    // 0x13da88: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x13da88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_13da8c:
    // 0x13da8c: 0xb13021  addu        $a2, $a1, $s1
    ctx->pc = 0x13da8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_13da90:
    // 0x13da90: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x13da90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13da94:
    // 0x13da94: 0x24c601c0  addiu       $a2, $a2, 0x1C0
    ctx->pc = 0x13da94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 448));
label_13da98:
    // 0x13da98: 0xc136afa  jal         func_4DABE8
label_13da9c:
    if (ctx->pc == 0x13DA9Cu) {
        ctx->pc = 0x13DA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DA98u;
        // 0x13da9c: 0x24a501d0  addiu       $a1, $a1, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DAA0u;
        goto label_13daa0;
    }
    ctx->pc = 0x13DA98u;
    SET_GPR_U32(ctx, 31, 0x13DAA0u);
    ctx->pc = 0x13DA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DA98u;
    // 0x13da9c: 0x24a501d0  addiu       $a1, $a1, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13DA98u, 0x13DAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DAA0u;
label_13daa0:
    // 0x13daa0: 0x86260350  lh          $a2, 0x350($s1)
    ctx->pc = 0x13daa0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 848)));
label_13daa4:
    // 0x13daa4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13daa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13daa8:
    // 0x13daa8: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x13daa8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13daac:
    // 0x13daac: 0x26250300  addiu       $a1, $s1, 0x300
    ctx->pc = 0x13daacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
label_13dab0:
    // 0x13dab0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x13dab0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_13dab4:
    // 0x13dab4: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x13dab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_13dab8:
    // 0x13dab8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x13dab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_13dabc:
    // 0x13dabc: 0xc136afa  jal         func_4DABE8
label_13dac0:
    if (ctx->pc == 0x13DAC0u) {
        ctx->pc = 0x13DAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DABCu;
        // 0x13dac0: 0x24c601d0  addiu       $a2, $a2, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DAC4u;
        goto label_13dac4;
    }
    ctx->pc = 0x13DABCu;
    SET_GPR_U32(ctx, 31, 0x13DAC4u);
    ctx->pc = 0x13DAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DABCu;
    // 0x13dac0: 0x24c601d0  addiu       $a2, $a2, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13DABCu, 0x13DAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DAC4u;
label_13dac4:
    // 0x13dac4: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x13dac4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13dac8:
    // 0x13dac8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x13dac8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13dacc:
    // 0x13dacc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13daccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13dad0:
    // 0x13dad0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x13dad0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13dad4:
    // 0x13dad4: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x13dad4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13dad8:
    // 0x13dad8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13dad8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13dadc:
    // 0x13dadc: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x13dadcu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_13dae0:
    // 0x13dae0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13dae0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13dae4:
    // 0x13dae4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x13dae4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13dae8:
    // 0x13dae8: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x13dae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_13daec:
    // 0x13daec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13daecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13daf0:
    // 0x13daf0: 0x0  nop
    ctx->pc = 0x13daf0u;
    // NOP
label_13daf4:
    // 0x13daf4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_13daf8:
    if (ctx->pc == 0x13DAF8u) {
        ctx->pc = 0x13DAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DAF4u;
        // 0x13daf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DAFCu;
        goto label_13dafc;
    }
    ctx->pc = 0x13DAF4u;
    {
        const bool branch_taken_0x13daf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13DAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DAF4u;
        // 0x13daf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13daf4) {
            ctx->pc = 0x13DB00u;
            goto label_13db00;
        }
    }
    ctx->pc = 0x13DAFCu;
label_13dafc:
    // 0x13dafc: 0xa22203e4  sb          $v0, 0x3E4($s1)
    ctx->pc = 0x13dafcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 996), (uint8_t)GPR_U32(ctx, 2));
label_13db00:
    // 0x13db00: 0x922303e8  lbu         $v1, 0x3E8($s1)
    ctx->pc = 0x13db00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1000)));
label_13db04:
    // 0x13db04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13db04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13db08:
    // 0x13db08: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_13db0c:
    if (ctx->pc == 0x13DB0Cu) {
        ctx->pc = 0x13DB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DB08u;
        // 0x13db0c: 0x922203e4  lbu         $v0, 0x3E4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 996)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DB10u;
        goto label_13db10;
    }
    ctx->pc = 0x13DB08u;
    {
        const bool branch_taken_0x13db08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13db08) {
            ctx->pc = 0x13DB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DB08u;
            // 0x13db0c: 0x922203e4  lbu         $v0, 0x3E4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 996)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DB24u;
            goto label_13db24;
        }
    }
    ctx->pc = 0x13DB10u;
label_13db10:
    // 0x13db10: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x13db10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_13db14:
    // 0x13db14: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x13db14u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_13db18:
    // 0x13db18: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x13db18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_13db1c:
    // 0x13db1c: 0x7e430010  sq          $v1, 0x10($s2)
    ctx->pc = 0x13db1cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 3));
label_13db20:
    // 0x13db20: 0x922203e4  lbu         $v0, 0x3E4($s1)
    ctx->pc = 0x13db20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 996)));
label_13db24:
    // 0x13db24: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_13db28:
    if (ctx->pc == 0x13DB28u) {
        ctx->pc = 0x13DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DB24u;
        // 0x13db28: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DB2Cu;
        goto label_13db2c;
    }
    ctx->pc = 0x13DB24u;
    {
        const bool branch_taken_0x13db24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13db24) {
            ctx->pc = 0x13DB28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DB24u;
            // 0x13db28: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DB50u;
            goto label_13db50;
        }
    }
    ctx->pc = 0x13DB2Cu;
label_13db2c:
    // 0x13db2c: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x13db2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_13db30:
    // 0x13db30: 0x7e220180  sq          $v0, 0x180($s1)
    ctx->pc = 0x13db30u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 384), GPR_VEC(ctx, 2));
label_13db34:
    // 0x13db34: 0x7aa30000  lq          $v1, 0x0($s5)
    ctx->pc = 0x13db34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_13db38:
    // 0x13db38: 0x7e2302f0  sq          $v1, 0x2F0($s1)
    ctx->pc = 0x13db38u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 752), GPR_VEC(ctx, 3));
label_13db3c:
    // 0x13db3c: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x13db3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_13db40:
    // 0x13db40: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x13db40u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_13db44:
    // 0x13db44: 0x7a430010  lq          $v1, 0x10($s2)
    ctx->pc = 0x13db44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_13db48:
    // 0x13db48: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x13db48u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
label_13db4c:
    // 0x13db4c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13db4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13db50:
    // 0x13db50: 0x263002f0  addiu       $s0, $s1, 0x2F0
    ctx->pc = 0x13db50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 752));
label_13db54:
    // 0x13db54: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x13db54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13db58:
    // 0x13db58: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x13db58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_13db5c:
    // 0x13db5c: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x13db5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_13db60:
    // 0x13db60: 0x40f809  jalr        $v0
label_13db64:
    if (ctx->pc == 0x13DB64u) {
        ctx->pc = 0x13DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DB60u;
        // 0x13db64: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DB68u;
        goto label_13db68;
    }
    ctx->pc = 0x13DB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13DB68u);
        ctx->pc = 0x13DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DB60u;
        // 0x13db64: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DB60u, 0x13DB68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13DB68u;
label_13db68:
    // 0x13db68: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13db68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_13db6c:
    // 0x13db6c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x13db6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13db70:
    // 0x13db70: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x13db70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_13db74:
    // 0x13db74: 0x84a40218  lh          $a0, 0x218($a1)
    ctx->pc = 0x13db74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 536)));
label_13db78:
    // 0x13db78: 0x8ca2021c  lw          $v0, 0x21C($a1)
    ctx->pc = 0x13db78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 540)));
label_13db7c:
    // 0x13db7c: 0x40f809  jalr        $v0
label_13db80:
    if (ctx->pc == 0x13DB80u) {
        ctx->pc = 0x13DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DB7Cu;
        // 0x13db80: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DB84u;
        goto label_13db84;
    }
    ctx->pc = 0x13DB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13DB84u);
        ctx->pc = 0x13DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DB7Cu;
        // 0x13db80: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DB7Cu, 0x13DB84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13DB84u;
label_13db84:
    // 0x13db84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13db84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13db88:
    // 0x13db88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13db88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13db8c:
    // 0x13db8c: 0xc0cdc0a  jal         func_337028
label_13db90:
    if (ctx->pc == 0x13DB90u) {
        ctx->pc = 0x13DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DB8Cu;
        // 0x13db90: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DB94u;
        goto label_13db94;
    }
    ctx->pc = 0x13DB8Cu;
    SET_GPR_U32(ctx, 31, 0x13DB94u);
    ctx->pc = 0x13DB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DB8Cu;
    // 0x13db90: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337028u, 0x13DB8Cu, 0x13DB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DB94u;
label_13db94:
    // 0x13db94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_13db98:
    if (ctx->pc == 0x13DB98u) {
        ctx->pc = 0x13DB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DB94u;
        // 0x13db98: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DB9Cu;
        goto label_13db9c;
    }
    ctx->pc = 0x13DB94u;
    {
        const bool branch_taken_0x13db94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DB94u;
        // 0x13db98: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13db94) {
            ctx->pc = 0x13DBACu;
            goto label_13dbac;
        }
    }
    ctx->pc = 0x13DB9Cu;
label_13db9c:
    // 0x13db9c: 0xc0cd972  jal         func_3365C8
label_13dba0:
    if (ctx->pc == 0x13DBA0u) {
        ctx->pc = 0x13DBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DB9Cu;
        // 0x13dba0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DBA4u;
        goto label_13dba4;
    }
    ctx->pc = 0x13DB9Cu;
    SET_GPR_U32(ctx, 31, 0x13DBA4u);
    ctx->pc = 0x13DBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DB9Cu;
    // 0x13dba0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365C8u, 0x13DB9Cu, 0x13DBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DBA4u;
label_13dba4:
    // 0x13dba4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x13dba4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13dba8:
    // 0x13dba8: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x13dba8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_13dbac:
    // 0x13dbac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13dbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13dbb0:
    // 0x13dbb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13dbb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13dbb4:
    // 0x13dbb4: 0xc048314  jal         func_120C50
label_13dbb8:
    if (ctx->pc == 0x13DBB8u) {
        ctx->pc = 0x13DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DBB4u;
        // 0x13dbb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DBBCu;
        goto label_13dbbc;
    }
    ctx->pc = 0x13DBB4u;
    SET_GPR_U32(ctx, 31, 0x13DBBCu);
    ctx->pc = 0x13DBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DBB4u;
    // 0x13dbb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120C50u, 0x13DBB4u, 0x13DBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DBBCu;
label_13dbbc:
    // 0x13dbbc: 0x922203e4  lbu         $v0, 0x3E4($s1)
    ctx->pc = 0x13dbbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 996)));
label_13dbc0:
    // 0x13dbc0: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_13dbc4:
    if (ctx->pc == 0x13DBC4u) {
        ctx->pc = 0x13DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DBC0u;
        // 0x13dbc4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DBC8u;
        goto label_13dbc8;
    }
    ctx->pc = 0x13DBC0u;
    {
        const bool branch_taken_0x13dbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13dbc0) {
            ctx->pc = 0x13DBC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DBC0u;
            // 0x13dbc4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DBFCu;
            goto label_13dbfc;
        }
    }
    ctx->pc = 0x13DBC8u;
label_13dbc8:
    // 0x13dbc8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x13dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_13dbcc:
    // 0x13dbcc: 0x8c43b1c0  lw          $v1, -0x4E40($v0)
    ctx->pc = 0x13dbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947264)));
label_13dbd0:
    // 0x13dbd0: 0x54600011  bnel        $v1, $zero, . + 4 + (0x11 << 2)
label_13dbd4:
    if (ctx->pc == 0x13DBD4u) {
        ctx->pc = 0x13DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DBD0u;
        // 0x13dbd4: 0x8e250340  lw          $a1, 0x340($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DBD8u;
        goto label_13dbd8;
    }
    ctx->pc = 0x13DBD0u;
    {
        const bool branch_taken_0x13dbd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13dbd0) {
            ctx->pc = 0x13DBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DBD0u;
            // 0x13dbd4: 0x8e250340  lw          $a1, 0x340($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DC18u;
            goto label_13dc18;
        }
    }
    ctx->pc = 0x13DBD8u;
label_13dbd8:
    // 0x13dbd8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x13dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_13dbdc:
    // 0x13dbdc: 0x8c43b2b0  lw          $v1, -0x4D50($v0)
    ctx->pc = 0x13dbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947504)));
label_13dbe0:
    // 0x13dbe0: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
label_13dbe4:
    if (ctx->pc == 0x13DBE4u) {
        ctx->pc = 0x13DBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DBE0u;
        // 0x13dbe4: 0x8e250340  lw          $a1, 0x340($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DBE8u;
        goto label_13dbe8;
    }
    ctx->pc = 0x13DBE0u;
    {
        const bool branch_taken_0x13dbe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dbe0) {
            ctx->pc = 0x13DBE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DBE0u;
            // 0x13dbe4: 0x8e250340  lw          $a1, 0x340($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DC18u;
            goto label_13dc18;
        }
    }
    ctx->pc = 0x13DBE8u;
label_13dbe8:
    // 0x13dbe8: 0x8e220348  lw          $v0, 0x348($s1)
    ctx->pc = 0x13dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 840)));
label_13dbec:
    // 0x13dbec: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x13dbecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_13dbf0:
    // 0x13dbf0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_13dbf4:
    if (ctx->pc == 0x13DBF4u) {
        ctx->pc = 0x13DBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DBF0u;
        // 0x13dbf4: 0x8e250340  lw          $a1, 0x340($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DBF8u;
        goto label_13dbf8;
    }
    ctx->pc = 0x13DBF0u;
    {
        const bool branch_taken_0x13dbf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13dbf0) {
            ctx->pc = 0x13DBF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DBF0u;
            // 0x13dbf4: 0x8e250340  lw          $a1, 0x340($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DC18u;
            goto label_13dc18;
        }
    }
    ctx->pc = 0x13DBF8u;
label_13dbf8:
    // 0x13dbf8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x13dbf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13dbfc:
    // 0x13dbfc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x13dbfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13dc00:
    // 0x13dc00: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x13dc00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_13dc04:
    // 0x13dc04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13dc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13dc08:
    // 0x13dc08: 0xc0501c2  jal         func_140708
label_13dc0c:
    if (ctx->pc == 0x13DC0Cu) {
        ctx->pc = 0x13DC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC08u;
        // 0x13dc0c: 0x26250340  addiu       $a1, $s1, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DC10u;
        goto label_13dc10;
    }
    ctx->pc = 0x13DC08u;
    SET_GPR_U32(ctx, 31, 0x13DC10u);
    ctx->pc = 0x13DC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DC08u;
    // 0x13dc0c: 0x26250340  addiu       $a1, $s1, 0x340 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140708u, 0x13DC08u, 0x13DC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DC10u;
label_13dc10:
    // 0x13dc10: 0x10000003  b           . + 4 + (0x3 << 2)
label_13dc14:
    if (ctx->pc == 0x13DC14u) {
        ctx->pc = 0x13DC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC10u;
        // 0x13dc14: 0xa23603e4  sb          $s6, 0x3E4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 996), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DC18u;
        goto label_13dc18;
    }
    ctx->pc = 0x13DC10u;
    {
        const bool branch_taken_0x13dc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC10u;
        // 0x13dc14: 0xa23603e4  sb          $s6, 0x3E4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 996), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dc10) {
            ctx->pc = 0x13DC20u;
            goto label_13dc20;
        }
    }
    ctx->pc = 0x13DC18u;
label_13dc18:
    // 0x13dc18: 0xc05020c  jal         func_140830
label_13dc1c:
    if (ctx->pc == 0x13DC1Cu) {
        ctx->pc = 0x13DC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC18u;
        // 0x13dc1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DC20u;
        goto label_13dc20;
    }
    ctx->pc = 0x13DC18u;
    SET_GPR_U32(ctx, 31, 0x13DC20u);
    ctx->pc = 0x13DC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DC18u;
    // 0x13dc1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140830u, 0x13DC18u, 0x13DC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DC20u;
label_13dc20:
    // 0x13dc20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13dc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13dc24:
    // 0x13dc24: 0xc0484a6  jal         func_121298
label_13dc28:
    if (ctx->pc == 0x13DC28u) {
        ctx->pc = 0x13DC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC24u;
        // 0x13dc28: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DC2Cu;
        goto label_13dc2c;
    }
    ctx->pc = 0x13DC24u;
    SET_GPR_U32(ctx, 31, 0x13DC2Cu);
    ctx->pc = 0x13DC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DC24u;
    // 0x13dc28: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121298u, 0x13DC24u, 0x13DC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DC2Cu;
label_13dc2c:
    // 0x13dc2c: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_13dc30:
    if (ctx->pc == 0x13DC30u) {
        ctx->pc = 0x13DC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC2Cu;
        // 0x13dc30: 0x822303ec  lb          $v1, 0x3EC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1004)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DC34u;
        goto label_13dc34;
    }
    ctx->pc = 0x13DC2Cu;
    {
        const bool branch_taken_0x13dc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dc2c) {
            ctx->pc = 0x13DC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DC2Cu;
            // 0x13dc30: 0x822303ec  lb          $v1, 0x3EC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1004)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DC88u;
            goto label_13dc88;
        }
    }
    ctx->pc = 0x13DC34u;
label_13dc34:
    // 0x13dc34: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13dc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13dc38:
    // 0x13dc38: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x13dc38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_13dc3c:
    // 0x13dc3c: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x13dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_13dc40:
    // 0x13dc40: 0x40f809  jalr        $v0
label_13dc44:
    if (ctx->pc == 0x13DC44u) {
        ctx->pc = 0x13DC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC40u;
        // 0x13dc44: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DC48u;
        goto label_13dc48;
    }
    ctx->pc = 0x13DC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13DC48u);
        ctx->pc = 0x13DC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC40u;
        // 0x13dc44: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DC40u, 0x13DC48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13DC48u;
label_13dc48:
    // 0x13dc48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13dc48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13dc4c:
    // 0x13dc4c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x13dc4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13dc50:
    // 0x13dc50: 0xc0cdc0a  jal         func_337028
label_13dc54:
    if (ctx->pc == 0x13DC54u) {
        ctx->pc = 0x13DC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC50u;
        // 0x13dc54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DC58u;
        goto label_13dc58;
    }
    ctx->pc = 0x13DC50u;
    SET_GPR_U32(ctx, 31, 0x13DC58u);
    ctx->pc = 0x13DC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DC50u;
    // 0x13dc54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337028u, 0x13DC50u, 0x13DC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DC58u;
label_13dc58:
    // 0x13dc58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_13dc5c:
    if (ctx->pc == 0x13DC5Cu) {
        ctx->pc = 0x13DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC58u;
        // 0x13dc5c: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DC60u;
        goto label_13dc60;
    }
    ctx->pc = 0x13DC58u;
    {
        const bool branch_taken_0x13dc58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC58u;
        // 0x13dc5c: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dc58) {
            ctx->pc = 0x13DC70u;
            goto label_13dc70;
        }
    }
    ctx->pc = 0x13DC60u;
label_13dc60:
    // 0x13dc60: 0xc0cd972  jal         func_3365C8
label_13dc64:
    if (ctx->pc == 0x13DC64u) {
        ctx->pc = 0x13DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC60u;
        // 0x13dc64: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DC68u;
        goto label_13dc68;
    }
    ctx->pc = 0x13DC60u;
    SET_GPR_U32(ctx, 31, 0x13DC68u);
    ctx->pc = 0x13DC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DC60u;
    // 0x13dc64: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365C8u, 0x13DC60u, 0x13DC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DC68u;
label_13dc68:
    // 0x13dc68: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x13dc68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13dc6c:
    // 0x13dc6c: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x13dc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_13dc70:
    // 0x13dc70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13dc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13dc74:
    // 0x13dc74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13dc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13dc78:
    // 0x13dc78: 0xc048314  jal         func_120C50
label_13dc7c:
    if (ctx->pc == 0x13DC7Cu) {
        ctx->pc = 0x13DC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC78u;
        // 0x13dc7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DC80u;
        goto label_13dc80;
    }
    ctx->pc = 0x13DC78u;
    SET_GPR_U32(ctx, 31, 0x13DC80u);
    ctx->pc = 0x13DC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DC78u;
    // 0x13dc7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120C50u, 0x13DC78u, 0x13DC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DC80u;
label_13dc80:
    // 0x13dc80: 0x10000005  b           . + 4 + (0x5 << 2)
label_13dc84:
    if (ctx->pc == 0x13DC84u) {
        ctx->pc = 0x13DC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC80u;
        // 0x13dc84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DC88u;
        goto label_13dc88;
    }
    ctx->pc = 0x13DC80u;
    {
        const bool branch_taken_0x13dc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC80u;
        // 0x13dc84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dc80) {
            ctx->pc = 0x13DC98u;
            goto label_13dc98;
        }
    }
    ctx->pc = 0x13DC88u;
label_13dc88:
    // 0x13dc88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13dc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13dc8c:
    // 0x13dc8c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_13dc90:
    if (ctx->pc == 0x13DC90u) {
        ctx->pc = 0x13DC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC8Cu;
        // 0x13dc90: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DC94u;
        goto label_13dc94;
    }
    ctx->pc = 0x13DC8Cu;
    {
        const bool branch_taken_0x13dc8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13DC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC8Cu;
        // 0x13dc90: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dc8c) {
            ctx->pc = 0x13DCA0u;
            goto label_13dca0;
        }
    }
    ctx->pc = 0x13DC94u;
label_13dc94:
    // 0x13dc94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13dc98:
    // 0x13dc98: 0xa22203ec  sb          $v0, 0x3EC($s1)
    ctx->pc = 0x13dc98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1004), (uint8_t)GPR_U32(ctx, 2));
label_13dc9c:
    // 0x13dc9c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x13dc9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_13dca0:
    // 0x13dca0: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x13dca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_13dca4:
    // 0x13dca4: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x13dca4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_13dca8:
    // 0x13dca8: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x13dca8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_13dcac:
    // 0x13dcac: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x13dcacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_13dcb0:
    // 0x13dcb0: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x13dcb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_13dcb4:
    // 0x13dcb4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x13dcb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13dcb8:
    // 0x13dcb8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x13dcb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_13dcbc:
    // 0x13dcbc: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x13dcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13dcc0:
    // 0x13dcc0: 0x3e00008  jr          $ra
label_13dcc4:
    if (ctx->pc == 0x13DCC4u) {
        ctx->pc = 0x13DCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DCC0u;
        // 0x13dcc4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DCC8u;
        goto label_fallthrough_0x13dcc0;
    }
    ctx->pc = 0x13DCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DCC0u;
        // 0x13dcc4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DCC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13dcc0:
    ctx->pc = 0x13DCC8u;
}
