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

// Function: sub_0029AA88
// Address: 0x29aa88 - 0x29ade0
void sub_0029AA88_0x29aa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AA88_0x29aa88");
#endif

    switch (ctx->pc) {
        case 0x29aaf4u: goto label_29aaf4;
        case 0x29ab20u: goto label_29ab20;
        case 0x29ab38u: goto label_29ab38;
        case 0x29ab50u: goto label_29ab50;
        case 0x29ab5cu: goto label_29ab5c;
        case 0x29ab84u: goto label_29ab84;
        case 0x29ab90u: goto label_29ab90;
        case 0x29abccu: goto label_29abcc;
        case 0x29abf4u: goto label_29abf4;
        case 0x29ac14u: goto label_29ac14;
        case 0x29ac38u: goto label_29ac38;
        case 0x29ac58u: goto label_29ac58;
        case 0x29ac7cu: goto label_29ac7c;
        case 0x29acdcu: goto label_29acdc;
        case 0x29ad00u: goto label_29ad00;
        case 0x29ad34u: goto label_29ad34;
        case 0x29ad50u: goto label_29ad50;
        case 0x29ad60u: goto label_29ad60;
        case 0x29ad7cu: goto label_29ad7c;
        case 0x29adbcu: goto label_29adbc;
        default: break;
    }

    ctx->pc = 0x29aa88u;

    // 0x29aa88: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x29aa88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x29aa8c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x29aa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29aa90: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x29aa90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x29aa94: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x29aa94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x29aa98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29aa98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aa9c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x29aa9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x29aaa0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x29aaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x29aaa4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x29aaa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x29aaa8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x29aaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x29aaac: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x29aaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x29aab0: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29AAB0u;
    {
        const bool branch_taken_0x29aab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x29aab0) {
            ctx->pc = 0x29AAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29AAB0u;
            // 0x29aab4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29AAC0u;
            goto label_29aac0;
        }
    }
    ctx->pc = 0x29AAB8u;
    // 0x29aab8: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x29AAB8u;
    {
        const bool branch_taken_0x29aab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AAB8u;
        // 0x29aabc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aab8) {
            ctx->pc = 0x29ADBCu;
            goto label_29adbc;
        }
    }
    ctx->pc = 0x29AAC0u;
label_29aac0:
    // 0x29aac0: 0x92030011  lbu         $v1, 0x11($s0)
    ctx->pc = 0x29aac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x29aac4: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x29aac4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29aac8: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x29AAC8u;
    {
        const bool branch_taken_0x29aac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AAC8u;
        // 0x29aacc: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aac8) {
            ctx->pc = 0x29AB08u;
            goto label_29ab08;
        }
    }
    ctx->pc = 0x29AAD0u;
    // 0x29aad0: 0x92020017  lbu         $v0, 0x17($s0)
    ctx->pc = 0x29aad0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
    // 0x29aad4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29aad4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aad8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29aadc: 0x2c630006  sltiu       $v1, $v1, 0x6
    ctx->pc = 0x29aadcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x29aae0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x29AAE0u;
    {
        const bool branch_taken_0x29aae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29AAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AAE0u;
        // 0x29aae4: 0xa2020017  sb          $v0, 0x17($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 23), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aae0) {
            ctx->pc = 0x29AB08u;
            goto label_29ab08;
        }
    }
    ctx->pc = 0x29AAE8u;
    // 0x29aae8: 0x82050010  lb          $a1, 0x10($s0)
    ctx->pc = 0x29aae8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29aaec: 0xc0a6d2e  jal         func_29B4B8
    ctx->pc = 0x29AAECu;
    SET_GPR_U32(ctx, 31, 0x29AAF4u);
    ctx->pc = 0x29AAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AAECu;
    // 0x29aaf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B4B8u, 0x29AAECu, 0x29AAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AAF4u;
label_29aaf4:
    // 0x29aaf4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29aaf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aaf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29aafc: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x29AAFCu;
    {
        const bool branch_taken_0x29aafc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29aafc) {
            ctx->pc = 0x29AB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29AAFCu;
            // 0x29ab00: 0xa2030011  sb          $v1, 0x11($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29AB04u;
            goto label_29ab04;
        }
    }
    ctx->pc = 0x29AB04u;
label_29ab04:
    // 0x29ab04: 0xa2000017  sb          $zero, 0x17($s0)
    ctx->pc = 0x29ab04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 23), (uint8_t)GPR_U32(ctx, 0));
label_29ab08:
    // 0x29ab08: 0x92030011  lbu         $v1, 0x11($s0)
    ctx->pc = 0x29ab08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x29ab0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ab10: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29AB10u;
    {
        const bool branch_taken_0x29ab10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29ab10) {
            ctx->pc = 0x29AB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29AB10u;
            // 0x29ab14: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29AB2Cu;
            goto label_29ab2c;
        }
    }
    ctx->pc = 0x29AB18u;
    // 0x29ab18: 0xc0a6db6  jal         func_29B6D8
    ctx->pc = 0x29AB18u;
    SET_GPR_U32(ctx, 31, 0x29AB20u);
    ctx->pc = 0x29AB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AB18u;
    // 0x29ab1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B6D8u, 0x29AB18u, 0x29AB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AB20u;
label_29ab20:
    // 0x29ab20: 0x104000a6  beqz        $v0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x29AB20u;
    {
        const bool branch_taken_0x29ab20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB20u;
        // 0x29ab24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ab20) {
            ctx->pc = 0x29ADBCu;
            goto label_29adbc;
        }
    }
    ctx->pc = 0x29AB28u;
    // 0x29ab28: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x29ab28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_29ab2c:
    // 0x29ab2c: 0x82050010  lb          $a1, 0x10($s0)
    ctx->pc = 0x29ab2cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29ab30: 0xc0945bc  jal         func_2516F0
    ctx->pc = 0x29AB30u;
    SET_GPR_U32(ctx, 31, 0x29AB38u);
    ctx->pc = 0x29AB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AB30u;
    // 0x29ab34: 0x8c930000  lw          $s3, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2516F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2516F0u, 0x29AB30u, 0x29AB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AB38u;
label_29ab38:
    // 0x29ab38: 0x82050010  lb          $a1, 0x10($s0)
    ctx->pc = 0x29ab38u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29ab3c: 0x18a00009  blez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x29AB3Cu;
    {
        const bool branch_taken_0x29ab3c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x29AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB3Cu;
        // 0x29ab40: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ab3c) {
            ctx->pc = 0x29AB64u;
            goto label_29ab64;
        }
    }
    ctx->pc = 0x29AB44u;
    // 0x29ab44: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x29ab44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29ab48: 0xc0945bc  jal         func_2516F0
    ctx->pc = 0x29AB48u;
    SET_GPR_U32(ctx, 31, 0x29AB50u);
    ctx->pc = 0x29AB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AB48u;
    // 0x29ab4c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2516F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2516F0u, 0x29AB48u, 0x29AB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AB50u;
label_29ab50:
    // 0x29ab50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29ab50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ab54: 0xc09441c  jal         func_251070
    ctx->pc = 0x29AB54u;
    SET_GPR_U32(ctx, 31, 0x29AB5Cu);
    ctx->pc = 0x29AB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AB54u;
    // 0x29ab58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251070u, 0x29AB54u, 0x29AB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AB5Cu;
label_29ab5c:
    // 0x29ab5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29AB5Cu;
    {
        const bool branch_taken_0x29ab5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB5Cu;
        // 0x29ab60: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ab5c) {
            ctx->pc = 0x29AB68u;
            goto label_29ab68;
        }
    }
    ctx->pc = 0x29AB64u;
label_29ab64:
    // 0x29ab64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29ab64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29ab68:
    // 0x29ab68: 0x82020010  lb          $v0, 0x10($s0)
    ctx->pc = 0x29ab68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29ab6c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x29ab6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29ab70: 0xb3182b  sltu        $v1, $a1, $s3
    ctx->pc = 0x29ab70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x29ab74: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x29AB74u;
    {
        const bool branch_taken_0x29ab74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB74u;
        // 0x29ab78: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ab74) {
            ctx->pc = 0x29AB94u;
            goto label_29ab94;
        }
    }
    ctx->pc = 0x29AB7Cu;
    // 0x29ab7c: 0xc0945bc  jal         func_2516F0
    ctx->pc = 0x29AB7Cu;
    SET_GPR_U32(ctx, 31, 0x29AB84u);
    ctx->pc = 0x29AB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AB7Cu;
    // 0x29ab80: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2516F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2516F0u, 0x29AB7Cu, 0x29AB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AB84u;
label_29ab84:
    // 0x29ab84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29ab84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ab88: 0xc09441c  jal         func_251070
    ctx->pc = 0x29AB88u;
    SET_GPR_U32(ctx, 31, 0x29AB90u);
    ctx->pc = 0x29AB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AB88u;
    // 0x29ab8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251070u, 0x29AB88u, 0x29AB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AB90u;
label_29ab90:
    // 0x29ab90: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x29ab90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29ab94:
    // 0x29ab94: 0x92820333  lbu         $v0, 0x333($s4)
    ctx->pc = 0x29ab94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 819)));
    // 0x29ab98: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x29ab98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x29ab9c: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x29AB9Cu;
    {
        const bool branch_taken_0x29ab9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB9Cu;
        // 0x29aba0: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ab9c) {
            ctx->pc = 0x29AD08u;
            goto label_29ad08;
        }
    }
    ctx->pc = 0x29ABA4u;
    // 0x29aba4: 0x86830092  lh          $v1, 0x92($s4)
    ctx->pc = 0x29aba4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
    // 0x29aba8: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x29aba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x29abac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29abacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29abb0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x29abb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x29abb4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29abb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29abb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29abb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29abbc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x29abbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29abc0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x29abc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29abc4: 0xc0a4f90  jal         func_293E40
    ctx->pc = 0x29ABC4u;
    SET_GPR_U32(ctx, 31, 0x29ABCCu);
    ctx->pc = 0x29ABC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ABC4u;
    // 0x29abc8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293E40u, 0x29ABC4u, 0x29ABCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ABCCu;
label_29abcc:
    // 0x29abcc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29abccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29abd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29abd4: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x29ABD4u;
    {
        const bool branch_taken_0x29abd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29ABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ABD4u;
        // 0x29abd8: 0x32620004  andi        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29abd4) {
            ctx->pc = 0x29AC5Cu;
            goto label_29ac5c;
        }
    }
    ctx->pc = 0x29ABDCu;
    // 0x29abdc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29ABDCu;
    {
        const bool branch_taken_0x29abdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ABDCu;
        // 0x29abe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29abdc) {
            ctx->pc = 0x29ABFCu;
            goto label_29abfc;
        }
    }
    ctx->pc = 0x29ABE4u;
    // 0x29abe4: 0x82050010  lb          $a1, 0x10($s0)
    ctx->pc = 0x29abe4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29abe8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29abe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29abec: 0xc0a68fc  jal         func_29A3F0
    ctx->pc = 0x29ABECu;
    SET_GPR_U32(ctx, 31, 0x29ABF4u);
    ctx->pc = 0x29ABF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ABECu;
    // 0x29abf0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A3F0u, 0x29ABECu, 0x29ABF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ABF4u;
label_29abf4:
    // 0x29abf4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29ABF4u;
    {
        const bool branch_taken_0x29abf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ABF4u;
        // 0x29abf8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29abf4) {
            ctx->pc = 0x29AC18u;
            goto label_29ac18;
        }
    }
    ctx->pc = 0x29ABFCu;
label_29abfc:
    // 0x29abfc: 0x32620080  andi        $v0, $s3, 0x80
    ctx->pc = 0x29abfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
    // 0x29ac00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29AC00u;
    {
        const bool branch_taken_0x29ac00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AC00u;
        // 0x29ac04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ac00) {
            ctx->pc = 0x29AC18u;
            goto label_29ac18;
        }
    }
    ctx->pc = 0x29AC08u;
    // 0x29ac08: 0x82050010  lb          $a1, 0x10($s0)
    ctx->pc = 0x29ac08u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29ac0c: 0xc0a69b2  jal         func_29A6C8
    ctx->pc = 0x29AC0Cu;
    SET_GPR_U32(ctx, 31, 0x29AC14u);
    ctx->pc = 0x29AC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AC0Cu;
    // 0x29ac10: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6C8u, 0x29AC0Cu, 0x29AC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AC14u;
label_29ac14:
    // 0x29ac14: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29ac14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29ac18:
    // 0x29ac18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ac1c: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x29AC1Cu;
    {
        const bool branch_taken_0x29ac1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29AC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AC1Cu;
        // 0x29ac20: 0x32220004  andi        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ac1c) {
            ctx->pc = 0x29AC5Cu;
            goto label_29ac5c;
        }
    }
    ctx->pc = 0x29AC24u;
    // 0x29ac24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29AC24u;
    {
        const bool branch_taken_0x29ac24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AC24u;
        // 0x29ac28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ac24) {
            ctx->pc = 0x29AC40u;
            goto label_29ac40;
        }
    }
    ctx->pc = 0x29AC2Cu;
    // 0x29ac2c: 0x82050010  lb          $a1, 0x10($s0)
    ctx->pc = 0x29ac2cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29ac30: 0xc0a68fc  jal         func_29A3F0
    ctx->pc = 0x29AC30u;
    SET_GPR_U32(ctx, 31, 0x29AC38u);
    ctx->pc = 0x29AC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AC30u;
    // 0x29ac34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A3F0u, 0x29AC30u, 0x29AC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AC38u;
label_29ac38:
    // 0x29ac38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29AC38u;
    {
        const bool branch_taken_0x29ac38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AC38u;
        // 0x29ac3c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ac38) {
            ctx->pc = 0x29AC5Cu;
            goto label_29ac5c;
        }
    }
    ctx->pc = 0x29AC40u;
label_29ac40:
    // 0x29ac40: 0x32220080  andi        $v0, $s1, 0x80
    ctx->pc = 0x29ac40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
    // 0x29ac44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29AC44u;
    {
        const bool branch_taken_0x29ac44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ac44) {
            ctx->pc = 0x29AC5Cu;
            goto label_29ac5c;
        }
    }
    ctx->pc = 0x29AC4Cu;
    // 0x29ac4c: 0x82050010  lb          $a1, 0x10($s0)
    ctx->pc = 0x29ac4cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29ac50: 0xc0a69b2  jal         func_29A6C8
    ctx->pc = 0x29AC50u;
    SET_GPR_U32(ctx, 31, 0x29AC58u);
    ctx->pc = 0x29AC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AC50u;
    // 0x29ac54: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6C8u, 0x29AC50u, 0x29AC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AC58u;
label_29ac58:
    // 0x29ac58: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29ac58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29ac5c:
    // 0x29ac5c: 0x5460002a  bnel        $v1, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x29AC5Cu;
    {
        const bool branch_taken_0x29ac5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ac5c) {
            ctx->pc = 0x29AC60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29AC5Cu;
            // 0x29ac60: 0xa2000016  sb          $zero, 0x16($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 22), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29AD08u;
            goto label_29ad08;
        }
    }
    ctx->pc = 0x29AC64u;
    // 0x29ac64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29ac64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ac68: 0x82060010  lb          $a2, 0x10($s0)
    ctx->pc = 0x29ac68u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29ac6c: 0xa2020016  sb          $v0, 0x16($s0)
    ctx->pc = 0x29ac6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 22), (uint8_t)GPR_U32(ctx, 2));
    // 0x29ac70: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x29ac70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29ac74: 0xc0a6cae  jal         func_29B2B8
    ctx->pc = 0x29AC74u;
    SET_GPR_U32(ctx, 31, 0x29AC7Cu);
    ctx->pc = 0x29AC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AC74u;
    // 0x29ac78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B2B8u, 0x29AC74u, 0x29AC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AC7Cu;
label_29ac7c:
    // 0x29ac7c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x29ac7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ac80: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x29ac80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29ac84: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x29ac84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x29ac88: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x29ac88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x29ac8c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x29ac8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x29ac90: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x29ac90u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x29ac94: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x29ac94u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x29ac98: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x29ac98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x29ac9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29ac9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29aca0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x29aca0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x29aca4: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x29aca4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29aca8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x29aca8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29acac: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x29acacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29acb0: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x29acb0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x29acb4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x29acb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x29acb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29acb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29acbc: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x29acbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x29acc0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29acc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29acc4: 0x0  nop
    ctx->pc = 0x29acc4u;
    // NOP
    // 0x29acc8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x29ACC8u;
    {
        const bool branch_taken_0x29acc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29ACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ACC8u;
        // 0x29accc: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29acc8) {
            ctx->pc = 0x29AD08u;
            goto label_29ad08;
        }
    }
    ctx->pc = 0x29ACD0u;
    // 0x29acd0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x29acd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29acd4: 0xc0a68f0  jal         func_29A3C0
    ctx->pc = 0x29ACD4u;
    SET_GPR_U32(ctx, 31, 0x29ACDCu);
    ctx->pc = 0x29ACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ACD4u;
    // 0x29acd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A3C0u, 0x29ACD4u, 0x29ACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ACDCu;
label_29acdc:
    // 0x29acdc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29acdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29ace0: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x29ace0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ace4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29ace4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29ace8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29ace8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29acec: 0x7c430090  sq          $v1, 0x90($v0)
    ctx->pc = 0x29acecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 144), GPR_VEC(ctx, 3));
    // 0x29acf0: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x29acf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x29acf4: 0xac400118  sw          $zero, 0x118($v0)
    ctx->pc = 0x29acf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 0));
    // 0x29acf8: 0xc0a2b06  jal         func_28AC18
    ctx->pc = 0x29ACF8u;
    SET_GPR_U32(ctx, 31, 0x29AD00u);
    ctx->pc = 0x29ACFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ACF8u;
    // 0x29acfc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AC18u, 0x29ACF8u, 0x29AD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AD00u;
label_29ad00:
    // 0x29ad00: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x29AD00u;
    {
        const bool branch_taken_0x29ad00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD00u;
        // 0x29ad04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad00) {
            ctx->pc = 0x29ADBCu;
            goto label_29adbc;
        }
    }
    ctx->pc = 0x29AD08u;
label_29ad08:
    // 0x29ad08: 0x92120012  lbu         $s2, 0x12($s0)
    ctx->pc = 0x29ad08u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x29ad0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29ad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ad10: 0x16420024  bne         $s2, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x29AD10u;
    {
        const bool branch_taken_0x29ad10 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x29AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD10u;
        // 0x29ad14: 0x32620008  andi        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad10) {
            ctx->pc = 0x29ADA4u;
            goto label_29ada4;
        }
    }
    ctx->pc = 0x29AD18u;
    // 0x29ad18: 0x82050010  lb          $a1, 0x10($s0)
    ctx->pc = 0x29ad18u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29ad1c: 0x18a00020  blez        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x29AD1Cu;
    {
        const bool branch_taken_0x29ad1c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x29AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD1Cu;
        // 0x29ad20: 0x32220088  andi        $v0, $s1, 0x88 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)136);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad1c) {
            ctx->pc = 0x29ADA0u;
            goto label_29ada0;
        }
    }
    ctx->pc = 0x29AD24u;
    // 0x29ad24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29AD24u;
    {
        const bool branch_taken_0x29ad24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD24u;
        // 0x29ad28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad24) {
            ctx->pc = 0x29AD3Cu;
            goto label_29ad3c;
        }
    }
    ctx->pc = 0x29AD2Cu;
    // 0x29ad2c: 0xc0a6e12  jal         func_29B848
    ctx->pc = 0x29AD2Cu;
    SET_GPR_U32(ctx, 31, 0x29AD34u);
    ctx->pc = 0x29AD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AD2Cu;
    // 0x29ad30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B848u, 0x29AD2Cu, 0x29AD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AD34u;
label_29ad34:
    // 0x29ad34: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x29AD34u;
    {
        const bool branch_taken_0x29ad34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD34u;
        // 0x29ad38: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad34) {
            ctx->pc = 0x29ADC0u;
            goto label_29adc0;
        }
    }
    ctx->pc = 0x29AD3Cu;
label_29ad3c:
    // 0x29ad3c: 0x32220004  andi        $v0, $s1, 0x4
    ctx->pc = 0x29ad3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
    // 0x29ad40: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29AD40u;
    {
        const bool branch_taken_0x29ad40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ad40) {
            ctx->pc = 0x29AD44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29AD40u;
            // 0x29ad44: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29AD58u;
            goto label_29ad58;
        }
    }
    ctx->pc = 0x29AD48u;
    // 0x29ad48: 0xc0a6eaa  jal         func_29BAA8
    ctx->pc = 0x29AD48u;
    SET_GPR_U32(ctx, 31, 0x29AD50u);
    ctx->pc = 0x29AD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AD48u;
    // 0x29ad4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29BAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29BAA8u, 0x29AD48u, 0x29AD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AD50u;
label_29ad50:
    // 0x29ad50: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x29AD50u;
    {
        const bool branch_taken_0x29ad50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD50u;
        // 0x29ad54: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad50) {
            ctx->pc = 0x29ADC0u;
            goto label_29adc0;
        }
    }
    ctx->pc = 0x29AD58u;
label_29ad58:
    // 0x29ad58: 0xc0945c6  jal         func_251718
    ctx->pc = 0x29AD58u;
    SET_GPR_U32(ctx, 31, 0x29AD60u);
    ctx->pc = 0x29AD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AD58u;
    // 0x29ad5c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251718u, 0x29AD58u, 0x29AD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AD60u;
label_29ad60:
    // 0x29ad60: 0x5452000f  bnel        $v0, $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x29AD60u;
    {
        const bool branch_taken_0x29ad60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x29ad60) {
            ctx->pc = 0x29AD64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29AD60u;
            // 0x29ad64: 0xa2000012  sb          $zero, 0x12($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29ADA0u;
            goto label_29ada0;
        }
    }
    ctx->pc = 0x29AD68u;
    // 0x29ad68: 0x32220040  andi        $v0, $s1, 0x40
    ctx->pc = 0x29ad68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)64);
    // 0x29ad6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29AD6Cu;
    {
        const bool branch_taken_0x29ad6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD6Cu;
        // 0x29ad70: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad6c) {
            ctx->pc = 0x29AD84u;
            goto label_29ad84;
        }
    }
    ctx->pc = 0x29AD74u;
    // 0x29ad74: 0xc0a6f28  jal         func_29BCA0
    ctx->pc = 0x29AD74u;
    SET_GPR_U32(ctx, 31, 0x29AD7Cu);
    ctx->pc = 0x29AD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AD74u;
    // 0x29ad78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29BCA0u, 0x29AD74u, 0x29AD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AD7Cu;
label_29ad7c:
    // 0x29ad7c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x29AD7Cu;
    {
        const bool branch_taken_0x29ad7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD7Cu;
        // 0x29ad80: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad7c) {
            ctx->pc = 0x29ADC0u;
            goto label_29adc0;
        }
    }
    ctx->pc = 0x29AD84u;
label_29ad84:
    // 0x29ad84: 0x32240010  andi        $a0, $s1, 0x10
    ctx->pc = 0x29ad84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
    // 0x29ad88: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x29ad88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29ad8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29ad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29ad90: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x29ad90u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x29ad94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29ad94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29ad98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29AD98u;
    {
        const bool branch_taken_0x29ad98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD98u;
        // 0x29ad9c: 0xaca30284  sw          $v1, 0x284($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 644), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad98) {
            ctx->pc = 0x29ADBCu;
            goto label_29adbc;
        }
    }
    ctx->pc = 0x29ADA0u;
label_29ada0:
    // 0x29ada0: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x29ada0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_29ada4:
    // 0x29ada4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29ADA4u;
    {
        const bool branch_taken_0x29ada4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29ADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ADA4u;
        // 0x29ada8: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ada4) {
            ctx->pc = 0x29ADB4u;
            goto label_29adb4;
        }
    }
    ctx->pc = 0x29ADACu;
    // 0x29adac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29ADACu;
    {
        const bool branch_taken_0x29adac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ADACu;
        // 0x29adb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29adac) {
            ctx->pc = 0x29ADBCu;
            goto label_29adbc;
        }
    }
    ctx->pc = 0x29ADB4u;
label_29adb4:
    // 0x29adb4: 0xc0a6e6c  jal         func_29B9B0
    ctx->pc = 0x29ADB4u;
    SET_GPR_U32(ctx, 31, 0x29ADBCu);
    ctx->pc = 0x29ADB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ADB4u;
    // 0x29adb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B9B0u, 0x29ADB4u, 0x29ADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ADBCu;
label_29adbc:
    // 0x29adbc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x29adbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_29adc0:
    // 0x29adc0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x29adc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29adc4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x29adc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29adc8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x29adc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29adcc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x29adccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29add0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x29add0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29add4: 0x3e00008  jr          $ra
    ctx->pc = 0x29ADD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29ADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ADD4u;
        // 0x29add8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29ADD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29ADDCu;
    // 0x29addc: 0x0  nop
    ctx->pc = 0x29addcu;
    // NOP
    ctx->pc = 0x29ade0u;
}
