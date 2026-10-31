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

// Function: sub_0030C758
// Address: 0x30c758 - 0x30c798
void sub_0030C758_0x30c758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C758_0x30c758");
#endif

    switch (ctx->pc) {
        case 0x30c758u: goto label_30c758;
        case 0x30c75cu: goto label_30c75c;
        case 0x30c760u: goto label_30c760;
        case 0x30c764u: goto label_30c764;
        case 0x30c768u: goto label_30c768;
        case 0x30c76cu: goto label_30c76c;
        case 0x30c770u: goto label_30c770;
        case 0x30c774u: goto label_30c774;
        case 0x30c778u: goto label_30c778;
        case 0x30c77cu: goto label_30c77c;
        case 0x30c780u: goto label_30c780;
        case 0x30c784u: goto label_30c784;
        case 0x30c788u: goto label_30c788;
        case 0x30c78cu: goto label_30c78c;
        case 0x30c790u: goto label_30c790;
        case 0x30c794u: goto label_30c794;
        default: break;
    }

    ctx->pc = 0x30c758u;

label_30c758:
    // 0x30c758: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30c758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_30c75c:
    // 0x30c75c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30c75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30c760:
    // 0x30c760: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x30c760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_30c764:
    // 0x30c764: 0x8ca300cc  lw          $v1, 0xCC($a1)
    ctx->pc = 0x30c764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 204)));
label_30c768:
    // 0x30c768: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_30c76c:
    if (ctx->pc == 0x30C76Cu) {
        ctx->pc = 0x30C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C768u;
        // 0x30c76c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C770u;
        goto label_30c770;
    }
    ctx->pc = 0x30C768u;
    {
        const bool branch_taken_0x30c768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C768u;
        // 0x30c76c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c768) {
            ctx->pc = 0x30C788u;
            goto label_30c788;
        }
    }
    ctx->pc = 0x30C770u;
label_30c770:
    // 0x30c770: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x30c770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_30c774:
    // 0x30c774: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x30c774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_30c778:
    // 0x30c778: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x30c778u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_30c77c:
    // 0x30c77c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x30c77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_30c780:
    // 0x30c780: 0x60f809  jalr        $v1
label_30c784:
    if (ctx->pc == 0x30C784u) {
        ctx->pc = 0x30C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C780u;
        // 0x30c784: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C788u;
        goto label_30c788;
    }
    ctx->pc = 0x30C780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x30C788u);
        ctx->pc = 0x30C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C780u;
        // 0x30c784: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C780u, 0x30C788u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30C788u;
label_30c788:
    // 0x30c788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30c788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30c78c:
    // 0x30c78c: 0x3e00008  jr          $ra
label_30c790:
    if (ctx->pc == 0x30C790u) {
        ctx->pc = 0x30C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C78Cu;
        // 0x30c790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C794u;
        goto label_30c794;
    }
    ctx->pc = 0x30C78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C78Cu;
        // 0x30c790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C794u;
label_30c794:
    // 0x30c794: 0x0  nop
    ctx->pc = 0x30c794u;
    // NOP
    ctx->pc = 0x30c798u;
}
