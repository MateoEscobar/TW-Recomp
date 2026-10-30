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

// Function: sub_004810F8
// Address: 0x4810f8 - 0x4813d0
void sub_004810F8_0x4810f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004810F8_0x4810f8");
#endif

    switch (ctx->pc) {
        case 0x4810f8u: goto label_4810f8;
        case 0x4810fcu: goto label_4810fc;
        case 0x481100u: goto label_481100;
        case 0x481104u: goto label_481104;
        case 0x481108u: goto label_481108;
        case 0x48110cu: goto label_48110c;
        case 0x481110u: goto label_481110;
        case 0x481114u: goto label_481114;
        case 0x481118u: goto label_481118;
        case 0x48111cu: goto label_48111c;
        case 0x481120u: goto label_481120;
        case 0x481124u: goto label_481124;
        case 0x481128u: goto label_481128;
        case 0x48112cu: goto label_48112c;
        case 0x481130u: goto label_481130;
        case 0x481134u: goto label_481134;
        case 0x481138u: goto label_481138;
        case 0x48113cu: goto label_48113c;
        case 0x481140u: goto label_481140;
        case 0x481144u: goto label_481144;
        case 0x481148u: goto label_481148;
        case 0x48114cu: goto label_48114c;
        case 0x481150u: goto label_481150;
        case 0x481154u: goto label_481154;
        case 0x481158u: goto label_481158;
        case 0x48115cu: goto label_48115c;
        case 0x481160u: goto label_481160;
        case 0x481164u: goto label_481164;
        case 0x481168u: goto label_481168;
        case 0x48116cu: goto label_48116c;
        case 0x481170u: goto label_481170;
        case 0x481174u: goto label_481174;
        case 0x481178u: goto label_481178;
        case 0x48117cu: goto label_48117c;
        case 0x481180u: goto label_481180;
        case 0x481184u: goto label_481184;
        case 0x481188u: goto label_481188;
        case 0x48118cu: goto label_48118c;
        case 0x481190u: goto label_481190;
        case 0x481194u: goto label_481194;
        case 0x481198u: goto label_481198;
        case 0x48119cu: goto label_48119c;
        case 0x4811a0u: goto label_4811a0;
        case 0x4811a4u: goto label_4811a4;
        case 0x4811a8u: goto label_4811a8;
        case 0x4811acu: goto label_4811ac;
        case 0x4811b0u: goto label_4811b0;
        case 0x4811b4u: goto label_4811b4;
        case 0x4811b8u: goto label_4811b8;
        case 0x4811bcu: goto label_4811bc;
        case 0x4811c0u: goto label_4811c0;
        case 0x4811c4u: goto label_4811c4;
        case 0x4811c8u: goto label_4811c8;
        case 0x4811ccu: goto label_4811cc;
        case 0x4811d0u: goto label_4811d0;
        case 0x4811d4u: goto label_4811d4;
        case 0x4811d8u: goto label_4811d8;
        case 0x4811dcu: goto label_4811dc;
        case 0x4811e0u: goto label_4811e0;
        case 0x4811e4u: goto label_4811e4;
        case 0x4811e8u: goto label_4811e8;
        case 0x4811ecu: goto label_4811ec;
        case 0x4811f0u: goto label_4811f0;
        case 0x4811f4u: goto label_4811f4;
        case 0x4811f8u: goto label_4811f8;
        case 0x4811fcu: goto label_4811fc;
        case 0x481200u: goto label_481200;
        case 0x481204u: goto label_481204;
        case 0x481208u: goto label_481208;
        case 0x48120cu: goto label_48120c;
        case 0x481210u: goto label_481210;
        case 0x481214u: goto label_481214;
        case 0x481218u: goto label_481218;
        case 0x48121cu: goto label_48121c;
        case 0x481220u: goto label_481220;
        case 0x481224u: goto label_481224;
        case 0x481228u: goto label_481228;
        case 0x48122cu: goto label_48122c;
        case 0x481230u: goto label_481230;
        case 0x481234u: goto label_481234;
        case 0x481238u: goto label_481238;
        case 0x48123cu: goto label_48123c;
        case 0x481240u: goto label_481240;
        case 0x481244u: goto label_481244;
        case 0x481248u: goto label_481248;
        case 0x48124cu: goto label_48124c;
        case 0x481250u: goto label_481250;
        case 0x481254u: goto label_481254;
        case 0x481258u: goto label_481258;
        case 0x48125cu: goto label_48125c;
        case 0x481260u: goto label_481260;
        case 0x481264u: goto label_481264;
        case 0x481268u: goto label_481268;
        case 0x48126cu: goto label_48126c;
        case 0x481270u: goto label_481270;
        case 0x481274u: goto label_481274;
        case 0x481278u: goto label_481278;
        case 0x48127cu: goto label_48127c;
        case 0x481280u: goto label_481280;
        case 0x481284u: goto label_481284;
        case 0x481288u: goto label_481288;
        case 0x48128cu: goto label_48128c;
        case 0x481290u: goto label_481290;
        case 0x481294u: goto label_481294;
        case 0x481298u: goto label_481298;
        case 0x48129cu: goto label_48129c;
        case 0x4812a0u: goto label_4812a0;
        case 0x4812a4u: goto label_4812a4;
        case 0x4812a8u: goto label_4812a8;
        case 0x4812acu: goto label_4812ac;
        case 0x4812b0u: goto label_4812b0;
        case 0x4812b4u: goto label_4812b4;
        case 0x4812b8u: goto label_4812b8;
        case 0x4812bcu: goto label_4812bc;
        case 0x4812c0u: goto label_4812c0;
        case 0x4812c4u: goto label_4812c4;
        case 0x4812c8u: goto label_4812c8;
        case 0x4812ccu: goto label_4812cc;
        case 0x4812d0u: goto label_4812d0;
        case 0x4812d4u: goto label_4812d4;
        case 0x4812d8u: goto label_4812d8;
        case 0x4812dcu: goto label_4812dc;
        case 0x4812e0u: goto label_4812e0;
        case 0x4812e4u: goto label_4812e4;
        case 0x4812e8u: goto label_4812e8;
        case 0x4812ecu: goto label_4812ec;
        case 0x4812f0u: goto label_4812f0;
        case 0x4812f4u: goto label_4812f4;
        case 0x4812f8u: goto label_4812f8;
        case 0x4812fcu: goto label_4812fc;
        case 0x481300u: goto label_481300;
        case 0x481304u: goto label_481304;
        case 0x481308u: goto label_481308;
        case 0x48130cu: goto label_48130c;
        case 0x481310u: goto label_481310;
        case 0x481314u: goto label_481314;
        case 0x481318u: goto label_481318;
        case 0x48131cu: goto label_48131c;
        case 0x481320u: goto label_481320;
        case 0x481324u: goto label_481324;
        case 0x481328u: goto label_481328;
        case 0x48132cu: goto label_48132c;
        case 0x481330u: goto label_481330;
        case 0x481334u: goto label_481334;
        case 0x481338u: goto label_481338;
        case 0x48133cu: goto label_48133c;
        case 0x481340u: goto label_481340;
        case 0x481344u: goto label_481344;
        case 0x481348u: goto label_481348;
        case 0x48134cu: goto label_48134c;
        case 0x481350u: goto label_481350;
        case 0x481354u: goto label_481354;
        case 0x481358u: goto label_481358;
        case 0x48135cu: goto label_48135c;
        case 0x481360u: goto label_481360;
        case 0x481364u: goto label_481364;
        case 0x481368u: goto label_481368;
        case 0x48136cu: goto label_48136c;
        case 0x481370u: goto label_481370;
        case 0x481374u: goto label_481374;
        case 0x481378u: goto label_481378;
        case 0x48137cu: goto label_48137c;
        case 0x481380u: goto label_481380;
        case 0x481384u: goto label_481384;
        case 0x481388u: goto label_481388;
        case 0x48138cu: goto label_48138c;
        case 0x481390u: goto label_481390;
        case 0x481394u: goto label_481394;
        case 0x481398u: goto label_481398;
        case 0x48139cu: goto label_48139c;
        case 0x4813a0u: goto label_4813a0;
        case 0x4813a4u: goto label_4813a4;
        case 0x4813a8u: goto label_4813a8;
        case 0x4813acu: goto label_4813ac;
        case 0x4813b0u: goto label_4813b0;
        case 0x4813b4u: goto label_4813b4;
        case 0x4813b8u: goto label_4813b8;
        case 0x4813bcu: goto label_4813bc;
        case 0x4813c0u: goto label_4813c0;
        case 0x4813c4u: goto label_4813c4;
        case 0x4813c8u: goto label_4813c8;
        case 0x4813ccu: goto label_4813cc;
        default: break;
    }

    ctx->pc = 0x4810f8u;

label_4810f8:
    // 0x4810f8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x4810f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_4810fc:
    // 0x4810fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4810fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_481100:
    // 0x481100: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x481100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_481104:
    // 0x481104: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x481104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_481108:
    // 0x481108: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x481108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48110c:
    // 0x48110c: 0x27a70034  addiu       $a3, $sp, 0x34
    ctx->pc = 0x48110cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_481110:
    // 0x481110: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x481110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_481114:
    // 0x481114: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x481114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_481118:
    // 0x481118: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x481118u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_48111c:
    // 0x48111c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x48111cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_481120:
    // 0x481120: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x481120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_481124:
    // 0x481124: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x481124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_481128:
    // 0x481128: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x481128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_48112c:
    // 0x48112c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x48112cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_481130:
    // 0x481130: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x481130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_481134:
    // 0x481134: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x481134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_481138:
    // 0x481138: 0xc11eeae  jal         func_47BAB8
label_48113c:
    if (ctx->pc == 0x48113Cu) {
        ctx->pc = 0x48113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481138u;
        // 0x48113c: 0xc0f02d  daddu       $fp, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x481140u;
        goto label_481140;
    }
    ctx->pc = 0x481138u;
    SET_GPR_U32(ctx, 31, 0x481140u);
    ctx->pc = 0x48113Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x481138u;
    // 0x48113c: 0xc0f02d  daddu       $fp, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x481138u, 0x481140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481140u;
label_481140:
    // 0x481140: 0x10400096  beqz        $v0, . + 4 + (0x96 << 2)
label_481144:
    if (ctx->pc == 0x481144u) {
        ctx->pc = 0x481144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481140u;
        // 0x481144: 0x8fa30034  lw          $v1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x481148u;
        goto label_481148;
    }
    ctx->pc = 0x481140u;
    {
        const bool branch_taken_0x481140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x481144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481140u;
        // 0x481144: 0x8fa30034  lw          $v1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x481140) {
            ctx->pc = 0x48139Cu;
            goto label_48139c;
        }
    }
    ctx->pc = 0x481148u;
label_481148:
    // 0x481148: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x481148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_48114c:
    // 0x48114c: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x48114cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_481150:
    // 0x481150: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x481150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_481154:
    // 0x481154: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x481154u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_481158:
    // 0x481158: 0x10600087  beqz        $v1, . + 4 + (0x87 << 2)
label_48115c:
    if (ctx->pc == 0x48115Cu) {
        ctx->pc = 0x48115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481158u;
        // 0x48115c: 0x8fa60030  lw          $a2, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x481160u;
        goto label_481160;
    }
    ctx->pc = 0x481158u;
    {
        const bool branch_taken_0x481158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481158u;
        // 0x48115c: 0x8fa60030  lw          $a2, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x481158) {
            ctx->pc = 0x481378u;
            goto label_481378;
        }
    }
    ctx->pc = 0x481160u;
label_481160:
    // 0x481160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x481160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_481164:
    // 0x481164: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x481164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_481168:
    // 0x481168: 0xc11fb56  jal         func_47ED58
label_48116c:
    if (ctx->pc == 0x48116Cu) {
        ctx->pc = 0x48116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481168u;
        // 0x48116c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x481170u;
        goto label_481170;
    }
    ctx->pc = 0x481168u;
    SET_GPR_U32(ctx, 31, 0x481170u);
    ctx->pc = 0x48116Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x481168u;
    // 0x48116c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x481168u, 0x481170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481170u;
label_481170:
    // 0x481170: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x481170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_481174:
    // 0x481174: 0x1443008a  bne         $v0, $v1, . + 4 + (0x8A << 2)
label_481178:
    if (ctx->pc == 0x481178u) {
        ctx->pc = 0x481178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481174u;
        // 0x481178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48117Cu;
        goto label_48117c;
    }
    ctx->pc = 0x481174u;
    {
        const bool branch_taken_0x481174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x481178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481174u;
        // 0x481178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x481174) {
            ctx->pc = 0x4813A0u;
            goto label_4813a0;
        }
    }
    ctx->pc = 0x48117Cu;
label_48117c:
    // 0x48117c: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x48117cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_481180:
    // 0x481180: 0xa7a00010  sh          $zero, 0x10($sp)
    ctx->pc = 0x481180u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 0));
label_481184:
    // 0x481184: 0x2484ad28  addiu       $a0, $a0, -0x52D8
    ctx->pc = 0x481184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946088));
label_481188:
    // 0x481188: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x481188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_48118c:
    // 0x48118c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x48118cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_481190:
    // 0x481190: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x481190u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_481194:
    // 0x481194: 0xc120de8  jal         func_4837A0
label_481198:
    if (ctx->pc == 0x481198u) {
        ctx->pc = 0x481198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481194u;
        // 0x481198: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48119Cu;
        goto label_48119c;
    }
    ctx->pc = 0x481194u;
    SET_GPR_U32(ctx, 31, 0x48119Cu);
    ctx->pc = 0x481198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x481194u;
    // 0x481198: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4837A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4837A0u, 0x481194u, 0x48119Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48119Cu;
label_48119c:
    // 0x48119c: 0x93a30010  lbu         $v1, 0x10($sp)
    ctx->pc = 0x48119cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_4811a0:
    // 0x4811a0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4811a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4811a4:
    // 0x4811a4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_4811a8:
    if (ctx->pc == 0x4811A8u) {
        ctx->pc = 0x4811A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4811A4u;
        // 0x4811a8: 0xa7a30010  sh          $v1, 0x10($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4811ACu;
        goto label_4811ac;
    }
    ctx->pc = 0x4811A4u;
    {
        const bool branch_taken_0x4811a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4811A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4811A4u;
        // 0x4811a8: 0xa7a30010  sh          $v1, 0x10($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4811a4) {
            ctx->pc = 0x4811C0u;
            goto label_4811c0;
        }
    }
    ctx->pc = 0x4811ACu;
label_4811ac:
    // 0x4811ac: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x4811acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
label_4811b0:
    // 0x4811b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4811b4:
    if (ctx->pc == 0x4811B4u) {
        ctx->pc = 0x4811B8u;
        goto label_4811b8;
    }
    ctx->pc = 0x4811B0u;
    {
        const bool branch_taken_0x4811b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4811b0) {
            ctx->pc = 0x4811C0u;
            goto label_4811c0;
        }
    }
    ctx->pc = 0x4811B8u;
label_4811b8:
    // 0x4811b8: 0x14820079  bne         $a0, $v0, . + 4 + (0x79 << 2)
label_4811bc:
    if (ctx->pc == 0x4811BCu) {
        ctx->pc = 0x4811BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4811B8u;
        // 0x4811bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4811C0u;
        goto label_4811c0;
    }
    ctx->pc = 0x4811B8u;
    {
        const bool branch_taken_0x4811b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x4811BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4811B8u;
        // 0x4811bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4811b8) {
            ctx->pc = 0x4813A0u;
            goto label_4813a0;
        }
    }
    ctx->pc = 0x4811C0u;
label_4811c0:
    // 0x4811c0: 0xc1222e2  jal         func_488B88
label_4811c4:
    if (ctx->pc == 0x4811C4u) {
        ctx->pc = 0x4811C8u;
        goto label_4811c8;
    }
    ctx->pc = 0x4811C0u;
    SET_GPR_U32(ctx, 31, 0x4811C8u);
    ctx->pc = 0x488B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488B88u, 0x4811C0u, 0x4811C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4811C8u;
label_4811c8:
    // 0x4811c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4811c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4811cc:
    // 0x4811cc: 0x12000073  beqz        $s0, . + 4 + (0x73 << 2)
label_4811d0:
    if (ctx->pc == 0x4811D0u) {
        ctx->pc = 0x4811D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4811CCu;
        // 0x4811d0: 0x97a20000  lhu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4811D4u;
        goto label_4811d4;
    }
    ctx->pc = 0x4811CCu;
    {
        const bool branch_taken_0x4811cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4811D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4811CCu;
        // 0x4811d0: 0x97a20000  lhu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4811cc) {
            ctx->pc = 0x48139Cu;
            goto label_48139c;
        }
    }
    ctx->pc = 0x4811D4u;
label_4811d4:
    // 0x4811d4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x4811d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_4811d8:
    // 0x4811d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4811d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4811dc:
    // 0x4811dc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x4811dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_4811e0:
    // 0x4811e0: 0x10640032  beq         $v1, $a0, . + 4 + (0x32 << 2)
label_4811e4:
    if (ctx->pc == 0x4811E4u) {
        ctx->pc = 0x4811E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4811E0u;
        // 0x4811e4: 0xa7a20000  sh          $v0, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4811E8u;
        goto label_4811e8;
    }
    ctx->pc = 0x4811E0u;
    {
        const bool branch_taken_0x4811e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x4811E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4811E0u;
        // 0x4811e4: 0xa7a20000  sh          $v0, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4811e0) {
            ctx->pc = 0x4812ACu;
            goto label_4812ac;
        }
    }
    ctx->pc = 0x4811E8u;
label_4811e8:
    // 0x4811e8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4811e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4811ec:
    // 0x4811ec: 0x3c12fffc  lui         $s2, 0xFFFC
    ctx->pc = 0x4811ecu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65532 << 16));
label_4811f0:
    // 0x4811f0: 0x2456ad18  addiu       $s6, $v0, -0x52E8
    ctx->pc = 0x4811f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_4811f4:
    // 0x4811f4: 0x3652b000  ori         $s2, $s2, 0xB000
    ctx->pc = 0x4811f4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)45056);
label_4811f8:
    // 0x4811f8: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x4811f8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
label_4811fc:
    // 0x4811fc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x4811fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_481200:
    // 0x481200: 0x3c140053  lui         $s4, 0x53
    ctx->pc = 0x481200u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)83 << 16));
label_481204:
    // 0x481204: 0x0  nop
    ctx->pc = 0x481204u;
    // NOP
label_481208:
    // 0x481208: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x481208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48120c:
    // 0x48120c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x48120cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_481210:
    // 0x481210: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x481210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_481214:
    // 0x481214: 0xc11eeae  jal         func_47BAB8
label_481218:
    if (ctx->pc == 0x481218u) {
        ctx->pc = 0x481218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481214u;
        // 0x481218: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48121Cu;
        goto label_48121c;
    }
    ctx->pc = 0x481214u;
    SET_GPR_U32(ctx, 31, 0x48121Cu);
    ctx->pc = 0x481218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x481214u;
    // 0x481218: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x481214u, 0x48121Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48121Cu;
label_48121c:
    // 0x48121c: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_481220:
    if (ctx->pc == 0x481220u) {
        ctx->pc = 0x481220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48121Cu;
        // 0x481220: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x481224u;
        goto label_481224;
    }
    ctx->pc = 0x48121Cu;
    {
        const bool branch_taken_0x48121c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x481220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48121Cu;
        // 0x481220: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48121c) {
            ctx->pc = 0x4812ECu;
            goto label_4812ec;
        }
    }
    ctx->pc = 0x481224u;
label_481224:
    // 0x481224: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x481224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_481228:
    // 0x481228: 0x2c422003  sltiu       $v0, $v0, 0x2003
    ctx->pc = 0x481228u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_48122c:
    // 0x48122c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_481230:
    if (ctx->pc == 0x481230u) {
        ctx->pc = 0x481230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48122Cu;
        // 0x481230: 0x8ec200b0  lw          $v0, 0xB0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x481234u;
        goto label_481234;
    }
    ctx->pc = 0x48122Cu;
    {
        const bool branch_taken_0x48122c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48122c) {
            ctx->pc = 0x481230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48122Cu;
            // 0x481230: 0x8ec200b0  lw          $v0, 0xB0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x481258u;
            goto label_481258;
        }
    }
    ctx->pc = 0x481234u;
label_481234:
    // 0x481234: 0x26a51488  addiu       $a1, $s5, 0x1488
    ctx->pc = 0x481234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 5256));
label_481238:
    // 0x481238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x481238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48123c:
    // 0x48123c: 0xc1223ec  jal         func_488FB0
label_481240:
    if (ctx->pc == 0x481240u) {
        ctx->pc = 0x481240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48123Cu;
        // 0x481240: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x481244u;
        goto label_481244;
    }
    ctx->pc = 0x48123Cu;
    SET_GPR_U32(ctx, 31, 0x481244u);
    ctx->pc = 0x481240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48123Cu;
    // 0x481240: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488FB0u, 0x48123Cu, 0x481244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481244u;
label_481244:
    // 0x481244: 0xc122316  jal         func_488C58
label_481248:
    if (ctx->pc == 0x481248u) {
        ctx->pc = 0x481248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481244u;
        // 0x481248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48124Cu;
        goto label_48124c;
    }
    ctx->pc = 0x481244u;
    SET_GPR_U32(ctx, 31, 0x48124Cu);
    ctx->pc = 0x481248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x481244u;
    // 0x481248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488C58u, 0x481244u, 0x48124Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48124Cu;
label_48124c:
    // 0x48124c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x48124cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_481250:
    // 0x481250: 0x1000004d  b           . + 4 + (0x4D << 2)
label_481254:
    if (ctx->pc == 0x481254u) {
        ctx->pc = 0x481254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481250u;
        // 0x481254: 0xafb30020  sw          $s3, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x481258u;
        goto label_481258;
    }
    ctx->pc = 0x481250u;
    {
        const bool branch_taken_0x481250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x481254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481250u;
        // 0x481254: 0xafb30020  sw          $s3, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x481250) {
            ctx->pc = 0x481388u;
            goto label_481388;
        }
    }
    ctx->pc = 0x481258u;
label_481258:
    // 0x481258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x481258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48125c:
    // 0x48125c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x48125cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_481260:
    // 0x481260: 0x40f809  jalr        $v0
label_481264:
    if (ctx->pc == 0x481264u) {
        ctx->pc = 0x481264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481260u;
        // 0x481264: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x481268u;
        goto label_481268;
    }
    ctx->pc = 0x481260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x481268u);
        ctx->pc = 0x481264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481260u;
        // 0x481264: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x481260u, 0x481268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x481268u;
label_481268:
    // 0x481268: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_48126c:
    if (ctx->pc == 0x48126Cu) {
        ctx->pc = 0x48126Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481268u;
        // 0x48126c: 0x8fa60038  lw          $a2, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x481270u;
        goto label_481270;
    }
    ctx->pc = 0x481268u;
    {
        const bool branch_taken_0x481268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48126Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481268u;
        // 0x48126c: 0x8fa60038  lw          $a2, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x481268) {
            ctx->pc = 0x481310u;
            goto label_481310;
        }
    }
    ctx->pc = 0x481270u;
label_481270:
    // 0x481270: 0x10c00030  beqz        $a2, . + 4 + (0x30 << 2)
label_481274:
    if (ctx->pc == 0x481274u) {
        ctx->pc = 0x481274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481270u;
        // 0x481274: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x481278u;
        goto label_481278;
    }
    ctx->pc = 0x481270u;
    {
        const bool branch_taken_0x481270 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x481274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481270u;
        // 0x481274: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x481270) {
            ctx->pc = 0x481334u;
            goto label_481334;
        }
    }
    ctx->pc = 0x481278u;
label_481278:
    // 0x481278: 0x2684ec08  addiu       $a0, $s4, -0x13F8
    ctx->pc = 0x481278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962184));
label_48127c:
    // 0x48127c: 0xc11fd22  jal         func_47F488
label_481280:
    if (ctx->pc == 0x481280u) {
        ctx->pc = 0x481280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48127Cu;
        // 0x481280: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x481284u;
        goto label_481284;
    }
    ctx->pc = 0x48127Cu;
    SET_GPR_U32(ctx, 31, 0x481284u);
    ctx->pc = 0x481280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48127Cu;
    // 0x481280: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F488u, 0x48127Cu, 0x481284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481284u;
label_481284:
    // 0x481284: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_481288:
    if (ctx->pc == 0x481288u) {
        ctx->pc = 0x481288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481284u;
        // 0x481288: 0x8fa50038  lw          $a1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48128Cu;
        goto label_48128c;
    }
    ctx->pc = 0x481284u;
    {
        const bool branch_taken_0x481284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x481288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481284u;
        // 0x481288: 0x8fa50038  lw          $a1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x481284) {
            ctx->pc = 0x481354u;
            goto label_481354;
        }
    }
    ctx->pc = 0x48128Cu;
label_48128c:
    // 0x48128c: 0xc122392  jal         func_488E48
label_481290:
    if (ctx->pc == 0x481290u) {
        ctx->pc = 0x481290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48128Cu;
        // 0x481290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x481294u;
        goto label_481294;
    }
    ctx->pc = 0x48128Cu;
    SET_GPR_U32(ctx, 31, 0x481294u);
    ctx->pc = 0x481290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48128Cu;
    // 0x481290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488E48u, 0x48128Cu, 0x481294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481294u;
label_481294:
    // 0x481294: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x481294u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_481298:
    // 0x481298: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x481298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_48129c:
    // 0x48129c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x48129cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4812a0:
    // 0x4812a0: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x4812a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_4812a4:
    // 0x4812a4: 0x1444ffd8  bne         $v0, $a0, . + 4 + (-0x28 << 2)
label_4812a8:
    if (ctx->pc == 0x4812A8u) {
        ctx->pc = 0x4812A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4812A4u;
        // 0x4812a8: 0xa7a30000  sh          $v1, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4812ACu;
        goto label_4812ac;
    }
    ctx->pc = 0x4812A4u;
    {
        const bool branch_taken_0x4812a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x4812A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4812A4u;
        // 0x4812a8: 0xa7a30000  sh          $v1, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4812a4) {
            ctx->pc = 0x481208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_481208;
        }
    }
    ctx->pc = 0x4812ACu;
label_4812ac:
    // 0x4812ac: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x4812acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_4812b0:
    // 0x4812b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4812b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4812b4:
    // 0x4812b4: 0x2484ec20  addiu       $a0, $a0, -0x13E0
    ctx->pc = 0x4812b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962208));
label_4812b8:
    // 0x4812b8: 0xc11fd22  jal         func_47F488
label_4812bc:
    if (ctx->pc == 0x4812BCu) {
        ctx->pc = 0x4812BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4812B8u;
        // 0x4812bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4812C0u;
        goto label_4812c0;
    }
    ctx->pc = 0x4812B8u;
    SET_GPR_U32(ctx, 31, 0x4812C0u);
    ctx->pc = 0x4812BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4812B8u;
    // 0x4812bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F488u, 0x4812B8u, 0x4812C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4812C0u;
label_4812c0:
    // 0x4812c0: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
label_4812c4:
    if (ctx->pc == 0x4812C4u) {
        ctx->pc = 0x4812C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4812C0u;
        // 0x4812c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4812C8u;
        goto label_4812c8;
    }
    ctx->pc = 0x4812C0u;
    {
        const bool branch_taken_0x4812c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4812C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4812C0u;
        // 0x4812c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4812c0) {
            ctx->pc = 0x4813A0u;
            goto label_4813a0;
        }
    }
    ctx->pc = 0x4812C8u;
label_4812c8:
    // 0x4812c8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x4812c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_4812cc:
    // 0x4812cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4812ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4812d0:
    // 0x4812d0: 0x24a51488  addiu       $a1, $a1, 0x1488
    ctx->pc = 0x4812d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5256));
label_4812d4:
    // 0x4812d4: 0xc1223ec  jal         func_488FB0
label_4812d8:
    if (ctx->pc == 0x4812D8u) {
        ctx->pc = 0x4812D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4812D4u;
        // 0x4812d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4812DCu;
        goto label_4812dc;
    }
    ctx->pc = 0x4812D4u;
    SET_GPR_U32(ctx, 31, 0x4812DCu);
    ctx->pc = 0x4812D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4812D4u;
    // 0x4812d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488FB0u, 0x4812D4u, 0x4812DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4812DCu;
label_4812dc:
    // 0x4812dc: 0xc122316  jal         func_488C58
label_4812e0:
    if (ctx->pc == 0x4812E0u) {
        ctx->pc = 0x4812E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4812DCu;
        // 0x4812e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4812E4u;
        goto label_4812e4;
    }
    ctx->pc = 0x4812DCu;
    SET_GPR_U32(ctx, 31, 0x4812E4u);
    ctx->pc = 0x4812E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4812DCu;
    // 0x4812e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488C58u, 0x4812DCu, 0x4812E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4812E4u;
label_4812e4:
    // 0x4812e4: 0x1000002e  b           . + 4 + (0x2E << 2)
label_4812e8:
    if (ctx->pc == 0x4812E8u) {
        ctx->pc = 0x4812E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4812E4u;
        // 0x4812e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4812ECu;
        goto label_4812ec;
    }
    ctx->pc = 0x4812E4u;
    {
        const bool branch_taken_0x4812e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4812E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4812E4u;
        // 0x4812e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4812e4) {
            ctx->pc = 0x4813A0u;
            goto label_4813a0;
        }
    }
    ctx->pc = 0x4812ECu;
label_4812ec:
    // 0x4812ec: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x4812ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_4812f0:
    // 0x4812f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4812f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4812f4:
    // 0x4812f4: 0x24a51488  addiu       $a1, $a1, 0x1488
    ctx->pc = 0x4812f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5256));
label_4812f8:
    // 0x4812f8: 0xc1223ec  jal         func_488FB0
label_4812fc:
    if (ctx->pc == 0x4812FCu) {
        ctx->pc = 0x4812FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4812F8u;
        // 0x4812fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x481300u;
        goto label_481300;
    }
    ctx->pc = 0x4812F8u;
    SET_GPR_U32(ctx, 31, 0x481300u);
    ctx->pc = 0x4812FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4812F8u;
    // 0x4812fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488FB0u, 0x4812F8u, 0x481300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481300u;
label_481300:
    // 0x481300: 0xc122316  jal         func_488C58
label_481304:
    if (ctx->pc == 0x481304u) {
        ctx->pc = 0x481304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481300u;
        // 0x481304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x481308u;
        goto label_481308;
    }
    ctx->pc = 0x481300u;
    SET_GPR_U32(ctx, 31, 0x481308u);
    ctx->pc = 0x481304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x481300u;
    // 0x481304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488C58u, 0x481300u, 0x481308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481308u;
label_481308:
    // 0x481308: 0x10000025  b           . + 4 + (0x25 << 2)
label_48130c:
    if (ctx->pc == 0x48130Cu) {
        ctx->pc = 0x48130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481308u;
        // 0x48130c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x481310u;
        goto label_481310;
    }
    ctx->pc = 0x481308u;
    {
        const bool branch_taken_0x481308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481308u;
        // 0x48130c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x481308) {
            ctx->pc = 0x4813A0u;
            goto label_4813a0;
        }
    }
    ctx->pc = 0x481310u;
label_481310:
    // 0x481310: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x481310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_481314:
    // 0x481314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x481314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_481318:
    // 0x481318: 0x24a51488  addiu       $a1, $a1, 0x1488
    ctx->pc = 0x481318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5256));
label_48131c:
    // 0x48131c: 0xc1223ec  jal         func_488FB0
label_481320:
    if (ctx->pc == 0x481320u) {
        ctx->pc = 0x481320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48131Cu;
        // 0x481320: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x481324u;
        goto label_481324;
    }
    ctx->pc = 0x48131Cu;
    SET_GPR_U32(ctx, 31, 0x481324u);
    ctx->pc = 0x481320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48131Cu;
    // 0x481320: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488FB0u, 0x48131Cu, 0x481324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481324u;
label_481324:
    // 0x481324: 0xc122316  jal         func_488C58
label_481328:
    if (ctx->pc == 0x481328u) {
        ctx->pc = 0x481328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481324u;
        // 0x481328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48132Cu;
        goto label_48132c;
    }
    ctx->pc = 0x481324u;
    SET_GPR_U32(ctx, 31, 0x48132Cu);
    ctx->pc = 0x481328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x481324u;
    // 0x481328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488C58u, 0x481324u, 0x48132Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48132Cu;
label_48132c:
    // 0x48132c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_481330:
    if (ctx->pc == 0x481330u) {
        ctx->pc = 0x481330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48132Cu;
        // 0x481330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x481334u;
        goto label_481334;
    }
    ctx->pc = 0x48132Cu;
    {
        const bool branch_taken_0x48132c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x481330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48132Cu;
        // 0x481330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48132c) {
            ctx->pc = 0x4813A0u;
            goto label_4813a0;
        }
    }
    ctx->pc = 0x481334u;
label_481334:
    // 0x481334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x481334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_481338:
    // 0x481338: 0x24a51488  addiu       $a1, $a1, 0x1488
    ctx->pc = 0x481338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5256));
label_48133c:
    // 0x48133c: 0xc1223ec  jal         func_488FB0
label_481340:
    if (ctx->pc == 0x481340u) {
        ctx->pc = 0x481340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48133Cu;
        // 0x481340: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x481344u;
        goto label_481344;
    }
    ctx->pc = 0x48133Cu;
    SET_GPR_U32(ctx, 31, 0x481344u);
    ctx->pc = 0x481340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48133Cu;
    // 0x481340: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488FB0u, 0x48133Cu, 0x481344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481344u;
label_481344:
    // 0x481344: 0xc122316  jal         func_488C58
label_481348:
    if (ctx->pc == 0x481348u) {
        ctx->pc = 0x481348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481344u;
        // 0x481348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48134Cu;
        goto label_48134c;
    }
    ctx->pc = 0x481344u;
    SET_GPR_U32(ctx, 31, 0x48134Cu);
    ctx->pc = 0x481348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x481344u;
    // 0x481348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488C58u, 0x481344u, 0x48134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48134Cu;
label_48134c:
    // 0x48134c: 0x10000014  b           . + 4 + (0x14 << 2)
label_481350:
    if (ctx->pc == 0x481350u) {
        ctx->pc = 0x481350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48134Cu;
        // 0x481350: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x481354u;
        goto label_481354;
    }
    ctx->pc = 0x48134Cu;
    {
        const bool branch_taken_0x48134c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x481350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48134Cu;
        // 0x481350: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48134c) {
            ctx->pc = 0x4813A0u;
            goto label_4813a0;
        }
    }
    ctx->pc = 0x481354u;
label_481354:
    // 0x481354: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x481354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_481358:
    // 0x481358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x481358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48135c:
    // 0x48135c: 0x24a51488  addiu       $a1, $a1, 0x1488
    ctx->pc = 0x48135cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5256));
label_481360:
    // 0x481360: 0xc1223ec  jal         func_488FB0
label_481364:
    if (ctx->pc == 0x481364u) {
        ctx->pc = 0x481364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481360u;
        // 0x481364: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x481368u;
        goto label_481368;
    }
    ctx->pc = 0x481360u;
    SET_GPR_U32(ctx, 31, 0x481368u);
    ctx->pc = 0x481364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x481360u;
    // 0x481364: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488FB0u, 0x481360u, 0x481368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481368u;
label_481368:
    // 0x481368: 0xc122316  jal         func_488C58
label_48136c:
    if (ctx->pc == 0x48136Cu) {
        ctx->pc = 0x48136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481368u;
        // 0x48136c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x481370u;
        goto label_481370;
    }
    ctx->pc = 0x481368u;
    SET_GPR_U32(ctx, 31, 0x481370u);
    ctx->pc = 0x48136Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x481368u;
    // 0x48136c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488C58u, 0x481368u, 0x481370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481370u;
label_481370:
    // 0x481370: 0x1000000b  b           . + 4 + (0xB << 2)
label_481374:
    if (ctx->pc == 0x481374u) {
        ctx->pc = 0x481374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481370u;
        // 0x481374: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x481378u;
        goto label_481378;
    }
    ctx->pc = 0x481370u;
    {
        const bool branch_taken_0x481370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x481374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481370u;
        // 0x481374: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x481370) {
            ctx->pc = 0x4813A0u;
            goto label_4813a0;
        }
    }
    ctx->pc = 0x481378u;
label_481378:
    // 0x481378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x481378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48137c:
    // 0x48137c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x48137cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_481380:
    // 0x481380: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x481380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_481384:
    // 0x481384: 0x0  nop
    ctx->pc = 0x481384u;
    // NOP
label_481388:
    // 0x481388: 0xc11eff2  jal         func_47BFC8
label_48138c:
    if (ctx->pc == 0x48138Cu) {
        ctx->pc = 0x48138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481388u;
        // 0x48138c: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x481390u;
        goto label_481390;
    }
    ctx->pc = 0x481388u;
    SET_GPR_U32(ctx, 31, 0x481390u);
    ctx->pc = 0x48138Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x481388u;
    // 0x48138c: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x481388u, 0x481390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481390u;
label_481390:
    // 0x481390: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x481390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_481394:
    // 0x481394: 0xc11f024  jal         func_47C090
label_481398:
    if (ctx->pc == 0x481398u) {
        ctx->pc = 0x481398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481394u;
        // 0x481398: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48139Cu;
        goto label_48139c;
    }
    ctx->pc = 0x481394u;
    SET_GPR_U32(ctx, 31, 0x48139Cu);
    ctx->pc = 0x481398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x481394u;
    // 0x481398: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x481394u, 0x48139Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48139Cu;
label_48139c:
    // 0x48139c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x48139cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4813a0:
    // 0x4813a0: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x4813a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_4813a4:
    // 0x4813a4: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x4813a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4813a8:
    // 0x4813a8: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x4813a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4813ac:
    // 0x4813ac: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x4813acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4813b0:
    // 0x4813b0: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x4813b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4813b4:
    // 0x4813b4: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x4813b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4813b8:
    // 0x4813b8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4813b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4813bc:
    // 0x4813bc: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x4813bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4813c0:
    // 0x4813c0: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x4813c0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4813c4:
    // 0x4813c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4813c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4813c8:
    // 0x4813c8: 0x3e00008  jr          $ra
label_4813cc:
    if (ctx->pc == 0x4813CCu) {
        ctx->pc = 0x4813CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4813C8u;
        // 0x4813cc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4813D0u;
        goto label_fallthrough_0x4813c8;
    }
    ctx->pc = 0x4813C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4813CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4813C8u;
        // 0x4813cc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4813C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4813c8:
    ctx->pc = 0x4813D0u;
}
