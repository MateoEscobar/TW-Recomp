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

// Function: sub_00257F38
// Address: 0x257f38 - 0x258330
void sub_00257F38_0x257f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257F38_0x257f38");
#endif

    switch (ctx->pc) {
        case 0x257f38u: goto label_257f38;
        case 0x257f3cu: goto label_257f3c;
        case 0x257f40u: goto label_257f40;
        case 0x257f44u: goto label_257f44;
        case 0x257f48u: goto label_257f48;
        case 0x257f4cu: goto label_257f4c;
        case 0x257f50u: goto label_257f50;
        case 0x257f54u: goto label_257f54;
        case 0x257f58u: goto label_257f58;
        case 0x257f5cu: goto label_257f5c;
        case 0x257f60u: goto label_257f60;
        case 0x257f64u: goto label_257f64;
        case 0x257f68u: goto label_257f68;
        case 0x257f6cu: goto label_257f6c;
        case 0x257f70u: goto label_257f70;
        case 0x257f74u: goto label_257f74;
        case 0x257f78u: goto label_257f78;
        case 0x257f7cu: goto label_257f7c;
        case 0x257f80u: goto label_257f80;
        case 0x257f84u: goto label_257f84;
        case 0x257f88u: goto label_257f88;
        case 0x257f8cu: goto label_257f8c;
        case 0x257f90u: goto label_257f90;
        case 0x257f94u: goto label_257f94;
        case 0x257f98u: goto label_257f98;
        case 0x257f9cu: goto label_257f9c;
        case 0x257fa0u: goto label_257fa0;
        case 0x257fa4u: goto label_257fa4;
        case 0x257fa8u: goto label_257fa8;
        case 0x257facu: goto label_257fac;
        case 0x257fb0u: goto label_257fb0;
        case 0x257fb4u: goto label_257fb4;
        case 0x257fb8u: goto label_257fb8;
        case 0x257fbcu: goto label_257fbc;
        case 0x257fc0u: goto label_257fc0;
        case 0x257fc4u: goto label_257fc4;
        case 0x257fc8u: goto label_257fc8;
        case 0x257fccu: goto label_257fcc;
        case 0x257fd0u: goto label_257fd0;
        case 0x257fd4u: goto label_257fd4;
        case 0x257fd8u: goto label_257fd8;
        case 0x257fdcu: goto label_257fdc;
        case 0x257fe0u: goto label_257fe0;
        case 0x257fe4u: goto label_257fe4;
        case 0x257fe8u: goto label_257fe8;
        case 0x257fecu: goto label_257fec;
        case 0x257ff0u: goto label_257ff0;
        case 0x257ff4u: goto label_257ff4;
        case 0x257ff8u: goto label_257ff8;
        case 0x257ffcu: goto label_257ffc;
        case 0x258000u: goto label_258000;
        case 0x258004u: goto label_258004;
        case 0x258008u: goto label_258008;
        case 0x25800cu: goto label_25800c;
        case 0x258010u: goto label_258010;
        case 0x258014u: goto label_258014;
        case 0x258018u: goto label_258018;
        case 0x25801cu: goto label_25801c;
        case 0x258020u: goto label_258020;
        case 0x258024u: goto label_258024;
        case 0x258028u: goto label_258028;
        case 0x25802cu: goto label_25802c;
        case 0x258030u: goto label_258030;
        case 0x258034u: goto label_258034;
        case 0x258038u: goto label_258038;
        case 0x25803cu: goto label_25803c;
        case 0x258040u: goto label_258040;
        case 0x258044u: goto label_258044;
        case 0x258048u: goto label_258048;
        case 0x25804cu: goto label_25804c;
        case 0x258050u: goto label_258050;
        case 0x258054u: goto label_258054;
        case 0x258058u: goto label_258058;
        case 0x25805cu: goto label_25805c;
        case 0x258060u: goto label_258060;
        case 0x258064u: goto label_258064;
        case 0x258068u: goto label_258068;
        case 0x25806cu: goto label_25806c;
        case 0x258070u: goto label_258070;
        case 0x258074u: goto label_258074;
        case 0x258078u: goto label_258078;
        case 0x25807cu: goto label_25807c;
        case 0x258080u: goto label_258080;
        case 0x258084u: goto label_258084;
        case 0x258088u: goto label_258088;
        case 0x25808cu: goto label_25808c;
        case 0x258090u: goto label_258090;
        case 0x258094u: goto label_258094;
        case 0x258098u: goto label_258098;
        case 0x25809cu: goto label_25809c;
        case 0x2580a0u: goto label_2580a0;
        case 0x2580a4u: goto label_2580a4;
        case 0x2580a8u: goto label_2580a8;
        case 0x2580acu: goto label_2580ac;
        case 0x2580b0u: goto label_2580b0;
        case 0x2580b4u: goto label_2580b4;
        case 0x2580b8u: goto label_2580b8;
        case 0x2580bcu: goto label_2580bc;
        case 0x2580c0u: goto label_2580c0;
        case 0x2580c4u: goto label_2580c4;
        case 0x2580c8u: goto label_2580c8;
        case 0x2580ccu: goto label_2580cc;
        case 0x2580d0u: goto label_2580d0;
        case 0x2580d4u: goto label_2580d4;
        case 0x2580d8u: goto label_2580d8;
        case 0x2580dcu: goto label_2580dc;
        case 0x2580e0u: goto label_2580e0;
        case 0x2580e4u: goto label_2580e4;
        case 0x2580e8u: goto label_2580e8;
        case 0x2580ecu: goto label_2580ec;
        case 0x2580f0u: goto label_2580f0;
        case 0x2580f4u: goto label_2580f4;
        case 0x2580f8u: goto label_2580f8;
        case 0x2580fcu: goto label_2580fc;
        case 0x258100u: goto label_258100;
        case 0x258104u: goto label_258104;
        case 0x258108u: goto label_258108;
        case 0x25810cu: goto label_25810c;
        case 0x258110u: goto label_258110;
        case 0x258114u: goto label_258114;
        case 0x258118u: goto label_258118;
        case 0x25811cu: goto label_25811c;
        case 0x258120u: goto label_258120;
        case 0x258124u: goto label_258124;
        case 0x258128u: goto label_258128;
        case 0x25812cu: goto label_25812c;
        case 0x258130u: goto label_258130;
        case 0x258134u: goto label_258134;
        case 0x258138u: goto label_258138;
        case 0x25813cu: goto label_25813c;
        case 0x258140u: goto label_258140;
        case 0x258144u: goto label_258144;
        case 0x258148u: goto label_258148;
        case 0x25814cu: goto label_25814c;
        case 0x258150u: goto label_258150;
        case 0x258154u: goto label_258154;
        case 0x258158u: goto label_258158;
        case 0x25815cu: goto label_25815c;
        case 0x258160u: goto label_258160;
        case 0x258164u: goto label_258164;
        case 0x258168u: goto label_258168;
        case 0x25816cu: goto label_25816c;
        case 0x258170u: goto label_258170;
        case 0x258174u: goto label_258174;
        case 0x258178u: goto label_258178;
        case 0x25817cu: goto label_25817c;
        case 0x258180u: goto label_258180;
        case 0x258184u: goto label_258184;
        case 0x258188u: goto label_258188;
        case 0x25818cu: goto label_25818c;
        case 0x258190u: goto label_258190;
        case 0x258194u: goto label_258194;
        case 0x258198u: goto label_258198;
        case 0x25819cu: goto label_25819c;
        case 0x2581a0u: goto label_2581a0;
        case 0x2581a4u: goto label_2581a4;
        case 0x2581a8u: goto label_2581a8;
        case 0x2581acu: goto label_2581ac;
        case 0x2581b0u: goto label_2581b0;
        case 0x2581b4u: goto label_2581b4;
        case 0x2581b8u: goto label_2581b8;
        case 0x2581bcu: goto label_2581bc;
        case 0x2581c0u: goto label_2581c0;
        case 0x2581c4u: goto label_2581c4;
        case 0x2581c8u: goto label_2581c8;
        case 0x2581ccu: goto label_2581cc;
        case 0x2581d0u: goto label_2581d0;
        case 0x2581d4u: goto label_2581d4;
        case 0x2581d8u: goto label_2581d8;
        case 0x2581dcu: goto label_2581dc;
        case 0x2581e0u: goto label_2581e0;
        case 0x2581e4u: goto label_2581e4;
        case 0x2581e8u: goto label_2581e8;
        case 0x2581ecu: goto label_2581ec;
        case 0x2581f0u: goto label_2581f0;
        case 0x2581f4u: goto label_2581f4;
        case 0x2581f8u: goto label_2581f8;
        case 0x2581fcu: goto label_2581fc;
        case 0x258200u: goto label_258200;
        case 0x258204u: goto label_258204;
        case 0x258208u: goto label_258208;
        case 0x25820cu: goto label_25820c;
        case 0x258210u: goto label_258210;
        case 0x258214u: goto label_258214;
        case 0x258218u: goto label_258218;
        case 0x25821cu: goto label_25821c;
        case 0x258220u: goto label_258220;
        case 0x258224u: goto label_258224;
        case 0x258228u: goto label_258228;
        case 0x25822cu: goto label_25822c;
        case 0x258230u: goto label_258230;
        case 0x258234u: goto label_258234;
        case 0x258238u: goto label_258238;
        case 0x25823cu: goto label_25823c;
        case 0x258240u: goto label_258240;
        case 0x258244u: goto label_258244;
        case 0x258248u: goto label_258248;
        case 0x25824cu: goto label_25824c;
        case 0x258250u: goto label_258250;
        case 0x258254u: goto label_258254;
        case 0x258258u: goto label_258258;
        case 0x25825cu: goto label_25825c;
        case 0x258260u: goto label_258260;
        case 0x258264u: goto label_258264;
        case 0x258268u: goto label_258268;
        case 0x25826cu: goto label_25826c;
        case 0x258270u: goto label_258270;
        case 0x258274u: goto label_258274;
        case 0x258278u: goto label_258278;
        case 0x25827cu: goto label_25827c;
        case 0x258280u: goto label_258280;
        case 0x258284u: goto label_258284;
        case 0x258288u: goto label_258288;
        case 0x25828cu: goto label_25828c;
        case 0x258290u: goto label_258290;
        case 0x258294u: goto label_258294;
        case 0x258298u: goto label_258298;
        case 0x25829cu: goto label_25829c;
        case 0x2582a0u: goto label_2582a0;
        case 0x2582a4u: goto label_2582a4;
        case 0x2582a8u: goto label_2582a8;
        case 0x2582acu: goto label_2582ac;
        case 0x2582b0u: goto label_2582b0;
        case 0x2582b4u: goto label_2582b4;
        case 0x2582b8u: goto label_2582b8;
        case 0x2582bcu: goto label_2582bc;
        case 0x2582c0u: goto label_2582c0;
        case 0x2582c4u: goto label_2582c4;
        case 0x2582c8u: goto label_2582c8;
        case 0x2582ccu: goto label_2582cc;
        case 0x2582d0u: goto label_2582d0;
        case 0x2582d4u: goto label_2582d4;
        case 0x2582d8u: goto label_2582d8;
        case 0x2582dcu: goto label_2582dc;
        case 0x2582e0u: goto label_2582e0;
        case 0x2582e4u: goto label_2582e4;
        case 0x2582e8u: goto label_2582e8;
        case 0x2582ecu: goto label_2582ec;
        case 0x2582f0u: goto label_2582f0;
        case 0x2582f4u: goto label_2582f4;
        case 0x2582f8u: goto label_2582f8;
        case 0x2582fcu: goto label_2582fc;
        case 0x258300u: goto label_258300;
        case 0x258304u: goto label_258304;
        case 0x258308u: goto label_258308;
        case 0x25830cu: goto label_25830c;
        case 0x258310u: goto label_258310;
        case 0x258314u: goto label_258314;
        case 0x258318u: goto label_258318;
        case 0x25831cu: goto label_25831c;
        case 0x258320u: goto label_258320;
        case 0x258324u: goto label_258324;
        case 0x258328u: goto label_258328;
        case 0x25832cu: goto label_25832c;
        default: break;
    }

    ctx->pc = 0x257f38u;

label_257f38:
    // 0x257f38: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x257f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_257f3c:
    // 0x257f3c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x257f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_257f40:
    // 0x257f40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x257f40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_257f44:
    // 0x257f44: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x257f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_257f48:
    // 0x257f48: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x257f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_257f4c:
    // 0x257f4c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x257f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_257f50:
    // 0x257f50: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x257f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_257f54:
    // 0x257f54: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x257f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_257f58:
    // 0x257f58: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x257f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_257f5c:
    // 0x257f5c: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x257f5cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_257f60:
    // 0x257f60: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x257f60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_257f64:
    // 0x257f64: 0xc089bfc  jal         func_226FF0
label_257f68:
    if (ctx->pc == 0x257F68u) {
        ctx->pc = 0x257F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F64u;
        // 0x257f68: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x257F6Cu;
        goto label_257f6c;
    }
    ctx->pc = 0x257F64u;
    SET_GPR_U32(ctx, 31, 0x257F6Cu);
    ctx->pc = 0x257F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257F64u;
    // 0x257f68: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x257F64u, 0x257F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257F6Cu;
label_257f6c:
    // 0x257f6c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x257f6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_257f70:
    // 0x257f70: 0xc08cade  jal         func_232B78
label_257f74:
    if (ctx->pc == 0x257F74u) {
        ctx->pc = 0x257F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F70u;
        // 0x257f74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257F78u;
        goto label_257f78;
    }
    ctx->pc = 0x257F70u;
    SET_GPR_U32(ctx, 31, 0x257F78u);
    ctx->pc = 0x257F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257F70u;
    // 0x257f74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232B78u, 0x257F70u, 0x257F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257F78u;
label_257f78:
    // 0x257f78: 0x126000e1  beqz        $s3, . + 4 + (0xE1 << 2)
label_257f7c:
    if (ctx->pc == 0x257F7Cu) {
        ctx->pc = 0x257F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F78u;
        // 0x257f7c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257F80u;
        goto label_257f80;
    }
    ctx->pc = 0x257F78u;
    {
        const bool branch_taken_0x257f78 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x257F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F78u;
        // 0x257f7c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f78) {
            ctx->pc = 0x258300u;
            goto label_258300;
        }
    }
    ctx->pc = 0x257F80u;
label_257f80:
    // 0x257f80: 0xc08a61a  jal         func_229868
label_257f84:
    if (ctx->pc == 0x257F84u) {
        ctx->pc = 0x257F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F80u;
        // 0x257f84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257F88u;
        goto label_257f88;
    }
    ctx->pc = 0x257F80u;
    SET_GPR_U32(ctx, 31, 0x257F88u);
    ctx->pc = 0x257F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257F80u;
    // 0x257f84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x257F80u, 0x257F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257F88u;
label_257f88:
    // 0x257f88: 0x144000dd  bnez        $v0, . + 4 + (0xDD << 2)
label_257f8c:
    if (ctx->pc == 0x257F8Cu) {
        ctx->pc = 0x257F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F88u;
        // 0x257f8c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257F90u;
        goto label_257f90;
    }
    ctx->pc = 0x257F88u;
    {
        const bool branch_taken_0x257f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F88u;
        // 0x257f8c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f88) {
            ctx->pc = 0x258300u;
            goto label_258300;
        }
    }
    ctx->pc = 0x257F90u;
label_257f90:
    // 0x257f90: 0xc0e57ce  jal         func_395F38
label_257f94:
    if (ctx->pc == 0x257F94u) {
        ctx->pc = 0x257F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F90u;
        // 0x257f94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257F98u;
        goto label_257f98;
    }
    ctx->pc = 0x257F90u;
    SET_GPR_U32(ctx, 31, 0x257F98u);
    ctx->pc = 0x257F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257F90u;
    // 0x257f94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x257F90u, 0x257F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257F98u;
label_257f98:
    // 0x257f98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x257f98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_257f9c:
    // 0x257f9c: 0xc08c6a0  jal         func_231A80
label_257fa0:
    if (ctx->pc == 0x257FA0u) {
        ctx->pc = 0x257FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F9Cu;
        // 0x257fa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257FA4u;
        goto label_257fa4;
    }
    ctx->pc = 0x257F9Cu;
    SET_GPR_U32(ctx, 31, 0x257FA4u);
    ctx->pc = 0x257FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257F9Cu;
    // 0x257fa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x257F9Cu, 0x257FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257FA4u;
label_257fa4:
    // 0x257fa4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x257fa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_257fa8:
    // 0x257fa8: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_257fac:
    if (ctx->pc == 0x257FACu) {
        ctx->pc = 0x257FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257FA8u;
        // 0x257fac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257FB0u;
        goto label_257fb0;
    }
    ctx->pc = 0x257FA8u;
    {
        const bool branch_taken_0x257fa8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x257FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257FA8u;
        // 0x257fac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257fa8) {
            ctx->pc = 0x257FB8u;
            goto label_257fb8;
        }
    }
    ctx->pc = 0x257FB0u;
label_257fb0:
    // 0x257fb0: 0xc094fde  jal         func_253F78
label_257fb4:
    if (ctx->pc == 0x257FB4u) {
        ctx->pc = 0x257FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257FB0u;
        // 0x257fb4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257FB8u;
        goto label_257fb8;
    }
    ctx->pc = 0x257FB0u;
    SET_GPR_U32(ctx, 31, 0x257FB8u);
    ctx->pc = 0x257FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257FB0u;
    // 0x257fb4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F78u, 0x257FB0u, 0x257FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257FB8u;
label_257fb8:
    // 0x257fb8: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
label_257fbc:
    if (ctx->pc == 0x257FBCu) {
        ctx->pc = 0x257FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257FB8u;
        // 0x257fbc: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257FC0u;
        goto label_257fc0;
    }
    ctx->pc = 0x257FB8u;
    {
        const bool branch_taken_0x257fb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x257FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257FB8u;
        // 0x257fbc: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257fb8) {
            ctx->pc = 0x258080u;
            goto label_258080;
        }
    }
    ctx->pc = 0x257FC0u;
label_257fc0:
    // 0x257fc0: 0x8ea42c04  lw          $a0, 0x2C04($s5)
    ctx->pc = 0x257fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11268)));
label_257fc4:
    // 0x257fc4: 0xc0e44cc  jal         func_391330
label_257fc8:
    if (ctx->pc == 0x257FC8u) {
        ctx->pc = 0x257FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257FC4u;
        // 0x257fc8: 0x96250112  lhu         $a1, 0x112($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257FCCu;
        goto label_257fcc;
    }
    ctx->pc = 0x257FC4u;
    SET_GPR_U32(ctx, 31, 0x257FCCu);
    ctx->pc = 0x257FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257FC4u;
    // 0x257fc8: 0x96250112  lhu         $a1, 0x112($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x257FC4u, 0x257FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257FCCu;
label_257fcc:
    // 0x257fcc: 0x80500086  lb          $s0, 0x86($v0)
    ctx->pc = 0x257fccu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_257fd0:
    // 0x257fd0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x257fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_257fd4:
    // 0x257fd4: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_257fd8:
    if (ctx->pc == 0x257FD8u) {
        ctx->pc = 0x257FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257FD4u;
        // 0x257fd8: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257FDCu;
        goto label_257fdc;
    }
    ctx->pc = 0x257FD4u;
    {
        const bool branch_taken_0x257fd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x257FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257FD4u;
        // 0x257fd8: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257fd4) {
            ctx->pc = 0x257FECu;
            goto label_257fec;
        }
    }
    ctx->pc = 0x257FDCu;
label_257fdc:
    // 0x257fdc: 0x52020004  beql        $s0, $v0, . + 4 + (0x4 << 2)
label_257fe0:
    if (ctx->pc == 0x257FE0u) {
        ctx->pc = 0x257FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257FDCu;
        // 0x257fe0: 0xa220010c  sb          $zero, 0x10C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 268), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257FE4u;
        goto label_257fe4;
    }
    ctx->pc = 0x257FDCu;
    {
        const bool branch_taken_0x257fdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x257fdc) {
            ctx->pc = 0x257FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257FDCu;
            // 0x257fe0: 0xa220010c  sb          $zero, 0x10C($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 268), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257FF0u;
            goto label_257ff0;
        }
    }
    ctx->pc = 0x257FE4u;
label_257fe4:
    // 0x257fe4: 0xae32011c  sw          $s2, 0x11C($s1)
    ctx->pc = 0x257fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 18));
label_257fe8:
    // 0x257fe8: 0xa2200116  sb          $zero, 0x116($s1)
    ctx->pc = 0x257fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 278), (uint8_t)GPR_U32(ctx, 0));
label_257fec:
    // 0x257fec: 0xa220010c  sb          $zero, 0x10C($s1)
    ctx->pc = 0x257fecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 268), (uint8_t)GPR_U32(ctx, 0));
label_257ff0:
    // 0x257ff0: 0xc0e4752  jal         func_391D48
label_257ff4:
    if (ctx->pc == 0x257FF4u) {
        ctx->pc = 0x257FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257FF0u;
        // 0x257ff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257FF8u;
        goto label_257ff8;
    }
    ctx->pc = 0x257FF0u;
    SET_GPR_U32(ctx, 31, 0x257FF8u);
    ctx->pc = 0x257FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257FF0u;
    // 0x257ff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391D48u, 0x257FF0u, 0x257FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257FF8u;
label_257ff8:
    // 0x257ff8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x257ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_257ffc:
    // 0x257ffc: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x257ffcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_258000:
    // 0x258000: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x258000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_258004:
    // 0x258004: 0x40f809  jalr        $v0
label_258008:
    if (ctx->pc == 0x258008u) {
        ctx->pc = 0x258008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258004u;
        // 0x258008: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25800Cu;
        goto label_25800c;
    }
    ctx->pc = 0x258004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25800Cu);
        ctx->pc = 0x258008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258004u;
        // 0x258008: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258004u, 0x25800Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25800Cu;
label_25800c:
    // 0x25800c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_258010:
    if (ctx->pc == 0x258010u) {
        ctx->pc = 0x258014u;
        goto label_258014;
    }
    ctx->pc = 0x25800Cu;
    {
        const bool branch_taken_0x25800c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25800c) {
            ctx->pc = 0x25805Cu;
            goto label_25805c;
        }
    }
    ctx->pc = 0x258014u;
label_258014:
    // 0x258014: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x258014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_258018:
    // 0x258018: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x258018u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_25801c:
    // 0x25801c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x25801cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_258020:
    // 0x258020: 0x40f809  jalr        $v0
label_258024:
    if (ctx->pc == 0x258024u) {
        ctx->pc = 0x258024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258020u;
        // 0x258024: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258028u;
        goto label_258028;
    }
    ctx->pc = 0x258020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x258028u);
        ctx->pc = 0x258024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258020u;
        // 0x258024: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258020u, 0x258028u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x258028u;
label_258028:
    // 0x258028: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x258028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_25802c:
    // 0x25802c: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x25802cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_258030:
    // 0x258030: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x258030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_258034:
    // 0x258034: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x258034u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_258038:
    // 0x258038: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x258038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25803c:
    // 0x25803c: 0x84a400f0  lh          $a0, 0xF0($a1)
    ctx->pc = 0x25803cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 240)));
label_258040:
    // 0x258040: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x258040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
label_258044:
    // 0x258044: 0x40f809  jalr        $v0
label_258048:
    if (ctx->pc == 0x258048u) {
        ctx->pc = 0x258048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258044u;
        // 0x258048: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25804Cu;
        goto label_25804c;
    }
    ctx->pc = 0x258044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25804Cu);
        ctx->pc = 0x258048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258044u;
        // 0x258048: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258044u, 0x25804Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25804Cu;
label_25804c:
    // 0x25804c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x25804cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_258050:
    // 0x258050: 0x2404feff  addiu       $a0, $zero, -0x101
    ctx->pc = 0x258050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_258054:
    // 0x258054: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x258054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_258058:
    // 0x258058: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x258058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_25805c:
    // 0x25805c: 0xc087502  jal         func_21D408
label_258060:
    if (ctx->pc == 0x258060u) {
        ctx->pc = 0x258060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25805Cu;
        // 0x258060: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258064u;
        goto label_258064;
    }
    ctx->pc = 0x25805Cu;
    SET_GPR_U32(ctx, 31, 0x258064u);
    ctx->pc = 0x258060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25805Cu;
    // 0x258060: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x25805Cu, 0x258064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258064u;
label_258064:
    // 0x258064: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x258064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_258068:
    // 0x258068: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x258068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25806c:
    // 0x25806c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_258070:
    if (ctx->pc == 0x258070u) {
        ctx->pc = 0x258070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25806Cu;
        // 0x258070: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258074u;
        goto label_258074;
    }
    ctx->pc = 0x25806Cu;
    {
        const bool branch_taken_0x25806c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25806c) {
            ctx->pc = 0x258070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25806Cu;
            // 0x258070: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258084u;
            goto label_258084;
        }
    }
    ctx->pc = 0x258074u;
label_258074:
    // 0x258074: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x258074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_258078:
    // 0x258078: 0x52020001  beql        $s0, $v0, . + 4 + (0x1 << 2)
label_25807c:
    if (ctx->pc == 0x25807Cu) {
        ctx->pc = 0x25807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258078u;
        // 0x25807c: 0xa230010d  sb          $s0, 0x10D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 269), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258080u;
        goto label_258080;
    }
    ctx->pc = 0x258078u;
    {
        const bool branch_taken_0x258078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x258078) {
            ctx->pc = 0x25807Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258078u;
            // 0x25807c: 0xa230010d  sb          $s0, 0x10D($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 269), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258080u;
            goto label_258080;
        }
    }
    ctx->pc = 0x258080u;
label_258080:
    // 0x258080: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x258080u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_258084:
    // 0x258084: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x258084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_258088:
    // 0x258088: 0xc0e8cda  jal         func_3A3368
label_25808c:
    if (ctx->pc == 0x25808Cu) {
        ctx->pc = 0x25808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258088u;
        // 0x25808c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258090u;
        goto label_258090;
    }
    ctx->pc = 0x258088u;
    SET_GPR_U32(ctx, 31, 0x258090u);
    ctx->pc = 0x25808Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258088u;
    // 0x25808c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3368u, 0x258088u, 0x258090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258090u;
label_258090:
    // 0x258090: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x258090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_258094:
    // 0x258094: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x258094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_258098:
    // 0x258098: 0xc0e8cbc  jal         func_3A32F0
label_25809c:
    if (ctx->pc == 0x25809Cu) {
        ctx->pc = 0x25809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258098u;
        // 0x25809c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2580A0u;
        goto label_2580a0;
    }
    ctx->pc = 0x258098u;
    SET_GPR_U32(ctx, 31, 0x2580A0u);
    ctx->pc = 0x25809Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258098u;
    // 0x25809c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x258098u, 0x2580A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2580A0u;
label_2580a0:
    // 0x2580a0: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x2580a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_2580a4:
    // 0x2580a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2580a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2580a8:
    // 0x2580a8: 0x24c616c0  addiu       $a2, $a2, 0x16C0
    ctx->pc = 0x2580a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
label_2580ac:
    // 0x2580ac: 0xc08a5b0  jal         func_2296C0
label_2580b0:
    if (ctx->pc == 0x2580B0u) {
        ctx->pc = 0x2580B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2580ACu;
        // 0x2580b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2580B4u;
        goto label_2580b4;
    }
    ctx->pc = 0x2580ACu;
    SET_GPR_U32(ctx, 31, 0x2580B4u);
    ctx->pc = 0x2580B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2580ACu;
    // 0x2580b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2296C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2296C0u, 0x2580ACu, 0x2580B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2580B4u;
label_2580b4:
    // 0x2580b4: 0x52200055  beql        $s1, $zero, . + 4 + (0x55 << 2)
label_2580b8:
    if (ctx->pc == 0x2580B8u) {
        ctx->pc = 0x2580B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2580B4u;
        // 0x2580b8: 0x8ea42c04  lw          $a0, 0x2C04($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2580BCu;
        goto label_2580bc;
    }
    ctx->pc = 0x2580B4u;
    {
        const bool branch_taken_0x2580b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2580b4) {
            ctx->pc = 0x2580B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2580B4u;
            // 0x2580b8: 0x8ea42c04  lw          $a0, 0x2C04($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25820Cu;
            goto label_25820c;
        }
    }
    ctx->pc = 0x2580BCu;
label_2580bc:
    // 0x2580bc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2580bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2580c0:
    // 0x2580c0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2580c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2580c4:
    // 0x2580c4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2580c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2580c8:
    // 0x2580c8: 0x40f809  jalr        $v0
label_2580cc:
    if (ctx->pc == 0x2580CCu) {
        ctx->pc = 0x2580CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2580C8u;
        // 0x2580cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2580D0u;
        goto label_2580d0;
    }
    ctx->pc = 0x2580C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2580D0u);
        ctx->pc = 0x2580CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2580C8u;
        // 0x2580cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2580C8u, 0x2580D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2580D0u;
label_2580d0:
    // 0x2580d0: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x2580d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_2580d4:
    // 0x2580d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2580d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2580d8:
    // 0x2580d8: 0x5040004c  beql        $v0, $zero, . + 4 + (0x4C << 2)
label_2580dc:
    if (ctx->pc == 0x2580DCu) {
        ctx->pc = 0x2580DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2580D8u;
        // 0x2580dc: 0x8ea42c04  lw          $a0, 0x2C04($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2580E0u;
        goto label_2580e0;
    }
    ctx->pc = 0x2580D8u;
    {
        const bool branch_taken_0x2580d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2580d8) {
            ctx->pc = 0x2580DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2580D8u;
            // 0x2580dc: 0x8ea42c04  lw          $a0, 0x2C04($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25820Cu;
            goto label_25820c;
        }
    }
    ctx->pc = 0x2580E0u;
label_2580e0:
    // 0x2580e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2580e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2580e4:
    // 0x2580e4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2580e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2580e8:
    // 0x2580e8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2580e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2580ec:
    // 0x2580ec: 0x40f809  jalr        $v0
label_2580f0:
    if (ctx->pc == 0x2580F0u) {
        ctx->pc = 0x2580F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2580ECu;
        // 0x2580f0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2580F4u;
        goto label_2580f4;
    }
    ctx->pc = 0x2580ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2580F4u);
        ctx->pc = 0x2580F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2580ECu;
        // 0x2580f0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2580ECu, 0x2580F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2580F4u;
label_2580f4:
    // 0x2580f4: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x2580f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_2580f8:
    // 0x2580f8: 0x54400044  bnel        $v0, $zero, . + 4 + (0x44 << 2)
label_2580fc:
    if (ctx->pc == 0x2580FCu) {
        ctx->pc = 0x2580FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2580F8u;
        // 0x2580fc: 0x8ea42c04  lw          $a0, 0x2C04($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258100u;
        goto label_258100;
    }
    ctx->pc = 0x2580F8u;
    {
        const bool branch_taken_0x2580f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2580f8) {
            ctx->pc = 0x2580FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2580F8u;
            // 0x2580fc: 0x8ea42c04  lw          $a0, 0x2C04($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25820Cu;
            goto label_25820c;
        }
    }
    ctx->pc = 0x258100u;
label_258100:
    // 0x258100: 0xc0e8568  jal         func_3A15A0
label_258104:
    if (ctx->pc == 0x258104u) {
        ctx->pc = 0x258108u;
        goto label_258108;
    }
    ctx->pc = 0x258100u;
    SET_GPR_U32(ctx, 31, 0x258108u);
    ctx->pc = 0x3A15A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A15A0u, 0x258100u, 0x258108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258108u;
label_258108:
    // 0x258108: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x258108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_25810c:
    // 0x25810c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x25810cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_258110:
    // 0x258110: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x258110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_258114:
    // 0x258114: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x258114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
label_258118:
    // 0x258118: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x258118u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
label_25811c:
    // 0x25811c: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x25811cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_258120:
    // 0x258120: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x258120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
label_258124:
    // 0x258124: 0x86430092  lh          $v1, 0x92($s2)
    ctx->pc = 0x258124u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_258128:
    // 0x258128: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x258128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25812c:
    // 0x25812c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x25812cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_258130:
    // 0x258130: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x258130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_258134:
    // 0x258134: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x258134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_258138:
    // 0x258138: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x258138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_25813c:
    // 0x25813c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x25813cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_258140:
    // 0x258140: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x258140u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_258144:
    // 0x258144: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x258144u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_258148:
    // 0x258148: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x258148u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_25814c:
    // 0x25814c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x25814cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_258150:
    // 0x258150: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x258150u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_258154:
    // 0x258154: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x258154u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_258158:
    // 0x258158: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x258158u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_25815c:
    // 0x25815c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x25815cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_258160:
    // 0x258160: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x258160u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_258164:
    // 0x258164: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x258164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
label_258168:
    // 0x258168: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x258168u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_25816c:
    // 0x25816c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x25816cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_258170:
    // 0x258170: 0xc086618  jal         func_219860
label_258174:
    if (ctx->pc == 0x258174u) {
        ctx->pc = 0x258174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258170u;
        // 0x258174: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258178u;
        goto label_258178;
    }
    ctx->pc = 0x258170u;
    SET_GPR_U32(ctx, 31, 0x258178u);
    ctx->pc = 0x258174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258170u;
    // 0x258174: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x258170u, 0x258178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258178u;
label_258178:
    // 0x258178: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x258178u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_25817c:
    // 0x25817c: 0xc086618  jal         func_219860
label_258180:
    if (ctx->pc == 0x258180u) {
        ctx->pc = 0x258180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25817Cu;
        // 0x258180: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258184u;
        goto label_258184;
    }
    ctx->pc = 0x25817Cu;
    SET_GPR_U32(ctx, 31, 0x258184u);
    ctx->pc = 0x258180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25817Cu;
    // 0x258180: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x25817Cu, 0x258184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258184u;
label_258184:
    // 0x258184: 0x4616a501  sub.s       $f20, $f20, $f22
    ctx->pc = 0x258184u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
label_258188:
    // 0x258188: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x258188u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
label_25818c:
    // 0x25818c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x25818cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_258190:
    // 0x258190: 0x4615a036  c.le.s      $f20, $f21
    ctx->pc = 0x258190u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_258194:
    // 0x258194: 0x0  nop
    ctx->pc = 0x258194u;
    // NOP
label_258198:
    // 0x258198: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_25819c:
    if (ctx->pc == 0x25819Cu) {
        ctx->pc = 0x25819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258198u;
        // 0x25819c: 0x8ea42c04  lw          $a0, 0x2C04($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2581A0u;
        goto label_2581a0;
    }
    ctx->pc = 0x258198u;
    {
        const bool branch_taken_0x258198 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258198u;
        // 0x25819c: 0x8ea42c04  lw          $a0, 0x2C04($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258198) {
            ctx->pc = 0x25820Cu;
            goto label_25820c;
        }
    }
    ctx->pc = 0x2581A0u;
label_2581a0:
    // 0x2581a0: 0xc086618  jal         func_219860
label_2581a4:
    if (ctx->pc == 0x2581A4u) {
        ctx->pc = 0x2581A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2581A0u;
        // 0x2581a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2581A8u;
        goto label_2581a8;
    }
    ctx->pc = 0x2581A0u;
    SET_GPR_U32(ctx, 31, 0x2581A8u);
    ctx->pc = 0x2581A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2581A0u;
    // 0x2581a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x2581A0u, 0x2581A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2581A8u;
label_2581a8:
    // 0x2581a8: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x2581a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
label_2581ac:
    // 0x2581ac: 0x0  nop
    ctx->pc = 0x2581acu;
    // NOP
label_2581b0:
    // 0x2581b0: 0x0  nop
    ctx->pc = 0x2581b0u;
    // NOP
label_2581b4:
    // 0x2581b4: 0x461500c4  c1          0x1500C4
    ctx->pc = 0x2581b4u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
label_2581b8:
    // 0x2581b8: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x2581b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2581bc:
    // 0x2581bc: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2581bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2581c0:
    // 0x2581c0: 0x0  nop
    ctx->pc = 0x2581c0u;
    // NOP
label_2581c4:
    // 0x2581c4: 0x0  nop
    ctx->pc = 0x2581c4u;
    // NOP
label_2581c8:
    // 0x2581c8: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2581c8u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
label_2581cc:
    // 0x2581cc: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2581ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2581d0:
    // 0x2581d0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2581d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_2581d4:
    // 0x2581d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2581d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2581d8:
    // 0x2581d8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2581d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2581dc:
    // 0x2581dc: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2581dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2581e0:
    // 0x2581e0: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2581e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2581e4:
    // 0x2581e4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2581e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2581e8:
    // 0x2581e8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2581e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2581ec:
    // 0x2581ec: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2581ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2581f0:
    // 0x2581f0: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2581f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2581f4:
    // 0x2581f4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2581f4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2581f8:
    // 0x2581f8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2581f8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2581fc:
    // 0x2581fc: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2581fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_258200:
    // 0x258200: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x258200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_258204:
    // 0x258204: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x258204u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_258208:
    // 0x258208: 0x8ea42c04  lw          $a0, 0x2C04($s5)
    ctx->pc = 0x258208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11268)));
label_25820c:
    // 0x25820c: 0xc0e44cc  jal         func_391330
label_258210:
    if (ctx->pc == 0x258210u) {
        ctx->pc = 0x258210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25820Cu;
        // 0x258210: 0x96250112  lhu         $a1, 0x112($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258214u;
        goto label_258214;
    }
    ctx->pc = 0x25820Cu;
    SET_GPR_U32(ctx, 31, 0x258214u);
    ctx->pc = 0x258210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25820Cu;
    // 0x258210: 0x96250112  lhu         $a1, 0x112($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x25820Cu, 0x258214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258214u;
label_258214:
    // 0x258214: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x258214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_258218:
    // 0x258218: 0x80830086  lb          $v1, 0x86($a0)
    ctx->pc = 0x258218u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 134)));
label_25821c:
    // 0x25821c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x25821cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_258220:
    // 0x258220: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_258224:
    if (ctx->pc == 0x258224u) {
        ctx->pc = 0x258224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258220u;
        // 0x258224: 0x24020027  addiu       $v0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258228u;
        goto label_258228;
    }
    ctx->pc = 0x258220u;
    {
        const bool branch_taken_0x258220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x258224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258220u;
        // 0x258224: 0x24020027  addiu       $v0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258220) {
            ctx->pc = 0x258240u;
            goto label_258240;
        }
    }
    ctx->pc = 0x258228u;
label_258228:
    // 0x258228: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x258228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_25822c:
    // 0x25822c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25822cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_258230:
    // 0x258230: 0xc0e5748  jal         func_395D20
label_258234:
    if (ctx->pc == 0x258234u) {
        ctx->pc = 0x258234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258230u;
        // 0x258234: 0x34a5d4c0  ori         $a1, $a1, 0xD4C0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54464);
        ctx->in_delay_slot = false;
        ctx->pc = 0x258238u;
        goto label_258238;
    }
    ctx->pc = 0x258230u;
    SET_GPR_U32(ctx, 31, 0x258238u);
    ctx->pc = 0x258234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258230u;
    // 0x258234: 0x34a5d4c0  ori         $a1, $a1, 0xD4C0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54464);
    ctx->in_delay_slot = false;
    ctx->pc = 0x395D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395D20u, 0x258230u, 0x258238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258238u;
label_258238:
    // 0x258238: 0x10000024  b           . + 4 + (0x24 << 2)
label_25823c:
    if (ctx->pc == 0x25823Cu) {
        ctx->pc = 0x25823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258238u;
        // 0x25823c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258240u;
        goto label_258240;
    }
    ctx->pc = 0x258238u;
    {
        const bool branch_taken_0x258238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258238u;
        // 0x25823c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258238) {
            ctx->pc = 0x2582CCu;
            goto label_2582cc;
        }
    }
    ctx->pc = 0x258240u;
label_258240:
    // 0x258240: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_258244:
    if (ctx->pc == 0x258244u) {
        ctx->pc = 0x258244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258240u;
        // 0x258244: 0x3c0203c5  lui         $v0, 0x3C5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)965 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258248u;
        goto label_258248;
    }
    ctx->pc = 0x258240u;
    {
        const bool branch_taken_0x258240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x258244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258240u;
        // 0x258244: 0x3c0203c5  lui         $v0, 0x3C5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)965 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258240) {
            ctx->pc = 0x25825Cu;
            goto label_25825c;
        }
    }
    ctx->pc = 0x258248u;
label_258248:
    // 0x258248: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25824c:
    // 0x25824c: 0xc0e5748  jal         func_395D20
label_258250:
    if (ctx->pc == 0x258250u) {
        ctx->pc = 0x258250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25824Cu;
        // 0x258250: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258254u;
        goto label_258254;
    }
    ctx->pc = 0x25824Cu;
    SET_GPR_U32(ctx, 31, 0x258254u);
    ctx->pc = 0x258250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25824Cu;
    // 0x258250: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395D20u, 0x25824Cu, 0x258254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258254u;
label_258254:
    // 0x258254: 0x1000001d  b           . + 4 + (0x1D << 2)
label_258258:
    if (ctx->pc == 0x258258u) {
        ctx->pc = 0x258258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258254u;
        // 0x258258: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25825Cu;
        goto label_25825c;
    }
    ctx->pc = 0x258254u;
    {
        const bool branch_taken_0x258254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258254u;
        // 0x258258: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258254) {
            ctx->pc = 0x2582CCu;
            goto label_2582cc;
        }
    }
    ctx->pc = 0x25825Cu;
label_25825c:
    // 0x25825c: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x25825cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_258260:
    // 0x258260: 0x3442256c  ori         $v0, $v0, 0x256C
    ctx->pc = 0x258260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9580);
label_258264:
    // 0x258264: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_258268:
    if (ctx->pc == 0x258268u) {
        ctx->pc = 0x258268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258264u;
        // 0x258268: 0x80820087  lb          $v0, 0x87($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 135)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25826Cu;
        goto label_25826c;
    }
    ctx->pc = 0x258264u;
    {
        const bool branch_taken_0x258264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x258264) {
            ctx->pc = 0x258268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258264u;
            // 0x258268: 0x80820087  lb          $v0, 0x87($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 135)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258280u;
            goto label_258280;
        }
    }
    ctx->pc = 0x25826Cu;
label_25826c:
    // 0x25826c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25826cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_258270:
    // 0x258270: 0xc0e5748  jal         func_395D20
label_258274:
    if (ctx->pc == 0x258274u) {
        ctx->pc = 0x258274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258270u;
        // 0x258274: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258278u;
        goto label_258278;
    }
    ctx->pc = 0x258270u;
    SET_GPR_U32(ctx, 31, 0x258278u);
    ctx->pc = 0x258274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258270u;
    // 0x258274: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395D20u, 0x258270u, 0x258278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258278u;
label_258278:
    // 0x258278: 0x10000014  b           . + 4 + (0x14 << 2)
label_25827c:
    if (ctx->pc == 0x25827Cu) {
        ctx->pc = 0x25827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258278u;
        // 0x25827c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258280u;
        goto label_258280;
    }
    ctx->pc = 0x258278u;
    {
        const bool branch_taken_0x258278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258278u;
        // 0x25827c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258278) {
            ctx->pc = 0x2582CCu;
            goto label_2582cc;
        }
    }
    ctx->pc = 0x258280u;
label_258280:
    // 0x258280: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_258284:
    if (ctx->pc == 0x258284u) {
        ctx->pc = 0x258284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258280u;
        // 0x258284: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258288u;
        goto label_258288;
    }
    ctx->pc = 0x258280u;
    {
        const bool branch_taken_0x258280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258280u;
        // 0x258284: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258280) {
            ctx->pc = 0x2582CCu;
            goto label_2582cc;
        }
    }
    ctx->pc = 0x258288u;
label_258288:
    // 0x258288: 0x3c02d2cf  lui         $v0, 0xD2CF
    ctx->pc = 0x258288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53967 << 16));
label_25828c:
    // 0x25828c: 0x3442cd44  ori         $v0, $v0, 0xCD44
    ctx->pc = 0x25828cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52548);
label_258290:
    // 0x258290: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_258294:
    if (ctx->pc == 0x258294u) {
        ctx->pc = 0x258298u;
        goto label_258298;
    }
    ctx->pc = 0x258290u;
    {
        const bool branch_taken_0x258290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x258290) {
            ctx->pc = 0x2582CCu;
            goto label_2582cc;
        }
    }
    ctx->pc = 0x258298u;
label_258298:
    // 0x258298: 0x3c02ae98  lui         $v0, 0xAE98
    ctx->pc = 0x258298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44696 << 16));
label_25829c:
    // 0x25829c: 0x3442caf8  ori         $v0, $v0, 0xCAF8
    ctx->pc = 0x25829cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51960);
label_2582a0:
    // 0x2582a0: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_2582a4:
    if (ctx->pc == 0x2582A4u) {
        ctx->pc = 0x2582A8u;
        goto label_2582a8;
    }
    ctx->pc = 0x2582A0u;
    {
        const bool branch_taken_0x2582a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2582a0) {
            ctx->pc = 0x2582CCu;
            goto label_2582cc;
        }
    }
    ctx->pc = 0x2582A8u;
label_2582a8:
    // 0x2582a8: 0x3c02ae86  lui         $v0, 0xAE86
    ctx->pc = 0x2582a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44678 << 16));
label_2582ac:
    // 0x2582ac: 0x3442b5d3  ori         $v0, $v0, 0xB5D3
    ctx->pc = 0x2582acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46547);
label_2582b0:
    // 0x2582b0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_2582b4:
    if (ctx->pc == 0x2582B4u) {
        ctx->pc = 0x2582B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2582B0u;
        // 0x2582b4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2582B8u;
        goto label_2582b8;
    }
    ctx->pc = 0x2582B0u;
    {
        const bool branch_taken_0x2582b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2582B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2582B0u;
        // 0x2582b4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2582b0) {
            ctx->pc = 0x2582CCu;
            goto label_2582cc;
        }
    }
    ctx->pc = 0x2582B8u;
label_2582b8:
    // 0x2582b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2582b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2582bc:
    // 0x2582bc: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x2582bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_2582c0:
    // 0x2582c0: 0xc0e5748  jal         func_395D20
label_2582c4:
    if (ctx->pc == 0x2582C4u) {
        ctx->pc = 0x2582C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2582C0u;
        // 0x2582c4: 0x8c45026c  lw          $a1, 0x26C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2582C8u;
        goto label_2582c8;
    }
    ctx->pc = 0x2582C0u;
    SET_GPR_U32(ctx, 31, 0x2582C8u);
    ctx->pc = 0x2582C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2582C0u;
    // 0x2582c4: 0x8c45026c  lw          $a1, 0x26C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395D20u, 0x2582C0u, 0x2582C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2582C8u;
label_2582c8:
    // 0x2582c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2582c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2582cc:
    // 0x2582cc: 0xc089c04  jal         func_227010
label_2582d0:
    if (ctx->pc == 0x2582D0u) {
        ctx->pc = 0x2582D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2582CCu;
        // 0x2582d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2582D4u;
        goto label_2582d4;
    }
    ctx->pc = 0x2582CCu;
    SET_GPR_U32(ctx, 31, 0x2582D4u);
    ctx->pc = 0x2582D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2582CCu;
    // 0x2582d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227010u, 0x2582CCu, 0x2582D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2582D4u;
label_2582d4:
    // 0x2582d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2582d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2582d8:
    // 0x2582d8: 0x12820003  beq         $s4, $v0, . + 4 + (0x3 << 2)
label_2582dc:
    if (ctx->pc == 0x2582DCu) {
        ctx->pc = 0x2582DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2582D8u;
        // 0x2582dc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2582E0u;
        goto label_2582e0;
    }
    ctx->pc = 0x2582D8u;
    {
        const bool branch_taken_0x2582d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x2582DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2582D8u;
        // 0x2582dc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2582d8) {
            ctx->pc = 0x2582E8u;
            goto label_2582e8;
        }
    }
    ctx->pc = 0x2582E0u;
label_2582e0:
    // 0x2582e0: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
label_2582e4:
    if (ctx->pc == 0x2582E4u) {
        ctx->pc = 0x2582E8u;
        goto label_2582e8;
    }
    ctx->pc = 0x2582E0u;
    {
        const bool branch_taken_0x2582e0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x2582e0) {
            ctx->pc = 0x2582F4u;
            goto label_2582f4;
        }
    }
    ctx->pc = 0x2582E8u;
label_2582e8:
    // 0x2582e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2582e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2582ec:
    // 0x2582ec: 0xc089974  jal         func_2265D0
label_2582f0:
    if (ctx->pc == 0x2582F0u) {
        ctx->pc = 0x2582F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2582ECu;
        // 0x2582f0: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2582F4u;
        goto label_2582f4;
    }
    ctx->pc = 0x2582ECu;
    SET_GPR_U32(ctx, 31, 0x2582F4u);
    ctx->pc = 0x2582F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2582ECu;
    // 0x2582f0: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x2582ECu, 0x2582F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2582F4u;
label_2582f4:
    // 0x2582f4: 0xc08c07c  jal         func_2301F0
label_2582f8:
    if (ctx->pc == 0x2582F8u) {
        ctx->pc = 0x2582F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2582F4u;
        // 0x2582f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2582FCu;
        goto label_2582fc;
    }
    ctx->pc = 0x2582F4u;
    SET_GPR_U32(ctx, 31, 0x2582FCu);
    ctx->pc = 0x2582F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2582F4u;
    // 0x2582f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2301F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2301F0u, 0x2582F4u, 0x2582FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2582FCu;
label_2582fc:
    // 0x2582fc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2582fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_258300:
    // 0x258300: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x258300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_258304:
    // 0x258304: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x258304u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_258308:
    // 0x258308: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x258308u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25830c:
    // 0x25830c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x25830cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_258310:
    // 0x258310: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x258310u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_258314:
    // 0x258314: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x258314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_258318:
    // 0x258318: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x258318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_25831c:
    // 0x25831c: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x25831cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_258320:
    // 0x258320: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x258320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_258324:
    // 0x258324: 0x3e00008  jr          $ra
label_258328:
    if (ctx->pc == 0x258328u) {
        ctx->pc = 0x258328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258324u;
        // 0x258328: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25832Cu;
        goto label_25832c;
    }
    ctx->pc = 0x258324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258324u;
        // 0x258328: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25832Cu;
label_25832c:
    // 0x25832c: 0x0  nop
    ctx->pc = 0x25832cu;
    // NOP
    ctx->pc = 0x258330u;
}
