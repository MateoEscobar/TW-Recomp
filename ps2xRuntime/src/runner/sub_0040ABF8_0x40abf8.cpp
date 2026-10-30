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

// Function: sub_0040ABF8
// Address: 0x40abf8 - 0x40ad58
void sub_0040ABF8_0x40abf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040ABF8_0x40abf8");
#endif

    switch (ctx->pc) {
        case 0x40ac1cu: goto label_40ac1c;
        case 0x40ac2cu: goto label_40ac2c;
        case 0x40ac38u: goto label_40ac38;
        case 0x40ac48u: goto label_40ac48;
        case 0x40ac54u: goto label_40ac54;
        case 0x40ac60u: goto label_40ac60;
        case 0x40ac74u: goto label_40ac74;
        case 0x40ac80u: goto label_40ac80;
        case 0x40ac8cu: goto label_40ac8c;
        case 0x40aca4u: goto label_40aca4;
        case 0x40acb4u: goto label_40acb4;
        case 0x40acc0u: goto label_40acc0;
        case 0x40acccu: goto label_40accc;
        case 0x40acdcu: goto label_40acdc;
        case 0x40ace8u: goto label_40ace8;
        case 0x40acf4u: goto label_40acf4;
        case 0x40ad00u: goto label_40ad00;
        case 0x40ad0cu: goto label_40ad0c;
        case 0x40ad1cu: goto label_40ad1c;
        case 0x40ad2cu: goto label_40ad2c;
        case 0x40ad38u: goto label_40ad38;
        default: break;
    }

    ctx->pc = 0x40abf8u;

    // 0x40abf8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x40abf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x40abfc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x40abfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x40ac00: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x40ac00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x40ac04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40ac04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ac08: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x40ac08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x40ac0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x40ac0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x40ac10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40ac10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40ac14: 0xc0c8f7e  jal         func_323DF8
    ctx->pc = 0x40AC14u;
    SET_GPR_U32(ctx, 31, 0x40AC1Cu);
    ctx->pc = 0x40AC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AC14u;
    // 0x40ac18: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323DF8u, 0x40AC14u, 0x40AC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AC1Cu;
label_40ac1c:
    // 0x40ac1c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40ac1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40ac20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40ac20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ac24: 0xc102a16  jal         func_40A858
    ctx->pc = 0x40AC24u;
    SET_GPR_U32(ctx, 31, 0x40AC2Cu);
    ctx->pc = 0x40AC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AC24u;
    // 0x40ac28: 0x24a58248  addiu       $a1, $a1, -0x7DB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A858u, 0x40AC24u, 0x40AC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AC2Cu;
label_40ac2c:
    // 0x40ac2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40ac2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ac30: 0xc0c9064  jal         func_324190
    ctx->pc = 0x40AC30u;
    SET_GPR_U32(ctx, 31, 0x40AC38u);
    ctx->pc = 0x40AC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AC30u;
    // 0x40ac34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324190u, 0x40AC30u, 0x40AC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AC38u;
label_40ac38:
    // 0x40ac38: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40ac38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40ac3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40ac3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ac40: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x40AC40u;
    SET_GPR_U32(ctx, 31, 0x40AC48u);
    ctx->pc = 0x40AC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AC40u;
    // 0x40ac44: 0x24a582e0  addiu       $a1, $a1, -0x7D20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x40AC40u, 0x40AC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AC48u;
label_40ac48:
    // 0x40ac48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40ac48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ac4c: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40AC4Cu;
    SET_GPR_U32(ctx, 31, 0x40AC54u);
    ctx->pc = 0x40AC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AC4Cu;
    // 0x40ac50: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40AC4Cu, 0x40AC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AC54u;
label_40ac54:
    // 0x40ac54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40ac54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ac58: 0xc0c8faa  jal         func_323EA8
    ctx->pc = 0x40AC58u;
    SET_GPR_U32(ctx, 31, 0x40AC60u);
    ctx->pc = 0x40AC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AC58u;
    // 0x40ac5c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EA8u, 0x40AC58u, 0x40AC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AC60u;
label_40ac60:
    // 0x40ac60: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x40ac60u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
    // 0x40ac64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40ac64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ac68: 0x263182e8  addiu       $s1, $s1, -0x7D18
    ctx->pc = 0x40ac68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294935272));
    // 0x40ac6c: 0xc0c8eb4  jal         func_323AD0
    ctx->pc = 0x40AC6Cu;
    SET_GPR_U32(ctx, 31, 0x40AC74u);
    ctx->pc = 0x40AC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AC6Cu;
    // 0x40ac70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323AD0u, 0x40AC6Cu, 0x40AC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AC74u;
label_40ac74:
    // 0x40ac74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40ac74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ac78: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40AC78u;
    SET_GPR_U32(ctx, 31, 0x40AC80u);
    ctx->pc = 0x40AC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AC78u;
    // 0x40ac7c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40AC78u, 0x40AC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AC80u;
label_40ac80:
    // 0x40ac80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40ac80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ac84: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40AC84u;
    SET_GPR_U32(ctx, 31, 0x40AC8Cu);
    ctx->pc = 0x40AC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AC84u;
    // 0x40ac88: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40AC84u, 0x40AC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AC8Cu;
label_40ac8c:
    // 0x40ac8c: 0x3c120041  lui         $s2, 0x41
    ctx->pc = 0x40ac8cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65 << 16));
    // 0x40ac90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40ac90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ac94: 0x2652ab58  addiu       $s2, $s2, -0x54A8
    ctx->pc = 0x40ac94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945624));
    // 0x40ac98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x40ac98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40ac9c: 0xc0c8e7e  jal         func_3239F8
    ctx->pc = 0x40AC9Cu;
    SET_GPR_U32(ctx, 31, 0x40ACA4u);
    ctx->pc = 0x40ACA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AC9Cu;
    // 0x40aca0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x40AC9Cu, 0x40ACA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40ACA4u;
label_40aca4:
    // 0x40aca4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40aca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40aca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40aca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40acac: 0xc0ca350  jal         func_328D40
    ctx->pc = 0x40ACACu;
    SET_GPR_U32(ctx, 31, 0x40ACB4u);
    ctx->pc = 0x40ACB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40ACACu;
    // 0x40acb0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328D40u, 0x40ACACu, 0x40ACB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40ACB4u;
label_40acb4:
    // 0x40acb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40acb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40acb8: 0xc0c8eb4  jal         func_323AD0
    ctx->pc = 0x40ACB8u;
    SET_GPR_U32(ctx, 31, 0x40ACC0u);
    ctx->pc = 0x40ACBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40ACB8u;
    // 0x40acbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323AD0u, 0x40ACB8u, 0x40ACC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40ACC0u;
label_40acc0:
    // 0x40acc0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x40acc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40acc4: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40ACC4u;
    SET_GPR_U32(ctx, 31, 0x40ACCCu);
    ctx->pc = 0x40ACC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40ACC4u;
    // 0x40acc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40ACC4u, 0x40ACCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40ACCCu;
label_40accc:
    // 0x40accc: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40acccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40acd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40acd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40acd4: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x40ACD4u;
    SET_GPR_U32(ctx, 31, 0x40ACDCu);
    ctx->pc = 0x40ACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40ACD4u;
    // 0x40acd8: 0x24a582f0  addiu       $a1, $a1, -0x7D10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x40ACD4u, 0x40ACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40ACDCu;
label_40acdc:
    // 0x40acdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40acdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ace0: 0xc0c8ed4  jal         func_323B50
    ctx->pc = 0x40ACE0u;
    SET_GPR_U32(ctx, 31, 0x40ACE8u);
    ctx->pc = 0x40ACE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40ACE0u;
    // 0x40ace4: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B50u, 0x40ACE0u, 0x40ACE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40ACE8u;
label_40ace8:
    // 0x40ace8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40ace8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40acec: 0xc0c8cf8  jal         func_3233E0
    ctx->pc = 0x40ACECu;
    SET_GPR_U32(ctx, 31, 0x40ACF4u);
    ctx->pc = 0x40ACF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40ACECu;
    // 0x40acf0: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3233E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3233E0u, 0x40ACECu, 0x40ACF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40ACF4u;
label_40acf4:
    // 0x40acf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40acf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40acf8: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x40ACF8u;
    SET_GPR_U32(ctx, 31, 0x40AD00u);
    ctx->pc = 0x40ACFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40ACF8u;
    // 0x40acfc: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x40ACF8u, 0x40AD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AD00u;
label_40ad00:
    // 0x40ad00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40ad00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ad04: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40AD04u;
    SET_GPR_U32(ctx, 31, 0x40AD0Cu);
    ctx->pc = 0x40AD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AD04u;
    // 0x40ad08: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40AD04u, 0x40AD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AD0Cu;
label_40ad0c:
    // 0x40ad0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x40ad0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ad10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40ad10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ad14: 0xc0c8e7e  jal         func_3239F8
    ctx->pc = 0x40AD14u;
    SET_GPR_U32(ctx, 31, 0x40AD1Cu);
    ctx->pc = 0x40AD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AD14u;
    // 0x40ad18: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x40AD14u, 0x40AD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AD1Cu;
label_40ad1c:
    // 0x40ad1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40ad1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ad20: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x40ad20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x40ad24: 0xc0ca350  jal         func_328D40
    ctx->pc = 0x40AD24u;
    SET_GPR_U32(ctx, 31, 0x40AD2Cu);
    ctx->pc = 0x40AD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AD24u;
    // 0x40ad28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328D40u, 0x40AD24u, 0x40AD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AD2Cu;
label_40ad2c:
    // 0x40ad2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40ad2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ad30: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x40AD30u;
    SET_GPR_U32(ctx, 31, 0x40AD38u);
    ctx->pc = 0x40AD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AD30u;
    // 0x40ad34: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x40AD30u, 0x40AD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AD38u;
label_40ad38:
    // 0x40ad38: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x40ad38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x40ad3c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x40ad3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40ad40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x40ad40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40ad44: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x40ad44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40ad48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40ad48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40ad4c: 0x3e00008  jr          $ra
    ctx->pc = 0x40AD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AD4Cu;
        // 0x40ad50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40AD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40AD54u;
    // 0x40ad54: 0x0  nop
    ctx->pc = 0x40ad54u;
    // NOP
    ctx->pc = 0x40ad58u;
}
