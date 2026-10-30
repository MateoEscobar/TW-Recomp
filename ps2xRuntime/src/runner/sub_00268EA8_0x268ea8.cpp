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

// Function: sub_00268EA8
// Address: 0x268ea8 - 0x2690f0
void sub_00268EA8_0x268ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268EA8_0x268ea8");
#endif

    switch (ctx->pc) {
        case 0x268ee8u: goto label_268ee8;
        case 0x268ef8u: goto label_268ef8;
        case 0x268f0cu: goto label_268f0c;
        case 0x268f1cu: goto label_268f1c;
        case 0x268f30u: goto label_268f30;
        case 0x268f4cu: goto label_268f4c;
        case 0x268f8cu: goto label_268f8c;
        case 0x268f9cu: goto label_268f9c;
        case 0x268fccu: goto label_268fcc;
        case 0x268fd8u: goto label_268fd8;
        case 0x268ff8u: goto label_268ff8;
        case 0x269000u: goto label_269000;
        case 0x269020u: goto label_269020;
        case 0x269034u: goto label_269034;
        case 0x269040u: goto label_269040;
        case 0x269060u: goto label_269060;
        case 0x269068u: goto label_269068;
        case 0x269098u: goto label_269098;
        case 0x2690a8u: goto label_2690a8;
        case 0x2690b4u: goto label_2690b4;
        case 0x2690c4u: goto label_2690c4;
        default: break;
    }

    ctx->pc = 0x268ea8u;

    // 0x268ea8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x268ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x268eac: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x268eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x268eb0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x268eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x268eb4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x268eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x268eb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x268eb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268ebc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x268ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x268ec0: 0x263000c4  addiu       $s0, $s1, 0xC4
    ctx->pc = 0x268ec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    // 0x268ec4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x268ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x268ec8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x268ec8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268ecc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x268eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x268ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268ed4: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x268ed4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x268ed8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x268ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x268edc: 0x8e3400d4  lw          $s4, 0xD4($s1)
    ctx->pc = 0x268edcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x268ee0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x268EE0u;
    SET_GPR_U32(ctx, 31, 0x268EE8u);
    ctx->pc = 0x268EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268EE0u;
    // 0x268ee4: 0xa6800118  sh          $zero, 0x118($s4) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 20), 280), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x268EE0u, 0x268EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268EE8u;
label_268ee8:
    // 0x268ee8: 0x12420077  beq         $s2, $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x268EE8u;
    {
        const bool branch_taken_0x268ee8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x268EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268EE8u;
        // 0x268eec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ee8) {
            ctx->pc = 0x2690C8u;
            goto label_2690c8;
        }
    }
    ctx->pc = 0x268EF0u;
    // 0x268ef0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x268EF0u;
    SET_GPR_U32(ctx, 31, 0x268EF8u);
    ctx->pc = 0x268EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268EF0u;
    // 0x268ef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x268EF0u, 0x268EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268EF8u;
label_268ef8:
    // 0x268ef8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x268ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x268efc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268f00: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x268f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268f04: 0xc099cb4  jal         func_2672D0
    ctx->pc = 0x268F04u;
    SET_GPR_U32(ctx, 31, 0x268F0Cu);
    ctx->pc = 0x268F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268F04u;
    // 0x268f08: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x268F04u, 0x268F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268F0Cu;
label_268f0c:
    // 0x268f0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x268f0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268f10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x268f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268f14: 0xc08a684  jal         func_229A10
    ctx->pc = 0x268F14u;
    SET_GPR_U32(ctx, 31, 0x268F1Cu);
    ctx->pc = 0x268F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268F14u;
    // 0x268f18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229A10u, 0x268F14u, 0x268F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268F1Cu;
label_268f1c:
    // 0x268f1c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x268f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x268f20: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x268f20u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x268f24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x268f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268f28: 0xc095358  jal         func_254D60
    ctx->pc = 0x268F28u;
    SET_GPR_U32(ctx, 31, 0x268F30u);
    ctx->pc = 0x268F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268F28u;
    // 0x268f2c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x254D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254D60u, 0x268F28u, 0x268F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268F30u;
label_268f30:
    // 0x268f30: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x268f30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268f34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x268f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268f38: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x268f38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268f3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268f40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x268f40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268f44: 0xc099b40  jal         func_266D00
    ctx->pc = 0x268F44u;
    SET_GPR_U32(ctx, 31, 0x268F4Cu);
    ctx->pc = 0x268F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268F44u;
    // 0x268f48: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x266D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266D00u, 0x268F44u, 0x268F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268F4Cu;
label_268f4c:
    // 0x268f4c: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x268f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x268f50: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x268f50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x268f54: 0x24e70798  addiu       $a3, $a3, 0x798
    ctx->pc = 0x268f54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1944));
    // 0x268f58: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x268f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x268f5c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x268f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x268f60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268f64: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x268f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x268f68: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x268f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x268f6c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x268f6cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x268f70: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x268f70u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x268f74: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x268f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x268f78: 0x30c60030  andi        $a2, $a2, 0x30
    ctx->pc = 0x268f78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)48);
    // 0x268f7c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x268f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x268f80: 0x6a902  srl         $s5, $a2, 4
    ctx->pc = 0x268f80u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x268f84: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x268F84u;
    SET_GPR_U32(ctx, 31, 0x268F8Cu);
    ctx->pc = 0x268F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268F84u;
    // 0x268f88: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x268F84u, 0x268F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268F8Cu;
label_268f8c:
    // 0x268f8c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x268F8Cu;
    {
        const bool branch_taken_0x268f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F8Cu;
        // 0x268f90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268f8c) {
            ctx->pc = 0x269018u;
            goto label_269018;
        }
    }
    ctx->pc = 0x268F94u;
    // 0x268f94: 0xc089998  jal         func_226660
    ctx->pc = 0x268F94u;
    SET_GPR_U32(ctx, 31, 0x268F9Cu);
    ctx->pc = 0x268F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268F94u;
    // 0x268f98: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x268F94u, 0x268F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268F9Cu;
label_268f9c:
    // 0x268f9c: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x268F9Cu;
    {
        const bool branch_taken_0x268f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268f9c) {
            ctx->pc = 0x268FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268F9Cu;
            // 0x268fa0: 0x9682011a  lhu         $v0, 0x11A($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 282)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269008u;
            goto label_269008;
        }
    }
    ctx->pc = 0x268FA4u;
    // 0x268fa4: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x268fa4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x268fa8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x268fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x268fac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x268facu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x268fb0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x268fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x268fb4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x268fb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x268fb8: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x268FB8u;
    {
        const bool branch_taken_0x268fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268fb8) {
            ctx->pc = 0x268FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268FB8u;
            // 0x268fbc: 0x9682011a  lhu         $v0, 0x11A($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 282)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269008u;
            goto label_269008;
        }
    }
    ctx->pc = 0x268FC0u;
    // 0x268fc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268fc4: 0xc08b2c0  jal         func_22CB00
    ctx->pc = 0x268FC4u;
    SET_GPR_U32(ctx, 31, 0x268FCCu);
    ctx->pc = 0x268FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268FC4u;
    // 0x268fc8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB00u, 0x268FC4u, 0x268FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268FCCu;
label_268fcc:
    // 0x268fcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268fd0: 0xc0a0152  jal         func_280548
    ctx->pc = 0x268FD0u;
    SET_GPR_U32(ctx, 31, 0x268FD8u);
    ctx->pc = 0x268FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268FD0u;
    // 0x268fd4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280548u, 0x268FD0u, 0x268FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268FD8u;
label_268fd8:
    // 0x268fd8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x268fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x268fdc: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x268fdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
    // 0x268fe0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x268fe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x268fe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268fe8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x268fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268fec: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x268fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x268ff0: 0xc09a9b4  jal         func_26A6D0
    ctx->pc = 0x268FF0u;
    SET_GPR_U32(ctx, 31, 0x268FF8u);
    ctx->pc = 0x268FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268FF0u;
    // 0x268ff4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A6D0u, 0x268FF0u, 0x268FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268FF8u;
label_268ff8:
    // 0x268ff8: 0xc09a4ec  jal         func_2693B0
    ctx->pc = 0x268FF8u;
    SET_GPR_U32(ctx, 31, 0x269000u);
    ctx->pc = 0x268FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268FF8u;
    // 0x268ffc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2693B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2693B0u, 0x268FF8u, 0x269000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269000u;
label_269000:
    // 0x269000: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x269000u;
    {
        const bool branch_taken_0x269000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269000u;
        // 0x269004: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269000) {
            ctx->pc = 0x2690C8u;
            goto label_2690c8;
        }
    }
    ctx->pc = 0x269008u;
label_269008:
    // 0x269008: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x269008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26900c: 0x2410008e  addiu       $s0, $zero, 0x8E
    ctx->pc = 0x26900cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x269010: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x269010u;
    {
        const bool branch_taken_0x269010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269010u;
        // 0x269014: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269010) {
            ctx->pc = 0x26907Cu;
            goto label_26907c;
        }
    }
    ctx->pc = 0x269018u;
label_269018:
    // 0x269018: 0xc089998  jal         func_226660
    ctx->pc = 0x269018u;
    SET_GPR_U32(ctx, 31, 0x269020u);
    ctx->pc = 0x26901Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269018u;
    // 0x26901c: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x269018u, 0x269020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269020u;
label_269020:
    // 0x269020: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x269020u;
    {
        const bool branch_taken_0x269020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269020) {
            ctx->pc = 0x269024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269020u;
            // 0x269024: 0x9682011a  lhu         $v0, 0x11A($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 282)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269070u;
            goto label_269070;
        }
    }
    ctx->pc = 0x269028u;
    // 0x269028: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26902c: 0xc08b2c0  jal         func_22CB00
    ctx->pc = 0x26902Cu;
    SET_GPR_U32(ctx, 31, 0x269034u);
    ctx->pc = 0x269030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26902Cu;
    // 0x269030: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB00u, 0x26902Cu, 0x269034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269034u;
label_269034:
    // 0x269034: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269038: 0xc0a0152  jal         func_280548
    ctx->pc = 0x269038u;
    SET_GPR_U32(ctx, 31, 0x269040u);
    ctx->pc = 0x26903Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269038u;
    // 0x26903c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280548u, 0x269038u, 0x269040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269040u;
label_269040:
    // 0x269040: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x269040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x269044: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x269044u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
    // 0x269048: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x269048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26904c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26904cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269050: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x269050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269054: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x269054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269058: 0xc09a9b4  jal         func_26A6D0
    ctx->pc = 0x269058u;
    SET_GPR_U32(ctx, 31, 0x269060u);
    ctx->pc = 0x26905Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269058u;
    // 0x26905c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A6D0u, 0x269058u, 0x269060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269060u;
label_269060:
    // 0x269060: 0xc09a544  jal         func_269510
    ctx->pc = 0x269060u;
    SET_GPR_U32(ctx, 31, 0x269068u);
    ctx->pc = 0x269064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269060u;
    // 0x269064: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269510u, 0x269060u, 0x269068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269068u;
label_269068:
    // 0x269068: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x269068u;
    {
        const bool branch_taken_0x269068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269068u;
        // 0x26906c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269068) {
            ctx->pc = 0x2690C8u;
            goto label_2690c8;
        }
    }
    ctx->pc = 0x269070u;
label_269070:
    // 0x269070: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x269070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269074: 0x24100082  addiu       $s0, $zero, 0x82
    ctx->pc = 0x269074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x269078: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x269078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_26907c:
    // 0x26907c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x26907cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x269080: 0x2ea20002  sltiu       $v0, $s5, 0x2
    ctx->pc = 0x269080u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x269084: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x269084u;
    {
        const bool branch_taken_0x269084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269084u;
        // 0x269088: 0x83800a  movz        $s0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269084) {
            ctx->pc = 0x2690B4u;
            goto label_2690b4;
        }
    }
    ctx->pc = 0x26908Cu;
    // 0x26908c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26908cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269090: 0xc089998  jal         func_226660
    ctx->pc = 0x269090u;
    SET_GPR_U32(ctx, 31, 0x269098u);
    ctx->pc = 0x269094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269090u;
    // 0x269094: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x269090u, 0x269098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269098u;
label_269098:
    // 0x269098: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x269098u;
    {
        const bool branch_taken_0x269098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269098u;
        // 0x26909c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269098) {
            ctx->pc = 0x2690B8u;
            goto label_2690b8;
        }
    }
    ctx->pc = 0x2690A0u;
    // 0x2690a0: 0xc08b2c0  jal         func_22CB00
    ctx->pc = 0x2690A0u;
    SET_GPR_U32(ctx, 31, 0x2690A8u);
    ctx->pc = 0x2690A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2690A0u;
    // 0x2690a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB00u, 0x2690A0u, 0x2690A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2690A8u;
label_2690a8:
    // 0x2690a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2690a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2690ac: 0xc0a0152  jal         func_280548
    ctx->pc = 0x2690ACu;
    SET_GPR_U32(ctx, 31, 0x2690B4u);
    ctx->pc = 0x2690B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2690ACu;
    // 0x2690b0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280548u, 0x2690ACu, 0x2690B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2690B4u;
label_2690b4:
    // 0x2690b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2690b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2690b8:
    // 0x2690b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2690b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2690bc: 0xc09a902  jal         func_26A408
    ctx->pc = 0x2690BCu;
    SET_GPR_U32(ctx, 31, 0x2690C4u);
    ctx->pc = 0x2690C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2690BCu;
    // 0x2690c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A408u, 0x2690BCu, 0x2690C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2690C4u;
label_2690c4:
    // 0x2690c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2690c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2690c8:
    // 0x2690c8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2690c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2690cc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2690ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2690d0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2690d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2690d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2690d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2690d8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2690d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2690dc: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2690dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2690e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2690e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2690e4: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2690e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2690e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2690E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2690ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690E8u;
        // 0x2690ec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2690E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2690F0u;
}
