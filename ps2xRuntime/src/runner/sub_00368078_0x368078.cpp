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

// Function: sub_00368078
// Address: 0x368078 - 0x368240
void sub_00368078_0x368078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368078_0x368078");
#endif

    switch (ctx->pc) {
        case 0x3680b4u: goto label_3680b4;
        case 0x3680bcu: goto label_3680bc;
        case 0x3680d0u: goto label_3680d0;
        case 0x3680d8u: goto label_3680d8;
        case 0x3680ecu: goto label_3680ec;
        case 0x368100u: goto label_368100;
        case 0x368110u: goto label_368110;
        case 0x368128u: goto label_368128;
        case 0x368130u: goto label_368130;
        case 0x368148u: goto label_368148;
        case 0x368160u: goto label_368160;
        case 0x368168u: goto label_368168;
        case 0x368194u: goto label_368194;
        case 0x3681a0u: goto label_3681a0;
        case 0x3681a8u: goto label_3681a8;
        case 0x3681b8u: goto label_3681b8;
        case 0x3681ccu: goto label_3681cc;
        case 0x3681e0u: goto label_3681e0;
        case 0x3681f0u: goto label_3681f0;
        case 0x368204u: goto label_368204;
        default: break;
    }

    ctx->pc = 0x368078u;

    // 0x368078: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x368078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x36807c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36807cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x368080: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x368080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x368084: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x368084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x368088: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x368088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36808c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36808cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368090: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x368090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x368094: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x368094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x368098: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x368098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x36809c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x36809cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3680a0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3680a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x3680a4: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3680a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x3680a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3680a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3680ac: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3680ACu;
    SET_GPR_U32(ctx, 31, 0x3680B4u);
    ctx->pc = 0x3680B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3680ACu;
    // 0x3680b0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3680ACu, 0x3680B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3680B4u;
label_3680b4:
    // 0x3680b4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3680B4u;
    SET_GPR_U32(ctx, 31, 0x3680BCu);
    ctx->pc = 0x3680B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3680B4u;
    // 0x3680b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3680B4u, 0x3680BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3680BCu;
label_3680bc:
    // 0x3680bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3680bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3680c0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3680c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3680c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3680c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3680c8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3680C8u;
    SET_GPR_U32(ctx, 31, 0x3680D0u);
    ctx->pc = 0x3680CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3680C8u;
    // 0x3680cc: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3680C8u, 0x3680D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3680D0u;
label_3680d0:
    // 0x3680d0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3680D0u;
    SET_GPR_U32(ctx, 31, 0x3680D8u);
    ctx->pc = 0x3680D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3680D0u;
    // 0x3680d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3680D0u, 0x3680D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3680D8u;
label_3680d8:
    // 0x3680d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3680d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3680dc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3680dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3680e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3680e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3680e4: 0xc102488  jal         func_409220
    ctx->pc = 0x3680E4u;
    SET_GPR_U32(ctx, 31, 0x3680ECu);
    ctx->pc = 0x3680E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3680E4u;
    // 0x3680e8: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3680E4u, 0x3680ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3680ECu;
label_3680ec:
    // 0x3680ec: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3680ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3680f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3680f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3680f4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3680f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3680f8: 0xc1024c6  jal         func_409318
    ctx->pc = 0x3680F8u;
    SET_GPR_U32(ctx, 31, 0x368100u);
    ctx->pc = 0x3680FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3680F8u;
    // 0x3680fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x3680F8u, 0x368100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368100u;
label_368100:
    // 0x368100: 0x2a02b  sltu        $s4, $zero, $v0
    ctx->pc = 0x368100u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x368104: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x368104u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x368108: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x368108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36810c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x36810cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_368110:
    // 0x368110: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x368110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x368114: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x368114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368118: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x368118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36811c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36811cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368120: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x368120u;
    SET_GPR_U32(ctx, 31, 0x368128u);
    ctx->pc = 0x368124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368120u;
    // 0x368124: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x368120u, 0x368128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368128u;
label_368128:
    // 0x368128: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x368128u;
    SET_GPR_U32(ctx, 31, 0x368130u);
    ctx->pc = 0x36812Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368128u;
    // 0x36812c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x368128u, 0x368130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368130u;
label_368130:
    // 0x368130: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x368130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x368134: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x368134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x368138: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x368138u;
    {
        const bool branch_taken_0x368138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368138u;
        // 0x36813c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368138) {
            ctx->pc = 0x368110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368110;
        }
    }
    ctx->pc = 0x368140u;
    // 0x368140: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x368140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368144: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x368144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_368148:
    // 0x368148: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x368148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36814c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36814cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368150: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x368150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x368154: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x368154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368158: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x368158u;
    SET_GPR_U32(ctx, 31, 0x368160u);
    ctx->pc = 0x36815Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368158u;
    // 0x36815c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x368158u, 0x368160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368160u;
label_368160:
    // 0x368160: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x368160u;
    SET_GPR_U32(ctx, 31, 0x368168u);
    ctx->pc = 0x368164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368160u;
    // 0x368164: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x368160u, 0x368168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368168u;
label_368168:
    // 0x368168: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x368168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x36816c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x36816cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x368170: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x368170u;
    {
        const bool branch_taken_0x368170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368170u;
        // 0x368174: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368170) {
            ctx->pc = 0x368148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368148;
        }
    }
    ctx->pc = 0x368178u;
    // 0x368178: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x368178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36817c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x36817cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368180: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x368180u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368184: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x368184u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368188: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x368188u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36818c: 0xc0d52ee  jal         func_354BB8
    ctx->pc = 0x36818Cu;
    SET_GPR_U32(ctx, 31, 0x368194u);
    ctx->pc = 0x368190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36818Cu;
    // 0x368190: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354BB8u, 0x36818Cu, 0x368194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368194u;
label_368194:
    // 0x368194: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x368194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368198: 0xc102562  jal         func_409588
    ctx->pc = 0x368198u;
    SET_GPR_U32(ctx, 31, 0x3681A0u);
    ctx->pc = 0x36819Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368198u;
    // 0x36819c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x368198u, 0x3681A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3681A0u;
label_3681a0:
    // 0x3681a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3681a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3681a4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3681a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3681a8:
    // 0x3681a8: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x3681a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x3681ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3681acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3681b0: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x3681B0u;
    SET_GPR_U32(ctx, 31, 0x3681B8u);
    ctx->pc = 0x3681B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3681B0u;
    // 0x3681b4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x3681B0u, 0x3681B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3681B8u;
label_3681b8:
    // 0x3681b8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3681b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3681bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3681bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3681c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3681c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3681c4: 0xc102576  jal         func_4095D8
    ctx->pc = 0x3681C4u;
    SET_GPR_U32(ctx, 31, 0x3681CCu);
    ctx->pc = 0x3681C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3681C4u;
    // 0x3681c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x3681C4u, 0x3681CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3681CCu;
label_3681cc:
    // 0x3681cc: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x3681ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3681d0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3681D0u;
    {
        const bool branch_taken_0x3681d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3681D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3681D0u;
        // 0x3681d4: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3681d0) {
            ctx->pc = 0x3681A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3681a8;
        }
    }
    ctx->pc = 0x3681D8u;
    // 0x3681d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3681d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3681dc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3681dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3681e0:
    // 0x3681e0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x3681e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3681e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3681e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3681e8: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x3681E8u;
    SET_GPR_U32(ctx, 31, 0x3681F0u);
    ctx->pc = 0x3681ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3681E8u;
    // 0x3681ec: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x3681E8u, 0x3681F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3681F0u;
label_3681f0:
    // 0x3681f0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3681f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3681f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3681f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3681f8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3681f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3681fc: 0xc102576  jal         func_4095D8
    ctx->pc = 0x3681FCu;
    SET_GPR_U32(ctx, 31, 0x368204u);
    ctx->pc = 0x368200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3681FCu;
    // 0x368200: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x3681FCu, 0x368204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368204u;
label_368204:
    // 0x368204: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x368204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x368208: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x368208u;
    {
        const bool branch_taken_0x368208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368208u;
        // 0x36820c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368208) {
            ctx->pc = 0x3681E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3681e0;
        }
    }
    ctx->pc = 0x368210u;
    // 0x368210: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x368210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x368214: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x368214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x368218: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x368218u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36821c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x36821cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x368220: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x368220u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x368224: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x368224u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x368228: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x368228u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36822c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x36822cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x368230: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x368230u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x368234: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x368234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x368238: 0x3e00008  jr          $ra
    ctx->pc = 0x368238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368238u;
        // 0x36823c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368240u;
}
