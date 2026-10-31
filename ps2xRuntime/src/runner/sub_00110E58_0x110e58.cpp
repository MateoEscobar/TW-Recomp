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

// Function: sub_00110E58
// Address: 0x110e58 - 0x110e98
void sub_00110E58_0x110e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110E58_0x110e58");
#endif

    switch (ctx->pc) {
        case 0x110e88u: goto label_110e88;
        default: break;
    }

    ctx->pc = 0x110e58u;

    // 0x110e58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x110e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x110e5c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x110e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x110e60: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x110e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x110e64: 0x34424280  ori         $v0, $v0, 0x4280
    ctx->pc = 0x110e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17024);
    // 0x110e68: 0x93ac0038  lbu         $t4, 0x38($sp)
    ctx->pc = 0x110e68u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x110e6c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x110e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x110e70: 0x83ad0040  lb          $t5, 0x40($sp)
    ctx->pc = 0x110e70u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x110e74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x110e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x110e78: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x110e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x110e7c: 0xafac0008  sw          $t4, 0x8($sp)
    ctx->pc = 0x110e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 12));
    // 0x110e80: 0xc0433b4  jal         func_10CED0
    ctx->pc = 0x110E80u;
    SET_GPR_U32(ctx, 31, 0x110E88u);
    ctx->pc = 0x110E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110E80u;
    // 0x110e84: 0xafad0010  sw          $t5, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CED0u, 0x110E80u, 0x110E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E88u;
label_110e88:
    // 0x110e88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x110e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x110E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E8Cu;
        // 0x110e90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110E94u;
    // 0x110e94: 0x0  nop
    ctx->pc = 0x110e94u;
    // NOP
    ctx->pc = 0x110e98u;
}
