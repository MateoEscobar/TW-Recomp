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

// Function: sub_001B3960
// Address: 0x1b3960 - 0x1b39a0
void sub_001B3960_0x1b3960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3960_0x1b3960");
#endif

    switch (ctx->pc) {
        case 0x1b3960u: goto label_1b3960;
        case 0x1b3964u: goto label_1b3964;
        case 0x1b3968u: goto label_1b3968;
        case 0x1b396cu: goto label_1b396c;
        case 0x1b3970u: goto label_1b3970;
        case 0x1b3974u: goto label_1b3974;
        case 0x1b3978u: goto label_1b3978;
        case 0x1b397cu: goto label_1b397c;
        case 0x1b3980u: goto label_1b3980;
        case 0x1b3984u: goto label_1b3984;
        case 0x1b3988u: goto label_1b3988;
        case 0x1b398cu: goto label_1b398c;
        case 0x1b3990u: goto label_1b3990;
        case 0x1b3994u: goto label_1b3994;
        case 0x1b3998u: goto label_1b3998;
        case 0x1b399cu: goto label_1b399c;
        default: break;
    }

    ctx->pc = 0x1b3960u;

label_1b3960:
    // 0x1b3960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b3960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b3964:
    // 0x1b3964: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b3964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1b3968:
    // 0x1b3968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b396c:
    // 0x1b396c: 0x24900010  addiu       $s0, $a0, 0x10
    ctx->pc = 0x1b396cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1b3970:
    // 0x1b3970: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1b3970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1b3974:
    // 0x1b3974: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1b3974u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1b3978:
    // 0x1b3978: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1b3978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1b397c:
    // 0x1b397c: 0x40f809  jalr        $v0
label_1b3980:
    if (ctx->pc == 0x1B3980u) {
        ctx->pc = 0x1B3980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B397Cu;
        // 0x1b3980: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3984u;
        goto label_1b3984;
    }
    ctx->pc = 0x1B397Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B3984u);
        ctx->pc = 0x1B3980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B397Cu;
        // 0x1b3980: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B397Cu, 0x1B3984u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B3984u;
label_1b3984:
    // 0x1b3984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b3988:
    // 0x1b3988: 0xc068108  jal         func_1A0420
label_1b398c:
    if (ctx->pc == 0x1B398Cu) {
        ctx->pc = 0x1B398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3988u;
        // 0x1b398c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3990u;
        goto label_1b3990;
    }
    ctx->pc = 0x1B3988u;
    SET_GPR_U32(ctx, 31, 0x1B3990u);
    ctx->pc = 0x1B398Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3988u;
    // 0x1b398c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0420u, 0x1B3988u, 0x1B3990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3990u;
label_1b3990:
    // 0x1b3990: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b3990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b3994:
    // 0x1b3994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b3998:
    // 0x1b3998: 0x3e00008  jr          $ra
label_1b399c:
    if (ctx->pc == 0x1B399Cu) {
        ctx->pc = 0x1B399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3998u;
        // 0x1b399c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B39A0u;
        goto label_fallthrough_0x1b3998;
    }
    ctx->pc = 0x1B3998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3998u;
        // 0x1b399c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b3998:
    ctx->pc = 0x1B39A0u;
}
