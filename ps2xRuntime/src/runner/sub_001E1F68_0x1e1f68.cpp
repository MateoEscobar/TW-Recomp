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

// Function: sub_001E1F68
// Address: 0x1e1f68 - 0x1e1fa8
void sub_001E1F68_0x1e1f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1F68_0x1e1f68");
#endif

    switch (ctx->pc) {
        case 0x1e1f68u: goto label_1e1f68;
        case 0x1e1f6cu: goto label_1e1f6c;
        case 0x1e1f70u: goto label_1e1f70;
        case 0x1e1f74u: goto label_1e1f74;
        case 0x1e1f78u: goto label_1e1f78;
        case 0x1e1f7cu: goto label_1e1f7c;
        case 0x1e1f80u: goto label_1e1f80;
        case 0x1e1f84u: goto label_1e1f84;
        case 0x1e1f88u: goto label_1e1f88;
        case 0x1e1f8cu: goto label_1e1f8c;
        case 0x1e1f90u: goto label_1e1f90;
        case 0x1e1f94u: goto label_1e1f94;
        case 0x1e1f98u: goto label_1e1f98;
        case 0x1e1f9cu: goto label_1e1f9c;
        case 0x1e1fa0u: goto label_1e1fa0;
        case 0x1e1fa4u: goto label_1e1fa4;
        default: break;
    }

    ctx->pc = 0x1e1f68u;

label_1e1f68:
    // 0x1e1f68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e1f6c:
    // 0x1e1f6c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1e1f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1e1f70:
    // 0x1e1f70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e1f74:
    // 0x1e1f74: 0x8c820098  lw          $v0, 0x98($a0)
    ctx->pc = 0x1e1f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
label_1e1f78:
    // 0x1e1f78: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1e1f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1e1f7c:
    // 0x1e1f7c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e1f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e1f80:
    // 0x1e1f80: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e1f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e1f84:
    // 0x1e1f84: 0x84640110  lh          $a0, 0x110($v1)
    ctx->pc = 0x1e1f84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 272)));
label_1e1f88:
    // 0x1e1f88: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x1e1f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
label_1e1f8c:
    // 0x1e1f8c: 0x40f809  jalr        $v0
label_1e1f90:
    if (ctx->pc == 0x1E1F90u) {
        ctx->pc = 0x1E1F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F8Cu;
        // 0x1e1f90: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F94u;
        goto label_1e1f94;
    }
    ctx->pc = 0x1E1F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E1F94u);
        ctx->pc = 0x1E1F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F8Cu;
        // 0x1e1f90: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1F8Cu, 0x1E1F94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1F94u;
label_1e1f94:
    // 0x1e1f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1f98:
    // 0x1e1f98: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e1f98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e1f9c:
    // 0x1e1f9c: 0x3e00008  jr          $ra
label_1e1fa0:
    if (ctx->pc == 0x1E1FA0u) {
        ctx->pc = 0x1E1FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F9Cu;
        // 0x1e1fa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1FA4u;
        goto label_1e1fa4;
    }
    ctx->pc = 0x1E1F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F9Cu;
        // 0x1e1fa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1FA4u;
label_1e1fa4:
    // 0x1e1fa4: 0x0  nop
    ctx->pc = 0x1e1fa4u;
    // NOP
    ctx->pc = 0x1e1fa8u;
}
