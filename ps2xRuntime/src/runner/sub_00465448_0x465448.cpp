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

// Function: sub_00465448
// Address: 0x465448 - 0x4654a0
void sub_00465448_0x465448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465448_0x465448");
#endif

    switch (ctx->pc) {
        case 0x465460u: goto label_465460;
        default: break;
    }

    ctx->pc = 0x465448u;

    // 0x465448: 0x8f828490  lw          $v0, -0x7B70($gp)
    ctx->pc = 0x465448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x46544c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x46544cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x465450: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x465450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465454: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x465454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x465458: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x465458u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46545c: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x46545cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_465460:
    // 0x465460: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x465460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x465464: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x465464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x465468: 0x54670003  bnel        $v1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x465468u;
    {
        const bool branch_taken_0x465468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x465468) {
            ctx->pc = 0x46546Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x465468u;
            // 0x46546c: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x465478u;
            goto label_465478;
        }
    }
    ctx->pc = 0x465470u;
    // 0x465470: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x465470u;
    {
        const bool branch_taken_0x465470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x465474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465470u;
        // 0x465474: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465470) {
            ctx->pc = 0x46548Cu;
            goto label_46548c;
        }
    }
    ctx->pc = 0x465478u;
label_465478:
    // 0x465478: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x465478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x46547c: 0x2ca30002  sltiu       $v1, $a1, 0x2
    ctx->pc = 0x46547cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x465480: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x465480u;
    {
        const bool branch_taken_0x465480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x465484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465480u;
        // 0x465484: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465480) {
            ctx->pc = 0x465460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_465460;
        }
    }
    ctx->pc = 0x465488u;
    // 0x465488: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x465488u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46548c:
    // 0x46548c: 0x46006007  neg.s       $f0, $f12
    ctx->pc = 0x46548cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[12]);
    // 0x465490: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x465490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465494: 0x3e00008  jr          $ra
    ctx->pc = 0x465494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x465498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465494u;
        // 0x465498: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46549Cu;
    // 0x46549c: 0x0  nop
    ctx->pc = 0x46549cu;
    // NOP
    ctx->pc = 0x4654a0u;
}
