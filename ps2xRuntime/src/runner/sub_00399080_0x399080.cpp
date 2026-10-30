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

// Function: sub_00399080
// Address: 0x399080 - 0x399428
void sub_00399080_0x399080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399080_0x399080");
#endif

    switch (ctx->pc) {
        case 0x399080u: goto label_399080;
        case 0x399084u: goto label_399084;
        case 0x399088u: goto label_399088;
        case 0x39908cu: goto label_39908c;
        case 0x399090u: goto label_399090;
        case 0x399094u: goto label_399094;
        case 0x399098u: goto label_399098;
        case 0x39909cu: goto label_39909c;
        case 0x3990a0u: goto label_3990a0;
        case 0x3990a4u: goto label_3990a4;
        case 0x3990a8u: goto label_3990a8;
        case 0x3990acu: goto label_3990ac;
        case 0x3990b0u: goto label_3990b0;
        case 0x3990b4u: goto label_3990b4;
        case 0x3990b8u: goto label_3990b8;
        case 0x3990bcu: goto label_3990bc;
        case 0x3990c0u: goto label_3990c0;
        case 0x3990c4u: goto label_3990c4;
        case 0x3990c8u: goto label_3990c8;
        case 0x3990ccu: goto label_3990cc;
        case 0x3990d0u: goto label_3990d0;
        case 0x3990d4u: goto label_3990d4;
        case 0x3990d8u: goto label_3990d8;
        case 0x3990dcu: goto label_3990dc;
        case 0x3990e0u: goto label_3990e0;
        case 0x3990e4u: goto label_3990e4;
        case 0x3990e8u: goto label_3990e8;
        case 0x3990ecu: goto label_3990ec;
        case 0x3990f0u: goto label_3990f0;
        case 0x3990f4u: goto label_3990f4;
        case 0x3990f8u: goto label_3990f8;
        case 0x3990fcu: goto label_3990fc;
        case 0x399100u: goto label_399100;
        case 0x399104u: goto label_399104;
        case 0x399108u: goto label_399108;
        case 0x39910cu: goto label_39910c;
        case 0x399110u: goto label_399110;
        case 0x399114u: goto label_399114;
        case 0x399118u: goto label_399118;
        case 0x39911cu: goto label_39911c;
        case 0x399120u: goto label_399120;
        case 0x399124u: goto label_399124;
        case 0x399128u: goto label_399128;
        case 0x39912cu: goto label_39912c;
        case 0x399130u: goto label_399130;
        case 0x399134u: goto label_399134;
        case 0x399138u: goto label_399138;
        case 0x39913cu: goto label_39913c;
        case 0x399140u: goto label_399140;
        case 0x399144u: goto label_399144;
        case 0x399148u: goto label_399148;
        case 0x39914cu: goto label_39914c;
        case 0x399150u: goto label_399150;
        case 0x399154u: goto label_399154;
        case 0x399158u: goto label_399158;
        case 0x39915cu: goto label_39915c;
        case 0x399160u: goto label_399160;
        case 0x399164u: goto label_399164;
        case 0x399168u: goto label_399168;
        case 0x39916cu: goto label_39916c;
        case 0x399170u: goto label_399170;
        case 0x399174u: goto label_399174;
        case 0x399178u: goto label_399178;
        case 0x39917cu: goto label_39917c;
        case 0x399180u: goto label_399180;
        case 0x399184u: goto label_399184;
        case 0x399188u: goto label_399188;
        case 0x39918cu: goto label_39918c;
        case 0x399190u: goto label_399190;
        case 0x399194u: goto label_399194;
        case 0x399198u: goto label_399198;
        case 0x39919cu: goto label_39919c;
        case 0x3991a0u: goto label_3991a0;
        case 0x3991a4u: goto label_3991a4;
        case 0x3991a8u: goto label_3991a8;
        case 0x3991acu: goto label_3991ac;
        case 0x3991b0u: goto label_3991b0;
        case 0x3991b4u: goto label_3991b4;
        case 0x3991b8u: goto label_3991b8;
        case 0x3991bcu: goto label_3991bc;
        case 0x3991c0u: goto label_3991c0;
        case 0x3991c4u: goto label_3991c4;
        case 0x3991c8u: goto label_3991c8;
        case 0x3991ccu: goto label_3991cc;
        case 0x3991d0u: goto label_3991d0;
        case 0x3991d4u: goto label_3991d4;
        case 0x3991d8u: goto label_3991d8;
        case 0x3991dcu: goto label_3991dc;
        case 0x3991e0u: goto label_3991e0;
        case 0x3991e4u: goto label_3991e4;
        case 0x3991e8u: goto label_3991e8;
        case 0x3991ecu: goto label_3991ec;
        case 0x3991f0u: goto label_3991f0;
        case 0x3991f4u: goto label_3991f4;
        case 0x3991f8u: goto label_3991f8;
        case 0x3991fcu: goto label_3991fc;
        case 0x399200u: goto label_399200;
        case 0x399204u: goto label_399204;
        case 0x399208u: goto label_399208;
        case 0x39920cu: goto label_39920c;
        case 0x399210u: goto label_399210;
        case 0x399214u: goto label_399214;
        case 0x399218u: goto label_399218;
        case 0x39921cu: goto label_39921c;
        case 0x399220u: goto label_399220;
        case 0x399224u: goto label_399224;
        case 0x399228u: goto label_399228;
        case 0x39922cu: goto label_39922c;
        case 0x399230u: goto label_399230;
        case 0x399234u: goto label_399234;
        case 0x399238u: goto label_399238;
        case 0x39923cu: goto label_39923c;
        case 0x399240u: goto label_399240;
        case 0x399244u: goto label_399244;
        case 0x399248u: goto label_399248;
        case 0x39924cu: goto label_39924c;
        case 0x399250u: goto label_399250;
        case 0x399254u: goto label_399254;
        case 0x399258u: goto label_399258;
        case 0x39925cu: goto label_39925c;
        case 0x399260u: goto label_399260;
        case 0x399264u: goto label_399264;
        case 0x399268u: goto label_399268;
        case 0x39926cu: goto label_39926c;
        case 0x399270u: goto label_399270;
        case 0x399274u: goto label_399274;
        case 0x399278u: goto label_399278;
        case 0x39927cu: goto label_39927c;
        case 0x399280u: goto label_399280;
        case 0x399284u: goto label_399284;
        case 0x399288u: goto label_399288;
        case 0x39928cu: goto label_39928c;
        case 0x399290u: goto label_399290;
        case 0x399294u: goto label_399294;
        case 0x399298u: goto label_399298;
        case 0x39929cu: goto label_39929c;
        case 0x3992a0u: goto label_3992a0;
        case 0x3992a4u: goto label_3992a4;
        case 0x3992a8u: goto label_3992a8;
        case 0x3992acu: goto label_3992ac;
        case 0x3992b0u: goto label_3992b0;
        case 0x3992b4u: goto label_3992b4;
        case 0x3992b8u: goto label_3992b8;
        case 0x3992bcu: goto label_3992bc;
        case 0x3992c0u: goto label_3992c0;
        case 0x3992c4u: goto label_3992c4;
        case 0x3992c8u: goto label_3992c8;
        case 0x3992ccu: goto label_3992cc;
        case 0x3992d0u: goto label_3992d0;
        case 0x3992d4u: goto label_3992d4;
        case 0x3992d8u: goto label_3992d8;
        case 0x3992dcu: goto label_3992dc;
        case 0x3992e0u: goto label_3992e0;
        case 0x3992e4u: goto label_3992e4;
        case 0x3992e8u: goto label_3992e8;
        case 0x3992ecu: goto label_3992ec;
        case 0x3992f0u: goto label_3992f0;
        case 0x3992f4u: goto label_3992f4;
        case 0x3992f8u: goto label_3992f8;
        case 0x3992fcu: goto label_3992fc;
        case 0x399300u: goto label_399300;
        case 0x399304u: goto label_399304;
        case 0x399308u: goto label_399308;
        case 0x39930cu: goto label_39930c;
        case 0x399310u: goto label_399310;
        case 0x399314u: goto label_399314;
        case 0x399318u: goto label_399318;
        case 0x39931cu: goto label_39931c;
        case 0x399320u: goto label_399320;
        case 0x399324u: goto label_399324;
        case 0x399328u: goto label_399328;
        case 0x39932cu: goto label_39932c;
        case 0x399330u: goto label_399330;
        case 0x399334u: goto label_399334;
        case 0x399338u: goto label_399338;
        case 0x39933cu: goto label_39933c;
        case 0x399340u: goto label_399340;
        case 0x399344u: goto label_399344;
        case 0x399348u: goto label_399348;
        case 0x39934cu: goto label_39934c;
        case 0x399350u: goto label_399350;
        case 0x399354u: goto label_399354;
        case 0x399358u: goto label_399358;
        case 0x39935cu: goto label_39935c;
        case 0x399360u: goto label_399360;
        case 0x399364u: goto label_399364;
        case 0x399368u: goto label_399368;
        case 0x39936cu: goto label_39936c;
        case 0x399370u: goto label_399370;
        case 0x399374u: goto label_399374;
        case 0x399378u: goto label_399378;
        case 0x39937cu: goto label_39937c;
        case 0x399380u: goto label_399380;
        case 0x399384u: goto label_399384;
        case 0x399388u: goto label_399388;
        case 0x39938cu: goto label_39938c;
        case 0x399390u: goto label_399390;
        case 0x399394u: goto label_399394;
        case 0x399398u: goto label_399398;
        case 0x39939cu: goto label_39939c;
        case 0x3993a0u: goto label_3993a0;
        case 0x3993a4u: goto label_3993a4;
        case 0x3993a8u: goto label_3993a8;
        case 0x3993acu: goto label_3993ac;
        case 0x3993b0u: goto label_3993b0;
        case 0x3993b4u: goto label_3993b4;
        case 0x3993b8u: goto label_3993b8;
        case 0x3993bcu: goto label_3993bc;
        case 0x3993c0u: goto label_3993c0;
        case 0x3993c4u: goto label_3993c4;
        case 0x3993c8u: goto label_3993c8;
        case 0x3993ccu: goto label_3993cc;
        case 0x3993d0u: goto label_3993d0;
        case 0x3993d4u: goto label_3993d4;
        case 0x3993d8u: goto label_3993d8;
        case 0x3993dcu: goto label_3993dc;
        case 0x3993e0u: goto label_3993e0;
        case 0x3993e4u: goto label_3993e4;
        case 0x3993e8u: goto label_3993e8;
        case 0x3993ecu: goto label_3993ec;
        case 0x3993f0u: goto label_3993f0;
        case 0x3993f4u: goto label_3993f4;
        case 0x3993f8u: goto label_3993f8;
        case 0x3993fcu: goto label_3993fc;
        case 0x399400u: goto label_399400;
        case 0x399404u: goto label_399404;
        case 0x399408u: goto label_399408;
        case 0x39940cu: goto label_39940c;
        case 0x399410u: goto label_399410;
        case 0x399414u: goto label_399414;
        case 0x399418u: goto label_399418;
        case 0x39941cu: goto label_39941c;
        case 0x399420u: goto label_399420;
        case 0x399424u: goto label_399424;
        default: break;
    }

    ctx->pc = 0x399080u;

label_399080:
    // 0x399080: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x399080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_399084:
    // 0x399084: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x399084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_399088:
    // 0x399088: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x399088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_39908c:
    // 0x39908c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x39908cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_399090:
    // 0x399090: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x399090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_399094:
    // 0x399094: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x399094u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_399098:
    // 0x399098: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x399098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39909c:
    // 0x39909c: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x39909cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_3990a0:
    // 0x3990a0: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x3990a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_3990a4:
    // 0x3990a4: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x3990a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_3990a8:
    // 0x3990a8: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x3990a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_3990ac:
    // 0x3990ac: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x3990acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_3990b0:
    // 0x3990b0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3990b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3990b4:
    // 0x3990b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3990b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3990b8:
    // 0x3990b8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3990b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3990bc:
    // 0x3990bc: 0x21482  srl         $v0, $v0, 18
    ctx->pc = 0x3990bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 18));
label_3990c0:
    // 0x3990c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3990c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3990c4:
    // 0x3990c4: 0x104300cc  beq         $v0, $v1, . + 4 + (0xCC << 2)
label_3990c8:
    if (ctx->pc == 0x3990C8u) {
        ctx->pc = 0x3990C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3990C4u;
        // 0x3990c8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3990CCu;
        goto label_3990cc;
    }
    ctx->pc = 0x3990C4u;
    {
        const bool branch_taken_0x3990c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3990C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3990C4u;
        // 0x3990c8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3990c4) {
            ctx->pc = 0x3993F8u;
            goto label_3993f8;
        }
    }
    ctx->pc = 0x3990CCu;
label_3990cc:
    // 0x3990cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3990ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3990d0:
    // 0x3990d0: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x3990d0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_3990d4:
    // 0x3990d4: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x3990d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_3990d8:
    // 0x3990d8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x3990d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_3990dc:
    // 0x3990dc: 0x40f809  jalr        $v0
label_3990e0:
    if (ctx->pc == 0x3990E0u) {
        ctx->pc = 0x3990E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3990DCu;
        // 0x3990e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3990E4u;
        goto label_3990e4;
    }
    ctx->pc = 0x3990DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3990E4u);
        ctx->pc = 0x3990E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3990DCu;
        // 0x3990e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3990DCu, 0x3990E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3990E4u;
label_3990e4:
    // 0x3990e4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_3990e8:
    if (ctx->pc == 0x3990E8u) {
        ctx->pc = 0x3990E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3990E4u;
        // 0x3990e8: 0x8e250020  lw          $a1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3990ECu;
        goto label_3990ec;
    }
    ctx->pc = 0x3990E4u;
    {
        const bool branch_taken_0x3990e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3990E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3990E4u;
        // 0x3990e8: 0x8e250020  lw          $a1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3990e4) {
            ctx->pc = 0x399110u;
            goto label_399110;
        }
    }
    ctx->pc = 0x3990ECu;
label_3990ec:
    // 0x3990ec: 0x8ea42c04  lw          $a0, 0x2C04($s5)
    ctx->pc = 0x3990ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11268)));
label_3990f0:
    // 0x3990f0: 0xc0e44cc  jal         func_391330
label_3990f4:
    if (ctx->pc == 0x3990F4u) {
        ctx->pc = 0x3990F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3990F0u;
        // 0x3990f4: 0x30a53fff  andi        $a1, $a1, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3990F8u;
        goto label_3990f8;
    }
    ctx->pc = 0x3990F0u;
    SET_GPR_U32(ctx, 31, 0x3990F8u);
    ctx->pc = 0x3990F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3990F0u;
    // 0x3990f4: 0x30a53fff  andi        $a1, $a1, 0x3FFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3990F0u, 0x3990F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3990F8u;
label_3990f8:
    // 0x3990f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3990f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3990fc:
    // 0x3990fc: 0xc0e663c  jal         func_3998F0
label_399100:
    if (ctx->pc == 0x399100u) {
        ctx->pc = 0x399100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3990FCu;
        // 0x399100: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x399104u;
        goto label_399104;
    }
    ctx->pc = 0x3990FCu;
    SET_GPR_U32(ctx, 31, 0x399104u);
    ctx->pc = 0x399100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3990FCu;
    // 0x399100: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3998F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3998F0u, 0x3990FCu, 0x399104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399104u;
label_399104:
    // 0x399104: 0x504000bd  beql        $v0, $zero, . + 4 + (0xBD << 2)
label_399108:
    if (ctx->pc == 0x399108u) {
        ctx->pc = 0x399108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399104u;
        // 0x399108: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39910Cu;
        goto label_39910c;
    }
    ctx->pc = 0x399104u;
    {
        const bool branch_taken_0x399104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x399104) {
            ctx->pc = 0x399108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399104u;
            // 0x399108: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3993FCu;
            goto label_3993fc;
        }
    }
    ctx->pc = 0x39910Cu;
label_39910c:
    // 0x39910c: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x39910cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_399110:
    // 0x399110: 0x8ea42c04  lw          $a0, 0x2C04($s5)
    ctx->pc = 0x399110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11268)));
label_399114:
    // 0x399114: 0xc0e4546  jal         func_391518
label_399118:
    if (ctx->pc == 0x399118u) {
        ctx->pc = 0x399118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399114u;
        // 0x399118: 0x30a53fff  andi        $a1, $a1, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39911Cu;
        goto label_39911c;
    }
    ctx->pc = 0x399114u;
    SET_GPR_U32(ctx, 31, 0x39911Cu);
    ctx->pc = 0x399118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399114u;
    // 0x399118: 0x30a53fff  andi        $a1, $a1, 0x3FFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    ctx->in_delay_slot = false;
    ctx->pc = 0x391518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391518u, 0x399114u, 0x39911Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39911Cu;
label_39911c:
    // 0x39911c: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x39911cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_399120:
    // 0x399120: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x399120u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_399124:
    // 0x399124: 0x8ea42c04  lw          $a0, 0x2C04($s5)
    ctx->pc = 0x399124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11268)));
label_399128:
    // 0x399128: 0xc0e454c  jal         func_391530
label_39912c:
    if (ctx->pc == 0x39912Cu) {
        ctx->pc = 0x39912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399128u;
        // 0x39912c: 0x30a53fff  andi        $a1, $a1, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        ctx->pc = 0x399130u;
        goto label_399130;
    }
    ctx->pc = 0x399128u;
    SET_GPR_U32(ctx, 31, 0x399130u);
    ctx->pc = 0x39912Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399128u;
    // 0x39912c: 0x30a53fff  andi        $a1, $a1, 0x3FFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    ctx->in_delay_slot = false;
    ctx->pc = 0x391530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391530u, 0x399128u, 0x399130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399130u;
label_399130:
    // 0x399130: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x399130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_399134:
    // 0x399134: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x399134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_399138:
    // 0x399138: 0x8e2a001c  lw          $t2, 0x1C($s1)
    ctx->pc = 0x399138u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_39913c:
    // 0x39913c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x39913cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_399140:
    // 0x399140: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x399140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_399144:
    // 0x399144: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x399144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_399148:
    // 0x399148: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x399148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_39914c:
    // 0x39914c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x39914cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_399150:
    // 0x399150: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x399150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_399154:
    // 0x399154: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x399154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_399158:
    // 0x399158: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x399158u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_39915c:
    // 0x39915c: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x39915cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_399160:
    // 0x399160: 0x39490fff  xori        $t1, $t2, 0xFFF
    ctx->pc = 0x399160u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)4095);
label_399164:
    // 0x399164: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x399164u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_399168:
    // 0x399168: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x399168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_39916c:
    // 0x39916c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x39916cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_399170:
    // 0x399170: 0x86230004  lh          $v1, 0x4($s1)
    ctx->pc = 0x399170u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_399174:
    // 0x399174: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x399174u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_399178:
    // 0x399178: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x399178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_39917c:
    // 0x39917c: 0xe4e1000c  swc1        $f1, 0xC($a3)
    ctx->pc = 0x39917cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_399180:
    // 0x399180: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x399180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_399184:
    // 0x399184: 0xafa80020  sw          $t0, 0x20($sp)
    ctx->pc = 0x399184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 8));
label_399188:
    // 0x399188: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x399188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
label_39918c:
    // 0x39918c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x39918cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_399190:
    // 0x399190: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x399190u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_399194:
    // 0x399194: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x399194u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_399198:
    // 0x399198: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x399198u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_39919c:
    // 0x39919c: 0x4be2093e  vitof12.xyzw $vf2, $vf1
    ctx->pc = 0x39919cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(0.000244140625f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3991a0:
    // 0x3991a0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3991a0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3991a4:
    // 0x3991a4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3991a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3991a8:
    // 0x3991a8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3991a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3991ac:
    // 0x3991ac: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x3991acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_3991b0:
    // 0x3991b0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3991b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3991b4:
    // 0x3991b4: 0x15200005  bnez        $t1, . + 4 + (0x5 << 2)
label_3991b8:
    if (ctx->pc == 0x3991B8u) {
        ctx->pc = 0x3991B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3991B4u;
        // 0x3991b8: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3991BCu;
        goto label_3991bc;
    }
    ctx->pc = 0x3991B4u;
    {
        const bool branch_taken_0x3991b4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3991B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3991B4u;
        // 0x3991b8: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3991b4) {
            ctx->pc = 0x3991CCu;
            goto label_3991cc;
        }
    }
    ctx->pc = 0x3991BCu;
label_3991bc:
    // 0x3991bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3991bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3991c0:
    // 0x3991c0: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x3991c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_3991c4:
    // 0x3991c4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3991c8:
    if (ctx->pc == 0x3991C8u) {
        ctx->pc = 0x3991C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3991C4u;
        // 0x3991c8: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3991CCu;
        goto label_3991cc;
    }
    ctx->pc = 0x3991C4u;
    {
        const bool branch_taken_0x3991c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3991C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3991C4u;
        // 0x3991c8: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3991c4) {
            ctx->pc = 0x3991D0u;
            goto label_3991d0;
        }
    }
    ctx->pc = 0x3991CCu;
label_3991cc:
    // 0x3991cc: 0xafaa0050  sw          $t2, 0x50($sp)
    ctx->pc = 0x3991ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 10));
label_3991d0:
    // 0x3991d0: 0xe614004c  swc1        $f20, 0x4C($s0)
    ctx->pc = 0x3991d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
label_3991d4:
    // 0x3991d4: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x3991d4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_3991d8:
    // 0x3991d8: 0x8e642c7c  lw          $a0, 0x2C7C($s3)
    ctx->pc = 0x3991d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
label_3991dc:
    // 0x3991dc: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x3991dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3991e0:
    // 0x3991e0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3991e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3991e4:
    // 0x3991e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3991e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3991e8:
    // 0x3991e8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3991e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3991ec:
    // 0x3991ec: 0x214c2  srl         $v0, $v0, 19
    ctx->pc = 0x3991ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 19));
label_3991f0:
    // 0x3991f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3991f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3991f4:
    // 0x3991f4: 0xc0e8b48  jal         func_3A2D20
label_3991f8:
    if (ctx->pc == 0x3991F8u) {
        ctx->pc = 0x3991F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3991F4u;
        // 0x3991f8: 0x2e2800b  movn        $s0, $s7, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3991FCu;
        goto label_3991fc;
    }
    ctx->pc = 0x3991F4u;
    SET_GPR_U32(ctx, 31, 0x3991FCu);
    ctx->pc = 0x3991F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3991F4u;
    // 0x3991f8: 0x2e2800b  movn        $s0, $s7, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3991F4u, 0x3991FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3991FCu;
label_3991fc:
    // 0x3991fc: 0x8e642c7c  lw          $a0, 0x2C7C($s3)
    ctx->pc = 0x3991fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
label_399200:
    // 0x399200: 0xc0e8b58  jal         func_3A2D60
label_399204:
    if (ctx->pc == 0x399204u) {
        ctx->pc = 0x399204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399200u;
        // 0x399204: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399208u;
        goto label_399208;
    }
    ctx->pc = 0x399200u;
    SET_GPR_U32(ctx, 31, 0x399208u);
    ctx->pc = 0x399204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399200u;
    // 0x399204: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x399200u, 0x399208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399208u;
label_399208:
    // 0x399208: 0x8e642c7c  lw          $a0, 0x2C7C($s3)
    ctx->pc = 0x399208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
label_39920c:
    // 0x39920c: 0xc0e8b58  jal         func_3A2D60
label_399210:
    if (ctx->pc == 0x399210u) {
        ctx->pc = 0x399210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39920Cu;
        // 0x399210: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399214u;
        goto label_399214;
    }
    ctx->pc = 0x39920Cu;
    SET_GPR_U32(ctx, 31, 0x399214u);
    ctx->pc = 0x399210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39920Cu;
    // 0x399210: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x39920Cu, 0x399214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399214u;
label_399214:
    // 0x399214: 0xc0e4060  jal         func_390180
label_399218:
    if (ctx->pc == 0x399218u) {
        ctx->pc = 0x399218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399214u;
        // 0x399218: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39921Cu;
        goto label_39921c;
    }
    ctx->pc = 0x399214u;
    SET_GPR_U32(ctx, 31, 0x39921Cu);
    ctx->pc = 0x399218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399214u;
    // 0x399218: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x399214u, 0x39921Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39921Cu;
label_39921c:
    // 0x39921c: 0x8e642c7c  lw          $a0, 0x2C7C($s3)
    ctx->pc = 0x39921cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
label_399220:
    // 0x399220: 0xc0e8b70  jal         func_3A2DC0
label_399224:
    if (ctx->pc == 0x399224u) {
        ctx->pc = 0x399224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399220u;
        // 0x399224: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399228u;
        goto label_399228;
    }
    ctx->pc = 0x399220u;
    SET_GPR_U32(ctx, 31, 0x399228u);
    ctx->pc = 0x399224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399220u;
    // 0x399224: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x399220u, 0x399228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399228u;
label_399228:
    // 0x399228: 0x8e642c7c  lw          $a0, 0x2C7C($s3)
    ctx->pc = 0x399228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
label_39922c:
    // 0x39922c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x39922cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_399230:
    // 0x399230: 0xc0e8b98  jal         func_3A2E60
label_399234:
    if (ctx->pc == 0x399234u) {
        ctx->pc = 0x399234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399230u;
        // 0x399234: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399238u;
        goto label_399238;
    }
    ctx->pc = 0x399230u;
    SET_GPR_U32(ctx, 31, 0x399238u);
    ctx->pc = 0x399234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399230u;
    // 0x399234: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E60u, 0x399230u, 0x399238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399238u;
label_399238:
    // 0x399238: 0x8e642c7c  lw          $a0, 0x2C7C($s3)
    ctx->pc = 0x399238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
label_39923c:
    // 0x39923c: 0xc0e8b50  jal         func_3A2D40
label_399240:
    if (ctx->pc == 0x399240u) {
        ctx->pc = 0x399240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39923Cu;
        // 0x399240: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399244u;
        goto label_399244;
    }
    ctx->pc = 0x39923Cu;
    SET_GPR_U32(ctx, 31, 0x399244u);
    ctx->pc = 0x399240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39923Cu;
    // 0x399240: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x39923Cu, 0x399244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399244u;
label_399244:
    // 0x399244: 0x1240006d  beqz        $s2, . + 4 + (0x6D << 2)
label_399248:
    if (ctx->pc == 0x399248u) {
        ctx->pc = 0x399248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399244u;
        // 0x399248: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39924Cu;
        goto label_39924c;
    }
    ctx->pc = 0x399244u;
    {
        const bool branch_taken_0x399244 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x399248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399244u;
        // 0x399248: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399244) {
            ctx->pc = 0x3993FCu;
            goto label_3993fc;
        }
    }
    ctx->pc = 0x39924Cu;
label_39924c:
    // 0x39924c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x39924cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_399250:
    // 0x399250: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x399250u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_399254:
    // 0x399254: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x399254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_399258:
    // 0x399258: 0x40f809  jalr        $v0
label_39925c:
    if (ctx->pc == 0x39925Cu) {
        ctx->pc = 0x39925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399258u;
        // 0x39925c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399260u;
        goto label_399260;
    }
    ctx->pc = 0x399258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x399260u);
        ctx->pc = 0x39925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399258u;
        // 0x39925c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399258u, 0x399260u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x399260u;
label_399260:
    // 0x399260: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x399260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_399264:
    // 0x399264: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x399264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
label_399268:
    // 0x399268: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x399268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_39926c:
    // 0x39926c: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x39926cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
label_399270:
    // 0x399270: 0x87a50056  lh          $a1, 0x56($sp)
    ctx->pc = 0x399270u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 86)));
label_399274:
    // 0x399274: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x399274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_399278:
    // 0x399278: 0xa6250024  sh          $a1, 0x24($s1)
    ctx->pc = 0x399278u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 5));
label_39927c:
    // 0x39927c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x39927cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_399280:
    // 0x399280: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x399280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_399284:
    // 0x399284: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x399284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_399288:
    // 0x399288: 0xc0e57ce  jal         func_395F38
label_39928c:
    if (ctx->pc == 0x39928Cu) {
        ctx->pc = 0x39928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399288u;
        // 0x39928c: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399290u;
        goto label_399290;
    }
    ctx->pc = 0x399288u;
    SET_GPR_U32(ctx, 31, 0x399290u);
    ctx->pc = 0x39928Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399288u;
    // 0x39928c: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x399288u, 0x399290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399290u;
label_399290:
    // 0x399290: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x399290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_399294:
    // 0x399294: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_399298:
    if (ctx->pc == 0x399298u) {
        ctx->pc = 0x399298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399294u;
        // 0x399298: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39929Cu;
        goto label_39929c;
    }
    ctx->pc = 0x399294u;
    {
        const bool branch_taken_0x399294 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x399294) {
            ctx->pc = 0x399298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399294u;
            // 0x399298: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3992BCu;
            goto label_3992bc;
        }
    }
    ctx->pc = 0x39929Cu;
label_39929c:
    // 0x39929c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x39929cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3992a0:
    // 0x3992a0: 0xae0200cc  sw          $v0, 0xCC($s0)
    ctx->pc = 0x3992a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
label_3992a4:
    // 0x3992a4: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x3992a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3992a8:
    // 0x3992a8: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x3992a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_3992ac:
    // 0x3992ac: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x3992acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3992b0:
    // 0x3992b0: 0x21582  srl         $v0, $v0, 22
    ctx->pc = 0x3992b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 22));
label_3992b4:
    // 0x3992b4: 0xa6020114  sh          $v0, 0x114($s0)
    ctx->pc = 0x3992b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 276), (uint16_t)GPR_U32(ctx, 2));
label_3992b8:
    // 0x3992b8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3992b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3992bc:
    // 0x3992bc: 0x21542  srl         $v0, $v0, 21
    ctx->pc = 0x3992bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 21));
label_3992c0:
    // 0x3992c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3992c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3992c4:
    // 0x3992c4: 0x5454000a  bnel        $v0, $s4, . + 4 + (0xA << 2)
label_3992c8:
    if (ctx->pc == 0x3992C8u) {
        ctx->pc = 0x3992C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3992C4u;
        // 0x3992c8: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3992CCu;
        goto label_3992cc;
    }
    ctx->pc = 0x3992C4u;
    {
        const bool branch_taken_0x3992c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x3992c4) {
            ctx->pc = 0x3992C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3992C4u;
            // 0x3992c8: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3992F0u;
            goto label_3992f0;
        }
    }
    ctx->pc = 0x3992CCu;
label_3992cc:
    // 0x3992cc: 0xc0e8b48  jal         func_3A2D20
label_3992d0:
    if (ctx->pc == 0x3992D0u) {
        ctx->pc = 0x3992D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3992CCu;
        // 0x3992d0: 0x8e642c7c  lw          $a0, 0x2C7C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3992D4u;
        goto label_3992d4;
    }
    ctx->pc = 0x3992CCu;
    SET_GPR_U32(ctx, 31, 0x3992D4u);
    ctx->pc = 0x3992D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3992CCu;
    // 0x3992d0: 0x8e642c7c  lw          $a0, 0x2C7C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3992CCu, 0x3992D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3992D4u;
label_3992d4:
    // 0x3992d4: 0x8e642c7c  lw          $a0, 0x2C7C($s3)
    ctx->pc = 0x3992d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
label_3992d8:
    // 0x3992d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3992d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3992dc:
    // 0x3992dc: 0xc0e8b80  jal         func_3A2E00
label_3992e0:
    if (ctx->pc == 0x3992E0u) {
        ctx->pc = 0x3992E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3992DCu;
        // 0x3992e0: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3992E4u;
        goto label_3992e4;
    }
    ctx->pc = 0x3992DCu;
    SET_GPR_U32(ctx, 31, 0x3992E4u);
    ctx->pc = 0x3992E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3992DCu;
    // 0x3992e0: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x3992DCu, 0x3992E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3992E4u;
label_3992e4:
    // 0x3992e4: 0xc0e8b50  jal         func_3A2D40
label_3992e8:
    if (ctx->pc == 0x3992E8u) {
        ctx->pc = 0x3992E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3992E4u;
        // 0x3992e8: 0x8e642c7c  lw          $a0, 0x2C7C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3992ECu;
        goto label_3992ec;
    }
    ctx->pc = 0x3992E4u;
    SET_GPR_U32(ctx, 31, 0x3992ECu);
    ctx->pc = 0x3992E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3992E4u;
    // 0x3992e8: 0x8e642c7c  lw          $a0, 0x2C7C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3992E4u, 0x3992ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3992ECu;
label_3992ec:
    // 0x3992ec: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3992ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3992f0:
    // 0x3992f0: 0x21582  srl         $v0, $v0, 22
    ctx->pc = 0x3992f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 22));
label_3992f4:
    // 0x3992f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3992f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3992f8:
    // 0x3992f8: 0x54540005  bnel        $v0, $s4, . + 4 + (0x5 << 2)
label_3992fc:
    if (ctx->pc == 0x3992FCu) {
        ctx->pc = 0x3992FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3992F8u;
        // 0x3992fc: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399300u;
        goto label_399300;
    }
    ctx->pc = 0x3992F8u;
    {
        const bool branch_taken_0x3992f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x3992f8) {
            ctx->pc = 0x3992FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3992F8u;
            // 0x3992fc: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399310u;
            goto label_399310;
        }
    }
    ctx->pc = 0x399300u;
label_399300:
    // 0x399300: 0xc0e57ce  jal         func_395F38
label_399304:
    if (ctx->pc == 0x399304u) {
        ctx->pc = 0x399304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399300u;
        // 0x399304: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399308u;
        goto label_399308;
    }
    ctx->pc = 0x399300u;
    SET_GPR_U32(ctx, 31, 0x399308u);
    ctx->pc = 0x399304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399300u;
    // 0x399304: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x399300u, 0x399308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399308u;
label_399308:
    // 0x399308: 0xac570124  sw          $s7, 0x124($v0)
    ctx->pc = 0x399308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 23));
label_39930c:
    // 0x39930c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x39930cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_399310:
    // 0x399310: 0x215c2  srl         $v0, $v0, 23
    ctx->pc = 0x399310u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
label_399314:
    // 0x399314: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x399314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_399318:
    // 0x399318: 0x54540006  bnel        $v0, $s4, . + 4 + (0x6 << 2)
label_39931c:
    if (ctx->pc == 0x39931Cu) {
        ctx->pc = 0x39931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399318u;
        // 0x39931c: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399320u;
        goto label_399320;
    }
    ctx->pc = 0x399318u;
    {
        const bool branch_taken_0x399318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x399318) {
            ctx->pc = 0x39931Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399318u;
            // 0x39931c: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399334u;
            goto label_399334;
        }
    }
    ctx->pc = 0x399320u;
label_399320:
    // 0x399320: 0xc0e57ce  jal         func_395F38
label_399324:
    if (ctx->pc == 0x399324u) {
        ctx->pc = 0x399324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399320u;
        // 0x399324: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399328u;
        goto label_399328;
    }
    ctx->pc = 0x399320u;
    SET_GPR_U32(ctx, 31, 0x399328u);
    ctx->pc = 0x399324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399320u;
    // 0x399324: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x399320u, 0x399328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399328u;
label_399328:
    // 0x399328: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x399328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39932c:
    // 0x39932c: 0xac430124  sw          $v1, 0x124($v0)
    ctx->pc = 0x39932cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 3));
label_399330:
    // 0x399330: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x399330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_399334:
    // 0x399334: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x399334u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
label_399338:
    // 0x399338: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x399338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_39933c:
    // 0x39933c: 0x5454000f  bnel        $v0, $s4, . + 4 + (0xF << 2)
label_399340:
    if (ctx->pc == 0x399340u) {
        ctx->pc = 0x399340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39933Cu;
        // 0x399340: 0x8e250020  lw          $a1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399344u;
        goto label_399344;
    }
    ctx->pc = 0x39933Cu;
    {
        const bool branch_taken_0x39933c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x39933c) {
            ctx->pc = 0x399340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39933Cu;
            // 0x399340: 0x8e250020  lw          $a1, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39937Cu;
            goto label_39937c;
        }
    }
    ctx->pc = 0x399344u;
label_399344:
    // 0x399344: 0xc0e8b48  jal         func_3A2D20
label_399348:
    if (ctx->pc == 0x399348u) {
        ctx->pc = 0x399348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399344u;
        // 0x399348: 0x8e642c7c  lw          $a0, 0x2C7C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39934Cu;
        goto label_39934c;
    }
    ctx->pc = 0x399344u;
    SET_GPR_U32(ctx, 31, 0x39934Cu);
    ctx->pc = 0x399348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399344u;
    // 0x399348: 0x8e642c7c  lw          $a0, 0x2C7C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x399344u, 0x39934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39934Cu;
label_39934c:
    // 0x39934c: 0x8e642c7c  lw          $a0, 0x2C7C($s3)
    ctx->pc = 0x39934cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
label_399350:
    // 0x399350: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x399350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_399354:
    // 0x399354: 0xc0e8b80  jal         func_3A2E00
label_399358:
    if (ctx->pc == 0x399358u) {
        ctx->pc = 0x399358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399354u;
        // 0x399358: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39935Cu;
        goto label_39935c;
    }
    ctx->pc = 0x399354u;
    SET_GPR_U32(ctx, 31, 0x39935Cu);
    ctx->pc = 0x399358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399354u;
    // 0x399358: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x399354u, 0x39935Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39935Cu;
label_39935c:
    // 0x39935c: 0xc0e8b50  jal         func_3A2D40
label_399360:
    if (ctx->pc == 0x399360u) {
        ctx->pc = 0x399360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39935Cu;
        // 0x399360: 0x8e642c7c  lw          $a0, 0x2C7C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399364u;
        goto label_399364;
    }
    ctx->pc = 0x39935Cu;
    SET_GPR_U32(ctx, 31, 0x399364u);
    ctx->pc = 0x399360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39935Cu;
    // 0x399360: 0x8e642c7c  lw          $a0, 0x2C7C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x39935Cu, 0x399364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399364u;
label_399364:
    // 0x399364: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_399368:
    if (ctx->pc == 0x399368u) {
        ctx->pc = 0x399368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399364u;
        // 0x399368: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39936Cu;
        goto label_39936c;
    }
    ctx->pc = 0x399364u;
    {
        const bool branch_taken_0x399364 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x399368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399364u;
        // 0x399368: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399364) {
            ctx->pc = 0x399378u;
            goto label_399378;
        }
    }
    ctx->pc = 0x39936Cu;
label_39936c:
    // 0x39936c: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x39936cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_399370:
    // 0x399370: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x399370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_399374:
    // 0x399374: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x399374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_399378:
    // 0x399378: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x399378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_39937c:
    // 0x39937c: 0x8ea42c04  lw          $a0, 0x2C04($s5)
    ctx->pc = 0x39937cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11268)));
label_399380:
    // 0x399380: 0xc0e44cc  jal         func_391330
label_399384:
    if (ctx->pc == 0x399384u) {
        ctx->pc = 0x399384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399380u;
        // 0x399384: 0x30a53fff  andi        $a1, $a1, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        ctx->pc = 0x399388u;
        goto label_399388;
    }
    ctx->pc = 0x399380u;
    SET_GPR_U32(ctx, 31, 0x399388u);
    ctx->pc = 0x399384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399380u;
    // 0x399384: 0x30a53fff  andi        $a1, $a1, 0x3FFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x399380u, 0x399388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399388u;
label_399388:
    // 0x399388: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x399388u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_39938c:
    // 0x39938c: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x39938cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_399390:
    // 0x399390: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
label_399394:
    if (ctx->pc == 0x399394u) {
        ctx->pc = 0x399394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399390u;
        // 0x399394: 0x8e250024  lw          $a1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399398u;
        goto label_399398;
    }
    ctx->pc = 0x399390u;
    {
        const bool branch_taken_0x399390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x399390) {
            ctx->pc = 0x399394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399390u;
            // 0x399394: 0x8e250024  lw          $a1, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3993C4u;
            goto label_3993c4;
        }
    }
    ctx->pc = 0x399398u;
label_399398:
    // 0x399398: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x399398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_39939c:
    // 0x39939c: 0x21642  srl         $v0, $v0, 25
    ctx->pc = 0x39939cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 25));
label_3993a0:
    // 0x3993a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3993a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3993a4:
    // 0x3993a4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_3993a8:
    if (ctx->pc == 0x3993A8u) {
        ctx->pc = 0x3993A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3993A4u;
        // 0x3993a8: 0x8e250024  lw          $a1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3993ACu;
        goto label_3993ac;
    }
    ctx->pc = 0x3993A4u;
    {
        const bool branch_taken_0x3993a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3993a4) {
            ctx->pc = 0x3993A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3993A4u;
            // 0x3993a8: 0x8e250024  lw          $a1, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3993C4u;
            goto label_3993c4;
        }
    }
    ctx->pc = 0x3993ACu;
label_3993ac:
    // 0x3993ac: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3993acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3993b0:
    // 0x3993b0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3993b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3993b4:
    // 0x3993b4: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x3993b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_3993b8:
    // 0x3993b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3993b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3993bc:
    // 0x3993bc: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3993bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3993c0:
    // 0x3993c0: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x3993c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3993c4:
    // 0x3993c4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3993c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3993c8:
    // 0x3993c8: 0x51682  srl         $v0, $a1, 26
    ctx->pc = 0x3993c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 26));
label_3993cc:
    // 0x3993cc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3993ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_3993d0:
    // 0x3993d0: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
label_3993d4:
    if (ctx->pc == 0x3993D4u) {
        ctx->pc = 0x3993D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3993D0u;
        // 0x3993d4: 0x52e82  srl         $a1, $a1, 26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3993D8u;
        goto label_3993d8;
    }
    ctx->pc = 0x3993D0u;
    {
        const bool branch_taken_0x3993d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3993D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3993D0u;
        // 0x3993d4: 0x52e82  srl         $a1, $a1, 26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3993d0) {
            ctx->pc = 0x3993F8u;
            goto label_3993f8;
        }
    }
    ctx->pc = 0x3993D8u;
label_3993d8:
    // 0x3993d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3993d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3993dc:
    // 0x3993dc: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x3993dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_3993e0:
    // 0x3993e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3993e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3993e4:
    // 0x3993e4: 0x84640120  lh          $a0, 0x120($v1)
    ctx->pc = 0x3993e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 288)));
label_3993e8:
    // 0x3993e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3993e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3993ec:
    // 0x3993ec: 0x8c620124  lw          $v0, 0x124($v1)
    ctx->pc = 0x3993ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
label_3993f0:
    // 0x3993f0: 0x40f809  jalr        $v0
label_3993f4:
    if (ctx->pc == 0x3993F4u) {
        ctx->pc = 0x3993F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3993F0u;
        // 0x3993f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3993F8u;
        goto label_3993f8;
    }
    ctx->pc = 0x3993F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3993F8u);
        ctx->pc = 0x3993F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3993F0u;
        // 0x3993f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3993F0u, 0x3993F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3993F8u;
label_3993f8:
    // 0x3993f8: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x3993f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3993fc:
    // 0x3993fc: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3993fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_399400:
    // 0x399400: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x399400u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_399404:
    // 0x399404: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x399404u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_399408:
    // 0x399408: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x399408u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_39940c:
    // 0x39940c: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x39940cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_399410:
    // 0x399410: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x399410u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_399414:
    // 0x399414: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x399414u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_399418:
    // 0x399418: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x399418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_39941c:
    // 0x39941c: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x39941cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_399420:
    // 0x399420: 0x3e00008  jr          $ra
label_399424:
    if (ctx->pc == 0x399424u) {
        ctx->pc = 0x399424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399420u;
        // 0x399424: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399428u;
        goto label_fallthrough_0x399420;
    }
    ctx->pc = 0x399420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399420u;
        // 0x399424: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x399420:
    ctx->pc = 0x399428u;
}
