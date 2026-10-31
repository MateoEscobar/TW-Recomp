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

// Function: sub_00373BF0
// Address: 0x373bf0 - 0x373c68
void sub_00373BF0_0x373bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373BF0_0x373bf0");
#endif

    switch (ctx->pc) {
        case 0x373c18u: goto label_373c18;
        case 0x373c20u: goto label_373c20;
        case 0x373c34u: goto label_373c34;
        case 0x373c3cu: goto label_373c3c;
        case 0x373c48u: goto label_373c48;
        default: break;
    }

    ctx->pc = 0x373bf0u;

    // 0x373bf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x373bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x373bf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x373bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373bf8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x373bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x373bfc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x373bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x373c00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x373c00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373c04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x373c04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373c08: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x373c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x373c0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373c10: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373C10u;
    SET_GPR_U32(ctx, 31, 0x373C18u);
    ctx->pc = 0x373C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373C10u;
    // 0x373c14: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373C10u, 0x373C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373C18u;
label_373c18:
    // 0x373c18: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373C18u;
    SET_GPR_U32(ctx, 31, 0x373C20u);
    ctx->pc = 0x373C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373C18u;
    // 0x373c1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373C18u, 0x373C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373C20u;
label_373c20:
    // 0x373c20: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x373c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373c24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x373c24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373c28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x373c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373c2c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373C2Cu;
    SET_GPR_U32(ctx, 31, 0x373C34u);
    ctx->pc = 0x373C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373C2Cu;
    // 0x373c30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373C2Cu, 0x373C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373C34u;
label_373c34:
    // 0x373c34: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373C34u;
    SET_GPR_U32(ctx, 31, 0x373C3Cu);
    ctx->pc = 0x373C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373C34u;
    // 0x373c38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373C34u, 0x373C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373C3Cu;
label_373c3c:
    // 0x373c3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x373c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373c40: 0xc05ab60  jal         func_16AD80
    ctx->pc = 0x373C40u;
    SET_GPR_U32(ctx, 31, 0x373C48u);
    ctx->pc = 0x373C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373C40u;
    // 0x373c44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AD80u, 0x373C40u, 0x373C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373C48u;
label_373c48:
    // 0x373c48: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x373c48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x373c4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x373c4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373c50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x373c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x373c54: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x373c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373c58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x373C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373C5Cu;
        // 0x373c60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373C64u;
    // 0x373c64: 0x0  nop
    ctx->pc = 0x373c64u;
    // NOP
    ctx->pc = 0x373c68u;
}
