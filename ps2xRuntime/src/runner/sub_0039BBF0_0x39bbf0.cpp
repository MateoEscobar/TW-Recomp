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

// Function: sub_0039BBF0
// Address: 0x39bbf0 - 0x39bc28
void sub_0039BBF0_0x39bbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BBF0_0x39bbf0");
#endif

    switch (ctx->pc) {
        case 0x39bbf0u: goto label_39bbf0;
        case 0x39bbf4u: goto label_39bbf4;
        case 0x39bbf8u: goto label_39bbf8;
        case 0x39bbfcu: goto label_39bbfc;
        case 0x39bc00u: goto label_39bc00;
        case 0x39bc04u: goto label_39bc04;
        case 0x39bc08u: goto label_39bc08;
        case 0x39bc0cu: goto label_39bc0c;
        case 0x39bc10u: goto label_39bc10;
        case 0x39bc14u: goto label_39bc14;
        case 0x39bc18u: goto label_39bc18;
        case 0x39bc1cu: goto label_39bc1c;
        case 0x39bc20u: goto label_39bc20;
        case 0x39bc24u: goto label_39bc24;
        default: break;
    }

    ctx->pc = 0x39bbf0u;

label_39bbf0:
    // 0x39bbf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39bbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_39bbf4:
    // 0x39bbf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39bbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39bbf8:
    // 0x39bbf8: 0x8c8600e4  lw          $a2, 0xE4($a0)
    ctx->pc = 0x39bbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
label_39bbfc:
    // 0x39bbfc: 0x54c00003  bnel        $a2, $zero, . + 4 + (0x3 << 2)
label_39bc00:
    if (ctx->pc == 0x39BC00u) {
        ctx->pc = 0x39BC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BBFCu;
        // 0x39bc00: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BC04u;
        goto label_39bc04;
    }
    ctx->pc = 0x39BBFCu;
    {
        const bool branch_taken_0x39bbfc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x39bbfc) {
            ctx->pc = 0x39BC00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39BBFCu;
            // 0x39bc00: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39BC0Cu;
            goto label_39bc0c;
        }
    }
    ctx->pc = 0x39BC04u;
label_39bc04:
    // 0x39bc04: 0x10000005  b           . + 4 + (0x5 << 2)
label_39bc08:
    if (ctx->pc == 0x39BC08u) {
        ctx->pc = 0x39BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BC04u;
        // 0x39bc08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BC0Cu;
        goto label_39bc0c;
    }
    ctx->pc = 0x39BC04u;
    {
        const bool branch_taken_0x39bc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BC04u;
        // 0x39bc08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bc04) {
            ctx->pc = 0x39BC1Cu;
            goto label_39bc1c;
        }
    }
    ctx->pc = 0x39BC0Cu;
label_39bc0c:
    // 0x39bc0c: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x39bc0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_39bc10:
    // 0x39bc10: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x39bc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_39bc14:
    // 0x39bc14: 0x40f809  jalr        $v0
label_39bc18:
    if (ctx->pc == 0x39BC18u) {
        ctx->pc = 0x39BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BC14u;
        // 0x39bc18: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BC1Cu;
        goto label_39bc1c;
    }
    ctx->pc = 0x39BC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39BC1Cu);
        ctx->pc = 0x39BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BC14u;
        // 0x39bc18: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BC14u, 0x39BC1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39BC1Cu;
label_39bc1c:
    // 0x39bc1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39bc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39bc20:
    // 0x39bc20: 0x3e00008  jr          $ra
label_39bc24:
    if (ctx->pc == 0x39BC24u) {
        ctx->pc = 0x39BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BC20u;
        // 0x39bc24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BC28u;
        goto label_fallthrough_0x39bc20;
    }
    ctx->pc = 0x39BC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BC20u;
        // 0x39bc24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39bc20:
    ctx->pc = 0x39BC28u;
}
