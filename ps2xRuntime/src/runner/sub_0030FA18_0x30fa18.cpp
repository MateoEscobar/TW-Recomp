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

// Function: sub_0030FA18
// Address: 0x30fa18 - 0x30fc48
void sub_0030FA18_0x30fa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030FA18_0x30fa18");
#endif

    switch (ctx->pc) {
        case 0x30fa6cu: goto label_30fa6c;
        case 0x30fa74u: goto label_30fa74;
        case 0x30fa88u: goto label_30fa88;
        case 0x30fa94u: goto label_30fa94;
        case 0x30fab4u: goto label_30fab4;
        case 0x30fac8u: goto label_30fac8;
        case 0x30fad8u: goto label_30fad8;
        case 0x30fafcu: goto label_30fafc;
        case 0x30fb24u: goto label_30fb24;
        case 0x30fb40u: goto label_30fb40;
        case 0x30fb54u: goto label_30fb54;
        case 0x30fb64u: goto label_30fb64;
        case 0x30fb78u: goto label_30fb78;
        case 0x30fba0u: goto label_30fba0;
        case 0x30fbb8u: goto label_30fbb8;
        case 0x30fbd8u: goto label_30fbd8;
        case 0x30fbe0u: goto label_30fbe0;
        case 0x30fbf4u: goto label_30fbf4;
        case 0x30fc18u: goto label_30fc18;
        default: break;
    }

    ctx->pc = 0x30fa18u;

    // 0x30fa18: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x30fa18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x30fa1c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x30fa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x30fa20: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x30fa20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x30fa24: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x30fa24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x30fa28: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x30fa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x30fa2c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x30fa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x30fa30: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x30fa30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x30fa34: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x30fa34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x30fa38: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x30fa38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x30fa3c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x30fa3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x30fa40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30fa40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30fa44: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x30fa44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x30fa48: 0x90820028  lbu         $v0, 0x28($a0)
    ctx->pc = 0x30fa48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x30fa4c: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x30FA4Cu;
    {
        const bool branch_taken_0x30fa4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA4Cu;
        // 0x30fa50: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fa4c) {
            ctx->pc = 0x30FC18u;
            goto label_30fc18;
        }
    }
    ctx->pc = 0x30FA54u;
    // 0x30fa54: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x30fa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x30fa58: 0x2c42001e  sltiu       $v0, $v0, 0x1E
    ctx->pc = 0x30fa58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x30fa5c: 0x1440006f  bnez        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x30FA5Cu;
    {
        const bool branch_taken_0x30fa5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA5Cu;
        // 0x30fa60: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fa5c) {
            ctx->pc = 0x30FC1Cu;
            goto label_30fc1c;
        }
    }
    ctx->pc = 0x30FA64u;
    // 0x30fa64: 0xc0e4060  jal         func_390180
    ctx->pc = 0x30FA64u;
    SET_GPR_U32(ctx, 31, 0x30FA6Cu);
    ctx->pc = 0x30FA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FA64u;
    // 0x30fa68: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x30FA64u, 0x30FA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FA6Cu;
label_30fa6c:
    // 0x30fa6c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x30FA6Cu;
    SET_GPR_U32(ctx, 31, 0x30FA74u);
    ctx->pc = 0x30FA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FA6Cu;
    // 0x30fa70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x30FA6Cu, 0x30FA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FA74u;
label_30fa74:
    // 0x30fa74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30fa74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fa78: 0x12200067  beqz        $s1, . + 4 + (0x67 << 2)
    ctx->pc = 0x30FA78u;
    {
        const bool branch_taken_0x30fa78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA78u;
        // 0x30fa7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fa78) {
            ctx->pc = 0x30FC18u;
            goto label_30fc18;
        }
    }
    ctx->pc = 0x30FA80u;
    // 0x30fa80: 0xc087502  jal         func_21D408
    ctx->pc = 0x30FA80u;
    SET_GPR_U32(ctx, 31, 0x30FA88u);
    ctx->pc = 0x30FA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FA80u;
    // 0x30fa84: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30FA80u, 0x30FA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FA88u;
label_30fa88:
    // 0x30fa88: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x30fa88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fa8c: 0xc088f0c  jal         func_223C30
    ctx->pc = 0x30FA8Cu;
    SET_GPR_U32(ctx, 31, 0x30FA94u);
    ctx->pc = 0x30FA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FA8Cu;
    // 0x30fa90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C30u, 0x30FA8Cu, 0x30FA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FA94u;
label_30fa94:
    // 0x30fa94: 0x10570061  beq         $v0, $s7, . + 4 + (0x61 << 2)
    ctx->pc = 0x30FA94u;
    {
        const bool branch_taken_0x30fa94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x30FA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA94u;
        // 0x30fa98: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fa94) {
            ctx->pc = 0x30FC1Cu;
            goto label_30fc1c;
        }
    }
    ctx->pc = 0x30FA9Cu;
    // 0x30fa9c: 0x82a2002e  lb          $v0, 0x2E($s5)
    ctx->pc = 0x30fa9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 46)));
    // 0x30faa0: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x30faa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30faa4: 0x5057005e  beql        $v0, $s7, . + 4 + (0x5E << 2)
    ctx->pc = 0x30FAA4u;
    {
        const bool branch_taken_0x30faa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x30faa4) {
            ctx->pc = 0x30FAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FAA4u;
            // 0x30faa8: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30FC20u;
            goto label_30fc20;
        }
    }
    ctx->pc = 0x30FAACu;
    // 0x30faac: 0xc08a61a  jal         func_229868
    ctx->pc = 0x30FAACu;
    SET_GPR_U32(ctx, 31, 0x30FAB4u);
    ctx->pc = 0x30FAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FAACu;
    // 0x30fab0: 0x8e440024  lw          $a0, 0x24($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x30FAACu, 0x30FAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FAB4u;
label_30fab4:
    // 0x30fab4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x30fab4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fab8: 0x12800058  beqz        $s4, . + 4 + (0x58 << 2)
    ctx->pc = 0x30FAB8u;
    {
        const bool branch_taken_0x30fab8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FAB8u;
        // 0x30fabc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fab8) {
            ctx->pc = 0x30FC1Cu;
            goto label_30fc1c;
        }
    }
    ctx->pc = 0x30FAC0u;
    // 0x30fac0: 0xc087502  jal         func_21D408
    ctx->pc = 0x30FAC0u;
    SET_GPR_U32(ctx, 31, 0x30FAC8u);
    ctx->pc = 0x30FAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FAC0u;
    // 0x30fac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30FAC0u, 0x30FAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FAC8u;
label_30fac8:
    // 0x30fac8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x30fac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x30facc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30faccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fad0: 0xc0a44ac  jal         func_2912B0
    ctx->pc = 0x30FAD0u;
    SET_GPR_U32(ctx, 31, 0x30FAD8u);
    ctx->pc = 0x30FAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FAD0u;
    // 0x30fad4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2912B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2912B0u, 0x30FAD0u, 0x30FAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FAD8u;
label_30fad8:
    // 0x30fad8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x30fad8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fadc: 0x1260004e  beqz        $s3, . + 4 + (0x4E << 2)
    ctx->pc = 0x30FADCu;
    {
        const bool branch_taken_0x30fadc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FADCu;
        // 0x30fae0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fadc) {
            ctx->pc = 0x30FC18u;
            goto label_30fc18;
        }
    }
    ctx->pc = 0x30FAE4u;
    // 0x30fae4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x30fae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x30fae8: 0x2456b8a0  addiu       $s6, $v0, -0x4760
    ctx->pc = 0x30fae8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949024));
    // 0x30faec: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x30faecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30faf0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x30faf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30faf4: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x30FAF4u;
    SET_GPR_U32(ctx, 31, 0x30FAFCu);
    ctx->pc = 0x30FAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FAF4u;
    // 0x30faf8: 0x26300284  addiu       $s0, $s1, 0x284 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 644));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x30FAF4u, 0x30FAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FAFCu;
label_30fafc:
    // 0x30fafc: 0x2c420032  sltiu       $v0, $v0, 0x32
    ctx->pc = 0x30fafcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
    // 0x30fb00: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30FB00u;
    {
        const bool branch_taken_0x30fb00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FB00u;
        // 0x30fb04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fb00) {
            ctx->pc = 0x30FB0Cu;
            goto label_30fb0c;
        }
    }
    ctx->pc = 0x30FB08u;
    // 0x30fb08: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x30fb08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_30fb0c:
    // 0x30fb0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30fb0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30fb10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30fb10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30fb14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30fb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fb18: 0x24064e20  addiu       $a2, $zero, 0x4E20
    ctx->pc = 0x30fb18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
    // 0x30fb1c: 0xc0a6800  jal         func_29A000
    ctx->pc = 0x30FB1Cu;
    SET_GPR_U32(ctx, 31, 0x30FB24u);
    ctx->pc = 0x30FB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FB1Cu;
    // 0x30fb20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x30FB1Cu, 0x30FB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FB24u;
label_30fb24:
    // 0x30fb24: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x30fb24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x30fb28: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x30fb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x30fb2c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x30fb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fb30: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x30fb30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x30fb34: 0x2e020065  sltiu       $v0, $s0, 0x65
    ctx->pc = 0x30fb34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
    // 0x30fb38: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x30FB38u;
    SET_GPR_U32(ctx, 31, 0x30FB40u);
    ctx->pc = 0x30FB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FB38u;
    // 0x30fb3c: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x30FB38u, 0x30FB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FB40u;
label_30fb40:
    // 0x30fb40: 0x202802b  sltu        $s0, $s0, $v0
    ctx->pc = 0x30fb40u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30fb44: 0x56000035  bnel        $s0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x30FB44u;
    {
        const bool branch_taken_0x30fb44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x30fb44) {
            ctx->pc = 0x30FB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FB44u;
            // 0x30fb48: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30FC1Cu;
            goto label_30fc1c;
        }
    }
    ctx->pc = 0x30FB4Cu;
    // 0x30fb4c: 0xc08a148  jal         func_228520
    ctx->pc = 0x30FB4Cu;
    SET_GPR_U32(ctx, 31, 0x30FB54u);
    ctx->pc = 0x30FB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FB4Cu;
    // 0x30fb50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228520u, 0x30FB4Cu, 0x30FB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FB54u;
label_30fb54:
    // 0x30fb54: 0x14570003  bne         $v0, $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x30FB54u;
    {
        const bool branch_taken_0x30fb54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x30fb54) {
            ctx->pc = 0x30FB64u;
            goto label_30fb64;
        }
    }
    ctx->pc = 0x30FB5Cu;
    // 0x30fb5c: 0xc08c6d8  jal         func_231B60
    ctx->pc = 0x30FB5Cu;
    SET_GPR_U32(ctx, 31, 0x30FB64u);
    ctx->pc = 0x30FB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FB5Cu;
    // 0x30fb60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B60u, 0x30FB5Cu, 0x30FB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FB64u;
label_30fb64:
    // 0x30fb64: 0x5674000b  bnel        $s3, $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x30FB64u;
    {
        const bool branch_taken_0x30fb64 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        if (branch_taken_0x30fb64) {
            ctx->pc = 0x30FB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FB64u;
            // 0x30fb68: 0x241100b1  addiu       $s1, $zero, 0xB1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30FB94u;
            goto label_30fb94;
        }
    }
    ctx->pc = 0x30FB6Cu;
    // 0x30fb6c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x30fb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fb70: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x30FB70u;
    SET_GPR_U32(ctx, 31, 0x30FB78u);
    ctx->pc = 0x30FB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FB70u;
    // 0x30fb74: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x30FB70u, 0x30FB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FB78u;
label_30fb78:
    // 0x30fb78: 0x2411008f  addiu       $s1, $zero, 0x8F
    ctx->pc = 0x30fb78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    // 0x30fb7c: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x30fb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x30fb80: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x30fb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30fb84: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x30fb84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30fb88: 0x24120256  addiu       $s2, $zero, 0x256
    ctx->pc = 0x30fb88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
    // 0x30fb8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x30FB8Cu;
    {
        const bool branch_taken_0x30fb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FB8Cu;
        // 0x30fb90: 0x83880a  movz        $s1, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fb8c) {
            ctx->pc = 0x30FB98u;
            goto label_30fb98;
        }
    }
    ctx->pc = 0x30FB94u;
label_30fb94:
    // 0x30fb94: 0x24120257  addiu       $s2, $zero, 0x257
    ctx->pc = 0x30fb94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 599));
label_30fb98:
    // 0x30fb98: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x30FB98u;
    SET_GPR_U32(ctx, 31, 0x30FBA0u);
    ctx->pc = 0x30FB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FB98u;
    // 0x30fb9c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x30FB98u, 0x30FBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FBA0u;
label_30fba0:
    // 0x30fba0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30fba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fba4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x30FBA4u;
    {
        const bool branch_taken_0x30fba4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FBA4u;
        // 0x30fba8: 0x27c4b8a0  addiu       $a0, $fp, -0x4760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294949024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fba4) {
            ctx->pc = 0x30FBD8u;
            goto label_30fbd8;
        }
    }
    ctx->pc = 0x30FBACu;
    // 0x30fbac: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x30fbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x30fbb0: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x30FBB0u;
    SET_GPR_U32(ctx, 31, 0x30FBB8u);
    ctx->pc = 0x30FBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FBB0u;
    // 0x30fbb4: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x30FBB0u, 0x30FBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FBB8u;
label_30fbb8:
    // 0x30fbb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30fbb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30fbbc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30fbbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30fbc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30fbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fbc4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x30fbc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fbc8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x30fbc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fbcc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x30fbccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fbd0: 0xc0bee1a  jal         func_2FB868
    ctx->pc = 0x30FBD0u;
    SET_GPR_U32(ctx, 31, 0x30FBD8u);
    ctx->pc = 0x30FBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FBD0u;
    // 0x30fbd4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB868u, 0x30FBD0u, 0x30FBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FBD8u;
label_30fbd8:
    // 0x30fbd8: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x30FBD8u;
    SET_GPR_U32(ctx, 31, 0x30FBE0u);
    ctx->pc = 0x30FBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FBD8u;
    // 0x30fbdc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x30FBD8u, 0x30FBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FBE0u;
label_30fbe0:
    // 0x30fbe0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30fbe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fbe4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x30FBE4u;
    {
        const bool branch_taken_0x30fbe4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FBE4u;
        // 0x30fbe8: 0x27c4b8a0  addiu       $a0, $fp, -0x4760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294949024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fbe4) {
            ctx->pc = 0x30FC18u;
            goto label_30fc18;
        }
    }
    ctx->pc = 0x30FBECu;
    // 0x30fbec: 0xc0cd526  jal         func_335498
    ctx->pc = 0x30FBECu;
    SET_GPR_U32(ctx, 31, 0x30FBF4u);
    ctx->pc = 0x30FBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FBECu;
    // 0x30fbf0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x30FBECu, 0x30FBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FBF4u;
label_30fbf4:
    // 0x30fbf4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x30fbf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x30fbf8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x30fbf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x30fbfc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30fbfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30fc00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30fc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fc04: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x30fc04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fc08: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x30fc08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fc0c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x30fc0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fc10: 0xc0be8c0  jal         func_2FA300
    ctx->pc = 0x30FC10u;
    SET_GPR_U32(ctx, 31, 0x30FC18u);
    ctx->pc = 0x30FC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FC10u;
    // 0x30fc14: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x30FC10u, 0x30FC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FC18u;
label_30fc18:
    // 0x30fc18: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x30fc18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_30fc1c:
    // 0x30fc1c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x30fc1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_30fc20:
    // 0x30fc20: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x30fc20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30fc24: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x30fc24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30fc28: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x30fc28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30fc2c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x30fc2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30fc30: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x30fc30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30fc34: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x30fc34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30fc38: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x30fc38u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30fc3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30fc3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30fc40: 0x3e00008  jr          $ra
    ctx->pc = 0x30FC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30FC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FC40u;
        // 0x30fc44: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30FC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30FC48u;
}
