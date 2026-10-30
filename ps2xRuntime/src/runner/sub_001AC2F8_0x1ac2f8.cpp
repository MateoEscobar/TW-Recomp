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

// Function: sub_001AC2F8
// Address: 0x1ac2f8 - 0x1ac400
void sub_001AC2F8_0x1ac2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC2F8_0x1ac2f8");
#endif

    switch (ctx->pc) {
        case 0x1ac2f8u: goto label_1ac2f8;
        case 0x1ac2fcu: goto label_1ac2fc;
        case 0x1ac300u: goto label_1ac300;
        case 0x1ac304u: goto label_1ac304;
        case 0x1ac308u: goto label_1ac308;
        case 0x1ac30cu: goto label_1ac30c;
        case 0x1ac310u: goto label_1ac310;
        case 0x1ac314u: goto label_1ac314;
        case 0x1ac318u: goto label_1ac318;
        case 0x1ac31cu: goto label_1ac31c;
        case 0x1ac320u: goto label_1ac320;
        case 0x1ac324u: goto label_1ac324;
        case 0x1ac328u: goto label_1ac328;
        case 0x1ac32cu: goto label_1ac32c;
        case 0x1ac330u: goto label_1ac330;
        case 0x1ac334u: goto label_1ac334;
        case 0x1ac338u: goto label_1ac338;
        case 0x1ac33cu: goto label_1ac33c;
        case 0x1ac340u: goto label_1ac340;
        case 0x1ac344u: goto label_1ac344;
        case 0x1ac348u: goto label_1ac348;
        case 0x1ac34cu: goto label_1ac34c;
        case 0x1ac350u: goto label_1ac350;
        case 0x1ac354u: goto label_1ac354;
        case 0x1ac358u: goto label_1ac358;
        case 0x1ac35cu: goto label_1ac35c;
        case 0x1ac360u: goto label_1ac360;
        case 0x1ac364u: goto label_1ac364;
        case 0x1ac368u: goto label_1ac368;
        case 0x1ac36cu: goto label_1ac36c;
        case 0x1ac370u: goto label_1ac370;
        case 0x1ac374u: goto label_1ac374;
        case 0x1ac378u: goto label_1ac378;
        case 0x1ac37cu: goto label_1ac37c;
        case 0x1ac380u: goto label_1ac380;
        case 0x1ac384u: goto label_1ac384;
        case 0x1ac388u: goto label_1ac388;
        case 0x1ac38cu: goto label_1ac38c;
        case 0x1ac390u: goto label_1ac390;
        case 0x1ac394u: goto label_1ac394;
        case 0x1ac398u: goto label_1ac398;
        case 0x1ac39cu: goto label_1ac39c;
        case 0x1ac3a0u: goto label_1ac3a0;
        case 0x1ac3a4u: goto label_1ac3a4;
        case 0x1ac3a8u: goto label_1ac3a8;
        case 0x1ac3acu: goto label_1ac3ac;
        case 0x1ac3b0u: goto label_1ac3b0;
        case 0x1ac3b4u: goto label_1ac3b4;
        case 0x1ac3b8u: goto label_1ac3b8;
        case 0x1ac3bcu: goto label_1ac3bc;
        case 0x1ac3c0u: goto label_1ac3c0;
        case 0x1ac3c4u: goto label_1ac3c4;
        case 0x1ac3c8u: goto label_1ac3c8;
        case 0x1ac3ccu: goto label_1ac3cc;
        case 0x1ac3d0u: goto label_1ac3d0;
        case 0x1ac3d4u: goto label_1ac3d4;
        case 0x1ac3d8u: goto label_1ac3d8;
        case 0x1ac3dcu: goto label_1ac3dc;
        case 0x1ac3e0u: goto label_1ac3e0;
        case 0x1ac3e4u: goto label_1ac3e4;
        case 0x1ac3e8u: goto label_1ac3e8;
        case 0x1ac3ecu: goto label_1ac3ec;
        case 0x1ac3f0u: goto label_1ac3f0;
        case 0x1ac3f4u: goto label_1ac3f4;
        case 0x1ac3f8u: goto label_1ac3f8;
        case 0x1ac3fcu: goto label_1ac3fc;
        default: break;
    }

    ctx->pc = 0x1ac2f8u;

label_1ac2f8:
    // 0x1ac2f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ac2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1ac2fc:
    // 0x1ac2fc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1ac2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1ac300:
    // 0x1ac300: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ac300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1ac304:
    // 0x1ac304: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ac304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac308:
    // 0x1ac308: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1ac308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1ac30c:
    // 0x1ac30c: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x1ac30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_1ac310:
    // 0x1ac310: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1ac310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1ac314:
    // 0x1ac314: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ac314u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac318:
    // 0x1ac318: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1ac318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1ac31c:
    // 0x1ac31c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ac31cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac320:
    // 0x1ac320: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ac324:
    // 0x1ac324: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1ac324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ac328:
    // 0x1ac328: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1ac328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1ac32c:
    // 0x1ac32c: 0x8e1100c0  lw          $s1, 0xC0($s0)
    ctx->pc = 0x1ac32cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_1ac330:
    // 0x1ac330: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1ac330u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ac334:
    // 0x1ac334: 0x3a083  sra         $s4, $v1, 2
    ctx->pc = 0x1ac334u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 3), 2));
label_1ac338:
    // 0x1ac338: 0x254102b  sltu        $v0, $s2, $s4
    ctx->pc = 0x1ac338u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_1ac33c:
    // 0x1ac33c: 0x0  nop
    ctx->pc = 0x1ac33cu;
    // NOP
label_1ac340:
    // 0x1ac340: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1ac344:
    if (ctx->pc == 0x1AC344u) {
        ctx->pc = 0x1AC348u;
        goto label_1ac348;
    }
    ctx->pc = 0x1AC340u;
    {
        const bool branch_taken_0x1ac340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac340) {
            ctx->pc = 0x1AC394u;
            goto label_1ac394;
        }
    }
    ctx->pc = 0x1AC348u;
label_1ac348:
    // 0x1ac348: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1ac348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_1ac34c:
    // 0x1ac34c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ac34cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ac350:
    // 0x1ac350: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1ac350u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ac354:
    // 0x1ac354: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1ac358:
    if (ctx->pc == 0x1AC358u) {
        ctx->pc = 0x1AC358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC354u;
        // 0x1ac358: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC35Cu;
        goto label_1ac35c;
    }
    ctx->pc = 0x1AC354u;
    {
        const bool branch_taken_0x1ac354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac354) {
            ctx->pc = 0x1AC358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC354u;
            // 0x1ac358: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC370u;
            goto label_1ac370;
        }
    }
    ctx->pc = 0x1AC35Cu;
label_1ac35c:
    // 0x1ac35c: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x1ac35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_1ac360:
    // 0x1ac360: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1ac364:
    if (ctx->pc == 0x1AC364u) {
        ctx->pc = 0x1AC364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC360u;
        // 0x1ac364: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC368u;
        goto label_1ac368;
    }
    ctx->pc = 0x1AC360u;
    {
        const bool branch_taken_0x1ac360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC360u;
        // 0x1ac364: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac360) {
            ctx->pc = 0x1AC36Cu;
            goto label_1ac36c;
        }
    }
    ctx->pc = 0x1AC368u;
label_1ac368:
    // 0x1ac368: 0x8e1100c0  lw          $s1, 0xC0($s0)
    ctx->pc = 0x1ac368u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_1ac36c:
    // 0x1ac36c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ac36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ac370:
    // 0x1ac370: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ac370u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ac374:
    // 0x1ac374: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ac374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac378:
    // 0x1ac378: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x1ac378u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_1ac37c:
    // 0x1ac37c: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x1ac37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_1ac380:
    // 0x1ac380: 0x40f809  jalr        $v0
label_1ac384:
    if (ctx->pc == 0x1AC384u) {
        ctx->pc = 0x1AC384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC380u;
        // 0x1ac384: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC388u;
        goto label_1ac388;
    }
    ctx->pc = 0x1AC380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC388u);
        ctx->pc = 0x1AC384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC380u;
        // 0x1ac384: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC380u, 0x1AC388u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC388u;
label_1ac388:
    // 0x1ac388: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
label_1ac38c:
    if (ctx->pc == 0x1AC38Cu) {
        ctx->pc = 0x1AC38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC388u;
        // 0x1ac38c: 0x254102b  sltu        $v0, $s2, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC390u;
        goto label_1ac390;
    }
    ctx->pc = 0x1AC388u;
    {
        const bool branch_taken_0x1ac388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC388u;
        // 0x1ac38c: 0x254102b  sltu        $v0, $s2, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac388) {
            ctx->pc = 0x1AC340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac340;
        }
    }
    ctx->pc = 0x1AC390u;
label_1ac390:
    // 0x1ac390: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1ac390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac394:
    // 0x1ac394: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
label_1ac398:
    if (ctx->pc == 0x1AC398u) {
        ctx->pc = 0x1AC398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC394u;
        // 0x1ac398: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC39Cu;
        goto label_1ac39c;
    }
    ctx->pc = 0x1AC394u;
    {
        const bool branch_taken_0x1ac394 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC394u;
        // 0x1ac398: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac394) {
            ctx->pc = 0x1AC3CCu;
            goto label_1ac3cc;
        }
    }
    ctx->pc = 0x1AC39Cu;
label_1ac39c:
    // 0x1ac39c: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x1ac39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_1ac3a0:
    // 0x1ac3a0: 0x12220009  beq         $s1, $v0, . + 4 + (0x9 << 2)
label_1ac3a4:
    if (ctx->pc == 0x1AC3A4u) {
        ctx->pc = 0x1AC3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3A0u;
        // 0x1ac3a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC3A8u;
        goto label_1ac3a8;
    }
    ctx->pc = 0x1AC3A0u;
    {
        const bool branch_taken_0x1ac3a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3A0u;
        // 0x1ac3a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac3a0) {
            ctx->pc = 0x1AC3C8u;
            goto label_1ac3c8;
        }
    }
    ctx->pc = 0x1AC3A8u;
label_1ac3a8:
    // 0x1ac3a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ac3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ac3ac:
    // 0x1ac3ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ac3acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac3b0:
    // 0x1ac3b0: 0x84440108  lh          $a0, 0x108($v0)
    ctx->pc = 0x1ac3b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 264)));
label_1ac3b4:
    // 0x1ac3b4: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x1ac3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_1ac3b8:
    // 0x1ac3b8: 0x60f809  jalr        $v1
label_1ac3bc:
    if (ctx->pc == 0x1AC3BCu) {
        ctx->pc = 0x1AC3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3B8u;
        // 0x1ac3bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC3C0u;
        goto label_1ac3c0;
    }
    ctx->pc = 0x1AC3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AC3C0u);
        ctx->pc = 0x1AC3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3B8u;
        // 0x1ac3bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC3B8u, 0x1AC3C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC3C0u;
label_1ac3c0:
    // 0x1ac3c0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ac3c4:
    if (ctx->pc == 0x1AC3C4u) {
        ctx->pc = 0x1AC3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3C0u;
        // 0x1ac3c4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC3C8u;
        goto label_1ac3c8;
    }
    ctx->pc = 0x1AC3C0u;
    {
        const bool branch_taken_0x1ac3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3C0u;
        // 0x1ac3c4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac3c0) {
            ctx->pc = 0x1AC3E4u;
            goto label_1ac3e4;
        }
    }
    ctx->pc = 0x1AC3C8u;
label_1ac3c8:
    // 0x1ac3c8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ac3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ac3cc:
    // 0x1ac3cc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1ac3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1ac3d0:
    // 0x1ac3d0: 0xc043f0c  jal         func_10FC30
label_1ac3d4:
    if (ctx->pc == 0x1AC3D4u) {
        ctx->pc = 0x1AC3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3D0u;
        // 0x1ac3d4: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC3D8u;
        goto label_1ac3d8;
    }
    ctx->pc = 0x1AC3D0u;
    SET_GPR_U32(ctx, 31, 0x1AC3D8u);
    ctx->pc = 0x1AC3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC3D0u;
    // 0x1ac3d4: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1AC3D0u, 0x1AC3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC3D8u;
label_1ac3d8:
    // 0x1ac3d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac3dc:
    // 0x1ac3dc: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x1ac3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_1ac3e0:
    // 0x1ac3e0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1ac3e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ac3e4:
    // 0x1ac3e4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1ac3e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ac3e8:
    // 0x1ac3e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ac3e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ac3ec:
    // 0x1ac3ec: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1ac3ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ac3f0:
    // 0x1ac3f0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1ac3f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac3f4:
    // 0x1ac3f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ac3f8:
    // 0x1ac3f8: 0x3e00008  jr          $ra
label_1ac3fc:
    if (ctx->pc == 0x1AC3FCu) {
        ctx->pc = 0x1AC3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3F8u;
        // 0x1ac3fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC400u;
        goto label_fallthrough_0x1ac3f8;
    }
    ctx->pc = 0x1AC3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3F8u;
        // 0x1ac3fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC3F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ac3f8:
    ctx->pc = 0x1AC400u;
}
