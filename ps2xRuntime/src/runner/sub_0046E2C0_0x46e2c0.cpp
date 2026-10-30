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

// Function: sub_0046E2C0
// Address: 0x46e2c0 - 0x46e570
void sub_0046E2C0_0x46e2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046E2C0_0x46e2c0");
#endif

    switch (ctx->pc) {
        case 0x46e2c0u: goto label_46e2c0;
        case 0x46e2c4u: goto label_46e2c4;
        case 0x46e2c8u: goto label_46e2c8;
        case 0x46e2ccu: goto label_46e2cc;
        case 0x46e2d0u: goto label_46e2d0;
        case 0x46e2d4u: goto label_46e2d4;
        case 0x46e2d8u: goto label_46e2d8;
        case 0x46e2dcu: goto label_46e2dc;
        case 0x46e2e0u: goto label_46e2e0;
        case 0x46e2e4u: goto label_46e2e4;
        case 0x46e2e8u: goto label_46e2e8;
        case 0x46e2ecu: goto label_46e2ec;
        case 0x46e2f0u: goto label_46e2f0;
        case 0x46e2f4u: goto label_46e2f4;
        case 0x46e2f8u: goto label_46e2f8;
        case 0x46e2fcu: goto label_46e2fc;
        case 0x46e300u: goto label_46e300;
        case 0x46e304u: goto label_46e304;
        case 0x46e308u: goto label_46e308;
        case 0x46e30cu: goto label_46e30c;
        case 0x46e310u: goto label_46e310;
        case 0x46e314u: goto label_46e314;
        case 0x46e318u: goto label_46e318;
        case 0x46e31cu: goto label_46e31c;
        case 0x46e320u: goto label_46e320;
        case 0x46e324u: goto label_46e324;
        case 0x46e328u: goto label_46e328;
        case 0x46e32cu: goto label_46e32c;
        case 0x46e330u: goto label_46e330;
        case 0x46e334u: goto label_46e334;
        case 0x46e338u: goto label_46e338;
        case 0x46e33cu: goto label_46e33c;
        case 0x46e340u: goto label_46e340;
        case 0x46e344u: goto label_46e344;
        case 0x46e348u: goto label_46e348;
        case 0x46e34cu: goto label_46e34c;
        case 0x46e350u: goto label_46e350;
        case 0x46e354u: goto label_46e354;
        case 0x46e358u: goto label_46e358;
        case 0x46e35cu: goto label_46e35c;
        case 0x46e360u: goto label_46e360;
        case 0x46e364u: goto label_46e364;
        case 0x46e368u: goto label_46e368;
        case 0x46e36cu: goto label_46e36c;
        case 0x46e370u: goto label_46e370;
        case 0x46e374u: goto label_46e374;
        case 0x46e378u: goto label_46e378;
        case 0x46e37cu: goto label_46e37c;
        case 0x46e380u: goto label_46e380;
        case 0x46e384u: goto label_46e384;
        case 0x46e388u: goto label_46e388;
        case 0x46e38cu: goto label_46e38c;
        case 0x46e390u: goto label_46e390;
        case 0x46e394u: goto label_46e394;
        case 0x46e398u: goto label_46e398;
        case 0x46e39cu: goto label_46e39c;
        case 0x46e3a0u: goto label_46e3a0;
        case 0x46e3a4u: goto label_46e3a4;
        case 0x46e3a8u: goto label_46e3a8;
        case 0x46e3acu: goto label_46e3ac;
        case 0x46e3b0u: goto label_46e3b0;
        case 0x46e3b4u: goto label_46e3b4;
        case 0x46e3b8u: goto label_46e3b8;
        case 0x46e3bcu: goto label_46e3bc;
        case 0x46e3c0u: goto label_46e3c0;
        case 0x46e3c4u: goto label_46e3c4;
        case 0x46e3c8u: goto label_46e3c8;
        case 0x46e3ccu: goto label_46e3cc;
        case 0x46e3d0u: goto label_46e3d0;
        case 0x46e3d4u: goto label_46e3d4;
        case 0x46e3d8u: goto label_46e3d8;
        case 0x46e3dcu: goto label_46e3dc;
        case 0x46e3e0u: goto label_46e3e0;
        case 0x46e3e4u: goto label_46e3e4;
        case 0x46e3e8u: goto label_46e3e8;
        case 0x46e3ecu: goto label_46e3ec;
        case 0x46e3f0u: goto label_46e3f0;
        case 0x46e3f4u: goto label_46e3f4;
        case 0x46e3f8u: goto label_46e3f8;
        case 0x46e3fcu: goto label_46e3fc;
        case 0x46e400u: goto label_46e400;
        case 0x46e404u: goto label_46e404;
        case 0x46e408u: goto label_46e408;
        case 0x46e40cu: goto label_46e40c;
        case 0x46e410u: goto label_46e410;
        case 0x46e414u: goto label_46e414;
        case 0x46e418u: goto label_46e418;
        case 0x46e41cu: goto label_46e41c;
        case 0x46e420u: goto label_46e420;
        case 0x46e424u: goto label_46e424;
        case 0x46e428u: goto label_46e428;
        case 0x46e42cu: goto label_46e42c;
        case 0x46e430u: goto label_46e430;
        case 0x46e434u: goto label_46e434;
        case 0x46e438u: goto label_46e438;
        case 0x46e43cu: goto label_46e43c;
        case 0x46e440u: goto label_46e440;
        case 0x46e444u: goto label_46e444;
        case 0x46e448u: goto label_46e448;
        case 0x46e44cu: goto label_46e44c;
        case 0x46e450u: goto label_46e450;
        case 0x46e454u: goto label_46e454;
        case 0x46e458u: goto label_46e458;
        case 0x46e45cu: goto label_46e45c;
        case 0x46e460u: goto label_46e460;
        case 0x46e464u: goto label_46e464;
        case 0x46e468u: goto label_46e468;
        case 0x46e46cu: goto label_46e46c;
        case 0x46e470u: goto label_46e470;
        case 0x46e474u: goto label_46e474;
        case 0x46e478u: goto label_46e478;
        case 0x46e47cu: goto label_46e47c;
        case 0x46e480u: goto label_46e480;
        case 0x46e484u: goto label_46e484;
        case 0x46e488u: goto label_46e488;
        case 0x46e48cu: goto label_46e48c;
        case 0x46e490u: goto label_46e490;
        case 0x46e494u: goto label_46e494;
        case 0x46e498u: goto label_46e498;
        case 0x46e49cu: goto label_46e49c;
        case 0x46e4a0u: goto label_46e4a0;
        case 0x46e4a4u: goto label_46e4a4;
        case 0x46e4a8u: goto label_46e4a8;
        case 0x46e4acu: goto label_46e4ac;
        case 0x46e4b0u: goto label_46e4b0;
        case 0x46e4b4u: goto label_46e4b4;
        case 0x46e4b8u: goto label_46e4b8;
        case 0x46e4bcu: goto label_46e4bc;
        case 0x46e4c0u: goto label_46e4c0;
        case 0x46e4c4u: goto label_46e4c4;
        case 0x46e4c8u: goto label_46e4c8;
        case 0x46e4ccu: goto label_46e4cc;
        case 0x46e4d0u: goto label_46e4d0;
        case 0x46e4d4u: goto label_46e4d4;
        case 0x46e4d8u: goto label_46e4d8;
        case 0x46e4dcu: goto label_46e4dc;
        case 0x46e4e0u: goto label_46e4e0;
        case 0x46e4e4u: goto label_46e4e4;
        case 0x46e4e8u: goto label_46e4e8;
        case 0x46e4ecu: goto label_46e4ec;
        case 0x46e4f0u: goto label_46e4f0;
        case 0x46e4f4u: goto label_46e4f4;
        case 0x46e4f8u: goto label_46e4f8;
        case 0x46e4fcu: goto label_46e4fc;
        case 0x46e500u: goto label_46e500;
        case 0x46e504u: goto label_46e504;
        case 0x46e508u: goto label_46e508;
        case 0x46e50cu: goto label_46e50c;
        case 0x46e510u: goto label_46e510;
        case 0x46e514u: goto label_46e514;
        case 0x46e518u: goto label_46e518;
        case 0x46e51cu: goto label_46e51c;
        case 0x46e520u: goto label_46e520;
        case 0x46e524u: goto label_46e524;
        case 0x46e528u: goto label_46e528;
        case 0x46e52cu: goto label_46e52c;
        case 0x46e530u: goto label_46e530;
        case 0x46e534u: goto label_46e534;
        case 0x46e538u: goto label_46e538;
        case 0x46e53cu: goto label_46e53c;
        case 0x46e540u: goto label_46e540;
        case 0x46e544u: goto label_46e544;
        case 0x46e548u: goto label_46e548;
        case 0x46e54cu: goto label_46e54c;
        case 0x46e550u: goto label_46e550;
        case 0x46e554u: goto label_46e554;
        case 0x46e558u: goto label_46e558;
        case 0x46e55cu: goto label_46e55c;
        case 0x46e560u: goto label_46e560;
        case 0x46e564u: goto label_46e564;
        case 0x46e568u: goto label_46e568;
        case 0x46e56cu: goto label_46e56c;
        default: break;
    }

    ctx->pc = 0x46e2c0u;

label_46e2c0:
    // 0x46e2c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x46e2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_46e2c4:
    // 0x46e2c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x46e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_46e2c8:
    // 0x46e2c8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x46e2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_46e2cc:
    // 0x46e2cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x46e2ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46e2d0:
    // 0x46e2d0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x46e2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_46e2d4:
    // 0x46e2d4: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x46e2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_46e2d8:
    // 0x46e2d8: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x46e2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_46e2dc:
    // 0x46e2dc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x46e2dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46e2e0:
    // 0x46e2e0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x46e2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_46e2e4:
    // 0x46e2e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x46e2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46e2e8:
    // 0x46e2e8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x46e2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_46e2ec:
    // 0x46e2ec: 0x3c170071  lui         $s7, 0x71
    ctx->pc = 0x46e2ecu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)113 << 16));
label_46e2f0:
    // 0x46e2f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x46e2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_46e2f4:
    // 0x46e2f4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x46e2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_46e2f8:
    // 0x46e2f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46e2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_46e2fc:
    // 0x46e2fc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_46e300:
    if (ctx->pc == 0x46E300u) {
        ctx->pc = 0x46E300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E2FCu;
        // 0x46e300: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E304u;
        goto label_46e304;
    }
    ctx->pc = 0x46E2FCu;
    {
        const bool branch_taken_0x46e2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46e2fc) {
            ctx->pc = 0x46E300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46E2FCu;
            // 0x46e300: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x46E304u;
            goto label_46e304;
        }
    }
    ctx->pc = 0x46E304u;
label_46e304:
    // 0x46e304: 0x8ec60004  lw          $a2, 0x4($s6)
    ctx->pc = 0x46e304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_46e308:
    // 0x46e308: 0xc2001b  divu        $zero, $a2, $v0
    ctx->pc = 0x46e308u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
label_46e30c:
    // 0x46e30c: 0x9812  mflo        $s3
    ctx->pc = 0x46e30cu;
    SET_GPR_U64(ctx, 19, ctx->lo);
label_46e310:
    // 0x46e310: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_46e314:
    if (ctx->pc == 0x46E314u) {
        ctx->pc = 0x46E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E310u;
        // 0x46e314: 0x8ed00000  lw          $s0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E318u;
        goto label_46e318;
    }
    ctx->pc = 0x46E310u;
    {
        const bool branch_taken_0x46e310 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E310u;
        // 0x46e314: 0x8ed00000  lw          $s0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e310) {
            ctx->pc = 0x46E33Cu;
            goto label_46e33c;
        }
    }
    ctx->pc = 0x46E318u;
label_46e318:
    // 0x46e318: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46e318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46e31c:
    // 0x46e31c: 0x0  nop
    ctx->pc = 0x46e31cu;
    // NOP
label_46e320:
    // 0x46e320: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x46e320u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_46e324:
    // 0x46e324: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x46e324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_46e328:
    // 0x46e328: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x46e328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_46e32c:
    // 0x46e32c: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x46e32cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_46e330:
    // 0x46e330: 0x0  nop
    ctx->pc = 0x46e330u;
    // NOP
label_46e334:
    // 0x46e334: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_46e338:
    if (ctx->pc == 0x46E338u) {
        ctx->pc = 0x46E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E334u;
        // 0x46e338: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E33Cu;
        goto label_46e33c;
    }
    ctx->pc = 0x46E334u;
    {
        const bool branch_taken_0x46e334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E334u;
        // 0x46e338: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e334) {
            ctx->pc = 0x46E320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46e320;
        }
    }
    ctx->pc = 0x46E33Cu;
label_46e33c:
    // 0x46e33c: 0x26f2ad18  addiu       $s2, $s7, -0x52E8
    ctx->pc = 0x46e33cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946072));
label_46e340:
    // 0x46e340: 0x2495001f  addiu       $s5, $a0, 0x1F
    ctx->pc = 0x46e340u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
label_46e344:
    // 0x46e344: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x46e344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_46e348:
    // 0x46e348: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x46e348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_46e34c:
    // 0x46e34c: 0x1520c2  srl         $a0, $s5, 3
    ctx->pc = 0x46e34cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 21), 3));
label_46e350:
    // 0x46e350: 0x40f809  jalr        $v0
label_46e354:
    if (ctx->pc == 0x46E354u) {
        ctx->pc = 0x46E354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E350u;
        // 0x46e354: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E358u;
        goto label_46e358;
    }
    ctx->pc = 0x46E350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46E358u);
        ctx->pc = 0x46E354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E350u;
        // 0x46e354: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46E350u, 0x46E358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46E358u;
label_46e358:
    // 0x46e358: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x46e358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46e35c:
    // 0x46e35c: 0x12200078  beqz        $s1, . + 4 + (0x78 << 2)
label_46e360:
    if (ctx->pc == 0x46E360u) {
        ctx->pc = 0x46E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E35Cu;
        // 0x46e360: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E364u;
        goto label_46e364;
    }
    ctx->pc = 0x46E35Cu;
    {
        const bool branch_taken_0x46e35c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E35Cu;
        // 0x46e360: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e35c) {
            ctx->pc = 0x46E540u;
            goto label_46e540;
        }
    }
    ctx->pc = 0x46E364u;
label_46e364:
    // 0x46e364: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x46e364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_46e368:
    // 0x46e368: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x46e368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_46e36c:
    // 0x46e36c: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x46e36cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_46e370:
    // 0x46e370: 0x39040  sll         $s2, $v1, 1
    ctx->pc = 0x46e370u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_46e374:
    // 0x46e374: 0x40f809  jalr        $v0
label_46e378:
    if (ctx->pc == 0x46E378u) {
        ctx->pc = 0x46E378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E374u;
        // 0x46e378: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E37Cu;
        goto label_46e37c;
    }
    ctx->pc = 0x46E374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46E37Cu);
        ctx->pc = 0x46E378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E374u;
        // 0x46e378: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46E374u, 0x46E37Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46E37Cu;
label_46e37c:
    // 0x46e37c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x46e37cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46e380:
    // 0x46e380: 0x1280006b  beqz        $s4, . + 4 + (0x6B << 2)
label_46e384:
    if (ctx->pc == 0x46E384u) {
        ctx->pc = 0x46E384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E380u;
        // 0x46e384: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E388u;
        goto label_46e388;
    }
    ctx->pc = 0x46E380u;
    {
        const bool branch_taken_0x46e380 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E380u;
        // 0x46e384: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e380) {
            ctx->pc = 0x46E530u;
            goto label_46e530;
        }
    }
    ctx->pc = 0x46E388u;
label_46e388:
    // 0x46e388: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46e388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46e38c:
    // 0x46e38c: 0xc10c190  jal         func_430640
label_46e390:
    if (ctx->pc == 0x46E390u) {
        ctx->pc = 0x46E390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E38Cu;
        // 0x46e390: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E394u;
        goto label_46e394;
    }
    ctx->pc = 0x46E38Cu;
    SET_GPR_U32(ctx, 31, 0x46E394u);
    ctx->pc = 0x46E390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46E38Cu;
    // 0x46e390: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x46E38Cu, 0x46E394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46E394u;
label_46e394:
    // 0x46e394: 0x12600062  beqz        $s3, . + 4 + (0x62 << 2)
label_46e398:
    if (ctx->pc == 0x46E398u) {
        ctx->pc = 0x46E398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E394u;
        // 0x46e398: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E39Cu;
        goto label_46e39c;
    }
    ctx->pc = 0x46E394u;
    {
        const bool branch_taken_0x46e394 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E394u;
        // 0x46e398: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e394) {
            ctx->pc = 0x46E520u;
            goto label_46e520;
        }
    }
    ctx->pc = 0x46E39Cu;
label_46e39c:
    // 0x46e39c: 0x3c0effff  lui         $t6, 0xFFFF
    ctx->pc = 0x46e39cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)65535 << 16));
label_46e3a0:
    // 0x46e3a0: 0x2a0782d  daddu       $t7, $s5, $zero
    ctx->pc = 0x46e3a0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_46e3a4:
    // 0x46e3a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x46e3a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46e3a8:
    // 0x46e3a8: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x46e3a8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
label_46e3ac:
    // 0x46e3ac: 0xf10c2  srl         $v0, $t7, 3
    ctx->pc = 0x46e3acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 15), 3));
label_46e3b0:
    // 0x46e3b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x46e3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_46e3b4:
    // 0x46e3b4: 0x104e000b  beq         $v0, $t6, . + 4 + (0xB << 2)
label_46e3b8:
    if (ctx->pc == 0x46E3B8u) {
        ctx->pc = 0x46E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E3B4u;
        // 0x46e3b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E3BCu;
        goto label_46e3bc;
    }
    ctx->pc = 0x46E3B4u;
    {
        const bool branch_taken_0x46e3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 14));
        ctx->pc = 0x46E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E3B4u;
        // 0x46e3b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e3b4) {
            ctx->pc = 0x46E3E4u;
            goto label_46e3e4;
        }
    }
    ctx->pc = 0x46E3BCu;
label_46e3bc:
    // 0x46e3bc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x46e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_46e3c0:
    // 0x46e3c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x46e3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_46e3c4:
    // 0x46e3c4: 0x0  nop
    ctx->pc = 0x46e3c4u;
    // NOP
label_46e3c8:
    // 0x46e3c8: 0xa0920000  sb          $s2, 0x0($a0)
    ctx->pc = 0x46e3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 18));
label_46e3cc:
    // 0x46e3cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x46e3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_46e3d0:
    // 0x46e3d0: 0x0  nop
    ctx->pc = 0x46e3d0u;
    // NOP
label_46e3d4:
    // 0x46e3d4: 0x0  nop
    ctx->pc = 0x46e3d4u;
    // NOP
label_46e3d8:
    // 0x46e3d8: 0x0  nop
    ctx->pc = 0x46e3d8u;
    // NOP
label_46e3dc:
    // 0x46e3dc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
label_46e3e0:
    if (ctx->pc == 0x46E3E0u) {
        ctx->pc = 0x46E3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E3DCu;
        // 0x46e3e0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E3E4u;
        goto label_46e3e4;
    }
    ctx->pc = 0x46E3DCu;
    {
        const bool branch_taken_0x46e3dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x46E3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E3DCu;
        // 0x46e3e0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e3dc) {
            ctx->pc = 0x46E3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46e3c8;
        }
    }
    ctx->pc = 0x46E3E4u;
label_46e3e4:
    // 0x46e3e4: 0x1260004b  beqz        $s3, . + 4 + (0x4B << 2)
label_46e3e8:
    if (ctx->pc == 0x46E3E8u) {
        ctx->pc = 0x46E3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E3E4u;
        // 0x46e3e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E3ECu;
        goto label_46e3ec;
    }
    ctx->pc = 0x46E3E4u;
    {
        const bool branch_taken_0x46e3e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E3E4u;
        // 0x46e3e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e3e4) {
            ctx->pc = 0x46E514u;
            goto label_46e514;
        }
    }
    ctx->pc = 0x46E3ECu;
label_46e3ec:
    // 0x46e3ec: 0x340dffff  ori         $t5, $zero, 0xFFFF
    ctx->pc = 0x46e3ecu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_46e3f0:
    // 0x46e3f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x46e3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46e3f4:
    // 0x46e3f4: 0x0  nop
    ctx->pc = 0x46e3f4u;
    // NOP
label_46e3f8:
    // 0x46e3f8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x46e3f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_46e3fc:
    // 0x46e3fc: 0x94a40002  lhu         $a0, 0x2($a1)
    ctx->pc = 0x46e3fcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_46e400:
    // 0x46e400: 0x94a60004  lhu         $a2, 0x4($a1)
    ctx->pc = 0x46e400u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_46e404:
    // 0x46e404: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x46e404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_46e408:
    // 0x46e408: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x46e408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_46e40c:
    // 0x46e40c: 0x104d003d  beq         $v0, $t5, . + 4 + (0x3D << 2)
label_46e410:
    if (ctx->pc == 0x46E410u) {
        ctx->pc = 0x46E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E40Cu;
        // 0x46e410: 0x31142  srl         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E414u;
        goto label_46e414;
    }
    ctx->pc = 0x46E40Cu;
    {
        const bool branch_taken_0x46e40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 13));
        ctx->pc = 0x46E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E40Cu;
        // 0x46e410: 0x31142  srl         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e40c) {
            ctx->pc = 0x46E504u;
            goto label_46e504;
        }
    }
    ctx->pc = 0x46E414u;
label_46e414:
    // 0x46e414: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x46e414u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46e418:
    // 0x46e418: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x46e418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46e41c:
    // 0x46e41c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x46e41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_46e420:
    // 0x46e420: 0x514821  addu        $t1, $v0, $s1
    ctx->pc = 0x46e420u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46e424:
    // 0x46e424: 0x6a4004  sllv        $t0, $t2, $v1
    ctx->pc = 0x46e424u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
label_46e428:
    // 0x46e428: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x46e428u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_46e42c:
    // 0x46e42c: 0xe81024  and         $v0, $a3, $t0
    ctx->pc = 0x46e42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
label_46e430:
    // 0x46e430: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
label_46e434:
    if (ctx->pc == 0x46E434u) {
        ctx->pc = 0x46E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E430u;
        // 0x46e434: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E438u;
        goto label_46e438;
    }
    ctx->pc = 0x46E430u;
    {
        const bool branch_taken_0x46e430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46e430) {
            ctx->pc = 0x46E434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46E430u;
            // 0x46e434: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46E508u;
            goto label_46e508;
        }
    }
    ctx->pc = 0x46E438u;
label_46e438:
    // 0x46e438: 0x41142  srl         $v0, $a0, 5
    ctx->pc = 0x46e438u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
label_46e43c:
    // 0x46e43c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x46e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46e440:
    // 0x46e440: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x46e440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_46e444:
    // 0x46e444: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x46e444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46e448:
    // 0x46e448: 0x8a2004  sllv        $a0, $t2, $a0
    ctx->pc = 0x46e448u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 4) & 0x1F));
label_46e44c:
    // 0x46e44c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x46e44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46e450:
    // 0x46e450: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x46e450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_46e454:
    // 0x46e454: 0x5460002c  bnel        $v1, $zero, . + 4 + (0x2C << 2)
label_46e458:
    if (ctx->pc == 0x46E458u) {
        ctx->pc = 0x46E458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E454u;
        // 0x46e458: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E45Cu;
        goto label_46e45c;
    }
    ctx->pc = 0x46E454u;
    {
        const bool branch_taken_0x46e454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x46e454) {
            ctx->pc = 0x46E458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46E454u;
            // 0x46e458: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46E508u;
            goto label_46e508;
        }
    }
    ctx->pc = 0x46E45Cu;
label_46e45c:
    // 0x46e45c: 0x61142  srl         $v0, $a2, 5
    ctx->pc = 0x46e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
label_46e460:
    // 0x46e460: 0x30c4001f  andi        $a0, $a2, 0x1F
    ctx->pc = 0x46e460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
label_46e464:
    // 0x46e464: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x46e464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46e468:
    // 0x46e468: 0x8a2004  sllv        $a0, $t2, $a0
    ctx->pc = 0x46e468u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 4) & 0x1F));
label_46e46c:
    // 0x46e46c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x46e46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46e470:
    // 0x46e470: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x46e470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46e474:
    // 0x46e474: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x46e474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_46e478:
    // 0x46e478: 0x54600023  bnel        $v1, $zero, . + 4 + (0x23 << 2)
label_46e47c:
    if (ctx->pc == 0x46E47Cu) {
        ctx->pc = 0x46E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E478u;
        // 0x46e47c: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E480u;
        goto label_46e480;
    }
    ctx->pc = 0x46E478u;
    {
        const bool branch_taken_0x46e478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x46e478) {
            ctx->pc = 0x46E47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46E478u;
            // 0x46e47c: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46E508u;
            goto label_46e508;
        }
    }
    ctx->pc = 0x46E480u;
label_46e480:
    // 0x46e480: 0xe81025  or          $v0, $a3, $t0
    ctx->pc = 0x46e480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_46e484:
    // 0x46e484: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x46e484u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_46e488:
    // 0x46e488: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x46e488u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_46e48c:
    // 0x46e48c: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x46e48cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_46e490:
    // 0x46e490: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x46e490u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_46e494:
    // 0x46e494: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x46e494u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_46e498:
    // 0x46e498: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x46e498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_46e49c:
    // 0x46e49c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x46e49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_46e4a0:
    // 0x46e4a0: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x46e4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
label_46e4a4:
    // 0x46e4a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x46e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46e4a8:
    // 0x46e4a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x46e4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_46e4ac:
    // 0x46e4ac: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x46e4acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_46e4b0:
    // 0x46e4b0: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x46e4b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_46e4b4:
    // 0x46e4b4: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x46e4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_46e4b8:
    // 0x46e4b8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x46e4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_46e4bc:
    // 0x46e4bc: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x46e4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_46e4c0:
    // 0x46e4c0: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x46e4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_46e4c4:
    // 0x46e4c4: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x46e4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
label_46e4c8:
    // 0x46e4c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x46e4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46e4cc:
    // 0x46e4cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x46e4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_46e4d0:
    // 0x46e4d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x46e4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_46e4d4:
    // 0x46e4d4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x46e4d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_46e4d8:
    // 0x46e4d8: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x46e4d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_46e4dc:
    // 0x46e4dc: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x46e4dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_46e4e0:
    // 0x46e4e0: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x46e4e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_46e4e4:
    // 0x46e4e4: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x46e4e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_46e4e8:
    // 0x46e4e8: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x46e4e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_46e4ec:
    // 0x46e4ec: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x46e4ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_46e4f0:
    // 0x46e4f0: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x46e4f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_46e4f4:
    // 0x46e4f4: 0xa4ad0004  sh          $t5, 0x4($a1)
    ctx->pc = 0x46e4f4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 13));
label_46e4f8:
    // 0x46e4f8: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x46e4f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_46e4fc:
    // 0x46e4fc: 0xa4ad0002  sh          $t5, 0x2($a1)
    ctx->pc = 0x46e4fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 13));
label_46e500:
    // 0x46e500: 0xa4ad0000  sh          $t5, 0x0($a1)
    ctx->pc = 0x46e500u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 13));
label_46e504:
    // 0x46e504: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x46e504u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_46e508:
    // 0x46e508: 0x173102b  sltu        $v0, $t3, $s3
    ctx->pc = 0x46e508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_46e50c:
    // 0x46e50c: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
label_46e510:
    if (ctx->pc == 0x46E510u) {
        ctx->pc = 0x46E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E50Cu;
        // 0x46e510: 0x24a50006  addiu       $a1, $a1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E514u;
        goto label_46e514;
    }
    ctx->pc = 0x46E50Cu;
    {
        const bool branch_taken_0x46e50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E50Cu;
        // 0x46e510: 0x24a50006  addiu       $a1, $a1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e50c) {
            ctx->pc = 0x46E3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46e3f8;
        }
    }
    ctx->pc = 0x46E514u;
label_46e514:
    // 0x46e514: 0x193102b  sltu        $v0, $t4, $s3
    ctx->pc = 0x46e514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_46e518:
    // 0x46e518: 0x1440ffa5  bnez        $v0, . + 4 + (-0x5B << 2)
label_46e51c:
    if (ctx->pc == 0x46E51Cu) {
        ctx->pc = 0x46E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E518u;
        // 0x46e51c: 0xf10c2  srl         $v0, $t7, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 15), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E520u;
        goto label_46e520;
    }
    ctx->pc = 0x46E518u;
    {
        const bool branch_taken_0x46e518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E518u;
        // 0x46e51c: 0xf10c2  srl         $v0, $t7, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 15), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e518) {
            ctx->pc = 0x46E3B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46e3b0;
        }
    }
    ctx->pc = 0x46E520u;
label_46e520:
    // 0x46e520: 0x26e3ad18  addiu       $v1, $s7, -0x52E8
    ctx->pc = 0x46e520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946072));
label_46e524:
    // 0x46e524: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x46e524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_46e528:
    // 0x46e528: 0x40f809  jalr        $v0
label_46e52c:
    if (ctx->pc == 0x46E52Cu) {
        ctx->pc = 0x46E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E528u;
        // 0x46e52c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E530u;
        goto label_46e530;
    }
    ctx->pc = 0x46E528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46E530u);
        ctx->pc = 0x46E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E528u;
        // 0x46e52c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46E528u, 0x46E530u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46E530u;
label_46e530:
    // 0x46e530: 0x26e3ad18  addiu       $v1, $s7, -0x52E8
    ctx->pc = 0x46e530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946072));
label_46e534:
    // 0x46e534: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x46e534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_46e538:
    // 0x46e538: 0x40f809  jalr        $v0
label_46e53c:
    if (ctx->pc == 0x46E53Cu) {
        ctx->pc = 0x46E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E538u;
        // 0x46e53c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E540u;
        goto label_46e540;
    }
    ctx->pc = 0x46E538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46E540u);
        ctx->pc = 0x46E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E538u;
        // 0x46e53c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46E538u, 0x46E540u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46E540u;
label_46e540:
    // 0x46e540: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x46e540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_46e544:
    // 0x46e544: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x46e544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_46e548:
    // 0x46e548: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x46e548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_46e54c:
    // 0x46e54c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x46e54cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_46e550:
    // 0x46e550: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x46e550u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_46e554:
    // 0x46e554: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x46e554u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46e558:
    // 0x46e558: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x46e558u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46e55c:
    // 0x46e55c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x46e55cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46e560:
    // 0x46e560: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x46e560u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46e564:
    // 0x46e564: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46e564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_46e568:
    // 0x46e568: 0x3e00008  jr          $ra
label_46e56c:
    if (ctx->pc == 0x46E56Cu) {
        ctx->pc = 0x46E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E568u;
        // 0x46e56c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E570u;
        goto label_fallthrough_0x46e568;
    }
    ctx->pc = 0x46E568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E568u;
        // 0x46e56c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46E568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x46e568:
    ctx->pc = 0x46E570u;
}
