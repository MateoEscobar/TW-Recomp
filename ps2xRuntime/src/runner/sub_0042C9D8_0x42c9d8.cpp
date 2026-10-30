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

// Function: sub_0042C9D8
// Address: 0x42c9d8 - 0x42ca40
void sub_0042C9D8_0x42c9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042C9D8_0x42c9d8");
#endif

    switch (ctx->pc) {
        case 0x42ca14u: goto label_42ca14;
        default: break;
    }

    ctx->pc = 0x42c9d8u;

    // 0x42c9d8: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x42c9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x42c9dc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42c9dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x42c9e0: 0x8c62f2c0  lw          $v0, -0xD40($v1)
    ctx->pc = 0x42c9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6FF2C0u));
    // 0x42c9e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x42c9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x42c9e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x42c9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x42c9ec: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x42C9ECu;
    {
        const bool branch_taken_0x42c9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C9ECu;
        // 0x42c9f0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c9ec) {
            ctx->pc = 0x42CA24u;
            goto label_42ca24;
        }
    }
    ctx->pc = 0x42C9F4u;
    // 0x42c9f4: 0x3c110070  lui         $s1, 0x70
    ctx->pc = 0x42c9f4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
    // 0x42c9f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42c9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42c9fc: 0x2630f2b0  addiu       $s0, $s1, -0xD50
    ctx->pc = 0x42c9fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963888));
    // 0x42ca00: 0xac62f2c0  sw          $v0, -0xD40($v1)
    ctx->pc = 0x42ca00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963904), GPR_U32(ctx, 2));
    // 0x42ca04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42ca04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ca08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42ca08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ca0c: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x42CA0Cu;
    SET_GPR_U32(ctx, 31, 0x42CA14u);
    ctx->pc = 0x42CA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42CA0Cu;
    // 0x42ca10: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x42CA0Cu, 0x42CA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42CA14u;
label_42ca14:
    // 0x42ca14: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x42ca14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x42ca18: 0x2463f2c8  addiu       $v1, $v1, -0xD38
    ctx->pc = 0x42ca18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963912));
    // 0x42ca1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x42CA1Cu;
    {
        const bool branch_taken_0x42ca1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CA1Cu;
        // 0x42ca20: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ca1c) {
            ctx->pc = 0x42CA28u;
            goto label_42ca28;
        }
    }
    ctx->pc = 0x42CA24u;
label_42ca24:
    // 0x42ca24: 0x3c110070  lui         $s1, 0x70
    ctx->pc = 0x42ca24u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
label_42ca28:
    // 0x42ca28: 0x2622f2b0  addiu       $v0, $s1, -0xD50
    ctx->pc = 0x42ca28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963888));
    // 0x42ca2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42ca2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42ca30: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x42ca30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42ca34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x42ca34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42ca38: 0x3e00008  jr          $ra
    ctx->pc = 0x42CA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CA38u;
        // 0x42ca3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42CA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42CA40u;
}
