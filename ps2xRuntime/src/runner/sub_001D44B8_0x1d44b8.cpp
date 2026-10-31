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

// Function: sub_001D44B8
// Address: 0x1d44b8 - 0x1d4530
void sub_001D44B8_0x1d44b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D44B8_0x1d44b8");
#endif

    switch (ctx->pc) {
        case 0x1d44b8u: goto label_1d44b8;
        case 0x1d44bcu: goto label_1d44bc;
        case 0x1d44c0u: goto label_1d44c0;
        case 0x1d44c4u: goto label_1d44c4;
        case 0x1d44c8u: goto label_1d44c8;
        case 0x1d44ccu: goto label_1d44cc;
        case 0x1d44d0u: goto label_1d44d0;
        case 0x1d44d4u: goto label_1d44d4;
        case 0x1d44d8u: goto label_1d44d8;
        case 0x1d44dcu: goto label_1d44dc;
        case 0x1d44e0u: goto label_1d44e0;
        case 0x1d44e4u: goto label_1d44e4;
        case 0x1d44e8u: goto label_1d44e8;
        case 0x1d44ecu: goto label_1d44ec;
        case 0x1d44f0u: goto label_1d44f0;
        case 0x1d44f4u: goto label_1d44f4;
        case 0x1d44f8u: goto label_1d44f8;
        case 0x1d44fcu: goto label_1d44fc;
        case 0x1d4500u: goto label_1d4500;
        case 0x1d4504u: goto label_1d4504;
        case 0x1d4508u: goto label_1d4508;
        case 0x1d450cu: goto label_1d450c;
        case 0x1d4510u: goto label_1d4510;
        case 0x1d4514u: goto label_1d4514;
        case 0x1d4518u: goto label_1d4518;
        case 0x1d451cu: goto label_1d451c;
        case 0x1d4520u: goto label_1d4520;
        case 0x1d4524u: goto label_1d4524;
        case 0x1d4528u: goto label_1d4528;
        case 0x1d452cu: goto label_1d452c;
        default: break;
    }

    ctx->pc = 0x1d44b8u;

label_1d44b8:
    // 0x1d44b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d44b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d44bc:
    // 0x1d44bc: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x1d44bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_1d44c0:
    // 0x1d44c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d44c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d44c4:
    // 0x1d44c4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1d44c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1d44c8:
    // 0x1d44c8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1d44c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1d44cc:
    // 0x1d44cc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d44ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d44d0:
    // 0x1d44d0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1d44d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1d44d4:
    // 0x1d44d4: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1d44d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d44d8:
    // 0x1d44d8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1d44dc:
    if (ctx->pc == 0x1D44DCu) {
        ctx->pc = 0x1D44DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D44D8u;
        // 0x1d44dc: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D44E0u;
        goto label_1d44e0;
    }
    ctx->pc = 0x1D44D8u;
    {
        const bool branch_taken_0x1d44d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D44DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D44D8u;
        // 0x1d44dc: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d44d8) {
            ctx->pc = 0x1D451Cu;
            goto label_1d451c;
        }
    }
    ctx->pc = 0x1D44E0u;
label_1d44e0:
    // 0x1d44e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d44e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d44e4:
    // 0x1d44e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d44e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d44e8:
    // 0x1d44e8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_1d44ec:
    if (ctx->pc == 0x1D44ECu) {
        ctx->pc = 0x1D44ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D44E8u;
        // 0x1d44ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D44F0u;
        goto label_1d44f0;
    }
    ctx->pc = 0x1D44E8u;
    {
        const bool branch_taken_0x1d44e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d44e8) {
            ctx->pc = 0x1D44ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D44E8u;
            // 0x1d44ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4520u;
            goto label_1d4520;
        }
    }
    ctx->pc = 0x1D44F0u;
label_1d44f0:
    // 0x1d44f0: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x1d44f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_1d44f4:
    // 0x1d44f4: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
label_1d44f8:
    if (ctx->pc == 0x1D44F8u) {
        ctx->pc = 0x1D44F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D44F4u;
        // 0x1d44f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D44FCu;
        goto label_1d44fc;
    }
    ctx->pc = 0x1D44F4u;
    {
        const bool branch_taken_0x1d44f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d44f4) {
            ctx->pc = 0x1D44F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D44F4u;
            // 0x1d44f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4520u;
            goto label_1d4520;
        }
    }
    ctx->pc = 0x1D44FCu;
label_1d44fc:
    // 0x1d44fc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1d44fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d4500:
    // 0x1d4500: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1d4500u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1d4504:
    // 0x1d4504: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1d4504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1d4508:
    // 0x1d4508: 0x40f809  jalr        $v0
label_1d450c:
    if (ctx->pc == 0x1D450Cu) {
        ctx->pc = 0x1D450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4508u;
        // 0x1d450c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4510u;
        goto label_1d4510;
    }
    ctx->pc = 0x1D4508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D4510u);
        ctx->pc = 0x1D450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4508u;
        // 0x1d450c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4508u, 0x1D4510u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4510u;
label_1d4510:
    // 0x1d4510: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d4510u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4514:
    // 0x1d4514: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1d4518:
    if (ctx->pc == 0x1D4518u) {
        ctx->pc = 0x1D4518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4514u;
        // 0x1d4518: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D451Cu;
        goto label_1d451c;
    }
    ctx->pc = 0x1D4514u;
    {
        const bool branch_taken_0x1d4514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4514u;
        // 0x1d4518: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4514) {
            ctx->pc = 0x1D4520u;
            goto label_1d4520;
        }
    }
    ctx->pc = 0x1D451Cu;
label_1d451c:
    // 0x1d451c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d451cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4520:
    // 0x1d4520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d4520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d4524:
    // 0x1d4524: 0x3e00008  jr          $ra
label_1d4528:
    if (ctx->pc == 0x1D4528u) {
        ctx->pc = 0x1D4528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4524u;
        // 0x1d4528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D452Cu;
        goto label_1d452c;
    }
    ctx->pc = 0x1D4524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4524u;
        // 0x1d4528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D452Cu;
label_1d452c:
    // 0x1d452c: 0x0  nop
    ctx->pc = 0x1d452cu;
    // NOP
    ctx->pc = 0x1d4530u;
}
