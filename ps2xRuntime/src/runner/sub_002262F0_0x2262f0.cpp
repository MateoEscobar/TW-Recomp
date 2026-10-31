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

// Function: sub_002262F0
// Address: 0x2262f0 - 0x2263d8
void sub_002262F0_0x2262f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002262F0_0x2262f0");
#endif

    switch (ctx->pc) {
        case 0x2262f0u: goto label_2262f0;
        case 0x2262f4u: goto label_2262f4;
        case 0x2262f8u: goto label_2262f8;
        case 0x2262fcu: goto label_2262fc;
        case 0x226300u: goto label_226300;
        case 0x226304u: goto label_226304;
        case 0x226308u: goto label_226308;
        case 0x22630cu: goto label_22630c;
        case 0x226310u: goto label_226310;
        case 0x226314u: goto label_226314;
        case 0x226318u: goto label_226318;
        case 0x22631cu: goto label_22631c;
        case 0x226320u: goto label_226320;
        case 0x226324u: goto label_226324;
        case 0x226328u: goto label_226328;
        case 0x22632cu: goto label_22632c;
        case 0x226330u: goto label_226330;
        case 0x226334u: goto label_226334;
        case 0x226338u: goto label_226338;
        case 0x22633cu: goto label_22633c;
        case 0x226340u: goto label_226340;
        case 0x226344u: goto label_226344;
        case 0x226348u: goto label_226348;
        case 0x22634cu: goto label_22634c;
        case 0x226350u: goto label_226350;
        case 0x226354u: goto label_226354;
        case 0x226358u: goto label_226358;
        case 0x22635cu: goto label_22635c;
        case 0x226360u: goto label_226360;
        case 0x226364u: goto label_226364;
        case 0x226368u: goto label_226368;
        case 0x22636cu: goto label_22636c;
        case 0x226370u: goto label_226370;
        case 0x226374u: goto label_226374;
        case 0x226378u: goto label_226378;
        case 0x22637cu: goto label_22637c;
        case 0x226380u: goto label_226380;
        case 0x226384u: goto label_226384;
        case 0x226388u: goto label_226388;
        case 0x22638cu: goto label_22638c;
        case 0x226390u: goto label_226390;
        case 0x226394u: goto label_226394;
        case 0x226398u: goto label_226398;
        case 0x22639cu: goto label_22639c;
        case 0x2263a0u: goto label_2263a0;
        case 0x2263a4u: goto label_2263a4;
        case 0x2263a8u: goto label_2263a8;
        case 0x2263acu: goto label_2263ac;
        case 0x2263b0u: goto label_2263b0;
        case 0x2263b4u: goto label_2263b4;
        case 0x2263b8u: goto label_2263b8;
        case 0x2263bcu: goto label_2263bc;
        case 0x2263c0u: goto label_2263c0;
        case 0x2263c4u: goto label_2263c4;
        case 0x2263c8u: goto label_2263c8;
        case 0x2263ccu: goto label_2263cc;
        case 0x2263d0u: goto label_2263d0;
        case 0x2263d4u: goto label_2263d4;
        default: break;
    }

    ctx->pc = 0x2262f0u;

label_2262f0:
    // 0x2262f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2262f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2262f4:
    // 0x2262f4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2262f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2262f8:
    // 0x2262f8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2262f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_2262fc:
    // 0x2262fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2262fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_226300:
    // 0x226300: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x226300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_226304:
    // 0x226304: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x226304u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_226308:
    // 0x226308: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x226308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_22630c:
    // 0x22630c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22630cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_226310:
    // 0x226310: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x226310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_226314:
    // 0x226314: 0x8e4505a4  lw          $a1, 0x5A4($s2)
    ctx->pc = 0x226314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1444)));
label_226318:
    // 0x226318: 0x10a00026  beqz        $a1, . + 4 + (0x26 << 2)
label_22631c:
    if (ctx->pc == 0x22631Cu) {
        ctx->pc = 0x22631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226318u;
        // 0x22631c: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226320u;
        goto label_226320;
    }
    ctx->pc = 0x226318u;
    {
        const bool branch_taken_0x226318 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226318u;
        // 0x22631c: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226318) {
            ctx->pc = 0x2263B4u;
            goto label_2263b4;
        }
    }
    ctx->pc = 0x226320u;
label_226320:
    // 0x226320: 0x8e662b04  lw          $a2, 0x2B04($s3)
    ctx->pc = 0x226320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_226324:
    // 0x226324: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x226324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_226328:
    // 0x226328: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x226328u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_22632c:
    // 0x22632c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x22632cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_226330:
    // 0x226330: 0x40f809  jalr        $v0
label_226334:
    if (ctx->pc == 0x226334u) {
        ctx->pc = 0x226334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226330u;
        // 0x226334: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226338u;
        goto label_226338;
    }
    ctx->pc = 0x226330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x226338u);
        ctx->pc = 0x226334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226330u;
        // 0x226334: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226330u, 0x226338u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x226338u;
label_226338:
    // 0x226338: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_22633c:
    if (ctx->pc == 0x22633Cu) {
        ctx->pc = 0x22633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226338u;
        // 0x22633c: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226340u;
        goto label_226340;
    }
    ctx->pc = 0x226338u;
    {
        const bool branch_taken_0x226338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226338u;
        // 0x22633c: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226338) {
            ctx->pc = 0x2263B4u;
            goto label_2263b4;
        }
    }
    ctx->pc = 0x226340u;
label_226340:
    // 0x226340: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x226340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_226344:
    // 0x226344: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x226344u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_226348:
    // 0x226348: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x226348u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_22634c:
    // 0x22634c: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x22634cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_226350:
    // 0x226350: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x226350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_226354:
    // 0x226354: 0x26310058  addiu       $s1, $s1, 0x58
    ctx->pc = 0x226354u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_226358:
    // 0x226358: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x226358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_22635c:
    // 0x22635c: 0x40f809  jalr        $v0
label_226360:
    if (ctx->pc == 0x226360u) {
        ctx->pc = 0x226360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22635Cu;
        // 0x226360: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226364u;
        goto label_226364;
    }
    ctx->pc = 0x22635Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x226364u);
        ctx->pc = 0x226360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22635Cu;
        // 0x226360: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22635Cu, 0x226364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x226364u;
label_226364:
    // 0x226364: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x226364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_226368:
    // 0x226368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22636c:
    // 0x22636c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x22636cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_226370:
    // 0x226370: 0x40f809  jalr        $v0
label_226374:
    if (ctx->pc == 0x226374u) {
        ctx->pc = 0x226374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226370u;
        // 0x226374: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226378u;
        goto label_226378;
    }
    ctx->pc = 0x226370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x226378u);
        ctx->pc = 0x226374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226370u;
        // 0x226374: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226370u, 0x226378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x226378u;
label_226378:
    // 0x226378: 0x8e662b04  lw          $a2, 0x2B04($s3)
    ctx->pc = 0x226378u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_22637c:
    // 0x22637c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x22637cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_226380:
    // 0x226380: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x226380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_226384:
    // 0x226384: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x226384u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_226388:
    // 0x226388: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x226388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_22638c:
    // 0x22638c: 0x60f809  jalr        $v1
label_226390:
    if (ctx->pc == 0x226390u) {
        ctx->pc = 0x226390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22638Cu;
        // 0x226390: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226394u;
        goto label_226394;
    }
    ctx->pc = 0x22638Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x226394u);
        ctx->pc = 0x226390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22638Cu;
        // 0x226390: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22638Cu, 0x226394u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x226394u;
label_226394:
    // 0x226394: 0x8e672b04  lw          $a3, 0x2B04($s3)
    ctx->pc = 0x226394u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_226398:
    // 0x226398: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x226398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22639c:
    // 0x22639c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22639cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2263a0:
    // 0x2263a0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2263a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2263a4:
    // 0x2263a4: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x2263a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_2263a8:
    // 0x2263a8: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x2263a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_2263ac:
    // 0x2263ac: 0x60f809  jalr        $v1
label_2263b0:
    if (ctx->pc == 0x2263B0u) {
        ctx->pc = 0x2263B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2263ACu;
        // 0x2263b0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2263B4u;
        goto label_2263b4;
    }
    ctx->pc = 0x2263ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2263B4u);
        ctx->pc = 0x2263B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2263ACu;
        // 0x2263b0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2263ACu, 0x2263B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2263B4u;
label_2263b4:
    // 0x2263b4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2263b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2263b8:
    // 0x2263b8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2263b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2263bc:
    // 0x2263bc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2263bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2263c0:
    // 0x2263c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2263c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2263c4:
    // 0x2263c4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2263c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2263c8:
    // 0x2263c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2263c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2263cc:
    // 0x2263cc: 0x3e00008  jr          $ra
label_2263d0:
    if (ctx->pc == 0x2263D0u) {
        ctx->pc = 0x2263D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2263CCu;
        // 0x2263d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2263D4u;
        goto label_2263d4;
    }
    ctx->pc = 0x2263CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2263D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2263CCu;
        // 0x2263d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2263CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2263D4u;
label_2263d4:
    // 0x2263d4: 0x0  nop
    ctx->pc = 0x2263d4u;
    // NOP
    ctx->pc = 0x2263d8u;
}
