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

// Function: sub_0014C9C0
// Address: 0x14c9c0 - 0x14ca20
void sub_0014C9C0_0x14c9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C9C0_0x14c9c0");
#endif

    switch (ctx->pc) {
        case 0x14c9e0u: goto label_14c9e0;
        case 0x14ca00u: goto label_14ca00;
        default: break;
    }

    ctx->pc = 0x14c9c0u;

    // 0x14c9c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x14c9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x14c9c4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x14c9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x14c9c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x14c9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x14c9cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14c9ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c9d0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x14c9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x14c9d4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x14c9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x14c9d8: 0xc043cbc  jal         func_10F2F0
    ctx->pc = 0x14C9D8u;
    SET_GPR_U32(ctx, 31, 0x14C9E0u);
    ctx->pc = 0x14C9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C9D8u;
    // 0x14c9dc: 0x8e110040  lw          $s1, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2F0u, 0x14C9D8u, 0x14C9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C9E0u;
label_14c9e0:
    // 0x14c9e0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14C9E0u;
    {
        const bool branch_taken_0x14c9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C9E0u;
        // 0x14c9e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c9e0) {
            ctx->pc = 0x14CA0Cu;
            goto label_14ca0c;
        }
    }
    ctx->pc = 0x14C9E8u;
    // 0x14c9e8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x14c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x14c9ec: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x14C9ECu;
    {
        const bool branch_taken_0x14c9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c9ec) {
            ctx->pc = 0x14C9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C9ECu;
            // 0x14c9f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CA0Cu;
            goto label_14ca0c;
        }
    }
    ctx->pc = 0x14C9F4u;
    // 0x14c9f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14c9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c9f8: 0xc05420e  jal         func_150838
    ctx->pc = 0x14C9F8u;
    SET_GPR_U32(ctx, 31, 0x14CA00u);
    ctx->pc = 0x14C9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C9F8u;
    // 0x14c9fc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150838u, 0x14C9F8u, 0x14CA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CA00u;
label_14ca00:
    // 0x14ca00: 0x93a20012  lbu         $v0, 0x12($sp)
    ctx->pc = 0x14ca00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x14ca04: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x14ca04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x14ca08: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x14ca08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_14ca0c:
    // 0x14ca0c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x14ca0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14ca10: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x14ca10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14ca14: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x14ca14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14ca18: 0x3e00008  jr          $ra
    ctx->pc = 0x14CA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CA18u;
        // 0x14ca1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CA20u;
}
