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

// Function: sub_004F6038
// Address: 0x4f6038 - 0x4f6098
void sub_004F6038_0x4f6038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F6038_0x4f6038");
#endif

    switch (ctx->pc) {
        case 0x4f6038u: goto label_4f6038;
        case 0x4f603cu: goto label_4f603c;
        case 0x4f6040u: goto label_4f6040;
        case 0x4f6044u: goto label_4f6044;
        case 0x4f6048u: goto label_4f6048;
        case 0x4f604cu: goto label_4f604c;
        case 0x4f6050u: goto label_4f6050;
        case 0x4f6054u: goto label_4f6054;
        case 0x4f6058u: goto label_4f6058;
        case 0x4f605cu: goto label_4f605c;
        case 0x4f6060u: goto label_4f6060;
        case 0x4f6064u: goto label_4f6064;
        case 0x4f6068u: goto label_4f6068;
        case 0x4f606cu: goto label_4f606c;
        case 0x4f6070u: goto label_4f6070;
        case 0x4f6074u: goto label_4f6074;
        case 0x4f6078u: goto label_4f6078;
        case 0x4f607cu: goto label_4f607c;
        case 0x4f6080u: goto label_4f6080;
        case 0x4f6084u: goto label_4f6084;
        case 0x4f6088u: goto label_4f6088;
        case 0x4f608cu: goto label_4f608c;
        case 0x4f6090u: goto label_4f6090;
        case 0x4f6094u: goto label_4f6094;
        default: break;
    }

    ctx->pc = 0x4f6038u;

label_4f6038:
    // 0x4f6038: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f6038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4f603c:
    // 0x4f603c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4f603cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4f6040:
    // 0x4f6040: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f6040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f6044:
    // 0x4f6044: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4f6044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f6048:
    // 0x4f6048: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f6048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f604c:
    // 0x4f604c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_4f6050:
    if (ctx->pc == 0x4F6050u) {
        ctx->pc = 0x4F6050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F604Cu;
        // 0x4f6050: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F6054u;
        goto label_4f6054;
    }
    ctx->pc = 0x4F604Cu;
    {
        const bool branch_taken_0x4f604c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F604Cu;
        // 0x4f6050: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f604c) {
            ctx->pc = 0x4F6084u;
            goto label_4f6084;
        }
    }
    ctx->pc = 0x4F6054u;
label_4f6054:
    // 0x4f6054: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4f6054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f6058:
    // 0x4f6058: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4f6058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f605c:
    // 0x4f605c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4f605cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4f6060:
    // 0x4f6060: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4f6060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4f6064:
    // 0x4f6064: 0x60f809  jalr        $v1
label_4f6068:
    if (ctx->pc == 0x4F6068u) {
        ctx->pc = 0x4F6068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6064u;
        // 0x4f6068: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F606Cu;
        goto label_4f606c;
    }
    ctx->pc = 0x4F6064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F606Cu);
        ctx->pc = 0x4F6068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6064u;
        // 0x4f6068: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F6064u, 0x4F606Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F606Cu;
label_4f606c:
    // 0x4f606c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4f606cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4f6070:
    // 0x4f6070: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f6070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f6074:
    // 0x4f6074: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x4f6074u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_4f6078:
    // 0x4f6078: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x4f6078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_4f607c:
    // 0x4f607c: 0x60f809  jalr        $v1
label_4f6080:
    if (ctx->pc == 0x4F6080u) {
        ctx->pc = 0x4F6080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F607Cu;
        // 0x4f6080: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F6084u;
        goto label_4f6084;
    }
    ctx->pc = 0x4F607Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F6084u);
        ctx->pc = 0x4F6080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F607Cu;
        // 0x4f6080: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F607Cu, 0x4F6084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F6084u;
label_4f6084:
    // 0x4f6084: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4f6084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f6088:
    // 0x4f6088: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f6088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f608c:
    // 0x4f608c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f608cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f6090:
    // 0x4f6090: 0x3e00008  jr          $ra
label_4f6094:
    if (ctx->pc == 0x4F6094u) {
        ctx->pc = 0x4F6094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6090u;
        // 0x4f6094: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F6098u;
        goto label_fallthrough_0x4f6090;
    }
    ctx->pc = 0x4F6090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F6094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6090u;
        // 0x4f6094: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F6090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4f6090:
    ctx->pc = 0x4F6098u;
}
