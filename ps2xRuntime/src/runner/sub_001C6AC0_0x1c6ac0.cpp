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

// Function: sub_001C6AC0
// Address: 0x1c6ac0 - 0x1c6b38
void sub_001C6AC0_0x1c6ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6AC0_0x1c6ac0");
#endif

    switch (ctx->pc) {
        case 0x1c6af4u: goto label_1c6af4;
        case 0x1c6b00u: goto label_1c6b00;
        case 0x1c6b0cu: goto label_1c6b0c;
        case 0x1c6b18u: goto label_1c6b18;
        case 0x1c6b24u: goto label_1c6b24;
        default: break;
    }

    ctx->pc = 0x1c6ac0u;

    // 0x1c6ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c6ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c6ac4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1c6ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1c6ac8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c6ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c6acc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1c6accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1c6ad0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c6ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c6ad4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ad8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6adc: 0x2442a858  addiu       $v0, $v0, -0x57A8
    ctx->pc = 0x1c6adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944856));
    // 0x1c6ae0: 0x2463a880  addiu       $v1, $v1, -0x5780
    ctx->pc = 0x1c6ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944896));
    // 0x1c6ae4: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x1c6ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x1c6ae8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1c6ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1c6aec: 0xc071bb6  jal         func_1C6ED8
    ctx->pc = 0x1C6AECu;
    SET_GPR_U32(ctx, 31, 0x1C6AF4u);
    ctx->pc = 0x1C6AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AECu;
    // 0x1c6af0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6ED8u, 0x1C6AECu, 0x1C6AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AF4u;
label_1c6af4:
    // 0x1c6af4: 0x26040420  addiu       $a0, $s0, 0x420
    ctx->pc = 0x1c6af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1056));
    // 0x1c6af8: 0xc0705bc  jal         func_1C16F0
    ctx->pc = 0x1C6AF8u;
    SET_GPR_U32(ctx, 31, 0x1C6B00u);
    ctx->pc = 0x1C6AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AF8u;
    // 0x1c6afc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C16F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C16F0u, 0x1C6AF8u, 0x1C6B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B00u;
label_1c6b00:
    // 0x1c6b00: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x1c6b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1c6b04: 0xc073aac  jal         func_1CEAB0
    ctx->pc = 0x1C6B04u;
    SET_GPR_U32(ctx, 31, 0x1C6B0Cu);
    ctx->pc = 0x1C6B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B04u;
    // 0x1c6b08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEAB0u, 0x1C6B04u, 0x1C6B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B0Cu;
label_1c6b0c:
    // 0x1c6b0c: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1c6b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1c6b10: 0xc074fde  jal         func_1D3F78
    ctx->pc = 0x1C6B10u;
    SET_GPR_U32(ctx, 31, 0x1C6B18u);
    ctx->pc = 0x1C6B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B10u;
    // 0x1c6b14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3F78u, 0x1C6B10u, 0x1C6B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B18u;
label_1c6b18:
    // 0x1c6b18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b1c: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x1C6B1Cu;
    SET_GPR_U32(ctx, 31, 0x1C6B24u);
    ctx->pc = 0x1C6B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B1Cu;
    // 0x1c6b20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1C6B1Cu, 0x1C6B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B24u;
label_1c6b24:
    // 0x1c6b24: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c6b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6b28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c6b28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6b2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6b30: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B30u;
        // 0x1c6b34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6B38u;
}
