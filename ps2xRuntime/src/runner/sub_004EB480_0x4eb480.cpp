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

// Function: sub_004EB480
// Address: 0x4eb480 - 0x4eb540
void sub_004EB480_0x4eb480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EB480_0x4eb480");
#endif

    switch (ctx->pc) {
        case 0x4eb4bcu: goto label_4eb4bc;
        case 0x4eb4d0u: goto label_4eb4d0;
        case 0x4eb4fcu: goto label_4eb4fc;
        case 0x4eb51cu: goto label_4eb51c;
        default: break;
    }

    ctx->pc = 0x4eb480u;

    // 0x4eb480: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4eb480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4eb484: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4eb484u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb488: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4eb488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4eb48c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4eb48cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb490: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4eb490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4eb494: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4eb494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb498: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4eb498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x4eb49c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4eb49cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb4a0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4eb4a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb4a4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4eb4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4eb4a8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4eb4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x4eb4ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4eb4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4eb4b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4eb4b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb4b4: 0xc13acd2  jal         func_4EB348
    ctx->pc = 0x4EB4B4u;
    SET_GPR_U32(ctx, 31, 0x4EB4BCu);
    ctx->pc = 0x4EB4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB4B4u;
    // 0x4eb4b8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EB348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EB348u, 0x4EB4B4u, 0x4EB4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB4BCu;
label_4eb4bc:
    // 0x4eb4bc: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x4eb4bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x4eb4c0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4EB4C0u;
    {
        const bool branch_taken_0x4eb4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB4C0u;
        // 0x4eb4c4: 0x251a023  subu        $s4, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb4c0) {
            ctx->pc = 0x4EB50Cu;
            goto label_4eb50c;
        }
    }
    ctx->pc = 0x4EB4C8u;
    // 0x4eb4c8: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x4eb4c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eb4cc: 0x0  nop
    ctx->pc = 0x4eb4ccu;
    // NOP
label_4eb4d0:
    // 0x4eb4d0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4eb4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4eb4d4: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x4eb4d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x4eb4d8: 0x90830018  lbu         $v1, 0x18($a0)
    ctx->pc = 0x4eb4d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4eb4dc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4eb4dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4eb4e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4EB4E0u;
    {
        const bool branch_taken_0x4eb4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB4E0u;
        // 0x4eb4e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb4e0) {
            ctx->pc = 0x4EB4FCu;
            goto label_4eb4fc;
        }
    }
    ctx->pc = 0x4EB4E8u;
    // 0x4eb4e8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4eb4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4eb4ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4eb4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb4f0: 0x143083  sra         $a2, $s4, 2
    ctx->pc = 0x4eb4f0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 20), 2));
    // 0x4eb4f4: 0xc13aca4  jal         func_4EB290
    ctx->pc = 0x4EB4F4u;
    SET_GPR_U32(ctx, 31, 0x4EB4FCu);
    ctx->pc = 0x4EB4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB4F4u;
    // 0x4eb4f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EB290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EB290u, 0x4EB4F4u, 0x4EB4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB4FCu;
label_4eb4fc:
    // 0x4eb4fc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4eb4fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x4eb500: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x4eb500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x4eb504: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x4EB504u;
    {
        const bool branch_taken_0x4eb504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4eb504) {
            ctx->pc = 0x4EB508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EB504u;
            // 0x4eb508: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EB4D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4eb4d0;
        }
    }
    ctx->pc = 0x4EB50Cu;
label_4eb50c:
    // 0x4eb50c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4eb50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb510: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4eb510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb514: 0xc13acf6  jal         func_4EB3D8
    ctx->pc = 0x4EB514u;
    SET_GPR_U32(ctx, 31, 0x4EB51Cu);
    ctx->pc = 0x4EB518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB514u;
    // 0x4eb518: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EB3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EB3D8u, 0x4EB514u, 0x4EB51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB51Cu;
label_4eb51c:
    // 0x4eb51c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4eb51cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4eb520: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4eb520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4eb524: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4eb524u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4eb528: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4eb528u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4eb52c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4eb52cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4eb530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eb530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eb534: 0x3e00008  jr          $ra
    ctx->pc = 0x4EB534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EB538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB534u;
        // 0x4eb538: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EB534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EB53Cu;
    // 0x4eb53c: 0x0  nop
    ctx->pc = 0x4eb53cu;
    // NOP
    ctx->pc = 0x4eb540u;
}
