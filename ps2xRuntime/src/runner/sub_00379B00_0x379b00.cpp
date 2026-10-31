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

// Function: sub_00379B00
// Address: 0x379b00 - 0x379b78
void sub_00379B00_0x379b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379B00_0x379b00");
#endif

    switch (ctx->pc) {
        case 0x379b28u: goto label_379b28;
        case 0x379b30u: goto label_379b30;
        case 0x379b44u: goto label_379b44;
        case 0x379b4cu: goto label_379b4c;
        case 0x379b58u: goto label_379b58;
        default: break;
    }

    ctx->pc = 0x379b00u;

    // 0x379b00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x379b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x379b04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x379b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379b08: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x379b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x379b0c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x379b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x379b10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x379b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379b14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x379b14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379b18: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x379b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x379b1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x379b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x379b20: 0xc102472  jal         func_4091C8
    ctx->pc = 0x379B20u;
    SET_GPR_U32(ctx, 31, 0x379B28u);
    ctx->pc = 0x379B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379B20u;
    // 0x379b24: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x379B20u, 0x379B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379B28u;
label_379b28:
    // 0x379b28: 0xc10b108  jal         func_42C420
    ctx->pc = 0x379B28u;
    SET_GPR_U32(ctx, 31, 0x379B30u);
    ctx->pc = 0x379B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379B28u;
    // 0x379b2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x379B28u, 0x379B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379B30u;
label_379b30:
    // 0x379b30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x379b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379b34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x379b34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379b38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379b3c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x379B3Cu;
    SET_GPR_U32(ctx, 31, 0x379B44u);
    ctx->pc = 0x379B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379B3Cu;
    // 0x379b40: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x379B3Cu, 0x379B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379B44u;
label_379b44:
    // 0x379b44: 0xc10b108  jal         func_42C420
    ctx->pc = 0x379B44u;
    SET_GPR_U32(ctx, 31, 0x379B4Cu);
    ctx->pc = 0x379B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379B44u;
    // 0x379b48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x379B44u, 0x379B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379B4Cu;
label_379b4c:
    // 0x379b4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x379b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379b50: 0xc0e5bea  jal         func_396FA8
    ctx->pc = 0x379B50u;
    SET_GPR_U32(ctx, 31, 0x379B58u);
    ctx->pc = 0x379B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379B50u;
    // 0x379b54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396FA8u, 0x379B50u, 0x379B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379B58u;
label_379b58:
    // 0x379b58: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x379b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x379b5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x379b5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379b60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x379b60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379b64: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x379b64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x379b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x379B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379B6Cu;
        // 0x379b70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379B74u;
    // 0x379b74: 0x0  nop
    ctx->pc = 0x379b74u;
    // NOP
    ctx->pc = 0x379b78u;
}
