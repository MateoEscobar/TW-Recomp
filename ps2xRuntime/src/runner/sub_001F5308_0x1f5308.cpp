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

// Function: sub_001F5308
// Address: 0x1f5308 - 0x1f5450
void sub_001F5308_0x1f5308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5308_0x1f5308");
#endif

    switch (ctx->pc) {
        case 0x1f5308u: goto label_1f5308;
        case 0x1f530cu: goto label_1f530c;
        case 0x1f5310u: goto label_1f5310;
        case 0x1f5314u: goto label_1f5314;
        case 0x1f5318u: goto label_1f5318;
        case 0x1f531cu: goto label_1f531c;
        case 0x1f5320u: goto label_1f5320;
        case 0x1f5324u: goto label_1f5324;
        case 0x1f5328u: goto label_1f5328;
        case 0x1f532cu: goto label_1f532c;
        case 0x1f5330u: goto label_1f5330;
        case 0x1f5334u: goto label_1f5334;
        case 0x1f5338u: goto label_1f5338;
        case 0x1f533cu: goto label_1f533c;
        case 0x1f5340u: goto label_1f5340;
        case 0x1f5344u: goto label_1f5344;
        case 0x1f5348u: goto label_1f5348;
        case 0x1f534cu: goto label_1f534c;
        case 0x1f5350u: goto label_1f5350;
        case 0x1f5354u: goto label_1f5354;
        case 0x1f5358u: goto label_1f5358;
        case 0x1f535cu: goto label_1f535c;
        case 0x1f5360u: goto label_1f5360;
        case 0x1f5364u: goto label_1f5364;
        case 0x1f5368u: goto label_1f5368;
        case 0x1f536cu: goto label_1f536c;
        case 0x1f5370u: goto label_1f5370;
        case 0x1f5374u: goto label_1f5374;
        case 0x1f5378u: goto label_1f5378;
        case 0x1f537cu: goto label_1f537c;
        case 0x1f5380u: goto label_1f5380;
        case 0x1f5384u: goto label_1f5384;
        case 0x1f5388u: goto label_1f5388;
        case 0x1f538cu: goto label_1f538c;
        case 0x1f5390u: goto label_1f5390;
        case 0x1f5394u: goto label_1f5394;
        case 0x1f5398u: goto label_1f5398;
        case 0x1f539cu: goto label_1f539c;
        case 0x1f53a0u: goto label_1f53a0;
        case 0x1f53a4u: goto label_1f53a4;
        case 0x1f53a8u: goto label_1f53a8;
        case 0x1f53acu: goto label_1f53ac;
        case 0x1f53b0u: goto label_1f53b0;
        case 0x1f53b4u: goto label_1f53b4;
        case 0x1f53b8u: goto label_1f53b8;
        case 0x1f53bcu: goto label_1f53bc;
        case 0x1f53c0u: goto label_1f53c0;
        case 0x1f53c4u: goto label_1f53c4;
        case 0x1f53c8u: goto label_1f53c8;
        case 0x1f53ccu: goto label_1f53cc;
        case 0x1f53d0u: goto label_1f53d0;
        case 0x1f53d4u: goto label_1f53d4;
        case 0x1f53d8u: goto label_1f53d8;
        case 0x1f53dcu: goto label_1f53dc;
        case 0x1f53e0u: goto label_1f53e0;
        case 0x1f53e4u: goto label_1f53e4;
        case 0x1f53e8u: goto label_1f53e8;
        case 0x1f53ecu: goto label_1f53ec;
        case 0x1f53f0u: goto label_1f53f0;
        case 0x1f53f4u: goto label_1f53f4;
        case 0x1f53f8u: goto label_1f53f8;
        case 0x1f53fcu: goto label_1f53fc;
        case 0x1f5400u: goto label_1f5400;
        case 0x1f5404u: goto label_1f5404;
        case 0x1f5408u: goto label_1f5408;
        case 0x1f540cu: goto label_1f540c;
        case 0x1f5410u: goto label_1f5410;
        case 0x1f5414u: goto label_1f5414;
        case 0x1f5418u: goto label_1f5418;
        case 0x1f541cu: goto label_1f541c;
        case 0x1f5420u: goto label_1f5420;
        case 0x1f5424u: goto label_1f5424;
        case 0x1f5428u: goto label_1f5428;
        case 0x1f542cu: goto label_1f542c;
        case 0x1f5430u: goto label_1f5430;
        case 0x1f5434u: goto label_1f5434;
        case 0x1f5438u: goto label_1f5438;
        case 0x1f543cu: goto label_1f543c;
        case 0x1f5440u: goto label_1f5440;
        case 0x1f5444u: goto label_1f5444;
        case 0x1f5448u: goto label_1f5448;
        case 0x1f544cu: goto label_1f544c;
        default: break;
    }

    ctx->pc = 0x1f5308u;

label_1f5308:
    // 0x1f5308: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f5308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f530c:
    // 0x1f530c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f530cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1f5310:
    // 0x1f5310: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f5310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f5314:
    // 0x1f5314: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f5314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f5318:
    // 0x1f5318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f5318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f531c:
    // 0x1f531c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f531cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f5320:
    // 0x1f5320: 0x8e0500a0  lw          $a1, 0xA0($s0)
    ctx->pc = 0x1f5320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_1f5324:
    // 0x1f5324: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f5324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f5328:
    // 0x1f5328: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1f5328u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1f532c:
    // 0x1f532c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1f532cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1f5330:
    // 0x1f5330: 0x40f809  jalr        $v0
label_1f5334:
    if (ctx->pc == 0x1F5334u) {
        ctx->pc = 0x1F5334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5330u;
        // 0x1f5334: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5338u;
        goto label_1f5338;
    }
    ctx->pc = 0x1F5330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F5338u);
        ctx->pc = 0x1F5334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5330u;
        // 0x1f5334: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5330u, 0x1F5338u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5338u;
label_1f5338:
    // 0x1f5338: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1f533c:
    if (ctx->pc == 0x1F533Cu) {
        ctx->pc = 0x1F533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5338u;
        // 0x1f533c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5340u;
        goto label_1f5340;
    }
    ctx->pc = 0x1F5338u;
    {
        const bool branch_taken_0x1f5338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5338u;
        // 0x1f533c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5338) {
            ctx->pc = 0x1F5350u;
            goto label_1f5350;
        }
    }
    ctx->pc = 0x1F5340u;
label_1f5340:
    // 0x1f5340: 0xc07d468  jal         func_1F51A0
label_1f5344:
    if (ctx->pc == 0x1F5344u) {
        ctx->pc = 0x1F5344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5340u;
        // 0x1f5344: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5348u;
        goto label_1f5348;
    }
    ctx->pc = 0x1F5340u;
    SET_GPR_U32(ctx, 31, 0x1F5348u);
    ctx->pc = 0x1F5344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5340u;
    // 0x1f5344: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F51A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F51A0u, 0x1F5340u, 0x1F5348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5348u;
label_1f5348:
    // 0x1f5348: 0x1000003c  b           . + 4 + (0x3C << 2)
label_1f534c:
    if (ctx->pc == 0x1F534Cu) {
        ctx->pc = 0x1F534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5348u;
        // 0x1f534c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5350u;
        goto label_1f5350;
    }
    ctx->pc = 0x1F5348u;
    {
        const bool branch_taken_0x1f5348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5348u;
        // 0x1f534c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5348) {
            ctx->pc = 0x1F543Cu;
            goto label_1f543c;
        }
    }
    ctx->pc = 0x1F5350u;
label_1f5350:
    // 0x1f5350: 0xc0750fa  jal         func_1D43E8
label_1f5354:
    if (ctx->pc == 0x1F5354u) {
        ctx->pc = 0x1F5354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5350u;
        // 0x1f5354: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5358u;
        goto label_1f5358;
    }
    ctx->pc = 0x1F5350u;
    SET_GPR_U32(ctx, 31, 0x1F5358u);
    ctx->pc = 0x1F5354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5350u;
    // 0x1f5354: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43E8u, 0x1F5350u, 0x1F5358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5358u;
label_1f5358:
    // 0x1f5358: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f5358u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f535c:
    // 0x1f535c: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x1f535cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1f5360:
    // 0x1f5360: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
label_1f5364:
    if (ctx->pc == 0x1F5364u) {
        ctx->pc = 0x1F5364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5360u;
        // 0x1f5364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5368u;
        goto label_1f5368;
    }
    ctx->pc = 0x1F5360u;
    {
        const bool branch_taken_0x1f5360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5360u;
        // 0x1f5364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5360) {
            ctx->pc = 0x1F543Cu;
            goto label_1f543c;
        }
    }
    ctx->pc = 0x1F5368u;
label_1f5368:
    // 0x1f5368: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f5368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f536c:
    // 0x1f536c: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
label_1f5370:
    if (ctx->pc == 0x1F5370u) {
        ctx->pc = 0x1F5370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F536Cu;
        // 0x1f5370: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5374u;
        goto label_1f5374;
    }
    ctx->pc = 0x1F536Cu;
    {
        const bool branch_taken_0x1f536c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F5370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F536Cu;
        // 0x1f5370: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f536c) {
            ctx->pc = 0x1F538Cu;
            goto label_1f538c;
        }
    }
    ctx->pc = 0x1F5374u;
label_1f5374:
    // 0x1f5374: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
label_1f5378:
    if (ctx->pc == 0x1F5378u) {
        ctx->pc = 0x1F5378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5374u;
        // 0x1f5378: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F537Cu;
        goto label_1f537c;
    }
    ctx->pc = 0x1F5374u;
    {
        const bool branch_taken_0x1f5374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5374u;
        // 0x1f5378: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5374) {
            ctx->pc = 0x1F543Cu;
            goto label_1f543c;
        }
    }
    ctx->pc = 0x1F537Cu;
label_1f537c:
    // 0x1f537c: 0xc07d3f2  jal         func_1F4FC8
label_1f5380:
    if (ctx->pc == 0x1F5380u) {
        ctx->pc = 0x1F5380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F537Cu;
        // 0x1f5380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5384u;
        goto label_1f5384;
    }
    ctx->pc = 0x1F537Cu;
    SET_GPR_U32(ctx, 31, 0x1F5384u);
    ctx->pc = 0x1F5380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F537Cu;
    // 0x1f5380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4FC8u, 0x1F537Cu, 0x1F5384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5384u;
label_1f5384:
    // 0x1f5384: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1f5388:
    if (ctx->pc == 0x1F5388u) {
        ctx->pc = 0x1F5388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5384u;
        // 0x1f5388: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F538Cu;
        goto label_1f538c;
    }
    ctx->pc = 0x1F5384u;
    {
        const bool branch_taken_0x1f5384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5384u;
        // 0x1f5388: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5384) {
            ctx->pc = 0x1F543Cu;
            goto label_1f543c;
        }
    }
    ctx->pc = 0x1F538Cu;
label_1f538c:
    // 0x1f538c: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
label_1f5390:
    if (ctx->pc == 0x1F5390u) {
        ctx->pc = 0x1F5390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F538Cu;
        // 0x1f5390: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5394u;
        goto label_1f5394;
    }
    ctx->pc = 0x1F538Cu;
    {
        const bool branch_taken_0x1f538c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F5390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F538Cu;
        // 0x1f5390: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f538c) {
            ctx->pc = 0x1F53ACu;
            goto label_1f53ac;
        }
    }
    ctx->pc = 0x1F5394u;
label_1f5394:
    // 0x1f5394: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
label_1f5398:
    if (ctx->pc == 0x1F5398u) {
        ctx->pc = 0x1F5398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5394u;
        // 0x1f5398: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F539Cu;
        goto label_1f539c;
    }
    ctx->pc = 0x1F5394u;
    {
        const bool branch_taken_0x1f5394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5394u;
        // 0x1f5398: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5394) {
            ctx->pc = 0x1F543Cu;
            goto label_1f543c;
        }
    }
    ctx->pc = 0x1F539Cu;
label_1f539c:
    // 0x1f539c: 0xc07d40c  jal         func_1F5030
label_1f53a0:
    if (ctx->pc == 0x1F53A0u) {
        ctx->pc = 0x1F53A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F539Cu;
        // 0x1f53a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F53A4u;
        goto label_1f53a4;
    }
    ctx->pc = 0x1F539Cu;
    SET_GPR_U32(ctx, 31, 0x1F53A4u);
    ctx->pc = 0x1F53A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F539Cu;
    // 0x1f53a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5030u, 0x1F539Cu, 0x1F53A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F53A4u;
label_1f53a4:
    // 0x1f53a4: 0x10000025  b           . + 4 + (0x25 << 2)
label_1f53a8:
    if (ctx->pc == 0x1F53A8u) {
        ctx->pc = 0x1F53A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F53A4u;
        // 0x1f53a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F53ACu;
        goto label_1f53ac;
    }
    ctx->pc = 0x1F53A4u;
    {
        const bool branch_taken_0x1f53a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F53A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F53A4u;
        // 0x1f53a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f53a4) {
            ctx->pc = 0x1F543Cu;
            goto label_1f543c;
        }
    }
    ctx->pc = 0x1F53ACu;
label_1f53ac:
    // 0x1f53ac: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
label_1f53b0:
    if (ctx->pc == 0x1F53B0u) {
        ctx->pc = 0x1F53B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F53ACu;
        // 0x1f53b0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F53B4u;
        goto label_1f53b4;
    }
    ctx->pc = 0x1F53ACu;
    {
        const bool branch_taken_0x1f53ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F53B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F53ACu;
        // 0x1f53b0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f53ac) {
            ctx->pc = 0x1F53DCu;
            goto label_1f53dc;
        }
    }
    ctx->pc = 0x1F53B4u;
label_1f53b4:
    // 0x1f53b4: 0xc07d426  jal         func_1F5098
label_1f53b8:
    if (ctx->pc == 0x1F53B8u) {
        ctx->pc = 0x1F53B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F53B4u;
        // 0x1f53b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F53BCu;
        goto label_1f53bc;
    }
    ctx->pc = 0x1F53B4u;
    SET_GPR_U32(ctx, 31, 0x1F53BCu);
    ctx->pc = 0x1F53B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F53B4u;
    // 0x1f53b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5098u, 0x1F53B4u, 0x1F53BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F53BCu;
label_1f53bc:
    // 0x1f53bc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1f53c0:
    if (ctx->pc == 0x1F53C0u) {
        ctx->pc = 0x1F53C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F53BCu;
        // 0x1f53c0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F53C4u;
        goto label_1f53c4;
    }
    ctx->pc = 0x1F53BCu;
    {
        const bool branch_taken_0x1f53bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f53bc) {
            ctx->pc = 0x1F53C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F53BCu;
            // 0x1f53c0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F53D4u;
            goto label_1f53d4;
        }
    }
    ctx->pc = 0x1F53C4u;
label_1f53c4:
    // 0x1f53c4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f53c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1f53c8:
    // 0x1f53c8: 0x3442ff01  ori         $v0, $v0, 0xFF01
    ctx->pc = 0x1f53c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65281);
label_1f53cc:
    // 0x1f53cc: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x1f53ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_1f53d0:
    // 0x1f53d0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f53d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f53d4:
    // 0x1f53d4: 0x10000016  b           . + 4 + (0x16 << 2)
label_1f53d8:
    if (ctx->pc == 0x1F53D8u) {
        ctx->pc = 0x1F53D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F53D4u;
        // 0x1f53d8: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F53DCu;
        goto label_1f53dc;
    }
    ctx->pc = 0x1F53D4u;
    {
        const bool branch_taken_0x1f53d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F53D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F53D4u;
        // 0x1f53d8: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f53d4) {
            ctx->pc = 0x1F5430u;
            goto label_1f5430;
        }
    }
    ctx->pc = 0x1F53DCu;
label_1f53dc:
    // 0x1f53dc: 0x56220017  bnel        $s1, $v0, . + 4 + (0x17 << 2)
label_1f53e0:
    if (ctx->pc == 0x1F53E0u) {
        ctx->pc = 0x1F53E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F53DCu;
        // 0x1f53e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F53E4u;
        goto label_1f53e4;
    }
    ctx->pc = 0x1F53DCu;
    {
        const bool branch_taken_0x1f53dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f53dc) {
            ctx->pc = 0x1F53E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F53DCu;
            // 0x1f53e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F543Cu;
            goto label_1f543c;
        }
    }
    ctx->pc = 0x1F53E4u;
label_1f53e4:
    // 0x1f53e4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1f53e8:
    if (ctx->pc == 0x1F53E8u) {
        ctx->pc = 0x1F53ECu;
        goto label_1f53ec;
    }
    ctx->pc = 0x1F53E4u;
    {
        const bool branch_taken_0x1f53e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f53e4) {
            ctx->pc = 0x1F53F4u;
            goto label_1f53f4;
        }
    }
    ctx->pc = 0x1F53ECu;
label_1f53ec:
    // 0x1f53ec: 0x1000000e  b           . + 4 + (0xE << 2)
label_1f53f0:
    if (ctx->pc == 0x1F53F0u) {
        ctx->pc = 0x1F53F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F53ECu;
        // 0x1f53f0: 0xae000074  sw          $zero, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F53F4u;
        goto label_1f53f4;
    }
    ctx->pc = 0x1F53ECu;
    {
        const bool branch_taken_0x1f53ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F53F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F53ECu;
        // 0x1f53f0: 0xae000074  sw          $zero, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f53ec) {
            ctx->pc = 0x1F5428u;
            goto label_1f5428;
        }
    }
    ctx->pc = 0x1F53F4u;
label_1f53f4:
    // 0x1f53f4: 0xc07d426  jal         func_1F5098
label_1f53f8:
    if (ctx->pc == 0x1F53F8u) {
        ctx->pc = 0x1F53F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F53F4u;
        // 0x1f53f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F53FCu;
        goto label_1f53fc;
    }
    ctx->pc = 0x1F53F4u;
    SET_GPR_U32(ctx, 31, 0x1F53FCu);
    ctx->pc = 0x1F53F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F53F4u;
    // 0x1f53f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5098u, 0x1F53F4u, 0x1F53FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F53FCu;
label_1f53fc:
    // 0x1f53fc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1f5400:
    if (ctx->pc == 0x1F5400u) {
        ctx->pc = 0x1F5400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F53FCu;
        // 0x1f5400: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5404u;
        goto label_1f5404;
    }
    ctx->pc = 0x1F53FCu;
    {
        const bool branch_taken_0x1f53fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F53FCu;
        // 0x1f5400: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f53fc) {
            ctx->pc = 0x1F542Cu;
            goto label_1f542c;
        }
    }
    ctx->pc = 0x1F5404u;
label_1f5404:
    // 0x1f5404: 0xc07f7f0  jal         func_1FDFC0
label_1f5408:
    if (ctx->pc == 0x1F5408u) {
        ctx->pc = 0x1F540Cu;
        goto label_1f540c;
    }
    ctx->pc = 0x1F5404u;
    SET_GPR_U32(ctx, 31, 0x1F540Cu);
    ctx->pc = 0x1FDFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDFC0u, 0x1F5404u, 0x1F540Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F540Cu;
label_1f540c:
    // 0x1f540c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f5410:
    if (ctx->pc == 0x1F5410u) {
        ctx->pc = 0x1F5414u;
        goto label_1f5414;
    }
    ctx->pc = 0x1F540Cu;
    {
        const bool branch_taken_0x1f540c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f540c) {
            ctx->pc = 0x1F541Cu;
            goto label_1f541c;
        }
    }
    ctx->pc = 0x1F5414u;
label_1f5414:
    // 0x1f5414: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f5418:
    if (ctx->pc == 0x1F5418u) {
        ctx->pc = 0x1F5418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5414u;
        // 0x1f5418: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F541Cu;
        goto label_1f541c;
    }
    ctx->pc = 0x1F5414u;
    {
        const bool branch_taken_0x1f5414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5414u;
        // 0x1f5418: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5414) {
            ctx->pc = 0x1F5424u;
            goto label_1f5424;
        }
    }
    ctx->pc = 0x1F541Cu;
label_1f541c:
    // 0x1f541c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f541cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1f5420:
    // 0x1f5420: 0x3442ff01  ori         $v0, $v0, 0xFF01
    ctx->pc = 0x1f5420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65281);
label_1f5424:
    // 0x1f5424: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x1f5424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_1f5428:
    // 0x1f5428: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f5428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f542c:
    // 0x1f542c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1f542cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f5430:
    // 0x1f5430: 0xc043f0c  jal         func_10FC30
label_1f5434:
    if (ctx->pc == 0x1F5434u) {
        ctx->pc = 0x1F5434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5430u;
        // 0x1f5434: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5438u;
        goto label_1f5438;
    }
    ctx->pc = 0x1F5430u;
    SET_GPR_U32(ctx, 31, 0x1F5438u);
    ctx->pc = 0x1F5434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5430u;
    // 0x1f5434: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1F5430u, 0x1F5438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5438u;
label_1f5438:
    // 0x1f5438: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f543c:
    // 0x1f543c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f543cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f5440:
    // 0x1f5440: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f5440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5444:
    // 0x1f5444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f5444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5448:
    // 0x1f5448: 0x3e00008  jr          $ra
label_1f544c:
    if (ctx->pc == 0x1F544Cu) {
        ctx->pc = 0x1F544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5448u;
        // 0x1f544c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5450u;
        goto label_fallthrough_0x1f5448;
    }
    ctx->pc = 0x1F5448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5448u;
        // 0x1f544c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f5448:
    ctx->pc = 0x1F5450u;
}
