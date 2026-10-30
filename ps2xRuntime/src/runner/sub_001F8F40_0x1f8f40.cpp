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

// Function: sub_001F8F40
// Address: 0x1f8f40 - 0x1f8f98
void sub_001F8F40_0x1f8f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8F40_0x1f8f40");
#endif

    switch (ctx->pc) {
        case 0x1f8f40u: goto label_1f8f40;
        case 0x1f8f44u: goto label_1f8f44;
        case 0x1f8f48u: goto label_1f8f48;
        case 0x1f8f4cu: goto label_1f8f4c;
        case 0x1f8f50u: goto label_1f8f50;
        case 0x1f8f54u: goto label_1f8f54;
        case 0x1f8f58u: goto label_1f8f58;
        case 0x1f8f5cu: goto label_1f8f5c;
        case 0x1f8f60u: goto label_1f8f60;
        case 0x1f8f64u: goto label_1f8f64;
        case 0x1f8f68u: goto label_1f8f68;
        case 0x1f8f6cu: goto label_1f8f6c;
        case 0x1f8f70u: goto label_1f8f70;
        case 0x1f8f74u: goto label_1f8f74;
        case 0x1f8f78u: goto label_1f8f78;
        case 0x1f8f7cu: goto label_1f8f7c;
        case 0x1f8f80u: goto label_1f8f80;
        case 0x1f8f84u: goto label_1f8f84;
        case 0x1f8f88u: goto label_1f8f88;
        case 0x1f8f8cu: goto label_1f8f8c;
        case 0x1f8f90u: goto label_1f8f90;
        case 0x1f8f94u: goto label_1f8f94;
        default: break;
    }

    ctx->pc = 0x1f8f40u;

label_1f8f40:
    // 0x1f8f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f8f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f8f44:
    // 0x1f8f44: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f8f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1f8f48:
    // 0x1f8f48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f8f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1f8f4c:
    // 0x1f8f4c: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x1f8f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_1f8f50:
    // 0x1f8f50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f8f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f8f54:
    // 0x1f8f54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f8f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f8f58:
    // 0x1f8f58: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x1f8f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_1f8f5c:
    // 0x1f8f5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f8f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f8f60:
    // 0x1f8f60: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1f8f60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1f8f64:
    // 0x1f8f64: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x1f8f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1f8f68:
    // 0x1f8f68: 0xa0f809  jalr        $a1
label_1f8f6c:
    if (ctx->pc == 0x1F8F6Cu) {
        ctx->pc = 0x1F8F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F68u;
        // 0x1f8f6c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8F70u;
        goto label_1f8f70;
    }
    ctx->pc = 0x1F8F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1F8F70u);
        ctx->pc = 0x1F8F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F68u;
        // 0x1f8f6c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8F68u, 0x1F8F70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F8F70u;
label_1f8f70:
    // 0x1f8f70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f8f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f8f74:
    // 0x1f8f74: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f8f74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f8f78:
    // 0x1f8f78: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f8f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f8f7c:
    // 0x1f8f7c: 0x60f809  jalr        $v1
label_1f8f80:
    if (ctx->pc == 0x1F8F80u) {
        ctx->pc = 0x1F8F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F7Cu;
        // 0x1f8f80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8F84u;
        goto label_1f8f84;
    }
    ctx->pc = 0x1F8F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F8F84u);
        ctx->pc = 0x1F8F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F7Cu;
        // 0x1f8f80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8F7Cu, 0x1F8F84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F8F84u;
label_1f8f84:
    // 0x1f8f84: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x1f8f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_1f8f88:
    // 0x1f8f88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f8f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f8f8c:
    // 0x1f8f8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f8f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f8f90:
    // 0x1f8f90: 0x3e00008  jr          $ra
label_1f8f94:
    if (ctx->pc == 0x1F8F94u) {
        ctx->pc = 0x1F8F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F90u;
        // 0x1f8f94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8F98u;
        goto label_fallthrough_0x1f8f90;
    }
    ctx->pc = 0x1F8F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F90u;
        // 0x1f8f94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f8f90:
    ctx->pc = 0x1F8F98u;
}
