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

// Function: sub_0014D9E8
// Address: 0x14d9e8 - 0x14da38
void sub_0014D9E8_0x14d9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D9E8_0x14d9e8");
#endif

    switch (ctx->pc) {
        case 0x14da24u: goto label_14da24;
        default: break;
    }

    ctx->pc = 0x14d9e8u;

    // 0x14d9e8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x14d9e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d9ec: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14d9ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14d9f0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x14d9f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d9f4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x14d9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x14d9f8: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x14d9f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
    // 0x14d9fc: 0x3c0b0015  lui         $t3, 0x15
    ctx->pc = 0x14d9fcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)21 << 16));
    // 0x14da00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14da00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14da04: 0x24844180  addiu       $a0, $a0, 0x4180
    ctx->pc = 0x14da04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16768));
    // 0x14da08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14da08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14da0c: 0x25292dc0  addiu       $t1, $t1, 0x2DC0
    ctx->pc = 0x14da0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11712));
    // 0x14da10: 0x256bd9c8  addiu       $t3, $t3, -0x2638
    ctx->pc = 0x14da10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294957512));
    // 0x14da14: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x14da14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x14da18: 0x24081000  addiu       $t0, $zero, 0x1000
    ctx->pc = 0x14da18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x14da1c: 0xc11024e  jal         func_440938
    ctx->pc = 0x14DA1Cu;
    SET_GPR_U32(ctx, 31, 0x14DA24u);
    ctx->pc = 0x14DA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DA1Cu;
    // 0x14da20: 0x240a0800  addiu       $t2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x440938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x440938u, 0x14DA1Cu, 0x14DA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DA24u;
label_14da24:
    // 0x14da24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14da24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14da28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14da28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14da2c: 0x3e00008  jr          $ra
    ctx->pc = 0x14DA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA2Cu;
        // 0x14da30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DA2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DA34u;
    // 0x14da34: 0x0  nop
    ctx->pc = 0x14da34u;
    // NOP
    ctx->pc = 0x14da38u;
}
