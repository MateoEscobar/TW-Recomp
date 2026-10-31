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

// Function: sub_0044C348
// Address: 0x44c348 - 0x44c430
void sub_0044C348_0x44c348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044C348_0x44c348");
#endif

    switch (ctx->pc) {
        case 0x44c360u: goto label_44c360;
        case 0x44c370u: goto label_44c370;
        case 0x44c394u: goto label_44c394;
        case 0x44c3a0u: goto label_44c3a0;
        case 0x44c3b0u: goto label_44c3b0;
        case 0x44c3d8u: goto label_44c3d8;
        case 0x44c3e4u: goto label_44c3e4;
        case 0x44c3f8u: goto label_44c3f8;
        case 0x44c404u: goto label_44c404;
        default: break;
    }

    ctx->pc = 0x44c348u;

    // 0x44c348: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44c348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x44c34c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x44c34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44c350: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x44c350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x44c354: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44c354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x44c358: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C358u;
    SET_GPR_U32(ctx, 31, 0x44C360u);
    ctx->pc = 0x44C35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C358u;
    // 0x44c35c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C358u, 0x44C360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C360u;
label_44c360:
    // 0x44c360: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x44C360u;
    {
        const bool branch_taken_0x44c360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C360u;
        // 0x44c364: 0xae020850  sw          $v0, 0x850($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c360) {
            ctx->pc = 0x44C394u;
            goto label_44c394;
        }
    }
    ctx->pc = 0x44C368u;
    // 0x44c368: 0xc11320a  jal         func_44C828
    ctx->pc = 0x44C368u;
    SET_GPR_U32(ctx, 31, 0x44C370u);
    ctx->pc = 0x44C36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C368u;
    // 0x44c36c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C828u, 0x44C368u, 0x44C370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C370u;
label_44c370:
    // 0x44c370: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x44c370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x44c374: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x44c374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x44c378: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x44c378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x44c37c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x44c37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44c380: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x44c380u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x44c384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c388: 0xae03082c  sw          $v1, 0x82C($s0)
    ctx->pc = 0x44c388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
    // 0x44c38c: 0xc11320a  jal         func_44C828
    ctx->pc = 0x44C38Cu;
    SET_GPR_U32(ctx, 31, 0x44C394u);
    ctx->pc = 0x44C390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C38Cu;
    // 0x44c390: 0xae050828  sw          $a1, 0x828($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C828u, 0x44C38Cu, 0x44C394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C394u;
label_44c394:
    // 0x44c394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c398: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C398u;
    SET_GPR_U32(ctx, 31, 0x44C3A0u);
    ctx->pc = 0x44C39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C398u;
    // 0x44c39c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C398u, 0x44C3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C3A0u;
label_44c3a0:
    // 0x44c3a0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x44C3A0u;
    {
        const bool branch_taken_0x44c3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C3A0u;
        // 0x44c3a4: 0xae020854  sw          $v0, 0x854($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c3a0) {
            ctx->pc = 0x44C3D8u;
            goto label_44c3d8;
        }
    }
    ctx->pc = 0x44C3A8u;
    // 0x44c3a8: 0xc11320a  jal         func_44C828
    ctx->pc = 0x44C3A8u;
    SET_GPR_U32(ctx, 31, 0x44C3B0u);
    ctx->pc = 0x44C3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C3A8u;
    // 0x44c3ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C828u, 0x44C3A8u, 0x44C3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C3B0u;
label_44c3b0:
    // 0x44c3b0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x44c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x44c3b4: 0x3c035800  lui         $v1, 0x5800
    ctx->pc = 0x44c3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22528 << 16));
    // 0x44c3b8: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x44c3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x44c3bc: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x44c3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x44c3c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x44c3c0u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x44c3c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x44c3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44c3c8: 0xae04082c  sw          $a0, 0x82C($s0)
    ctx->pc = 0x44c3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 4));
    // 0x44c3cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c3d0: 0xc11320a  jal         func_44C828
    ctx->pc = 0x44C3D0u;
    SET_GPR_U32(ctx, 31, 0x44C3D8u);
    ctx->pc = 0x44C3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C3D0u;
    // 0x44c3d4: 0xae050828  sw          $a1, 0x828($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C828u, 0x44C3D0u, 0x44C3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C3D8u;
label_44c3d8:
    // 0x44c3d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c3dc: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C3DCu;
    SET_GPR_U32(ctx, 31, 0x44C3E4u);
    ctx->pc = 0x44C3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C3DCu;
    // 0x44c3e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C3DCu, 0x44C3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C3E4u;
label_44c3e4:
    // 0x44c3e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x44C3E4u;
    {
        const bool branch_taken_0x44c3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C3E4u;
        // 0x44c3e8: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c3e4) {
            ctx->pc = 0x44C3F8u;
            goto label_44c3f8;
        }
    }
    ctx->pc = 0x44C3ECu;
    // 0x44c3ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c3f0: 0xc111f76  jal         func_447DD8
    ctx->pc = 0x44C3F0u;
    SET_GPR_U32(ctx, 31, 0x44C3F8u);
    ctx->pc = 0x44C3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C3F0u;
    // 0x44c3f4: 0x24a5e3c8  addiu       $a1, $a1, -0x1C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447DD8u, 0x44C3F0u, 0x44C3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C3F8u;
label_44c3f8:
    // 0x44c3f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c3fc: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C3FCu;
    SET_GPR_U32(ctx, 31, 0x44C404u);
    ctx->pc = 0x44C400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C3FCu;
    // 0x44c400: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C3FCu, 0x44C404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C404u;
label_44c404:
    // 0x44c404: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x44C404u;
    {
        const bool branch_taken_0x44c404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C404u;
        // 0x44c408: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c404) {
            ctx->pc = 0x44C424u;
            goto label_44c424;
        }
    }
    ctx->pc = 0x44C40Cu;
    // 0x44c40c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c410: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x44c410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x44c414: 0x24a5e3f0  addiu       $a1, $a1, -0x1C10
    ctx->pc = 0x44c414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960112));
    // 0x44c418: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x44c418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44c41c: 0x8111f76  j           func_447DD8
    ctx->pc = 0x44C41Cu;
    ctx->pc = 0x44C420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C41Cu;
    // 0x44c420: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447DD8u;
    sub_00447DD8_0x447dd8(rdram, ctx, runtime); return;
    ctx->pc = 0x44C424u;
label_44c424:
    // 0x44c424: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x44c424u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44c428: 0x3e00008  jr          $ra
    ctx->pc = 0x44C428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C428u;
        // 0x44c42c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44C428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44C430u;
}
