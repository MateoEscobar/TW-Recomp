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

// Function: sub_00206E60
// Address: 0x206e60 - 0x206eb8
void sub_00206E60_0x206e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206E60_0x206e60");
#endif

    switch (ctx->pc) {
        case 0x206e60u: goto label_206e60;
        case 0x206e64u: goto label_206e64;
        case 0x206e68u: goto label_206e68;
        case 0x206e6cu: goto label_206e6c;
        case 0x206e70u: goto label_206e70;
        case 0x206e74u: goto label_206e74;
        case 0x206e78u: goto label_206e78;
        case 0x206e7cu: goto label_206e7c;
        case 0x206e80u: goto label_206e80;
        case 0x206e84u: goto label_206e84;
        case 0x206e88u: goto label_206e88;
        case 0x206e8cu: goto label_206e8c;
        case 0x206e90u: goto label_206e90;
        case 0x206e94u: goto label_206e94;
        case 0x206e98u: goto label_206e98;
        case 0x206e9cu: goto label_206e9c;
        case 0x206ea0u: goto label_206ea0;
        case 0x206ea4u: goto label_206ea4;
        case 0x206ea8u: goto label_206ea8;
        case 0x206eacu: goto label_206eac;
        case 0x206eb0u: goto label_206eb0;
        case 0x206eb4u: goto label_206eb4;
        default: break;
    }

    ctx->pc = 0x206e60u;

label_206e60:
    // 0x206e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x206e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_206e64:
    // 0x206e64: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x206e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_206e68:
    // 0x206e68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x206e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_206e6c:
    // 0x206e6c: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x206e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_206e70:
    // 0x206e70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_206e74:
    // 0x206e74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x206e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_206e78:
    // 0x206e78: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x206e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_206e7c:
    // 0x206e7c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x206e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_206e80:
    // 0x206e80: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x206e80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_206e84:
    // 0x206e84: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x206e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_206e88:
    // 0x206e88: 0xa0f809  jalr        $a1
label_206e8c:
    if (ctx->pc == 0x206E8Cu) {
        ctx->pc = 0x206E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E88u;
        // 0x206e8c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206E90u;
        goto label_206e90;
    }
    ctx->pc = 0x206E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x206E90u);
        ctx->pc = 0x206E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E88u;
        // 0x206e8c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206E88u, 0x206E90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206E90u;
label_206e90:
    // 0x206e90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x206e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_206e94:
    // 0x206e94: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x206e94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_206e98:
    // 0x206e98: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x206e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_206e9c:
    // 0x206e9c: 0x60f809  jalr        $v1
label_206ea0:
    if (ctx->pc == 0x206EA0u) {
        ctx->pc = 0x206EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E9Cu;
        // 0x206ea0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206EA4u;
        goto label_206ea4;
    }
    ctx->pc = 0x206E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x206EA4u);
        ctx->pc = 0x206EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E9Cu;
        // 0x206ea0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206E9Cu, 0x206EA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206EA4u;
label_206ea4:
    // 0x206ea4: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x206ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_206ea8:
    // 0x206ea8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x206ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_206eac:
    // 0x206eac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_206eb0:
    // 0x206eb0: 0x3e00008  jr          $ra
label_206eb4:
    if (ctx->pc == 0x206EB4u) {
        ctx->pc = 0x206EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206EB0u;
        // 0x206eb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206EB8u;
        goto label_fallthrough_0x206eb0;
    }
    ctx->pc = 0x206EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206EB0u;
        // 0x206eb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x206eb0:
    ctx->pc = 0x206EB8u;
}
