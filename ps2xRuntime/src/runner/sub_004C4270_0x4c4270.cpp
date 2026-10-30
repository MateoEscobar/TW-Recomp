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

// Function: sub_004C4270
// Address: 0x4c4270 - 0x4c43e8
void sub_004C4270_0x4c4270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C4270_0x4c4270");
#endif

    switch (ctx->pc) {
        case 0x4c4270u: goto label_4c4270;
        case 0x4c4274u: goto label_4c4274;
        case 0x4c4278u: goto label_4c4278;
        case 0x4c427cu: goto label_4c427c;
        case 0x4c4280u: goto label_4c4280;
        case 0x4c4284u: goto label_4c4284;
        case 0x4c4288u: goto label_4c4288;
        case 0x4c428cu: goto label_4c428c;
        case 0x4c4290u: goto label_4c4290;
        case 0x4c4294u: goto label_4c4294;
        case 0x4c4298u: goto label_4c4298;
        case 0x4c429cu: goto label_4c429c;
        case 0x4c42a0u: goto label_4c42a0;
        case 0x4c42a4u: goto label_4c42a4;
        case 0x4c42a8u: goto label_4c42a8;
        case 0x4c42acu: goto label_4c42ac;
        case 0x4c42b0u: goto label_4c42b0;
        case 0x4c42b4u: goto label_4c42b4;
        case 0x4c42b8u: goto label_4c42b8;
        case 0x4c42bcu: goto label_4c42bc;
        case 0x4c42c0u: goto label_4c42c0;
        case 0x4c42c4u: goto label_4c42c4;
        case 0x4c42c8u: goto label_4c42c8;
        case 0x4c42ccu: goto label_4c42cc;
        case 0x4c42d0u: goto label_4c42d0;
        case 0x4c42d4u: goto label_4c42d4;
        case 0x4c42d8u: goto label_4c42d8;
        case 0x4c42dcu: goto label_4c42dc;
        case 0x4c42e0u: goto label_4c42e0;
        case 0x4c42e4u: goto label_4c42e4;
        case 0x4c42e8u: goto label_4c42e8;
        case 0x4c42ecu: goto label_4c42ec;
        case 0x4c42f0u: goto label_4c42f0;
        case 0x4c42f4u: goto label_4c42f4;
        case 0x4c42f8u: goto label_4c42f8;
        case 0x4c42fcu: goto label_4c42fc;
        case 0x4c4300u: goto label_4c4300;
        case 0x4c4304u: goto label_4c4304;
        case 0x4c4308u: goto label_4c4308;
        case 0x4c430cu: goto label_4c430c;
        case 0x4c4310u: goto label_4c4310;
        case 0x4c4314u: goto label_4c4314;
        case 0x4c4318u: goto label_4c4318;
        case 0x4c431cu: goto label_4c431c;
        case 0x4c4320u: goto label_4c4320;
        case 0x4c4324u: goto label_4c4324;
        case 0x4c4328u: goto label_4c4328;
        case 0x4c432cu: goto label_4c432c;
        case 0x4c4330u: goto label_4c4330;
        case 0x4c4334u: goto label_4c4334;
        case 0x4c4338u: goto label_4c4338;
        case 0x4c433cu: goto label_4c433c;
        case 0x4c4340u: goto label_4c4340;
        case 0x4c4344u: goto label_4c4344;
        case 0x4c4348u: goto label_4c4348;
        case 0x4c434cu: goto label_4c434c;
        case 0x4c4350u: goto label_4c4350;
        case 0x4c4354u: goto label_4c4354;
        case 0x4c4358u: goto label_4c4358;
        case 0x4c435cu: goto label_4c435c;
        case 0x4c4360u: goto label_4c4360;
        case 0x4c4364u: goto label_4c4364;
        case 0x4c4368u: goto label_4c4368;
        case 0x4c436cu: goto label_4c436c;
        case 0x4c4370u: goto label_4c4370;
        case 0x4c4374u: goto label_4c4374;
        case 0x4c4378u: goto label_4c4378;
        case 0x4c437cu: goto label_4c437c;
        case 0x4c4380u: goto label_4c4380;
        case 0x4c4384u: goto label_4c4384;
        case 0x4c4388u: goto label_4c4388;
        case 0x4c438cu: goto label_4c438c;
        case 0x4c4390u: goto label_4c4390;
        case 0x4c4394u: goto label_4c4394;
        case 0x4c4398u: goto label_4c4398;
        case 0x4c439cu: goto label_4c439c;
        case 0x4c43a0u: goto label_4c43a0;
        case 0x4c43a4u: goto label_4c43a4;
        case 0x4c43a8u: goto label_4c43a8;
        case 0x4c43acu: goto label_4c43ac;
        case 0x4c43b0u: goto label_4c43b0;
        case 0x4c43b4u: goto label_4c43b4;
        case 0x4c43b8u: goto label_4c43b8;
        case 0x4c43bcu: goto label_4c43bc;
        case 0x4c43c0u: goto label_4c43c0;
        case 0x4c43c4u: goto label_4c43c4;
        case 0x4c43c8u: goto label_4c43c8;
        case 0x4c43ccu: goto label_4c43cc;
        case 0x4c43d0u: goto label_4c43d0;
        case 0x4c43d4u: goto label_4c43d4;
        case 0x4c43d8u: goto label_4c43d8;
        case 0x4c43dcu: goto label_4c43dc;
        case 0x4c43e0u: goto label_4c43e0;
        case 0x4c43e4u: goto label_4c43e4;
        default: break;
    }

    ctx->pc = 0x4c4270u;

label_4c4270:
    // 0x4c4270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c4270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4c4274:
    // 0x4c4274: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c4274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4c4278:
    // 0x4c4278: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c4278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4c427c:
    // 0x4c427c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c427cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c4280:
    // 0x4c4280: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4c4280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_4c4284:
    // 0x4c4284: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4c4284u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c4288:
    // 0x4c4288: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c4288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4c428c:
    // 0x4c428c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4c428cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c4290:
    // 0x4c4290: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c4290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4c4294:
    // 0x4c4294: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_4c4298:
    if (ctx->pc == 0x4C4298u) {
        ctx->pc = 0x4C4298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4294u;
        // 0x4c4298: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C429Cu;
        goto label_4c429c;
    }
    ctx->pc = 0x4C4294u;
    {
        const bool branch_taken_0x4c4294 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C4298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4294u;
        // 0x4c4298: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4294) {
            ctx->pc = 0x4C42A4u;
            goto label_4c42a4;
        }
    }
    ctx->pc = 0x4C429Cu;
label_4c429c:
    // 0x4c429c: 0x1000004a  b           . + 4 + (0x4A << 2)
label_4c42a0:
    if (ctx->pc == 0x4C42A0u) {
        ctx->pc = 0x4C42A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C429Cu;
        // 0x4c42a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C42A4u;
        goto label_4c42a4;
    }
    ctx->pc = 0x4C429Cu;
    {
        const bool branch_taken_0x4c429c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C42A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C429Cu;
        // 0x4c42a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c429c) {
            ctx->pc = 0x4C43C8u;
            goto label_4c43c8;
        }
    }
    ctx->pc = 0x4C42A4u;
label_4c42a4:
    // 0x4c42a4: 0xc1334f4  jal         func_4CD3D0
label_4c42a8:
    if (ctx->pc == 0x4C42A8u) {
        ctx->pc = 0x4C42ACu;
        goto label_4c42ac;
    }
    ctx->pc = 0x4C42A4u;
    SET_GPR_U32(ctx, 31, 0x4C42ACu);
    ctx->pc = 0x4CD3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD3D0u, 0x4C42A4u, 0x4C42ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C42ACu;
label_4c42ac:
    // 0x4c42ac: 0x8e03027c  lw          $v1, 0x27C($s0)
    ctx->pc = 0x4c42acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 636)));
label_4c42b0:
    // 0x4c42b0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_4c42b4:
    if (ctx->pc == 0x4C42B4u) {
        ctx->pc = 0x4C42B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C42B0u;
        // 0x4c42b4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C42B8u;
        goto label_4c42b8;
    }
    ctx->pc = 0x4C42B0u;
    {
        const bool branch_taken_0x4c42b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C42B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C42B0u;
        // 0x4c42b4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c42b0) {
            ctx->pc = 0x4C42CCu;
            goto label_4c42cc;
        }
    }
    ctx->pc = 0x4C42B8u;
label_4c42b8:
    // 0x4c42b8: 0x8e0202b4  lw          $v0, 0x2B4($s0)
    ctx->pc = 0x4c42b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
label_4c42bc:
    // 0x4c42bc: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x4c42bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4c42c0:
    // 0x4c42c0: 0xae00027c  sw          $zero, 0x27C($s0)
    ctx->pc = 0x4c42c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 0));
label_4c42c4:
    // 0x4c42c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4c42c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4c42c8:
    // 0x4c42c8: 0xae0202b4  sw          $v0, 0x2B4($s0)
    ctx->pc = 0x4c42c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 2));
label_4c42cc:
    // 0x4c42cc: 0x8e02028c  lw          $v0, 0x28C($s0)
    ctx->pc = 0x4c42ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
label_4c42d0:
    // 0x4c42d0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_4c42d4:
    if (ctx->pc == 0x4C42D4u) {
        ctx->pc = 0x4C42D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C42D0u;
        // 0x4c42d4: 0xc22023  subu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C42D8u;
        goto label_4c42d8;
    }
    ctx->pc = 0x4C42D0u;
    {
        const bool branch_taken_0x4c42d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C42D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C42D0u;
        // 0x4c42d4: 0xc22023  subu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c42d0) {
            ctx->pc = 0x4C4320u;
            goto label_4c4320;
        }
    }
    ctx->pc = 0x4C42D8u;
label_4c42d8:
    // 0x4c42d8: 0x8e050290  lw          $a1, 0x290($s0)
    ctx->pc = 0x4c42d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
label_4c42dc:
    // 0x4c42dc: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x4c42dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4c42e0:
    // 0x4c42e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4c42e4:
    if (ctx->pc == 0x4C42E4u) {
        ctx->pc = 0x4C42E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C42E0u;
        // 0x4c42e4: 0xae00028c  sw          $zero, 0x28C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C42E8u;
        goto label_4c42e8;
    }
    ctx->pc = 0x4C42E0u;
    {
        const bool branch_taken_0x4c42e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C42E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C42E0u;
        // 0x4c42e4: 0xae00028c  sw          $zero, 0x28C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c42e0) {
            ctx->pc = 0x4C4304u;
            goto label_4c4304;
        }
    }
    ctx->pc = 0x4C42E8u;
label_4c42e8:
    // 0x4c42e8: 0x8e020294  lw          $v0, 0x294($s0)
    ctx->pc = 0x4c42e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 660)));
label_4c42ec:
    // 0x4c42ec: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x4c42ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4c42f0:
    // 0x4c42f0: 0xae050298  sw          $a1, 0x298($s0)
    ctx->pc = 0x4c42f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 5));
label_4c42f4:
    // 0x4c42f4: 0xae02029c  sw          $v0, 0x29C($s0)
    ctx->pc = 0x4c42f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 2));
label_4c42f8:
    // 0x4c42f8: 0xae040290  sw          $a0, 0x290($s0)
    ctx->pc = 0x4c42f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 4));
label_4c42fc:
    // 0x4c42fc: 0x10000008  b           . + 4 + (0x8 << 2)
label_4c4300:
    if (ctx->pc == 0x4C4300u) {
        ctx->pc = 0x4C4300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C42FCu;
        // 0x4c4300: 0xae030294  sw          $v1, 0x294($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4304u;
        goto label_4c4304;
    }
    ctx->pc = 0x4C42FCu;
    {
        const bool branch_taken_0x4c42fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C42FCu;
        // 0x4c4300: 0xae030294  sw          $v1, 0x294($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c42fc) {
            ctx->pc = 0x4C4320u;
            goto label_4c4320;
        }
    }
    ctx->pc = 0x4C4304u;
label_4c4304:
    // 0x4c4304: 0x8e020298  lw          $v0, 0x298($s0)
    ctx->pc = 0x4c4304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
label_4c4308:
    // 0x4c4308: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4c4308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4c430c:
    // 0x4c430c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4c4310:
    if (ctx->pc == 0x4C4310u) {
        ctx->pc = 0x4C4314u;
        goto label_4c4314;
    }
    ctx->pc = 0x4C430Cu;
    {
        const bool branch_taken_0x4c430c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c430c) {
            ctx->pc = 0x4C4320u;
            goto label_4c4320;
        }
    }
    ctx->pc = 0x4C4314u;
label_4c4314:
    // 0x4c4314: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4c4314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4c4318:
    // 0x4c4318: 0xae040298  sw          $a0, 0x298($s0)
    ctx->pc = 0x4c4318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 4));
label_4c431c:
    // 0x4c431c: 0xae02029c  sw          $v0, 0x29C($s0)
    ctx->pc = 0x4c431cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 2));
label_4c4320:
    // 0x4c4320: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_4c4324:
    if (ctx->pc == 0x4C4324u) {
        ctx->pc = 0x4C4324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4320u;
        // 0x4c4324: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4328u;
        goto label_4c4328;
    }
    ctx->pc = 0x4C4320u;
    {
        const bool branch_taken_0x4c4320 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C4324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4320u;
        // 0x4c4324: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4320) {
            ctx->pc = 0x4C4330u;
            goto label_4c4330;
        }
    }
    ctx->pc = 0x4C4328u;
label_4c4328:
    // 0x4c4328: 0x10000006  b           . + 4 + (0x6 << 2)
label_4c432c:
    if (ctx->pc == 0x4C432Cu) {
        ctx->pc = 0x4C432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4328u;
        // 0x4c432c: 0x2a02b  sltu        $s4, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4330u;
        goto label_4c4330;
    }
    ctx->pc = 0x4C4328u;
    {
        const bool branch_taken_0x4c4328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4328u;
        // 0x4c432c: 0x2a02b  sltu        $s4, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4328) {
            ctx->pc = 0x4C4344u;
            goto label_4c4344;
        }
    }
    ctx->pc = 0x4C4330u;
label_4c4330:
    // 0x4c4330: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_4c4334:
    if (ctx->pc == 0x4C4334u) {
        ctx->pc = 0x4C4334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4330u;
        // 0x4c4334: 0x8e020300  lw          $v0, 0x300($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4338u;
        goto label_4c4338;
    }
    ctx->pc = 0x4C4330u;
    {
        const bool branch_taken_0x4c4330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c4330) {
            ctx->pc = 0x4C4334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C4330u;
            // 0x4c4334: 0x8e020300  lw          $v0, 0x300($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C4348u;
            goto label_4c4348;
        }
    }
    ctx->pc = 0x4C4338u;
label_4c4338:
    // 0x4c4338: 0x8e020280  lw          $v0, 0x280($s0)
    ctx->pc = 0x4c4338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
label_4c433c:
    // 0x4c433c: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x4c433cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4c4340:
    // 0x4c4340: 0xae020348  sw          $v0, 0x348($s0)
    ctx->pc = 0x4c4340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 840), GPR_U32(ctx, 2));
label_4c4344:
    // 0x4c4344: 0x8e020300  lw          $v0, 0x300($s0)
    ctx->pc = 0x4c4344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
label_4c4348:
    // 0x4c4348: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4c4348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c434c:
    // 0x4c434c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4c4350:
    if (ctx->pc == 0x4C4350u) {
        ctx->pc = 0x4C4350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C434Cu;
        // 0x4c4350: 0xae1300fc  sw          $s3, 0xFC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4354u;
        goto label_4c4354;
    }
    ctx->pc = 0x4C434Cu;
    {
        const bool branch_taken_0x4c434c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C434Cu;
        // 0x4c4350: 0xae1300fc  sw          $s3, 0xFC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c434c) {
            ctx->pc = 0x4C4388u;
            goto label_4c4388;
        }
    }
    ctx->pc = 0x4C4354u;
label_4c4354:
    // 0x4c4354: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4c4354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c4358:
    // 0x4c4358: 0x8e040308  lw          $a0, 0x308($s0)
    ctx->pc = 0x4c4358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 776)));
label_4c435c:
    // 0x4c435c: 0x0  nop
    ctx->pc = 0x4c435cu;
    // NOP
label_4c4360:
    // 0x4c4360: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4c4360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c4364:
    // 0x4c4364: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4c4364u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4c4368:
    // 0x4c4368: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x4c4368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_4c436c:
    // 0x4c436c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x4c436cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_4c4370:
    // 0x4c4370: 0x40f809  jalr        $v0
label_4c4374:
    if (ctx->pc == 0x4C4374u) {
        ctx->pc = 0x4C4374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4370u;
        // 0x4c4374: 0x2652017c  addiu       $s2, $s2, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 380));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4378u;
        goto label_4c4378;
    }
    ctx->pc = 0x4C4370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C4378u);
        ctx->pc = 0x4C4374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4370u;
        // 0x4c4374: 0x2652017c  addiu       $s2, $s2, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 380));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C4370u, 0x4C4378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C4378u;
label_4c4378:
    // 0x4c4378: 0x8e030300  lw          $v1, 0x300($s0)
    ctx->pc = 0x4c4378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
label_4c437c:
    // 0x4c437c: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x4c437cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c4380:
    // 0x4c4380: 0x5460fff7  bnel        $v1, $zero, . + 4 + (-0x9 << 2)
label_4c4384:
    if (ctx->pc == 0x4C4384u) {
        ctx->pc = 0x4C4384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4380u;
        // 0x4c4384: 0x8e040308  lw          $a0, 0x308($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 776)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4388u;
        goto label_4c4388;
    }
    ctx->pc = 0x4C4380u;
    {
        const bool branch_taken_0x4c4380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c4380) {
            ctx->pc = 0x4C4384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C4380u;
            // 0x4c4384: 0x8e040308  lw          $a0, 0x308($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 776)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C4360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c4360;
        }
    }
    ctx->pc = 0x4C4388u;
label_4c4388:
    // 0x4c4388: 0x8e020270  lw          $v0, 0x270($s0)
    ctx->pc = 0x4c4388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_4c438c:
    // 0x4c438c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4c4390:
    if (ctx->pc == 0x4C4390u) {
        ctx->pc = 0x4C4394u;
        goto label_4c4394;
    }
    ctx->pc = 0x4C438Cu;
    {
        const bool branch_taken_0x4c438c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c438c) {
            ctx->pc = 0x4C43A8u;
            goto label_4c43a8;
        }
    }
    ctx->pc = 0x4C4394u;
label_4c4394:
    // 0x4c4394: 0x8e020300  lw          $v0, 0x300($s0)
    ctx->pc = 0x4c4394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
label_4c4398:
    // 0x4c4398: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4c439c:
    if (ctx->pc == 0x4C439Cu) {
        ctx->pc = 0x4C43A0u;
        goto label_4c43a0;
    }
    ctx->pc = 0x4C4398u;
    {
        const bool branch_taken_0x4c4398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c4398) {
            ctx->pc = 0x4C43A8u;
            goto label_4c43a8;
        }
    }
    ctx->pc = 0x4C43A0u;
label_4c43a0:
    // 0x4c43a0: 0xc130664  jal         func_4C1990
label_4c43a4:
    if (ctx->pc == 0x4C43A4u) {
        ctx->pc = 0x4C43A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C43A0u;
        // 0x4c43a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C43A8u;
        goto label_4c43a8;
    }
    ctx->pc = 0x4C43A0u;
    SET_GPR_U32(ctx, 31, 0x4C43A8u);
    ctx->pc = 0x4C43A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C43A0u;
    // 0x4c43a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C1990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C1990u, 0x4C43A0u, 0x4C43A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C43A8u;
label_4c43a8:
    // 0x4c43a8: 0x52800007  beql        $s4, $zero, . + 4 + (0x7 << 2)
label_4c43ac:
    if (ctx->pc == 0x4C43ACu) {
        ctx->pc = 0x4C43ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C43A8u;
        // 0x4c43ac: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C43B0u;
        goto label_4c43b0;
    }
    ctx->pc = 0x4C43A8u;
    {
        const bool branch_taken_0x4c43a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c43a8) {
            ctx->pc = 0x4C43ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C43A8u;
            // 0x4c43ac: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C43C8u;
            goto label_4c43c8;
        }
    }
    ctx->pc = 0x4C43B0u;
label_4c43b0:
    // 0x4c43b0: 0xc1334f4  jal         func_4CD3D0
label_4c43b4:
    if (ctx->pc == 0x4C43B4u) {
        ctx->pc = 0x4C43B8u;
        goto label_4c43b8;
    }
    ctx->pc = 0x4C43B0u;
    SET_GPR_U32(ctx, 31, 0x4C43B8u);
    ctx->pc = 0x4CD3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD3D0u, 0x4C43B0u, 0x4C43B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C43B8u;
label_4c43b8:
    // 0x4c43b8: 0x8e030348  lw          $v1, 0x348($s0)
    ctx->pc = 0x4c43b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 840)));
label_4c43bc:
    // 0x4c43bc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4c43bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4c43c0:
    // 0x4c43c0: 0xae020280  sw          $v0, 0x280($s0)
    ctx->pc = 0x4c43c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 2));
label_4c43c4:
    // 0x4c43c4: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x4c43c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_4c43c8:
    // 0x4c43c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c43c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4c43cc:
    // 0x4c43cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c43ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4c43d0:
    // 0x4c43d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c43d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4c43d4:
    // 0x4c43d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c43d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4c43d8:
    // 0x4c43d8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c43d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c43dc:
    // 0x4c43dc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4c43dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4c43e0:
    // 0x4c43e0: 0x3e00008  jr          $ra
label_4c43e4:
    if (ctx->pc == 0x4C43E4u) {
        ctx->pc = 0x4C43E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C43E0u;
        // 0x4c43e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C43E8u;
        goto label_fallthrough_0x4c43e0;
    }
    ctx->pc = 0x4C43E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C43E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C43E0u;
        // 0x4c43e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C43E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4c43e0:
    ctx->pc = 0x4C43E8u;
}
