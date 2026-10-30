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

// Function: sub_00207E28
// Address: 0x207e28 - 0x208288
void sub_00207E28_0x207e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207E28_0x207e28");
#endif

    switch (ctx->pc) {
        case 0x207e28u: goto label_207e28;
        case 0x207e2cu: goto label_207e2c;
        case 0x207e30u: goto label_207e30;
        case 0x207e34u: goto label_207e34;
        case 0x207e38u: goto label_207e38;
        case 0x207e3cu: goto label_207e3c;
        case 0x207e40u: goto label_207e40;
        case 0x207e44u: goto label_207e44;
        case 0x207e48u: goto label_207e48;
        case 0x207e4cu: goto label_207e4c;
        case 0x207e50u: goto label_207e50;
        case 0x207e54u: goto label_207e54;
        case 0x207e58u: goto label_207e58;
        case 0x207e5cu: goto label_207e5c;
        case 0x207e60u: goto label_207e60;
        case 0x207e64u: goto label_207e64;
        case 0x207e68u: goto label_207e68;
        case 0x207e6cu: goto label_207e6c;
        case 0x207e70u: goto label_207e70;
        case 0x207e74u: goto label_207e74;
        case 0x207e78u: goto label_207e78;
        case 0x207e7cu: goto label_207e7c;
        case 0x207e80u: goto label_207e80;
        case 0x207e84u: goto label_207e84;
        case 0x207e88u: goto label_207e88;
        case 0x207e8cu: goto label_207e8c;
        case 0x207e90u: goto label_207e90;
        case 0x207e94u: goto label_207e94;
        case 0x207e98u: goto label_207e98;
        case 0x207e9cu: goto label_207e9c;
        case 0x207ea0u: goto label_207ea0;
        case 0x207ea4u: goto label_207ea4;
        case 0x207ea8u: goto label_207ea8;
        case 0x207eacu: goto label_207eac;
        case 0x207eb0u: goto label_207eb0;
        case 0x207eb4u: goto label_207eb4;
        case 0x207eb8u: goto label_207eb8;
        case 0x207ebcu: goto label_207ebc;
        case 0x207ec0u: goto label_207ec0;
        case 0x207ec4u: goto label_207ec4;
        case 0x207ec8u: goto label_207ec8;
        case 0x207eccu: goto label_207ecc;
        case 0x207ed0u: goto label_207ed0;
        case 0x207ed4u: goto label_207ed4;
        case 0x207ed8u: goto label_207ed8;
        case 0x207edcu: goto label_207edc;
        case 0x207ee0u: goto label_207ee0;
        case 0x207ee4u: goto label_207ee4;
        case 0x207ee8u: goto label_207ee8;
        case 0x207eecu: goto label_207eec;
        case 0x207ef0u: goto label_207ef0;
        case 0x207ef4u: goto label_207ef4;
        case 0x207ef8u: goto label_207ef8;
        case 0x207efcu: goto label_207efc;
        case 0x207f00u: goto label_207f00;
        case 0x207f04u: goto label_207f04;
        case 0x207f08u: goto label_207f08;
        case 0x207f0cu: goto label_207f0c;
        case 0x207f10u: goto label_207f10;
        case 0x207f14u: goto label_207f14;
        case 0x207f18u: goto label_207f18;
        case 0x207f1cu: goto label_207f1c;
        case 0x207f20u: goto label_207f20;
        case 0x207f24u: goto label_207f24;
        case 0x207f28u: goto label_207f28;
        case 0x207f2cu: goto label_207f2c;
        case 0x207f30u: goto label_207f30;
        case 0x207f34u: goto label_207f34;
        case 0x207f38u: goto label_207f38;
        case 0x207f3cu: goto label_207f3c;
        case 0x207f40u: goto label_207f40;
        case 0x207f44u: goto label_207f44;
        case 0x207f48u: goto label_207f48;
        case 0x207f4cu: goto label_207f4c;
        case 0x207f50u: goto label_207f50;
        case 0x207f54u: goto label_207f54;
        case 0x207f58u: goto label_207f58;
        case 0x207f5cu: goto label_207f5c;
        case 0x207f60u: goto label_207f60;
        case 0x207f64u: goto label_207f64;
        case 0x207f68u: goto label_207f68;
        case 0x207f6cu: goto label_207f6c;
        case 0x207f70u: goto label_207f70;
        case 0x207f74u: goto label_207f74;
        case 0x207f78u: goto label_207f78;
        case 0x207f7cu: goto label_207f7c;
        case 0x207f80u: goto label_207f80;
        case 0x207f84u: goto label_207f84;
        case 0x207f88u: goto label_207f88;
        case 0x207f8cu: goto label_207f8c;
        case 0x207f90u: goto label_207f90;
        case 0x207f94u: goto label_207f94;
        case 0x207f98u: goto label_207f98;
        case 0x207f9cu: goto label_207f9c;
        case 0x207fa0u: goto label_207fa0;
        case 0x207fa4u: goto label_207fa4;
        case 0x207fa8u: goto label_207fa8;
        case 0x207facu: goto label_207fac;
        case 0x207fb0u: goto label_207fb0;
        case 0x207fb4u: goto label_207fb4;
        case 0x207fb8u: goto label_207fb8;
        case 0x207fbcu: goto label_207fbc;
        case 0x207fc0u: goto label_207fc0;
        case 0x207fc4u: goto label_207fc4;
        case 0x207fc8u: goto label_207fc8;
        case 0x207fccu: goto label_207fcc;
        case 0x207fd0u: goto label_207fd0;
        case 0x207fd4u: goto label_207fd4;
        case 0x207fd8u: goto label_207fd8;
        case 0x207fdcu: goto label_207fdc;
        case 0x207fe0u: goto label_207fe0;
        case 0x207fe4u: goto label_207fe4;
        case 0x207fe8u: goto label_207fe8;
        case 0x207fecu: goto label_207fec;
        case 0x207ff0u: goto label_207ff0;
        case 0x207ff4u: goto label_207ff4;
        case 0x207ff8u: goto label_207ff8;
        case 0x207ffcu: goto label_207ffc;
        case 0x208000u: goto label_208000;
        case 0x208004u: goto label_208004;
        case 0x208008u: goto label_208008;
        case 0x20800cu: goto label_20800c;
        case 0x208010u: goto label_208010;
        case 0x208014u: goto label_208014;
        case 0x208018u: goto label_208018;
        case 0x20801cu: goto label_20801c;
        case 0x208020u: goto label_208020;
        case 0x208024u: goto label_208024;
        case 0x208028u: goto label_208028;
        case 0x20802cu: goto label_20802c;
        case 0x208030u: goto label_208030;
        case 0x208034u: goto label_208034;
        case 0x208038u: goto label_208038;
        case 0x20803cu: goto label_20803c;
        case 0x208040u: goto label_208040;
        case 0x208044u: goto label_208044;
        case 0x208048u: goto label_208048;
        case 0x20804cu: goto label_20804c;
        case 0x208050u: goto label_208050;
        case 0x208054u: goto label_208054;
        case 0x208058u: goto label_208058;
        case 0x20805cu: goto label_20805c;
        case 0x208060u: goto label_208060;
        case 0x208064u: goto label_208064;
        case 0x208068u: goto label_208068;
        case 0x20806cu: goto label_20806c;
        case 0x208070u: goto label_208070;
        case 0x208074u: goto label_208074;
        case 0x208078u: goto label_208078;
        case 0x20807cu: goto label_20807c;
        case 0x208080u: goto label_208080;
        case 0x208084u: goto label_208084;
        case 0x208088u: goto label_208088;
        case 0x20808cu: goto label_20808c;
        case 0x208090u: goto label_208090;
        case 0x208094u: goto label_208094;
        case 0x208098u: goto label_208098;
        case 0x20809cu: goto label_20809c;
        case 0x2080a0u: goto label_2080a0;
        case 0x2080a4u: goto label_2080a4;
        case 0x2080a8u: goto label_2080a8;
        case 0x2080acu: goto label_2080ac;
        case 0x2080b0u: goto label_2080b0;
        case 0x2080b4u: goto label_2080b4;
        case 0x2080b8u: goto label_2080b8;
        case 0x2080bcu: goto label_2080bc;
        case 0x2080c0u: goto label_2080c0;
        case 0x2080c4u: goto label_2080c4;
        case 0x2080c8u: goto label_2080c8;
        case 0x2080ccu: goto label_2080cc;
        case 0x2080d0u: goto label_2080d0;
        case 0x2080d4u: goto label_2080d4;
        case 0x2080d8u: goto label_2080d8;
        case 0x2080dcu: goto label_2080dc;
        case 0x2080e0u: goto label_2080e0;
        case 0x2080e4u: goto label_2080e4;
        case 0x2080e8u: goto label_2080e8;
        case 0x2080ecu: goto label_2080ec;
        case 0x2080f0u: goto label_2080f0;
        case 0x2080f4u: goto label_2080f4;
        case 0x2080f8u: goto label_2080f8;
        case 0x2080fcu: goto label_2080fc;
        case 0x208100u: goto label_208100;
        case 0x208104u: goto label_208104;
        case 0x208108u: goto label_208108;
        case 0x20810cu: goto label_20810c;
        case 0x208110u: goto label_208110;
        case 0x208114u: goto label_208114;
        case 0x208118u: goto label_208118;
        case 0x20811cu: goto label_20811c;
        case 0x208120u: goto label_208120;
        case 0x208124u: goto label_208124;
        case 0x208128u: goto label_208128;
        case 0x20812cu: goto label_20812c;
        case 0x208130u: goto label_208130;
        case 0x208134u: goto label_208134;
        case 0x208138u: goto label_208138;
        case 0x20813cu: goto label_20813c;
        case 0x208140u: goto label_208140;
        case 0x208144u: goto label_208144;
        case 0x208148u: goto label_208148;
        case 0x20814cu: goto label_20814c;
        case 0x208150u: goto label_208150;
        case 0x208154u: goto label_208154;
        case 0x208158u: goto label_208158;
        case 0x20815cu: goto label_20815c;
        case 0x208160u: goto label_208160;
        case 0x208164u: goto label_208164;
        case 0x208168u: goto label_208168;
        case 0x20816cu: goto label_20816c;
        case 0x208170u: goto label_208170;
        case 0x208174u: goto label_208174;
        case 0x208178u: goto label_208178;
        case 0x20817cu: goto label_20817c;
        case 0x208180u: goto label_208180;
        case 0x208184u: goto label_208184;
        case 0x208188u: goto label_208188;
        case 0x20818cu: goto label_20818c;
        case 0x208190u: goto label_208190;
        case 0x208194u: goto label_208194;
        case 0x208198u: goto label_208198;
        case 0x20819cu: goto label_20819c;
        case 0x2081a0u: goto label_2081a0;
        case 0x2081a4u: goto label_2081a4;
        case 0x2081a8u: goto label_2081a8;
        case 0x2081acu: goto label_2081ac;
        case 0x2081b0u: goto label_2081b0;
        case 0x2081b4u: goto label_2081b4;
        case 0x2081b8u: goto label_2081b8;
        case 0x2081bcu: goto label_2081bc;
        case 0x2081c0u: goto label_2081c0;
        case 0x2081c4u: goto label_2081c4;
        case 0x2081c8u: goto label_2081c8;
        case 0x2081ccu: goto label_2081cc;
        case 0x2081d0u: goto label_2081d0;
        case 0x2081d4u: goto label_2081d4;
        case 0x2081d8u: goto label_2081d8;
        case 0x2081dcu: goto label_2081dc;
        case 0x2081e0u: goto label_2081e0;
        case 0x2081e4u: goto label_2081e4;
        case 0x2081e8u: goto label_2081e8;
        case 0x2081ecu: goto label_2081ec;
        case 0x2081f0u: goto label_2081f0;
        case 0x2081f4u: goto label_2081f4;
        case 0x2081f8u: goto label_2081f8;
        case 0x2081fcu: goto label_2081fc;
        case 0x208200u: goto label_208200;
        case 0x208204u: goto label_208204;
        case 0x208208u: goto label_208208;
        case 0x20820cu: goto label_20820c;
        case 0x208210u: goto label_208210;
        case 0x208214u: goto label_208214;
        case 0x208218u: goto label_208218;
        case 0x20821cu: goto label_20821c;
        case 0x208220u: goto label_208220;
        case 0x208224u: goto label_208224;
        case 0x208228u: goto label_208228;
        case 0x20822cu: goto label_20822c;
        case 0x208230u: goto label_208230;
        case 0x208234u: goto label_208234;
        case 0x208238u: goto label_208238;
        case 0x20823cu: goto label_20823c;
        case 0x208240u: goto label_208240;
        case 0x208244u: goto label_208244;
        case 0x208248u: goto label_208248;
        case 0x20824cu: goto label_20824c;
        case 0x208250u: goto label_208250;
        case 0x208254u: goto label_208254;
        case 0x208258u: goto label_208258;
        case 0x20825cu: goto label_20825c;
        case 0x208260u: goto label_208260;
        case 0x208264u: goto label_208264;
        case 0x208268u: goto label_208268;
        case 0x20826cu: goto label_20826c;
        case 0x208270u: goto label_208270;
        case 0x208274u: goto label_208274;
        case 0x208278u: goto label_208278;
        case 0x20827cu: goto label_20827c;
        case 0x208280u: goto label_208280;
        case 0x208284u: goto label_208284;
        default: break;
    }

    ctx->pc = 0x207e28u;

label_207e28:
    // 0x207e28: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x207e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_207e2c:
    // 0x207e2c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x207e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_207e30:
    // 0x207e30: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x207e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_207e34:
    // 0x207e34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x207e34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_207e38:
    // 0x207e38: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x207e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_207e3c:
    // 0x207e3c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x207e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_207e40:
    // 0x207e40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x207e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_207e44:
    // 0x207e44: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x207e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_207e48:
    // 0x207e48: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x207e48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_207e4c:
    // 0x207e4c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x207e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_207e50:
    // 0x207e50: 0x40f809  jalr        $v0
label_207e54:
    if (ctx->pc == 0x207E54u) {
        ctx->pc = 0x207E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E50u;
        // 0x207e54: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207E58u;
        goto label_207e58;
    }
    ctx->pc = 0x207E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207E58u);
        ctx->pc = 0x207E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E50u;
        // 0x207e54: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207E50u, 0x207E58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207E58u;
label_207e58:
    // 0x207e58: 0x10400104  beqz        $v0, . + 4 + (0x104 << 2)
label_207e5c:
    if (ctx->pc == 0x207E5Cu) {
        ctx->pc = 0x207E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E58u;
        // 0x207e5c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207E60u;
        goto label_207e60;
    }
    ctx->pc = 0x207E58u;
    {
        const bool branch_taken_0x207e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E58u;
        // 0x207e5c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e58) {
            ctx->pc = 0x20826Cu;
            goto label_20826c;
        }
    }
    ctx->pc = 0x207E60u;
label_207e60:
    // 0x207e60: 0xc080ffa  jal         func_203FE8
label_207e64:
    if (ctx->pc == 0x207E64u) {
        ctx->pc = 0x207E68u;
        goto label_207e68;
    }
    ctx->pc = 0x207E60u;
    SET_GPR_U32(ctx, 31, 0x207E68u);
    ctx->pc = 0x203FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FE8u, 0x207E60u, 0x207E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207E68u;
label_207e68:
    // 0x207e68: 0x14400100  bnez        $v0, . + 4 + (0x100 << 2)
label_207e6c:
    if (ctx->pc == 0x207E6Cu) {
        ctx->pc = 0x207E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E68u;
        // 0x207e6c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207E70u;
        goto label_207e70;
    }
    ctx->pc = 0x207E68u;
    {
        const bool branch_taken_0x207e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E68u;
        // 0x207e6c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e68) {
            ctx->pc = 0x20826Cu;
            goto label_20826c;
        }
    }
    ctx->pc = 0x207E70u;
label_207e70:
    // 0x207e70: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x207e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_207e74:
    // 0x207e74: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x207e74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_207e78:
    // 0x207e78: 0x8c43deb8  lw          $v1, -0x2148($v0)
    ctx->pc = 0x207e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958776)));
label_207e7c:
    // 0x207e7c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x207e7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207e80:
    // 0x207e80: 0xc46001d8  lwc1        $f0, 0x1D8($v1)
    ctx->pc = 0x207e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207e84:
    // 0x207e84: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x207e84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207e88:
    // 0x207e88: 0x0  nop
    ctx->pc = 0x207e88u;
    // NOP
label_207e8c:
    // 0x207e8c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_207e90:
    if (ctx->pc == 0x207E90u) {
        ctx->pc = 0x207E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E8Cu;
        // 0x207e90: 0x8c6201d4  lw          $v0, 0x1D4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 468)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207E94u;
        goto label_207e94;
    }
    ctx->pc = 0x207E8Cu;
    {
        const bool branch_taken_0x207e8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x207E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E8Cu;
        // 0x207e90: 0x8c6201d4  lw          $v0, 0x1D4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e8c) {
            ctx->pc = 0x207E9Cu;
            goto label_207e9c;
        }
    }
    ctx->pc = 0x207E94u;
label_207e94:
    // 0x207e94: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_207e98:
    if (ctx->pc == 0x207E98u) {
        ctx->pc = 0x207E9Cu;
        goto label_207e9c;
    }
    ctx->pc = 0x207E94u;
    {
        const bool branch_taken_0x207e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207e94) {
            ctx->pc = 0x207EA0u;
            goto label_207ea0;
        }
    }
    ctx->pc = 0x207E9Cu;
label_207e9c:
    // 0x207e9c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x207e9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207ea0:
    // 0x207ea0: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
label_207ea4:
    if (ctx->pc == 0x207EA4u) {
        ctx->pc = 0x207EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EA0u;
        // 0x207ea4: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207EA8u;
        goto label_207ea8;
    }
    ctx->pc = 0x207EA0u;
    {
        const bool branch_taken_0x207ea0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x207EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EA0u;
        // 0x207ea4: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ea0) {
            ctx->pc = 0x207ED0u;
            goto label_207ed0;
        }
    }
    ctx->pc = 0x207EA8u;
label_207ea8:
    // 0x207ea8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x207ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_207eac:
    // 0x207eac: 0xc06b968  jal         func_1AE5A0
label_207eb0:
    if (ctx->pc == 0x207EB0u) {
        ctx->pc = 0x207EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EACu;
        // 0x207eb0: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207EB4u;
        goto label_207eb4;
    }
    ctx->pc = 0x207EACu;
    SET_GPR_U32(ctx, 31, 0x207EB4u);
    ctx->pc = 0x207EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207EACu;
    // 0x207eb0: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE5A0u, 0x207EACu, 0x207EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207EB4u;
label_207eb4:
    // 0x207eb4: 0x8e45b8b8  lw          $a1, -0x4748($s2)
    ctx->pc = 0x207eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949048)));
label_207eb8:
    // 0x207eb8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x207eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_207ebc:
    // 0x207ebc: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x207ebcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_207ec0:
    // 0x207ec0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x207ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_207ec4:
    // 0x207ec4: 0x40f809  jalr        $v0
label_207ec8:
    if (ctx->pc == 0x207EC8u) {
        ctx->pc = 0x207EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EC4u;
        // 0x207ec8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207ECCu;
        goto label_207ecc;
    }
    ctx->pc = 0x207EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207ECCu);
        ctx->pc = 0x207EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EC4u;
        // 0x207ec8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207EC4u, 0x207ECCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207ECCu;
label_207ecc:
    // 0x207ecc: 0xae2200a8  sw          $v0, 0xA8($s1)
    ctx->pc = 0x207eccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
label_207ed0:
    // 0x207ed0: 0x8e45b8b8  lw          $a1, -0x4748($s2)
    ctx->pc = 0x207ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949048)));
label_207ed4:
    // 0x207ed4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x207ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_207ed8:
    // 0x207ed8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x207ed8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_207edc:
    // 0x207edc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x207edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_207ee0:
    // 0x207ee0: 0x40f809  jalr        $v0
label_207ee4:
    if (ctx->pc == 0x207EE4u) {
        ctx->pc = 0x207EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EE0u;
        // 0x207ee4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207EE8u;
        goto label_207ee8;
    }
    ctx->pc = 0x207EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207EE8u);
        ctx->pc = 0x207EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EE0u;
        // 0x207ee4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207EE0u, 0x207EE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207EE8u;
label_207ee8:
    // 0x207ee8: 0x8e2400a8  lw          $a0, 0xA8($s1)
    ctx->pc = 0x207ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_207eec:
    // 0x207eec: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x207eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_207ef0:
    // 0x207ef0: 0x3463116f  ori         $v1, $v1, 0x116F
    ctx->pc = 0x207ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4463);
label_207ef4:
    // 0x207ef4: 0x442823  subu        $a1, $v0, $a0
    ctx->pc = 0x207ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_207ef8:
    // 0x207ef8: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x207ef8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_207efc:
    // 0x207efc: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_207f00:
    if (ctx->pc == 0x207F00u) {
        ctx->pc = 0x207F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EFCu;
        // 0x207f00: 0x8e45b8b8  lw          $a1, -0x4748($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207F04u;
        goto label_207f04;
    }
    ctx->pc = 0x207EFCu;
    {
        const bool branch_taken_0x207efc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x207F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EFCu;
        // 0x207f00: 0x8e45b8b8  lw          $a1, -0x4748($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207efc) {
            ctx->pc = 0x207F8Cu;
            goto label_207f8c;
        }
    }
    ctx->pc = 0x207F04u;
label_207f04:
    // 0x207f04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207f08:
    // 0x207f08: 0xae2200ac  sw          $v0, 0xAC($s1)
    ctx->pc = 0x207f08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
label_207f0c:
    // 0x207f0c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x207f0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_207f10:
    // 0x207f10: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x207f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_207f14:
    // 0x207f14: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x207f14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_207f18:
    // 0x207f18: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x207f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_207f1c:
    // 0x207f1c: 0x40f809  jalr        $v0
label_207f20:
    if (ctx->pc == 0x207F20u) {
        ctx->pc = 0x207F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F1Cu;
        // 0x207f20: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207F24u;
        goto label_207f24;
    }
    ctx->pc = 0x207F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207F24u);
        ctx->pc = 0x207F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F1Cu;
        // 0x207f20: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207F1Cu, 0x207F24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207F24u;
label_207f24:
    // 0x207f24: 0xae2200a8  sw          $v0, 0xA8($s1)
    ctx->pc = 0x207f24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
label_207f28:
    // 0x207f28: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x207f28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_207f2c:
    // 0x207f2c: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x207f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_207f30:
    // 0x207f30: 0x24a58c60  addiu       $a1, $a1, -0x73A0
    ctx->pc = 0x207f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937696));
label_207f34:
    // 0x207f34: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x207f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_207f38:
    // 0x207f38: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x207f38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_207f3c:
    // 0x207f3c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x207f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_207f40:
    // 0x207f40: 0x40f809  jalr        $v0
label_207f44:
    if (ctx->pc == 0x207F44u) {
        ctx->pc = 0x207F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F40u;
        // 0x207f44: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207F48u;
        goto label_207f48;
    }
    ctx->pc = 0x207F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207F48u);
        ctx->pc = 0x207F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F40u;
        // 0x207f44: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207F40u, 0x207F48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207F48u;
label_207f48:
    // 0x207f48: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x207f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_207f4c:
    // 0x207f4c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x207f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_207f50:
    // 0x207f50: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x207f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_207f54:
    // 0x207f54: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x207f54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_207f58:
    // 0x207f58: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x207f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_207f5c:
    // 0x207f5c: 0x60f809  jalr        $v1
label_207f60:
    if (ctx->pc == 0x207F60u) {
        ctx->pc = 0x207F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F5Cu;
        // 0x207f60: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207F64u;
        goto label_207f64;
    }
    ctx->pc = 0x207F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x207F64u);
        ctx->pc = 0x207F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F5Cu;
        // 0x207f60: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207F5Cu, 0x207F64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207F64u;
label_207f64:
    // 0x207f64: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x207f64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_207f68:
    // 0x207f68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x207f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207f6c:
    // 0x207f6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x207f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207f70:
    // 0x207f70: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x207f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_207f74:
    // 0x207f74: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x207f74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_207f78:
    // 0x207f78: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x207f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_207f7c:
    // 0x207f7c: 0x60f809  jalr        $v1
label_207f80:
    if (ctx->pc == 0x207F80u) {
        ctx->pc = 0x207F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F7Cu;
        // 0x207f80: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207F84u;
        goto label_207f84;
    }
    ctx->pc = 0x207F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x207F84u);
        ctx->pc = 0x207F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F7Cu;
        // 0x207f80: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207F7Cu, 0x207F84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207F84u;
label_207f84:
    // 0x207f84: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_207f88:
    if (ctx->pc == 0x207F88u) {
        ctx->pc = 0x207F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F84u;
        // 0x207f88: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207F8Cu;
        goto label_207f8c;
    }
    ctx->pc = 0x207F84u;
    {
        const bool branch_taken_0x207f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F84u;
        // 0x207f88: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f84) {
            ctx->pc = 0x20826Cu;
            goto label_20826c;
        }
    }
    ctx->pc = 0x207F8Cu;
label_207f8c:
    // 0x207f8c: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x207f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_207f90:
    // 0x207f90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_207f94:
    if (ctx->pc == 0x207F94u) {
        ctx->pc = 0x207F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F90u;
        // 0x207f94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207F98u;
        goto label_207f98;
    }
    ctx->pc = 0x207F90u;
    {
        const bool branch_taken_0x207f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F90u;
        // 0x207f94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f90) {
            ctx->pc = 0x207FA0u;
            goto label_207fa0;
        }
    }
    ctx->pc = 0x207F98u;
label_207f98:
    // 0x207f98: 0x16600020  bnez        $s3, . + 4 + (0x20 << 2)
label_207f9c:
    if (ctx->pc == 0x207F9Cu) {
        ctx->pc = 0x207FA0u;
        goto label_207fa0;
    }
    ctx->pc = 0x207F98u;
    {
        const bool branch_taken_0x207f98 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x207f98) {
            ctx->pc = 0x20801Cu;
            goto label_20801c;
        }
    }
    ctx->pc = 0x207FA0u;
label_207fa0:
    // 0x207fa0: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x207fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_207fa4:
    // 0x207fa4: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
label_207fa8:
    if (ctx->pc == 0x207FA8u) {
        ctx->pc = 0x207FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FA4u;
        // 0x207fa8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207FACu;
        goto label_207fac;
    }
    ctx->pc = 0x207FA4u;
    {
        const bool branch_taken_0x207fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207fa4) {
            ctx->pc = 0x207FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207FA4u;
            // 0x207fa8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20801Cu;
            goto label_20801c;
        }
    }
    ctx->pc = 0x207FACu;
label_207fac:
    // 0x207fac: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x207facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_207fb0:
    // 0x207fb0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x207fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_207fb4:
    // 0x207fb4: 0x80440019  lb          $a0, 0x19($v0)
    ctx->pc = 0x207fb4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
label_207fb8:
    // 0x207fb8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_207fbc:
    if (ctx->pc == 0x207FBCu) {
        ctx->pc = 0x207FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FB8u;
        // 0x207fbc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207FC0u;
        goto label_207fc0;
    }
    ctx->pc = 0x207FB8u;
    {
        const bool branch_taken_0x207fb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x207FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FB8u;
        // 0x207fbc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207fb8) {
            ctx->pc = 0x207FD8u;
            goto label_207fd8;
        }
    }
    ctx->pc = 0x207FC0u;
label_207fc0:
    // 0x207fc0: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x207fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_207fc4:
    // 0x207fc4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x207fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_207fc8:
    // 0x207fc8: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x207fc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_207fcc:
    // 0x207fcc: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x207fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
label_207fd0:
    // 0x207fd0: 0x10000002  b           . + 4 + (0x2 << 2)
label_207fd4:
    if (ctx->pc == 0x207FD4u) {
        ctx->pc = 0x207FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FD0u;
        // 0x207fd4: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207FD8u;
        goto label_207fd8;
    }
    ctx->pc = 0x207FD0u;
    {
        const bool branch_taken_0x207fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FD0u;
        // 0x207fd4: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207fd0) {
            ctx->pc = 0x207FDCu;
            goto label_207fdc;
        }
    }
    ctx->pc = 0x207FD8u;
label_207fd8:
    // 0x207fd8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x207fd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207fdc:
    // 0x207fdc: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_207fe0:
    if (ctx->pc == 0x207FE0u) {
        ctx->pc = 0x207FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FDCu;
        // 0x207fe0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207FE4u;
        goto label_207fe4;
    }
    ctx->pc = 0x207FDCu;
    {
        const bool branch_taken_0x207fdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x207FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FDCu;
        // 0x207fe0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207fdc) {
            ctx->pc = 0x20801Cu;
            goto label_20801c;
        }
    }
    ctx->pc = 0x207FE4u;
label_207fe4:
    // 0x207fe4: 0x80a40019  lb          $a0, 0x19($a1)
    ctx->pc = 0x207fe4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 25)));
label_207fe8:
    // 0x207fe8: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
label_207fec:
    if (ctx->pc == 0x207FECu) {
        ctx->pc = 0x207FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FE8u;
        // 0x207fec: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207FF0u;
        goto label_207ff0;
    }
    ctx->pc = 0x207FE8u;
    {
        const bool branch_taken_0x207fe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x207FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FE8u;
        // 0x207fec: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207fe8) {
            ctx->pc = 0x208004u;
            goto label_208004;
        }
    }
    ctx->pc = 0x207FF0u;
label_207ff0:
    // 0x207ff0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x207ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_207ff4:
    // 0x207ff4: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x207ff4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_207ff8:
    // 0x207ff8: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x207ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
label_207ffc:
    // 0x207ffc: 0x10000002  b           . + 4 + (0x2 << 2)
label_208000:
    if (ctx->pc == 0x208000u) {
        ctx->pc = 0x208000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FFCu;
        // 0x208000: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208004u;
        goto label_208004;
    }
    ctx->pc = 0x207FFCu;
    {
        const bool branch_taken_0x207ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FFCu;
        // 0x208000: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ffc) {
            ctx->pc = 0x208008u;
            goto label_208008;
        }
    }
    ctx->pc = 0x208004u;
label_208004:
    // 0x208004: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x208004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208008:
    // 0x208008: 0xc0512b4  jal         func_144AD0
label_20800c:
    if (ctx->pc == 0x20800Cu) {
        ctx->pc = 0x20800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208008u;
        // 0x20800c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208010u;
        goto label_208010;
    }
    ctx->pc = 0x208008u;
    SET_GPR_U32(ctx, 31, 0x208010u);
    ctx->pc = 0x20800Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208008u;
    // 0x20800c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144AD0u, 0x208008u, 0x208010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208010u;
label_208010:
    // 0x208010: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x208010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_208014:
    // 0x208014: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_208018:
    if (ctx->pc == 0x208018u) {
        ctx->pc = 0x208018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208014u;
        // 0x208018: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20801Cu;
        goto label_20801c;
    }
    ctx->pc = 0x208014u;
    {
        const bool branch_taken_0x208014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208014) {
            ctx->pc = 0x208018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208014u;
            // 0x208018: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20801Cu;
            goto label_20801c;
        }
    }
    ctx->pc = 0x20801Cu;
label_20801c:
    // 0x20801c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_208020:
    if (ctx->pc == 0x208020u) {
        ctx->pc = 0x208020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20801Cu;
        // 0x208020: 0xae300094  sw          $s0, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208024u;
        goto label_208024;
    }
    ctx->pc = 0x20801Cu;
    {
        const bool branch_taken_0x20801c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x208020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20801Cu;
        // 0x208020: 0xae300094  sw          $s0, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20801c) {
            ctx->pc = 0x208048u;
            goto label_208048;
        }
    }
    ctx->pc = 0x208024u;
label_208024:
    // 0x208024: 0xae200074  sw          $zero, 0x74($s1)
    ctx->pc = 0x208024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
label_208028:
    // 0x208028: 0xc080fe2  jal         func_203F88
label_20802c:
    if (ctx->pc == 0x20802Cu) {
        ctx->pc = 0x20802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208028u;
        // 0x20802c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208030u;
        goto label_208030;
    }
    ctx->pc = 0x208028u;
    SET_GPR_U32(ctx, 31, 0x208030u);
    ctx->pc = 0x20802Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208028u;
    // 0x20802c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203F88u, 0x208028u, 0x208030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208030u;
label_208030:
    // 0x208030: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x208030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_208034:
    // 0x208034: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x208034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_208038:
    // 0x208038: 0xc043f0c  jal         func_10FC30
label_20803c:
    if (ctx->pc == 0x20803Cu) {
        ctx->pc = 0x20803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208038u;
        // 0x20803c: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208040u;
        goto label_208040;
    }
    ctx->pc = 0x208038u;
    SET_GPR_U32(ctx, 31, 0x208040u);
    ctx->pc = 0x20803Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208038u;
    // 0x20803c: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x208038u, 0x208040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208040u;
label_208040:
    // 0x208040: 0x1000008a  b           . + 4 + (0x8A << 2)
label_208044:
    if (ctx->pc == 0x208044u) {
        ctx->pc = 0x208044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208040u;
        // 0x208044: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208048u;
        goto label_208048;
    }
    ctx->pc = 0x208040u;
    {
        const bool branch_taken_0x208040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208040u;
        // 0x208044: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208040) {
            ctx->pc = 0x20826Cu;
            goto label_20826c;
        }
    }
    ctx->pc = 0x208048u;
label_208048:
    // 0x208048: 0x8e45b8b8  lw          $a1, -0x4748($s2)
    ctx->pc = 0x208048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949048)));
label_20804c:
    // 0x20804c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20804cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_208050:
    // 0x208050: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x208050u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_208054:
    // 0x208054: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x208054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_208058:
    // 0x208058: 0x40f809  jalr        $v0
label_20805c:
    if (ctx->pc == 0x20805Cu) {
        ctx->pc = 0x20805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208058u;
        // 0x20805c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208060u;
        goto label_208060;
    }
    ctx->pc = 0x208058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208060u);
        ctx->pc = 0x20805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208058u;
        // 0x20805c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208058u, 0x208060u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208060u;
label_208060:
    // 0x208060: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x208060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_208064:
    // 0x208064: 0x8e230098  lw          $v1, 0x98($s1)
    ctx->pc = 0x208064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_208068:
    // 0x208068: 0x442823  subu        $a1, $v0, $a0
    ctx->pc = 0x208068u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_20806c:
    // 0x20806c: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x20806cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_208070:
    // 0x208070: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_208074:
    if (ctx->pc == 0x208074u) {
        ctx->pc = 0x208074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208070u;
        // 0x208074: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208078u;
        goto label_208078;
    }
    ctx->pc = 0x208070u;
    {
        const bool branch_taken_0x208070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x208074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208070u;
        // 0x208074: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208070) {
            ctx->pc = 0x2080A8u;
            goto label_2080a8;
        }
    }
    ctx->pc = 0x208078u;
label_208078:
    // 0x208078: 0x8e45b8b8  lw          $a1, -0x4748($s2)
    ctx->pc = 0x208078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949048)));
label_20807c:
    // 0x20807c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20807cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_208080:
    // 0x208080: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x208080u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_208084:
    // 0x208084: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x208084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_208088:
    // 0x208088: 0x40f809  jalr        $v0
label_20808c:
    if (ctx->pc == 0x20808Cu) {
        ctx->pc = 0x20808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208088u;
        // 0x20808c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208090u;
        goto label_208090;
    }
    ctx->pc = 0x208088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208090u);
        ctx->pc = 0x20808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208088u;
        // 0x20808c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208088u, 0x208090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208090u;
label_208090:
    // 0x208090: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x208090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_208094:
    // 0x208094: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208098:
    // 0x208098: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x208098u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_20809c:
    // 0x20809c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x20809cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2080a0:
    // 0x2080a0: 0xae23009c  sw          $v1, 0x9C($s1)
    ctx->pc = 0x2080a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 3));
label_2080a4:
    // 0x2080a4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2080a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2080a8:
    // 0x2080a8: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x2080a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_2080ac:
    // 0x2080ac: 0x8c43d328  lw          $v1, -0x2CD8($v0)
    ctx->pc = 0x2080acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955816)));
label_2080b0:
    // 0x2080b0: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
label_2080b4:
    if (ctx->pc == 0x2080B4u) {
        ctx->pc = 0x2080B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2080B0u;
        // 0x2080b4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2080B8u;
        goto label_2080b8;
    }
    ctx->pc = 0x2080B0u;
    {
        const bool branch_taken_0x2080b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2080B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2080B0u;
        // 0x2080b4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2080b0) {
            ctx->pc = 0x208138u;
            goto label_208138;
        }
    }
    ctx->pc = 0x2080B8u;
label_2080b8:
    // 0x2080b8: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_2080bc:
    if (ctx->pc == 0x2080BCu) {
        ctx->pc = 0x2080BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2080B8u;
        // 0x2080bc: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2080C0u;
        goto label_2080c0;
    }
    ctx->pc = 0x2080B8u;
    {
        const bool branch_taken_0x2080b8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2080BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2080B8u;
        // 0x2080bc: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2080b8) {
            ctx->pc = 0x2080D4u;
            goto label_2080d4;
        }
    }
    ctx->pc = 0x2080C0u;
label_2080c0:
    // 0x2080c0: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x2080c0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2080c4:
    // 0x2080c4: 0x0  nop
    ctx->pc = 0x2080c4u;
    // NOP
label_2080c8:
    // 0x2080c8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2080c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2080cc:
    // 0x2080cc: 0x10000008  b           . + 4 + (0x8 << 2)
label_2080d0:
    if (ctx->pc == 0x2080D0u) {
        ctx->pc = 0x2080D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2080CCu;
        // 0x2080d0: 0x8e220098  lw          $v0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2080D4u;
        goto label_2080d4;
    }
    ctx->pc = 0x2080CCu;
    {
        const bool branch_taken_0x2080cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2080D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2080CCu;
        // 0x2080d0: 0x8e220098  lw          $v0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2080cc) {
            ctx->pc = 0x2080F0u;
            goto label_2080f0;
        }
    }
    ctx->pc = 0x2080D4u;
label_2080d4:
    // 0x2080d4: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2080d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_2080d8:
    // 0x2080d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2080d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2080dc:
    // 0x2080dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2080dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2080e0:
    // 0x2080e0: 0x0  nop
    ctx->pc = 0x2080e0u;
    // NOP
label_2080e4:
    // 0x2080e4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2080e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2080e8:
    // 0x2080e8: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x2080e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_2080ec:
    // 0x2080ec: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x2080ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_2080f0:
    // 0x2080f0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2080f4:
    if (ctx->pc == 0x2080F4u) {
        ctx->pc = 0x2080F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2080F0u;
        // 0x2080f4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2080F8u;
        goto label_2080f8;
    }
    ctx->pc = 0x2080F0u;
    {
        const bool branch_taken_0x2080f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2080F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2080F0u;
        // 0x2080f4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2080f0) {
            ctx->pc = 0x20810Cu;
            goto label_20810c;
        }
    }
    ctx->pc = 0x2080F8u;
label_2080f8:
    // 0x2080f8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2080f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2080fc:
    // 0x2080fc: 0x0  nop
    ctx->pc = 0x2080fcu;
    // NOP
label_208100:
    // 0x208100: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x208100u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_208104:
    // 0x208104: 0x10000007  b           . + 4 + (0x7 << 2)
label_208108:
    if (ctx->pc == 0x208108u) {
        ctx->pc = 0x20810Cu;
        goto label_20810c;
    }
    ctx->pc = 0x208104u;
    {
        const bool branch_taken_0x208104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208104) {
            ctx->pc = 0x208124u;
            goto label_208124;
        }
    }
    ctx->pc = 0x20810Cu;
label_20810c:
    // 0x20810c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20810cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_208110:
    // 0x208110: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x208110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_208114:
    // 0x208114: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x208114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_208118:
    // 0x208118: 0x0  nop
    ctx->pc = 0x208118u;
    // NOP
label_20811c:
    // 0x20811c: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x20811cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_208120:
    // 0x208120: 0x460e7380  add.s       $f14, $f14, $f14
    ctx->pc = 0x208120u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
label_208124:
    // 0x208124: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x208124u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_208128:
    // 0x208128: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x208128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_20812c:
    // 0x20812c: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x20812cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_208130:
    // 0x208130: 0x10000020  b           . + 4 + (0x20 << 2)
label_208134:
    if (ctx->pc == 0x208134u) {
        ctx->pc = 0x208134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208130u;
        // 0x208134: 0x46006bc6  mov.s       $f15, $f13 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x208138u;
        goto label_208138;
    }
    ctx->pc = 0x208130u;
    {
        const bool branch_taken_0x208130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208130u;
        // 0x208134: 0x46006bc6  mov.s       $f15, $f13 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208130) {
            ctx->pc = 0x2081B4u;
            goto label_2081b4;
        }
    }
    ctx->pc = 0x208138u;
label_208138:
    // 0x208138: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_20813c:
    if (ctx->pc == 0x20813Cu) {
        ctx->pc = 0x20813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208138u;
        // 0x20813c: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208140u;
        goto label_208140;
    }
    ctx->pc = 0x208138u;
    {
        const bool branch_taken_0x208138 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x20813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208138u;
        // 0x20813c: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208138) {
            ctx->pc = 0x208154u;
            goto label_208154;
        }
    }
    ctx->pc = 0x208140u;
label_208140:
    // 0x208140: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x208140u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_208144:
    // 0x208144: 0x0  nop
    ctx->pc = 0x208144u;
    // NOP
label_208148:
    // 0x208148: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x208148u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_20814c:
    // 0x20814c: 0x10000008  b           . + 4 + (0x8 << 2)
label_208150:
    if (ctx->pc == 0x208150u) {
        ctx->pc = 0x208150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20814Cu;
        // 0x208150: 0x8e220098  lw          $v0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208154u;
        goto label_208154;
    }
    ctx->pc = 0x20814Cu;
    {
        const bool branch_taken_0x20814c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20814Cu;
        // 0x208150: 0x8e220098  lw          $v0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20814c) {
            ctx->pc = 0x208170u;
            goto label_208170;
        }
    }
    ctx->pc = 0x208154u;
label_208154:
    // 0x208154: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x208154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_208158:
    // 0x208158: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x208158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_20815c:
    // 0x20815c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20815cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_208160:
    // 0x208160: 0x0  nop
    ctx->pc = 0x208160u;
    // NOP
label_208164:
    // 0x208164: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x208164u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_208168:
    // 0x208168: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x208168u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_20816c:
    // 0x20816c: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x20816cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_208170:
    // 0x208170: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_208174:
    if (ctx->pc == 0x208174u) {
        ctx->pc = 0x208174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208170u;
        // 0x208174: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208178u;
        goto label_208178;
    }
    ctx->pc = 0x208170u;
    {
        const bool branch_taken_0x208170 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x208174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208170u;
        // 0x208174: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208170) {
            ctx->pc = 0x20818Cu;
            goto label_20818c;
        }
    }
    ctx->pc = 0x208178u;
label_208178:
    // 0x208178: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x208178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_20817c:
    // 0x20817c: 0x0  nop
    ctx->pc = 0x20817cu;
    // NOP
label_208180:
    // 0x208180: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x208180u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_208184:
    // 0x208184: 0x10000007  b           . + 4 + (0x7 << 2)
label_208188:
    if (ctx->pc == 0x208188u) {
        ctx->pc = 0x20818Cu;
        goto label_20818c;
    }
    ctx->pc = 0x208184u;
    {
        const bool branch_taken_0x208184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208184) {
            ctx->pc = 0x2081A4u;
            goto label_2081a4;
        }
    }
    ctx->pc = 0x20818Cu;
label_20818c:
    // 0x20818c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20818cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_208190:
    // 0x208190: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x208190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_208194:
    // 0x208194: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x208194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_208198:
    // 0x208198: 0x0  nop
    ctx->pc = 0x208198u;
    // NOP
label_20819c:
    // 0x20819c: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x20819cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_2081a0:
    // 0x2081a0: 0x460e7380  add.s       $f14, $f14, $f14
    ctx->pc = 0x2081a0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
label_2081a4:
    // 0x2081a4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2081a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2081a8:
    // 0x2081a8: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2081a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_2081ac:
    // 0x2081ac: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x2081acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_2081b0:
    // 0x2081b0: 0x46006c06  mov.s       $f16, $f13
    ctx->pc = 0x2081b0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[13]);
label_2081b4:
    // 0x2081b4: 0xc0cdd5a  jal         func_337568
label_2081b8:
    if (ctx->pc == 0x2081B8u) {
        ctx->pc = 0x2081BCu;
        goto label_2081bc;
    }
    ctx->pc = 0x2081B4u;
    SET_GPR_U32(ctx, 31, 0x2081BCu);
    ctx->pc = 0x337568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337568u, 0x2081B4u, 0x2081BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2081BCu;
label_2081bc:
    // 0x2081bc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2081bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2081c0:
    // 0x2081c0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2081c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2081c4:
    // 0x2081c4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2081c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2081c8:
    // 0x2081c8: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x2081c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_2081cc:
    // 0x2081cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2081ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2081d0:
    // 0x2081d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2081d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2081d4:
    // 0x2081d4: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x2081d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_2081d8:
    // 0x2081d8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2081d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2081dc:
    // 0x2081dc: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
label_2081e0:
    if (ctx->pc == 0x2081E0u) {
        ctx->pc = 0x2081E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2081DCu;
        // 0x2081e0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2081E4u;
        goto label_2081e4;
    }
    ctx->pc = 0x2081DCu;
    {
        const bool branch_taken_0x2081dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2081E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2081DCu;
        // 0x2081e0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2081dc) {
            ctx->pc = 0x20821Cu;
            goto label_20821c;
        }
    }
    ctx->pc = 0x2081E4u;
label_2081e4:
    // 0x2081e4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2081e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2081e8:
    // 0x2081e8: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x2081e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_2081ec:
    // 0x2081ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2081ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2081f0:
    // 0x2081f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2081f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2081f4:
    // 0x2081f4: 0xae24009c  sw          $a0, 0x9C($s1)
    ctx->pc = 0x2081f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 4));
label_2081f8:
    // 0x2081f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2081f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2081fc:
    // 0x2081fc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2081fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_208200:
    // 0x208200: 0x8e45b8b8  lw          $a1, -0x4748($s2)
    ctx->pc = 0x208200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949048)));
label_208204:
    // 0x208204: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x208204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_208208:
    // 0x208208: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x208208u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_20820c:
    // 0x20820c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x20820cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_208210:
    // 0x208210: 0x40f809  jalr        $v0
label_208214:
    if (ctx->pc == 0x208214u) {
        ctx->pc = 0x208214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208210u;
        // 0x208214: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208218u;
        goto label_208218;
    }
    ctx->pc = 0x208210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208218u);
        ctx->pc = 0x208214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208210u;
        // 0x208214: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208210u, 0x208218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208218u;
label_208218:
    // 0x208218: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x208218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_20821c:
    // 0x20821c: 0x8e2600a4  lw          $a2, 0xA4($s1)
    ctx->pc = 0x20821cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_208220:
    // 0x208220: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x208220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_208224:
    // 0x208224: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x208224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_208228:
    // 0x208228: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x208228u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_20822c:
    // 0x20822c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x20822cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_208230:
    // 0x208230: 0x60f809  jalr        $v1
label_208234:
    if (ctx->pc == 0x208234u) {
        ctx->pc = 0x208234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208230u;
        // 0x208234: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208238u;
        goto label_208238;
    }
    ctx->pc = 0x208230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x208238u);
        ctx->pc = 0x208234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208230u;
        // 0x208234: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208230u, 0x208238u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208238u;
label_208238:
    // 0x208238: 0x8e2500a4  lw          $a1, 0xA4($s1)
    ctx->pc = 0x208238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_20823c:
    // 0x20823c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20823cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_208240:
    // 0x208240: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x208240u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_208244:
    // 0x208244: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x208244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_208248:
    // 0x208248: 0x60f809  jalr        $v1
label_20824c:
    if (ctx->pc == 0x20824Cu) {
        ctx->pc = 0x20824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208248u;
        // 0x20824c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208250u;
        goto label_208250;
    }
    ctx->pc = 0x208248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x208250u);
        ctx->pc = 0x20824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208248u;
        // 0x20824c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208248u, 0x208250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208250u;
label_208250:
    // 0x208250: 0x8e25008c  lw          $a1, 0x8C($s1)
    ctx->pc = 0x208250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_208254:
    // 0x208254: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x208254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_208258:
    // 0x208258: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x208258u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_20825c:
    // 0x20825c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x20825cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_208260:
    // 0x208260: 0x60f809  jalr        $v1
label_208264:
    if (ctx->pc == 0x208264u) {
        ctx->pc = 0x208264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208260u;
        // 0x208264: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208268u;
        goto label_208268;
    }
    ctx->pc = 0x208260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x208268u);
        ctx->pc = 0x208264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208260u;
        // 0x208264: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208260u, 0x208268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208268u;
label_208268:
    // 0x208268: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x208268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20826c:
    // 0x20826c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x20826cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_208270:
    // 0x208270: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x208270u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_208274:
    // 0x208274: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x208274u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_208278:
    // 0x208278: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x208278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20827c:
    // 0x20827c: 0x3e00008  jr          $ra
label_208280:
    if (ctx->pc == 0x208280u) {
        ctx->pc = 0x208280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20827Cu;
        // 0x208280: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208284u;
        goto label_208284;
    }
    ctx->pc = 0x20827Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20827Cu;
        // 0x208280: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20827Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208284u;
label_208284:
    // 0x208284: 0x0  nop
    ctx->pc = 0x208284u;
    // NOP
    ctx->pc = 0x208288u;
}
