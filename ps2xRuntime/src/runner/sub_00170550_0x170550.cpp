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

// Function: sub_00170550
// Address: 0x170550 - 0x170600
void sub_00170550_0x170550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170550_0x170550");
#endif

    switch (ctx->pc) {
        case 0x170550u: goto label_170550;
        case 0x170554u: goto label_170554;
        case 0x170558u: goto label_170558;
        case 0x17055cu: goto label_17055c;
        case 0x170560u: goto label_170560;
        case 0x170564u: goto label_170564;
        case 0x170568u: goto label_170568;
        case 0x17056cu: goto label_17056c;
        case 0x170570u: goto label_170570;
        case 0x170574u: goto label_170574;
        case 0x170578u: goto label_170578;
        case 0x17057cu: goto label_17057c;
        case 0x170580u: goto label_170580;
        case 0x170584u: goto label_170584;
        case 0x170588u: goto label_170588;
        case 0x17058cu: goto label_17058c;
        case 0x170590u: goto label_170590;
        case 0x170594u: goto label_170594;
        case 0x170598u: goto label_170598;
        case 0x17059cu: goto label_17059c;
        case 0x1705a0u: goto label_1705a0;
        case 0x1705a4u: goto label_1705a4;
        case 0x1705a8u: goto label_1705a8;
        case 0x1705acu: goto label_1705ac;
        case 0x1705b0u: goto label_1705b0;
        case 0x1705b4u: goto label_1705b4;
        case 0x1705b8u: goto label_1705b8;
        case 0x1705bcu: goto label_1705bc;
        case 0x1705c0u: goto label_1705c0;
        case 0x1705c4u: goto label_1705c4;
        case 0x1705c8u: goto label_1705c8;
        case 0x1705ccu: goto label_1705cc;
        case 0x1705d0u: goto label_1705d0;
        case 0x1705d4u: goto label_1705d4;
        case 0x1705d8u: goto label_1705d8;
        case 0x1705dcu: goto label_1705dc;
        case 0x1705e0u: goto label_1705e0;
        case 0x1705e4u: goto label_1705e4;
        case 0x1705e8u: goto label_1705e8;
        case 0x1705ecu: goto label_1705ec;
        case 0x1705f0u: goto label_1705f0;
        case 0x1705f4u: goto label_1705f4;
        case 0x1705f8u: goto label_1705f8;
        case 0x1705fcu: goto label_1705fc;
        default: break;
    }

    ctx->pc = 0x170550u;

label_170550:
    // 0x170550: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x170550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_170554:
    // 0x170554: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x170554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_170558:
    // 0x170558: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x170558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_17055c:
    // 0x17055c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17055cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_170560:
    // 0x170560: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x170560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_170564:
    // 0x170564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_170568:
    // 0x170568: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x170568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_17056c:
    // 0x17056c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_170570:
    if (ctx->pc == 0x170570u) {
        ctx->pc = 0x170570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17056Cu;
        // 0x170570: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170574u;
        goto label_170574;
    }
    ctx->pc = 0x17056Cu;
    {
        const bool branch_taken_0x17056c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17056Cu;
        // 0x170570: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17056c) {
            ctx->pc = 0x1705D8u;
            goto label_1705d8;
        }
    }
    ctx->pc = 0x170574u;
label_170574:
    // 0x170574: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x170574u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_170578:
    // 0x170578: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x170578u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_17057c:
    // 0x17057c: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x17057cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_170580:
    // 0x170580: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x170580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_170584:
    // 0x170584: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x170584u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_170588:
    // 0x170588: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x170588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_17058c:
    // 0x17058c: 0x60f809  jalr        $v1
label_170590:
    if (ctx->pc == 0x170590u) {
        ctx->pc = 0x170590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17058Cu;
        // 0x170590: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170594u;
        goto label_170594;
    }
    ctx->pc = 0x17058Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x170594u);
        ctx->pc = 0x170590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17058Cu;
        // 0x170590: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17058Cu, 0x170594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x170594u;
label_170594:
    // 0x170594: 0x8e0827e4  lw          $t0, 0x27E4($s0)
    ctx->pc = 0x170594u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_170598:
    // 0x170598: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x170598u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_17059c:
    // 0x17059c: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x17059cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1705a0:
    // 0x1705a0: 0x24c619f8  addiu       $a2, $a2, 0x19F8
    ctx->pc = 0x1705a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6648));
label_1705a4:
    // 0x1705a4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1705a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1705a8:
    // 0x1705a8: 0x24070133  addiu       $a3, $zero, 0x133
    ctx->pc = 0x1705a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 307));
label_1705ac:
    // 0x1705ac: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1705acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1705b0:
    // 0x1705b0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1705b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1705b4:
    // 0x1705b4: 0x60f809  jalr        $v1
label_1705b8:
    if (ctx->pc == 0x1705B8u) {
        ctx->pc = 0x1705B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1705B4u;
        // 0x1705b8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1705BCu;
        goto label_1705bc;
    }
    ctx->pc = 0x1705B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1705BCu);
        ctx->pc = 0x1705B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1705B4u;
        // 0x1705b8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1705B4u, 0x1705BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1705BCu;
label_1705bc:
    // 0x1705bc: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x1705bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_1705c0:
    // 0x1705c0: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x1705c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_1705c4:
    // 0x1705c4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1705c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1705c8:
    // 0x1705c8: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1705c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1705cc:
    // 0x1705cc: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x1705ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1705d0:
    // 0x1705d0: 0x60f809  jalr        $v1
label_1705d4:
    if (ctx->pc == 0x1705D4u) {
        ctx->pc = 0x1705D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1705D0u;
        // 0x1705d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1705D8u;
        goto label_1705d8;
    }
    ctx->pc = 0x1705D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1705D8u);
        ctx->pc = 0x1705D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1705D0u;
        // 0x1705d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1705D0u, 0x1705D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1705D8u;
label_1705d8:
    // 0x1705d8: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x1705d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
label_1705dc:
    // 0x1705dc: 0xc05c14a  jal         func_170528
label_1705e0:
    if (ctx->pc == 0x1705E0u) {
        ctx->pc = 0x1705E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1705DCu;
        // 0x1705e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1705E4u;
        goto label_1705e4;
    }
    ctx->pc = 0x1705DCu;
    SET_GPR_U32(ctx, 31, 0x1705E4u);
    ctx->pc = 0x1705E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1705DCu;
    // 0x1705e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170528u, 0x1705DCu, 0x1705E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1705E4u;
label_1705e4:
    // 0x1705e4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1705e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1705e8:
    // 0x1705e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1705e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1705ec:
    // 0x1705ec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1705ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1705f0:
    // 0x1705f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1705f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1705f4:
    // 0x1705f4: 0x3e00008  jr          $ra
label_1705f8:
    if (ctx->pc == 0x1705F8u) {
        ctx->pc = 0x1705F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1705F4u;
        // 0x1705f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1705FCu;
        goto label_1705fc;
    }
    ctx->pc = 0x1705F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1705F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1705F4u;
        // 0x1705f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1705F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1705FCu;
label_1705fc:
    // 0x1705fc: 0x0  nop
    ctx->pc = 0x1705fcu;
    // NOP
    ctx->pc = 0x170600u;
}
