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

// Function: sub_0015E748
// Address: 0x15e748 - 0x15e790
void sub_0015E748_0x15e748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E748_0x15e748");
#endif

    switch (ctx->pc) {
        case 0x15e748u: goto label_15e748;
        case 0x15e74cu: goto label_15e74c;
        case 0x15e750u: goto label_15e750;
        case 0x15e754u: goto label_15e754;
        case 0x15e758u: goto label_15e758;
        case 0x15e75cu: goto label_15e75c;
        case 0x15e760u: goto label_15e760;
        case 0x15e764u: goto label_15e764;
        case 0x15e768u: goto label_15e768;
        case 0x15e76cu: goto label_15e76c;
        case 0x15e770u: goto label_15e770;
        case 0x15e774u: goto label_15e774;
        case 0x15e778u: goto label_15e778;
        case 0x15e77cu: goto label_15e77c;
        case 0x15e780u: goto label_15e780;
        case 0x15e784u: goto label_15e784;
        case 0x15e788u: goto label_15e788;
        case 0x15e78cu: goto label_15e78c;
        default: break;
    }

    ctx->pc = 0x15e748u;

label_15e748:
    // 0x15e748: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15e748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15e74c:
    // 0x15e74c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15e74cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_15e750:
    // 0x15e750: 0x8c43c784  lw          $v1, -0x387C($v0)
    ctx->pc = 0x15e750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952836)));
label_15e754:
    // 0x15e754: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_15e758:
    if (ctx->pc == 0x15E758u) {
        ctx->pc = 0x15E758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E754u;
        // 0x15e758: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E75Cu;
        goto label_15e75c;
    }
    ctx->pc = 0x15E754u;
    {
        const bool branch_taken_0x15e754 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15E758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E754u;
        // 0x15e758: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e754) {
            ctx->pc = 0x15E764u;
            goto label_15e764;
        }
    }
    ctx->pc = 0x15E75Cu;
label_15e75c:
    // 0x15e75c: 0x10000008  b           . + 4 + (0x8 << 2)
label_15e760:
    if (ctx->pc == 0x15E760u) {
        ctx->pc = 0x15E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E75Cu;
        // 0x15e760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E764u;
        goto label_15e764;
    }
    ctx->pc = 0x15E75Cu;
    {
        const bool branch_taken_0x15e75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E75Cu;
        // 0x15e760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e75c) {
            ctx->pc = 0x15E780u;
            goto label_15e780;
        }
    }
    ctx->pc = 0x15E764u;
label_15e764:
    // 0x15e764: 0xc0579c6  jal         func_15E718
label_15e768:
    if (ctx->pc == 0x15E768u) {
        ctx->pc = 0x15E76Cu;
        goto label_15e76c;
    }
    ctx->pc = 0x15E764u;
    SET_GPR_U32(ctx, 31, 0x15E76Cu);
    ctx->pc = 0x15E718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E718u, 0x15E764u, 0x15E76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E76Cu;
label_15e76c:
    // 0x15e76c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x15e76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_15e770:
    // 0x15e770: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x15e770u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_15e774:
    // 0x15e774: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x15e774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_15e778:
    // 0x15e778: 0xa0f809  jalr        $a1
label_15e77c:
    if (ctx->pc == 0x15E77Cu) {
        ctx->pc = 0x15E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E778u;
        // 0x15e77c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E780u;
        goto label_15e780;
    }
    ctx->pc = 0x15E778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x15E780u);
        ctx->pc = 0x15E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E778u;
        // 0x15e77c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E778u, 0x15E780u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E780u;
label_15e780:
    // 0x15e780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15e780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15e784:
    // 0x15e784: 0x3e00008  jr          $ra
label_15e788:
    if (ctx->pc == 0x15E788u) {
        ctx->pc = 0x15E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E784u;
        // 0x15e788: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E78Cu;
        goto label_15e78c;
    }
    ctx->pc = 0x15E784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E784u;
        // 0x15e788: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E78Cu;
label_15e78c:
    // 0x15e78c: 0x0  nop
    ctx->pc = 0x15e78cu;
    // NOP
    ctx->pc = 0x15e790u;
}
