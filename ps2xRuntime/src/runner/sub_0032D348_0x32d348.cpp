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

// Function: sub_0032D348
// Address: 0x32d348 - 0x32d400
void sub_0032D348_0x32d348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D348_0x32d348");
#endif

    switch (ctx->pc) {
        case 0x32d370u: goto label_32d370;
        case 0x32d3a0u: goto label_32d3a0;
        case 0x32d3acu: goto label_32d3ac;
        case 0x32d3ccu: goto label_32d3cc;
        case 0x32d3d8u: goto label_32d3d8;
        case 0x32d3e8u: goto label_32d3e8;
        default: break;
    }

    ctx->pc = 0x32d348u;

    // 0x32d348: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32d348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32d34c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x32d34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x32d350: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x32d350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d354: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x32d354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x32d358: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32d358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d35c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32d35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32d360: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32d360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d364: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32d364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32d368: 0xc0cb460  jal         func_32D180
    ctx->pc = 0x32D368u;
    SET_GPR_U32(ctx, 31, 0x32D370u);
    ctx->pc = 0x32D36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D368u;
    // 0x32d36c: 0x8e320028  lw          $s2, 0x28($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D180u, 0x32D368u, 0x32D370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D370u;
label_32d370:
    // 0x32d370: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x32d370u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d374: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32d374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32d378: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x32D378u;
    {
        const bool branch_taken_0x32d378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32D37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D378u;
        // 0x32d37c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d378) {
            ctx->pc = 0x32D3B4u;
            goto label_32d3b4;
        }
    }
    ctx->pc = 0x32D380u;
    // 0x32d380: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x32d380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x32d384: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x32D384u;
    {
        const bool branch_taken_0x32d384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d384) {
            ctx->pc = 0x32D388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D384u;
            // 0x32d388: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D3A4u;
            goto label_32d3a4;
        }
    }
    ctx->pc = 0x32D38Cu;
    // 0x32d38c: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x32d38cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x32d390: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32d390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d394: 0x24a55c90  addiu       $a1, $a1, 0x5C90
    ctx->pc = 0x32d394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23696));
    // 0x32d398: 0xc0ca8a0  jal         func_32A280
    ctx->pc = 0x32D398u;
    SET_GPR_U32(ctx, 31, 0x32D3A0u);
    ctx->pc = 0x32D39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D398u;
    // 0x32d39c: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A280u, 0x32D398u, 0x32D3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D3A0u;
label_32d3a0:
    // 0x32d3a0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x32d3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_32d3a4:
    // 0x32d3a4: 0xc0cb386  jal         func_32CE18
    ctx->pc = 0x32D3A4u;
    SET_GPR_U32(ctx, 31, 0x32D3ACu);
    ctx->pc = 0x32D3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D3A4u;
    // 0x32d3a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CE18u, 0x32D3A4u, 0x32D3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D3ACu;
label_32d3ac:
    // 0x32d3ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32D3ACu;
    {
        const bool branch_taken_0x32d3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D3ACu;
        // 0x32d3b0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d3ac) {
            ctx->pc = 0x32D3CCu;
            goto label_32d3cc;
        }
    }
    ctx->pc = 0x32D3B4u;
label_32d3b4:
    // 0x32d3b4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32D3B4u;
    {
        const bool branch_taken_0x32d3b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32D3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D3B4u;
        // 0x32d3b8: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d3b4) {
            ctx->pc = 0x32D3CCu;
            goto label_32d3cc;
        }
    }
    ctx->pc = 0x32D3BCu;
    // 0x32d3bc: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x32d3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32d3c0: 0x24a55cb0  addiu       $a1, $a1, 0x5CB0
    ctx->pc = 0x32d3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23728));
    // 0x32d3c4: 0xc0ca8a0  jal         func_32A280
    ctx->pc = 0x32D3C4u;
    SET_GPR_U32(ctx, 31, 0x32D3CCu);
    ctx->pc = 0x32D3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D3C4u;
    // 0x32d3c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A280u, 0x32D3C4u, 0x32D3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D3CCu;
label_32d3cc:
    // 0x32d3cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32d3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d3d0: 0xc0cb4a0  jal         func_32D280
    ctx->pc = 0x32D3D0u;
    SET_GPR_U32(ctx, 31, 0x32D3D8u);
    ctx->pc = 0x32D3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D3D0u;
    // 0x32d3d4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D280u, 0x32D3D0u, 0x32D3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D3D8u;
label_32d3d8:
    // 0x32d3d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32d3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d3dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x32d3dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d3e0: 0xc0c9d6c  jal         func_3275B0
    ctx->pc = 0x32D3E0u;
    SET_GPR_U32(ctx, 31, 0x32D3E8u);
    ctx->pc = 0x32D3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D3E0u;
    // 0x32d3e4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3275B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3275B0u, 0x32D3E0u, 0x32D3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D3E8u;
label_32d3e8:
    // 0x32d3e8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x32d3e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32d3ec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x32d3ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32d3f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32d3f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32d3f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32d3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d3f8: 0x3e00008  jr          $ra
    ctx->pc = 0x32D3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D3F8u;
        // 0x32d3fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D3F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D400u;
}
