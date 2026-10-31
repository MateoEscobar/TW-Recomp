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

// Function: sub_004091C8
// Address: 0x4091c8 - 0x409220
void sub_004091C8_0x4091c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004091C8_0x4091c8");
#endif

    switch (ctx->pc) {
        case 0x4091ecu: goto label_4091ec;
        case 0x409204u: goto label_409204;
        default: break;
    }

    ctx->pc = 0x4091c8u;

    // 0x4091c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4091c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4091cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4091ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4091d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4091d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4091d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4091d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4091d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4091d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4091dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4091dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4091e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4091e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4091e4: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x4091E4u;
    SET_GPR_U32(ctx, 31, 0x4091ECu);
    ctx->pc = 0x4091E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4091E4u;
    // 0x4091e8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x4091E4u, 0x4091ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4091ECu;
label_4091ec:
    // 0x4091ec: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x4091ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x4091f0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4091F0u;
    {
        const bool branch_taken_0x4091f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4091F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4091F0u;
        // 0x4091f4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4091f0) {
            ctx->pc = 0x409204u;
            goto label_409204;
        }
    }
    ctx->pc = 0x4091F8u;
    // 0x4091f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4091f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4091fc: 0xc0c8da2  jal         func_323688
    ctx->pc = 0x4091FCu;
    SET_GPR_U32(ctx, 31, 0x409204u);
    ctx->pc = 0x409200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4091FCu;
    // 0x409200: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323688u, 0x4091FCu, 0x409204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409204u;
label_409204:
    // 0x409204: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x409204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x409208: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x409208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40920c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x40920cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x409210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x409210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x409214: 0x3e00008  jr          $ra
    ctx->pc = 0x409214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x409218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409214u;
        // 0x409218: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x409214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40921Cu;
    // 0x40921c: 0x0  nop
    ctx->pc = 0x40921cu;
    // NOP
    ctx->pc = 0x409220u;
}
