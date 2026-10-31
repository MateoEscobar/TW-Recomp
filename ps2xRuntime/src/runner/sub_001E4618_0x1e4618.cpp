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

// Function: sub_001E4618
// Address: 0x1e4618 - 0x1e46a8
void sub_001E4618_0x1e4618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4618_0x1e4618");
#endif

    switch (ctx->pc) {
        case 0x1e4658u: goto label_1e4658;
        case 0x1e4670u: goto label_1e4670;
        case 0x1e4688u: goto label_1e4688;
        case 0x1e46a0u: goto label_1e46a0;
        default: break;
    }

    ctx->pc = 0x1e4618u;

    // 0x1e4618: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e4618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e461c: 0x2ca20007  sltiu       $v0, $a1, 0x7
    ctx->pc = 0x1e461cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1e4620: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e4620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e4624: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1E4624u;
    {
        const bool branch_taken_0x1e4624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4624u;
        // 0x1e4628: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4624) {
            ctx->pc = 0x1E46A8u;
            return;
        }
    }
    ctx->pc = 0x1E462Cu;
    // 0x1e462c: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1e462cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x1e4630: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1e4630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e4634: 0x244267b0  addiu       $v0, $v0, 0x67B0
    ctx->pc = 0x1e4634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26544));
    // 0x1e4638: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e4638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e463c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e463cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e4640: 0x800008  jr          $a0
    ctx->pc = 0x1E4640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E4648u: goto label_1e4648;
            case 0x1E4678u: goto label_1e4678;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4640u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1E4648u;
label_1e4648:
    // 0x1e4648: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1e4648u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1e464c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1e464cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1e4650: 0xc04444c  jal         func_111130
    ctx->pc = 0x1E4650u;
    SET_GPR_U32(ctx, 31, 0x1E4658u);
    ctx->pc = 0x1E4654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4650u;
    // 0x1e4654: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1E4650u, 0x1E4658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4658u;
label_1e4658:
    // 0x1e4658: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1e4658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    // 0x1e465c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e465cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4660: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e4660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4664: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e4664u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4668: 0xc043f36  jal         func_10FCD8
    ctx->pc = 0x1E4668u;
    SET_GPR_U32(ctx, 31, 0x1E4670u);
    ctx->pc = 0x1E466Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4668u;
    // 0x1e466c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1E4668u, 0x1E4670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4670u;
label_1e4670:
    // 0x1e4670: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E4670u;
    {
        const bool branch_taken_0x1e4670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4670u;
        // 0x1e4674: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4670) {
            ctx->pc = 0x1E46ACu;
            return;
        }
    }
    ctx->pc = 0x1E4678u;
label_1e4678:
    // 0x1e4678: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1e4678u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1e467c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1e467cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1e4680: 0xc04444c  jal         func_111130
    ctx->pc = 0x1E4680u;
    SET_GPR_U32(ctx, 31, 0x1E4688u);
    ctx->pc = 0x1E4684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4680u;
    // 0x1e4684: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1E4680u, 0x1E4688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4688u;
label_1e4688:
    // 0x1e4688: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1e4688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    // 0x1e468c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e468cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4690: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e4690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4694: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e4694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4698: 0xc043f36  jal         func_10FCD8
    ctx->pc = 0x1E4698u;
    SET_GPR_U32(ctx, 31, 0x1E46A0u);
    ctx->pc = 0x1E469Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4698u;
    // 0x1e469c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1E4698u, 0x1E46A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E46A0u;
label_1e46a0:
    // 0x1e46a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E46A0u;
    {
        const bool branch_taken_0x1e46a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E46A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E46A0u;
        // 0x1e46a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e46a0) {
            ctx->pc = 0x1E46ACu;
            return;
        }
    }
    ctx->pc = 0x1E46A8u;
}
