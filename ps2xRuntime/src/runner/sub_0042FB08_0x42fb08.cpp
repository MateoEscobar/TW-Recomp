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

// Function: sub_0042FB08
// Address: 0x42fb08 - 0x42fb58
void sub_0042FB08_0x42fb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042FB08_0x42fb08");
#endif

    switch (ctx->pc) {
        case 0x42fb48u: goto label_42fb48;
        default: break;
    }

    ctx->pc = 0x42fb08u;

    // 0x42fb08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x42fb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x42fb0c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x42fb0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42fb10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42fb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x42fb14: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x42FB14u;
    {
        const bool branch_taken_0x42fb14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42FB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FB14u;
        // 0x42fb18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fb14) {
            ctx->pc = 0x42FB48u;
            goto label_42fb48;
        }
    }
    ctx->pc = 0x42FB1Cu;
    // 0x42fb1c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x42fb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x42fb20: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x42fb20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x42fb24: 0x3c080043  lui         $t0, 0x43
    ctx->pc = 0x42fb24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)67 << 16));
    // 0x42fb28: 0x24a50328  addiu       $a1, $a1, 0x328
    ctx->pc = 0x42fb28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 808));
    // 0x42fb2c: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x42fb2cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42fb30: 0x2508f5d8  addiu       $t0, $t0, -0xA28
    ctx->pc = 0x42fb30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964696));
    // 0x42fb34: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x42fb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x42fb38: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x42fb38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42fb3c: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x42fb3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x42fb40: 0xc10bf08  jal         func_42FC20
    ctx->pc = 0x42FB40u;
    SET_GPR_U32(ctx, 31, 0x42FB48u);
    ctx->pc = 0x42FB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42FB40u;
    // 0x42fb44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42FC20u, 0x42FB40u, 0x42FB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42FB48u;
label_42fb48:
    // 0x42fb48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42fb48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42fb4c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x42fb4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x42fb50: 0x3e00008  jr          $ra
    ctx->pc = 0x42FB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FB50u;
        // 0x42fb54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42FB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42FB58u;
}
