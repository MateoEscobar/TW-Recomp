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

// Function: sub_00466E50
// Address: 0x466e50 - 0x466ec0
void sub_00466E50_0x466e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466E50_0x466e50");
#endif

    switch (ctx->pc) {
        case 0x466e8cu: goto label_466e8c;
        case 0x466e94u: goto label_466e94;
        default: break;
    }

    ctx->pc = 0x466e50u;

    // 0x466e50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x466e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x466e54: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x466e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x466e58: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x466e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x466e5c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x466e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x466e60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x466e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466e64: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x466e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x466e68: 0x2472e680  addiu       $s2, $v1, -0x1980
    ctx->pc = 0x466e68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960768));
    // 0x466e6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x466e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x466e70: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x466e70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x52E688u));
    // 0x466e74: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x466e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x466e78: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x466e78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x466e7c: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x466E7Cu;
    {
        const bool branch_taken_0x466e7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x466E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466E7Cu;
        // 0x466e80: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466e7c) {
            ctx->pc = 0x466EA4u;
            goto label_466ea4;
        }
    }
    ctx->pc = 0x466E84u;
    // 0x466e84: 0xc119dc2  jal         func_467708
    ctx->pc = 0x466E84u;
    SET_GPR_U32(ctx, 31, 0x466E8Cu);
    ctx->pc = 0x467708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467708u, 0x466E84u, 0x466E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466E8Cu;
label_466e8c:
    // 0x466e8c: 0xc119b16  jal         func_466C58
    ctx->pc = 0x466E8Cu;
    SET_GPR_U32(ctx, 31, 0x466E94u);
    ctx->pc = 0x466E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466E8Cu;
    // 0x466e90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x466C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466C58u, 0x466E8Cu, 0x466E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466E94u;
label_466e94:
    // 0x466e94: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x466e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x466e98: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x466e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x466e9c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x466e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x466ea0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x466ea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_466ea4:
    // 0x466ea4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x466ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x466ea8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x466ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x466eac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x466eacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x466eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x466eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x466eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x466EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x466EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466EB4u;
        // 0x466eb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466EBCu;
    // 0x466ebc: 0x0  nop
    ctx->pc = 0x466ebcu;
    // NOP
    ctx->pc = 0x466ec0u;
}
