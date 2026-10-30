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

// Function: sub_0036E2D8
// Address: 0x36e2d8 - 0x36e388
void sub_0036E2D8_0x36e2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E2D8_0x36e2d8");
#endif

    switch (ctx->pc) {
        case 0x36e2f8u: goto label_36e2f8;
        case 0x36e310u: goto label_36e310;
        case 0x36e318u: goto label_36e318;
        case 0x36e330u: goto label_36e330;
        case 0x36e338u: goto label_36e338;
        case 0x36e348u: goto label_36e348;
        case 0x36e35cu: goto label_36e35c;
        default: break;
    }

    ctx->pc = 0x36e2d8u;

    // 0x36e2d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36e2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x36e2dc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x36e2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x36e2e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x36e2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x36e2e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36e2e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e2e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36e2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36e2ec: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x36e2ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e2f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36e2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36e2f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36e2f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36e2f8:
    // 0x36e2f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e2f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e2fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36e2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e300: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36e300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e304: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36e304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e308: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x36E308u;
    SET_GPR_U32(ctx, 31, 0x36E310u);
    ctx->pc = 0x36E30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E308u;
    // 0x36e30c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x36E308u, 0x36E310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E310u;
label_36e310:
    // 0x36e310: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36E310u;
    SET_GPR_U32(ctx, 31, 0x36E318u);
    ctx->pc = 0x36E314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E310u;
    // 0x36e314: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36E310u, 0x36E318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E318u;
label_36e318:
    // 0x36e318: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x36e318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x36e31c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x36e31cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36e320: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36E320u;
    {
        const bool branch_taken_0x36e320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E320u;
        // 0x36e324: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e320) {
            ctx->pc = 0x36E2F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36e2f8;
        }
    }
    ctx->pc = 0x36E328u;
    // 0x36e328: 0xc094380  jal         func_250E00
    ctx->pc = 0x36E328u;
    SET_GPR_U32(ctx, 31, 0x36E330u);
    ctx->pc = 0x36E32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E328u;
    // 0x36e32c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250E00u, 0x36E328u, 0x36E330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E330u;
label_36e330:
    // 0x36e330: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36e330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e334: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36e334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_36e338:
    // 0x36e338: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x36e338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x36e33c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e33cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e340: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x36E340u;
    SET_GPR_U32(ctx, 31, 0x36E348u);
    ctx->pc = 0x36E344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E340u;
    // 0x36e344: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x36E340u, 0x36E348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E348u;
label_36e348:
    // 0x36e348: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36e348u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e34c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36e34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e350: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36e350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e354: 0xc102576  jal         func_4095D8
    ctx->pc = 0x36E354u;
    SET_GPR_U32(ctx, 31, 0x36E35Cu);
    ctx->pc = 0x36E358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E354u;
    // 0x36e358: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x36E354u, 0x36E35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E35Cu;
label_36e35c:
    // 0x36e35c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x36e35cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36e360: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36E360u;
    {
        const bool branch_taken_0x36e360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E360u;
        // 0x36e364: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e360) {
            ctx->pc = 0x36E338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36e338;
        }
    }
    ctx->pc = 0x36E368u;
    // 0x36e368: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x36e368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36e36c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36e36cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e370: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x36e370u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36e374: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36e374u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36e378: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36e378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36e37c: 0x3e00008  jr          $ra
    ctx->pc = 0x36E37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E37Cu;
        // 0x36e380: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E384u;
    // 0x36e384: 0x0  nop
    ctx->pc = 0x36e384u;
    // NOP
    ctx->pc = 0x36e388u;
}
