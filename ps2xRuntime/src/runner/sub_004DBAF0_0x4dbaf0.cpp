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

// Function: sub_004DBAF0
// Address: 0x4dbaf0 - 0x4dbb68
void sub_004DBAF0_0x4dbaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DBAF0_0x4dbaf0");
#endif

    ctx->pc = 0x4dbaf0u;

    // 0x4dbaf0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4dbaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4dbaf4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4dbaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4dbaf8: 0x3e00008  jr          $ra
    ctx->pc = 0x4DBAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DBAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBAF8u;
        // 0x4dbafc: 0x8c820340  lw          $v0, 0x340($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 832)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DBAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DBB00u;
    // 0x4dbb00: 0x0  nop
    ctx->pc = 0x4dbb00u;
    // NOP
    // 0x4dbb04: 0x0  nop
    ctx->pc = 0x4dbb04u;
    // NOP
    // 0x4dbb08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4dbb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4dbb0c: 0x0  nop
    ctx->pc = 0x4dbb0cu;
    // NOP
    // 0x4dbb10: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4dbb10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x4dbb14: 0x0  nop
    ctx->pc = 0x4dbb14u;
    // NOP
    // 0x4dbb18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4dbb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4dbb1c: 0x0  nop
    ctx->pc = 0x4dbb1cu;
    // NOP
    // 0x4dbb20: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4dbb20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x4dbb24: 0x0  nop
    ctx->pc = 0x4dbb24u;
    // NOP
    // 0x4dbb28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4dbb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4dbb2c: 0x0  nop
    ctx->pc = 0x4dbb2cu;
    // NOP
    // 0x4dbb30: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4dbb30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x4dbb34: 0x0  nop
    ctx->pc = 0x4dbb34u;
    // NOP
    // 0x4dbb38: 0xe4800398  swc1        $f0, 0x398($a0)
    ctx->pc = 0x4dbb38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 920), bits); }
    // 0x4dbb3c: 0x0  nop
    ctx->pc = 0x4dbb3cu;
    // NOP
    // 0x4dbb40: 0x7c820330  sq          $v0, 0x330($a0)
    ctx->pc = 0x4dbb40u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 816), GPR_VEC(ctx, 2));
    // 0x4dbb44: 0x0  nop
    ctx->pc = 0x4dbb44u;
    // NOP
    // 0x4dbb48: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4dbb48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4dbb4c: 0x0  nop
    ctx->pc = 0x4dbb4cu;
    // NOP
    // 0x4dbb50: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4dbb50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4dbb54: 0x0  nop
    ctx->pc = 0x4dbb54u;
    // NOP
    // 0x4dbb58: 0xac8003e0  sw          $zero, 0x3E0($a0)
    ctx->pc = 0x4dbb58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 992), GPR_U32(ctx, 0));
    // 0x4dbb5c: 0x0  nop
    ctx->pc = 0x4dbb5cu;
    // NOP
    // 0x4dbb60: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x4dbb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4dbb64: 0x0  nop
    ctx->pc = 0x4dbb64u;
    // NOP
    ctx->pc = 0x4dbb68u;
}
