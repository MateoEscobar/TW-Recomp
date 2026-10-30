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

// Function: sub_004061C0
// Address: 0x4061c0 - 0x406458
void sub_004061C0_0x4061c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004061C0_0x4061c0");
#endif

    switch (ctx->pc) {
        case 0x4061c0u: goto label_4061c0;
        case 0x4061c4u: goto label_4061c4;
        case 0x4061c8u: goto label_4061c8;
        case 0x4061ccu: goto label_4061cc;
        case 0x4061d0u: goto label_4061d0;
        case 0x4061d4u: goto label_4061d4;
        case 0x4061d8u: goto label_4061d8;
        case 0x4061dcu: goto label_4061dc;
        case 0x4061e0u: goto label_4061e0;
        case 0x4061e4u: goto label_4061e4;
        case 0x4061e8u: goto label_4061e8;
        case 0x4061ecu: goto label_4061ec;
        case 0x4061f0u: goto label_4061f0;
        case 0x4061f4u: goto label_4061f4;
        case 0x4061f8u: goto label_4061f8;
        case 0x4061fcu: goto label_4061fc;
        case 0x406200u: goto label_406200;
        case 0x406204u: goto label_406204;
        case 0x406208u: goto label_406208;
        case 0x40620cu: goto label_40620c;
        case 0x406210u: goto label_406210;
        case 0x406214u: goto label_406214;
        case 0x406218u: goto label_406218;
        case 0x40621cu: goto label_40621c;
        case 0x406220u: goto label_406220;
        case 0x406224u: goto label_406224;
        case 0x406228u: goto label_406228;
        case 0x40622cu: goto label_40622c;
        case 0x406230u: goto label_406230;
        case 0x406234u: goto label_406234;
        case 0x406238u: goto label_406238;
        case 0x40623cu: goto label_40623c;
        case 0x406240u: goto label_406240;
        case 0x406244u: goto label_406244;
        case 0x406248u: goto label_406248;
        case 0x40624cu: goto label_40624c;
        case 0x406250u: goto label_406250;
        case 0x406254u: goto label_406254;
        case 0x406258u: goto label_406258;
        case 0x40625cu: goto label_40625c;
        case 0x406260u: goto label_406260;
        case 0x406264u: goto label_406264;
        case 0x406268u: goto label_406268;
        case 0x40626cu: goto label_40626c;
        case 0x406270u: goto label_406270;
        case 0x406274u: goto label_406274;
        case 0x406278u: goto label_406278;
        case 0x40627cu: goto label_40627c;
        case 0x406280u: goto label_406280;
        case 0x406284u: goto label_406284;
        case 0x406288u: goto label_406288;
        case 0x40628cu: goto label_40628c;
        case 0x406290u: goto label_406290;
        case 0x406294u: goto label_406294;
        case 0x406298u: goto label_406298;
        case 0x40629cu: goto label_40629c;
        case 0x4062a0u: goto label_4062a0;
        case 0x4062a4u: goto label_4062a4;
        case 0x4062a8u: goto label_4062a8;
        case 0x4062acu: goto label_4062ac;
        case 0x4062b0u: goto label_4062b0;
        case 0x4062b4u: goto label_4062b4;
        case 0x4062b8u: goto label_4062b8;
        case 0x4062bcu: goto label_4062bc;
        case 0x4062c0u: goto label_4062c0;
        case 0x4062c4u: goto label_4062c4;
        case 0x4062c8u: goto label_4062c8;
        case 0x4062ccu: goto label_4062cc;
        case 0x4062d0u: goto label_4062d0;
        case 0x4062d4u: goto label_4062d4;
        case 0x4062d8u: goto label_4062d8;
        case 0x4062dcu: goto label_4062dc;
        case 0x4062e0u: goto label_4062e0;
        case 0x4062e4u: goto label_4062e4;
        case 0x4062e8u: goto label_4062e8;
        case 0x4062ecu: goto label_4062ec;
        case 0x4062f0u: goto label_4062f0;
        case 0x4062f4u: goto label_4062f4;
        case 0x4062f8u: goto label_4062f8;
        case 0x4062fcu: goto label_4062fc;
        case 0x406300u: goto label_406300;
        case 0x406304u: goto label_406304;
        case 0x406308u: goto label_406308;
        case 0x40630cu: goto label_40630c;
        case 0x406310u: goto label_406310;
        case 0x406314u: goto label_406314;
        case 0x406318u: goto label_406318;
        case 0x40631cu: goto label_40631c;
        case 0x406320u: goto label_406320;
        case 0x406324u: goto label_406324;
        case 0x406328u: goto label_406328;
        case 0x40632cu: goto label_40632c;
        case 0x406330u: goto label_406330;
        case 0x406334u: goto label_406334;
        case 0x406338u: goto label_406338;
        case 0x40633cu: goto label_40633c;
        case 0x406340u: goto label_406340;
        case 0x406344u: goto label_406344;
        case 0x406348u: goto label_406348;
        case 0x40634cu: goto label_40634c;
        case 0x406350u: goto label_406350;
        case 0x406354u: goto label_406354;
        case 0x406358u: goto label_406358;
        case 0x40635cu: goto label_40635c;
        case 0x406360u: goto label_406360;
        case 0x406364u: goto label_406364;
        case 0x406368u: goto label_406368;
        case 0x40636cu: goto label_40636c;
        case 0x406370u: goto label_406370;
        case 0x406374u: goto label_406374;
        case 0x406378u: goto label_406378;
        case 0x40637cu: goto label_40637c;
        case 0x406380u: goto label_406380;
        case 0x406384u: goto label_406384;
        case 0x406388u: goto label_406388;
        case 0x40638cu: goto label_40638c;
        case 0x406390u: goto label_406390;
        case 0x406394u: goto label_406394;
        case 0x406398u: goto label_406398;
        case 0x40639cu: goto label_40639c;
        case 0x4063a0u: goto label_4063a0;
        case 0x4063a4u: goto label_4063a4;
        case 0x4063a8u: goto label_4063a8;
        case 0x4063acu: goto label_4063ac;
        case 0x4063b0u: goto label_4063b0;
        case 0x4063b4u: goto label_4063b4;
        case 0x4063b8u: goto label_4063b8;
        case 0x4063bcu: goto label_4063bc;
        case 0x4063c0u: goto label_4063c0;
        case 0x4063c4u: goto label_4063c4;
        case 0x4063c8u: goto label_4063c8;
        case 0x4063ccu: goto label_4063cc;
        case 0x4063d0u: goto label_4063d0;
        case 0x4063d4u: goto label_4063d4;
        case 0x4063d8u: goto label_4063d8;
        case 0x4063dcu: goto label_4063dc;
        case 0x4063e0u: goto label_4063e0;
        case 0x4063e4u: goto label_4063e4;
        case 0x4063e8u: goto label_4063e8;
        case 0x4063ecu: goto label_4063ec;
        case 0x4063f0u: goto label_4063f0;
        case 0x4063f4u: goto label_4063f4;
        case 0x4063f8u: goto label_4063f8;
        case 0x4063fcu: goto label_4063fc;
        case 0x406400u: goto label_406400;
        case 0x406404u: goto label_406404;
        case 0x406408u: goto label_406408;
        case 0x40640cu: goto label_40640c;
        case 0x406410u: goto label_406410;
        case 0x406414u: goto label_406414;
        case 0x406418u: goto label_406418;
        case 0x40641cu: goto label_40641c;
        case 0x406420u: goto label_406420;
        case 0x406424u: goto label_406424;
        case 0x406428u: goto label_406428;
        case 0x40642cu: goto label_40642c;
        case 0x406430u: goto label_406430;
        case 0x406434u: goto label_406434;
        case 0x406438u: goto label_406438;
        case 0x40643cu: goto label_40643c;
        case 0x406440u: goto label_406440;
        case 0x406444u: goto label_406444;
        case 0x406448u: goto label_406448;
        case 0x40644cu: goto label_40644c;
        case 0x406450u: goto label_406450;
        case 0x406454u: goto label_406454;
        default: break;
    }

    ctx->pc = 0x4061c0u;

label_4061c0:
    // 0x4061c0: 0x27bdf680  addiu       $sp, $sp, -0x980
    ctx->pc = 0x4061c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964864));
label_4061c4:
    // 0x4061c4: 0x7fb00950  sq          $s0, 0x950($sp)
    ctx->pc = 0x4061c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2384), GPR_VEC(ctx, 16));
label_4061c8:
    // 0x4061c8: 0x7fb608f0  sq          $s6, 0x8F0($sp)
    ctx->pc = 0x4061c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2288), GPR_VEC(ctx, 22));
label_4061cc:
    // 0x4061cc: 0x7fb708e0  sq          $s7, 0x8E0($sp)
    ctx->pc = 0x4061ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2272), GPR_VEC(ctx, 23));
label_4061d0:
    // 0x4061d0: 0x7fb10940  sq          $s1, 0x940($sp)
    ctx->pc = 0x4061d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2368), GPR_VEC(ctx, 17));
label_4061d4:
    // 0x4061d4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x4061d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4061d8:
    // 0x4061d8: 0x7fb20930  sq          $s2, 0x930($sp)
    ctx->pc = 0x4061d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 18));
label_4061dc:
    // 0x4061dc: 0x7fb30920  sq          $s3, 0x920($sp)
    ctx->pc = 0x4061dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2336), GPR_VEC(ctx, 19));
label_4061e0:
    // 0x4061e0: 0x7fb40910  sq          $s4, 0x910($sp)
    ctx->pc = 0x4061e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2320), GPR_VEC(ctx, 20));
label_4061e4:
    // 0x4061e4: 0x7fb50900  sq          $s5, 0x900($sp)
    ctx->pc = 0x4061e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2304), GPR_VEC(ctx, 21));
label_4061e8:
    // 0x4061e8: 0xffbf08d0  sd          $ra, 0x8D0($sp)
    ctx->pc = 0x4061e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2256), GPR_U64(ctx, 31));
label_4061ec:
    // 0x4061ec: 0xe7b60970  swc1        $f22, 0x970($sp)
    ctx->pc = 0x4061ecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2416), bits); }
label_4061f0:
    // 0x4061f0: 0xe7b50968  swc1        $f21, 0x968($sp)
    ctx->pc = 0x4061f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2408), bits); }
label_4061f4:
    // 0x4061f4: 0xe7b40960  swc1        $f20, 0x960($sp)
    ctx->pc = 0x4061f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2400), bits); }
label_4061f8:
    // 0x4061f8: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4061f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_4061fc:
    // 0x4061fc: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x4061fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_406200:
    // 0x406200: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x406200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_406204:
    // 0x406204: 0x40f809  jalr        $v0
label_406208:
    if (ctx->pc == 0x406208u) {
        ctx->pc = 0x406208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406204u;
        // 0x406208: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40620Cu;
        goto label_40620c;
    }
    ctx->pc = 0x406204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40620Cu);
        ctx->pc = 0x406208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406204u;
        // 0x406208: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x406204u, 0x40620Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40620Cu;
label_40620c:
    // 0x40620c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x40620cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_406210:
    // 0x406210: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x406210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_406214:
    // 0x406214: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x406214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_406218:
    // 0x406218: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x406218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_40621c:
    // 0x40621c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x40621cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_406220:
    // 0x406220: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x406220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_406224:
    // 0x406224: 0x0  nop
    ctx->pc = 0x406224u;
    // NOP
label_406228:
    // 0x406228: 0x0  nop
    ctx->pc = 0x406228u;
    // NOP
label_40622c:
    // 0x40622c: 0x0  nop
    ctx->pc = 0x40622cu;
    // NOP
label_406230:
    // 0x406230: 0x0  nop
    ctx->pc = 0x406230u;
    // NOP
label_406234:
    // 0x406234: 0x0  nop
    ctx->pc = 0x406234u;
    // NOP
label_406238:
    // 0x406238: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_40623c:
    if (ctx->pc == 0x40623Cu) {
        ctx->pc = 0x40623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406238u;
        // 0x40623c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406240u;
        goto label_406240;
    }
    ctx->pc = 0x406238u;
    {
        const bool branch_taken_0x406238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x40623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406238u;
        // 0x40623c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406238) {
            ctx->pc = 0x406228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_406228;
        }
    }
    ctx->pc = 0x406240u;
label_406240:
    // 0x406240: 0xc138ddc  jal         func_4E3770
label_406244:
    if (ctx->pc == 0x406244u) {
        ctx->pc = 0x406248u;
        goto label_406248;
    }
    ctx->pc = 0x406240u;
    SET_GPR_U32(ctx, 31, 0x406248u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x406240u, 0x406248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406248u;
label_406248:
    // 0x406248: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x406248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_40624c:
    // 0x40624c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x40624cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_406250:
    // 0x406250: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
label_406254:
    if (ctx->pc == 0x406254u) {
        ctx->pc = 0x406254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406250u;
        // 0x406254: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x406258u;
        goto label_406258;
    }
    ctx->pc = 0x406250u;
    {
        const bool branch_taken_0x406250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x406250) {
            ctx->pc = 0x406254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x406250u;
            // 0x406254: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x406288u;
            goto label_406288;
        }
    }
    ctx->pc = 0x406258u;
label_406258:
    // 0x406258: 0x8ec70018  lw          $a3, 0x18($s6)
    ctx->pc = 0x406258u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_40625c:
    // 0x40625c: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
label_406260:
    if (ctx->pc == 0x406260u) {
        ctx->pc = 0x406260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40625Cu;
        // 0x406260: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406264u;
        goto label_406264;
    }
    ctx->pc = 0x40625Cu;
    {
        const bool branch_taken_0x40625c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x406260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40625Cu;
        // 0x406260: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40625c) {
            ctx->pc = 0x406280u;
            goto label_406280;
        }
    }
    ctx->pc = 0x406264u;
label_406264:
    // 0x406264: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x406264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_406268:
    // 0x406268: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x406268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_40626c:
    // 0x40626c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x40626cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_406270:
    // 0x406270: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x406270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_406274:
    // 0x406274: 0x60f809  jalr        $v1
label_406278:
    if (ctx->pc == 0x406278u) {
        ctx->pc = 0x406278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406274u;
        // 0x406278: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40627Cu;
        goto label_40627c;
    }
    ctx->pc = 0x406274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40627Cu);
        ctx->pc = 0x406278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406274u;
        // 0x406278: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x406274u, 0x40627Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40627Cu;
label_40627c:
    // 0x40627c: 0xaec00018  sw          $zero, 0x18($s6)
    ctx->pc = 0x40627cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 0));
label_406280:
    // 0x406280: 0x10000066  b           . + 4 + (0x66 << 2)
label_406284:
    if (ctx->pc == 0x406284u) {
        ctx->pc = 0x406284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406280u;
        // 0x406284: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406288u;
        goto label_406288;
    }
    ctx->pc = 0x406280u;
    {
        const bool branch_taken_0x406280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x406284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406280u;
        // 0x406284: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406280) {
            ctx->pc = 0x40641Cu;
            goto label_40641c;
        }
    }
    ctx->pc = 0x406288u;
label_406288:
    // 0x406288: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_40628c:
    if (ctx->pc == 0x40628Cu) {
        ctx->pc = 0x40628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406288u;
        // 0x40628c: 0x8ec20010  lw          $v0, 0x10($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406290u;
        goto label_406290;
    }
    ctx->pc = 0x406288u;
    {
        const bool branch_taken_0x406288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x406288) {
            ctx->pc = 0x40628Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x406288u;
            // 0x40628c: 0x8ec20010  lw          $v0, 0x10($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40629Cu;
            goto label_40629c;
        }
    }
    ctx->pc = 0x406290u;
label_406290:
    // 0x406290: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x406290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_406294:
    // 0x406294: 0xaec20010  sw          $v0, 0x10($s6)
    ctx->pc = 0x406294u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 2));
label_406298:
    // 0x406298: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x406298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_40629c:
    // 0x40629c: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
label_4062a0:
    if (ctx->pc == 0x4062A0u) {
        ctx->pc = 0x4062A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40629Cu;
        // 0x4062a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4062A4u;
        goto label_4062a4;
    }
    ctx->pc = 0x40629Cu;
    {
        const bool branch_taken_0x40629c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4062A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40629Cu;
        // 0x4062a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40629c) {
            ctx->pc = 0x40641Cu;
            goto label_40641c;
        }
    }
    ctx->pc = 0x4062A4u;
label_4062a4:
    // 0x4062a4: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x4062a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_4062a8:
    // 0x4062a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4062a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4062ac:
    // 0x4062ac: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x4062acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_4062b0:
    // 0x4062b0: 0x3c013d38  lui         $at, 0x3D38
    ctx->pc = 0x4062b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15672 << 16));
label_4062b4:
    // 0x4062b4: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x4062b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_4062b8:
    // 0x4062b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x4062b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_4062bc:
    // 0x4062bc: 0x3c01bd38  lui         $at, 0xBD38
    ctx->pc = 0x4062bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48440 << 16));
label_4062c0:
    // 0x4062c0: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x4062c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_4062c4:
    // 0x4062c4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x4062c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4062c8:
    // 0x4062c8: 0xc0cd4ee  jal         func_3353B8
label_4062cc:
    if (ctx->pc == 0x4062CCu) {
        ctx->pc = 0x4062CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4062C8u;
        // 0x4062cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4062D0u;
        goto label_4062d0;
    }
    ctx->pc = 0x4062C8u;
    SET_GPR_U32(ctx, 31, 0x4062D0u);
    ctx->pc = 0x4062CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4062C8u;
    // 0x4062cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x4062C8u, 0x4062D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4062D0u;
label_4062d0:
    // 0x4062d0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x4062d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_4062d4:
    // 0x4062d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4062d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4062d8:
    // 0x4062d8: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x4062d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_4062dc:
    // 0x4062dc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x4062dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_4062e0:
    // 0x4062e0: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x4062e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4062e4:
    // 0x4062e4: 0xc0cd518  jal         func_335460
label_4062e8:
    if (ctx->pc == 0x4062E8u) {
        ctx->pc = 0x4062E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4062E4u;
        // 0x4062e8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4062ECu;
        goto label_4062ec;
    }
    ctx->pc = 0x4062E4u;
    SET_GPR_U32(ctx, 31, 0x4062ECu);
    ctx->pc = 0x4062E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4062E4u;
    // 0x4062e8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4062E4u, 0x4062ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4062ECu;
label_4062ec:
    // 0x4062ec: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x4062ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_4062f0:
    // 0x4062f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4062f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4062f4:
    // 0x4062f4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x4062f4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_4062f8:
    // 0x4062f8: 0xc0cd518  jal         func_335460
label_4062fc:
    if (ctx->pc == 0x4062FCu) {
        ctx->pc = 0x4062FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4062F8u;
        // 0x4062fc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x406300u;
        goto label_406300;
    }
    ctx->pc = 0x4062F8u;
    SET_GPR_U32(ctx, 31, 0x406300u);
    ctx->pc = 0x4062FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4062F8u;
    // 0x4062fc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4062F8u, 0x406300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406300u;
label_406300:
    // 0x406300: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x406300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_406304:
    // 0x406304: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x406304u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_406308:
    // 0x406308: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x406308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40630c:
    // 0x40630c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40630cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_406310:
    // 0x406310: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x406310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_406314:
    // 0x406314: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x406314u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_406318:
    // 0x406318: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x406318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_40631c:
    // 0x40631c: 0xc0cd518  jal         func_335460
label_406320:
    if (ctx->pc == 0x406320u) {
        ctx->pc = 0x406320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40631Cu;
        // 0x406320: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x406324u;
        goto label_406324;
    }
    ctx->pc = 0x40631Cu;
    SET_GPR_U32(ctx, 31, 0x406324u);
    ctx->pc = 0x406320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40631Cu;
    // 0x406320: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x40631Cu, 0x406324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406324u;
label_406324:
    // 0x406324: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x406324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_406328:
    // 0x406328: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x406328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40632c:
    // 0x40632c: 0x27b40430  addiu       $s4, $sp, 0x430
    ctx->pc = 0x40632cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_406330:
    // 0x406330: 0xe7a00438  swc1        $f0, 0x438($sp)
    ctx->pc = 0x406330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1080), bits); }
label_406334:
    // 0x406334: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x406334u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
label_406338:
    // 0x406338: 0xe7b60430  swc1        $f22, 0x430($sp)
    ctx->pc = 0x406338u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1072), bits); }
label_40633c:
    // 0x40633c: 0x27a40850  addiu       $a0, $sp, 0x850
    ctx->pc = 0x40633cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_406340:
    // 0x406340: 0xe7b40434  swc1        $f20, 0x434($sp)
    ctx->pc = 0x406340u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1076), bits); }
label_406344:
    // 0x406344: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x406344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_406348:
    // 0x406348: 0xe681000c  swc1        $f1, 0xC($s4)
    ctx->pc = 0x406348u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_40634c:
    // 0x40634c: 0x26527620  addiu       $s2, $s2, 0x7620
    ctx->pc = 0x40634cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 30240));
label_406350:
    // 0x406350: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x406350u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_406354:
    // 0x406354: 0xc0e90ca  jal         func_3A4328
label_406358:
    if (ctx->pc == 0x406358u) {
        ctx->pc = 0x406358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406354u;
        // 0x406358: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40635Cu;
        goto label_40635c;
    }
    ctx->pc = 0x406354u;
    SET_GPR_U32(ctx, 31, 0x40635Cu);
    ctx->pc = 0x406358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406354u;
    // 0x406358: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x406354u, 0x40635Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40635Cu;
label_40635c:
    // 0x40635c: 0x7ba20850  lq          $v0, 0x850($sp)
    ctx->pc = 0x40635cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2128)));
label_406360:
    // 0x406360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x406360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_406364:
    // 0x406364: 0x7ba30420  lq          $v1, 0x420($sp)
    ctx->pc = 0x406364u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_406368:
    // 0x406368: 0x27b00880  addiu       $s0, $sp, 0x880
    ctx->pc = 0x406368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_40636c:
    // 0x40636c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x40636cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_406370:
    // 0x406370: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x406370u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_406374:
    // 0x406374: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x406374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_406378:
    // 0x406378: 0x27b30860  addiu       $s3, $sp, 0x860
    ctx->pc = 0x406378u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
label_40637c:
    // 0x40637c: 0x7fa30860  sq          $v1, 0x860($sp)
    ctx->pc = 0x40637cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 3));
label_406380:
    // 0x406380: 0x27b10870  addiu       $s1, $sp, 0x870
    ctx->pc = 0x406380u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
label_406384:
    // 0x406384: 0x7fa20430  sq          $v0, 0x430($sp)
    ctx->pc = 0x406384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
label_406388:
    // 0x406388: 0xe7a00870  swc1        $f0, 0x870($sp)
    ctx->pc = 0x406388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2160), bits); }
label_40638c:
    // 0x40638c: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x40638cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_406390:
    // 0x406390: 0xafa20880  sw          $v0, 0x880($sp)
    ctx->pc = 0x406390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2176), GPR_U32(ctx, 2));
label_406394:
    // 0x406394: 0xc6cc001c  lwc1        $f12, 0x1C($s6)
    ctx->pc = 0x406394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_406398:
    // 0x406398: 0xc0cd518  jal         func_335460
label_40639c:
    if (ctx->pc == 0x40639Cu) {
        ctx->pc = 0x40639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406398u;
        // 0x40639c: 0xc6cd0020  lwc1        $f13, 0x20($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4063A0u;
        goto label_4063a0;
    }
    ctx->pc = 0x406398u;
    SET_GPR_U32(ctx, 31, 0x4063A0u);
    ctx->pc = 0x40639Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406398u;
    // 0x40639c: 0xc6cd0020  lwc1        $f13, 0x20($s6) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x406398u, 0x4063A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4063A0u;
label_4063a0:
    // 0x4063a0: 0xe7a00890  swc1        $f0, 0x890($sp)
    ctx->pc = 0x4063a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2192), bits); }
label_4063a4:
    // 0x4063a4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x4063a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4063a8:
    // 0x4063a8: 0x27b00440  addiu       $s0, $sp, 0x440
    ctx->pc = 0x4063a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_4063ac:
    // 0x4063ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4063acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4063b0:
    // 0x4063b0: 0x8ec20028  lw          $v0, 0x28($s6)
    ctx->pc = 0x4063b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
label_4063b4:
    // 0x4063b4: 0x27ac08c0  addiu       $t4, $sp, 0x8C0
    ctx->pc = 0x4063b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 2240));
label_4063b8:
    // 0x4063b8: 0xafa308c0  sw          $v1, 0x8C0($sp)
    ctx->pc = 0x4063b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2240), GPR_U32(ctx, 3));
label_4063bc:
    // 0x4063bc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4063bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4063c0:
    // 0x4063c0: 0x27a90890  addiu       $t1, $sp, 0x890
    ctx->pc = 0x4063c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2192));
label_4063c4:
    // 0x4063c4: 0x27aa08a0  addiu       $t2, $sp, 0x8A0
    ctx->pc = 0x4063c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 2208));
label_4063c8:
    // 0x4063c8: 0x27ab08b0  addiu       $t3, $sp, 0x8B0
    ctx->pc = 0x4063c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
label_4063cc:
    // 0x4063cc: 0xafb508b0  sw          $s5, 0x8B0($sp)
    ctx->pc = 0x4063ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2224), GPR_U32(ctx, 21));
label_4063d0:
    // 0x4063d0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4063d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4063d4:
    // 0x4063d4: 0xafa208a0  sw          $v0, 0x8A0($sp)
    ctx->pc = 0x4063d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2208), GPR_U32(ctx, 2));
label_4063d8:
    // 0x4063d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4063d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4063dc:
    // 0x4063dc: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x4063dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
label_4063e0:
    // 0x4063e0: 0xc0ea0d0  jal         func_3A8340
label_4063e4:
    if (ctx->pc == 0x4063E4u) {
        ctx->pc = 0x4063E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4063E0u;
        // 0x4063e4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4063E8u;
        goto label_4063e8;
    }
    ctx->pc = 0x4063E0u;
    SET_GPR_U32(ctx, 31, 0x4063E8u);
    ctx->pc = 0x4063E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4063E0u;
    // 0x4063e4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8340u, 0x4063E0u, 0x4063E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4063E8u;
label_4063e8:
    // 0x4063e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4063e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4063ec:
    // 0x4063ec: 0xc0f15bc  jal         func_3C56F0
label_4063f0:
    if (ctx->pc == 0x4063F0u) {
        ctx->pc = 0x4063F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4063ECu;
        // 0x4063f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4063F4u;
        goto label_4063f4;
    }
    ctx->pc = 0x4063ECu;
    SET_GPR_U32(ctx, 31, 0x4063F4u);
    ctx->pc = 0x4063F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4063ECu;
    // 0x4063f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x4063ECu, 0x4063F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4063F4u;
label_4063f4:
    // 0x4063f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4063f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4063f8:
    // 0x4063f8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4063f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4063fc:
    // 0x4063fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4063fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_406400:
    // 0x406400: 0xc0e8604  jal         func_3A1810
label_406404:
    if (ctx->pc == 0x406404u) {
        ctx->pc = 0x406404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406400u;
        // 0x406404: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406408u;
        goto label_406408;
    }
    ctx->pc = 0x406400u;
    SET_GPR_U32(ctx, 31, 0x406408u);
    ctx->pc = 0x406404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406400u;
    // 0x406404: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1810u, 0x406400u, 0x406408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406408u;
label_406408:
    // 0x406408: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x406408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_40640c:
    // 0x40640c: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x40640cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_406410:
    // 0x406410: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x406410u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_406414:
    // 0x406414: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x406414u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_406418:
    // 0x406418: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x406418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40641c:
    // 0x40641c: 0x7bb00950  lq          $s0, 0x950($sp)
    ctx->pc = 0x40641cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2384)));
label_406420:
    // 0x406420: 0x7bb10940  lq          $s1, 0x940($sp)
    ctx->pc = 0x406420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2368)));
label_406424:
    // 0x406424: 0x7bb20930  lq          $s2, 0x930($sp)
    ctx->pc = 0x406424u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2352)));
label_406428:
    // 0x406428: 0x7bb30920  lq          $s3, 0x920($sp)
    ctx->pc = 0x406428u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2336)));
label_40642c:
    // 0x40642c: 0x7bb40910  lq          $s4, 0x910($sp)
    ctx->pc = 0x40642cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2320)));
label_406430:
    // 0x406430: 0x7bb50900  lq          $s5, 0x900($sp)
    ctx->pc = 0x406430u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2304)));
label_406434:
    // 0x406434: 0x7bb608f0  lq          $s6, 0x8F0($sp)
    ctx->pc = 0x406434u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 2288)));
label_406438:
    // 0x406438: 0x7bb708e0  lq          $s7, 0x8E0($sp)
    ctx->pc = 0x406438u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2272)));
label_40643c:
    // 0x40643c: 0xdfbf08d0  ld          $ra, 0x8D0($sp)
    ctx->pc = 0x40643cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2256)));
label_406440:
    // 0x406440: 0xc7b60970  lwc1        $f22, 0x970($sp)
    ctx->pc = 0x406440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_406444:
    // 0x406444: 0xc7b50968  lwc1        $f21, 0x968($sp)
    ctx->pc = 0x406444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_406448:
    // 0x406448: 0xc7b40960  lwc1        $f20, 0x960($sp)
    ctx->pc = 0x406448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_40644c:
    // 0x40644c: 0x3e00008  jr          $ra
label_406450:
    if (ctx->pc == 0x406450u) {
        ctx->pc = 0x406450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40644Cu;
        // 0x406450: 0x27bd0980  addiu       $sp, $sp, 0x980 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406454u;
        goto label_406454;
    }
    ctx->pc = 0x40644Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x406450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40644Cu;
        // 0x406450: 0x27bd0980  addiu       $sp, $sp, 0x980 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40644Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x406454u;
label_406454:
    // 0x406454: 0x0  nop
    ctx->pc = 0x406454u;
    // NOP
    ctx->pc = 0x406458u;
}
