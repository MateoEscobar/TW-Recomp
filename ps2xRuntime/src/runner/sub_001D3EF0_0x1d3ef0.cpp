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

// Function: sub_001D3EF0
// Address: 0x1d3ef0 - 0x1d3f78
void sub_001D3EF0_0x1d3ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3EF0_0x1d3ef0");
#endif

    switch (ctx->pc) {
        case 0x1d3f04u: goto label_1d3f04;
        default: break;
    }

    ctx->pc = 0x1d3ef0u;

    // 0x1d3ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d3ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d3ef4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d3ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d3ef8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d3ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d3efc: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1D3EFCu;
    SET_GPR_U32(ctx, 31, 0x1D3F04u);
    ctx->pc = 0x1D3F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3EFCu;
    // 0x1d3f00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1D3EFCu, 0x1D3F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3F04u;
label_1d3f04:
    // 0x1d3f04: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1d3f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1d3f08: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1d3f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
    // 0x1d3f0c: 0x24638778  addiu       $v1, $v1, -0x7888
    ctx->pc = 0x1d3f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936440));
    // 0x1d3f10: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1d3f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1d3f14: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d3f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1d3f18: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x1d3f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1d3f1c: 0x24848510  addiu       $a0, $a0, -0x7AF0
    ctx->pc = 0x1d3f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935824));
    // 0x1d3f20: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1d3f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x1d3f24: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x1d3f24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
    // 0x1d3f28: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x1d3f28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x1d3f2c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1d3f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1d3f30: 0x24a5b740  addiu       $a1, $a1, -0x48C0
    ctx->pc = 0x1d3f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948672));
    // 0x1d3f34: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1d3f34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1d3f38: 0x24c6b768  addiu       $a2, $a2, -0x4898
    ctx->pc = 0x1d3f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948712));
    // 0x1d3f3c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1d3f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1d3f40: 0x26030070  addiu       $v1, $s0, 0x70
    ctx->pc = 0x1d3f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1d3f44: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1d3f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1d3f48: 0xae05006c  sw          $a1, 0x6C($s0)
    ctx->pc = 0x1d3f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 5));
    // 0x1d3f4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d3f4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f50: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x1d3f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x1d3f54: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1d3f54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1d3f58: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1d3f58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1d3f5c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1d3f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1d3f60: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x1d3f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x1d3f64: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d3f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3f68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d3f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F6Cu;
        // 0x1d3f70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3F74u;
    // 0x1d3f74: 0x0  nop
    ctx->pc = 0x1d3f74u;
    // NOP
    ctx->pc = 0x1d3f78u;
}
