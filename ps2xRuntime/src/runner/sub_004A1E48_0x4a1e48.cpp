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

// Function: sub_004A1E48
// Address: 0x4a1e48 - 0x4a1ea0
void sub_004A1E48_0x4a1e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A1E48_0x4a1e48");
#endif

    switch (ctx->pc) {
        case 0x4a1e8cu: goto label_4a1e8c;
        default: break;
    }

    ctx->pc = 0x4a1e48u;

    // 0x4a1e48: 0x93828780  lbu         $v0, -0x7880($gp)
    ctx->pc = 0x4a1e48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x4a1e4c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a1e4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a1e50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a1e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a1e54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a1e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a1e58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A1E58u;
    {
        const bool branch_taken_0x4a1e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1E58u;
        // 0x4a1e5c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1e58) {
            ctx->pc = 0x4A1E6Cu;
            goto label_4a1e6c;
        }
    }
    ctx->pc = 0x4A1E60u;
    // 0x4a1e60: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4a1e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4a1e64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4A1E64u;
    {
        const bool branch_taken_0x4a1e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1E64u;
        // 0x4a1e68: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1e64) {
            ctx->pc = 0x4A1E74u;
            goto label_4a1e74;
        }
    }
    ctx->pc = 0x4A1E6Cu;
label_4a1e6c:
    // 0x4a1e6c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4a1e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4a1e70: 0x2444ffc8  addiu       $a0, $v0, -0x38
    ctx->pc = 0x4a1e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967240));
label_4a1e74:
    // 0x4a1e74: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x4a1e74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x4a1e78: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x4a1e78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x4a1e7c: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x4a1e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4a1e80: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x4a1e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4a1e84: 0xc127fba  jal         func_49FEE8
    ctx->pc = 0x4A1E84u;
    SET_GPR_U32(ctx, 31, 0x4A1E8Cu);
    ctx->pc = 0x4A1E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1E84u;
    // 0x4a1e88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FEE8u, 0x4A1E84u, 0x4A1E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1E8Cu;
label_4a1e8c:
    // 0x4a1e8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a1e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a1e90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a1e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a1e94: 0x3e00008  jr          $ra
    ctx->pc = 0x4A1E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A1E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1E94u;
        // 0x4a1e98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A1E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A1E9Cu;
    // 0x4a1e9c: 0x0  nop
    ctx->pc = 0x4a1e9cu;
    // NOP
    ctx->pc = 0x4a1ea0u;
}
