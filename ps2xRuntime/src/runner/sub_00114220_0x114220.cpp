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

// Function: sub_00114220
// Address: 0x114220 - 0x114528
void sub_00114220_0x114220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114220_0x114220");
#endif

    switch (ctx->pc) {
        case 0x114220u: goto label_114220;
        case 0x114224u: goto label_114224;
        case 0x114228u: goto label_114228;
        case 0x11422cu: goto label_11422c;
        case 0x114230u: goto label_114230;
        case 0x114234u: goto label_114234;
        case 0x114238u: goto label_114238;
        case 0x11423cu: goto label_11423c;
        case 0x114240u: goto label_114240;
        case 0x114244u: goto label_114244;
        case 0x114248u: goto label_114248;
        case 0x11424cu: goto label_11424c;
        case 0x114250u: goto label_114250;
        case 0x114254u: goto label_114254;
        case 0x114258u: goto label_114258;
        case 0x11425cu: goto label_11425c;
        case 0x114260u: goto label_114260;
        case 0x114264u: goto label_114264;
        case 0x114268u: goto label_114268;
        case 0x11426cu: goto label_11426c;
        case 0x114270u: goto label_114270;
        case 0x114274u: goto label_114274;
        case 0x114278u: goto label_114278;
        case 0x11427cu: goto label_11427c;
        case 0x114280u: goto label_114280;
        case 0x114284u: goto label_114284;
        case 0x114288u: goto label_114288;
        case 0x11428cu: goto label_11428c;
        case 0x114290u: goto label_114290;
        case 0x114294u: goto label_114294;
        case 0x114298u: goto label_114298;
        case 0x11429cu: goto label_11429c;
        case 0x1142a0u: goto label_1142a0;
        case 0x1142a4u: goto label_1142a4;
        case 0x1142a8u: goto label_1142a8;
        case 0x1142acu: goto label_1142ac;
        case 0x1142b0u: goto label_1142b0;
        case 0x1142b4u: goto label_1142b4;
        case 0x1142b8u: goto label_1142b8;
        case 0x1142bcu: goto label_1142bc;
        case 0x1142c0u: goto label_1142c0;
        case 0x1142c4u: goto label_1142c4;
        case 0x1142c8u: goto label_1142c8;
        case 0x1142ccu: goto label_1142cc;
        case 0x1142d0u: goto label_1142d0;
        case 0x1142d4u: goto label_1142d4;
        case 0x1142d8u: goto label_1142d8;
        case 0x1142dcu: goto label_1142dc;
        case 0x1142e0u: goto label_1142e0;
        case 0x1142e4u: goto label_1142e4;
        case 0x1142e8u: goto label_1142e8;
        case 0x1142ecu: goto label_1142ec;
        case 0x1142f0u: goto label_1142f0;
        case 0x1142f4u: goto label_1142f4;
        case 0x1142f8u: goto label_1142f8;
        case 0x1142fcu: goto label_1142fc;
        case 0x114300u: goto label_114300;
        case 0x114304u: goto label_114304;
        case 0x114308u: goto label_114308;
        case 0x11430cu: goto label_11430c;
        case 0x114310u: goto label_114310;
        case 0x114314u: goto label_114314;
        case 0x114318u: goto label_114318;
        case 0x11431cu: goto label_11431c;
        case 0x114320u: goto label_114320;
        case 0x114324u: goto label_114324;
        case 0x114328u: goto label_114328;
        case 0x11432cu: goto label_11432c;
        case 0x114330u: goto label_114330;
        case 0x114334u: goto label_114334;
        case 0x114338u: goto label_114338;
        case 0x11433cu: goto label_11433c;
        case 0x114340u: goto label_114340;
        case 0x114344u: goto label_114344;
        case 0x114348u: goto label_114348;
        case 0x11434cu: goto label_11434c;
        case 0x114350u: goto label_114350;
        case 0x114354u: goto label_114354;
        case 0x114358u: goto label_114358;
        case 0x11435cu: goto label_11435c;
        case 0x114360u: goto label_114360;
        case 0x114364u: goto label_114364;
        case 0x114368u: goto label_114368;
        case 0x11436cu: goto label_11436c;
        case 0x114370u: goto label_114370;
        case 0x114374u: goto label_114374;
        case 0x114378u: goto label_114378;
        case 0x11437cu: goto label_11437c;
        case 0x114380u: goto label_114380;
        case 0x114384u: goto label_114384;
        case 0x114388u: goto label_114388;
        case 0x11438cu: goto label_11438c;
        case 0x114390u: goto label_114390;
        case 0x114394u: goto label_114394;
        case 0x114398u: goto label_114398;
        case 0x11439cu: goto label_11439c;
        case 0x1143a0u: goto label_1143a0;
        case 0x1143a4u: goto label_1143a4;
        case 0x1143a8u: goto label_1143a8;
        case 0x1143acu: goto label_1143ac;
        case 0x1143b0u: goto label_1143b0;
        case 0x1143b4u: goto label_1143b4;
        case 0x1143b8u: goto label_1143b8;
        case 0x1143bcu: goto label_1143bc;
        case 0x1143c0u: goto label_1143c0;
        case 0x1143c4u: goto label_1143c4;
        case 0x1143c8u: goto label_1143c8;
        case 0x1143ccu: goto label_1143cc;
        case 0x1143d0u: goto label_1143d0;
        case 0x1143d4u: goto label_1143d4;
        case 0x1143d8u: goto label_1143d8;
        case 0x1143dcu: goto label_1143dc;
        case 0x1143e0u: goto label_1143e0;
        case 0x1143e4u: goto label_1143e4;
        case 0x1143e8u: goto label_1143e8;
        case 0x1143ecu: goto label_1143ec;
        case 0x1143f0u: goto label_1143f0;
        case 0x1143f4u: goto label_1143f4;
        case 0x1143f8u: goto label_1143f8;
        case 0x1143fcu: goto label_1143fc;
        case 0x114400u: goto label_114400;
        case 0x114404u: goto label_114404;
        case 0x114408u: goto label_114408;
        case 0x11440cu: goto label_11440c;
        case 0x114410u: goto label_114410;
        case 0x114414u: goto label_114414;
        case 0x114418u: goto label_114418;
        case 0x11441cu: goto label_11441c;
        case 0x114420u: goto label_114420;
        case 0x114424u: goto label_114424;
        case 0x114428u: goto label_114428;
        case 0x11442cu: goto label_11442c;
        case 0x114430u: goto label_114430;
        case 0x114434u: goto label_114434;
        case 0x114438u: goto label_114438;
        case 0x11443cu: goto label_11443c;
        case 0x114440u: goto label_114440;
        case 0x114444u: goto label_114444;
        case 0x114448u: goto label_114448;
        case 0x11444cu: goto label_11444c;
        case 0x114450u: goto label_114450;
        case 0x114454u: goto label_114454;
        case 0x114458u: goto label_114458;
        case 0x11445cu: goto label_11445c;
        case 0x114460u: goto label_114460;
        case 0x114464u: goto label_114464;
        case 0x114468u: goto label_114468;
        case 0x11446cu: goto label_11446c;
        case 0x114470u: goto label_114470;
        case 0x114474u: goto label_114474;
        case 0x114478u: goto label_114478;
        case 0x11447cu: goto label_11447c;
        case 0x114480u: goto label_114480;
        case 0x114484u: goto label_114484;
        case 0x114488u: goto label_114488;
        case 0x11448cu: goto label_11448c;
        case 0x114490u: goto label_114490;
        case 0x114494u: goto label_114494;
        case 0x114498u: goto label_114498;
        case 0x11449cu: goto label_11449c;
        case 0x1144a0u: goto label_1144a0;
        case 0x1144a4u: goto label_1144a4;
        case 0x1144a8u: goto label_1144a8;
        case 0x1144acu: goto label_1144ac;
        case 0x1144b0u: goto label_1144b0;
        case 0x1144b4u: goto label_1144b4;
        case 0x1144b8u: goto label_1144b8;
        case 0x1144bcu: goto label_1144bc;
        case 0x1144c0u: goto label_1144c0;
        case 0x1144c4u: goto label_1144c4;
        case 0x1144c8u: goto label_1144c8;
        case 0x1144ccu: goto label_1144cc;
        case 0x1144d0u: goto label_1144d0;
        case 0x1144d4u: goto label_1144d4;
        case 0x1144d8u: goto label_1144d8;
        case 0x1144dcu: goto label_1144dc;
        case 0x1144e0u: goto label_1144e0;
        case 0x1144e4u: goto label_1144e4;
        case 0x1144e8u: goto label_1144e8;
        case 0x1144ecu: goto label_1144ec;
        case 0x1144f0u: goto label_1144f0;
        case 0x1144f4u: goto label_1144f4;
        case 0x1144f8u: goto label_1144f8;
        case 0x1144fcu: goto label_1144fc;
        case 0x114500u: goto label_114500;
        case 0x114504u: goto label_114504;
        case 0x114508u: goto label_114508;
        case 0x11450cu: goto label_11450c;
        case 0x114510u: goto label_114510;
        case 0x114514u: goto label_114514;
        case 0x114518u: goto label_114518;
        case 0x11451cu: goto label_11451c;
        case 0x114520u: goto label_114520;
        case 0x114524u: goto label_114524;
        default: break;
    }

    ctx->pc = 0x114220u;

label_114220:
    // 0x114220: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x114220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_114224:
    // 0x114224: 0x24020bb8  addiu       $v0, $zero, 0xBB8
    ctx->pc = 0x114224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
label_114228:
    // 0x114228: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x114228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_11422c:
    // 0x11422c: 0x24062ee0  addiu       $a2, $zero, 0x2EE0
    ctx->pc = 0x11422cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12000));
label_114230:
    // 0x114230: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x114230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_114234:
    // 0x114234: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x114234u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_114238:
    // 0x114238: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x114238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_11423c:
    // 0x11423c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x11423cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_114240:
    // 0x114240: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x114240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_114244:
    // 0x114244: 0x3c100054  lui         $s0, 0x54
    ctx->pc = 0x114244u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)84 << 16));
label_114248:
    // 0x114248: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x114248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_11424c:
    // 0x11424c: 0x3c110054  lui         $s1, 0x54
    ctx->pc = 0x11424cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)84 << 16));
label_114250:
    // 0x114250: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x114250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_114254:
    // 0x114254: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x114254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_114258:
    // 0x114258: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x114258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_11425c:
    // 0x11425c: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x11425cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_114260:
    // 0x114260: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x114260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_114264:
    // 0x114264: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x114264u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114268:
    // 0x114268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11426c:
    // 0x11426c: 0x26317cf0  addiu       $s1, $s1, 0x7CF0
    ctx->pc = 0x11426cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 31984));
label_114270:
    // 0x114270: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x114270u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_114274:
    // 0x114274: 0x26107cc8  addiu       $s0, $s0, 0x7CC8
    ctx->pc = 0x114274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31944));
label_114278:
    // 0x114278: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x114278u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_11427c:
    // 0x11427c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11427cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114280:
    // 0x114280: 0x8e4927e4  lw          $t1, 0x27E4($s2)
    ctx->pc = 0x114280u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_114284:
    // 0x114284: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x114284u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_114288:
    // 0x114288: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x114288u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11428c:
    // 0x11428c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11428cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114290:
    // 0x114290: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x114290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_114294:
    // 0x114294: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x114294u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_114298:
    // 0x114298: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x114298u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_11429c:
    // 0x11429c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x11429cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1142a0:
    // 0x1142a0: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x1142a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_1142a4:
    // 0x1142a4: 0x40f809  jalr        $v0
label_1142a8:
    if (ctx->pc == 0x1142A8u) {
        ctx->pc = 0x1142A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142A4u;
        // 0x1142a8: 0x24090039  addiu       $t1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1142ACu;
        goto label_1142ac;
    }
    ctx->pc = 0x1142A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1142ACu);
        ctx->pc = 0x1142A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142A4u;
        // 0x1142a8: 0x24090039  addiu       $t1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1142A4u, 0x1142ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1142ACu;
label_1142ac:
    // 0x1142ac: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1142acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1142b0:
    // 0x1142b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1142b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1142b4:
    // 0x1142b4: 0x8e4c27e4  lw          $t4, 0x27E4($s2)
    ctx->pc = 0x1142b4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_1142b8:
    // 0x1142b8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1142b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1142bc:
    // 0x1142bc: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x1142bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1142c0:
    // 0x1142c0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1142c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1142c4:
    // 0x1142c4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1142c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1142c8:
    // 0x1142c8: 0x2409003a  addiu       $t1, $zero, 0x3A
    ctx->pc = 0x1142c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_1142cc:
    // 0x1142cc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1142ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1142d0:
    // 0x1142d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1142d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1142d4:
    // 0x1142d4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1142d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1142d8:
    // 0x1142d8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1142d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1142dc:
    // 0x1142dc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1142dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1142e0:
    // 0x1142e0: 0x40f809  jalr        $v0
label_1142e4:
    if (ctx->pc == 0x1142E4u) {
        ctx->pc = 0x1142E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142E0u;
        // 0x1142e4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1142E8u;
        goto label_1142e8;
    }
    ctx->pc = 0x1142E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1142E8u);
        ctx->pc = 0x1142E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142E0u;
        // 0x1142e4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1142E0u, 0x1142E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1142E8u;
label_1142e8:
    // 0x1142e8: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1142e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1142ec:
    // 0x1142ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1142ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1142f0:
    // 0x1142f0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1142f4:
    if (ctx->pc == 0x1142F4u) {
        ctx->pc = 0x1142F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142F0u;
        // 0x1142f4: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1142F8u;
        goto label_1142f8;
    }
    ctx->pc = 0x1142F0u;
    {
        const bool branch_taken_0x1142f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1142F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142F0u;
        // 0x1142f4: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1142f0) {
            ctx->pc = 0x114328u;
            goto label_114328;
        }
    }
    ctx->pc = 0x1142F8u;
label_1142f8:
    // 0x1142f8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1142f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1142fc:
    // 0x1142fc: 0x0  nop
    ctx->pc = 0x1142fcu;
    // NOP
label_114300:
    // 0x114300: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x114300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_114304:
    // 0x114304: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x114304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_114308:
    // 0x114308: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x114308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_11430c:
    // 0x11430c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x11430cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_114310:
    // 0x114310: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x114310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_114314:
    // 0x114314: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x114314u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_114318:
    // 0x114318: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x114318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_11431c:
    // 0x11431c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x11431cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_114320:
    // 0x114320: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_114324:
    if (ctx->pc == 0x114324u) {
        ctx->pc = 0x114324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114320u;
        // 0x114324: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114328u;
        goto label_114328;
    }
    ctx->pc = 0x114320u;
    {
        const bool branch_taken_0x114320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114320) {
            ctx->pc = 0x114324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114320u;
            // 0x114324: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114300;
        }
    }
    ctx->pc = 0x114328u;
label_114328:
    // 0x114328: 0x26720010  addiu       $s2, $s3, 0x10
    ctx->pc = 0x114328u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_11432c:
    // 0x11432c: 0x240204b0  addiu       $v0, $zero, 0x4B0
    ctx->pc = 0x11432cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
label_114330:
    // 0x114330: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x114330u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_114334:
    // 0x114334: 0x26f07cf0  addiu       $s0, $s7, 0x7CF0
    ctx->pc = 0x114334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 31984));
label_114338:
    // 0x114338: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x114338u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_11433c:
    // 0x11433c: 0x26d17cc8  addiu       $s1, $s6, 0x7CC8
    ctx->pc = 0x11433cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 31944));
label_114340:
    // 0x114340: 0x8eac27e4  lw          $t4, 0x27E4($s5)
    ctx->pc = 0x114340u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_114344:
    // 0x114344: 0x34068340  ori         $a2, $zero, 0x8340
    ctx->pc = 0x114344u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33600);
label_114348:
    // 0x114348: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x114348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11434c:
    // 0x11434c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x11434cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_114350:
    // 0x114350: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x114350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_114354:
    // 0x114354: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x114354u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114358:
    // 0x114358: 0x24090039  addiu       $t1, $zero, 0x39
    ctx->pc = 0x114358u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_11435c:
    // 0x11435c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11435cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114360:
    // 0x114360: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x114360u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_114364:
    // 0x114364: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x114364u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114368:
    // 0x114368: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x114368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_11436c:
    // 0x11436c: 0x26740020  addiu       $s4, $s3, 0x20
    ctx->pc = 0x11436cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_114370:
    // 0x114370: 0x40f809  jalr        $v0
label_114374:
    if (ctx->pc == 0x114374u) {
        ctx->pc = 0x114374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114370u;
        // 0x114374: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114378u;
        goto label_114378;
    }
    ctx->pc = 0x114370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x114378u);
        ctx->pc = 0x114374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114370u;
        // 0x114374: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114370u, 0x114378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114378u;
label_114378:
    // 0x114378: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x114378u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_11437c:
    // 0x11437c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11437cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_114380:
    // 0x114380: 0x8eac27e4  lw          $t4, 0x27E4($s5)
    ctx->pc = 0x114380u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_114384:
    // 0x114384: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x114384u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114388:
    // 0x114388: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x114388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_11438c:
    // 0x11438c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x11438cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_114390:
    // 0x114390: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x114390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_114394:
    // 0x114394: 0x2409003a  addiu       $t1, $zero, 0x3A
    ctx->pc = 0x114394u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_114398:
    // 0x114398: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x114398u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_11439c:
    // 0x11439c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11439cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1143a0:
    // 0x1143a0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1143a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1143a4:
    // 0x1143a4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1143a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1143a8:
    // 0x1143a8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1143a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1143ac:
    // 0x1143ac: 0x40f809  jalr        $v0
label_1143b0:
    if (ctx->pc == 0x1143B0u) {
        ctx->pc = 0x1143B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143ACu;
        // 0x1143b0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1143B4u;
        goto label_1143b4;
    }
    ctx->pc = 0x1143ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1143B4u);
        ctx->pc = 0x1143B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143ACu;
        // 0x1143b0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1143ACu, 0x1143B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1143B4u;
label_1143b4:
    // 0x1143b4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1143b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1143b8:
    // 0x1143b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1143b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1143bc:
    // 0x1143bc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1143c0:
    if (ctx->pc == 0x1143C0u) {
        ctx->pc = 0x1143C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143BCu;
        // 0x1143c0: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1143C4u;
        goto label_1143c4;
    }
    ctx->pc = 0x1143BCu;
    {
        const bool branch_taken_0x1143bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1143C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143BCu;
        // 0x1143c0: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1143bc) {
            ctx->pc = 0x1143F4u;
            goto label_1143f4;
        }
    }
    ctx->pc = 0x1143C4u;
label_1143c4:
    // 0x1143c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1143c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1143c8:
    // 0x1143c8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1143c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1143cc:
    // 0x1143cc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1143ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1143d0:
    // 0x1143d0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1143d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1143d4:
    // 0x1143d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1143d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1143d8:
    // 0x1143d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1143d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1143dc:
    // 0x1143dc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1143dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1143e0:
    // 0x1143e0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1143e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1143e4:
    // 0x1143e4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1143e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1143e8:
    // 0x1143e8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1143e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1143ec:
    // 0x1143ec: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1143f0:
    if (ctx->pc == 0x1143F0u) {
        ctx->pc = 0x1143F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143ECu;
        // 0x1143f0: 0x24c6001c  addiu       $a2, $a2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1143F4u;
        goto label_1143f4;
    }
    ctx->pc = 0x1143ECu;
    {
        const bool branch_taken_0x1143ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1143F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143ECu;
        // 0x1143f0: 0x24c6001c  addiu       $a2, $a2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1143ec) {
            ctx->pc = 0x1143C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1143c8;
        }
    }
    ctx->pc = 0x1143F4u;
label_1143f4:
    // 0x1143f4: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x1143f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_1143f8:
    // 0x1143f8: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x1143f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
label_1143fc:
    // 0x1143fc: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x1143fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_114400:
    // 0x114400: 0x26f07cf0  addiu       $s0, $s7, 0x7CF0
    ctx->pc = 0x114400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 31984));
label_114404:
    // 0x114404: 0x8eac27e4  lw          $t4, 0x27E4($s5)
    ctx->pc = 0x114404u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_114408:
    // 0x114408: 0x26d17cc8  addiu       $s1, $s6, 0x7CC8
    ctx->pc = 0x114408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 31944));
label_11440c:
    // 0x11440c: 0x24061068  addiu       $a2, $zero, 0x1068
    ctx->pc = 0x11440cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4200));
label_114410:
    // 0x114410: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x114410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_114414:
    // 0x114414: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x114414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_114418:
    // 0x114418: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x114418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_11441c:
    // 0x11441c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x11441cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114420:
    // 0x114420: 0x24090039  addiu       $t1, $zero, 0x39
    ctx->pc = 0x114420u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_114424:
    // 0x114424: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x114424u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_114428:
    // 0x114428: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x114428u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11442c:
    // 0x11442c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x11442cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_114430:
    // 0x114430: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x114430u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114434:
    // 0x114434: 0x40f809  jalr        $v0
label_114438:
    if (ctx->pc == 0x114438u) {
        ctx->pc = 0x114438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114434u;
        // 0x114438: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11443Cu;
        goto label_11443c;
    }
    ctx->pc = 0x114434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11443Cu);
        ctx->pc = 0x114438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114434u;
        // 0x114438: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114434u, 0x11443Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11443Cu;
label_11443c:
    // 0x11443c: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x11443cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
label_114440:
    // 0x114440: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x114440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_114444:
    // 0x114444: 0x8eac27e4  lw          $t4, 0x27E4($s5)
    ctx->pc = 0x114444u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_114448:
    // 0x114448: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x114448u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11444c:
    // 0x11444c: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x11444cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_114450:
    // 0x114450: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x114450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_114454:
    // 0x114454: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x114454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_114458:
    // 0x114458: 0x2409003a  addiu       $t1, $zero, 0x3A
    ctx->pc = 0x114458u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_11445c:
    // 0x11445c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x11445cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_114460:
    // 0x114460: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x114460u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114464:
    // 0x114464: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x114464u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_114468:
    // 0x114468: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x114468u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11446c:
    // 0x11446c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x11446cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_114470:
    // 0x114470: 0x40f809  jalr        $v0
label_114474:
    if (ctx->pc == 0x114474u) {
        ctx->pc = 0x114474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114470u;
        // 0x114474: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114478u;
        goto label_114478;
    }
    ctx->pc = 0x114470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x114478u);
        ctx->pc = 0x114474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114470u;
        // 0x114474: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114470u, 0x114478u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114478u;
label_114478:
    // 0x114478: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x114478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_11447c:
    // 0x11447c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11447cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114480:
    // 0x114480: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_114484:
    if (ctx->pc == 0x114484u) {
        ctx->pc = 0x114484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114480u;
        // 0x114484: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114488u;
        goto label_114488;
    }
    ctx->pc = 0x114480u;
    {
        const bool branch_taken_0x114480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114480u;
        // 0x114484: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114480) {
            ctx->pc = 0x1144BCu;
            goto label_1144bc;
        }
    }
    ctx->pc = 0x114488u;
label_114488:
    // 0x114488: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x114488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11448c:
    // 0x11448c: 0x0  nop
    ctx->pc = 0x11448cu;
    // NOP
label_114490:
    // 0x114490: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x114490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_114494:
    // 0x114494: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x114494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_114498:
    // 0x114498: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x114498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_11449c:
    // 0x11449c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11449cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1144a0:
    // 0x1144a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1144a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1144a4:
    // 0x1144a4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1144a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1144a8:
    // 0x1144a8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1144a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1144ac:
    // 0x1144ac: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1144acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1144b0:
    // 0x1144b0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1144b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1144b4:
    // 0x1144b4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1144b8:
    if (ctx->pc == 0x1144B8u) {
        ctx->pc = 0x1144B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144B4u;
        // 0x1144b8: 0x24c6001c  addiu       $a2, $a2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1144BCu;
        goto label_1144bc;
    }
    ctx->pc = 0x1144B4u;
    {
        const bool branch_taken_0x1144b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1144B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144B4u;
        // 0x1144b8: 0x24c6001c  addiu       $a2, $a2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1144b4) {
            ctx->pc = 0x114490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114490;
        }
    }
    ctx->pc = 0x1144BCu;
label_1144bc:
    // 0x1144bc: 0xc04570c  jal         func_115C30
label_1144c0:
    if (ctx->pc == 0x1144C0u) {
        ctx->pc = 0x1144C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144BCu;
        // 0x1144c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1144C4u;
        goto label_1144c4;
    }
    ctx->pc = 0x1144BCu;
    SET_GPR_U32(ctx, 31, 0x1144C4u);
    ctx->pc = 0x1144C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1144BCu;
    // 0x1144c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115C30u, 0x1144BCu, 0x1144C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1144C4u;
label_1144c4:
    // 0x1144c4: 0xc045720  jal         func_115C80
label_1144c8:
    if (ctx->pc == 0x1144C8u) {
        ctx->pc = 0x1144C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144C4u;
        // 0x1144c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1144CCu;
        goto label_1144cc;
    }
    ctx->pc = 0x1144C4u;
    SET_GPR_U32(ctx, 31, 0x1144CCu);
    ctx->pc = 0x1144C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1144C4u;
    // 0x1144c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115C80u, 0x1144C4u, 0x1144CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1144CCu;
label_1144cc:
    // 0x1144cc: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1144ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_1144d0:
    // 0x1144d0: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x1144d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
label_1144d4:
    // 0x1144d4: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1144d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1144d8:
    // 0x1144d8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1144d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1144dc:
    // 0x1144dc: 0x24487cf8  addiu       $t0, $v0, 0x7CF8
    ctx->pc = 0x1144dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 31992));
label_1144e0:
    // 0x1144e0: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x1144e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1144e4:
    // 0x1144e4: 0x85060004  lh          $a2, 0x4($t0)
    ctx->pc = 0x1144e4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_1144e8:
    // 0x1144e8: 0xac653d64  sw          $a1, 0x3D64($v1)
    ctx->pc = 0x1144e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15716), GPR_U32(ctx, 5));
label_1144ec:
    // 0x1144ec: 0xa4663d68  sh          $a2, 0x3D68($v1)
    ctx->pc = 0x1144ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 15720), (uint16_t)GPR_U32(ctx, 6));
label_1144f0:
    // 0x1144f0: 0xc045a12  jal         func_116848
label_1144f4:
    if (ctx->pc == 0x1144F4u) {
        ctx->pc = 0x1144F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144F0u;
        // 0x1144f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1144F8u;
        goto label_1144f8;
    }
    ctx->pc = 0x1144F0u;
    SET_GPR_U32(ctx, 31, 0x1144F8u);
    ctx->pc = 0x1144F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1144F0u;
    // 0x1144f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116848u, 0x1144F0u, 0x1144F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1144F8u;
label_1144f8:
    // 0x1144f8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1144f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1144fc:
    // 0x1144fc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1144fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_114500:
    // 0x114500: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x114500u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_114504:
    // 0x114504: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x114504u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_114508:
    // 0x114508: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x114508u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11450c:
    // 0x11450c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x11450cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_114510:
    // 0x114510: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x114510u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_114514:
    // 0x114514: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x114514u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_114518:
    // 0x114518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11451c:
    // 0x11451c: 0x3e00008  jr          $ra
label_114520:
    if (ctx->pc == 0x114520u) {
        ctx->pc = 0x114520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11451Cu;
        // 0x114520: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114524u;
        goto label_114524;
    }
    ctx->pc = 0x11451Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11451Cu;
        // 0x114520: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11451Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114524u;
label_114524:
    // 0x114524: 0x0  nop
    ctx->pc = 0x114524u;
    // NOP
    ctx->pc = 0x114528u;
}
