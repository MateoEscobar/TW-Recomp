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

// Function: sub_003DD2C0
// Address: 0x3dd2c0 - 0x3dd378
void sub_003DD2C0_0x3dd2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD2C0_0x3dd2c0");
#endif

    switch (ctx->pc) {
        case 0x3dd2c0u: goto label_3dd2c0;
        case 0x3dd2c4u: goto label_3dd2c4;
        case 0x3dd2c8u: goto label_3dd2c8;
        case 0x3dd2ccu: goto label_3dd2cc;
        case 0x3dd2d0u: goto label_3dd2d0;
        case 0x3dd2d4u: goto label_3dd2d4;
        case 0x3dd2d8u: goto label_3dd2d8;
        case 0x3dd2dcu: goto label_3dd2dc;
        case 0x3dd2e0u: goto label_3dd2e0;
        case 0x3dd2e4u: goto label_3dd2e4;
        case 0x3dd2e8u: goto label_3dd2e8;
        case 0x3dd2ecu: goto label_3dd2ec;
        case 0x3dd2f0u: goto label_3dd2f0;
        case 0x3dd2f4u: goto label_3dd2f4;
        case 0x3dd2f8u: goto label_3dd2f8;
        case 0x3dd2fcu: goto label_3dd2fc;
        case 0x3dd300u: goto label_3dd300;
        case 0x3dd304u: goto label_3dd304;
        case 0x3dd308u: goto label_3dd308;
        case 0x3dd30cu: goto label_3dd30c;
        case 0x3dd310u: goto label_3dd310;
        case 0x3dd314u: goto label_3dd314;
        case 0x3dd318u: goto label_3dd318;
        case 0x3dd31cu: goto label_3dd31c;
        case 0x3dd320u: goto label_3dd320;
        case 0x3dd324u: goto label_3dd324;
        case 0x3dd328u: goto label_3dd328;
        case 0x3dd32cu: goto label_3dd32c;
        case 0x3dd330u: goto label_3dd330;
        case 0x3dd334u: goto label_3dd334;
        case 0x3dd338u: goto label_3dd338;
        case 0x3dd33cu: goto label_3dd33c;
        case 0x3dd340u: goto label_3dd340;
        case 0x3dd344u: goto label_3dd344;
        case 0x3dd348u: goto label_3dd348;
        case 0x3dd34cu: goto label_3dd34c;
        case 0x3dd350u: goto label_3dd350;
        case 0x3dd354u: goto label_3dd354;
        case 0x3dd358u: goto label_3dd358;
        case 0x3dd35cu: goto label_3dd35c;
        case 0x3dd360u: goto label_3dd360;
        case 0x3dd364u: goto label_3dd364;
        case 0x3dd368u: goto label_3dd368;
        case 0x3dd36cu: goto label_3dd36c;
        case 0x3dd370u: goto label_3dd370;
        case 0x3dd374u: goto label_3dd374;
        default: break;
    }

    ctx->pc = 0x3dd2c0u;

label_3dd2c0:
    // 0x3dd2c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3dd2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3dd2c4:
    // 0x3dd2c4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3dd2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3dd2c8:
    // 0x3dd2c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3dd2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3dd2cc:
    // 0x3dd2cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3dd2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3dd2d0:
    // 0x3dd2d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dd2d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dd2d4:
    // 0x3dd2d4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3dd2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3dd2d8:
    // 0x3dd2d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3dd2d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dd2dc:
    // 0x3dd2dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dd2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3dd2e0:
    // 0x3dd2e0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3dd2e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3dd2e4:
    // 0x3dd2e4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3dd2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3dd2e8:
    // 0x3dd2e8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dd2e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dd2ec:
    // 0x3dd2ec: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dd2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dd2f0:
    // 0x3dd2f0: 0x40f809  jalr        $v0
label_3dd2f4:
    if (ctx->pc == 0x3DD2F4u) {
        ctx->pc = 0x3DD2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD2F0u;
        // 0x3dd2f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD2F8u;
        goto label_3dd2f8;
    }
    ctx->pc = 0x3DD2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DD2F8u);
        ctx->pc = 0x3DD2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD2F0u;
        // 0x3dd2f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD2F0u, 0x3DD2F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DD2F8u;
label_3dd2f8:
    // 0x3dd2f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3dd2f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dd2fc:
    // 0x3dd2fc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3dd2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3dd300:
    // 0x3dd300: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
label_3dd304:
    if (ctx->pc == 0x3DD304u) {
        ctx->pc = 0x3DD304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD300u;
        // 0x3dd304: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD308u;
        goto label_3dd308;
    }
    ctx->pc = 0x3DD300u;
    {
        const bool branch_taken_0x3dd300 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DD304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD300u;
        // 0x3dd304: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd300) {
            ctx->pc = 0x3DD318u;
            goto label_3dd318;
        }
    }
    ctx->pc = 0x3DD308u;
label_3dd308:
    // 0x3dd308: 0x12420012  beq         $s2, $v0, . + 4 + (0x12 << 2)
label_3dd30c:
    if (ctx->pc == 0x3DD30Cu) {
        ctx->pc = 0x3DD30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD308u;
        // 0x3dd30c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD310u;
        goto label_3dd310;
    }
    ctx->pc = 0x3DD308u;
    {
        const bool branch_taken_0x3dd308 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DD30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD308u;
        // 0x3dd30c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd308) {
            ctx->pc = 0x3DD354u;
            goto label_3dd354;
        }
    }
    ctx->pc = 0x3DD310u;
label_3dd310:
    // 0x3dd310: 0x10000012  b           . + 4 + (0x12 << 2)
label_3dd314:
    if (ctx->pc == 0x3DD314u) {
        ctx->pc = 0x3DD314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD310u;
        // 0x3dd314: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD318u;
        goto label_3dd318;
    }
    ctx->pc = 0x3DD310u;
    {
        const bool branch_taken_0x3dd310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD310u;
        // 0x3dd314: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd310) {
            ctx->pc = 0x3DD35Cu;
            goto label_3dd35c;
        }
    }
    ctx->pc = 0x3DD318u;
label_3dd318:
    // 0x3dd318: 0xc0ea146  jal         func_3A8518
label_3dd31c:
    if (ctx->pc == 0x3DD31Cu) {
        ctx->pc = 0x3DD31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD318u;
        // 0x3dd31c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD320u;
        goto label_3dd320;
    }
    ctx->pc = 0x3DD318u;
    SET_GPR_U32(ctx, 31, 0x3DD320u);
    ctx->pc = 0x3DD31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD318u;
    // 0x3dd31c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3DD318u, 0x3DD320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD320u;
label_3dd320:
    // 0x3dd320: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_3dd324:
    if (ctx->pc == 0x3DD324u) {
        ctx->pc = 0x3DD324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD320u;
        // 0x3dd324: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD328u;
        goto label_3dd328;
    }
    ctx->pc = 0x3DD320u;
    {
        const bool branch_taken_0x3dd320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dd320) {
            ctx->pc = 0x3DD324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DD320u;
            // 0x3dd324: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DD340u;
            goto label_3dd340;
        }
    }
    ctx->pc = 0x3DD328u;
label_3dd328:
    // 0x3dd328: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3dd328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3dd32c:
    // 0x3dd32c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3dd32cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3dd330:
    // 0x3dd330: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3dd330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3dd334:
    // 0x3dd334: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3dd334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3dd338:
    // 0x3dd338: 0x10000007  b           . + 4 + (0x7 << 2)
label_3dd33c:
    if (ctx->pc == 0x3DD33Cu) {
        ctx->pc = 0x3DD33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD338u;
        // 0x3dd33c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD340u;
        goto label_3dd340;
    }
    ctx->pc = 0x3DD338u;
    {
        const bool branch_taken_0x3dd338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD338u;
        // 0x3dd33c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd338) {
            ctx->pc = 0x3DD358u;
            goto label_3dd358;
        }
    }
    ctx->pc = 0x3DD340u;
label_3dd340:
    // 0x3dd340: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3dd340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3dd344:
    // 0x3dd344: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3dd344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3dd348:
    // 0x3dd348: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x3dd348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_3dd34c:
    // 0x3dd34c: 0x10000002  b           . + 4 + (0x2 << 2)
label_3dd350:
    if (ctx->pc == 0x3DD350u) {
        ctx->pc = 0x3DD350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD34Cu;
        // 0x3dd350: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD354u;
        goto label_3dd354;
    }
    ctx->pc = 0x3DD34Cu;
    {
        const bool branch_taken_0x3dd34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD34Cu;
        // 0x3dd350: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd34c) {
            ctx->pc = 0x3DD358u;
            goto label_3dd358;
        }
    }
    ctx->pc = 0x3DD354u;
label_3dd354:
    // 0x3dd354: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3dd354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3dd358:
    // 0x3dd358: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3dd358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3dd35c:
    // 0x3dd35c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3dd35cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3dd360:
    // 0x3dd360: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3dd360u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dd364:
    // 0x3dd364: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3dd364u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dd368:
    // 0x3dd368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dd368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3dd36c:
    // 0x3dd36c: 0x3e00008  jr          $ra
label_3dd370:
    if (ctx->pc == 0x3DD370u) {
        ctx->pc = 0x3DD370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD36Cu;
        // 0x3dd370: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD374u;
        goto label_3dd374;
    }
    ctx->pc = 0x3DD36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD36Cu;
        // 0x3dd370: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD374u;
label_3dd374:
    // 0x3dd374: 0x0  nop
    ctx->pc = 0x3dd374u;
    // NOP
    ctx->pc = 0x3dd378u;
}
