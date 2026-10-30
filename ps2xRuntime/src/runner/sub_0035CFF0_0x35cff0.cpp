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

// Function: sub_0035CFF0
// Address: 0x35cff0 - 0x35d050
void sub_0035CFF0_0x35cff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035CFF0_0x35cff0");
#endif

    switch (ctx->pc) {
        case 0x35d010u: goto label_35d010;
        case 0x35d018u: goto label_35d018;
        case 0x35d02cu: goto label_35d02c;
        case 0x35d038u: goto label_35d038;
        default: break;
    }

    ctx->pc = 0x35cff0u;

    // 0x35cff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35cff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35cff4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35cff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35cff8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35cff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35cffc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35cffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d000: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35d000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35d004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35d004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35d008: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D008u;
    SET_GPR_U32(ctx, 31, 0x35D010u);
    ctx->pc = 0x35D00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D008u;
    // 0x35d00c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D008u, 0x35D010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D010u;
label_35d010:
    // 0x35d010: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35D010u;
    SET_GPR_U32(ctx, 31, 0x35D018u);
    ctx->pc = 0x35D014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D010u;
    // 0x35d014: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35D010u, 0x35D018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D018u;
label_35d018:
    // 0x35d018: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35d018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d01c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35d01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d020: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35d020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d024: 0xc102488  jal         func_409220
    ctx->pc = 0x35D024u;
    SET_GPR_U32(ctx, 31, 0x35D02Cu);
    ctx->pc = 0x35D028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D024u;
    // 0x35d028: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35D024u, 0x35D02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D02Cu;
label_35d02c:
    // 0x35d02c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35d02cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d030: 0xc08e17e  jal         func_2385F8
    ctx->pc = 0x35D030u;
    SET_GPR_U32(ctx, 31, 0x35D038u);
    ctx->pc = 0x35D034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D030u;
    // 0x35d034: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2385F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2385F8u, 0x35D030u, 0x35D038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D038u;
label_35d038:
    // 0x35d038: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35d038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35d03c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35d03cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d040: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35d040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35d044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d048: 0x3e00008  jr          $ra
    ctx->pc = 0x35D048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D048u;
        // 0x35d04c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D050u;
}
