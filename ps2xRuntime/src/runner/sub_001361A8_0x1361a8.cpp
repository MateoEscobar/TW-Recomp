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

// Function: sub_001361A8
// Address: 0x1361a8 - 0x1363e8
void sub_001361A8_0x1361a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001361A8_0x1361a8");
#endif

    switch (ctx->pc) {
        case 0x1361a8u: goto label_1361a8;
        case 0x1361acu: goto label_1361ac;
        case 0x1361b0u: goto label_1361b0;
        case 0x1361b4u: goto label_1361b4;
        case 0x1361b8u: goto label_1361b8;
        case 0x1361bcu: goto label_1361bc;
        case 0x1361c0u: goto label_1361c0;
        case 0x1361c4u: goto label_1361c4;
        case 0x1361c8u: goto label_1361c8;
        case 0x1361ccu: goto label_1361cc;
        case 0x1361d0u: goto label_1361d0;
        case 0x1361d4u: goto label_1361d4;
        case 0x1361d8u: goto label_1361d8;
        case 0x1361dcu: goto label_1361dc;
        case 0x1361e0u: goto label_1361e0;
        case 0x1361e4u: goto label_1361e4;
        case 0x1361e8u: goto label_1361e8;
        case 0x1361ecu: goto label_1361ec;
        case 0x1361f0u: goto label_1361f0;
        case 0x1361f4u: goto label_1361f4;
        case 0x1361f8u: goto label_1361f8;
        case 0x1361fcu: goto label_1361fc;
        case 0x136200u: goto label_136200;
        case 0x136204u: goto label_136204;
        case 0x136208u: goto label_136208;
        case 0x13620cu: goto label_13620c;
        case 0x136210u: goto label_136210;
        case 0x136214u: goto label_136214;
        case 0x136218u: goto label_136218;
        case 0x13621cu: goto label_13621c;
        case 0x136220u: goto label_136220;
        case 0x136224u: goto label_136224;
        case 0x136228u: goto label_136228;
        case 0x13622cu: goto label_13622c;
        case 0x136230u: goto label_136230;
        case 0x136234u: goto label_136234;
        case 0x136238u: goto label_136238;
        case 0x13623cu: goto label_13623c;
        case 0x136240u: goto label_136240;
        case 0x136244u: goto label_136244;
        case 0x136248u: goto label_136248;
        case 0x13624cu: goto label_13624c;
        case 0x136250u: goto label_136250;
        case 0x136254u: goto label_136254;
        case 0x136258u: goto label_136258;
        case 0x13625cu: goto label_13625c;
        case 0x136260u: goto label_136260;
        case 0x136264u: goto label_136264;
        case 0x136268u: goto label_136268;
        case 0x13626cu: goto label_13626c;
        case 0x136270u: goto label_136270;
        case 0x136274u: goto label_136274;
        case 0x136278u: goto label_136278;
        case 0x13627cu: goto label_13627c;
        case 0x136280u: goto label_136280;
        case 0x136284u: goto label_136284;
        case 0x136288u: goto label_136288;
        case 0x13628cu: goto label_13628c;
        case 0x136290u: goto label_136290;
        case 0x136294u: goto label_136294;
        case 0x136298u: goto label_136298;
        case 0x13629cu: goto label_13629c;
        case 0x1362a0u: goto label_1362a0;
        case 0x1362a4u: goto label_1362a4;
        case 0x1362a8u: goto label_1362a8;
        case 0x1362acu: goto label_1362ac;
        case 0x1362b0u: goto label_1362b0;
        case 0x1362b4u: goto label_1362b4;
        case 0x1362b8u: goto label_1362b8;
        case 0x1362bcu: goto label_1362bc;
        case 0x1362c0u: goto label_1362c0;
        case 0x1362c4u: goto label_1362c4;
        case 0x1362c8u: goto label_1362c8;
        case 0x1362ccu: goto label_1362cc;
        case 0x1362d0u: goto label_1362d0;
        case 0x1362d4u: goto label_1362d4;
        case 0x1362d8u: goto label_1362d8;
        case 0x1362dcu: goto label_1362dc;
        case 0x1362e0u: goto label_1362e0;
        case 0x1362e4u: goto label_1362e4;
        case 0x1362e8u: goto label_1362e8;
        case 0x1362ecu: goto label_1362ec;
        case 0x1362f0u: goto label_1362f0;
        case 0x1362f4u: goto label_1362f4;
        case 0x1362f8u: goto label_1362f8;
        case 0x1362fcu: goto label_1362fc;
        case 0x136300u: goto label_136300;
        case 0x136304u: goto label_136304;
        case 0x136308u: goto label_136308;
        case 0x13630cu: goto label_13630c;
        case 0x136310u: goto label_136310;
        case 0x136314u: goto label_136314;
        case 0x136318u: goto label_136318;
        case 0x13631cu: goto label_13631c;
        case 0x136320u: goto label_136320;
        case 0x136324u: goto label_136324;
        case 0x136328u: goto label_136328;
        case 0x13632cu: goto label_13632c;
        case 0x136330u: goto label_136330;
        case 0x136334u: goto label_136334;
        case 0x136338u: goto label_136338;
        case 0x13633cu: goto label_13633c;
        case 0x136340u: goto label_136340;
        case 0x136344u: goto label_136344;
        case 0x136348u: goto label_136348;
        case 0x13634cu: goto label_13634c;
        case 0x136350u: goto label_136350;
        case 0x136354u: goto label_136354;
        case 0x136358u: goto label_136358;
        case 0x13635cu: goto label_13635c;
        case 0x136360u: goto label_136360;
        case 0x136364u: goto label_136364;
        case 0x136368u: goto label_136368;
        case 0x13636cu: goto label_13636c;
        case 0x136370u: goto label_136370;
        case 0x136374u: goto label_136374;
        case 0x136378u: goto label_136378;
        case 0x13637cu: goto label_13637c;
        case 0x136380u: goto label_136380;
        case 0x136384u: goto label_136384;
        case 0x136388u: goto label_136388;
        case 0x13638cu: goto label_13638c;
        case 0x136390u: goto label_136390;
        case 0x136394u: goto label_136394;
        case 0x136398u: goto label_136398;
        case 0x13639cu: goto label_13639c;
        case 0x1363a0u: goto label_1363a0;
        case 0x1363a4u: goto label_1363a4;
        case 0x1363a8u: goto label_1363a8;
        case 0x1363acu: goto label_1363ac;
        case 0x1363b0u: goto label_1363b0;
        case 0x1363b4u: goto label_1363b4;
        case 0x1363b8u: goto label_1363b8;
        case 0x1363bcu: goto label_1363bc;
        case 0x1363c0u: goto label_1363c0;
        case 0x1363c4u: goto label_1363c4;
        case 0x1363c8u: goto label_1363c8;
        case 0x1363ccu: goto label_1363cc;
        case 0x1363d0u: goto label_1363d0;
        case 0x1363d4u: goto label_1363d4;
        case 0x1363d8u: goto label_1363d8;
        case 0x1363dcu: goto label_1363dc;
        case 0x1363e0u: goto label_1363e0;
        case 0x1363e4u: goto label_1363e4;
        default: break;
    }

    ctx->pc = 0x1361a8u;

label_1361a8:
    // 0x1361a8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1361a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1361ac:
    // 0x1361ac: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1361acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1361b0:
    // 0x1361b0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1361b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1361b4:
    // 0x1361b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1361b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1361b8:
    // 0x1361b8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1361b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_1361bc:
    // 0x1361bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1361bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1361c0:
    // 0x1361c0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1361c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1361c4:
    // 0x1361c4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1361c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1361c8:
    // 0x1361c8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1361c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1361cc:
    // 0x1361cc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1361ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1361d0:
    // 0x1361d0: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x1361d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
label_1361d4:
    // 0x1361d4: 0x12600040  beqz        $s3, . + 4 + (0x40 << 2)
label_1361d8:
    if (ctx->pc == 0x1361D8u) {
        ctx->pc = 0x1361D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1361D4u;
        // 0x1361d8: 0xafa80044  sw          $t0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1361DCu;
        goto label_1361dc;
    }
    ctx->pc = 0x1361D4u;
    {
        const bool branch_taken_0x1361d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1361D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1361D4u;
        // 0x1361d8: 0xafa80044  sw          $t0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1361d4) {
            ctx->pc = 0x1362D8u;
            goto label_1362d8;
        }
    }
    ctx->pc = 0x1361DCu;
label_1361dc:
    // 0x1361dc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1361dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1361e0:
    // 0x1361e0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1361e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1361e4:
    // 0x1361e4: 0x8c65b198  lw          $a1, -0x4E68($v1)
    ctx->pc = 0x1361e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947224)));
label_1361e8:
    // 0x1361e8: 0x8c82b19c  lw          $v0, -0x4E64($a0)
    ctx->pc = 0x1361e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947228)));
label_1361ec:
    // 0x1361ec: 0x14a20075  bne         $a1, $v0, . + 4 + (0x75 << 2)
label_1361f0:
    if (ctx->pc == 0x1361F0u) {
        ctx->pc = 0x1361F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1361ECu;
        // 0x1361f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1361F4u;
        goto label_1361f4;
    }
    ctx->pc = 0x1361ECu;
    {
        const bool branch_taken_0x1361ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1361F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1361ECu;
        // 0x1361f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1361ec) {
            ctx->pc = 0x1363C4u;
            goto label_1363c4;
        }
    }
    ctx->pc = 0x1361F4u;
label_1361f4:
    // 0x1361f4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1361f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1361f8:
    // 0x1361f8: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x1361f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1361fc:
    // 0x1361fc: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x1361fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_136200:
    // 0x136200: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x136200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_136204:
    // 0x136204: 0x40f809  jalr        $v0
label_136208:
    if (ctx->pc == 0x136208u) {
        ctx->pc = 0x136208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136204u;
        // 0x136208: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13620Cu;
        goto label_13620c;
    }
    ctx->pc = 0x136204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13620Cu);
        ctx->pc = 0x136208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136204u;
        // 0x136208: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136204u, 0x13620Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13620Cu;
label_13620c:
    // 0x13620c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x13620cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_136210:
    // 0x136210: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
label_136214:
    if (ctx->pc == 0x136214u) {
        ctx->pc = 0x136214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136210u;
        // 0x136214: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136218u;
        goto label_136218;
    }
    ctx->pc = 0x136210u;
    {
        const bool branch_taken_0x136210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136210u;
        // 0x136214: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136210) {
            ctx->pc = 0x1363C4u;
            goto label_1363c4;
        }
    }
    ctx->pc = 0x136218u;
label_136218:
    // 0x136218: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x136218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_13621c:
    // 0x13621c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x13621cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_136220:
    // 0x136220: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x136220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_136224:
    // 0x136224: 0xae4301e0  sw          $v1, 0x1E0($s2)
    ctx->pc = 0x136224u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 480), GPR_U32(ctx, 3));
label_136228:
    // 0x136228: 0x8c45bd30  lw          $a1, -0x42D0($v0)
    ctx->pc = 0x136228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_13622c:
    // 0x13622c: 0xc0e4060  jal         func_390180
label_136230:
    if (ctx->pc == 0x136230u) {
        ctx->pc = 0x136230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13622Cu;
        // 0x136230: 0xae4501e4  sw          $a1, 0x1E4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 484), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136234u;
        goto label_136234;
    }
    ctx->pc = 0x13622Cu;
    SET_GPR_U32(ctx, 31, 0x136234u);
    ctx->pc = 0x136230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13622Cu;
    // 0x136230: 0xae4501e4  sw          $a1, 0x1E4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 484), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x13622Cu, 0x136234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136234u;
label_136234:
    // 0x136234: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_136238:
    if (ctx->pc == 0x136238u) {
        ctx->pc = 0x136238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136234u;
        // 0x136238: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13623Cu;
        goto label_13623c;
    }
    ctx->pc = 0x136234u;
    {
        const bool branch_taken_0x136234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136234u;
        // 0x136238: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136234) {
            ctx->pc = 0x136240u;
            goto label_136240;
        }
    }
    ctx->pc = 0x13623Cu;
label_13623c:
    // 0x13623c: 0xae4201e0  sw          $v0, 0x1E0($s2)
    ctx->pc = 0x13623cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 480), GPR_U32(ctx, 2));
label_136240:
    // 0x136240: 0xc0e4060  jal         func_390180
label_136244:
    if (ctx->pc == 0x136244u) {
        ctx->pc = 0x136244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136240u;
        // 0x136244: 0x27a40044  addiu       $a0, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136248u;
        goto label_136248;
    }
    ctx->pc = 0x136240u;
    SET_GPR_U32(ctx, 31, 0x136248u);
    ctx->pc = 0x136244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136240u;
    // 0x136244: 0x27a40044  addiu       $a0, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x136240u, 0x136248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136248u;
label_136248:
    // 0x136248: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_13624c:
    if (ctx->pc == 0x13624Cu) {
        ctx->pc = 0x13624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136248u;
        // 0x13624c: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136250u;
        goto label_136250;
    }
    ctx->pc = 0x136248u;
    {
        const bool branch_taken_0x136248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136248u;
        // 0x13624c: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136248) {
            ctx->pc = 0x136254u;
            goto label_136254;
        }
    }
    ctx->pc = 0x136250u;
label_136250:
    // 0x136250: 0xae4201e4  sw          $v0, 0x1E4($s2)
    ctx->pc = 0x136250u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 484), GPR_U32(ctx, 2));
label_136254:
    // 0x136254: 0xae50025c  sw          $s0, 0x25C($s2)
    ctx->pc = 0x136254u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 604), GPR_U32(ctx, 16));
label_136258:
    // 0x136258: 0xae530240  sw          $s3, 0x240($s2)
    ctx->pc = 0x136258u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 576), GPR_U32(ctx, 19));
label_13625c:
    // 0x13625c: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x13625cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_136260:
    // 0x136260: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x136260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_136264:
    // 0x136264: 0x86110190  lh          $s1, 0x190($s0)
    ctx->pc = 0x136264u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 400)));
label_136268:
    // 0x136268: 0x844401f0  lh          $a0, 0x1F0($v0)
    ctx->pc = 0x136268u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
label_13626c:
    // 0x13626c: 0x26100190  addiu       $s0, $s0, 0x190
    ctx->pc = 0x13626cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_136270:
    // 0x136270: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x136270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_136274:
    // 0x136274: 0x2518821  addu        $s1, $s2, $s1
    ctx->pc = 0x136274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_136278:
    // 0x136278: 0x60f809  jalr        $v1
label_13627c:
    if (ctx->pc == 0x13627Cu) {
        ctx->pc = 0x13627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136278u;
        // 0x13627c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136280u;
        goto label_136280;
    }
    ctx->pc = 0x136278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x136280u);
        ctx->pc = 0x13627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136278u;
        // 0x13627c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136278u, 0x136280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x136280u;
label_136280:
    // 0x136280: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x136280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_136284:
    // 0x136284: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x136284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_136288:
    // 0x136288: 0x40f809  jalr        $v0
label_13628c:
    if (ctx->pc == 0x13628Cu) {
        ctx->pc = 0x13628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136288u;
        // 0x13628c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x136290u;
        goto label_136290;
    }
    ctx->pc = 0x136288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x136290u);
        ctx->pc = 0x13628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136288u;
        // 0x13628c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136288u, 0x136290u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x136290u;
label_136290:
    // 0x136290: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x136290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_136294:
    // 0x136294: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x136294u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_136298:
    // 0x136298: 0x84440200  lh          $a0, 0x200($v0)
    ctx->pc = 0x136298u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 512)));
label_13629c:
    // 0x13629c: 0x861101a0  lh          $s1, 0x1A0($s0)
    ctx->pc = 0x13629cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 416)));
label_1362a0:
    // 0x1362a0: 0x8c430204  lw          $v1, 0x204($v0)
    ctx->pc = 0x1362a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
label_1362a4:
    // 0x1362a4: 0x261001a0  addiu       $s0, $s0, 0x1A0
    ctx->pc = 0x1362a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
label_1362a8:
    // 0x1362a8: 0x2518821  addu        $s1, $s2, $s1
    ctx->pc = 0x1362a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_1362ac:
    // 0x1362ac: 0x60f809  jalr        $v1
label_1362b0:
    if (ctx->pc == 0x1362B0u) {
        ctx->pc = 0x1362B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362ACu;
        // 0x1362b0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1362B4u;
        goto label_1362b4;
    }
    ctx->pc = 0x1362ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1362B4u);
        ctx->pc = 0x1362B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362ACu;
        // 0x1362b0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1362ACu, 0x1362B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1362B4u;
label_1362b4:
    // 0x1362b4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1362b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1362b8:
    // 0x1362b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1362b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1362bc:
    // 0x1362bc: 0x40f809  jalr        $v0
label_1362c0:
    if (ctx->pc == 0x1362C0u) {
        ctx->pc = 0x1362C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362BCu;
        // 0x1362c0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1362C4u;
        goto label_1362c4;
    }
    ctx->pc = 0x1362BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1362C4u);
        ctx->pc = 0x1362C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362BCu;
        // 0x1362c0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1362BCu, 0x1362C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1362C4u;
label_1362c4:
    // 0x1362c4: 0xae400258  sw          $zero, 0x258($s2)
    ctx->pc = 0x1362c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 600), GPR_U32(ctx, 0));
label_1362c8:
    // 0x1362c8: 0xc04dd9c  jal         func_137670
label_1362cc:
    if (ctx->pc == 0x1362CCu) {
        ctx->pc = 0x1362CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362C8u;
        // 0x1362cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1362D0u;
        goto label_1362d0;
    }
    ctx->pc = 0x1362C8u;
    SET_GPR_U32(ctx, 31, 0x1362D0u);
    ctx->pc = 0x1362CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1362C8u;
    // 0x1362cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137670u, 0x1362C8u, 0x1362D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1362D0u;
label_1362d0:
    // 0x1362d0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_1362d4:
    if (ctx->pc == 0x1362D4u) {
        ctx->pc = 0x1362D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362D0u;
        // 0x1362d4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1362D8u;
        goto label_1362d8;
    }
    ctx->pc = 0x1362D0u;
    {
        const bool branch_taken_0x1362d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1362d0) {
            ctx->pc = 0x1362D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1362D0u;
            // 0x1362d4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1362E0u;
            goto label_1362e0;
        }
    }
    ctx->pc = 0x1362D8u;
label_1362d8:
    // 0x1362d8: 0x1000003a  b           . + 4 + (0x3A << 2)
label_1362dc:
    if (ctx->pc == 0x1362DCu) {
        ctx->pc = 0x1362DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362D8u;
        // 0x1362dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1362E0u;
        goto label_1362e0;
    }
    ctx->pc = 0x1362D8u;
    {
        const bool branch_taken_0x1362d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1362DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362D8u;
        // 0x1362dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1362d8) {
            ctx->pc = 0x1363C4u;
            goto label_1363c4;
        }
    }
    ctx->pc = 0x1362E0u;
label_1362e0:
    // 0x1362e0: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x1362e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_1362e4:
    // 0x1362e4: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x1362e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_1362e8:
    // 0x1362e8: 0x40f809  jalr        $v0
label_1362ec:
    if (ctx->pc == 0x1362ECu) {
        ctx->pc = 0x1362ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362E8u;
        // 0x1362ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1362F0u;
        goto label_1362f0;
    }
    ctx->pc = 0x1362E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1362F0u);
        ctx->pc = 0x1362ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362E8u;
        // 0x1362ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1362E8u, 0x1362F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1362F0u;
label_1362f0:
    // 0x1362f0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1362f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1362f4:
    // 0x1362f4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1362f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1362f8:
    // 0x1362f8: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x1362f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_1362fc:
    // 0x1362fc: 0x84a40218  lh          $a0, 0x218($a1)
    ctx->pc = 0x1362fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 536)));
label_136300:
    // 0x136300: 0x8ca2021c  lw          $v0, 0x21C($a1)
    ctx->pc = 0x136300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 540)));
label_136304:
    // 0x136304: 0x40f809  jalr        $v0
label_136308:
    if (ctx->pc == 0x136308u) {
        ctx->pc = 0x136308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136304u;
        // 0x136308: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13630Cu;
        goto label_13630c;
    }
    ctx->pc = 0x136304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13630Cu);
        ctx->pc = 0x136308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136304u;
        // 0x136308: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136304u, 0x13630Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13630Cu;
label_13630c:
    // 0x13630c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13630cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_136310:
    // 0x136310: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x136310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_136314:
    // 0x136314: 0xc0cdc0a  jal         func_337028
label_136318:
    if (ctx->pc == 0x136318u) {
        ctx->pc = 0x136318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136314u;
        // 0x136318: 0x26460210  addiu       $a2, $s2, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13631Cu;
        goto label_13631c;
    }
    ctx->pc = 0x136314u;
    SET_GPR_U32(ctx, 31, 0x13631Cu);
    ctx->pc = 0x136318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136314u;
    // 0x136318: 0x26460210  addiu       $a2, $s2, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337028u, 0x136314u, 0x13631Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13631Cu;
label_13631c:
    // 0x13631c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_136320:
    if (ctx->pc == 0x136320u) {
        ctx->pc = 0x136320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13631Cu;
        // 0x136320: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136324u;
        goto label_136324;
    }
    ctx->pc = 0x13631Cu;
    {
        const bool branch_taken_0x13631c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13631c) {
            ctx->pc = 0x136320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13631Cu;
            // 0x136320: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13633Cu;
            goto label_13633c;
        }
    }
    ctx->pc = 0x136324u;
label_136324:
    // 0x136324: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x136324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_136328:
    // 0x136328: 0xc0cd972  jal         func_3365C8
label_13632c:
    if (ctx->pc == 0x13632Cu) {
        ctx->pc = 0x13632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136328u;
        // 0x13632c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136330u;
        goto label_136330;
    }
    ctx->pc = 0x136328u;
    SET_GPR_U32(ctx, 31, 0x136330u);
    ctx->pc = 0x13632Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136328u;
    // 0x13632c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365C8u, 0x136328u, 0x136330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136330u;
label_136330:
    // 0x136330: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x136330u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_136334:
    // 0x136334: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x136334u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
label_136338:
    // 0x136338: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x136338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_13633c:
    // 0x13633c: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x13633cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_136340:
    // 0x136340: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x136340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_136344:
    // 0x136344: 0x40f809  jalr        $v0
label_136348:
    if (ctx->pc == 0x136348u) {
        ctx->pc = 0x136348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136344u;
        // 0x136348: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13634Cu;
        goto label_13634c;
    }
    ctx->pc = 0x136344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13634Cu);
        ctx->pc = 0x136348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136344u;
        // 0x136348: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136344u, 0x13634Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13634Cu;
label_13634c:
    // 0x13634c: 0x14540017  bne         $v0, $s4, . + 4 + (0x17 << 2)
label_136350:
    if (ctx->pc == 0x136350u) {
        ctx->pc = 0x136350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13634Cu;
        // 0x136350: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136354u;
        goto label_136354;
    }
    ctx->pc = 0x13634Cu;
    {
        const bool branch_taken_0x13634c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x136350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13634Cu;
        // 0x136350: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13634c) {
            ctx->pc = 0x1363ACu;
            goto label_1363ac;
        }
    }
    ctx->pc = 0x136354u;
label_136354:
    // 0x136354: 0x8e43025c  lw          $v1, 0x25C($s2)
    ctx->pc = 0x136354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 604)));
label_136358:
    // 0x136358: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_13635c:
    if (ctx->pc == 0x13635Cu) {
        ctx->pc = 0x136360u;
        goto label_136360;
    }
    ctx->pc = 0x136358u;
    {
        const bool branch_taken_0x136358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x136358) {
            ctx->pc = 0x136388u;
            goto label_136388;
        }
    }
    ctx->pc = 0x136360u;
label_136360:
    // 0x136360: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x136360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_136364:
    // 0x136364: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x136364u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_136368:
    // 0x136368: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x136368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13636c:
    // 0x13636c: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x13636cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_136370:
    // 0x136370: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x136370u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_136374:
    // 0x136374: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x136374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_136378:
    // 0x136378: 0x0  nop
    ctx->pc = 0x136378u;
    // NOP
label_13637c:
    // 0x13637c: 0x46000b69  min.s       $f13, $f1, $f0
    ctx->pc = 0x13637cu;
    ctx->f[13] = std::min(ctx->f[1], ctx->f[0]);
label_136380:
    // 0x136380: 0x10000002  b           . + 4 + (0x2 << 2)
label_136384:
    if (ctx->pc == 0x136384u) {
        ctx->pc = 0x136388u;
        goto label_136388;
    }
    ctx->pc = 0x136380u;
    {
        const bool branch_taken_0x136380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136380) {
            ctx->pc = 0x13638Cu;
            goto label_13638c;
        }
    }
    ctx->pc = 0x136388u;
label_136388:
    // 0x136388: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x136388u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_13638c:
    // 0x13638c: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x13638cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_136390:
    // 0x136390: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x136390u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_136394:
    // 0x136394: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x136394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_136398:
    // 0x136398: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x136398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13639c:
    // 0x13639c: 0x26450220  addiu       $a1, $s2, 0x220
    ctx->pc = 0x13639cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
label_1363a0:
    // 0x1363a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1363a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1363a4:
    // 0x1363a4: 0xc04b7b6  jal         func_12DED8
label_1363a8:
    if (ctx->pc == 0x1363A8u) {
        ctx->pc = 0x1363A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1363A4u;
        // 0x1363a8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1363ACu;
        goto label_1363ac;
    }
    ctx->pc = 0x1363A4u;
    SET_GPR_U32(ctx, 31, 0x1363ACu);
    ctx->pc = 0x1363A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1363A4u;
    // 0x1363a8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DED8u, 0x1363A4u, 0x1363ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1363ACu;
label_1363ac:
    // 0x1363ac: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x1363acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_1363b0:
    // 0x1363b0: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x1363b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_1363b4:
    // 0x1363b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1363b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1363b8:
    // 0x1363b8: 0xc04828c  jal         func_120A30
label_1363bc:
    if (ctx->pc == 0x1363BCu) {
        ctx->pc = 0x1363BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1363B8u;
        // 0x1363bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1363C0u;
        goto label_1363c0;
    }
    ctx->pc = 0x1363B8u;
    SET_GPR_U32(ctx, 31, 0x1363C0u);
    ctx->pc = 0x1363BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1363B8u;
    // 0x1363bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A30u, 0x1363B8u, 0x1363C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1363C0u;
label_1363c0:
    // 0x1363c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1363c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1363c4:
    // 0x1363c4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1363c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1363c8:
    // 0x1363c8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1363c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1363cc:
    // 0x1363cc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1363ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1363d0:
    // 0x1363d0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1363d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1363d4:
    // 0x1363d4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1363d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1363d8:
    // 0x1363d8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1363d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1363dc:
    // 0x1363dc: 0x3e00008  jr          $ra
label_1363e0:
    if (ctx->pc == 0x1363E0u) {
        ctx->pc = 0x1363E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1363DCu;
        // 0x1363e0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1363E4u;
        goto label_1363e4;
    }
    ctx->pc = 0x1363DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1363E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1363DCu;
        // 0x1363e0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1363DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1363E4u;
label_1363e4:
    // 0x1363e4: 0x0  nop
    ctx->pc = 0x1363e4u;
    // NOP
    ctx->pc = 0x1363e8u;
}
