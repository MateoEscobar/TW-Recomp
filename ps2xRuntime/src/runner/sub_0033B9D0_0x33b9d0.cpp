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

// Function: sub_0033B9D0
// Address: 0x33b9d0 - 0x33bf70
void sub_0033B9D0_0x33b9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B9D0_0x33b9d0");
#endif

    switch (ctx->pc) {
        case 0x33b9d0u: goto label_33b9d0;
        case 0x33b9d4u: goto label_33b9d4;
        case 0x33b9d8u: goto label_33b9d8;
        case 0x33b9dcu: goto label_33b9dc;
        case 0x33b9e0u: goto label_33b9e0;
        case 0x33b9e4u: goto label_33b9e4;
        case 0x33b9e8u: goto label_33b9e8;
        case 0x33b9ecu: goto label_33b9ec;
        case 0x33b9f0u: goto label_33b9f0;
        case 0x33b9f4u: goto label_33b9f4;
        case 0x33b9f8u: goto label_33b9f8;
        case 0x33b9fcu: goto label_33b9fc;
        case 0x33ba00u: goto label_33ba00;
        case 0x33ba04u: goto label_33ba04;
        case 0x33ba08u: goto label_33ba08;
        case 0x33ba0cu: goto label_33ba0c;
        case 0x33ba10u: goto label_33ba10;
        case 0x33ba14u: goto label_33ba14;
        case 0x33ba18u: goto label_33ba18;
        case 0x33ba1cu: goto label_33ba1c;
        case 0x33ba20u: goto label_33ba20;
        case 0x33ba24u: goto label_33ba24;
        case 0x33ba28u: goto label_33ba28;
        case 0x33ba2cu: goto label_33ba2c;
        case 0x33ba30u: goto label_33ba30;
        case 0x33ba34u: goto label_33ba34;
        case 0x33ba38u: goto label_33ba38;
        case 0x33ba3cu: goto label_33ba3c;
        case 0x33ba40u: goto label_33ba40;
        case 0x33ba44u: goto label_33ba44;
        case 0x33ba48u: goto label_33ba48;
        case 0x33ba4cu: goto label_33ba4c;
        case 0x33ba50u: goto label_33ba50;
        case 0x33ba54u: goto label_33ba54;
        case 0x33ba58u: goto label_33ba58;
        case 0x33ba5cu: goto label_33ba5c;
        case 0x33ba60u: goto label_33ba60;
        case 0x33ba64u: goto label_33ba64;
        case 0x33ba68u: goto label_33ba68;
        case 0x33ba6cu: goto label_33ba6c;
        case 0x33ba70u: goto label_33ba70;
        case 0x33ba74u: goto label_33ba74;
        case 0x33ba78u: goto label_33ba78;
        case 0x33ba7cu: goto label_33ba7c;
        case 0x33ba80u: goto label_33ba80;
        case 0x33ba84u: goto label_33ba84;
        case 0x33ba88u: goto label_33ba88;
        case 0x33ba8cu: goto label_33ba8c;
        case 0x33ba90u: goto label_33ba90;
        case 0x33ba94u: goto label_33ba94;
        case 0x33ba98u: goto label_33ba98;
        case 0x33ba9cu: goto label_33ba9c;
        case 0x33baa0u: goto label_33baa0;
        case 0x33baa4u: goto label_33baa4;
        case 0x33baa8u: goto label_33baa8;
        case 0x33baacu: goto label_33baac;
        case 0x33bab0u: goto label_33bab0;
        case 0x33bab4u: goto label_33bab4;
        case 0x33bab8u: goto label_33bab8;
        case 0x33babcu: goto label_33babc;
        case 0x33bac0u: goto label_33bac0;
        case 0x33bac4u: goto label_33bac4;
        case 0x33bac8u: goto label_33bac8;
        case 0x33baccu: goto label_33bacc;
        case 0x33bad0u: goto label_33bad0;
        case 0x33bad4u: goto label_33bad4;
        case 0x33bad8u: goto label_33bad8;
        case 0x33badcu: goto label_33badc;
        case 0x33bae0u: goto label_33bae0;
        case 0x33bae4u: goto label_33bae4;
        case 0x33bae8u: goto label_33bae8;
        case 0x33baecu: goto label_33baec;
        case 0x33baf0u: goto label_33baf0;
        case 0x33baf4u: goto label_33baf4;
        case 0x33baf8u: goto label_33baf8;
        case 0x33bafcu: goto label_33bafc;
        case 0x33bb00u: goto label_33bb00;
        case 0x33bb04u: goto label_33bb04;
        case 0x33bb08u: goto label_33bb08;
        case 0x33bb0cu: goto label_33bb0c;
        case 0x33bb10u: goto label_33bb10;
        case 0x33bb14u: goto label_33bb14;
        case 0x33bb18u: goto label_33bb18;
        case 0x33bb1cu: goto label_33bb1c;
        case 0x33bb20u: goto label_33bb20;
        case 0x33bb24u: goto label_33bb24;
        case 0x33bb28u: goto label_33bb28;
        case 0x33bb2cu: goto label_33bb2c;
        case 0x33bb30u: goto label_33bb30;
        case 0x33bb34u: goto label_33bb34;
        case 0x33bb38u: goto label_33bb38;
        case 0x33bb3cu: goto label_33bb3c;
        case 0x33bb40u: goto label_33bb40;
        case 0x33bb44u: goto label_33bb44;
        case 0x33bb48u: goto label_33bb48;
        case 0x33bb4cu: goto label_33bb4c;
        case 0x33bb50u: goto label_33bb50;
        case 0x33bb54u: goto label_33bb54;
        case 0x33bb58u: goto label_33bb58;
        case 0x33bb5cu: goto label_33bb5c;
        case 0x33bb60u: goto label_33bb60;
        case 0x33bb64u: goto label_33bb64;
        case 0x33bb68u: goto label_33bb68;
        case 0x33bb6cu: goto label_33bb6c;
        case 0x33bb70u: goto label_33bb70;
        case 0x33bb74u: goto label_33bb74;
        case 0x33bb78u: goto label_33bb78;
        case 0x33bb7cu: goto label_33bb7c;
        case 0x33bb80u: goto label_33bb80;
        case 0x33bb84u: goto label_33bb84;
        case 0x33bb88u: goto label_33bb88;
        case 0x33bb8cu: goto label_33bb8c;
        case 0x33bb90u: goto label_33bb90;
        case 0x33bb94u: goto label_33bb94;
        case 0x33bb98u: goto label_33bb98;
        case 0x33bb9cu: goto label_33bb9c;
        case 0x33bba0u: goto label_33bba0;
        case 0x33bba4u: goto label_33bba4;
        case 0x33bba8u: goto label_33bba8;
        case 0x33bbacu: goto label_33bbac;
        case 0x33bbb0u: goto label_33bbb0;
        case 0x33bbb4u: goto label_33bbb4;
        case 0x33bbb8u: goto label_33bbb8;
        case 0x33bbbcu: goto label_33bbbc;
        case 0x33bbc0u: goto label_33bbc0;
        case 0x33bbc4u: goto label_33bbc4;
        case 0x33bbc8u: goto label_33bbc8;
        case 0x33bbccu: goto label_33bbcc;
        case 0x33bbd0u: goto label_33bbd0;
        case 0x33bbd4u: goto label_33bbd4;
        case 0x33bbd8u: goto label_33bbd8;
        case 0x33bbdcu: goto label_33bbdc;
        case 0x33bbe0u: goto label_33bbe0;
        case 0x33bbe4u: goto label_33bbe4;
        case 0x33bbe8u: goto label_33bbe8;
        case 0x33bbecu: goto label_33bbec;
        case 0x33bbf0u: goto label_33bbf0;
        case 0x33bbf4u: goto label_33bbf4;
        case 0x33bbf8u: goto label_33bbf8;
        case 0x33bbfcu: goto label_33bbfc;
        case 0x33bc00u: goto label_33bc00;
        case 0x33bc04u: goto label_33bc04;
        case 0x33bc08u: goto label_33bc08;
        case 0x33bc0cu: goto label_33bc0c;
        case 0x33bc10u: goto label_33bc10;
        case 0x33bc14u: goto label_33bc14;
        case 0x33bc18u: goto label_33bc18;
        case 0x33bc1cu: goto label_33bc1c;
        case 0x33bc20u: goto label_33bc20;
        case 0x33bc24u: goto label_33bc24;
        case 0x33bc28u: goto label_33bc28;
        case 0x33bc2cu: goto label_33bc2c;
        case 0x33bc30u: goto label_33bc30;
        case 0x33bc34u: goto label_33bc34;
        case 0x33bc38u: goto label_33bc38;
        case 0x33bc3cu: goto label_33bc3c;
        case 0x33bc40u: goto label_33bc40;
        case 0x33bc44u: goto label_33bc44;
        case 0x33bc48u: goto label_33bc48;
        case 0x33bc4cu: goto label_33bc4c;
        case 0x33bc50u: goto label_33bc50;
        case 0x33bc54u: goto label_33bc54;
        case 0x33bc58u: goto label_33bc58;
        case 0x33bc5cu: goto label_33bc5c;
        case 0x33bc60u: goto label_33bc60;
        case 0x33bc64u: goto label_33bc64;
        case 0x33bc68u: goto label_33bc68;
        case 0x33bc6cu: goto label_33bc6c;
        case 0x33bc70u: goto label_33bc70;
        case 0x33bc74u: goto label_33bc74;
        case 0x33bc78u: goto label_33bc78;
        case 0x33bc7cu: goto label_33bc7c;
        case 0x33bc80u: goto label_33bc80;
        case 0x33bc84u: goto label_33bc84;
        case 0x33bc88u: goto label_33bc88;
        case 0x33bc8cu: goto label_33bc8c;
        case 0x33bc90u: goto label_33bc90;
        case 0x33bc94u: goto label_33bc94;
        case 0x33bc98u: goto label_33bc98;
        case 0x33bc9cu: goto label_33bc9c;
        case 0x33bca0u: goto label_33bca0;
        case 0x33bca4u: goto label_33bca4;
        case 0x33bca8u: goto label_33bca8;
        case 0x33bcacu: goto label_33bcac;
        case 0x33bcb0u: goto label_33bcb0;
        case 0x33bcb4u: goto label_33bcb4;
        case 0x33bcb8u: goto label_33bcb8;
        case 0x33bcbcu: goto label_33bcbc;
        case 0x33bcc0u: goto label_33bcc0;
        case 0x33bcc4u: goto label_33bcc4;
        case 0x33bcc8u: goto label_33bcc8;
        case 0x33bcccu: goto label_33bccc;
        case 0x33bcd0u: goto label_33bcd0;
        case 0x33bcd4u: goto label_33bcd4;
        case 0x33bcd8u: goto label_33bcd8;
        case 0x33bcdcu: goto label_33bcdc;
        case 0x33bce0u: goto label_33bce0;
        case 0x33bce4u: goto label_33bce4;
        case 0x33bce8u: goto label_33bce8;
        case 0x33bcecu: goto label_33bcec;
        case 0x33bcf0u: goto label_33bcf0;
        case 0x33bcf4u: goto label_33bcf4;
        case 0x33bcf8u: goto label_33bcf8;
        case 0x33bcfcu: goto label_33bcfc;
        case 0x33bd00u: goto label_33bd00;
        case 0x33bd04u: goto label_33bd04;
        case 0x33bd08u: goto label_33bd08;
        case 0x33bd0cu: goto label_33bd0c;
        case 0x33bd10u: goto label_33bd10;
        case 0x33bd14u: goto label_33bd14;
        case 0x33bd18u: goto label_33bd18;
        case 0x33bd1cu: goto label_33bd1c;
        case 0x33bd20u: goto label_33bd20;
        case 0x33bd24u: goto label_33bd24;
        case 0x33bd28u: goto label_33bd28;
        case 0x33bd2cu: goto label_33bd2c;
        case 0x33bd30u: goto label_33bd30;
        case 0x33bd34u: goto label_33bd34;
        case 0x33bd38u: goto label_33bd38;
        case 0x33bd3cu: goto label_33bd3c;
        case 0x33bd40u: goto label_33bd40;
        case 0x33bd44u: goto label_33bd44;
        case 0x33bd48u: goto label_33bd48;
        case 0x33bd4cu: goto label_33bd4c;
        case 0x33bd50u: goto label_33bd50;
        case 0x33bd54u: goto label_33bd54;
        case 0x33bd58u: goto label_33bd58;
        case 0x33bd5cu: goto label_33bd5c;
        case 0x33bd60u: goto label_33bd60;
        case 0x33bd64u: goto label_33bd64;
        case 0x33bd68u: goto label_33bd68;
        case 0x33bd6cu: goto label_33bd6c;
        case 0x33bd70u: goto label_33bd70;
        case 0x33bd74u: goto label_33bd74;
        case 0x33bd78u: goto label_33bd78;
        case 0x33bd7cu: goto label_33bd7c;
        case 0x33bd80u: goto label_33bd80;
        case 0x33bd84u: goto label_33bd84;
        case 0x33bd88u: goto label_33bd88;
        case 0x33bd8cu: goto label_33bd8c;
        case 0x33bd90u: goto label_33bd90;
        case 0x33bd94u: goto label_33bd94;
        case 0x33bd98u: goto label_33bd98;
        case 0x33bd9cu: goto label_33bd9c;
        case 0x33bda0u: goto label_33bda0;
        case 0x33bda4u: goto label_33bda4;
        case 0x33bda8u: goto label_33bda8;
        case 0x33bdacu: goto label_33bdac;
        case 0x33bdb0u: goto label_33bdb0;
        case 0x33bdb4u: goto label_33bdb4;
        case 0x33bdb8u: goto label_33bdb8;
        case 0x33bdbcu: goto label_33bdbc;
        case 0x33bdc0u: goto label_33bdc0;
        case 0x33bdc4u: goto label_33bdc4;
        case 0x33bdc8u: goto label_33bdc8;
        case 0x33bdccu: goto label_33bdcc;
        case 0x33bdd0u: goto label_33bdd0;
        case 0x33bdd4u: goto label_33bdd4;
        case 0x33bdd8u: goto label_33bdd8;
        case 0x33bddcu: goto label_33bddc;
        case 0x33bde0u: goto label_33bde0;
        case 0x33bde4u: goto label_33bde4;
        case 0x33bde8u: goto label_33bde8;
        case 0x33bdecu: goto label_33bdec;
        case 0x33bdf0u: goto label_33bdf0;
        case 0x33bdf4u: goto label_33bdf4;
        case 0x33bdf8u: goto label_33bdf8;
        case 0x33bdfcu: goto label_33bdfc;
        case 0x33be00u: goto label_33be00;
        case 0x33be04u: goto label_33be04;
        case 0x33be08u: goto label_33be08;
        case 0x33be0cu: goto label_33be0c;
        case 0x33be10u: goto label_33be10;
        case 0x33be14u: goto label_33be14;
        case 0x33be18u: goto label_33be18;
        case 0x33be1cu: goto label_33be1c;
        case 0x33be20u: goto label_33be20;
        case 0x33be24u: goto label_33be24;
        case 0x33be28u: goto label_33be28;
        case 0x33be2cu: goto label_33be2c;
        case 0x33be30u: goto label_33be30;
        case 0x33be34u: goto label_33be34;
        case 0x33be38u: goto label_33be38;
        case 0x33be3cu: goto label_33be3c;
        case 0x33be40u: goto label_33be40;
        case 0x33be44u: goto label_33be44;
        case 0x33be48u: goto label_33be48;
        case 0x33be4cu: goto label_33be4c;
        case 0x33be50u: goto label_33be50;
        case 0x33be54u: goto label_33be54;
        case 0x33be58u: goto label_33be58;
        case 0x33be5cu: goto label_33be5c;
        case 0x33be60u: goto label_33be60;
        case 0x33be64u: goto label_33be64;
        case 0x33be68u: goto label_33be68;
        case 0x33be6cu: goto label_33be6c;
        case 0x33be70u: goto label_33be70;
        case 0x33be74u: goto label_33be74;
        case 0x33be78u: goto label_33be78;
        case 0x33be7cu: goto label_33be7c;
        case 0x33be80u: goto label_33be80;
        case 0x33be84u: goto label_33be84;
        case 0x33be88u: goto label_33be88;
        case 0x33be8cu: goto label_33be8c;
        case 0x33be90u: goto label_33be90;
        case 0x33be94u: goto label_33be94;
        case 0x33be98u: goto label_33be98;
        case 0x33be9cu: goto label_33be9c;
        case 0x33bea0u: goto label_33bea0;
        case 0x33bea4u: goto label_33bea4;
        case 0x33bea8u: goto label_33bea8;
        case 0x33beacu: goto label_33beac;
        case 0x33beb0u: goto label_33beb0;
        case 0x33beb4u: goto label_33beb4;
        case 0x33beb8u: goto label_33beb8;
        case 0x33bebcu: goto label_33bebc;
        case 0x33bec0u: goto label_33bec0;
        case 0x33bec4u: goto label_33bec4;
        case 0x33bec8u: goto label_33bec8;
        case 0x33beccu: goto label_33becc;
        case 0x33bed0u: goto label_33bed0;
        case 0x33bed4u: goto label_33bed4;
        case 0x33bed8u: goto label_33bed8;
        case 0x33bedcu: goto label_33bedc;
        case 0x33bee0u: goto label_33bee0;
        case 0x33bee4u: goto label_33bee4;
        case 0x33bee8u: goto label_33bee8;
        case 0x33beecu: goto label_33beec;
        case 0x33bef0u: goto label_33bef0;
        case 0x33bef4u: goto label_33bef4;
        case 0x33bef8u: goto label_33bef8;
        case 0x33befcu: goto label_33befc;
        case 0x33bf00u: goto label_33bf00;
        case 0x33bf04u: goto label_33bf04;
        case 0x33bf08u: goto label_33bf08;
        case 0x33bf0cu: goto label_33bf0c;
        case 0x33bf10u: goto label_33bf10;
        case 0x33bf14u: goto label_33bf14;
        case 0x33bf18u: goto label_33bf18;
        case 0x33bf1cu: goto label_33bf1c;
        case 0x33bf20u: goto label_33bf20;
        case 0x33bf24u: goto label_33bf24;
        case 0x33bf28u: goto label_33bf28;
        case 0x33bf2cu: goto label_33bf2c;
        case 0x33bf30u: goto label_33bf30;
        case 0x33bf34u: goto label_33bf34;
        case 0x33bf38u: goto label_33bf38;
        case 0x33bf3cu: goto label_33bf3c;
        case 0x33bf40u: goto label_33bf40;
        case 0x33bf44u: goto label_33bf44;
        case 0x33bf48u: goto label_33bf48;
        case 0x33bf4cu: goto label_33bf4c;
        case 0x33bf50u: goto label_33bf50;
        case 0x33bf54u: goto label_33bf54;
        case 0x33bf58u: goto label_33bf58;
        case 0x33bf5cu: goto label_33bf5c;
        case 0x33bf60u: goto label_33bf60;
        case 0x33bf64u: goto label_33bf64;
        case 0x33bf68u: goto label_33bf68;
        case 0x33bf6cu: goto label_33bf6c;
        default: break;
    }

    ctx->pc = 0x33b9d0u;

label_33b9d0:
    // 0x33b9d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x33b9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_33b9d4:
    // 0x33b9d4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x33b9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_33b9d8:
    // 0x33b9d8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x33b9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_33b9dc:
    // 0x33b9dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33b9dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33b9e0:
    // 0x33b9e0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x33b9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_33b9e4:
    // 0x33b9e4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x33b9e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33b9e8:
    // 0x33b9e8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x33b9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_33b9ec:
    // 0x33b9ec: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x33b9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_33b9f0:
    // 0x33b9f0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x33b9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_33b9f4:
    // 0x33b9f4: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x33b9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_33b9f8:
    // 0x33b9f8: 0x12000127  beqz        $s0, . + 4 + (0x127 << 2)
label_33b9fc:
    if (ctx->pc == 0x33B9FCu) {
        ctx->pc = 0x33B9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B9F8u;
        // 0x33b9fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BA00u;
        goto label_33ba00;
    }
    ctx->pc = 0x33B9F8u;
    {
        const bool branch_taken_0x33b9f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B9F8u;
        // 0x33b9fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b9f8) {
            ctx->pc = 0x33BE98u;
            goto label_33be98;
        }
    }
    ctx->pc = 0x33BA00u;
label_33ba00:
    // 0x33ba00: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x33ba00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33ba04:
    // 0x33ba04: 0x56200009  bnel        $s1, $zero, . + 4 + (0x9 << 2)
label_33ba08:
    if (ctx->pc == 0x33BA08u) {
        ctx->pc = 0x33BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BA04u;
        // 0x33ba08: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BA0Cu;
        goto label_33ba0c;
    }
    ctx->pc = 0x33BA04u;
    {
        const bool branch_taken_0x33ba04 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ba04) {
            ctx->pc = 0x33BA08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BA04u;
            // 0x33ba08: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BA2Cu;
            goto label_33ba2c;
        }
    }
    ctx->pc = 0x33BA0Cu;
label_33ba0c:
    // 0x33ba0c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x33ba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_33ba10:
    // 0x33ba10: 0x8c5127f4  lw          $s1, 0x27F4($v0)
    ctx->pc = 0x33ba10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10228)));
label_33ba14:
    // 0x33ba14: 0x56200005  bnel        $s1, $zero, . + 4 + (0x5 << 2)
label_33ba18:
    if (ctx->pc == 0x33BA18u) {
        ctx->pc = 0x33BA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BA14u;
        // 0x33ba18: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BA1Cu;
        goto label_33ba1c;
    }
    ctx->pc = 0x33BA14u;
    {
        const bool branch_taken_0x33ba14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ba14) {
            ctx->pc = 0x33BA18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BA14u;
            // 0x33ba18: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BA2Cu;
            goto label_33ba2c;
        }
    }
    ctx->pc = 0x33BA1Cu;
label_33ba1c:
    // 0x33ba1c: 0xc0cf09a  jal         func_33C268
label_33ba20:
    if (ctx->pc == 0x33BA20u) {
        ctx->pc = 0x33BA24u;
        goto label_33ba24;
    }
    ctx->pc = 0x33BA1Cu;
    SET_GPR_U32(ctx, 31, 0x33BA24u);
    ctx->pc = 0x33C268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C268u, 0x33BA1Cu, 0x33BA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BA24u;
label_33ba24:
    // 0x33ba24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x33ba24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33ba28:
    // 0x33ba28: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x33ba28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_33ba2c:
    // 0x33ba2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_33ba30:
    if (ctx->pc == 0x33BA30u) {
        ctx->pc = 0x33BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BA2Cu;
        // 0x33ba30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BA34u;
        goto label_33ba34;
    }
    ctx->pc = 0x33BA2Cu;
    {
        const bool branch_taken_0x33ba2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BA2Cu;
        // 0x33ba30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ba2c) {
            ctx->pc = 0x33BA44u;
            goto label_33ba44;
        }
    }
    ctx->pc = 0x33BA34u;
label_33ba34:
    // 0x33ba34: 0x40f809  jalr        $v0
label_33ba38:
    if (ctx->pc == 0x33BA38u) {
        ctx->pc = 0x33BA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BA34u;
        // 0x33ba38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BA3Cu;
        goto label_33ba3c;
    }
    ctx->pc = 0x33BA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33BA3Cu);
        ctx->pc = 0x33BA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BA34u;
        // 0x33ba38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BA34u, 0x33BA3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33BA3Cu;
label_33ba3c:
    // 0x33ba3c: 0x1000013c  b           . + 4 + (0x13C << 2)
label_33ba40:
    if (ctx->pc == 0x33BA40u) {
        ctx->pc = 0x33BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BA3Cu;
        // 0x33ba40: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BA44u;
        goto label_33ba44;
    }
    ctx->pc = 0x33BA3Cu;
    {
        const bool branch_taken_0x33ba3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BA3Cu;
        // 0x33ba40: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ba3c) {
            ctx->pc = 0x33BF30u;
            goto label_33bf30;
        }
    }
    ctx->pc = 0x33BA44u;
label_33ba44:
    // 0x33ba44: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x33ba44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_33ba48:
    // 0x33ba48: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x33ba48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_33ba4c:
    // 0x33ba4c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_33ba50:
    if (ctx->pc == 0x33BA50u) {
        ctx->pc = 0x33BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BA4Cu;
        // 0x33ba50: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BA54u;
        goto label_33ba54;
    }
    ctx->pc = 0x33BA4Cu;
    {
        const bool branch_taken_0x33ba4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BA4Cu;
        // 0x33ba50: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ba4c) {
            ctx->pc = 0x33BA64u;
            goto label_33ba64;
        }
    }
    ctx->pc = 0x33BA54u;
label_33ba54:
    // 0x33ba54: 0xc0cedde  jal         func_33B778
label_33ba58:
    if (ctx->pc == 0x33BA58u) {
        ctx->pc = 0x33BA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BA54u;
        // 0x33ba58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BA5Cu;
        goto label_33ba5c;
    }
    ctx->pc = 0x33BA54u;
    SET_GPR_U32(ctx, 31, 0x33BA5Cu);
    ctx->pc = 0x33BA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BA54u;
    // 0x33ba58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B778u, 0x33BA54u, 0x33BA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BA5Cu;
label_33ba5c:
    // 0x33ba5c: 0x1040010e  beqz        $v0, . + 4 + (0x10E << 2)
label_33ba60:
    if (ctx->pc == 0x33BA60u) {
        ctx->pc = 0x33BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BA5Cu;
        // 0x33ba60: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BA64u;
        goto label_33ba64;
    }
    ctx->pc = 0x33BA5Cu;
    {
        const bool branch_taken_0x33ba5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BA5Cu;
        // 0x33ba60: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ba5c) {
            ctx->pc = 0x33BE98u;
            goto label_33be98;
        }
    }
    ctx->pc = 0x33BA64u;
label_33ba64:
    // 0x33ba64: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x33ba64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_33ba68:
    // 0x33ba68: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x33ba68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_33ba6c:
    // 0x33ba6c: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x33ba6cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_33ba70:
    // 0x33ba70: 0x2a020201  slti        $v0, $s0, 0x201
    ctx->pc = 0x33ba70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)513) ? 1 : 0);
label_33ba74:
    // 0x33ba74: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
label_33ba78:
    if (ctx->pc == 0x33BA78u) {
        ctx->pc = 0x33BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BA74u;
        // 0x33ba78: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BA7Cu;
        goto label_33ba7c;
    }
    ctx->pc = 0x33BA74u;
    {
        const bool branch_taken_0x33ba74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BA74u;
        // 0x33ba78: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ba74) {
            ctx->pc = 0x33BC90u;
            goto label_33bc90;
        }
    }
    ctx->pc = 0x33BA7Cu;
label_33ba7c:
    // 0x33ba7c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x33ba7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_33ba80:
    // 0x33ba80: 0x1017c2  srl         $v0, $s0, 31
    ctx->pc = 0x33ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
label_33ba84:
    // 0x33ba84: 0x10000003  b           . + 4 + (0x3 << 2)
label_33ba88:
    if (ctx->pc == 0x33BA88u) {
        ctx->pc = 0x33BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BA84u;
        // 0x33ba88: 0x26230054  addiu       $v1, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BA8Cu;
        goto label_33ba8c;
    }
    ctx->pc = 0x33BA84u;
    {
        const bool branch_taken_0x33ba84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BA84u;
        // 0x33ba88: 0x26230054  addiu       $v1, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ba84) {
            ctx->pc = 0x33BA94u;
            goto label_33ba94;
        }
    }
    ctx->pc = 0x33BA8Cu;
label_33ba8c:
    // 0x33ba8c: 0x0  nop
    ctx->pc = 0x33ba8cu;
    // NOP
label_33ba90:
    // 0x33ba90: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x33ba90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_33ba94:
    // 0x33ba94: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x33ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_33ba98:
    // 0x33ba98: 0x28043  sra         $s0, $v0, 1
    ctx->pc = 0x33ba98u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
label_33ba9c:
    // 0x33ba9c: 0x0  nop
    ctx->pc = 0x33ba9cu;
    // NOP
label_33baa0:
    // 0x33baa0: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
label_33baa4:
    if (ctx->pc == 0x33BAA4u) {
        ctx->pc = 0x33BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BAA0u;
        // 0x33baa4: 0x1017c2  srl         $v0, $s0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BAA8u;
        goto label_33baa8;
    }
    ctx->pc = 0x33BAA0u;
    {
        const bool branch_taken_0x33baa0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x33BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BAA0u;
        // 0x33baa4: 0x1017c2  srl         $v0, $s0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33baa0) {
            ctx->pc = 0x33BA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ba90;
        }
    }
    ctx->pc = 0x33BAA8u;
label_33baa8:
    // 0x33baa8: 0x1280c0  sll         $s0, $s2, 3
    ctx->pc = 0x33baa8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_33baac:
    // 0x33baac: 0x709821  addu        $s3, $v1, $s0
    ctx->pc = 0x33baacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_33bab0:
    // 0x33bab0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x33bab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_33bab4:
    // 0x33bab4: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_33bab8:
    if (ctx->pc == 0x33BAB8u) {
        ctx->pc = 0x33BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BAB4u;
        // 0x33bab8: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BABCu;
        goto label_33babc;
    }
    ctx->pc = 0x33BAB4u;
    {
        const bool branch_taken_0x33bab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BAB4u;
        // 0x33bab8: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bab4) {
            ctx->pc = 0x33BB84u;
            goto label_33bb84;
        }
    }
    ctx->pc = 0x33BABCu;
label_33babc:
    // 0x33babc: 0x8d630004  lw          $v1, 0x4($t3)
    ctx->pc = 0x33babcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_33bac0:
    // 0x33bac0: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x33bac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_33bac4:
    // 0x33bac4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33bac4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_33bac8:
    // 0x33bac8: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x33bac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_33bacc:
    // 0x33bacc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_33bad0:
    if (ctx->pc == 0x33BAD0u) {
        ctx->pc = 0x33BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BACCu;
        // 0x33bad0: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BAD4u;
        goto label_33bad4;
    }
    ctx->pc = 0x33BACCu;
    {
        const bool branch_taken_0x33bacc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bacc) {
            ctx->pc = 0x33BAD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BACCu;
            // 0x33bad0: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BAE0u;
            goto label_33bae0;
        }
    }
    ctx->pc = 0x33BAD4u;
label_33bad4:
    // 0x33bad4: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x33bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_33bad8:
    // 0x33bad8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x33bad8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_33badc:
    // 0x33badc: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x33badcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_33bae0:
    // 0x33bae0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x33bae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33bae4:
    // 0x33bae4: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x33bae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_33bae8:
    // 0x33bae8: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x33bae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33baec:
    // 0x33baec: 0x1642023  subu        $a0, $t3, $a0
    ctx->pc = 0x33baecu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_33baf0:
    // 0x33baf0: 0x248203ff  addiu       $v0, $a0, 0x3FF
    ctx->pc = 0x33baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1023));
label_33baf4:
    // 0x33baf4: 0x104182a  slt         $v1, $t0, $a0
    ctx->pc = 0x33baf4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_33baf8:
    // 0x33baf8: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x33baf8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_33bafc:
    // 0x33bafc: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x33bafcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
label_33bb00:
    // 0x33bb00: 0x244a0001  addiu       $t2, $v0, 0x1
    ctx->pc = 0x33bb00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_33bb04:
    // 0x33bb04: 0x1463818  mult        $a3, $t2, $a2
    ctx->pc = 0x33bb04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_33bb08:
    // 0x33bb08: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x33bb08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_33bb0c:
    // 0x33bb0c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x33bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_33bb10:
    // 0x33bb10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33bb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_33bb14:
    // 0x33bb14: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_33bb18:
    if (ctx->pc == 0x33BB18u) {
        ctx->pc = 0x33BB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BB14u;
        // 0x33bb18: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BB1Cu;
        goto label_33bb1c;
    }
    ctx->pc = 0x33BB14u;
    {
        const bool branch_taken_0x33bb14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BB14u;
        // 0x33bb18: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bb14) {
            ctx->pc = 0x33BB48u;
            goto label_33bb48;
        }
    }
    ctx->pc = 0x33BB1Cu;
label_33bb1c:
    // 0x33bb1c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x33bb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_33bb20:
    // 0x33bb20: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x33bb20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33bb24:
    // 0x33bb24: 0x103202a  slt         $a0, $t0, $v1
    ctx->pc = 0x33bb24u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_33bb28:
    // 0x33bb28: 0x246203ff  addiu       $v0, $v1, 0x3FF
    ctx->pc = 0x33bb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
label_33bb2c:
    // 0x33bb2c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x33bb2cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_33bb30:
    // 0x33bb30: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x33bb30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_33bb34:
    // 0x33bb34: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x33bb34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
label_33bb38:
    // 0x33bb38: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x33bb38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
label_33bb3c:
    // 0x33bb3c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x33bb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_33bb40:
    // 0x33bb40: 0x2431807  srav        $v1, $v1, $s2
    ctx->pc = 0x33bb40u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
label_33bb44:
    // 0x33bb44: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x33bb44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_33bb48:
    // 0x33bb48: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x33bb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_33bb4c:
    // 0x33bb4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33bb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33bb50:
    // 0x33bb50: 0x8e250048  lw          $a1, 0x48($s1)
    ctx->pc = 0x33bb50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_33bb54:
    // 0x33bb54: 0x2431804  sllv        $v1, $v1, $s2
    ctx->pc = 0x33bb54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
label_33bb58:
    // 0x33bb58: 0x8e26004c  lw          $a2, 0x4C($s1)
    ctx->pc = 0x33bb58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_33bb5c:
    // 0x33bb5c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33bb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_33bb60:
    // 0x33bb60: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x33bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_33bb64:
    // 0x33bb64: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x33bb64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_33bb68:
    // 0x33bb68: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x33bb68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_33bb6c:
    // 0x33bb6c: 0xae240044  sw          $a0, 0x44($s1)
    ctx->pc = 0x33bb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 4));
label_33bb70:
    // 0x33bb70: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x33bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33bb74:
    // 0x33bb74: 0xae250048  sw          $a1, 0x48($s1)
    ctx->pc = 0x33bb74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 5));
label_33bb78:
    // 0x33bb78: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x33bb78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_33bb7c:
    // 0x33bb7c: 0x100000ea  b           . + 4 + (0xEA << 2)
label_33bb80:
    if (ctx->pc == 0x33BB80u) {
        ctx->pc = 0x33BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BB7Cu;
        // 0x33bb80: 0xae26004c  sw          $a2, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BB84u;
        goto label_33bb84;
    }
    ctx->pc = 0x33BB7Cu;
    {
        const bool branch_taken_0x33bb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BB7Cu;
        // 0x33bb80: 0xae26004c  sw          $a2, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bb7c) {
            ctx->pc = 0x33BF28u;
            goto label_33bf28;
        }
    }
    ctx->pc = 0x33BB84u;
label_33bb84:
    // 0x33bb84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x33bb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33bb88:
    // 0x33bb88: 0xc0cee74  jal         func_33B9D0
label_33bb8c:
    if (ctx->pc == 0x33BB8Cu) {
        ctx->pc = 0x33BB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BB88u;
        // 0x33bb8c: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BB90u;
        goto label_33bb90;
    }
    ctx->pc = 0x33BB88u;
    SET_GPR_U32(ctx, 31, 0x33BB90u);
    ctx->pc = 0x33BB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BB88u;
    // 0x33bb8c: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B9D0u;
    goto label_33b9d0;
    ctx->pc = 0x33BB90u;
label_33bb90:
    // 0x33bb90: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x33bb90u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33bb94:
    // 0x33bb94: 0x15600005  bnez        $t3, . + 4 + (0x5 << 2)
label_33bb98:
    if (ctx->pc == 0x33BB98u) {
        ctx->pc = 0x33BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BB94u;
        // 0x33bb98: 0x24030400  addiu       $v1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BB9Cu;
        goto label_33bb9c;
    }
    ctx->pc = 0x33BB94u;
    {
        const bool branch_taken_0x33bb94 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x33BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BB94u;
        // 0x33bb98: 0x24030400  addiu       $v1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bb94) {
            ctx->pc = 0x33BBACu;
            goto label_33bbac;
        }
    }
    ctx->pc = 0x33BB9Cu;
label_33bb9c:
    // 0x33bb9c: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x33bb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_33bba0:
    // 0x33bba0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33bba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33bba4:
    // 0x33bba4: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
label_33bba8:
    if (ctx->pc == 0x33BBA8u) {
        ctx->pc = 0x33BBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BBA4u;
        // 0x33bba8: 0x628004  sllv        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BBACu;
        goto label_33bbac;
    }
    ctx->pc = 0x33BBA4u;
    {
        const bool branch_taken_0x33bba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BBA4u;
        // 0x33bba8: 0x628004  sllv        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bba4) {
            ctx->pc = 0x33BA70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ba70;
        }
    }
    ctx->pc = 0x33BBACu;
label_33bbac:
    // 0x33bbac: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x33bbacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33bbb0:
    // 0x33bbb0: 0x2431807  srav        $v1, $v1, $s2
    ctx->pc = 0x33bbb0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
label_33bbb4:
    // 0x33bbb4: 0x123102a  slt         $v0, $t1, $v1
    ctx->pc = 0x33bbb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_33bbb8:
    // 0x33bbb8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_33bbbc:
    if (ctx->pc == 0x33BBBCu) {
        ctx->pc = 0x33BBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BBB8u;
        // 0x33bbbc: 0x26020054  addiu       $v0, $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BBC0u;
        goto label_33bbc0;
    }
    ctx->pc = 0x33BBB8u;
    {
        const bool branch_taken_0x33bbb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BBB8u;
        // 0x33bbbc: 0x26020054  addiu       $v0, $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bbb8) {
            ctx->pc = 0x33BC00u;
            goto label_33bc00;
        }
    }
    ctx->pc = 0x33BBC0u;
label_33bbc0:
    // 0x33bbc0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x33bbc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33bbc4:
    // 0x33bbc4: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x33bbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_33bbc8:
    // 0x33bbc8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x33bbc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_33bbcc:
    // 0x33bbcc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x33bbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_33bbd0:
    // 0x33bbd0: 0x2491004  sllv        $v0, $t1, $s2
    ctx->pc = 0x33bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 18) & 0x1F));
label_33bbd4:
    // 0x33bbd4: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x33bbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_33bbd8:
    // 0x33bbd8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x33bbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_33bbdc:
    // 0x33bbdc: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x33bbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_33bbe0:
    // 0x33bbe0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x33bbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_33bbe4:
    // 0x33bbe4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x33bbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33bbe8:
    // 0x33bbe8: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
label_33bbec:
    if (ctx->pc == 0x33BBECu) {
        ctx->pc = 0x33BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BBE8u;
        // 0x33bbec: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BBF0u;
        goto label_33bbf0;
    }
    ctx->pc = 0x33BBE8u;
    {
        const bool branch_taken_0x33bbe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33bbe8) {
            ctx->pc = 0x33BBECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BBE8u;
            // 0x33bbec: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BBF0u;
            goto label_33bbf0;
        }
    }
    ctx->pc = 0x33BBF0u;
label_33bbf0:
    // 0x33bbf0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x33bbf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_33bbf4:
    // 0x33bbf4: 0x125102a  slt         $v0, $t1, $a1
    ctx->pc = 0x33bbf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_33bbf8:
    // 0x33bbf8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
label_33bbfc:
    if (ctx->pc == 0x33BBFCu) {
        ctx->pc = 0x33BBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BBF8u;
        // 0x33bbfc: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BC00u;
        goto label_33bc00;
    }
    ctx->pc = 0x33BBF8u;
    {
        const bool branch_taken_0x33bbf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33bbf8) {
            ctx->pc = 0x33BBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BBF8u;
            // 0x33bbfc: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BBD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33bbd0;
        }
    }
    ctx->pc = 0x33BC00u;
label_33bc00:
    // 0x33bc00: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x33bc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_33bc04:
    // 0x33bc04: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x33bc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33bc08:
    // 0x33bc08: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x33bc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_33bc0c:
    // 0x33bc0c: 0x8e26003c  lw          $a2, 0x3C($s1)
    ctx->pc = 0x33bc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33bc10:
    // 0x33bc10: 0x1631823  subu        $v1, $t3, $v1
    ctx->pc = 0x33bc10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_33bc14:
    // 0x33bc14: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x33bc14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_33bc18:
    // 0x33bc18: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x33bc18u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_33bc1c:
    // 0x33bc1c: 0x246203ff  addiu       $v0, $v1, 0x3FF
    ctx->pc = 0x33bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
label_33bc20:
    // 0x33bc20: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x33bc20u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_33bc24:
    // 0x33bc24: 0x24080400  addiu       $t0, $zero, 0x400
    ctx->pc = 0x33bc24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_33bc28:
    // 0x33bc28: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x33bc28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
label_33bc2c:
    // 0x33bc2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x33bc2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33bc30:
    // 0x33bc30: 0x244a0001  addiu       $t2, $v0, 0x1
    ctx->pc = 0x33bc30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_33bc34:
    // 0x33bc34: 0x2473804  sllv        $a3, $a3, $s2
    ctx->pc = 0x33bc34u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 18) & 0x1F));
label_33bc38:
    // 0x33bc38: 0x1452818  mult        $a1, $t2, $a1
    ctx->pc = 0x33bc38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_33bc3c:
    // 0x33bc3c: 0x2484007  srav        $t0, $t0, $s2
    ctx->pc = 0x33bc3cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 18) & 0x1F));
label_33bc40:
    // 0x33bc40: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x33bc40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_33bc44:
    // 0x33bc44: 0xacd20000  sw          $s2, 0x0($a2)
    ctx->pc = 0x33bc44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 18));
label_33bc48:
    // 0x33bc48: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x33bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33bc4c:
    // 0x33bc4c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x33bc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_33bc50:
    // 0x33bc50: 0xac490004  sw          $t1, 0x4($v0)
    ctx->pc = 0x33bc50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 9));
label_33bc54:
    // 0x33bc54: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x33bc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33bc58:
    // 0x33bc58: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x33bc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_33bc5c:
    // 0x33bc5c: 0xaca90008  sw          $t1, 0x8($a1)
    ctx->pc = 0x33bc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 9));
label_33bc60:
    // 0x33bc60: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x33bc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_33bc64:
    // 0x33bc64: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x33bc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_33bc68:
    // 0x33bc68: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x33bc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_33bc6c:
    // 0x33bc6c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33bc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_33bc70:
    // 0x33bc70: 0x24840400  addiu       $a0, $a0, 0x400
    ctx->pc = 0x33bc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
label_33bc74:
    // 0x33bc74: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x33bc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_33bc78:
    // 0x33bc78: 0x2442fc00  addiu       $v0, $v0, -0x400
    ctx->pc = 0x33bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966272));
label_33bc7c:
    // 0x33bc7c: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x33bc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_33bc80:
    // 0x33bc80: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x33bc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_33bc84:
    // 0x33bc84: 0xae23004c  sw          $v1, 0x4C($s1)
    ctx->pc = 0x33bc84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
label_33bc88:
    // 0x33bc88: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_33bc8c:
    if (ctx->pc == 0x33BC8Cu) {
        ctx->pc = 0x33BC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BC88u;
        // 0x33bc8c: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BC90u;
        goto label_33bc90;
    }
    ctx->pc = 0x33BC88u;
    {
        const bool branch_taken_0x33bc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BC88u;
        // 0x33bc8c: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bc88) {
            ctx->pc = 0x33BF24u;
            goto label_33bf24;
        }
    }
    ctx->pc = 0x33BC90u;
label_33bc90:
    // 0x33bc90: 0x260503ff  addiu       $a1, $s0, 0x3FF
    ctx->pc = 0x33bc90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1023));
label_33bc94:
    // 0x33bc94: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33bc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33bc98:
    // 0x33bc98: 0x8e26003c  lw          $a2, 0x3C($s1)
    ctx->pc = 0x33bc98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33bc9c:
    // 0x33bc9c: 0x260407fe  addiu       $a0, $s0, 0x7FE
    ctx->pc = 0x33bc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2046));
label_33bca0:
    // 0x33bca0: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x33bca0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_33bca4:
    // 0x33bca4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x33bca4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33bca8:
    // 0x33bca8: 0xa3200b  movn        $a0, $a1, $v1
    ctx->pc = 0x33bca8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
label_33bcac:
    // 0x33bcac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x33bcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_33bcb0:
    // 0x33bcb0: 0x49a83  sra         $s3, $a0, 10
    ctx->pc = 0x33bcb0u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 4), 10));
label_33bcb4:
    // 0x33bcb4: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x33bcb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_33bcb8:
    // 0x33bcb8: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
label_33bcbc:
    if (ctx->pc == 0x33BCBCu) {
        ctx->pc = 0x33BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BCB8u;
        // 0x33bcbc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BCC0u;
        goto label_33bcc0;
    }
    ctx->pc = 0x33BCB8u;
    {
        const bool branch_taken_0x33bcb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BCB8u;
        // 0x33bcbc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bcb8) {
            ctx->pc = 0x33BE00u;
            goto label_33be00;
        }
    }
    ctx->pc = 0x33BCC0u;
label_33bcc0:
    // 0x33bcc0: 0x2414000c  addiu       $s4, $zero, 0xC
    ctx->pc = 0x33bcc0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_33bcc4:
    // 0x33bcc4: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x33bcc4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33bcc8:
    // 0x33bcc8: 0x1541818  mult        $v1, $t2, $s4
    ctx->pc = 0x33bcc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33bccc:
    // 0x33bccc: 0x0  nop
    ctx->pc = 0x33bcccu;
    // NOP
label_33bcd0:
    // 0x33bcd0: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x33bcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_33bcd4:
    // 0x33bcd4: 0x8c4a0004  lw          $t2, 0x4($v0)
    ctx->pc = 0x33bcd4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33bcd8:
    // 0x33bcd8: 0x15550043  bne         $t2, $s5, . + 4 + (0x43 << 2)
label_33bcdc:
    if (ctx->pc == 0x33BCDCu) {
        ctx->pc = 0x33BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BCD8u;
        // 0x33bcdc: 0x1541818  mult        $v1, $t2, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BCE0u;
        goto label_33bce0;
    }
    ctx->pc = 0x33BCD8u;
    {
        const bool branch_taken_0x33bcd8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        ctx->pc = 0x33BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BCD8u;
        // 0x33bcdc: 0x1541818  mult        $v1, $t2, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bcd8) {
            ctx->pc = 0x33BDE8u;
            goto label_33bde8;
        }
    }
    ctx->pc = 0x33BCE0u;
label_33bce0:
    // 0x33bce0: 0x8cca0008  lw          $t2, 0x8($a2)
    ctx->pc = 0x33bce0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_33bce4:
    // 0x33bce4: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x33bce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_33bce8:
    // 0x33bce8: 0x1542018  mult        $a0, $t2, $s4
    ctx->pc = 0x33bce8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_33bcec:
    // 0x33bcec: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x33bcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_33bcf0:
    // 0x33bcf0: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_33bcf4:
    if (ctx->pc == 0x33BCF4u) {
        ctx->pc = 0x33BCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BCF0u;
        // 0x33bcf4: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BCF8u;
        goto label_33bcf8;
    }
    ctx->pc = 0x33BCF0u;
    {
        const bool branch_taken_0x33bcf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BCF0u;
        // 0x33bcf4: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bcf0) {
            ctx->pc = 0x33BD74u;
            goto label_33bd74;
        }
    }
    ctx->pc = 0x33BCF8u;
label_33bcf8:
    // 0x33bcf8: 0x1528021  addu        $s0, $t2, $s2
    ctx->pc = 0x33bcf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 18)));
label_33bcfc:
    // 0x33bcfc: 0x5603001e  bnel        $s0, $v1, . + 4 + (0x1E << 2)
label_33bd00:
    if (ctx->pc == 0x33BD00u) {
        ctx->pc = 0x33BD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BCFCu;
        // 0x33bd00: 0x138280  sll         $s0, $s3, 10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BD04u;
        goto label_33bd04;
    }
    ctx->pc = 0x33BCFCu;
    {
        const bool branch_taken_0x33bcfc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x33bcfc) {
            ctx->pc = 0x33BD00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BCFCu;
            // 0x33bd00: 0x138280  sll         $s0, $s3, 10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BD78u;
            goto label_33bd78;
        }
    }
    ctx->pc = 0x33BD04u;
label_33bd04:
    // 0x33bd04: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x33bd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_33bd08:
    // 0x33bd08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33bd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33bd0c:
    // 0x33bd0c: 0x40f809  jalr        $v0
label_33bd10:
    if (ctx->pc == 0x33BD10u) {
        ctx->pc = 0x33BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BD0Cu;
        // 0x33bd10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BD14u;
        goto label_33bd14;
    }
    ctx->pc = 0x33BD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33BD14u);
        ctx->pc = 0x33BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BD0Cu;
        // 0x33bd10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BD0Cu, 0x33BD14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33BD14u;
label_33bd14:
    // 0x33bd14: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x33bd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_33bd18:
    // 0x33bd18: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x33bd18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_33bd1c:
    // 0x33bd1c: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x33bd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
label_33bd20:
    // 0x33bd20: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x33bd20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_33bd24:
    // 0x33bd24: 0x14440014  bne         $v0, $a0, . + 4 + (0x14 << 2)
label_33bd28:
    if (ctx->pc == 0x33BD28u) {
        ctx->pc = 0x33BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BD24u;
        // 0x33bd28: 0x138280  sll         $s0, $s3, 10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BD2Cu;
        goto label_33bd2c;
    }
    ctx->pc = 0x33BD24u;
    {
        const bool branch_taken_0x33bd24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x33BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BD24u;
        // 0x33bd28: 0x138280  sll         $s0, $s3, 10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bd24) {
            ctx->pc = 0x33BD78u;
            goto label_33bd78;
        }
    }
    ctx->pc = 0x33BD2Cu;
label_33bd2c:
    // 0x33bd2c: 0x2728023  subu        $s0, $s3, $s2
    ctx->pc = 0x33bd2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_33bd30:
    // 0x33bd30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33bd30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33bd34:
    // 0x33bd34: 0x109280  sll         $s2, $s0, 10
    ctx->pc = 0x33bd34u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 10));
label_33bd38:
    // 0x33bd38: 0xc0cee04  jal         func_33B810
label_33bd3c:
    if (ctx->pc == 0x33BD3Cu) {
        ctx->pc = 0x33BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BD38u;
        // 0x33bd3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BD40u;
        goto label_33bd40;
    }
    ctx->pc = 0x33BD38u;
    SET_GPR_U32(ctx, 31, 0x33BD40u);
    ctx->pc = 0x33BD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BD38u;
    // 0x33bd3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B810u, 0x33BD38u, 0x33BD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BD40u;
label_33bd40:
    // 0x33bd40: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_33bd44:
    if (ctx->pc == 0x33BD44u) {
        ctx->pc = 0x33BD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BD40u;
        // 0x33bd44: 0x138280  sll         $s0, $s3, 10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BD48u;
        goto label_33bd48;
    }
    ctx->pc = 0x33BD40u;
    {
        const bool branch_taken_0x33bd40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bd40) {
            ctx->pc = 0x33BD44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BD40u;
            // 0x33bd44: 0x138280  sll         $s0, $s3, 10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BD78u;
            goto label_33bd78;
        }
    }
    ctx->pc = 0x33BD48u;
label_33bd48:
    // 0x33bd48: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x33bd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33bd4c:
    // 0x33bd4c: 0x8c4a0008  lw          $t2, 0x8($v0)
    ctx->pc = 0x33bd4cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_33bd50:
    // 0x33bd50: 0x1541818  mult        $v1, $t2, $s4
    ctx->pc = 0x33bd50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33bd54:
    // 0x33bd54: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x33bd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_33bd58:
    // 0x33bd58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x33bd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33bd5c:
    // 0x33bd5c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x33bd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_33bd60:
    // 0x33bd60: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x33bd60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_33bd64:
    // 0x33bd64: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x33bd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_33bd68:
    // 0x33bd68: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x33bd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_33bd6c:
    // 0x33bd6c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_33bd70:
    if (ctx->pc == 0x33BD70u) {
        ctx->pc = 0x33BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BD6Cu;
        // 0x33bd70: 0xae240050  sw          $a0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BD74u;
        goto label_33bd74;
    }
    ctx->pc = 0x33BD6Cu;
    {
        const bool branch_taken_0x33bd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BD6Cu;
        // 0x33bd70: 0xae240050  sw          $a0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bd6c) {
            ctx->pc = 0x33BDE4u;
            goto label_33bde4;
        }
    }
    ctx->pc = 0x33BD74u;
label_33bd74:
    // 0x33bd74: 0x138280  sll         $s0, $s3, 10
    ctx->pc = 0x33bd74u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 10));
label_33bd78:
    // 0x33bd78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33bd78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33bd7c:
    // 0x33bd7c: 0xc0cee04  jal         func_33B810
label_33bd80:
    if (ctx->pc == 0x33BD80u) {
        ctx->pc = 0x33BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BD7Cu;
        // 0x33bd80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BD84u;
        goto label_33bd84;
    }
    ctx->pc = 0x33BD7Cu;
    SET_GPR_U32(ctx, 31, 0x33BD84u);
    ctx->pc = 0x33BD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BD7Cu;
    // 0x33bd80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B810u, 0x33BD7Cu, 0x33BD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BD84u;
label_33bd84:
    // 0x33bd84: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x33bd84u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33bd88:
    // 0x33bd88: 0x51600068  beql        $t3, $zero, . + 4 + (0x68 << 2)
label_33bd8c:
    if (ctx->pc == 0x33BD8Cu) {
        ctx->pc = 0x33BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BD88u;
        // 0x33bd8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BD90u;
        goto label_33bd90;
    }
    ctx->pc = 0x33BD88u;
    {
        const bool branch_taken_0x33bd88 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bd88) {
            ctx->pc = 0x33BD8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BD88u;
            // 0x33bd8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BF2Cu;
            goto label_33bf2c;
        }
    }
    ctx->pc = 0x33BD90u;
label_33bd90:
    // 0x33bd90: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x33bd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_33bd94:
    // 0x33bd94: 0x8e26003c  lw          $a2, 0x3C($s1)
    ctx->pc = 0x33bd94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33bd98:
    // 0x33bd98: 0x1642023  subu        $a0, $t3, $a0
    ctx->pc = 0x33bd98u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_33bd9c:
    // 0x33bd9c: 0x2c4282a  slt         $a1, $s6, $a0
    ctx->pc = 0x33bd9cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_33bda0:
    // 0x33bda0: 0x248303ff  addiu       $v1, $a0, 0x3FF
    ctx->pc = 0x33bda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1023));
label_33bda4:
    // 0x33bda4: 0x85180b  movn        $v1, $a0, $a1
    ctx->pc = 0x33bda4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_33bda8:
    // 0x33bda8: 0x31a83  sra         $v1, $v1, 10
    ctx->pc = 0x33bda8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 10));
label_33bdac:
    // 0x33bdac: 0x742018  mult        $a0, $v1, $s4
    ctx->pc = 0x33bdacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_33bdb0:
    // 0x33bdb0: 0x941821  addu        $v1, $a0, $s4
    ctx->pc = 0x33bdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_33bdb4:
    // 0x33bdb4: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x33bdb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_33bdb8:
    // 0x33bdb8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x33bdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_33bdbc:
    // 0x33bdbc: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x33bdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33bdc0:
    // 0x33bdc0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33bdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_33bdc4:
    // 0x33bdc4: 0xac730004  sw          $s3, 0x4($v1)
    ctx->pc = 0x33bdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
label_33bdc8:
    // 0x33bdc8: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x33bdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_33bdcc:
    // 0x33bdcc: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x33bdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_33bdd0:
    // 0x33bdd0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33bdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_33bdd4:
    // 0x33bdd4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x33bdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_33bdd8:
    // 0x33bdd8: 0xae240044  sw          $a0, 0x44($s1)
    ctx->pc = 0x33bdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 4));
label_33bddc:
    // 0x33bddc: 0x10000053  b           . + 4 + (0x53 << 2)
label_33bde0:
    if (ctx->pc == 0x33BDE0u) {
        ctx->pc = 0x33BDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BDDCu;
        // 0x33bde0: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BDE4u;
        goto label_33bde4;
    }
    ctx->pc = 0x33BDDCu;
    {
        const bool branch_taken_0x33bddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BDDCu;
        // 0x33bde0: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bddc) {
            ctx->pc = 0x33BF2Cu;
            goto label_33bf2c;
        }
    }
    ctx->pc = 0x33BDE4u;
label_33bde4:
    // 0x33bde4: 0x1541818  mult        $v1, $t2, $s4
    ctx->pc = 0x33bde4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33bde8:
    // 0x33bde8: 0x8e26003c  lw          $a2, 0x3C($s1)
    ctx->pc = 0x33bde8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33bdec:
    // 0x33bdec: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33bdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_33bdf0:
    // 0x33bdf0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33bdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_33bdf4:
    // 0x33bdf4: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x33bdf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_33bdf8:
    // 0x33bdf8: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
label_33bdfc:
    if (ctx->pc == 0x33BDFCu) {
        ctx->pc = 0x33BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BDF8u;
        // 0x33bdfc: 0x1541818  mult        $v1, $t2, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BE00u;
        goto label_33be00;
    }
    ctx->pc = 0x33BDF8u;
    {
        const bool branch_taken_0x33bdf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BDF8u;
        // 0x33bdfc: 0x1541818  mult        $v1, $t2, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bdf8) {
            ctx->pc = 0x33BCD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33bcd0;
        }
    }
    ctx->pc = 0x33BE00u;
label_33be00:
    // 0x33be00: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x33be00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_33be04:
    // 0x33be04: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x33be04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_33be08:
    // 0x33be08: 0x1494018  mult        $t0, $t2, $t1
    ctx->pc = 0x33be08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_33be0c:
    // 0x33be0c: 0x2542ffff  addiu       $v0, $t2, -0x1
    ctx->pc = 0x33be0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_33be10:
    // 0x33be10: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x33be10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
label_33be14:
    // 0x33be14: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x33be14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33be18:
    // 0x33be18: 0x625821  addu        $t3, $v1, $v0
    ctx->pc = 0x33be18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_33be1c:
    // 0x33be1c: 0x1051821  addu        $v1, $t0, $a1
    ctx->pc = 0x33be1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_33be20:
    // 0x33be20: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x33be20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_33be24:
    // 0x33be24: 0x264102a  slt         $v0, $s3, $a0
    ctx->pc = 0x33be24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_33be28:
    // 0x33be28: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_33be2c:
    if (ctx->pc == 0x33BE2Cu) {
        ctx->pc = 0x33BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BE28u;
        // 0x33be2c: 0x1533821  addu        $a3, $t2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BE30u;
        goto label_33be30;
    }
    ctx->pc = 0x33BE28u;
    {
        const bool branch_taken_0x33be28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BE28u;
        // 0x33be2c: 0x1533821  addu        $a3, $t2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33be28) {
            ctx->pc = 0x33BEA0u;
            goto label_33bea0;
        }
    }
    ctx->pc = 0x33BE30u;
label_33be30:
    // 0x33be30: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x33be30u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_33be34:
    // 0x33be34: 0xe93018  mult        $a2, $a3, $t1
    ctx->pc = 0x33be34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_33be38:
    // 0x33be38: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x33be38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_33be3c:
    // 0x33be3c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x33be3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_33be40:
    // 0x33be40: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x33be40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33be44:
    // 0x33be44: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x33be44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_33be48:
    // 0x33be48: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x33be48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_33be4c:
    // 0x33be4c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x33be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_33be50:
    // 0x33be50: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x33be50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_33be54:
    // 0x33be54: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x33be54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33be58:
    // 0x33be58: 0x1041821  addu        $v1, $t0, $a0
    ctx->pc = 0x33be58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_33be5c:
    // 0x33be5c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x33be5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_33be60:
    // 0x33be60: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x33be60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_33be64:
    // 0x33be64: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x33be64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_33be68:
    // 0x33be68: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x33be68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33be6c:
    // 0x33be6c: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x33be6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_33be70:
    // 0x33be70: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x33be70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_33be74:
    // 0x33be74: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x33be74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_33be78:
    // 0x33be78: 0x492018  mult        $a0, $v0, $t1
    ctx->pc = 0x33be78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_33be7c:
    // 0x33be7c: 0xae270034  sw          $a3, 0x34($s1)
    ctx->pc = 0x33be7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 7));
label_33be80:
    // 0x33be80: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x33be80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_33be84:
    // 0x33be84: 0x692018  mult        $a0, $v1, $t1
    ctx->pc = 0x33be84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_33be88:
    // 0x33be88: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x33be88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
label_33be8c:
    // 0x33be8c: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x33be8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_33be90:
    // 0x33be90: 0x10000013  b           . + 4 + (0x13 << 2)
label_33be94:
    if (ctx->pc == 0x33BE94u) {
        ctx->pc = 0x33BE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BE90u;
        // 0x33be94: 0xac670004  sw          $a3, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BE98u;
        goto label_33be98;
    }
    ctx->pc = 0x33BE90u;
    {
        const bool branch_taken_0x33be90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BE90u;
        // 0x33be94: 0xac670004  sw          $a3, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33be90) {
            ctx->pc = 0x33BEE0u;
            goto label_33bee0;
        }
    }
    ctx->pc = 0x33BE98u;
label_33be98:
    // 0x33be98: 0x10000024  b           . + 4 + (0x24 << 2)
label_33be9c:
    if (ctx->pc == 0x33BE9Cu) {
        ctx->pc = 0x33BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BE98u;
        // 0x33be9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BEA0u;
        goto label_33bea0;
    }
    ctx->pc = 0x33BE98u;
    {
        const bool branch_taken_0x33be98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BE98u;
        // 0x33be9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33be98) {
            ctx->pc = 0x33BF2Cu;
            goto label_33bf2c;
        }
    }
    ctx->pc = 0x33BEA0u;
label_33bea0:
    // 0x33bea0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33bea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33bea4:
    // 0x33bea4: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x33bea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_33bea8:
    // 0x33bea8: 0x492018  mult        $a0, $v0, $t1
    ctx->pc = 0x33bea8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_33beac:
    // 0x33beac: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x33beacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_33beb0:
    // 0x33beb0: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x33beb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_33beb4:
    // 0x33beb4: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x33beb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33beb8:
    // 0x33beb8: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x33beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_33bebc:
    // 0x33bebc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x33bebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_33bec0:
    // 0x33bec0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x33bec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33bec4:
    // 0x33bec4: 0x691018  mult        $v0, $v1, $t1
    ctx->pc = 0x33bec4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_33bec8:
    // 0x33bec8: 0xae240034  sw          $a0, 0x34($s1)
    ctx->pc = 0x33bec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 4));
label_33becc:
    // 0x33becc: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x33beccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_33bed0:
    // 0x33bed0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x33bed0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_33bed4:
    // 0x33bed4: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x33bed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_33bed8:
    // 0x33bed8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33bed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_33bedc:
    // 0x33bedc: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x33bedcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
label_33bee0:
    // 0x33bee0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x33bee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_33bee4:
    // 0x33bee4: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x33bee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33bee8:
    // 0x33bee8: 0x1442018  mult        $a0, $t2, $a0
    ctx->pc = 0x33bee8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_33beec:
    // 0x33beec: 0x132a80  sll         $a1, $s3, 10
    ctx->pc = 0x33beecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 10));
label_33bef0:
    // 0x33bef0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_33bef4:
    // 0x33bef4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x33bef4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_33bef8:
    // 0x33bef8: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x33bef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33befc:
    // 0x33befc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x33befcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_33bf00:
    // 0x33bf00: 0xac930004  sw          $s3, 0x4($a0)
    ctx->pc = 0x33bf00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 19));
label_33bf04:
    // 0x33bf04: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x33bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_33bf08:
    // 0x33bf08: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x33bf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_33bf0c:
    // 0x33bf0c: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x33bf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_33bf10:
    // 0x33bf10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33bf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_33bf14:
    // 0x33bf14: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x33bf14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_33bf18:
    // 0x33bf18: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x33bf18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
label_33bf1c:
    // 0x33bf1c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x33bf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_33bf20:
    // 0x33bf20: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x33bf20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
label_33bf24:
    // 0x33bf24: 0xae240050  sw          $a0, 0x50($s1)
    ctx->pc = 0x33bf24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 4));
label_33bf28:
    // 0x33bf28: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x33bf28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_33bf2c:
    // 0x33bf2c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x33bf2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_33bf30:
    // 0x33bf30: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x33bf30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_33bf34:
    // 0x33bf34: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x33bf34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_33bf38:
    // 0x33bf38: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x33bf38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_33bf3c:
    // 0x33bf3c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x33bf3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33bf40:
    // 0x33bf40: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x33bf40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33bf44:
    // 0x33bf44: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x33bf44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33bf48:
    // 0x33bf48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33bf48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33bf4c:
    // 0x33bf4c: 0x3e00008  jr          $ra
label_33bf50:
    if (ctx->pc == 0x33BF50u) {
        ctx->pc = 0x33BF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF4Cu;
        // 0x33bf50: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BF54u;
        goto label_33bf54;
    }
    ctx->pc = 0x33BF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF4Cu;
        // 0x33bf50: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BF54u;
label_33bf54:
    // 0x33bf54: 0x0  nop
    ctx->pc = 0x33bf54u;
    // NOP
label_33bf58:
    // 0x33bf58: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x33bf58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_33bf5c:
    // 0x33bf5c: 0x0  nop
    ctx->pc = 0x33bf5cu;
    // NOP
label_33bf60:
    // 0x33bf60: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x33bf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_33bf64:
    // 0x33bf64: 0x0  nop
    ctx->pc = 0x33bf64u;
    // NOP
label_33bf68:
    // 0x33bf68: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x33bf68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_33bf6c:
    // 0x33bf6c: 0x0  nop
    ctx->pc = 0x33bf6cu;
    // NOP
    ctx->pc = 0x33bf70u;
}
