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

// Function: sub_00373B00
// Address: 0x373b00 - 0x373b78
void sub_00373B00_0x373b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373B00_0x373b00");
#endif

    switch (ctx->pc) {
        case 0x373b28u: goto label_373b28;
        case 0x373b30u: goto label_373b30;
        case 0x373b44u: goto label_373b44;
        case 0x373b4cu: goto label_373b4c;
        case 0x373b58u: goto label_373b58;
        default: break;
    }

    ctx->pc = 0x373b00u;

    // 0x373b00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x373b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x373b04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x373b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373b08: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x373b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x373b0c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x373b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x373b10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x373b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373b14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x373b14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373b18: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x373b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x373b1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373b20: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373B20u;
    SET_GPR_U32(ctx, 31, 0x373B28u);
    ctx->pc = 0x373B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373B20u;
    // 0x373b24: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373B20u, 0x373B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373B28u;
label_373b28:
    // 0x373b28: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373B28u;
    SET_GPR_U32(ctx, 31, 0x373B30u);
    ctx->pc = 0x373B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373B28u;
    // 0x373b2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373B28u, 0x373B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373B30u;
label_373b30:
    // 0x373b30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x373b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373b34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x373b34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373b38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x373b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373b3c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373B3Cu;
    SET_GPR_U32(ctx, 31, 0x373B44u);
    ctx->pc = 0x373B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373B3Cu;
    // 0x373b40: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373B3Cu, 0x373B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373B44u;
label_373b44:
    // 0x373b44: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373B44u;
    SET_GPR_U32(ctx, 31, 0x373B4Cu);
    ctx->pc = 0x373B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373B44u;
    // 0x373b48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373B44u, 0x373B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373B4Cu;
label_373b4c:
    // 0x373b4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x373b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373b50: 0xc05ab26  jal         func_16AC98
    ctx->pc = 0x373B50u;
    SET_GPR_U32(ctx, 31, 0x373B58u);
    ctx->pc = 0x373B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373B50u;
    // 0x373b54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AC98u, 0x373B50u, 0x373B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373B58u;
label_373b58:
    // 0x373b58: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x373b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x373b5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x373b5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373b60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x373b60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x373b64: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x373b64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x373B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373B6Cu;
        // 0x373b70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373B74u;
    // 0x373b74: 0x0  nop
    ctx->pc = 0x373b74u;
    // NOP
    ctx->pc = 0x373b78u;
}
