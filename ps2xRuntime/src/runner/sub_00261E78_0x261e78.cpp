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

// Function: sub_00261E78
// Address: 0x261e78 - 0x262368
void sub_00261E78_0x261e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261E78_0x261e78");
#endif

    switch (ctx->pc) {
        case 0x261e78u: goto label_261e78;
        case 0x261e7cu: goto label_261e7c;
        case 0x261e80u: goto label_261e80;
        case 0x261e84u: goto label_261e84;
        case 0x261e88u: goto label_261e88;
        case 0x261e8cu: goto label_261e8c;
        case 0x261e90u: goto label_261e90;
        case 0x261e94u: goto label_261e94;
        case 0x261e98u: goto label_261e98;
        case 0x261e9cu: goto label_261e9c;
        case 0x261ea0u: goto label_261ea0;
        case 0x261ea4u: goto label_261ea4;
        case 0x261ea8u: goto label_261ea8;
        case 0x261eacu: goto label_261eac;
        case 0x261eb0u: goto label_261eb0;
        case 0x261eb4u: goto label_261eb4;
        case 0x261eb8u: goto label_261eb8;
        case 0x261ebcu: goto label_261ebc;
        case 0x261ec0u: goto label_261ec0;
        case 0x261ec4u: goto label_261ec4;
        case 0x261ec8u: goto label_261ec8;
        case 0x261eccu: goto label_261ecc;
        case 0x261ed0u: goto label_261ed0;
        case 0x261ed4u: goto label_261ed4;
        case 0x261ed8u: goto label_261ed8;
        case 0x261edcu: goto label_261edc;
        case 0x261ee0u: goto label_261ee0;
        case 0x261ee4u: goto label_261ee4;
        case 0x261ee8u: goto label_261ee8;
        case 0x261eecu: goto label_261eec;
        case 0x261ef0u: goto label_261ef0;
        case 0x261ef4u: goto label_261ef4;
        case 0x261ef8u: goto label_261ef8;
        case 0x261efcu: goto label_261efc;
        case 0x261f00u: goto label_261f00;
        case 0x261f04u: goto label_261f04;
        case 0x261f08u: goto label_261f08;
        case 0x261f0cu: goto label_261f0c;
        case 0x261f10u: goto label_261f10;
        case 0x261f14u: goto label_261f14;
        case 0x261f18u: goto label_261f18;
        case 0x261f1cu: goto label_261f1c;
        case 0x261f20u: goto label_261f20;
        case 0x261f24u: goto label_261f24;
        case 0x261f28u: goto label_261f28;
        case 0x261f2cu: goto label_261f2c;
        case 0x261f30u: goto label_261f30;
        case 0x261f34u: goto label_261f34;
        case 0x261f38u: goto label_261f38;
        case 0x261f3cu: goto label_261f3c;
        case 0x261f40u: goto label_261f40;
        case 0x261f44u: goto label_261f44;
        case 0x261f48u: goto label_261f48;
        case 0x261f4cu: goto label_261f4c;
        case 0x261f50u: goto label_261f50;
        case 0x261f54u: goto label_261f54;
        case 0x261f58u: goto label_261f58;
        case 0x261f5cu: goto label_261f5c;
        case 0x261f60u: goto label_261f60;
        case 0x261f64u: goto label_261f64;
        case 0x261f68u: goto label_261f68;
        case 0x261f6cu: goto label_261f6c;
        case 0x261f70u: goto label_261f70;
        case 0x261f74u: goto label_261f74;
        case 0x261f78u: goto label_261f78;
        case 0x261f7cu: goto label_261f7c;
        case 0x261f80u: goto label_261f80;
        case 0x261f84u: goto label_261f84;
        case 0x261f88u: goto label_261f88;
        case 0x261f8cu: goto label_261f8c;
        case 0x261f90u: goto label_261f90;
        case 0x261f94u: goto label_261f94;
        case 0x261f98u: goto label_261f98;
        case 0x261f9cu: goto label_261f9c;
        case 0x261fa0u: goto label_261fa0;
        case 0x261fa4u: goto label_261fa4;
        case 0x261fa8u: goto label_261fa8;
        case 0x261facu: goto label_261fac;
        case 0x261fb0u: goto label_261fb0;
        case 0x261fb4u: goto label_261fb4;
        case 0x261fb8u: goto label_261fb8;
        case 0x261fbcu: goto label_261fbc;
        case 0x261fc0u: goto label_261fc0;
        case 0x261fc4u: goto label_261fc4;
        case 0x261fc8u: goto label_261fc8;
        case 0x261fccu: goto label_261fcc;
        case 0x261fd0u: goto label_261fd0;
        case 0x261fd4u: goto label_261fd4;
        case 0x261fd8u: goto label_261fd8;
        case 0x261fdcu: goto label_261fdc;
        case 0x261fe0u: goto label_261fe0;
        case 0x261fe4u: goto label_261fe4;
        case 0x261fe8u: goto label_261fe8;
        case 0x261fecu: goto label_261fec;
        case 0x261ff0u: goto label_261ff0;
        case 0x261ff4u: goto label_261ff4;
        case 0x261ff8u: goto label_261ff8;
        case 0x261ffcu: goto label_261ffc;
        case 0x262000u: goto label_262000;
        case 0x262004u: goto label_262004;
        case 0x262008u: goto label_262008;
        case 0x26200cu: goto label_26200c;
        case 0x262010u: goto label_262010;
        case 0x262014u: goto label_262014;
        case 0x262018u: goto label_262018;
        case 0x26201cu: goto label_26201c;
        case 0x262020u: goto label_262020;
        case 0x262024u: goto label_262024;
        case 0x262028u: goto label_262028;
        case 0x26202cu: goto label_26202c;
        case 0x262030u: goto label_262030;
        case 0x262034u: goto label_262034;
        case 0x262038u: goto label_262038;
        case 0x26203cu: goto label_26203c;
        case 0x262040u: goto label_262040;
        case 0x262044u: goto label_262044;
        case 0x262048u: goto label_262048;
        case 0x26204cu: goto label_26204c;
        case 0x262050u: goto label_262050;
        case 0x262054u: goto label_262054;
        case 0x262058u: goto label_262058;
        case 0x26205cu: goto label_26205c;
        case 0x262060u: goto label_262060;
        case 0x262064u: goto label_262064;
        case 0x262068u: goto label_262068;
        case 0x26206cu: goto label_26206c;
        case 0x262070u: goto label_262070;
        case 0x262074u: goto label_262074;
        case 0x262078u: goto label_262078;
        case 0x26207cu: goto label_26207c;
        case 0x262080u: goto label_262080;
        case 0x262084u: goto label_262084;
        case 0x262088u: goto label_262088;
        case 0x26208cu: goto label_26208c;
        case 0x262090u: goto label_262090;
        case 0x262094u: goto label_262094;
        case 0x262098u: goto label_262098;
        case 0x26209cu: goto label_26209c;
        case 0x2620a0u: goto label_2620a0;
        case 0x2620a4u: goto label_2620a4;
        case 0x2620a8u: goto label_2620a8;
        case 0x2620acu: goto label_2620ac;
        case 0x2620b0u: goto label_2620b0;
        case 0x2620b4u: goto label_2620b4;
        case 0x2620b8u: goto label_2620b8;
        case 0x2620bcu: goto label_2620bc;
        case 0x2620c0u: goto label_2620c0;
        case 0x2620c4u: goto label_2620c4;
        case 0x2620c8u: goto label_2620c8;
        case 0x2620ccu: goto label_2620cc;
        case 0x2620d0u: goto label_2620d0;
        case 0x2620d4u: goto label_2620d4;
        case 0x2620d8u: goto label_2620d8;
        case 0x2620dcu: goto label_2620dc;
        case 0x2620e0u: goto label_2620e0;
        case 0x2620e4u: goto label_2620e4;
        case 0x2620e8u: goto label_2620e8;
        case 0x2620ecu: goto label_2620ec;
        case 0x2620f0u: goto label_2620f0;
        case 0x2620f4u: goto label_2620f4;
        case 0x2620f8u: goto label_2620f8;
        case 0x2620fcu: goto label_2620fc;
        case 0x262100u: goto label_262100;
        case 0x262104u: goto label_262104;
        case 0x262108u: goto label_262108;
        case 0x26210cu: goto label_26210c;
        case 0x262110u: goto label_262110;
        case 0x262114u: goto label_262114;
        case 0x262118u: goto label_262118;
        case 0x26211cu: goto label_26211c;
        case 0x262120u: goto label_262120;
        case 0x262124u: goto label_262124;
        case 0x262128u: goto label_262128;
        case 0x26212cu: goto label_26212c;
        case 0x262130u: goto label_262130;
        case 0x262134u: goto label_262134;
        case 0x262138u: goto label_262138;
        case 0x26213cu: goto label_26213c;
        case 0x262140u: goto label_262140;
        case 0x262144u: goto label_262144;
        case 0x262148u: goto label_262148;
        case 0x26214cu: goto label_26214c;
        case 0x262150u: goto label_262150;
        case 0x262154u: goto label_262154;
        case 0x262158u: goto label_262158;
        case 0x26215cu: goto label_26215c;
        case 0x262160u: goto label_262160;
        case 0x262164u: goto label_262164;
        case 0x262168u: goto label_262168;
        case 0x26216cu: goto label_26216c;
        case 0x262170u: goto label_262170;
        case 0x262174u: goto label_262174;
        case 0x262178u: goto label_262178;
        case 0x26217cu: goto label_26217c;
        case 0x262180u: goto label_262180;
        case 0x262184u: goto label_262184;
        case 0x262188u: goto label_262188;
        case 0x26218cu: goto label_26218c;
        case 0x262190u: goto label_262190;
        case 0x262194u: goto label_262194;
        case 0x262198u: goto label_262198;
        case 0x26219cu: goto label_26219c;
        case 0x2621a0u: goto label_2621a0;
        case 0x2621a4u: goto label_2621a4;
        case 0x2621a8u: goto label_2621a8;
        case 0x2621acu: goto label_2621ac;
        case 0x2621b0u: goto label_2621b0;
        case 0x2621b4u: goto label_2621b4;
        case 0x2621b8u: goto label_2621b8;
        case 0x2621bcu: goto label_2621bc;
        case 0x2621c0u: goto label_2621c0;
        case 0x2621c4u: goto label_2621c4;
        case 0x2621c8u: goto label_2621c8;
        case 0x2621ccu: goto label_2621cc;
        case 0x2621d0u: goto label_2621d0;
        case 0x2621d4u: goto label_2621d4;
        case 0x2621d8u: goto label_2621d8;
        case 0x2621dcu: goto label_2621dc;
        case 0x2621e0u: goto label_2621e0;
        case 0x2621e4u: goto label_2621e4;
        case 0x2621e8u: goto label_2621e8;
        case 0x2621ecu: goto label_2621ec;
        case 0x2621f0u: goto label_2621f0;
        case 0x2621f4u: goto label_2621f4;
        case 0x2621f8u: goto label_2621f8;
        case 0x2621fcu: goto label_2621fc;
        case 0x262200u: goto label_262200;
        case 0x262204u: goto label_262204;
        case 0x262208u: goto label_262208;
        case 0x26220cu: goto label_26220c;
        case 0x262210u: goto label_262210;
        case 0x262214u: goto label_262214;
        case 0x262218u: goto label_262218;
        case 0x26221cu: goto label_26221c;
        case 0x262220u: goto label_262220;
        case 0x262224u: goto label_262224;
        case 0x262228u: goto label_262228;
        case 0x26222cu: goto label_26222c;
        case 0x262230u: goto label_262230;
        case 0x262234u: goto label_262234;
        case 0x262238u: goto label_262238;
        case 0x26223cu: goto label_26223c;
        case 0x262240u: goto label_262240;
        case 0x262244u: goto label_262244;
        case 0x262248u: goto label_262248;
        case 0x26224cu: goto label_26224c;
        case 0x262250u: goto label_262250;
        case 0x262254u: goto label_262254;
        case 0x262258u: goto label_262258;
        case 0x26225cu: goto label_26225c;
        case 0x262260u: goto label_262260;
        case 0x262264u: goto label_262264;
        case 0x262268u: goto label_262268;
        case 0x26226cu: goto label_26226c;
        case 0x262270u: goto label_262270;
        case 0x262274u: goto label_262274;
        case 0x262278u: goto label_262278;
        case 0x26227cu: goto label_26227c;
        case 0x262280u: goto label_262280;
        case 0x262284u: goto label_262284;
        case 0x262288u: goto label_262288;
        case 0x26228cu: goto label_26228c;
        case 0x262290u: goto label_262290;
        case 0x262294u: goto label_262294;
        case 0x262298u: goto label_262298;
        case 0x26229cu: goto label_26229c;
        case 0x2622a0u: goto label_2622a0;
        case 0x2622a4u: goto label_2622a4;
        case 0x2622a8u: goto label_2622a8;
        case 0x2622acu: goto label_2622ac;
        case 0x2622b0u: goto label_2622b0;
        case 0x2622b4u: goto label_2622b4;
        case 0x2622b8u: goto label_2622b8;
        case 0x2622bcu: goto label_2622bc;
        case 0x2622c0u: goto label_2622c0;
        case 0x2622c4u: goto label_2622c4;
        case 0x2622c8u: goto label_2622c8;
        case 0x2622ccu: goto label_2622cc;
        case 0x2622d0u: goto label_2622d0;
        case 0x2622d4u: goto label_2622d4;
        case 0x2622d8u: goto label_2622d8;
        case 0x2622dcu: goto label_2622dc;
        case 0x2622e0u: goto label_2622e0;
        case 0x2622e4u: goto label_2622e4;
        case 0x2622e8u: goto label_2622e8;
        case 0x2622ecu: goto label_2622ec;
        case 0x2622f0u: goto label_2622f0;
        case 0x2622f4u: goto label_2622f4;
        case 0x2622f8u: goto label_2622f8;
        case 0x2622fcu: goto label_2622fc;
        case 0x262300u: goto label_262300;
        case 0x262304u: goto label_262304;
        case 0x262308u: goto label_262308;
        case 0x26230cu: goto label_26230c;
        case 0x262310u: goto label_262310;
        case 0x262314u: goto label_262314;
        case 0x262318u: goto label_262318;
        case 0x26231cu: goto label_26231c;
        case 0x262320u: goto label_262320;
        case 0x262324u: goto label_262324;
        case 0x262328u: goto label_262328;
        case 0x26232cu: goto label_26232c;
        case 0x262330u: goto label_262330;
        case 0x262334u: goto label_262334;
        case 0x262338u: goto label_262338;
        case 0x26233cu: goto label_26233c;
        case 0x262340u: goto label_262340;
        case 0x262344u: goto label_262344;
        case 0x262348u: goto label_262348;
        case 0x26234cu: goto label_26234c;
        case 0x262350u: goto label_262350;
        case 0x262354u: goto label_262354;
        case 0x262358u: goto label_262358;
        case 0x26235cu: goto label_26235c;
        case 0x262360u: goto label_262360;
        case 0x262364u: goto label_262364;
        default: break;
    }

    ctx->pc = 0x261e78u;

label_261e78:
    // 0x261e78: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x261e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_261e7c:
    // 0x261e7c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x261e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_261e80:
    // 0x261e80: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x261e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_261e84:
    // 0x261e84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x261e84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_261e88:
    // 0x261e88: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x261e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_261e8c:
    // 0x261e8c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x261e8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_261e90:
    // 0x261e90: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x261e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_261e94:
    // 0x261e94: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x261e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_261e98:
    // 0x261e98: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x261e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_261e9c:
    // 0x261e9c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x261e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_261ea0:
    // 0x261ea0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x261ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_261ea4:
    // 0x261ea4: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x261ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_261ea8:
    // 0x261ea8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x261ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_261eac:
    // 0x261eac: 0xc095018  jal         func_254060
label_261eb0:
    if (ctx->pc == 0x261EB0u) {
        ctx->pc = 0x261EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261EACu;
        // 0x261eb0: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x261EB4u;
        goto label_261eb4;
    }
    ctx->pc = 0x261EACu;
    SET_GPR_U32(ctx, 31, 0x261EB4u);
    ctx->pc = 0x261EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261EACu;
    // 0x261eb0: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x261EACu, 0x261EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261EB4u;
label_261eb4:
    // 0x261eb4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x261eb4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261eb8:
    // 0x261eb8: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x261eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_261ebc:
    // 0x261ebc: 0x17c20006  bne         $fp, $v0, . + 4 + (0x6 << 2)
label_261ec0:
    if (ctx->pc == 0x261EC0u) {
        ctx->pc = 0x261EC4u;
        goto label_261ec4;
    }
    ctx->pc = 0x261EBCu;
    {
        const bool branch_taken_0x261ebc = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x261ebc) {
            ctx->pc = 0x261ED8u;
            goto label_261ed8;
        }
    }
    ctx->pc = 0x261EC4u;
label_261ec4:
    // 0x261ec4: 0xc094fca  jal         func_253F28
label_261ec8:
    if (ctx->pc == 0x261EC8u) {
        ctx->pc = 0x261EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261EC4u;
        // 0x261ec8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261ECCu;
        goto label_261ecc;
    }
    ctx->pc = 0x261EC4u;
    SET_GPR_U32(ctx, 31, 0x261ECCu);
    ctx->pc = 0x261EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261EC4u;
    // 0x261ec8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x261EC4u, 0x261ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261ECCu;
label_261ecc:
    // 0x261ecc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x261eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_261ed0:
    // 0x261ed0: 0xc0a03f6  jal         func_280FD8
label_261ed4:
    if (ctx->pc == 0x261ED4u) {
        ctx->pc = 0x261ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261ED0u;
        // 0x261ed4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261ED8u;
        goto label_261ed8;
    }
    ctx->pc = 0x261ED0u;
    SET_GPR_U32(ctx, 31, 0x261ED8u);
    ctx->pc = 0x261ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261ED0u;
    // 0x261ed4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280FD8u, 0x261ED0u, 0x261ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261ED8u;
label_261ed8:
    // 0x261ed8: 0xc08c6a0  jal         func_231A80
label_261edc:
    if (ctx->pc == 0x261EDCu) {
        ctx->pc = 0x261EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261ED8u;
        // 0x261edc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261EE0u;
        goto label_261ee0;
    }
    ctx->pc = 0x261ED8u;
    SET_GPR_U32(ctx, 31, 0x261EE0u);
    ctx->pc = 0x261EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261ED8u;
    // 0x261edc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x261ED8u, 0x261EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261EE0u;
label_261ee0:
    // 0x261ee0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x261ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261ee4:
    // 0x261ee4: 0xc094fde  jal         func_253F78
label_261ee8:
    if (ctx->pc == 0x261EE8u) {
        ctx->pc = 0x261EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261EE4u;
        // 0x261ee8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261EECu;
        goto label_261eec;
    }
    ctx->pc = 0x261EE4u;
    SET_GPR_U32(ctx, 31, 0x261EECu);
    ctx->pc = 0x261EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261EE4u;
    // 0x261ee8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F78u, 0x261EE4u, 0x261EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261EECu;
label_261eec:
    // 0x261eec: 0x2682fe29  addiu       $v0, $s4, -0x1D7
    ctx->pc = 0x261eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966825));
label_261ef0:
    // 0x261ef0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x261ef0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_261ef4:
    // 0x261ef4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_261ef8:
    if (ctx->pc == 0x261EF8u) {
        ctx->pc = 0x261EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261EF4u;
        // 0x261ef8: 0x3c040056  lui         $a0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261EFCu;
        goto label_261efc;
    }
    ctx->pc = 0x261EF4u;
    {
        const bool branch_taken_0x261ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261EF4u;
        // 0x261ef8: 0x3c040056  lui         $a0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ef4) {
            ctx->pc = 0x261F74u;
            goto label_261f74;
        }
    }
    ctx->pc = 0x261EFCu;
label_261efc:
    // 0x261efc: 0x8e5100d8  lw          $s1, 0xD8($s2)
    ctx->pc = 0x261efcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_261f00:
    // 0x261f00: 0xc041532  jal         func_1054C8
label_261f04:
    if (ctx->pc == 0x261F04u) {
        ctx->pc = 0x261F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F00u;
        // 0x261f04: 0x2484dd30  addiu       $a0, $a0, -0x22D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261F08u;
        goto label_261f08;
    }
    ctx->pc = 0x261F00u;
    SET_GPR_U32(ctx, 31, 0x261F08u);
    ctx->pc = 0x261F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261F00u;
    // 0x261f04: 0x2484dd30  addiu       $a0, $a0, -0x22D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x261F00u, 0x261F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261F08u;
label_261f08:
    // 0x261f08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x261f08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261f0c:
    // 0x261f0c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
label_261f10:
    if (ctx->pc == 0x261F10u) {
        ctx->pc = 0x261F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F0Cu;
        // 0x261f10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261F14u;
        goto label_261f14;
    }
    ctx->pc = 0x261F0Cu;
    {
        const bool branch_taken_0x261f0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x261F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F0Cu;
        // 0x261f10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f0c) {
            ctx->pc = 0x261F58u;
            goto label_261f58;
        }
    }
    ctx->pc = 0x261F14u;
label_261f14:
    // 0x261f14: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x261f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_261f18:
    // 0x261f18: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x261f18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_261f1c:
    // 0x261f1c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x261f1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_261f20:
    // 0x261f20: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x261f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_261f24:
    // 0x261f24: 0x40f809  jalr        $v0
label_261f28:
    if (ctx->pc == 0x261F28u) {
        ctx->pc = 0x261F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F24u;
        // 0x261f28: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261F2Cu;
        goto label_261f2c;
    }
    ctx->pc = 0x261F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x261F2Cu);
        ctx->pc = 0x261F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F24u;
        // 0x261f28: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261F24u, 0x261F2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261F2Cu;
label_261f2c:
    // 0x261f2c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x261f2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_261f30:
    // 0x261f30: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x261f30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_261f34:
    // 0x261f34: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x261f34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261f38:
    // 0x261f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261f3c:
    // 0x261f3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x261f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_261f40:
    // 0x261f40: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x261f40u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_261f44:
    // 0x261f44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x261f44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261f48:
    // 0x261f48: 0x3c080100  lui         $t0, 0x100
    ctx->pc = 0x261f48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)256 << 16));
label_261f4c:
    // 0x261f4c: 0xc041890  jal         func_106240
label_261f50:
    if (ctx->pc == 0x261F50u) {
        ctx->pc = 0x261F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F4Cu;
        // 0x261f50: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261F54u;
        goto label_261f54;
    }
    ctx->pc = 0x261F4Cu;
    SET_GPR_U32(ctx, 31, 0x261F54u);
    ctx->pc = 0x261F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261F4Cu;
    // 0x261f50: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106240u, 0x261F4Cu, 0x261F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261F54u;
label_261f54:
    // 0x261f54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x261f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_261f58:
    // 0x261f58: 0xc089990  jal         func_226640
label_261f5c:
    if (ctx->pc == 0x261F5Cu) {
        ctx->pc = 0x261F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F58u;
        // 0x261f5c: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261F60u;
        goto label_261f60;
    }
    ctx->pc = 0x261F58u;
    SET_GPR_U32(ctx, 31, 0x261F60u);
    ctx->pc = 0x261F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261F58u;
    // 0x261f5c: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x261F58u, 0x261F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261F60u;
label_261f60:
    // 0x261f60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x261f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_261f64:
    // 0x261f64: 0xc05d4f6  jal         func_1753D8
label_261f68:
    if (ctx->pc == 0x261F68u) {
        ctx->pc = 0x261F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F64u;
        // 0x261f68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261F6Cu;
        goto label_261f6c;
    }
    ctx->pc = 0x261F64u;
    SET_GPR_U32(ctx, 31, 0x261F6Cu);
    ctx->pc = 0x261F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261F64u;
    // 0x261f68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x261F64u, 0x261F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261F6Cu;
label_261f6c:
    // 0x261f6c: 0x100000e7  b           . + 4 + (0xE7 << 2)
label_261f70:
    if (ctx->pc == 0x261F70u) {
        ctx->pc = 0x261F74u;
        goto label_261f74;
    }
    ctx->pc = 0x261F6Cu;
    {
        const bool branch_taken_0x261f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x261f6c) {
            ctx->pc = 0x26230Cu;
            goto label_26230c;
        }
    }
    ctx->pc = 0x261F74u;
label_261f74:
    // 0x261f74: 0x240201fa  addiu       $v0, $zero, 0x1FA
    ctx->pc = 0x261f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 506));
label_261f78:
    // 0x261f78: 0x12820003  beq         $s4, $v0, . + 4 + (0x3 << 2)
label_261f7c:
    if (ctx->pc == 0x261F7Cu) {
        ctx->pc = 0x261F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F78u;
        // 0x261f7c: 0x24020228  addiu       $v0, $zero, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261F80u;
        goto label_261f80;
    }
    ctx->pc = 0x261F78u;
    {
        const bool branch_taken_0x261f78 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x261F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F78u;
        // 0x261f7c: 0x24020228  addiu       $v0, $zero, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f78) {
            ctx->pc = 0x261F88u;
            goto label_261f88;
        }
    }
    ctx->pc = 0x261F80u;
label_261f80:
    // 0x261f80: 0x1682001b  bne         $s4, $v0, . + 4 + (0x1B << 2)
label_261f84:
    if (ctx->pc == 0x261F84u) {
        ctx->pc = 0x261F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F80u;
        // 0x261f84: 0x240201fb  addiu       $v0, $zero, 0x1FB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 507));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261F88u;
        goto label_261f88;
    }
    ctx->pc = 0x261F80u;
    {
        const bool branch_taken_0x261f80 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x261F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F80u;
        // 0x261f84: 0x240201fb  addiu       $v0, $zero, 0x1FB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 507));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f80) {
            ctx->pc = 0x261FF0u;
            goto label_261ff0;
        }
    }
    ctx->pc = 0x261F88u;
label_261f88:
    // 0x261f88: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x261f88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_261f8c:
    // 0x261f8c: 0x8e5500d8  lw          $s5, 0xD8($s2)
    ctx->pc = 0x261f8cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_261f90:
    // 0x261f90: 0x2610dd30  addiu       $s0, $s0, -0x22D0
    ctx->pc = 0x261f90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958384));
label_261f94:
    // 0x261f94: 0xc041532  jal         func_1054C8
label_261f98:
    if (ctx->pc == 0x261F98u) {
        ctx->pc = 0x261F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F94u;
        // 0x261f98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261F9Cu;
        goto label_261f9c;
    }
    ctx->pc = 0x261F94u;
    SET_GPR_U32(ctx, 31, 0x261F9Cu);
    ctx->pc = 0x261F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261F94u;
    // 0x261f98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x261F94u, 0x261F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261F9Cu;
label_261f9c:
    // 0x261f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261fa0:
    // 0x261fa0: 0xc041532  jal         func_1054C8
label_261fa4:
    if (ctx->pc == 0x261FA4u) {
        ctx->pc = 0x261FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261FA0u;
        // 0x261fa4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261FA8u;
        goto label_261fa8;
    }
    ctx->pc = 0x261FA0u;
    SET_GPR_U32(ctx, 31, 0x261FA8u);
    ctx->pc = 0x261FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261FA0u;
    // 0x261fa4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x261FA0u, 0x261FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261FA8u;
label_261fa8:
    // 0x261fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261fac:
    // 0x261fac: 0xc041532  jal         func_1054C8
label_261fb0:
    if (ctx->pc == 0x261FB0u) {
        ctx->pc = 0x261FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261FACu;
        // 0x261fb0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261FB4u;
        goto label_261fb4;
    }
    ctx->pc = 0x261FACu;
    SET_GPR_U32(ctx, 31, 0x261FB4u);
    ctx->pc = 0x261FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261FACu;
    // 0x261fb0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x261FACu, 0x261FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261FB4u;
label_261fb4:
    // 0x261fb4: 0x12200030  beqz        $s1, . + 4 + (0x30 << 2)
label_261fb8:
    if (ctx->pc == 0x261FB8u) {
        ctx->pc = 0x261FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261FB4u;
        // 0x261fb8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261FBCu;
        goto label_261fbc;
    }
    ctx->pc = 0x261FB4u;
    {
        const bool branch_taken_0x261fb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x261FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261FB4u;
        // 0x261fb8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261fb4) {
            ctx->pc = 0x262078u;
            goto label_262078;
        }
    }
    ctx->pc = 0x261FBCu;
label_261fbc:
    // 0x261fbc: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x261fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_261fc0:
    // 0x261fc0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x261fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_261fc4:
    // 0x261fc4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x261fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_261fc8:
    // 0x261fc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x261fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_261fcc:
    // 0x261fcc: 0x8c6bbd30  lw          $t3, -0x42D0($v1)
    ctx->pc = 0x261fccu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_261fd0:
    // 0x261fd0: 0x8c490044  lw          $t1, 0x44($v0)
    ctx->pc = 0x261fd0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_261fd4:
    // 0x261fd4: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x261fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_261fd8:
    // 0x261fd8: 0x8c460038  lw          $a2, 0x38($v0)
    ctx->pc = 0x261fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_261fdc:
    // 0x261fdc: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x261fdcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_261fe0:
    // 0x261fe0: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x261fe0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_261fe4:
    // 0x261fe4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x261fe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_261fe8:
    // 0x261fe8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_261fec:
    if (ctx->pc == 0x261FECu) {
        ctx->pc = 0x261FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261FE8u;
        // 0x261fec: 0x8c480040  lw          $t0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261FF0u;
        goto label_261ff0;
    }
    ctx->pc = 0x261FE8u;
    {
        const bool branch_taken_0x261fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261FE8u;
        // 0x261fec: 0x8c480040  lw          $t0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261fe8) {
            ctx->pc = 0x262068u;
            goto label_262068;
        }
    }
    ctx->pc = 0x261FF0u;
label_261ff0:
    // 0x261ff0: 0x12820003  beq         $s4, $v0, . + 4 + (0x3 << 2)
label_261ff4:
    if (ctx->pc == 0x261FF4u) {
        ctx->pc = 0x261FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261FF0u;
        // 0x261ff4: 0x24020229  addiu       $v0, $zero, 0x229 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 553));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261FF8u;
        goto label_261ff8;
    }
    ctx->pc = 0x261FF0u;
    {
        const bool branch_taken_0x261ff0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x261FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261FF0u;
        // 0x261ff4: 0x24020229  addiu       $v0, $zero, 0x229 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 553));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ff0) {
            ctx->pc = 0x262000u;
            goto label_262000;
        }
    }
    ctx->pc = 0x261FF8u;
label_261ff8:
    // 0x261ff8: 0x16820058  bne         $s4, $v0, . + 4 + (0x58 << 2)
label_261ffc:
    if (ctx->pc == 0x261FFCu) {
        ctx->pc = 0x261FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261FF8u;
        // 0x261ffc: 0x3c110056  lui         $s1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262000u;
        goto label_262000;
    }
    ctx->pc = 0x261FF8u;
    {
        const bool branch_taken_0x261ff8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x261FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261FF8u;
        // 0x261ffc: 0x3c110056  lui         $s1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ff8) {
            ctx->pc = 0x26215Cu;
            goto label_26215c;
        }
    }
    ctx->pc = 0x262000u;
label_262000:
    // 0x262000: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x262000u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_262004:
    // 0x262004: 0x8e5500d8  lw          $s5, 0xD8($s2)
    ctx->pc = 0x262004u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_262008:
    // 0x262008: 0x2610dd30  addiu       $s0, $s0, -0x22D0
    ctx->pc = 0x262008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958384));
label_26200c:
    // 0x26200c: 0xc041532  jal         func_1054C8
label_262010:
    if (ctx->pc == 0x262010u) {
        ctx->pc = 0x262010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26200Cu;
        // 0x262010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262014u;
        goto label_262014;
    }
    ctx->pc = 0x26200Cu;
    SET_GPR_U32(ctx, 31, 0x262014u);
    ctx->pc = 0x262010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26200Cu;
    // 0x262010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26200Cu, 0x262014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262014u;
label_262014:
    // 0x262014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x262014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_262018:
    // 0x262018: 0xc041532  jal         func_1054C8
label_26201c:
    if (ctx->pc == 0x26201Cu) {
        ctx->pc = 0x26201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262018u;
        // 0x26201c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262020u;
        goto label_262020;
    }
    ctx->pc = 0x262018u;
    SET_GPR_U32(ctx, 31, 0x262020u);
    ctx->pc = 0x26201Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262018u;
    // 0x26201c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x262018u, 0x262020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262020u;
label_262020:
    // 0x262020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x262020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_262024:
    // 0x262024: 0xc041532  jal         func_1054C8
label_262028:
    if (ctx->pc == 0x262028u) {
        ctx->pc = 0x262028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262024u;
        // 0x262028: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26202Cu;
        goto label_26202c;
    }
    ctx->pc = 0x262024u;
    SET_GPR_U32(ctx, 31, 0x26202Cu);
    ctx->pc = 0x262028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262024u;
    // 0x262028: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x262024u, 0x26202Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26202Cu;
label_26202c:
    // 0x26202c: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
label_262030:
    if (ctx->pc == 0x262030u) {
        ctx->pc = 0x262030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26202Cu;
        // 0x262030: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262034u;
        goto label_262034;
    }
    ctx->pc = 0x26202Cu;
    {
        const bool branch_taken_0x26202c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x262030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26202Cu;
        // 0x262030: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26202c) {
            ctx->pc = 0x262078u;
            goto label_262078;
        }
    }
    ctx->pc = 0x262034u;
label_262034:
    // 0x262034: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x262034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_262038:
    // 0x262038: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x262038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_26203c:
    // 0x26203c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x26203cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_262040:
    // 0x262040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_262044:
    // 0x262044: 0x8c6bbd30  lw          $t3, -0x42D0($v1)
    ctx->pc = 0x262044u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_262048:
    // 0x262048: 0x8c490044  lw          $t1, 0x44($v0)
    ctx->pc = 0x262048u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_26204c:
    // 0x26204c: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x26204cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_262050:
    // 0x262050: 0x8c460038  lw          $a2, 0x38($v0)
    ctx->pc = 0x262050u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_262054:
    // 0x262054: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x262054u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_262058:
    // 0x262058: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x262058u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_26205c:
    // 0x26205c: 0x8c480040  lw          $t0, 0x40($v0)
    ctx->pc = 0x26205cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_262060:
    // 0x262060: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x262060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_262064:
    // 0x262064: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x262064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_262068:
    // 0x262068: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x262068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_26206c:
    // 0x26206c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x26206cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_262070:
    // 0x262070: 0xc0428c4  jal         func_10A310
label_262074:
    if (ctx->pc == 0x262074u) {
        ctx->pc = 0x262078u;
        goto label_262078;
    }
    ctx->pc = 0x262070u;
    SET_GPR_U32(ctx, 31, 0x262078u);
    ctx->pc = 0x10A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A310u, 0x262070u, 0x262078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262078u;
label_262078:
    // 0x262078: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x262078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26207c:
    // 0x26207c: 0x240502c1  addiu       $a1, $zero, 0x2C1
    ctx->pc = 0x26207cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 705));
label_262080:
    // 0x262080: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x262080u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_262084:
    // 0x262084: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x262084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_262088:
    // 0x262088: 0x60f809  jalr        $v1
label_26208c:
    if (ctx->pc == 0x26208Cu) {
        ctx->pc = 0x26208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262088u;
        // 0x26208c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262090u;
        goto label_262090;
    }
    ctx->pc = 0x262088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x262090u);
        ctx->pc = 0x26208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262088u;
        // 0x26208c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262088u, 0x262090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x262090u;
label_262090:
    // 0x262090: 0x8e4400d4  lw          $a0, 0xD4($s2)
    ctx->pc = 0x262090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_262094:
    // 0x262094: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x262094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_262098:
    // 0x262098: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
label_26209c:
    if (ctx->pc == 0x26209Cu) {
        ctx->pc = 0x26209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262098u;
        // 0x26209c: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2620A0u;
        goto label_2620a0;
    }
    ctx->pc = 0x262098u;
    {
        const bool branch_taken_0x262098 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262098u;
        // 0x26209c: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262098) {
            ctx->pc = 0x2620E0u;
            goto label_2620e0;
        }
    }
    ctx->pc = 0x2620A0u;
label_2620a0:
    // 0x2620a0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2620a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2620a4:
    // 0x2620a4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2620a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2620a8:
    // 0x2620a8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2620a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2620ac:
    // 0x2620ac: 0x40f809  jalr        $v0
label_2620b0:
    if (ctx->pc == 0x2620B0u) {
        ctx->pc = 0x2620B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620ACu;
        // 0x2620b0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2620B4u;
        goto label_2620b4;
    }
    ctx->pc = 0x2620ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2620B4u);
        ctx->pc = 0x2620B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620ACu;
        // 0x2620b0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2620ACu, 0x2620B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2620B4u;
label_2620b4:
    // 0x2620b4: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x2620b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
label_2620b8:
    // 0x2620b8: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x2620b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_2620bc:
    // 0x2620bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2620bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2620c0:
    // 0x2620c0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2620c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2620c4:
    // 0x2620c4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2620c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2620c8:
    // 0x2620c8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2620c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2620cc:
    // 0x2620cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2620ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2620d0:
    // 0x2620d0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2620d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2620d4:
    // 0x2620d4: 0x3c080100  lui         $t0, 0x100
    ctx->pc = 0x2620d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)256 << 16));
label_2620d8:
    // 0x2620d8: 0xc041664  jal         func_105990
label_2620dc:
    if (ctx->pc == 0x2620DCu) {
        ctx->pc = 0x2620DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620D8u;
        // 0x2620dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2620E0u;
        goto label_2620e0;
    }
    ctx->pc = 0x2620D8u;
    SET_GPR_U32(ctx, 31, 0x2620E0u);
    ctx->pc = 0x2620DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2620D8u;
    // 0x2620dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x2620D8u, 0x2620E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2620E0u;
label_2620e0:
    // 0x2620e0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2620e4:
    if (ctx->pc == 0x2620E4u) {
        ctx->pc = 0x2620E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620E0u;
        // 0x2620e4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2620E8u;
        goto label_2620e8;
    }
    ctx->pc = 0x2620E0u;
    {
        const bool branch_taken_0x2620e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2620E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620E0u;
        // 0x2620e4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2620e0) {
            ctx->pc = 0x262108u;
            goto label_262108;
        }
    }
    ctx->pc = 0x2620E8u;
label_2620e8:
    // 0x2620e8: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x2620e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_2620ec:
    // 0x2620ec: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2620ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2620f0:
    // 0x2620f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2620f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2620f4:
    // 0x2620f4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2620f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_2620f8:
    // 0x2620f8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2620f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2620fc:
    // 0x2620fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2620fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_262100:
    // 0x262100: 0xc041b20  jal         func_106C80
label_262104:
    if (ctx->pc == 0x262104u) {
        ctx->pc = 0x262104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262100u;
        // 0x262104: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262108u;
        goto label_262108;
    }
    ctx->pc = 0x262100u;
    SET_GPR_U32(ctx, 31, 0x262108u);
    ctx->pc = 0x262104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262100u;
    // 0x262104: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x262100u, 0x262108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262108u;
label_262108:
    // 0x262108: 0xc05d484  jal         func_175210
label_26210c:
    if (ctx->pc == 0x26210Cu) {
        ctx->pc = 0x26210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262108u;
        // 0x26210c: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262110u;
        goto label_262110;
    }
    ctx->pc = 0x262108u;
    SET_GPR_U32(ctx, 31, 0x262110u);
    ctx->pc = 0x26210Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262108u;
    // 0x26210c: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x262108u, 0x262110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262110u;
label_262110:
    // 0x262110: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x262110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_262114:
    // 0x262114: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x262114u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_262118:
    // 0x262118: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x262118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26211c:
    // 0x26211c: 0xa0f809  jalr        $a1
label_262120:
    if (ctx->pc == 0x262120u) {
        ctx->pc = 0x262120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26211Cu;
        // 0x262120: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262124u;
        goto label_262124;
    }
    ctx->pc = 0x26211Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x262124u);
        ctx->pc = 0x262120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26211Cu;
        // 0x262120: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26211Cu, 0x262124u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x262124u;
label_262124:
    // 0x262124: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x262124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_262128:
    // 0x262128: 0xc087016  jal         func_21C058
label_26212c:
    if (ctx->pc == 0x26212Cu) {
        ctx->pc = 0x26212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262128u;
        // 0x26212c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262130u;
        goto label_262130;
    }
    ctx->pc = 0x262128u;
    SET_GPR_U32(ctx, 31, 0x262130u);
    ctx->pc = 0x26212Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262128u;
    // 0x26212c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x262128u, 0x262130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262130u;
label_262130:
    // 0x262130: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x262130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_262134:
    // 0x262134: 0xc05d53a  jal         func_1754E8
label_262138:
    if (ctx->pc == 0x262138u) {
        ctx->pc = 0x262138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262134u;
        // 0x262138: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26213Cu;
        goto label_26213c;
    }
    ctx->pc = 0x262134u;
    SET_GPR_U32(ctx, 31, 0x26213Cu);
    ctx->pc = 0x262138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262134u;
    // 0x262138: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x262134u, 0x26213Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26213Cu;
label_26213c:
    // 0x26213c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26213cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_262140:
    // 0x262140: 0xc05d4f6  jal         func_1753D8
label_262144:
    if (ctx->pc == 0x262144u) {
        ctx->pc = 0x262144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262140u;
        // 0x262144: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262148u;
        goto label_262148;
    }
    ctx->pc = 0x262140u;
    SET_GPR_U32(ctx, 31, 0x262148u);
    ctx->pc = 0x262144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262140u;
    // 0x262144: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x262140u, 0x262148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262148u;
label_262148:
    // 0x262148: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x262148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26214c:
    // 0x26214c: 0xc089990  jal         func_226640
label_262150:
    if (ctx->pc == 0x262150u) {
        ctx->pc = 0x262150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26214Cu;
        // 0x262150: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262154u;
        goto label_262154;
    }
    ctx->pc = 0x26214Cu;
    SET_GPR_U32(ctx, 31, 0x262154u);
    ctx->pc = 0x262150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26214Cu;
    // 0x262150: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26214Cu, 0x262154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262154u;
label_262154:
    // 0x262154: 0x1000006d  b           . + 4 + (0x6D << 2)
label_262158:
    if (ctx->pc == 0x262158u) {
        ctx->pc = 0x26215Cu;
        goto label_26215c;
    }
    ctx->pc = 0x262154u;
    {
        const bool branch_taken_0x262154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262154) {
            ctx->pc = 0x26230Cu;
            goto label_26230c;
        }
    }
    ctx->pc = 0x26215Cu;
label_26215c:
    // 0x26215c: 0x8e5600d8  lw          $s6, 0xD8($s2)
    ctx->pc = 0x26215cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_262160:
    // 0x262160: 0x2630dd30  addiu       $s0, $s1, -0x22D0
    ctx->pc = 0x262160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958384));
label_262164:
    // 0x262164: 0xc041532  jal         func_1054C8
label_262168:
    if (ctx->pc == 0x262168u) {
        ctx->pc = 0x262168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262164u;
        // 0x262168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26216Cu;
        goto label_26216c;
    }
    ctx->pc = 0x262164u;
    SET_GPR_U32(ctx, 31, 0x26216Cu);
    ctx->pc = 0x262168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262164u;
    // 0x262168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x262164u, 0x26216Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26216Cu;
label_26216c:
    // 0x26216c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26216cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_262170:
    // 0x262170: 0xc041532  jal         func_1054C8
label_262174:
    if (ctx->pc == 0x262174u) {
        ctx->pc = 0x262174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262170u;
        // 0x262174: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262178u;
        goto label_262178;
    }
    ctx->pc = 0x262170u;
    SET_GPR_U32(ctx, 31, 0x262178u);
    ctx->pc = 0x262174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262170u;
    // 0x262174: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x262170u, 0x262178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262178u;
label_262178:
    // 0x262178: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x262178u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26217c:
    // 0x26217c: 0xc041532  jal         func_1054C8
label_262180:
    if (ctx->pc == 0x262180u) {
        ctx->pc = 0x262180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26217Cu;
        // 0x262180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262184u;
        goto label_262184;
    }
    ctx->pc = 0x26217Cu;
    SET_GPR_U32(ctx, 31, 0x262184u);
    ctx->pc = 0x262180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26217Cu;
    // 0x262180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26217Cu, 0x262184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262184u;
label_262184:
    // 0x262184: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
label_262188:
    if (ctx->pc == 0x262188u) {
        ctx->pc = 0x262188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262184u;
        // 0x262188: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26218Cu;
        goto label_26218c;
    }
    ctx->pc = 0x262184u;
    {
        const bool branch_taken_0x262184 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x262188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262184u;
        // 0x262188: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262184) {
            ctx->pc = 0x2621B0u;
            goto label_2621b0;
        }
    }
    ctx->pc = 0x26218Cu;
label_26218c:
    // 0x26218c: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x26218cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_262190:
    // 0x262190: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x262190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_262194:
    // 0x262194: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x262194u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_262198:
    // 0x262198: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x262198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26219c:
    // 0x26219c: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x26219cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2621a0:
    // 0x2621a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2621a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2621a4:
    // 0x2621a4: 0xc04159e  jal         func_105678
label_2621a8:
    if (ctx->pc == 0x2621A8u) {
        ctx->pc = 0x2621A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2621A4u;
        // 0x2621a8: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2621ACu;
        goto label_2621ac;
    }
    ctx->pc = 0x2621A4u;
    SET_GPR_U32(ctx, 31, 0x2621ACu);
    ctx->pc = 0x2621A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2621A4u;
    // 0x2621a8: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x2621A4u, 0x2621ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2621ACu;
label_2621ac:
    // 0x2621ac: 0x0  nop
    ctx->pc = 0x2621acu;
    // NOP
label_2621b0:
    // 0x2621b0: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x2621b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_2621b4:
    // 0x2621b4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2621b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2621b8:
    // 0x2621b8: 0x12e00017  beqz        $s7, . + 4 + (0x17 << 2)
label_2621bc:
    if (ctx->pc == 0x2621BCu) {
        ctx->pc = 0x2621BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2621B8u;
        // 0x2621bc: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2621C0u;
        goto label_2621c0;
    }
    ctx->pc = 0x2621B8u;
    {
        const bool branch_taken_0x2621b8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2621BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2621B8u;
        // 0x2621bc: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2621b8) {
            ctx->pc = 0x262218u;
            goto label_262218;
        }
    }
    ctx->pc = 0x2621C0u;
label_2621c0:
    // 0x2621c0: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x2621c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2621c4:
    // 0x2621c4: 0x13c2000d  beq         $fp, $v0, . + 4 + (0xD << 2)
label_2621c8:
    if (ctx->pc == 0x2621C8u) {
        ctx->pc = 0x2621C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2621C4u;
        // 0x2621c8: 0x8e5000d8  lw          $s0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2621CCu;
        goto label_2621cc;
    }
    ctx->pc = 0x2621C4u;
    {
        const bool branch_taken_0x2621c4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x2621C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2621C4u;
        // 0x2621c8: 0x8e5000d8  lw          $s0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2621c4) {
            ctx->pc = 0x2621FCu;
            goto label_2621fc;
        }
    }
    ctx->pc = 0x2621CCu;
label_2621cc:
    // 0x2621cc: 0xc08a05a  jal         func_228168
label_2621d0:
    if (ctx->pc == 0x2621D0u) {
        ctx->pc = 0x2621D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2621CCu;
        // 0x2621d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2621D4u;
        goto label_2621d4;
    }
    ctx->pc = 0x2621CCu;
    SET_GPR_U32(ctx, 31, 0x2621D4u);
    ctx->pc = 0x2621D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2621CCu;
    // 0x2621d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x2621CCu, 0x2621D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2621D4u;
label_2621d4:
    // 0x2621d4: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x2621d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
label_2621d8:
    // 0x2621d8: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x2621d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_2621dc:
    // 0x2621dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2621dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2621e0:
    // 0x2621e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2621e4:
    if (ctx->pc == 0x2621E4u) {
        ctx->pc = 0x2621E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2621E0u;
        // 0x2621e4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2621E8u;
        goto label_2621e8;
    }
    ctx->pc = 0x2621E0u;
    {
        const bool branch_taken_0x2621e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2621E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2621E0u;
        // 0x2621e4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2621e0) {
            ctx->pc = 0x262200u;
            goto label_262200;
        }
    }
    ctx->pc = 0x2621E8u;
label_2621e8:
    // 0x2621e8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2621e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2621ec:
    // 0x2621ec: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x2621ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_2621f0:
    // 0x2621f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2621f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2621f4:
    // 0x2621f4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2621f8:
    if (ctx->pc == 0x2621F8u) {
        ctx->pc = 0x2621F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2621F4u;
        // 0x2621f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2621FCu;
        goto label_2621fc;
    }
    ctx->pc = 0x2621F4u;
    {
        const bool branch_taken_0x2621f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2621F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2621F4u;
        // 0x2621f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2621f4) {
            ctx->pc = 0x262208u;
            goto label_262208;
        }
    }
    ctx->pc = 0x2621FCu;
label_2621fc:
    // 0x2621fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2621fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_262200:
    // 0x262200: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x262200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_262204:
    // 0x262204: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x262204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_262208:
    // 0x262208: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x262208u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26220c:
    // 0x26220c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26220cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_262210:
    // 0x262210: 0xc041b20  jal         func_106C80
label_262214:
    if (ctx->pc == 0x262214u) {
        ctx->pc = 0x262214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262210u;
        // 0x262214: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262218u;
        goto label_262218;
    }
    ctx->pc = 0x262210u;
    SET_GPR_U32(ctx, 31, 0x262218u);
    ctx->pc = 0x262214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262210u;
    // 0x262214: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x262210u, 0x262218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262218u;
label_262218:
    // 0x262218: 0xc05d484  jal         func_175210
label_26221c:
    if (ctx->pc == 0x26221Cu) {
        ctx->pc = 0x26221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262218u;
        // 0x26221c: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262220u;
        goto label_262220;
    }
    ctx->pc = 0x262218u;
    SET_GPR_U32(ctx, 31, 0x262220u);
    ctx->pc = 0x26221Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262218u;
    // 0x26221c: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x262218u, 0x262220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262220u;
label_262220:
    // 0x262220: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x262220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_262224:
    // 0x262224: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x262224u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_262228:
    // 0x262228: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x262228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26222c:
    // 0x26222c: 0xa0f809  jalr        $a1
label_262230:
    if (ctx->pc == 0x262230u) {
        ctx->pc = 0x262230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26222Cu;
        // 0x262230: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262234u;
        goto label_262234;
    }
    ctx->pc = 0x26222Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x262234u);
        ctx->pc = 0x262230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26222Cu;
        // 0x262230: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26222Cu, 0x262234u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x262234u;
label_262234:
    // 0x262234: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x262234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_262238:
    // 0x262238: 0xc087016  jal         func_21C058
label_26223c:
    if (ctx->pc == 0x26223Cu) {
        ctx->pc = 0x26223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262238u;
        // 0x26223c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262240u;
        goto label_262240;
    }
    ctx->pc = 0x262238u;
    SET_GPR_U32(ctx, 31, 0x262240u);
    ctx->pc = 0x26223Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262238u;
    // 0x26223c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x262238u, 0x262240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262240u;
label_262240:
    // 0x262240: 0x12a00012  beqz        $s5, . + 4 + (0x12 << 2)
label_262244:
    if (ctx->pc == 0x262244u) {
        ctx->pc = 0x262244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262240u;
        // 0x262244: 0x240201d3  addiu       $v0, $zero, 0x1D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 467));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262248u;
        goto label_262248;
    }
    ctx->pc = 0x262240u;
    {
        const bool branch_taken_0x262240 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x262244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262240u;
        // 0x262244: 0x240201d3  addiu       $v0, $zero, 0x1D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 467));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262240) {
            ctx->pc = 0x26228Cu;
            goto label_26228c;
        }
    }
    ctx->pc = 0x262248u;
label_262248:
    // 0x262248: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x262248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26224c:
    // 0x26224c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26224cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_262250:
    // 0x262250: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x262250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_262254:
    // 0x262254: 0x40f809  jalr        $v0
label_262258:
    if (ctx->pc == 0x262258u) {
        ctx->pc = 0x262258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262254u;
        // 0x262258: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26225Cu;
        goto label_26225c;
    }
    ctx->pc = 0x262254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26225Cu);
        ctx->pc = 0x262258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262254u;
        // 0x262258: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262254u, 0x26225Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26225Cu;
label_26225c:
    // 0x26225c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x26225cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_262260:
    // 0x262260: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x262260u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_262264:
    // 0x262264: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x262264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_262268:
    // 0x262268: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x262268u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26226c:
    // 0x26226c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x26226cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_262270:
    // 0x262270: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x262270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_262274:
    // 0x262274: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x262274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_262278:
    // 0x262278: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x262278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26227c:
    // 0x26227c: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x26227cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_262280:
    // 0x262280: 0xc041664  jal         func_105990
label_262284:
    if (ctx->pc == 0x262284u) {
        ctx->pc = 0x262284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262280u;
        // 0x262284: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262288u;
        goto label_262288;
    }
    ctx->pc = 0x262280u;
    SET_GPR_U32(ctx, 31, 0x262288u);
    ctx->pc = 0x262284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262280u;
    // 0x262284: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x262280u, 0x262288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262288u;
label_262288:
    // 0x262288: 0x240201d3  addiu       $v0, $zero, 0x1D3
    ctx->pc = 0x262288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 467));
label_26228c:
    // 0x26228c: 0x16820017  bne         $s4, $v0, . + 4 + (0x17 << 2)
label_262290:
    if (ctx->pc == 0x262290u) {
        ctx->pc = 0x262290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26228Cu;
        // 0x262290: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262294u;
        goto label_262294;
    }
    ctx->pc = 0x26228Cu;
    {
        const bool branch_taken_0x26228c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x262290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26228Cu;
        // 0x262290: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26228c) {
            ctx->pc = 0x2622ECu;
            goto label_2622ec;
        }
    }
    ctx->pc = 0x262294u;
label_262294:
    // 0x262294: 0x3bc20013  xori        $v0, $fp, 0x13
    ctx->pc = 0x262294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) ^ (uint64_t)(uint16_t)19);
label_262298:
    // 0x262298: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_26229c:
    if (ctx->pc == 0x26229Cu) {
        ctx->pc = 0x2622A0u;
        goto label_2622a0;
    }
    ctx->pc = 0x262298u;
    {
        const bool branch_taken_0x262298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262298) {
            ctx->pc = 0x2622ECu;
            goto label_2622ec;
        }
    }
    ctx->pc = 0x2622A0u;
label_2622a0:
    // 0x2622a0: 0xc041532  jal         func_1054C8
label_2622a4:
    if (ctx->pc == 0x2622A4u) {
        ctx->pc = 0x2622A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2622A0u;
        // 0x2622a4: 0x2624dd30  addiu       $a0, $s1, -0x22D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2622A8u;
        goto label_2622a8;
    }
    ctx->pc = 0x2622A0u;
    SET_GPR_U32(ctx, 31, 0x2622A8u);
    ctx->pc = 0x2622A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2622A0u;
    // 0x2622a4: 0x2624dd30  addiu       $a0, $s1, -0x22D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2622A0u, 0x2622A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2622A8u;
label_2622a8:
    // 0x2622a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2622a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2622ac:
    // 0x2622ac: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_2622b0:
    if (ctx->pc == 0x2622B0u) {
        ctx->pc = 0x2622B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2622ACu;
        // 0x2622b0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2622B4u;
        goto label_2622b4;
    }
    ctx->pc = 0x2622ACu;
    {
        const bool branch_taken_0x2622ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2622B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2622ACu;
        // 0x2622b0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2622ac) {
            ctx->pc = 0x2622D8u;
            goto label_2622d8;
        }
    }
    ctx->pc = 0x2622B4u;
label_2622b4:
    // 0x2622b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2622b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2622b8:
    // 0x2622b8: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2622b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2622bc:
    // 0x2622bc: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2622bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2622c0:
    // 0x2622c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2622c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2622c4:
    // 0x2622c4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2622c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2622c8:
    // 0x2622c8: 0x240601d2  addiu       $a2, $zero, 0x1D2
    ctx->pc = 0x2622c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 466));
label_2622cc:
    // 0x2622cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2622ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2622d0:
    // 0x2622d0: 0xc041664  jal         func_105990
label_2622d4:
    if (ctx->pc == 0x2622D4u) {
        ctx->pc = 0x2622D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2622D0u;
        // 0x2622d4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2622D8u;
        goto label_2622d8;
    }
    ctx->pc = 0x2622D0u;
    SET_GPR_U32(ctx, 31, 0x2622D8u);
    ctx->pc = 0x2622D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2622D0u;
    // 0x2622d4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x2622D0u, 0x2622D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2622D8u;
label_2622d8:
    // 0x2622d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2622d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2622dc:
    // 0x2622dc: 0xc05d53a  jal         func_1754E8
label_2622e0:
    if (ctx->pc == 0x2622E0u) {
        ctx->pc = 0x2622E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2622DCu;
        // 0x2622e0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2622E4u;
        goto label_2622e4;
    }
    ctx->pc = 0x2622DCu;
    SET_GPR_U32(ctx, 31, 0x2622E4u);
    ctx->pc = 0x2622E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2622DCu;
    // 0x2622e0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x2622DCu, 0x2622E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2622E4u;
label_2622e4:
    // 0x2622e4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2622e8:
    if (ctx->pc == 0x2622E8u) {
        ctx->pc = 0x2622E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2622E4u;
        // 0x2622e8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2622ECu;
        goto label_2622ec;
    }
    ctx->pc = 0x2622E4u;
    {
        const bool branch_taken_0x2622e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2622E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2622E4u;
        // 0x2622e8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2622e4) {
            ctx->pc = 0x2622F8u;
            goto label_2622f8;
        }
    }
    ctx->pc = 0x2622ECu;
label_2622ec:
    // 0x2622ec: 0xc05d53a  jal         func_1754E8
label_2622f0:
    if (ctx->pc == 0x2622F0u) {
        ctx->pc = 0x2622F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2622ECu;
        // 0x2622f0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2622F4u;
        goto label_2622f4;
    }
    ctx->pc = 0x2622ECu;
    SET_GPR_U32(ctx, 31, 0x2622F4u);
    ctx->pc = 0x2622F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2622ECu;
    // 0x2622f0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x2622ECu, 0x2622F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2622F4u;
label_2622f4:
    // 0x2622f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2622f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2622f8:
    // 0x2622f8: 0xc05d4f6  jal         func_1753D8
label_2622fc:
    if (ctx->pc == 0x2622FCu) {
        ctx->pc = 0x2622FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2622F8u;
        // 0x2622fc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262300u;
        goto label_262300;
    }
    ctx->pc = 0x2622F8u;
    SET_GPR_U32(ctx, 31, 0x262300u);
    ctx->pc = 0x2622FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2622F8u;
    // 0x2622fc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x2622F8u, 0x262300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262300u;
label_262300:
    // 0x262300: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x262300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_262304:
    // 0x262304: 0xc089990  jal         func_226640
label_262308:
    if (ctx->pc == 0x262308u) {
        ctx->pc = 0x262308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262304u;
        // 0x262308: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26230Cu;
        goto label_26230c;
    }
    ctx->pc = 0x262304u;
    SET_GPR_U32(ctx, 31, 0x26230Cu);
    ctx->pc = 0x262308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262304u;
    // 0x262308: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x262304u, 0x26230Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26230Cu;
label_26230c:
    // 0x26230c: 0xc089baa  jal         func_226EA8
label_262310:
    if (ctx->pc == 0x262310u) {
        ctx->pc = 0x262310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26230Cu;
        // 0x262310: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262314u;
        goto label_262314;
    }
    ctx->pc = 0x26230Cu;
    SET_GPR_U32(ctx, 31, 0x262314u);
    ctx->pc = 0x262310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26230Cu;
    // 0x262310: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226EA8u, 0x26230Cu, 0x262314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262314u;
label_262314:
    // 0x262314: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x262314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_262318:
    // 0x262318: 0xc08a61a  jal         func_229868
label_26231c:
    if (ctx->pc == 0x26231Cu) {
        ctx->pc = 0x26231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262318u;
        // 0x26231c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262320u;
        goto label_262320;
    }
    ctx->pc = 0x262318u;
    SET_GPR_U32(ctx, 31, 0x262320u);
    ctx->pc = 0x26231Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262318u;
    // 0x26231c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x262318u, 0x262320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262320u;
label_262320:
    // 0x262320: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_262324:
    if (ctx->pc == 0x262324u) {
        ctx->pc = 0x262324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262320u;
        // 0x262324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262328u;
        goto label_262328;
    }
    ctx->pc = 0x262320u;
    {
        const bool branch_taken_0x262320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262320u;
        // 0x262324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262320) {
            ctx->pc = 0x262334u;
            goto label_262334;
        }
    }
    ctx->pc = 0x262328u;
label_262328:
    // 0x262328: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x262328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26232c:
    // 0x26232c: 0xc087570  jal         func_21D5C0
label_262330:
    if (ctx->pc == 0x262330u) {
        ctx->pc = 0x262330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26232Cu;
        // 0x262330: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262334u;
        goto label_262334;
    }
    ctx->pc = 0x26232Cu;
    SET_GPR_U32(ctx, 31, 0x262334u);
    ctx->pc = 0x262330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26232Cu;
    // 0x262330: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D5C0u, 0x26232Cu, 0x262334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262334u;
label_262334:
    // 0x262334: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x262334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_262338:
    // 0x262338: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x262338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_26233c:
    // 0x26233c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x26233cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_262340:
    // 0x262340: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x262340u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_262344:
    // 0x262344: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x262344u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_262348:
    // 0x262348: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x262348u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26234c:
    // 0x26234c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x26234cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_262350:
    // 0x262350: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x262350u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_262354:
    // 0x262354: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x262354u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_262358:
    // 0x262358: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x262358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26235c:
    // 0x26235c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x26235cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_262360:
    // 0x262360: 0x3e00008  jr          $ra
label_262364:
    if (ctx->pc == 0x262364u) {
        ctx->pc = 0x262364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262360u;
        // 0x262364: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262368u;
        goto label_fallthrough_0x262360;
    }
    ctx->pc = 0x262360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262360u;
        // 0x262364: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x262360:
    ctx->pc = 0x262368u;
}
