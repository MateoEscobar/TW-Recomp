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

// Function: sub_00362960
// Address: 0x362960 - 0x362a28
void sub_00362960_0x362960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362960_0x362960");
#endif

    switch (ctx->pc) {
        case 0x362990u: goto label_362990;
        case 0x362998u: goto label_362998;
        case 0x3629acu: goto label_3629ac;
        case 0x3629b4u: goto label_3629b4;
        case 0x3629c8u: goto label_3629c8;
        case 0x3629d0u: goto label_3629d0;
        case 0x3629e4u: goto label_3629e4;
        case 0x3629ecu: goto label_3629ec;
        case 0x362a00u: goto label_362a00;
        default: break;
    }

    ctx->pc = 0x362960u;

    // 0x362960: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x362960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x362964: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x362964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362968: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x362968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x36296c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x36296cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x362970: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x362970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362974: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x362974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362978: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x362978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x36297c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x36297cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x362980: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x362980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x362984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x362984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x362988: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362988u;
    SET_GPR_U32(ctx, 31, 0x362990u);
    ctx->pc = 0x36298Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362988u;
    // 0x36298c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362988u, 0x362990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362990u;
label_362990:
    // 0x362990: 0xc10b108  jal         func_42C420
    ctx->pc = 0x362990u;
    SET_GPR_U32(ctx, 31, 0x362998u);
    ctx->pc = 0x362994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362990u;
    // 0x362994: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x362990u, 0x362998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362998u;
label_362998:
    // 0x362998: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x362998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36299c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x36299cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3629a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3629a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3629a4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3629A4u;
    SET_GPR_U32(ctx, 31, 0x3629ACu);
    ctx->pc = 0x3629A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3629A4u;
    // 0x3629a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3629A4u, 0x3629ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3629ACu;
label_3629ac:
    // 0x3629ac: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3629ACu;
    SET_GPR_U32(ctx, 31, 0x3629B4u);
    ctx->pc = 0x3629B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3629ACu;
    // 0x3629b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3629ACu, 0x3629B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3629B4u;
label_3629b4:
    // 0x3629b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3629b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3629b8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3629b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3629bc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3629bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3629c0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3629C0u;
    SET_GPR_U32(ctx, 31, 0x3629C8u);
    ctx->pc = 0x3629C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3629C0u;
    // 0x3629c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3629C0u, 0x3629C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3629C8u;
label_3629c8:
    // 0x3629c8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3629C8u;
    SET_GPR_U32(ctx, 31, 0x3629D0u);
    ctx->pc = 0x3629CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3629C8u;
    // 0x3629cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3629C8u, 0x3629D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3629D0u;
label_3629d0:
    // 0x3629d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3629d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3629d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3629d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3629d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3629d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3629dc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3629DCu;
    SET_GPR_U32(ctx, 31, 0x3629E4u);
    ctx->pc = 0x3629E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3629DCu;
    // 0x3629e0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3629DCu, 0x3629E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3629E4u;
label_3629e4:
    // 0x3629e4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3629E4u;
    SET_GPR_U32(ctx, 31, 0x3629ECu);
    ctx->pc = 0x3629E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3629E4u;
    // 0x3629e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3629E4u, 0x3629ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3629ECu;
label_3629ec:
    // 0x3629ec: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3629ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3629f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3629f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3629f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3629f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3629f8: 0xc0b33a2  jal         func_2CCE88
    ctx->pc = 0x3629F8u;
    SET_GPR_U32(ctx, 31, 0x362A00u);
    ctx->pc = 0x3629FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3629F8u;
    // 0x3629fc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCE88u, 0x3629F8u, 0x362A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362A00u;
label_362a00:
    // 0x362a00: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x362a00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x362a04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x362a04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362a08: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x362a08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x362a0c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x362a0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x362a10: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x362a10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x362a14: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x362a14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x362a18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x362a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x362a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x362A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362A1Cu;
        // 0x362a20: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362A24u;
    // 0x362a24: 0x0  nop
    ctx->pc = 0x362a24u;
    // NOP
    ctx->pc = 0x362a28u;
}
