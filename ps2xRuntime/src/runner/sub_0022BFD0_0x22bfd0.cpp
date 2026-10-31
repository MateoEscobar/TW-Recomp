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

// Function: sub_0022BFD0
// Address: 0x22bfd0 - 0x22c388
void sub_0022BFD0_0x22bfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BFD0_0x22bfd0");
#endif

    switch (ctx->pc) {
        case 0x22bfd0u: goto label_22bfd0;
        case 0x22bfd4u: goto label_22bfd4;
        case 0x22bfd8u: goto label_22bfd8;
        case 0x22bfdcu: goto label_22bfdc;
        case 0x22bfe0u: goto label_22bfe0;
        case 0x22bfe4u: goto label_22bfe4;
        case 0x22bfe8u: goto label_22bfe8;
        case 0x22bfecu: goto label_22bfec;
        case 0x22bff0u: goto label_22bff0;
        case 0x22bff4u: goto label_22bff4;
        case 0x22bff8u: goto label_22bff8;
        case 0x22bffcu: goto label_22bffc;
        case 0x22c000u: goto label_22c000;
        case 0x22c004u: goto label_22c004;
        case 0x22c008u: goto label_22c008;
        case 0x22c00cu: goto label_22c00c;
        case 0x22c010u: goto label_22c010;
        case 0x22c014u: goto label_22c014;
        case 0x22c018u: goto label_22c018;
        case 0x22c01cu: goto label_22c01c;
        case 0x22c020u: goto label_22c020;
        case 0x22c024u: goto label_22c024;
        case 0x22c028u: goto label_22c028;
        case 0x22c02cu: goto label_22c02c;
        case 0x22c030u: goto label_22c030;
        case 0x22c034u: goto label_22c034;
        case 0x22c038u: goto label_22c038;
        case 0x22c03cu: goto label_22c03c;
        case 0x22c040u: goto label_22c040;
        case 0x22c044u: goto label_22c044;
        case 0x22c048u: goto label_22c048;
        case 0x22c04cu: goto label_22c04c;
        case 0x22c050u: goto label_22c050;
        case 0x22c054u: goto label_22c054;
        case 0x22c058u: goto label_22c058;
        case 0x22c05cu: goto label_22c05c;
        case 0x22c060u: goto label_22c060;
        case 0x22c064u: goto label_22c064;
        case 0x22c068u: goto label_22c068;
        case 0x22c06cu: goto label_22c06c;
        case 0x22c070u: goto label_22c070;
        case 0x22c074u: goto label_22c074;
        case 0x22c078u: goto label_22c078;
        case 0x22c07cu: goto label_22c07c;
        case 0x22c080u: goto label_22c080;
        case 0x22c084u: goto label_22c084;
        case 0x22c088u: goto label_22c088;
        case 0x22c08cu: goto label_22c08c;
        case 0x22c090u: goto label_22c090;
        case 0x22c094u: goto label_22c094;
        case 0x22c098u: goto label_22c098;
        case 0x22c09cu: goto label_22c09c;
        case 0x22c0a0u: goto label_22c0a0;
        case 0x22c0a4u: goto label_22c0a4;
        case 0x22c0a8u: goto label_22c0a8;
        case 0x22c0acu: goto label_22c0ac;
        case 0x22c0b0u: goto label_22c0b0;
        case 0x22c0b4u: goto label_22c0b4;
        case 0x22c0b8u: goto label_22c0b8;
        case 0x22c0bcu: goto label_22c0bc;
        case 0x22c0c0u: goto label_22c0c0;
        case 0x22c0c4u: goto label_22c0c4;
        case 0x22c0c8u: goto label_22c0c8;
        case 0x22c0ccu: goto label_22c0cc;
        case 0x22c0d0u: goto label_22c0d0;
        case 0x22c0d4u: goto label_22c0d4;
        case 0x22c0d8u: goto label_22c0d8;
        case 0x22c0dcu: goto label_22c0dc;
        case 0x22c0e0u: goto label_22c0e0;
        case 0x22c0e4u: goto label_22c0e4;
        case 0x22c0e8u: goto label_22c0e8;
        case 0x22c0ecu: goto label_22c0ec;
        case 0x22c0f0u: goto label_22c0f0;
        case 0x22c0f4u: goto label_22c0f4;
        case 0x22c0f8u: goto label_22c0f8;
        case 0x22c0fcu: goto label_22c0fc;
        case 0x22c100u: goto label_22c100;
        case 0x22c104u: goto label_22c104;
        case 0x22c108u: goto label_22c108;
        case 0x22c10cu: goto label_22c10c;
        case 0x22c110u: goto label_22c110;
        case 0x22c114u: goto label_22c114;
        case 0x22c118u: goto label_22c118;
        case 0x22c11cu: goto label_22c11c;
        case 0x22c120u: goto label_22c120;
        case 0x22c124u: goto label_22c124;
        case 0x22c128u: goto label_22c128;
        case 0x22c12cu: goto label_22c12c;
        case 0x22c130u: goto label_22c130;
        case 0x22c134u: goto label_22c134;
        case 0x22c138u: goto label_22c138;
        case 0x22c13cu: goto label_22c13c;
        case 0x22c140u: goto label_22c140;
        case 0x22c144u: goto label_22c144;
        case 0x22c148u: goto label_22c148;
        case 0x22c14cu: goto label_22c14c;
        case 0x22c150u: goto label_22c150;
        case 0x22c154u: goto label_22c154;
        case 0x22c158u: goto label_22c158;
        case 0x22c15cu: goto label_22c15c;
        case 0x22c160u: goto label_22c160;
        case 0x22c164u: goto label_22c164;
        case 0x22c168u: goto label_22c168;
        case 0x22c16cu: goto label_22c16c;
        case 0x22c170u: goto label_22c170;
        case 0x22c174u: goto label_22c174;
        case 0x22c178u: goto label_22c178;
        case 0x22c17cu: goto label_22c17c;
        case 0x22c180u: goto label_22c180;
        case 0x22c184u: goto label_22c184;
        case 0x22c188u: goto label_22c188;
        case 0x22c18cu: goto label_22c18c;
        case 0x22c190u: goto label_22c190;
        case 0x22c194u: goto label_22c194;
        case 0x22c198u: goto label_22c198;
        case 0x22c19cu: goto label_22c19c;
        case 0x22c1a0u: goto label_22c1a0;
        case 0x22c1a4u: goto label_22c1a4;
        case 0x22c1a8u: goto label_22c1a8;
        case 0x22c1acu: goto label_22c1ac;
        case 0x22c1b0u: goto label_22c1b0;
        case 0x22c1b4u: goto label_22c1b4;
        case 0x22c1b8u: goto label_22c1b8;
        case 0x22c1bcu: goto label_22c1bc;
        case 0x22c1c0u: goto label_22c1c0;
        case 0x22c1c4u: goto label_22c1c4;
        case 0x22c1c8u: goto label_22c1c8;
        case 0x22c1ccu: goto label_22c1cc;
        case 0x22c1d0u: goto label_22c1d0;
        case 0x22c1d4u: goto label_22c1d4;
        case 0x22c1d8u: goto label_22c1d8;
        case 0x22c1dcu: goto label_22c1dc;
        case 0x22c1e0u: goto label_22c1e0;
        case 0x22c1e4u: goto label_22c1e4;
        case 0x22c1e8u: goto label_22c1e8;
        case 0x22c1ecu: goto label_22c1ec;
        case 0x22c1f0u: goto label_22c1f0;
        case 0x22c1f4u: goto label_22c1f4;
        case 0x22c1f8u: goto label_22c1f8;
        case 0x22c1fcu: goto label_22c1fc;
        case 0x22c200u: goto label_22c200;
        case 0x22c204u: goto label_22c204;
        case 0x22c208u: goto label_22c208;
        case 0x22c20cu: goto label_22c20c;
        case 0x22c210u: goto label_22c210;
        case 0x22c214u: goto label_22c214;
        case 0x22c218u: goto label_22c218;
        case 0x22c21cu: goto label_22c21c;
        case 0x22c220u: goto label_22c220;
        case 0x22c224u: goto label_22c224;
        case 0x22c228u: goto label_22c228;
        case 0x22c22cu: goto label_22c22c;
        case 0x22c230u: goto label_22c230;
        case 0x22c234u: goto label_22c234;
        case 0x22c238u: goto label_22c238;
        case 0x22c23cu: goto label_22c23c;
        case 0x22c240u: goto label_22c240;
        case 0x22c244u: goto label_22c244;
        case 0x22c248u: goto label_22c248;
        case 0x22c24cu: goto label_22c24c;
        case 0x22c250u: goto label_22c250;
        case 0x22c254u: goto label_22c254;
        case 0x22c258u: goto label_22c258;
        case 0x22c25cu: goto label_22c25c;
        case 0x22c260u: goto label_22c260;
        case 0x22c264u: goto label_22c264;
        case 0x22c268u: goto label_22c268;
        case 0x22c26cu: goto label_22c26c;
        case 0x22c270u: goto label_22c270;
        case 0x22c274u: goto label_22c274;
        case 0x22c278u: goto label_22c278;
        case 0x22c27cu: goto label_22c27c;
        case 0x22c280u: goto label_22c280;
        case 0x22c284u: goto label_22c284;
        case 0x22c288u: goto label_22c288;
        case 0x22c28cu: goto label_22c28c;
        case 0x22c290u: goto label_22c290;
        case 0x22c294u: goto label_22c294;
        case 0x22c298u: goto label_22c298;
        case 0x22c29cu: goto label_22c29c;
        case 0x22c2a0u: goto label_22c2a0;
        case 0x22c2a4u: goto label_22c2a4;
        case 0x22c2a8u: goto label_22c2a8;
        case 0x22c2acu: goto label_22c2ac;
        case 0x22c2b0u: goto label_22c2b0;
        case 0x22c2b4u: goto label_22c2b4;
        case 0x22c2b8u: goto label_22c2b8;
        case 0x22c2bcu: goto label_22c2bc;
        case 0x22c2c0u: goto label_22c2c0;
        case 0x22c2c4u: goto label_22c2c4;
        case 0x22c2c8u: goto label_22c2c8;
        case 0x22c2ccu: goto label_22c2cc;
        case 0x22c2d0u: goto label_22c2d0;
        case 0x22c2d4u: goto label_22c2d4;
        case 0x22c2d8u: goto label_22c2d8;
        case 0x22c2dcu: goto label_22c2dc;
        case 0x22c2e0u: goto label_22c2e0;
        case 0x22c2e4u: goto label_22c2e4;
        case 0x22c2e8u: goto label_22c2e8;
        case 0x22c2ecu: goto label_22c2ec;
        case 0x22c2f0u: goto label_22c2f0;
        case 0x22c2f4u: goto label_22c2f4;
        case 0x22c2f8u: goto label_22c2f8;
        case 0x22c2fcu: goto label_22c2fc;
        case 0x22c300u: goto label_22c300;
        case 0x22c304u: goto label_22c304;
        case 0x22c308u: goto label_22c308;
        case 0x22c30cu: goto label_22c30c;
        case 0x22c310u: goto label_22c310;
        case 0x22c314u: goto label_22c314;
        case 0x22c318u: goto label_22c318;
        case 0x22c31cu: goto label_22c31c;
        case 0x22c320u: goto label_22c320;
        case 0x22c324u: goto label_22c324;
        case 0x22c328u: goto label_22c328;
        case 0x22c32cu: goto label_22c32c;
        case 0x22c330u: goto label_22c330;
        case 0x22c334u: goto label_22c334;
        case 0x22c338u: goto label_22c338;
        case 0x22c33cu: goto label_22c33c;
        case 0x22c340u: goto label_22c340;
        case 0x22c344u: goto label_22c344;
        case 0x22c348u: goto label_22c348;
        case 0x22c34cu: goto label_22c34c;
        case 0x22c350u: goto label_22c350;
        case 0x22c354u: goto label_22c354;
        case 0x22c358u: goto label_22c358;
        case 0x22c35cu: goto label_22c35c;
        case 0x22c360u: goto label_22c360;
        case 0x22c364u: goto label_22c364;
        case 0x22c368u: goto label_22c368;
        case 0x22c36cu: goto label_22c36c;
        case 0x22c370u: goto label_22c370;
        case 0x22c374u: goto label_22c374;
        case 0x22c378u: goto label_22c378;
        case 0x22c37cu: goto label_22c37c;
        case 0x22c380u: goto label_22c380;
        case 0x22c384u: goto label_22c384;
        default: break;
    }

    ctx->pc = 0x22bfd0u;

label_22bfd0:
    // 0x22bfd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22bfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_22bfd4:
    // 0x22bfd4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x22bfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_22bfd8:
    // 0x22bfd8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x22bfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_22bfdc:
    // 0x22bfdc: 0x3406fffd  ori         $a2, $zero, 0xFFFD
    ctx->pc = 0x22bfdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
label_22bfe0:
    // 0x22bfe0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22bfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_22bfe4:
    // 0x22bfe4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22bfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22bfe8:
    // 0x22bfe8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22bfe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22bfec:
    // 0x22bfec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x22bfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_22bff0:
    // 0x22bff0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22bff0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22bff4:
    // 0x22bff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22bff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22bff8:
    // 0x22bff8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x22bff8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_22bffc:
    // 0x22bffc: 0x8c507198  lw          $s0, 0x7198($v0)
    ctx->pc = 0x22bffcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
label_22c000:
    // 0x22c000: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x22c000u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_22c004:
    // 0x22c004: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x22c004u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22c008:
    // 0x22c008: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22c008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_22c00c:
    // 0x22c00c: 0xc3302b  sltu        $a2, $a2, $v1
    ctx->pc = 0x22c00cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_22c010:
    // 0x22c010: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_22c014:
    if (ctx->pc == 0x22C014u) {
        ctx->pc = 0x22C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C010u;
        // 0x22c014: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C018u;
        goto label_22c018;
    }
    ctx->pc = 0x22C010u;
    {
        const bool branch_taken_0x22c010 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C010u;
        // 0x22c014: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c010) {
            ctx->pc = 0x22C020u;
            goto label_22c020;
        }
    }
    ctx->pc = 0x22C018u;
label_22c018:
    // 0x22c018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22c018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22c01c:
    // 0x22c01c: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x22c01cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
label_22c020:
    // 0x22c020: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22c020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22c024:
    // 0x22c024: 0x96100010  lhu         $s0, 0x10($s0)
    ctx->pc = 0x22c024u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_22c028:
    // 0x22c028: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22c028u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22c02c:
    // 0x22c02c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22c030:
    // 0x22c030: 0x40f809  jalr        $v0
label_22c034:
    if (ctx->pc == 0x22C034u) {
        ctx->pc = 0x22C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C030u;
        // 0x22c034: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C038u;
        goto label_22c038;
    }
    ctx->pc = 0x22C030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C038u);
        ctx->pc = 0x22C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C030u;
        // 0x22c034: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C030u, 0x22C038u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C038u;
label_22c038:
    // 0x22c038: 0x504000cc  beql        $v0, $zero, . + 4 + (0xCC << 2)
label_22c03c:
    if (ctx->pc == 0x22C03Cu) {
        ctx->pc = 0x22C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C038u;
        // 0x22c03c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C040u;
        goto label_22c040;
    }
    ctx->pc = 0x22C038u;
    {
        const bool branch_taken_0x22c038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c038) {
            ctx->pc = 0x22C03Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C038u;
            // 0x22c03c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C36Cu;
            goto label_22c36c;
        }
    }
    ctx->pc = 0x22C040u;
label_22c040:
    // 0x22c040: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22c040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22c044:
    // 0x22c044: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22c044u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22c048:
    // 0x22c048: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22c048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22c04c:
    // 0x22c04c: 0x40f809  jalr        $v0
label_22c050:
    if (ctx->pc == 0x22C050u) {
        ctx->pc = 0x22C050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C04Cu;
        // 0x22c050: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C054u;
        goto label_22c054;
    }
    ctx->pc = 0x22C04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C054u);
        ctx->pc = 0x22C050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C04Cu;
        // 0x22c050: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C04Cu, 0x22C054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C054u;
label_22c054:
    // 0x22c054: 0x104000c4  beqz        $v0, . + 4 + (0xC4 << 2)
label_22c058:
    if (ctx->pc == 0x22C058u) {
        ctx->pc = 0x22C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C054u;
        // 0x22c058: 0x3210ffff  andi        $s0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C05Cu;
        goto label_22c05c;
    }
    ctx->pc = 0x22C054u;
    {
        const bool branch_taken_0x22c054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C054u;
        // 0x22c058: 0x3210ffff  andi        $s0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c054) {
            ctx->pc = 0x22C368u;
            goto label_22c368;
        }
    }
    ctx->pc = 0x22C05Cu;
label_22c05c:
    // 0x22c05c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22c05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22c060:
    // 0x22c060: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22c060u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22c064:
    // 0x22c064: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22c064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22c068:
    // 0x22c068: 0x40f809  jalr        $v0
label_22c06c:
    if (ctx->pc == 0x22C06Cu) {
        ctx->pc = 0x22C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C068u;
        // 0x22c06c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C070u;
        goto label_22c070;
    }
    ctx->pc = 0x22C068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C070u);
        ctx->pc = 0x22C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C068u;
        // 0x22c06c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C068u, 0x22C070u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C070u;
label_22c070:
    // 0x22c070: 0xa450003c  sh          $s0, 0x3C($v0)
    ctx->pc = 0x22c070u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 16));
label_22c074:
    // 0x22c074: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22c074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22c078:
    // 0x22c078: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22c078u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22c07c:
    // 0x22c07c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22c07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22c080:
    // 0x22c080: 0x40f809  jalr        $v0
label_22c084:
    if (ctx->pc == 0x22C084u) {
        ctx->pc = 0x22C084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C080u;
        // 0x22c084: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C088u;
        goto label_22c088;
    }
    ctx->pc = 0x22C080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C088u);
        ctx->pc = 0x22C084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C080u;
        // 0x22c084: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C080u, 0x22C088u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C088u;
label_22c088:
    // 0x22c088: 0xa450003c  sh          $s0, 0x3C($v0)
    ctx->pc = 0x22c088u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 16));
label_22c08c:
    // 0x22c08c: 0xc088ee6  jal         func_223B98
label_22c090:
    if (ctx->pc == 0x22C090u) {
        ctx->pc = 0x22C090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C08Cu;
        // 0x22c090: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C094u;
        goto label_22c094;
    }
    ctx->pc = 0x22C08Cu;
    SET_GPR_U32(ctx, 31, 0x22C094u);
    ctx->pc = 0x22C090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C08Cu;
    // 0x22c090: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x22C08Cu, 0x22C094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C094u;
label_22c094:
    // 0x22c094: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22c098:
    if (ctx->pc == 0x22C098u) {
        ctx->pc = 0x22C09Cu;
        goto label_22c09c;
    }
    ctx->pc = 0x22C094u;
    {
        const bool branch_taken_0x22c094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c094) {
            ctx->pc = 0x22C0A4u;
            goto label_22c0a4;
        }
    }
    ctx->pc = 0x22C09Cu;
label_22c09c:
    // 0x22c09c: 0xc08bcf2  jal         func_22F3C8
label_22c0a0:
    if (ctx->pc == 0x22C0A0u) {
        ctx->pc = 0x22C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C09Cu;
        // 0x22c0a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C0A4u;
        goto label_22c0a4;
    }
    ctx->pc = 0x22C09Cu;
    SET_GPR_U32(ctx, 31, 0x22C0A4u);
    ctx->pc = 0x22C0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C09Cu;
    // 0x22c0a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F3C8u, 0x22C09Cu, 0x22C0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C0A4u;
label_22c0a4:
    // 0x22c0a4: 0xc088ef0  jal         func_223BC0
label_22c0a8:
    if (ctx->pc == 0x22C0A8u) {
        ctx->pc = 0x22C0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C0A4u;
        // 0x22c0a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C0ACu;
        goto label_22c0ac;
    }
    ctx->pc = 0x22C0A4u;
    SET_GPR_U32(ctx, 31, 0x22C0ACu);
    ctx->pc = 0x22C0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C0A4u;
    // 0x22c0a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x22C0A4u, 0x22C0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C0ACu;
label_22c0ac:
    // 0x22c0ac: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_22c0b0:
    if (ctx->pc == 0x22C0B0u) {
        ctx->pc = 0x22C0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C0ACu;
        // 0x22c0b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C0B4u;
        goto label_22c0b4;
    }
    ctx->pc = 0x22C0ACu;
    {
        const bool branch_taken_0x22c0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c0ac) {
            ctx->pc = 0x22C0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C0ACu;
            // 0x22c0b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C0C0u;
            goto label_22c0c0;
        }
    }
    ctx->pc = 0x22C0B4u;
label_22c0b4:
    // 0x22c0b4: 0xc08be36  jal         func_22F8D8
label_22c0b8:
    if (ctx->pc == 0x22C0B8u) {
        ctx->pc = 0x22C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C0B4u;
        // 0x22c0b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C0BCu;
        goto label_22c0bc;
    }
    ctx->pc = 0x22C0B4u;
    SET_GPR_U32(ctx, 31, 0x22C0BCu);
    ctx->pc = 0x22C0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C0B4u;
    // 0x22c0b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F8D8u, 0x22C0B4u, 0x22C0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C0BCu;
label_22c0bc:
    // 0x22c0bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22c0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22c0c0:
    // 0x22c0c0: 0xc095f3a  jal         func_257CE8
label_22c0c4:
    if (ctx->pc == 0x22C0C4u) {
        ctx->pc = 0x22C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C0C0u;
        // 0x22c0c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C0C8u;
        goto label_22c0c8;
    }
    ctx->pc = 0x22C0C0u;
    SET_GPR_U32(ctx, 31, 0x22C0C8u);
    ctx->pc = 0x22C0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C0C0u;
    // 0x22c0c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257CE8u, 0x22C0C0u, 0x22C0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C0C8u;
label_22c0c8:
    // 0x22c0c8: 0xc087502  jal         func_21D408
label_22c0cc:
    if (ctx->pc == 0x22C0CCu) {
        ctx->pc = 0x22C0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C0C8u;
        // 0x22c0cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C0D0u;
        goto label_22c0d0;
    }
    ctx->pc = 0x22C0C8u;
    SET_GPR_U32(ctx, 31, 0x22C0D0u);
    ctx->pc = 0x22C0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C0C8u;
    // 0x22c0cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x22C0C8u, 0x22C0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C0D0u;
label_22c0d0:
    // 0x22c0d0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x22c0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_22c0d4:
    // 0x22c0d4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x22c0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_22c0d8:
    // 0x22c0d8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_22c0dc:
    if (ctx->pc == 0x22C0DCu) {
        ctx->pc = 0x22C0E0u;
        goto label_22c0e0;
    }
    ctx->pc = 0x22C0D8u;
    {
        const bool branch_taken_0x22c0d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c0d8) {
            ctx->pc = 0x22C100u;
            goto label_22c100;
        }
    }
    ctx->pc = 0x22C0E0u;
label_22c0e0:
    // 0x22c0e0: 0x8e2200cc  lw          $v0, 0xCC($s1)
    ctx->pc = 0x22c0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_22c0e4:
    // 0x22c0e4: 0x38420080  xori        $v0, $v0, 0x80
    ctx->pc = 0x22c0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)128);
label_22c0e8:
    // 0x22c0e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_22c0ec:
    if (ctx->pc == 0x22C0ECu) {
        ctx->pc = 0x22C0F0u;
        goto label_22c0f0;
    }
    ctx->pc = 0x22C0E8u;
    {
        const bool branch_taken_0x22c0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c0e8) {
            ctx->pc = 0x22C100u;
            goto label_22c100;
        }
    }
    ctx->pc = 0x22C0F0u;
label_22c0f0:
    // 0x22c0f0: 0xc088f88  jal         func_223E20
label_22c0f4:
    if (ctx->pc == 0x22C0F4u) {
        ctx->pc = 0x22C0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C0F0u;
        // 0x22c0f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C0F8u;
        goto label_22c0f8;
    }
    ctx->pc = 0x22C0F0u;
    SET_GPR_U32(ctx, 31, 0x22C0F8u);
    ctx->pc = 0x22C0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C0F0u;
    // 0x22c0f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E20u, 0x22C0F0u, 0x22C0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C0F8u;
label_22c0f8:
    // 0x22c0f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22c0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22c0fc:
    // 0x22c0fc: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x22c0fcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_22c100:
    // 0x22c100: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_22c104:
    if (ctx->pc == 0x22C104u) {
        ctx->pc = 0x22C108u;
        goto label_22c108;
    }
    ctx->pc = 0x22C100u;
    {
        const bool branch_taken_0x22c100 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c100) {
            ctx->pc = 0x22C120u;
            goto label_22c120;
        }
    }
    ctx->pc = 0x22C108u;
label_22c108:
    // 0x22c108: 0xc088bfe  jal         func_222FF8
label_22c10c:
    if (ctx->pc == 0x22C10Cu) {
        ctx->pc = 0x22C10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C108u;
        // 0x22c10c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C110u;
        goto label_22c110;
    }
    ctx->pc = 0x22C108u;
    SET_GPR_U32(ctx, 31, 0x22C110u);
    ctx->pc = 0x22C10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C108u;
    // 0x22c10c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222FF8u, 0x22C108u, 0x22C110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C110u;
label_22c110:
    // 0x22c110: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22c114:
    if (ctx->pc == 0x22C114u) {
        ctx->pc = 0x22C118u;
        goto label_22c118;
    }
    ctx->pc = 0x22C110u;
    {
        const bool branch_taken_0x22c110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c110) {
            ctx->pc = 0x22C120u;
            goto label_22c120;
        }
    }
    ctx->pc = 0x22C118u;
label_22c118:
    // 0x22c118: 0xc0960cc  jal         func_258330
label_22c11c:
    if (ctx->pc == 0x22C11Cu) {
        ctx->pc = 0x22C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C118u;
        // 0x22c11c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C120u;
        goto label_22c120;
    }
    ctx->pc = 0x22C118u;
    SET_GPR_U32(ctx, 31, 0x22C120u);
    ctx->pc = 0x22C11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C118u;
    // 0x22c11c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258330u, 0x22C118u, 0x22C120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C120u;
label_22c120:
    // 0x22c120: 0xc088ee6  jal         func_223B98
label_22c124:
    if (ctx->pc == 0x22C124u) {
        ctx->pc = 0x22C124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C120u;
        // 0x22c124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C128u;
        goto label_22c128;
    }
    ctx->pc = 0x22C120u;
    SET_GPR_U32(ctx, 31, 0x22C128u);
    ctx->pc = 0x22C124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C120u;
    // 0x22c124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x22C120u, 0x22C128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C128u;
label_22c128:
    // 0x22c128: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22c12c:
    if (ctx->pc == 0x22C12Cu) {
        ctx->pc = 0x22C130u;
        goto label_22c130;
    }
    ctx->pc = 0x22C128u;
    {
        const bool branch_taken_0x22c128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c128) {
            ctx->pc = 0x22C138u;
            goto label_22c138;
        }
    }
    ctx->pc = 0x22C130u;
label_22c130:
    // 0x22c130: 0xc08bcf2  jal         func_22F3C8
label_22c134:
    if (ctx->pc == 0x22C134u) {
        ctx->pc = 0x22C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C130u;
        // 0x22c134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C138u;
        goto label_22c138;
    }
    ctx->pc = 0x22C130u;
    SET_GPR_U32(ctx, 31, 0x22C138u);
    ctx->pc = 0x22C134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C130u;
    // 0x22c134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F3C8u, 0x22C130u, 0x22C138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C138u;
label_22c138:
    // 0x22c138: 0xc088ef0  jal         func_223BC0
label_22c13c:
    if (ctx->pc == 0x22C13Cu) {
        ctx->pc = 0x22C13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C138u;
        // 0x22c13c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C140u;
        goto label_22c140;
    }
    ctx->pc = 0x22C138u;
    SET_GPR_U32(ctx, 31, 0x22C140u);
    ctx->pc = 0x22C13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C138u;
    // 0x22c13c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x22C138u, 0x22C140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C140u;
label_22c140:
    // 0x22c140: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22c144:
    if (ctx->pc == 0x22C144u) {
        ctx->pc = 0x22C148u;
        goto label_22c148;
    }
    ctx->pc = 0x22C140u;
    {
        const bool branch_taken_0x22c140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c140) {
            ctx->pc = 0x22C150u;
            goto label_22c150;
        }
    }
    ctx->pc = 0x22C148u;
label_22c148:
    // 0x22c148: 0xc08be36  jal         func_22F8D8
label_22c14c:
    if (ctx->pc == 0x22C14Cu) {
        ctx->pc = 0x22C14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C148u;
        // 0x22c14c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C150u;
        goto label_22c150;
    }
    ctx->pc = 0x22C148u;
    SET_GPR_U32(ctx, 31, 0x22C150u);
    ctx->pc = 0x22C14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C148u;
    // 0x22c14c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F8D8u, 0x22C148u, 0x22C150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C150u;
label_22c150:
    // 0x22c150: 0xc088e30  jal         func_2238C0
label_22c154:
    if (ctx->pc == 0x22C154u) {
        ctx->pc = 0x22C154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C150u;
        // 0x22c154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C158u;
        goto label_22c158;
    }
    ctx->pc = 0x22C150u;
    SET_GPR_U32(ctx, 31, 0x22C158u);
    ctx->pc = 0x22C154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C150u;
    // 0x22c154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238C0u, 0x22C150u, 0x22C158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C158u;
label_22c158:
    // 0x22c158: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_22c15c:
    if (ctx->pc == 0x22C15Cu) {
        ctx->pc = 0x22C160u;
        goto label_22c160;
    }
    ctx->pc = 0x22C158u;
    {
        const bool branch_taken_0x22c158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c158) {
            ctx->pc = 0x22C178u;
            goto label_22c178;
        }
    }
    ctx->pc = 0x22C160u;
label_22c160:
    // 0x22c160: 0xc0e4060  jal         func_390180
label_22c164:
    if (ctx->pc == 0x22C164u) {
        ctx->pc = 0x22C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C160u;
        // 0x22c164: 0x2624036c  addiu       $a0, $s1, 0x36C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 876));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C168u;
        goto label_22c168;
    }
    ctx->pc = 0x22C160u;
    SET_GPR_U32(ctx, 31, 0x22C168u);
    ctx->pc = 0x22C164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C160u;
    // 0x22c164: 0x2624036c  addiu       $a0, $s1, 0x36C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 876));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x22C160u, 0x22C168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C168u;
label_22c168:
    // 0x22c168: 0xc0e6ee8  jal         func_39BBA0
label_22c16c:
    if (ctx->pc == 0x22C16Cu) {
        ctx->pc = 0x22C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C168u;
        // 0x22c16c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C170u;
        goto label_22c170;
    }
    ctx->pc = 0x22C168u;
    SET_GPR_U32(ctx, 31, 0x22C170u);
    ctx->pc = 0x22C16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C168u;
    // 0x22c16c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BBA0u, 0x22C168u, 0x22C170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C170u;
label_22c170:
    // 0x22c170: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22c174:
    if (ctx->pc == 0x22C174u) {
        ctx->pc = 0x22C178u;
        goto label_22c178;
    }
    ctx->pc = 0x22C170u;
    {
        const bool branch_taken_0x22c170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c170) {
            ctx->pc = 0x22C180u;
            goto label_22c180;
        }
    }
    ctx->pc = 0x22C178u;
label_22c178:
    // 0x22c178: 0xc08ba12  jal         func_22E848
label_22c17c:
    if (ctx->pc == 0x22C17Cu) {
        ctx->pc = 0x22C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C178u;
        // 0x22c17c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C180u;
        goto label_22c180;
    }
    ctx->pc = 0x22C178u;
    SET_GPR_U32(ctx, 31, 0x22C180u);
    ctx->pc = 0x22C17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C178u;
    // 0x22c17c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E848u, 0x22C178u, 0x22C180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C180u;
label_22c180:
    // 0x22c180: 0xc08a014  jal         func_228050
label_22c184:
    if (ctx->pc == 0x22C184u) {
        ctx->pc = 0x22C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C180u;
        // 0x22c184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C188u;
        goto label_22c188;
    }
    ctx->pc = 0x22C180u;
    SET_GPR_U32(ctx, 31, 0x22C188u);
    ctx->pc = 0x22C184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C180u;
    // 0x22c184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228050u, 0x22C180u, 0x22C188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C188u;
label_22c188:
    // 0x22c188: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22c18c:
    if (ctx->pc == 0x22C18Cu) {
        ctx->pc = 0x22C190u;
        goto label_22c190;
    }
    ctx->pc = 0x22C188u;
    {
        const bool branch_taken_0x22c188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c188) {
            ctx->pc = 0x22C198u;
            goto label_22c198;
        }
    }
    ctx->pc = 0x22C190u;
label_22c190:
    // 0x22c190: 0xc08b58a  jal         func_22D628
label_22c194:
    if (ctx->pc == 0x22C194u) {
        ctx->pc = 0x22C194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C190u;
        // 0x22c194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C198u;
        goto label_22c198;
    }
    ctx->pc = 0x22C190u;
    SET_GPR_U32(ctx, 31, 0x22C198u);
    ctx->pc = 0x22C194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C190u;
    // 0x22c194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D628u, 0x22C190u, 0x22C198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C198u;
label_22c198:
    // 0x22c198: 0xc087c16  jal         func_21F058
label_22c19c:
    if (ctx->pc == 0x22C19Cu) {
        ctx->pc = 0x22C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C198u;
        // 0x22c19c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C1A0u;
        goto label_22c1a0;
    }
    ctx->pc = 0x22C198u;
    SET_GPR_U32(ctx, 31, 0x22C1A0u);
    ctx->pc = 0x22C19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C198u;
    // 0x22c19c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F058u, 0x22C198u, 0x22C1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C1A0u;
label_22c1a0:
    // 0x22c1a0: 0xc095f5c  jal         func_257D70
label_22c1a4:
    if (ctx->pc == 0x22C1A4u) {
        ctx->pc = 0x22C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1A0u;
        // 0x22c1a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C1A8u;
        goto label_22c1a8;
    }
    ctx->pc = 0x22C1A0u;
    SET_GPR_U32(ctx, 31, 0x22C1A8u);
    ctx->pc = 0x22C1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C1A0u;
    // 0x22c1a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257D70u, 0x22C1A0u, 0x22C1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C1A8u;
label_22c1a8:
    // 0x22c1a8: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_22c1ac:
    if (ctx->pc == 0x22C1ACu) {
        ctx->pc = 0x22C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1A8u;
        // 0x22c1ac: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C1B0u;
        goto label_22c1b0;
    }
    ctx->pc = 0x22C1A8u;
    {
        const bool branch_taken_0x22c1a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1A8u;
        // 0x22c1ac: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c1a8) {
            ctx->pc = 0x22C1CCu;
            goto label_22c1cc;
        }
    }
    ctx->pc = 0x22C1B0u;
label_22c1b0:
    // 0x22c1b0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22c1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22c1b4:
    // 0x22c1b4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x22c1b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_22c1b8:
    // 0x22c1b8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x22c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_22c1bc:
    // 0x22c1bc: 0x40f809  jalr        $v0
label_22c1c0:
    if (ctx->pc == 0x22C1C0u) {
        ctx->pc = 0x22C1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1BCu;
        // 0x22c1c0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C1C4u;
        goto label_22c1c4;
    }
    ctx->pc = 0x22C1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C1C4u);
        ctx->pc = 0x22C1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1BCu;
        // 0x22c1c0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C1BCu, 0x22C1C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C1C4u;
label_22c1c4:
    // 0x22c1c4: 0x10000003  b           . + 4 + (0x3 << 2)
label_22c1c8:
    if (ctx->pc == 0x22C1C8u) {
        ctx->pc = 0x22C1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1C4u;
        // 0x22c1c8: 0xae2200c4  sw          $v0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C1CCu;
        goto label_22c1cc;
    }
    ctx->pc = 0x22C1C4u;
    {
        const bool branch_taken_0x22c1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1C4u;
        // 0x22c1c8: 0xae2200c4  sw          $v0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c1c4) {
            ctx->pc = 0x22C1D4u;
            goto label_22c1d4;
        }
    }
    ctx->pc = 0x22C1CCu;
label_22c1cc:
    // 0x22c1cc: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x22c1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_22c1d0:
    // 0x22c1d0: 0xae2300c4  sw          $v1, 0xC4($s1)
    ctx->pc = 0x22c1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
label_22c1d4:
    // 0x22c1d4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_22c1d8:
    if (ctx->pc == 0x22C1D8u) {
        ctx->pc = 0x22C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1D4u;
        // 0x22c1d8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C1DCu;
        goto label_22c1dc;
    }
    ctx->pc = 0x22C1D4u;
    {
        const bool branch_taken_0x22c1d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1D4u;
        // 0x22c1d8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c1d4) {
            ctx->pc = 0x22C1F8u;
            goto label_22c1f8;
        }
    }
    ctx->pc = 0x22C1DCu;
label_22c1dc:
    // 0x22c1dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22c1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22c1e0:
    // 0x22c1e0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x22c1e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_22c1e4:
    // 0x22c1e4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x22c1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_22c1e8:
    // 0x22c1e8: 0x40f809  jalr        $v0
label_22c1ec:
    if (ctx->pc == 0x22C1ECu) {
        ctx->pc = 0x22C1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1E8u;
        // 0x22c1ec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C1F0u;
        goto label_22c1f0;
    }
    ctx->pc = 0x22C1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C1F0u);
        ctx->pc = 0x22C1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1E8u;
        // 0x22c1ec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C1E8u, 0x22C1F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C1F0u;
label_22c1f0:
    // 0x22c1f0: 0x10000003  b           . + 4 + (0x3 << 2)
label_22c1f4:
    if (ctx->pc == 0x22C1F4u) {
        ctx->pc = 0x22C1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1F0u;
        // 0x22c1f4: 0xae4200c4  sw          $v0, 0xC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C1F8u;
        goto label_22c1f8;
    }
    ctx->pc = 0x22C1F0u;
    {
        const bool branch_taken_0x22c1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1F0u;
        // 0x22c1f4: 0xae4200c4  sw          $v0, 0xC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c1f0) {
            ctx->pc = 0x22C200u;
            goto label_22c200;
        }
    }
    ctx->pc = 0x22C1F8u;
label_22c1f8:
    // 0x22c1f8: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x22c1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_22c1fc:
    // 0x22c1fc: 0xae4300c4  sw          $v1, 0xC4($s2)
    ctx->pc = 0x22c1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 3));
label_22c200:
    // 0x22c200: 0xc087502  jal         func_21D408
label_22c204:
    if (ctx->pc == 0x22C204u) {
        ctx->pc = 0x22C204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C200u;
        // 0x22c204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C208u;
        goto label_22c208;
    }
    ctx->pc = 0x22C200u;
    SET_GPR_U32(ctx, 31, 0x22C208u);
    ctx->pc = 0x22C204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C200u;
    // 0x22c204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x22C200u, 0x22C208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C208u;
label_22c208:
    // 0x22c208: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x22c208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_22c20c:
    // 0x22c20c: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
label_22c210:
    if (ctx->pc == 0x22C210u) {
        ctx->pc = 0x22C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C20Cu;
        // 0x22c210: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C214u;
        goto label_22c214;
    }
    ctx->pc = 0x22C20Cu;
    {
        const bool branch_taken_0x22c20c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C20Cu;
        // 0x22c210: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c20c) {
            ctx->pc = 0x22C2B4u;
            goto label_22c2b4;
        }
    }
    ctx->pc = 0x22C214u;
label_22c214:
    // 0x22c214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22c218:
    // 0x22c218: 0xc087502  jal         func_21D408
label_22c21c:
    if (ctx->pc == 0x22C21Cu) {
        ctx->pc = 0x22C21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C218u;
        // 0x22c21c: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C220u;
        goto label_22c220;
    }
    ctx->pc = 0x22C218u;
    SET_GPR_U32(ctx, 31, 0x22C220u);
    ctx->pc = 0x22C21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C218u;
    // 0x22c21c: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x22C218u, 0x22C220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C220u;
label_22c220:
    // 0x22c220: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22c220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22c224:
    // 0x22c224: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22c224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22c228:
    // 0x22c228: 0xc0a33f8  jal         func_28CFE0
label_22c22c:
    if (ctx->pc == 0x22C22Cu) {
        ctx->pc = 0x22C22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C228u;
        // 0x22c22c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C230u;
        goto label_22c230;
    }
    ctx->pc = 0x22C228u;
    SET_GPR_U32(ctx, 31, 0x22C230u);
    ctx->pc = 0x22C22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C228u;
    // 0x22c22c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x22C228u, 0x22C230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C230u;
label_22c230:
    // 0x22c230: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x22c230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_22c234:
    // 0x22c234: 0x908256e2  lbu         $v0, 0x56E2($a0)
    ctx->pc = 0x22c234u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
label_22c238:
    // 0x22c238: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_22c23c:
    if (ctx->pc == 0x22C23Cu) {
        ctx->pc = 0x22C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C238u;
        // 0x22c23c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C240u;
        goto label_22c240;
    }
    ctx->pc = 0x22C238u;
    {
        const bool branch_taken_0x22c238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C238u;
        // 0x22c23c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c238) {
            ctx->pc = 0x22C24Cu;
            goto label_22c24c;
        }
    }
    ctx->pc = 0x22C240u;
label_22c240:
    // 0x22c240: 0xc107444  jal         func_41D110
label_22c244:
    if (ctx->pc == 0x22C244u) {
        ctx->pc = 0x22C248u;
        goto label_22c248;
    }
    ctx->pc = 0x22C240u;
    SET_GPR_U32(ctx, 31, 0x22C248u);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x22C240u, 0x22C248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C248u;
label_22c248:
    // 0x22c248: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x22c248u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22c24c:
    // 0x22c24c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_22c250:
    if (ctx->pc == 0x22C250u) {
        ctx->pc = 0x22C250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C24Cu;
        // 0x22c250: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C254u;
        goto label_22c254;
    }
    ctx->pc = 0x22C24Cu;
    {
        const bool branch_taken_0x22c24c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C24Cu;
        // 0x22c250: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c24c) {
            ctx->pc = 0x22C2B4u;
            goto label_22c2b4;
        }
    }
    ctx->pc = 0x22C254u;
label_22c254:
    // 0x22c254: 0xc073a8e  jal         func_1CEA38
label_22c258:
    if (ctx->pc == 0x22C258u) {
        ctx->pc = 0x22C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C254u;
        // 0x22c258: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C25Cu;
        goto label_22c25c;
    }
    ctx->pc = 0x22C254u;
    SET_GPR_U32(ctx, 31, 0x22C25Cu);
    ctx->pc = 0x22C258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C254u;
    // 0x22c258: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x22C254u, 0x22C25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C25Cu;
label_22c25c:
    // 0x22c25c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_22c260:
    if (ctx->pc == 0x22C260u) {
        ctx->pc = 0x22C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C25Cu;
        // 0x22c260: 0x3c020061  lui         $v0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C264u;
        goto label_22c264;
    }
    ctx->pc = 0x22C25Cu;
    {
        const bool branch_taken_0x22c25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C25Cu;
        // 0x22c260: 0x3c020061  lui         $v0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c25c) {
            ctx->pc = 0x22C2B0u;
            goto label_22c2b0;
        }
    }
    ctx->pc = 0x22C264u;
label_22c264:
    // 0x22c264: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x22c264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_22c268:
    // 0x22c268: 0xc073632  jal         func_1CD8C8
label_22c26c:
    if (ctx->pc == 0x22C26Cu) {
        ctx->pc = 0x22C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C268u;
        // 0x22c26c: 0x24509250  addiu       $s0, $v0, -0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C270u;
        goto label_22c270;
    }
    ctx->pc = 0x22C268u;
    SET_GPR_U32(ctx, 31, 0x22C270u);
    ctx->pc = 0x22C26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C268u;
    // 0x22c26c: 0x24509250  addiu       $s0, $v0, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD8C8u, 0x22C268u, 0x22C270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C270u;
label_22c270:
    // 0x22c270: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22c270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22c274:
    // 0x22c274: 0xc073954  jal         func_1CE550
label_22c278:
    if (ctx->pc == 0x22C278u) {
        ctx->pc = 0x22C278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C274u;
        // 0x22c278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C27Cu;
        goto label_22c27c;
    }
    ctx->pc = 0x22C274u;
    SET_GPR_U32(ctx, 31, 0x22C27Cu);
    ctx->pc = 0x22C278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C274u;
    // 0x22c278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE550u, 0x22C274u, 0x22C27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C27Cu;
label_22c27c:
    // 0x22c27c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_22c280:
    if (ctx->pc == 0x22C280u) {
        ctx->pc = 0x22C280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C27Cu;
        // 0x22c280: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C284u;
        goto label_22c284;
    }
    ctx->pc = 0x22C27Cu;
    {
        const bool branch_taken_0x22c27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C27Cu;
        // 0x22c280: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c27c) {
            ctx->pc = 0x22C2B4u;
            goto label_22c2b4;
        }
    }
    ctx->pc = 0x22C284u;
label_22c284:
    // 0x22c284: 0x8e65489c  lw          $a1, 0x489C($s3)
    ctx->pc = 0x22c284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_22c288:
    // 0x22c288: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x22c288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_22c28c:
    // 0x22c28c: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x22c28cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_22c290:
    // 0x22c290: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x22c290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_22c294:
    // 0x22c294: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_22c298:
    if (ctx->pc == 0x22C298u) {
        ctx->pc = 0x22C298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C294u;
        // 0x22c298: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C29Cu;
        goto label_22c29c;
    }
    ctx->pc = 0x22C294u;
    {
        const bool branch_taken_0x22c294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c294) {
            ctx->pc = 0x22C298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C294u;
            // 0x22c298: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C2B4u;
            goto label_22c2b4;
        }
    }
    ctx->pc = 0x22C29Cu;
label_22c29c:
    // 0x22c29c: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x22c29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_22c2a0:
    // 0x22c2a0: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x22c2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_22c2a4:
    // 0x22c2a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22c2a8:
    // 0x22c2a8: 0xc07387a  jal         func_1CE1E8
label_22c2ac:
    if (ctx->pc == 0x22C2ACu) {
        ctx->pc = 0x22C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2A8u;
        // 0x22c2ac: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C2B0u;
        goto label_22c2b0;
    }
    ctx->pc = 0x22C2A8u;
    SET_GPR_U32(ctx, 31, 0x22C2B0u);
    ctx->pc = 0x22C2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C2A8u;
    // 0x22c2ac: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE1E8u, 0x22C2A8u, 0x22C2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C2B0u;
label_22c2b0:
    // 0x22c2b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22c2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22c2b4:
    // 0x22c2b4: 0xc094fb4  jal         func_253ED0
label_22c2b8:
    if (ctx->pc == 0x22C2B8u) {
        ctx->pc = 0x22C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2B4u;
        // 0x22c2b8: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C2BCu;
        goto label_22c2bc;
    }
    ctx->pc = 0x22C2B4u;
    SET_GPR_U32(ctx, 31, 0x22C2BCu);
    ctx->pc = 0x22C2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C2B4u;
    // 0x22c2b8: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x22C2B4u, 0x22C2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C2BCu;
label_22c2bc:
    // 0x22c2bc: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x22c2bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_22c2c0:
    // 0x22c2c0: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x22c2c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_22c2c4:
    // 0x22c2c4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22c2c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_22c2c8:
    // 0x22c2c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22c2cc:
    // 0x22c2cc: 0xc094fb4  jal         func_253ED0
label_22c2d0:
    if (ctx->pc == 0x22C2D0u) {
        ctx->pc = 0x22C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2CCu;
        // 0x22c2d0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C2D4u;
        goto label_22c2d4;
    }
    ctx->pc = 0x22C2CCu;
    SET_GPR_U32(ctx, 31, 0x22C2D4u);
    ctx->pc = 0x22C2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C2CCu;
    // 0x22c2d0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x22C2CCu, 0x22C2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C2D4u;
label_22c2d4:
    // 0x22c2d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22c2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22c2d8:
    // 0x22c2d8: 0xc089988  jal         func_226620
label_22c2dc:
    if (ctx->pc == 0x22C2DCu) {
        ctx->pc = 0x22C2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2D8u;
        // 0x22c2dc: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C2E0u;
        goto label_22c2e0;
    }
    ctx->pc = 0x22C2D8u;
    SET_GPR_U32(ctx, 31, 0x22C2E0u);
    ctx->pc = 0x22C2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C2D8u;
    // 0x22c2dc: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22C2D8u, 0x22C2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C2E0u;
label_22c2e0:
    // 0x22c2e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22c2e4:
    // 0x22c2e4: 0xc089988  jal         func_226620
label_22c2e8:
    if (ctx->pc == 0x22C2E8u) {
        ctx->pc = 0x22C2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2E4u;
        // 0x22c2e8: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C2ECu;
        goto label_22c2ec;
    }
    ctx->pc = 0x22C2E4u;
    SET_GPR_U32(ctx, 31, 0x22C2ECu);
    ctx->pc = 0x22C2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C2E4u;
    // 0x22c2e8: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22C2E4u, 0x22C2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C2ECu;
label_22c2ec:
    // 0x22c2ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22c2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22c2f0:
    // 0x22c2f0: 0xc089974  jal         func_2265D0
label_22c2f4:
    if (ctx->pc == 0x22C2F4u) {
        ctx->pc = 0x22C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2F0u;
        // 0x22c2f4: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C2F8u;
        goto label_22c2f8;
    }
    ctx->pc = 0x22C2F0u;
    SET_GPR_U32(ctx, 31, 0x22C2F8u);
    ctx->pc = 0x22C2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C2F0u;
    // 0x22c2f4: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22C2F0u, 0x22C2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C2F8u;
label_22c2f8:
    // 0x22c2f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22c2fc:
    // 0x22c2fc: 0xc089974  jal         func_2265D0
label_22c300:
    if (ctx->pc == 0x22C300u) {
        ctx->pc = 0x22C300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2FCu;
        // 0x22c300: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C304u;
        goto label_22c304;
    }
    ctx->pc = 0x22C2FCu;
    SET_GPR_U32(ctx, 31, 0x22C304u);
    ctx->pc = 0x22C300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C2FCu;
    // 0x22c300: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22C2FCu, 0x22C304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C304u;
label_22c304:
    // 0x22c304: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22c304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22c308:
    // 0x22c308: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x22c308u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22c30c:
    // 0x22c30c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22c30cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c310:
    // 0x22c310: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22c310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c314:
    // 0x22c314: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22c314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22c318:
    // 0x22c318: 0xc0875a0  jal         func_21D680
label_22c31c:
    if (ctx->pc == 0x22C31Cu) {
        ctx->pc = 0x22C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C318u;
        // 0x22c31c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C320u;
        goto label_22c320;
    }
    ctx->pc = 0x22C318u;
    SET_GPR_U32(ctx, 31, 0x22C320u);
    ctx->pc = 0x22C31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C318u;
    // 0x22c31c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D680u, 0x22C318u, 0x22C320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C320u;
label_22c320:
    // 0x22c320: 0xc08bf92  jal         func_22FE48
label_22c324:
    if (ctx->pc == 0x22C324u) {
        ctx->pc = 0x22C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C320u;
        // 0x22c324: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C328u;
        goto label_22c328;
    }
    ctx->pc = 0x22C320u;
    SET_GPR_U32(ctx, 31, 0x22C328u);
    ctx->pc = 0x22C324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C320u;
    // 0x22c324: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE48u, 0x22C320u, 0x22C328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C328u;
label_22c328:
    // 0x22c328: 0xc08bf92  jal         func_22FE48
label_22c32c:
    if (ctx->pc == 0x22C32Cu) {
        ctx->pc = 0x22C32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C328u;
        // 0x22c32c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C330u;
        goto label_22c330;
    }
    ctx->pc = 0x22C328u;
    SET_GPR_U32(ctx, 31, 0x22C330u);
    ctx->pc = 0x22C32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C328u;
    // 0x22c32c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE48u, 0x22C328u, 0x22C330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C330u;
label_22c330:
    // 0x22c330: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22c330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22c334:
    // 0x22c334: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22c334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22c338:
    // 0x22c338: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22c338u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_22c33c:
    // 0x22c33c: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x22c33cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_22c340:
    // 0x22c340: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x22c340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_22c344:
    // 0x22c344: 0x40f809  jalr        $v0
label_22c348:
    if (ctx->pc == 0x22C348u) {
        ctx->pc = 0x22C348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C344u;
        // 0x22c348: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C34Cu;
        goto label_22c34c;
    }
    ctx->pc = 0x22C344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C34Cu);
        ctx->pc = 0x22C348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C344u;
        // 0x22c348: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C344u, 0x22C34Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C34Cu;
label_22c34c:
    // 0x22c34c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22c34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22c350:
    // 0x22c350: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22c350u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_22c354:
    // 0x22c354: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22c354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22c358:
    // 0x22c358: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x22c358u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_22c35c:
    // 0x22c35c: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x22c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_22c360:
    // 0x22c360: 0x40f809  jalr        $v0
label_22c364:
    if (ctx->pc == 0x22C364u) {
        ctx->pc = 0x22C364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C360u;
        // 0x22c364: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C368u;
        goto label_22c368;
    }
    ctx->pc = 0x22C360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C368u);
        ctx->pc = 0x22C364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C360u;
        // 0x22c364: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C360u, 0x22C368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C368u;
label_22c368:
    // 0x22c368: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x22c368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22c36c:
    // 0x22c36c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22c36cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22c370:
    // 0x22c370: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22c370u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22c374:
    // 0x22c374: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x22c374u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22c378:
    // 0x22c378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22c37c:
    // 0x22c37c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x22c37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22c380:
    // 0x22c380: 0x3e00008  jr          $ra
label_22c384:
    if (ctx->pc == 0x22C384u) {
        ctx->pc = 0x22C384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C380u;
        // 0x22c384: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C388u;
        goto label_fallthrough_0x22c380;
    }
    ctx->pc = 0x22C380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C380u;
        // 0x22c384: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22c380:
    ctx->pc = 0x22C388u;
}
