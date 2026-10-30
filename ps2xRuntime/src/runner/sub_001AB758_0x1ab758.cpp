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

// Function: sub_001AB758
// Address: 0x1ab758 - 0x1ab798
void sub_001AB758_0x1ab758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB758_0x1ab758");
#endif

    switch (ctx->pc) {
        case 0x1ab758u: goto label_1ab758;
        case 0x1ab75cu: goto label_1ab75c;
        case 0x1ab760u: goto label_1ab760;
        case 0x1ab764u: goto label_1ab764;
        case 0x1ab768u: goto label_1ab768;
        case 0x1ab76cu: goto label_1ab76c;
        case 0x1ab770u: goto label_1ab770;
        case 0x1ab774u: goto label_1ab774;
        case 0x1ab778u: goto label_1ab778;
        case 0x1ab77cu: goto label_1ab77c;
        case 0x1ab780u: goto label_1ab780;
        case 0x1ab784u: goto label_1ab784;
        case 0x1ab788u: goto label_1ab788;
        case 0x1ab78cu: goto label_1ab78c;
        case 0x1ab790u: goto label_1ab790;
        case 0x1ab794u: goto label_1ab794;
        default: break;
    }

    ctx->pc = 0x1ab758u;

label_1ab758:
    // 0x1ab758: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ab75c:
    // 0x1ab75c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ab760:
    // 0x1ab760: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1ab760u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1ab764:
    // 0x1ab764: 0x8c860060  lw          $a2, 0x60($a0)
    ctx->pc = 0x1ab764u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_1ab768:
    // 0x1ab768: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1ab76c:
    if (ctx->pc == 0x1AB76Cu) {
        ctx->pc = 0x1AB76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB768u;
        // 0x1ab76c: 0x7c820030  sq          $v0, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB770u;
        goto label_1ab770;
    }
    ctx->pc = 0x1AB768u;
    {
        const bool branch_taken_0x1ab768 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB768u;
        // 0x1ab76c: 0x7c820030  sq          $v0, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab768) {
            ctx->pc = 0x1AB788u;
            goto label_1ab788;
        }
    }
    ctx->pc = 0x1AB770u;
label_1ab770:
    // 0x1ab770: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ab770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ab774:
    // 0x1ab774: 0x24850030  addiu       $a1, $a0, 0x30
    ctx->pc = 0x1ab774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_1ab778:
    // 0x1ab778: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1ab778u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_1ab77c:
    // 0x1ab77c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1ab77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1ab780:
    // 0x1ab780: 0x60f809  jalr        $v1
label_1ab784:
    if (ctx->pc == 0x1AB784u) {
        ctx->pc = 0x1AB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB780u;
        // 0x1ab784: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB788u;
        goto label_1ab788;
    }
    ctx->pc = 0x1AB780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AB788u);
        ctx->pc = 0x1AB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB780u;
        // 0x1ab784: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB780u, 0x1AB788u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB788u;
label_1ab788:
    // 0x1ab788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab78c:
    // 0x1ab78c: 0x3e00008  jr          $ra
label_1ab790:
    if (ctx->pc == 0x1AB790u) {
        ctx->pc = 0x1AB790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB78Cu;
        // 0x1ab790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB794u;
        goto label_1ab794;
    }
    ctx->pc = 0x1AB78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB78Cu;
        // 0x1ab790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB794u;
label_1ab794:
    // 0x1ab794: 0x0  nop
    ctx->pc = 0x1ab794u;
    // NOP
    ctx->pc = 0x1ab798u;
}
