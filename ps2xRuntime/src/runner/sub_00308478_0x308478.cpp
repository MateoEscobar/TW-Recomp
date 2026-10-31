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

// Function: sub_00308478
// Address: 0x308478 - 0x3085b4
void sub_00308478_0x308478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308478_0x308478");
#endif

    switch (ctx->pc) {
        case 0x308478u: goto label_308478;
        case 0x30847cu: goto label_30847c;
        case 0x308480u: goto label_308480;
        case 0x308484u: goto label_308484;
        case 0x308488u: goto label_308488;
        case 0x30848cu: goto label_30848c;
        case 0x308490u: goto label_308490;
        case 0x308494u: goto label_308494;
        case 0x308498u: goto label_308498;
        case 0x30849cu: goto label_30849c;
        case 0x3084a0u: goto label_3084a0;
        case 0x3084a4u: goto label_3084a4;
        case 0x3084a8u: goto label_3084a8;
        case 0x3084acu: goto label_3084ac;
        case 0x3084b0u: goto label_3084b0;
        case 0x3084b4u: goto label_3084b4;
        case 0x3084b8u: goto label_3084b8;
        case 0x3084bcu: goto label_3084bc;
        case 0x3084c0u: goto label_3084c0;
        case 0x3084c4u: goto label_3084c4;
        case 0x3084c8u: goto label_3084c8;
        case 0x3084ccu: goto label_3084cc;
        case 0x3084d0u: goto label_3084d0;
        case 0x3084d4u: goto label_3084d4;
        case 0x3084d8u: goto label_3084d8;
        case 0x3084dcu: goto label_3084dc;
        case 0x3084e0u: goto label_3084e0;
        case 0x3084e4u: goto label_3084e4;
        case 0x3084e8u: goto label_3084e8;
        case 0x3084ecu: goto label_3084ec;
        case 0x3084f0u: goto label_3084f0;
        case 0x3084f4u: goto label_3084f4;
        case 0x3084f8u: goto label_3084f8;
        case 0x3084fcu: goto label_3084fc;
        case 0x308500u: goto label_308500;
        case 0x308504u: goto label_308504;
        case 0x308508u: goto label_308508;
        case 0x30850cu: goto label_30850c;
        case 0x308510u: goto label_308510;
        case 0x308514u: goto label_308514;
        case 0x308518u: goto label_308518;
        case 0x30851cu: goto label_30851c;
        case 0x308520u: goto label_308520;
        case 0x308524u: goto label_308524;
        case 0x308528u: goto label_308528;
        case 0x30852cu: goto label_30852c;
        case 0x308530u: goto label_308530;
        case 0x308534u: goto label_308534;
        case 0x308538u: goto label_308538;
        case 0x30853cu: goto label_30853c;
        case 0x308540u: goto label_308540;
        case 0x308544u: goto label_308544;
        case 0x308548u: goto label_308548;
        case 0x30854cu: goto label_30854c;
        case 0x308550u: goto label_308550;
        case 0x308554u: goto label_308554;
        case 0x308558u: goto label_308558;
        case 0x30855cu: goto label_30855c;
        case 0x308560u: goto label_308560;
        case 0x308564u: goto label_308564;
        case 0x308568u: goto label_308568;
        case 0x30856cu: goto label_30856c;
        case 0x308570u: goto label_308570;
        case 0x308574u: goto label_308574;
        case 0x308578u: goto label_308578;
        case 0x30857cu: goto label_30857c;
        case 0x308580u: goto label_308580;
        case 0x308584u: goto label_308584;
        case 0x308588u: goto label_308588;
        case 0x30858cu: goto label_30858c;
        case 0x308590u: goto label_308590;
        case 0x308594u: goto label_308594;
        case 0x308598u: goto label_308598;
        case 0x30859cu: goto label_30859c;
        case 0x3085a0u: goto label_3085a0;
        case 0x3085a4u: goto label_3085a4;
        case 0x3085a8u: goto label_3085a8;
        case 0x3085acu: goto label_3085ac;
        case 0x3085b0u: goto label_3085b0;
        default: break;
    }

    ctx->pc = 0x308478u;

label_308478:
    // 0x308478: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x308478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_30847c:
    // 0x30847c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x30847cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_308480:
    // 0x308480: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x308480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_308484:
    // 0x308484: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x308484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_308488:
    // 0x308488: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x308488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_30848c:
    // 0x30848c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x30848cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_308490:
    // 0x308490: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x308490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_308494:
    // 0x308494: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x308494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_308498:
    // 0x308498: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x308498u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_30849c:
    // 0x30849c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30849cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3084a0:
    // 0x3084a0: 0xc08a61a  jal         func_229868
label_3084a4:
    if (ctx->pc == 0x3084A4u) {
        ctx->pc = 0x3084A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3084A0u;
        // 0x3084a4: 0x8e440024  lw          $a0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3084A8u;
        goto label_3084a8;
    }
    ctx->pc = 0x3084A0u;
    SET_GPR_U32(ctx, 31, 0x3084A8u);
    ctx->pc = 0x3084A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3084A0u;
    // 0x3084a4: 0x8e440024  lw          $a0, 0x24($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3084A0u, 0x3084A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3084A8u;
label_3084a8:
    // 0x3084a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3084a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3084ac:
    // 0x3084ac: 0x12600042  beqz        $s3, . + 4 + (0x42 << 2)
label_3084b0:
    if (ctx->pc == 0x3084B0u) {
        ctx->pc = 0x3084B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3084ACu;
        // 0x3084b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3084B4u;
        goto label_3084b4;
    }
    ctx->pc = 0x3084ACu;
    {
        const bool branch_taken_0x3084ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3084B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3084ACu;
        // 0x3084b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3084ac) {
            ctx->pc = 0x3085B8u;
            return;
        }
    }
    ctx->pc = 0x3084B4u;
label_3084b4:
    // 0x3084b4: 0xc087502  jal         func_21D408
label_3084b8:
    if (ctx->pc == 0x3084B8u) {
        ctx->pc = 0x3084B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3084B4u;
        // 0x3084b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3084BCu;
        goto label_3084bc;
    }
    ctx->pc = 0x3084B4u;
    SET_GPR_U32(ctx, 31, 0x3084BCu);
    ctx->pc = 0x3084B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3084B4u;
    // 0x3084b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3084B4u, 0x3084BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3084BCu;
label_3084bc:
    // 0x3084bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3084bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3084c0:
    // 0x3084c0: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x3084c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3084c4:
    // 0x3084c4: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x3084c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3084c8:
    // 0x3084c8: 0x2c830016  sltiu       $v1, $a0, 0x16
    ctx->pc = 0x3084c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
label_3084cc:
    // 0x3084cc: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
label_3084d0:
    if (ctx->pc == 0x3084D0u) {
        ctx->pc = 0x3084D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3084CCu;
        // 0x3084d0: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3084D4u;
        goto label_3084d4;
    }
    ctx->pc = 0x3084CCu;
    {
        const bool branch_taken_0x3084cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3084D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3084CCu;
        // 0x3084d0: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3084cc) {
            ctx->pc = 0x3085B4u;
            return;
        }
    }
    ctx->pc = 0x3084D4u;
label_3084d4:
    // 0x3084d4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3084d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3084d8:
    // 0x3084d8: 0x2442ad70  addiu       $v0, $v0, -0x5290
    ctx->pc = 0x3084d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946160));
label_3084dc:
    // 0x3084dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3084dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3084e0:
    // 0x3084e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3084e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3084e4:
    // 0x3084e4: 0x800008  jr          $a0
label_3084e8:
    if (ctx->pc == 0x3084E8u) {
        ctx->pc = 0x3084ECu;
        goto label_3084ec;
    }
    ctx->pc = 0x3084E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3084ECu: goto label_3084ec;
            case 0x308518u: goto label_308518;
            case 0x308530u: goto label_308530;
            case 0x308540u: goto label_308540;
            case 0x3085A8u: goto label_3085a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3084E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3084ECu;
label_3084ec:
    // 0x3084ec: 0x92020032  lbu         $v0, 0x32($s0)
    ctx->pc = 0x3084ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 50)));
label_3084f0:
    // 0x3084f0: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
label_3084f4:
    if (ctx->pc == 0x3084F4u) {
        ctx->pc = 0x3084F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3084F0u;
        // 0x3084f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3084F8u;
        goto label_3084f8;
    }
    ctx->pc = 0x3084F0u;
    {
        const bool branch_taken_0x3084f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3084F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3084F0u;
        // 0x3084f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3084f0) {
            ctx->pc = 0x3085B8u;
            return;
        }
    }
    ctx->pc = 0x3084F8u;
label_3084f8:
    // 0x3084f8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x3084f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3084fc:
    // 0x3084fc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x3084fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_308500:
    // 0x308500: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x308500u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_308504:
    // 0x308504: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x308504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_308508:
    // 0x308508: 0x60f809  jalr        $v1
label_30850c:
    if (ctx->pc == 0x30850Cu) {
        ctx->pc = 0x30850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308508u;
        // 0x30850c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308510u;
        goto label_308510;
    }
    ctx->pc = 0x308508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x308510u);
        ctx->pc = 0x30850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308508u;
        // 0x30850c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308508u, 0x308510u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308510u;
label_308510:
    // 0x308510: 0x10000029  b           . + 4 + (0x29 << 2)
label_308514:
    if (ctx->pc == 0x308514u) {
        ctx->pc = 0x308514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308510u;
        // 0x308514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308518u;
        goto label_308518;
    }
    ctx->pc = 0x308510u;
    {
        const bool branch_taken_0x308510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308510u;
        // 0x308514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308510) {
            ctx->pc = 0x3085B8u;
            return;
        }
    }
    ctx->pc = 0x308518u;
label_308518:
    // 0x308518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x308518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30851c:
    // 0x30851c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x30851cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_308520:
    // 0x308520: 0xc0c1f50  jal         func_307D40
label_308524:
    if (ctx->pc == 0x308524u) {
        ctx->pc = 0x308524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308520u;
        // 0x308524: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308528u;
        goto label_308528;
    }
    ctx->pc = 0x308520u;
    SET_GPR_U32(ctx, 31, 0x308528u);
    ctx->pc = 0x308524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308520u;
    // 0x308524: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307D40u, 0x308520u, 0x308528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308528u;
label_308528:
    // 0x308528: 0x10000023  b           . + 4 + (0x23 << 2)
label_30852c:
    if (ctx->pc == 0x30852Cu) {
        ctx->pc = 0x30852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308528u;
        // 0x30852c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308530u;
        goto label_308530;
    }
    ctx->pc = 0x308528u;
    {
        const bool branch_taken_0x308528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308528u;
        // 0x30852c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308528) {
            ctx->pc = 0x3085B8u;
            return;
        }
    }
    ctx->pc = 0x308530u;
label_308530:
    // 0x308530: 0xc0c1de2  jal         func_307788
label_308534:
    if (ctx->pc == 0x308534u) {
        ctx->pc = 0x308534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308530u;
        // 0x308534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308538u;
        goto label_308538;
    }
    ctx->pc = 0x308530u;
    SET_GPR_U32(ctx, 31, 0x308538u);
    ctx->pc = 0x308534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308530u;
    // 0x308534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307788u, 0x308530u, 0x308538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308538u;
label_308538:
    // 0x308538: 0x1000001f  b           . + 4 + (0x1F << 2)
label_30853c:
    if (ctx->pc == 0x30853Cu) {
        ctx->pc = 0x30853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308538u;
        // 0x30853c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308540u;
        goto label_308540;
    }
    ctx->pc = 0x308538u;
    {
        const bool branch_taken_0x308538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308538u;
        // 0x30853c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308538) {
            ctx->pc = 0x3085B8u;
            return;
        }
    }
    ctx->pc = 0x308540u;
label_308540:
    // 0x308540: 0x8e23020c  lw          $v1, 0x20C($s1)
    ctx->pc = 0x308540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_308544:
    // 0x308544: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x308544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_308548:
    // 0x308548: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
label_30854c:
    if (ctx->pc == 0x30854Cu) {
        ctx->pc = 0x30854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308548u;
        // 0x30854c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308550u;
        goto label_308550;
    }
    ctx->pc = 0x308548u;
    {
        const bool branch_taken_0x308548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308548u;
        // 0x30854c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308548) {
            ctx->pc = 0x3085B8u;
            return;
        }
    }
    ctx->pc = 0x308550u;
label_308550:
    // 0x308550: 0xc0a40d2  jal         func_290348
label_308554:
    if (ctx->pc == 0x308554u) {
        ctx->pc = 0x308554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308550u;
        // 0x308554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308558u;
        goto label_308558;
    }
    ctx->pc = 0x308550u;
    SET_GPR_U32(ctx, 31, 0x308558u);
    ctx->pc = 0x308554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308550u;
    // 0x308554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x308550u, 0x308558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308558u;
label_308558:
    // 0x308558: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_30855c:
    if (ctx->pc == 0x30855Cu) {
        ctx->pc = 0x30855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308558u;
        // 0x30855c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308560u;
        goto label_308560;
    }
    ctx->pc = 0x308558u;
    {
        const bool branch_taken_0x308558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308558u;
        // 0x30855c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308558) {
            ctx->pc = 0x3085B8u;
            return;
        }
    }
    ctx->pc = 0x308560u;
label_308560:
    // 0x308560: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x308560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_308564:
    // 0x308564: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_308568:
    if (ctx->pc == 0x308568u) {
        ctx->pc = 0x308568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308564u;
        // 0x308568: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30856Cu;
        goto label_30856c;
    }
    ctx->pc = 0x308564u;
    {
        const bool branch_taken_0x308564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308564u;
        // 0x308568: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308564) {
            ctx->pc = 0x3085B8u;
            return;
        }
    }
    ctx->pc = 0x30856Cu;
label_30856c:
    // 0x30856c: 0xc0a3630  jal         func_28D8C0
label_308570:
    if (ctx->pc == 0x308570u) {
        ctx->pc = 0x308570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30856Cu;
        // 0x308570: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308574u;
        goto label_308574;
    }
    ctx->pc = 0x30856Cu;
    SET_GPR_U32(ctx, 31, 0x308574u);
    ctx->pc = 0x308570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30856Cu;
    // 0x308570: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x30856Cu, 0x308574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308574u;
label_308574:
    // 0x308574: 0xc0a3628  jal         func_28D8A0
label_308578:
    if (ctx->pc == 0x308578u) {
        ctx->pc = 0x308578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308574u;
        // 0x308578: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30857Cu;
        goto label_30857c;
    }
    ctx->pc = 0x308574u;
    SET_GPR_U32(ctx, 31, 0x30857Cu);
    ctx->pc = 0x308578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308574u;
    // 0x308578: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x308574u, 0x30857Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30857Cu;
label_30857c:
    // 0x30857c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x30857cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_308580:
    // 0x308580: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x308580u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_308584:
    // 0x308584: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x308584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_308588:
    // 0x308588: 0x40f809  jalr        $v0
label_30858c:
    if (ctx->pc == 0x30858Cu) {
        ctx->pc = 0x30858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308588u;
        // 0x30858c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308590u;
        goto label_308590;
    }
    ctx->pc = 0x308588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308590u);
        ctx->pc = 0x30858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308588u;
        // 0x30858c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308588u, 0x308590u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308590u;
label_308590:
    // 0x308590: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x308590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_308594:
    // 0x308594: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x308594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308598:
    // 0x308598: 0xc0ab742  jal         func_2ADD08
label_30859c:
    if (ctx->pc == 0x30859Cu) {
        ctx->pc = 0x30859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308598u;
        // 0x30859c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3085A0u;
        goto label_3085a0;
    }
    ctx->pc = 0x308598u;
    SET_GPR_U32(ctx, 31, 0x3085A0u);
    ctx->pc = 0x30859Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308598u;
    // 0x30859c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADD08u, 0x308598u, 0x3085A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3085A0u;
label_3085a0:
    // 0x3085a0: 0x10000005  b           . + 4 + (0x5 << 2)
label_3085a4:
    if (ctx->pc == 0x3085A4u) {
        ctx->pc = 0x3085A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3085A0u;
        // 0x3085a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3085A8u;
        goto label_3085a8;
    }
    ctx->pc = 0x3085A0u;
    {
        const bool branch_taken_0x3085a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3085A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3085A0u;
        // 0x3085a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3085a0) {
            ctx->pc = 0x3085B8u;
            return;
        }
    }
    ctx->pc = 0x3085A8u;
label_3085a8:
    // 0x3085a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3085a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3085ac:
    // 0x3085ac: 0xc0c1e1e  jal         func_307878
label_3085b0:
    if (ctx->pc == 0x3085B0u) {
        ctx->pc = 0x3085B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3085ACu;
        // 0x3085b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3085B4u;
        goto label_fallthrough_0x3085ac;
    }
    ctx->pc = 0x3085ACu;
    SET_GPR_U32(ctx, 31, 0x3085B4u);
    ctx->pc = 0x3085B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3085ACu;
    // 0x3085b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307878u, 0x3085ACu, 0x3085B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x3085ac:
    ctx->pc = 0x3085B4u;
}
