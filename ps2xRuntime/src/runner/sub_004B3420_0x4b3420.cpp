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

// Function: sub_004B3420
// Address: 0x4b3420 - 0x4b3600
void sub_004B3420_0x4b3420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3420_0x4b3420");
#endif

    switch (ctx->pc) {
        case 0x4b3420u: goto label_4b3420;
        case 0x4b3424u: goto label_4b3424;
        case 0x4b3428u: goto label_4b3428;
        case 0x4b342cu: goto label_4b342c;
        case 0x4b3430u: goto label_4b3430;
        case 0x4b3434u: goto label_4b3434;
        case 0x4b3438u: goto label_4b3438;
        case 0x4b343cu: goto label_4b343c;
        case 0x4b3440u: goto label_4b3440;
        case 0x4b3444u: goto label_4b3444;
        case 0x4b3448u: goto label_4b3448;
        case 0x4b344cu: goto label_4b344c;
        case 0x4b3450u: goto label_4b3450;
        case 0x4b3454u: goto label_4b3454;
        case 0x4b3458u: goto label_4b3458;
        case 0x4b345cu: goto label_4b345c;
        case 0x4b3460u: goto label_4b3460;
        case 0x4b3464u: goto label_4b3464;
        case 0x4b3468u: goto label_4b3468;
        case 0x4b346cu: goto label_4b346c;
        case 0x4b3470u: goto label_4b3470;
        case 0x4b3474u: goto label_4b3474;
        case 0x4b3478u: goto label_4b3478;
        case 0x4b347cu: goto label_4b347c;
        case 0x4b3480u: goto label_4b3480;
        case 0x4b3484u: goto label_4b3484;
        case 0x4b3488u: goto label_4b3488;
        case 0x4b348cu: goto label_4b348c;
        case 0x4b3490u: goto label_4b3490;
        case 0x4b3494u: goto label_4b3494;
        case 0x4b3498u: goto label_4b3498;
        case 0x4b349cu: goto label_4b349c;
        case 0x4b34a0u: goto label_4b34a0;
        case 0x4b34a4u: goto label_4b34a4;
        case 0x4b34a8u: goto label_4b34a8;
        case 0x4b34acu: goto label_4b34ac;
        case 0x4b34b0u: goto label_4b34b0;
        case 0x4b34b4u: goto label_4b34b4;
        case 0x4b34b8u: goto label_4b34b8;
        case 0x4b34bcu: goto label_4b34bc;
        case 0x4b34c0u: goto label_4b34c0;
        case 0x4b34c4u: goto label_4b34c4;
        case 0x4b34c8u: goto label_4b34c8;
        case 0x4b34ccu: goto label_4b34cc;
        case 0x4b34d0u: goto label_4b34d0;
        case 0x4b34d4u: goto label_4b34d4;
        case 0x4b34d8u: goto label_4b34d8;
        case 0x4b34dcu: goto label_4b34dc;
        case 0x4b34e0u: goto label_4b34e0;
        case 0x4b34e4u: goto label_4b34e4;
        case 0x4b34e8u: goto label_4b34e8;
        case 0x4b34ecu: goto label_4b34ec;
        case 0x4b34f0u: goto label_4b34f0;
        case 0x4b34f4u: goto label_4b34f4;
        case 0x4b34f8u: goto label_4b34f8;
        case 0x4b34fcu: goto label_4b34fc;
        case 0x4b3500u: goto label_4b3500;
        case 0x4b3504u: goto label_4b3504;
        case 0x4b3508u: goto label_4b3508;
        case 0x4b350cu: goto label_4b350c;
        case 0x4b3510u: goto label_4b3510;
        case 0x4b3514u: goto label_4b3514;
        case 0x4b3518u: goto label_4b3518;
        case 0x4b351cu: goto label_4b351c;
        case 0x4b3520u: goto label_4b3520;
        case 0x4b3524u: goto label_4b3524;
        case 0x4b3528u: goto label_4b3528;
        case 0x4b352cu: goto label_4b352c;
        case 0x4b3530u: goto label_4b3530;
        case 0x4b3534u: goto label_4b3534;
        case 0x4b3538u: goto label_4b3538;
        case 0x4b353cu: goto label_4b353c;
        case 0x4b3540u: goto label_4b3540;
        case 0x4b3544u: goto label_4b3544;
        case 0x4b3548u: goto label_4b3548;
        case 0x4b354cu: goto label_4b354c;
        case 0x4b3550u: goto label_4b3550;
        case 0x4b3554u: goto label_4b3554;
        case 0x4b3558u: goto label_4b3558;
        case 0x4b355cu: goto label_4b355c;
        case 0x4b3560u: goto label_4b3560;
        case 0x4b3564u: goto label_4b3564;
        case 0x4b3568u: goto label_4b3568;
        case 0x4b356cu: goto label_4b356c;
        case 0x4b3570u: goto label_4b3570;
        case 0x4b3574u: goto label_4b3574;
        case 0x4b3578u: goto label_4b3578;
        case 0x4b357cu: goto label_4b357c;
        case 0x4b3580u: goto label_4b3580;
        case 0x4b3584u: goto label_4b3584;
        case 0x4b3588u: goto label_4b3588;
        case 0x4b358cu: goto label_4b358c;
        case 0x4b3590u: goto label_4b3590;
        case 0x4b3594u: goto label_4b3594;
        case 0x4b3598u: goto label_4b3598;
        case 0x4b359cu: goto label_4b359c;
        case 0x4b35a0u: goto label_4b35a0;
        case 0x4b35a4u: goto label_4b35a4;
        case 0x4b35a8u: goto label_4b35a8;
        case 0x4b35acu: goto label_4b35ac;
        case 0x4b35b0u: goto label_4b35b0;
        case 0x4b35b4u: goto label_4b35b4;
        case 0x4b35b8u: goto label_4b35b8;
        case 0x4b35bcu: goto label_4b35bc;
        case 0x4b35c0u: goto label_4b35c0;
        case 0x4b35c4u: goto label_4b35c4;
        case 0x4b35c8u: goto label_4b35c8;
        case 0x4b35ccu: goto label_4b35cc;
        case 0x4b35d0u: goto label_4b35d0;
        case 0x4b35d4u: goto label_4b35d4;
        case 0x4b35d8u: goto label_4b35d8;
        case 0x4b35dcu: goto label_4b35dc;
        case 0x4b35e0u: goto label_4b35e0;
        case 0x4b35e4u: goto label_4b35e4;
        case 0x4b35e8u: goto label_4b35e8;
        case 0x4b35ecu: goto label_4b35ec;
        case 0x4b35f0u: goto label_4b35f0;
        case 0x4b35f4u: goto label_4b35f4;
        case 0x4b35f8u: goto label_4b35f8;
        case 0x4b35fcu: goto label_4b35fc;
        default: break;
    }

    ctx->pc = 0x4b3420u;

label_4b3420:
    // 0x4b3420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b3420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4b3424:
    // 0x4b3424: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b3424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_4b3428:
    // 0x4b3428: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b3428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_4b342c:
    // 0x4b342c: 0x24420548  addiu       $v0, $v0, 0x548
    ctx->pc = 0x4b342cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1352));
label_4b3430:
    // 0x4b3430: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b3430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4b3434:
    // 0x4b3434: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b3434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4b3438:
    // 0x4b3438: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b3438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b343c:
    // 0x4b343c: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x4b343cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_4b3440:
    // 0x4b3440: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x4b3440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_4b3444:
    // 0x4b3444: 0x460000d  bltz        $v1, . + 4 + (0xD << 2)
label_4b3448:
    if (ctx->pc == 0x4B3448u) {
        ctx->pc = 0x4B3448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3444u;
        // 0x4b3448: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B344Cu;
        goto label_4b344c;
    }
    ctx->pc = 0x4B3444u;
    {
        const bool branch_taken_0x4b3444 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4B3448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3444u;
        // 0x4b3448: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3444) {
            ctx->pc = 0x4B347Cu;
            goto label_4b347c;
        }
    }
    ctx->pc = 0x4B344Cu;
label_4b344c:
    // 0x4b344c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x4b344cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4b3450:
    // 0x4b3450: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x4b3450u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4b3454:
    // 0x4b3454: 0xc12dc58  jal         func_4B7160
label_4b3458:
    if (ctx->pc == 0x4B3458u) {
        ctx->pc = 0x4B3458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3454u;
        // 0x4b3458: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B345Cu;
        goto label_4b345c;
    }
    ctx->pc = 0x4B3454u;
    SET_GPR_U32(ctx, 31, 0x4B345Cu);
    ctx->pc = 0x4B3458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3454u;
    // 0x4b3458: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B7160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B7160u, 0x4B3454u, 0x4B345Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B345Cu;
label_4b345c:
    // 0x4b345c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b345cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4b3460:
    // 0x4b3460: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x4b3460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_4b3464:
    // 0x4b3464: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_4b3468:
    if (ctx->pc == 0x4B3468u) {
        ctx->pc = 0x4B3468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3464u;
        // 0x4b3468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B346Cu;
        goto label_4b346c;
    }
    ctx->pc = 0x4B3464u;
    {
        const bool branch_taken_0x4b3464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B3468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3464u;
        // 0x4b3468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3464) {
            ctx->pc = 0x4B3480u;
            goto label_4b3480;
        }
    }
    ctx->pc = 0x4B346Cu;
label_4b346c:
    // 0x4b346c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x4b346cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4b3470:
    // 0x4b3470: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x4b3470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_4b3474:
    // 0x4b3474: 0x40f809  jalr        $v0
label_4b3478:
    if (ctx->pc == 0x4B3478u) {
        ctx->pc = 0x4B3478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3474u;
        // 0x4b3478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B347Cu;
        goto label_4b347c;
    }
    ctx->pc = 0x4B3474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B347Cu);
        ctx->pc = 0x4B3478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3474u;
        // 0x4b3478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3474u, 0x4B347Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B347Cu;
label_4b347c:
    // 0x4b347c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b347cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b3480:
    // 0x4b3480: 0xc12beb0  jal         func_4AFAC0
label_4b3484:
    if (ctx->pc == 0x4B3484u) {
        ctx->pc = 0x4B3484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3480u;
        // 0x4b3484: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3488u;
        goto label_4b3488;
    }
    ctx->pc = 0x4B3480u;
    SET_GPR_U32(ctx, 31, 0x4B3488u);
    ctx->pc = 0x4B3484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3480u;
    // 0x4b3484: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AFAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFAC0u, 0x4B3480u, 0x4B3488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3488u;
label_4b3488:
    // 0x4b3488: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b3488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b348c:
    // 0x4b348c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b348cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b3490:
    // 0x4b3490: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b3490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b3494:
    // 0x4b3494: 0x3e00008  jr          $ra
label_4b3498:
    if (ctx->pc == 0x4B3498u) {
        ctx->pc = 0x4B3498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3494u;
        // 0x4b3498: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B349Cu;
        goto label_4b349c;
    }
    ctx->pc = 0x4B3494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3494u;
        // 0x4b3498: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B349Cu;
label_4b349c:
    // 0x4b349c: 0x0  nop
    ctx->pc = 0x4b349cu;
    // NOP
label_4b34a0:
    // 0x4b34a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4b34a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4b34a4:
    // 0x4b34a4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x4b34a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4b34a8:
    // 0x4b34a8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b34a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_4b34ac:
    // 0x4b34ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b34acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4b34b0:
    // 0x4b34b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b34b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b34b4:
    // 0x4b34b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4b34b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4b34b8:
    // 0x4b34b8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4b34b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4b34bc:
    // 0x4b34bc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4b34bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_4b34c0:
    // 0x4b34c0: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x4b34c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_4b34c4:
    // 0x4b34c4: 0x4410043  bgez        $v0, . + 4 + (0x43 << 2)
label_4b34c8:
    if (ctx->pc == 0x4B34C8u) {
        ctx->pc = 0x4B34C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B34C4u;
        // 0x4b34c8: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B34CCu;
        goto label_4b34cc;
    }
    ctx->pc = 0x4B34C4u;
    {
        const bool branch_taken_0x4b34c4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4B34C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B34C4u;
        // 0x4b34c8: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b34c4) {
            ctx->pc = 0x4B35D4u;
            goto label_4b35d4;
        }
    }
    ctx->pc = 0x4B34CCu;
label_4b34cc:
    // 0x4b34cc: 0x36020002  ori         $v0, $s0, 0x2
    ctx->pc = 0x4b34ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
label_4b34d0:
    // 0x4b34d0: 0x32030008  andi        $v1, $s0, 0x8
    ctx->pc = 0x4b34d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_4b34d4:
    // 0x4b34d4: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x4b34d4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_4b34d8:
    // 0x4b34d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4b34d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b34dc:
    // 0x4b34dc: 0x32020003  andi        $v0, $s0, 0x3
    ctx->pc = 0x4b34dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
label_4b34e0:
    // 0x4b34e0: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
label_4b34e4:
    if (ctx->pc == 0x4B34E4u) {
        ctx->pc = 0x4B34E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B34E0u;
        // 0x4b34e4: 0x32020002  andi        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B34E8u;
        goto label_4b34e8;
    }
    ctx->pc = 0x4B34E0u;
    {
        const bool branch_taken_0x4b34e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x4B34E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B34E0u;
        // 0x4b34e4: 0x32020002  andi        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b34e0) {
            ctx->pc = 0x4B34F4u;
            goto label_4b34f4;
        }
    }
    ctx->pc = 0x4B34E8u;
label_4b34e8:
    // 0x4b34e8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4b34e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b34ec:
    // 0x4b34ec: 0x1000000b  b           . + 4 + (0xB << 2)
label_4b34f0:
    if (ctx->pc == 0x4B34F0u) {
        ctx->pc = 0x4B34F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B34ECu;
        // 0x4b34f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B34F4u;
        goto label_4b34f4;
    }
    ctx->pc = 0x4B34ECu;
    {
        const bool branch_taken_0x4b34ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B34F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B34ECu;
        // 0x4b34f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b34ec) {
            ctx->pc = 0x4B351Cu;
            goto label_4b351c;
        }
    }
    ctx->pc = 0x4B34F4u;
label_4b34f4:
    // 0x4b34f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4b34f8:
    if (ctx->pc == 0x4B34F8u) {
        ctx->pc = 0x4B34F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B34F4u;
        // 0x4b34f8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B34FCu;
        goto label_4b34fc;
    }
    ctx->pc = 0x4B34F4u;
    {
        const bool branch_taken_0x4b34f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B34F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B34F4u;
        // 0x4b34f8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b34f4) {
            ctx->pc = 0x4B3504u;
            goto label_4b3504;
        }
    }
    ctx->pc = 0x4B34FCu;
label_4b34fc:
    // 0x4b34fc: 0x10000007  b           . + 4 + (0x7 << 2)
label_4b3500:
    if (ctx->pc == 0x4B3500u) {
        ctx->pc = 0x4B3500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B34FCu;
        // 0x4b3500: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3504u;
        goto label_4b3504;
    }
    ctx->pc = 0x4B34FCu;
    {
        const bool branch_taken_0x4b34fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B34FCu;
        // 0x4b3500: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b34fc) {
            ctx->pc = 0x4B351Cu;
            goto label_4b351c;
        }
    }
    ctx->pc = 0x4B3504u;
label_4b3504:
    // 0x4b3504: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x4b3504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_4b3508:
    // 0x4b3508: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4b350c:
    if (ctx->pc == 0x4B350Cu) {
        ctx->pc = 0x4B350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3508u;
        // 0x4b350c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3510u;
        goto label_4b3510;
    }
    ctx->pc = 0x4B3508u;
    {
        const bool branch_taken_0x4b3508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3508u;
        // 0x4b350c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3508) {
            ctx->pc = 0x4B3518u;
            goto label_4b3518;
        }
    }
    ctx->pc = 0x4B3510u;
label_4b3510:
    // 0x4b3510: 0x10000002  b           . + 4 + (0x2 << 2)
label_4b3514:
    if (ctx->pc == 0x4B3514u) {
        ctx->pc = 0x4B3514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3510u;
        // 0x4b3514: 0x24120008  addiu       $s2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3518u;
        goto label_4b3518;
    }
    ctx->pc = 0x4B3510u;
    {
        const bool branch_taken_0x4b3510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3510u;
        // 0x4b3514: 0x24120008  addiu       $s2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3510) {
            ctx->pc = 0x4B351Cu;
            goto label_4b351c;
        }
    }
    ctx->pc = 0x4B3518u;
label_4b3518:
    // 0x4b3518: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x4b3518u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4b351c:
    // 0x4b351c: 0x32020080  andi        $v0, $s0, 0x80
    ctx->pc = 0x4b351cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
label_4b3520:
    // 0x4b3520: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_4b3524:
    if (ctx->pc == 0x4B3524u) {
        ctx->pc = 0x4B3524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3520u;
        // 0x4b3524: 0x2402ff7f  addiu       $v0, $zero, -0x81 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3528u;
        goto label_4b3528;
    }
    ctx->pc = 0x4B3520u;
    {
        const bool branch_taken_0x4b3520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3520u;
        // 0x4b3524: 0x2402ff7f  addiu       $v0, $zero, -0x81 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3520) {
            ctx->pc = 0x4B352Cu;
            goto label_4b352c;
        }
    }
    ctx->pc = 0x4B3528u;
label_4b3528:
    // 0x4b3528: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x4b3528u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_4b352c:
    // 0x4b352c: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x4b352cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
label_4b3530:
    // 0x4b3530: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_4b3534:
    if (ctx->pc == 0x4B3534u) {
        ctx->pc = 0x4B3534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3530u;
        // 0x4b3534: 0x34840400  ori         $a0, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3538u;
        goto label_4b3538;
    }
    ctx->pc = 0x4B3530u;
    {
        const bool branch_taken_0x4b3530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b3530) {
            ctx->pc = 0x4B3534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B3530u;
            // 0x4b3534: 0x34840400  ori         $a0, $a0, 0x400 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1024);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B3548u;
            goto label_4b3548;
        }
    }
    ctx->pc = 0x4B3538u;
label_4b3538:
    // 0x4b3538: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4b3538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b353c:
    // 0x4b353c: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_4b3540:
    if (ctx->pc == 0x4B3540u) {
        ctx->pc = 0x4B3540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B353Cu;
        // 0x4b3540: 0x32020008  andi        $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3544u;
        goto label_4b3544;
    }
    ctx->pc = 0x4B353Cu;
    {
        const bool branch_taken_0x4b353c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B3540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B353Cu;
        // 0x4b3540: 0x32020008  andi        $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b353c) {
            ctx->pc = 0x4B354Cu;
            goto label_4b354c;
        }
    }
    ctx->pc = 0x4B3544u;
label_4b3544:
    // 0x4b3544: 0x34840400  ori         $a0, $a0, 0x400
    ctx->pc = 0x4b3544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1024);
label_4b3548:
    // 0x4b3548: 0x32020008  andi        $v0, $s0, 0x8
    ctx->pc = 0x4b3548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_4b354c:
    // 0x4b354c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4b3550:
    if (ctx->pc == 0x4B3550u) {
        ctx->pc = 0x4B3550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B354Cu;
        // 0x4b3550: 0x32020020  andi        $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3554u;
        goto label_4b3554;
    }
    ctx->pc = 0x4B354Cu;
    {
        const bool branch_taken_0x4b354c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B354Cu;
        // 0x4b3550: 0x32020020  andi        $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b354c) {
            ctx->pc = 0x4B355Cu;
            goto label_4b355c;
        }
    }
    ctx->pc = 0x4B3554u;
label_4b3554:
    // 0x4b3554: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x4b3554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_4b3558:
    // 0x4b3558: 0x36521000  ori         $s2, $s2, 0x1000
    ctx->pc = 0x4b3558u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)4096);
label_4b355c:
    // 0x4b355c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_4b3560:
    if (ctx->pc == 0x4B3560u) {
        ctx->pc = 0x4B3560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B355Cu;
        // 0x4b3560: 0x34850800  ori         $a1, $a0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3564u;
        goto label_4b3564;
    }
    ctx->pc = 0x4B355Cu;
    {
        const bool branch_taken_0x4b355c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B3560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B355Cu;
        // 0x4b3560: 0x34850800  ori         $a1, $a0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b355c) {
            ctx->pc = 0x4B3574u;
            goto label_4b3574;
        }
    }
    ctx->pc = 0x4B3564u;
label_4b3564:
    // 0x4b3564: 0x34830200  ori         $v1, $a0, 0x200
    ctx->pc = 0x4b3564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
label_4b3568:
    // 0x4b3568: 0x3a020001  xori        $v0, $s0, 0x1
    ctx->pc = 0x4b3568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
label_4b356c:
    // 0x4b356c: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x4b356cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_4b3570:
    // 0x4b3570: 0x34850800  ori         $a1, $a0, 0x800
    ctx->pc = 0x4b3570u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2048);
label_4b3574:
    // 0x4b3574: 0x32020040  andi        $v0, $s0, 0x40
    ctx->pc = 0x4b3574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)64);
label_4b3578:
    // 0x4b3578: 0x82280a  movz        $a1, $a0, $v0
    ctx->pc = 0x4b3578u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_4b357c:
    // 0x4b357c: 0xc10f5d8  jal         func_43D760
label_4b3580:
    if (ctx->pc == 0x4B3580u) {
        ctx->pc = 0x4B3580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B357Cu;
        // 0x4b3580: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3584u;
        goto label_4b3584;
    }
    ctx->pc = 0x4B357Cu;
    SET_GPR_U32(ctx, 31, 0x4B3584u);
    ctx->pc = 0x4B3580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B357Cu;
    // 0x4b3580: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D760u, 0x4B357Cu, 0x4B3584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3584u;
label_4b3584:
    // 0x4b3584: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b3584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b3588:
    // 0x4b3588: 0x4800017  bltz        $a0, . + 4 + (0x17 << 2)
label_4b358c:
    if (ctx->pc == 0x4B358Cu) {
        ctx->pc = 0x4B358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3588u;
        // 0x4b358c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3590u;
        goto label_4b3590;
    }
    ctx->pc = 0x4B3588u;
    {
        const bool branch_taken_0x4b3588 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x4B358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3588u;
        // 0x4b358c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3588) {
            ctx->pc = 0x4B35E8u;
            goto label_4b35e8;
        }
    }
    ctx->pc = 0x4B3590u;
label_4b3590:
    // 0x4b3590: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4b3590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4b3594:
    // 0x4b3594: 0x2403eff3  addiu       $v1, $zero, -0x100D
    ctx->pc = 0x4b3594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963187));
label_4b3598:
    // 0x4b3598: 0x3245100c  andi        $a1, $s2, 0x100C
    ctx->pc = 0x4b3598u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4108);
label_4b359c:
    // 0x4b359c: 0xae240038  sw          $a0, 0x38($s1)
    ctx->pc = 0x4b359cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 4));
label_4b35a0:
    // 0x4b35a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b35a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4b35a4:
    // 0x4b35a4: 0x3204000c  andi        $a0, $s0, 0xC
    ctx->pc = 0x4b35a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)12);
label_4b35a8:
    // 0x4b35a8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4b35a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_4b35ac:
    // 0x4b35ac: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_4b35b0:
    if (ctx->pc == 0x4B35B0u) {
        ctx->pc = 0x4B35B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B35ACu;
        // 0x4b35b0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B35B4u;
        goto label_4b35b4;
    }
    ctx->pc = 0x4B35ACu;
    {
        const bool branch_taken_0x4b35ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B35B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B35ACu;
        // 0x4b35b0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b35ac) {
            ctx->pc = 0x4B35DCu;
            goto label_4b35dc;
        }
    }
    ctx->pc = 0x4B35B4u;
label_4b35b4:
    // 0x4b35b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b35b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b35b8:
    // 0x4b35b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b35b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b35bc:
    // 0x4b35bc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4b35bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b35c0:
    // 0x4b35c0: 0xc12cab4  jal         func_4B2AD0
label_4b35c4:
    if (ctx->pc == 0x4B35C4u) {
        ctx->pc = 0x4B35C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B35C0u;
        // 0x4b35c4: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B35C8u;
        goto label_4b35c8;
    }
    ctx->pc = 0x4B35C0u;
    SET_GPR_U32(ctx, 31, 0x4B35C8u);
    ctx->pc = 0x4B35C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B35C0u;
    // 0x4b35c4: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2AD0u, 0x4B35C0u, 0x4B35C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B35C8u;
label_4b35c8:
    // 0x4b35c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4b35c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b35cc:
    // 0x4b35cc: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_4b35d0:
    if (ctx->pc == 0x4B35D0u) {
        ctx->pc = 0x4B35D4u;
        goto label_4b35d4;
    }
    ctx->pc = 0x4B35CCu;
    {
        const bool branch_taken_0x4b35cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4b35cc) {
            ctx->pc = 0x4B35DCu;
            goto label_4b35dc;
        }
    }
    ctx->pc = 0x4B35D4u;
label_4b35d4:
    // 0x4b35d4: 0x10000004  b           . + 4 + (0x4 << 2)
label_4b35d8:
    if (ctx->pc == 0x4B35D8u) {
        ctx->pc = 0x4B35D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B35D4u;
        // 0x4b35d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B35DCu;
        goto label_4b35dc;
    }
    ctx->pc = 0x4B35D4u;
    {
        const bool branch_taken_0x4b35d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B35D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B35D4u;
        // 0x4b35d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b35d4) {
            ctx->pc = 0x4B35E8u;
            goto label_4b35e8;
        }
    }
    ctx->pc = 0x4B35DCu;
label_4b35dc:
    // 0x4b35dc: 0xc12c23a  jal         func_4B08E8
label_4b35e0:
    if (ctx->pc == 0x4B35E0u) {
        ctx->pc = 0x4B35E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B35DCu;
        // 0x4b35e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B35E4u;
        goto label_4b35e4;
    }
    ctx->pc = 0x4B35DCu;
    SET_GPR_U32(ctx, 31, 0x4B35E4u);
    ctx->pc = 0x4B35E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B35DCu;
    // 0x4b35e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B08E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B08E8u, 0x4B35DCu, 0x4B35E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B35E4u;
label_4b35e4:
    // 0x4b35e4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4b35e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b35e8:
    // 0x4b35e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4b35e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4b35ec:
    // 0x4b35ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b35ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b35f0:
    // 0x4b35f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b35f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b35f4:
    // 0x4b35f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b35f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b35f8:
    // 0x4b35f8: 0x3e00008  jr          $ra
label_4b35fc:
    if (ctx->pc == 0x4B35FCu) {
        ctx->pc = 0x4B35FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B35F8u;
        // 0x4b35fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3600u;
        goto label_fallthrough_0x4b35f8;
    }
    ctx->pc = 0x4B35F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B35FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B35F8u;
        // 0x4b35fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B35F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4b35f8:
    ctx->pc = 0x4B3600u;
}
