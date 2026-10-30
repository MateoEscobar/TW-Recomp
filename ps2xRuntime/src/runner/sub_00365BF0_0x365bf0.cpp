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

// Function: sub_00365BF0
// Address: 0x365bf0 - 0x365c60
void sub_00365BF0_0x365bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365BF0_0x365bf0");
#endif

    switch (ctx->pc) {
        case 0x365c10u: goto label_365c10;
        case 0x365c18u: goto label_365c18;
        case 0x365c30u: goto label_365c30;
        case 0x365c38u: goto label_365c38;
        case 0x365c44u: goto label_365c44;
        default: break;
    }

    ctx->pc = 0x365bf0u;

    // 0x365bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x365bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x365bf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x365bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365bf8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x365bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x365bfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x365bfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365c00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x365c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x365c04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x365c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x365c08: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365C08u;
    SET_GPR_U32(ctx, 31, 0x365C10u);
    ctx->pc = 0x365C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365C08u;
    // 0x365c0c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365C08u, 0x365C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365C10u;
label_365c10:
    // 0x365c10: 0xc10b108  jal         func_42C420
    ctx->pc = 0x365C10u;
    SET_GPR_U32(ctx, 31, 0x365C18u);
    ctx->pc = 0x365C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365C10u;
    // 0x365c14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x365C10u, 0x365C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365C18u;
label_365c18:
    // 0x365c18: 0x3406bff0  ori         $a2, $zero, 0xBFF0
    ctx->pc = 0x365c18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x365c1c: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x365c1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x365c20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x365c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365c24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365c28: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365C28u;
    SET_GPR_U32(ctx, 31, 0x365C30u);
    ctx->pc = 0x365C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365C28u;
    // 0x365c2c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365C28u, 0x365C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365C30u;
label_365c30:
    // 0x365c30: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x365C30u;
    SET_GPR_U32(ctx, 31, 0x365C38u);
    ctx->pc = 0x365C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365C30u;
    // 0x365c34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x365C30u, 0x365C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365C38u;
label_365c38:
    // 0x365c38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x365c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365c3c: 0xc04711c  jal         func_11C470
    ctx->pc = 0x365C3Cu;
    SET_GPR_U32(ctx, 31, 0x365C44u);
    ctx->pc = 0x365C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365C3Cu;
    // 0x365c40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C470u, 0x365C3Cu, 0x365C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365C44u;
label_365c44:
    // 0x365c44: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x365c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x365c48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x365c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365c4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x365c4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x365c50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x365c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365c54: 0x3e00008  jr          $ra
    ctx->pc = 0x365C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365C54u;
        // 0x365c58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365C5Cu;
    // 0x365c5c: 0x0  nop
    ctx->pc = 0x365c5cu;
    // NOP
    ctx->pc = 0x365c60u;
}
