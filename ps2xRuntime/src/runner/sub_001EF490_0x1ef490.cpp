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

// Function: sub_001EF490
// Address: 0x1ef490 - 0x1ef550
void sub_001EF490_0x1ef490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF490_0x1ef490");
#endif

    switch (ctx->pc) {
        case 0x1ef4fcu: goto label_1ef4fc;
        case 0x1ef524u: goto label_1ef524;
        default: break;
    }

    ctx->pc = 0x1ef490u;

    // 0x1ef490: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ef490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ef494: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ef494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1ef498: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ef498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ef49c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ef49cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef4a0: 0x59080  sll         $s2, $a1, 2
    ctx->pc = 0x1ef4a0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ef4a4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ef4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1ef4a8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1ef4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1ef4ac: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x1ef4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1ef4b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ef4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ef4b4: 0x26020158  addiu       $v0, $s0, 0x158
    ctx->pc = 0x1ef4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
    // 0x1ef4b8: 0xac6001e8  sw          $zero, 0x1E8($v1)
    ctx->pc = 0x1ef4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 488), GPR_U32(ctx, 0));
    // 0x1ef4bc: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x1ef4bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ef4c0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ef4c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef4c4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1ef4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ef4c8: 0x5051001a  beql        $v0, $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1EF4C8u;
    {
        const bool branch_taken_0x1ef4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1ef4c8) {
            ctx->pc = 0x1EF4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF4C8u;
            // 0x1ef4cc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF534u;
            goto label_1ef534;
        }
    }
    ctx->pc = 0x1EF4D0u;
    // 0x1ef4d0: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1ef4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1ef4d4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1ef4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ef4d8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1ef4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ef4dc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1ef4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ef4e0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1ef4e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1ef4e4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EF4E4u;
    {
        const bool branch_taken_0x1ef4e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF4E4u;
        // 0x1ef4e8: 0x223102b  sltu        $v0, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef4e4) {
            ctx->pc = 0x1EF530u;
            goto label_1ef530;
        }
    }
    ctx->pc = 0x1EF4ECu;
    // 0x1ef4ec: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EF4ECu;
    {
        const bool branch_taken_0x1ef4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef4ec) {
            ctx->pc = 0x1EF4F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF4ECu;
            // 0x1ef4f0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF534u;
            goto label_1ef534;
        }
    }
    ctx->pc = 0x1EF4F4u;
    // 0x1ef4f4: 0xc07bcfe  jal         func_1EF3F8
    ctx->pc = 0x1EF4F4u;
    SET_GPR_U32(ctx, 31, 0x1EF4FCu);
    ctx->pc = 0x1EF4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF4F4u;
    // 0x1ef4f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF3F8u, 0x1EF4F4u, 0x1EF4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF4FCu;
label_1ef4fc:
    // 0x1ef4fc: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x1ef4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x1ef500: 0x113080  sll         $a2, $s1, 2
    ctx->pc = 0x1ef500u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1ef504: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x1ef504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1ef508: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x1ef508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1ef50c: 0x8c6401b8  lw          $a0, 0x1B8($v1)
    ctx->pc = 0x1ef50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 440)));
    // 0x1ef510: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1ef510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ef514: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1ef514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1ef518: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ef518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef51c: 0xc073478  jal         func_1CD1E0
    ctx->pc = 0x1EF51Cu;
    SET_GPR_U32(ctx, 31, 0x1EF524u);
    ctx->pc = 0x1EF520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF51Cu;
    // 0x1ef520: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1EF51Cu, 0x1EF524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF524u;
label_1ef524:
    // 0x1ef524: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x1ef524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1ef528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef52c: 0xac620170  sw          $v0, 0x170($v1)
    ctx->pc = 0x1ef52cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 368), GPR_U32(ctx, 2));
label_1ef530:
    // 0x1ef530: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1ef530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ef534:
    // 0x1ef534: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ef534u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef538: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ef538u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef53c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1ef53cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ef540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef544: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF544u;
        // 0x1ef548: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF54Cu;
    // 0x1ef54c: 0x0  nop
    ctx->pc = 0x1ef54cu;
    // NOP
    ctx->pc = 0x1ef550u;
}
