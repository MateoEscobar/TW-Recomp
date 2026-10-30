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

// Function: sub_0047BE50
// Address: 0x47be50 - 0x47bea0
void sub_0047BE50_0x47be50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047BE50_0x47be50");
#endif

    switch (ctx->pc) {
        case 0x47be64u: goto label_47be64;
        case 0x47be80u: goto label_47be80;
        case 0x47be8cu: goto label_47be8c;
        default: break;
    }

    ctx->pc = 0x47be50u;

    // 0x47be50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47be50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x47be54: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x47be54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x47be58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x47be58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x47be5c: 0xc11fb56  jal         func_47ED58
    ctx->pc = 0x47BE5Cu;
    SET_GPR_U32(ctx, 31, 0x47BE64u);
    ctx->pc = 0x47BE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47BE5Cu;
    // 0x47be60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x47BE5Cu, 0x47BE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BE64u;
label_47be64:
    // 0x47be64: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x47BE64u;
    {
        const bool branch_taken_0x47be64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47BE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BE64u;
        // 0x47be68: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47be64) {
            ctx->pc = 0x47BE90u;
            goto label_47be90;
        }
    }
    ctx->pc = 0x47BE6Cu;
    // 0x47be6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47be70: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x47be70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x47be74: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x47be74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x47be78: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x47BE78u;
    SET_GPR_U32(ctx, 31, 0x47BE80u);
    ctx->pc = 0x47BE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47BE78u;
    // 0x47be7c: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x47BE78u, 0x47BE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BE80u;
label_47be80:
    // 0x47be80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x47be80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47be84: 0xc11f024  jal         func_47C090
    ctx->pc = 0x47BE84u;
    SET_GPR_U32(ctx, 31, 0x47BE8Cu);
    ctx->pc = 0x47BE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47BE84u;
    // 0x47be88: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x47BE84u, 0x47BE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BE8Cu;
label_47be8c:
    // 0x47be8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47be8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47be90:
    // 0x47be90: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x47be90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47be94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47be94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47be98: 0x3e00008  jr          $ra
    ctx->pc = 0x47BE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BE98u;
        // 0x47be9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47BE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47BEA0u;
}
