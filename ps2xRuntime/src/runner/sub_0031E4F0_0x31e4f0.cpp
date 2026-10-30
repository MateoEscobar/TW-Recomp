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

// Function: sub_0031E4F0
// Address: 0x31e4f0 - 0x31e5f8
void sub_0031E4F0_0x31e4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E4F0_0x31e4f0");
#endif

    switch (ctx->pc) {
        case 0x31e528u: goto label_31e528;
        case 0x31e530u: goto label_31e530;
        case 0x31e540u: goto label_31e540;
        case 0x31e564u: goto label_31e564;
        case 0x31e574u: goto label_31e574;
        case 0x31e584u: goto label_31e584;
        case 0x31e58cu: goto label_31e58c;
        case 0x31e594u: goto label_31e594;
        case 0x31e5b8u: goto label_31e5b8;
        case 0x31e5c4u: goto label_31e5c4;
        default: break;
    }

    ctx->pc = 0x31e4f0u;

    // 0x31e4f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x31e4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x31e4f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31e4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31e4f8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x31e4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x31e4fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x31e4fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e500: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x31e500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x31e504: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x31e504u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e508: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x31e508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x31e50c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x31e50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x31e510: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x31e510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x31e514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31e514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31e518: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x31e518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x31e51c: 0x24550048  addiu       $s5, $v0, 0x48
    ctx->pc = 0x31e51cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x31e520: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x31e520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e524: 0x0  nop
    ctx->pc = 0x31e524u;
    // NOP
label_31e528:
    // 0x31e528: 0xc137826  jal         func_4DE098
    ctx->pc = 0x31E528u;
    SET_GPR_U32(ctx, 31, 0x31E530u);
    ctx->pc = 0x31E52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E528u;
    // 0x31e52c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x31E528u, 0x31E530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E530u;
label_31e530:
    // 0x31e530: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x31e530u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x31e534: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31e534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e538: 0xc0e409a  jal         func_390268
    ctx->pc = 0x31E538u;
    SET_GPR_U32(ctx, 31, 0x31E540u);
    ctx->pc = 0x31E53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E538u;
    // 0x31e53c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31E538u, 0x31E540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E540u;
label_31e540:
    // 0x31e540: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31e540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e544: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x31E544u;
    {
        const bool branch_taken_0x31e544 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E544u;
        // 0x31e548: 0x2e820010  sltiu       $v0, $s4, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e544) {
            ctx->pc = 0x31E5C8u;
            goto label_31e5c8;
        }
    }
    ctx->pc = 0x31E54Cu;
    // 0x31e54c: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x31e54cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x31e550: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x31e550u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x31e554: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x31E554u;
    {
        const bool branch_taken_0x31e554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E554u;
        // 0x31e558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e554) {
            ctx->pc = 0x31E5C4u;
            goto label_31e5c4;
        }
    }
    ctx->pc = 0x31E55Cu;
    // 0x31e55c: 0xc089f98  jal         func_227E60
    ctx->pc = 0x31E55Cu;
    SET_GPR_U32(ctx, 31, 0x31E564u);
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x31E55Cu, 0x31E564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E564u;
label_31e564:
    // 0x31e564: 0x10520018  beq         $v0, $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x31E564u;
    {
        const bool branch_taken_0x31e564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x31E568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E564u;
        // 0x31e568: 0x2e820010  sltiu       $v0, $s4, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e564) {
            ctx->pc = 0x31E5C8u;
            goto label_31e5c8;
        }
    }
    ctx->pc = 0x31E56Cu;
    // 0x31e56c: 0xc087502  jal         func_21D408
    ctx->pc = 0x31E56Cu;
    SET_GPR_U32(ctx, 31, 0x31E574u);
    ctx->pc = 0x31E570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E56Cu;
    // 0x31e570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31E56Cu, 0x31E574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E574u;
label_31e574:
    // 0x31e574: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31e574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e578: 0xa232028d  sb          $s2, 0x28D($s1)
    ctx->pc = 0x31e578u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 653), (uint8_t)GPR_U32(ctx, 18));
    // 0x31e57c: 0xc0a3630  jal         func_28D8C0
    ctx->pc = 0x31E57Cu;
    SET_GPR_U32(ctx, 31, 0x31E584u);
    ctx->pc = 0x31E580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E57Cu;
    // 0x31e580: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x31E57Cu, 0x31E584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E584u;
label_31e584:
    // 0x31e584: 0xc0a3628  jal         func_28D8A0
    ctx->pc = 0x31E584u;
    SET_GPR_U32(ctx, 31, 0x31E58Cu);
    ctx->pc = 0x31E588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E584u;
    // 0x31e588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x31E584u, 0x31E58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E58Cu;
label_31e58c:
    // 0x31e58c: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x31E58Cu;
    SET_GPR_U32(ctx, 31, 0x31E594u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x31E58Cu, 0x31E594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E594u;
label_31e594:
    // 0x31e594: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31e594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e598: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31e598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e59c: 0x26680020  addiu       $t0, $s3, 0x20
    ctx->pc = 0x31e59cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x31e5a0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31E5A0u;
    {
        const bool branch_taken_0x31e5a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E5A0u;
        // 0x31e5a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e5a0) {
            ctx->pc = 0x31E5B8u;
            goto label_31e5b8;
        }
    }
    ctx->pc = 0x31E5A8u;
    // 0x31e5a8: 0x8e660030  lw          $a2, 0x30($s3)
    ctx->pc = 0x31e5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x31e5ac: 0x8e670034  lw          $a3, 0x34($s3)
    ctx->pc = 0x31e5acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x31e5b0: 0xc0b353e  jal         func_2CD4F8
    ctx->pc = 0x31E5B0u;
    SET_GPR_U32(ctx, 31, 0x31E5B8u);
    ctx->pc = 0x31E5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E5B0u;
    // 0x31e5b4: 0xc66c0040  lwc1        $f12, 0x40($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD4F8u, 0x31E5B0u, 0x31E5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E5B8u;
label_31e5b8:
    // 0x31e5b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31e5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e5bc: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x31E5BCu;
    SET_GPR_U32(ctx, 31, 0x31E5C4u);
    ctx->pc = 0x31E5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E5BCu;
    // 0x31e5c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x31E5BCu, 0x31E5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E5C4u;
label_31e5c4:
    // 0x31e5c4: 0x2e820010  sltiu       $v0, $s4, 0x10
    ctx->pc = 0x31e5c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_31e5c8:
    // 0x31e5c8: 0x5440ffd7  bnel        $v0, $zero, . + 4 + (-0x29 << 2)
    ctx->pc = 0x31E5C8u;
    {
        const bool branch_taken_0x31e5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e5c8) {
            ctx->pc = 0x31E5CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E5C8u;
            // 0x31e5cc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e528;
        }
    }
    ctx->pc = 0x31E5D0u;
    // 0x31e5d0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x31e5d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31e5d4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x31e5d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31e5d8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x31e5d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31e5dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31e5dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31e5e0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x31e5e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31e5e4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x31e5e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e5e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31e5e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e5ec: 0x3e00008  jr          $ra
    ctx->pc = 0x31E5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E5ECu;
        // 0x31e5f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E5F4u;
    // 0x31e5f4: 0x0  nop
    ctx->pc = 0x31e5f4u;
    // NOP
    ctx->pc = 0x31e5f8u;
}
