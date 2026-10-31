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

// Function: entry_445e20
// Address: 0x445e20 - 0x445fd8
void entry_445e20_0x445fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_445e20_0x445fd8");
#endif

    switch (ctx->pc) {
        case 0x445e68u: goto label_445e68;
        case 0x445e84u: goto label_445e84;
        case 0x445e8cu: goto label_445e8c;
        case 0x445e94u: goto label_445e94;
        case 0x445ea8u: goto label_445ea8;
        case 0x445eb0u: goto label_445eb0;
        case 0x445eb8u: goto label_445eb8;
        case 0x445f10u: goto label_445f10;
        case 0x445f38u: goto label_445f38;
        case 0x445f5cu: goto label_445f5c;
        case 0x445f80u: goto label_445f80;
        default: break;
    }

    ctx->pc = 0x445e20u;

    // 0x445e20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x445e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x445e24: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x445e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x445e28: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x445e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x445e2c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x445e2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x445e30: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x445e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x445e34: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x445e34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x445e38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x445e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x445e3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x445e3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x445e40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x445e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x445e44: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x445e44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x445e48: 0x8e0600ec  lw          $a2, 0xEC($s0)
    ctx->pc = 0x445e48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x445e4c: 0x30c2003f  andi        $v0, $a2, 0x3F
    ctx->pc = 0x445e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x445e50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x445E50u;
    {
        const bool branch_taken_0x445e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x445E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445E50u;
        // 0x445e54: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445e50) {
            ctx->pc = 0x445E70u;
            goto label_445e70;
        }
    }
    ctx->pc = 0x445E58u;
    // 0x445e58: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x445e58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x445e5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x445e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x445e60: 0xc111f8c  jal         func_447E30
    ctx->pc = 0x445E60u;
    SET_GPR_U32(ctx, 31, 0x445E68u);
    ctx->pc = 0x445E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445E60u;
    // 0x445e64: 0x24a5dfc0  addiu       $a1, $a1, -0x2040 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447E30u, 0x445E60u, 0x445E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445E68u;
label_445e68:
    // 0x445e68: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x445E68u;
    {
        const bool branch_taken_0x445e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x445E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445E68u;
        // 0x445e6c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445e68) {
            ctx->pc = 0x445FB8u;
            goto label_445fb8;
        }
    }
    ctx->pc = 0x445E70u;
label_445e70:
    // 0x445e70: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x445e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x445e74: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x445E74u;
    {
        const bool branch_taken_0x445e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x445E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445E74u;
        // 0x445e78: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445e74) {
            ctx->pc = 0x445E9Cu;
            goto label_445e9c;
        }
    }
    ctx->pc = 0x445E7Cu;
    // 0x445e7c: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x445E7Cu;
    SET_GPR_U32(ctx, 31, 0x445E84u);
    ctx->pc = 0x445E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445E7Cu;
    // 0x445e80: 0x2484e000  addiu       $a0, $a0, -0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x445E7Cu, 0x445E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445E84u;
label_445e84:
    // 0x445e84: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x445E84u;
    {
        const bool branch_taken_0x445e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x445E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445E84u;
        // 0x445e88: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445e84) {
            ctx->pc = 0x445FB8u;
            goto label_445fb8;
        }
    }
    ctx->pc = 0x445E8Cu;
label_445e8c:
    // 0x445e8c: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x445E8Cu;
    SET_GPR_U32(ctx, 31, 0x445E94u);
    ctx->pc = 0x445E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445E8Cu;
    // 0x445e90: 0x2484e040  addiu       $a0, $a0, -0x1FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x445E8Cu, 0x445E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445E94u;
label_445e94:
    // 0x445e94: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x445E94u;
    {
        const bool branch_taken_0x445e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x445E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445E94u;
        // 0x445e98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445e94) {
            ctx->pc = 0x445FB8u;
            goto label_445fb8;
        }
    }
    ctx->pc = 0x445E9Cu;
label_445e9c:
    // 0x445e9c: 0xae000834  sw          $zero, 0x834($s0)
    ctx->pc = 0x445e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2100), GPR_U32(ctx, 0));
    // 0x445ea0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x445ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x445ea4: 0x0  nop
    ctx->pc = 0x445ea4u;
    // NOP
label_445ea8:
    // 0x445ea8: 0x1262000f  beq         $s3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x445EA8u;
    {
        const bool branch_taken_0x445ea8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x445EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445EA8u;
        // 0x445eac: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x445ea8) {
            ctx->pc = 0x445EE8u;
            goto label_445ee8;
        }
    }
    ctx->pc = 0x445EB0u;
label_445eb0:
    // 0x445eb0: 0xc11321a  jal         func_44C868
    ctx->pc = 0x445EB0u;
    SET_GPR_U32(ctx, 31, 0x445EB8u);
    ctx->pc = 0x445EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445EB0u;
    // 0x445eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C868u, 0x445EB0u, 0x445EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445EB8u;
label_445eb8:
    // 0x445eb8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x445eb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x445ebc: 0x640003e  bltz        $s2, . + 4 + (0x3E << 2)
    ctx->pc = 0x445EBCu;
    {
        const bool branch_taken_0x445ebc = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x445EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445EBCu;
        // 0x445ec0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445ebc) {
            ctx->pc = 0x445FB8u;
            goto label_445fb8;
        }
    }
    ctx->pc = 0x445EC4u;
    // 0x445ec4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x445EC4u;
    {
        const bool branch_taken_0x445ec4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x445EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445EC4u;
        // 0x445ec8: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x445ec4) {
            ctx->pc = 0x445EE8u;
            goto label_445ee8;
        }
    }
    ctx->pc = 0x445ECCu;
    // 0x445ecc: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x445eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x445ed0: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x445ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x445ed4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x445ED4u;
    {
        const bool branch_taken_0x445ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x445ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445ED4u;
        // 0x445ed8: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x445ed4) {
            ctx->pc = 0x445EE8u;
            goto label_445ee8;
        }
    }
    ctx->pc = 0x445EDCu;
    // 0x445edc: 0x8e020858  lw          $v0, 0x858($s0)
    ctx->pc = 0x445edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x445ee0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x445EE0u;
    {
        const bool branch_taken_0x445ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x445EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445EE0u;
        // 0x445ee4: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x445ee0) {
            ctx->pc = 0x445EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_445eb0;
        }
    }
    ctx->pc = 0x445EE8u;
label_445ee8:
    // 0x445ee8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x445EE8u;
    {
        const bool branch_taken_0x445ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x445EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445EE8u;
        // 0x445eec: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445ee8) {
            ctx->pc = 0x445F90u;
            goto label_445f90;
        }
    }
    ctx->pc = 0x445EF0u;
    // 0x445ef0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x445ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x445ef4: 0x2442e060  addiu       $v0, $v0, -0x1FA0
    ctx->pc = 0x445ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959200));
    // 0x445ef8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x445ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x445efc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x445efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x445f00: 0x800008  jr          $a0
    ctx->pc = 0x445F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x445F08u: goto label_445f08;
            case 0x445F1Cu: goto label_445f1c;
            case 0x445F4Cu: goto label_445f4c;
            case 0x445F70u: goto label_445f70;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x445F00u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x445F08u;
label_445f08:
    // 0x445f08: 0xc111c94  jal         func_447250
    ctx->pc = 0x445F08u;
    SET_GPR_U32(ctx, 31, 0x445F10u);
    ctx->pc = 0x445F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445F08u;
    // 0x445f0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447250u, 0x445F08u, 0x445F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445F10u;
label_445f10:
    // 0x445f10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x445f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x445f14: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x445F14u;
    {
        const bool branch_taken_0x445f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x445F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445F14u;
        // 0x445f18: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445f14) {
            ctx->pc = 0x445F90u;
            goto label_445f90;
        }
    }
    ctx->pc = 0x445F1Cu;
label_445f1c:
    // 0x445f1c: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x445f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x445f20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x445f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x445f24: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x445f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x445f28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x445f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x445f2c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x445f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x445f30: 0xc1119be  jal         func_4466F8
    ctx->pc = 0x445F30u;
    SET_GPR_U32(ctx, 31, 0x445F38u);
    ctx->pc = 0x445F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445F30u;
    // 0x445f34: 0x8e0600a8  lw          $a2, 0xA8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4466F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4466F8u, 0x445F30u, 0x445F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445F38u;
label_445f38:
    // 0x445f38: 0x8e0300b4  lw          $v1, 0xB4($s0)
    ctx->pc = 0x445f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x445f3c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x445f3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x445f40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x445f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x445f44: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x445F44u;
    {
        const bool branch_taken_0x445f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x445F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445F44u;
        // 0x445f48: 0xae0300b4  sw          $v1, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445f44) {
            ctx->pc = 0x445F90u;
            goto label_445f90;
        }
    }
    ctx->pc = 0x445F4Cu;
label_445f4c:
    // 0x445f4c: 0x8e0500b8  lw          $a1, 0xB8($s0)
    ctx->pc = 0x445f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x445f50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x445f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x445f54: 0xc1119be  jal         func_4466F8
    ctx->pc = 0x445F54u;
    SET_GPR_U32(ctx, 31, 0x445F5Cu);
    ctx->pc = 0x445F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445F54u;
    // 0x445f58: 0x8e0600ac  lw          $a2, 0xAC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4466F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4466F8u, 0x445F54u, 0x445F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445F5Cu;
label_445f5c:
    // 0x445f5c: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x445f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x445f60: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x445f60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x445f64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x445f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x445f68: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x445F68u;
    {
        const bool branch_taken_0x445f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x445F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445F68u;
        // 0x445f6c: 0xae0300b8  sw          $v1, 0xB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445f68) {
            ctx->pc = 0x445F90u;
            goto label_445f90;
        }
    }
    ctx->pc = 0x445F70u;
label_445f70:
    // 0x445f70: 0x8e0500bc  lw          $a1, 0xBC($s0)
    ctx->pc = 0x445f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x445f74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x445f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x445f78: 0xc1119be  jal         func_4466F8
    ctx->pc = 0x445F78u;
    SET_GPR_U32(ctx, 31, 0x445F80u);
    ctx->pc = 0x445F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445F78u;
    // 0x445f7c: 0x8e0600b0  lw          $a2, 0xB0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4466F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4466F8u, 0x445F78u, 0x445F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445F80u;
label_445f80:
    // 0x445f80: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x445f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x445f84: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x445f84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x445f88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x445f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x445f8c: 0xae0300bc  sw          $v1, 0xBC($s0)
    ctx->pc = 0x445f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
label_445f90:
    // 0x445f90: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x445f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x445f94: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x445F94u;
    {
        const bool branch_taken_0x445f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x445F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445F94u;
        // 0x445f98: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445f94) {
            ctx->pc = 0x445E8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_445e8c;
        }
    }
    ctx->pc = 0x445F9Cu;
    // 0x445f9c: 0x8e020834  lw          $v0, 0x834($s0)
    ctx->pc = 0x445f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2100)));
    // 0x445fa0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x445FA0u;
    {
        const bool branch_taken_0x445fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x445FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445FA0u;
        // 0x445fa4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445fa0) {
            ctx->pc = 0x445FB8u;
            goto label_445fb8;
        }
    }
    ctx->pc = 0x445FA8u;
    // 0x445fa8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x445fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x445fac: 0x1040ffbe  beqz        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x445FACu;
    {
        const bool branch_taken_0x445fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x445FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445FACu;
        // 0x445fb0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445fac) {
            ctx->pc = 0x445EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_445ea8;
        }
    }
    ctx->pc = 0x445FB4u;
    // 0x445fb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x445fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_445fb8:
    // 0x445fb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x445fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x445fbc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x445fbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x445fc0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x445fc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x445fc4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x445fc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x445fc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x445fc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x445fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x445FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x445FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445FCCu;
        // 0x445fd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x445FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x445FD4u;
    // 0x445fd4: 0x0  nop
    ctx->pc = 0x445fd4u;
    // NOP
    ctx->pc = 0x445fd8u;
}
