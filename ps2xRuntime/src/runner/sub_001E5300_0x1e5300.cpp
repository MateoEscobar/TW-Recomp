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

// Function: sub_001E5300
// Address: 0x1e5300 - 0x1e5438
void sub_001E5300_0x1e5300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5300_0x1e5300");
#endif

    switch (ctx->pc) {
        case 0x1e5300u: goto label_1e5300;
        case 0x1e5304u: goto label_1e5304;
        case 0x1e5308u: goto label_1e5308;
        case 0x1e530cu: goto label_1e530c;
        case 0x1e5310u: goto label_1e5310;
        case 0x1e5314u: goto label_1e5314;
        case 0x1e5318u: goto label_1e5318;
        case 0x1e531cu: goto label_1e531c;
        case 0x1e5320u: goto label_1e5320;
        case 0x1e5324u: goto label_1e5324;
        case 0x1e5328u: goto label_1e5328;
        case 0x1e532cu: goto label_1e532c;
        case 0x1e5330u: goto label_1e5330;
        case 0x1e5334u: goto label_1e5334;
        case 0x1e5338u: goto label_1e5338;
        case 0x1e533cu: goto label_1e533c;
        case 0x1e5340u: goto label_1e5340;
        case 0x1e5344u: goto label_1e5344;
        case 0x1e5348u: goto label_1e5348;
        case 0x1e534cu: goto label_1e534c;
        case 0x1e5350u: goto label_1e5350;
        case 0x1e5354u: goto label_1e5354;
        case 0x1e5358u: goto label_1e5358;
        case 0x1e535cu: goto label_1e535c;
        case 0x1e5360u: goto label_1e5360;
        case 0x1e5364u: goto label_1e5364;
        case 0x1e5368u: goto label_1e5368;
        case 0x1e536cu: goto label_1e536c;
        case 0x1e5370u: goto label_1e5370;
        case 0x1e5374u: goto label_1e5374;
        case 0x1e5378u: goto label_1e5378;
        case 0x1e537cu: goto label_1e537c;
        case 0x1e5380u: goto label_1e5380;
        case 0x1e5384u: goto label_1e5384;
        case 0x1e5388u: goto label_1e5388;
        case 0x1e538cu: goto label_1e538c;
        case 0x1e5390u: goto label_1e5390;
        case 0x1e5394u: goto label_1e5394;
        case 0x1e5398u: goto label_1e5398;
        case 0x1e539cu: goto label_1e539c;
        case 0x1e53a0u: goto label_1e53a0;
        case 0x1e53a4u: goto label_1e53a4;
        case 0x1e53a8u: goto label_1e53a8;
        case 0x1e53acu: goto label_1e53ac;
        case 0x1e53b0u: goto label_1e53b0;
        case 0x1e53b4u: goto label_1e53b4;
        case 0x1e53b8u: goto label_1e53b8;
        case 0x1e53bcu: goto label_1e53bc;
        case 0x1e53c0u: goto label_1e53c0;
        case 0x1e53c4u: goto label_1e53c4;
        case 0x1e53c8u: goto label_1e53c8;
        case 0x1e53ccu: goto label_1e53cc;
        case 0x1e53d0u: goto label_1e53d0;
        case 0x1e53d4u: goto label_1e53d4;
        case 0x1e53d8u: goto label_1e53d8;
        case 0x1e53dcu: goto label_1e53dc;
        case 0x1e53e0u: goto label_1e53e0;
        case 0x1e53e4u: goto label_1e53e4;
        case 0x1e53e8u: goto label_1e53e8;
        case 0x1e53ecu: goto label_1e53ec;
        case 0x1e53f0u: goto label_1e53f0;
        case 0x1e53f4u: goto label_1e53f4;
        case 0x1e53f8u: goto label_1e53f8;
        case 0x1e53fcu: goto label_1e53fc;
        case 0x1e5400u: goto label_1e5400;
        case 0x1e5404u: goto label_1e5404;
        case 0x1e5408u: goto label_1e5408;
        case 0x1e540cu: goto label_1e540c;
        case 0x1e5410u: goto label_1e5410;
        case 0x1e5414u: goto label_1e5414;
        case 0x1e5418u: goto label_1e5418;
        case 0x1e541cu: goto label_1e541c;
        case 0x1e5420u: goto label_1e5420;
        case 0x1e5424u: goto label_1e5424;
        case 0x1e5428u: goto label_1e5428;
        case 0x1e542cu: goto label_1e542c;
        case 0x1e5430u: goto label_1e5430;
        case 0x1e5434u: goto label_1e5434;
        default: break;
    }

    ctx->pc = 0x1e5300u;

label_1e5300:
    // 0x1e5300: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e5300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e5304:
    // 0x1e5304: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1e5304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1e5308:
    // 0x1e5308: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1e5308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1e530c:
    // 0x1e530c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e530cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e5310:
    // 0x1e5310: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e5310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1e5314:
    // 0x1e5314: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1e5314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1e5318:
    // 0x1e5318: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1e5318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1e531c:
    // 0x1e531c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e531cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e5320:
    // 0x1e5320: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e5320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1e5324:
    // 0x1e5324: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_1e5328:
    if (ctx->pc == 0x1E5328u) {
        ctx->pc = 0x1E5328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5324u;
        // 0x1e5328: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E532Cu;
        goto label_1e532c;
    }
    ctx->pc = 0x1E5324u;
    {
        const bool branch_taken_0x1e5324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5324u;
        // 0x1e5328: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5324) {
            ctx->pc = 0x1E541Cu;
            goto label_1e541c;
        }
    }
    ctx->pc = 0x1E532Cu;
label_1e532c:
    // 0x1e532c: 0x8e220950  lw          $v0, 0x950($s1)
    ctx->pc = 0x1e532cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2384)));
label_1e5330:
    // 0x1e5330: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_1e5334:
    if (ctx->pc == 0x1E5334u) {
        ctx->pc = 0x1E5334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5330u;
        // 0x1e5334: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5338u;
        goto label_1e5338;
    }
    ctx->pc = 0x1E5330u;
    {
        const bool branch_taken_0x1e5330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5330u;
        // 0x1e5334: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5330) {
            ctx->pc = 0x1E5390u;
            goto label_1e5390;
        }
    }
    ctx->pc = 0x1E5338u;
label_1e5338:
    // 0x1e5338: 0x26300940  addiu       $s0, $s1, 0x940
    ctx->pc = 0x1e5338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2368));
label_1e533c:
    // 0x1e533c: 0x0  nop
    ctx->pc = 0x1e533cu;
    // NOP
label_1e5340:
    // 0x1e5340: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e5340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e5344:
    // 0x1e5344: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
label_1e5348:
    if (ctx->pc == 0x1E5348u) {
        ctx->pc = 0x1E5348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5344u;
        // 0x1e5348: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E534Cu;
        goto label_1e534c;
    }
    ctx->pc = 0x1E5344u;
    {
        const bool branch_taken_0x1e5344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5344) {
            ctx->pc = 0x1E5348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5344u;
            // 0x1e5348: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E537Cu;
            goto label_1e537c;
        }
    }
    ctx->pc = 0x1E534Cu;
label_1e534c:
    // 0x1e534c: 0x8e220948  lw          $v0, 0x948($s1)
    ctx->pc = 0x1e534cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2376)));
label_1e5350:
    // 0x1e5350: 0x5642000a  bnel        $s2, $v0, . + 4 + (0xA << 2)
label_1e5354:
    if (ctx->pc == 0x1E5354u) {
        ctx->pc = 0x1E5354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5350u;
        // 0x1e5354: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5358u;
        goto label_1e5358;
    }
    ctx->pc = 0x1E5350u;
    {
        const bool branch_taken_0x1e5350 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5350) {
            ctx->pc = 0x1E5354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5350u;
            // 0x1e5354: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E537Cu;
            goto label_1e537c;
        }
    }
    ctx->pc = 0x1E5358u;
label_1e5358:
    // 0x1e5358: 0x92220954  lbu         $v0, 0x954($s1)
    ctx->pc = 0x1e5358u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2388)));
label_1e535c:
    // 0x1e535c: 0xa0620130  sb          $v0, 0x130($v1)
    ctx->pc = 0x1e535cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 304), (uint8_t)GPR_U32(ctx, 2));
label_1e5360:
    // 0x1e5360: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1e5360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e5364:
    // 0x1e5364: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e5364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e5368:
    // 0x1e5368: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1e5368u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1e536c:
    // 0x1e536c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1e536cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1e5370:
    // 0x1e5370: 0x60f809  jalr        $v1
label_1e5374:
    if (ctx->pc == 0x1E5374u) {
        ctx->pc = 0x1E5374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5370u;
        // 0x1e5374: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5378u;
        goto label_1e5378;
    }
    ctx->pc = 0x1E5370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E5378u);
        ctx->pc = 0x1E5374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5370u;
        // 0x1e5374: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5370u, 0x1E5378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E5378u;
label_1e5378:
    // 0x1e5378: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e5378u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e537c:
    // 0x1e537c: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x1e537cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1e5380:
    // 0x1e5380: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_1e5384:
    if (ctx->pc == 0x1E5384u) {
        ctx->pc = 0x1E5384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5380u;
        // 0x1e5384: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5388u;
        goto label_1e5388;
    }
    ctx->pc = 0x1E5380u;
    {
        const bool branch_taken_0x1e5380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5380u;
        // 0x1e5384: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5380) {
            ctx->pc = 0x1E5340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5340;
        }
    }
    ctx->pc = 0x1E5388u;
label_1e5388:
    // 0x1e5388: 0x10000024  b           . + 4 + (0x24 << 2)
label_1e538c:
    if (ctx->pc == 0x1E538Cu) {
        ctx->pc = 0x1E538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5388u;
        // 0x1e538c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5390u;
        goto label_1e5390;
    }
    ctx->pc = 0x1E5388u;
    {
        const bool branch_taken_0x1e5388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5388u;
        // 0x1e538c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5388) {
            ctx->pc = 0x1E541Cu;
            goto label_1e541c;
        }
    }
    ctx->pc = 0x1E5390u;
label_1e5390:
    // 0x1e5390: 0x3c140060  lui         $s4, 0x60
    ctx->pc = 0x1e5390u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
label_1e5394:
    // 0x1e5394: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x1e5394u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
label_1e5398:
    // 0x1e5398: 0x263007a0  addiu       $s0, $s1, 0x7A0
    ctx->pc = 0x1e5398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1952));
label_1e539c:
    // 0x1e539c: 0x0  nop
    ctx->pc = 0x1e539cu;
    // NOP
label_1e53a0:
    // 0x1e53a0: 0x8e220948  lw          $v0, 0x948($s1)
    ctx->pc = 0x1e53a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2376)));
label_1e53a4:
    // 0x1e53a4: 0x1642000b  bne         $s2, $v0, . + 4 + (0xB << 2)
label_1e53a8:
    if (ctx->pc == 0x1E53A8u) {
        ctx->pc = 0x1E53A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E53A4u;
        // 0x1e53a8: 0x92250954  lbu         $a1, 0x954($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E53ACu;
        goto label_1e53ac;
    }
    ctx->pc = 0x1E53A4u;
    {
        const bool branch_taken_0x1e53a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E53A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E53A4u;
        // 0x1e53a8: 0x92250954  lbu         $a1, 0x954($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e53a4) {
            ctx->pc = 0x1E53D4u;
            goto label_1e53d4;
        }
    }
    ctx->pc = 0x1E53ACu;
label_1e53ac:
    // 0x1e53ac: 0xc073476  jal         func_1CD1D8
label_1e53b0:
    if (ctx->pc == 0x1E53B0u) {
        ctx->pc = 0x1E53B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E53ACu;
        // 0x1e53b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E53B4u;
        goto label_1e53b4;
    }
    ctx->pc = 0x1E53ACu;
    SET_GPR_U32(ctx, 31, 0x1E53B4u);
    ctx->pc = 0x1E53B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E53ACu;
    // 0x1e53b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1D8u, 0x1E53ACu, 0x1E53B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E53B4u;
label_1e53b4:
    // 0x1e53b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e53b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e53b8:
    // 0x1e53b8: 0x2685d310  addiu       $a1, $s4, -0x2CF0
    ctx->pc = 0x1e53b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294955792));
label_1e53bc:
    // 0x1e53bc: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1e53bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1e53c0:
    // 0x1e53c0: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1e53c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1e53c4:
    // 0x1e53c4: 0x60f809  jalr        $v1
label_1e53c8:
    if (ctx->pc == 0x1E53C8u) {
        ctx->pc = 0x1E53C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E53C4u;
        // 0x1e53c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E53CCu;
        goto label_1e53cc;
    }
    ctx->pc = 0x1E53C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E53CCu);
        ctx->pc = 0x1E53C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E53C4u;
        // 0x1e53c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E53C4u, 0x1E53CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E53CCu;
label_1e53cc:
    // 0x1e53cc: 0x1000000a  b           . + 4 + (0xA << 2)
label_1e53d0:
    if (ctx->pc == 0x1E53D0u) {
        ctx->pc = 0x1E53D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E53CCu;
        // 0x1e53d0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E53D4u;
        goto label_1e53d4;
    }
    ctx->pc = 0x1E53CCu;
    {
        const bool branch_taken_0x1e53cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E53D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E53CCu;
        // 0x1e53d0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e53cc) {
            ctx->pc = 0x1E53F8u;
            goto label_1e53f8;
        }
    }
    ctx->pc = 0x1E53D4u;
label_1e53d4:
    // 0x1e53d4: 0xc073476  jal         func_1CD1D8
label_1e53d8:
    if (ctx->pc == 0x1E53D8u) {
        ctx->pc = 0x1E53D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E53D4u;
        // 0x1e53d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E53DCu;
        goto label_1e53dc;
    }
    ctx->pc = 0x1E53D4u;
    SET_GPR_U32(ctx, 31, 0x1E53DCu);
    ctx->pc = 0x1E53D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E53D4u;
    // 0x1e53d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1D8u, 0x1E53D4u, 0x1E53DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E53DCu;
label_1e53dc:
    // 0x1e53dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e53dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e53e0:
    // 0x1e53e0: 0x2665d320  addiu       $a1, $s3, -0x2CE0
    ctx->pc = 0x1e53e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294955808));
label_1e53e4:
    // 0x1e53e4: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1e53e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1e53e8:
    // 0x1e53e8: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1e53e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1e53ec:
    // 0x1e53ec: 0x60f809  jalr        $v1
label_1e53f0:
    if (ctx->pc == 0x1E53F0u) {
        ctx->pc = 0x1E53F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E53ECu;
        // 0x1e53f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E53F4u;
        goto label_1e53f4;
    }
    ctx->pc = 0x1E53ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E53F4u);
        ctx->pc = 0x1E53F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E53ECu;
        // 0x1e53f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E53ECu, 0x1E53F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E53F4u;
label_1e53f4:
    // 0x1e53f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e53f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e53f8:
    // 0x1e53f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e53f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e53fc:
    // 0x1e53fc: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1e53fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1e5400:
    // 0x1e5400: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1e5400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1e5404:
    // 0x1e5404: 0x60f809  jalr        $v1
label_1e5408:
    if (ctx->pc == 0x1E5408u) {
        ctx->pc = 0x1E5408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5404u;
        // 0x1e5408: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E540Cu;
        goto label_1e540c;
    }
    ctx->pc = 0x1E5404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E540Cu);
        ctx->pc = 0x1E5408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5404u;
        // 0x1e5408: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5404u, 0x1E540Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E540Cu;
label_1e540c:
    // 0x1e540c: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x1e540cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1e5410:
    // 0x1e5410: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_1e5414:
    if (ctx->pc == 0x1E5414u) {
        ctx->pc = 0x1E5414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5410u;
        // 0x1e5414: 0x261000d0  addiu       $s0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5418u;
        goto label_1e5418;
    }
    ctx->pc = 0x1E5410u;
    {
        const bool branch_taken_0x1e5410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5410u;
        // 0x1e5414: 0x261000d0  addiu       $s0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5410) {
            ctx->pc = 0x1E53A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e53a0;
        }
    }
    ctx->pc = 0x1E5418u;
label_1e5418:
    // 0x1e5418: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1e5418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e541c:
    // 0x1e541c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1e541cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e5420:
    // 0x1e5420: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e5420u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e5424:
    // 0x1e5424: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1e5424u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e5428:
    // 0x1e5428: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1e5428u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e542c:
    // 0x1e542c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e542cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e5430:
    // 0x1e5430: 0x3e00008  jr          $ra
label_1e5434:
    if (ctx->pc == 0x1E5434u) {
        ctx->pc = 0x1E5434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5430u;
        // 0x1e5434: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5438u;
        goto label_fallthrough_0x1e5430;
    }
    ctx->pc = 0x1E5430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5430u;
        // 0x1e5434: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e5430:
    ctx->pc = 0x1E5438u;
}
