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

// Function: sub_00412BF8
// Address: 0x412bf8 - 0x412c40
void sub_00412BF8_0x412bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00412BF8_0x412bf8");
#endif

    switch (ctx->pc) {
        case 0x412bf8u: goto label_412bf8;
        case 0x412bfcu: goto label_412bfc;
        case 0x412c00u: goto label_412c00;
        case 0x412c04u: goto label_412c04;
        case 0x412c08u: goto label_412c08;
        case 0x412c0cu: goto label_412c0c;
        case 0x412c10u: goto label_412c10;
        case 0x412c14u: goto label_412c14;
        case 0x412c18u: goto label_412c18;
        case 0x412c1cu: goto label_412c1c;
        case 0x412c20u: goto label_412c20;
        case 0x412c24u: goto label_412c24;
        case 0x412c28u: goto label_412c28;
        case 0x412c2cu: goto label_412c2c;
        case 0x412c30u: goto label_412c30;
        case 0x412c34u: goto label_412c34;
        case 0x412c38u: goto label_412c38;
        case 0x412c3cu: goto label_412c3c;
        default: break;
    }

    ctx->pc = 0x412bf8u;

label_412bf8:
    // 0x412bf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x412bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_412bfc:
    // 0x412bfc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x412bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_412c00:
    // 0x412c00: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x412c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_412c04:
    // 0x412c04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x412c04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_412c08:
    // 0x412c08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x412c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_412c0c:
    // 0x412c0c: 0xc0e40aa  jal         func_3902A8
label_412c10:
    if (ctx->pc == 0x412C10u) {
        ctx->pc = 0x412C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412C0Cu;
        // 0x412c10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412C14u;
        goto label_412c14;
    }
    ctx->pc = 0x412C0Cu;
    SET_GPR_U32(ctx, 31, 0x412C14u);
    ctx->pc = 0x412C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412C0Cu;
    // 0x412c10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3902A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3902A8u, 0x412C0Cu, 0x412C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412C14u;
label_412c14:
    // 0x412c14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x412c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_412c18:
    // 0x412c18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x412c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_412c1c:
    // 0x412c1c: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x412c1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_412c20:
    // 0x412c20: 0x8c66005c  lw          $a2, 0x5C($v1)
    ctx->pc = 0x412c20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_412c24:
    // 0x412c24: 0xc0f809  jalr        $a2
label_412c28:
    if (ctx->pc == 0x412C28u) {
        ctx->pc = 0x412C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412C24u;
        // 0x412c28: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412C2Cu;
        goto label_412c2c;
    }
    ctx->pc = 0x412C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x412C2Cu);
        ctx->pc = 0x412C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412C24u;
        // 0x412c28: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412C24u, 0x412C2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x412C2Cu;
label_412c2c:
    // 0x412c2c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x412c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_412c30:
    // 0x412c30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x412c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_412c34:
    // 0x412c34: 0x3e00008  jr          $ra
label_412c38:
    if (ctx->pc == 0x412C38u) {
        ctx->pc = 0x412C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412C34u;
        // 0x412c38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412C3Cu;
        goto label_412c3c;
    }
    ctx->pc = 0x412C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x412C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412C34u;
        // 0x412c38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x412C3Cu;
label_412c3c:
    // 0x412c3c: 0x0  nop
    ctx->pc = 0x412c3cu;
    // NOP
    ctx->pc = 0x412c40u;
}
