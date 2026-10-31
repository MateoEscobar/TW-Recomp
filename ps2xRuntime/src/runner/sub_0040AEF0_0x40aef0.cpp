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

// Function: sub_0040AEF0
// Address: 0x40aef0 - 0x40b030
void sub_0040AEF0_0x40aef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040AEF0_0x40aef0");
#endif

    switch (ctx->pc) {
        case 0x40af40u: goto label_40af40;
        case 0x40af4cu: goto label_40af4c;
        case 0x40af5cu: goto label_40af5c;
        case 0x40af68u: goto label_40af68;
        case 0x40af78u: goto label_40af78;
        case 0x40af84u: goto label_40af84;
        case 0x40af90u: goto label_40af90;
        case 0x40afa4u: goto label_40afa4;
        case 0x40afb0u: goto label_40afb0;
        case 0x40afc0u: goto label_40afc0;
        case 0x40afd0u: goto label_40afd0;
        case 0x40afdcu: goto label_40afdc;
        case 0x40afe4u: goto label_40afe4;
        case 0x40aff4u: goto label_40aff4;
        default: break;
    }

    ctx->pc = 0x40aef0u;

    // 0x40aef0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x40aef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x40aef4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x40aef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x40aef8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x40aef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x40aefc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40aefcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40af00: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x40af00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x40af04: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x40af04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40af08: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x40af08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x40af0c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x40af0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40af10: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x40af10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x40af14: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x40af14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40af18: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x40af18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x40af1c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x40af1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40af20: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x40af20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x40af24: 0x3c160059  lui         $s6, 0x59
    ctx->pc = 0x40af24u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)89 << 16));
    // 0x40af28: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x40af28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x40af2c: 0x3c170059  lui         $s7, 0x59
    ctx->pc = 0x40af2cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)89 << 16));
    // 0x40af30: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x40af30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x40af34: 0x241e0004  addiu       $fp, $zero, 0x4
    ctx->pc = 0x40af34u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x40af38: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x40AF38u;
    {
        const bool branch_taken_0x40af38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40AF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AF38u;
        // 0x40af3c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40af38) {
            ctx->pc = 0x40AFE8u;
            goto label_40afe8;
        }
    }
    ctx->pc = 0x40AF40u;
label_40af40:
    // 0x40af40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40af40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40af44: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x40AF44u;
    SET_GPR_U32(ctx, 31, 0x40AF4Cu);
    ctx->pc = 0x40AF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AF44u;
    // 0x40af48: 0x26e58310  addiu       $a1, $s7, -0x7CF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294935312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x40AF44u, 0x40AF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AF4Cu;
label_40af4c:
    // 0x40af4c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x40af4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40af50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40af50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40af54: 0xc0c8ef2  jal         func_323BC8
    ctx->pc = 0x40AF54u;
    SET_GPR_U32(ctx, 31, 0x40AF5Cu);
    ctx->pc = 0x40AF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AF54u;
    // 0x40af58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323BC8u, 0x40AF54u, 0x40AF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AF5Cu;
label_40af5c:
    // 0x40af5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40af5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40af60: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x40AF60u;
    SET_GPR_U32(ctx, 31, 0x40AF68u);
    ctx->pc = 0x40AF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AF60u;
    // 0x40af64: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x40AF60u, 0x40AF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AF68u;
label_40af68:
    // 0x40af68: 0x10520017  beq         $v0, $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x40AF68u;
    {
        const bool branch_taken_0x40af68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x40AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AF68u;
        // 0x40af6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40af68) {
            ctx->pc = 0x40AFC8u;
            goto label_40afc8;
        }
    }
    ctx->pc = 0x40AF70u;
    // 0x40af70: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40AF70u;
    SET_GPR_U32(ctx, 31, 0x40AF78u);
    ctx->pc = 0x40AF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AF70u;
    // 0x40af74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40AF70u, 0x40AF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AF78u;
label_40af78:
    // 0x40af78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40af78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40af7c: 0xc0c8ef2  jal         func_323BC8
    ctx->pc = 0x40AF7Cu;
    SET_GPR_U32(ctx, 31, 0x40AF84u);
    ctx->pc = 0x40AF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AF7Cu;
    // 0x40af80: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323BC8u, 0x40AF7Cu, 0x40AF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AF84u;
label_40af84:
    // 0x40af84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40af84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40af88: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x40AF88u;
    SET_GPR_U32(ctx, 31, 0x40AF90u);
    ctx->pc = 0x40AF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AF88u;
    // 0x40af8c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x40AF88u, 0x40AF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AF90u;
label_40af90:
    // 0x40af90: 0x1052000d  beq         $v0, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x40AF90u;
    {
        const bool branch_taken_0x40af90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x40AF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AF90u;
        // 0x40af94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40af90) {
            ctx->pc = 0x40AFC8u;
            goto label_40afc8;
        }
    }
    ctx->pc = 0x40AF98u;
    // 0x40af98: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x40af98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40af9c: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40AF9Cu;
    SET_GPR_U32(ctx, 31, 0x40AFA4u);
    ctx->pc = 0x40AFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AF9Cu;
    // 0x40afa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40AF9Cu, 0x40AFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AFA4u;
label_40afa4:
    // 0x40afa4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x40afa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40afa8: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40AFA8u;
    SET_GPR_U32(ctx, 31, 0x40AFB0u);
    ctx->pc = 0x40AFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AFA8u;
    // 0x40afac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40AFA8u, 0x40AFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AFB0u;
label_40afb0:
    // 0x40afb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40afb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40afb4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x40afb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x40afb8: 0xc0ca350  jal         func_328D40
    ctx->pc = 0x40AFB8u;
    SET_GPR_U32(ctx, 31, 0x40AFC0u);
    ctx->pc = 0x40AFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AFB8u;
    // 0x40afbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328D40u, 0x40AFB8u, 0x40AFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AFC0u;
label_40afc0:
    // 0x40afc0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x40AFC0u;
    {
        const bool branch_taken_0x40afc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AFC0u;
        // 0x40afc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40afc0) {
            ctx->pc = 0x40AFFCu;
            goto label_40affc;
        }
    }
    ctx->pc = 0x40AFC8u;
label_40afc8:
    // 0x40afc8: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x40AFC8u;
    SET_GPR_U32(ctx, 31, 0x40AFD0u);
    ctx->pc = 0x40AFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AFC8u;
    // 0x40afcc: 0x26c58308  addiu       $a1, $s6, -0x7CF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x40AFC8u, 0x40AFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AFD0u;
label_40afd0:
    // 0x40afd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40afd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40afd4: 0xc0c8ef2  jal         func_323BC8
    ctx->pc = 0x40AFD4u;
    SET_GPR_U32(ctx, 31, 0x40AFDCu);
    ctx->pc = 0x40AFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AFD4u;
    // 0x40afd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323BC8u, 0x40AFD4u, 0x40AFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AFDCu;
label_40afdc:
    // 0x40afdc: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x40AFDCu;
    SET_GPR_U32(ctx, 31, 0x40AFE4u);
    ctx->pc = 0x40AFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AFDCu;
    // 0x40afe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x40AFDCu, 0x40AFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AFE4u;
label_40afe4:
    // 0x40afe4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x40afe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40afe8:
    // 0x40afe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40afe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40afec: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x40AFECu;
    SET_GPR_U32(ctx, 31, 0x40AFF4u);
    ctx->pc = 0x40AFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AFECu;
    // 0x40aff0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x40AFECu, 0x40AFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AFF4u;
label_40aff4:
    // 0x40aff4: 0x105effd2  beq         $v0, $fp, . + 4 + (-0x2E << 2)
    ctx->pc = 0x40AFF4u;
    {
        const bool branch_taken_0x40aff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        ctx->pc = 0x40AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AFF4u;
        // 0x40aff8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40aff4) {
            ctx->pc = 0x40AF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40af40;
        }
    }
    ctx->pc = 0x40AFFCu;
label_40affc:
    // 0x40affc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x40affcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x40b000: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x40b000u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x40b004: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x40b004u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x40b008: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x40b008u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x40b00c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x40b00cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x40b010: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x40b010u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x40b014: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x40b014u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40b018: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x40b018u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40b01c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x40b01cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40b020: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40b020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40b024: 0x3e00008  jr          $ra
    ctx->pc = 0x40B024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40B028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B024u;
        // 0x40b028: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40B024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40B02Cu;
    // 0x40b02c: 0x0  nop
    ctx->pc = 0x40b02cu;
    // NOP
    ctx->pc = 0x40b030u;
}
