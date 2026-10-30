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

// Function: sub_001C6A20
// Address: 0x1c6a20 - 0x1c6ac0
void sub_001C6A20_0x1c6a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6A20_0x1c6a20");
#endif

    switch (ctx->pc) {
        case 0x1c6a34u: goto label_1c6a34;
        case 0x1c6a84u: goto label_1c6a84;
        case 0x1c6a8cu: goto label_1c6a8c;
        case 0x1c6a94u: goto label_1c6a94;
        default: break;
    }

    ctx->pc = 0x1c6a20u;

    // 0x1c6a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6a24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c6a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c6a28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6a2c: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1C6A2Cu;
    SET_GPR_U32(ctx, 31, 0x1C6A34u);
    ctx->pc = 0x1C6A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A2Cu;
    // 0x1c6a30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1C6A2Cu, 0x1C6A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A34u;
label_1c6a34:
    // 0x1c6a34: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1c6a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1c6a38: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1c6a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
    // 0x1c6a3c: 0x24638778  addiu       $v1, $v1, -0x7888
    ctx->pc = 0x1c6a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936440));
    // 0x1c6a40: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x1c6a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1c6a44: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1c6a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1c6a48: 0x24848510  addiu       $a0, $a0, -0x7AF0
    ctx->pc = 0x1c6a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935824));
    // 0x1c6a4c: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1c6a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1c6a50: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1c6a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1c6a54: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1c6a54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x1c6a58: 0x2463a858  addiu       $v1, $v1, -0x57A8
    ctx->pc = 0x1c6a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944856));
    // 0x1c6a5c: 0x24a5a880  addiu       $a1, $a1, -0x5780
    ctx->pc = 0x1c6a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944896));
    // 0x1c6a60: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x1c6a60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x1c6a64: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1c6a64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1c6a68: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1c6a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1c6a6c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1c6a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1c6a70: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1c6a70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1c6a74: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1c6a74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1c6a78: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x1c6a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
    // 0x1c6a7c: 0xc074fbc  jal         func_1D3EF0
    ctx->pc = 0x1C6A7Cu;
    SET_GPR_U32(ctx, 31, 0x1C6A84u);
    ctx->pc = 0x1C6A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A7Cu;
    // 0x1c6a80: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3EF0u, 0x1C6A7Cu, 0x1C6A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A84u;
label_1c6a84:
    // 0x1c6a84: 0xc073a9c  jal         func_1CEA70
    ctx->pc = 0x1C6A84u;
    SET_GPR_U32(ctx, 31, 0x1C6A8Cu);
    ctx->pc = 0x1C6A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A84u;
    // 0x1c6a88: 0x26040150  addiu       $a0, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA70u, 0x1C6A84u, 0x1C6A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A8Cu;
label_1c6a8c:
    // 0x1c6a8c: 0xc0705aa  jal         func_1C16A8
    ctx->pc = 0x1C6A8Cu;
    SET_GPR_U32(ctx, 31, 0x1C6A94u);
    ctx->pc = 0x1C6A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A8Cu;
    // 0x1c6a90: 0x26040420  addiu       $a0, $s0, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C16A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C16A8u, 0x1C6A8Cu, 0x1C6A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A94u;
label_1c6a94:
    // 0x1c6a94: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c6a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c6a98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c6a98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a9c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c6a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c6aa0: 0xae000508  sw          $zero, 0x508($s0)
    ctx->pc = 0x1c6aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1288), GPR_U32(ctx, 0));
    // 0x1c6aa4: 0xae030500  sw          $v1, 0x500($s0)
    ctx->pc = 0x1c6aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1280), GPR_U32(ctx, 3));
    // 0x1c6aa8: 0xae00050c  sw          $zero, 0x50C($s0)
    ctx->pc = 0x1c6aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1292), GPR_U32(ctx, 0));
    // 0x1c6aac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c6aacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6ab0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6AB4u;
        // 0x1c6ab8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6ABCu;
    // 0x1c6abc: 0x0  nop
    ctx->pc = 0x1c6abcu;
    // NOP
    ctx->pc = 0x1c6ac0u;
}
