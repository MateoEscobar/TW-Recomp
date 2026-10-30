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

// Function: sub_0036F280
// Address: 0x36f280 - 0x36f360
void sub_0036F280_0x36f280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F280_0x36f280");
#endif

    switch (ctx->pc) {
        case 0x36f2b0u: goto label_36f2b0;
        case 0x36f2b8u: goto label_36f2b8;
        case 0x36f2ccu: goto label_36f2cc;
        case 0x36f2e0u: goto label_36f2e0;
        case 0x36f2e8u: goto label_36f2e8;
        case 0x36f2fcu: goto label_36f2fc;
        case 0x36f31cu: goto label_36f31c;
        case 0x36f324u: goto label_36f324;
        case 0x36f33cu: goto label_36f33c;
        default: break;
    }

    ctx->pc = 0x36f280u;

    // 0x36f280: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x36f280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x36f284: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36f284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36f288: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x36f288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x36f28c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x36f28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x36f290: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36f290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f294: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36f294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f298: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x36f298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x36f29c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x36f29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x36f2a0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x36f2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x36f2a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36f2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36f2a8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36F2A8u;
    SET_GPR_U32(ctx, 31, 0x36F2B0u);
    ctx->pc = 0x36F2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F2A8u;
    // 0x36f2ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36F2A8u, 0x36F2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F2B0u;
label_36f2b0:
    // 0x36f2b0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36F2B0u;
    SET_GPR_U32(ctx, 31, 0x36F2B8u);
    ctx->pc = 0x36F2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F2B0u;
    // 0x36f2b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36F2B0u, 0x36F2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F2B8u;
label_36f2b8:
    // 0x36f2b8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x36f2b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f2bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36f2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f2c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36f2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36f2c4: 0xc102488  jal         func_409220
    ctx->pc = 0x36F2C4u;
    SET_GPR_U32(ctx, 31, 0x36F2CCu);
    ctx->pc = 0x36F2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F2C4u;
    // 0x36f2c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36F2C4u, 0x36F2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F2CCu;
label_36f2cc:
    // 0x36f2cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36f2ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f2d0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x36f2d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f2d4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36f2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36f2d8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36F2D8u;
    SET_GPR_U32(ctx, 31, 0x36F2E0u);
    ctx->pc = 0x36F2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F2D8u;
    // 0x36f2dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36F2D8u, 0x36F2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F2E0u;
label_36f2e0:
    // 0x36f2e0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36F2E0u;
    SET_GPR_U32(ctx, 31, 0x36F2E8u);
    ctx->pc = 0x36F2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F2E0u;
    // 0x36f2e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36F2E0u, 0x36F2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F2E8u;
label_36f2e8:
    // 0x36f2e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36f2e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f2ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36f2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f2f0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36f2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36f2f4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36F2F4u;
    SET_GPR_U32(ctx, 31, 0x36F2FCu);
    ctx->pc = 0x36F2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F2F4u;
    // 0x36f2f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36F2F4u, 0x36F2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F2FCu;
label_36f2fc:
    // 0x36f2fc: 0x3406817e  ori         $a2, $zero, 0x817E
    ctx->pc = 0x36f2fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33150);
    // 0x36f300: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x36f300u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x36f304: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x36f304u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x36f308: 0x637f8  dsll        $a2, $a2, 31
    ctx->pc = 0x36f308u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 31);
    // 0x36f30c: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x36f30cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36f310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36f310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f314: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36F314u;
    SET_GPR_U32(ctx, 31, 0x36F31Cu);
    ctx->pc = 0x36F318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F314u;
    // 0x36f318: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36F314u, 0x36F31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F31Cu;
label_36f31c:
    // 0x36f31c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36F31Cu;
    SET_GPR_U32(ctx, 31, 0x36F324u);
    ctx->pc = 0x36F320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F31Cu;
    // 0x36f320: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36F31Cu, 0x36F324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F324u;
label_36f324:
    // 0x36f324: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x36f324u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f328: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x36f328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f32c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x36f32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f330: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x36f330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f334: 0xc076b62  jal         func_1DAD88
    ctx->pc = 0x36F334u;
    SET_GPR_U32(ctx, 31, 0x36F33Cu);
    ctx->pc = 0x36F338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F334u;
    // 0x36f338: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAD88u, 0x36F334u, 0x36F33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F33Cu;
label_36f33c:
    // 0x36f33c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x36f33cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36f340: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36f340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f344: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x36f344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36f348: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x36f348u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36f34c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x36f34cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36f350: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x36f350u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36f354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36f354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f358: 0x3e00008  jr          $ra
    ctx->pc = 0x36F358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F358u;
        // 0x36f35c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F360u;
}
