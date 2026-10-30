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

// Function: sub_0032DCB0
// Address: 0x32dcb0 - 0x32dd48
void sub_0032DCB0_0x32dcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032DCB0_0x32dcb0");
#endif

    switch (ctx->pc) {
        case 0x32dce0u: goto label_32dce0;
        case 0x32dcecu: goto label_32dcec;
        case 0x32dcfcu: goto label_32dcfc;
        case 0x32dd04u: goto label_32dd04;
        case 0x32dd10u: goto label_32dd10;
        case 0x32dd24u: goto label_32dd24;
        case 0x32dd30u: goto label_32dd30;
        case 0x32dd38u: goto label_32dd38;
        default: break;
    }

    ctx->pc = 0x32dcb0u;

    // 0x32dcb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32dcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32dcb4: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x32dcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x32dcb8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32dcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32dcbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32dcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32dcc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32dcc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dcc4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x32dcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32dcc8: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x32DCC8u;
    {
        const bool branch_taken_0x32dcc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32DCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DCC8u;
        // 0x32dccc: 0x24020113  addiu       $v0, $zero, 0x113 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dcc8) {
            ctx->pc = 0x32DCF4u;
            goto label_32dcf4;
        }
    }
    ctx->pc = 0x32DCD0u;
    // 0x32dcd0: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x32DCD0u;
    {
        const bool branch_taken_0x32dcd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DCD0u;
        // 0x32dcd4: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dcd0) {
            ctx->pc = 0x32DD18u;
            goto label_32dd18;
        }
    }
    ctx->pc = 0x32DCD8u;
    // 0x32dcd8: 0xc0cb3d0  jal         func_32CF40
    ctx->pc = 0x32DCD8u;
    SET_GPR_U32(ctx, 31, 0x32DCE0u);
    ctx->pc = 0x32CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CF40u, 0x32DCD8u, 0x32DCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DCE0u;
label_32dce0:
    // 0x32dce0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32dce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dce4: 0xc0c99fe  jal         func_3267F8
    ctx->pc = 0x32DCE4u;
    SET_GPR_U32(ctx, 31, 0x32DCECu);
    ctx->pc = 0x32DCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DCE4u;
    // 0x32dce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3267F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3267F8u, 0x32DCE4u, 0x32DCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DCECu;
label_32dcec:
    // 0x32dcec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x32DCECu;
    {
        const bool branch_taken_0x32dcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DCECu;
        // 0x32dcf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dcec) {
            ctx->pc = 0x32DD28u;
            goto label_32dd28;
        }
    }
    ctx->pc = 0x32DCF4u;
label_32dcf4:
    // 0x32dcf4: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32DCF4u;
    SET_GPR_U32(ctx, 31, 0x32DCFCu);
    ctx->pc = 0x32DCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DCF4u;
    // 0x32dcf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32DCF4u, 0x32DCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DCFCu;
label_32dcfc:
    // 0x32dcfc: 0xc0cb8bc  jal         func_32E2F0
    ctx->pc = 0x32DCFCu;
    SET_GPR_U32(ctx, 31, 0x32DD04u);
    ctx->pc = 0x32DD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DCFCu;
    // 0x32dd00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E2F0u, 0x32DCFCu, 0x32DD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DD04u;
label_32dd04:
    // 0x32dd04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32dd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dd08: 0xc0cb334  jal         func_32CCD0
    ctx->pc = 0x32DD08u;
    SET_GPR_U32(ctx, 31, 0x32DD10u);
    ctx->pc = 0x32DD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DD08u;
    // 0x32dd0c: 0x2405005d  addiu       $a1, $zero, 0x5D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CCD0u, 0x32DD08u, 0x32DD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DD10u;
label_32dd10:
    // 0x32dd10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32DD10u;
    {
        const bool branch_taken_0x32dd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DD10u;
        // 0x32dd14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dd10) {
            ctx->pc = 0x32DD28u;
            goto label_32dd28;
        }
    }
    ctx->pc = 0x32DD18u;
label_32dd18:
    // 0x32dd18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32dd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dd1c: 0xc0c9968  jal         func_3265A0
    ctx->pc = 0x32DD1Cu;
    SET_GPR_U32(ctx, 31, 0x32DD24u);
    ctx->pc = 0x32DD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DD1Cu;
    // 0x32dd20: 0x24a55d38  addiu       $a1, $a1, 0x5D38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3265A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3265A0u, 0x32DD1Cu, 0x32DD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DD24u;
label_32dd24:
    // 0x32dd24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32dd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32dd28:
    // 0x32dd28: 0xc0cb334  jal         func_32CCD0
    ctx->pc = 0x32DD28u;
    SET_GPR_U32(ctx, 31, 0x32DD30u);
    ctx->pc = 0x32DD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DD28u;
    // 0x32dd2c: 0x2405003d  addiu       $a1, $zero, 0x3D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CCD0u, 0x32DD28u, 0x32DD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DD30u;
label_32dd30:
    // 0x32dd30: 0xc0cb8bc  jal         func_32E2F0
    ctx->pc = 0x32DD30u;
    SET_GPR_U32(ctx, 31, 0x32DD38u);
    ctx->pc = 0x32DD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DD30u;
    // 0x32dd34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E2F0u, 0x32DD30u, 0x32DD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DD38u;
label_32dd38:
    // 0x32dd38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32dd38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32dd3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32dd3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32dd40: 0x3e00008  jr          $ra
    ctx->pc = 0x32DD40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DD40u;
        // 0x32dd44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DD40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DD48u;
}
