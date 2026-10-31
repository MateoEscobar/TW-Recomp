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

// Function: sub_003242E0
// Address: 0x3242e0 - 0x3243d8
void sub_003242E0_0x3242e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003242E0_0x3242e0");
#endif

    switch (ctx->pc) {
        case 0x324308u: goto label_324308;
        case 0x32431cu: goto label_32431c;
        case 0x324328u: goto label_324328;
        case 0x324368u: goto label_324368;
        case 0x32438cu: goto label_32438c;
        case 0x3243b0u: goto label_3243b0;
        default: break;
    }

    ctx->pc = 0x3242e0u;

    // 0x3242e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3242e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3242e4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3242e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3242e8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3242e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3242ec: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3242ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3242f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3242f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3242f4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3242f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3242f8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3242f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x3242fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3242fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x324300: 0xc0c8ca6  jal         func_323298
    ctx->pc = 0x324300u;
    SET_GPR_U32(ctx, 31, 0x324308u);
    ctx->pc = 0x324304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324300u;
    // 0x324304: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323298u, 0x324300u, 0x324308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324308u;
label_324308:
    // 0x324308: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x324308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x32430c: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x32430cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x324310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x324310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324314: 0xc0cbf58  jal         func_32FD60
    ctx->pc = 0x324314u;
    SET_GPR_U32(ctx, 31, 0x32431Cu);
    ctx->pc = 0x324318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324314u;
    // 0x324318: 0x24a54838  addiu       $a1, $a1, 0x4838 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FD60u, 0x324314u, 0x32431Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32431Cu;
label_32431c:
    // 0x32431c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32431cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324320: 0xc0cc710  jal         func_331C40
    ctx->pc = 0x324320u;
    SET_GPR_U32(ctx, 31, 0x324328u);
    ctx->pc = 0x324324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324320u;
    // 0x324324: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C40u, 0x324320u, 0x324328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324328u;
label_324328:
    // 0x324328: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x324328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32432c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32432cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x324330: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x324330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x324334: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x324334u;
    {
        const bool branch_taken_0x324334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x324334) {
            ctx->pc = 0x324338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324334u;
            // 0x324338: 0x86510006  lh          $s1, 0x6($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324344u;
            goto label_324344;
        }
    }
    ctx->pc = 0x32433Cu;
    // 0x32433c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x32433Cu;
    {
        const bool branch_taken_0x32433c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32433Cu;
        // 0x324340: 0xdc840008  ld          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32433c) {
            ctx->pc = 0x3243A8u;
            goto label_3243a8;
        }
    }
    ctx->pc = 0x324344u;
label_324344:
    // 0x324344: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x324344u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324348: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x324348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32434c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x32434cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x324350: 0x12220014  beq         $s1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x324350u;
    {
        const bool branch_taken_0x324350 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x324354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324350u;
        // 0x324354: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324350) {
            ctx->pc = 0x3243A4u;
            goto label_3243a4;
        }
    }
    ctx->pc = 0x324358u;
    // 0x324358: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x324358u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32435c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x32435cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324360: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x324360u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x324364: 0x0  nop
    ctx->pc = 0x324364u;
    // NOP
label_324368:
    // 0x324368: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x324368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32436c: 0x5455000b  bnel        $v0, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x32436Cu;
    {
        const bool branch_taken_0x32436c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x32436c) {
            ctx->pc = 0x324370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32436Cu;
            // 0x324370: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32439Cu;
            goto label_32439c;
        }
    }
    ctx->pc = 0x324374u;
    // 0x324374: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x324374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x324378: 0x50540008  beql        $v0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x324378u;
    {
        const bool branch_taken_0x324378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x324378) {
            ctx->pc = 0x32437Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324378u;
            // 0x32437c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32439Cu;
            goto label_32439c;
        }
    }
    ctx->pc = 0x324380u;
    // 0x324380: 0xde040008  ld          $a0, 0x8($s0)
    ctx->pc = 0x324380u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x324384: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x324384u;
    SET_GPR_U32(ctx, 31, 0x32438Cu);
    ctx->pc = 0x324388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324384u;
    // 0x324388: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x324384u, 0x32438Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32438Cu;
label_32438c:
    // 0x32438c: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x32438Cu;
    {
        const bool branch_taken_0x32438c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x324390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32438Cu;
        // 0x324390: 0xde030008  ld          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32438c) {
            ctx->pc = 0x324398u;
            goto label_324398;
        }
    }
    ctx->pc = 0x324394u;
    // 0x324394: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x324394u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_324398:
    // 0x324398: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x324398u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_32439c:
    // 0x32439c: 0x1632fff2  bne         $s1, $s2, . + 4 + (-0xE << 2)
    ctx->pc = 0x32439Cu;
    {
        const bool branch_taken_0x32439c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x3243A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32439Cu;
        // 0x3243a0: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32439c) {
            ctx->pc = 0x324368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324368;
        }
    }
    ctx->pc = 0x3243A4u;
label_3243a4:
    // 0x3243a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3243a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3243a8:
    // 0x3243a8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3243A8u;
    SET_GPR_U32(ctx, 31, 0x3243B0u);
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3243A8u, 0x3243B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3243B0u;
label_3243b0:
    // 0x3243b0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3243b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3243b4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3243b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3243b8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3243b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3243bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3243bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3243c0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3243c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3243c4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3243c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3243c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3243c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3243cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3243CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3243D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3243CCu;
        // 0x3243d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3243CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3243D4u;
    // 0x3243d4: 0x0  nop
    ctx->pc = 0x3243d4u;
    // NOP
    ctx->pc = 0x3243d8u;
}
