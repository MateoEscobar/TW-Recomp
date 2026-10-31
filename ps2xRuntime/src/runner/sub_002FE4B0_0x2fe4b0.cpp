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

// Function: sub_002FE4B0
// Address: 0x2fe4b0 - 0x2fe568
void sub_002FE4B0_0x2fe4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE4B0_0x2fe4b0");
#endif

    switch (ctx->pc) {
        case 0x2fe4d4u: goto label_2fe4d4;
        case 0x2fe4dcu: goto label_2fe4dc;
        case 0x2fe4f0u: goto label_2fe4f0;
        case 0x2fe4f8u: goto label_2fe4f8;
        case 0x2fe50cu: goto label_2fe50c;
        case 0x2fe538u: goto label_2fe538;
        case 0x2fe54cu: goto label_2fe54c;
        default: break;
    }

    ctx->pc = 0x2fe4b0u;

    // 0x2fe4b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2fe4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2fe4b4: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2fe4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2fe4b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2fe4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2fe4bc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2fe4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fe4c0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2fe4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2fe4c4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2fe4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2fe4c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fe4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fe4cc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2FE4CCu;
    SET_GPR_U32(ctx, 31, 0x2FE4D4u);
    ctx->pc = 0x2FE4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE4CCu;
    // 0x2fe4d0: 0xafa50014  sw          $a1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2FE4CCu, 0x2FE4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE4D4u;
label_2fe4d4:
    // 0x2fe4d4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2FE4D4u;
    SET_GPR_U32(ctx, 31, 0x2FE4DCu);
    ctx->pc = 0x2FE4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE4D4u;
    // 0x2fe4d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2FE4D4u, 0x2FE4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE4DCu;
label_2fe4dc:
    // 0x2fe4dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2fe4dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe4e0: 0x1240001b  beqz        $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x2FE4E0u;
    {
        const bool branch_taken_0x2fe4e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE4E0u;
        // 0x2fe4e4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe4e0) {
            ctx->pc = 0x2FE550u;
            goto label_2fe550;
        }
    }
    ctx->pc = 0x2FE4E8u;
    // 0x2fe4e8: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2FE4E8u;
    SET_GPR_U32(ctx, 31, 0x2FE4F0u);
    ctx->pc = 0x2FE4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE4E8u;
    // 0x2fe4ec: 0x27a40014  addiu       $a0, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2FE4E8u, 0x2FE4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE4F0u;
label_2fe4f0:
    // 0x2fe4f0: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2FE4F0u;
    SET_GPR_U32(ctx, 31, 0x2FE4F8u);
    ctx->pc = 0x2FE4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE4F0u;
    // 0x2fe4f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2FE4F0u, 0x2FE4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE4F8u;
label_2fe4f8:
    // 0x2fe4f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fe4f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe4fc: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2FE4FCu;
    {
        const bool branch_taken_0x2fe4fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE4FCu;
        // 0x2fe500: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe4fc) {
            ctx->pc = 0x2FE550u;
            goto label_2fe550;
        }
    }
    ctx->pc = 0x2FE504u;
    // 0x2fe504: 0xc087502  jal         func_21D408
    ctx->pc = 0x2FE504u;
    SET_GPR_U32(ctx, 31, 0x2FE50Cu);
    ctx->pc = 0x2FE508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE504u;
    // 0x2fe508: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2FE504u, 0x2FE50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE50Cu;
label_2fe50c:
    // 0x2fe50c: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2fe50cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
    // 0x2fe510: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x2fe510u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2fe514: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2FE514u;
    {
        const bool branch_taken_0x2fe514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE514u;
        // 0x2fe518: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe514) {
            ctx->pc = 0x2FE54Cu;
            goto label_2fe54c;
        }
    }
    ctx->pc = 0x2FE51Cu;
    // 0x2fe51c: 0x86300092  lh          $s0, 0x92($s1)
    ctx->pc = 0x2fe51cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x2fe520: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2fe520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2fe524: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fe524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe528: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2fe528u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2fe52c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2fe52cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2fe530: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x2FE530u;
    SET_GPR_U32(ctx, 31, 0x2FE538u);
    ctx->pc = 0x2FE534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE530u;
    // 0x2fe534: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2FE530u, 0x2FE538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE538u;
label_2fe538:
    // 0x2fe538: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fe538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe53c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fe53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe540: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2fe540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe544: 0xc0a2892  jal         func_28A248
    ctx->pc = 0x2FE544u;
    SET_GPR_U32(ctx, 31, 0x2FE54Cu);
    ctx->pc = 0x2FE548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE544u;
    // 0x2fe548: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A248u, 0x2FE544u, 0x2FE54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE54Cu;
label_2fe54c:
    // 0x2fe54c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2fe54cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2fe550:
    // 0x2fe550: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2fe550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fe554: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2fe554u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fe558: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fe558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fe55c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE55Cu;
        // 0x2fe560: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE564u;
    // 0x2fe564: 0x0  nop
    ctx->pc = 0x2fe564u;
    // NOP
    ctx->pc = 0x2fe568u;
}
