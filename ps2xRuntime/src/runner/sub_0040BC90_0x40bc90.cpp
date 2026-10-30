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

// Function: sub_0040BC90
// Address: 0x40bc90 - 0x40bd08
void sub_0040BC90_0x40bc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040BC90_0x40bc90");
#endif

    switch (ctx->pc) {
        case 0x40bcb0u: goto label_40bcb0;
        case 0x40bcbcu: goto label_40bcbc;
        case 0x40bcc8u: goto label_40bcc8;
        case 0x40bcd4u: goto label_40bcd4;
        case 0x40bcdcu: goto label_40bcdc;
        case 0x40bcecu: goto label_40bcec;
        default: break;
    }

    ctx->pc = 0x40bc90u;

    // 0x40bc90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40bc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x40bc94: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x40bc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x40bc98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40bc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x40bc9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40bc9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bca0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40bca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40bca4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x40bca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bca8: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x40BCA8u;
    SET_GPR_U32(ctx, 31, 0x40BCB0u);
    ctx->pc = 0x40BCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BCA8u;
    // 0x40bcac: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x40BCA8u, 0x40BCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BCB0u;
label_40bcb0:
    // 0x40bcb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40bcb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bcb4: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x40BCB4u;
    SET_GPR_U32(ctx, 31, 0x40BCBCu);
    ctx->pc = 0x40BCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BCB4u;
    // 0x40bcb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x40BCB4u, 0x40BCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BCBCu;
label_40bcbc:
    // 0x40bcbc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40bcbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bcc0: 0xc0c8ed4  jal         func_323B50
    ctx->pc = 0x40BCC0u;
    SET_GPR_U32(ctx, 31, 0x40BCC8u);
    ctx->pc = 0x40BCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BCC0u;
    // 0x40bcc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B50u, 0x40BCC0u, 0x40BCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BCC8u;
label_40bcc8:
    // 0x40bcc8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x40bcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x40bccc: 0xc0c8da2  jal         func_323688
    ctx->pc = 0x40BCCCu;
    SET_GPR_U32(ctx, 31, 0x40BCD4u);
    ctx->pc = 0x40BCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BCCCu;
    // 0x40bcd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323688u, 0x40BCCCu, 0x40BCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BCD4u;
label_40bcd4:
    // 0x40bcd4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x40BCD4u;
    SET_GPR_U32(ctx, 31, 0x40BCDCu);
    ctx->pc = 0x40BCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BCD4u;
    // 0x40bcd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x40BCD4u, 0x40BCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BCDCu;
label_40bcdc:
    // 0x40bcdc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x40bcdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40bce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bce4: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x40BCE4u;
    SET_GPR_U32(ctx, 31, 0x40BCECu);
    ctx->pc = 0x40BCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BCE4u;
    // 0x40bce8: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x40BCE4u, 0x40BCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BCECu;
label_40bcec:
    // 0x40bcec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x40bcecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bcf0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x40bcf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40bcf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40bcf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40bcf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40bcf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40bcfc: 0x3e00008  jr          $ra
    ctx->pc = 0x40BCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40BD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BCFCu;
        // 0x40bd00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40BCFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40BD04u;
    // 0x40bd04: 0x0  nop
    ctx->pc = 0x40bd04u;
    // NOP
    ctx->pc = 0x40bd08u;
}
