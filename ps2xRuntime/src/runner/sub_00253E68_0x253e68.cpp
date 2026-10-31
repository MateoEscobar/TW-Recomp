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

// Function: sub_00253E68
// Address: 0x253e68 - 0x253ed0
void sub_00253E68_0x253e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253E68_0x253e68");
#endif

    switch (ctx->pc) {
        case 0x253e9cu: goto label_253e9c;
        case 0x253eacu: goto label_253eac;
        case 0x253eb8u: goto label_253eb8;
        default: break;
    }

    ctx->pc = 0x253e68u;

    // 0x253e68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x253e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x253e6c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x253e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x253e70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x253e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x253e74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x253e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253e78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x253e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x253e7c: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x253e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x253e80: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x253e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x253e84: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x253E84u;
    {
        const bool branch_taken_0x253e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x253E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E84u;
        // 0x253e88: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e84) {
            ctx->pc = 0x253EA4u;
            goto label_253ea4;
        }
    }
    ctx->pc = 0x253E8Cu;
    // 0x253e8c: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x253E8Cu;
    {
        const bool branch_taken_0x253e8c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x253e8c) {
            ctx->pc = 0x253EA4u;
            goto label_253ea4;
        }
    }
    ctx->pc = 0x253E94u;
    // 0x253e94: 0xc094da2  jal         func_253688
    ctx->pc = 0x253E94u;
    SET_GPR_U32(ctx, 31, 0x253E9Cu);
    ctx->pc = 0x253E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253E94u;
    // 0x253e98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253688u, 0x253E94u, 0x253E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253E9Cu;
label_253e9c:
    // 0x253e9c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x253E9Cu;
    {
        const bool branch_taken_0x253e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E9Cu;
        // 0x253ea0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e9c) {
            ctx->pc = 0x253EBCu;
            goto label_253ebc;
        }
    }
    ctx->pc = 0x253EA4u;
label_253ea4:
    // 0x253ea4: 0xc094fca  jal         func_253F28
    ctx->pc = 0x253EA4u;
    SET_GPR_U32(ctx, 31, 0x253EACu);
    ctx->pc = 0x253EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253EA4u;
    // 0x253ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x253EA4u, 0x253EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253EACu;
label_253eac:
    // 0x253eac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253eb0: 0xc094fb4  jal         func_253ED0
    ctx->pc = 0x253EB0u;
    SET_GPR_U32(ctx, 31, 0x253EB8u);
    ctx->pc = 0x253EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253EB0u;
    // 0x253eb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x253EB0u, 0x253EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253EB8u;
label_253eb8:
    // 0x253eb8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x253eb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_253ebc:
    // 0x253ebc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x253ebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253ec0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x253ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x253EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253EC4u;
        // 0x253ec8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253ECCu;
    // 0x253ecc: 0x0  nop
    ctx->pc = 0x253eccu;
    // NOP
    ctx->pc = 0x253ed0u;
}
