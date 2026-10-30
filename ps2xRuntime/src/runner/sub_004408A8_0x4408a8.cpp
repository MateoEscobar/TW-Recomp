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

// Function: sub_004408A8
// Address: 0x4408a8 - 0x440938
void sub_004408A8_0x4408a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004408A8_0x4408a8");
#endif

    ctx->pc = 0x4408a8u;

    // 0x4408a8: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x4408a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x4408ac: 0x8ca60040  lw          $a2, 0x40($a1)
    ctx->pc = 0x4408acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x4408b0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4408b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4408b4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4408B4u;
    {
        const bool branch_taken_0x4408b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4408b4) {
            ctx->pc = 0x4408B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4408B4u;
            // 0x4408b8: 0x8cc20010  lw          $v0, 0x10($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4408C4u;
            goto label_4408c4;
        }
    }
    ctx->pc = 0x4408BCu;
    // 0x4408bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4408BCu;
    {
        const bool branch_taken_0x4408bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4408C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4408BCu;
        // 0x4408c0: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4408bc) {
            ctx->pc = 0x4408C8u;
            goto label_4408c8;
        }
    }
    ctx->pc = 0x4408C4u;
label_4408c4:
    // 0x4408c4: 0xac45003c  sw          $a1, 0x3C($v0)
    ctx->pc = 0x4408c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 5));
label_4408c8:
    // 0x4408c8: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x4408c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
    // 0x4408cc: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x4408ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4408d0: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4408d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x4408d4: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x4408d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x4408d8: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x4408d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x4408dc: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x4408dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x4408e0: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x4408e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x4408e4: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x4408e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x4408e8: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x4408e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x4408ec: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x4408ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x4408f0: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x4408f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x4408f4: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x4408f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x4408f8: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x4408f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x4408fc: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x4408fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x440900: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x440900u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x440904: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x440904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x440908: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x440908u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x44090c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x44090cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x440910: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x440910u;
    {
        const bool branch_taken_0x440910 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x440910) {
            ctx->pc = 0x44092Cu;
            goto label_44092c;
        }
    }
    ctx->pc = 0x440918u;
    // 0x440918: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x440918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x44091c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x44091Cu;
    {
        const bool branch_taken_0x44091c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44091c) {
            ctx->pc = 0x44092Cu;
            goto label_44092c;
        }
    }
    ctx->pc = 0x440924u;
    // 0x440924: 0x810f790  j           func_43DE40
    ctx->pc = 0x440924u;
    ctx->pc = 0x43DE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43DE40u, 0x440924u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x44092Cu;
label_44092c:
    // 0x44092c: 0x3e00008  jr          $ra
    ctx->pc = 0x44092Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44092Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x440934u;
    // 0x440934: 0x0  nop
    ctx->pc = 0x440934u;
    // NOP
    ctx->pc = 0x440938u;
}
