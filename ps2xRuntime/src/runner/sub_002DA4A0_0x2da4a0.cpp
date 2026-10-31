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

// Function: sub_002DA4A0
// Address: 0x2da4a0 - 0x2da550
void sub_002DA4A0_0x2da4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA4A0_0x2da4a0");
#endif

    switch (ctx->pc) {
        case 0x2da4a0u: goto label_2da4a0;
        case 0x2da4a4u: goto label_2da4a4;
        case 0x2da4a8u: goto label_2da4a8;
        case 0x2da4acu: goto label_2da4ac;
        case 0x2da4b0u: goto label_2da4b0;
        case 0x2da4b4u: goto label_2da4b4;
        case 0x2da4b8u: goto label_2da4b8;
        case 0x2da4bcu: goto label_2da4bc;
        case 0x2da4c0u: goto label_2da4c0;
        case 0x2da4c4u: goto label_2da4c4;
        case 0x2da4c8u: goto label_2da4c8;
        case 0x2da4ccu: goto label_2da4cc;
        case 0x2da4d0u: goto label_2da4d0;
        case 0x2da4d4u: goto label_2da4d4;
        case 0x2da4d8u: goto label_2da4d8;
        case 0x2da4dcu: goto label_2da4dc;
        case 0x2da4e0u: goto label_2da4e0;
        case 0x2da4e4u: goto label_2da4e4;
        case 0x2da4e8u: goto label_2da4e8;
        case 0x2da4ecu: goto label_2da4ec;
        case 0x2da4f0u: goto label_2da4f0;
        case 0x2da4f4u: goto label_2da4f4;
        case 0x2da4f8u: goto label_2da4f8;
        case 0x2da4fcu: goto label_2da4fc;
        case 0x2da500u: goto label_2da500;
        case 0x2da504u: goto label_2da504;
        case 0x2da508u: goto label_2da508;
        case 0x2da50cu: goto label_2da50c;
        case 0x2da510u: goto label_2da510;
        case 0x2da514u: goto label_2da514;
        case 0x2da518u: goto label_2da518;
        case 0x2da51cu: goto label_2da51c;
        case 0x2da520u: goto label_2da520;
        case 0x2da524u: goto label_2da524;
        case 0x2da528u: goto label_2da528;
        case 0x2da52cu: goto label_2da52c;
        case 0x2da530u: goto label_2da530;
        case 0x2da534u: goto label_2da534;
        case 0x2da538u: goto label_2da538;
        case 0x2da53cu: goto label_2da53c;
        case 0x2da540u: goto label_2da540;
        case 0x2da544u: goto label_2da544;
        case 0x2da548u: goto label_2da548;
        case 0x2da54cu: goto label_2da54c;
        default: break;
    }

    ctx->pc = 0x2da4a0u;

label_2da4a0:
    // 0x2da4a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2da4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2da4a4:
    // 0x2da4a4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2da4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2da4a8:
    // 0x2da4a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2da4a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2da4ac:
    // 0x2da4ac: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2da4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2da4b0:
    // 0x2da4b0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2da4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2da4b4:
    // 0x2da4b4: 0xc0e4060  jal         func_390180
label_2da4b8:
    if (ctx->pc == 0x2DA4B8u) {
        ctx->pc = 0x2DA4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA4B4u;
        // 0x2da4b8: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA4BCu;
        goto label_2da4bc;
    }
    ctx->pc = 0x2DA4B4u;
    SET_GPR_U32(ctx, 31, 0x2DA4BCu);
    ctx->pc = 0x2DA4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA4B4u;
    // 0x2da4b8: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2DA4B4u, 0x2DA4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA4BCu;
label_2da4bc:
    // 0x2da4bc: 0xc105e98  jal         func_417A60
label_2da4c0:
    if (ctx->pc == 0x2DA4C0u) {
        ctx->pc = 0x2DA4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA4BCu;
        // 0x2da4c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA4C4u;
        goto label_2da4c4;
    }
    ctx->pc = 0x2DA4BCu;
    SET_GPR_U32(ctx, 31, 0x2DA4C4u);
    ctx->pc = 0x2DA4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA4BCu;
    // 0x2da4c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417A60u, 0x2DA4BCu, 0x2DA4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA4C4u;
label_2da4c4:
    // 0x2da4c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2da4c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da4c8:
    // 0x2da4c8: 0x10c0001b  beqz        $a2, . + 4 + (0x1B << 2)
label_2da4cc:
    if (ctx->pc == 0x2DA4CCu) {
        ctx->pc = 0x2DA4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA4C8u;
        // 0x2da4cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA4D0u;
        goto label_2da4d0;
    }
    ctx->pc = 0x2DA4C8u;
    {
        const bool branch_taken_0x2da4c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA4C8u;
        // 0x2da4cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da4c8) {
            ctx->pc = 0x2DA538u;
            goto label_2da538;
        }
    }
    ctx->pc = 0x2DA4D0u;
label_2da4d0:
    // 0x2da4d0: 0x9223003e  lbu         $v1, 0x3E($s1)
    ctx->pc = 0x2da4d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 62)));
label_2da4d4:
    // 0x2da4d4: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_2da4d8:
    if (ctx->pc == 0x2DA4D8u) {
        ctx->pc = 0x2DA4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA4D4u;
        // 0x2da4d8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA4DCu;
        goto label_2da4dc;
    }
    ctx->pc = 0x2DA4D4u;
    {
        const bool branch_taken_0x2da4d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DA4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA4D4u;
        // 0x2da4d8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da4d4) {
            ctx->pc = 0x2DA53Cu;
            goto label_2da53c;
        }
    }
    ctx->pc = 0x2DA4DCu;
label_2da4dc:
    // 0x2da4dc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2da4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2da4e0:
    // 0x2da4e0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2da4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2da4e4:
    // 0x2da4e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2da4e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2da4e8:
    // 0x2da4e8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2da4e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2da4ec:
    // 0x2da4ec: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x2da4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_2da4f0:
    // 0x2da4f0: 0xafb00024  sw          $s0, 0x24($sp)
    ctx->pc = 0x2da4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
label_2da4f4:
    // 0x2da4f4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2da4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2da4f8:
    // 0x2da4f8: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x2da4f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_2da4fc:
    // 0x2da4fc: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2da4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2da500:
    // 0x2da500: 0x40f809  jalr        $v0
label_2da504:
    if (ctx->pc == 0x2DA504u) {
        ctx->pc = 0x2DA504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA500u;
        // 0x2da504: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA508u;
        goto label_2da508;
    }
    ctx->pc = 0x2DA500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DA508u);
        ctx->pc = 0x2DA504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA500u;
        // 0x2da504: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA500u, 0x2DA508u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DA508u;
label_2da508:
    // 0x2da508: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2da508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2da50c:
    // 0x2da50c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2da50cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2da510:
    // 0x2da510: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2da510u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2da514:
    // 0x2da514: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2da514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2da518:
    // 0x2da518: 0x8cb1020c  lw          $s1, 0x20C($a1)
    ctx->pc = 0x2da518u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
label_2da51c:
    // 0x2da51c: 0x40f809  jalr        $v0
label_2da520:
    if (ctx->pc == 0x2DA520u) {
        ctx->pc = 0x2DA520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA51Cu;
        // 0x2da520: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA524u;
        goto label_2da524;
    }
    ctx->pc = 0x2DA51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DA524u);
        ctx->pc = 0x2DA520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA51Cu;
        // 0x2da520: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA51Cu, 0x2DA524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DA524u;
label_2da524:
    // 0x2da524: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2da524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_2da528:
    // 0x2da528: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2da528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2da52c:
    // 0x2da52c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2da52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2da530:
    // 0x2da530: 0xc059308  jal         func_164C20
label_2da534:
    if (ctx->pc == 0x2DA534u) {
        ctx->pc = 0x2DA534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA530u;
        // 0x2da534: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA538u;
        goto label_2da538;
    }
    ctx->pc = 0x2DA530u;
    SET_GPR_U32(ctx, 31, 0x2DA538u);
    ctx->pc = 0x2DA534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA530u;
    // 0x2da534: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164C20u, 0x2DA530u, 0x2DA538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA538u;
label_2da538:
    // 0x2da538: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2da538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2da53c:
    // 0x2da53c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2da53cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2da540:
    // 0x2da540: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2da540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2da544:
    // 0x2da544: 0x3e00008  jr          $ra
label_2da548:
    if (ctx->pc == 0x2DA548u) {
        ctx->pc = 0x2DA548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA544u;
        // 0x2da548: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA54Cu;
        goto label_2da54c;
    }
    ctx->pc = 0x2DA544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA544u;
        // 0x2da548: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA54Cu;
label_2da54c:
    // 0x2da54c: 0x0  nop
    ctx->pc = 0x2da54cu;
    // NOP
    ctx->pc = 0x2da550u;
}
