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

// Function: sub_00461340
// Address: 0x461340 - 0x461420
void sub_00461340_0x461340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00461340_0x461340");
#endif

    switch (ctx->pc) {
        case 0x461364u: goto label_461364;
        case 0x46138cu: goto label_46138c;
        case 0x4613a8u: goto label_4613a8;
        case 0x4613c0u: goto label_4613c0;
        case 0x4613d8u: goto label_4613d8;
        case 0x4613e8u: goto label_4613e8;
        case 0x4613f8u: goto label_4613f8;
        case 0x461408u: goto label_461408;
        default: break;
    }

    ctx->pc = 0x461340u;

    // 0x461340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x461340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x461344: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x461344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x461348: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x461348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46134c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46134cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x461350: 0x3c040052  lui         $a0, 0x52
    ctx->pc = 0x461350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)82 << 16));
    // 0x461354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x461354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x461358: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x461358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46135c: 0xc11864c  jal         func_461930
    ctx->pc = 0x46135Cu;
    SET_GPR_U32(ctx, 31, 0x461364u);
    ctx->pc = 0x461360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46135Cu;
    // 0x461360: 0x2484d81c  addiu       $a0, $a0, -0x27E4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957084));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461930u, 0x46135Cu, 0x461364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461364u;
label_461364:
    // 0x461364: 0x3c110052  lui         $s1, 0x52
    ctx->pc = 0x461364u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)82 << 16));
    // 0x461368: 0x2622d810  addiu       $v0, $s1, -0x27F0
    ctx->pc = 0x461368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957072));
    // 0x46136c: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x46136cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x461370: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x461370u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x461374: 0xac50001c  sw          $s0, 0x1C($v0)
    ctx->pc = 0x461374u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x51D82Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x51D82Cu, _value); } while (0);
    // 0x461378: 0x24c614a8  addiu       $a2, $a2, 0x14A8
    ctx->pc = 0x461378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5288));
    // 0x46137c: 0x24e714f8  addiu       $a3, $a3, 0x14F8
    ctx->pc = 0x46137cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5368));
    // 0x461380: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x461380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461384: 0xc120d9a  jal         func_483668
    ctx->pc = 0x461384u;
    SET_GPR_U32(ctx, 31, 0x46138Cu);
    ctx->pc = 0x461388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461384u;
    // 0x461388: 0x24050131  addiu       $a1, $zero, 0x131 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483668u, 0x461384u, 0x46138Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46138Cu;
label_46138c:
    // 0x46138c: 0xae22d810  sw          $v0, -0x27F0($s1)
    ctx->pc = 0x46138cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294957072), GPR_U32(ctx, 2));
    // 0x461390: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x461390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461394: 0x24050131  addiu       $a1, $zero, 0x131
    ctx->pc = 0x461394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
    // 0x461398: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x461398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46139c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x46139cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4613a0: 0xc11b41a  jal         func_46D068
    ctx->pc = 0x4613A0u;
    SET_GPR_U32(ctx, 31, 0x4613A8u);
    ctx->pc = 0x4613A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4613A0u;
    // 0x4613a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D068u, 0x4613A0u, 0x4613A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4613A8u;
label_4613a8:
    // 0x4613a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4613a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4613ac: 0x24050131  addiu       $a1, $zero, 0x131
    ctx->pc = 0x4613acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
    // 0x4613b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4613b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4613b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4613b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4613b8: 0xc11a9d2  jal         func_46A748
    ctx->pc = 0x4613B8u;
    SET_GPR_U32(ctx, 31, 0x4613C0u);
    ctx->pc = 0x4613BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4613B8u;
    // 0x4613bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A748u, 0x4613B8u, 0x4613C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4613C0u;
label_4613c0:
    // 0x4613c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4613c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4613c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4613c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4613c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4613c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4613cc: 0x24050131  addiu       $a1, $zero, 0x131
    ctx->pc = 0x4613ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
    // 0x4613d0: 0xc11c222  jal         func_470888
    ctx->pc = 0x4613D0u;
    SET_GPR_U32(ctx, 31, 0x4613D8u);
    ctx->pc = 0x4613D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4613D0u;
    // 0x4613d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x470888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470888u, 0x4613D0u, 0x4613D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4613D8u;
label_4613d8:
    // 0x4613d8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x4613d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x4613dc: 0x24040131  addiu       $a0, $zero, 0x131
    ctx->pc = 0x4613dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
    // 0x4613e0: 0xc11b43a  jal         func_46D0E8
    ctx->pc = 0x4613E0u;
    SET_GPR_U32(ctx, 31, 0x4613E8u);
    ctx->pc = 0x4613E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4613E0u;
    // 0x4613e4: 0x24a51540  addiu       $a1, $a1, 0x1540 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D0E8u, 0x4613E0u, 0x4613E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4613E8u;
label_4613e8:
    // 0x4613e8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x4613e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x4613ec: 0x24040131  addiu       $a0, $zero, 0x131
    ctx->pc = 0x4613ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
    // 0x4613f0: 0xc11aa0e  jal         func_46A838
    ctx->pc = 0x4613F0u;
    SET_GPR_U32(ctx, 31, 0x4613F8u);
    ctx->pc = 0x4613F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4613F0u;
    // 0x4613f4: 0x24a51570  addiu       $a1, $a1, 0x1570 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A838u, 0x4613F0u, 0x4613F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4613F8u;
label_4613f8:
    // 0x4613f8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x4613f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x4613fc: 0x24040131  addiu       $a0, $zero, 0x131
    ctx->pc = 0x4613fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
    // 0x461400: 0xc11c24c  jal         func_470930
    ctx->pc = 0x461400u;
    SET_GPR_U32(ctx, 31, 0x461408u);
    ctx->pc = 0x461404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461400u;
    // 0x461404: 0x24a515a0  addiu       $a1, $a1, 0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x470930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470930u, 0x461400u, 0x461408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461408u;
label_461408:
    // 0x461408: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x461408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46140c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46140cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x461410: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x461410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x461414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x461414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x461418: 0x3e00008  jr          $ra
    ctx->pc = 0x461418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461418u;
        // 0x46141c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x461418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x461420u;
}
