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

// Function: sub_004BF940
// Address: 0x4bf940 - 0x4bfde0
void sub_004BF940_0x4bf940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BF940_0x4bf940");
#endif

    switch (ctx->pc) {
        case 0x4bf940u: goto label_4bf940;
        case 0x4bf944u: goto label_4bf944;
        case 0x4bf948u: goto label_4bf948;
        case 0x4bf94cu: goto label_4bf94c;
        case 0x4bf950u: goto label_4bf950;
        case 0x4bf954u: goto label_4bf954;
        case 0x4bf958u: goto label_4bf958;
        case 0x4bf95cu: goto label_4bf95c;
        case 0x4bf960u: goto label_4bf960;
        case 0x4bf964u: goto label_4bf964;
        case 0x4bf968u: goto label_4bf968;
        case 0x4bf96cu: goto label_4bf96c;
        case 0x4bf970u: goto label_4bf970;
        case 0x4bf974u: goto label_4bf974;
        case 0x4bf978u: goto label_4bf978;
        case 0x4bf97cu: goto label_4bf97c;
        case 0x4bf980u: goto label_4bf980;
        case 0x4bf984u: goto label_4bf984;
        case 0x4bf988u: goto label_4bf988;
        case 0x4bf98cu: goto label_4bf98c;
        case 0x4bf990u: goto label_4bf990;
        case 0x4bf994u: goto label_4bf994;
        case 0x4bf998u: goto label_4bf998;
        case 0x4bf99cu: goto label_4bf99c;
        case 0x4bf9a0u: goto label_4bf9a0;
        case 0x4bf9a4u: goto label_4bf9a4;
        case 0x4bf9a8u: goto label_4bf9a8;
        case 0x4bf9acu: goto label_4bf9ac;
        case 0x4bf9b0u: goto label_4bf9b0;
        case 0x4bf9b4u: goto label_4bf9b4;
        case 0x4bf9b8u: goto label_4bf9b8;
        case 0x4bf9bcu: goto label_4bf9bc;
        case 0x4bf9c0u: goto label_4bf9c0;
        case 0x4bf9c4u: goto label_4bf9c4;
        case 0x4bf9c8u: goto label_4bf9c8;
        case 0x4bf9ccu: goto label_4bf9cc;
        case 0x4bf9d0u: goto label_4bf9d0;
        case 0x4bf9d4u: goto label_4bf9d4;
        case 0x4bf9d8u: goto label_4bf9d8;
        case 0x4bf9dcu: goto label_4bf9dc;
        case 0x4bf9e0u: goto label_4bf9e0;
        case 0x4bf9e4u: goto label_4bf9e4;
        case 0x4bf9e8u: goto label_4bf9e8;
        case 0x4bf9ecu: goto label_4bf9ec;
        case 0x4bf9f0u: goto label_4bf9f0;
        case 0x4bf9f4u: goto label_4bf9f4;
        case 0x4bf9f8u: goto label_4bf9f8;
        case 0x4bf9fcu: goto label_4bf9fc;
        case 0x4bfa00u: goto label_4bfa00;
        case 0x4bfa04u: goto label_4bfa04;
        case 0x4bfa08u: goto label_4bfa08;
        case 0x4bfa0cu: goto label_4bfa0c;
        case 0x4bfa10u: goto label_4bfa10;
        case 0x4bfa14u: goto label_4bfa14;
        case 0x4bfa18u: goto label_4bfa18;
        case 0x4bfa1cu: goto label_4bfa1c;
        case 0x4bfa20u: goto label_4bfa20;
        case 0x4bfa24u: goto label_4bfa24;
        case 0x4bfa28u: goto label_4bfa28;
        case 0x4bfa2cu: goto label_4bfa2c;
        case 0x4bfa30u: goto label_4bfa30;
        case 0x4bfa34u: goto label_4bfa34;
        case 0x4bfa38u: goto label_4bfa38;
        case 0x4bfa3cu: goto label_4bfa3c;
        case 0x4bfa40u: goto label_4bfa40;
        case 0x4bfa44u: goto label_4bfa44;
        case 0x4bfa48u: goto label_4bfa48;
        case 0x4bfa4cu: goto label_4bfa4c;
        case 0x4bfa50u: goto label_4bfa50;
        case 0x4bfa54u: goto label_4bfa54;
        case 0x4bfa58u: goto label_4bfa58;
        case 0x4bfa5cu: goto label_4bfa5c;
        case 0x4bfa60u: goto label_4bfa60;
        case 0x4bfa64u: goto label_4bfa64;
        case 0x4bfa68u: goto label_4bfa68;
        case 0x4bfa6cu: goto label_4bfa6c;
        case 0x4bfa70u: goto label_4bfa70;
        case 0x4bfa74u: goto label_4bfa74;
        case 0x4bfa78u: goto label_4bfa78;
        case 0x4bfa7cu: goto label_4bfa7c;
        case 0x4bfa80u: goto label_4bfa80;
        case 0x4bfa84u: goto label_4bfa84;
        case 0x4bfa88u: goto label_4bfa88;
        case 0x4bfa8cu: goto label_4bfa8c;
        case 0x4bfa90u: goto label_4bfa90;
        case 0x4bfa94u: goto label_4bfa94;
        case 0x4bfa98u: goto label_4bfa98;
        case 0x4bfa9cu: goto label_4bfa9c;
        case 0x4bfaa0u: goto label_4bfaa0;
        case 0x4bfaa4u: goto label_4bfaa4;
        case 0x4bfaa8u: goto label_4bfaa8;
        case 0x4bfaacu: goto label_4bfaac;
        case 0x4bfab0u: goto label_4bfab0;
        case 0x4bfab4u: goto label_4bfab4;
        case 0x4bfab8u: goto label_4bfab8;
        case 0x4bfabcu: goto label_4bfabc;
        case 0x4bfac0u: goto label_4bfac0;
        case 0x4bfac4u: goto label_4bfac4;
        case 0x4bfac8u: goto label_4bfac8;
        case 0x4bfaccu: goto label_4bfacc;
        case 0x4bfad0u: goto label_4bfad0;
        case 0x4bfad4u: goto label_4bfad4;
        case 0x4bfad8u: goto label_4bfad8;
        case 0x4bfadcu: goto label_4bfadc;
        case 0x4bfae0u: goto label_4bfae0;
        case 0x4bfae4u: goto label_4bfae4;
        case 0x4bfae8u: goto label_4bfae8;
        case 0x4bfaecu: goto label_4bfaec;
        case 0x4bfaf0u: goto label_4bfaf0;
        case 0x4bfaf4u: goto label_4bfaf4;
        case 0x4bfaf8u: goto label_4bfaf8;
        case 0x4bfafcu: goto label_4bfafc;
        case 0x4bfb00u: goto label_4bfb00;
        case 0x4bfb04u: goto label_4bfb04;
        case 0x4bfb08u: goto label_4bfb08;
        case 0x4bfb0cu: goto label_4bfb0c;
        case 0x4bfb10u: goto label_4bfb10;
        case 0x4bfb14u: goto label_4bfb14;
        case 0x4bfb18u: goto label_4bfb18;
        case 0x4bfb1cu: goto label_4bfb1c;
        case 0x4bfb20u: goto label_4bfb20;
        case 0x4bfb24u: goto label_4bfb24;
        case 0x4bfb28u: goto label_4bfb28;
        case 0x4bfb2cu: goto label_4bfb2c;
        case 0x4bfb30u: goto label_4bfb30;
        case 0x4bfb34u: goto label_4bfb34;
        case 0x4bfb38u: goto label_4bfb38;
        case 0x4bfb3cu: goto label_4bfb3c;
        case 0x4bfb40u: goto label_4bfb40;
        case 0x4bfb44u: goto label_4bfb44;
        case 0x4bfb48u: goto label_4bfb48;
        case 0x4bfb4cu: goto label_4bfb4c;
        case 0x4bfb50u: goto label_4bfb50;
        case 0x4bfb54u: goto label_4bfb54;
        case 0x4bfb58u: goto label_4bfb58;
        case 0x4bfb5cu: goto label_4bfb5c;
        case 0x4bfb60u: goto label_4bfb60;
        case 0x4bfb64u: goto label_4bfb64;
        case 0x4bfb68u: goto label_4bfb68;
        case 0x4bfb6cu: goto label_4bfb6c;
        case 0x4bfb70u: goto label_4bfb70;
        case 0x4bfb74u: goto label_4bfb74;
        case 0x4bfb78u: goto label_4bfb78;
        case 0x4bfb7cu: goto label_4bfb7c;
        case 0x4bfb80u: goto label_4bfb80;
        case 0x4bfb84u: goto label_4bfb84;
        case 0x4bfb88u: goto label_4bfb88;
        case 0x4bfb8cu: goto label_4bfb8c;
        case 0x4bfb90u: goto label_4bfb90;
        case 0x4bfb94u: goto label_4bfb94;
        case 0x4bfb98u: goto label_4bfb98;
        case 0x4bfb9cu: goto label_4bfb9c;
        case 0x4bfba0u: goto label_4bfba0;
        case 0x4bfba4u: goto label_4bfba4;
        case 0x4bfba8u: goto label_4bfba8;
        case 0x4bfbacu: goto label_4bfbac;
        case 0x4bfbb0u: goto label_4bfbb0;
        case 0x4bfbb4u: goto label_4bfbb4;
        case 0x4bfbb8u: goto label_4bfbb8;
        case 0x4bfbbcu: goto label_4bfbbc;
        case 0x4bfbc0u: goto label_4bfbc0;
        case 0x4bfbc4u: goto label_4bfbc4;
        case 0x4bfbc8u: goto label_4bfbc8;
        case 0x4bfbccu: goto label_4bfbcc;
        case 0x4bfbd0u: goto label_4bfbd0;
        case 0x4bfbd4u: goto label_4bfbd4;
        case 0x4bfbd8u: goto label_4bfbd8;
        case 0x4bfbdcu: goto label_4bfbdc;
        case 0x4bfbe0u: goto label_4bfbe0;
        case 0x4bfbe4u: goto label_4bfbe4;
        case 0x4bfbe8u: goto label_4bfbe8;
        case 0x4bfbecu: goto label_4bfbec;
        case 0x4bfbf0u: goto label_4bfbf0;
        case 0x4bfbf4u: goto label_4bfbf4;
        case 0x4bfbf8u: goto label_4bfbf8;
        case 0x4bfbfcu: goto label_4bfbfc;
        case 0x4bfc00u: goto label_4bfc00;
        case 0x4bfc04u: goto label_4bfc04;
        case 0x4bfc08u: goto label_4bfc08;
        case 0x4bfc0cu: goto label_4bfc0c;
        case 0x4bfc10u: goto label_4bfc10;
        case 0x4bfc14u: goto label_4bfc14;
        case 0x4bfc18u: goto label_4bfc18;
        case 0x4bfc1cu: goto label_4bfc1c;
        case 0x4bfc20u: goto label_4bfc20;
        case 0x4bfc24u: goto label_4bfc24;
        case 0x4bfc28u: goto label_4bfc28;
        case 0x4bfc2cu: goto label_4bfc2c;
        case 0x4bfc30u: goto label_4bfc30;
        case 0x4bfc34u: goto label_4bfc34;
        case 0x4bfc38u: goto label_4bfc38;
        case 0x4bfc3cu: goto label_4bfc3c;
        case 0x4bfc40u: goto label_4bfc40;
        case 0x4bfc44u: goto label_4bfc44;
        case 0x4bfc48u: goto label_4bfc48;
        case 0x4bfc4cu: goto label_4bfc4c;
        case 0x4bfc50u: goto label_4bfc50;
        case 0x4bfc54u: goto label_4bfc54;
        case 0x4bfc58u: goto label_4bfc58;
        case 0x4bfc5cu: goto label_4bfc5c;
        case 0x4bfc60u: goto label_4bfc60;
        case 0x4bfc64u: goto label_4bfc64;
        case 0x4bfc68u: goto label_4bfc68;
        case 0x4bfc6cu: goto label_4bfc6c;
        case 0x4bfc70u: goto label_4bfc70;
        case 0x4bfc74u: goto label_4bfc74;
        case 0x4bfc78u: goto label_4bfc78;
        case 0x4bfc7cu: goto label_4bfc7c;
        case 0x4bfc80u: goto label_4bfc80;
        case 0x4bfc84u: goto label_4bfc84;
        case 0x4bfc88u: goto label_4bfc88;
        case 0x4bfc8cu: goto label_4bfc8c;
        case 0x4bfc90u: goto label_4bfc90;
        case 0x4bfc94u: goto label_4bfc94;
        case 0x4bfc98u: goto label_4bfc98;
        case 0x4bfc9cu: goto label_4bfc9c;
        case 0x4bfca0u: goto label_4bfca0;
        case 0x4bfca4u: goto label_4bfca4;
        case 0x4bfca8u: goto label_4bfca8;
        case 0x4bfcacu: goto label_4bfcac;
        case 0x4bfcb0u: goto label_4bfcb0;
        case 0x4bfcb4u: goto label_4bfcb4;
        case 0x4bfcb8u: goto label_4bfcb8;
        case 0x4bfcbcu: goto label_4bfcbc;
        case 0x4bfcc0u: goto label_4bfcc0;
        case 0x4bfcc4u: goto label_4bfcc4;
        case 0x4bfcc8u: goto label_4bfcc8;
        case 0x4bfcccu: goto label_4bfccc;
        case 0x4bfcd0u: goto label_4bfcd0;
        case 0x4bfcd4u: goto label_4bfcd4;
        case 0x4bfcd8u: goto label_4bfcd8;
        case 0x4bfcdcu: goto label_4bfcdc;
        case 0x4bfce0u: goto label_4bfce0;
        case 0x4bfce4u: goto label_4bfce4;
        case 0x4bfce8u: goto label_4bfce8;
        case 0x4bfcecu: goto label_4bfcec;
        case 0x4bfcf0u: goto label_4bfcf0;
        case 0x4bfcf4u: goto label_4bfcf4;
        case 0x4bfcf8u: goto label_4bfcf8;
        case 0x4bfcfcu: goto label_4bfcfc;
        case 0x4bfd00u: goto label_4bfd00;
        case 0x4bfd04u: goto label_4bfd04;
        case 0x4bfd08u: goto label_4bfd08;
        case 0x4bfd0cu: goto label_4bfd0c;
        case 0x4bfd10u: goto label_4bfd10;
        case 0x4bfd14u: goto label_4bfd14;
        case 0x4bfd18u: goto label_4bfd18;
        case 0x4bfd1cu: goto label_4bfd1c;
        case 0x4bfd20u: goto label_4bfd20;
        case 0x4bfd24u: goto label_4bfd24;
        case 0x4bfd28u: goto label_4bfd28;
        case 0x4bfd2cu: goto label_4bfd2c;
        case 0x4bfd30u: goto label_4bfd30;
        case 0x4bfd34u: goto label_4bfd34;
        case 0x4bfd38u: goto label_4bfd38;
        case 0x4bfd3cu: goto label_4bfd3c;
        case 0x4bfd40u: goto label_4bfd40;
        case 0x4bfd44u: goto label_4bfd44;
        case 0x4bfd48u: goto label_4bfd48;
        case 0x4bfd4cu: goto label_4bfd4c;
        case 0x4bfd50u: goto label_4bfd50;
        case 0x4bfd54u: goto label_4bfd54;
        case 0x4bfd58u: goto label_4bfd58;
        case 0x4bfd5cu: goto label_4bfd5c;
        case 0x4bfd60u: goto label_4bfd60;
        case 0x4bfd64u: goto label_4bfd64;
        case 0x4bfd68u: goto label_4bfd68;
        case 0x4bfd6cu: goto label_4bfd6c;
        case 0x4bfd70u: goto label_4bfd70;
        case 0x4bfd74u: goto label_4bfd74;
        case 0x4bfd78u: goto label_4bfd78;
        case 0x4bfd7cu: goto label_4bfd7c;
        case 0x4bfd80u: goto label_4bfd80;
        case 0x4bfd84u: goto label_4bfd84;
        case 0x4bfd88u: goto label_4bfd88;
        case 0x4bfd8cu: goto label_4bfd8c;
        case 0x4bfd90u: goto label_4bfd90;
        case 0x4bfd94u: goto label_4bfd94;
        case 0x4bfd98u: goto label_4bfd98;
        case 0x4bfd9cu: goto label_4bfd9c;
        case 0x4bfda0u: goto label_4bfda0;
        case 0x4bfda4u: goto label_4bfda4;
        case 0x4bfda8u: goto label_4bfda8;
        case 0x4bfdacu: goto label_4bfdac;
        case 0x4bfdb0u: goto label_4bfdb0;
        case 0x4bfdb4u: goto label_4bfdb4;
        case 0x4bfdb8u: goto label_4bfdb8;
        case 0x4bfdbcu: goto label_4bfdbc;
        case 0x4bfdc0u: goto label_4bfdc0;
        case 0x4bfdc4u: goto label_4bfdc4;
        case 0x4bfdc8u: goto label_4bfdc8;
        case 0x4bfdccu: goto label_4bfdcc;
        case 0x4bfdd0u: goto label_4bfdd0;
        case 0x4bfdd4u: goto label_4bfdd4;
        case 0x4bfdd8u: goto label_4bfdd8;
        case 0x4bfddcu: goto label_4bfddc;
        default: break;
    }

    ctx->pc = 0x4bf940u;

label_4bf940:
    // 0x4bf940: 0x27bdfc70  addiu       $sp, $sp, -0x390
    ctx->pc = 0x4bf940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966384));
label_4bf944:
    // 0x4bf944: 0x7fb00380  sq          $s0, 0x380($sp)
    ctx->pc = 0x4bf944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), GPR_VEC(ctx, 16));
label_4bf948:
    // 0x4bf948: 0x7fb20360  sq          $s2, 0x360($sp)
    ctx->pc = 0x4bf948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 18));
label_4bf94c:
    // 0x4bf94c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4bf94cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4bf950:
    // 0x4bf950: 0x7fb30350  sq          $s3, 0x350($sp)
    ctx->pc = 0x4bf950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 19));
label_4bf954:
    // 0x4bf954: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4bf954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4bf958:
    // 0x4bf958: 0x7fb10370  sq          $s1, 0x370($sp)
    ctx->pc = 0x4bf958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 17));
label_4bf95c:
    // 0x4bf95c: 0xffbf0340  sd          $ra, 0x340($sp)
    ctx->pc = 0x4bf95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 832), GPR_U64(ctx, 31));
label_4bf960:
    // 0x4bf960: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x4bf960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4bf964:
    // 0x4bf964: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x4bf964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4bf968:
    // 0x4bf968: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x4bf968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4bf96c:
    // 0x4bf96c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x4bf96cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4bf970:
    // 0x4bf970: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x4bf970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4bf974:
    // 0x4bf974: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4bf974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_4bf978:
    // 0x4bf978: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x4bf978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4bf97c:
    // 0x4bf97c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x4bf97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bf980:
    // 0x4bf980: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x4bf980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bf984:
    // 0x4bf984: 0x46001101  sub.s       $f4, $f2, $f0
    ctx->pc = 0x4bf984u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_4bf988:
    // 0x4bf988: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x4bf988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4bf98c:
    // 0x4bf98c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x4bf98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bf990:
    // 0x4bf990: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x4bf990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4bf994:
    // 0x4bf994: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x4bf994u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_4bf998:
    // 0x4bf998: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x4bf998u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_4bf99c:
    // 0x4bf99c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x4bf99cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_4bf9a0:
    // 0x4bf9a0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x4bf9a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_4bf9a4:
    // 0x4bf9a4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x4bf9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_4bf9a8:
    // 0x4bf9a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4bf9a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4bf9ac:
    // 0x4bf9ac: 0x46002032  c.eq.s      $f4, $f0
    ctx->pc = 0x4bf9acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bf9b0:
    // 0x4bf9b0: 0x0  nop
    ctx->pc = 0x4bf9b0u;
    // NOP
label_4bf9b4:
    // 0x4bf9b4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_4bf9b8:
    if (ctx->pc == 0x4BF9B8u) {
        ctx->pc = 0x4BF9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF9B4u;
        // 0x4bf9b8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF9BCu;
        goto label_4bf9bc;
    }
    ctx->pc = 0x4BF9B4u;
    {
        const bool branch_taken_0x4bf9b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BF9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF9B4u;
        // 0x4bf9b8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf9b4) {
            ctx->pc = 0x4BF9C8u;
            goto label_4bf9c8;
        }
    }
    ctx->pc = 0x4BF9BCu;
label_4bf9bc:
    // 0x4bf9bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4bf9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_4bf9c0:
    // 0x4bf9c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bf9c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4bf9c4:
    // 0x4bf9c4: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x4bf9c4u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
label_4bf9c8:
    // 0x4bf9c8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x4bf9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bf9cc:
    // 0x4bf9cc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4bf9ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4bf9d0:
    // 0x4bf9d0: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x4bf9d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bf9d4:
    // 0x4bf9d4: 0x0  nop
    ctx->pc = 0x4bf9d4u;
    // NOP
label_4bf9d8:
    // 0x4bf9d8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_4bf9dc:
    if (ctx->pc == 0x4BF9DCu) {
        ctx->pc = 0x4BF9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF9D8u;
        // 0x4bf9dc: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF9E0u;
        goto label_4bf9e0;
    }
    ctx->pc = 0x4BF9D8u;
    {
        const bool branch_taken_0x4bf9d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BF9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF9D8u;
        // 0x4bf9dc: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf9d8) {
            ctx->pc = 0x4BF9F4u;
            goto label_4bf9f4;
        }
    }
    ctx->pc = 0x4BF9E0u;
label_4bf9e0:
    // 0x4bf9e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4bf9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_4bf9e4:
    // 0x4bf9e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bf9e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4bf9e8:
    // 0x4bf9e8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x4bf9e8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_4bf9ec:
    // 0x4bf9ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_4bf9f0:
    if (ctx->pc == 0x4BF9F0u) {
        ctx->pc = 0x4BF9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF9ECu;
        // 0x4bf9f0: 0xc7a10014  lwc1        $f1, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF9F4u;
        goto label_4bf9f4;
    }
    ctx->pc = 0x4BF9ECu;
    {
        const bool branch_taken_0x4bf9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF9ECu;
        // 0x4bf9f0: 0xc7a10014  lwc1        $f1, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf9ec) {
            ctx->pc = 0x4BFA00u;
            goto label_4bfa00;
        }
    }
    ctx->pc = 0x4BF9F4u;
label_4bf9f4:
    // 0x4bf9f4: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x4bf9f4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_4bf9f8:
    // 0x4bf9f8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x4bf9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bf9fc:
    // 0x4bf9fc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4bf9fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4bfa00:
    // 0x4bfa00: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x4bfa00u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bfa04:
    // 0x4bfa04: 0x0  nop
    ctx->pc = 0x4bfa04u;
    // NOP
label_4bfa08:
    // 0x4bfa08: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_4bfa0c:
    if (ctx->pc == 0x4BFA0Cu) {
        ctx->pc = 0x4BFA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFA08u;
        // 0x4bfa0c: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFA10u;
        goto label_4bfa10;
    }
    ctx->pc = 0x4BFA08u;
    {
        const bool branch_taken_0x4bfa08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BFA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFA08u;
        // 0x4bfa0c: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfa08) {
            ctx->pc = 0x4BFA24u;
            goto label_4bfa24;
        }
    }
    ctx->pc = 0x4BFA10u;
label_4bfa10:
    // 0x4bfa10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4bfa10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_4bfa14:
    // 0x4bfa14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bfa14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4bfa18:
    // 0x4bfa18: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x4bfa18u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_4bfa1c:
    // 0x4bfa1c: 0x10000003  b           . + 4 + (0x3 << 2)
label_4bfa20:
    if (ctx->pc == 0x4BFA20u) {
        ctx->pc = 0x4BFA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFA1Cu;
        // 0x4bfa20: 0xc6010000  lwc1        $f1, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFA24u;
        goto label_4bfa24;
    }
    ctx->pc = 0x4BFA1Cu;
    {
        const bool branch_taken_0x4bfa1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BFA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFA1Cu;
        // 0x4bfa20: 0xc6010000  lwc1        $f1, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfa1c) {
            ctx->pc = 0x4BFA2Cu;
            goto label_4bfa2c;
        }
    }
    ctx->pc = 0x4BFA24u;
label_4bfa24:
    // 0x4bfa24: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x4bfa24u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_4bfa28:
    // 0x4bfa28: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x4bfa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bfa2c:
    // 0x4bfa2c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x4bfa2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4bfa30:
    // 0x4bfa30: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x4bfa30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bfa34:
    // 0x4bfa34: 0x0  nop
    ctx->pc = 0x4bfa34u;
    // NOP
label_4bfa38:
    // 0x4bfa38: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4bfa3c:
    if (ctx->pc == 0x4BFA3Cu) {
        ctx->pc = 0x4BFA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFA38u;
        // 0x4bfa3c: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFA40u;
        goto label_4bfa40;
    }
    ctx->pc = 0x4BFA38u;
    {
        const bool branch_taken_0x4bfa38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BFA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFA38u;
        // 0x4bfa3c: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfa38) {
            ctx->pc = 0x4BFA44u;
            goto label_4bfa44;
        }
    }
    ctx->pc = 0x4BFA40u;
label_4bfa40:
    // 0x4bfa40: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x4bfa40u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_4bfa44:
    // 0x4bfa44: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x4bfa44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bfa48:
    // 0x4bfa48: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x4bfa48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bfa4c:
    // 0x4bfa4c: 0x0  nop
    ctx->pc = 0x4bfa4cu;
    // NOP
label_4bfa50:
    // 0x4bfa50: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_4bfa54:
    if (ctx->pc == 0x4BFA54u) {
        ctx->pc = 0x4BFA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFA50u;
        // 0x4bfa54: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFA58u;
        goto label_4bfa58;
    }
    ctx->pc = 0x4BFA50u;
    {
        const bool branch_taken_0x4bfa50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BFA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFA50u;
        // 0x4bfa54: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfa50) {
            ctx->pc = 0x4BFA6Cu;
            goto label_4bfa6c;
        }
    }
    ctx->pc = 0x4BFA58u;
label_4bfa58:
    // 0x4bfa58: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x4bfa58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bfa5c:
    // 0x4bfa5c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_4bfa60:
    if (ctx->pc == 0x4BFA60u) {
        ctx->pc = 0x4BFA64u;
        goto label_4bfa64;
    }
    ctx->pc = 0x4BFA5Cu;
    {
        const bool branch_taken_0x4bfa5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bfa5c) {
            ctx->pc = 0x4BFA7Cu;
            goto label_4bfa7c;
        }
    }
    ctx->pc = 0x4BFA64u;
label_4bfa64:
    // 0x4bfa64: 0x10000008  b           . + 4 + (0x8 << 2)
label_4bfa68:
    if (ctx->pc == 0x4BFA68u) {
        ctx->pc = 0x4BFA6Cu;
        goto label_4bfa6c;
    }
    ctx->pc = 0x4BFA64u;
    {
        const bool branch_taken_0x4bfa64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bfa64) {
            ctx->pc = 0x4BFA88u;
            goto label_4bfa88;
        }
    }
    ctx->pc = 0x4BFA6Cu;
label_4bfa6c:
    // 0x4bfa6c: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x4bfa6cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_4bfa70:
    // 0x4bfa70: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4bfa70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bfa74:
    // 0x4bfa74: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_4bfa78:
    if (ctx->pc == 0x4BFA78u) {
        ctx->pc = 0x4BFA7Cu;
        goto label_4bfa7c;
    }
    ctx->pc = 0x4BFA74u;
    {
        const bool branch_taken_0x4bfa74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bfa74) {
            ctx->pc = 0x4BFA88u;
            goto label_4bfa88;
        }
    }
    ctx->pc = 0x4BFA7Cu;
label_4bfa7c:
    // 0x4bfa7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4bfa7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4bfa80:
    // 0x4bfa80: 0x10000003  b           . + 4 + (0x3 << 2)
label_4bfa84:
    if (ctx->pc == 0x4BFA84u) {
        ctx->pc = 0x4BFA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFA80u;
        // 0x4bfa84: 0xc6010000  lwc1        $f1, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFA88u;
        goto label_4bfa88;
    }
    ctx->pc = 0x4BFA80u;
    {
        const bool branch_taken_0x4bfa80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BFA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFA80u;
        // 0x4bfa84: 0xc6010000  lwc1        $f1, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfa80) {
            ctx->pc = 0x4BFA90u;
            goto label_4bfa90;
        }
    }
    ctx->pc = 0x4BFA88u;
label_4bfa88:
    // 0x4bfa88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4bfa88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4bfa8c:
    // 0x4bfa8c: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x4bfa8cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_4bfa90:
    // 0x4bfa90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4bfa90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bfa94:
    // 0x4bfa94: 0x0  nop
    ctx->pc = 0x4bfa94u;
    // NOP
label_4bfa98:
    // 0x4bfa98: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_4bfa9c:
    if (ctx->pc == 0x4BFA9Cu) {
        ctx->pc = 0x4BFA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFA98u;
        // 0x4bfa9c: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
        ctx->f[1] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFAA0u;
        goto label_4bfaa0;
    }
    ctx->pc = 0x4BFA98u;
    {
        const bool branch_taken_0x4bfa98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bfa98) {
            ctx->pc = 0x4BFA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BFA98u;
            // 0x4bfa9c: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BFAA0u;
            goto label_4bfaa0;
        }
    }
    ctx->pc = 0x4BFAA0u;
label_4bfaa0:
    // 0x4bfaa0: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x4bfaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4bfaa4:
    // 0x4bfaa4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x4bfaa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4bfaa8:
    // 0x4bfaa8: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x4bfaa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bfaac:
    // 0x4bfaac: 0x0  nop
    ctx->pc = 0x4bfaacu;
    // NOP
label_4bfab0:
    // 0x4bfab0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4bfab4:
    if (ctx->pc == 0x4BFAB4u) {
        ctx->pc = 0x4BFAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFAB0u;
        // 0x4bfab4: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFAB8u;
        goto label_4bfab8;
    }
    ctx->pc = 0x4BFAB0u;
    {
        const bool branch_taken_0x4bfab0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BFAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFAB0u;
        // 0x4bfab4: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfab0) {
            ctx->pc = 0x4BFABCu;
            goto label_4bfabc;
        }
    }
    ctx->pc = 0x4BFAB8u;
label_4bfab8:
    // 0x4bfab8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x4bfab8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_4bfabc:
    // 0x4bfabc: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x4bfabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bfac0:
    // 0x4bfac0: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x4bfac0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bfac4:
    // 0x4bfac4: 0x0  nop
    ctx->pc = 0x4bfac4u;
    // NOP
label_4bfac8:
    // 0x4bfac8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_4bfacc:
    if (ctx->pc == 0x4BFACCu) {
        ctx->pc = 0x4BFACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFAC8u;
        // 0x4bfacc: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFAD0u;
        goto label_4bfad0;
    }
    ctx->pc = 0x4BFAC8u;
    {
        const bool branch_taken_0x4bfac8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BFACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFAC8u;
        // 0x4bfacc: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfac8) {
            ctx->pc = 0x4BFAE8u;
            goto label_4bfae8;
        }
    }
    ctx->pc = 0x4BFAD0u;
label_4bfad0:
    // 0x4bfad0: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x4bfad0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bfad4:
    // 0x4bfad4: 0x0  nop
    ctx->pc = 0x4bfad4u;
    // NOP
label_4bfad8:
    // 0x4bfad8: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_4bfadc:
    if (ctx->pc == 0x4BFADCu) {
        ctx->pc = 0x4BFADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFAD8u;
        // 0x4bfadc: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFAE0u;
        goto label_4bfae0;
    }
    ctx->pc = 0x4BFAD8u;
    {
        const bool branch_taken_0x4bfad8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bfad8) {
            ctx->pc = 0x4BFADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BFAD8u;
            // 0x4bfadc: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BFAFCu;
            goto label_4bfafc;
        }
    }
    ctx->pc = 0x4BFAE0u;
label_4bfae0:
    // 0x4bfae0: 0x10000006  b           . + 4 + (0x6 << 2)
label_4bfae4:
    if (ctx->pc == 0x4BFAE4u) {
        ctx->pc = 0x4BFAE8u;
        goto label_4bfae8;
    }
    ctx->pc = 0x4BFAE0u;
    {
        const bool branch_taken_0x4bfae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bfae0) {
            ctx->pc = 0x4BFAFCu;
            goto label_4bfafc;
        }
    }
    ctx->pc = 0x4BFAE8u;
label_4bfae8:
    // 0x4bfae8: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x4bfae8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
label_4bfaec:
    // 0x4bfaec: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x4bfaecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bfaf0:
    // 0x4bfaf0: 0x0  nop
    ctx->pc = 0x4bfaf0u;
    // NOP
label_4bfaf4:
    // 0x4bfaf4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_4bfaf8:
    if (ctx->pc == 0x4BFAF8u) {
        ctx->pc = 0x4BFAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFAF4u;
        // 0x4bfaf8: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFAFCu;
        goto label_4bfafc;
    }
    ctx->pc = 0x4BFAF4u;
    {
        const bool branch_taken_0x4bfaf4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bfaf4) {
            ctx->pc = 0x4BFAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BFAF4u;
            // 0x4bfaf8: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BFAFCu;
            goto label_4bfafc;
        }
    }
    ctx->pc = 0x4BFAFCu;
label_4bfafc:
    // 0x4bfafc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4bfafcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4bfb00:
    // 0x4bfb00: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4bfb00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bfb04:
    // 0x4bfb04: 0x0  nop
    ctx->pc = 0x4bfb04u;
    // NOP
label_4bfb08:
    // 0x4bfb08: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_4bfb0c:
    if (ctx->pc == 0x4BFB0Cu) {
        ctx->pc = 0x4BFB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFB08u;
        // 0x4bfb0c: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
        ctx->f[1] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFB10u;
        goto label_4bfb10;
    }
    ctx->pc = 0x4BFB08u;
    {
        const bool branch_taken_0x4bfb08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bfb08) {
            ctx->pc = 0x4BFB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BFB08u;
            // 0x4bfb0c: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BFB10u;
            goto label_4bfb10;
        }
    }
    ctx->pc = 0x4BFB10u;
label_4bfb10:
    // 0x4bfb10: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x4bfb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4bfb14:
    // 0x4bfb14: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x4bfb14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_4bfb18:
    // 0x4bfb18: 0x46022036  c.le.s      $f4, $f2
    ctx->pc = 0x4bfb18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bfb1c:
    // 0x4bfb1c: 0x0  nop
    ctx->pc = 0x4bfb1cu;
    // NOP
label_4bfb20:
    // 0x4bfb20: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4bfb24:
    if (ctx->pc == 0x4BFB24u) {
        ctx->pc = 0x4BFB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFB20u;
        // 0x4bfb24: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFB28u;
        goto label_4bfb28;
    }
    ctx->pc = 0x4BFB20u;
    {
        const bool branch_taken_0x4bfb20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BFB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFB20u;
        // 0x4bfb24: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfb20) {
            ctx->pc = 0x4BFB2Cu;
            goto label_4bfb2c;
        }
    }
    ctx->pc = 0x4BFB28u;
label_4bfb28:
    // 0x4bfb28: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x4bfb28u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_4bfb2c:
    // 0x4bfb2c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x4bfb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bfb30:
    // 0x4bfb30: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x4bfb30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bfb34:
    // 0x4bfb34: 0x0  nop
    ctx->pc = 0x4bfb34u;
    // NOP
label_4bfb38:
    // 0x4bfb38: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_4bfb3c:
    if (ctx->pc == 0x4BFB3Cu) {
        ctx->pc = 0x4BFB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFB38u;
        // 0x4bfb3c: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFB40u;
        goto label_4bfb40;
    }
    ctx->pc = 0x4BFB38u;
    {
        const bool branch_taken_0x4bfb38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BFB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFB38u;
        // 0x4bfb3c: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfb38) {
            ctx->pc = 0x4BFB58u;
            goto label_4bfb58;
        }
    }
    ctx->pc = 0x4BFB40u;
label_4bfb40:
    // 0x4bfb40: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x4bfb40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bfb44:
    // 0x4bfb44: 0x0  nop
    ctx->pc = 0x4bfb44u;
    // NOP
label_4bfb48:
    // 0x4bfb48: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_4bfb4c:
    if (ctx->pc == 0x4BFB4Cu) {
        ctx->pc = 0x4BFB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFB48u;
        // 0x4bfb4c: 0xc6030008  lwc1        $f3, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFB50u;
        goto label_4bfb50;
    }
    ctx->pc = 0x4BFB48u;
    {
        const bool branch_taken_0x4bfb48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bfb48) {
            ctx->pc = 0x4BFB4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BFB48u;
            // 0x4bfb4c: 0xc6030008  lwc1        $f3, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BFB6Cu;
            goto label_4bfb6c;
        }
    }
    ctx->pc = 0x4BFB50u;
label_4bfb50:
    // 0x4bfb50: 0x10000006  b           . + 4 + (0x6 << 2)
label_4bfb54:
    if (ctx->pc == 0x4BFB54u) {
        ctx->pc = 0x4BFB58u;
        goto label_4bfb58;
    }
    ctx->pc = 0x4BFB50u;
    {
        const bool branch_taken_0x4bfb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bfb50) {
            ctx->pc = 0x4BFB6Cu;
            goto label_4bfb6c;
        }
    }
    ctx->pc = 0x4BFB58u;
label_4bfb58:
    // 0x4bfb58: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x4bfb58u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
label_4bfb5c:
    // 0x4bfb5c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x4bfb5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bfb60:
    // 0x4bfb60: 0x0  nop
    ctx->pc = 0x4bfb60u;
    // NOP
label_4bfb64:
    // 0x4bfb64: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_4bfb68:
    if (ctx->pc == 0x4BFB68u) {
        ctx->pc = 0x4BFB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFB64u;
        // 0x4bfb68: 0xc6030008  lwc1        $f3, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFB6Cu;
        goto label_4bfb6c;
    }
    ctx->pc = 0x4BFB64u;
    {
        const bool branch_taken_0x4bfb64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bfb64) {
            ctx->pc = 0x4BFB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BFB64u;
            // 0x4bfb68: 0xc6030008  lwc1        $f3, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BFB6Cu;
            goto label_4bfb6c;
        }
    }
    ctx->pc = 0x4BFB6Cu;
label_4bfb6c:
    // 0x4bfb6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4bfb6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4bfb70:
    // 0x4bfb70: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x4bfb70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bfb74:
    // 0x4bfb74: 0x0  nop
    ctx->pc = 0x4bfb74u;
    // NOP
label_4bfb78:
    // 0x4bfb78: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_4bfb7c:
    if (ctx->pc == 0x4BFB7Cu) {
        ctx->pc = 0x4BFB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFB78u;
        // 0x4bfb7c: 0x460018c7  neg.s       $f3, $f3 (Delay Slot)
        ctx->f[3] = FPU_NEG_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFB80u;
        goto label_4bfb80;
    }
    ctx->pc = 0x4BFB78u;
    {
        const bool branch_taken_0x4bfb78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bfb78) {
            ctx->pc = 0x4BFB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BFB78u;
            // 0x4bfb7c: 0x460018c7  neg.s       $f3, $f3 (Delay Slot)
            ctx->f[3] = FPU_NEG_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BFB80u;
            goto label_4bfb80;
        }
    }
    ctx->pc = 0x4BFB80u;
label_4bfb80:
    // 0x4bfb80: 0xc78083a0  lwc1        $f0, -0x7C60($gp)
    ctx->pc = 0x4bfb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bfb84:
    // 0x4bfb84: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x4bfb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bfb88:
    // 0x4bfb88: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x4bfb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4bfb8c:
    // 0x4bfb8c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x4bfb8cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_4bfb90:
    // 0x4bfb90: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4bfb90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4bfb94:
    // 0x4bfb94: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x4bfb94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_4bfb98:
    // 0x4bfb98: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x4bfb98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_4bfb9c:
    // 0x4bfb9c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x4bfb9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_4bfba0:
    // 0x4bfba0: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x4bfba0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_4bfba4:
    // 0x4bfba4: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x4bfba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4bfba8:
    // 0x4bfba8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4bfba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_4bfbac:
    // 0x4bfbac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bfbacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4bfbb0:
    // 0x4bfbb0: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x4bfbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_4bfbb4:
    // 0x4bfbb4: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x4bfbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_4bfbb8:
    // 0x4bfbb8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x4bfbb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_4bfbbc:
    // 0x4bfbbc: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x4bfbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_4bfbc0:
    // 0x4bfbc0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x4bfbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4bfbc4:
    // 0x4bfbc4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4bfbc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4bfbc8:
    // 0x4bfbc8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4bfbc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4bfbcc:
    // 0x4bfbcc: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
label_4bfbd0:
    if (ctx->pc == 0x4BFBD0u) {
        ctx->pc = 0x4BFBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFBCCu;
        // 0x4bfbd0: 0xafa3033c  sw          $v1, 0x33C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFBD4u;
        goto label_4bfbd4;
    }
    ctx->pc = 0x4BFBCCu;
    {
        const bool branch_taken_0x4bfbcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BFBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFBCCu;
        // 0x4bfbd0: 0xafa3033c  sw          $v1, 0x33C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfbcc) {
            ctx->pc = 0x4BFDC4u;
            goto label_4bfdc4;
        }
    }
    ctx->pc = 0x4BFBD4u;
label_4bfbd4:
    // 0x4bfbd4: 0x2462fff4  addiu       $v0, $v1, -0xC
    ctx->pc = 0x4bfbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_4bfbd8:
    // 0x4bfbd8: 0xafa2033c  sw          $v0, 0x33C($sp)
    ctx->pc = 0x4bfbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 2));
label_4bfbdc:
    // 0x4bfbdc: 0x8c63fff4  lw          $v1, -0xC($v1)
    ctx->pc = 0x4bfbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
label_4bfbe0:
    // 0x4bfbe0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4bfbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4bfbe4:
    // 0x4bfbe4: 0x440006d  bltz        $v0, . + 4 + (0x6D << 2)
label_4bfbe8:
    if (ctx->pc == 0x4BFBE8u) {
        ctx->pc = 0x4BFBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFBE4u;
        // 0x4bfbe8: 0x8fa2033c  lw          $v0, 0x33C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFBECu;
        goto label_4bfbec;
    }
    ctx->pc = 0x4BFBE4u;
    {
        const bool branch_taken_0x4bfbe4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4BFBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFBE4u;
        // 0x4bfbe8: 0x8fa2033c  lw          $v0, 0x33C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfbe4) {
            ctx->pc = 0x4BFD9Cu;
            goto label_4bfd9c;
        }
    }
    ctx->pc = 0x4BFBECu;
label_4bfbec:
    // 0x4bfbec: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x4bfbecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_4bfbf0:
    // 0x4bfbf0: 0x8fa4033c  lw          $a0, 0x33C($sp)
    ctx->pc = 0x4bfbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_4bfbf4:
    // 0x4bfbf4: 0x0  nop
    ctx->pc = 0x4bfbf4u;
    // NOP
label_4bfbf8:
    // 0x4bfbf8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x4bfbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4bfbfc:
    // 0x4bfbfc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4bfbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4bfc00:
    // 0x4bfc00: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x4bfc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_4bfc04:
    // 0x4bfc04: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x4bfc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4bfc08:
    // 0x4bfc08: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x4bfc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bfc0c:
    // 0x4bfc0c: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x4bfc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4bfc10:
    // 0x4bfc10: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x4bfc10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_4bfc14:
    // 0x4bfc14: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x4bfc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4bfc18:
    // 0x4bfc18: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x4bfc18u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_4bfc1c:
    // 0x4bfc1c: 0xc4430024  lwc1        $f3, 0x24($v0)
    ctx->pc = 0x4bfc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4bfc20:
    // 0x4bfc20: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x4bfc20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bfc24:
    // 0x4bfc24: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x4bfc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bfc28:
    // 0x4bfc28: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x4bfc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bfc2c:
    // 0x4bfc2c: 0x46022880  add.s       $f2, $f5, $f2
    ctx->pc = 0x4bfc2cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_4bfc30:
    // 0x4bfc30: 0x46030981  sub.s       $f6, $f1, $f3
    ctx->pc = 0x4bfc30u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_4bfc34:
    // 0x4bfc34: 0x460300c0  add.s       $f3, $f0, $f3
    ctx->pc = 0x4bfc34u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_4bfc38:
    // 0x4bfc38: 0x45000026  bc1f        . + 4 + (0x26 << 2)
label_4bfc3c:
    if (ctx->pc == 0x4BFC3Cu) {
        ctx->pc = 0x4BFC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFC38u;
        // 0x4bfc3c: 0x46042940  add.s       $f5, $f5, $f4 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFC40u;
        goto label_4bfc40;
    }
    ctx->pc = 0x4BFC38u;
    {
        const bool branch_taken_0x4bfc38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BFC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFC38u;
        // 0x4bfc3c: 0x46042940  add.s       $f5, $f5, $f4 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfc38) {
            ctx->pc = 0x4BFCD4u;
            goto label_4bfcd4;
        }
    }
    ctx->pc = 0x4BFC40u;
label_4bfc40:
    // 0x4bfc40: 0x46061034  c.lt.s      $f2, $f6
    ctx->pc = 0x4bfc40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bfc44:
    // 0x4bfc44: 0x0  nop
    ctx->pc = 0x4bfc44u;
    // NOP
label_4bfc48:
    // 0x4bfc48: 0x4503002d  bc1tl       . + 4 + (0x2D << 2)
label_4bfc4c:
    if (ctx->pc == 0x4BFC4Cu) {
        ctx->pc = 0x4BFC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFC48u;
        // 0x4bfc4c: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFC50u;
        goto label_4bfc50;
    }
    ctx->pc = 0x4BFC48u;
    {
        const bool branch_taken_0x4bfc48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bfc48) {
            ctx->pc = 0x4BFC4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BFC48u;
            // 0x4bfc4c: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BFD00u;
            goto label_4bfd00;
        }
    }
    ctx->pc = 0x4BFC50u;
label_4bfc50:
    // 0x4bfc50: 0x46051834  c.lt.s      $f3, $f5
    ctx->pc = 0x4bfc50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bfc54:
    // 0x4bfc54: 0x0  nop
    ctx->pc = 0x4bfc54u;
    // NOP
label_4bfc58:
    // 0x4bfc58: 0x45030022  bc1tl       . + 4 + (0x22 << 2)
label_4bfc5c:
    if (ctx->pc == 0x4BFC5Cu) {
        ctx->pc = 0x4BFC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFC58u;
        // 0x4bfc5c: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFC60u;
        goto label_4bfc60;
    }
    ctx->pc = 0x4BFC58u;
    {
        const bool branch_taken_0x4bfc58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bfc58) {
            ctx->pc = 0x4BFC5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BFC58u;
            // 0x4bfc5c: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BFCE4u;
            goto label_4bfce4;
        }
    }
    ctx->pc = 0x4BFC60u;
label_4bfc60:
    // 0x4bfc60: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x4bfc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_4bfc64:
    // 0x4bfc64: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x4bfc64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bfc68:
    // 0x4bfc68: 0xafa3033c  sw          $v1, 0x33C($sp)
    ctx->pc = 0x4bfc68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 3));
label_4bfc6c:
    // 0x4bfc6c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4bfc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4bfc70:
    // 0x4bfc70: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4bfc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4bfc74:
    // 0x4bfc74: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x4bfc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_4bfc78:
    // 0x4bfc78: 0xc4440018  lwc1        $f4, 0x18($v0)
    ctx->pc = 0x4bfc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4bfc7c:
    // 0x4bfc7c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x4bfc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_4bfc80:
    // 0x4bfc80: 0x8fa2033c  lw          $v0, 0x33C($sp)
    ctx->pc = 0x4bfc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_4bfc84:
    // 0x4bfc84: 0xc440fff8  lwc1        $f0, -0x8($v0)
    ctx->pc = 0x4bfc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bfc88:
    // 0x4bfc88: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x4bfc88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_4bfc8c:
    // 0x4bfc8c: 0x8fa3033c  lw          $v1, 0x33C($sp)
    ctx->pc = 0x4bfc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_4bfc90:
    // 0x4bfc90: 0xc460fffc  lwc1        $f0, -0x4($v1)
    ctx->pc = 0x4bfc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bfc94:
    // 0x4bfc94: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_4bfc98:
    if (ctx->pc == 0x4BFC98u) {
        ctx->pc = 0x4BFC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFC94u;
        // 0x4bfc98: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFC9Cu;
        goto label_4bfc9c;
    }
    ctx->pc = 0x4BFC94u;
    {
        const bool branch_taken_0x4bfc94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BFC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFC94u;
        // 0x4bfc98: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfc94) {
            ctx->pc = 0x4BFCB8u;
            goto label_4bfcb8;
        }
    }
    ctx->pc = 0x4BFC9Cu;
label_4bfc9c:
    // 0x4bfc9c: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x4bfc9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_4bfca0:
    // 0x4bfca0: 0x8fa2033c  lw          $v0, 0x33C($sp)
    ctx->pc = 0x4bfca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_4bfca4:
    // 0x4bfca4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x4bfca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bfca8:
    // 0x4bfca8: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x4bfca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_4bfcac:
    // 0x4bfcac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4bfcacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4bfcb0:
    // 0x4bfcb0: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x4bfcb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_4bfcb4:
    // 0x4bfcb4: 0x0  nop
    ctx->pc = 0x4bfcb4u;
    // NOP
label_4bfcb8:
    // 0x4bfcb8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x4bfcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_4bfcbc:
    // 0x4bfcbc: 0x46062834  c.lt.s      $f5, $f6
    ctx->pc = 0x4bfcbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bfcc0:
    // 0x4bfcc0: 0x8fa2033c  lw          $v0, 0x33C($sp)
    ctx->pc = 0x4bfcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_4bfcc4:
    // 0x4bfcc4: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
label_4bfcc8:
    if (ctx->pc == 0x4BFCC8u) {
        ctx->pc = 0x4BFCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFCC4u;
        // 0x4bfcc8: 0xac43fff4  sw          $v1, -0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFCCCu;
        goto label_4bfccc;
    }
    ctx->pc = 0x4BFCC4u;
    {
        const bool branch_taken_0x4bfcc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BFCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFCC4u;
        // 0x4bfcc8: 0xac43fff4  sw          $v1, -0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfcc4) {
            ctx->pc = 0x4BFD84u;
            goto label_4bfd84;
        }
    }
    ctx->pc = 0x4BFCCCu;
label_4bfccc:
    // 0x4bfccc: 0x10000028  b           . + 4 + (0x28 << 2)
label_4bfcd0:
    if (ctx->pc == 0x4BFCD0u) {
        ctx->pc = 0x4BFCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFCCCu;
        // 0x4bfcd0: 0x46053001  sub.s       $f0, $f6, $f5 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFCD4u;
        goto label_4bfcd4;
    }
    ctx->pc = 0x4BFCCCu;
    {
        const bool branch_taken_0x4bfccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BFCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFCCCu;
        // 0x4bfcd0: 0x46053001  sub.s       $f0, $f6, $f5 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfccc) {
            ctx->pc = 0x4BFD70u;
            goto label_4bfd70;
        }
    }
    ctx->pc = 0x4BFCD4u;
label_4bfcd4:
    // 0x4bfcd4: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x4bfcd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bfcd8:
    // 0x4bfcd8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_4bfcdc:
    if (ctx->pc == 0x4BFCDCu) {
        ctx->pc = 0x4BFCE0u;
        goto label_4bfce0;
    }
    ctx->pc = 0x4BFCD8u;
    {
        const bool branch_taken_0x4bfcd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bfcd8) {
            ctx->pc = 0x4BFCECu;
            goto label_4bfcec;
        }
    }
    ctx->pc = 0x4BFCE0u;
label_4bfce0:
    // 0x4bfce0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x4bfce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_4bfce4:
    // 0x4bfce4: 0x10000027  b           . + 4 + (0x27 << 2)
label_4bfce8:
    if (ctx->pc == 0x4BFCE8u) {
        ctx->pc = 0x4BFCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFCE4u;
        // 0x4bfce8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFCECu;
        goto label_4bfcec;
    }
    ctx->pc = 0x4BFCE4u;
    {
        const bool branch_taken_0x4bfce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BFCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFCE4u;
        // 0x4bfce8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfce4) {
            ctx->pc = 0x4BFD84u;
            goto label_4bfd84;
        }
    }
    ctx->pc = 0x4BFCECu;
label_4bfcec:
    // 0x4bfcec: 0x46062834  c.lt.s      $f5, $f6
    ctx->pc = 0x4bfcecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bfcf0:
    // 0x4bfcf0: 0x0  nop
    ctx->pc = 0x4bfcf0u;
    // NOP
label_4bfcf4:
    // 0x4bfcf4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_4bfcf8:
    if (ctx->pc == 0x4BFCF8u) {
        ctx->pc = 0x4BFCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFCF4u;
        // 0x4bfcf8: 0x2483000c  addiu       $v1, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFCFCu;
        goto label_4bfcfc;
    }
    ctx->pc = 0x4BFCF4u;
    {
        const bool branch_taken_0x4bfcf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BFCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFCF4u;
        // 0x4bfcf8: 0x2483000c  addiu       $v1, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfcf4) {
            ctx->pc = 0x4BFD08u;
            goto label_4bfd08;
        }
    }
    ctx->pc = 0x4BFCFCu;
label_4bfcfc:
    // 0x4bfcfc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4bfcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4bfd00:
    // 0x4bfd00: 0x10000020  b           . + 4 + (0x20 << 2)
label_4bfd04:
    if (ctx->pc == 0x4BFD04u) {
        ctx->pc = 0x4BFD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFD00u;
        // 0x4bfd04: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFD08u;
        goto label_4bfd08;
    }
    ctx->pc = 0x4BFD00u;
    {
        const bool branch_taken_0x4bfd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BFD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFD00u;
        // 0x4bfd04: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfd00) {
            ctx->pc = 0x4BFD84u;
            goto label_4bfd84;
        }
    }
    ctx->pc = 0x4BFD08u;
label_4bfd08:
    // 0x4bfd08: 0x46061034  c.lt.s      $f2, $f6
    ctx->pc = 0x4bfd08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bfd0c:
    // 0x4bfd0c: 0xafa3033c  sw          $v1, 0x33C($sp)
    ctx->pc = 0x4bfd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 3));
label_4bfd10:
    // 0x4bfd10: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4bfd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4bfd14:
    // 0x4bfd14: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x4bfd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_4bfd18:
    // 0x4bfd18: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x4bfd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_4bfd1c:
    // 0x4bfd1c: 0xc4440018  lwc1        $f4, 0x18($v0)
    ctx->pc = 0x4bfd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4bfd20:
    // 0x4bfd20: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x4bfd20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_4bfd24:
    // 0x4bfd24: 0x8fa2033c  lw          $v0, 0x33C($sp)
    ctx->pc = 0x4bfd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_4bfd28:
    // 0x4bfd28: 0xc440fff8  lwc1        $f0, -0x8($v0)
    ctx->pc = 0x4bfd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bfd2c:
    // 0x4bfd2c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x4bfd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_4bfd30:
    // 0x4bfd30: 0x8fa3033c  lw          $v1, 0x33C($sp)
    ctx->pc = 0x4bfd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_4bfd34:
    // 0x4bfd34: 0xc460fffc  lwc1        $f0, -0x4($v1)
    ctx->pc = 0x4bfd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bfd38:
    // 0x4bfd38: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_4bfd3c:
    if (ctx->pc == 0x4BFD3Cu) {
        ctx->pc = 0x4BFD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFD38u;
        // 0x4bfd3c: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFD40u;
        goto label_4bfd40;
    }
    ctx->pc = 0x4BFD38u;
    {
        const bool branch_taken_0x4bfd38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BFD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFD38u;
        // 0x4bfd3c: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfd38) {
            ctx->pc = 0x4BFD58u;
            goto label_4bfd58;
        }
    }
    ctx->pc = 0x4BFD40u;
label_4bfd40:
    // 0x4bfd40: 0x46023001  sub.s       $f0, $f6, $f2
    ctx->pc = 0x4bfd40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
label_4bfd44:
    // 0x4bfd44: 0x8fa2033c  lw          $v0, 0x33C($sp)
    ctx->pc = 0x4bfd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_4bfd48:
    // 0x4bfd48: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x4bfd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bfd4c:
    // 0x4bfd4c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x4bfd4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_4bfd50:
    // 0x4bfd50: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4bfd50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4bfd54:
    // 0x4bfd54: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x4bfd54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_4bfd58:
    // 0x4bfd58: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4bfd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4bfd5c:
    // 0x4bfd5c: 0x46051834  c.lt.s      $f3, $f5
    ctx->pc = 0x4bfd5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bfd60:
    // 0x4bfd60: 0x8fa2033c  lw          $v0, 0x33C($sp)
    ctx->pc = 0x4bfd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_4bfd64:
    // 0x4bfd64: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_4bfd68:
    if (ctx->pc == 0x4BFD68u) {
        ctx->pc = 0x4BFD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFD64u;
        // 0x4bfd68: 0xac43fff4  sw          $v1, -0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFD6Cu;
        goto label_4bfd6c;
    }
    ctx->pc = 0x4BFD64u;
    {
        const bool branch_taken_0x4bfd64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BFD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFD64u;
        // 0x4bfd68: 0xac43fff4  sw          $v1, -0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfd64) {
            ctx->pc = 0x4BFD84u;
            goto label_4bfd84;
        }
    }
    ctx->pc = 0x4BFD6Cu;
label_4bfd6c:
    // 0x4bfd6c: 0x46051801  sub.s       $f0, $f3, $f5
    ctx->pc = 0x4bfd6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
label_4bfd70:
    // 0x4bfd70: 0x8fa2033c  lw          $v0, 0x33C($sp)
    ctx->pc = 0x4bfd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_4bfd74:
    // 0x4bfd74: 0xc441fff8  lwc1        $f1, -0x8($v0)
    ctx->pc = 0x4bfd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bfd78:
    // 0x4bfd78: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x4bfd78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_4bfd7c:
    // 0x4bfd7c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4bfd7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4bfd80:
    // 0x4bfd80: 0xe441fff8  swc1        $f1, -0x8($v0)
    ctx->pc = 0x4bfd80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
label_4bfd84:
    // 0x4bfd84: 0x8fa2033c  lw          $v0, 0x33C($sp)
    ctx->pc = 0x4bfd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_4bfd88:
    // 0x4bfd88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4bfd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4bfd8c:
    // 0x4bfd8c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4bfd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4bfd90:
    // 0x4bfd90: 0x481ff99  bgez        $a0, . + 4 + (-0x67 << 2)
label_4bfd94:
    if (ctx->pc == 0x4BFD94u) {
        ctx->pc = 0x4BFD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFD90u;
        // 0x4bfd94: 0x8fa4033c  lw          $a0, 0x33C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFD98u;
        goto label_4bfd98;
    }
    ctx->pc = 0x4BFD90u;
    {
        const bool branch_taken_0x4bfd90 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4BFD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFD90u;
        // 0x4bfd94: 0x8fa4033c  lw          $a0, 0x33C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfd90) {
            ctx->pc = 0x4BFBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bfbf8;
        }
    }
    ctx->pc = 0x4BFD98u;
label_4bfd98:
    // 0x4bfd98: 0x8fa2033c  lw          $v0, 0x33C($sp)
    ctx->pc = 0x4bfd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_4bfd9c:
    // 0x4bfd9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bfd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bfda0:
    // 0x4bfda0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4bfda0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4bfda4:
    // 0x4bfda4: 0x240f809  jalr        $s2
label_4bfda8:
    if (ctx->pc == 0x4BFDA8u) {
        ctx->pc = 0x4BFDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFDA4u;
        // 0x4bfda8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFDACu;
        goto label_4bfdac;
    }
    ctx->pc = 0x4BFDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x4BFDACu);
        ctx->pc = 0x4BFDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFDA4u;
        // 0x4bfda8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BFDA4u, 0x4BFDACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4BFDACu;
label_4bfdac:
    // 0x4bfdac: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_4bfdb0:
    if (ctx->pc == 0x4BFDB0u) {
        ctx->pc = 0x4BFDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFDACu;
        // 0x4bfdb0: 0x7bb00380  lq          $s0, 0x380($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 896)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFDB4u;
        goto label_4bfdb4;
    }
    ctx->pc = 0x4BFDACu;
    {
        const bool branch_taken_0x4bfdac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bfdac) {
            ctx->pc = 0x4BFDB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BFDACu;
            // 0x4bfdb0: 0x7bb00380  lq          $s0, 0x380($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 896)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BFDC8u;
            goto label_4bfdc8;
        }
    }
    ctx->pc = 0x4BFDB4u;
label_4bfdb4:
    // 0x4bfdb4: 0x8fa3033c  lw          $v1, 0x33C($sp)
    ctx->pc = 0x4bfdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_4bfdb8:
    // 0x4bfdb8: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x4bfdb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4bfdbc:
    // 0x4bfdbc: 0x1440ff86  bnez        $v0, . + 4 + (-0x7A << 2)
label_4bfdc0:
    if (ctx->pc == 0x4BFDC0u) {
        ctx->pc = 0x4BFDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFDBCu;
        // 0x4bfdc0: 0x2462fff4  addiu       $v0, $v1, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFDC4u;
        goto label_4bfdc4;
    }
    ctx->pc = 0x4BFDBCu;
    {
        const bool branch_taken_0x4bfdbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BFDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFDBCu;
        // 0x4bfdc0: 0x2462fff4  addiu       $v0, $v1, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfdbc) {
            ctx->pc = 0x4BFBD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bfbd8;
        }
    }
    ctx->pc = 0x4BFDC4u;
label_4bfdc4:
    // 0x4bfdc4: 0x7bb00380  lq          $s0, 0x380($sp)
    ctx->pc = 0x4bfdc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 896)));
label_4bfdc8:
    // 0x4bfdc8: 0x7bb10370  lq          $s1, 0x370($sp)
    ctx->pc = 0x4bfdc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 880)));
label_4bfdcc:
    // 0x4bfdcc: 0x7bb20360  lq          $s2, 0x360($sp)
    ctx->pc = 0x4bfdccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 864)));
label_4bfdd0:
    // 0x4bfdd0: 0x7bb30350  lq          $s3, 0x350($sp)
    ctx->pc = 0x4bfdd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 848)));
label_4bfdd4:
    // 0x4bfdd4: 0xdfbf0340  ld          $ra, 0x340($sp)
    ctx->pc = 0x4bfdd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 832)));
label_4bfdd8:
    // 0x4bfdd8: 0x3e00008  jr          $ra
label_4bfddc:
    if (ctx->pc == 0x4BFDDCu) {
        ctx->pc = 0x4BFDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFDD8u;
        // 0x4bfddc: 0x27bd0390  addiu       $sp, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFDE0u;
        goto label_fallthrough_0x4bfdd8;
    }
    ctx->pc = 0x4BFDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BFDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFDD8u;
        // 0x4bfddc: 0x27bd0390  addiu       $sp, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BFDD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4bfdd8:
    ctx->pc = 0x4BFDE0u;
}
