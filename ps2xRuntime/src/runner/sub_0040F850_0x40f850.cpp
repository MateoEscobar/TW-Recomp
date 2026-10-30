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

// Function: sub_0040F850
// Address: 0x40f850 - 0x40f8a0
void sub_0040F850_0x40f850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040F850_0x40f850");
#endif

    switch (ctx->pc) {
        case 0x40f850u: goto label_40f850;
        case 0x40f854u: goto label_40f854;
        case 0x40f858u: goto label_40f858;
        case 0x40f85cu: goto label_40f85c;
        case 0x40f860u: goto label_40f860;
        case 0x40f864u: goto label_40f864;
        case 0x40f868u: goto label_40f868;
        case 0x40f86cu: goto label_40f86c;
        case 0x40f870u: goto label_40f870;
        case 0x40f874u: goto label_40f874;
        case 0x40f878u: goto label_40f878;
        case 0x40f87cu: goto label_40f87c;
        case 0x40f880u: goto label_40f880;
        case 0x40f884u: goto label_40f884;
        case 0x40f888u: goto label_40f888;
        case 0x40f88cu: goto label_40f88c;
        case 0x40f890u: goto label_40f890;
        case 0x40f894u: goto label_40f894;
        case 0x40f898u: goto label_40f898;
        case 0x40f89cu: goto label_40f89c;
        default: break;
    }

    ctx->pc = 0x40f850u;

label_40f850:
    // 0x40f850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40f850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_40f854:
    // 0x40f854: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40f854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40f858:
    // 0x40f858: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x40f858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_40f85c:
    // 0x40f85c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40f85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40f860:
    // 0x40f860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40f860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_40f864:
    // 0x40f864: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x40f864u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_40f868:
    // 0x40f868: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_40f86c:
    if (ctx->pc == 0x40F86Cu) {
        ctx->pc = 0x40F86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F868u;
        // 0x40f86c: 0x8c50b9c8  lw          $s0, -0x4638($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F870u;
        goto label_40f870;
    }
    ctx->pc = 0x40F868u;
    {
        const bool branch_taken_0x40f868 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F868u;
        // 0x40f86c: 0x8c50b9c8  lw          $s0, -0x4638($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f868) {
            ctx->pc = 0x40F888u;
            goto label_40f888;
        }
    }
    ctx->pc = 0x40F870u;
label_40f870:
    // 0x40f870: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x40f870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_40f874:
    // 0x40f874: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x40f874u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_40f878:
    // 0x40f878: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x40f878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_40f87c:
    // 0x40f87c: 0x40f809  jalr        $v0
label_40f880:
    if (ctx->pc == 0x40F880u) {
        ctx->pc = 0x40F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F87Cu;
        // 0x40f880: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F884u;
        goto label_40f884;
    }
    ctx->pc = 0x40F87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40F884u);
        ctx->pc = 0x40F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F87Cu;
        // 0x40f880: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F87Cu, 0x40F884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F884u;
label_40f884:
    // 0x40f884: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x40f884u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_40f888:
    // 0x40f888: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x40f888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40f88c:
    // 0x40f88c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40f88cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40f890:
    // 0x40f890: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x40f890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40f894:
    // 0x40f894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40f894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_40f898:
    // 0x40f898: 0x3e00008  jr          $ra
label_40f89c:
    if (ctx->pc == 0x40F89Cu) {
        ctx->pc = 0x40F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F898u;
        // 0x40f89c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F8A0u;
        goto label_fallthrough_0x40f898;
    }
    ctx->pc = 0x40F898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F898u;
        // 0x40f89c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x40f898:
    ctx->pc = 0x40F8A0u;
}
