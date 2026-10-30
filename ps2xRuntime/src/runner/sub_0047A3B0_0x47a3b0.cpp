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

// Function: sub_0047A3B0
// Address: 0x47a3b0 - 0x47a4d0
void sub_0047A3B0_0x47a3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047A3B0_0x47a3b0");
#endif

    switch (ctx->pc) {
        case 0x47a400u: goto label_47a400;
        case 0x47a42cu: goto label_47a42c;
        case 0x47a440u: goto label_47a440;
        case 0x47a488u: goto label_47a488;
        default: break;
    }

    ctx->pc = 0x47a3b0u;

    // 0x47a3b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x47a3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x47a3b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x47a3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x47a3b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x47a3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x47a3bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47a3bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47a3c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47a3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x47a3c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x47a3c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47a3c8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x47a3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x47a3cc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x47a3ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47a3d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47a3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47a3d4: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x47A3D4u;
    {
        const bool branch_taken_0x47a3d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A3D4u;
        // 0x47a3d8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a3d4) {
            ctx->pc = 0x47A41Cu;
            goto label_47a41c;
        }
    }
    ctx->pc = 0x47A3DCu;
    // 0x47a3dc: 0x1a200034  blez        $s1, . + 4 + (0x34 << 2)
    ctx->pc = 0x47A3DCu;
    {
        const bool branch_taken_0x47a3dc = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x47A3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A3DCu;
        // 0x47a3e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a3dc) {
            ctx->pc = 0x47A4B0u;
            goto label_47a4b0;
        }
    }
    ctx->pc = 0x47A3E4u;
    // 0x47a3e4: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x47a3e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x47a3e8: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x47A3E8u;
    {
        const bool branch_taken_0x47a3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A3E8u;
        // 0x47a3ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a3e8) {
            ctx->pc = 0x47A4B0u;
            goto label_47a4b0;
        }
    }
    ctx->pc = 0x47A3F0u;
    // 0x47a3f0: 0x5a600030  blezl       $s3, . + 4 + (0x30 << 2)
    ctx->pc = 0x47A3F0u;
    {
        const bool branch_taken_0x47a3f0 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x47a3f0) {
            ctx->pc = 0x47A3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47A3F0u;
            // 0x47a3f4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47A4B4u;
            goto label_47a4b4;
        }
    }
    ctx->pc = 0x47A3F8u;
    // 0x47a3f8: 0xc129c4c  jal         func_4A7130
    ctx->pc = 0x47A3F8u;
    SET_GPR_U32(ctx, 31, 0x47A400u);
    ctx->pc = 0x47A3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47A3F8u;
    // 0x47a3fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A7130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A7130u, 0x47A3F8u, 0x47A400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47A400u;
label_47a400:
    // 0x47a400: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47a400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47a404: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x47A404u;
    {
        const bool branch_taken_0x47a404 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x47a404) {
            ctx->pc = 0x47A408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47A404u;
            // 0x47a408: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47A424u;
            goto label_47a424;
        }
    }
    ctx->pc = 0x47A40Cu;
    // 0x47a40c: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x47a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x47a410: 0x30420013  andi        $v0, $v0, 0x13
    ctx->pc = 0x47a410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)19);
    // 0x47a414: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x47A414u;
    {
        const bool branch_taken_0x47a414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A414u;
        // 0x47a418: 0x111840  sll         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a414) {
            ctx->pc = 0x47A490u;
            goto label_47a490;
        }
    }
    ctx->pc = 0x47A41Cu;
label_47a41c:
    // 0x47a41c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x47A41Cu;
    {
        const bool branch_taken_0x47a41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A41Cu;
        // 0x47a420: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a41c) {
            ctx->pc = 0x47A4B0u;
            goto label_47a4b0;
        }
    }
    ctx->pc = 0x47A424u;
label_47a424:
    // 0x47a424: 0xc129c4e  jal         func_4A7138
    ctx->pc = 0x47A424u;
    SET_GPR_U32(ctx, 31, 0x47A42Cu);
    ctx->pc = 0x47A428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47A424u;
    // 0x47a428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A7138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A7138u, 0x47A424u, 0x47A42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47A42Cu;
label_47a42c:
    // 0x47a42c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47a42cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47a430: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x47A430u;
    {
        const bool branch_taken_0x47a430 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A430u;
        // 0x47a434: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a430) {
            ctx->pc = 0x47A478u;
            goto label_47a478;
        }
    }
    ctx->pc = 0x47A438u;
    // 0x47a438: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x47a438u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47a43c: 0x0  nop
    ctx->pc = 0x47a43cu;
    // NOP
label_47a440:
    // 0x47a440: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x47a440u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x47a444: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x47a444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x47a448: 0x2c82000b  sltiu       $v0, $a0, 0xB
    ctx->pc = 0x47a448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x47a44c: 0x0  nop
    ctx->pc = 0x47a44cu;
    // NOP
    // 0x47a450: 0x0  nop
    ctx->pc = 0x47a450u;
    // NOP
    // 0x47a454: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x47A454u;
    {
        const bool branch_taken_0x47a454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47A458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A454u;
        // 0x47a458: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a454) {
            ctx->pc = 0x47A440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47a440;
        }
    }
    ctx->pc = 0x47A45Cu;
    // 0x47a45c: 0x24030114  addiu       $v1, $zero, 0x114
    ctx->pc = 0x47a45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    // 0x47a460: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x47a460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x47a464: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x47a464u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x47a468: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x47a468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47a46c: 0xaca2003c  sw          $v0, 0x3C($a1)
    ctx->pc = 0x47a46cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
    // 0x47a470: 0xaca00040  sw          $zero, 0x40($a1)
    ctx->pc = 0x47a470u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
    // 0x47a474: 0xaca30038  sw          $v1, 0x38($a1)
    ctx->pc = 0x47a474u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 3));
label_47a478:
    // 0x47a478: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x47A478u;
    {
        const bool branch_taken_0x47a478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A478u;
        // 0x47a47c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a478) {
            ctx->pc = 0x47A4B0u;
            goto label_47a4b0;
        }
    }
    ctx->pc = 0x47A480u;
    // 0x47a480: 0xc129c4c  jal         func_4A7130
    ctx->pc = 0x47A480u;
    SET_GPR_U32(ctx, 31, 0x47A488u);
    ctx->pc = 0x47A484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47A480u;
    // 0x47a484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A7130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A7130u, 0x47A480u, 0x47A488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47A488u;
label_47a488:
    // 0x47a488: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47a488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47a48c: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x47a48cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_47a490:
    // 0x47a490: 0x2512018  mult        $a0, $s2, $s1
    ctx->pc = 0x47a490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x47a494: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x47a494u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x47a498: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x47a498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x47a49c: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x47a49cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
    // 0x47a4a0: 0xacb1003c  sw          $s1, 0x3C($a1)
    ctx->pc = 0x47a4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 17));
    // 0x47a4a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x47a4a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47a4a8: 0xaca40034  sw          $a0, 0x34($a1)
    ctx->pc = 0x47a4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 4));
    // 0x47a4ac: 0xaca30038  sw          $v1, 0x38($a1)
    ctx->pc = 0x47a4acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 3));
label_47a4b0:
    // 0x47a4b0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x47a4b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47a4b4:
    // 0x47a4b4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x47a4b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47a4b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47a4b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47a4bc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x47a4bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47a4c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47a4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47a4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x47A4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47A4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A4C4u;
        // 0x47a4c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47A4C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47A4CCu;
    // 0x47a4cc: 0x0  nop
    ctx->pc = 0x47a4ccu;
    // NOP
    ctx->pc = 0x47a4d0u;
}
