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

// Function: sub_001D48E0
// Address: 0x1d48e0 - 0x1d4a30
void sub_001D48E0_0x1d48e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D48E0_0x1d48e0");
#endif

    switch (ctx->pc) {
        case 0x1d4930u: goto label_1d4930;
        case 0x1d4944u: goto label_1d4944;
        case 0x1d4950u: goto label_1d4950;
        case 0x1d4968u: goto label_1d4968;
        case 0x1d4974u: goto label_1d4974;
        case 0x1d49b4u: goto label_1d49b4;
        case 0x1d49c4u: goto label_1d49c4;
        case 0x1d49e4u: goto label_1d49e4;
        case 0x1d4a04u: goto label_1d4a04;
        default: break;
    }

    ctx->pc = 0x1d48e0u;

    // 0x1d48e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1d48e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1d48e4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1d48e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1d48e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d48e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d48ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d48ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d48f0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1d48f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1d48f4: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x1d48f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x1d48f8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1d48f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1d48fc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d48fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4900: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1d4900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1d4904: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1d4904u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4908: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1d4908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1d490c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d490cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d4910: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1d4910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d4914: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1d4914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d4918: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d4918u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d491c: 0x29883  sra         $s3, $v0, 2
    ctx->pc = 0x1d491cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1d4920: 0x12600028  beqz        $s3, . + 4 + (0x28 << 2)
    ctx->pc = 0x1D4920u;
    {
        const bool branch_taken_0x1d4920 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4920u;
        // 0x1d4924: 0x8e3000a4  lw          $s0, 0xA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4920) {
            ctx->pc = 0x1D49C4u;
            goto label_1d49c4;
        }
    }
    ctx->pc = 0x1D4928u;
    // 0x1d4928: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d4928u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d492c: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x1d492cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1d4930:
    // 0x1d4930: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D4930u;
    {
        const bool branch_taken_0x1d4930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4930u;
        // 0x1d4934: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4930) {
            ctx->pc = 0x1D497Cu;
            goto label_1d497c;
        }
    }
    ctx->pc = 0x1D4938u;
    // 0x1d4938: 0x8e2500a4  lw          $a1, 0xA4($s1)
    ctx->pc = 0x1d4938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x1d493c: 0xc075164  jal         func_1D4590
    ctx->pc = 0x1D493Cu;
    SET_GPR_U32(ctx, 31, 0x1D4944u);
    ctx->pc = 0x1D4940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D493Cu;
    // 0x1d4940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4590u, 0x1D493Cu, 0x1D4944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4944u;
label_1d4944:
    // 0x1d4944: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d4944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4948: 0xc07517e  jal         func_1D45F8
    ctx->pc = 0x1D4948u;
    SET_GPR_U32(ctx, 31, 0x1D4950u);
    ctx->pc = 0x1D494Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4948u;
    // 0x1d494c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45F8u, 0x1D4948u, 0x1D4950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4950u;
label_1d4950:
    // 0x1d4950: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1d4950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d4954: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D4954u;
    {
        const bool branch_taken_0x1d4954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4954) {
            ctx->pc = 0x1D4958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4954u;
            // 0x1d4958: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D49A8u;
            goto label_1d49a8;
        }
    }
    ctx->pc = 0x1D495Cu;
    // 0x1d495c: 0x8e2500a4  lw          $a1, 0xA4($s1)
    ctx->pc = 0x1d495cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x1d4960: 0xc075164  jal         func_1D4590
    ctx->pc = 0x1D4960u;
    SET_GPR_U32(ctx, 31, 0x1D4968u);
    ctx->pc = 0x1D4964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4960u;
    // 0x1d4964: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4590u, 0x1D4960u, 0x1D4968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4968u;
label_1d4968:
    // 0x1d4968: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d4968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d496c: 0xc075172  jal         func_1D45C8
    ctx->pc = 0x1D496Cu;
    SET_GPR_U32(ctx, 31, 0x1D4974u);
    ctx->pc = 0x1D4970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D496Cu;
    // 0x1d4970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45C8u, 0x1D496Cu, 0x1D4974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4974u;
label_1d4974:
    // 0x1d4974: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D4974u;
    {
        const bool branch_taken_0x1d4974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4974u;
        // 0x1d4978: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4974) {
            ctx->pc = 0x1D49A4u;
            goto label_1d49a4;
        }
    }
    ctx->pc = 0x1D497Cu;
label_1d497c:
    // 0x1d497c: 0x603000a  bgezl       $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D497Cu;
    {
        const bool branch_taken_0x1d497c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d497c) {
            ctx->pc = 0x1D4980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D497Cu;
            // 0x1d4980: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D49A8u;
            goto label_1d49a8;
        }
    }
    ctx->pc = 0x1D4984u;
    // 0x1d4984: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x1d4984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x1d4988: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D4988u;
    {
        const bool branch_taken_0x1d4988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4988) {
            ctx->pc = 0x1D498Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4988u;
            // 0x1d498c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D49A4u;
            goto label_1d49a4;
        }
    }
    ctx->pc = 0x1D4990u;
    // 0x1d4990: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1d4990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1d4994: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1d4994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d4998: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d4998u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d499c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1d499cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1d49a0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1d49a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1d49a4:
    // 0x1d49a4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d49a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1d49a8:
    // 0x1d49a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d49a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d49ac: 0xc07512e  jal         func_1D44B8
    ctx->pc = 0x1D49ACu;
    SET_GPR_U32(ctx, 31, 0x1D49B4u);
    ctx->pc = 0x1D49B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D49ACu;
    // 0x1d49b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D44B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D44B8u, 0x1D49ACu, 0x1D49B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D49B4u;
label_1d49b4:
    // 0x1d49b4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D49B4u;
    {
        const bool branch_taken_0x1d49b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D49B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D49B4u;
        // 0x1d49b8: 0x293102b  sltu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d49b4) {
            ctx->pc = 0x1D49ECu;
            goto label_1d49ec;
        }
    }
    ctx->pc = 0x1D49BCu;
    // 0x1d49bc: 0x5440ffdc  bnel        $v0, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1D49BCu;
    {
        const bool branch_taken_0x1d49bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d49bc) {
            ctx->pc = 0x1D49C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D49BCu;
            // 0x1d49c0: 0x8e22009c  lw          $v0, 0x9C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4930;
        }
    }
    ctx->pc = 0x1D49C4u;
label_1d49c4:
    // 0x1d49c4: 0x12a0000c  beqz        $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x1D49C4u;
    {
        const bool branch_taken_0x1d49c4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D49C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D49C4u;
        // 0x1d49c8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d49c4) {
            ctx->pc = 0x1D49F8u;
            goto label_1d49f8;
        }
    }
    ctx->pc = 0x1D49CCu;
    // 0x1d49cc: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x1d49ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x1d49d0: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D49D0u;
    {
        const bool branch_taken_0x1d49d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D49D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D49D0u;
        // 0x1d49d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d49d0) {
            ctx->pc = 0x1D49F4u;
            goto label_1d49f4;
        }
    }
    ctx->pc = 0x1D49D8u;
    // 0x1d49d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d49d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d49dc: 0xc0752e2  jal         func_1D4B88
    ctx->pc = 0x1D49DCu;
    SET_GPR_U32(ctx, 31, 0x1D49E4u);
    ctx->pc = 0x1D49E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D49DCu;
    // 0x1d49e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4B88u, 0x1D49DCu, 0x1D49E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D49E4u;
label_1d49e4:
    // 0x1d49e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D49E4u;
    {
        const bool branch_taken_0x1d49e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D49E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D49E4u;
        // 0x1d49e8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d49e4) {
            ctx->pc = 0x1D4A10u;
            goto label_1d4a10;
        }
    }
    ctx->pc = 0x1D49ECu;
label_1d49ec:
    // 0x1d49ec: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D49ECu;
    {
        const bool branch_taken_0x1d49ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D49F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D49ECu;
        // 0x1d49f0: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d49ec) {
            ctx->pc = 0x1D49C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d49c4;
        }
    }
    ctx->pc = 0x1D49F4u;
label_1d49f4:
    // 0x1d49f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d49f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d49f8:
    // 0x1d49f8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1d49f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1d49fc: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x1D49FCu;
    SET_GPR_U32(ctx, 31, 0x1D4A04u);
    ctx->pc = 0x1D4A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D49FCu;
    // 0x1d4a00: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1D49FCu, 0x1D4A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A04u;
label_1d4a04:
    // 0x1d4a04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d4a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4a08: 0xae2300c4  sw          $v1, 0xC4($s1)
    ctx->pc = 0x1d4a08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
    // 0x1d4a0c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1d4a0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d4a10:
    // 0x1d4a10: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1d4a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d4a14: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1d4a14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d4a18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d4a18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d4a1c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1d4a1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d4a20: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1d4a20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4a24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d4a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4a28: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A28u;
        // 0x1d4a2c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4A30u;
}
