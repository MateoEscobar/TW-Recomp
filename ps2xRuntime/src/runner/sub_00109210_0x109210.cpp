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

// Function: sub_00109210
// Address: 0x109210 - 0x1093f8
void sub_00109210_0x109210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109210_0x109210");
#endif

    switch (ctx->pc) {
        case 0x109210u: goto label_109210;
        case 0x109214u: goto label_109214;
        case 0x109218u: goto label_109218;
        case 0x10921cu: goto label_10921c;
        case 0x109220u: goto label_109220;
        case 0x109224u: goto label_109224;
        case 0x109228u: goto label_109228;
        case 0x10922cu: goto label_10922c;
        case 0x109230u: goto label_109230;
        case 0x109234u: goto label_109234;
        case 0x109238u: goto label_109238;
        case 0x10923cu: goto label_10923c;
        case 0x109240u: goto label_109240;
        case 0x109244u: goto label_109244;
        case 0x109248u: goto label_109248;
        case 0x10924cu: goto label_10924c;
        case 0x109250u: goto label_109250;
        case 0x109254u: goto label_109254;
        case 0x109258u: goto label_109258;
        case 0x10925cu: goto label_10925c;
        case 0x109260u: goto label_109260;
        case 0x109264u: goto label_109264;
        case 0x109268u: goto label_109268;
        case 0x10926cu: goto label_10926c;
        case 0x109270u: goto label_109270;
        case 0x109274u: goto label_109274;
        case 0x109278u: goto label_109278;
        case 0x10927cu: goto label_10927c;
        case 0x109280u: goto label_109280;
        case 0x109284u: goto label_109284;
        case 0x109288u: goto label_109288;
        case 0x10928cu: goto label_10928c;
        case 0x109290u: goto label_109290;
        case 0x109294u: goto label_109294;
        case 0x109298u: goto label_109298;
        case 0x10929cu: goto label_10929c;
        case 0x1092a0u: goto label_1092a0;
        case 0x1092a4u: goto label_1092a4;
        case 0x1092a8u: goto label_1092a8;
        case 0x1092acu: goto label_1092ac;
        case 0x1092b0u: goto label_1092b0;
        case 0x1092b4u: goto label_1092b4;
        case 0x1092b8u: goto label_1092b8;
        case 0x1092bcu: goto label_1092bc;
        case 0x1092c0u: goto label_1092c0;
        case 0x1092c4u: goto label_1092c4;
        case 0x1092c8u: goto label_1092c8;
        case 0x1092ccu: goto label_1092cc;
        case 0x1092d0u: goto label_1092d0;
        case 0x1092d4u: goto label_1092d4;
        case 0x1092d8u: goto label_1092d8;
        case 0x1092dcu: goto label_1092dc;
        case 0x1092e0u: goto label_1092e0;
        case 0x1092e4u: goto label_1092e4;
        case 0x1092e8u: goto label_1092e8;
        case 0x1092ecu: goto label_1092ec;
        case 0x1092f0u: goto label_1092f0;
        case 0x1092f4u: goto label_1092f4;
        case 0x1092f8u: goto label_1092f8;
        case 0x1092fcu: goto label_1092fc;
        case 0x109300u: goto label_109300;
        case 0x109304u: goto label_109304;
        case 0x109308u: goto label_109308;
        case 0x10930cu: goto label_10930c;
        case 0x109310u: goto label_109310;
        case 0x109314u: goto label_109314;
        case 0x109318u: goto label_109318;
        case 0x10931cu: goto label_10931c;
        case 0x109320u: goto label_109320;
        case 0x109324u: goto label_109324;
        case 0x109328u: goto label_109328;
        case 0x10932cu: goto label_10932c;
        case 0x109330u: goto label_109330;
        case 0x109334u: goto label_109334;
        case 0x109338u: goto label_109338;
        case 0x10933cu: goto label_10933c;
        case 0x109340u: goto label_109340;
        case 0x109344u: goto label_109344;
        case 0x109348u: goto label_109348;
        case 0x10934cu: goto label_10934c;
        case 0x109350u: goto label_109350;
        case 0x109354u: goto label_109354;
        case 0x109358u: goto label_109358;
        case 0x10935cu: goto label_10935c;
        case 0x109360u: goto label_109360;
        case 0x109364u: goto label_109364;
        case 0x109368u: goto label_109368;
        case 0x10936cu: goto label_10936c;
        case 0x109370u: goto label_109370;
        case 0x109374u: goto label_109374;
        case 0x109378u: goto label_109378;
        case 0x10937cu: goto label_10937c;
        case 0x109380u: goto label_109380;
        case 0x109384u: goto label_109384;
        case 0x109388u: goto label_109388;
        case 0x10938cu: goto label_10938c;
        case 0x109390u: goto label_109390;
        case 0x109394u: goto label_109394;
        case 0x109398u: goto label_109398;
        case 0x10939cu: goto label_10939c;
        case 0x1093a0u: goto label_1093a0;
        case 0x1093a4u: goto label_1093a4;
        case 0x1093a8u: goto label_1093a8;
        case 0x1093acu: goto label_1093ac;
        case 0x1093b0u: goto label_1093b0;
        case 0x1093b4u: goto label_1093b4;
        case 0x1093b8u: goto label_1093b8;
        case 0x1093bcu: goto label_1093bc;
        case 0x1093c0u: goto label_1093c0;
        case 0x1093c4u: goto label_1093c4;
        case 0x1093c8u: goto label_1093c8;
        case 0x1093ccu: goto label_1093cc;
        case 0x1093d0u: goto label_1093d0;
        case 0x1093d4u: goto label_1093d4;
        case 0x1093d8u: goto label_1093d8;
        case 0x1093dcu: goto label_1093dc;
        case 0x1093e0u: goto label_1093e0;
        case 0x1093e4u: goto label_1093e4;
        case 0x1093e8u: goto label_1093e8;
        case 0x1093ecu: goto label_1093ec;
        case 0x1093f0u: goto label_1093f0;
        case 0x1093f4u: goto label_1093f4;
        default: break;
    }

    ctx->pc = 0x109210u;

label_109210:
    // 0x109210: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x109210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_109214:
    // 0x109214: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x109214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_109218:
    // 0x109218: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x109218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10921c:
    // 0x10921c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x10921cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_109220:
    // 0x109220: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x109220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_109224:
    // 0x109224: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x109224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_109228:
    // 0x109228: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x109228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10922c:
    // 0x10922c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x10922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_109230:
    // 0x109230: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x109230u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_109234:
    // 0x109234: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x109234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_109238:
    // 0x109238: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x109238u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10923c:
    // 0x10923c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x10923cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_109240:
    // 0x109240: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x109240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_109244:
    // 0x109244: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x109244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_109248:
    // 0x109248: 0x244248b8  addiu       $v0, $v0, 0x48B8
    ctx->pc = 0x109248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18616));
label_10924c:
    // 0x10924c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x10924cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_109250:
    // 0x109250: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x109250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_109254:
    // 0x109254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x109254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_109258:
    // 0x109258: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x109258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
label_10925c:
    // 0x10925c: 0xae120030  sw          $s2, 0x30($s0)
    ctx->pc = 0x10925cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 18));
label_109260:
    // 0x109260: 0xae080034  sw          $t0, 0x34($s0)
    ctx->pc = 0x109260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 8));
label_109264:
    // 0x109264: 0xae07002c  sw          $a3, 0x2C($s0)
    ctx->pc = 0x109264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 7));
label_109268:
    // 0x109268: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x109268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_10926c:
    // 0x10926c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x10926cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_109270:
    // 0x109270: 0xc04253c  jal         func_1094F0
label_109274:
    if (ctx->pc == 0x109274u) {
        ctx->pc = 0x109274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109270u;
        // 0x109274: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x109278u;
        goto label_109278;
    }
    ctx->pc = 0x109270u;
    SET_GPR_U32(ctx, 31, 0x109278u);
    ctx->pc = 0x109274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109270u;
    // 0x109274: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1094F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1094F0u, 0x109270u, 0x109278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109278u;
label_109278:
    // 0x109278: 0x8e6202b8  lw          $v0, 0x2B8($s3)
    ctx->pc = 0x109278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 696)));
label_10927c:
    // 0x10927c: 0xc60c0028  lwc1        $f12, 0x28($s0)
    ctx->pc = 0x10927cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_109280:
    // 0x109280: 0xc44003a4  lwc1        $f0, 0x3A4($v0)
    ctx->pc = 0x109280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_109284:
    // 0x109284: 0xc10b1c6  jal         func_42C718
label_109288:
    if (ctx->pc == 0x109288u) {
        ctx->pc = 0x109288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109284u;
        // 0x109288: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10928Cu;
        goto label_10928c;
    }
    ctx->pc = 0x109284u;
    SET_GPR_U32(ctx, 31, 0x10928Cu);
    ctx->pc = 0x109288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109284u;
    // 0x109288: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x109284u, 0x10928Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10928Cu;
label_10928c:
    // 0x10928c: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x10928cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_109290:
    // 0x109290: 0x24540001  addiu       $s4, $v0, 0x1
    ctx->pc = 0x109290u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_109294:
    // 0x109294: 0x32310007  andi        $s1, $s1, 0x7
    ctx->pc = 0x109294u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
label_109298:
    // 0x109298: 0x32940007  andi        $s4, $s4, 0x7
    ctx->pc = 0x109298u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)7);
label_10929c:
    // 0x10929c: 0x2518821  addu        $s1, $s2, $s1
    ctx->pc = 0x10929cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_1092a0:
    // 0x1092a0: 0x254a021  addu        $s4, $s2, $s4
    ctx->pc = 0x1092a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_1092a4:
    // 0x1092a4: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1092a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1092a8:
    // 0x1092a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1092a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1092ac:
    // 0x1092ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1092acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1092b0:
    // 0x1092b0: 0xc05d420  jal         func_175080
label_1092b4:
    if (ctx->pc == 0x1092B4u) {
        ctx->pc = 0x1092B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092B0u;
        // 0x1092b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1092B8u;
        goto label_1092b8;
    }
    ctx->pc = 0x1092B0u;
    SET_GPR_U32(ctx, 31, 0x1092B8u);
    ctx->pc = 0x1092B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1092B0u;
    // 0x1092b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175080u, 0x1092B0u, 0x1092B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1092B8u;
label_1092b8:
    // 0x1092b8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1092b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1092bc:
    // 0x1092bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1092bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1092c0:
    // 0x1092c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1092c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1092c4:
    // 0x1092c4: 0xc05d420  jal         func_175080
label_1092c8:
    if (ctx->pc == 0x1092C8u) {
        ctx->pc = 0x1092C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092C4u;
        // 0x1092c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1092CCu;
        goto label_1092cc;
    }
    ctx->pc = 0x1092C4u;
    SET_GPR_U32(ctx, 31, 0x1092CCu);
    ctx->pc = 0x1092C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1092C4u;
    // 0x1092c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175080u, 0x1092C4u, 0x1092CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1092CCu;
label_1092cc:
    // 0x1092cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1092ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1092d0:
    // 0x1092d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1092d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1092d4:
    // 0x1092d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1092d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1092d8:
    // 0x1092d8: 0xc05d420  jal         func_175080
label_1092dc:
    if (ctx->pc == 0x1092DCu) {
        ctx->pc = 0x1092DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092D8u;
        // 0x1092dc: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1092E0u;
        goto label_1092e0;
    }
    ctx->pc = 0x1092D8u;
    SET_GPR_U32(ctx, 31, 0x1092E0u);
    ctx->pc = 0x1092DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1092D8u;
    // 0x1092dc: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175080u, 0x1092D8u, 0x1092E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1092E0u;
label_1092e0:
    // 0x1092e0: 0x8e6502b8  lw          $a1, 0x2B8($s3)
    ctx->pc = 0x1092e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 696)));
label_1092e4:
    // 0x1092e4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1092e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1092e8:
    // 0x1092e8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1092e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1092ec:
    // 0x1092ec: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1092ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1092f0:
    // 0x1092f0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1092f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1092f4:
    // 0x1092f4: 0x40f809  jalr        $v0
label_1092f8:
    if (ctx->pc == 0x1092F8u) {
        ctx->pc = 0x1092F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092F4u;
        // 0x1092f8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1092FCu;
        goto label_1092fc;
    }
    ctx->pc = 0x1092F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1092FCu);
        ctx->pc = 0x1092F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092F4u;
        // 0x1092f8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1092F4u, 0x1092FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1092FCu;
label_1092fc:
    // 0x1092fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1092fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_109300:
    // 0x109300: 0xc042ed8  jal         func_10BB60
label_109304:
    if (ctx->pc == 0x109304u) {
        ctx->pc = 0x109304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109300u;
        // 0x109304: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109308u;
        goto label_109308;
    }
    ctx->pc = 0x109300u;
    SET_GPR_U32(ctx, 31, 0x109308u);
    ctx->pc = 0x109304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109300u;
    // 0x109304: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB60u, 0x109300u, 0x109308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109308u;
label_109308:
    // 0x109308: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x109308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_10930c:
    // 0x10930c: 0x8e6502b8  lw          $a1, 0x2B8($s3)
    ctx->pc = 0x10930cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 696)));
label_109310:
    // 0x109310: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x109310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_109314:
    // 0x109314: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x109314u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_109318:
    // 0x109318: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x109318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_10931c:
    // 0x10931c: 0x40f809  jalr        $v0
label_109320:
    if (ctx->pc == 0x109320u) {
        ctx->pc = 0x109320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10931Cu;
        // 0x109320: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109324u;
        goto label_109324;
    }
    ctx->pc = 0x10931Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x109324u);
        ctx->pc = 0x109320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10931Cu;
        // 0x109320: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10931Cu, 0x109324u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109324u;
label_109324:
    // 0x109324: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x109324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_109328:
    // 0x109328: 0xc042ed8  jal         func_10BB60
label_10932c:
    if (ctx->pc == 0x10932Cu) {
        ctx->pc = 0x10932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109328u;
        // 0x10932c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109330u;
        goto label_109330;
    }
    ctx->pc = 0x109328u;
    SET_GPR_U32(ctx, 31, 0x109330u);
    ctx->pc = 0x10932Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109328u;
    // 0x10932c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB60u, 0x109328u, 0x109330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109330u;
label_109330:
    // 0x109330: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x109330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_109334:
    // 0x109334: 0x8e6502b8  lw          $a1, 0x2B8($s3)
    ctx->pc = 0x109334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 696)));
label_109338:
    // 0x109338: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x109338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_10933c:
    // 0x10933c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x10933cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_109340:
    // 0x109340: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x109340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_109344:
    // 0x109344: 0x40f809  jalr        $v0
label_109348:
    if (ctx->pc == 0x109348u) {
        ctx->pc = 0x109348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109344u;
        // 0x109348: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10934Cu;
        goto label_10934c;
    }
    ctx->pc = 0x109344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10934Cu);
        ctx->pc = 0x109348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109344u;
        // 0x109348: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109344u, 0x10934Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10934Cu;
label_10934c:
    // 0x10934c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10934cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_109350:
    // 0x109350: 0xc042ed8  jal         func_10BB60
label_109354:
    if (ctx->pc == 0x109354u) {
        ctx->pc = 0x109354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109350u;
        // 0x109354: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109358u;
        goto label_109358;
    }
    ctx->pc = 0x109350u;
    SET_GPR_U32(ctx, 31, 0x109358u);
    ctx->pc = 0x109354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109350u;
    // 0x109354: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB60u, 0x109350u, 0x109358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109358u;
label_109358:
    // 0x109358: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x109358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_10935c:
    // 0x10935c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x10935cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_109360:
    // 0x109360: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x109360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_109364:
    // 0x109364: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x109364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_109368:
    // 0x109368: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x109368u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10936c:
    // 0x10936c: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x10936cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
label_109370:
    // 0x109370: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x109370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_109374:
    // 0x109374: 0xa482001e  sh          $v0, 0x1E($a0)
    ctx->pc = 0x109374u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 2));
label_109378:
    // 0x109378: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x109378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10937c:
    // 0x10937c: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x10937cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
label_109380:
    // 0x109380: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x109380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
label_109384:
    // 0x109384: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x109384u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
label_109388:
    // 0x109388: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x109388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_10938c:
    // 0x10938c: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x10938cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
label_109390:
    // 0x109390: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x109390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_109394:
    // 0x109394: 0xa482001e  sh          $v0, 0x1E($a0)
    ctx->pc = 0x109394u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 2));
label_109398:
    // 0x109398: 0xc041164  jal         func_104590
label_10939c:
    if (ctx->pc == 0x10939Cu) {
        ctx->pc = 0x10939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109398u;
        // 0x10939c: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1093A0u;
        goto label_1093a0;
    }
    ctx->pc = 0x109398u;
    SET_GPR_U32(ctx, 31, 0x1093A0u);
    ctx->pc = 0x10939Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109398u;
    // 0x10939c: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x109398u, 0x1093A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1093A0u;
label_1093a0:
    // 0x1093a0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1093a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1093a4:
    // 0x1093a4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1093a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1093a8:
    // 0x1093a8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1093a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1093ac:
    // 0x1093ac: 0xc041164  jal         func_104590
label_1093b0:
    if (ctx->pc == 0x1093B0u) {
        ctx->pc = 0x1093B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093ACu;
        // 0x1093b0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1093B4u;
        goto label_1093b4;
    }
    ctx->pc = 0x1093ACu;
    SET_GPR_U32(ctx, 31, 0x1093B4u);
    ctx->pc = 0x1093B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1093ACu;
    // 0x1093b0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x1093ACu, 0x1093B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1093B4u;
label_1093b4:
    // 0x1093b4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1093b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1093b8:
    // 0x1093b8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1093b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1093bc:
    // 0x1093bc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1093bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1093c0:
    // 0x1093c0: 0xc041164  jal         func_104590
label_1093c4:
    if (ctx->pc == 0x1093C4u) {
        ctx->pc = 0x1093C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093C0u;
        // 0x1093c4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1093C8u;
        goto label_1093c8;
    }
    ctx->pc = 0x1093C0u;
    SET_GPR_U32(ctx, 31, 0x1093C8u);
    ctx->pc = 0x1093C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1093C0u;
    // 0x1093c4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x1093C0u, 0x1093C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1093C8u;
label_1093c8:
    // 0x1093c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1093c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1093cc:
    // 0x1093cc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1093ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1093d0:
    // 0x1093d0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1093d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1093d4:
    // 0x1093d4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1093d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1093d8:
    // 0x1093d8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1093d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1093dc:
    // 0x1093dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1093dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1093e0:
    // 0x1093e0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1093e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1093e4:
    // 0x1093e4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1093e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1093e8:
    // 0x1093e8: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x1093e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1093ec:
    // 0x1093ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1093ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1093f0:
    // 0x1093f0: 0x3e00008  jr          $ra
label_1093f4:
    if (ctx->pc == 0x1093F4u) {
        ctx->pc = 0x1093F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093F0u;
        // 0x1093f4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1093F8u;
        goto label_fallthrough_0x1093f0;
    }
    ctx->pc = 0x1093F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1093F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093F0u;
        // 0x1093f4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1093F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1093f0:
    ctx->pc = 0x1093F8u;
}
