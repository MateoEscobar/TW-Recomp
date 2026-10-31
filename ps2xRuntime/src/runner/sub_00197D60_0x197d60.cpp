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

// Function: sub_00197D60
// Address: 0x197d60 - 0x197d98
void sub_00197D60_0x197d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197D60_0x197d60");
#endif

    switch (ctx->pc) {
        case 0x197d60u: goto label_197d60;
        case 0x197d64u: goto label_197d64;
        case 0x197d68u: goto label_197d68;
        case 0x197d6cu: goto label_197d6c;
        case 0x197d70u: goto label_197d70;
        case 0x197d74u: goto label_197d74;
        case 0x197d78u: goto label_197d78;
        case 0x197d7cu: goto label_197d7c;
        case 0x197d80u: goto label_197d80;
        case 0x197d84u: goto label_197d84;
        case 0x197d88u: goto label_197d88;
        case 0x197d8cu: goto label_197d8c;
        case 0x197d90u: goto label_197d90;
        case 0x197d94u: goto label_197d94;
        default: break;
    }

    ctx->pc = 0x197d60u;

label_197d60:
    // 0x197d60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x197d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_197d64:
    // 0x197d64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x197d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_197d68:
    // 0x197d68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x197d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_197d6c:
    // 0x197d6c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x197d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_197d70:
    // 0x197d70: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x197d70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_197d74:
    // 0x197d74: 0x84e20050  lh          $v0, 0x50($a3)
    ctx->pc = 0x197d74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
label_197d78:
    // 0x197d78: 0x8ce30054  lw          $v1, 0x54($a3)
    ctx->pc = 0x197d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
label_197d7c:
    // 0x197d7c: 0x60f809  jalr        $v1
label_197d80:
    if (ctx->pc == 0x197D80u) {
        ctx->pc = 0x197D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D7Cu;
        // 0x197d80: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197D84u;
        goto label_197d84;
    }
    ctx->pc = 0x197D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x197D84u);
        ctx->pc = 0x197D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D7Cu;
        // 0x197d80: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197D7Cu, 0x197D84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197D84u;
label_197d84:
    // 0x197d84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x197d84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_197d88:
    // 0x197d88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x197d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_197d8c:
    // 0x197d8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x197d8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_197d90:
    // 0x197d90: 0x3e00008  jr          $ra
label_197d94:
    if (ctx->pc == 0x197D94u) {
        ctx->pc = 0x197D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D90u;
        // 0x197d94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197D98u;
        goto label_fallthrough_0x197d90;
    }
    ctx->pc = 0x197D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D90u;
        // 0x197d94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x197d90:
    ctx->pc = 0x197D98u;
}
