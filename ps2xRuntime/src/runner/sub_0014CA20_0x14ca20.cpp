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

// Function: sub_0014CA20
// Address: 0x14ca20 - 0x14ca88
void sub_0014CA20_0x14ca20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014CA20_0x14ca20");
#endif

    switch (ctx->pc) {
        case 0x14ca40u: goto label_14ca40;
        case 0x14ca64u: goto label_14ca64;
        default: break;
    }

    ctx->pc = 0x14ca20u;

    // 0x14ca20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x14ca20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x14ca24: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x14ca24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x14ca28: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x14ca28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x14ca2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14ca2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca30: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x14ca30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x14ca34: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x14ca34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x14ca38: 0xc043cbc  jal         func_10F2F0
    ctx->pc = 0x14CA38u;
    SET_GPR_U32(ctx, 31, 0x14CA40u);
    ctx->pc = 0x14CA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CA38u;
    // 0x14ca3c: 0x8e110040  lw          $s1, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2F0u, 0x14CA38u, 0x14CA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CA40u;
label_14ca40:
    // 0x14ca40: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14CA40u;
    {
        const bool branch_taken_0x14ca40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CA40u;
        // 0x14ca44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ca40) {
            ctx->pc = 0x14CA70u;
            goto label_14ca70;
        }
    }
    ctx->pc = 0x14CA48u;
    // 0x14ca48: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x14ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x14ca4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CA4Cu;
    {
        const bool branch_taken_0x14ca4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CA4Cu;
        // 0x14ca50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ca4c) {
            ctx->pc = 0x14CA5Cu;
            goto label_14ca5c;
        }
    }
    ctx->pc = 0x14CA54u;
    // 0x14ca54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14CA54u;
    {
        const bool branch_taken_0x14ca54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CA54u;
        // 0x14ca58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ca54) {
            ctx->pc = 0x14CA70u;
            goto label_14ca70;
        }
    }
    ctx->pc = 0x14CA5Cu;
label_14ca5c:
    // 0x14ca5c: 0xc05420e  jal         func_150838
    ctx->pc = 0x14CA5Cu;
    SET_GPR_U32(ctx, 31, 0x14CA64u);
    ctx->pc = 0x14CA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CA5Cu;
    // 0x14ca60: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150838u, 0x14CA5Cu, 0x14CA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CA64u;
label_14ca64:
    // 0x14ca64: 0x93a20012  lbu         $v0, 0x12($sp)
    ctx->pc = 0x14ca64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x14ca68: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x14ca68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x14ca6c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x14ca6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_14ca70:
    // 0x14ca70: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x14ca70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14ca74: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x14ca74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14ca78: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x14ca78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14ca7c: 0x3e00008  jr          $ra
    ctx->pc = 0x14CA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CA7Cu;
        // 0x14ca80: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CA84u;
    // 0x14ca84: 0x0  nop
    ctx->pc = 0x14ca84u;
    // NOP
    ctx->pc = 0x14ca88u;
}
