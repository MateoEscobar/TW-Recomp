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

// Function: sub_001A53C0
// Address: 0x1a53c0 - 0x1a54a0
void sub_001A53C0_0x1a53c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A53C0_0x1a53c0");
#endif

    switch (ctx->pc) {
        case 0x1a53c0u: goto label_1a53c0;
        case 0x1a53c4u: goto label_1a53c4;
        case 0x1a53c8u: goto label_1a53c8;
        case 0x1a53ccu: goto label_1a53cc;
        case 0x1a53d0u: goto label_1a53d0;
        case 0x1a53d4u: goto label_1a53d4;
        case 0x1a53d8u: goto label_1a53d8;
        case 0x1a53dcu: goto label_1a53dc;
        case 0x1a53e0u: goto label_1a53e0;
        case 0x1a53e4u: goto label_1a53e4;
        case 0x1a53e8u: goto label_1a53e8;
        case 0x1a53ecu: goto label_1a53ec;
        case 0x1a53f0u: goto label_1a53f0;
        case 0x1a53f4u: goto label_1a53f4;
        case 0x1a53f8u: goto label_1a53f8;
        case 0x1a53fcu: goto label_1a53fc;
        case 0x1a5400u: goto label_1a5400;
        case 0x1a5404u: goto label_1a5404;
        case 0x1a5408u: goto label_1a5408;
        case 0x1a540cu: goto label_1a540c;
        case 0x1a5410u: goto label_1a5410;
        case 0x1a5414u: goto label_1a5414;
        case 0x1a5418u: goto label_1a5418;
        case 0x1a541cu: goto label_1a541c;
        case 0x1a5420u: goto label_1a5420;
        case 0x1a5424u: goto label_1a5424;
        case 0x1a5428u: goto label_1a5428;
        case 0x1a542cu: goto label_1a542c;
        case 0x1a5430u: goto label_1a5430;
        case 0x1a5434u: goto label_1a5434;
        case 0x1a5438u: goto label_1a5438;
        case 0x1a543cu: goto label_1a543c;
        case 0x1a5440u: goto label_1a5440;
        case 0x1a5444u: goto label_1a5444;
        case 0x1a5448u: goto label_1a5448;
        case 0x1a544cu: goto label_1a544c;
        case 0x1a5450u: goto label_1a5450;
        case 0x1a5454u: goto label_1a5454;
        case 0x1a5458u: goto label_1a5458;
        case 0x1a545cu: goto label_1a545c;
        case 0x1a5460u: goto label_1a5460;
        case 0x1a5464u: goto label_1a5464;
        case 0x1a5468u: goto label_1a5468;
        case 0x1a546cu: goto label_1a546c;
        case 0x1a5470u: goto label_1a5470;
        case 0x1a5474u: goto label_1a5474;
        case 0x1a5478u: goto label_1a5478;
        case 0x1a547cu: goto label_1a547c;
        case 0x1a5480u: goto label_1a5480;
        case 0x1a5484u: goto label_1a5484;
        case 0x1a5488u: goto label_1a5488;
        case 0x1a548cu: goto label_1a548c;
        case 0x1a5490u: goto label_1a5490;
        case 0x1a5494u: goto label_1a5494;
        case 0x1a5498u: goto label_1a5498;
        case 0x1a549cu: goto label_1a549c;
        default: break;
    }

    ctx->pc = 0x1a53c0u;

label_1a53c0:
    // 0x1a53c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1a53c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1a53c4:
    // 0x1a53c4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1a53c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1a53c8:
    // 0x1a53c8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1a53c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1a53cc:
    // 0x1a53cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a53ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a53d0:
    // 0x1a53d0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1a53d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1a53d4:
    // 0x1a53d4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1a53d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_1a53d8:
    // 0x1a53d8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1a53d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1a53dc:
    // 0x1a53dc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a53dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1a53e0:
    // 0x1a53e0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a53e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1a53e4:
    // 0x1a53e4: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x1a53e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
label_1a53e8:
    // 0x1a53e8: 0x8e420350  lw          $v0, 0x350($s2)
    ctx->pc = 0x1a53e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 848)));
label_1a53ec:
    // 0x1a53ec: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_1a53f0:
    if (ctx->pc == 0x1A53F0u) {
        ctx->pc = 0x1A53F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53ECu;
        // 0x1a53f0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A53F4u;
        goto label_1a53f4;
    }
    ctx->pc = 0x1A53ECu;
    {
        const bool branch_taken_0x1a53ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A53F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53ECu;
        // 0x1a53f0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a53ec) {
            ctx->pc = 0x1A549Cu;
            goto label_1a549c;
        }
    }
    ctx->pc = 0x1A53F4u;
label_1a53f4:
    // 0x1a53f4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1a53f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a53f8:
    // 0x1a53f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a53f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a53fc:
    // 0x1a53fc: 0x10430027  beq         $v0, $v1, . + 4 + (0x27 << 2)
label_1a5400:
    if (ctx->pc == 0x1A5400u) {
        ctx->pc = 0x1A5400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53FCu;
        // 0x1a5400: 0x3c15006f  lui         $s5, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5404u;
        goto label_1a5404;
    }
    ctx->pc = 0x1A53FCu;
    {
        const bool branch_taken_0x1a53fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A5400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53FCu;
        // 0x1a5400: 0x3c15006f  lui         $s5, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a53fc) {
            ctx->pc = 0x1A549Cu;
            goto label_1a549c;
        }
    }
    ctx->pc = 0x1A5404u;
label_1a5404:
    // 0x1a5404: 0x3c140055  lui         $s4, 0x55
    ctx->pc = 0x1a5404u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)85 << 16));
label_1a5408:
    // 0x1a5408: 0x3c130055  lui         $s3, 0x55
    ctx->pc = 0x1a5408u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)85 << 16));
label_1a540c:
    // 0x1a540c: 0x8e450350  lw          $a1, 0x350($s2)
    ctx->pc = 0x1a540cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 848)));
label_1a5410:
    // 0x1a5410: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1a5410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1a5414:
    // 0x1a5414: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1a5414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1a5418:
    // 0x1a5418: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1a5418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a541c:
    // 0x1a541c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a541cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1a5420:
    // 0x1a5420: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1a5420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1a5424:
    // 0x1a5424: 0x8c710008  lw          $s1, 0x8($v1)
    ctx->pc = 0x1a5424u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1a5428:
    // 0x1a5428: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a5428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1a542c:
    // 0x1a542c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a542cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a5430:
    // 0x1a5430: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1a5430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_1a5434:
    // 0x1a5434: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1a5434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1a5438:
    // 0x1a5438: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1a5438u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a543c:
    // 0x1a543c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1a543cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a5440:
    // 0x1a5440: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1a5440u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_1a5444:
    // 0x1a5444: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1a5444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1a5448:
    // 0x1a5448: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1a5448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1a544c:
    // 0x1a544c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_1a5450:
    if (ctx->pc == 0x1A5450u) {
        ctx->pc = 0x1A5450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A544Cu;
        // 0x1a5450: 0x8ea8b9c0  lw          $t0, -0x4640($s5) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5454u;
        goto label_1a5454;
    }
    ctx->pc = 0x1A544Cu;
    {
        const bool branch_taken_0x1a544c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A544Cu;
        // 0x1a5450: 0x8ea8b9c0  lw          $t0, -0x4640($s5) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a544c) {
            ctx->pc = 0x1A5470u;
            goto label_1a5470;
        }
    }
    ctx->pc = 0x1A5454u;
label_1a5454:
    // 0x1a5454: 0x26863ee0  addiu       $a2, $s4, 0x3EE0
    ctx->pc = 0x1a5454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16096));
label_1a5458:
    // 0x1a5458: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x1a5458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1a545c:
    // 0x1a545c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1a545cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1a5460:
    // 0x1a5460: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1a5460u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1a5464:
    // 0x1a5464: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1a5464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1a5468:
    // 0x1a5468: 0x60f809  jalr        $v1
label_1a546c:
    if (ctx->pc == 0x1A546Cu) {
        ctx->pc = 0x1A546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5468u;
        // 0x1a546c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5470u;
        goto label_1a5470;
    }
    ctx->pc = 0x1A5468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A5470u);
        ctx->pc = 0x1A546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5468u;
        // 0x1a546c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5468u, 0x1A5470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5470u;
label_1a5470:
    // 0x1a5470: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a5474:
    // 0x1a5474: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x1a5474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
label_1a5478:
    // 0x1a5478: 0x26653ea0  addiu       $a1, $s3, 0x3EA0
    ctx->pc = 0x1a5478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16032));
label_1a547c:
    // 0x1a547c: 0xc139068  jal         func_4E41A0
label_1a5480:
    if (ctx->pc == 0x1A5480u) {
        ctx->pc = 0x1A5480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A547Cu;
        // 0x1a5480: 0x240601eb  addiu       $a2, $zero, 0x1EB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 491));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5484u;
        goto label_1a5484;
    }
    ctx->pc = 0x1A547Cu;
    SET_GPR_U32(ctx, 31, 0x1A5484u);
    ctx->pc = 0x1A5480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A547Cu;
    // 0x1a5480: 0x240601eb  addiu       $a2, $zero, 0x1EB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 491));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E41A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E41A0u, 0x1A547Cu, 0x1A5484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5484u;
label_1a5484:
    // 0x1a5484: 0x8e420350  lw          $v0, 0x350($s2)
    ctx->pc = 0x1a5484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 848)));
label_1a5488:
    // 0x1a5488: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1a5488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a548c:
    // 0x1a548c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a548cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a5490:
    // 0x1a5490: 0x5464ffdf  bnel        $v1, $a0, . + 4 + (-0x21 << 2)
label_1a5494:
    if (ctx->pc == 0x1A5494u) {
        ctx->pc = 0x1A5494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5490u;
        // 0x1a5494: 0x8e450350  lw          $a1, 0x350($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 848)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5498u;
        goto label_1a5498;
    }
    ctx->pc = 0x1A5490u;
    {
        const bool branch_taken_0x1a5490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a5490) {
            ctx->pc = 0x1A5494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5490u;
            // 0x1a5494: 0x8e450350  lw          $a1, 0x350($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 848)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5410;
        }
    }
    ctx->pc = 0x1A5498u;
label_1a5498:
    // 0x1a5498: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1a5498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1a549c:
    // 0x1a549c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1a549cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    ctx->pc = 0x1a54a0u;
}
