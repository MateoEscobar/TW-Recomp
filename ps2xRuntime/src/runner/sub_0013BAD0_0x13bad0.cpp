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

// Function: sub_0013BAD0
// Address: 0x13bad0 - 0x13bfe0
void sub_0013BAD0_0x13bad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013BAD0_0x13bad0");
#endif

    switch (ctx->pc) {
        case 0x13bad0u: goto label_13bad0;
        case 0x13bad4u: goto label_13bad4;
        case 0x13bad8u: goto label_13bad8;
        case 0x13badcu: goto label_13badc;
        case 0x13bae0u: goto label_13bae0;
        case 0x13bae4u: goto label_13bae4;
        case 0x13bae8u: goto label_13bae8;
        case 0x13baecu: goto label_13baec;
        case 0x13baf0u: goto label_13baf0;
        case 0x13baf4u: goto label_13baf4;
        case 0x13baf8u: goto label_13baf8;
        case 0x13bafcu: goto label_13bafc;
        case 0x13bb00u: goto label_13bb00;
        case 0x13bb04u: goto label_13bb04;
        case 0x13bb08u: goto label_13bb08;
        case 0x13bb0cu: goto label_13bb0c;
        case 0x13bb10u: goto label_13bb10;
        case 0x13bb14u: goto label_13bb14;
        case 0x13bb18u: goto label_13bb18;
        case 0x13bb1cu: goto label_13bb1c;
        case 0x13bb20u: goto label_13bb20;
        case 0x13bb24u: goto label_13bb24;
        case 0x13bb28u: goto label_13bb28;
        case 0x13bb2cu: goto label_13bb2c;
        case 0x13bb30u: goto label_13bb30;
        case 0x13bb34u: goto label_13bb34;
        case 0x13bb38u: goto label_13bb38;
        case 0x13bb3cu: goto label_13bb3c;
        case 0x13bb40u: goto label_13bb40;
        case 0x13bb44u: goto label_13bb44;
        case 0x13bb48u: goto label_13bb48;
        case 0x13bb4cu: goto label_13bb4c;
        case 0x13bb50u: goto label_13bb50;
        case 0x13bb54u: goto label_13bb54;
        case 0x13bb58u: goto label_13bb58;
        case 0x13bb5cu: goto label_13bb5c;
        case 0x13bb60u: goto label_13bb60;
        case 0x13bb64u: goto label_13bb64;
        case 0x13bb68u: goto label_13bb68;
        case 0x13bb6cu: goto label_13bb6c;
        case 0x13bb70u: goto label_13bb70;
        case 0x13bb74u: goto label_13bb74;
        case 0x13bb78u: goto label_13bb78;
        case 0x13bb7cu: goto label_13bb7c;
        case 0x13bb80u: goto label_13bb80;
        case 0x13bb84u: goto label_13bb84;
        case 0x13bb88u: goto label_13bb88;
        case 0x13bb8cu: goto label_13bb8c;
        case 0x13bb90u: goto label_13bb90;
        case 0x13bb94u: goto label_13bb94;
        case 0x13bb98u: goto label_13bb98;
        case 0x13bb9cu: goto label_13bb9c;
        case 0x13bba0u: goto label_13bba0;
        case 0x13bba4u: goto label_13bba4;
        case 0x13bba8u: goto label_13bba8;
        case 0x13bbacu: goto label_13bbac;
        case 0x13bbb0u: goto label_13bbb0;
        case 0x13bbb4u: goto label_13bbb4;
        case 0x13bbb8u: goto label_13bbb8;
        case 0x13bbbcu: goto label_13bbbc;
        case 0x13bbc0u: goto label_13bbc0;
        case 0x13bbc4u: goto label_13bbc4;
        case 0x13bbc8u: goto label_13bbc8;
        case 0x13bbccu: goto label_13bbcc;
        case 0x13bbd0u: goto label_13bbd0;
        case 0x13bbd4u: goto label_13bbd4;
        case 0x13bbd8u: goto label_13bbd8;
        case 0x13bbdcu: goto label_13bbdc;
        case 0x13bbe0u: goto label_13bbe0;
        case 0x13bbe4u: goto label_13bbe4;
        case 0x13bbe8u: goto label_13bbe8;
        case 0x13bbecu: goto label_13bbec;
        case 0x13bbf0u: goto label_13bbf0;
        case 0x13bbf4u: goto label_13bbf4;
        case 0x13bbf8u: goto label_13bbf8;
        case 0x13bbfcu: goto label_13bbfc;
        case 0x13bc00u: goto label_13bc00;
        case 0x13bc04u: goto label_13bc04;
        case 0x13bc08u: goto label_13bc08;
        case 0x13bc0cu: goto label_13bc0c;
        case 0x13bc10u: goto label_13bc10;
        case 0x13bc14u: goto label_13bc14;
        case 0x13bc18u: goto label_13bc18;
        case 0x13bc1cu: goto label_13bc1c;
        case 0x13bc20u: goto label_13bc20;
        case 0x13bc24u: goto label_13bc24;
        case 0x13bc28u: goto label_13bc28;
        case 0x13bc2cu: goto label_13bc2c;
        case 0x13bc30u: goto label_13bc30;
        case 0x13bc34u: goto label_13bc34;
        case 0x13bc38u: goto label_13bc38;
        case 0x13bc3cu: goto label_13bc3c;
        case 0x13bc40u: goto label_13bc40;
        case 0x13bc44u: goto label_13bc44;
        case 0x13bc48u: goto label_13bc48;
        case 0x13bc4cu: goto label_13bc4c;
        case 0x13bc50u: goto label_13bc50;
        case 0x13bc54u: goto label_13bc54;
        case 0x13bc58u: goto label_13bc58;
        case 0x13bc5cu: goto label_13bc5c;
        case 0x13bc60u: goto label_13bc60;
        case 0x13bc64u: goto label_13bc64;
        case 0x13bc68u: goto label_13bc68;
        case 0x13bc6cu: goto label_13bc6c;
        case 0x13bc70u: goto label_13bc70;
        case 0x13bc74u: goto label_13bc74;
        case 0x13bc78u: goto label_13bc78;
        case 0x13bc7cu: goto label_13bc7c;
        case 0x13bc80u: goto label_13bc80;
        case 0x13bc84u: goto label_13bc84;
        case 0x13bc88u: goto label_13bc88;
        case 0x13bc8cu: goto label_13bc8c;
        case 0x13bc90u: goto label_13bc90;
        case 0x13bc94u: goto label_13bc94;
        case 0x13bc98u: goto label_13bc98;
        case 0x13bc9cu: goto label_13bc9c;
        case 0x13bca0u: goto label_13bca0;
        case 0x13bca4u: goto label_13bca4;
        case 0x13bca8u: goto label_13bca8;
        case 0x13bcacu: goto label_13bcac;
        case 0x13bcb0u: goto label_13bcb0;
        case 0x13bcb4u: goto label_13bcb4;
        case 0x13bcb8u: goto label_13bcb8;
        case 0x13bcbcu: goto label_13bcbc;
        case 0x13bcc0u: goto label_13bcc0;
        case 0x13bcc4u: goto label_13bcc4;
        case 0x13bcc8u: goto label_13bcc8;
        case 0x13bcccu: goto label_13bccc;
        case 0x13bcd0u: goto label_13bcd0;
        case 0x13bcd4u: goto label_13bcd4;
        case 0x13bcd8u: goto label_13bcd8;
        case 0x13bcdcu: goto label_13bcdc;
        case 0x13bce0u: goto label_13bce0;
        case 0x13bce4u: goto label_13bce4;
        case 0x13bce8u: goto label_13bce8;
        case 0x13bcecu: goto label_13bcec;
        case 0x13bcf0u: goto label_13bcf0;
        case 0x13bcf4u: goto label_13bcf4;
        case 0x13bcf8u: goto label_13bcf8;
        case 0x13bcfcu: goto label_13bcfc;
        case 0x13bd00u: goto label_13bd00;
        case 0x13bd04u: goto label_13bd04;
        case 0x13bd08u: goto label_13bd08;
        case 0x13bd0cu: goto label_13bd0c;
        case 0x13bd10u: goto label_13bd10;
        case 0x13bd14u: goto label_13bd14;
        case 0x13bd18u: goto label_13bd18;
        case 0x13bd1cu: goto label_13bd1c;
        case 0x13bd20u: goto label_13bd20;
        case 0x13bd24u: goto label_13bd24;
        case 0x13bd28u: goto label_13bd28;
        case 0x13bd2cu: goto label_13bd2c;
        case 0x13bd30u: goto label_13bd30;
        case 0x13bd34u: goto label_13bd34;
        case 0x13bd38u: goto label_13bd38;
        case 0x13bd3cu: goto label_13bd3c;
        case 0x13bd40u: goto label_13bd40;
        case 0x13bd44u: goto label_13bd44;
        case 0x13bd48u: goto label_13bd48;
        case 0x13bd4cu: goto label_13bd4c;
        case 0x13bd50u: goto label_13bd50;
        case 0x13bd54u: goto label_13bd54;
        case 0x13bd58u: goto label_13bd58;
        case 0x13bd5cu: goto label_13bd5c;
        case 0x13bd60u: goto label_13bd60;
        case 0x13bd64u: goto label_13bd64;
        case 0x13bd68u: goto label_13bd68;
        case 0x13bd6cu: goto label_13bd6c;
        case 0x13bd70u: goto label_13bd70;
        case 0x13bd74u: goto label_13bd74;
        case 0x13bd78u: goto label_13bd78;
        case 0x13bd7cu: goto label_13bd7c;
        case 0x13bd80u: goto label_13bd80;
        case 0x13bd84u: goto label_13bd84;
        case 0x13bd88u: goto label_13bd88;
        case 0x13bd8cu: goto label_13bd8c;
        case 0x13bd90u: goto label_13bd90;
        case 0x13bd94u: goto label_13bd94;
        case 0x13bd98u: goto label_13bd98;
        case 0x13bd9cu: goto label_13bd9c;
        case 0x13bda0u: goto label_13bda0;
        case 0x13bda4u: goto label_13bda4;
        case 0x13bda8u: goto label_13bda8;
        case 0x13bdacu: goto label_13bdac;
        case 0x13bdb0u: goto label_13bdb0;
        case 0x13bdb4u: goto label_13bdb4;
        case 0x13bdb8u: goto label_13bdb8;
        case 0x13bdbcu: goto label_13bdbc;
        case 0x13bdc0u: goto label_13bdc0;
        case 0x13bdc4u: goto label_13bdc4;
        case 0x13bdc8u: goto label_13bdc8;
        case 0x13bdccu: goto label_13bdcc;
        case 0x13bdd0u: goto label_13bdd0;
        case 0x13bdd4u: goto label_13bdd4;
        case 0x13bdd8u: goto label_13bdd8;
        case 0x13bddcu: goto label_13bddc;
        case 0x13bde0u: goto label_13bde0;
        case 0x13bde4u: goto label_13bde4;
        case 0x13bde8u: goto label_13bde8;
        case 0x13bdecu: goto label_13bdec;
        case 0x13bdf0u: goto label_13bdf0;
        case 0x13bdf4u: goto label_13bdf4;
        case 0x13bdf8u: goto label_13bdf8;
        case 0x13bdfcu: goto label_13bdfc;
        case 0x13be00u: goto label_13be00;
        case 0x13be04u: goto label_13be04;
        case 0x13be08u: goto label_13be08;
        case 0x13be0cu: goto label_13be0c;
        case 0x13be10u: goto label_13be10;
        case 0x13be14u: goto label_13be14;
        case 0x13be18u: goto label_13be18;
        case 0x13be1cu: goto label_13be1c;
        case 0x13be20u: goto label_13be20;
        case 0x13be24u: goto label_13be24;
        case 0x13be28u: goto label_13be28;
        case 0x13be2cu: goto label_13be2c;
        case 0x13be30u: goto label_13be30;
        case 0x13be34u: goto label_13be34;
        case 0x13be38u: goto label_13be38;
        case 0x13be3cu: goto label_13be3c;
        case 0x13be40u: goto label_13be40;
        case 0x13be44u: goto label_13be44;
        case 0x13be48u: goto label_13be48;
        case 0x13be4cu: goto label_13be4c;
        case 0x13be50u: goto label_13be50;
        case 0x13be54u: goto label_13be54;
        case 0x13be58u: goto label_13be58;
        case 0x13be5cu: goto label_13be5c;
        case 0x13be60u: goto label_13be60;
        case 0x13be64u: goto label_13be64;
        case 0x13be68u: goto label_13be68;
        case 0x13be6cu: goto label_13be6c;
        case 0x13be70u: goto label_13be70;
        case 0x13be74u: goto label_13be74;
        case 0x13be78u: goto label_13be78;
        case 0x13be7cu: goto label_13be7c;
        case 0x13be80u: goto label_13be80;
        case 0x13be84u: goto label_13be84;
        case 0x13be88u: goto label_13be88;
        case 0x13be8cu: goto label_13be8c;
        case 0x13be90u: goto label_13be90;
        case 0x13be94u: goto label_13be94;
        case 0x13be98u: goto label_13be98;
        case 0x13be9cu: goto label_13be9c;
        case 0x13bea0u: goto label_13bea0;
        case 0x13bea4u: goto label_13bea4;
        case 0x13bea8u: goto label_13bea8;
        case 0x13beacu: goto label_13beac;
        case 0x13beb0u: goto label_13beb0;
        case 0x13beb4u: goto label_13beb4;
        case 0x13beb8u: goto label_13beb8;
        case 0x13bebcu: goto label_13bebc;
        case 0x13bec0u: goto label_13bec0;
        case 0x13bec4u: goto label_13bec4;
        case 0x13bec8u: goto label_13bec8;
        case 0x13beccu: goto label_13becc;
        case 0x13bed0u: goto label_13bed0;
        case 0x13bed4u: goto label_13bed4;
        case 0x13bed8u: goto label_13bed8;
        case 0x13bedcu: goto label_13bedc;
        case 0x13bee0u: goto label_13bee0;
        case 0x13bee4u: goto label_13bee4;
        case 0x13bee8u: goto label_13bee8;
        case 0x13beecu: goto label_13beec;
        case 0x13bef0u: goto label_13bef0;
        case 0x13bef4u: goto label_13bef4;
        case 0x13bef8u: goto label_13bef8;
        case 0x13befcu: goto label_13befc;
        case 0x13bf00u: goto label_13bf00;
        case 0x13bf04u: goto label_13bf04;
        case 0x13bf08u: goto label_13bf08;
        case 0x13bf0cu: goto label_13bf0c;
        case 0x13bf10u: goto label_13bf10;
        case 0x13bf14u: goto label_13bf14;
        case 0x13bf18u: goto label_13bf18;
        case 0x13bf1cu: goto label_13bf1c;
        case 0x13bf20u: goto label_13bf20;
        case 0x13bf24u: goto label_13bf24;
        case 0x13bf28u: goto label_13bf28;
        case 0x13bf2cu: goto label_13bf2c;
        case 0x13bf30u: goto label_13bf30;
        case 0x13bf34u: goto label_13bf34;
        case 0x13bf38u: goto label_13bf38;
        case 0x13bf3cu: goto label_13bf3c;
        case 0x13bf40u: goto label_13bf40;
        case 0x13bf44u: goto label_13bf44;
        case 0x13bf48u: goto label_13bf48;
        case 0x13bf4cu: goto label_13bf4c;
        case 0x13bf50u: goto label_13bf50;
        case 0x13bf54u: goto label_13bf54;
        case 0x13bf58u: goto label_13bf58;
        case 0x13bf5cu: goto label_13bf5c;
        case 0x13bf60u: goto label_13bf60;
        case 0x13bf64u: goto label_13bf64;
        case 0x13bf68u: goto label_13bf68;
        case 0x13bf6cu: goto label_13bf6c;
        case 0x13bf70u: goto label_13bf70;
        case 0x13bf74u: goto label_13bf74;
        case 0x13bf78u: goto label_13bf78;
        case 0x13bf7cu: goto label_13bf7c;
        case 0x13bf80u: goto label_13bf80;
        case 0x13bf84u: goto label_13bf84;
        case 0x13bf88u: goto label_13bf88;
        case 0x13bf8cu: goto label_13bf8c;
        case 0x13bf90u: goto label_13bf90;
        case 0x13bf94u: goto label_13bf94;
        case 0x13bf98u: goto label_13bf98;
        case 0x13bf9cu: goto label_13bf9c;
        case 0x13bfa0u: goto label_13bfa0;
        case 0x13bfa4u: goto label_13bfa4;
        case 0x13bfa8u: goto label_13bfa8;
        case 0x13bfacu: goto label_13bfac;
        case 0x13bfb0u: goto label_13bfb0;
        case 0x13bfb4u: goto label_13bfb4;
        case 0x13bfb8u: goto label_13bfb8;
        case 0x13bfbcu: goto label_13bfbc;
        case 0x13bfc0u: goto label_13bfc0;
        case 0x13bfc4u: goto label_13bfc4;
        case 0x13bfc8u: goto label_13bfc8;
        case 0x13bfccu: goto label_13bfcc;
        case 0x13bfd0u: goto label_13bfd0;
        case 0x13bfd4u: goto label_13bfd4;
        case 0x13bfd8u: goto label_13bfd8;
        case 0x13bfdcu: goto label_13bfdc;
        default: break;
    }

    ctx->pc = 0x13bad0u;

label_13bad0:
    // 0x13bad0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x13bad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_13bad4:
    // 0x13bad4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x13bad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_13bad8:
    // 0x13bad8: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x13bad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_13badc:
    // 0x13badc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13badcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13bae0:
    // 0x13bae0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x13bae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_13bae4:
    // 0x13bae4: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x13bae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_13bae8:
    // 0x13bae8: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x13bae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_13baec:
    // 0x13baec: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x13baecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_13baf0:
    // 0x13baf0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x13baf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_13baf4:
    // 0x13baf4: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x13baf4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_13baf8:
    // 0x13baf8: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x13baf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_13bafc:
    // 0x13bafc: 0x8e440348  lw          $a0, 0x348($s2)
    ctx->pc = 0x13bafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 840)));
label_13bb00:
    // 0x13bb00: 0x1080012b  beqz        $a0, . + 4 + (0x12B << 2)
label_13bb04:
    if (ctx->pc == 0x13BB04u) {
        ctx->pc = 0x13BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BB00u;
        // 0x13bb04: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BB08u;
        goto label_13bb08;
    }
    ctx->pc = 0x13BB00u;
    {
        const bool branch_taken_0x13bb00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BB00u;
        // 0x13bb04: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb00) {
            ctx->pc = 0x13BFB0u;
            goto label_13bfb0;
        }
    }
    ctx->pc = 0x13BB08u;
label_13bb08:
    // 0x13bb08: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x13bb08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13bb0c:
    // 0x13bb0c: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x13bb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_13bb10:
    // 0x13bb10: 0x26540180  addiu       $s4, $s2, 0x180
    ctx->pc = 0x13bb10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
label_13bb14:
    // 0x13bb14: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x13bb14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_13bb18:
    // 0x13bb18: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_13bb1c:
    if (ctx->pc == 0x13BB1Cu) {
        ctx->pc = 0x13BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BB18u;
        // 0x13bb1c: 0x7e420180  sq          $v0, 0x180($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 384), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BB20u;
        goto label_13bb20;
    }
    ctx->pc = 0x13BB18u;
    {
        const bool branch_taken_0x13bb18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BB18u;
        // 0x13bb1c: 0x7e420180  sq          $v0, 0x180($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 384), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb18) {
            ctx->pc = 0x13BB68u;
            goto label_13bb68;
        }
    }
    ctx->pc = 0x13BB20u;
label_13bb20:
    // 0x13bb20: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x13bb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_13bb24:
    // 0x13bb24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13bb24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13bb28:
    // 0x13bb28: 0x24554b00  addiu       $s5, $v0, 0x4B00
    ctx->pc = 0x13bb28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_13bb2c:
    // 0x13bb2c: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x13bb2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13bb30:
    // 0x13bb30: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13bb34:
    // 0x13bb34: 0x0  nop
    ctx->pc = 0x13bb34u;
    // NOP
label_13bb38:
    // 0x13bb38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13bb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13bb3c:
    // 0x13bb3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13bb3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13bb40:
    // 0x13bb40: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x13bb40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_13bb44:
    // 0x13bb44: 0x84460092  lh          $a2, 0x92($v0)
    ctx->pc = 0x13bb44u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_13bb48:
    // 0x13bb48: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x13bb48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_13bb4c:
    // 0x13bb4c: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x13bb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_13bb50:
    // 0x13bb50: 0xc136b18  jal         func_4DAC60
label_13bb54:
    if (ctx->pc == 0x13BB54u) {
        ctx->pc = 0x13BB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BB50u;
        // 0x13bb54: 0xd53021  addu        $a2, $a2, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BB58u;
        goto label_13bb58;
    }
    ctx->pc = 0x13BB50u;
    SET_GPR_U32(ctx, 31, 0x13BB58u);
    ctx->pc = 0x13BB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BB50u;
    // 0x13bb54: 0xd53021  addu        $a2, $a2, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13BB50u, 0x13BB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BB58u;
label_13bb58:
    // 0x13bb58: 0x8e420348  lw          $v0, 0x348($s2)
    ctx->pc = 0x13bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 840)));
label_13bb5c:
    // 0x13bb5c: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x13bb5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13bb60:
    // 0x13bb60: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
label_13bb64:
    if (ctx->pc == 0x13BB64u) {
        ctx->pc = 0x13BB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BB60u;
        // 0x13bb64: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BB68u;
        goto label_13bb68;
    }
    ctx->pc = 0x13BB60u;
    {
        const bool branch_taken_0x13bb60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bb60) {
            ctx->pc = 0x13BB64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BB60u;
            // 0x13bb64: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13bb38;
        }
    }
    ctx->pc = 0x13BB68u;
label_13bb68:
    // 0x13bb68: 0x8e420348  lw          $v0, 0x348($s2)
    ctx->pc = 0x13bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 840)));
label_13bb6c:
    // 0x13bb6c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_13bb70:
    if (ctx->pc == 0x13BB70u) {
        ctx->pc = 0x13BB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BB6Cu;
        // 0x13bb70: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BB74u;
        goto label_13bb74;
    }
    ctx->pc = 0x13BB6Cu;
    {
        const bool branch_taken_0x13bb6c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x13BB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BB6Cu;
        // 0x13bb70: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb6c) {
            ctx->pc = 0x13BB88u;
            goto label_13bb88;
        }
    }
    ctx->pc = 0x13BB74u;
label_13bb74:
    // 0x13bb74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13bb74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13bb78:
    // 0x13bb78: 0x0  nop
    ctx->pc = 0x13bb78u;
    // NOP
label_13bb7c:
    // 0x13bb7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13bb7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_13bb80:
    // 0x13bb80: 0x10000007  b           . + 4 + (0x7 << 2)
label_13bb84:
    if (ctx->pc == 0x13BB84u) {
        ctx->pc = 0x13BB88u;
        goto label_13bb88;
    }
    ctx->pc = 0x13BB80u;
    {
        const bool branch_taken_0x13bb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bb80) {
            ctx->pc = 0x13BBA0u;
            goto label_13bba0;
        }
    }
    ctx->pc = 0x13BB88u;
label_13bb88:
    // 0x13bb88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13bb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_13bb8c:
    // 0x13bb8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13bb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_13bb90:
    // 0x13bb90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13bb90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13bb94:
    // 0x13bb94: 0x0  nop
    ctx->pc = 0x13bb94u;
    // NOP
label_13bb98:
    // 0x13bb98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13bb98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_13bb9c:
    // 0x13bb9c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x13bb9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_13bba0:
    // 0x13bba0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13bba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_13bba4:
    // 0x13bba4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13bba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13bba8:
    // 0x13bba8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13bba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13bbac:
    // 0x13bbac: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x13bbacu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
label_13bbb0:
    // 0x13bbb0: 0xc136b24  jal         func_4DAC90
label_13bbb4:
    if (ctx->pc == 0x13BBB4u) {
        ctx->pc = 0x13BBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BBB0u;
        // 0x13bbb4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BBB8u;
        goto label_13bbb8;
    }
    ctx->pc = 0x13BBB0u;
    SET_GPR_U32(ctx, 31, 0x13BBB8u);
    ctx->pc = 0x13BBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BBB0u;
    // 0x13bbb4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13BBB0u, 0x13BBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BBB8u;
label_13bbb8:
    // 0x13bbb8: 0x7a430320  lq          $v1, 0x320($s2)
    ctx->pc = 0x13bbb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 800)));
label_13bbbc:
    // 0x13bbbc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x13bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_13bbc0:
    // 0x13bbc0: 0x8c44b1a4  lw          $a0, -0x4E5C($v0)
    ctx->pc = 0x13bbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947236)));
label_13bbc4:
    // 0x13bbc4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x13bbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_13bbc8:
    // 0x13bbc8: 0xc6540360  lwc1        $f20, 0x360($s2)
    ctx->pc = 0x13bbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13bbcc:
    // 0x13bbcc: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
label_13bbd0:
    if (ctx->pc == 0x13BBD0u) {
        ctx->pc = 0x13BBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BBCCu;
        // 0x13bbd0: 0xc6550364  lwc1        $f21, 0x364($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BBD4u;
        goto label_13bbd4;
    }
    ctx->pc = 0x13BBCCu;
    {
        const bool branch_taken_0x13bbcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BBCCu;
        // 0x13bbd0: 0xc6550364  lwc1        $f21, 0x364($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bbcc) {
            ctx->pc = 0x13BC14u;
            goto label_13bc14;
        }
    }
    ctx->pc = 0x13BBD4u;
label_13bbd4:
    // 0x13bbd4: 0xc6410044  lwc1        $f1, 0x44($s2)
    ctx->pc = 0x13bbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13bbd8:
    // 0x13bbd8: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x13bbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13bbdc:
    // 0x13bbdc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x13bbdcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13bbe0:
    // 0x13bbe0: 0x0  nop
    ctx->pc = 0x13bbe0u;
    // NOP
label_13bbe4:
    // 0x13bbe4: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
label_13bbe8:
    if (ctx->pc == 0x13BBE8u) {
        ctx->pc = 0x13BBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BBE4u;
        // 0x13bbe8: 0x924303ed  lbu         $v1, 0x3ED($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1005)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BBECu;
        goto label_13bbec;
    }
    ctx->pc = 0x13BBE4u;
    {
        const bool branch_taken_0x13bbe4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13bbe4) {
            ctx->pc = 0x13BBE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BBE4u;
            // 0x13bbe8: 0x924303ed  lbu         $v1, 0x3ED($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1005)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BC18u;
            goto label_13bc18;
        }
    }
    ctx->pc = 0x13BBECu;
label_13bbec:
    // 0x13bbec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13bbecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_13bbf0:
    // 0x13bbf0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13bbf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13bbf4:
    // 0x13bbf4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x13bbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13bbf8:
    // 0x13bbf8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x13bbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13bbfc:
    // 0x13bbfc: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x13bbfcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_13bc00:
    // 0x13bc00: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x13bc00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_13bc04:
    // 0x13bc04: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x13bc04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_13bc08:
    // 0x13bc08: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x13bc08u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_13bc0c:
    // 0x13bc0c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x13bc0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_13bc10:
    // 0x13bc10: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x13bc10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_13bc14:
    // 0x13bc14: 0x924303ed  lbu         $v1, 0x3ED($s2)
    ctx->pc = 0x13bc14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1005)));
label_13bc18:
    // 0x13bc18: 0x14600053  bnez        $v1, . + 4 + (0x53 << 2)
label_13bc1c:
    if (ctx->pc == 0x13BC1Cu) {
        ctx->pc = 0x13BC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BC18u;
        // 0x13bc1c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BC20u;
        goto label_13bc20;
    }
    ctx->pc = 0x13BC18u;
    {
        const bool branch_taken_0x13bc18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BC18u;
        // 0x13bc1c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc18) {
            ctx->pc = 0x13BD68u;
            goto label_13bd68;
        }
    }
    ctx->pc = 0x13BC20u;
label_13bc20:
    // 0x13bc20: 0x86450352  lh          $a1, 0x352($s2)
    ctx->pc = 0x13bc20u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 850)));
label_13bc24:
    // 0x13bc24: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13bc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13bc28:
    // 0x13bc28: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x13bc28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_13bc2c:
    // 0x13bc2c: 0xb23021  addu        $a2, $a1, $s2
    ctx->pc = 0x13bc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_13bc30:
    // 0x13bc30: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x13bc30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13bc34:
    // 0x13bc34: 0x24a501f0  addiu       $a1, $a1, 0x1F0
    ctx->pc = 0x13bc34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
label_13bc38:
    // 0x13bc38: 0xc136afa  jal         func_4DABE8
label_13bc3c:
    if (ctx->pc == 0x13BC3Cu) {
        ctx->pc = 0x13BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BC38u;
        // 0x13bc3c: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BC40u;
        goto label_13bc40;
    }
    ctx->pc = 0x13BC38u;
    SET_GPR_U32(ctx, 31, 0x13BC40u);
    ctx->pc = 0x13BC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BC38u;
    // 0x13bc3c: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13BC38u, 0x13BC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BC40u;
label_13bc40:
    // 0x13bc40: 0xc6400188  lwc1        $f0, 0x188($s2)
    ctx->pc = 0x13bc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13bc44:
    // 0x13bc44: 0xc6420328  lwc1        $f2, 0x328($s2)
    ctx->pc = 0x13bc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13bc48:
    // 0x13bc48: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x13bc48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13bc4c:
    // 0x13bc4c: 0xc6410360  lwc1        $f1, 0x360($s2)
    ctx->pc = 0x13bc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13bc50:
    // 0x13bc50: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x13bc50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_13bc54:
    // 0x13bc54: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x13bc54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_13bc58:
    // 0x13bc58: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13bc58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13bc5c:
    // 0x13bc5c: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x13bc5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13bc60:
    // 0x13bc60: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x13bc60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13bc64:
    // 0x13bc64: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x13bc64u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_13bc68:
    // 0x13bc68: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x13bc68u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_13bc6c:
    // 0x13bc6c: 0x4a0003bf  vwaitq
    ctx->pc = 0x13bc6cu;
    // VWAITQ (Q already resolved in this runtime)
label_13bc70:
    // 0x13bc70: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x13bc70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_13bc74:
    // 0x13bc74: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x13bc74u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_13bc78:
    // 0x13bc78: 0x7a430180  lq          $v1, 0x180($s2)
    ctx->pc = 0x13bc78u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 384)));
label_13bc7c:
    // 0x13bc7c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x13bc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_13bc80:
    // 0x13bc80: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x13bc80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13bc84:
    // 0x13bc84: 0x7e4302f0  sq          $v1, 0x2F0($s2)
    ctx->pc = 0x13bc84u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 752), GPR_VEC(ctx, 3));
label_13bc88:
    // 0x13bc88: 0xe6400188  swc1        $f0, 0x188($s2)
    ctx->pc = 0x13bc88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 392), bits); }
label_13bc8c:
    // 0x13bc8c: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x13bc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
label_13bc90:
    // 0x13bc90: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
label_13bc94:
    if (ctx->pc == 0x13BC94u) {
        ctx->pc = 0x13BC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BC90u;
        // 0x13bc94: 0x7fa40020  sq          $a0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BC98u;
        goto label_13bc98;
    }
    ctx->pc = 0x13BC90u;
    {
        const bool branch_taken_0x13bc90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13BC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BC90u;
        // 0x13bc94: 0x7fa40020  sq          $a0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc90) {
            ctx->pc = 0x13BD08u;
            goto label_13bd08;
        }
    }
    ctx->pc = 0x13BC98u;
label_13bc98:
    // 0x13bc98: 0x8e420348  lw          $v0, 0x348($s2)
    ctx->pc = 0x13bc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 840)));
label_13bc9c:
    // 0x13bc9c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x13bc9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_13bca0:
    // 0x13bca0: 0x504000c2  beql        $v0, $zero, . + 4 + (0xC2 << 2)
label_13bca4:
    if (ctx->pc == 0x13BCA4u) {
        ctx->pc = 0x13BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BCA0u;
        // 0x13bca4: 0x7a420180  lq          $v0, 0x180($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BCA8u;
        goto label_13bca8;
    }
    ctx->pc = 0x13BCA0u;
    {
        const bool branch_taken_0x13bca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bca0) {
            ctx->pc = 0x13BCA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BCA0u;
            // 0x13bca4: 0x7a420180  lq          $v0, 0x180($s2) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BFACu;
            goto label_13bfac;
        }
    }
    ctx->pc = 0x13BCA8u;
label_13bca8:
    // 0x13bca8: 0xc64c0364  lwc1        $f12, 0x364($s2)
    ctx->pc = 0x13bca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13bcac:
    // 0x13bcac: 0x46036032  c.eq.s      $f12, $f3
    ctx->pc = 0x13bcacu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13bcb0:
    // 0x13bcb0: 0x0  nop
    ctx->pc = 0x13bcb0u;
    // NOP
label_13bcb4:
    // 0x13bcb4: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_13bcb8:
    if (ctx->pc == 0x13BCB8u) {
        ctx->pc = 0x13BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BCB4u;
        // 0x13bcb8: 0x264402f0  addiu       $a0, $s2, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BCBCu;
        goto label_13bcbc;
    }
    ctx->pc = 0x13BCB4u;
    {
        const bool branch_taken_0x13bcb4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BCB4u;
        // 0x13bcb8: 0x264402f0  addiu       $a0, $s2, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bcb4) {
            ctx->pc = 0x13BCF4u;
            goto label_13bcf4;
        }
    }
    ctx->pc = 0x13BCBCu;
label_13bcbc:
    // 0x13bcbc: 0xc64002f8  lwc1        $f0, 0x2F8($s2)
    ctx->pc = 0x13bcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13bcc0:
    // 0x13bcc0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13bcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13bcc4:
    // 0x13bcc4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x13bcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_13bcc8:
    // 0x13bcc8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x13bcc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_13bccc:
    // 0x13bccc: 0xc136b24  jal         func_4DAC90
label_13bcd0:
    if (ctx->pc == 0x13BCD0u) {
        ctx->pc = 0x13BCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BCCCu;
        // 0x13bcd0: 0xe64002f8  swc1        $f0, 0x2F8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 760), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BCD4u;
        goto label_13bcd4;
    }
    ctx->pc = 0x13BCCCu;
    SET_GPR_U32(ctx, 31, 0x13BCD4u);
    ctx->pc = 0x13BCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BCCCu;
    // 0x13bcd0: 0xe64002f8  swc1        $f0, 0x2F8($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 760), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13BCCCu, 0x13BCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BCD4u;
label_13bcd4:
    // 0x13bcd4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x13bcd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13bcd8:
    // 0x13bcd8: 0x264402f0  addiu       $a0, $s2, 0x2F0
    ctx->pc = 0x13bcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 752));
label_13bcdc:
    // 0x13bcdc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x13bcdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13bce0:
    // 0x13bce0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13bce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13bce4:
    // 0x13bce4: 0xc136b18  jal         func_4DAC60
label_13bce8:
    if (ctx->pc == 0x13BCE8u) {
        ctx->pc = 0x13BCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BCE4u;
        // 0x13bce8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BCECu;
        goto label_13bcec;
    }
    ctx->pc = 0x13BCE4u;
    SET_GPR_U32(ctx, 31, 0x13BCECu);
    ctx->pc = 0x13BCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BCE4u;
    // 0x13bce8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13BCE4u, 0x13BCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BCECu;
label_13bcec:
    // 0x13bcec: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_13bcf0:
    if (ctx->pc == 0x13BCF0u) {
        ctx->pc = 0x13BCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BCECu;
        // 0x13bcf0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BCF4u;
        goto label_13bcf4;
    }
    ctx->pc = 0x13BCECu;
    {
        const bool branch_taken_0x13bcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BCECu;
        // 0x13bcf0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bcec) {
            ctx->pc = 0x13BFB4u;
            goto label_13bfb4;
        }
    }
    ctx->pc = 0x13BCF4u;
label_13bcf4:
    // 0x13bcf4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x13bcf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13bcf8:
    // 0x13bcf8: 0xc136b18  jal         func_4DAC60
label_13bcfc:
    if (ctx->pc == 0x13BCFCu) {
        ctx->pc = 0x13BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BCF8u;
        // 0x13bcfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BD00u;
        goto label_13bd00;
    }
    ctx->pc = 0x13BCF8u;
    SET_GPR_U32(ctx, 31, 0x13BD00u);
    ctx->pc = 0x13BCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BCF8u;
    // 0x13bcfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13BCF8u, 0x13BD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BD00u;
label_13bd00:
    // 0x13bd00: 0x100000ac  b           . + 4 + (0xAC << 2)
label_13bd04:
    if (ctx->pc == 0x13BD04u) {
        ctx->pc = 0x13BD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD00u;
        // 0x13bd04: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BD08u;
        goto label_13bd08;
    }
    ctx->pc = 0x13BD00u;
    {
        const bool branch_taken_0x13bd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD00u;
        // 0x13bd04: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd00) {
            ctx->pc = 0x13BFB4u;
            goto label_13bfb4;
        }
    }
    ctx->pc = 0x13BD08u;
label_13bd08:
    // 0x13bd08: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13bd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13bd0c:
    // 0x13bd0c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x13bd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_13bd10:
    // 0x13bd10: 0xc136b24  jal         func_4DAC90
label_13bd14:
    if (ctx->pc == 0x13BD14u) {
        ctx->pc = 0x13BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD10u;
        // 0x13bd14: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BD18u;
        goto label_13bd18;
    }
    ctx->pc = 0x13BD10u;
    SET_GPR_U32(ctx, 31, 0x13BD18u);
    ctx->pc = 0x13BD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BD10u;
    // 0x13bd14: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13BD10u, 0x13BD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BD18u;
label_13bd18:
    // 0x13bd18: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x13bd18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13bd1c:
    // 0x13bd1c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x13bd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13bd20:
    // 0x13bd20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13bd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13bd24:
    // 0x13bd24: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13bd24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13bd28:
    // 0x13bd28: 0xc136b18  jal         func_4DAC60
label_13bd2c:
    if (ctx->pc == 0x13BD2Cu) {
        ctx->pc = 0x13BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD28u;
        // 0x13bd2c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BD30u;
        goto label_13bd30;
    }
    ctx->pc = 0x13BD28u;
    SET_GPR_U32(ctx, 31, 0x13BD30u);
    ctx->pc = 0x13BD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BD28u;
    // 0x13bd2c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13BD28u, 0x13BD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BD30u;
label_13bd30:
    // 0x13bd30: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x13bd30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_13bd34:
    // 0x13bd34: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x13bd34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_13bd38:
    // 0x13bd38: 0xc136b24  jal         func_4DAC90
label_13bd3c:
    if (ctx->pc == 0x13BD3Cu) {
        ctx->pc = 0x13BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD38u;
        // 0x13bd3c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BD40u;
        goto label_13bd40;
    }
    ctx->pc = 0x13BD38u;
    SET_GPR_U32(ctx, 31, 0x13BD40u);
    ctx->pc = 0x13BD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BD38u;
    // 0x13bd3c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13BD38u, 0x13BD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BD40u;
label_13bd40:
    // 0x13bd40: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x13bd40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13bd44:
    // 0x13bd44: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13bd44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13bd48:
    // 0x13bd48: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x13bd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_13bd4c:
    // 0x13bd4c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x13bd4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13bd50:
    // 0x13bd50: 0xc136b18  jal         func_4DAC60
label_13bd54:
    if (ctx->pc == 0x13BD54u) {
        ctx->pc = 0x13BD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD50u;
        // 0x13bd54: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BD58u;
        goto label_13bd58;
    }
    ctx->pc = 0x13BD50u;
    SET_GPR_U32(ctx, 31, 0x13BD58u);
    ctx->pc = 0x13BD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BD50u;
    // 0x13bd54: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13BD50u, 0x13BD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BD58u;
label_13bd58:
    // 0x13bd58: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x13bd58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13bd5c:
    // 0x13bd5c: 0x7e4202f0  sq          $v0, 0x2F0($s2)
    ctx->pc = 0x13bd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 752), GPR_VEC(ctx, 2));
label_13bd60:
    // 0x13bd60: 0x10000093  b           . + 4 + (0x93 << 2)
label_13bd64:
    if (ctx->pc == 0x13BD64u) {
        ctx->pc = 0x13BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD60u;
        // 0x13bd64: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BD68u;
        goto label_13bd68;
    }
    ctx->pc = 0x13BD60u;
    {
        const bool branch_taken_0x13bd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD60u;
        // 0x13bd64: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd60) {
            ctx->pc = 0x13BFB0u;
            goto label_13bfb0;
        }
    }
    ctx->pc = 0x13BD68u;
label_13bd68:
    // 0x13bd68: 0x1062008b  beq         $v1, $v0, . + 4 + (0x8B << 2)
label_13bd6c:
    if (ctx->pc == 0x13BD6Cu) {
        ctx->pc = 0x13BD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD68u;
        // 0x13bd6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BD70u;
        goto label_13bd70;
    }
    ctx->pc = 0x13BD68u;
    {
        const bool branch_taken_0x13bd68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13BD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD68u;
        // 0x13bd6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd68) {
            ctx->pc = 0x13BF98u;
            goto label_13bf98;
        }
    }
    ctx->pc = 0x13BD70u;
label_13bd70:
    // 0x13bd70: 0x8e430348  lw          $v1, 0x348($s2)
    ctx->pc = 0x13bd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 840)));
label_13bd74:
    // 0x13bd74: 0x54620089  bnel        $v1, $v0, . + 4 + (0x89 << 2)
label_13bd78:
    if (ctx->pc == 0x13BD78u) {
        ctx->pc = 0x13BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD74u;
        // 0x13bd78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BD7Cu;
        goto label_13bd7c;
    }
    ctx->pc = 0x13BD74u;
    {
        const bool branch_taken_0x13bd74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13bd74) {
            ctx->pc = 0x13BD78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BD74u;
            // 0x13bd78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BF9Cu;
            goto label_13bf9c;
        }
    }
    ctx->pc = 0x13BD7Cu;
label_13bd7c:
    // 0x13bd7c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13bd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13bd80:
    // 0x13bd80: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x13bd80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_13bd84:
    // 0x13bd84: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x13bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_13bd88:
    // 0x13bd88: 0x40f809  jalr        $v0
label_13bd8c:
    if (ctx->pc == 0x13BD8Cu) {
        ctx->pc = 0x13BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD88u;
        // 0x13bd8c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BD90u;
        goto label_13bd90;
    }
    ctx->pc = 0x13BD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13BD90u);
        ctx->pc = 0x13BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD88u;
        // 0x13bd8c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BD88u, 0x13BD90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13BD90u;
label_13bd90:
    // 0x13bd90: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13bd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13bd94:
    // 0x13bd94: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13bd94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13bd98:
    // 0x13bd98: 0xc136afa  jal         func_4DABE8
label_13bd9c:
    if (ctx->pc == 0x13BD9Cu) {
        ctx->pc = 0x13BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD98u;
        // 0x13bd9c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BDA0u;
        goto label_13bda0;
    }
    ctx->pc = 0x13BD98u;
    SET_GPR_U32(ctx, 31, 0x13BDA0u);
    ctx->pc = 0x13BD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BD98u;
    // 0x13bd9c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13BD98u, 0x13BDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BDA0u;
label_13bda0:
    // 0x13bda0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x13bda0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13bda4:
    // 0x13bda4: 0x3c110071  lui         $s1, 0x71
    ctx->pc = 0x13bda4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
label_13bda8:
    // 0x13bda8: 0x8e440340  lw          $a0, 0x340($s2)
    ctx->pc = 0x13bda8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 832)));
label_13bdac:
    // 0x13bdac: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13bdacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13bdb0:
    // 0x13bdb0: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x13bdb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13bdb4:
    // 0x13bdb4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x13bdb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13bdb8:
    // 0x13bdb8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x13bdb8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_13bdbc:
    // 0x13bdbc: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x13bdbcu;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_13bdc0:
    // 0x13bdc0: 0x4a0003bf  vwaitq
    ctx->pc = 0x13bdc0u;
    // VWAITQ (Q already resolved in this runtime)
label_13bdc4:
    // 0x13bdc4: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x13bdc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_13bdc8:
    // 0x13bdc8: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x13bdc8u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
label_13bdcc:
    // 0x13bdcc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x13bdccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_13bdd0:
    // 0x13bdd0: 0x26314b00  addiu       $s1, $s1, 0x4B00
    ctx->pc = 0x13bdd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 19200));
label_13bdd4:
    // 0x13bdd4: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x13bdd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
label_13bdd8:
    // 0x13bdd8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13bdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13bddc:
    // 0x13bddc: 0x84900092  lh          $s0, 0x92($a0)
    ctx->pc = 0x13bddcu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 146)));
label_13bde0:
    // 0x13bde0: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x13bde0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_13bde4:
    // 0x13bde4: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x13bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_13bde8:
    // 0x13bde8: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x13bde8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_13bdec:
    // 0x13bdec: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x13bdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
label_13bdf0:
    // 0x13bdf0: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x13bdf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_13bdf4:
    // 0x13bdf4: 0x40f809  jalr        $v0
label_13bdf8:
    if (ctx->pc == 0x13BDF8u) {
        ctx->pc = 0x13BDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BDF4u;
        // 0x13bdf8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BDFCu;
        goto label_13bdfc;
    }
    ctx->pc = 0x13BDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13BDFCu);
        ctx->pc = 0x13BDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BDF4u;
        // 0x13bdf8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BDF4u, 0x13BDFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13BDFCu;
label_13bdfc:
    // 0x13bdfc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13bdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13be00:
    // 0x13be00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13be00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13be04:
    // 0x13be04: 0xc136afa  jal         func_4DABE8
label_13be08:
    if (ctx->pc == 0x13BE08u) {
        ctx->pc = 0x13BE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE04u;
        // 0x13be08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BE0Cu;
        goto label_13be0c;
    }
    ctx->pc = 0x13BE04u;
    SET_GPR_U32(ctx, 31, 0x13BE0Cu);
    ctx->pc = 0x13BE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BE04u;
    // 0x13be08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13BE04u, 0x13BE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BE0Cu;
label_13be0c:
    // 0x13be0c: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x13be0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13be10:
    // 0x13be10: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13be10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13be14:
    // 0x13be14: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x13be14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13be18:
    // 0x13be18: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x13be18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_13be1c:
    // 0x13be1c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13be1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13be20:
    // 0x13be20: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x13be20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13be24:
    // 0x13be24: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x13be24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13be28:
    // 0x13be28: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13be28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13be2c:
    // 0x13be2c: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x13be2cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_13be30:
    // 0x13be30: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x13be30u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13be34:
    // 0x13be34: 0xc136b24  jal         func_4DAC90
label_13be38:
    if (ctx->pc == 0x13BE38u) {
        ctx->pc = 0x13BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE34u;
        // 0x13be38: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BE3Cu;
        goto label_13be3c;
    }
    ctx->pc = 0x13BE34u;
    SET_GPR_U32(ctx, 31, 0x13BE3Cu);
    ctx->pc = 0x13BE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BE34u;
    // 0x13be38: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13BE34u, 0x13BE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BE3Cu;
label_13be3c:
    // 0x13be3c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x13be3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13be40:
    // 0x13be40: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13be40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13be44:
    // 0x13be44: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x13be44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13be48:
    // 0x13be48: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13be48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13be4c:
    // 0x13be4c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x13be4cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_13be50:
    // 0x13be50: 0x8e440344  lw          $a0, 0x344($s2)
    ctx->pc = 0x13be50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 836)));
label_13be54:
    // 0x13be54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13be54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13be58:
    // 0x13be58: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x13be58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_13be5c:
    // 0x13be5c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x13be5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_13be60:
    // 0x13be60: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13be60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13be64:
    // 0x13be64: 0x84900092  lh          $s0, 0x92($a0)
    ctx->pc = 0x13be64u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 146)));
label_13be68:
    // 0x13be68: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x13be68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_13be6c:
    // 0x13be6c: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x13be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_13be70:
    // 0x13be70: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x13be70u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_13be74:
    // 0x13be74: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x13be74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_13be78:
    // 0x13be78: 0x40f809  jalr        $v0
label_13be7c:
    if (ctx->pc == 0x13BE7Cu) {
        ctx->pc = 0x13BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE78u;
        // 0x13be7c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BE80u;
        goto label_13be80;
    }
    ctx->pc = 0x13BE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13BE80u);
        ctx->pc = 0x13BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE78u;
        // 0x13be7c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BE78u, 0x13BE80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13BE80u;
label_13be80:
    // 0x13be80: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13be80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13be84:
    // 0x13be84: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13be84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13be88:
    // 0x13be88: 0xc136afa  jal         func_4DABE8
label_13be8c:
    if (ctx->pc == 0x13BE8Cu) {
        ctx->pc = 0x13BE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE88u;
        // 0x13be8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BE90u;
        goto label_13be90;
    }
    ctx->pc = 0x13BE88u;
    SET_GPR_U32(ctx, 31, 0x13BE90u);
    ctx->pc = 0x13BE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BE88u;
    // 0x13be8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13BE88u, 0x13BE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BE90u;
label_13be90:
    // 0x13be90: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x13be90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13be94:
    // 0x13be94: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13be94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13be98:
    // 0x13be98: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x13be98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13be9c:
    // 0x13be9c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x13be9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_13bea0:
    // 0x13bea0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13bea0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13bea4:
    // 0x13bea4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x13bea4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13bea8:
    // 0x13bea8: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x13bea8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13beac:
    // 0x13beac: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13beacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13beb0:
    // 0x13beb0: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x13beb0u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_13beb4:
    // 0x13beb4: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x13beb4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13beb8:
    // 0x13beb8: 0xc136b24  jal         func_4DAC90
label_13bebc:
    if (ctx->pc == 0x13BEBCu) {
        ctx->pc = 0x13BEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BEB8u;
        // 0x13bebc: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BEC0u;
        goto label_13bec0;
    }
    ctx->pc = 0x13BEB8u;
    SET_GPR_U32(ctx, 31, 0x13BEC0u);
    ctx->pc = 0x13BEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BEB8u;
    // 0x13bebc: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13BEB8u, 0x13BEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BEC0u;
label_13bec0:
    // 0x13bec0: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x13bec0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13bec4:
    // 0x13bec4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13bec4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13bec8:
    // 0x13bec8: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x13bec8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13becc:
    // 0x13becc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13beccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13bed0:
    // 0x13bed0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x13bed0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_13bed4:
    // 0x13bed4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13bed4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13bed8:
    // 0x13bed8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13bed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13bedc:
    // 0x13bedc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x13bedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_13bee0:
    // 0x13bee0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x13bee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_13bee4:
    // 0x13bee4: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x13bee4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_13bee8:
    // 0x13bee8: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x13bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_13beec:
    // 0x13beec: 0x40f809  jalr        $v0
label_13bef0:
    if (ctx->pc == 0x13BEF0u) {
        ctx->pc = 0x13BEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BEECu;
        // 0x13bef0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BEF4u;
        goto label_13bef4;
    }
    ctx->pc = 0x13BEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13BEF4u);
        ctx->pc = 0x13BEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BEECu;
        // 0x13bef0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BEECu, 0x13BEF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13BEF4u;
label_13bef4:
    // 0x13bef4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13bef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13bef8:
    // 0x13bef8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x13bef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_13befc:
    // 0x13befc: 0xc136afa  jal         func_4DABE8
label_13bf00:
    if (ctx->pc == 0x13BF00u) {
        ctx->pc = 0x13BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BEFCu;
        // 0x13bf00: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BF04u;
        goto label_13bf04;
    }
    ctx->pc = 0x13BEFCu;
    SET_GPR_U32(ctx, 31, 0x13BF04u);
    ctx->pc = 0x13BF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BEFCu;
    // 0x13bf00: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13BEFCu, 0x13BF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BF04u;
label_13bf04:
    // 0x13bf04: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x13bf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13bf08:
    // 0x13bf08: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13bf08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13bf0c:
    // 0x13bf0c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x13bf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13bf10:
    // 0x13bf10: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x13bf10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13bf14:
    // 0x13bf14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13bf14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13bf18:
    // 0x13bf18: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13bf18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13bf1c:
    // 0x13bf1c: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x13bf1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13bf20:
    // 0x13bf20: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13bf20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13bf24:
    // 0x13bf24: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13bf24u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_13bf28:
    // 0x13bf28: 0x4a0003bf  vwaitq
    ctx->pc = 0x13bf28u;
    // VWAITQ (Q already resolved in this runtime)
label_13bf2c:
    // 0x13bf2c: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x13bf2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13bf30:
    // 0x13bf30: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x13bf30u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_13bf34:
    // 0x13bf34: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x13bf34u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13bf38:
    // 0x13bf38: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_13bf3c:
    if (ctx->pc == 0x13BF3Cu) {
        ctx->pc = 0x13BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF38u;
        // 0x13bf3c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BF40u;
        goto label_13bf40;
    }
    ctx->pc = 0x13BF38u;
    {
        const bool branch_taken_0x13bf38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF38u;
        // 0x13bf3c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf38) {
            ctx->pc = 0x13BF44u;
            goto label_13bf44;
        }
    }
    ctx->pc = 0x13BF40u;
label_13bf40:
    // 0x13bf40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13bf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13bf44:
    // 0x13bf44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13bf44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_13bf48:
    // 0x13bf48: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x13bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13bf4c:
    // 0x13bf4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13bf50:
    // 0x13bf50: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13bf50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13bf54:
    // 0x13bf54: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x13bf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13bf58:
    // 0x13bf58: 0x0  nop
    ctx->pc = 0x13bf58u;
    // NOP
label_13bf5c:
    // 0x13bf5c: 0x0  nop
    ctx->pc = 0x13bf5cu;
    // NOP
label_13bf60:
    // 0x13bf60: 0x46000004  c1          0x4
    ctx->pc = 0x13bf60u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_13bf64:
    // 0x13bf64: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x13bf64u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_13bf68:
    // 0x13bf68: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x13bf68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13bf6c:
    // 0x13bf6c: 0x0  nop
    ctx->pc = 0x13bf6cu;
    // NOP
label_13bf70:
    // 0x13bf70: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_13bf74:
    if (ctx->pc == 0x13BF74u) {
        ctx->pc = 0x13BF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF70u;
        // 0x13bf74: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BF78u;
        goto label_13bf78;
    }
    ctx->pc = 0x13BF70u;
    {
        const bool branch_taken_0x13bf70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13BF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF70u;
        // 0x13bf74: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf70) {
            ctx->pc = 0x13BF98u;
            goto label_13bf98;
        }
    }
    ctx->pc = 0x13BF78u;
label_13bf78:
    // 0x13bf78: 0xc136b24  jal         func_4DAC90
label_13bf7c:
    if (ctx->pc == 0x13BF7Cu) {
        ctx->pc = 0x13BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF78u;
        // 0x13bf7c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BF80u;
        goto label_13bf80;
    }
    ctx->pc = 0x13BF78u;
    SET_GPR_U32(ctx, 31, 0x13BF80u);
    ctx->pc = 0x13BF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BF78u;
    // 0x13bf7c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13BF78u, 0x13BF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BF80u;
label_13bf80:
    // 0x13bf80: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x13bf80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13bf84:
    // 0x13bf84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13bf84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13bf88:
    // 0x13bf88: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13bf88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13bf8c:
    // 0x13bf8c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x13bf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13bf90:
    // 0x13bf90: 0xc136afa  jal         func_4DABE8
label_13bf94:
    if (ctx->pc == 0x13BF94u) {
        ctx->pc = 0x13BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF90u;
        // 0x13bf94: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BF98u;
        goto label_13bf98;
    }
    ctx->pc = 0x13BF90u;
    SET_GPR_U32(ctx, 31, 0x13BF98u);
    ctx->pc = 0x13BF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BF90u;
    // 0x13bf94: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13BF90u, 0x13BF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BF98u;
label_13bf98:
    // 0x13bf98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13bf98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13bf9c:
    // 0x13bf9c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x13bf9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13bfa0:
    // 0x13bfa0: 0xc136b18  jal         func_4DAC60
label_13bfa4:
    if (ctx->pc == 0x13BFA4u) {
        ctx->pc = 0x13BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BFA0u;
        // 0x13bfa4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BFA8u;
        goto label_13bfa8;
    }
    ctx->pc = 0x13BFA0u;
    SET_GPR_U32(ctx, 31, 0x13BFA8u);
    ctx->pc = 0x13BFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BFA0u;
    // 0x13bfa4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13BFA0u, 0x13BFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BFA8u;
label_13bfa8:
    // 0x13bfa8: 0x7a420180  lq          $v0, 0x180($s2)
    ctx->pc = 0x13bfa8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 384)));
label_13bfac:
    // 0x13bfac: 0x7e4202f0  sq          $v0, 0x2F0($s2)
    ctx->pc = 0x13bfacu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 752), GPR_VEC(ctx, 2));
label_13bfb0:
    // 0x13bfb0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x13bfb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_13bfb4:
    // 0x13bfb4: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x13bfb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_13bfb8:
    // 0x13bfb8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x13bfb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_13bfbc:
    // 0x13bfbc: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x13bfbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_13bfc0:
    // 0x13bfc0: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x13bfc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_13bfc4:
    // 0x13bfc4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x13bfc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13bfc8:
    // 0x13bfc8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x13bfc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_13bfcc:
    // 0x13bfcc: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x13bfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_13bfd0:
    // 0x13bfd0: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x13bfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13bfd4:
    // 0x13bfd4: 0x3e00008  jr          $ra
label_13bfd8:
    if (ctx->pc == 0x13BFD8u) {
        ctx->pc = 0x13BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BFD4u;
        // 0x13bfd8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BFDCu;
        goto label_13bfdc;
    }
    ctx->pc = 0x13BFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BFD4u;
        // 0x13bfd8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BFDCu;
label_13bfdc:
    // 0x13bfdc: 0x0  nop
    ctx->pc = 0x13bfdcu;
    // NOP
    ctx->pc = 0x13bfe0u;
}
