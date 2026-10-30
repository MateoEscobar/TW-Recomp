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

// Function: sub_00101288
// Address: 0x101288 - 0x101360
void sub_00101288_0x101288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101288_0x101288");
#endif

    switch (ctx->pc) {
        case 0x101288u: goto label_101288;
        case 0x10128cu: goto label_10128c;
        case 0x101290u: goto label_101290;
        case 0x101294u: goto label_101294;
        case 0x101298u: goto label_101298;
        case 0x10129cu: goto label_10129c;
        case 0x1012a0u: goto label_1012a0;
        case 0x1012a4u: goto label_1012a4;
        case 0x1012a8u: goto label_1012a8;
        case 0x1012acu: goto label_1012ac;
        case 0x1012b0u: goto label_1012b0;
        case 0x1012b4u: goto label_1012b4;
        case 0x1012b8u: goto label_1012b8;
        case 0x1012bcu: goto label_1012bc;
        case 0x1012c0u: goto label_1012c0;
        case 0x1012c4u: goto label_1012c4;
        case 0x1012c8u: goto label_1012c8;
        case 0x1012ccu: goto label_1012cc;
        case 0x1012d0u: goto label_1012d0;
        case 0x1012d4u: goto label_1012d4;
        case 0x1012d8u: goto label_1012d8;
        case 0x1012dcu: goto label_1012dc;
        case 0x1012e0u: goto label_1012e0;
        case 0x1012e4u: goto label_1012e4;
        case 0x1012e8u: goto label_1012e8;
        case 0x1012ecu: goto label_1012ec;
        case 0x1012f0u: goto label_1012f0;
        case 0x1012f4u: goto label_1012f4;
        case 0x1012f8u: goto label_1012f8;
        case 0x1012fcu: goto label_1012fc;
        case 0x101300u: goto label_101300;
        case 0x101304u: goto label_101304;
        case 0x101308u: goto label_101308;
        case 0x10130cu: goto label_10130c;
        case 0x101310u: goto label_101310;
        case 0x101314u: goto label_101314;
        case 0x101318u: goto label_101318;
        case 0x10131cu: goto label_10131c;
        case 0x101320u: goto label_101320;
        case 0x101324u: goto label_101324;
        case 0x101328u: goto label_101328;
        case 0x10132cu: goto label_10132c;
        case 0x101330u: goto label_101330;
        case 0x101334u: goto label_101334;
        case 0x101338u: goto label_101338;
        case 0x10133cu: goto label_10133c;
        case 0x101340u: goto label_101340;
        case 0x101344u: goto label_101344;
        case 0x101348u: goto label_101348;
        case 0x10134cu: goto label_10134c;
        case 0x101350u: goto label_101350;
        case 0x101354u: goto label_101354;
        case 0x101358u: goto label_101358;
        case 0x10135cu: goto label_10135c;
        default: break;
    }

    ctx->pc = 0x101288u;

label_101288:
    // 0x101288: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x101288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_10128c:
    // 0x10128c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x10128cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_101290:
    // 0x101290: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x101290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_101294:
    // 0x101294: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x101294u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_101298:
    // 0x101298: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x101298u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10129c:
    // 0x10129c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x10129cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1012a0:
    // 0x1012a0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x1012a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_1012a4:
    // 0x1012a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1012a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1012a8:
    // 0x1012a8: 0xc0e8b48  jal         func_3A2D20
label_1012ac:
    if (ctx->pc == 0x1012ACu) {
        ctx->pc = 0x1012ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012A8u;
        // 0x1012ac: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1012B0u;
        goto label_1012b0;
    }
    ctx->pc = 0x1012A8u;
    SET_GPR_U32(ctx, 31, 0x1012B0u);
    ctx->pc = 0x1012ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1012A8u;
    // 0x1012ac: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x1012A8u, 0x1012B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1012B0u;
label_1012b0:
    // 0x1012b0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x1012b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_1012b4:
    // 0x1012b4: 0xc0e8b70  jal         func_3A2DC0
label_1012b8:
    if (ctx->pc == 0x1012B8u) {
        ctx->pc = 0x1012B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012B4u;
        // 0x1012b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1012BCu;
        goto label_1012bc;
    }
    ctx->pc = 0x1012B4u;
    SET_GPR_U32(ctx, 31, 0x1012BCu);
    ctx->pc = 0x1012B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1012B4u;
    // 0x1012b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x1012B4u, 0x1012BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1012BCu;
label_1012bc:
    // 0x1012bc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x1012bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_1012c0:
    // 0x1012c0: 0xc0e8b70  jal         func_3A2DC0
label_1012c4:
    if (ctx->pc == 0x1012C4u) {
        ctx->pc = 0x1012C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012C0u;
        // 0x1012c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1012C8u;
        goto label_1012c8;
    }
    ctx->pc = 0x1012C0u;
    SET_GPR_U32(ctx, 31, 0x1012C8u);
    ctx->pc = 0x1012C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1012C0u;
    // 0x1012c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x1012C0u, 0x1012C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1012C8u;
label_1012c8:
    // 0x1012c8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x1012c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_1012cc:
    // 0x1012cc: 0xc0e8b68  jal         func_3A2DA0
label_1012d0:
    if (ctx->pc == 0x1012D0u) {
        ctx->pc = 0x1012D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012CCu;
        // 0x1012d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1012D4u;
        goto label_1012d4;
    }
    ctx->pc = 0x1012CCu;
    SET_GPR_U32(ctx, 31, 0x1012D4u);
    ctx->pc = 0x1012D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1012CCu;
    // 0x1012d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x1012CCu, 0x1012D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1012D4u;
label_1012d4:
    // 0x1012d4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x1012d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_1012d8:
    // 0x1012d8: 0xc0e8b68  jal         func_3A2DA0
label_1012dc:
    if (ctx->pc == 0x1012DCu) {
        ctx->pc = 0x1012DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012D8u;
        // 0x1012dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1012E0u;
        goto label_1012e0;
    }
    ctx->pc = 0x1012D8u;
    SET_GPR_U32(ctx, 31, 0x1012E0u);
    ctx->pc = 0x1012DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1012D8u;
    // 0x1012dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x1012D8u, 0x1012E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1012E0u;
label_1012e0:
    // 0x1012e0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1012e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1012e4:
    // 0x1012e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1012e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1012e8:
    // 0x1012e8: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x1012e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1012ec:
    // 0x1012ec: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x1012ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1012f0:
    // 0x1012f0: 0x60f809  jalr        $v1
label_1012f4:
    if (ctx->pc == 0x1012F4u) {
        ctx->pc = 0x1012F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012F0u;
        // 0x1012f4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1012F8u;
        goto label_1012f8;
    }
    ctx->pc = 0x1012F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1012F8u);
        ctx->pc = 0x1012F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012F0u;
        // 0x1012f4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1012F0u, 0x1012F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1012F8u;
label_1012f8:
    // 0x1012f8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x1012f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_1012fc:
    // 0x1012fc: 0xc0e8b58  jal         func_3A2D60
label_101300:
    if (ctx->pc == 0x101300u) {
        ctx->pc = 0x101300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012FCu;
        // 0x101300: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101304u;
        goto label_101304;
    }
    ctx->pc = 0x1012FCu;
    SET_GPR_U32(ctx, 31, 0x101304u);
    ctx->pc = 0x101300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1012FCu;
    // 0x101300: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x1012FCu, 0x101304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101304u;
label_101304:
    // 0x101304: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x101304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_101308:
    // 0x101308: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x101308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_10130c:
    // 0x10130c: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x10130cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_101310:
    // 0x101310: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x101310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_101314:
    // 0x101314: 0x60f809  jalr        $v1
label_101318:
    if (ctx->pc == 0x101318u) {
        ctx->pc = 0x101318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101314u;
        // 0x101318: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10131Cu;
        goto label_10131c;
    }
    ctx->pc = 0x101314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10131Cu);
        ctx->pc = 0x101318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101314u;
        // 0x101318: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101314u, 0x10131Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10131Cu;
label_10131c:
    // 0x10131c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x10131cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_101320:
    // 0x101320: 0xc0e8b58  jal         func_3A2D60
label_101324:
    if (ctx->pc == 0x101324u) {
        ctx->pc = 0x101324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101320u;
        // 0x101324: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101328u;
        goto label_101328;
    }
    ctx->pc = 0x101320u;
    SET_GPR_U32(ctx, 31, 0x101328u);
    ctx->pc = 0x101324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101320u;
    // 0x101324: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x101320u, 0x101328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101328u;
label_101328:
    // 0x101328: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x101328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_10132c:
    // 0x10132c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10132cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_101330:
    // 0x101330: 0xc0e8b80  jal         func_3A2E00
label_101334:
    if (ctx->pc == 0x101334u) {
        ctx->pc = 0x101334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101330u;
        // 0x101334: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101338u;
        goto label_101338;
    }
    ctx->pc = 0x101330u;
    SET_GPR_U32(ctx, 31, 0x101338u);
    ctx->pc = 0x101334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101330u;
    // 0x101334: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x101330u, 0x101338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101338u;
label_101338:
    // 0x101338: 0xc0e8b50  jal         func_3A2D40
label_10133c:
    if (ctx->pc == 0x10133Cu) {
        ctx->pc = 0x10133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101338u;
        // 0x10133c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101340u;
        goto label_101340;
    }
    ctx->pc = 0x101338u;
    SET_GPR_U32(ctx, 31, 0x101340u);
    ctx->pc = 0x10133Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101338u;
    // 0x10133c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x101338u, 0x101340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101340u;
label_101340:
    // 0x101340: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x101340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_101344:
    // 0x101344: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x101344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_101348:
    // 0x101348: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x101348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_10134c:
    // 0x10134c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x10134cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_101350:
    // 0x101350: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x101350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_101354:
    // 0x101354: 0x3e00008  jr          $ra
label_101358:
    if (ctx->pc == 0x101358u) {
        ctx->pc = 0x101358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101354u;
        // 0x101358: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10135Cu;
        goto label_10135c;
    }
    ctx->pc = 0x101354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101354u;
        // 0x101358: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10135Cu;
label_10135c:
    // 0x10135c: 0x0  nop
    ctx->pc = 0x10135cu;
    // NOP
    ctx->pc = 0x101360u;
}
