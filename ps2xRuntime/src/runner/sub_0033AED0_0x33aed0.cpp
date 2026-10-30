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

// Function: sub_0033AED0
// Address: 0x33aed0 - 0x33af38
void sub_0033AED0_0x33aed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AED0_0x33aed0");
#endif

    switch (ctx->pc) {
        case 0x33aef4u: goto label_33aef4;
        case 0x33af0cu: goto label_33af0c;
        case 0x33af1cu: goto label_33af1c;
        case 0x33af24u: goto label_33af24;
        default: break;
    }

    ctx->pc = 0x33aed0u;

    // 0x33aed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33aed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33aed4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x33aed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x33aed8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33aed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33aedc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33aedcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33aee0: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x33aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x33aee4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x33AEE4u;
    {
        const bool branch_taken_0x33aee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33aee4) {
            ctx->pc = 0x33AEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AEE4u;
            // 0x33aee8: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AEFCu;
            goto label_33aefc;
        }
    }
    ctx->pc = 0x33AEECu;
    // 0x33aeec: 0xc0ceae6  jal         func_33AB98
    ctx->pc = 0x33AEECu;
    SET_GPR_U32(ctx, 31, 0x33AEF4u);
    ctx->pc = 0x33AB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AB98u, 0x33AEECu, 0x33AEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AEF4u;
label_33aef4:
    // 0x33aef4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x33AEF4u;
    {
        const bool branch_taken_0x33aef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AEF4u;
        // 0x33aef8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aef4) {
            ctx->pc = 0x33AF28u;
            goto label_33af28;
        }
    }
    ctx->pc = 0x33AEFCu;
label_33aefc:
    // 0x33aefc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33AEFCu;
    {
        const bool branch_taken_0x33aefc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33aefc) {
            ctx->pc = 0x33AF14u;
            goto label_33af14;
        }
    }
    ctx->pc = 0x33AF04u;
    // 0x33af04: 0xc0cea8c  jal         func_33AA30
    ctx->pc = 0x33AF04u;
    SET_GPR_U32(ctx, 31, 0x33AF0Cu);
    ctx->pc = 0x33AF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AF04u;
    // 0x33af08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AA30u, 0x33AF04u, 0x33AF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AF0Cu;
label_33af0c:
    // 0x33af0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33AF0Cu;
    {
        const bool branch_taken_0x33af0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33af0c) {
            ctx->pc = 0x33AF1Cu;
            goto label_33af1c;
        }
    }
    ctx->pc = 0x33AF14u;
label_33af14:
    // 0x33af14: 0xc0ceb9c  jal         func_33AE70
    ctx->pc = 0x33AF14u;
    SET_GPR_U32(ctx, 31, 0x33AF1Cu);
    ctx->pc = 0x33AF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AF14u;
    // 0x33af18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AE70u, 0x33AF14u, 0x33AF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AF1Cu;
label_33af1c:
    // 0x33af1c: 0xc0ce1e6  jal         func_338798
    ctx->pc = 0x33AF1Cu;
    SET_GPR_U32(ctx, 31, 0x33AF24u);
    ctx->pc = 0x33AF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AF1Cu;
    // 0x33af20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338798u, 0x33AF1Cu, 0x33AF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AF24u;
label_33af24:
    // 0x33af24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x33af24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33af28:
    // 0x33af28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33af28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33af2c: 0x3e00008  jr          $ra
    ctx->pc = 0x33AF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AF2Cu;
        // 0x33af30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AF34u;
    // 0x33af34: 0x0  nop
    ctx->pc = 0x33af34u;
    // NOP
    ctx->pc = 0x33af38u;
}
