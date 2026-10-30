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

// Function: sub_00357C28
// Address: 0x357c28 - 0x357c90
void sub_00357C28_0x357c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357C28_0x357c28");
#endif

    switch (ctx->pc) {
        case 0x357c48u: goto label_357c48;
        case 0x357c60u: goto label_357c60;
        case 0x357c68u: goto label_357c68;
        case 0x357c74u: goto label_357c74;
        default: break;
    }

    ctx->pc = 0x357c28u;

    // 0x357c28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x357c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x357c2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x357c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357c30: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x357c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x357c34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x357c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357c38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x357c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x357c3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x357c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x357c40: 0xc1024a0  jal         func_409280
    ctx->pc = 0x357C40u;
    SET_GPR_U32(ctx, 31, 0x357C48u);
    ctx->pc = 0x357C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357C40u;
    // 0x357c44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409280u, 0x357C40u, 0x357C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357C48u;
label_357c48:
    // 0x357c48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x357c48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357c4c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x357C4Cu;
    {
        const bool branch_taken_0x357c4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x357C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357C4Cu;
        // 0x357c50: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357c4c) {
            ctx->pc = 0x357C60u;
            goto label_357c60;
        }
    }
    ctx->pc = 0x357C54u;
    // 0x357c54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357c58: 0xc10241a  jal         func_409068
    ctx->pc = 0x357C58u;
    SET_GPR_U32(ctx, 31, 0x357C60u);
    ctx->pc = 0x357C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357C58u;
    // 0x357c5c: 0x24a590e8  addiu       $a1, $a1, -0x6F18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x357C58u, 0x357C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357C60u;
label_357c60:
    // 0x357c60: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x357C60u;
    SET_GPR_U32(ctx, 31, 0x357C68u);
    ctx->pc = 0x357C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357C60u;
    // 0x357c64: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x357C60u, 0x357C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357C68u;
label_357c68:
    // 0x357c68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x357c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357c6c: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x357C6Cu;
    SET_GPR_U32(ctx, 31, 0x357C74u);
    ctx->pc = 0x357C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357C6Cu;
    // 0x357c70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x357C6Cu, 0x357C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357C74u;
label_357c74:
    // 0x357c74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x357c74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x357c78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x357c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357c7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x357c7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357c80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x357c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357c84: 0x3e00008  jr          $ra
    ctx->pc = 0x357C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357C84u;
        // 0x357c88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357C8Cu;
    // 0x357c8c: 0x0  nop
    ctx->pc = 0x357c8cu;
    // NOP
    ctx->pc = 0x357c90u;
}
