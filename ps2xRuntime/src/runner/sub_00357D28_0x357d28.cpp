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

// Function: sub_00357D28
// Address: 0x357d28 - 0x357d90
void sub_00357D28_0x357d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357D28_0x357d28");
#endif

    switch (ctx->pc) {
        case 0x357d48u: goto label_357d48;
        case 0x357d60u: goto label_357d60;
        case 0x357d68u: goto label_357d68;
        case 0x357d74u: goto label_357d74;
        default: break;
    }

    ctx->pc = 0x357d28u;

    // 0x357d28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x357d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x357d2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x357d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357d30: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x357d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x357d34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x357d34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357d38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x357d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x357d3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x357d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x357d40: 0xc1024a0  jal         func_409280
    ctx->pc = 0x357D40u;
    SET_GPR_U32(ctx, 31, 0x357D48u);
    ctx->pc = 0x357D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357D40u;
    // 0x357d44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409280u, 0x357D40u, 0x357D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357D48u;
label_357d48:
    // 0x357d48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x357d48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357d4c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x357D4Cu;
    {
        const bool branch_taken_0x357d4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x357D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357D4Cu;
        // 0x357d50: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357d4c) {
            ctx->pc = 0x357D60u;
            goto label_357d60;
        }
    }
    ctx->pc = 0x357D54u;
    // 0x357d54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357d58: 0xc10241a  jal         func_409068
    ctx->pc = 0x357D58u;
    SET_GPR_U32(ctx, 31, 0x357D60u);
    ctx->pc = 0x357D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357D58u;
    // 0x357d5c: 0x24a59140  addiu       $a1, $a1, -0x6EC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x357D58u, 0x357D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357D60u;
label_357d60:
    // 0x357d60: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x357D60u;
    SET_GPR_U32(ctx, 31, 0x357D68u);
    ctx->pc = 0x357D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357D60u;
    // 0x357d64: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x357D60u, 0x357D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357D68u;
label_357d68:
    // 0x357d68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x357d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357d6c: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x357D6Cu;
    SET_GPR_U32(ctx, 31, 0x357D74u);
    ctx->pc = 0x357D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357D6Cu;
    // 0x357d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x357D6Cu, 0x357D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357D74u;
label_357d74:
    // 0x357d74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x357d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x357d78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x357d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357d7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x357d7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357d80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x357d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357d84: 0x3e00008  jr          $ra
    ctx->pc = 0x357D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357D84u;
        // 0x357d88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357D8Cu;
    // 0x357d8c: 0x0  nop
    ctx->pc = 0x357d8cu;
    // NOP
    ctx->pc = 0x357d90u;
}
