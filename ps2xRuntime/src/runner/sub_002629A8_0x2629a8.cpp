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

// Function: sub_002629A8
// Address: 0x2629a8 - 0x262a38
void sub_002629A8_0x2629a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002629A8_0x2629a8");
#endif

    switch (ctx->pc) {
        case 0x2629ccu: goto label_2629cc;
        case 0x2629d8u: goto label_2629d8;
        case 0x2629e8u: goto label_2629e8;
        case 0x2629f0u: goto label_2629f0;
        case 0x262a04u: goto label_262a04;
        case 0x262a10u: goto label_262a10;
        case 0x262a1cu: goto label_262a1c;
        default: break;
    }

    ctx->pc = 0x2629a8u;

    // 0x2629a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2629a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2629ac: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2629acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2629b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2629b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2629b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2629b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2629b8: 0x265100c4  addiu       $s1, $s2, 0xC4
    ctx->pc = 0x2629b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
    // 0x2629bc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2629bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2629c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2629c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2629c4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2629C4u;
    SET_GPR_U32(ctx, 31, 0x2629CCu);
    ctx->pc = 0x2629C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2629C4u;
    // 0x2629c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2629C4u, 0x2629CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2629CCu;
label_2629cc:
    // 0x2629cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2629ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2629d0: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x2629D0u;
    SET_GPR_U32(ctx, 31, 0x2629D8u);
    ctx->pc = 0x2629D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2629D0u;
    // 0x2629d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x2629D0u, 0x2629D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2629D8u;
label_2629d8:
    // 0x2629d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2629d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2629dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2629dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2629e0: 0xc0993e8  jal         func_264FA0
    ctx->pc = 0x2629E0u;
    SET_GPR_U32(ctx, 31, 0x2629E8u);
    ctx->pc = 0x2629E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2629E0u;
    // 0x2629e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264FA0u, 0x2629E0u, 0x2629E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2629E8u;
label_2629e8:
    // 0x2629e8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2629E8u;
    SET_GPR_U32(ctx, 31, 0x2629F0u);
    ctx->pc = 0x2629ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2629E8u;
    // 0x2629ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2629E8u, 0x2629F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2629F0u;
label_2629f0:
    // 0x2629f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2629f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2629f4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2629F4u;
    {
        const bool branch_taken_0x2629f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2629F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2629F4u;
        // 0x2629f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2629f4) {
            ctx->pc = 0x262A14u;
            goto label_262a14;
        }
    }
    ctx->pc = 0x2629FCu;
    // 0x2629fc: 0xc087502  jal         func_21D408
    ctx->pc = 0x2629FCu;
    SET_GPR_U32(ctx, 31, 0x262A04u);
    ctx->pc = 0x262A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2629FCu;
    // 0x262a00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2629FCu, 0x262A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262A04u;
label_262a04:
    // 0x262a04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x262a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262a08: 0xc0a3224  jal         func_28C890
    ctx->pc = 0x262A08u;
    SET_GPR_U32(ctx, 31, 0x262A10u);
    ctx->pc = 0x262A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262A08u;
    // 0x262a0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C890u, 0x262A08u, 0x262A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262A10u;
label_262a10:
    // 0x262a10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x262a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_262a14:
    // 0x262a14: 0xc08af38  jal         func_22BCE0
    ctx->pc = 0x262A14u;
    SET_GPR_U32(ctx, 31, 0x262A1Cu);
    ctx->pc = 0x262A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262A14u;
    // 0x262a18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BCE0u, 0x262A14u, 0x262A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262A1Cu;
label_262a1c:
    // 0x262a1c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x262a1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262a20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x262a20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262a24: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x262a24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262a28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x262a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x262A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A2Cu;
        // 0x262a30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262A34u;
    // 0x262a34: 0x0  nop
    ctx->pc = 0x262a34u;
    // NOP
    ctx->pc = 0x262a38u;
}
