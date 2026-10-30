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

// Function: sub_00473B00
// Address: 0x473b00 - 0x473b58
void sub_00473B00_0x473b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473B00_0x473b00");
#endif

    switch (ctx->pc) {
        case 0x473b20u: goto label_473b20;
        case 0x473b30u: goto label_473b30;
        default: break;
    }

    ctx->pc = 0x473b00u;

    // 0x473b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x473b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x473b04: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x473b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x473b08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x473b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x473b0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x473b0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473b10: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x473b10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473b14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x473b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x473b18: 0xc11c770  jal         func_471DC0
    ctx->pc = 0x473B18u;
    SET_GPR_U32(ctx, 31, 0x473B20u);
    ctx->pc = 0x473B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x473B18u;
    // 0x473b1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471DC0u, 0x473B18u, 0x473B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473B20u;
label_473b20:
    // 0x473b20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x473b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473b24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x473b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473b28: 0xc11b676  jal         func_46D9D8
    ctx->pc = 0x473B28u;
    SET_GPR_U32(ctx, 31, 0x473B30u);
    ctx->pc = 0x473B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x473B28u;
    // 0x473b2c: 0x24a60010  addiu       $a2, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D9D8u, 0x473B28u, 0x473B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473B30u;
label_473b30:
    // 0x473b30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x473b30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473b34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x473b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x473b38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x473b38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473b3c: 0xae230078  sw          $v1, 0x78($s1)
    ctx->pc = 0x473b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 3));
    // 0x473b40: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x473b40u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x473b44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x473b44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x473b48: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x473b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x473b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x473B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473B4Cu;
        // 0x473b50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x473B54u;
    // 0x473b54: 0x0  nop
    ctx->pc = 0x473b54u;
    // NOP
    ctx->pc = 0x473b58u;
}
