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

// Function: sub_004A9F28
// Address: 0x4a9f28 - 0x4a9f90
void sub_004A9F28_0x4a9f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9F28_0x4a9f28");
#endif

    switch (ctx->pc) {
        case 0x4a9f78u: goto label_4a9f78;
        case 0x4a9f80u: goto label_4a9f80;
        default: break;
    }

    ctx->pc = 0x4a9f28u;

    // 0x4a9f28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a9f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a9f2c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4a9f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4a9f30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4a9f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a9f34: 0x34423c10  ori         $v0, $v0, 0x3C10
    ctx->pc = 0x4a9f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15376);
    // 0x4a9f38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a9f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a9f3c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4a9f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4a9f40: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4a9f40u;
    runtime->Store32(rdram, ctx, 0x10003C10u, GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x4a9f44: 0x34633810  ori         $v1, $v1, 0x3810
    ctx->pc = 0x4a9f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14352);
    // 0x4a9f48: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x4a9f48u;
    runtime->Store32(rdram, ctx, 0x10003810u, GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x4a9f4c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4a9f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4a9f50: 0x34423000  ori         $v0, $v0, 0x3000
    ctx->pc = 0x4a9f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
    // 0x4a9f54: 0x4843e000  cfc2.ni     $v1, $vi28
    ctx->pc = 0x4a9f54u;
    SET_GPR_U32(ctx, 3, ctx->vu0_fbrst);
    // 0x4a9f58: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4a9f58u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x4a9f5c: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x4a9f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x4a9f60: 0x48c3e000  ctc2.ni     $v1, $vi28
    ctx->pc = 0x4a9f60u;
    ctx->vu0_fbrst = GPR_U32(ctx, 3) & 0x00000C0Cu;
    // 0x4a9f64: 0x4842e000  cfc2.ni     $v0, $vi28
    ctx->pc = 0x4a9f64u;
    SET_GPR_U32(ctx, 2, ctx->vu0_fbrst);
    // 0x4a9f68: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4a9f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4a9f6c: 0x48c2e000  ctc2.ni     $v0, $vi28
    ctx->pc = 0x4a9f6cu;
    ctx->vu0_fbrst = GPR_U32(ctx, 2) & 0x00000C0Cu;
    // 0x4a9f70: 0xc10c0e6  jal         func_430398
    ctx->pc = 0x4A9F70u;
    SET_GPR_U32(ctx, 31, 0x4A9F78u);
    ctx->pc = 0x430398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430398u, 0x4A9F70u, 0x4A9F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9F78u;
label_4a9f78:
    // 0x4a9f78: 0xc12add2  jal         func_4AB748
    ctx->pc = 0x4A9F78u;
    SET_GPR_U32(ctx, 31, 0x4A9F80u);
    ctx->pc = 0x4A9F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9F78u;
    // 0x4a9f7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB748u, 0x4A9F78u, 0x4A9F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9F80u;
label_4a9f80:
    // 0x4a9f80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a9f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a9f84: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9F84u;
        // 0x4a9f88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9F8Cu;
    // 0x4a9f8c: 0x0  nop
    ctx->pc = 0x4a9f8cu;
    // NOP
    ctx->pc = 0x4a9f90u;
}
