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

// Function: sub_00253ED0
// Address: 0x253ed0 - 0x253f28
void sub_00253ED0_0x253ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253ED0_0x253ed0");
#endif

    switch (ctx->pc) {
        case 0x253f1cu: goto label_253f1c;
        default: break;
    }

    ctx->pc = 0x253ed0u;

    // 0x253ed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x253ed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x253ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x253ed8: 0x8c8600d4  lw          $a2, 0xD4($a0)
    ctx->pc = 0x253ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x253edc: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x253edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x253ee0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x253ee0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x253ee4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x253EE4u;
    {
        const bool branch_taken_0x253ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253EE4u;
        // 0x253ee8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253ee4) {
            ctx->pc = 0x253EF8u;
            goto label_253ef8;
        }
    }
    ctx->pc = 0x253EECu;
    // 0x253eec: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x253eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x253ef0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x253EF0u;
    {
        const bool branch_taken_0x253ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253EF0u;
        // 0x253ef4: 0xacc2000c  sw          $v0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253ef0) {
            ctx->pc = 0x253F08u;
            goto label_253f08;
        }
    }
    ctx->pc = 0x253EF8u;
label_253ef8:
    // 0x253ef8: 0x90c20012  lbu         $v0, 0x12($a2)
    ctx->pc = 0x253ef8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x253efc: 0x90c30013  lbu         $v1, 0x13($a2)
    ctx->pc = 0x253efcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 19)));
    // 0x253f00: 0xa0c20011  sb          $v0, 0x11($a2)
    ctx->pc = 0x253f00u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x253f04: 0xa0c30012  sb          $v1, 0x12($a2)
    ctx->pc = 0x253f04u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 18), (uint8_t)GPR_U32(ctx, 3));
label_253f08:
    // 0x253f08: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x253f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x253f0c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x253f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253f10: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x253f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x253f14: 0xc094da2  jal         func_253688
    ctx->pc = 0x253F14u;
    SET_GPR_U32(ctx, 31, 0x253F1Cu);
    ctx->pc = 0x253F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253F14u;
    // 0x253f18: 0xa0470010  sb          $a3, 0x10($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253688u, 0x253F14u, 0x253F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253F1Cu;
label_253f1c:
    // 0x253f1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x253f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253f20: 0x3e00008  jr          $ra
    ctx->pc = 0x253F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F20u;
        // 0x253f24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253F28u;
}
