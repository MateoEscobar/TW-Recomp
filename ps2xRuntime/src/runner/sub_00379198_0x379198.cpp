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

// Function: sub_00379198
// Address: 0x379198 - 0x379210
void sub_00379198_0x379198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379198_0x379198");
#endif

    switch (ctx->pc) {
        case 0x3791c0u: goto label_3791c0;
        case 0x3791c8u: goto label_3791c8;
        case 0x3791dcu: goto label_3791dc;
        case 0x3791e4u: goto label_3791e4;
        case 0x3791f0u: goto label_3791f0;
        default: break;
    }

    ctx->pc = 0x379198u;

    // 0x379198: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x379198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37919c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37919cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3791a0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3791a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3791a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3791a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3791a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3791a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3791ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3791acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3791b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3791b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3791b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3791b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3791b8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3791B8u;
    SET_GPR_U32(ctx, 31, 0x3791C0u);
    ctx->pc = 0x3791BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3791B8u;
    // 0x3791bc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3791B8u, 0x3791C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3791C0u;
label_3791c0:
    // 0x3791c0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3791C0u;
    SET_GPR_U32(ctx, 31, 0x3791C8u);
    ctx->pc = 0x3791C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3791C0u;
    // 0x3791c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3791C0u, 0x3791C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3791C8u;
label_3791c8:
    // 0x3791c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3791c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3791cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3791ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3791d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3791d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3791d4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3791D4u;
    SET_GPR_U32(ctx, 31, 0x3791DCu);
    ctx->pc = 0x3791D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3791D4u;
    // 0x3791d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3791D4u, 0x3791DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3791DCu;
label_3791dc:
    // 0x3791dc: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3791DCu;
    SET_GPR_U32(ctx, 31, 0x3791E4u);
    ctx->pc = 0x3791E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3791DCu;
    // 0x3791e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3791DCu, 0x3791E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3791E4u;
label_3791e4:
    // 0x3791e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3791e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3791e8: 0xc0e5d98  jal         func_397660
    ctx->pc = 0x3791E8u;
    SET_GPR_U32(ctx, 31, 0x3791F0u);
    ctx->pc = 0x3791ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3791E8u;
    // 0x3791ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397660u, 0x3791E8u, 0x3791F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3791F0u;
label_3791f0:
    // 0x3791f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3791f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3791f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3791f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3791f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3791f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3791fc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3791fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379200: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x379200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379204: 0x3e00008  jr          $ra
    ctx->pc = 0x379204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379204u;
        // 0x379208: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37920Cu;
    // 0x37920c: 0x0  nop
    ctx->pc = 0x37920cu;
    // NOP
    ctx->pc = 0x379210u;
}
