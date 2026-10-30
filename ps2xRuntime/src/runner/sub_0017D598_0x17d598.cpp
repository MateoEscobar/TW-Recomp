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

// Function: sub_0017D598
// Address: 0x17d598 - 0x17d640
void sub_0017D598_0x17d598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D598_0x17d598");
#endif

    switch (ctx->pc) {
        case 0x17d5c0u: goto label_17d5c0;
        case 0x17d5d0u: goto label_17d5d0;
        default: break;
    }

    ctx->pc = 0x17d598u;

    // 0x17d598: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17d598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17d59c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17d59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17d5a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17d5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17d5a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17d5a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17d5a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5ac: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x17D5ACu;
    {
        const bool branch_taken_0x17d5ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D5ACu;
        // 0x17d5b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d5ac) {
            ctx->pc = 0x17D624u;
            goto label_17d624;
        }
    }
    ctx->pc = 0x17D5B4u;
    // 0x17d5b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17d5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5b8: 0xc05f1a4  jal         func_17C690
    ctx->pc = 0x17D5B8u;
    SET_GPR_U32(ctx, 31, 0x17D5C0u);
    ctx->pc = 0x17D5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D5B8u;
    // 0x17d5bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C690u, 0x17D5B8u, 0x17D5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D5C0u;
label_17d5c0:
    // 0x17d5c0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x17d5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17d5c4: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x17D5C4u;
    {
        const bool branch_taken_0x17d5c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D5C4u;
        // 0x17d5c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d5c4) {
            ctx->pc = 0x17D624u;
            goto label_17d624;
        }
    }
    ctx->pc = 0x17D5CCu;
    // 0x17d5cc: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x17d5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17d5d0:
    // 0x17d5d0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x17d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17d5d4: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x17d5d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x17d5d8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x17d5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17d5dc: 0x5471000d  bnel        $v1, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x17D5DCu;
    {
        const bool branch_taken_0x17d5dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x17d5dc) {
            ctx->pc = 0x17D5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D5DCu;
            // 0x17d5e0: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D614u;
            goto label_17d614;
        }
    }
    ctx->pc = 0x17D5E4u;
    // 0x17d5e4: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x17d5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x17d5e8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x17d5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x17d5ec: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x17d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17d5f0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x17d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x17d5f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17d5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d5f8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x17d5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x17d5fc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x17d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17d600: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x17d600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17d604: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17d604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17d608: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17d608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17d60c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17D60Cu;
    {
        const bool branch_taken_0x17d60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D60Cu;
        // 0x17d610: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d60c) {
            ctx->pc = 0x17D624u;
            goto label_17d624;
        }
    }
    ctx->pc = 0x17D614u;
label_17d614:
    // 0x17d614: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17d614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17d618: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x17d618u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x17d61c: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x17D61Cu;
    {
        const bool branch_taken_0x17d61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d61c) {
            ctx->pc = 0x17D620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D61Cu;
            // 0x17d620: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D5D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d5d0;
        }
    }
    ctx->pc = 0x17D624u;
label_17d624:
    // 0x17d624: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17d624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d628: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17d628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d62c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17d62cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d630: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d634: 0x3e00008  jr          $ra
    ctx->pc = 0x17D634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D634u;
        // 0x17d638: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D63Cu;
    // 0x17d63c: 0x0  nop
    ctx->pc = 0x17d63cu;
    // NOP
    ctx->pc = 0x17d640u;
}
