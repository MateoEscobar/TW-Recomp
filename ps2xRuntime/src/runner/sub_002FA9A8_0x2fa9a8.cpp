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

// Function: sub_002FA9A8
// Address: 0x2fa9a8 - 0x2fad30
void sub_002FA9A8_0x2fa9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA9A8_0x2fa9a8");
#endif

    switch (ctx->pc) {
        case 0x2fa9e4u: goto label_2fa9e4;
        case 0x2fa9f0u: goto label_2fa9f0;
        case 0x2faa08u: goto label_2faa08;
        case 0x2faa14u: goto label_2faa14;
        case 0x2faa28u: goto label_2faa28;
        case 0x2faa58u: goto label_2faa58;
        case 0x2faa64u: goto label_2faa64;
        case 0x2faa6cu: goto label_2faa6c;
        case 0x2faa98u: goto label_2faa98;
        case 0x2faaa0u: goto label_2faaa0;
        case 0x2faab0u: goto label_2faab0;
        case 0x2faac0u: goto label_2faac0;
        case 0x2faad0u: goto label_2faad0;
        case 0x2faae0u: goto label_2faae0;
        case 0x2faaf0u: goto label_2faaf0;
        case 0x2faafcu: goto label_2faafc;
        case 0x2fab18u: goto label_2fab18;
        case 0x2fabacu: goto label_2fabac;
        case 0x2fabb8u: goto label_2fabb8;
        case 0x2fabe4u: goto label_2fabe4;
        case 0x2fabecu: goto label_2fabec;
        case 0x2fac04u: goto label_2fac04;
        case 0x2fac4cu: goto label_2fac4c;
        case 0x2fac7cu: goto label_2fac7c;
        case 0x2fac8cu: goto label_2fac8c;
        case 0x2fac98u: goto label_2fac98;
        case 0x2facbcu: goto label_2facbc;
        case 0x2facdcu: goto label_2facdc;
        case 0x2fad04u: goto label_2fad04;
        default: break;
    }

    ctx->pc = 0x2fa9a8u;

    // 0x2fa9a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2fa9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2fa9ac: 0x3c0505c0  lui         $a1, 0x5C0
    ctx->pc = 0x2fa9acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1472 << 16));
    // 0x2fa9b0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2fa9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2fa9b4: 0x34a5221f  ori         $a1, $a1, 0x221F
    ctx->pc = 0x2fa9b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8735);
    // 0x2fa9b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2fa9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2fa9bc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2fa9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2fa9c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2fa9c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa9c4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2fa9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2fa9c8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2fa9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2fa9cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fa9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fa9d0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2fa9d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2fa9d4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2fa9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fa9d8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2fa9d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fa9dc: 0xc089998  jal         func_226660
    ctx->pc = 0x2FA9DCu;
    SET_GPR_U32(ctx, 31, 0x2FA9E4u);
    ctx->pc = 0x2FA9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA9DCu;
    // 0x2fa9e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2FA9DCu, 0x2FA9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA9E4u;
label_2fa9e4:
    // 0x2fa9e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fa9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa9e8: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2FA9E8u;
    SET_GPR_U32(ctx, 31, 0x2FA9F0u);
    ctx->pc = 0x2FA9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA9E8u;
    // 0x2fa9ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2FA9E8u, 0x2FA9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA9F0u;
label_2fa9f0:
    // 0x2fa9f0: 0x90430018  lbu         $v1, 0x18($v0)
    ctx->pc = 0x2fa9f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2fa9f4: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x2fa9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x2fa9f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2fa9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2fa9fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fa9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2faa00: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2FAA00u;
    SET_GPR_U32(ctx, 31, 0x2FAA08u);
    ctx->pc = 0x2FAA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAA00u;
    // 0x2faa04: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2FAA00u, 0x2FAA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAA08u;
label_2faa08:
    // 0x2faa08: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2faa08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faa0c: 0xc0a7390  jal         func_29CE40
    ctx->pc = 0x2FAA0Cu;
    SET_GPR_U32(ctx, 31, 0x2FAA14u);
    ctx->pc = 0x2FAA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAA0Cu;
    // 0x2faa10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE40u, 0x2FAA0Cu, 0x2FAA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAA14u;
label_2faa14:
    // 0x2faa14: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FAA14u;
    {
        const bool branch_taken_0x2faa14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAA14u;
        // 0x2faa18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faa14) {
            ctx->pc = 0x2FAA30u;
            goto label_2faa30;
        }
    }
    ctx->pc = 0x2FAA1Cu;
    // 0x2faa1c: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x2faa1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2faa20: 0xc0891de  jal         func_224778
    ctx->pc = 0x2FAA20u;
    SET_GPR_U32(ctx, 31, 0x2FAA28u);
    ctx->pc = 0x2FAA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAA20u;
    // 0x2faa24: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224778u, 0x2FAA20u, 0x2FAA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAA28u;
label_2faa28:
    // 0x2faa28: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FAA28u;
    {
        const bool branch_taken_0x2faa28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2faa28) {
            ctx->pc = 0x2FAA2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FAA28u;
            // 0x2faa2c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FAA3Cu;
            goto label_2faa3c;
        }
    }
    ctx->pc = 0x2FAA30u;
label_2faa30:
    // 0x2faa30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2faa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2faa34: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x2FAA34u;
    {
        const bool branch_taken_0x2faa34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAA34u;
        // 0x2faa38: 0x10100b  movn        $v0, $zero, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faa34) {
            ctx->pc = 0x2FAD08u;
            goto label_2fad08;
        }
    }
    ctx->pc = 0x2FAA3Cu;
label_2faa3c:
    // 0x2faa3c: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x2faa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2faa40: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2faa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x2faa44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2faa44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faa48: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2faa48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faa4c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2faa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2faa50: 0xc088e00  jal         func_223800
    ctx->pc = 0x2FAA50u;
    SET_GPR_U32(ctx, 31, 0x2FAA58u);
    ctx->pc = 0x2FAA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAA50u;
    // 0x2faa54: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223800u, 0x2FAA50u, 0x2FAA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAA58u;
label_2faa58:
    // 0x2faa58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2faa58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faa5c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2FAA5Cu;
    SET_GPR_U32(ctx, 31, 0x2FAA64u);
    ctx->pc = 0x2FAA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAA5Cu;
    // 0x2faa60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2FAA5Cu, 0x2FAA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAA64u;
label_2faa64:
    // 0x2faa64: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2FAA64u;
    SET_GPR_U32(ctx, 31, 0x2FAA6Cu);
    ctx->pc = 0x2FAA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAA64u;
    // 0x2faa68: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2FAA64u, 0x2FAA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAA6Cu;
label_2faa6c:
    // 0x2faa6c: 0x50510007  beql        $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FAA6Cu;
    {
        const bool branch_taken_0x2faa6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x2faa6c) {
            ctx->pc = 0x2FAA70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FAA6Cu;
            // 0x2faa70: 0x108042  srl         $s0, $s0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FAA8Cu;
            goto label_2faa8c;
        }
    }
    ctx->pc = 0x2FAA74u;
    // 0x2faa74: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2faa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2faa78: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2faa78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2faa7c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2faa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2faa80: 0x54640003  bnel        $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FAA80u;
    {
        const bool branch_taken_0x2faa80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2faa80) {
            ctx->pc = 0x2FAA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FAA80u;
            // 0x2faa84: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FAA90u;
            goto label_2faa90;
        }
    }
    ctx->pc = 0x2FAA88u;
    // 0x2faa88: 0x108042  srl         $s0, $s0, 1
    ctx->pc = 0x2faa88u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_2faa8c:
    // 0x2faa8c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2faa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2faa90:
    // 0x2faa90: 0xc0a4392  jal         func_290E48
    ctx->pc = 0x2FAA90u;
    SET_GPR_U32(ctx, 31, 0x2FAA98u);
    ctx->pc = 0x2FAA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAA90u;
    // 0x2faa94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290E48u, 0x2FAA90u, 0x2FAA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAA98u;
label_2faa98:
    // 0x2faa98: 0xc088e60  jal         func_223980
    ctx->pc = 0x2FAA98u;
    SET_GPR_U32(ctx, 31, 0x2FAAA0u);
    ctx->pc = 0x2FAA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAA98u;
    // 0x2faa9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x2FAA98u, 0x2FAAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAAA0u;
label_2faaa0:
    // 0x2faaa0: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2FAAA0u;
    {
        const bool branch_taken_0x2faaa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2faaa0) {
            ctx->pc = 0x2FABB8u;
            goto label_2fabb8;
        }
    }
    ctx->pc = 0x2FAAA8u;
    // 0x2faaa8: 0xc088e40  jal         func_223900
    ctx->pc = 0x2FAAA8u;
    SET_GPR_U32(ctx, 31, 0x2FAAB0u);
    ctx->pc = 0x2FAAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAAA8u;
    // 0x2faaac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223900u, 0x2FAAA8u, 0x2FAAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAAB0u;
label_2faab0:
    // 0x2faab0: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2FAAB0u;
    {
        const bool branch_taken_0x2faab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2faab0) {
            ctx->pc = 0x2FABB8u;
            goto label_2fabb8;
        }
    }
    ctx->pc = 0x2FAAB8u;
    // 0x2faab8: 0xc088e60  jal         func_223980
    ctx->pc = 0x2FAAB8u;
    SET_GPR_U32(ctx, 31, 0x2FAAC0u);
    ctx->pc = 0x2FAABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAAB8u;
    // 0x2faabc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x2FAAB8u, 0x2FAAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAAC0u;
label_2faac0:
    // 0x2faac0: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2FAAC0u;
    {
        const bool branch_taken_0x2faac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2faac0) {
            ctx->pc = 0x2FABB8u;
            goto label_2fabb8;
        }
    }
    ctx->pc = 0x2FAAC8u;
    // 0x2faac8: 0xc088e40  jal         func_223900
    ctx->pc = 0x2FAAC8u;
    SET_GPR_U32(ctx, 31, 0x2FAAD0u);
    ctx->pc = 0x2FAACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAAC8u;
    // 0x2faacc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223900u, 0x2FAAC8u, 0x2FAAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAAD0u;
label_2faad0:
    // 0x2faad0: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2FAAD0u;
    {
        const bool branch_taken_0x2faad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2faad0) {
            ctx->pc = 0x2FABB8u;
            goto label_2fabb8;
        }
    }
    ctx->pc = 0x2FAAD8u;
    // 0x2faad8: 0xc088edc  jal         func_223B70
    ctx->pc = 0x2FAAD8u;
    SET_GPR_U32(ctx, 31, 0x2FAAE0u);
    ctx->pc = 0x2FAADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAAD8u;
    // 0x2faadc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x2FAAD8u, 0x2FAAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAAE0u;
label_2faae0:
    // 0x2faae0: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2FAAE0u;
    {
        const bool branch_taken_0x2faae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2faae0) {
            ctx->pc = 0x2FABB8u;
            goto label_2fabb8;
        }
    }
    ctx->pc = 0x2FAAE8u;
    // 0x2faae8: 0xc087502  jal         func_21D408
    ctx->pc = 0x2FAAE8u;
    SET_GPR_U32(ctx, 31, 0x2FAAF0u);
    ctx->pc = 0x2FAAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAAE8u;
    // 0x2faaec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2FAAE8u, 0x2FAAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAAF0u;
label_2faaf0:
    // 0x2faaf0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2faaf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faaf4: 0xc088ed2  jal         func_223B48
    ctx->pc = 0x2FAAF4u;
    SET_GPR_U32(ctx, 31, 0x2FAAFCu);
    ctx->pc = 0x2FAAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAAF4u;
    // 0x2faaf8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x2FAAF4u, 0x2FAAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAAFCu;
label_2faafc:
    // 0x2faafc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2faafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fab00: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FAB00u;
    {
        const bool branch_taken_0x2fab00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fab00) {
            ctx->pc = 0x2FAB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FAB00u;
            // 0x2fab04: 0x9290014a  lbu         $s0, 0x14A($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 330)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FAB0Cu;
            goto label_2fab0c;
        }
    }
    ctx->pc = 0x2FAB08u;
    // 0x2fab08: 0x9290014b  lbu         $s0, 0x14B($s4)
    ctx->pc = 0x2fab08u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 331)));
label_2fab0c:
    // 0x2fab0c: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x2fab0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2fab10: 0xc08c564  jal         func_231590
    ctx->pc = 0x2FAB10u;
    SET_GPR_U32(ctx, 31, 0x2FAB18u);
    ctx->pc = 0x2FAB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAB10u;
    // 0x2fab14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231590u, 0x2FAB10u, 0x2FAB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAB18u;
label_2fab18:
    // 0x2fab18: 0x52000025  beql        $s0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x2FAB18u;
    {
        const bool branch_taken_0x2fab18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fab18) {
            ctx->pc = 0x2FAB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FAB18u;
            // 0x2fab1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FABB0u;
            goto label_2fabb0;
        }
    }
    ctx->pc = 0x2FAB20u;
    // 0x2fab20: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FAB20u;
    {
        const bool branch_taken_0x2fab20 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2FAB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB20u;
        // 0x2fab24: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fab20) {
            ctx->pc = 0x2FAB3Cu;
            goto label_2fab3c;
        }
    }
    ctx->pc = 0x2FAB28u;
    // 0x2fab28: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2fab28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2fab2c: 0x0  nop
    ctx->pc = 0x2fab2cu;
    // NOP
    // 0x2fab30: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2fab30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2fab34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2FAB34u;
    {
        const bool branch_taken_0x2fab34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB34u;
        // 0x2fab38: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fab34) {
            ctx->pc = 0x2FAB58u;
            goto label_2fab58;
        }
    }
    ctx->pc = 0x2FAB3Cu;
label_2fab3c:
    // 0x2fab3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fab3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2fab40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2fab40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2fab44: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2fab44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2fab48: 0x0  nop
    ctx->pc = 0x2fab48u;
    // NOP
    // 0x2fab4c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2fab4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2fab50: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2fab50u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x2fab54: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2fab54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2fab58:
    // 0x2fab58: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FAB58u;
    {
        const bool branch_taken_0x2fab58 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2FAB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB58u;
        // 0x2fab5c: 0x24440ad0  addiu       $a0, $v0, 0xAD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fab58) {
            ctx->pc = 0x2FAB74u;
            goto label_2fab74;
        }
    }
    ctx->pc = 0x2FAB60u;
    // 0x2fab60: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x2fab60u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fab64: 0x0  nop
    ctx->pc = 0x2fab64u;
    // NOP
    // 0x2fab68: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2fab68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2fab6c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2FAB6Cu;
    {
        const bool branch_taken_0x2fab6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB6Cu;
        // 0x2fab70: 0xc48c0000  lwc1        $f12, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fab6c) {
            ctx->pc = 0x2FAB94u;
            goto label_2fab94;
        }
    }
    ctx->pc = 0x2FAB74u;
label_2fab74:
    // 0x2fab74: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x2fab74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x2fab78: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2fab78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2fab7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2fab7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2fab80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fab80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fab84: 0x0  nop
    ctx->pc = 0x2fab84u;
    // NOP
    // 0x2fab88: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2fab88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2fab8c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2fab8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2fab90: 0xc48c0000  lwc1        $f12, 0x0($a0)
    ctx->pc = 0x2fab90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2fab94:
    // 0x2fab94: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2fab94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2fab98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fab98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fab9c: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x2fab9cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[1]); }
    // 0x2faba0: 0x460c1302  mul.s       $f12, $f2, $f12
    ctx->pc = 0x2faba0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x2faba4: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x2FABA4u;
    SET_GPR_U32(ctx, 31, 0x2FABACu);
    ctx->pc = 0x2FABA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FABA4u;
    // 0x2faba8: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x2FABA4u, 0x2FABACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FABACu;
label_2fabac:
    // 0x2fabac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fabacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fabb0:
    // 0x2fabb0: 0xc0a439e  jal         func_290E78
    ctx->pc = 0x2FABB0u;
    SET_GPR_U32(ctx, 31, 0x2FABB8u);
    ctx->pc = 0x2FABB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FABB0u;
    // 0x2fabb4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290E78u, 0x2FABB0u, 0x2FABB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FABB8u;
label_2fabb8:
    // 0x2fabb8: 0x1260002e  beqz        $s3, . + 4 + (0x2E << 2)
    ctx->pc = 0x2FABB8u;
    {
        const bool branch_taken_0x2fabb8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fabb8) {
            ctx->pc = 0x2FAC74u;
            goto label_2fac74;
        }
    }
    ctx->pc = 0x2FABC0u;
    // 0x2fabc0: 0x1271002c  beq         $s3, $s1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2FABC0u;
    {
        const bool branch_taken_0x2fabc0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 17));
        if (branch_taken_0x2fabc0) {
            ctx->pc = 0x2FAC74u;
            goto label_2fac74;
        }
    }
    ctx->pc = 0x2FABC8u;
    // 0x2fabc8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2fabc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fabcc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2fabccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2fabd0: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x2fabd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x2fabd4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2FABD4u;
    {
        const bool branch_taken_0x2fabd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fabd4) {
            ctx->pc = 0x2FAC74u;
            goto label_2fac74;
        }
    }
    ctx->pc = 0x2FABDCu;
    // 0x2fabdc: 0xc089bfc  jal         func_226FF0
    ctx->pc = 0x2FABDCu;
    SET_GPR_U32(ctx, 31, 0x2FABE4u);
    ctx->pc = 0x2FABE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FABDCu;
    // 0x2fabe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2FABDCu, 0x2FABE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FABE4u;
label_2fabe4:
    // 0x2fabe4: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x2FABE4u;
    SET_GPR_U32(ctx, 31, 0x2FABECu);
    ctx->pc = 0x2FABE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FABE4u;
    // 0x2fabe8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2FABE4u, 0x2FABECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FABECu;
label_2fabec:
    // 0x2fabec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2fabecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fabf0: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2FABF0u;
    {
        const bool branch_taken_0x2fabf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FABF0u;
        // 0x2fabf4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fabf0) {
            ctx->pc = 0x2FAC74u;
            goto label_2fac74;
        }
    }
    ctx->pc = 0x2FABF8u;
    // 0x2fabf8: 0x94650112  lhu         $a1, 0x112($v1)
    ctx->pc = 0x2fabf8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 274)));
    // 0x2fabfc: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x2FABFCu;
    SET_GPR_U32(ctx, 31, 0x2FAC04u);
    ctx->pc = 0x2FAC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FABFCu;
    // 0x2fac00: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x2FABFCu, 0x2FAC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAC04u;
label_2fac04:
    // 0x2fac04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fac04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fac08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fac08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fac0c: 0x80820087  lb          $v0, 0x87($a0)
    ctx->pc = 0x2fac0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 135)));
    // 0x2fac10: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2FAC10u;
    {
        const bool branch_taken_0x2fac10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FAC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC10u;
        // 0x2fac14: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fac10) {
            ctx->pc = 0x2FAC74u;
            goto label_2fac74;
        }
    }
    ctx->pc = 0x2FAC18u;
    // 0x2fac18: 0x80830086  lb          $v1, 0x86($a0)
    ctx->pc = 0x2fac18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 134)));
    // 0x2fac1c: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2FAC1Cu;
    {
        const bool branch_taken_0x2fac1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FAC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC1Cu;
        // 0x2fac20: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fac1c) {
            ctx->pc = 0x2FAC74u;
            goto label_2fac74;
        }
    }
    ctx->pc = 0x2FAC24u;
    // 0x2fac24: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x2fac24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x2fac28: 0x86650092  lh          $a1, 0x92($s3)
    ctx->pc = 0x2fac28u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
    // 0x2fac2c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2fac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2fac30: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2fac30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fac34: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2fac34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2fac38: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2fac38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2fac3c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2fac3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2fac40: 0xc474013c  lwc1        $f20, 0x13C($v1)
    ctx->pc = 0x2fac40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fac44: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2FAC44u;
    SET_GPR_U32(ctx, 31, 0x2FAC4Cu);
    ctx->pc = 0x2FAC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAC44u;
    // 0x2fac48: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2FAC44u, 0x2FAC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAC4Cu;
label_2fac4c:
    // 0x2fac4c: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x2fac4cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2fac50: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2fac50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fac54: 0x0  nop
    ctx->pc = 0x2fac54u;
    // NOP
    // 0x2fac58: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2FAC58u;
    {
        const bool branch_taken_0x2fac58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FAC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC58u;
        // 0x2fac5c: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fac58) {
            ctx->pc = 0x2FAC70u;
            goto label_2fac70;
        }
    }
    ctx->pc = 0x2FAC60u;
    // 0x2fac60: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2fac60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fac64: 0x904302d3  lbu         $v1, 0x2D3($v0)
    ctx->pc = 0x2fac64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 723)));
    // 0x2fac68: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FAC68u;
    {
        const bool branch_taken_0x2fac68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC68u;
        // 0x2fac6c: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fac68) {
            ctx->pc = 0x2FAC74u;
            goto label_2fac74;
        }
    }
    ctx->pc = 0x2FAC70u;
label_2fac70:
    // 0x2fac70: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x2fac70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_2fac74:
    // 0x2fac74: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2FAC74u;
    SET_GPR_U32(ctx, 31, 0x2FAC7Cu);
    ctx->pc = 0x2FAC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAC74u;
    // 0x2fac78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2FAC74u, 0x2FAC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAC7Cu;
label_2fac7c:
    // 0x2fac7c: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x2fac7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2fac80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fac80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fac84: 0xc08c424  jal         func_231090
    ctx->pc = 0x2FAC84u;
    SET_GPR_U32(ctx, 31, 0x2FAC8Cu);
    ctx->pc = 0x2FAC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAC84u;
    // 0x2fac88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231090u, 0x2FAC84u, 0x2FAC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAC8Cu;
label_2fac8c:
    // 0x2fac8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fac8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fac90: 0xc051fbc  jal         func_147EF0
    ctx->pc = 0x2FAC90u;
    SET_GPR_U32(ctx, 31, 0x2FAC98u);
    ctx->pc = 0x2FAC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAC90u;
    // 0x2fac94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2FAC90u, 0x2FAC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAC98u;
label_2fac98:
    // 0x2fac98: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x2fac98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fac9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2fac9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2faca0: 0x0  nop
    ctx->pc = 0x2faca0u;
    // NOP
    // 0x2faca4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2faca4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2faca8: 0x0  nop
    ctx->pc = 0x2faca8u;
    // NOP
    // 0x2facac: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2FACACu;
    {
        const bool branch_taken_0x2facac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2facac) {
            ctx->pc = 0x2FACF0u;
            goto label_2facf0;
        }
    }
    ctx->pc = 0x2FACB4u;
    // 0x2facb4: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2FACB4u;
    SET_GPR_U32(ctx, 31, 0x2FACBCu);
    ctx->pc = 0x2FACB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FACB4u;
    // 0x2facb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2FACB4u, 0x2FACBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FACBCu;
label_2facbc:
    // 0x2facbc: 0x90430018  lbu         $v1, 0x18($v0)
    ctx->pc = 0x2facbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2facc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2facc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2facc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2facc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2facc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2facc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2faccc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2facccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2facd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2facd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2facd4: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2FACD4u;
    SET_GPR_U32(ctx, 31, 0x2FACDCu);
    ctx->pc = 0x2FACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FACD4u;
    // 0x2facd8: 0xe4400010  swc1        $f0, 0x10($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2FACD4u, 0x2FACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FACDCu;
label_2facdc:
    // 0x2facdc: 0x90430018  lbu         $v1, 0x18($v0)
    ctx->pc = 0x2facdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2face0: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x2face0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2face4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2face4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2face8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2face8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2facec: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2facecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2facf0:
    // 0x2facf0: 0x12330004  beq         $s1, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FACF0u;
    {
        const bool branch_taken_0x2facf0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x2FACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FACF0u;
        // 0x2facf4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2facf0) {
            ctx->pc = 0x2FAD04u;
            goto label_2fad04;
        }
    }
    ctx->pc = 0x2FACF8u;
    // 0x2facf8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2facf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2facfc: 0xc0a33f8  jal         func_28CFE0
    ctx->pc = 0x2FACFCu;
    SET_GPR_U32(ctx, 31, 0x2FAD04u);
    ctx->pc = 0x2FAD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FACFCu;
    // 0x2fad00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2FACFCu, 0x2FAD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAD04u;
label_2fad04:
    // 0x2fad04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fad04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fad08:
    // 0x2fad08: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2fad08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fad0c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2fad0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fad10: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2fad10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fad14: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2fad14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fad18: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2fad18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fad1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fad1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fad20: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2fad20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fad24: 0x3e00008  jr          $ra
    ctx->pc = 0x2FAD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FAD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD24u;
        // 0x2fad28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FAD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FAD2Cu;
    // 0x2fad2c: 0x0  nop
    ctx->pc = 0x2fad2cu;
    // NOP
    ctx->pc = 0x2fad30u;
}
