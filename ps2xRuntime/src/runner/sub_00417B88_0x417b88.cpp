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

// Function: sub_00417B88
// Address: 0x417b88 - 0x417be8
void sub_00417B88_0x417b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00417B88_0x417b88");
#endif

    switch (ctx->pc) {
        case 0x417ba8u: goto label_417ba8;
        case 0x417bd4u: goto label_417bd4;
        default: break;
    }

    ctx->pc = 0x417b88u;

    // 0x417b88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x417b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x417b8c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x417b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x417b90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x417b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x417b94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x417b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417b98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x417b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x417b9c: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x417b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x417ba0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x417ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x417ba4: 0x0  nop
    ctx->pc = 0x417ba4u;
    // NOP
label_417ba8:
    // 0x417ba8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x417ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x417bac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x417bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x417bb0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x417bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x417bb4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x417bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x417bb8: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x417bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x417bbc: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x417bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x417bc0: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x417bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x417bc4: 0x1464fff8  bne         $v1, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x417BC4u;
    {
        const bool branch_taken_0x417bc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x417BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417BC4u;
        // 0x417bc8: 0x2442001c  addiu       $v0, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417bc4) {
            ctx->pc = 0x417BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_417ba8;
        }
    }
    ctx->pc = 0x417BCCu;
    // 0x417bcc: 0xc105efa  jal         func_417BE8
    ctx->pc = 0x417BCCu;
    SET_GPR_U32(ctx, 31, 0x417BD4u);
    ctx->pc = 0x417BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417BCCu;
    // 0x417bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417BE8u, 0x417BCCu, 0x417BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417BD4u;
label_417bd4:
    // 0x417bd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x417bd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417bd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x417bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x417bdc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x417bdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x417be0: 0x3e00008  jr          $ra
    ctx->pc = 0x417BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x417BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417BE0u;
        // 0x417be4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x417BE8u;
}
