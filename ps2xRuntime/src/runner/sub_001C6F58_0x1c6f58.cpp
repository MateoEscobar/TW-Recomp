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

// Function: sub_001C6F58
// Address: 0x1c6f58 - 0x1c6fa8
void sub_001C6F58_0x1c6f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6F58_0x1c6f58");
#endif

    switch (ctx->pc) {
        case 0x1c6f58u: goto label_1c6f58;
        case 0x1c6f5cu: goto label_1c6f5c;
        case 0x1c6f60u: goto label_1c6f60;
        case 0x1c6f64u: goto label_1c6f64;
        case 0x1c6f68u: goto label_1c6f68;
        case 0x1c6f6cu: goto label_1c6f6c;
        case 0x1c6f70u: goto label_1c6f70;
        case 0x1c6f74u: goto label_1c6f74;
        case 0x1c6f78u: goto label_1c6f78;
        case 0x1c6f7cu: goto label_1c6f7c;
        case 0x1c6f80u: goto label_1c6f80;
        case 0x1c6f84u: goto label_1c6f84;
        case 0x1c6f88u: goto label_1c6f88;
        case 0x1c6f8cu: goto label_1c6f8c;
        case 0x1c6f90u: goto label_1c6f90;
        case 0x1c6f94u: goto label_1c6f94;
        case 0x1c6f98u: goto label_1c6f98;
        case 0x1c6f9cu: goto label_1c6f9c;
        case 0x1c6fa0u: goto label_1c6fa0;
        case 0x1c6fa4u: goto label_1c6fa4;
        default: break;
    }

    ctx->pc = 0x1c6f58u;

label_1c6f58:
    // 0x1c6f58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c6f5c:
    // 0x1c6f5c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c6f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1c6f60:
    // 0x1c6f60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c6f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1c6f64:
    // 0x1c6f64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c6f68:
    // 0x1c6f68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c6f6c:
    // 0x1c6f6c: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1c6f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1c6f70:
    // 0x1c6f70: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1c6f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1c6f74:
    // 0x1c6f74: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1c6f74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1c6f78:
    // 0x1c6f78: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1c6f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1c6f7c:
    // 0x1c6f7c: 0x40f809  jalr        $v0
label_1c6f80:
    if (ctx->pc == 0x1C6F80u) {
        ctx->pc = 0x1C6F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F7Cu;
        // 0x1c6f80: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6F84u;
        goto label_1c6f84;
    }
    ctx->pc = 0x1C6F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C6F84u);
        ctx->pc = 0x1C6F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F7Cu;
        // 0x1c6f80: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6F7Cu, 0x1C6F84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C6F84u;
label_1c6f84:
    // 0x1c6f84: 0x8e030508  lw          $v1, 0x508($s0)
    ctx->pc = 0x1c6f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1288)));
label_1c6f88:
    // 0x1c6f88: 0x8e04050c  lw          $a0, 0x50C($s0)
    ctx->pc = 0x1c6f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1292)));
label_1c6f8c:
    // 0x1c6f8c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c6f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c6f90:
    // 0x1c6f90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c6f90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c6f94:
    // 0x1c6f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c6f98:
    // 0x1c6f98: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1c6f98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1c6f9c:
    // 0x1c6f9c: 0x3e00008  jr          $ra
label_1c6fa0:
    if (ctx->pc == 0x1C6FA0u) {
        ctx->pc = 0x1C6FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F9Cu;
        // 0x1c6fa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6FA4u;
        goto label_1c6fa4;
    }
    ctx->pc = 0x1C6F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F9Cu;
        // 0x1c6fa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6FA4u;
label_1c6fa4:
    // 0x1c6fa4: 0x0  nop
    ctx->pc = 0x1c6fa4u;
    // NOP
    ctx->pc = 0x1c6fa8u;
}
