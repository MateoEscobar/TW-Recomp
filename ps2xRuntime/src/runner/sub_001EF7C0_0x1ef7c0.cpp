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

// Function: sub_001EF7C0
// Address: 0x1ef7c0 - 0x1efd88
void sub_001EF7C0_0x1ef7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF7C0_0x1ef7c0");
#endif

    switch (ctx->pc) {
        case 0x1ef7c0u: goto label_1ef7c0;
        case 0x1ef7c4u: goto label_1ef7c4;
        case 0x1ef7c8u: goto label_1ef7c8;
        case 0x1ef7ccu: goto label_1ef7cc;
        case 0x1ef7d0u: goto label_1ef7d0;
        case 0x1ef7d4u: goto label_1ef7d4;
        case 0x1ef7d8u: goto label_1ef7d8;
        case 0x1ef7dcu: goto label_1ef7dc;
        case 0x1ef7e0u: goto label_1ef7e0;
        case 0x1ef7e4u: goto label_1ef7e4;
        case 0x1ef7e8u: goto label_1ef7e8;
        case 0x1ef7ecu: goto label_1ef7ec;
        case 0x1ef7f0u: goto label_1ef7f0;
        case 0x1ef7f4u: goto label_1ef7f4;
        case 0x1ef7f8u: goto label_1ef7f8;
        case 0x1ef7fcu: goto label_1ef7fc;
        case 0x1ef800u: goto label_1ef800;
        case 0x1ef804u: goto label_1ef804;
        case 0x1ef808u: goto label_1ef808;
        case 0x1ef80cu: goto label_1ef80c;
        case 0x1ef810u: goto label_1ef810;
        case 0x1ef814u: goto label_1ef814;
        case 0x1ef818u: goto label_1ef818;
        case 0x1ef81cu: goto label_1ef81c;
        case 0x1ef820u: goto label_1ef820;
        case 0x1ef824u: goto label_1ef824;
        case 0x1ef828u: goto label_1ef828;
        case 0x1ef82cu: goto label_1ef82c;
        case 0x1ef830u: goto label_1ef830;
        case 0x1ef834u: goto label_1ef834;
        case 0x1ef838u: goto label_1ef838;
        case 0x1ef83cu: goto label_1ef83c;
        case 0x1ef840u: goto label_1ef840;
        case 0x1ef844u: goto label_1ef844;
        case 0x1ef848u: goto label_1ef848;
        case 0x1ef84cu: goto label_1ef84c;
        case 0x1ef850u: goto label_1ef850;
        case 0x1ef854u: goto label_1ef854;
        case 0x1ef858u: goto label_1ef858;
        case 0x1ef85cu: goto label_1ef85c;
        case 0x1ef860u: goto label_1ef860;
        case 0x1ef864u: goto label_1ef864;
        case 0x1ef868u: goto label_1ef868;
        case 0x1ef86cu: goto label_1ef86c;
        case 0x1ef870u: goto label_1ef870;
        case 0x1ef874u: goto label_1ef874;
        case 0x1ef878u: goto label_1ef878;
        case 0x1ef87cu: goto label_1ef87c;
        case 0x1ef880u: goto label_1ef880;
        case 0x1ef884u: goto label_1ef884;
        case 0x1ef888u: goto label_1ef888;
        case 0x1ef88cu: goto label_1ef88c;
        case 0x1ef890u: goto label_1ef890;
        case 0x1ef894u: goto label_1ef894;
        case 0x1ef898u: goto label_1ef898;
        case 0x1ef89cu: goto label_1ef89c;
        case 0x1ef8a0u: goto label_1ef8a0;
        case 0x1ef8a4u: goto label_1ef8a4;
        case 0x1ef8a8u: goto label_1ef8a8;
        case 0x1ef8acu: goto label_1ef8ac;
        case 0x1ef8b0u: goto label_1ef8b0;
        case 0x1ef8b4u: goto label_1ef8b4;
        case 0x1ef8b8u: goto label_1ef8b8;
        case 0x1ef8bcu: goto label_1ef8bc;
        case 0x1ef8c0u: goto label_1ef8c0;
        case 0x1ef8c4u: goto label_1ef8c4;
        case 0x1ef8c8u: goto label_1ef8c8;
        case 0x1ef8ccu: goto label_1ef8cc;
        case 0x1ef8d0u: goto label_1ef8d0;
        case 0x1ef8d4u: goto label_1ef8d4;
        case 0x1ef8d8u: goto label_1ef8d8;
        case 0x1ef8dcu: goto label_1ef8dc;
        case 0x1ef8e0u: goto label_1ef8e0;
        case 0x1ef8e4u: goto label_1ef8e4;
        case 0x1ef8e8u: goto label_1ef8e8;
        case 0x1ef8ecu: goto label_1ef8ec;
        case 0x1ef8f0u: goto label_1ef8f0;
        case 0x1ef8f4u: goto label_1ef8f4;
        case 0x1ef8f8u: goto label_1ef8f8;
        case 0x1ef8fcu: goto label_1ef8fc;
        case 0x1ef900u: goto label_1ef900;
        case 0x1ef904u: goto label_1ef904;
        case 0x1ef908u: goto label_1ef908;
        case 0x1ef90cu: goto label_1ef90c;
        case 0x1ef910u: goto label_1ef910;
        case 0x1ef914u: goto label_1ef914;
        case 0x1ef918u: goto label_1ef918;
        case 0x1ef91cu: goto label_1ef91c;
        case 0x1ef920u: goto label_1ef920;
        case 0x1ef924u: goto label_1ef924;
        case 0x1ef928u: goto label_1ef928;
        case 0x1ef92cu: goto label_1ef92c;
        case 0x1ef930u: goto label_1ef930;
        case 0x1ef934u: goto label_1ef934;
        case 0x1ef938u: goto label_1ef938;
        case 0x1ef93cu: goto label_1ef93c;
        case 0x1ef940u: goto label_1ef940;
        case 0x1ef944u: goto label_1ef944;
        case 0x1ef948u: goto label_1ef948;
        case 0x1ef94cu: goto label_1ef94c;
        case 0x1ef950u: goto label_1ef950;
        case 0x1ef954u: goto label_1ef954;
        case 0x1ef958u: goto label_1ef958;
        case 0x1ef95cu: goto label_1ef95c;
        case 0x1ef960u: goto label_1ef960;
        case 0x1ef964u: goto label_1ef964;
        case 0x1ef968u: goto label_1ef968;
        case 0x1ef96cu: goto label_1ef96c;
        case 0x1ef970u: goto label_1ef970;
        case 0x1ef974u: goto label_1ef974;
        case 0x1ef978u: goto label_1ef978;
        case 0x1ef97cu: goto label_1ef97c;
        case 0x1ef980u: goto label_1ef980;
        case 0x1ef984u: goto label_1ef984;
        case 0x1ef988u: goto label_1ef988;
        case 0x1ef98cu: goto label_1ef98c;
        case 0x1ef990u: goto label_1ef990;
        case 0x1ef994u: goto label_1ef994;
        case 0x1ef998u: goto label_1ef998;
        case 0x1ef99cu: goto label_1ef99c;
        case 0x1ef9a0u: goto label_1ef9a0;
        case 0x1ef9a4u: goto label_1ef9a4;
        case 0x1ef9a8u: goto label_1ef9a8;
        case 0x1ef9acu: goto label_1ef9ac;
        case 0x1ef9b0u: goto label_1ef9b0;
        case 0x1ef9b4u: goto label_1ef9b4;
        case 0x1ef9b8u: goto label_1ef9b8;
        case 0x1ef9bcu: goto label_1ef9bc;
        case 0x1ef9c0u: goto label_1ef9c0;
        case 0x1ef9c4u: goto label_1ef9c4;
        case 0x1ef9c8u: goto label_1ef9c8;
        case 0x1ef9ccu: goto label_1ef9cc;
        case 0x1ef9d0u: goto label_1ef9d0;
        case 0x1ef9d4u: goto label_1ef9d4;
        case 0x1ef9d8u: goto label_1ef9d8;
        case 0x1ef9dcu: goto label_1ef9dc;
        case 0x1ef9e0u: goto label_1ef9e0;
        case 0x1ef9e4u: goto label_1ef9e4;
        case 0x1ef9e8u: goto label_1ef9e8;
        case 0x1ef9ecu: goto label_1ef9ec;
        case 0x1ef9f0u: goto label_1ef9f0;
        case 0x1ef9f4u: goto label_1ef9f4;
        case 0x1ef9f8u: goto label_1ef9f8;
        case 0x1ef9fcu: goto label_1ef9fc;
        case 0x1efa00u: goto label_1efa00;
        case 0x1efa04u: goto label_1efa04;
        case 0x1efa08u: goto label_1efa08;
        case 0x1efa0cu: goto label_1efa0c;
        case 0x1efa10u: goto label_1efa10;
        case 0x1efa14u: goto label_1efa14;
        case 0x1efa18u: goto label_1efa18;
        case 0x1efa1cu: goto label_1efa1c;
        case 0x1efa20u: goto label_1efa20;
        case 0x1efa24u: goto label_1efa24;
        case 0x1efa28u: goto label_1efa28;
        case 0x1efa2cu: goto label_1efa2c;
        case 0x1efa30u: goto label_1efa30;
        case 0x1efa34u: goto label_1efa34;
        case 0x1efa38u: goto label_1efa38;
        case 0x1efa3cu: goto label_1efa3c;
        case 0x1efa40u: goto label_1efa40;
        case 0x1efa44u: goto label_1efa44;
        case 0x1efa48u: goto label_1efa48;
        case 0x1efa4cu: goto label_1efa4c;
        case 0x1efa50u: goto label_1efa50;
        case 0x1efa54u: goto label_1efa54;
        case 0x1efa58u: goto label_1efa58;
        case 0x1efa5cu: goto label_1efa5c;
        case 0x1efa60u: goto label_1efa60;
        case 0x1efa64u: goto label_1efa64;
        case 0x1efa68u: goto label_1efa68;
        case 0x1efa6cu: goto label_1efa6c;
        case 0x1efa70u: goto label_1efa70;
        case 0x1efa74u: goto label_1efa74;
        case 0x1efa78u: goto label_1efa78;
        case 0x1efa7cu: goto label_1efa7c;
        case 0x1efa80u: goto label_1efa80;
        case 0x1efa84u: goto label_1efa84;
        case 0x1efa88u: goto label_1efa88;
        case 0x1efa8cu: goto label_1efa8c;
        case 0x1efa90u: goto label_1efa90;
        case 0x1efa94u: goto label_1efa94;
        case 0x1efa98u: goto label_1efa98;
        case 0x1efa9cu: goto label_1efa9c;
        case 0x1efaa0u: goto label_1efaa0;
        case 0x1efaa4u: goto label_1efaa4;
        case 0x1efaa8u: goto label_1efaa8;
        case 0x1efaacu: goto label_1efaac;
        case 0x1efab0u: goto label_1efab0;
        case 0x1efab4u: goto label_1efab4;
        case 0x1efab8u: goto label_1efab8;
        case 0x1efabcu: goto label_1efabc;
        case 0x1efac0u: goto label_1efac0;
        case 0x1efac4u: goto label_1efac4;
        case 0x1efac8u: goto label_1efac8;
        case 0x1efaccu: goto label_1efacc;
        case 0x1efad0u: goto label_1efad0;
        case 0x1efad4u: goto label_1efad4;
        case 0x1efad8u: goto label_1efad8;
        case 0x1efadcu: goto label_1efadc;
        case 0x1efae0u: goto label_1efae0;
        case 0x1efae4u: goto label_1efae4;
        case 0x1efae8u: goto label_1efae8;
        case 0x1efaecu: goto label_1efaec;
        case 0x1efaf0u: goto label_1efaf0;
        case 0x1efaf4u: goto label_1efaf4;
        case 0x1efaf8u: goto label_1efaf8;
        case 0x1efafcu: goto label_1efafc;
        case 0x1efb00u: goto label_1efb00;
        case 0x1efb04u: goto label_1efb04;
        case 0x1efb08u: goto label_1efb08;
        case 0x1efb0cu: goto label_1efb0c;
        case 0x1efb10u: goto label_1efb10;
        case 0x1efb14u: goto label_1efb14;
        case 0x1efb18u: goto label_1efb18;
        case 0x1efb1cu: goto label_1efb1c;
        case 0x1efb20u: goto label_1efb20;
        case 0x1efb24u: goto label_1efb24;
        case 0x1efb28u: goto label_1efb28;
        case 0x1efb2cu: goto label_1efb2c;
        case 0x1efb30u: goto label_1efb30;
        case 0x1efb34u: goto label_1efb34;
        case 0x1efb38u: goto label_1efb38;
        case 0x1efb3cu: goto label_1efb3c;
        case 0x1efb40u: goto label_1efb40;
        case 0x1efb44u: goto label_1efb44;
        case 0x1efb48u: goto label_1efb48;
        case 0x1efb4cu: goto label_1efb4c;
        case 0x1efb50u: goto label_1efb50;
        case 0x1efb54u: goto label_1efb54;
        case 0x1efb58u: goto label_1efb58;
        case 0x1efb5cu: goto label_1efb5c;
        case 0x1efb60u: goto label_1efb60;
        case 0x1efb64u: goto label_1efb64;
        case 0x1efb68u: goto label_1efb68;
        case 0x1efb6cu: goto label_1efb6c;
        case 0x1efb70u: goto label_1efb70;
        case 0x1efb74u: goto label_1efb74;
        case 0x1efb78u: goto label_1efb78;
        case 0x1efb7cu: goto label_1efb7c;
        case 0x1efb80u: goto label_1efb80;
        case 0x1efb84u: goto label_1efb84;
        case 0x1efb88u: goto label_1efb88;
        case 0x1efb8cu: goto label_1efb8c;
        case 0x1efb90u: goto label_1efb90;
        case 0x1efb94u: goto label_1efb94;
        case 0x1efb98u: goto label_1efb98;
        case 0x1efb9cu: goto label_1efb9c;
        case 0x1efba0u: goto label_1efba0;
        case 0x1efba4u: goto label_1efba4;
        case 0x1efba8u: goto label_1efba8;
        case 0x1efbacu: goto label_1efbac;
        case 0x1efbb0u: goto label_1efbb0;
        case 0x1efbb4u: goto label_1efbb4;
        case 0x1efbb8u: goto label_1efbb8;
        case 0x1efbbcu: goto label_1efbbc;
        case 0x1efbc0u: goto label_1efbc0;
        case 0x1efbc4u: goto label_1efbc4;
        case 0x1efbc8u: goto label_1efbc8;
        case 0x1efbccu: goto label_1efbcc;
        case 0x1efbd0u: goto label_1efbd0;
        case 0x1efbd4u: goto label_1efbd4;
        case 0x1efbd8u: goto label_1efbd8;
        case 0x1efbdcu: goto label_1efbdc;
        case 0x1efbe0u: goto label_1efbe0;
        case 0x1efbe4u: goto label_1efbe4;
        case 0x1efbe8u: goto label_1efbe8;
        case 0x1efbecu: goto label_1efbec;
        case 0x1efbf0u: goto label_1efbf0;
        case 0x1efbf4u: goto label_1efbf4;
        case 0x1efbf8u: goto label_1efbf8;
        case 0x1efbfcu: goto label_1efbfc;
        case 0x1efc00u: goto label_1efc00;
        case 0x1efc04u: goto label_1efc04;
        case 0x1efc08u: goto label_1efc08;
        case 0x1efc0cu: goto label_1efc0c;
        case 0x1efc10u: goto label_1efc10;
        case 0x1efc14u: goto label_1efc14;
        case 0x1efc18u: goto label_1efc18;
        case 0x1efc1cu: goto label_1efc1c;
        case 0x1efc20u: goto label_1efc20;
        case 0x1efc24u: goto label_1efc24;
        case 0x1efc28u: goto label_1efc28;
        case 0x1efc2cu: goto label_1efc2c;
        case 0x1efc30u: goto label_1efc30;
        case 0x1efc34u: goto label_1efc34;
        case 0x1efc38u: goto label_1efc38;
        case 0x1efc3cu: goto label_1efc3c;
        case 0x1efc40u: goto label_1efc40;
        case 0x1efc44u: goto label_1efc44;
        case 0x1efc48u: goto label_1efc48;
        case 0x1efc4cu: goto label_1efc4c;
        case 0x1efc50u: goto label_1efc50;
        case 0x1efc54u: goto label_1efc54;
        case 0x1efc58u: goto label_1efc58;
        case 0x1efc5cu: goto label_1efc5c;
        case 0x1efc60u: goto label_1efc60;
        case 0x1efc64u: goto label_1efc64;
        case 0x1efc68u: goto label_1efc68;
        case 0x1efc6cu: goto label_1efc6c;
        case 0x1efc70u: goto label_1efc70;
        case 0x1efc74u: goto label_1efc74;
        case 0x1efc78u: goto label_1efc78;
        case 0x1efc7cu: goto label_1efc7c;
        case 0x1efc80u: goto label_1efc80;
        case 0x1efc84u: goto label_1efc84;
        case 0x1efc88u: goto label_1efc88;
        case 0x1efc8cu: goto label_1efc8c;
        case 0x1efc90u: goto label_1efc90;
        case 0x1efc94u: goto label_1efc94;
        case 0x1efc98u: goto label_1efc98;
        case 0x1efc9cu: goto label_1efc9c;
        case 0x1efca0u: goto label_1efca0;
        case 0x1efca4u: goto label_1efca4;
        case 0x1efca8u: goto label_1efca8;
        case 0x1efcacu: goto label_1efcac;
        case 0x1efcb0u: goto label_1efcb0;
        case 0x1efcb4u: goto label_1efcb4;
        case 0x1efcb8u: goto label_1efcb8;
        case 0x1efcbcu: goto label_1efcbc;
        case 0x1efcc0u: goto label_1efcc0;
        case 0x1efcc4u: goto label_1efcc4;
        case 0x1efcc8u: goto label_1efcc8;
        case 0x1efcccu: goto label_1efccc;
        case 0x1efcd0u: goto label_1efcd0;
        case 0x1efcd4u: goto label_1efcd4;
        case 0x1efcd8u: goto label_1efcd8;
        case 0x1efcdcu: goto label_1efcdc;
        case 0x1efce0u: goto label_1efce0;
        case 0x1efce4u: goto label_1efce4;
        case 0x1efce8u: goto label_1efce8;
        case 0x1efcecu: goto label_1efcec;
        case 0x1efcf0u: goto label_1efcf0;
        case 0x1efcf4u: goto label_1efcf4;
        case 0x1efcf8u: goto label_1efcf8;
        case 0x1efcfcu: goto label_1efcfc;
        case 0x1efd00u: goto label_1efd00;
        case 0x1efd04u: goto label_1efd04;
        case 0x1efd08u: goto label_1efd08;
        case 0x1efd0cu: goto label_1efd0c;
        case 0x1efd10u: goto label_1efd10;
        case 0x1efd14u: goto label_1efd14;
        case 0x1efd18u: goto label_1efd18;
        case 0x1efd1cu: goto label_1efd1c;
        case 0x1efd20u: goto label_1efd20;
        case 0x1efd24u: goto label_1efd24;
        case 0x1efd28u: goto label_1efd28;
        case 0x1efd2cu: goto label_1efd2c;
        case 0x1efd30u: goto label_1efd30;
        case 0x1efd34u: goto label_1efd34;
        case 0x1efd38u: goto label_1efd38;
        case 0x1efd3cu: goto label_1efd3c;
        case 0x1efd40u: goto label_1efd40;
        case 0x1efd44u: goto label_1efd44;
        case 0x1efd48u: goto label_1efd48;
        case 0x1efd4cu: goto label_1efd4c;
        case 0x1efd50u: goto label_1efd50;
        case 0x1efd54u: goto label_1efd54;
        case 0x1efd58u: goto label_1efd58;
        case 0x1efd5cu: goto label_1efd5c;
        case 0x1efd60u: goto label_1efd60;
        case 0x1efd64u: goto label_1efd64;
        case 0x1efd68u: goto label_1efd68;
        case 0x1efd6cu: goto label_1efd6c;
        case 0x1efd70u: goto label_1efd70;
        case 0x1efd74u: goto label_1efd74;
        case 0x1efd78u: goto label_1efd78;
        case 0x1efd7cu: goto label_1efd7c;
        case 0x1efd80u: goto label_1efd80;
        case 0x1efd84u: goto label_1efd84;
        default: break;
    }

    ctx->pc = 0x1ef7c0u;

label_1ef7c0:
    // 0x1ef7c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ef7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1ef7c4:
    // 0x1ef7c4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ef7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1ef7c8:
    // 0x1ef7c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ef7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1ef7cc:
    // 0x1ef7cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ef7ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ef7d0:
    // 0x1ef7d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ef7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ef7d4:
    // 0x1ef7d4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1ef7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1ef7d8:
    // 0x1ef7d8: 0x14a0000b  bnez        $a1, . + 4 + (0xB << 2)
label_1ef7dc:
    if (ctx->pc == 0x1EF7DCu) {
        ctx->pc = 0x1EF7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF7D8u;
        // 0x1ef7dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF7E0u;
        goto label_1ef7e0;
    }
    ctx->pc = 0x1EF7D8u;
    {
        const bool branch_taken_0x1ef7d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF7D8u;
        // 0x1ef7dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef7d8) {
            ctx->pc = 0x1EF808u;
            goto label_1ef808;
        }
    }
    ctx->pc = 0x1EF7E0u;
label_1ef7e0:
    // 0x1ef7e0: 0x8e050154  lw          $a1, 0x154($s0)
    ctx->pc = 0x1ef7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_1ef7e4:
    // 0x1ef7e4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1ef7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1ef7e8:
    // 0x1ef7e8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ef7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1ef7ec:
    // 0x1ef7ec: 0x8c430138  lw          $v1, 0x138($v0)
    ctx->pc = 0x1ef7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
label_1ef7f0:
    // 0x1ef7f0: 0x14600152  bnez        $v1, . + 4 + (0x152 << 2)
label_1ef7f4:
    if (ctx->pc == 0x1EF7F4u) {
        ctx->pc = 0x1EF7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF7F0u;
        // 0x1ef7f4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF7F8u;
        goto label_1ef7f8;
    }
    ctx->pc = 0x1EF7F0u;
    {
        const bool branch_taken_0x1ef7f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF7F0u;
        // 0x1ef7f4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef7f0) {
            ctx->pc = 0x1EFD3Cu;
            goto label_1efd3c;
        }
    }
    ctx->pc = 0x1EF7F8u;
label_1ef7f8:
    // 0x1ef7f8: 0xc07bd6a  jal         func_1EF5A8
label_1ef7fc:
    if (ctx->pc == 0x1EF7FCu) {
        ctx->pc = 0x1EF800u;
        goto label_1ef800;
    }
    ctx->pc = 0x1EF7F8u;
    SET_GPR_U32(ctx, 31, 0x1EF800u);
    ctx->pc = 0x1EF5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF5A8u, 0x1EF7F8u, 0x1EF800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF800u;
label_1ef800:
    // 0x1ef800: 0x1000014e  b           . + 4 + (0x14E << 2)
label_1ef804:
    if (ctx->pc == 0x1EF804u) {
        ctx->pc = 0x1EF804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF800u;
        // 0x1ef804: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF808u;
        goto label_1ef808;
    }
    ctx->pc = 0x1EF800u;
    {
        const bool branch_taken_0x1ef800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF800u;
        // 0x1ef804: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef800) {
            ctx->pc = 0x1EFD3Cu;
            goto label_1efd3c;
        }
    }
    ctx->pc = 0x1EF808u;
label_1ef808:
    // 0x1ef808: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1ef808u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef80c:
    // 0x1ef80c: 0x14b1000b  bne         $a1, $s1, . + 4 + (0xB << 2)
label_1ef810:
    if (ctx->pc == 0x1EF810u) {
        ctx->pc = 0x1EF810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF80Cu;
        // 0x1ef810: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF814u;
        goto label_1ef814;
    }
    ctx->pc = 0x1EF80Cu;
    {
        const bool branch_taken_0x1ef80c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 17));
        ctx->pc = 0x1EF810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF80Cu;
        // 0x1ef810: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef80c) {
            ctx->pc = 0x1EF83Cu;
            goto label_1ef83c;
        }
    }
    ctx->pc = 0x1EF814u;
label_1ef814:
    // 0x1ef814: 0x8e050154  lw          $a1, 0x154($s0)
    ctx->pc = 0x1ef814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_1ef818:
    // 0x1ef818: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1ef818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1ef81c:
    // 0x1ef81c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ef81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1ef820:
    // 0x1ef820: 0x8c430138  lw          $v1, 0x138($v0)
    ctx->pc = 0x1ef820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
label_1ef824:
    // 0x1ef824: 0x14600145  bnez        $v1, . + 4 + (0x145 << 2)
label_1ef828:
    if (ctx->pc == 0x1EF828u) {
        ctx->pc = 0x1EF828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF824u;
        // 0x1ef828: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF82Cu;
        goto label_1ef82c;
    }
    ctx->pc = 0x1EF824u;
    {
        const bool branch_taken_0x1ef824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF824u;
        // 0x1ef828: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef824) {
            ctx->pc = 0x1EFD3Cu;
            goto label_1efd3c;
        }
    }
    ctx->pc = 0x1EF82Cu;
label_1ef82c:
    // 0x1ef82c: 0xc07bdb6  jal         func_1EF6D8
label_1ef830:
    if (ctx->pc == 0x1EF830u) {
        ctx->pc = 0x1EF830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF82Cu;
        // 0x1ef830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF834u;
        goto label_1ef834;
    }
    ctx->pc = 0x1EF82Cu;
    SET_GPR_U32(ctx, 31, 0x1EF834u);
    ctx->pc = 0x1EF830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF82Cu;
    // 0x1ef830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF6D8u, 0x1EF82Cu, 0x1EF834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF834u;
label_1ef834:
    // 0x1ef834: 0x10000141  b           . + 4 + (0x141 << 2)
label_1ef838:
    if (ctx->pc == 0x1EF838u) {
        ctx->pc = 0x1EF838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF834u;
        // 0x1ef838: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF83Cu;
        goto label_1ef83c;
    }
    ctx->pc = 0x1EF834u;
    {
        const bool branch_taken_0x1ef834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF834u;
        // 0x1ef838: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef834) {
            ctx->pc = 0x1EFD3Cu;
            goto label_1efd3c;
        }
    }
    ctx->pc = 0x1EF83Cu;
label_1ef83c:
    // 0x1ef83c: 0x14a7002f  bne         $a1, $a3, . + 4 + (0x2F << 2)
label_1ef840:
    if (ctx->pc == 0x1EF840u) {
        ctx->pc = 0x1EF840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF83Cu;
        // 0x1ef840: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF844u;
        goto label_1ef844;
    }
    ctx->pc = 0x1EF83Cu;
    {
        const bool branch_taken_0x1ef83c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x1EF840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF83Cu;
        // 0x1ef840: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef83c) {
            ctx->pc = 0x1EF8FCu;
            goto label_1ef8fc;
        }
    }
    ctx->pc = 0x1EF844u;
label_1ef844:
    // 0x1ef844: 0xde030150  ld          $v1, 0x150($s0)
    ctx->pc = 0x1ef844u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 336)));
label_1ef848:
    // 0x1ef848: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1ef848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1ef84c:
    // 0x1ef84c: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x1ef84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
label_1ef850:
    // 0x1ef850: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1ef850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1ef854:
    // 0x1ef854: 0x10620144  beq         $v1, $v0, . + 4 + (0x144 << 2)
label_1ef858:
    if (ctx->pc == 0x1EF858u) {
        ctx->pc = 0x1EF858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF854u;
        // 0x1ef858: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF85Cu;
        goto label_1ef85c;
    }
    ctx->pc = 0x1EF854u;
    {
        const bool branch_taken_0x1ef854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EF858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF854u;
        // 0x1ef858: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef854) {
            ctx->pc = 0x1EFD68u;
            goto label_1efd68;
        }
    }
    ctx->pc = 0x1EF85Cu;
label_1ef85c:
    // 0x1ef85c: 0x8e060154  lw          $a2, 0x154($s0)
    ctx->pc = 0x1ef85cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_1ef860:
    // 0x1ef860: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1ef860u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1ef864:
    // 0x1ef864: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x1ef864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_1ef868:
    // 0x1ef868: 0x8c430138  lw          $v1, 0x138($v0)
    ctx->pc = 0x1ef868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
label_1ef86c:
    // 0x1ef86c: 0x14600133  bnez        $v1, . + 4 + (0x133 << 2)
label_1ef870:
    if (ctx->pc == 0x1EF870u) {
        ctx->pc = 0x1EF870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF86Cu;
        // 0x1ef870: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF874u;
        goto label_1ef874;
    }
    ctx->pc = 0x1EF86Cu;
    {
        const bool branch_taken_0x1ef86c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF86Cu;
        // 0x1ef870: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef86c) {
            ctx->pc = 0x1EFD3Cu;
            goto label_1efd3c;
        }
    }
    ctx->pc = 0x1EF874u;
label_1ef874:
    // 0x1ef874: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1ef874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1ef878:
    // 0x1ef878: 0x9443eec0  lhu         $v1, -0x1140($v0)
    ctx->pc = 0x1ef878u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962880)));
label_1ef87c:
    // 0x1ef87c: 0x1065012f  beq         $v1, $a1, . + 4 + (0x12F << 2)
label_1ef880:
    if (ctx->pc == 0x1EF880u) {
        ctx->pc = 0x1EF880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF87Cu;
        // 0x1ef880: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF884u;
        goto label_1ef884;
    }
    ctx->pc = 0x1EF87Cu;
    {
        const bool branch_taken_0x1ef87c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1EF880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF87Cu;
        // 0x1ef880: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef87c) {
            ctx->pc = 0x1EFD3Cu;
            goto label_1efd3c;
        }
    }
    ctx->pc = 0x1EF884u;
label_1ef884:
    // 0x1ef884: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1ef884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_1ef888:
    // 0x1ef888: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x1ef888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_1ef88c:
    // 0x1ef88c: 0x8c820158  lw          $v0, 0x158($a0)
    ctx->pc = 0x1ef88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
label_1ef890:
    // 0x1ef890: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1ef890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1ef894:
    // 0x1ef894: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ef894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ef898:
    // 0x1ef898: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ef898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ef89c:
    // 0x1ef89c: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
label_1ef8a0:
    if (ctx->pc == 0x1EF8A0u) {
        ctx->pc = 0x1EF8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF89Cu;
        // 0x1ef8a0: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF8A4u;
        goto label_1ef8a4;
    }
    ctx->pc = 0x1EF89Cu;
    {
        const bool branch_taken_0x1ef89c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF89Cu;
        // 0x1ef8a0: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef89c) {
            ctx->pc = 0x1EF8B8u;
            goto label_1ef8b8;
        }
    }
    ctx->pc = 0x1EF8A4u;
label_1ef8a4:
    // 0x1ef8a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ef8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ef8a8:
    // 0x1ef8a8: 0xc07b04c  jal         func_1EC130
label_1ef8ac:
    if (ctx->pc == 0x1EF8ACu) {
        ctx->pc = 0x1EF8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF8A8u;
        // 0x1ef8ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF8B0u;
        goto label_1ef8b0;
    }
    ctx->pc = 0x1EF8A8u;
    SET_GPR_U32(ctx, 31, 0x1EF8B0u);
    ctx->pc = 0x1EF8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF8A8u;
    // 0x1ef8ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC130u, 0x1EF8A8u, 0x1EF8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF8B0u;
label_1ef8b0:
    // 0x1ef8b0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ef8b4:
    if (ctx->pc == 0x1EF8B4u) {
        ctx->pc = 0x1EF8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF8B0u;
        // 0x1ef8b4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF8B8u;
        goto label_1ef8b8;
    }
    ctx->pc = 0x1EF8B0u;
    {
        const bool branch_taken_0x1ef8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF8B0u;
        // 0x1ef8b4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef8b0) {
            ctx->pc = 0x1EF8C8u;
            goto label_1ef8c8;
        }
    }
    ctx->pc = 0x1EF8B8u;
label_1ef8b8:
    // 0x1ef8b8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1ef8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ef8bc:
    // 0x1ef8bc: 0xc07b00a  jal         func_1EC028
label_1ef8c0:
    if (ctx->pc == 0x1EF8C0u) {
        ctx->pc = 0x1EF8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF8BCu;
        // 0x1ef8c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF8C4u;
        goto label_1ef8c4;
    }
    ctx->pc = 0x1EF8BCu;
    SET_GPR_U32(ctx, 31, 0x1EF8C4u);
    ctx->pc = 0x1EF8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF8BCu;
    // 0x1ef8c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC028u, 0x1EF8BCu, 0x1EF8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF8C4u;
label_1ef8c4:
    // 0x1ef8c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ef8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ef8c8:
    // 0x1ef8c8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ef8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ef8cc:
    // 0x1ef8cc: 0xc043f0c  jal         func_10FC30
label_1ef8d0:
    if (ctx->pc == 0x1EF8D0u) {
        ctx->pc = 0x1EF8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF8CCu;
        // 0x1ef8d0: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF8D4u;
        goto label_1ef8d4;
    }
    ctx->pc = 0x1EF8CCu;
    SET_GPR_U32(ctx, 31, 0x1EF8D4u);
    ctx->pc = 0x1EF8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF8CCu;
    // 0x1ef8d0: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1EF8CCu, 0x1EF8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF8D4u;
label_1ef8d4:
    // 0x1ef8d4: 0x8e030154  lw          $v1, 0x154($s0)
    ctx->pc = 0x1ef8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_1ef8d8:
    // 0x1ef8d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ef8d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ef8dc:
    // 0x1ef8dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ef8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ef8e0:
    // 0x1ef8e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ef8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ef8e4:
    // 0x1ef8e4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ef8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1ef8e8:
    // 0x1ef8e8: 0xac6001e8  sw          $zero, 0x1E8($v1)
    ctx->pc = 0x1ef8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 488), GPR_U32(ctx, 0));
label_1ef8ec:
    // 0x1ef8ec: 0xc07bc54  jal         func_1EF150
label_1ef8f0:
    if (ctx->pc == 0x1EF8F0u) {
        ctx->pc = 0x1EF8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF8ECu;
        // 0x1ef8f0: 0x8e050154  lw          $a1, 0x154($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF8F4u;
        goto label_1ef8f4;
    }
    ctx->pc = 0x1EF8ECu;
    SET_GPR_U32(ctx, 31, 0x1EF8F4u);
    ctx->pc = 0x1EF8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF8ECu;
    // 0x1ef8f0: 0x8e050154  lw          $a1, 0x154($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF150u, 0x1EF8ECu, 0x1EF8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF8F4u;
label_1ef8f4:
    // 0x1ef8f4: 0x10000111  b           . + 4 + (0x111 << 2)
label_1ef8f8:
    if (ctx->pc == 0x1EF8F8u) {
        ctx->pc = 0x1EF8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF8F4u;
        // 0x1ef8f8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF8FCu;
        goto label_1ef8fc;
    }
    ctx->pc = 0x1EF8F4u;
    {
        const bool branch_taken_0x1ef8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF8F4u;
        // 0x1ef8f8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef8f4) {
            ctx->pc = 0x1EFD3Cu;
            goto label_1efd3c;
        }
    }
    ctx->pc = 0x1EF8FCu;
label_1ef8fc:
    // 0x1ef8fc: 0x14a2002f  bne         $a1, $v0, . + 4 + (0x2F << 2)
label_1ef900:
    if (ctx->pc == 0x1EF900u) {
        ctx->pc = 0x1EF900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF8FCu;
        // 0x1ef900: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF904u;
        goto label_1ef904;
    }
    ctx->pc = 0x1EF8FCu;
    {
        const bool branch_taken_0x1ef8fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EF900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF8FCu;
        // 0x1ef900: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef8fc) {
            ctx->pc = 0x1EF9BCu;
            goto label_1ef9bc;
        }
    }
    ctx->pc = 0x1EF904u;
label_1ef904:
    // 0x1ef904: 0xde030150  ld          $v1, 0x150($s0)
    ctx->pc = 0x1ef904u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 336)));
label_1ef908:
    // 0x1ef908: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1ef908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1ef90c:
    // 0x1ef90c: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x1ef90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
label_1ef910:
    // 0x1ef910: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1ef910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1ef914:
    // 0x1ef914: 0x10620114  beq         $v1, $v0, . + 4 + (0x114 << 2)
label_1ef918:
    if (ctx->pc == 0x1EF918u) {
        ctx->pc = 0x1EF918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF914u;
        // 0x1ef918: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF91Cu;
        goto label_1ef91c;
    }
    ctx->pc = 0x1EF914u;
    {
        const bool branch_taken_0x1ef914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EF918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF914u;
        // 0x1ef918: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef914) {
            ctx->pc = 0x1EFD68u;
            goto label_1efd68;
        }
    }
    ctx->pc = 0x1EF91Cu;
label_1ef91c:
    // 0x1ef91c: 0x8e060154  lw          $a2, 0x154($s0)
    ctx->pc = 0x1ef91cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_1ef920:
    // 0x1ef920: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1ef920u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1ef924:
    // 0x1ef924: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x1ef924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_1ef928:
    // 0x1ef928: 0x8c430138  lw          $v1, 0x138($v0)
    ctx->pc = 0x1ef928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
label_1ef92c:
    // 0x1ef92c: 0x14600103  bnez        $v1, . + 4 + (0x103 << 2)
label_1ef930:
    if (ctx->pc == 0x1EF930u) {
        ctx->pc = 0x1EF930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF92Cu;
        // 0x1ef930: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF934u;
        goto label_1ef934;
    }
    ctx->pc = 0x1EF92Cu;
    {
        const bool branch_taken_0x1ef92c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF92Cu;
        // 0x1ef930: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef92c) {
            ctx->pc = 0x1EFD3Cu;
            goto label_1efd3c;
        }
    }
    ctx->pc = 0x1EF934u;
label_1ef934:
    // 0x1ef934: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1ef934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1ef938:
    // 0x1ef938: 0x9443eec0  lhu         $v1, -0x1140($v0)
    ctx->pc = 0x1ef938u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962880)));
label_1ef93c:
    // 0x1ef93c: 0x106700ff  beq         $v1, $a3, . + 4 + (0xFF << 2)
label_1ef940:
    if (ctx->pc == 0x1EF940u) {
        ctx->pc = 0x1EF940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF93Cu;
        // 0x1ef940: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF944u;
        goto label_1ef944;
    }
    ctx->pc = 0x1EF93Cu;
    {
        const bool branch_taken_0x1ef93c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x1EF940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF93Cu;
        // 0x1ef940: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef93c) {
            ctx->pc = 0x1EFD3Cu;
            goto label_1efd3c;
        }
    }
    ctx->pc = 0x1EF944u;
label_1ef944:
    // 0x1ef944: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1ef944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_1ef948:
    // 0x1ef948: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x1ef948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_1ef94c:
    // 0x1ef94c: 0x8c820158  lw          $v0, 0x158($a0)
    ctx->pc = 0x1ef94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
label_1ef950:
    // 0x1ef950: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1ef950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1ef954:
    // 0x1ef954: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ef954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ef958:
    // 0x1ef958: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ef958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ef95c:
    // 0x1ef95c: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
label_1ef960:
    if (ctx->pc == 0x1EF960u) {
        ctx->pc = 0x1EF960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF95Cu;
        // 0x1ef960: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF964u;
        goto label_1ef964;
    }
    ctx->pc = 0x1EF95Cu;
    {
        const bool branch_taken_0x1ef95c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF95Cu;
        // 0x1ef960: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef95c) {
            ctx->pc = 0x1EF978u;
            goto label_1ef978;
        }
    }
    ctx->pc = 0x1EF964u;
label_1ef964:
    // 0x1ef964: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ef964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ef968:
    // 0x1ef968: 0xc07b00a  jal         func_1EC028
label_1ef96c:
    if (ctx->pc == 0x1EF96Cu) {
        ctx->pc = 0x1EF96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF968u;
        // 0x1ef96c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF970u;
        goto label_1ef970;
    }
    ctx->pc = 0x1EF968u;
    SET_GPR_U32(ctx, 31, 0x1EF970u);
    ctx->pc = 0x1EF96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF968u;
    // 0x1ef96c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC028u, 0x1EF968u, 0x1EF970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF970u;
label_1ef970:
    // 0x1ef970: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ef974:
    if (ctx->pc == 0x1EF974u) {
        ctx->pc = 0x1EF974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF970u;
        // 0x1ef974: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF978u;
        goto label_1ef978;
    }
    ctx->pc = 0x1EF970u;
    {
        const bool branch_taken_0x1ef970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF970u;
        // 0x1ef974: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef970) {
            ctx->pc = 0x1EF988u;
            goto label_1ef988;
        }
    }
    ctx->pc = 0x1EF978u;
label_1ef978:
    // 0x1ef978: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1ef978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ef97c:
    // 0x1ef97c: 0xc07b04c  jal         func_1EC130
label_1ef980:
    if (ctx->pc == 0x1EF980u) {
        ctx->pc = 0x1EF980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF97Cu;
        // 0x1ef980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF984u;
        goto label_1ef984;
    }
    ctx->pc = 0x1EF97Cu;
    SET_GPR_U32(ctx, 31, 0x1EF984u);
    ctx->pc = 0x1EF980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF97Cu;
    // 0x1ef980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC130u, 0x1EF97Cu, 0x1EF984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF984u;
label_1ef984:
    // 0x1ef984: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ef984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ef988:
    // 0x1ef988: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ef988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ef98c:
    // 0x1ef98c: 0xc043f0c  jal         func_10FC30
label_1ef990:
    if (ctx->pc == 0x1EF990u) {
        ctx->pc = 0x1EF990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF98Cu;
        // 0x1ef990: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF994u;
        goto label_1ef994;
    }
    ctx->pc = 0x1EF98Cu;
    SET_GPR_U32(ctx, 31, 0x1EF994u);
    ctx->pc = 0x1EF990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF98Cu;
    // 0x1ef990: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1EF98Cu, 0x1EF994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF994u;
label_1ef994:
    // 0x1ef994: 0x8e030154  lw          $v1, 0x154($s0)
    ctx->pc = 0x1ef994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_1ef998:
    // 0x1ef998: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ef998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ef99c:
    // 0x1ef99c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ef99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ef9a0:
    // 0x1ef9a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ef9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ef9a4:
    // 0x1ef9a4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ef9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1ef9a8:
    // 0x1ef9a8: 0xac6001e8  sw          $zero, 0x1E8($v1)
    ctx->pc = 0x1ef9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 488), GPR_U32(ctx, 0));
label_1ef9ac:
    // 0x1ef9ac: 0xc07bc54  jal         func_1EF150
label_1ef9b0:
    if (ctx->pc == 0x1EF9B0u) {
        ctx->pc = 0x1EF9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF9ACu;
        // 0x1ef9b0: 0x8e050154  lw          $a1, 0x154($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF9B4u;
        goto label_1ef9b4;
    }
    ctx->pc = 0x1EF9ACu;
    SET_GPR_U32(ctx, 31, 0x1EF9B4u);
    ctx->pc = 0x1EF9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF9ACu;
    // 0x1ef9b0: 0x8e050154  lw          $a1, 0x154($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF150u, 0x1EF9ACu, 0x1EF9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF9B4u;
label_1ef9b4:
    // 0x1ef9b4: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_1ef9b8:
    if (ctx->pc == 0x1EF9B8u) {
        ctx->pc = 0x1EF9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF9B4u;
        // 0x1ef9b8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF9BCu;
        goto label_1ef9bc;
    }
    ctx->pc = 0x1EF9B4u;
    {
        const bool branch_taken_0x1ef9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF9B4u;
        // 0x1ef9b8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef9b4) {
            ctx->pc = 0x1EFD3Cu;
            goto label_1efd3c;
        }
    }
    ctx->pc = 0x1EF9BCu;
label_1ef9bc:
    // 0x1ef9bc: 0x14a20058  bne         $a1, $v0, . + 4 + (0x58 << 2)
label_1ef9c0:
    if (ctx->pc == 0x1EF9C0u) {
        ctx->pc = 0x1EF9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF9BCu;
        // 0x1ef9c0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF9C4u;
        goto label_1ef9c4;
    }
    ctx->pc = 0x1EF9BCu;
    {
        const bool branch_taken_0x1ef9bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EF9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF9BCu;
        // 0x1ef9c0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef9bc) {
            ctx->pc = 0x1EFB20u;
            goto label_1efb20;
        }
    }
    ctx->pc = 0x1EF9C4u;
label_1ef9c4:
    // 0x1ef9c4: 0xde030150  ld          $v1, 0x150($s0)
    ctx->pc = 0x1ef9c4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 336)));
label_1ef9c8:
    // 0x1ef9c8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1ef9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1ef9cc:
    // 0x1ef9cc: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x1ef9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
label_1ef9d0:
    // 0x1ef9d0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1ef9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1ef9d4:
    // 0x1ef9d4: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
label_1ef9d8:
    if (ctx->pc == 0x1EF9D8u) {
        ctx->pc = 0x1EF9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF9D4u;
        // 0x1ef9d8: 0x8e050154  lw          $a1, 0x154($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF9DCu;
        goto label_1ef9dc;
    }
    ctx->pc = 0x1EF9D4u;
    {
        const bool branch_taken_0x1ef9d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ef9d4) {
            ctx->pc = 0x1EF9D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF9D4u;
            // 0x1ef9d8: 0x8e050154  lw          $a1, 0x154($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFA10u;
            goto label_1efa10;
        }
    }
    ctx->pc = 0x1EF9DCu;
label_1ef9dc:
    // 0x1ef9dc: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x1ef9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_1ef9e0:
    // 0x1ef9e0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1ef9e4:
    if (ctx->pc == 0x1EF9E4u) {
        ctx->pc = 0x1EF9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF9E0u;
        // 0x1ef9e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF9E8u;
        goto label_1ef9e8;
    }
    ctx->pc = 0x1EF9E0u;
    {
        const bool branch_taken_0x1ef9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF9E0u;
        // 0x1ef9e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef9e0) {
            ctx->pc = 0x1EFA0Cu;
            goto label_1efa0c;
        }
    }
    ctx->pc = 0x1EF9E8u;
label_1ef9e8:
    // 0x1ef9e8: 0x8e040184  lw          $a0, 0x184($s0)
    ctx->pc = 0x1ef9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_1ef9ec:
    // 0x1ef9ec: 0xae000154  sw          $zero, 0x154($s0)
    ctx->pc = 0x1ef9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
label_1ef9f0:
    // 0x1ef9f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ef9f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef9f4:
    // 0x1ef9f4: 0xc0752e2  jal         func_1D4B88
label_1ef9f8:
    if (ctx->pc == 0x1EF9F8u) {
        ctx->pc = 0x1EF9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF9F4u;
        // 0x1ef9f8: 0xae000138  sw          $zero, 0x138($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF9FCu;
        goto label_1ef9fc;
    }
    ctx->pc = 0x1EF9F4u;
    SET_GPR_U32(ctx, 31, 0x1EF9FCu);
    ctx->pc = 0x1EF9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF9F4u;
    // 0x1ef9f8: 0xae000138  sw          $zero, 0x138($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4B88u, 0x1EF9F4u, 0x1EF9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF9FCu;
label_1ef9fc:
    // 0x1ef9fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ef9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1efa00:
    // 0x1efa00: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1efa00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1efa04:
    // 0x1efa04: 0x1000000b  b           . + 4 + (0xB << 2)
label_1efa08:
    if (ctx->pc == 0x1EFA08u) {
        ctx->pc = 0x1EFA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA04u;
        // 0x1efa08: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFA0Cu;
        goto label_1efa0c;
    }
    ctx->pc = 0x1EFA04u;
    {
        const bool branch_taken_0x1efa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA04u;
        // 0x1efa08: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efa04) {
            ctx->pc = 0x1EFA34u;
            goto label_1efa34;
        }
    }
    ctx->pc = 0x1EFA0Cu;
label_1efa0c:
    // 0x1efa0c: 0x8e050154  lw          $a1, 0x154($s0)
    ctx->pc = 0x1efa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_1efa10:
    // 0x1efa10: 0x26020138  addiu       $v0, $s0, 0x138
    ctx->pc = 0x1efa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 312));
label_1efa14:
    // 0x1efa14: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1efa14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1efa18:
    // 0x1efa18: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1efa18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1efa1c:
    // 0x1efa1c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1efa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1efa20:
    // 0x1efa20: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_1efa24:
    if (ctx->pc == 0x1EFA24u) {
        ctx->pc = 0x1EFA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA20u;
        // 0x1efa24: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFA28u;
        goto label_1efa28;
    }
    ctx->pc = 0x1EFA20u;
    {
        const bool branch_taken_0x1efa20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA20u;
        // 0x1efa24: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efa20) {
            ctx->pc = 0x1EFA50u;
            goto label_1efa50;
        }
    }
    ctx->pc = 0x1EFA28u;
label_1efa28:
    // 0x1efa28: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1efa28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1efa2c:
    // 0x1efa2c: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x1efa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_1efa30:
    // 0x1efa30: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1efa30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1efa34:
    // 0x1efa34: 0xc043f0c  jal         func_10FC30
label_1efa38:
    if (ctx->pc == 0x1EFA38u) {
        ctx->pc = 0x1EFA3Cu;
        goto label_1efa3c;
    }
    ctx->pc = 0x1EFA34u;
    SET_GPR_U32(ctx, 31, 0x1EFA3Cu);
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1EFA34u, 0x1EFA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFA3Cu;
label_1efa3c:
    // 0x1efa3c: 0x8e030154  lw          $v1, 0x154($s0)
    ctx->pc = 0x1efa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_1efa40:
    // 0x1efa40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1efa40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1efa44:
    // 0x1efa44: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1efa44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1efa48:
    // 0x1efa48: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1efa4c:
    if (ctx->pc == 0x1EFA4Cu) {
        ctx->pc = 0x1EFA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA48u;
        // 0x1efa4c: 0xac6001e8  sw          $zero, 0x1E8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 488), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFA50u;
        goto label_1efa50;
    }
    ctx->pc = 0x1EFA48u;
    {
        const bool branch_taken_0x1efa48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA48u;
        // 0x1efa4c: 0xac6001e8  sw          $zero, 0x1E8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 488), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efa48) {
            ctx->pc = 0x1EFAB8u;
            goto label_1efab8;
        }
    }
    ctx->pc = 0x1EFA50u;
label_1efa50:
    // 0x1efa50: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x1efa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_1efa54:
    // 0x1efa54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1efa54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1efa58:
    // 0x1efa58: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_1efa5c:
    if (ctx->pc == 0x1EFA5Cu) {
        ctx->pc = 0x1EFA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA58u;
        // 0x1efa5c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFA60u;
        goto label_1efa60;
    }
    ctx->pc = 0x1EFA58u;
    {
        const bool branch_taken_0x1efa58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EFA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA58u;
        // 0x1efa5c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efa58) {
            ctx->pc = 0x1EFA6Cu;
            goto label_1efa6c;
        }
    }
    ctx->pc = 0x1EFA60u;
label_1efa60:
    // 0x1efa60: 0x54a00016  bnel        $a1, $zero, . + 4 + (0x16 << 2)
label_1efa64:
    if (ctx->pc == 0x1EFA64u) {
        ctx->pc = 0x1EFA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA60u;
        // 0x1efa64: 0x3c030064  lui         $v1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFA68u;
        goto label_1efa68;
    }
    ctx->pc = 0x1EFA60u;
    {
        const bool branch_taken_0x1efa60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efa60) {
            ctx->pc = 0x1EFA64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EFA60u;
            // 0x1efa64: 0x3c030064  lui         $v1, 0x64 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFABCu;
            goto label_1efabc;
        }
    }
    ctx->pc = 0x1EFA68u;
label_1efa68:
    // 0x1efa68: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1efa68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1efa6c:
    // 0x1efa6c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1efa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1efa70:
    // 0x1efa70: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x1efa70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_1efa74:
    // 0x1efa74: 0xc043f0c  jal         func_10FC30
label_1efa78:
    if (ctx->pc == 0x1EFA78u) {
        ctx->pc = 0x1EFA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA74u;
        // 0x1efa78: 0xae030074  sw          $v1, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFA7Cu;
        goto label_1efa7c;
    }
    ctx->pc = 0x1EFA74u;
    SET_GPR_U32(ctx, 31, 0x1EFA7Cu);
    ctx->pc = 0x1EFA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFA74u;
    // 0x1efa78: 0xae030074  sw          $v1, 0x74($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1EFA74u, 0x1EFA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFA7Cu;
label_1efa7c:
    // 0x1efa7c: 0x8e030154  lw          $v1, 0x154($s0)
    ctx->pc = 0x1efa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_1efa80:
    // 0x1efa80: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1efa80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1efa84:
    // 0x1efa84: 0x8c46b8b8  lw          $a2, -0x4748($v0)
    ctx->pc = 0x1efa84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1efa88:
    // 0x1efa88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1efa88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1efa8c:
    // 0x1efa8c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1efa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1efa90:
    // 0x1efa90: 0xac6001e8  sw          $zero, 0x1E8($v1)
    ctx->pc = 0x1efa90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 488), GPR_U32(ctx, 0));
label_1efa94:
    // 0x1efa94: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1efa94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1efa98:
    // 0x1efa98: 0x84a40030  lh          $a0, 0x30($a1)
    ctx->pc = 0x1efa98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_1efa9c:
    // 0x1efa9c: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1efa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1efaa0:
    // 0x1efaa0: 0x40f809  jalr        $v0
label_1efaa4:
    if (ctx->pc == 0x1EFAA4u) {
        ctx->pc = 0x1EFAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAA0u;
        // 0x1efaa4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFAA8u;
        goto label_1efaa8;
    }
    ctx->pc = 0x1EFAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EFAA8u);
        ctx->pc = 0x1EFAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAA0u;
        // 0x1efaa4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFAA0u, 0x1EFAA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EFAA8u;
label_1efaa8:
    // 0x1efaa8: 0x8e030154  lw          $v1, 0x154($s0)
    ctx->pc = 0x1efaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_1efaac:
    // 0x1efaac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1efaacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1efab0:
    // 0x1efab0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1efab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1efab4:
    // 0x1efab4: 0xac620160  sw          $v0, 0x160($v1)
    ctx->pc = 0x1efab4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 352), GPR_U32(ctx, 2));
label_1efab8:
    // 0x1efab8: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1efab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_1efabc:
    // 0x1efabc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1efabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1efac0:
    // 0x1efac0: 0x9462eec0  lhu         $v0, -0x1140($v1)
    ctx->pc = 0x1efac0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962880)));
label_1efac4:
    // 0x1efac4: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
label_1efac8:
    if (ctx->pc == 0x1EFAC8u) {
        ctx->pc = 0x1EFAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAC4u;
        // 0x1efac8: 0x8e020150  lw          $v0, 0x150($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFACCu;
        goto label_1efacc;
    }
    ctx->pc = 0x1EFAC4u;
    {
        const bool branch_taken_0x1efac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1efac4) {
            ctx->pc = 0x1EFAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EFAC4u;
            // 0x1efac8: 0x8e020150  lw          $v0, 0x150($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFAD4u;
            goto label_1efad4;
        }
    }
    ctx->pc = 0x1EFACCu;
label_1efacc:
    // 0x1efacc: 0x10000006  b           . + 4 + (0x6 << 2)
label_1efad0:
    if (ctx->pc == 0x1EFAD0u) {
        ctx->pc = 0x1EFAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFACCu;
        // 0x1efad0: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFAD4u;
        goto label_1efad4;
    }
    ctx->pc = 0x1EFACCu;
    {
        const bool branch_taken_0x1efacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFACCu;
        // 0x1efad0: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efacc) {
            ctx->pc = 0x1EFAE8u;
            goto label_1efae8;
        }
    }
    ctx->pc = 0x1EFAD4u;
label_1efad4:
    // 0x1efad4: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
label_1efad8:
    if (ctx->pc == 0x1EFAD8u) {
        ctx->pc = 0x1EFAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAD4u;
        // 0x1efad8: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFADCu;
        goto label_1efadc;
    }
    ctx->pc = 0x1EFAD4u;
    {
        const bool branch_taken_0x1efad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1EFAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAD4u;
        // 0x1efad8: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efad4) {
            ctx->pc = 0x1EFAE8u;
            goto label_1efae8;
        }
    }
    ctx->pc = 0x1EFADCu;
label_1efadc:
    // 0x1efadc: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x1efadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_1efae0:
    // 0x1efae0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1efae4:
    if (ctx->pc == 0x1EFAE4u) {
        ctx->pc = 0x1EFAE8u;
        goto label_1efae8;
    }
    ctx->pc = 0x1EFAE0u;
    {
        const bool branch_taken_0x1efae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efae0) {
            ctx->pc = 0x1EFB04u;
            goto label_1efb04;
        }
    }
    ctx->pc = 0x1EFAE8u;
label_1efae8:
    // 0x1efae8: 0xc067b9c  jal         func_19EE70
label_1efaec:
    if (ctx->pc == 0x1EFAECu) {
        ctx->pc = 0x1EFAF0u;
        goto label_1efaf0;
    }
    ctx->pc = 0x1EFAE8u;
    SET_GPR_U32(ctx, 31, 0x1EFAF0u);
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1EFAE8u, 0x1EFAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFAF0u;
label_1efaf0:
    // 0x1efaf0: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x1efaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_1efaf4:
    // 0x1efaf4: 0xc073b0a  jal         func_1CEC28
label_1efaf8:
    if (ctx->pc == 0x1EFAF8u) {
        ctx->pc = 0x1EFAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAF4u;
        // 0x1efaf8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFAFCu;
        goto label_1efafc;
    }
    ctx->pc = 0x1EFAF4u;
    SET_GPR_U32(ctx, 31, 0x1EFAFCu);
    ctx->pc = 0x1EFAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFAF4u;
    // 0x1efaf8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1EFAF4u, 0x1EFAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFAFCu;
label_1efafc:
    // 0x1efafc: 0x1000009a  b           . + 4 + (0x9A << 2)
label_1efb00:
    if (ctx->pc == 0x1EFB00u) {
        ctx->pc = 0x1EFB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAFCu;
        // 0x1efb00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFB04u;
        goto label_1efb04;
    }
    ctx->pc = 0x1EFAFCu;
    {
        const bool branch_taken_0x1efafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAFCu;
        // 0x1efb00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efafc) {
            ctx->pc = 0x1EFD68u;
            goto label_1efd68;
        }
    }
    ctx->pc = 0x1EFB04u;
label_1efb04:
    // 0x1efb04: 0xc067b9c  jal         func_19EE70
label_1efb08:
    if (ctx->pc == 0x1EFB08u) {
        ctx->pc = 0x1EFB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB04u;
        // 0x1efb08: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFB0Cu;
        goto label_1efb0c;
    }
    ctx->pc = 0x1EFB04u;
    SET_GPR_U32(ctx, 31, 0x1EFB0Cu);
    ctx->pc = 0x1EFB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFB04u;
    // 0x1efb08: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1EFB04u, 0x1EFB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFB0Cu;
label_1efb0c:
    // 0x1efb0c: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x1efb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_1efb10:
    // 0x1efb10: 0xc073b0a  jal         func_1CEC28
label_1efb14:
    if (ctx->pc == 0x1EFB14u) {
        ctx->pc = 0x1EFB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB10u;
        // 0x1efb14: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFB18u;
        goto label_1efb18;
    }
    ctx->pc = 0x1EFB10u;
    SET_GPR_U32(ctx, 31, 0x1EFB18u);
    ctx->pc = 0x1EFB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFB10u;
    // 0x1efb14: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1EFB10u, 0x1EFB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFB18u;
label_1efb18:
    // 0x1efb18: 0x10000093  b           . + 4 + (0x93 << 2)
label_1efb1c:
    if (ctx->pc == 0x1EFB1Cu) {
        ctx->pc = 0x1EFB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB18u;
        // 0x1efb1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFB20u;
        goto label_1efb20;
    }
    ctx->pc = 0x1EFB18u;
    {
        const bool branch_taken_0x1efb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB18u;
        // 0x1efb1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efb18) {
            ctx->pc = 0x1EFD68u;
            goto label_1efd68;
        }
    }
    ctx->pc = 0x1EFB20u;
label_1efb20:
    // 0x1efb20: 0x14a20086  bne         $a1, $v0, . + 4 + (0x86 << 2)
label_1efb24:
    if (ctx->pc == 0x1EFB24u) {
        ctx->pc = 0x1EFB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB20u;
        // 0x1efb24: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFB28u;
        goto label_1efb28;
    }
    ctx->pc = 0x1EFB20u;
    {
        const bool branch_taken_0x1efb20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EFB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB20u;
        // 0x1efb24: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efb20) {
            ctx->pc = 0x1EFD3Cu;
            goto label_1efd3c;
        }
    }
    ctx->pc = 0x1EFB28u;
label_1efb28:
    // 0x1efb28: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x1efb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_1efb2c:
    // 0x1efb2c: 0x26040138  addiu       $a0, $s0, 0x138
    ctx->pc = 0x1efb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 312));
label_1efb30:
    // 0x1efb30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1efb30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1efb34:
    // 0x1efb34: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1efb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1efb38:
    // 0x1efb38: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1efb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1efb3c:
    // 0x1efb3c: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_1efb40:
    if (ctx->pc == 0x1EFB40u) {
        ctx->pc = 0x1EFB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB3Cu;
        // 0x1efb40: 0xde030138  ld          $v1, 0x138($s0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFB44u;
        goto label_1efb44;
    }
    ctx->pc = 0x1EFB3Cu;
    {
        const bool branch_taken_0x1efb3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efb3c) {
            ctx->pc = 0x1EFB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EFB3Cu;
            // 0x1efb40: 0xde030138  ld          $v1, 0x138($s0) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 312)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFB6Cu;
            goto label_1efb6c;
        }
    }
    ctx->pc = 0x1EFB44u;
label_1efb44:
    // 0x1efb44: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1efb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1efb48:
    // 0x1efb48: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x1efb48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
label_1efb4c:
    // 0x1efb4c: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x1efb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_1efb50:
    // 0x1efb50: 0xc043f0c  jal         func_10FC30
label_1efb54:
    if (ctx->pc == 0x1EFB54u) {
        ctx->pc = 0x1EFB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB50u;
        // 0x1efb54: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFB58u;
        goto label_1efb58;
    }
    ctx->pc = 0x1EFB50u;
    SET_GPR_U32(ctx, 31, 0x1EFB58u);
    ctx->pc = 0x1EFB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFB50u;
    // 0x1efb54: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1EFB50u, 0x1EFB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFB58u;
label_1efb58:
    // 0x1efb58: 0x8e030154  lw          $v1, 0x154($s0)
    ctx->pc = 0x1efb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_1efb5c:
    // 0x1efb5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1efb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1efb60:
    // 0x1efb60: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1efb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1efb64:
    // 0x1efb64: 0xac6001e8  sw          $zero, 0x1E8($v1)
    ctx->pc = 0x1efb64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 488), GPR_U32(ctx, 0));
label_1efb68:
    // 0x1efb68: 0xde030138  ld          $v1, 0x138($s0)
    ctx->pc = 0x1efb68u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 312)));
label_1efb6c:
    // 0x1efb6c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1efb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1efb70:
    // 0x1efb70: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x1efb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
label_1efb74:
    // 0x1efb74: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1efb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1efb78:
    // 0x1efb78: 0x5462003c  bnel        $v1, $v0, . + 4 + (0x3C << 2)
label_1efb7c:
    if (ctx->pc == 0x1EFB7Cu) {
        ctx->pc = 0x1EFB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB78u;
        // 0x1efb7c: 0x8e020154  lw          $v0, 0x154($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFB80u;
        goto label_1efb80;
    }
    ctx->pc = 0x1EFB78u;
    {
        const bool branch_taken_0x1efb78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1efb78) {
            ctx->pc = 0x1EFB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EFB78u;
            // 0x1efb7c: 0x8e020154  lw          $v0, 0x154($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFC6Cu;
            goto label_1efc6c;
        }
    }
    ctx->pc = 0x1EFB80u;
label_1efb80:
    // 0x1efb80: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x1efb80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
label_1efb84:
    // 0x1efb84: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1efb84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1efb88:
    // 0x1efb88: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x1efb88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_1efb8c:
    // 0x1efb8c: 0x2486eec0  addiu       $a2, $a0, -0x1140
    ctx->pc = 0x1efb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962880));
label_1efb90:
    // 0x1efb90: 0x8e020158  lw          $v0, 0x158($s0)
    ctx->pc = 0x1efb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
label_1efb94:
    // 0x1efb94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1efb94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1efb98:
    // 0x1efb98: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1efb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1efb9c:
    // 0x1efb9c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x1efb9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1efba0:
    // 0x1efba0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1efba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1efba4:
    // 0x1efba4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1efba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1efba8:
    // 0x1efba8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1efba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1efbac:
    // 0x1efbac: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1efbacu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1efbb0:
    // 0x1efbb0: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1efbb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1efbb4:
    // 0x1efbb4: 0x26110160  addiu       $s1, $s0, 0x160
    ctx->pc = 0x1efbb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
label_1efbb8:
    // 0x1efbb8: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x1efbb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_1efbbc:
    // 0x1efbbc: 0x24e80008  addiu       $t0, $a3, 0x8
    ctx->pc = 0x1efbbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_1efbc0:
    // 0x1efbc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1efbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1efbc4:
    // 0x1efbc4: 0xa4c20006  sh          $v0, 0x6($a2)
    ctx->pc = 0x1efbc4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 2));
label_1efbc8:
    // 0x1efbc8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1efbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1efbcc:
    // 0x1efbcc: 0x24830005  addiu       $v1, $a0, 0x5
    ctx->pc = 0x1efbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
label_1efbd0:
    // 0x1efbd0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1efbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1efbd4:
    // 0x1efbd4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1efbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1efbd8:
    // 0x1efbd8: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x1efbd8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1efbdc:
    // 0x1efbdc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1efbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1efbe0:
    // 0x1efbe0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1efbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1efbe4:
    // 0x1efbe4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1efbe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1efbe8:
    // 0x1efbe8: 0x2c820009  sltiu       $v0, $a0, 0x9
    ctx->pc = 0x1efbe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1efbec:
    // 0x1efbec: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1efbf0:
    if (ctx->pc == 0x1EFBF0u) {
        ctx->pc = 0x1EFBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFBECu;
        // 0x1efbf0: 0xa4650000  sh          $a1, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFBF4u;
        goto label_1efbf4;
    }
    ctx->pc = 0x1EFBECu;
    {
        const bool branch_taken_0x1efbec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFBECu;
        // 0x1efbf0: 0xa4650000  sh          $a1, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efbec) {
            ctx->pc = 0x1EFBC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1efbc8;
        }
    }
    ctx->pc = 0x1EFBF4u;
label_1efbf4:
    // 0x1efbf4: 0xc07f81c  jal         func_1FE070
label_1efbf8:
    if (ctx->pc == 0x1EFBF8u) {
        ctx->pc = 0x1EFBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFBF4u;
        // 0x1efbf8: 0x8ce40004  lw          $a0, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFBFCu;
        goto label_1efbfc;
    }
    ctx->pc = 0x1EFBF4u;
    SET_GPR_U32(ctx, 31, 0x1EFBFCu);
    ctx->pc = 0x1EFBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFBF4u;
    // 0x1efbf8: 0x8ce40004  lw          $a0, 0x4($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE070u, 0x1EFBF4u, 0x1EFBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFBFCu;
label_1efbfc:
    // 0x1efbfc: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x1efbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_1efc00:
    // 0x1efc00: 0x2645eec0  addiu       $a1, $s2, -0x1140
    ctx->pc = 0x1efc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962880));
label_1efc04:
    // 0x1efc04: 0x8e03015c  lw          $v1, 0x15C($s0)
    ctx->pc = 0x1efc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
label_1efc08:
    // 0x1efc08: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1efc08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1efc0c:
    // 0x1efc0c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1efc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1efc10:
    // 0x1efc10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1efc10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1efc14:
    // 0x1efc14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1efc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1efc18:
    // 0x1efc18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1efc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1efc1c:
    // 0x1efc1c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1efc1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1efc20:
    // 0x1efc20: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x1efc20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_1efc24:
    // 0x1efc24: 0x24e6002c  addiu       $a2, $a3, 0x2C
    ctx->pc = 0x1efc24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 44));
label_1efc28:
    // 0x1efc28: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1efc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1efc2c:
    // 0x1efc2c: 0xa4a20008  sh          $v0, 0x8($a1)
    ctx->pc = 0x1efc2cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 2));
label_1efc30:
    // 0x1efc30: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1efc30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1efc34:
    // 0x1efc34: 0x2483000e  addiu       $v1, $a0, 0xE
    ctx->pc = 0x1efc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 14));
label_1efc38:
    // 0x1efc38: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1efc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1efc3c:
    // 0x1efc3c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1efc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1efc40:
    // 0x1efc40: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x1efc40u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1efc44:
    // 0x1efc44: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1efc44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1efc48:
    // 0x1efc48: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1efc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1efc4c:
    // 0x1efc4c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1efc4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1efc50:
    // 0x1efc50: 0x2c820009  sltiu       $v0, $a0, 0x9
    ctx->pc = 0x1efc50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1efc54:
    // 0x1efc54: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1efc58:
    if (ctx->pc == 0x1EFC58u) {
        ctx->pc = 0x1EFC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC54u;
        // 0x1efc58: 0xa4650000  sh          $a1, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFC5Cu;
        goto label_1efc5c;
    }
    ctx->pc = 0x1EFC54u;
    {
        const bool branch_taken_0x1efc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC54u;
        // 0x1efc58: 0xa4650000  sh          $a1, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efc54) {
            ctx->pc = 0x1EFC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1efc30;
        }
    }
    ctx->pc = 0x1EFC5Cu;
label_1efc5c:
    // 0x1efc5c: 0xc07f836  jal         func_1FE0D8
label_1efc60:
    if (ctx->pc == 0x1EFC60u) {
        ctx->pc = 0x1EFC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC5Cu;
        // 0x1efc60: 0x8ce40004  lw          $a0, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFC64u;
        goto label_1efc64;
    }
    ctx->pc = 0x1EFC5Cu;
    SET_GPR_U32(ctx, 31, 0x1EFC64u);
    ctx->pc = 0x1EFC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFC5Cu;
    // 0x1efc60: 0x8ce40004  lw          $a0, 0x4($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0D8u, 0x1EFC5Cu, 0x1EFC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFC64u;
label_1efc64:
    // 0x1efc64: 0x10000014  b           . + 4 + (0x14 << 2)
label_1efc68:
    if (ctx->pc == 0x1EFC68u) {
        ctx->pc = 0x1EFC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC64u;
        // 0x1efc68: 0x9642eec0  lhu         $v0, -0x1140($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294962880)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFC6Cu;
        goto label_1efc6c;
    }
    ctx->pc = 0x1EFC64u;
    {
        const bool branch_taken_0x1efc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC64u;
        // 0x1efc68: 0x9642eec0  lhu         $v0, -0x1140($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294962880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efc64) {
            ctx->pc = 0x1EFCB8u;
            goto label_1efcb8;
        }
    }
    ctx->pc = 0x1EFC6Cu;
label_1efc6c:
    // 0x1efc6c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1efc70:
    if (ctx->pc == 0x1EFC70u) {
        ctx->pc = 0x1EFC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC6Cu;
        // 0x1efc70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFC74u;
        goto label_1efc74;
    }
    ctx->pc = 0x1EFC6Cu;
    {
        const bool branch_taken_0x1efc6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC6Cu;
        // 0x1efc70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efc6c) {
            ctx->pc = 0x1EFC94u;
            goto label_1efc94;
        }
    }
    ctx->pc = 0x1EFC74u;
label_1efc74:
    // 0x1efc74: 0xae000154  sw          $zero, 0x154($s0)
    ctx->pc = 0x1efc74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
label_1efc78:
    // 0x1efc78: 0x8e040184  lw          $a0, 0x184($s0)
    ctx->pc = 0x1efc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_1efc7c:
    // 0x1efc7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1efc7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1efc80:
    // 0x1efc80: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1efc80u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1efc84:
    // 0x1efc84: 0xc0752e2  jal         func_1D4B88
label_1efc88:
    if (ctx->pc == 0x1EFC88u) {
        ctx->pc = 0x1EFC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC84u;
        // 0x1efc88: 0x26110160  addiu       $s1, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFC8Cu;
        goto label_1efc8c;
    }
    ctx->pc = 0x1EFC84u;
    SET_GPR_U32(ctx, 31, 0x1EFC8Cu);
    ctx->pc = 0x1EFC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFC84u;
    // 0x1efc88: 0x26110160  addiu       $s1, $s0, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4B88u, 0x1EFC84u, 0x1EFC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFC8Cu;
label_1efc8c:
    // 0x1efc8c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1efc90:
    if (ctx->pc == 0x1EFC90u) {
        ctx->pc = 0x1EFC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC8Cu;
        // 0x1efc90: 0x3c120064  lui         $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFC94u;
        goto label_1efc94;
    }
    ctx->pc = 0x1EFC8Cu;
    {
        const bool branch_taken_0x1efc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC8Cu;
        // 0x1efc90: 0x3c120064  lui         $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efc8c) {
            ctx->pc = 0x1EFCB4u;
            goto label_1efcb4;
        }
    }
    ctx->pc = 0x1EFC94u;
label_1efc94:
    // 0x1efc94: 0xae110154  sw          $s1, 0x154($s0)
    ctx->pc = 0x1efc94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 17));
label_1efc98:
    // 0x1efc98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1efc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1efc9c:
    // 0x1efc9c: 0x8e040184  lw          $a0, 0x184($s0)
    ctx->pc = 0x1efc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_1efca0:
    // 0x1efca0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1efca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1efca4:
    // 0x1efca4: 0xc0752e2  jal         func_1D4B88
label_1efca8:
    if (ctx->pc == 0x1EFCA8u) {
        ctx->pc = 0x1EFCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFCA4u;
        // 0x1efca8: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFCACu;
        goto label_1efcac;
    }
    ctx->pc = 0x1EFCA4u;
    SET_GPR_U32(ctx, 31, 0x1EFCACu);
    ctx->pc = 0x1EFCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFCA4u;
    // 0x1efca8: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4B88u, 0x1EFCA4u, 0x1EFCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFCACu;
label_1efcac:
    // 0x1efcac: 0x26110160  addiu       $s1, $s0, 0x160
    ctx->pc = 0x1efcacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
label_1efcb0:
    // 0x1efcb0: 0x3c120064  lui         $s2, 0x64
    ctx->pc = 0x1efcb0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)100 << 16));
label_1efcb4:
    // 0x1efcb4: 0x9642eec0  lhu         $v0, -0x1140($s2)
    ctx->pc = 0x1efcb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294962880)));
label_1efcb8:
    // 0x1efcb8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1efcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1efcbc:
    // 0x1efcbc: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_1efcc0:
    if (ctx->pc == 0x1EFCC0u) {
        ctx->pc = 0x1EFCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFCBCu;
        // 0x1efcc0: 0x8e020150  lw          $v0, 0x150($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFCC4u;
        goto label_1efcc4;
    }
    ctx->pc = 0x1EFCBCu;
    {
        const bool branch_taken_0x1efcbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1efcbc) {
            ctx->pc = 0x1EFCC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EFCBCu;
            // 0x1efcc0: 0x8e020150  lw          $v0, 0x150($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFCCCu;
            goto label_1efccc;
        }
    }
    ctx->pc = 0x1EFCC4u;
label_1efcc4:
    // 0x1efcc4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1efcc8:
    if (ctx->pc == 0x1EFCC8u) {
        ctx->pc = 0x1EFCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFCC4u;
        // 0x1efcc8: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFCCCu;
        goto label_1efccc;
    }
    ctx->pc = 0x1EFCC4u;
    {
        const bool branch_taken_0x1efcc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFCC4u;
        // 0x1efcc8: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efcc4) {
            ctx->pc = 0x1EFCE0u;
            goto label_1efce0;
        }
    }
    ctx->pc = 0x1EFCCCu;
label_1efccc:
    // 0x1efccc: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_1efcd0:
    if (ctx->pc == 0x1EFCD0u) {
        ctx->pc = 0x1EFCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFCCCu;
        // 0x1efcd0: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFCD4u;
        goto label_1efcd4;
    }
    ctx->pc = 0x1EFCCCu;
    {
        const bool branch_taken_0x1efccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EFCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFCCCu;
        // 0x1efcd0: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efccc) {
            ctx->pc = 0x1EFCE0u;
            goto label_1efce0;
        }
    }
    ctx->pc = 0x1EFCD4u;
label_1efcd4:
    // 0x1efcd4: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x1efcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_1efcd8:
    // 0x1efcd8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1efcdc:
    if (ctx->pc == 0x1EFCDCu) {
        ctx->pc = 0x1EFCE0u;
        goto label_1efce0;
    }
    ctx->pc = 0x1EFCD8u;
    {
        const bool branch_taken_0x1efcd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efcd8) {
            ctx->pc = 0x1EFCFCu;
            goto label_1efcfc;
        }
    }
    ctx->pc = 0x1EFCE0u;
label_1efce0:
    // 0x1efce0: 0xc067b9c  jal         func_19EE70
label_1efce4:
    if (ctx->pc == 0x1EFCE4u) {
        ctx->pc = 0x1EFCE8u;
        goto label_1efce8;
    }
    ctx->pc = 0x1EFCE0u;
    SET_GPR_U32(ctx, 31, 0x1EFCE8u);
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1EFCE0u, 0x1EFCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFCE8u;
label_1efce8:
    // 0x1efce8: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x1efce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_1efcec:
    // 0x1efcec: 0xc073b0a  jal         func_1CEC28
label_1efcf0:
    if (ctx->pc == 0x1EFCF0u) {
        ctx->pc = 0x1EFCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFCECu;
        // 0x1efcf0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFCF4u;
        goto label_1efcf4;
    }
    ctx->pc = 0x1EFCECu;
    SET_GPR_U32(ctx, 31, 0x1EFCF4u);
    ctx->pc = 0x1EFCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFCECu;
    // 0x1efcf0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1EFCECu, 0x1EFCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFCF4u;
label_1efcf4:
    // 0x1efcf4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1efcf8:
    if (ctx->pc == 0x1EFCF8u) {
        ctx->pc = 0x1EFCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFCF4u;
        // 0x1efcf8: 0x8e65b8b8  lw          $a1, -0x4748($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFCFCu;
        goto label_1efcfc;
    }
    ctx->pc = 0x1EFCF4u;
    {
        const bool branch_taken_0x1efcf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFCF4u;
        // 0x1efcf8: 0x8e65b8b8  lw          $a1, -0x4748($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efcf4) {
            ctx->pc = 0x1EFD14u;
            goto label_1efd14;
        }
    }
    ctx->pc = 0x1EFCFCu;
label_1efcfc:
    // 0x1efcfc: 0xc067b9c  jal         func_19EE70
label_1efd00:
    if (ctx->pc == 0x1EFD00u) {
        ctx->pc = 0x1EFD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFCFCu;
        // 0x1efd00: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFD04u;
        goto label_1efd04;
    }
    ctx->pc = 0x1EFCFCu;
    SET_GPR_U32(ctx, 31, 0x1EFD04u);
    ctx->pc = 0x1EFD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFCFCu;
    // 0x1efd00: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1EFCFCu, 0x1EFD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFD04u;
label_1efd04:
    // 0x1efd04: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x1efd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_1efd08:
    // 0x1efd08: 0xc073b0a  jal         func_1CEC28
label_1efd0c:
    if (ctx->pc == 0x1EFD0Cu) {
        ctx->pc = 0x1EFD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD08u;
        // 0x1efd0c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFD10u;
        goto label_1efd10;
    }
    ctx->pc = 0x1EFD08u;
    SET_GPR_U32(ctx, 31, 0x1EFD10u);
    ctx->pc = 0x1EFD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFD08u;
    // 0x1efd0c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1EFD08u, 0x1EFD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFD10u;
label_1efd10:
    // 0x1efd10: 0x8e65b8b8  lw          $a1, -0x4748($s3)
    ctx->pc = 0x1efd10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949048)));
label_1efd14:
    // 0x1efd14: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1efd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1efd18:
    // 0x1efd18: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1efd18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1efd1c:
    // 0x1efd1c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1efd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1efd20:
    // 0x1efd20: 0x40f809  jalr        $v0
label_1efd24:
    if (ctx->pc == 0x1EFD24u) {
        ctx->pc = 0x1EFD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD20u;
        // 0x1efd24: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFD28u;
        goto label_1efd28;
    }
    ctx->pc = 0x1EFD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EFD28u);
        ctx->pc = 0x1EFD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD20u;
        // 0x1efd24: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFD20u, 0x1EFD28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EFD28u;
label_1efd28:
    // 0x1efd28: 0x8e030154  lw          $v1, 0x154($s0)
    ctx->pc = 0x1efd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_1efd2c:
    // 0x1efd2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1efd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1efd30:
    // 0x1efd30: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1efd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1efd34:
    // 0x1efd34: 0x1000000b  b           . + 4 + (0xB << 2)
label_1efd38:
    if (ctx->pc == 0x1EFD38u) {
        ctx->pc = 0x1EFD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD34u;
        // 0x1efd38: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFD3Cu;
        goto label_1efd3c;
    }
    ctx->pc = 0x1EFD34u;
    {
        const bool branch_taken_0x1efd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD34u;
        // 0x1efd38: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efd34) {
            ctx->pc = 0x1EFD64u;
            goto label_1efd64;
        }
    }
    ctx->pc = 0x1EFD3Cu;
label_1efd3c:
    // 0x1efd3c: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1efd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1efd40:
    // 0x1efd40: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1efd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1efd44:
    // 0x1efd44: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1efd44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1efd48:
    // 0x1efd48: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1efd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1efd4c:
    // 0x1efd4c: 0x40f809  jalr        $v0
label_1efd50:
    if (ctx->pc == 0x1EFD50u) {
        ctx->pc = 0x1EFD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD4Cu;
        // 0x1efd50: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFD54u;
        goto label_1efd54;
    }
    ctx->pc = 0x1EFD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EFD54u);
        ctx->pc = 0x1EFD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD4Cu;
        // 0x1efd50: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFD4Cu, 0x1EFD54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EFD54u;
label_1efd54:
    // 0x1efd54: 0x8e030154  lw          $v1, 0x154($s0)
    ctx->pc = 0x1efd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_1efd58:
    // 0x1efd58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1efd58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1efd5c:
    // 0x1efd5c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1efd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1efd60:
    // 0x1efd60: 0xac620160  sw          $v0, 0x160($v1)
    ctx->pc = 0x1efd60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 352), GPR_U32(ctx, 2));
label_1efd64:
    // 0x1efd64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1efd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1efd68:
    // 0x1efd68: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1efd68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1efd6c:
    // 0x1efd6c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1efd6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1efd70:
    // 0x1efd70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1efd70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1efd74:
    // 0x1efd74: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1efd74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1efd78:
    // 0x1efd78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1efd78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1efd7c:
    // 0x1efd7c: 0x3e00008  jr          $ra
label_1efd80:
    if (ctx->pc == 0x1EFD80u) {
        ctx->pc = 0x1EFD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD7Cu;
        // 0x1efd80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFD84u;
        goto label_1efd84;
    }
    ctx->pc = 0x1EFD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD7Cu;
        // 0x1efd80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFD7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFD84u;
label_1efd84:
    // 0x1efd84: 0x0  nop
    ctx->pc = 0x1efd84u;
    // NOP
    ctx->pc = 0x1efd88u;
}
