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

// Function: sub_00464E30
// Address: 0x464e30 - 0x464f60
void sub_00464E30_0x464e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00464E30_0x464e30");
#endif

    switch (ctx->pc) {
        case 0x464e54u: goto label_464e54;
        case 0x464e7cu: goto label_464e7c;
        case 0x464ea4u: goto label_464ea4;
        case 0x464eccu: goto label_464ecc;
        case 0x464ef4u: goto label_464ef4;
        case 0x464f1cu: goto label_464f1c;
        case 0x464f44u: goto label_464f44;
        default: break;
    }

    ctx->pc = 0x464e30u;

    // 0x464e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x464e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x464e34: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x464e34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x464e38: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x464e38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x464e3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x464e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x464e40: 0x24c65b50  addiu       $a2, $a2, 0x5B50
    ctx->pc = 0x464e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23376));
    // 0x464e44: 0x24e75ae8  addiu       $a3, $a3, 0x5AE8
    ctx->pc = 0x464e44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23272));
    // 0x464e48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x464e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464e4c: 0xc120d9a  jal         func_483668
    ctx->pc = 0x464E4Cu;
    SET_GPR_U32(ctx, 31, 0x464E54u);
    ctx->pc = 0x464E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464E4Cu;
    // 0x464e50: 0x24050120  addiu       $a1, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483668u, 0x464E4Cu, 0x464E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464E54u;
label_464e54:
    // 0x464e54: 0x440003e  bltz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x464E54u;
    {
        const bool branch_taken_0x464e54 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x464E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464E54u;
        // 0x464e58: 0x3c060046  lui         $a2, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464e54) {
            ctx->pc = 0x464F50u;
            goto label_464f50;
        }
    }
    ctx->pc = 0x464E5Cu;
    // 0x464e5c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x464e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x464e60: 0x3c080046  lui         $t0, 0x46
    ctx->pc = 0x464e60u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)70 << 16));
    // 0x464e64: 0x24c65bf0  addiu       $a2, $a2, 0x5BF0
    ctx->pc = 0x464e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23536));
    // 0x464e68: 0x24e75c08  addiu       $a3, $a3, 0x5C08
    ctx->pc = 0x464e68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23560));
    // 0x464e6c: 0x25083f78  addiu       $t0, $t0, 0x3F78
    ctx->pc = 0x464e6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16248));
    // 0x464e70: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x464e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x464e74: 0xc11b41a  jal         func_46D068
    ctx->pc = 0x464E74u;
    SET_GPR_U32(ctx, 31, 0x464E7Cu);
    ctx->pc = 0x464E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464E74u;
    // 0x464e78: 0x24050120  addiu       $a1, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D068u, 0x464E74u, 0x464E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464E7Cu;
label_464e7c:
    // 0x464e7c: 0x4400034  bltz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x464E7Cu;
    {
        const bool branch_taken_0x464e7c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x464E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464E7Cu;
        // 0x464e80: 0xaf828490  sw          $v0, -0x7B70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935696), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464e7c) {
            ctx->pc = 0x464F50u;
            goto label_464f50;
        }
    }
    ctx->pc = 0x464E84u;
    // 0x464e84: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x464e84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x464e88: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x464e88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x464e8c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x464e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x464e90: 0x24a544a8  addiu       $a1, $a1, 0x44A8
    ctx->pc = 0x464e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17576));
    // 0x464e94: 0x24c64210  addiu       $a2, $a2, 0x4210
    ctx->pc = 0x464e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16912));
    // 0x464e98: 0x24e74978  addiu       $a3, $a3, 0x4978
    ctx->pc = 0x464e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18808));
    // 0x464e9c: 0xc11b42c  jal         func_46D0B0
    ctx->pc = 0x464E9Cu;
    SET_GPR_U32(ctx, 31, 0x464EA4u);
    ctx->pc = 0x464EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464E9Cu;
    // 0x464ea0: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D0B0u, 0x464E9Cu, 0x464EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464EA4u;
label_464ea4:
    // 0x464ea4: 0x440002a  bltz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x464EA4u;
    {
        const bool branch_taken_0x464ea4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x464EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464EA4u;
        // 0x464ea8: 0x3c060046  lui         $a2, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464ea4) {
            ctx->pc = 0x464F50u;
            goto label_464f50;
        }
    }
    ctx->pc = 0x464EACu;
    // 0x464eac: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x464eacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x464eb0: 0x3c080046  lui         $t0, 0x46
    ctx->pc = 0x464eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)70 << 16));
    // 0x464eb4: 0x24c65c78  addiu       $a2, $a2, 0x5C78
    ctx->pc = 0x464eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23672));
    // 0x464eb8: 0x24e75c90  addiu       $a3, $a3, 0x5C90
    ctx->pc = 0x464eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23696));
    // 0x464ebc: 0x25085ca8  addiu       $t0, $t0, 0x5CA8
    ctx->pc = 0x464ebcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 23720));
    // 0x464ec0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x464ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x464ec4: 0xc11a9d2  jal         func_46A748
    ctx->pc = 0x464EC4u;
    SET_GPR_U32(ctx, 31, 0x464ECCu);
    ctx->pc = 0x464EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464EC4u;
    // 0x464ec8: 0x24050120  addiu       $a1, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A748u, 0x464EC4u, 0x464ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464ECCu;
label_464ecc:
    // 0x464ecc: 0x4400020  bltz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x464ECCu;
    {
        const bool branch_taken_0x464ecc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x464ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464ECCu;
        // 0x464ed0: 0xaf828494  sw          $v0, -0x7B6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464ecc) {
            ctx->pc = 0x464F50u;
            goto label_464f50;
        }
    }
    ctx->pc = 0x464ED4u;
    // 0x464ed4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x464ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x464ed8: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x464ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x464edc: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x464edcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x464ee0: 0x24a55d00  addiu       $a1, $a1, 0x5D00
    ctx->pc = 0x464ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23808));
    // 0x464ee4: 0x24c65cd0  addiu       $a2, $a2, 0x5CD0
    ctx->pc = 0x464ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23760));
    // 0x464ee8: 0x24e75d60  addiu       $a3, $a3, 0x5D60
    ctx->pc = 0x464ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23904));
    // 0x464eec: 0xc11a9f6  jal         func_46A7D8
    ctx->pc = 0x464EECu;
    SET_GPR_U32(ctx, 31, 0x464EF4u);
    ctx->pc = 0x464EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464EECu;
    // 0x464ef0: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A7D8u, 0x464EECu, 0x464EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464EF4u;
label_464ef4:
    // 0x464ef4: 0x4400016  bltz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x464EF4u;
    {
        const bool branch_taken_0x464ef4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x464EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464EF4u;
        // 0x464ef8: 0x3c060046  lui         $a2, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464ef4) {
            ctx->pc = 0x464F50u;
            goto label_464f50;
        }
    }
    ctx->pc = 0x464EFCu;
    // 0x464efc: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x464efcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x464f00: 0x3c080046  lui         $t0, 0x46
    ctx->pc = 0x464f00u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)70 << 16));
    // 0x464f04: 0x24c65d78  addiu       $a2, $a2, 0x5D78
    ctx->pc = 0x464f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23928));
    // 0x464f08: 0x24e75d90  addiu       $a3, $a3, 0x5D90
    ctx->pc = 0x464f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23952));
    // 0x464f0c: 0x25085da8  addiu       $t0, $t0, 0x5DA8
    ctx->pc = 0x464f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 23976));
    // 0x464f10: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x464f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x464f14: 0xc11c222  jal         func_470888
    ctx->pc = 0x464F14u;
    SET_GPR_U32(ctx, 31, 0x464F1Cu);
    ctx->pc = 0x464F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464F14u;
    // 0x464f18: 0x24050120  addiu       $a1, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x470888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470888u, 0x464F14u, 0x464F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464F1Cu;
label_464f1c:
    // 0x464f1c: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x464F1Cu;
    {
        const bool branch_taken_0x464f1c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x464F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464F1Cu;
        // 0x464f20: 0xaf828498  sw          $v0, -0x7B68($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464f1c) {
            ctx->pc = 0x464F50u;
            goto label_464f50;
        }
    }
    ctx->pc = 0x464F24u;
    // 0x464f24: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x464f24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x464f28: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x464f28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x464f2c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x464f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x464f30: 0x24a55e00  addiu       $a1, $a1, 0x5E00
    ctx->pc = 0x464f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24064));
    // 0x464f34: 0x24c65dd0  addiu       $a2, $a2, 0x5DD0
    ctx->pc = 0x464f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24016));
    // 0x464f38: 0x24e75e60  addiu       $a3, $a3, 0x5E60
    ctx->pc = 0x464f38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24160));
    // 0x464f3c: 0xc11c234  jal         func_4708D0
    ctx->pc = 0x464F3Cu;
    SET_GPR_U32(ctx, 31, 0x464F44u);
    ctx->pc = 0x464F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464F3Cu;
    // 0x464f40: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4708D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4708D0u, 0x464F3Cu, 0x464F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464F44u;
label_464f44:
    // 0x464f44: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x464f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x464f48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x464F48u;
    {
        const bool branch_taken_0x464f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x464F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464F48u;
        // 0x464f4c: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x464f48) {
            ctx->pc = 0x464F54u;
            goto label_464f54;
        }
    }
    ctx->pc = 0x464F50u;
label_464f50:
    // 0x464f50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x464f50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_464f54:
    // 0x464f54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x464f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x464f58: 0x3e00008  jr          $ra
    ctx->pc = 0x464F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x464F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464F58u;
        // 0x464f5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x464F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x464F60u;
}
