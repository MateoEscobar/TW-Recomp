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

// Function: sub_0038EEF8
// Address: 0x38eef8 - 0x38ef30
void sub_0038EEF8_0x38eef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038EEF8_0x38eef8");
#endif

    switch (ctx->pc) {
        case 0x38eef8u: goto label_38eef8;
        case 0x38eefcu: goto label_38eefc;
        case 0x38ef00u: goto label_38ef00;
        case 0x38ef04u: goto label_38ef04;
        case 0x38ef08u: goto label_38ef08;
        case 0x38ef0cu: goto label_38ef0c;
        case 0x38ef10u: goto label_38ef10;
        case 0x38ef14u: goto label_38ef14;
        case 0x38ef18u: goto label_38ef18;
        case 0x38ef1cu: goto label_38ef1c;
        case 0x38ef20u: goto label_38ef20;
        case 0x38ef24u: goto label_38ef24;
        case 0x38ef28u: goto label_38ef28;
        case 0x38ef2cu: goto label_38ef2c;
        default: break;
    }

    ctx->pc = 0x38eef8u;

label_38eef8:
    // 0x38eef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38eef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_38eefc:
    // 0x38eefc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38eefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38ef00:
    // 0x38ef00: 0x8c8600e4  lw          $a2, 0xE4($a0)
    ctx->pc = 0x38ef00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
label_38ef04:
    // 0x38ef04: 0x54c00003  bnel        $a2, $zero, . + 4 + (0x3 << 2)
label_38ef08:
    if (ctx->pc == 0x38EF08u) {
        ctx->pc = 0x38EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EF04u;
        // 0x38ef08: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EF0Cu;
        goto label_38ef0c;
    }
    ctx->pc = 0x38EF04u;
    {
        const bool branch_taken_0x38ef04 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x38ef04) {
            ctx->pc = 0x38EF08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38EF04u;
            // 0x38ef08: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38EF14u;
            goto label_38ef14;
        }
    }
    ctx->pc = 0x38EF0Cu;
label_38ef0c:
    // 0x38ef0c: 0x10000005  b           . + 4 + (0x5 << 2)
label_38ef10:
    if (ctx->pc == 0x38EF10u) {
        ctx->pc = 0x38EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EF0Cu;
        // 0x38ef10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EF14u;
        goto label_38ef14;
    }
    ctx->pc = 0x38EF0Cu;
    {
        const bool branch_taken_0x38ef0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EF0Cu;
        // 0x38ef10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ef0c) {
            ctx->pc = 0x38EF24u;
            goto label_38ef24;
        }
    }
    ctx->pc = 0x38EF14u;
label_38ef14:
    // 0x38ef14: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x38ef14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_38ef18:
    // 0x38ef18: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x38ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_38ef1c:
    // 0x38ef1c: 0x40f809  jalr        $v0
label_38ef20:
    if (ctx->pc == 0x38EF20u) {
        ctx->pc = 0x38EF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EF1Cu;
        // 0x38ef20: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EF24u;
        goto label_38ef24;
    }
    ctx->pc = 0x38EF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38EF24u);
        ctx->pc = 0x38EF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EF1Cu;
        // 0x38ef20: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EF1Cu, 0x38EF24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38EF24u;
label_38ef24:
    // 0x38ef24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38ef24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38ef28:
    // 0x38ef28: 0x3e00008  jr          $ra
label_38ef2c:
    if (ctx->pc == 0x38EF2Cu) {
        ctx->pc = 0x38EF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EF28u;
        // 0x38ef2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EF30u;
        goto label_fallthrough_0x38ef28;
    }
    ctx->pc = 0x38EF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EF28u;
        // 0x38ef2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38ef28:
    ctx->pc = 0x38EF30u;
}
