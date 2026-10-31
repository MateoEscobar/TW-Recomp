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

// Function: sub_0020D2C0
// Address: 0x20d2c0 - 0x20d3a0
void sub_0020D2C0_0x20d2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D2C0_0x20d2c0");
#endif

    switch (ctx->pc) {
        case 0x20d2c0u: goto label_20d2c0;
        case 0x20d2c4u: goto label_20d2c4;
        case 0x20d2c8u: goto label_20d2c8;
        case 0x20d2ccu: goto label_20d2cc;
        case 0x20d2d0u: goto label_20d2d0;
        case 0x20d2d4u: goto label_20d2d4;
        case 0x20d2d8u: goto label_20d2d8;
        case 0x20d2dcu: goto label_20d2dc;
        case 0x20d2e0u: goto label_20d2e0;
        case 0x20d2e4u: goto label_20d2e4;
        case 0x20d2e8u: goto label_20d2e8;
        case 0x20d2ecu: goto label_20d2ec;
        case 0x20d2f0u: goto label_20d2f0;
        case 0x20d2f4u: goto label_20d2f4;
        case 0x20d2f8u: goto label_20d2f8;
        case 0x20d2fcu: goto label_20d2fc;
        case 0x20d300u: goto label_20d300;
        case 0x20d304u: goto label_20d304;
        case 0x20d308u: goto label_20d308;
        case 0x20d30cu: goto label_20d30c;
        case 0x20d310u: goto label_20d310;
        case 0x20d314u: goto label_20d314;
        case 0x20d318u: goto label_20d318;
        case 0x20d31cu: goto label_20d31c;
        case 0x20d320u: goto label_20d320;
        case 0x20d324u: goto label_20d324;
        case 0x20d328u: goto label_20d328;
        case 0x20d32cu: goto label_20d32c;
        case 0x20d330u: goto label_20d330;
        case 0x20d334u: goto label_20d334;
        case 0x20d338u: goto label_20d338;
        case 0x20d33cu: goto label_20d33c;
        case 0x20d340u: goto label_20d340;
        case 0x20d344u: goto label_20d344;
        case 0x20d348u: goto label_20d348;
        case 0x20d34cu: goto label_20d34c;
        case 0x20d350u: goto label_20d350;
        case 0x20d354u: goto label_20d354;
        case 0x20d358u: goto label_20d358;
        case 0x20d35cu: goto label_20d35c;
        case 0x20d360u: goto label_20d360;
        case 0x20d364u: goto label_20d364;
        case 0x20d368u: goto label_20d368;
        case 0x20d36cu: goto label_20d36c;
        case 0x20d370u: goto label_20d370;
        case 0x20d374u: goto label_20d374;
        case 0x20d378u: goto label_20d378;
        case 0x20d37cu: goto label_20d37c;
        case 0x20d380u: goto label_20d380;
        case 0x20d384u: goto label_20d384;
        case 0x20d388u: goto label_20d388;
        case 0x20d38cu: goto label_20d38c;
        case 0x20d390u: goto label_20d390;
        case 0x20d394u: goto label_20d394;
        case 0x20d398u: goto label_20d398;
        case 0x20d39cu: goto label_20d39c;
        default: break;
    }

    ctx->pc = 0x20d2c0u;

label_20d2c0:
    // 0x20d2c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20d2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_20d2c4:
    // 0x20d2c4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x20d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_20d2c8:
    // 0x20d2c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20d2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20d2cc:
    // 0x20d2cc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x20d2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_20d2d0:
    // 0x20d2d0: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x20d2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_20d2d4:
    // 0x20d2d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20d2d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20d2d8:
    // 0x20d2d8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x20d2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_20d2dc:
    // 0x20d2dc: 0x2442e8b0  addiu       $v0, $v0, -0x1750
    ctx->pc = 0x20d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961328));
label_20d2e0:
    // 0x20d2e0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x20d2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_20d2e4:
    // 0x20d2e4: 0x2463e8d8  addiu       $v1, $v1, -0x1728
    ctx->pc = 0x20d2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961368));
label_20d2e8:
    // 0x20d2e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20d2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20d2ec:
    // 0x20d2ec: 0x24c6e908  addiu       $a2, $a2, -0x16F8
    ctx->pc = 0x20d2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961416));
label_20d2f0:
    // 0x20d2f0: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x20d2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_20d2f4:
    // 0x20d2f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20d2f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20d2f8:
    // 0x20d2f8: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x20d2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
label_20d2fc:
    // 0x20d2fc: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x20d2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_20d300:
    // 0x20d300: 0xc0835ea  jal         func_20D7A8
label_20d304:
    if (ctx->pc == 0x20D304u) {
        ctx->pc = 0x20D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D300u;
        // 0x20d304: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D308u;
        goto label_20d308;
    }
    ctx->pc = 0x20D300u;
    SET_GPR_U32(ctx, 31, 0x20D308u);
    ctx->pc = 0x20D304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D300u;
    // 0x20d304: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D7A8u, 0x20D300u, 0x20D308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D308u;
label_20d308:
    // 0x20d308: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x20d308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_20d30c:
    // 0x20d30c: 0x2442cc88  addiu       $v0, $v0, -0x3378
    ctx->pc = 0x20d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954120));
label_20d310:
    // 0x20d310: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x20d310u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_20d314:
    // 0x20d314: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x20d314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_20d318:
    // 0x20d318: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_20d31c:
    if (ctx->pc == 0x20D31Cu) {
        ctx->pc = 0x20D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D318u;
        // 0x20d31c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D320u;
        goto label_20d320;
    }
    ctx->pc = 0x20D318u;
    {
        const bool branch_taken_0x20d318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D318u;
        // 0x20d31c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d318) {
            ctx->pc = 0x20D348u;
            goto label_20d348;
        }
    }
    ctx->pc = 0x20D320u;
label_20d320:
    // 0x20d320: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20d320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20d324:
    // 0x20d324: 0xc1376d6  jal         func_4DDB58
label_20d328:
    if (ctx->pc == 0x20D328u) {
        ctx->pc = 0x20D328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D324u;
        // 0x20d328: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D32Cu;
        goto label_20d32c;
    }
    ctx->pc = 0x20D324u;
    SET_GPR_U32(ctx, 31, 0x20D32Cu);
    ctx->pc = 0x20D328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D324u;
    // 0x20d328: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDB58u, 0x20D324u, 0x20D32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D32Cu;
label_20d32c:
    // 0x20d32c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20d330:
    // 0x20d330: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x20d330u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_20d334:
    // 0x20d334: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x20d334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20d338:
    // 0x20d338: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20d338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_20d33c:
    // 0x20d33c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20d340:
    // 0x20d340: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x20d340u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
label_20d344:
    // 0x20d344: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x20d344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_20d348:
    // 0x20d348: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x20d348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20d34c:
    // 0x20d34c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_20d350:
    if (ctx->pc == 0x20D350u) {
        ctx->pc = 0x20D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D34Cu;
        // 0x20d350: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D354u;
        goto label_20d354;
    }
    ctx->pc = 0x20D34Cu;
    {
        const bool branch_taken_0x20d34c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D34Cu;
        // 0x20d350: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d34c) {
            ctx->pc = 0x20D378u;
            goto label_20d378;
        }
    }
    ctx->pc = 0x20D354u;
label_20d354:
    // 0x20d354: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x20d354u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_20d358:
    // 0x20d358: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x20d358u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_20d35c:
    // 0x20d35c: 0x24c69430  addiu       $a2, $a2, -0x6BD0
    ctx->pc = 0x20d35cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939696));
label_20d360:
    // 0x20d360: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x20d360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_20d364:
    // 0x20d364: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x20d364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_20d368:
    // 0x20d368: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x20d368u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_20d36c:
    // 0x20d36c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x20d36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_20d370:
    // 0x20d370: 0x60f809  jalr        $v1
label_20d374:
    if (ctx->pc == 0x20D374u) {
        ctx->pc = 0x20D374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D370u;
        // 0x20d374: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D378u;
        goto label_20d378;
    }
    ctx->pc = 0x20D370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20D378u);
        ctx->pc = 0x20D374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D370u;
        // 0x20d374: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D370u, 0x20D378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D378u;
label_20d378:
    // 0x20d378: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20d378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20d37c:
    // 0x20d37c: 0xc06a39e  jal         func_1A8E78
label_20d380:
    if (ctx->pc == 0x20D380u) {
        ctx->pc = 0x20D380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D37Cu;
        // 0x20d380: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D384u;
        goto label_20d384;
    }
    ctx->pc = 0x20D37Cu;
    SET_GPR_U32(ctx, 31, 0x20D384u);
    ctx->pc = 0x20D380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D37Cu;
    // 0x20d380: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x20D37Cu, 0x20D384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D384u;
label_20d384:
    // 0x20d384: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x20d384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20d388:
    // 0x20d388: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20d388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20d38c:
    // 0x20d38c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x20d38cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20d390:
    // 0x20d390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20d390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20d394:
    // 0x20d394: 0x3e00008  jr          $ra
label_20d398:
    if (ctx->pc == 0x20D398u) {
        ctx->pc = 0x20D398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D394u;
        // 0x20d398: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D39Cu;
        goto label_20d39c;
    }
    ctx->pc = 0x20D394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D394u;
        // 0x20d398: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D39Cu;
label_20d39c:
    // 0x20d39c: 0x0  nop
    ctx->pc = 0x20d39cu;
    // NOP
    ctx->pc = 0x20d3a0u;
}
