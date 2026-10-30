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

// Function: sub_00357E28
// Address: 0x357e28 - 0x357e90
void sub_00357E28_0x357e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357E28_0x357e28");
#endif

    switch (ctx->pc) {
        case 0x357e48u: goto label_357e48;
        case 0x357e60u: goto label_357e60;
        case 0x357e68u: goto label_357e68;
        case 0x357e74u: goto label_357e74;
        default: break;
    }

    ctx->pc = 0x357e28u;

    // 0x357e28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x357e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x357e2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x357e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357e30: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x357e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x357e34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x357e34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357e38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x357e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x357e3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x357e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x357e40: 0xc1024a0  jal         func_409280
    ctx->pc = 0x357E40u;
    SET_GPR_U32(ctx, 31, 0x357E48u);
    ctx->pc = 0x357E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357E40u;
    // 0x357e44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409280u, 0x357E40u, 0x357E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357E48u;
label_357e48:
    // 0x357e48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x357e48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357e4c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x357E4Cu;
    {
        const bool branch_taken_0x357e4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x357E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357E4Cu;
        // 0x357e50: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357e4c) {
            ctx->pc = 0x357E60u;
            goto label_357e60;
        }
    }
    ctx->pc = 0x357E54u;
    // 0x357e54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357e58: 0xc10241a  jal         func_409068
    ctx->pc = 0x357E58u;
    SET_GPR_U32(ctx, 31, 0x357E60u);
    ctx->pc = 0x357E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357E58u;
    // 0x357e5c: 0x24a59170  addiu       $a1, $a1, -0x6E90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x357E58u, 0x357E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357E60u;
label_357e60:
    // 0x357e60: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x357E60u;
    SET_GPR_U32(ctx, 31, 0x357E68u);
    ctx->pc = 0x357E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357E60u;
    // 0x357e64: 0xc62c0008  lwc1        $f12, 0x8($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x357E60u, 0x357E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357E68u;
label_357e68:
    // 0x357e68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x357e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357e6c: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x357E6Cu;
    SET_GPR_U32(ctx, 31, 0x357E74u);
    ctx->pc = 0x357E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357E6Cu;
    // 0x357e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x357E6Cu, 0x357E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357E74u;
label_357e74:
    // 0x357e74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x357e74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x357e78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x357e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357e7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x357e7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357e80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x357e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357e84: 0x3e00008  jr          $ra
    ctx->pc = 0x357E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357E84u;
        // 0x357e88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357E8Cu;
    // 0x357e8c: 0x0  nop
    ctx->pc = 0x357e8cu;
    // NOP
    ctx->pc = 0x357e90u;
}
