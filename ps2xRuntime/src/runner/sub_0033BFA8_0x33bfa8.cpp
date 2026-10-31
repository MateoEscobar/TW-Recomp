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

// Function: sub_0033BFA8
// Address: 0x33bfa8 - 0x33c268
void sub_0033BFA8_0x33bfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BFA8_0x33bfa8");
#endif

    switch (ctx->pc) {
        case 0x33bfa8u: goto label_33bfa8;
        case 0x33bfacu: goto label_33bfac;
        case 0x33bfb0u: goto label_33bfb0;
        case 0x33bfb4u: goto label_33bfb4;
        case 0x33bfb8u: goto label_33bfb8;
        case 0x33bfbcu: goto label_33bfbc;
        case 0x33bfc0u: goto label_33bfc0;
        case 0x33bfc4u: goto label_33bfc4;
        case 0x33bfc8u: goto label_33bfc8;
        case 0x33bfccu: goto label_33bfcc;
        case 0x33bfd0u: goto label_33bfd0;
        case 0x33bfd4u: goto label_33bfd4;
        case 0x33bfd8u: goto label_33bfd8;
        case 0x33bfdcu: goto label_33bfdc;
        case 0x33bfe0u: goto label_33bfe0;
        case 0x33bfe4u: goto label_33bfe4;
        case 0x33bfe8u: goto label_33bfe8;
        case 0x33bfecu: goto label_33bfec;
        case 0x33bff0u: goto label_33bff0;
        case 0x33bff4u: goto label_33bff4;
        case 0x33bff8u: goto label_33bff8;
        case 0x33bffcu: goto label_33bffc;
        case 0x33c000u: goto label_33c000;
        case 0x33c004u: goto label_33c004;
        case 0x33c008u: goto label_33c008;
        case 0x33c00cu: goto label_33c00c;
        case 0x33c010u: goto label_33c010;
        case 0x33c014u: goto label_33c014;
        case 0x33c018u: goto label_33c018;
        case 0x33c01cu: goto label_33c01c;
        case 0x33c020u: goto label_33c020;
        case 0x33c024u: goto label_33c024;
        case 0x33c028u: goto label_33c028;
        case 0x33c02cu: goto label_33c02c;
        case 0x33c030u: goto label_33c030;
        case 0x33c034u: goto label_33c034;
        case 0x33c038u: goto label_33c038;
        case 0x33c03cu: goto label_33c03c;
        case 0x33c040u: goto label_33c040;
        case 0x33c044u: goto label_33c044;
        case 0x33c048u: goto label_33c048;
        case 0x33c04cu: goto label_33c04c;
        case 0x33c050u: goto label_33c050;
        case 0x33c054u: goto label_33c054;
        case 0x33c058u: goto label_33c058;
        case 0x33c05cu: goto label_33c05c;
        case 0x33c060u: goto label_33c060;
        case 0x33c064u: goto label_33c064;
        case 0x33c068u: goto label_33c068;
        case 0x33c06cu: goto label_33c06c;
        case 0x33c070u: goto label_33c070;
        case 0x33c074u: goto label_33c074;
        case 0x33c078u: goto label_33c078;
        case 0x33c07cu: goto label_33c07c;
        case 0x33c080u: goto label_33c080;
        case 0x33c084u: goto label_33c084;
        case 0x33c088u: goto label_33c088;
        case 0x33c08cu: goto label_33c08c;
        case 0x33c090u: goto label_33c090;
        case 0x33c094u: goto label_33c094;
        case 0x33c098u: goto label_33c098;
        case 0x33c09cu: goto label_33c09c;
        case 0x33c0a0u: goto label_33c0a0;
        case 0x33c0a4u: goto label_33c0a4;
        case 0x33c0a8u: goto label_33c0a8;
        case 0x33c0acu: goto label_33c0ac;
        case 0x33c0b0u: goto label_33c0b0;
        case 0x33c0b4u: goto label_33c0b4;
        case 0x33c0b8u: goto label_33c0b8;
        case 0x33c0bcu: goto label_33c0bc;
        case 0x33c0c0u: goto label_33c0c0;
        case 0x33c0c4u: goto label_33c0c4;
        case 0x33c0c8u: goto label_33c0c8;
        case 0x33c0ccu: goto label_33c0cc;
        case 0x33c0d0u: goto label_33c0d0;
        case 0x33c0d4u: goto label_33c0d4;
        case 0x33c0d8u: goto label_33c0d8;
        case 0x33c0dcu: goto label_33c0dc;
        case 0x33c0e0u: goto label_33c0e0;
        case 0x33c0e4u: goto label_33c0e4;
        case 0x33c0e8u: goto label_33c0e8;
        case 0x33c0ecu: goto label_33c0ec;
        case 0x33c0f0u: goto label_33c0f0;
        case 0x33c0f4u: goto label_33c0f4;
        case 0x33c0f8u: goto label_33c0f8;
        case 0x33c0fcu: goto label_33c0fc;
        case 0x33c100u: goto label_33c100;
        case 0x33c104u: goto label_33c104;
        case 0x33c108u: goto label_33c108;
        case 0x33c10cu: goto label_33c10c;
        case 0x33c110u: goto label_33c110;
        case 0x33c114u: goto label_33c114;
        case 0x33c118u: goto label_33c118;
        case 0x33c11cu: goto label_33c11c;
        case 0x33c120u: goto label_33c120;
        case 0x33c124u: goto label_33c124;
        case 0x33c128u: goto label_33c128;
        case 0x33c12cu: goto label_33c12c;
        case 0x33c130u: goto label_33c130;
        case 0x33c134u: goto label_33c134;
        case 0x33c138u: goto label_33c138;
        case 0x33c13cu: goto label_33c13c;
        case 0x33c140u: goto label_33c140;
        case 0x33c144u: goto label_33c144;
        case 0x33c148u: goto label_33c148;
        case 0x33c14cu: goto label_33c14c;
        case 0x33c150u: goto label_33c150;
        case 0x33c154u: goto label_33c154;
        case 0x33c158u: goto label_33c158;
        case 0x33c15cu: goto label_33c15c;
        case 0x33c160u: goto label_33c160;
        case 0x33c164u: goto label_33c164;
        case 0x33c168u: goto label_33c168;
        case 0x33c16cu: goto label_33c16c;
        case 0x33c170u: goto label_33c170;
        case 0x33c174u: goto label_33c174;
        case 0x33c178u: goto label_33c178;
        case 0x33c17cu: goto label_33c17c;
        case 0x33c180u: goto label_33c180;
        case 0x33c184u: goto label_33c184;
        case 0x33c188u: goto label_33c188;
        case 0x33c18cu: goto label_33c18c;
        case 0x33c190u: goto label_33c190;
        case 0x33c194u: goto label_33c194;
        case 0x33c198u: goto label_33c198;
        case 0x33c19cu: goto label_33c19c;
        case 0x33c1a0u: goto label_33c1a0;
        case 0x33c1a4u: goto label_33c1a4;
        case 0x33c1a8u: goto label_33c1a8;
        case 0x33c1acu: goto label_33c1ac;
        case 0x33c1b0u: goto label_33c1b0;
        case 0x33c1b4u: goto label_33c1b4;
        case 0x33c1b8u: goto label_33c1b8;
        case 0x33c1bcu: goto label_33c1bc;
        case 0x33c1c0u: goto label_33c1c0;
        case 0x33c1c4u: goto label_33c1c4;
        case 0x33c1c8u: goto label_33c1c8;
        case 0x33c1ccu: goto label_33c1cc;
        case 0x33c1d0u: goto label_33c1d0;
        case 0x33c1d4u: goto label_33c1d4;
        case 0x33c1d8u: goto label_33c1d8;
        case 0x33c1dcu: goto label_33c1dc;
        case 0x33c1e0u: goto label_33c1e0;
        case 0x33c1e4u: goto label_33c1e4;
        case 0x33c1e8u: goto label_33c1e8;
        case 0x33c1ecu: goto label_33c1ec;
        case 0x33c1f0u: goto label_33c1f0;
        case 0x33c1f4u: goto label_33c1f4;
        case 0x33c1f8u: goto label_33c1f8;
        case 0x33c1fcu: goto label_33c1fc;
        case 0x33c200u: goto label_33c200;
        case 0x33c204u: goto label_33c204;
        case 0x33c208u: goto label_33c208;
        case 0x33c20cu: goto label_33c20c;
        case 0x33c210u: goto label_33c210;
        case 0x33c214u: goto label_33c214;
        case 0x33c218u: goto label_33c218;
        case 0x33c21cu: goto label_33c21c;
        case 0x33c220u: goto label_33c220;
        case 0x33c224u: goto label_33c224;
        case 0x33c228u: goto label_33c228;
        case 0x33c22cu: goto label_33c22c;
        case 0x33c230u: goto label_33c230;
        case 0x33c234u: goto label_33c234;
        case 0x33c238u: goto label_33c238;
        case 0x33c23cu: goto label_33c23c;
        case 0x33c240u: goto label_33c240;
        case 0x33c244u: goto label_33c244;
        case 0x33c248u: goto label_33c248;
        case 0x33c24cu: goto label_33c24c;
        case 0x33c250u: goto label_33c250;
        case 0x33c254u: goto label_33c254;
        case 0x33c258u: goto label_33c258;
        case 0x33c25cu: goto label_33c25c;
        case 0x33c260u: goto label_33c260;
        case 0x33c264u: goto label_33c264;
        default: break;
    }

    ctx->pc = 0x33bfa8u;

label_33bfa8:
    // 0x33bfa8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x33bfa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_33bfac:
    // 0x33bfac: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x33bfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_33bfb0:
    // 0x33bfb0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x33bfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_33bfb4:
    // 0x33bfb4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x33bfb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33bfb8:
    // 0x33bfb8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x33bfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_33bfbc:
    // 0x33bfbc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x33bfbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33bfc0:
    // 0x33bfc0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x33bfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_33bfc4:
    // 0x33bfc4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x33bfc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33bfc8:
    // 0x33bfc8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x33bfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_33bfcc:
    // 0x33bfcc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x33bfccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_33bfd0:
    // 0x33bfd0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x33bfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_33bfd4:
    // 0x33bfd4: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
label_33bfd8:
    if (ctx->pc == 0x33BFD8u) {
        ctx->pc = 0x33BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BFD4u;
        // 0x33bfd8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BFDCu;
        goto label_33bfdc;
    }
    ctx->pc = 0x33BFD4u;
    {
        const bool branch_taken_0x33bfd4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x33BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BFD4u;
        // 0x33bfd8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bfd4) {
            ctx->pc = 0x33BFF8u;
            goto label_33bff8;
        }
    }
    ctx->pc = 0x33BFDCu;
label_33bfdc:
    // 0x33bfdc: 0xc0ced94  jal         func_33B650
label_33bfe0:
    if (ctx->pc == 0x33BFE0u) {
        ctx->pc = 0x33BFE4u;
        goto label_33bfe4;
    }
    ctx->pc = 0x33BFDCu;
    SET_GPR_U32(ctx, 31, 0x33BFE4u);
    ctx->pc = 0x33B650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B650u, 0x33BFDCu, 0x33BFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BFE4u;
label_33bfe4:
    // 0x33bfe4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x33bfe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33bfe8:
    // 0x33bfe8: 0xc0cee74  jal         func_33B9D0
label_33bfec:
    if (ctx->pc == 0x33BFECu) {
        ctx->pc = 0x33BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BFE8u;
        // 0x33bfec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BFF0u;
        goto label_33bff0;
    }
    ctx->pc = 0x33BFE8u;
    SET_GPR_U32(ctx, 31, 0x33BFF0u);
    ctx->pc = 0x33BFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BFE8u;
    // 0x33bfec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B9D0u, 0x33BFE8u, 0x33BFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BFF0u;
label_33bff0:
    // 0x33bff0: 0x1000008f  b           . + 4 + (0x8F << 2)
label_33bff4:
    if (ctx->pc == 0x33BFF4u) {
        ctx->pc = 0x33BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BFF0u;
        // 0x33bff4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BFF8u;
        goto label_33bff8;
    }
    ctx->pc = 0x33BFF0u;
    {
        const bool branch_taken_0x33bff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BFF0u;
        // 0x33bff4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bff0) {
            ctx->pc = 0x33C230u;
            goto label_33c230;
        }
    }
    ctx->pc = 0x33BFF8u;
label_33bff8:
    // 0x33bff8: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
label_33bffc:
    if (ctx->pc == 0x33BFFCu) {
        ctx->pc = 0x33BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BFF8u;
        // 0x33bffc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C000u;
        goto label_33c000;
    }
    ctx->pc = 0x33BFF8u;
    {
        const bool branch_taken_0x33bff8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x33BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BFF8u;
        // 0x33bffc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bff8) {
            ctx->pc = 0x33C010u;
            goto label_33c010;
        }
    }
    ctx->pc = 0x33C000u;
label_33c000:
    // 0x33c000: 0xc0cee74  jal         func_33B9D0
label_33c004:
    if (ctx->pc == 0x33C004u) {
        ctx->pc = 0x33C004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C000u;
        // 0x33c004: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C008u;
        goto label_33c008;
    }
    ctx->pc = 0x33C000u;
    SET_GPR_U32(ctx, 31, 0x33C008u);
    ctx->pc = 0x33C004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C000u;
    // 0x33c004: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B9D0u, 0x33C000u, 0x33C008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C008u;
label_33c008:
    // 0x33c008: 0x10000089  b           . + 4 + (0x89 << 2)
label_33c00c:
    if (ctx->pc == 0x33C00Cu) {
        ctx->pc = 0x33C00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C008u;
        // 0x33c00c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C010u;
        goto label_33c010;
    }
    ctx->pc = 0x33C008u;
    {
        const bool branch_taken_0x33c008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C008u;
        // 0x33c00c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c008) {
            ctx->pc = 0x33C230u;
            goto label_33c230;
        }
    }
    ctx->pc = 0x33C010u;
label_33c010:
    // 0x33c010: 0x16800008  bnez        $s4, . + 4 + (0x8 << 2)
label_33c014:
    if (ctx->pc == 0x33C014u) {
        ctx->pc = 0x33C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C010u;
        // 0x33c014: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C018u;
        goto label_33c018;
    }
    ctx->pc = 0x33C010u;
    {
        const bool branch_taken_0x33c010 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x33C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C010u;
        // 0x33c014: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c010) {
            ctx->pc = 0x33C034u;
            goto label_33c034;
        }
    }
    ctx->pc = 0x33C018u;
label_33c018:
    // 0x33c018: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x33c018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_33c01c:
    // 0x33c01c: 0x8c5127f4  lw          $s1, 0x27F4($v0)
    ctx->pc = 0x33c01cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10228)));
label_33c020:
    // 0x33c020: 0x56200005  bnel        $s1, $zero, . + 4 + (0x5 << 2)
label_33c024:
    if (ctx->pc == 0x33C024u) {
        ctx->pc = 0x33C024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C020u;
        // 0x33c024: 0x8e220028  lw          $v0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C028u;
        goto label_33c028;
    }
    ctx->pc = 0x33C020u;
    {
        const bool branch_taken_0x33c020 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x33c020) {
            ctx->pc = 0x33C024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33C020u;
            // 0x33c024: 0x8e220028  lw          $v0, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C038u;
            goto label_33c038;
        }
    }
    ctx->pc = 0x33C028u;
label_33c028:
    // 0x33c028: 0xc0cf09a  jal         func_33C268
label_33c02c:
    if (ctx->pc == 0x33C02Cu) {
        ctx->pc = 0x33C030u;
        goto label_33c030;
    }
    ctx->pc = 0x33C028u;
    SET_GPR_U32(ctx, 31, 0x33C030u);
    ctx->pc = 0x33C268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C268u, 0x33C028u, 0x33C030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C030u;
label_33c030:
    // 0x33c030: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x33c030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33c034:
    // 0x33c034: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x33c034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_33c038:
    // 0x33c038: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_33c03c:
    if (ctx->pc == 0x33C03Cu) {
        ctx->pc = 0x33C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C038u;
        // 0x33c03c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C040u;
        goto label_33c040;
    }
    ctx->pc = 0x33C038u;
    {
        const bool branch_taken_0x33c038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C038u;
        // 0x33c03c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c038) {
            ctx->pc = 0x33C054u;
            goto label_33c054;
        }
    }
    ctx->pc = 0x33C040u;
label_33c040:
    // 0x33c040: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x33c040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_33c044:
    // 0x33c044: 0x40f809  jalr        $v0
label_33c048:
    if (ctx->pc == 0x33C048u) {
        ctx->pc = 0x33C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C044u;
        // 0x33c048: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C04Cu;
        goto label_33c04c;
    }
    ctx->pc = 0x33C044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33C04Cu);
        ctx->pc = 0x33C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C044u;
        // 0x33c048: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C044u, 0x33C04Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33C04Cu;
label_33c04c:
    // 0x33c04c: 0x10000078  b           . + 4 + (0x78 << 2)
label_33c050:
    if (ctx->pc == 0x33C050u) {
        ctx->pc = 0x33C050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C04Cu;
        // 0x33c050: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C054u;
        goto label_33c054;
    }
    ctx->pc = 0x33C04Cu;
    {
        const bool branch_taken_0x33c04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C04Cu;
        // 0x33c050: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c04c) {
            ctx->pc = 0x33C230u;
            goto label_33c230;
        }
    }
    ctx->pc = 0x33C054u;
label_33c054:
    // 0x33c054: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x33c054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_33c058:
    // 0x33c058: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x33c058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33c05c:
    // 0x33c05c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x33c05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_33c060:
    // 0x33c060: 0x8e26003c  lw          $a2, 0x3C($s1)
    ctx->pc = 0x33c060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33c064:
    // 0x33c064: 0x2a31823  subu        $v1, $s5, $v1
    ctx->pc = 0x33c064u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_33c068:
    // 0x33c068: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x33c068u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_33c06c:
    // 0x33c06c: 0x246203ff  addiu       $v0, $v1, 0x3FF
    ctx->pc = 0x33c06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
label_33c070:
    // 0x33c070: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x33c070u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_33c074:
    // 0x33c074: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x33c074u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
label_33c078:
    // 0x33c078: 0x24560001  addiu       $s6, $v0, 0x1
    ctx->pc = 0x33c078u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_33c07c:
    // 0x33c07c: 0x2c52818  mult        $a1, $s6, $a1
    ctx->pc = 0x33c07cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_33c080:
    // 0x33c080: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x33c080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_33c084:
    // 0x33c084: 0x8cb30000  lw          $s3, 0x0($a1)
    ctx->pc = 0x33c084u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_33c088:
    // 0x33c088: 0x1660004c  bnez        $s3, . + 4 + (0x4C << 2)
label_33c08c:
    if (ctx->pc == 0x33C08Cu) {
        ctx->pc = 0x33C08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C088u;
        // 0x33c08c: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C090u;
        goto label_33c090;
    }
    ctx->pc = 0x33C088u;
    {
        const bool branch_taken_0x33c088 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x33C08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C088u;
        // 0x33c08c: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c088) {
            ctx->pc = 0x33C1BCu;
            goto label_33c1bc;
        }
    }
    ctx->pc = 0x33C090u;
label_33c090:
    // 0x33c090: 0x2a420201  slti        $v0, $s2, 0x201
    ctx->pc = 0x33c090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)513) ? 1 : 0);
label_33c094:
    // 0x33c094: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_33c098:
    if (ctx->pc == 0x33C098u) {
        ctx->pc = 0x33C098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C094u;
        // 0x33c098: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C09Cu;
        goto label_33c09c;
    }
    ctx->pc = 0x33C094u;
    {
        const bool branch_taken_0x33c094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C094u;
        // 0x33c098: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c094) {
            ctx->pc = 0x33C0D0u;
            goto label_33c0d0;
        }
    }
    ctx->pc = 0x33C09Cu;
label_33c09c:
    // 0x33c09c: 0xc0cee74  jal         func_33B9D0
label_33c0a0:
    if (ctx->pc == 0x33C0A0u) {
        ctx->pc = 0x33C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C09Cu;
        // 0x33c0a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C0A4u;
        goto label_33c0a4;
    }
    ctx->pc = 0x33C09Cu;
    SET_GPR_U32(ctx, 31, 0x33C0A4u);
    ctx->pc = 0x33C0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C09Cu;
    // 0x33c0a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B9D0u, 0x33C09Cu, 0x33C0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C0A4u;
label_33c0a4:
    // 0x33c0a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33c0a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33c0a8:
    // 0x33c0a8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_33c0ac:
    if (ctx->pc == 0x33C0ACu) {
        ctx->pc = 0x33C0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C0A8u;
        // 0x33c0ac: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C0B0u;
        goto label_33c0b0;
    }
    ctx->pc = 0x33C0A8u;
    {
        const bool branch_taken_0x33c0a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C0A8u;
        // 0x33c0ac: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c0a8) {
            ctx->pc = 0x33C0D0u;
            goto label_33c0d0;
        }
    }
    ctx->pc = 0x33C0B0u;
label_33c0b0:
    // 0x33c0b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c0b4:
    // 0x33c0b4: 0xc10c190  jal         func_430640
label_33c0b8:
    if (ctx->pc == 0x33C0B8u) {
        ctx->pc = 0x33C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C0B4u;
        // 0x33c0b8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C0BCu;
        goto label_33c0bc;
    }
    ctx->pc = 0x33C0B4u;
    SET_GPR_U32(ctx, 31, 0x33C0BCu);
    ctx->pc = 0x33C0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C0B4u;
    // 0x33c0b8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x33C0B4u, 0x33C0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C0BCu;
label_33c0bc:
    // 0x33c0bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x33c0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33c0c0:
    // 0x33c0c0: 0xc0ced94  jal         func_33B650
label_33c0c4:
    if (ctx->pc == 0x33C0C4u) {
        ctx->pc = 0x33C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C0C0u;
        // 0x33c0c4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C0C8u;
        goto label_33c0c8;
    }
    ctx->pc = 0x33C0C0u;
    SET_GPR_U32(ctx, 31, 0x33C0C8u);
    ctx->pc = 0x33C0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C0C0u;
    // 0x33c0c4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B650u, 0x33C0C0u, 0x33C0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C0C8u;
label_33c0c8:
    // 0x33c0c8: 0x10000058  b           . + 4 + (0x58 << 2)
label_33c0cc:
    if (ctx->pc == 0x33C0CCu) {
        ctx->pc = 0x33C0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C0C8u;
        // 0x33c0cc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C0D0u;
        goto label_33c0d0;
    }
    ctx->pc = 0x33C0C8u;
    {
        const bool branch_taken_0x33c0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C0C8u;
        // 0x33c0cc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c0c8) {
            ctx->pc = 0x33C22Cu;
            goto label_33c22c;
        }
    }
    ctx->pc = 0x33C0D0u;
label_33c0d0:
    // 0x33c0d0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x33c0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_33c0d4:
    // 0x33c0d4: 0x8e2a003c  lw          $t2, 0x3C($s1)
    ctx->pc = 0x33c0d4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33c0d8:
    // 0x33c0d8: 0x2c64818  mult        $t1, $s6, $a2
    ctx->pc = 0x33c0d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_33c0dc:
    // 0x33c0dc: 0x264503ff  addiu       $a1, $s2, 0x3FF
    ctx->pc = 0x33c0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1023));
label_33c0e0:
    // 0x33c0e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33c0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33c0e4:
    // 0x33c0e4: 0x264307fe  addiu       $v1, $s2, 0x7FE
    ctx->pc = 0x33c0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2046));
label_33c0e8:
    // 0x33c0e8: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x33c0e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_33c0ec:
    // 0x33c0ec: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x33c0ecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
label_33c0f0:
    // 0x33c0f0: 0x12a2021  addu        $a0, $t1, $t2
    ctx->pc = 0x33c0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_33c0f4:
    // 0x33c0f4: 0x34283  sra         $t0, $v1, 10
    ctx->pc = 0x33c0f4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 10));
label_33c0f8:
    // 0x33c0f8: 0x8c930004  lw          $s3, 0x4($a0)
    ctx->pc = 0x33c0f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_33c0fc:
    // 0x33c0fc: 0x113102a  slt         $v0, $t0, $s3
    ctx->pc = 0x33c0fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_33c100:
    // 0x33c100: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_33c104:
    if (ctx->pc == 0x33C104u) {
        ctx->pc = 0x33C104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C100u;
        // 0x33c104: 0x2c83821  addu        $a3, $s6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C108u;
        goto label_33c108;
    }
    ctx->pc = 0x33C100u;
    {
        const bool branch_taken_0x33c100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C100u;
        // 0x33c104: 0x2c83821  addu        $a3, $s6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c100) {
            ctx->pc = 0x33C15Cu;
            goto label_33c15c;
        }
    }
    ctx->pc = 0x33C108u;
label_33c108:
    // 0x33c108: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x33c108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33c10c:
    // 0x33c10c: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x33c10cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_33c110:
    // 0x33c110: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x33c110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_33c114:
    // 0x33c114: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x33c114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_33c118:
    // 0x33c118: 0x73a80  sll         $a3, $a3, 10
    ctx->pc = 0x33c118u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 10));
label_33c11c:
    // 0x33c11c: 0xca1021  addu        $v0, $a2, $t2
    ctx->pc = 0x33c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_33c120:
    // 0x33c120: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x33c120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_33c124:
    // 0x33c124: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x33c124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33c128:
    // 0x33c128: 0x1232821  addu        $a1, $t1, $v1
    ctx->pc = 0x33c128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_33c12c:
    // 0x33c12c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x33c12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_33c130:
    // 0x33c130: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x33c130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_33c134:
    // 0x33c134: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x33c134u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_33c138:
    // 0x33c138: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x33c138u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_33c13c:
    // 0x33c13c: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x33c13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_33c140:
    // 0x33c140: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x33c140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_33c144:
    // 0x33c144: 0xac680004  sw          $t0, 0x4($v1)
    ctx->pc = 0x33c144u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 8));
label_33c148:
    // 0x33c148: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x33c148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_33c14c:
    // 0x33c14c: 0xc0ced94  jal         func_33B650
label_33c150:
    if (ctx->pc == 0x33C150u) {
        ctx->pc = 0x33C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C14Cu;
        // 0x33c150: 0xa72821  addu        $a1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C154u;
        goto label_33c154;
    }
    ctx->pc = 0x33C14Cu;
    SET_GPR_U32(ctx, 31, 0x33C154u);
    ctx->pc = 0x33C150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C14Cu;
    // 0x33c150: 0xa72821  addu        $a1, $a1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B650u, 0x33C14Cu, 0x33C154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C154u;
label_33c154:
    // 0x33c154: 0x10000035  b           . + 4 + (0x35 << 2)
label_33c158:
    if (ctx->pc == 0x33C158u) {
        ctx->pc = 0x33C158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C154u;
        // 0x33c158: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C15Cu;
        goto label_33c15c;
    }
    ctx->pc = 0x33C154u;
    {
        const bool branch_taken_0x33c154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C154u;
        // 0x33c158: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c154) {
            ctx->pc = 0x33C22Cu;
            goto label_33c22c;
        }
    }
    ctx->pc = 0x33C15Cu;
label_33c15c:
    // 0x33c15c: 0x1113001f  beq         $t0, $s3, . + 4 + (0x1F << 2)
label_33c160:
    if (ctx->pc == 0x33C160u) {
        ctx->pc = 0x33C160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C15Cu;
        // 0x33c160: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C164u;
        goto label_33c164;
    }
    ctx->pc = 0x33C15Cu;
    {
        const bool branch_taken_0x33c15c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 19));
        ctx->pc = 0x33C160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C15Cu;
        // 0x33c160: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c15c) {
            ctx->pc = 0x33C1DCu;
            goto label_33c1dc;
        }
    }
    ctx->pc = 0x33C164u;
label_33c164:
    // 0x33c164: 0x8e300038  lw          $s0, 0x38($s1)
    ctx->pc = 0x33c164u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_33c168:
    // 0x33c168: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x33c168u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
label_33c16c:
    // 0x33c16c: 0xc0ced94  jal         func_33B650
label_33c170:
    if (ctx->pc == 0x33C170u) {
        ctx->pc = 0x33C170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C16Cu;
        // 0x33c170: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C174u;
        goto label_33c174;
    }
    ctx->pc = 0x33C16Cu;
    SET_GPR_U32(ctx, 31, 0x33C174u);
    ctx->pc = 0x33C170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C16Cu;
    // 0x33c170: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B650u, 0x33C16Cu, 0x33C174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C174u;
label_33c174:
    // 0x33c174: 0xae300038  sw          $s0, 0x38($s1)
    ctx->pc = 0x33c174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 16));
label_33c178:
    // 0x33c178: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33c178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33c17c:
    // 0x33c17c: 0xc0cee74  jal         func_33B9D0
label_33c180:
    if (ctx->pc == 0x33C180u) {
        ctx->pc = 0x33C180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C17Cu;
        // 0x33c180: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C184u;
        goto label_33c184;
    }
    ctx->pc = 0x33C17Cu;
    SET_GPR_U32(ctx, 31, 0x33C184u);
    ctx->pc = 0x33C180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C17Cu;
    // 0x33c180: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B9D0u, 0x33C17Cu, 0x33C184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C184u;
label_33c184:
    // 0x33c184: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33c184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33c188:
    // 0x33c188: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_33c18c:
    if (ctx->pc == 0x33C18Cu) {
        ctx->pc = 0x33C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C188u;
        // 0x33c18c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C190u;
        goto label_33c190;
    }
    ctx->pc = 0x33C188u;
    {
        const bool branch_taken_0x33c188 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x33C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C188u;
        // 0x33c18c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c188) {
            ctx->pc = 0x33C1A0u;
            goto label_33c1a0;
        }
    }
    ctx->pc = 0x33C190u;
label_33c190:
    // 0x33c190: 0xc0cee74  jal         func_33B9D0
label_33c194:
    if (ctx->pc == 0x33C194u) {
        ctx->pc = 0x33C194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C190u;
        // 0x33c194: 0x132a80  sll         $a1, $s3, 10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C198u;
        goto label_33c198;
    }
    ctx->pc = 0x33C190u;
    SET_GPR_U32(ctx, 31, 0x33C198u);
    ctx->pc = 0x33C194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C190u;
    // 0x33c194: 0x132a80  sll         $a1, $s3, 10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B9D0u, 0x33C190u, 0x33C198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C198u;
label_33c198:
    // 0x33c198: 0x10000024  b           . + 4 + (0x24 << 2)
label_33c19c:
    if (ctx->pc == 0x33C19Cu) {
        ctx->pc = 0x33C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C198u;
        // 0x33c19c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C1A0u;
        goto label_33c1a0;
    }
    ctx->pc = 0x33C198u;
    {
        const bool branch_taken_0x33c198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C198u;
        // 0x33c19c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c198) {
            ctx->pc = 0x33C22Cu;
            goto label_33c22c;
        }
    }
    ctx->pc = 0x33C1A0u;
label_33c1a0:
    // 0x33c1a0: 0x12b00021  beq         $s5, $s0, . + 4 + (0x21 << 2)
label_33c1a4:
    if (ctx->pc == 0x33C1A4u) {
        ctx->pc = 0x33C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1A0u;
        // 0x33c1a4: 0x133280  sll         $a2, $s3, 10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C1A8u;
        goto label_33c1a8;
    }
    ctx->pc = 0x33C1A0u;
    {
        const bool branch_taken_0x33c1a0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 16));
        ctx->pc = 0x33C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1A0u;
        // 0x33c1a4: 0x133280  sll         $a2, $s3, 10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c1a0) {
            ctx->pc = 0x33C228u;
            goto label_33c228;
        }
    }
    ctx->pc = 0x33C1A8u;
label_33c1a8:
    // 0x33c1a8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x33c1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_33c1ac:
    // 0x33c1ac: 0xc10c1bb  jal         func_4306EC
label_33c1b0:
    if (ctx->pc == 0x33C1B0u) {
        ctx->pc = 0x33C1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1ACu;
        // 0x33c1b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C1B4u;
        goto label_33c1b4;
    }
    ctx->pc = 0x33C1ACu;
    SET_GPR_U32(ctx, 31, 0x33C1B4u);
    ctx->pc = 0x33C1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C1ACu;
    // 0x33c1b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x33C1ACu, 0x33C1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C1B4u;
label_33c1b4:
    // 0x33c1b4: 0x1000001d  b           . + 4 + (0x1D << 2)
label_33c1b8:
    if (ctx->pc == 0x33C1B8u) {
        ctx->pc = 0x33C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1B4u;
        // 0x33c1b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C1BCu;
        goto label_33c1bc;
    }
    ctx->pc = 0x33C1B4u;
    {
        const bool branch_taken_0x33c1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1B4u;
        // 0x33c1b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c1b4) {
            ctx->pc = 0x33C22Cu;
            goto label_33c22c;
        }
    }
    ctx->pc = 0x33C1BCu;
label_33c1bc:
    // 0x33c1bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33c1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33c1c0:
    // 0x33c1c0: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x33c1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_33c1c4:
    // 0x33c1c4: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x33c1c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_33c1c8:
    // 0x33c1c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_33c1cc:
    if (ctx->pc == 0x33C1CCu) {
        ctx->pc = 0x33C1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1C8u;
        // 0x33c1cc: 0x2631004  sllv        $v0, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 19) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C1D0u;
        goto label_33c1d0;
    }
    ctx->pc = 0x33C1C8u;
    {
        const bool branch_taken_0x33c1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1C8u;
        // 0x33c1cc: 0x2631004  sllv        $v0, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 19) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c1c8) {
            ctx->pc = 0x33C1E4u;
            goto label_33c1e4;
        }
    }
    ctx->pc = 0x33C1D0u;
label_33c1d0:
    // 0x33c1d0: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x33c1d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_33c1d4:
    // 0x33c1d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_33c1d8:
    if (ctx->pc == 0x33C1D8u) {
        ctx->pc = 0x33C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1D4u;
        // 0x33c1d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C1DCu;
        goto label_33c1dc;
    }
    ctx->pc = 0x33C1D4u;
    {
        const bool branch_taken_0x33c1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1D4u;
        // 0x33c1d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c1d4) {
            ctx->pc = 0x33C1E8u;
            goto label_33c1e8;
        }
    }
    ctx->pc = 0x33C1DCu;
label_33c1dc:
    // 0x33c1dc: 0x10000012  b           . + 4 + (0x12 << 2)
label_33c1e0:
    if (ctx->pc == 0x33C1E0u) {
        ctx->pc = 0x33C1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1DCu;
        // 0x33c1e0: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C1E4u;
        goto label_33c1e4;
    }
    ctx->pc = 0x33C1DCu;
    {
        const bool branch_taken_0x33c1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1DCu;
        // 0x33c1e0: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c1dc) {
            ctx->pc = 0x33C228u;
            goto label_33c228;
        }
    }
    ctx->pc = 0x33C1E4u;
label_33c1e4:
    // 0x33c1e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x33c1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33c1e8:
    // 0x33c1e8: 0xc0cee74  jal         func_33B9D0
label_33c1ec:
    if (ctx->pc == 0x33C1ECu) {
        ctx->pc = 0x33C1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1E8u;
        // 0x33c1ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C1F0u;
        goto label_33c1f0;
    }
    ctx->pc = 0x33C1E8u;
    SET_GPR_U32(ctx, 31, 0x33C1F0u);
    ctx->pc = 0x33C1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C1E8u;
    // 0x33c1ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B9D0u, 0x33C1E8u, 0x33C1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C1F0u;
label_33c1f0:
    // 0x33c1f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33c1f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33c1f4:
    // 0x33c1f4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_33c1f8:
    if (ctx->pc == 0x33C1F8u) {
        ctx->pc = 0x33C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1F4u;
        // 0x33c1f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C1FCu;
        goto label_33c1fc;
    }
    ctx->pc = 0x33C1F4u;
    {
        const bool branch_taken_0x33c1f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x33C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1F4u;
        // 0x33c1f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c1f4) {
            ctx->pc = 0x33C204u;
            goto label_33c204;
        }
    }
    ctx->pc = 0x33C1FCu;
label_33c1fc:
    // 0x33c1fc: 0x1000000b  b           . + 4 + (0xB << 2)
label_33c200:
    if (ctx->pc == 0x33C200u) {
        ctx->pc = 0x33C200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1FCu;
        // 0x33c200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C204u;
        goto label_33c204;
    }
    ctx->pc = 0x33C1FCu;
    {
        const bool branch_taken_0x33c1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1FCu;
        // 0x33c200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c1fc) {
            ctx->pc = 0x33C22Cu;
            goto label_33c22c;
        }
    }
    ctx->pc = 0x33C204u;
label_33c204:
    // 0x33c204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c208:
    // 0x33c208: 0x2663004  sllv        $a2, $a2, $s3
    ctx->pc = 0x33c208u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 19) & 0x1F));
label_33c20c:
    // 0x33c20c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x33c20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_33c210:
    // 0x33c210: 0x246102a  slt         $v0, $s2, $a2
    ctx->pc = 0x33c210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_33c214:
    // 0x33c214: 0xc10c190  jal         func_430640
label_33c218:
    if (ctx->pc == 0x33C218u) {
        ctx->pc = 0x33C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C214u;
        // 0x33c218: 0x242300b  movn        $a2, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C21Cu;
        goto label_33c21c;
    }
    ctx->pc = 0x33C214u;
    SET_GPR_U32(ctx, 31, 0x33C21Cu);
    ctx->pc = 0x33C218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C214u;
    // 0x33c218: 0x242300b  movn        $a2, $s2, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x33C214u, 0x33C21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C21Cu;
label_33c21c:
    // 0x33c21c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x33c21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33c220:
    // 0x33c220: 0xc0ced94  jal         func_33B650
label_33c224:
    if (ctx->pc == 0x33C224u) {
        ctx->pc = 0x33C224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C220u;
        // 0x33c224: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C228u;
        goto label_33c228;
    }
    ctx->pc = 0x33C220u;
    SET_GPR_U32(ctx, 31, 0x33C228u);
    ctx->pc = 0x33C224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C220u;
    // 0x33c224: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B650u, 0x33C220u, 0x33C228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C228u;
label_33c228:
    // 0x33c228: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33c228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c22c:
    // 0x33c22c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x33c22cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_33c230:
    // 0x33c230: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x33c230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_33c234:
    // 0x33c234: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x33c234u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_33c238:
    // 0x33c238: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x33c238u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_33c23c:
    // 0x33c23c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x33c23cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33c240:
    // 0x33c240: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x33c240u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33c244:
    // 0x33c244: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x33c244u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33c248:
    // 0x33c248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33c248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33c24c:
    // 0x33c24c: 0x3e00008  jr          $ra
label_33c250:
    if (ctx->pc == 0x33C250u) {
        ctx->pc = 0x33C250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C24Cu;
        // 0x33c250: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C254u;
        goto label_33c254;
    }
    ctx->pc = 0x33C24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C24Cu;
        // 0x33c250: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C24Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C254u;
label_33c254:
    // 0x33c254: 0x0  nop
    ctx->pc = 0x33c254u;
    // NOP
label_33c258:
    // 0x33c258: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x33c258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_33c25c:
    // 0x33c25c: 0x0  nop
    ctx->pc = 0x33c25cu;
    // NOP
label_33c260:
    // 0x33c260: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x33c260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_33c264:
    // 0x33c264: 0x0  nop
    ctx->pc = 0x33c264u;
    // NOP
    ctx->pc = 0x33c268u;
}
