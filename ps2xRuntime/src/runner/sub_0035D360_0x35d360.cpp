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

// Function: sub_0035D360
// Address: 0x35d360 - 0x35d3d8
void sub_0035D360_0x35d360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D360_0x35d360");
#endif

    switch (ctx->pc) {
        case 0x35d388u: goto label_35d388;
        case 0x35d390u: goto label_35d390;
        case 0x35d3a4u: goto label_35d3a4;
        case 0x35d3acu: goto label_35d3ac;
        case 0x35d3b8u: goto label_35d3b8;
        default: break;
    }

    ctx->pc = 0x35d360u;

    // 0x35d360: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35d360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35d364: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35d364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d368: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35d368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35d36c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35d36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35d370: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35d370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d374: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35d374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d378: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35d378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35d37c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35d37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35d380: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D380u;
    SET_GPR_U32(ctx, 31, 0x35D388u);
    ctx->pc = 0x35D384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D380u;
    // 0x35d384: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D380u, 0x35D388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D388u;
label_35d388:
    // 0x35d388: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35D388u;
    SET_GPR_U32(ctx, 31, 0x35D390u);
    ctx->pc = 0x35D38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D388u;
    // 0x35d38c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35D388u, 0x35D390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D390u;
label_35d390:
    // 0x35d390: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35d390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d394: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35d394u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35d398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d39c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D39Cu;
    SET_GPR_U32(ctx, 31, 0x35D3A4u);
    ctx->pc = 0x35D3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D39Cu;
    // 0x35d3a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D39Cu, 0x35D3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D3A4u;
label_35d3a4:
    // 0x35d3a4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35D3A4u;
    SET_GPR_U32(ctx, 31, 0x35D3ACu);
    ctx->pc = 0x35D3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D3A4u;
    // 0x35d3a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35D3A4u, 0x35D3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D3ACu;
label_35d3ac:
    // 0x35d3ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35d3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d3b0: 0xc08eb80  jal         func_23AE00
    ctx->pc = 0x35D3B0u;
    SET_GPR_U32(ctx, 31, 0x35D3B8u);
    ctx->pc = 0x35D3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D3B0u;
    // 0x35d3b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AE00u, 0x35D3B0u, 0x35D3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D3B8u;
label_35d3b8:
    // 0x35d3b8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35d3b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35d3bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35d3bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d3c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35d3c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35d3c4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35d3c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d3c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35d3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d3cc: 0x3e00008  jr          $ra
    ctx->pc = 0x35D3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D3CCu;
        // 0x35d3d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D3D4u;
    // 0x35d3d4: 0x0  nop
    ctx->pc = 0x35d3d4u;
    // NOP
    ctx->pc = 0x35d3d8u;
}
