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

// Function: sub_00357F28
// Address: 0x357f28 - 0x357f90
void sub_00357F28_0x357f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357F28_0x357f28");
#endif

    switch (ctx->pc) {
        case 0x357f48u: goto label_357f48;
        case 0x357f60u: goto label_357f60;
        case 0x357f68u: goto label_357f68;
        case 0x357f74u: goto label_357f74;
        default: break;
    }

    ctx->pc = 0x357f28u;

    // 0x357f28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x357f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x357f2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x357f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357f30: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x357f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x357f34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x357f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357f38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x357f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x357f3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x357f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x357f40: 0xc1024a0  jal         func_409280
    ctx->pc = 0x357F40u;
    SET_GPR_U32(ctx, 31, 0x357F48u);
    ctx->pc = 0x357F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357F40u;
    // 0x357f44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409280u, 0x357F40u, 0x357F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357F48u;
label_357f48:
    // 0x357f48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x357f48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357f4c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x357F4Cu;
    {
        const bool branch_taken_0x357f4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x357F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357F4Cu;
        // 0x357f50: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357f4c) {
            ctx->pc = 0x357F60u;
            goto label_357f60;
        }
    }
    ctx->pc = 0x357F54u;
    // 0x357f54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357f58: 0xc10241a  jal         func_409068
    ctx->pc = 0x357F58u;
    SET_GPR_U32(ctx, 31, 0x357F60u);
    ctx->pc = 0x357F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357F58u;
    // 0x357f5c: 0x24a591a0  addiu       $a1, $a1, -0x6E60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x357F58u, 0x357F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357F60u;
label_357f60:
    // 0x357f60: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x357F60u;
    SET_GPR_U32(ctx, 31, 0x357F68u);
    ctx->pc = 0x357F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357F60u;
    // 0x357f64: 0xc62c000c  lwc1        $f12, 0xC($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x357F60u, 0x357F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357F68u;
label_357f68:
    // 0x357f68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x357f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357f6c: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x357F6Cu;
    SET_GPR_U32(ctx, 31, 0x357F74u);
    ctx->pc = 0x357F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357F6Cu;
    // 0x357f70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x357F6Cu, 0x357F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357F74u;
label_357f74:
    // 0x357f74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x357f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x357f78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x357f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357f7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x357f7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357f80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x357f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357f84: 0x3e00008  jr          $ra
    ctx->pc = 0x357F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357F84u;
        // 0x357f88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357F8Cu;
    // 0x357f8c: 0x0  nop
    ctx->pc = 0x357f8cu;
    // NOP
    ctx->pc = 0x357f90u;
}
