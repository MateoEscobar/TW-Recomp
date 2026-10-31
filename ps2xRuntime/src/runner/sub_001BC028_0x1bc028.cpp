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

// Function: sub_001BC028
// Address: 0x1bc028 - 0x1bc078
void sub_001BC028_0x1bc028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC028_0x1bc028");
#endif

    switch (ctx->pc) {
        case 0x1bc04cu: goto label_1bc04c;
        case 0x1bc060u: goto label_1bc060;
        default: break;
    }

    ctx->pc = 0x1bc028u;

    // 0x1bc028: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bc028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bc02c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bc02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bc030: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bc030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bc034: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1bc034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc038: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bc038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc03c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bc03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bc040: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1bc040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1bc044: 0xc074ba0  jal         func_1D2E80
    ctx->pc = 0x1BC044u;
    SET_GPR_U32(ctx, 31, 0x1BC04Cu);
    ctx->pc = 0x1BC048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC044u;
    // 0x1bc048: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2E80u, 0x1BC044u, 0x1BC04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC04Cu;
label_1bc04c:
    // 0x1bc04c: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1bc04cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1bc050: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC050u;
    {
        const bool branch_taken_0x1bc050 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC050u;
        // 0x1bc054: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc050) {
            ctx->pc = 0x1BC064u;
            goto label_1bc064;
        }
    }
    ctx->pc = 0x1BC058u;
    // 0x1bc058: 0xc10b208  jal         func_42C820
    ctx->pc = 0x1BC058u;
    SET_GPR_U32(ctx, 31, 0x1BC060u);
    ctx->pc = 0x1BC05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC058u;
    // 0x1bc05c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x1BC058u, 0x1BC060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC060u;
label_1bc060:
    // 0x1bc060: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bc060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bc064:
    // 0x1bc064: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bc064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bc068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc06c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC06Cu;
        // 0x1bc070: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC074u;
    // 0x1bc074: 0x0  nop
    ctx->pc = 0x1bc074u;
    // NOP
    ctx->pc = 0x1bc078u;
}
