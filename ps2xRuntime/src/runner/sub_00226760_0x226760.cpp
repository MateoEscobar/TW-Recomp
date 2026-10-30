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

// Function: sub_00226760
// Address: 0x226760 - 0x2267a0
void sub_00226760_0x226760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226760_0x226760");
#endif

    switch (ctx->pc) {
        case 0x226760u: goto label_226760;
        case 0x226764u: goto label_226764;
        case 0x226768u: goto label_226768;
        case 0x22676cu: goto label_22676c;
        case 0x226770u: goto label_226770;
        case 0x226774u: goto label_226774;
        case 0x226778u: goto label_226778;
        case 0x22677cu: goto label_22677c;
        case 0x226780u: goto label_226780;
        case 0x226784u: goto label_226784;
        case 0x226788u: goto label_226788;
        case 0x22678cu: goto label_22678c;
        case 0x226790u: goto label_226790;
        case 0x226794u: goto label_226794;
        case 0x226798u: goto label_226798;
        case 0x22679cu: goto label_22679c;
        default: break;
    }

    ctx->pc = 0x226760u;

label_226760:
    // 0x226760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_226764:
    // 0x226764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_226768:
    // 0x226768: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x226768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_22676c:
    // 0x22676c: 0x8c9000d4  lw          $s0, 0xD4($a0)
    ctx->pc = 0x22676cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
label_226770:
    // 0x226770: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
label_226774:
    if (ctx->pc == 0x226774u) {
        ctx->pc = 0x226774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226770u;
        // 0x226774: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226778u;
        goto label_226778;
    }
    ctx->pc = 0x226770u;
    {
        const bool branch_taken_0x226770 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x226770) {
            ctx->pc = 0x226774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226770u;
            // 0x226774: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226794u;
            goto label_226794;
        }
    }
    ctx->pc = 0x226778u;
label_226778:
    // 0x226778: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x226778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_22677c:
    // 0x22677c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x22677cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_226780:
    // 0x226780: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x226780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_226784:
    // 0x226784: 0x40f809  jalr        $v0
label_226788:
    if (ctx->pc == 0x226788u) {
        ctx->pc = 0x226788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226784u;
        // 0x226788: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22678Cu;
        goto label_22678c;
    }
    ctx->pc = 0x226784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22678Cu);
        ctx->pc = 0x226788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226784u;
        // 0x226788: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226784u, 0x22678Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22678Cu;
label_22678c:
    // 0x22678c: 0xae0200cc  sw          $v0, 0xCC($s0)
    ctx->pc = 0x22678cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
label_226790:
    // 0x226790: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x226790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_226794:
    // 0x226794: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_226798:
    // 0x226798: 0x3e00008  jr          $ra
label_22679c:
    if (ctx->pc == 0x22679Cu) {
        ctx->pc = 0x22679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226798u;
        // 0x22679c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2267A0u;
        goto label_fallthrough_0x226798;
    }
    ctx->pc = 0x226798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226798u;
        // 0x22679c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x226798:
    ctx->pc = 0x2267A0u;
}
