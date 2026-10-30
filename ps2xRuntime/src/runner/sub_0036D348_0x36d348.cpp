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

// Function: sub_0036D348
// Address: 0x36d348 - 0x36d418
void sub_0036D348_0x36d348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D348_0x36d348");
#endif

    switch (ctx->pc) {
        case 0x36d378u: goto label_36d378;
        case 0x36d380u: goto label_36d380;
        case 0x36d394u: goto label_36d394;
        case 0x36d39cu: goto label_36d39c;
        case 0x36d3b0u: goto label_36d3b0;
        case 0x36d3c4u: goto label_36d3c4;
        case 0x36d3d8u: goto label_36d3d8;
        case 0x36d3f0u: goto label_36d3f0;
        default: break;
    }

    ctx->pc = 0x36d348u;

    // 0x36d348: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x36d348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x36d34c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36d34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d350: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x36d350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x36d354: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x36d354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x36d358: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36d358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d35c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36d35cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d360: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x36d360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x36d364: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x36d364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x36d368: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x36d368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x36d36c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36d36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36d370: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36D370u;
    SET_GPR_U32(ctx, 31, 0x36D378u);
    ctx->pc = 0x36D374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D370u;
    // 0x36d374: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36D370u, 0x36D378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D378u;
label_36d378:
    // 0x36d378: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36D378u;
    SET_GPR_U32(ctx, 31, 0x36D380u);
    ctx->pc = 0x36D37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D378u;
    // 0x36d37c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36D378u, 0x36D380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D380u;
label_36d380:
    // 0x36d380: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36d380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d384: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x36d384u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d388: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36d388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36d38c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36D38Cu;
    SET_GPR_U32(ctx, 31, 0x36D394u);
    ctx->pc = 0x36D390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D38Cu;
    // 0x36d390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36D38Cu, 0x36D394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D394u;
label_36d394:
    // 0x36d394: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36D394u;
    SET_GPR_U32(ctx, 31, 0x36D39Cu);
    ctx->pc = 0x36D398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D394u;
    // 0x36d398: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36D394u, 0x36D39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D39Cu;
label_36d39c:
    // 0x36d39c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x36d39cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d3a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36d3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d3a4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36d3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36d3a8: 0xc102488  jal         func_409220
    ctx->pc = 0x36D3A8u;
    SET_GPR_U32(ctx, 31, 0x36D3B0u);
    ctx->pc = 0x36D3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D3A8u;
    // 0x36d3ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36D3A8u, 0x36D3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D3B0u;
label_36d3b0:
    // 0x36d3b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36d3b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d3b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36d3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d3b8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36d3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36d3bc: 0xc102488  jal         func_409220
    ctx->pc = 0x36D3BCu;
    SET_GPR_U32(ctx, 31, 0x36D3C4u);
    ctx->pc = 0x36D3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D3BCu;
    // 0x36d3c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36D3BCu, 0x36D3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D3C4u;
label_36d3c4:
    // 0x36d3c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36d3c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d3c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36d3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d3cc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36d3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36d3d0: 0xc102488  jal         func_409220
    ctx->pc = 0x36D3D0u;
    SET_GPR_U32(ctx, 31, 0x36D3D8u);
    ctx->pc = 0x36D3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D3D0u;
    // 0x36d3d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36D3D0u, 0x36D3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D3D8u;
label_36d3d8:
    // 0x36d3d8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x36d3d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d3dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x36d3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d3e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x36d3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d3e4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x36d3e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d3e8: 0xc0e185a  jal         func_386168
    ctx->pc = 0x36D3E8u;
    SET_GPR_U32(ctx, 31, 0x36D3F0u);
    ctx->pc = 0x36D3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D3E8u;
    // 0x36d3ec: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386168u, 0x36D3E8u, 0x36D3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D3F0u;
label_36d3f0:
    // 0x36d3f0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x36d3f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36d3f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36d3f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d3f8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x36d3f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36d3fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x36d3fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36d400: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x36d400u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36d404: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x36d404u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36d408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d40c: 0x3e00008  jr          $ra
    ctx->pc = 0x36D40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D40Cu;
        // 0x36d410: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D414u;
    // 0x36d414: 0x0  nop
    ctx->pc = 0x36d414u;
    // NOP
    ctx->pc = 0x36d418u;
}
