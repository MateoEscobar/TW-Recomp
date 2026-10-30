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

// Function: sub_004E4560
// Address: 0x4e4560 - 0x4e45a8
void sub_004E4560_0x4e4560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4560_0x4e4560");
#endif

    switch (ctx->pc) {
        case 0x4e4560u: goto label_4e4560;
        case 0x4e4564u: goto label_4e4564;
        case 0x4e4568u: goto label_4e4568;
        case 0x4e456cu: goto label_4e456c;
        case 0x4e4570u: goto label_4e4570;
        case 0x4e4574u: goto label_4e4574;
        case 0x4e4578u: goto label_4e4578;
        case 0x4e457cu: goto label_4e457c;
        case 0x4e4580u: goto label_4e4580;
        case 0x4e4584u: goto label_4e4584;
        case 0x4e4588u: goto label_4e4588;
        case 0x4e458cu: goto label_4e458c;
        case 0x4e4590u: goto label_4e4590;
        case 0x4e4594u: goto label_4e4594;
        case 0x4e4598u: goto label_4e4598;
        case 0x4e459cu: goto label_4e459c;
        case 0x4e45a0u: goto label_4e45a0;
        case 0x4e45a4u: goto label_4e45a4;
        default: break;
    }

    ctx->pc = 0x4e4560u;

label_4e4560:
    // 0x4e4560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e4560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4e4564:
    // 0x4e4564: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4e4564u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e4568:
    // 0x4e4568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e4568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e456c:
    // 0x4e456c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_4e4570:
    if (ctx->pc == 0x4E4570u) {
        ctx->pc = 0x4E4570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E456Cu;
        // 0x4e4570: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4574u;
        goto label_4e4574;
    }
    ctx->pc = 0x4E456Cu;
    {
        const bool branch_taken_0x4e456c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E456Cu;
        // 0x4e4570: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e456c) {
            ctx->pc = 0x4E4598u;
            goto label_4e4598;
        }
    }
    ctx->pc = 0x4E4574u;
label_4e4574:
    // 0x4e4574: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e4574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e4578:
    // 0x4e4578: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4e4578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e457c:
    // 0x4e457c: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e457cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e4580:
    // 0x4e4580: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4e4580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4e4584:
    // 0x4e4584: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e4584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e4588:
    // 0x4e4588: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e4588u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e458c:
    // 0x4e458c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e458cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e4590:
    // 0x4e4590: 0x60f809  jalr        $v1
label_4e4594:
    if (ctx->pc == 0x4E4594u) {
        ctx->pc = 0x4E4594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4590u;
        // 0x4e4594: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4598u;
        goto label_4e4598;
    }
    ctx->pc = 0x4E4590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E4598u);
        ctx->pc = 0x4E4594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4590u;
        // 0x4e4594: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4590u, 0x4E4598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E4598u;
label_4e4598:
    // 0x4e4598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e4598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e459c:
    // 0x4e459c: 0x3e00008  jr          $ra
label_4e45a0:
    if (ctx->pc == 0x4E45A0u) {
        ctx->pc = 0x4E45A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E459Cu;
        // 0x4e45a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E45A4u;
        goto label_4e45a4;
    }
    ctx->pc = 0x4E459Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E45A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E459Cu;
        // 0x4e45a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E459Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E45A4u;
label_4e45a4:
    // 0x4e45a4: 0x0  nop
    ctx->pc = 0x4e45a4u;
    // NOP
    ctx->pc = 0x4e45a8u;
}
