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

// Function: sub_00244E78
// Address: 0x244e78 - 0x245310
void sub_00244E78_0x244e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244E78_0x244e78");
#endif

    switch (ctx->pc) {
        case 0x244e78u: goto label_244e78;
        case 0x244e7cu: goto label_244e7c;
        case 0x244e80u: goto label_244e80;
        case 0x244e84u: goto label_244e84;
        case 0x244e88u: goto label_244e88;
        case 0x244e8cu: goto label_244e8c;
        case 0x244e90u: goto label_244e90;
        case 0x244e94u: goto label_244e94;
        case 0x244e98u: goto label_244e98;
        case 0x244e9cu: goto label_244e9c;
        case 0x244ea0u: goto label_244ea0;
        case 0x244ea4u: goto label_244ea4;
        case 0x244ea8u: goto label_244ea8;
        case 0x244eacu: goto label_244eac;
        case 0x244eb0u: goto label_244eb0;
        case 0x244eb4u: goto label_244eb4;
        case 0x244eb8u: goto label_244eb8;
        case 0x244ebcu: goto label_244ebc;
        case 0x244ec0u: goto label_244ec0;
        case 0x244ec4u: goto label_244ec4;
        case 0x244ec8u: goto label_244ec8;
        case 0x244eccu: goto label_244ecc;
        case 0x244ed0u: goto label_244ed0;
        case 0x244ed4u: goto label_244ed4;
        case 0x244ed8u: goto label_244ed8;
        case 0x244edcu: goto label_244edc;
        case 0x244ee0u: goto label_244ee0;
        case 0x244ee4u: goto label_244ee4;
        case 0x244ee8u: goto label_244ee8;
        case 0x244eecu: goto label_244eec;
        case 0x244ef0u: goto label_244ef0;
        case 0x244ef4u: goto label_244ef4;
        case 0x244ef8u: goto label_244ef8;
        case 0x244efcu: goto label_244efc;
        case 0x244f00u: goto label_244f00;
        case 0x244f04u: goto label_244f04;
        case 0x244f08u: goto label_244f08;
        case 0x244f0cu: goto label_244f0c;
        case 0x244f10u: goto label_244f10;
        case 0x244f14u: goto label_244f14;
        case 0x244f18u: goto label_244f18;
        case 0x244f1cu: goto label_244f1c;
        case 0x244f20u: goto label_244f20;
        case 0x244f24u: goto label_244f24;
        case 0x244f28u: goto label_244f28;
        case 0x244f2cu: goto label_244f2c;
        case 0x244f30u: goto label_244f30;
        case 0x244f34u: goto label_244f34;
        case 0x244f38u: goto label_244f38;
        case 0x244f3cu: goto label_244f3c;
        case 0x244f40u: goto label_244f40;
        case 0x244f44u: goto label_244f44;
        case 0x244f48u: goto label_244f48;
        case 0x244f4cu: goto label_244f4c;
        case 0x244f50u: goto label_244f50;
        case 0x244f54u: goto label_244f54;
        case 0x244f58u: goto label_244f58;
        case 0x244f5cu: goto label_244f5c;
        case 0x244f60u: goto label_244f60;
        case 0x244f64u: goto label_244f64;
        case 0x244f68u: goto label_244f68;
        case 0x244f6cu: goto label_244f6c;
        case 0x244f70u: goto label_244f70;
        case 0x244f74u: goto label_244f74;
        case 0x244f78u: goto label_244f78;
        case 0x244f7cu: goto label_244f7c;
        case 0x244f80u: goto label_244f80;
        case 0x244f84u: goto label_244f84;
        case 0x244f88u: goto label_244f88;
        case 0x244f8cu: goto label_244f8c;
        case 0x244f90u: goto label_244f90;
        case 0x244f94u: goto label_244f94;
        case 0x244f98u: goto label_244f98;
        case 0x244f9cu: goto label_244f9c;
        case 0x244fa0u: goto label_244fa0;
        case 0x244fa4u: goto label_244fa4;
        case 0x244fa8u: goto label_244fa8;
        case 0x244facu: goto label_244fac;
        case 0x244fb0u: goto label_244fb0;
        case 0x244fb4u: goto label_244fb4;
        case 0x244fb8u: goto label_244fb8;
        case 0x244fbcu: goto label_244fbc;
        case 0x244fc0u: goto label_244fc0;
        case 0x244fc4u: goto label_244fc4;
        case 0x244fc8u: goto label_244fc8;
        case 0x244fccu: goto label_244fcc;
        case 0x244fd0u: goto label_244fd0;
        case 0x244fd4u: goto label_244fd4;
        case 0x244fd8u: goto label_244fd8;
        case 0x244fdcu: goto label_244fdc;
        case 0x244fe0u: goto label_244fe0;
        case 0x244fe4u: goto label_244fe4;
        case 0x244fe8u: goto label_244fe8;
        case 0x244fecu: goto label_244fec;
        case 0x244ff0u: goto label_244ff0;
        case 0x244ff4u: goto label_244ff4;
        case 0x244ff8u: goto label_244ff8;
        case 0x244ffcu: goto label_244ffc;
        case 0x245000u: goto label_245000;
        case 0x245004u: goto label_245004;
        case 0x245008u: goto label_245008;
        case 0x24500cu: goto label_24500c;
        case 0x245010u: goto label_245010;
        case 0x245014u: goto label_245014;
        case 0x245018u: goto label_245018;
        case 0x24501cu: goto label_24501c;
        case 0x245020u: goto label_245020;
        case 0x245024u: goto label_245024;
        case 0x245028u: goto label_245028;
        case 0x24502cu: goto label_24502c;
        case 0x245030u: goto label_245030;
        case 0x245034u: goto label_245034;
        case 0x245038u: goto label_245038;
        case 0x24503cu: goto label_24503c;
        case 0x245040u: goto label_245040;
        case 0x245044u: goto label_245044;
        case 0x245048u: goto label_245048;
        case 0x24504cu: goto label_24504c;
        case 0x245050u: goto label_245050;
        case 0x245054u: goto label_245054;
        case 0x245058u: goto label_245058;
        case 0x24505cu: goto label_24505c;
        case 0x245060u: goto label_245060;
        case 0x245064u: goto label_245064;
        case 0x245068u: goto label_245068;
        case 0x24506cu: goto label_24506c;
        case 0x245070u: goto label_245070;
        case 0x245074u: goto label_245074;
        case 0x245078u: goto label_245078;
        case 0x24507cu: goto label_24507c;
        case 0x245080u: goto label_245080;
        case 0x245084u: goto label_245084;
        case 0x245088u: goto label_245088;
        case 0x24508cu: goto label_24508c;
        case 0x245090u: goto label_245090;
        case 0x245094u: goto label_245094;
        case 0x245098u: goto label_245098;
        case 0x24509cu: goto label_24509c;
        case 0x2450a0u: goto label_2450a0;
        case 0x2450a4u: goto label_2450a4;
        case 0x2450a8u: goto label_2450a8;
        case 0x2450acu: goto label_2450ac;
        case 0x2450b0u: goto label_2450b0;
        case 0x2450b4u: goto label_2450b4;
        case 0x2450b8u: goto label_2450b8;
        case 0x2450bcu: goto label_2450bc;
        case 0x2450c0u: goto label_2450c0;
        case 0x2450c4u: goto label_2450c4;
        case 0x2450c8u: goto label_2450c8;
        case 0x2450ccu: goto label_2450cc;
        case 0x2450d0u: goto label_2450d0;
        case 0x2450d4u: goto label_2450d4;
        case 0x2450d8u: goto label_2450d8;
        case 0x2450dcu: goto label_2450dc;
        case 0x2450e0u: goto label_2450e0;
        case 0x2450e4u: goto label_2450e4;
        case 0x2450e8u: goto label_2450e8;
        case 0x2450ecu: goto label_2450ec;
        case 0x2450f0u: goto label_2450f0;
        case 0x2450f4u: goto label_2450f4;
        case 0x2450f8u: goto label_2450f8;
        case 0x2450fcu: goto label_2450fc;
        case 0x245100u: goto label_245100;
        case 0x245104u: goto label_245104;
        case 0x245108u: goto label_245108;
        case 0x24510cu: goto label_24510c;
        case 0x245110u: goto label_245110;
        case 0x245114u: goto label_245114;
        case 0x245118u: goto label_245118;
        case 0x24511cu: goto label_24511c;
        case 0x245120u: goto label_245120;
        case 0x245124u: goto label_245124;
        case 0x245128u: goto label_245128;
        case 0x24512cu: goto label_24512c;
        case 0x245130u: goto label_245130;
        case 0x245134u: goto label_245134;
        case 0x245138u: goto label_245138;
        case 0x24513cu: goto label_24513c;
        case 0x245140u: goto label_245140;
        case 0x245144u: goto label_245144;
        case 0x245148u: goto label_245148;
        case 0x24514cu: goto label_24514c;
        case 0x245150u: goto label_245150;
        case 0x245154u: goto label_245154;
        case 0x245158u: goto label_245158;
        case 0x24515cu: goto label_24515c;
        case 0x245160u: goto label_245160;
        case 0x245164u: goto label_245164;
        case 0x245168u: goto label_245168;
        case 0x24516cu: goto label_24516c;
        case 0x245170u: goto label_245170;
        case 0x245174u: goto label_245174;
        case 0x245178u: goto label_245178;
        case 0x24517cu: goto label_24517c;
        case 0x245180u: goto label_245180;
        case 0x245184u: goto label_245184;
        case 0x245188u: goto label_245188;
        case 0x24518cu: goto label_24518c;
        case 0x245190u: goto label_245190;
        case 0x245194u: goto label_245194;
        case 0x245198u: goto label_245198;
        case 0x24519cu: goto label_24519c;
        case 0x2451a0u: goto label_2451a0;
        case 0x2451a4u: goto label_2451a4;
        case 0x2451a8u: goto label_2451a8;
        case 0x2451acu: goto label_2451ac;
        case 0x2451b0u: goto label_2451b0;
        case 0x2451b4u: goto label_2451b4;
        case 0x2451b8u: goto label_2451b8;
        case 0x2451bcu: goto label_2451bc;
        case 0x2451c0u: goto label_2451c0;
        case 0x2451c4u: goto label_2451c4;
        case 0x2451c8u: goto label_2451c8;
        case 0x2451ccu: goto label_2451cc;
        case 0x2451d0u: goto label_2451d0;
        case 0x2451d4u: goto label_2451d4;
        case 0x2451d8u: goto label_2451d8;
        case 0x2451dcu: goto label_2451dc;
        case 0x2451e0u: goto label_2451e0;
        case 0x2451e4u: goto label_2451e4;
        case 0x2451e8u: goto label_2451e8;
        case 0x2451ecu: goto label_2451ec;
        case 0x2451f0u: goto label_2451f0;
        case 0x2451f4u: goto label_2451f4;
        case 0x2451f8u: goto label_2451f8;
        case 0x2451fcu: goto label_2451fc;
        case 0x245200u: goto label_245200;
        case 0x245204u: goto label_245204;
        case 0x245208u: goto label_245208;
        case 0x24520cu: goto label_24520c;
        case 0x245210u: goto label_245210;
        case 0x245214u: goto label_245214;
        case 0x245218u: goto label_245218;
        case 0x24521cu: goto label_24521c;
        case 0x245220u: goto label_245220;
        case 0x245224u: goto label_245224;
        case 0x245228u: goto label_245228;
        case 0x24522cu: goto label_24522c;
        case 0x245230u: goto label_245230;
        case 0x245234u: goto label_245234;
        case 0x245238u: goto label_245238;
        case 0x24523cu: goto label_24523c;
        case 0x245240u: goto label_245240;
        case 0x245244u: goto label_245244;
        case 0x245248u: goto label_245248;
        case 0x24524cu: goto label_24524c;
        case 0x245250u: goto label_245250;
        case 0x245254u: goto label_245254;
        case 0x245258u: goto label_245258;
        case 0x24525cu: goto label_24525c;
        case 0x245260u: goto label_245260;
        case 0x245264u: goto label_245264;
        case 0x245268u: goto label_245268;
        case 0x24526cu: goto label_24526c;
        case 0x245270u: goto label_245270;
        case 0x245274u: goto label_245274;
        case 0x245278u: goto label_245278;
        case 0x24527cu: goto label_24527c;
        case 0x245280u: goto label_245280;
        case 0x245284u: goto label_245284;
        case 0x245288u: goto label_245288;
        case 0x24528cu: goto label_24528c;
        case 0x245290u: goto label_245290;
        case 0x245294u: goto label_245294;
        case 0x245298u: goto label_245298;
        case 0x24529cu: goto label_24529c;
        case 0x2452a0u: goto label_2452a0;
        case 0x2452a4u: goto label_2452a4;
        case 0x2452a8u: goto label_2452a8;
        case 0x2452acu: goto label_2452ac;
        case 0x2452b0u: goto label_2452b0;
        case 0x2452b4u: goto label_2452b4;
        case 0x2452b8u: goto label_2452b8;
        case 0x2452bcu: goto label_2452bc;
        case 0x2452c0u: goto label_2452c0;
        case 0x2452c4u: goto label_2452c4;
        case 0x2452c8u: goto label_2452c8;
        case 0x2452ccu: goto label_2452cc;
        case 0x2452d0u: goto label_2452d0;
        case 0x2452d4u: goto label_2452d4;
        case 0x2452d8u: goto label_2452d8;
        case 0x2452dcu: goto label_2452dc;
        case 0x2452e0u: goto label_2452e0;
        case 0x2452e4u: goto label_2452e4;
        case 0x2452e8u: goto label_2452e8;
        case 0x2452ecu: goto label_2452ec;
        case 0x2452f0u: goto label_2452f0;
        case 0x2452f4u: goto label_2452f4;
        case 0x2452f8u: goto label_2452f8;
        case 0x2452fcu: goto label_2452fc;
        case 0x245300u: goto label_245300;
        case 0x245304u: goto label_245304;
        case 0x245308u: goto label_245308;
        case 0x24530cu: goto label_24530c;
        default: break;
    }

    ctx->pc = 0x244e78u;

label_244e78:
    // 0x244e78: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x244e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_244e7c:
    // 0x244e7c: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x244e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
label_244e80:
    // 0x244e80: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x244e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
label_244e84:
    // 0x244e84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x244e84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_244e88:
    // 0x244e88: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x244e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
label_244e8c:
    // 0x244e8c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x244e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_244e90:
    // 0x244e90: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x244e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
label_244e94:
    // 0x244e94: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x244e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
label_244e98:
    // 0x244e98: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x244e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
label_244e9c:
    // 0x244e9c: 0x7fb60110  sq          $s6, 0x110($sp)
    ctx->pc = 0x244e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 22));
label_244ea0:
    // 0x244ea0: 0x7fb70100  sq          $s7, 0x100($sp)
    ctx->pc = 0x244ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 23));
label_244ea4:
    // 0x244ea4: 0x7fbe00f0  sq          $fp, 0xF0($sp)
    ctx->pc = 0x244ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 30));
label_244ea8:
    // 0x244ea8: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x244ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_244eac:
    // 0x244eac: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x244eacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_244eb0:
    // 0x244eb0: 0xafa500c4  sw          $a1, 0xC4($sp)
    ctx->pc = 0x244eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 5));
label_244eb4:
    // 0x244eb4: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x244eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_244eb8:
    // 0x244eb8: 0xafa600c8  sw          $a2, 0xC8($sp)
    ctx->pc = 0x244eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 6));
label_244ebc:
    // 0x244ebc: 0xc0e409a  jal         func_390268
label_244ec0:
    if (ctx->pc == 0x244EC0u) {
        ctx->pc = 0x244EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244EBCu;
        // 0x244ec0: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244EC4u;
        goto label_244ec4;
    }
    ctx->pc = 0x244EBCu;
    SET_GPR_U32(ctx, 31, 0x244EC4u);
    ctx->pc = 0x244EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244EBCu;
    // 0x244ec0: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x244EBCu, 0x244EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244EC4u;
label_244ec4:
    // 0x244ec4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x244ec4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244ec8:
    // 0x244ec8: 0x124000e9  beqz        $s2, . + 4 + (0xE9 << 2)
label_244ecc:
    if (ctx->pc == 0x244ECCu) {
        ctx->pc = 0x244ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244EC8u;
        // 0x244ecc: 0x26370090  addiu       $s7, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244ED0u;
        goto label_244ed0;
    }
    ctx->pc = 0x244EC8u;
    {
        const bool branch_taken_0x244ec8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x244ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244EC8u;
        // 0x244ecc: 0x26370090  addiu       $s7, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ec8) {
            ctx->pc = 0x245270u;
            goto label_245270;
        }
    }
    ctx->pc = 0x244ED0u;
label_244ed0:
    // 0x244ed0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x244ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_244ed4:
    // 0x244ed4: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x244ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_244ed8:
    // 0x244ed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_244edc:
    // 0x244edc: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x244edcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_244ee0:
    // 0x244ee0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x244ee0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244ee4:
    // 0x244ee4: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x244ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_244ee8:
    // 0x244ee8: 0x3c1e0059  lui         $fp, 0x59
    ctx->pc = 0x244ee8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)89 << 16));
label_244eec:
    // 0x244eec: 0xafb700d0  sw          $s7, 0xD0($sp)
    ctx->pc = 0x244eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 23));
label_244ef0:
    // 0x244ef0: 0x60f809  jalr        $v1
label_244ef4:
    if (ctx->pc == 0x244EF4u) {
        ctx->pc = 0x244EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244EF0u;
        // 0x244ef4: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244EF8u;
        goto label_244ef8;
    }
    ctx->pc = 0x244EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x244EF8u);
        ctx->pc = 0x244EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244EF0u;
        // 0x244ef4: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244EF0u, 0x244EF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244EF8u;
label_244ef8:
    // 0x244ef8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x244ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_244efc:
    // 0x244efc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x244efcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_244f00:
    // 0x244f00: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x244f00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_244f04:
    // 0x244f04: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x244f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_244f08:
    // 0x244f08: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x244f08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_244f0c:
    // 0x244f0c: 0x24554b00  addiu       $s5, $v0, 0x4B00
    ctx->pc = 0x244f0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_244f10:
    // 0x244f10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_244f14:
    // 0x244f14: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x244f14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_244f18:
    // 0x244f18: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x244f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_244f1c:
    // 0x244f1c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x244f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_244f20:
    // 0x244f20: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x244f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_244f24:
    // 0x244f24: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x244f24u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_244f28:
    // 0x244f28: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x244f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_244f2c:
    // 0x244f2c: 0x60f809  jalr        $v1
label_244f30:
    if (ctx->pc == 0x244F30u) {
        ctx->pc = 0x244F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F2Cu;
        // 0x244f30: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244F34u;
        goto label_244f34;
    }
    ctx->pc = 0x244F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x244F34u);
        ctx->pc = 0x244F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F2Cu;
        // 0x244f30: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244F2Cu, 0x244F34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244F34u;
label_244f34:
    // 0x244f34: 0x7a2300a0  lq          $v1, 0xA0($s1)
    ctx->pc = 0x244f34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 160)));
label_244f38:
    // 0x244f38: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x244f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_244f3c:
    // 0x244f3c: 0x7a2200b0  lq          $v0, 0xB0($s1)
    ctx->pc = 0x244f3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 176)));
label_244f40:
    // 0x244f40: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x244f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_244f44:
    // 0x244f44: 0x7ba800a0  lq          $t0, 0xA0($sp)
    ctx->pc = 0x244f44u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_244f48:
    // 0x244f48: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x244f48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_244f4c:
    // 0x244f4c: 0x7ba700b0  lq          $a3, 0xB0($sp)
    ctx->pc = 0x244f4cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_244f50:
    // 0x244f50: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x244f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_244f54:
    // 0x244f54: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x244f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_244f58:
    // 0x244f58: 0x7fa80080  sq          $t0, 0x80($sp)
    ctx->pc = 0x244f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 8));
label_244f5c:
    // 0x244f5c: 0x7fa70090  sq          $a3, 0x90($sp)
    ctx->pc = 0x244f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 7));
label_244f60:
    // 0x244f60: 0x7fa80040  sq          $t0, 0x40($sp)
    ctx->pc = 0x244f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 8));
label_244f64:
    // 0x244f64: 0xc0cd66c  jal         func_3359B0
label_244f68:
    if (ctx->pc == 0x244F68u) {
        ctx->pc = 0x244F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F64u;
        // 0x244f68: 0x7fa70050  sq          $a3, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244F6Cu;
        goto label_244f6c;
    }
    ctx->pc = 0x244F64u;
    SET_GPR_U32(ctx, 31, 0x244F6Cu);
    ctx->pc = 0x244F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244F64u;
    // 0x244f68: 0x7fa70050  sq          $a3, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3359B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3359B0u, 0x244F64u, 0x244F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244F6Cu;
label_244f6c:
    // 0x244f6c: 0x8e2601a0  lw          $a2, 0x1A0($s1)
    ctx->pc = 0x244f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_244f70:
    // 0x244f70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x244f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_244f74:
    // 0x244f74: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x244f74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_244f78:
    // 0x244f78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x244f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_244f7c:
    // 0x244f7c: 0x8cc30040  lw          $v1, 0x40($a2)
    ctx->pc = 0x244f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
label_244f80:
    // 0x244f80: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x244f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_244f84:
    // 0x244f84: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x244f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_244f88:
    // 0x244f88: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x244f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_244f8c:
    // 0x244f8c: 0xc136afa  jal         func_4DABE8
label_244f90:
    if (ctx->pc == 0x244F90u) {
        ctx->pc = 0x244F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F8Cu;
        // 0x244f90: 0xafa300cc  sw          $v1, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244F94u;
        goto label_244f94;
    }
    ctx->pc = 0x244F8Cu;
    SET_GPR_U32(ctx, 31, 0x244F94u);
    ctx->pc = 0x244F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244F8Cu;
    // 0x244f90: 0xafa300cc  sw          $v1, 0xCC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x244F8Cu, 0x244F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244F94u;
label_244f94:
    // 0x244f94: 0x8e2401a0  lw          $a0, 0x1A0($s1)
    ctx->pc = 0x244f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_244f98:
    // 0x244f98: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x244f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_244f9c:
    // 0x244f9c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x244f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_244fa0:
    // 0x244fa0: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x244fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_244fa4:
    // 0x244fa4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x244fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_244fa8:
    // 0x244fa8: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x244fa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_244fac:
    // 0x244fac: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x244facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_244fb0:
    // 0x244fb0: 0x40f809  jalr        $v0
label_244fb4:
    if (ctx->pc == 0x244FB4u) {
        ctx->pc = 0x244FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244FB0u;
        // 0x244fb4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244FB8u;
        goto label_244fb8;
    }
    ctx->pc = 0x244FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x244FB8u);
        ctx->pc = 0x244FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244FB0u;
        // 0x244fb4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244FB0u, 0x244FB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244FB8u;
label_244fb8:
    // 0x244fb8: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x244fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_244fbc:
    // 0x244fbc: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x244fbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_244fc0:
    // 0x244fc0: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x244fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_244fc4:
    // 0x244fc4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x244fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_244fc8:
    // 0x244fc8: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x244fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_244fcc:
    // 0x244fcc: 0x42827  nor         $a1, $zero, $a0
    ctx->pc = 0x244fccu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
label_244fd0:
    // 0x244fd0: 0x8e2401a0  lw          $a0, 0x1A0($s1)
    ctx->pc = 0x244fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_244fd4:
    // 0x244fd4: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x244fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_244fd8:
    // 0x244fd8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x244fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_244fdc:
    // 0x244fdc: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x244fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_244fe0:
    // 0x244fe0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x244fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_244fe4:
    // 0x244fe4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x244fe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_244fe8:
    // 0x244fe8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x244fe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_244fec:
    // 0x244fec: 0x8fc47198  lw          $a0, 0x7198($fp)
    ctx->pc = 0x244fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 29080)));
label_244ff0:
    // 0x244ff0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x244ff0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_244ff4:
    // 0x244ff4: 0xc0cf89e  jal         func_33E278
label_244ff8:
    if (ctx->pc == 0x244FF8u) {
        ctx->pc = 0x244FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244FF4u;
        // 0x244ff8: 0x8e2501a0  lw          $a1, 0x1A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244FFCu;
        goto label_244ffc;
    }
    ctx->pc = 0x244FF4u;
    SET_GPR_U32(ctx, 31, 0x244FFCu);
    ctx->pc = 0x244FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244FF4u;
    // 0x244ff8: 0x8e2501a0  lw          $a1, 0x1A0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E278u, 0x244FF4u, 0x244FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244FFCu;
label_244ffc:
    // 0x244ffc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x244ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_245000:
    // 0x245000: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x245000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_245004:
    // 0x245004: 0xc136b18  jal         func_4DAC60
label_245008:
    if (ctx->pc == 0x245008u) {
        ctx->pc = 0x245008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245004u;
        // 0x245008: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24500Cu;
        goto label_24500c;
    }
    ctx->pc = 0x245004u;
    SET_GPR_U32(ctx, 31, 0x24500Cu);
    ctx->pc = 0x245008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245004u;
    // 0x245008: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x245004u, 0x24500Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24500Cu;
label_24500c:
    // 0x24500c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x24500cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_245010:
    // 0x245010: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x245010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_245014:
    // 0x245014: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x245014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_245018:
    // 0x245018: 0x84450002  lh          $a1, 0x2($v0)
    ctx->pc = 0x245018u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_24501c:
    // 0x24501c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x24501cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_245020:
    // 0x245020: 0xc136afa  jal         func_4DABE8
label_245024:
    if (ctx->pc == 0x245024u) {
        ctx->pc = 0x245024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245020u;
        // 0x245024: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245028u;
        goto label_245028;
    }
    ctx->pc = 0x245020u;
    SET_GPR_U32(ctx, 31, 0x245028u);
    ctx->pc = 0x245024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245020u;
    // 0x245024: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x245020u, 0x245028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245028u;
label_245028:
    // 0x245028: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x245028u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_24502c:
    // 0x24502c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x24502cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_245030:
    // 0x245030: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x245030u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_245034:
    // 0x245034: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x245034u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_245038:
    // 0x245038: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x245038u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_24503c:
    // 0x24503c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x24503cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_245040:
    // 0x245040: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x245040u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_245044:
    // 0x245044: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x245044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_245048:
    // 0x245048: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x245048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_24504c:
    // 0x24504c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x24504cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_245050:
    // 0x245050: 0x0  nop
    ctx->pc = 0x245050u;
    // NOP
label_245054:
    // 0x245054: 0x45010033  bc1t        . + 4 + (0x33 << 2)
label_245058:
    if (ctx->pc == 0x245058u) {
        ctx->pc = 0x245058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245054u;
        // 0x245058: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24505Cu;
        goto label_24505c;
    }
    ctx->pc = 0x245054u;
    {
        const bool branch_taken_0x245054 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x245058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245054u;
        // 0x245058: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245054) {
            ctx->pc = 0x245124u;
            goto label_245124;
        }
    }
    ctx->pc = 0x24505Cu;
label_24505c:
    // 0x24505c: 0x86e30002  lh          $v1, 0x2($s7)
    ctx->pc = 0x24505cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_245060:
    // 0x245060: 0x26530090  addiu       $s3, $s2, 0x90
    ctx->pc = 0x245060u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_245064:
    // 0x245064: 0x8fd07198  lw          $s0, 0x7198($fp)
    ctx->pc = 0x245064u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 29080)));
label_245068:
    // 0x245068: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x245068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_24506c:
    // 0x24506c: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x24506cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_245070:
    // 0x245070: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x245070u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_245074:
    // 0x245074: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x245074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_245078:
    // 0x245078: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x245078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_24507c:
    // 0x24507c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x24507cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_245080:
    // 0x245080: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x245080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_245084:
    // 0x245084: 0x40f809  jalr        $v0
label_245088:
    if (ctx->pc == 0x245088u) {
        ctx->pc = 0x245088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245084u;
        // 0x245088: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24508Cu;
        goto label_24508c;
    }
    ctx->pc = 0x245084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24508Cu);
        ctx->pc = 0x245088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245084u;
        // 0x245088: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245084u, 0x24508Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24508Cu;
label_24508c:
    // 0x24508c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24508cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_245090:
    // 0x245090: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x245090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_245094:
    // 0x245094: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x245094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_245098:
    // 0x245098: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x245098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24509c:
    // 0x24509c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x24509cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2450a0:
    // 0x2450a0: 0xc0cf89e  jal         func_33E278
label_2450a4:
    if (ctx->pc == 0x2450A4u) {
        ctx->pc = 0x2450A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450A0u;
        // 0x2450a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2450A8u;
        goto label_2450a8;
    }
    ctx->pc = 0x2450A0u;
    SET_GPR_U32(ctx, 31, 0x2450A8u);
    ctx->pc = 0x2450A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2450A0u;
    // 0x2450a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E278u, 0x2450A0u, 0x2450A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2450A8u;
label_2450a8:
    // 0x2450a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2450a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2450ac:
    // 0x2450ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2450acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2450b0:
    // 0x2450b0: 0xc136b18  jal         func_4DAC60
label_2450b4:
    if (ctx->pc == 0x2450B4u) {
        ctx->pc = 0x2450B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450B0u;
        // 0x2450b4: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2450B8u;
        goto label_2450b8;
    }
    ctx->pc = 0x2450B0u;
    SET_GPR_U32(ctx, 31, 0x2450B8u);
    ctx->pc = 0x2450B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2450B0u;
    // 0x2450b4: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x2450B0u, 0x2450B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2450B8u;
label_2450b8:
    // 0x2450b8: 0x86650002  lh          $a1, 0x2($s3)
    ctx->pc = 0x2450b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_2450bc:
    // 0x2450bc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2450bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2450c0:
    // 0x2450c0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2450c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2450c4:
    // 0x2450c4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2450c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2450c8:
    // 0x2450c8: 0xc136afa  jal         func_4DABE8
label_2450cc:
    if (ctx->pc == 0x2450CCu) {
        ctx->pc = 0x2450CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450C8u;
        // 0x2450cc: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2450D0u;
        goto label_2450d0;
    }
    ctx->pc = 0x2450C8u;
    SET_GPR_U32(ctx, 31, 0x2450D0u);
    ctx->pc = 0x2450CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2450C8u;
    // 0x2450cc: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x2450C8u, 0x2450D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2450D0u;
label_2450d0:
    // 0x2450d0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2450d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2450d4:
    // 0x2450d4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2450d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2450d8:
    // 0x2450d8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2450d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2450dc:
    // 0x2450dc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2450dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2450e0:
    // 0x2450e0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2450e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2450e4:
    // 0x2450e4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2450e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2450e8:
    // 0x2450e8: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x2450e8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_2450ec:
    // 0x2450ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2450ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2450f0:
    // 0x2450f0: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2450f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_2450f4:
    // 0x2450f4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2450f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2450f8:
    // 0x2450f8: 0x0  nop
    ctx->pc = 0x2450f8u;
    // NOP
label_2450fc:
    // 0x2450fc: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_245100:
    if (ctx->pc == 0x245100u) {
        ctx->pc = 0x245100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450FCu;
        // 0x245100: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245104u;
        goto label_245104;
    }
    ctx->pc = 0x2450FCu;
    {
        const bool branch_taken_0x2450fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x245100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450FCu;
        // 0x245100: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2450fc) {
            ctx->pc = 0x245124u;
            goto label_245124;
        }
    }
    ctx->pc = 0x245104u;
label_245104:
    // 0x245104: 0x86620002  lh          $v0, 0x2($s3)
    ctx->pc = 0x245104u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_245108:
    // 0x245108: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x245108u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_24510c:
    // 0x24510c: 0x2ec40003  sltiu       $a0, $s6, 0x3
    ctx->pc = 0x24510cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_245110:
    // 0x245110: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x245110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_245114:
    // 0x245114: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x245114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_245118:
    // 0x245118: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x245118u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_24511c:
    // 0x24511c: 0x1480ffb0  bnez        $a0, . + 4 + (-0x50 << 2)
label_245120:
    if (ctx->pc == 0x245120u) {
        ctx->pc = 0x245120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24511Cu;
        // 0x245120: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245124u;
        goto label_245124;
    }
    ctx->pc = 0x24511Cu;
    {
        const bool branch_taken_0x24511c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x245120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24511Cu;
        // 0x245120: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24511c) {
            ctx->pc = 0x244FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244fe0;
        }
    }
    ctx->pc = 0x245124u;
label_245124:
    // 0x245124: 0x8e2301a0  lw          $v1, 0x1A0($s1)
    ctx->pc = 0x245124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_245128:
    // 0x245128: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x245128u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
label_24512c:
    // 0x24512c: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x24512cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_245130:
    // 0x245130: 0x36107fff  ori         $s0, $s0, 0x7FFF
    ctx->pc = 0x245130u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32767);
label_245134:
    // 0x245134: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x245134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_245138:
    // 0x245138: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x245138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_24513c:
    // 0x24513c: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x24513cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
label_245140:
    // 0x245140: 0x8e2401a0  lw          $a0, 0x1A0($s1)
    ctx->pc = 0x245140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_245144:
    // 0x245144: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x245144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_245148:
    // 0x245148: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x245148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_24514c:
    // 0x24514c: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x24514cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_245150:
    // 0x245150: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x245150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_245154:
    // 0x245154: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x245154u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_245158:
    // 0x245158: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x245158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_24515c:
    // 0x24515c: 0x40f809  jalr        $v0
label_245160:
    if (ctx->pc == 0x245160u) {
        ctx->pc = 0x245160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24515Cu;
        // 0x245160: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245164u;
        goto label_245164;
    }
    ctx->pc = 0x24515Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x245164u);
        ctx->pc = 0x245160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24515Cu;
        // 0x245160: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24515Cu, 0x245164u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x245164u;
label_245164:
    // 0x245164: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x245164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_245168:
    // 0x245168: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x245168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24516c:
    // 0x24516c: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x24516cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
label_245170:
    // 0x245170: 0x16c4001d  bne         $s6, $a0, . + 4 + (0x1D << 2)
label_245174:
    if (ctx->pc == 0x245174u) {
        ctx->pc = 0x245174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245170u;
        // 0x245174: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245178u;
        goto label_245178;
    }
    ctx->pc = 0x245170u;
    {
        const bool branch_taken_0x245170 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 4));
        ctx->pc = 0x245174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245170u;
        // 0x245174: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245170) {
            ctx->pc = 0x2451E8u;
            goto label_2451e8;
        }
    }
    ctx->pc = 0x245178u;
label_245178:
    // 0x245178: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x245178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24517c:
    // 0x24517c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x24517cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_245180:
    // 0x245180: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x245180u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_245184:
    // 0x245184: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x245184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_245188:
    // 0x245188: 0x60f809  jalr        $v1
label_24518c:
    if (ctx->pc == 0x24518Cu) {
        ctx->pc = 0x24518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245188u;
        // 0x24518c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245190u;
        goto label_245190;
    }
    ctx->pc = 0x245188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x245190u);
        ctx->pc = 0x24518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245188u;
        // 0x24518c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245188u, 0x245190u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x245190u;
label_245190:
    // 0x245190: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x245190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_245194:
    // 0x245194: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x245194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_245198:
    // 0x245198: 0x845000b0  lh          $s0, 0xB0($v0)
    ctx->pc = 0x245198u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_24519c:
    // 0x24519c: 0x245100b0  addiu       $s1, $v0, 0xB0
    ctx->pc = 0x24519cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_2451a0:
    // 0x2451a0: 0x84450098  lh          $a1, 0x98($v0)
    ctx->pc = 0x2451a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_2451a4:
    // 0x2451a4: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x2451a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_2451a8:
    // 0x2451a8: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x2451a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_2451ac:
    // 0x2451ac: 0x60f809  jalr        $v1
label_2451b0:
    if (ctx->pc == 0x2451B0u) {
        ctx->pc = 0x2451B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451ACu;
        // 0x2451b0: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2451B4u;
        goto label_2451b4;
    }
    ctx->pc = 0x2451ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2451B4u);
        ctx->pc = 0x2451B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451ACu;
        // 0x2451b0: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2451ACu, 0x2451B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2451B4u;
label_2451b4:
    // 0x2451b4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2451b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2451b8:
    // 0x2451b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2451b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2451bc:
    // 0x2451bc: 0x40f809  jalr        $v0
label_2451c0:
    if (ctx->pc == 0x2451C0u) {
        ctx->pc = 0x2451C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451BCu;
        // 0x2451c0: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2451C4u;
        goto label_2451c4;
    }
    ctx->pc = 0x2451BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2451C4u);
        ctx->pc = 0x2451C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451BCu;
        // 0x2451c0: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2451BCu, 0x2451C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2451C4u;
label_2451c4:
    // 0x2451c4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2451c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2451c8:
    // 0x2451c8: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2451c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2451cc:
    // 0x2451cc: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x2451ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_2451d0:
    // 0x2451d0: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x2451d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_2451d4:
    // 0x2451d4: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x2451d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_2451d8:
    // 0x2451d8: 0x40f809  jalr        $v0
label_2451dc:
    if (ctx->pc == 0x2451DCu) {
        ctx->pc = 0x2451DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451D8u;
        // 0x2451dc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2451E0u;
        goto label_2451e0;
    }
    ctx->pc = 0x2451D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2451E0u);
        ctx->pc = 0x2451DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451D8u;
        // 0x2451dc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2451D8u, 0x2451E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2451E0u;
label_2451e0:
    // 0x2451e0: 0x10000013  b           . + 4 + (0x13 << 2)
label_2451e4:
    if (ctx->pc == 0x2451E4u) {
        ctx->pc = 0x2451E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451E0u;
        // 0x2451e4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2451E8u;
        goto label_2451e8;
    }
    ctx->pc = 0x2451E0u;
    {
        const bool branch_taken_0x2451e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2451E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451E0u;
        // 0x2451e4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2451e0) {
            ctx->pc = 0x245230u;
            goto label_245230;
        }
    }
    ctx->pc = 0x2451E8u;
label_2451e8:
    // 0x2451e8: 0x86e30002  lh          $v1, 0x2($s7)
    ctx->pc = 0x2451e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_2451ec:
    // 0x2451ec: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2451ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2451f0:
    // 0x2451f0: 0x24444b00  addiu       $a0, $v0, 0x4B00
    ctx->pc = 0x2451f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2451f4:
    // 0x2451f4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2451f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2451f8:
    // 0x2451f8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2451f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2451fc:
    // 0x2451fc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2451fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_245200:
    // 0x245200: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x245200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_245204:
    // 0x245204: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x245204u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_245208:
    // 0x245208: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x245208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_24520c:
    // 0x24520c: 0x84c400b0  lh          $a0, 0xB0($a2)
    ctx->pc = 0x24520cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 176)));
label_245210:
    // 0x245210: 0x8cc300b4  lw          $v1, 0xB4($a2)
    ctx->pc = 0x245210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 180)));
label_245214:
    // 0x245214: 0x60f809  jalr        $v1
label_245218:
    if (ctx->pc == 0x245218u) {
        ctx->pc = 0x245218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245214u;
        // 0x245218: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24521Cu;
        goto label_24521c;
    }
    ctx->pc = 0x245214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x24521Cu);
        ctx->pc = 0x245218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245214u;
        // 0x245218: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245214u, 0x24521Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24521Cu;
label_24521c:
    // 0x24521c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x24521cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_245220:
    // 0x245220: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x245220u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_245224:
    // 0x245224: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x245224u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_245228:
    // 0x245228: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x245228u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
label_24522c:
    // 0x24522c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x24522cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_245230:
    // 0x245230: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x245230u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_245234:
    // 0x245234: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x245234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_245238:
    // 0x245238: 0x40f809  jalr        $v0
label_24523c:
    if (ctx->pc == 0x24523Cu) {
        ctx->pc = 0x24523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245238u;
        // 0x24523c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245240u;
        goto label_245240;
    }
    ctx->pc = 0x245238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x245240u);
        ctx->pc = 0x24523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245238u;
        // 0x24523c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245238u, 0x245240u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x245240u;
label_245240:
    // 0x245240: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x245240u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_245244:
    // 0x245244: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x245244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_245248:
    // 0x245248: 0x24444b00  addiu       $a0, $v0, 0x4B00
    ctx->pc = 0x245248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_24524c:
    // 0x24524c: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x24524cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_245250:
    // 0x245250: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x245250u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_245254:
    // 0x245254: 0x86e20002  lh          $v0, 0x2($s7)
    ctx->pc = 0x245254u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_245258:
    // 0x245258: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x245258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_24525c:
    // 0x24525c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24525cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_245260:
    // 0x245260: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x245260u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_245264:
    // 0x245264: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x245264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_245268:
    // 0x245268: 0x1000001b  b           . + 4 + (0x1B << 2)
label_24526c:
    if (ctx->pc == 0x24526Cu) {
        ctx->pc = 0x24526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245268u;
        // 0x24526c: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245270u;
        goto label_245270;
    }
    ctx->pc = 0x245268u;
    {
        const bool branch_taken_0x245268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245268u;
        // 0x24526c: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245268) {
            ctx->pc = 0x2452D8u;
            goto label_2452d8;
        }
    }
    ctx->pc = 0x245270u;
label_245270:
    // 0x245270: 0xc088420  jal         func_221080
label_245274:
    if (ctx->pc == 0x245274u) {
        ctx->pc = 0x245274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245270u;
        // 0x245274: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245278u;
        goto label_245278;
    }
    ctx->pc = 0x245270u;
    SET_GPR_U32(ctx, 31, 0x245278u);
    ctx->pc = 0x245274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245270u;
    // 0x245274: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221080u, 0x245270u, 0x245278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245278u;
label_245278:
    // 0x245278: 0x862501be  lh          $a1, 0x1BE($s1)
    ctx->pc = 0x245278u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
label_24527c:
    // 0x24527c: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
label_245280:
    if (ctx->pc == 0x245280u) {
        ctx->pc = 0x245280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24527Cu;
        // 0x245280: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245284u;
        goto label_245284;
    }
    ctx->pc = 0x24527Cu;
    {
        const bool branch_taken_0x24527c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x245280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24527Cu;
        // 0x245280: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24527c) {
            ctx->pc = 0x2452A4u;
            goto label_2452a4;
        }
    }
    ctx->pc = 0x245284u;
label_245284:
    // 0x245284: 0x862201c0  lh          $v0, 0x1C0($s1)
    ctx->pc = 0x245284u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 448)));
label_245288:
    // 0x245288: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x245288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_24528c:
    // 0x24528c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24528cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_245290:
    // 0x245290: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x245290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_245294:
    // 0x245294: 0xdc70fff8  ld          $s0, -0x8($v1)
    ctx->pc = 0x245294u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_245298:
    // 0x245298: 0x10383f  dsra32      $a3, $s0, 0
    ctx->pc = 0x245298u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 16) >> (32 + 0));
label_24529c:
    // 0x24529c: 0x10000003  b           . + 4 + (0x3 << 2)
label_2452a0:
    if (ctx->pc == 0x2452A0u) {
        ctx->pc = 0x2452A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24529Cu;
        // 0x2452a0: 0x862301bc  lh          $v1, 0x1BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2452A4u;
        goto label_2452a4;
    }
    ctx->pc = 0x24529Cu;
    {
        const bool branch_taken_0x24529c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2452A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24529Cu;
        // 0x2452a0: 0x862301bc  lh          $v1, 0x1BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24529c) {
            ctx->pc = 0x2452ACu;
            goto label_2452ac;
        }
    }
    ctx->pc = 0x2452A4u;
label_2452a4:
    // 0x2452a4: 0x8e2701c0  lw          $a3, 0x1C0($s1)
    ctx->pc = 0x2452a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
label_2452a8:
    // 0x2452a8: 0x862301bc  lh          $v1, 0x1BC($s1)
    ctx->pc = 0x2452a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 444)));
label_2452ac:
    // 0x2452ac: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
label_2452b0:
    if (ctx->pc == 0x2452B0u) {
        ctx->pc = 0x2452B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2452ACu;
        // 0x2452b0: 0x3202ffff  andi        $v0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2452B4u;
        goto label_2452b4;
    }
    ctx->pc = 0x2452ACu;
    {
        const bool branch_taken_0x2452ac = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2452B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2452ACu;
        // 0x2452b0: 0x3202ffff  andi        $v0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2452ac) {
            ctx->pc = 0x2452C4u;
            goto label_2452c4;
        }
    }
    ctx->pc = 0x2452B4u;
label_2452b4:
    // 0x2452b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2452b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2452b8:
    // 0x2452b8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2452b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_2452bc:
    // 0x2452bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_2452c0:
    if (ctx->pc == 0x2452C0u) {
        ctx->pc = 0x2452C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2452BCu;
        // 0x2452c0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2452C4u;
        goto label_2452c4;
    }
    ctx->pc = 0x2452BCu;
    {
        const bool branch_taken_0x2452bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2452C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2452BCu;
        // 0x2452c0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2452bc) {
            ctx->pc = 0x2452C8u;
            goto label_2452c8;
        }
    }
    ctx->pc = 0x2452C4u;
label_2452c4:
    // 0x2452c4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2452c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2452c8:
    // 0x2452c8: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x2452c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_2452cc:
    // 0x2452cc: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x2452ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2452d0:
    // 0x2452d0: 0xe0f809  jalr        $a3
label_2452d4:
    if (ctx->pc == 0x2452D4u) {
        ctx->pc = 0x2452D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2452D0u;
        // 0x2452d4: 0x8fa600c8  lw          $a2, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2452D8u;
        goto label_2452d8;
    }
    ctx->pc = 0x2452D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x2452D8u);
        ctx->pc = 0x2452D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2452D0u;
        // 0x2452d4: 0x8fa600c8  lw          $a2, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2452D0u, 0x2452D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2452D8u;
label_2452d8:
    // 0x2452d8: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x2452d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_2452dc:
    // 0x2452dc: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x2452dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_2452e0:
    // 0x2452e0: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x2452e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_2452e4:
    // 0x2452e4: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x2452e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_2452e8:
    // 0x2452e8: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x2452e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_2452ec:
    // 0x2452ec: 0x7bb50120  lq          $s5, 0x120($sp)
    ctx->pc = 0x2452ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_2452f0:
    // 0x2452f0: 0x7bb60110  lq          $s6, 0x110($sp)
    ctx->pc = 0x2452f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2452f4:
    // 0x2452f4: 0x7bb70100  lq          $s7, 0x100($sp)
    ctx->pc = 0x2452f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2452f8:
    // 0x2452f8: 0x7bbe00f0  lq          $fp, 0xF0($sp)
    ctx->pc = 0x2452f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2452fc:
    // 0x2452fc: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x2452fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_245300:
    // 0x245300: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x245300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_245304:
    // 0x245304: 0x3e00008  jr          $ra
label_245308:
    if (ctx->pc == 0x245308u) {
        ctx->pc = 0x245308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245304u;
        // 0x245308: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24530Cu;
        goto label_24530c;
    }
    ctx->pc = 0x245304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245304u;
        // 0x245308: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24530Cu;
label_24530c:
    // 0x24530c: 0x0  nop
    ctx->pc = 0x24530cu;
    // NOP
    ctx->pc = 0x245310u;
}
