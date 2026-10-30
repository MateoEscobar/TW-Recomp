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

// Function: sub_003A3898
// Address: 0x3a3898 - 0x3a3958
void sub_003A3898_0x3a3898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3898_0x3a3898");
#endif

    switch (ctx->pc) {
        case 0x3a38acu: goto label_3a38ac;
        case 0x3a38e8u: goto label_3a38e8;
        case 0x3a3900u: goto label_3a3900;
        case 0x3a3918u: goto label_3a3918;
        case 0x3a3930u: goto label_3a3930;
        case 0x3a3948u: goto label_3a3948;
        case 0x3a3950u: goto label_3a3950;
        default: break;
    }

    ctx->pc = 0x3a3898u;

    // 0x3a3898: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a3898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a389c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a389cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a38a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a38a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a38a4: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x3A38A4u;
    SET_GPR_U32(ctx, 31, 0x3A38ACu);
    ctx->pc = 0x3A38A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A38A4u;
    // 0x3a38a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x3A38A4u, 0x3A38ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A38ACu;
label_3a38ac:
    // 0x3a38ac: 0x2603fffb  addiu       $v1, $s0, -0x5
    ctx->pc = 0x3a38acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967291));
    // 0x3a38b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a38b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a38b4: 0x2c62000d  sltiu       $v0, $v1, 0xD
    ctx->pc = 0x3a38b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x3a38b8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3A38B8u;
    {
        const bool branch_taken_0x3a38b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A38BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A38B8u;
        // 0x3a38bc: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a38b8) {
            ctx->pc = 0x3A3960u;
            return;
        }
    }
    ctx->pc = 0x3A38C0u;
    // 0x3a38c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a38c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a38c4: 0x24421a30  addiu       $v0, $v0, 0x1A30
    ctx->pc = 0x3a38c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6704));
    // 0x3a38c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a38c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a38cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a38ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a38d0: 0x800008  jr          $a0
    ctx->pc = 0x3A38D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A38D8u: goto label_3a38d8;
            case 0x3A38F0u: goto label_3a38f0;
            case 0x3A3908u: goto label_3a3908;
            case 0x3A3920u: goto label_3a3920;
            case 0x3A3938u: goto label_3a3938;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A38D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A38D8u;
label_3a38d8:
    // 0x3a38d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a38d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a38dc: 0x94a50112  lhu         $a1, 0x112($a1)
    ctx->pc = 0x3a38dcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 274)));
    // 0x3a38e0: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x3A38E0u;
    SET_GPR_U32(ctx, 31, 0x3A38E8u);
    ctx->pc = 0x3A38E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A38E0u;
    // 0x3a38e4: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3A38E0u, 0x3A38E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A38E8u;
label_3a38e8:
    // 0x3a38e8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3A38E8u;
    {
        const bool branch_taken_0x3a38e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A38ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A38E8u;
        // 0x3a38ec: 0xc4400068  lwc1        $f0, 0x68($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a38e8) {
            ctx->pc = 0x3A3964u;
            return;
        }
    }
    ctx->pc = 0x3A38F0u;
label_3a38f0:
    // 0x3a38f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a38f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a38f4: 0x94a50112  lhu         $a1, 0x112($a1)
    ctx->pc = 0x3a38f4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 274)));
    // 0x3a38f8: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x3A38F8u;
    SET_GPR_U32(ctx, 31, 0x3A3900u);
    ctx->pc = 0x3A38FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A38F8u;
    // 0x3a38fc: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3A38F8u, 0x3A3900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3900u;
label_3a3900:
    // 0x3a3900: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3A3900u;
    {
        const bool branch_taken_0x3a3900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3900u;
        // 0x3a3904: 0xc440006c  lwc1        $f0, 0x6C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3900) {
            ctx->pc = 0x3A3964u;
            return;
        }
    }
    ctx->pc = 0x3A3908u;
label_3a3908:
    // 0x3a3908: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a3908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a390c: 0x94a50112  lhu         $a1, 0x112($a1)
    ctx->pc = 0x3a390cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 274)));
    // 0x3a3910: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x3A3910u;
    SET_GPR_U32(ctx, 31, 0x3A3918u);
    ctx->pc = 0x3A3914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3910u;
    // 0x3a3914: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3A3910u, 0x3A3918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3918u;
label_3a3918:
    // 0x3a3918: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3A3918u;
    {
        const bool branch_taken_0x3a3918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3918u;
        // 0x3a391c: 0xc4400070  lwc1        $f0, 0x70($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3918) {
            ctx->pc = 0x3A3964u;
            return;
        }
    }
    ctx->pc = 0x3A3920u;
label_3a3920:
    // 0x3a3920: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a3920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a3924: 0x94a50112  lhu         $a1, 0x112($a1)
    ctx->pc = 0x3a3924u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 274)));
    // 0x3a3928: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x3A3928u;
    SET_GPR_U32(ctx, 31, 0x3A3930u);
    ctx->pc = 0x3A392Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3928u;
    // 0x3a392c: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3A3928u, 0x3A3930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3930u;
label_3a3930:
    // 0x3a3930: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3A3930u;
    {
        const bool branch_taken_0x3a3930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3930u;
        // 0x3a3934: 0xc4400074  lwc1        $f0, 0x74($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3930) {
            ctx->pc = 0x3A3964u;
            return;
        }
    }
    ctx->pc = 0x3A3938u;
label_3a3938:
    // 0x3a3938: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a3938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a393c: 0x94a50112  lhu         $a1, 0x112($a1)
    ctx->pc = 0x3a393cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 274)));
    // 0x3a3940: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x3A3940u;
    SET_GPR_U32(ctx, 31, 0x3A3948u);
    ctx->pc = 0x3A3944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3940u;
    // 0x3a3944: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3A3940u, 0x3A3948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3948u;
label_3a3948:
    // 0x3a3948: 0xc13d2ba  jal         func_4F4AE8
    ctx->pc = 0x3A3948u;
    SET_GPR_U32(ctx, 31, 0x3A3950u);
    ctx->pc = 0x3A394Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3948u;
    // 0x3a394c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F4AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F4AE8u, 0x3A3948u, 0x3A3950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3950u;
label_3a3950:
    // 0x3a3950: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A3950u;
    {
        const bool branch_taken_0x3a3950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3950u;
        // 0x3a3954: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3950) {
            ctx->pc = 0x3A3968u;
            return;
        }
    }
    ctx->pc = 0x3A3958u;
}
