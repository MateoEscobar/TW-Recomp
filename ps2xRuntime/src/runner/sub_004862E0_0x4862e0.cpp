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

// Function: sub_004862E0
// Address: 0x4862e0 - 0x4863a0
void sub_004862E0_0x4862e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004862E0_0x4862e0");
#endif

    switch (ctx->pc) {
        case 0x4862e0u: goto label_4862e0;
        case 0x4862e4u: goto label_4862e4;
        case 0x4862e8u: goto label_4862e8;
        case 0x4862ecu: goto label_4862ec;
        case 0x4862f0u: goto label_4862f0;
        case 0x4862f4u: goto label_4862f4;
        case 0x4862f8u: goto label_4862f8;
        case 0x4862fcu: goto label_4862fc;
        case 0x486300u: goto label_486300;
        case 0x486304u: goto label_486304;
        case 0x486308u: goto label_486308;
        case 0x48630cu: goto label_48630c;
        case 0x486310u: goto label_486310;
        case 0x486314u: goto label_486314;
        case 0x486318u: goto label_486318;
        case 0x48631cu: goto label_48631c;
        case 0x486320u: goto label_486320;
        case 0x486324u: goto label_486324;
        case 0x486328u: goto label_486328;
        case 0x48632cu: goto label_48632c;
        case 0x486330u: goto label_486330;
        case 0x486334u: goto label_486334;
        case 0x486338u: goto label_486338;
        case 0x48633cu: goto label_48633c;
        case 0x486340u: goto label_486340;
        case 0x486344u: goto label_486344;
        case 0x486348u: goto label_486348;
        case 0x48634cu: goto label_48634c;
        case 0x486350u: goto label_486350;
        case 0x486354u: goto label_486354;
        case 0x486358u: goto label_486358;
        case 0x48635cu: goto label_48635c;
        case 0x486360u: goto label_486360;
        case 0x486364u: goto label_486364;
        case 0x486368u: goto label_486368;
        case 0x48636cu: goto label_48636c;
        case 0x486370u: goto label_486370;
        case 0x486374u: goto label_486374;
        case 0x486378u: goto label_486378;
        case 0x48637cu: goto label_48637c;
        case 0x486380u: goto label_486380;
        case 0x486384u: goto label_486384;
        case 0x486388u: goto label_486388;
        case 0x48638cu: goto label_48638c;
        case 0x486390u: goto label_486390;
        case 0x486394u: goto label_486394;
        case 0x486398u: goto label_486398;
        case 0x48639cu: goto label_48639c;
        default: break;
    }

    ctx->pc = 0x4862e0u;

label_4862e0:
    // 0x4862e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4862e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4862e4:
    // 0x4862e4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4862e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4862e8:
    // 0x4862e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4862e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4862ec:
    // 0x4862ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4862ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4862f0:
    // 0x4862f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4862f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4862f4:
    // 0x4862f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4862f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4862f8:
    // 0x4862f8: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x4862f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
label_4862fc:
    // 0x4862fc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x4862fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_486300:
    // 0x486300: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_486304:
    if (ctx->pc == 0x486304u) {
        ctx->pc = 0x486304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486300u;
        // 0x486304: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486308u;
        goto label_486308;
    }
    ctx->pc = 0x486300u;
    {
        const bool branch_taken_0x486300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x486304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486300u;
        // 0x486304: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486300) {
            ctx->pc = 0x486358u;
            goto label_486358;
        }
    }
    ctx->pc = 0x486308u;
label_486308:
    // 0x486308: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x486308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_48630c:
    // 0x48630c: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x48630cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
label_486310:
    // 0x486310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x486310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_486314:
    // 0x486314: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x486314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_486318:
    // 0x486318: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x486318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_48631c:
    // 0x48631c: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x48631cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_486320:
    // 0x486320: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x486320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_486324:
    // 0x486324: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x486324u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_486328:
    // 0x486328: 0x9622001c  lhu         $v0, 0x1C($s1)
    ctx->pc = 0x486328u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
label_48632c:
    // 0x48632c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48632cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_486330:
    // 0x486330: 0xa602001c  sh          $v0, 0x1C($s0)
    ctx->pc = 0x486330u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 2));
label_486334:
    // 0x486334: 0x95030004  lhu         $v1, 0x4($t0)
    ctx->pc = 0x486334u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_486338:
    // 0x486338: 0x9622001e  lhu         $v0, 0x1E($s1)
    ctx->pc = 0x486338u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
label_48633c:
    // 0x48633c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48633cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_486340:
    // 0x486340: 0xa602001e  sh          $v0, 0x1E($s0)
    ctx->pc = 0x486340u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 2));
label_486344:
    // 0x486344: 0x8ce2ad90  lw          $v0, -0x5270($a3)
    ctx->pc = 0x486344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294946192)));
label_486348:
    // 0x486348: 0x40f809  jalr        $v0
label_48634c:
    if (ctx->pc == 0x48634Cu) {
        ctx->pc = 0x48634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486348u;
        // 0x48634c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486350u;
        goto label_486350;
    }
    ctx->pc = 0x486348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x486350u);
        ctx->pc = 0x48634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486348u;
        // 0x48634c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x486348u, 0x486350u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x486350u;
label_486350:
    // 0x486350: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_486354:
    if (ctx->pc == 0x486354u) {
        ctx->pc = 0x486354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486350u;
        // 0x486354: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486358u;
        goto label_486358;
    }
    ctx->pc = 0x486350u;
    {
        const bool branch_taken_0x486350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x486350) {
            ctx->pc = 0x486354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x486350u;
            // 0x486354: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x486360u;
            goto label_486360;
        }
    }
    ctx->pc = 0x486358u;
label_486358:
    // 0x486358: 0x10000003  b           . + 4 + (0x3 << 2)
label_48635c:
    if (ctx->pc == 0x48635Cu) {
        ctx->pc = 0x48635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486358u;
        // 0x48635c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486360u;
        goto label_486360;
    }
    ctx->pc = 0x486358u;
    {
        const bool branch_taken_0x486358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486358u;
        // 0x48635c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486358) {
            ctx->pc = 0x486368u;
            goto label_486368;
        }
    }
    ctx->pc = 0x486360u;
label_486360:
    // 0x486360: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x486360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_486364:
    // 0x486364: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x486364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_486368:
    // 0x486368: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x486368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48636c:
    // 0x48636c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48636cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_486370:
    // 0x486370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x486370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_486374:
    // 0x486374: 0x3e00008  jr          $ra
label_486378:
    if (ctx->pc == 0x486378u) {
        ctx->pc = 0x486378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486374u;
        // 0x486378: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48637Cu;
        goto label_48637c;
    }
    ctx->pc = 0x486374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x486378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486374u;
        // 0x486378: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x486374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48637Cu;
label_48637c:
    // 0x48637c: 0x0  nop
    ctx->pc = 0x48637cu;
    // NOP
label_486380:
    // 0x486380: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x486380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_486384:
    // 0x486384: 0x0  nop
    ctx->pc = 0x486384u;
    // NOP
label_486388:
    // 0x486388: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x486388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_48638c:
    // 0x48638c: 0x0  nop
    ctx->pc = 0x48638cu;
    // NOP
label_486390:
    // 0x486390: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x486390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_486394:
    // 0x486394: 0x0  nop
    ctx->pc = 0x486394u;
    // NOP
label_486398:
    // 0x486398: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x486398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_48639c:
    // 0x48639c: 0x0  nop
    ctx->pc = 0x48639cu;
    // NOP
    ctx->pc = 0x4863a0u;
}
