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

// Function: sub_003AB2C8
// Address: 0x3ab2c8 - 0x3ab3e0
void sub_003AB2C8_0x3ab2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB2C8_0x3ab2c8");
#endif

    switch (ctx->pc) {
        case 0x3ab2c8u: goto label_3ab2c8;
        case 0x3ab2ccu: goto label_3ab2cc;
        case 0x3ab2d0u: goto label_3ab2d0;
        case 0x3ab2d4u: goto label_3ab2d4;
        case 0x3ab2d8u: goto label_3ab2d8;
        case 0x3ab2dcu: goto label_3ab2dc;
        case 0x3ab2e0u: goto label_3ab2e0;
        case 0x3ab2e4u: goto label_3ab2e4;
        case 0x3ab2e8u: goto label_3ab2e8;
        case 0x3ab2ecu: goto label_3ab2ec;
        case 0x3ab2f0u: goto label_3ab2f0;
        case 0x3ab2f4u: goto label_3ab2f4;
        case 0x3ab2f8u: goto label_3ab2f8;
        case 0x3ab2fcu: goto label_3ab2fc;
        case 0x3ab300u: goto label_3ab300;
        case 0x3ab304u: goto label_3ab304;
        case 0x3ab308u: goto label_3ab308;
        case 0x3ab30cu: goto label_3ab30c;
        case 0x3ab310u: goto label_3ab310;
        case 0x3ab314u: goto label_3ab314;
        case 0x3ab318u: goto label_3ab318;
        case 0x3ab31cu: goto label_3ab31c;
        case 0x3ab320u: goto label_3ab320;
        case 0x3ab324u: goto label_3ab324;
        case 0x3ab328u: goto label_3ab328;
        case 0x3ab32cu: goto label_3ab32c;
        case 0x3ab330u: goto label_3ab330;
        case 0x3ab334u: goto label_3ab334;
        case 0x3ab338u: goto label_3ab338;
        case 0x3ab33cu: goto label_3ab33c;
        case 0x3ab340u: goto label_3ab340;
        case 0x3ab344u: goto label_3ab344;
        case 0x3ab348u: goto label_3ab348;
        case 0x3ab34cu: goto label_3ab34c;
        case 0x3ab350u: goto label_3ab350;
        case 0x3ab354u: goto label_3ab354;
        case 0x3ab358u: goto label_3ab358;
        case 0x3ab35cu: goto label_3ab35c;
        case 0x3ab360u: goto label_3ab360;
        case 0x3ab364u: goto label_3ab364;
        case 0x3ab368u: goto label_3ab368;
        case 0x3ab36cu: goto label_3ab36c;
        case 0x3ab370u: goto label_3ab370;
        case 0x3ab374u: goto label_3ab374;
        case 0x3ab378u: goto label_3ab378;
        case 0x3ab37cu: goto label_3ab37c;
        case 0x3ab380u: goto label_3ab380;
        case 0x3ab384u: goto label_3ab384;
        case 0x3ab388u: goto label_3ab388;
        case 0x3ab38cu: goto label_3ab38c;
        case 0x3ab390u: goto label_3ab390;
        case 0x3ab394u: goto label_3ab394;
        case 0x3ab398u: goto label_3ab398;
        case 0x3ab39cu: goto label_3ab39c;
        case 0x3ab3a0u: goto label_3ab3a0;
        case 0x3ab3a4u: goto label_3ab3a4;
        case 0x3ab3a8u: goto label_3ab3a8;
        case 0x3ab3acu: goto label_3ab3ac;
        case 0x3ab3b0u: goto label_3ab3b0;
        case 0x3ab3b4u: goto label_3ab3b4;
        case 0x3ab3b8u: goto label_3ab3b8;
        case 0x3ab3bcu: goto label_3ab3bc;
        case 0x3ab3c0u: goto label_3ab3c0;
        case 0x3ab3c4u: goto label_3ab3c4;
        case 0x3ab3c8u: goto label_3ab3c8;
        case 0x3ab3ccu: goto label_3ab3cc;
        case 0x3ab3d0u: goto label_3ab3d0;
        case 0x3ab3d4u: goto label_3ab3d4;
        case 0x3ab3d8u: goto label_3ab3d8;
        case 0x3ab3dcu: goto label_3ab3dc;
        default: break;
    }

    ctx->pc = 0x3ab2c8u;

label_3ab2c8:
    // 0x3ab2c8: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x3ab2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
label_3ab2cc:
    // 0x3ab2cc: 0x7fb00430  sq          $s0, 0x430($sp)
    ctx->pc = 0x3ab2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 16));
label_3ab2d0:
    // 0x3ab2d0: 0x7fb10420  sq          $s1, 0x420($sp)
    ctx->pc = 0x3ab2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 17));
label_3ab2d4:
    // 0x3ab2d4: 0xffbf0410  sd          $ra, 0x410($sp)
    ctx->pc = 0x3ab2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
label_3ab2d8:
    // 0x3ab2d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ab2d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ab2dc:
    // 0x3ab2dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ab2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ab2e0:
    // 0x3ab2e0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ab2e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ab2e4:
    // 0x3ab2e4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ab2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ab2e8:
    // 0x3ab2e8: 0x40f809  jalr        $v0
label_3ab2ec:
    if (ctx->pc == 0x3AB2ECu) {
        ctx->pc = 0x3AB2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB2E8u;
        // 0x3ab2ec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB2F0u;
        goto label_3ab2f0;
    }
    ctx->pc = 0x3AB2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AB2F0u);
        ctx->pc = 0x3AB2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB2E8u;
        // 0x3ab2ec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB2E8u, 0x3AB2F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AB2F0u;
label_3ab2f0:
    // 0x3ab2f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ab2f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ab2f4:
    // 0x3ab2f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ab2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ab2f8:
    // 0x3ab2f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3ab2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ab2fc:
    // 0x3ab2fc: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3ab2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3ab300:
    // 0x3ab300: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ab300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3ab304:
    // 0x3ab304: 0x0  nop
    ctx->pc = 0x3ab304u;
    // NOP
label_3ab308:
    // 0x3ab308: 0x0  nop
    ctx->pc = 0x3ab308u;
    // NOP
label_3ab30c:
    // 0x3ab30c: 0x0  nop
    ctx->pc = 0x3ab30cu;
    // NOP
label_3ab310:
    // 0x3ab310: 0x0  nop
    ctx->pc = 0x3ab310u;
    // NOP
label_3ab314:
    // 0x3ab314: 0x0  nop
    ctx->pc = 0x3ab314u;
    // NOP
label_3ab318:
    // 0x3ab318: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3ab31c:
    if (ctx->pc == 0x3AB31Cu) {
        ctx->pc = 0x3AB31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB318u;
        // 0x3ab31c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB320u;
        goto label_3ab320;
    }
    ctx->pc = 0x3AB318u;
    {
        const bool branch_taken_0x3ab318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3AB31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB318u;
        // 0x3ab31c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab318) {
            ctx->pc = 0x3AB308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab308;
        }
    }
    ctx->pc = 0x3AB320u;
label_3ab320:
    // 0x3ab320: 0xc138ddc  jal         func_4E3770
label_3ab324:
    if (ctx->pc == 0x3AB324u) {
        ctx->pc = 0x3AB328u;
        goto label_3ab328;
    }
    ctx->pc = 0x3AB320u;
    SET_GPR_U32(ctx, 31, 0x3AB328u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3AB320u, 0x3AB328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB328u;
label_3ab328:
    // 0x3ab328: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ab328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ab32c:
    // 0x3ab32c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3ab32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3ab330:
    // 0x3ab330: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
label_3ab334:
    if (ctx->pc == 0x3AB334u) {
        ctx->pc = 0x3AB334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB330u;
        // 0x3ab334: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB338u;
        goto label_3ab338;
    }
    ctx->pc = 0x3AB330u;
    {
        const bool branch_taken_0x3ab330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AB334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB330u;
        // 0x3ab334: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab330) {
            ctx->pc = 0x3AB3CCu;
            goto label_3ab3cc;
        }
    }
    ctx->pc = 0x3AB338u;
label_3ab338:
    // 0x3ab338: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_3ab33c:
    if (ctx->pc == 0x3AB33Cu) {
        ctx->pc = 0x3AB33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB338u;
        // 0x3ab33c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB340u;
        goto label_3ab340;
    }
    ctx->pc = 0x3AB338u;
    {
        const bool branch_taken_0x3ab338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB338u;
        // 0x3ab33c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab338) {
            ctx->pc = 0x3AB3A0u;
            goto label_3ab3a0;
        }
    }
    ctx->pc = 0x3AB340u;
label_3ab340:
    // 0x3ab340: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3ab340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ab344:
    // 0x3ab344: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x3ab344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_3ab348:
    // 0x3ab348: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3ab348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_3ab34c:
    // 0x3ab34c: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x3ab34cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
label_3ab350:
    // 0x3ab350: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3ab350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ab354:
    // 0x3ab354: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x3ab354u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_3ab358:
    // 0x3ab358: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_3ab35c:
    if (ctx->pc == 0x3AB35Cu) {
        ctx->pc = 0x3AB35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB358u;
        // 0x3ab35c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB360u;
        goto label_3ab360;
    }
    ctx->pc = 0x3AB358u;
    {
        const bool branch_taken_0x3ab358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ab358) {
            ctx->pc = 0x3AB35Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB358u;
            // 0x3ab35c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB39Cu;
            goto label_3ab39c;
        }
    }
    ctx->pc = 0x3AB360u;
label_3ab360:
    // 0x3ab360: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3ab360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3ab364:
    // 0x3ab364: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3ab368:
    if (ctx->pc == 0x3AB368u) {
        ctx->pc = 0x3AB368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB364u;
        // 0x3ab368: 0xc62000bc  lwc1        $f0, 0xBC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB36Cu;
        goto label_3ab36c;
    }
    ctx->pc = 0x3AB364u;
    {
        const bool branch_taken_0x3ab364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB364u;
        // 0x3ab368: 0xc62000bc  lwc1        $f0, 0xBC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab364) {
            ctx->pc = 0x3AB380u;
            goto label_3ab380;
        }
    }
    ctx->pc = 0x3AB36Cu;
label_3ab36c:
    // 0x3ab36c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3ab36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_3ab370:
    // 0x3ab370: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3ab370u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3ab374:
    // 0x3ab374: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3ab374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ab378:
    // 0x3ab378: 0x10000006  b           . + 4 + (0x6 << 2)
label_3ab37c:
    if (ctx->pc == 0x3AB37Cu) {
        ctx->pc = 0x3AB37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB378u;
        // 0x3ab37c: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB380u;
        goto label_3ab380;
    }
    ctx->pc = 0x3AB378u;
    {
        const bool branch_taken_0x3ab378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB378u;
        // 0x3ab37c: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab378) {
            ctx->pc = 0x3AB394u;
            goto label_3ab394;
        }
    }
    ctx->pc = 0x3AB380u;
label_3ab380:
    // 0x3ab380: 0x3c013e0f  lui         $at, 0x3E0F
    ctx->pc = 0x3ab380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15887 << 16));
label_3ab384:
    // 0x3ab384: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x3ab384u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_3ab388:
    // 0x3ab388: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3ab388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ab38c:
    // 0x3ab38c: 0x0  nop
    ctx->pc = 0x3ab38cu;
    // NOP
label_3ab390:
    // 0x3ab390: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3ab390u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3ab394:
    // 0x3ab394: 0xe62000c0  swc1        $f0, 0xC0($s1)
    ctx->pc = 0x3ab394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3ab398:
    // 0x3ab398: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ab398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ab39c:
    // 0x3ab39c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3ab39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3ab3a0:
    // 0x3ab3a0: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_3ab3a4:
    if (ctx->pc == 0x3AB3A4u) {
        ctx->pc = 0x3AB3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB3A0u;
        // 0x3ab3a4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB3A8u;
        goto label_3ab3a8;
    }
    ctx->pc = 0x3AB3A0u;
    {
        const bool branch_taken_0x3ab3a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ab3a0) {
            ctx->pc = 0x3AB3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB3A0u;
            // 0x3ab3a4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB3C0u;
            goto label_3ab3c0;
        }
    }
    ctx->pc = 0x3AB3A8u;
label_3ab3a8:
    // 0x3ab3a8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3ab3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ab3ac:
    // 0x3ab3ac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3ab3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3ab3b0:
    // 0x3ab3b0: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3ab3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3ab3b4:
    // 0x3ab3b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3ab3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3ab3b8:
    // 0x3ab3b8: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x3ab3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
label_3ab3bc:
    // 0x3ab3bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ab3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ab3c0:
    // 0x3ab3c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ab3c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ab3c4:
    // 0x3ab3c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ab3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3ab3c8:
    // 0x3ab3c8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3ab3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3ab3cc:
    // 0x3ab3cc: 0x7bb00430  lq          $s0, 0x430($sp)
    ctx->pc = 0x3ab3ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3ab3d0:
    // 0x3ab3d0: 0x7bb10420  lq          $s1, 0x420($sp)
    ctx->pc = 0x3ab3d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3ab3d4:
    // 0x3ab3d4: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x3ab3d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_3ab3d8:
    // 0x3ab3d8: 0x3e00008  jr          $ra
label_3ab3dc:
    if (ctx->pc == 0x3AB3DCu) {
        ctx->pc = 0x3AB3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB3D8u;
        // 0x3ab3dc: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB3E0u;
        goto label_fallthrough_0x3ab3d8;
    }
    ctx->pc = 0x3AB3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB3D8u;
        // 0x3ab3dc: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ab3d8:
    ctx->pc = 0x3AB3E0u;
}
