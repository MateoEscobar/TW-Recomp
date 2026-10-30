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

// Function: sub_0043B2E0
// Address: 0x43b2e0 - 0x43b3e0
void sub_0043B2E0_0x43b2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043B2E0_0x43b2e0");
#endif

    switch (ctx->pc) {
        case 0x43b32cu: goto label_43b32c;
        case 0x43b354u: goto label_43b354;
        case 0x43b368u: goto label_43b368;
        case 0x43b380u: goto label_43b380;
        case 0x43b3a4u: goto label_43b3a4;
        case 0x43b3b4u: goto label_43b3b4;
        default: break;
    }

    ctx->pc = 0x43b2e0u;

    // 0x43b2e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x43b2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x43b2e4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x43b2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x43b2e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x43b2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x43b2ec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x43b2ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b2f0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x43b2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x43b2f4: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x43b2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x43b2f8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x43b2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x43b2fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x43b2fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b300: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43b300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x43b304: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x43B304u;
    {
        const bool branch_taken_0x43b304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B304u;
        // 0x43b308: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b304) {
            ctx->pc = 0x43B330u;
            goto label_43b330;
        }
    }
    ctx->pc = 0x43B30Cu;
    // 0x43b30c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x43b30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x43b310: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x43b310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x43b314: 0x2442d1a0  addiu       $v0, $v0, -0x2E60
    ctx->pc = 0x43b314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955424));
    // 0x43b318: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x43b318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x43b31c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x43b31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x43b320: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x43b320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x43b324: 0xc10eb46  jal         func_43AD18
    ctx->pc = 0x43B324u;
    SET_GPR_U32(ctx, 31, 0x43B32Cu);
    ctx->pc = 0x43B328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43B324u;
    // 0x43b328: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43AD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43AD18u, 0x43B324u, 0x43B32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43B32Cu;
label_43b32c:
    // 0x43b32c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x43b32cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43b330:
    // 0x43b330: 0x118883  sra         $s1, $s1, 2
    ctx->pc = 0x43b330u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 2));
    // 0x43b334: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x43B334u;
    {
        const bool branch_taken_0x43b334 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B334u;
        // 0x43b338: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b334) {
            ctx->pc = 0x43B3C4u;
            goto label_43b3c4;
        }
    }
    ctx->pc = 0x43B33Cu;
    // 0x43b33c: 0x8e700048  lw          $s0, 0x48($s3)
    ctx->pc = 0x43b33cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x43b340: 0x16000013  bnez        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x43B340u;
    {
        const bool branch_taken_0x43b340 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x43B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B340u;
        // 0x43b344: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b340) {
            ctx->pc = 0x43B390u;
            goto label_43b390;
        }
    }
    ctx->pc = 0x43B348u;
    // 0x43b348: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x43b348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b34c: 0xc10ec28  jal         func_43B0A0
    ctx->pc = 0x43B34Cu;
    SET_GPR_U32(ctx, 31, 0x43B354u);
    ctx->pc = 0x43B350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43B34Cu;
    // 0x43b350: 0x24050271  addiu       $a1, $zero, 0x271 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43B0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43B0A0u, 0x43B34Cu, 0x43B354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43B354u;
label_43b354:
    // 0x43b354: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x43b354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b358: 0xae620048  sw          $v0, 0x48($s3)
    ctx->pc = 0x43b358u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
    // 0x43b35c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x43B35Cu;
    {
        const bool branch_taken_0x43b35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B35Cu;
        // 0x43b360: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b35c) {
            ctx->pc = 0x43B38Cu;
            goto label_43b38c;
        }
    }
    ctx->pc = 0x43B364u;
    // 0x43b364: 0x0  nop
    ctx->pc = 0x43b364u;
    // NOP
label_43b368:
    // 0x43b368: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x43B368u;
    {
        const bool branch_taken_0x43b368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43b368) {
            ctx->pc = 0x43B36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43B368u;
            // 0x43b36c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43B38Cu;
            goto label_43b38c;
        }
    }
    ctx->pc = 0x43B370u;
    // 0x43b370: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x43b370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b374: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x43b374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b378: 0xc10ec36  jal         func_43B0D8
    ctx->pc = 0x43B378u;
    SET_GPR_U32(ctx, 31, 0x43B380u);
    ctx->pc = 0x43B37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43B378u;
    // 0x43b37c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43B0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43B0D8u, 0x43B378u, 0x43B380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43B380u;
label_43b380:
    // 0x43b380: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x43b380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x43b384: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x43b384u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x43b388: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x43b388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43b38c:
    // 0x43b38c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x43b38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_43b390:
    // 0x43b390: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x43B390u;
    {
        const bool branch_taken_0x43b390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B390u;
        // 0x43b394: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b390) {
            ctx->pc = 0x43B3B4u;
            goto label_43b3b4;
        }
    }
    ctx->pc = 0x43B398u;
    // 0x43b398: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x43b398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b39c: 0xc10ec36  jal         func_43B0D8
    ctx->pc = 0x43B39Cu;
    SET_GPR_U32(ctx, 31, 0x43B3A4u);
    ctx->pc = 0x43B3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43B39Cu;
    // 0x43b3a0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43B0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43B0D8u, 0x43B39Cu, 0x43B3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43B3A4u;
label_43b3a4:
    // 0x43b3a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x43b3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b3a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x43b3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b3ac: 0xc10eb38  jal         func_43ACE0
    ctx->pc = 0x43B3ACu;
    SET_GPR_U32(ctx, 31, 0x43B3B4u);
    ctx->pc = 0x43B3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43B3ACu;
    // 0x43b3b0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43ACE0u, 0x43B3ACu, 0x43B3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43B3B4u;
label_43b3b4:
    // 0x43b3b4: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x43b3b4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x43b3b8: 0x5620ffeb  bnel        $s1, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x43B3B8u;
    {
        const bool branch_taken_0x43b3b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x43b3b8) {
            ctx->pc = 0x43B3BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43B3B8u;
            // 0x43b3bc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43B368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43b368;
        }
    }
    ctx->pc = 0x43B3C0u;
    // 0x43b3c0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x43b3c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_43b3c4:
    // 0x43b3c4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x43b3c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x43b3c8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x43b3c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x43b3cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x43b3ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43b3d0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x43b3d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43b3d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43b3d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43b3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x43B3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B3D8u;
        // 0x43b3dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43B3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43B3E0u;
}
