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

// Function: sub_002B52C0
// Address: 0x2b52c0 - 0x2b54d8
void sub_002B52C0_0x2b52c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B52C0_0x2b52c0");
#endif

    switch (ctx->pc) {
        case 0x2b52ecu: goto label_2b52ec;
        case 0x2b52fcu: goto label_2b52fc;
        case 0x2b5304u: goto label_2b5304;
        case 0x2b5330u: goto label_2b5330;
        case 0x2b5384u: goto label_2b5384;
        case 0x2b53c8u: goto label_2b53c8;
        case 0x2b5428u: goto label_2b5428;
        case 0x2b547cu: goto label_2b547c;
        case 0x2b5484u: goto label_2b5484;
        case 0x2b54b8u: goto label_2b54b8;
        default: break;
    }

    ctx->pc = 0x2b52c0u;

    // 0x2b52c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2b52c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2b52c4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2b52c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2b52c8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2b52c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2b52cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b52ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b52d0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2b52d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2b52d4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2b52d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2b52d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2b52d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2b52dc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2b52dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b52e0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2b52e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b52e4: 0xc08bfbc  jal         func_22FEF0
    ctx->pc = 0x2B52E4u;
    SET_GPR_U32(ctx, 31, 0x2B52ECu);
    ctx->pc = 0x2B52E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B52E4u;
    // 0x2b52e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2B52E4u, 0x2B52ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B52ECu;
label_2b52ec:
    // 0x2b52ec: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2b52ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b52f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b52f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b52f4: 0xc0a33f8  jal         func_28CFE0
    ctx->pc = 0x2B52F4u;
    SET_GPR_U32(ctx, 31, 0x2B52FCu);
    ctx->pc = 0x2B52F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B52F4u;
    // 0x2b52f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2B52F4u, 0x2B52FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B52FCu;
label_2b52fc:
    // 0x2b52fc: 0xc089f66  jal         func_227D98
    ctx->pc = 0x2B52FCu;
    SET_GPR_U32(ctx, 31, 0x2B5304u);
    ctx->pc = 0x2B5300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B52FCu;
    // 0x2b5300: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x2B52FCu, 0x2B5304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5304u;
label_2b5304:
    // 0x2b5304: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5304u;
    {
        const bool branch_taken_0x2b5304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5304) {
            ctx->pc = 0x2B5308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5304u;
            // 0x2b5308: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5314u;
            goto label_2b5314;
        }
    }
    ctx->pc = 0x2B530Cu;
    // 0x2b530c: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2B530Cu;
    {
        const bool branch_taken_0x2b530c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B530Cu;
        // 0x2b5310: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b530c) {
            ctx->pc = 0x2B54BCu;
            goto label_2b54bc;
        }
    }
    ctx->pc = 0x2B5314u;
label_2b5314:
    // 0x2b5314: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2b5314u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x2b5318: 0x1c400067  bgtz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x2B5318u;
    {
        const bool branch_taken_0x2b5318 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5318u;
        // 0x2b531c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5318) {
            ctx->pc = 0x2B54B8u;
            goto label_2b54b8;
        }
    }
    ctx->pc = 0x2B5320u;
    // 0x2b5320: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2b5320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2b5324: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b5324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5328: 0xc089998  jal         func_226660
    ctx->pc = 0x2B5328u;
    SET_GPR_U32(ctx, 31, 0x2B5330u);
    ctx->pc = 0x2B532Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5328u;
    // 0x2b532c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2B5328u, 0x2B5330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5330u;
label_2b5330:
    // 0x2b5330: 0x10530062  beq         $v0, $s3, . + 4 + (0x62 << 2)
    ctx->pc = 0x2B5330u;
    {
        const bool branch_taken_0x2b5330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2B5334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5330u;
        // 0x2b5334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5330) {
            ctx->pc = 0x2B54BCu;
            goto label_2b54bc;
        }
    }
    ctx->pc = 0x2B5338u;
    // 0x2b5338: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2b5338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b533c: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x2b533cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
    // 0x2b5340: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B5340u;
    {
        const bool branch_taken_0x2b5340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5340u;
        // 0x2b5344: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5340) {
            ctx->pc = 0x2B5370u;
            goto label_2b5370;
        }
    }
    ctx->pc = 0x2B5348u;
    // 0x2b5348: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x2b5348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x2b534c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2b534cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b5350: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B5350u;
    {
        const bool branch_taken_0x2b5350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5350) {
            ctx->pc = 0x2B5354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5350u;
            // 0x2b5354: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5358u;
            goto label_2b5358;
        }
    }
    ctx->pc = 0x2B5358u;
label_2b5358:
    // 0x2b5358: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2b5358u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2b535c: 0x1810  mfhi        $v1
    ctx->pc = 0x2b535cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2b5360: 0x50600055  beql        $v1, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x2B5360u;
    {
        const bool branch_taken_0x2b5360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5360) {
            ctx->pc = 0x2B5364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5360u;
            // 0x2b5364: 0xaca00284  sw          $zero, 0x284($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 644), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B54B8u;
            goto label_2b54b8;
        }
    }
    ctx->pc = 0x2B5368u;
    // 0x2b5368: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2B5368u;
    {
        const bool branch_taken_0x2b5368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5368u;
        // 0x2b536c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5368) {
            ctx->pc = 0x2B54BCu;
            goto label_2b54bc;
        }
    }
    ctx->pc = 0x2B5370u;
label_2b5370:
    // 0x2b5370: 0x92420015  lbu         $v0, 0x15($s2)
    ctx->pc = 0x2b5370u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 21)));
    // 0x2b5374: 0x54530005  bnel        $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5374u;
    {
        const bool branch_taken_0x2b5374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2b5374) {
            ctx->pc = 0x2B5378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5374u;
            // 0x2b5378: 0x8c640034  lw          $a0, 0x34($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B538Cu;
            goto label_2b538c;
        }
    }
    ctx->pc = 0x2B537Cu;
    // 0x2b537c: 0xc0ad464  jal         func_2B5190
    ctx->pc = 0x2B537Cu;
    SET_GPR_U32(ctx, 31, 0x2B5384u);
    ctx->pc = 0x2B5380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B537Cu;
    // 0x2b5380: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5190u, 0x2B537Cu, 0x2B5384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5384u;
label_2b5384:
    // 0x2b5384: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2B5384u;
    {
        const bool branch_taken_0x2b5384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5384u;
        // 0x2b5388: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5384) {
            ctx->pc = 0x2B54BCu;
            goto label_2b54bc;
        }
    }
    ctx->pc = 0x2B538Cu;
label_2b538c:
    // 0x2b538c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2b538cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2b5390: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B5390u;
    {
        const bool branch_taken_0x2b5390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5390) {
            ctx->pc = 0x2B5394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5390u;
            // 0x2b5394: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5398u;
            goto label_2b5398;
        }
    }
    ctx->pc = 0x2B5398u;
label_2b5398:
    // 0x2b5398: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2b5398u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2b539c: 0x1810  mfhi        $v1
    ctx->pc = 0x2b539cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2b53a0: 0x14600046  bnez        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x2B53A0u;
    {
        const bool branch_taken_0x2b53a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B53A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B53A0u;
        // 0x2b53a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b53a0) {
            ctx->pc = 0x2B54BCu;
            goto label_2b54bc;
        }
    }
    ctx->pc = 0x2B53A8u;
    // 0x2b53a8: 0x86300092  lh          $s0, 0x92($s1)
    ctx->pc = 0x2b53a8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x2b53ac: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2b53acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2b53b0: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2b53b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2b53b4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2b53b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b53b8: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2b53b8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2b53bc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2b53bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b53c0: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x2B53C0u;
    SET_GPR_U32(ctx, 31, 0x2B53C8u);
    ctx->pc = 0x2B53C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B53C0u;
    // 0x2b53c4: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2B53C0u, 0x2B53C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B53C8u;
label_2b53c8:
    // 0x2b53c8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2b53c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2b53cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b53ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b53d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b53d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b53d4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2b53d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b53d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b53d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b53dc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2b53dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b53e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b53e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b53e4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2b53e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2b53e8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2b53e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2b53ec: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2b53ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2b53f0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2b53f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b53f4: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x2b53f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b53f8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2b53f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2b53fc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2b53fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2b5400: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2b5400u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2b5404: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2b5404u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2b5408: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2b5408u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2b540c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2b540cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2b5410: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2b5410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2b5414: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2b5414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x2b5418: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2b5418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2b541c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2b541cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x2b5420: 0xc088878  jal         func_2221E0
    ctx->pc = 0x2B5420u;
    SET_GPR_U32(ctx, 31, 0x2B5428u);
    ctx->pc = 0x2B5424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5420u;
    // 0x2b5424: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221E0u, 0x2B5420u, 0x2B5428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5428u;
label_2b5428:
    // 0x2b5428: 0x14530024  bne         $v0, $s3, . + 4 + (0x24 << 2)
    ctx->pc = 0x2B5428u;
    {
        const bool branch_taken_0x2b5428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2B542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5428u;
        // 0x2b542c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5428) {
            ctx->pc = 0x2B54BCu;
            goto label_2b54bc;
        }
    }
    ctx->pc = 0x2B5430u;
    // 0x2b5430: 0xc6210238  lwc1        $f1, 0x238($s1)
    ctx->pc = 0x2b5430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5434: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x2b5434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
    // 0x2b5438: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2b5438u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x2b543c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b543cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5440: 0x0  nop
    ctx->pc = 0x2b5440u;
    // NOP
    // 0x2b5444: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b5444u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b5448: 0x0  nop
    ctx->pc = 0x2b5448u;
    // NOP
    // 0x2b544c: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x2B544Cu;
    {
        const bool branch_taken_0x2b544c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B5450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B544Cu;
        // 0x2b5450: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b544c) {
            ctx->pc = 0x2B54BCu;
            goto label_2b54bc;
        }
    }
    ctx->pc = 0x2B5454u;
    // 0x2b5454: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2b5454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2b5458: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b5458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b545c: 0x8e09bd30  lw          $t1, -0x42D0($s0)
    ctx->pc = 0x2b545cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950192)));
    // 0x2b5460: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b5460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5464: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2b5464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b5468: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b5468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b546c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2b546cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5470: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2b5470u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5474: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2B5474u;
    SET_GPR_U32(ctx, 31, 0x2B547Cu);
    ctx->pc = 0x2B5478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5474u;
    // 0x2b5478: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2B5474u, 0x2B547Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B547Cu;
label_2b547c:
    // 0x2b547c: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2B547Cu;
    SET_GPR_U32(ctx, 31, 0x2B5484u);
    ctx->pc = 0x2B5480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B547Cu;
    // 0x2b5480: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B547Cu, 0x2B5484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5484u;
label_2b5484:
    // 0x2b5484: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B5484u;
    {
        const bool branch_taken_0x2b5484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5484u;
        // 0x2b5488: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5484) {
            ctx->pc = 0x2B54B8u;
            goto label_2b54b8;
        }
    }
    ctx->pc = 0x2B548Cu;
    // 0x2b548c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2b548cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b5490: 0x8e0abd30  lw          $t2, -0x42D0($s0)
    ctx->pc = 0x2b5490u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950192)));
    // 0x2b5494: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2b5494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5498: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2b5498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2b549c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2b549cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2b54a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b54a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b54a4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2b54a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b54a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b54a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b54ac: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2b54acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b54b0: 0xc0bee7a  jal         func_2FB9E8
    ctx->pc = 0x2B54B0u;
    SET_GPR_U32(ctx, 31, 0x2B54B8u);
    ctx->pc = 0x2B54B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B54B0u;
    // 0x2b54b4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2B54B0u, 0x2B54B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B54B8u;
label_2b54b8:
    // 0x2b54b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b54b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b54bc:
    // 0x2b54bc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2b54bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b54c0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2b54c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b54c4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2b54c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b54c8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2b54c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b54cc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2b54ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b54d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B54D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B54D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B54D0u;
        // 0x2b54d4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B54D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B54D8u;
}
