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

// Function: sub_004F44B8
// Address: 0x4f44b8 - 0x4f4580
void sub_004F44B8_0x4f44b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F44B8_0x4f44b8");
#endif

    switch (ctx->pc) {
        case 0x4f44b8u: goto label_4f44b8;
        case 0x4f44bcu: goto label_4f44bc;
        case 0x4f44c0u: goto label_4f44c0;
        case 0x4f44c4u: goto label_4f44c4;
        case 0x4f44c8u: goto label_4f44c8;
        case 0x4f44ccu: goto label_4f44cc;
        case 0x4f44d0u: goto label_4f44d0;
        case 0x4f44d4u: goto label_4f44d4;
        case 0x4f44d8u: goto label_4f44d8;
        case 0x4f44dcu: goto label_4f44dc;
        case 0x4f44e0u: goto label_4f44e0;
        case 0x4f44e4u: goto label_4f44e4;
        case 0x4f44e8u: goto label_4f44e8;
        case 0x4f44ecu: goto label_4f44ec;
        case 0x4f44f0u: goto label_4f44f0;
        case 0x4f44f4u: goto label_4f44f4;
        case 0x4f44f8u: goto label_4f44f8;
        case 0x4f44fcu: goto label_4f44fc;
        case 0x4f4500u: goto label_4f4500;
        case 0x4f4504u: goto label_4f4504;
        case 0x4f4508u: goto label_4f4508;
        case 0x4f450cu: goto label_4f450c;
        case 0x4f4510u: goto label_4f4510;
        case 0x4f4514u: goto label_4f4514;
        case 0x4f4518u: goto label_4f4518;
        case 0x4f451cu: goto label_4f451c;
        case 0x4f4520u: goto label_4f4520;
        case 0x4f4524u: goto label_4f4524;
        case 0x4f4528u: goto label_4f4528;
        case 0x4f452cu: goto label_4f452c;
        case 0x4f4530u: goto label_4f4530;
        case 0x4f4534u: goto label_4f4534;
        case 0x4f4538u: goto label_4f4538;
        case 0x4f453cu: goto label_4f453c;
        case 0x4f4540u: goto label_4f4540;
        case 0x4f4544u: goto label_4f4544;
        case 0x4f4548u: goto label_4f4548;
        case 0x4f454cu: goto label_4f454c;
        case 0x4f4550u: goto label_4f4550;
        case 0x4f4554u: goto label_4f4554;
        case 0x4f4558u: goto label_4f4558;
        case 0x4f455cu: goto label_4f455c;
        case 0x4f4560u: goto label_4f4560;
        case 0x4f4564u: goto label_4f4564;
        case 0x4f4568u: goto label_4f4568;
        case 0x4f456cu: goto label_4f456c;
        case 0x4f4570u: goto label_4f4570;
        case 0x4f4574u: goto label_4f4574;
        case 0x4f4578u: goto label_4f4578;
        case 0x4f457cu: goto label_4f457c;
        default: break;
    }

    ctx->pc = 0x4f44b8u;

label_4f44b8:
    // 0x4f44b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4f44b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4f44bc:
    // 0x4f44bc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4f44bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_4f44c0:
    // 0x4f44c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f44c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4f44c4:
    // 0x4f44c4: 0x24425ad0  addiu       $v0, $v0, 0x5AD0
    ctx->pc = 0x4f44c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23248));
label_4f44c8:
    // 0x4f44c8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4f44c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4f44cc:
    // 0x4f44cc: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x4f44ccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_4f44d0:
    // 0x4f44d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4f44d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f44d4:
    // 0x4f44d4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4f44d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4f44d8:
    // 0x4f44d8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4f44d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4f44dc:
    // 0x4f44dc: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x4f44dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_4f44e0:
    // 0x4f44e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f44e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f44e4:
    // 0x4f44e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4f44e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f44e8:
    // 0x4f44e8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4f44e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4f44ec:
    // 0x4f44ec: 0x26101678  addiu       $s0, $s0, 0x1678
    ctx->pc = 0x4f44ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5752));
label_4f44f0:
    // 0x4f44f0: 0x8e4827e4  lw          $t0, 0x27E4($s2)
    ctx->pc = 0x4f44f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_4f44f4:
    // 0x4f44f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4f44f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f44f8:
    // 0x4f44f8: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x4f44f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4f44fc:
    // 0x4f44fc: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x4f44fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_4f4500:
    // 0x4f4500: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4f4500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f4504:
    // 0x4f4504: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x4f4504u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_4f4508:
    // 0x4f4508: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x4f4508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_4f450c:
    // 0x4f450c: 0x40f809  jalr        $v0
label_4f4510:
    if (ctx->pc == 0x4F4510u) {
        ctx->pc = 0x4F4510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F450Cu;
        // 0x4f4510: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4514u;
        goto label_4f4514;
    }
    ctx->pc = 0x4F450Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F4514u);
        ctx->pc = 0x4F4510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F450Cu;
        // 0x4f4510: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F450Cu, 0x4F4514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F4514u;
label_4f4514:
    // 0x4f4514: 0x8e4827e4  lw          $t0, 0x27E4($s2)
    ctx->pc = 0x4f4514u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_4f4518:
    // 0x4f4518: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4f4518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f451c:
    // 0x4f451c: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x4f451cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_4f4520:
    // 0x4f4520: 0x24070027  addiu       $a3, $zero, 0x27
    ctx->pc = 0x4f4520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_4f4524:
    // 0x4f4524: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x4f4524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4f4528:
    // 0x4f4528: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f4528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f452c:
    // 0x4f452c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f452cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f4530:
    // 0x4f4530: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f4530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f4534:
    // 0x4f4534: 0x60f809  jalr        $v1
label_4f4538:
    if (ctx->pc == 0x4F4538u) {
        ctx->pc = 0x4F4538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4534u;
        // 0x4f4538: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F453Cu;
        goto label_4f453c;
    }
    ctx->pc = 0x4F4534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F453Cu);
        ctx->pc = 0x4F4538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4534u;
        // 0x4f4538: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4534u, 0x4F453Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F453Cu;
label_4f453c:
    // 0x4f453c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4f453cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_4f4540:
    // 0x4f4540: 0x32310001  andi        $s1, $s1, 0x1
    ctx->pc = 0x4f4540u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_4f4544:
    // 0x4f4544: 0x24424e70  addiu       $v0, $v0, 0x4E70
    ctx->pc = 0x4f4544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20080));
label_4f4548:
    // 0x4f4548: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x4f4548u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_4f454c:
    // 0x4f454c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4f454cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4f4550:
    // 0x4f4550: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x4f4550u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_4f4554:
    // 0x4f4554: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_4f4558:
    if (ctx->pc == 0x4F4558u) {
        ctx->pc = 0x4F4558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4554u;
        // 0x4f4558: 0xae600010  sw          $zero, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F455Cu;
        goto label_4f455c;
    }
    ctx->pc = 0x4F4554u;
    {
        const bool branch_taken_0x4f4554 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F4558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4554u;
        // 0x4f4558: 0xae600010  sw          $zero, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4554) {
            ctx->pc = 0x4F4564u;
            goto label_4f4564;
        }
    }
    ctx->pc = 0x4F455Cu;
label_4f455c:
    // 0x4f455c: 0xc10b208  jal         func_42C820
label_4f4560:
    if (ctx->pc == 0x4F4560u) {
        ctx->pc = 0x4F4560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F455Cu;
        // 0x4f4560: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4564u;
        goto label_4f4564;
    }
    ctx->pc = 0x4F455Cu;
    SET_GPR_U32(ctx, 31, 0x4F4564u);
    ctx->pc = 0x4F4560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F455Cu;
    // 0x4f4560: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4F455Cu, 0x4F4564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F4564u;
label_4f4564:
    // 0x4f4564: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4f4564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f4568:
    // 0x4f4568: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4f4568u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f456c:
    // 0x4f456c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f456cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f4570:
    // 0x4f4570: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4f4570u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f4574:
    // 0x4f4574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f4574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f4578:
    // 0x4f4578: 0x3e00008  jr          $ra
label_4f457c:
    if (ctx->pc == 0x4F457Cu) {
        ctx->pc = 0x4F457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4578u;
        // 0x4f457c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4580u;
        goto label_fallthrough_0x4f4578;
    }
    ctx->pc = 0x4F4578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4578u;
        // 0x4f457c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4f4578:
    ctx->pc = 0x4F4580u;
}
