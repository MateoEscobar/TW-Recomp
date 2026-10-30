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

// Function: sub_0033AF78
// Address: 0x33af78 - 0x33afc8
void sub_0033AF78_0x33af78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AF78_0x33af78");
#endif

    switch (ctx->pc) {
        case 0x33af78u: goto label_33af78;
        case 0x33af7cu: goto label_33af7c;
        case 0x33af80u: goto label_33af80;
        case 0x33af84u: goto label_33af84;
        case 0x33af88u: goto label_33af88;
        case 0x33af8cu: goto label_33af8c;
        case 0x33af90u: goto label_33af90;
        case 0x33af94u: goto label_33af94;
        case 0x33af98u: goto label_33af98;
        case 0x33af9cu: goto label_33af9c;
        case 0x33afa0u: goto label_33afa0;
        case 0x33afa4u: goto label_33afa4;
        case 0x33afa8u: goto label_33afa8;
        case 0x33afacu: goto label_33afac;
        case 0x33afb0u: goto label_33afb0;
        case 0x33afb4u: goto label_33afb4;
        case 0x33afb8u: goto label_33afb8;
        case 0x33afbcu: goto label_33afbc;
        case 0x33afc0u: goto label_33afc0;
        case 0x33afc4u: goto label_33afc4;
        default: break;
    }

    ctx->pc = 0x33af78u;

label_33af78:
    // 0x33af78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33af78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_33af7c:
    // 0x33af7c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x33af7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_33af80:
    // 0x33af80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33af80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33af84:
    // 0x33af84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33af84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33af88:
    // 0x33af88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33af88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_33af8c:
    // 0x33af8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33af8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33af90:
    // 0x33af90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33af90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33af94:
    // 0x33af94: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x33af94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_33af98:
    // 0x33af98: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x33af98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_33af9c:
    // 0x33af9c: 0x40f809  jalr        $v0
label_33afa0:
    if (ctx->pc == 0x33AFA0u) {
        ctx->pc = 0x33AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AF9Cu;
        // 0x33afa0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AFA4u;
        goto label_33afa4;
    }
    ctx->pc = 0x33AF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33AFA4u);
        ctx->pc = 0x33AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AF9Cu;
        // 0x33afa0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AF9Cu, 0x33AFA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33AFA4u;
label_33afa4:
    // 0x33afa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33afa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33afa8:
    // 0x33afa8: 0xc0ce230  jal         func_3388C0
label_33afac:
    if (ctx->pc == 0x33AFACu) {
        ctx->pc = 0x33AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AFA8u;
        // 0x33afac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AFB0u;
        goto label_33afb0;
    }
    ctx->pc = 0x33AFA8u;
    SET_GPR_U32(ctx, 31, 0x33AFB0u);
    ctx->pc = 0x33AFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AFA8u;
    // 0x33afac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3388C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3388C0u, 0x33AFA8u, 0x33AFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AFB0u;
label_33afb0:
    // 0x33afb0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x33afb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33afb4:
    // 0x33afb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33afb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33afb8:
    // 0x33afb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33afb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33afbc:
    // 0x33afbc: 0x3e00008  jr          $ra
label_33afc0:
    if (ctx->pc == 0x33AFC0u) {
        ctx->pc = 0x33AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AFBCu;
        // 0x33afc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AFC4u;
        goto label_33afc4;
    }
    ctx->pc = 0x33AFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AFBCu;
        // 0x33afc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AFC4u;
label_33afc4:
    // 0x33afc4: 0x0  nop
    ctx->pc = 0x33afc4u;
    // NOP
    ctx->pc = 0x33afc8u;
}
