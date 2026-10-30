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

// Function: sub_0011C2F0
// Address: 0x11c2f0 - 0x11c3b8
void sub_0011C2F0_0x11c2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C2F0_0x11c2f0");
#endif

    switch (ctx->pc) {
        case 0x11c318u: goto label_11c318;
        case 0x11c32cu: goto label_11c32c;
        case 0x11c350u: goto label_11c350;
        case 0x11c358u: goto label_11c358;
        case 0x11c374u: goto label_11c374;
        case 0x11c390u: goto label_11c390;
        default: break;
    }

    ctx->pc = 0x11c2f0u;

    // 0x11c2f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11c2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11c2f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11c2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c2f8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x11c2f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x11c2fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11c2fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c300: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11c300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11c304: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11c304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11c308: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x11c308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x11c30c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11c30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11c310: 0xc047e78  jal         func_11F9E0
    ctx->pc = 0x11C310u;
    SET_GPR_U32(ctx, 31, 0x11C318u);
    ctx->pc = 0x11C314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C310u;
    // 0x11c314: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x11C310u, 0x11C318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C318u;
label_11c318:
    // 0x11c318: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11c318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c31c: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x11C31Cu;
    {
        const bool branch_taken_0x11c31c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C31Cu;
        // 0x11c320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c31c) {
            ctx->pc = 0x11C398u;
            goto label_11c398;
        }
    }
    ctx->pc = 0x11C324u;
    // 0x11c324: 0xc049f52  jal         func_127D48
    ctx->pc = 0x11C324u;
    SET_GPR_U32(ctx, 31, 0x11C32Cu);
    ctx->pc = 0x11C328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C324u;
    // 0x11c328: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D48u, 0x11C324u, 0x11C32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C32Cu;
label_11c32c:
    // 0x11c32c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x11c32cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c330: 0x7a020180  lq          $v0, 0x180($s0)
    ctx->pc = 0x11c330u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x11c334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c338: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x11c338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x11c33c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x11c33cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11c340: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11c340u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11c344: 0x7e020240  sq          $v0, 0x240($s0)
    ctx->pc = 0x11c344u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 576), GPR_VEC(ctx, 2));
    // 0x11c348: 0xc0493ce  jal         func_124F38
    ctx->pc = 0x11C348u;
    SET_GPR_U32(ctx, 31, 0x11C350u);
    ctx->pc = 0x11C34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C348u;
    // 0x11c34c: 0x7e020270  sq          $v0, 0x270($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 624), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F38u, 0x11C348u, 0x11C350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C350u;
label_11c350:
    // 0x11c350: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x11c350u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x11c354: 0x0  nop
    ctx->pc = 0x11c354u;
    // NOP
label_11c358:
    // 0x11c358: 0x8e43489c  lw          $v1, 0x489C($s2)
    ctx->pc = 0x11c358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
    // 0x11c35c: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x11c35cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x11c360: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x11c360u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11c364: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11C364u;
    {
        const bool branch_taken_0x11c364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C364u;
        // 0x11c368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c364) {
            ctx->pc = 0x11C398u;
            goto label_11c398;
        }
    }
    ctx->pc = 0x11C36Cu;
    // 0x11c36c: 0xc047e78  jal         func_11F9E0
    ctx->pc = 0x11C36Cu;
    SET_GPR_U32(ctx, 31, 0x11C374u);
    ctx->pc = 0x11C370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C36Cu;
    // 0x11c370: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x11C36Cu, 0x11C374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C374u;
label_11c374:
    // 0x11c374: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11c374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c378: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11C378u;
    {
        const bool branch_taken_0x11c378 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C378u;
        // 0x11c37c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c378) {
            ctx->pc = 0x11C398u;
            goto label_11c398;
        }
    }
    ctx->pc = 0x11C380u;
    // 0x11c380: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x11c380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x11c384: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x11c384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11c388: 0xc0493ce  jal         func_124F38
    ctx->pc = 0x11C388u;
    SET_GPR_U32(ctx, 31, 0x11C390u);
    ctx->pc = 0x11C38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C388u;
    // 0x11c38c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F38u, 0x11C388u, 0x11C390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C390u;
label_11c390:
    // 0x11c390: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x11C390u;
    {
        const bool branch_taken_0x11c390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C390u;
        // 0x11c394: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c390) {
            ctx->pc = 0x11C358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c358;
        }
    }
    ctx->pc = 0x11C398u;
label_11c398:
    // 0x11c398: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11c398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c39c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11c39cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c3a0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x11c3a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c3a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11c3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c3a8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x11c3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11c3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x11C3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C3ACu;
        // 0x11c3b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C3B4u;
    // 0x11c3b4: 0x0  nop
    ctx->pc = 0x11c3b4u;
    // NOP
    ctx->pc = 0x11c3b8u;
}
