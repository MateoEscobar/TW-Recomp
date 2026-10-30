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

// Function: sub_00116080
// Address: 0x116080 - 0x1162a0
void sub_00116080_0x116080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116080_0x116080");
#endif

    switch (ctx->pc) {
        case 0x116080u: goto label_116080;
        case 0x116084u: goto label_116084;
        case 0x116088u: goto label_116088;
        case 0x11608cu: goto label_11608c;
        case 0x116090u: goto label_116090;
        case 0x116094u: goto label_116094;
        case 0x116098u: goto label_116098;
        case 0x11609cu: goto label_11609c;
        case 0x1160a0u: goto label_1160a0;
        case 0x1160a4u: goto label_1160a4;
        case 0x1160a8u: goto label_1160a8;
        case 0x1160acu: goto label_1160ac;
        case 0x1160b0u: goto label_1160b0;
        case 0x1160b4u: goto label_1160b4;
        case 0x1160b8u: goto label_1160b8;
        case 0x1160bcu: goto label_1160bc;
        case 0x1160c0u: goto label_1160c0;
        case 0x1160c4u: goto label_1160c4;
        case 0x1160c8u: goto label_1160c8;
        case 0x1160ccu: goto label_1160cc;
        case 0x1160d0u: goto label_1160d0;
        case 0x1160d4u: goto label_1160d4;
        case 0x1160d8u: goto label_1160d8;
        case 0x1160dcu: goto label_1160dc;
        case 0x1160e0u: goto label_1160e0;
        case 0x1160e4u: goto label_1160e4;
        case 0x1160e8u: goto label_1160e8;
        case 0x1160ecu: goto label_1160ec;
        case 0x1160f0u: goto label_1160f0;
        case 0x1160f4u: goto label_1160f4;
        case 0x1160f8u: goto label_1160f8;
        case 0x1160fcu: goto label_1160fc;
        case 0x116100u: goto label_116100;
        case 0x116104u: goto label_116104;
        case 0x116108u: goto label_116108;
        case 0x11610cu: goto label_11610c;
        case 0x116110u: goto label_116110;
        case 0x116114u: goto label_116114;
        case 0x116118u: goto label_116118;
        case 0x11611cu: goto label_11611c;
        case 0x116120u: goto label_116120;
        case 0x116124u: goto label_116124;
        case 0x116128u: goto label_116128;
        case 0x11612cu: goto label_11612c;
        case 0x116130u: goto label_116130;
        case 0x116134u: goto label_116134;
        case 0x116138u: goto label_116138;
        case 0x11613cu: goto label_11613c;
        case 0x116140u: goto label_116140;
        case 0x116144u: goto label_116144;
        case 0x116148u: goto label_116148;
        case 0x11614cu: goto label_11614c;
        case 0x116150u: goto label_116150;
        case 0x116154u: goto label_116154;
        case 0x116158u: goto label_116158;
        case 0x11615cu: goto label_11615c;
        case 0x116160u: goto label_116160;
        case 0x116164u: goto label_116164;
        case 0x116168u: goto label_116168;
        case 0x11616cu: goto label_11616c;
        case 0x116170u: goto label_116170;
        case 0x116174u: goto label_116174;
        case 0x116178u: goto label_116178;
        case 0x11617cu: goto label_11617c;
        case 0x116180u: goto label_116180;
        case 0x116184u: goto label_116184;
        case 0x116188u: goto label_116188;
        case 0x11618cu: goto label_11618c;
        case 0x116190u: goto label_116190;
        case 0x116194u: goto label_116194;
        case 0x116198u: goto label_116198;
        case 0x11619cu: goto label_11619c;
        case 0x1161a0u: goto label_1161a0;
        case 0x1161a4u: goto label_1161a4;
        case 0x1161a8u: goto label_1161a8;
        case 0x1161acu: goto label_1161ac;
        case 0x1161b0u: goto label_1161b0;
        case 0x1161b4u: goto label_1161b4;
        case 0x1161b8u: goto label_1161b8;
        case 0x1161bcu: goto label_1161bc;
        case 0x1161c0u: goto label_1161c0;
        case 0x1161c4u: goto label_1161c4;
        case 0x1161c8u: goto label_1161c8;
        case 0x1161ccu: goto label_1161cc;
        case 0x1161d0u: goto label_1161d0;
        case 0x1161d4u: goto label_1161d4;
        case 0x1161d8u: goto label_1161d8;
        case 0x1161dcu: goto label_1161dc;
        case 0x1161e0u: goto label_1161e0;
        case 0x1161e4u: goto label_1161e4;
        case 0x1161e8u: goto label_1161e8;
        case 0x1161ecu: goto label_1161ec;
        case 0x1161f0u: goto label_1161f0;
        case 0x1161f4u: goto label_1161f4;
        case 0x1161f8u: goto label_1161f8;
        case 0x1161fcu: goto label_1161fc;
        case 0x116200u: goto label_116200;
        case 0x116204u: goto label_116204;
        case 0x116208u: goto label_116208;
        case 0x11620cu: goto label_11620c;
        case 0x116210u: goto label_116210;
        case 0x116214u: goto label_116214;
        case 0x116218u: goto label_116218;
        case 0x11621cu: goto label_11621c;
        case 0x116220u: goto label_116220;
        case 0x116224u: goto label_116224;
        case 0x116228u: goto label_116228;
        case 0x11622cu: goto label_11622c;
        case 0x116230u: goto label_116230;
        case 0x116234u: goto label_116234;
        case 0x116238u: goto label_116238;
        case 0x11623cu: goto label_11623c;
        case 0x116240u: goto label_116240;
        case 0x116244u: goto label_116244;
        case 0x116248u: goto label_116248;
        case 0x11624cu: goto label_11624c;
        case 0x116250u: goto label_116250;
        case 0x116254u: goto label_116254;
        case 0x116258u: goto label_116258;
        case 0x11625cu: goto label_11625c;
        case 0x116260u: goto label_116260;
        case 0x116264u: goto label_116264;
        case 0x116268u: goto label_116268;
        case 0x11626cu: goto label_11626c;
        case 0x116270u: goto label_116270;
        case 0x116274u: goto label_116274;
        case 0x116278u: goto label_116278;
        case 0x11627cu: goto label_11627c;
        case 0x116280u: goto label_116280;
        case 0x116284u: goto label_116284;
        case 0x116288u: goto label_116288;
        case 0x11628cu: goto label_11628c;
        case 0x116290u: goto label_116290;
        case 0x116294u: goto label_116294;
        case 0x116298u: goto label_116298;
        case 0x11629cu: goto label_11629c;
        default: break;
    }

    ctx->pc = 0x116080u;

label_116080:
    // 0x116080: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x116080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_116084:
    // 0x116084: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x116084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_116088:
    // 0x116088: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x116088u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_11608c:
    // 0x11608c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x11608cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_116090:
    // 0x116090: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x116090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_116094:
    // 0x116094: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x116094u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_116098:
    // 0x116098: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x116098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_11609c:
    // 0x11609c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11609cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1160a0:
    // 0x1160a0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1160a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_1160a4:
    // 0x1160a4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1160a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1160a8:
    // 0x1160a8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1160a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_1160ac:
    // 0x1160ac: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1160acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1160b0:
    // 0x1160b0: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x1160b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1160b4:
    // 0x1160b4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1160b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1160b8:
    // 0x1160b8: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1160b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1160bc:
    // 0x1160bc: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x1160bcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_1160c0:
    // 0x1160c0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1160c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1160c4:
    // 0x1160c4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1160c4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_1160c8:
    // 0x1160c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1160c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1160cc:
    // 0x1160cc: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x1160ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
label_1160d0:
    // 0x1160d0: 0x8e2827e4  lw          $t0, 0x27E4($s1)
    ctx->pc = 0x1160d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_1160d4:
    // 0x1160d4: 0x8e05b9b8  lw          $a1, -0x4648($s0)
    ctx->pc = 0x1160d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949304)));
label_1160d8:
    // 0x1160d8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1160d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1160dc:
    // 0x1160dc: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x1160dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_1160e0:
    // 0x1160e0: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1160e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_1160e4:
    // 0x1160e4: 0x40f809  jalr        $v0
label_1160e8:
    if (ctx->pc == 0x1160E8u) {
        ctx->pc = 0x1160E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1160E4u;
        // 0x1160e8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1160ECu;
        goto label_1160ec;
    }
    ctx->pc = 0x1160E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1160ECu);
        ctx->pc = 0x1160E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1160E4u;
        // 0x1160e8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1160E4u, 0x1160ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1160ECu;
label_1160ec:
    // 0x1160ec: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x1160ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_1160f0:
    // 0x1160f0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1160f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1160f4:
    // 0x1160f4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1160f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1160f8:
    // 0x1160f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1160f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1160fc:
    // 0x1160fc: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_116100:
    if (ctx->pc == 0x116100u) {
        ctx->pc = 0x116100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1160FCu;
        // 0x116100: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116104u;
        goto label_116104;
    }
    ctx->pc = 0x1160FCu;
    {
        const bool branch_taken_0x1160fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x116100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1160FCu;
        // 0x116100: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1160fc) {
            ctx->pc = 0x116124u;
            goto label_116124;
        }
    }
    ctx->pc = 0x116104u;
label_116104:
    // 0x116104: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x116104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_116108:
    // 0x116108: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x116108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_11610c:
    // 0x11610c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x11610cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_116110:
    // 0x116110: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x116110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_116114:
    // 0x116114: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x116114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_116118:
    // 0x116118: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x116118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11611c:
    // 0x11611c: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x11611cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
label_116120:
    // 0x116120: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x116120u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_116124:
    // 0x116124: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x116124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_116128:
    // 0x116128: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x116128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_11612c:
    // 0x11612c: 0x34423a3c  ori         $v0, $v0, 0x3A3C
    ctx->pc = 0x11612cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14908);
label_116130:
    // 0x116130: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x116130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_116134:
    // 0x116134: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x116134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_116138:
    // 0x116138: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x116138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
label_11613c:
    // 0x11613c: 0xa0f30000  sb          $s3, 0x0($a3)
    ctx->pc = 0x11613cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 19));
label_116140:
    // 0x116140: 0xa0e00001  sb          $zero, 0x1($a3)
    ctx->pc = 0x116140u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 0));
label_116144:
    // 0x116144: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x116144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_116148:
    // 0x116148: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x116148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_11614c:
    // 0x11614c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x11614cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_116150:
    // 0x116150: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x116150u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_116154:
    // 0x116154: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_116158:
    if (ctx->pc == 0x116158u) {
        ctx->pc = 0x116158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116154u;
        // 0x116158: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11615Cu;
        goto label_11615c;
    }
    ctx->pc = 0x116154u;
    {
        const bool branch_taken_0x116154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116154u;
        // 0x116158: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116154) {
            ctx->pc = 0x116174u;
            goto label_116174;
        }
    }
    ctx->pc = 0x11615Cu;
label_11615c:
    // 0x11615c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x11615cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_116160:
    // 0x116160: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x116160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_116164:
    // 0x116164: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x116164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_116168:
    // 0x116168: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x116168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_11616c:
    // 0x11616c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11616cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_116170:
    // 0x116170: 0xae45000c  sw          $a1, 0xC($s2)
    ctx->pc = 0x116170u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 5));
label_116174:
    // 0x116174: 0x2e820002  sltiu       $v0, $s4, 0x2
    ctx->pc = 0x116174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_116178:
    // 0x116178: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_11617c:
    if (ctx->pc == 0x11617Cu) {
        ctx->pc = 0x11617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116178u;
        // 0x11617c: 0xace30010  sw          $v1, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116180u;
        goto label_116180;
    }
    ctx->pc = 0x116178u;
    {
        const bool branch_taken_0x116178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116178u;
        // 0x11617c: 0xace30010  sw          $v1, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116178) {
            ctx->pc = 0x1161B8u;
            goto label_1161b8;
        }
    }
    ctx->pc = 0x116180u;
label_116180:
    // 0x116180: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x116180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_116184:
    // 0x116184: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x116184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_116188:
    // 0x116188: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x116188u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_11618c:
    // 0x11618c: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x11618cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_116190:
    // 0x116190: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_116194:
    if (ctx->pc == 0x116194u) {
        ctx->pc = 0x116194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116190u;
        // 0x116194: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116198u;
        goto label_116198;
    }
    ctx->pc = 0x116190u;
    {
        const bool branch_taken_0x116190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116190u;
        // 0x116194: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116190) {
            ctx->pc = 0x1161B0u;
            goto label_1161b0;
        }
    }
    ctx->pc = 0x116198u;
label_116198:
    // 0x116198: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x116198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_11619c:
    // 0x11619c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x11619cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1161a0:
    // 0x1161a0: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x1161a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_1161a4:
    // 0x1161a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1161a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1161a8:
    // 0x1161a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1161a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1161ac:
    // 0x1161ac: 0xae45000c  sw          $a1, 0xC($s2)
    ctx->pc = 0x1161acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 5));
label_1161b0:
    // 0x1161b0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1161b4:
    if (ctx->pc == 0x1161B4u) {
        ctx->pc = 0x1161B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1161B0u;
        // 0x1161b4: 0xace30014  sw          $v1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1161B8u;
        goto label_1161b8;
    }
    ctx->pc = 0x1161B0u;
    {
        const bool branch_taken_0x1161b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1161B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1161B0u;
        // 0x1161b4: 0xace30014  sw          $v1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1161b0) {
            ctx->pc = 0x1161BCu;
            goto label_1161bc;
        }
    }
    ctx->pc = 0x1161B8u;
label_1161b8:
    // 0x1161b8: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x1161b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
label_1161bc:
    // 0x1161bc: 0x2e820003  sltiu       $v0, $s4, 0x3
    ctx->pc = 0x1161bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1161c0:
    // 0x1161c0: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_1161c4:
    if (ctx->pc == 0x1161C4u) {
        ctx->pc = 0x1161C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1161C0u;
        // 0x1161c4: 0xace00018  sw          $zero, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1161C8u;
        goto label_1161c8;
    }
    ctx->pc = 0x1161C0u;
    {
        const bool branch_taken_0x1161c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1161c0) {
            ctx->pc = 0x1161C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1161C0u;
            // 0x1161c4: 0xace00018  sw          $zero, 0x18($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1161FCu;
            goto label_1161fc;
        }
    }
    ctx->pc = 0x1161C8u;
label_1161c8:
    // 0x1161c8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1161c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1161cc:
    // 0x1161cc: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x1161ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1161d0:
    // 0x1161d0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1161d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1161d4:
    // 0x1161d4: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x1161d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1161d8:
    // 0x1161d8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1161dc:
    if (ctx->pc == 0x1161DCu) {
        ctx->pc = 0x1161DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1161D8u;
        // 0x1161dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1161E0u;
        goto label_1161e0;
    }
    ctx->pc = 0x1161D8u;
    {
        const bool branch_taken_0x1161d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1161d8) {
            ctx->pc = 0x1161DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1161D8u;
            // 0x1161dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1161F8u;
            goto label_1161f8;
        }
    }
    ctx->pc = 0x1161E0u;
label_1161e0:
    // 0x1161e0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1161e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1161e4:
    // 0x1161e4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1161e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1161e8:
    // 0x1161e8: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x1161e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_1161ec:
    // 0x1161ec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1161ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1161f0:
    // 0x1161f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1161f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1161f4:
    // 0x1161f4: 0xae45000c  sw          $a1, 0xC($s2)
    ctx->pc = 0x1161f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 5));
label_1161f8:
    // 0x1161f8: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x1161f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
label_1161fc:
    // 0x1161fc: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
label_116200:
    if (ctx->pc == 0x116200u) {
        ctx->pc = 0x116200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1161FCu;
        // 0x116200: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116204u;
        goto label_116204;
    }
    ctx->pc = 0x1161FCu;
    {
        const bool branch_taken_0x1161fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x116200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1161FCu;
        // 0x116200: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1161fc) {
            ctx->pc = 0x116248u;
            goto label_116248;
        }
    }
    ctx->pc = 0x116204u;
label_116204:
    // 0x116204: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x116204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_116208:
    // 0x116208: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
label_11620c:
    if (ctx->pc == 0x11620Cu) {
        ctx->pc = 0x11620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116208u;
        // 0x11620c: 0x24660001  addiu       $a2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116210u;
        goto label_116210;
    }
    ctx->pc = 0x116208u;
    {
        const bool branch_taken_0x116208 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x11620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116208u;
        // 0x11620c: 0x24660001  addiu       $a2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116208) {
            ctx->pc = 0x116238u;
            goto label_116238;
        }
    }
    ctx->pc = 0x116210u;
label_116210:
    // 0x116210: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x116210u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_116214:
    // 0x116214: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x116214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_116218:
    // 0x116218: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x116218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_11621c:
    // 0x11621c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_116220:
    if (ctx->pc == 0x116220u) {
        ctx->pc = 0x116220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11621Cu;
        // 0x116220: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116224u;
        goto label_116224;
    }
    ctx->pc = 0x11621Cu;
    {
        const bool branch_taken_0x11621c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11621Cu;
        // 0x116220: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11621c) {
            ctx->pc = 0x116228u;
            goto label_116228;
        }
    }
    ctx->pc = 0x116224u;
label_116224:
    // 0x116224: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x116224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_116228:
    // 0x116228: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x116228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_11622c:
    // 0x11622c: 0x94102b  sltu        $v0, $a0, $s4
    ctx->pc = 0x11622cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_116230:
    // 0x116230: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_116234:
    if (ctx->pc == 0x116234u) {
        ctx->pc = 0x116234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116230u;
        // 0x116234: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116238u;
        goto label_116238;
    }
    ctx->pc = 0x116230u;
    {
        const bool branch_taken_0x116230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116230u;
        // 0x116234: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116230) {
            ctx->pc = 0x116218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116218;
        }
    }
    ctx->pc = 0x116238u;
label_116238:
    // 0x116238: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x116238u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_11623c:
    // 0x11623c: 0x73102b  sltu        $v0, $v1, $s3
    ctx->pc = 0x11623cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_116240:
    // 0x116240: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
label_116244:
    if (ctx->pc == 0x116244u) {
        ctx->pc = 0x116244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116240u;
        // 0x116244: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116248u;
        goto label_116248;
    }
    ctx->pc = 0x116240u;
    {
        const bool branch_taken_0x116240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116240) {
            ctx->pc = 0x116244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116240u;
            // 0x116244: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116208;
        }
    }
    ctx->pc = 0x116248u;
label_116248:
    // 0x116248: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x116248u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_11624c:
    // 0x11624c: 0xe4f60004  swc1        $f22, 0x4($a3)
    ctx->pc = 0x11624cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_116250:
    // 0x116250: 0xe4f50008  swc1        $f21, 0x8($a3)
    ctx->pc = 0x116250u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_116254:
    // 0x116254: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x116254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_116258:
    // 0x116258: 0x8e05b9b8  lw          $a1, -0x4648($s0)
    ctx->pc = 0x116258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949304)));
label_11625c:
    // 0x11625c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x11625cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_116260:
    // 0x116260: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x116260u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_116264:
    // 0x116264: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x116264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_116268:
    // 0x116268: 0x60f809  jalr        $v1
label_11626c:
    if (ctx->pc == 0x11626Cu) {
        ctx->pc = 0x11626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116268u;
        // 0x11626c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116270u;
        goto label_116270;
    }
    ctx->pc = 0x116268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x116270u);
        ctx->pc = 0x11626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116268u;
        // 0x11626c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116268u, 0x116270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x116270u;
label_116270:
    // 0x116270: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x116270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_116274:
    // 0x116274: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x116274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_116278:
    // 0x116278: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x116278u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11627c:
    // 0x11627c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11627cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_116280:
    // 0x116280: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x116280u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_116284:
    // 0x116284: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x116284u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_116288:
    // 0x116288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x116288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11628c:
    // 0x11628c: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x11628cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_116290:
    // 0x116290: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x116290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_116294:
    // 0x116294: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x116294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_116298:
    // 0x116298: 0x3e00008  jr          $ra
label_11629c:
    if (ctx->pc == 0x11629Cu) {
        ctx->pc = 0x11629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116298u;
        // 0x11629c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1162A0u;
        goto label_fallthrough_0x116298;
    }
    ctx->pc = 0x116298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116298u;
        // 0x11629c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x116298:
    ctx->pc = 0x1162A0u;
}
