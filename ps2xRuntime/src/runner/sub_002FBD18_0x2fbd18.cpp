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

// Function: sub_002FBD18
// Address: 0x2fbd18 - 0x2fbef0
void sub_002FBD18_0x2fbd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FBD18_0x2fbd18");
#endif

    switch (ctx->pc) {
        case 0x2fbdc4u: goto label_2fbdc4;
        case 0x2fbddcu: goto label_2fbddc;
        case 0x2fbe08u: goto label_2fbe08;
        case 0x2fbe10u: goto label_2fbe10;
        case 0x2fbe24u: goto label_2fbe24;
        case 0x2fbe40u: goto label_2fbe40;
        case 0x2fbe5cu: goto label_2fbe5c;
        default: break;
    }

    ctx->pc = 0x2fbd18u;

    // 0x2fbd18: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2fbd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2fbd1c: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2fbd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2fbd20: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2fbd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x2fbd24: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2fbd24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2fbd28: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x2fbd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x2fbd2c: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x2fbd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
    // 0x2fbd30: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x2fbd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x2fbd34: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2fbd34u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbd38: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2fbd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2fbd3c: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2fbd3cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbd40: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2fbd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x2fbd44: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2fbd44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fbd48: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2fbd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x2fbd4c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2fbd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x2fbd50: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2fbd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2fbd54: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2fbd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x2fbd58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fbd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fbd5c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2fbd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fbd60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fbd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbd64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2fbd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fbd68: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2fbd68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2fbd6c: 0x84420092  lh          $v0, 0x92($v0)
    ctx->pc = 0x2fbd6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x2fbd70: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2fbd70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2fbd74: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2fbd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2fbd78: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2fbd78u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fbd7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2fbd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fbd80: 0x7fc30000  sq          $v1, 0x0($fp)
    ctx->pc = 0x2fbd80u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 3));
    // 0x2fbd84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2fbd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fbd88: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x2fbd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2fbd8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FBD8Cu;
    {
        const bool branch_taken_0x2fbd8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBD8Cu;
        // 0x2fbd90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbd8c) {
            ctx->pc = 0x2FBDA0u;
            goto label_2fbda0;
        }
    }
    ctx->pc = 0x2FBD94u;
    // 0x2fbd94: 0x786200a0  lq          $v0, 0xA0($v1)
    ctx->pc = 0x2fbd94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x2fbd98: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x2fbd98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fbd9c: 0x7fc20010  sq          $v0, 0x10($fp)
    ctx->pc = 0x2fbd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 30), 16), GPR_VEC(ctx, 2));
label_2fbda0:
    // 0x2fbda0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2fbda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fbda4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2fbda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fbda8: 0x247400e0  addiu       $s4, $v1, 0xE0
    ctx->pc = 0x2fbda8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x2fbdac: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2fbdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2fbdb0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2fbdb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2fbdb4: 0x14450037  bne         $v0, $a1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2FBDB4u;
    {
        const bool branch_taken_0x2fbdb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2FBDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBDB4u;
        // 0x2fbdb8: 0x257302b  sltu        $a2, $s2, $s7 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbdb4) {
            ctx->pc = 0x2FBE94u;
            goto label_2fbe94;
        }
    }
    ctx->pc = 0x2FBDBCu;
    // 0x2fbdbc: 0xc0a6c8e  jal         func_29B238
    ctx->pc = 0x2FBDBCu;
    SET_GPR_U32(ctx, 31, 0x2FBDC4u);
    ctx->pc = 0x2FBDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBDBCu;
    // 0x2fbdc0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B238u, 0x2FBDBCu, 0x2FBDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBDC4u;
label_2fbdc4:
    // 0x2fbdc4: 0x82930010  lb          $s3, 0x10($s4)
    ctx->pc = 0x2fbdc4u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2fbdc8: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FBDC8u;
    {
        const bool branch_taken_0x2fbdc8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBDC8u;
        // 0x2fbdcc: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbdc8) {
            ctx->pc = 0x2FBDE4u;
            goto label_2fbde4;
        }
    }
    ctx->pc = 0x2FBDD0u;
    // 0x2fbdd0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fbdd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbdd4: 0xc0a6c9a  jal         func_29B268
    ctx->pc = 0x2FBDD4u;
    SET_GPR_U32(ctx, 31, 0x2FBDDCu);
    ctx->pc = 0x2FBDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBDD4u;
    // 0x2fbdd8: 0x2665ffff  addiu       $a1, $s3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B268u, 0x2FBDD4u, 0x2FBDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBDDCu;
label_2fbddc:
    // 0x2fbddc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FBDDCu;
    {
        const bool branch_taken_0x2fbddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBDDCu;
        // 0x2fbde0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbddc) {
            ctx->pc = 0x2FBDE8u;
            goto label_2fbde8;
        }
    }
    ctx->pc = 0x2FBDE4u;
label_2fbde4:
    // 0x2fbde4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2fbde4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fbde8:
    // 0x2fbde8: 0x276102b  sltu        $v0, $s3, $s6
    ctx->pc = 0x2fbde8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x2fbdec: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2FBDECu;
    {
        const bool branch_taken_0x2fbdec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBDECu;
        // 0x2fbdf0: 0x257302b  sltu        $a2, $s2, $s7 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbdec) {
            ctx->pc = 0x2FBE94u;
            goto label_2fbe94;
        }
    }
    ctx->pc = 0x2FBDF4u;
    // 0x2fbdf4: 0x10c0002e  beqz        $a2, . + 4 + (0x2E << 2)
    ctx->pc = 0x2FBDF4u;
    {
        const bool branch_taken_0x2fbdf4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBDF4u;
        // 0x2fbdf8: 0x121100  sll         $v0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbdf4) {
            ctx->pc = 0x2FBEB0u;
            goto label_2fbeb0;
        }
    }
    ctx->pc = 0x2FBDFCu;
    // 0x2fbdfc: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x2fbdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x2fbe00: 0x5ea821  addu        $s5, $v0, $fp
    ctx->pc = 0x2fbe00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2fbe04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fbe04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fbe08:
    // 0x2fbe08: 0xc0a6c9a  jal         func_29B268
    ctx->pc = 0x2FBE08u;
    SET_GPR_U32(ctx, 31, 0x2FBE10u);
    ctx->pc = 0x2FBE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBE08u;
    // 0x2fbe0c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B268u, 0x2FBE08u, 0x2FBE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBE10u;
label_2fbe10:
    // 0x2fbe10: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FBE10u;
    {
        const bool branch_taken_0x2fbe10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBE10u;
        // 0x2fbe14: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbe10) {
            ctx->pc = 0x2FBE2Cu;
            goto label_2fbe2c;
        }
    }
    ctx->pc = 0x2FBE18u;
    // 0x2fbe18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fbe18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbe1c: 0xc09441c  jal         func_251070
    ctx->pc = 0x2FBE1Cu;
    SET_GPR_U32(ctx, 31, 0x2FBE24u);
    ctx->pc = 0x2FBE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBE1Cu;
    // 0x2fbe20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251070u, 0x2FBE1Cu, 0x2FBE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBE24u;
label_2fbe24:
    // 0x2fbe24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FBE24u;
    {
        const bool branch_taken_0x2fbe24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBE24u;
        // 0x2fbe28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbe24) {
            ctx->pc = 0x2FBE30u;
            goto label_2fbe30;
        }
    }
    ctx->pc = 0x2FBE2Cu;
label_2fbe2c:
    // 0x2fbe2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2fbe2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fbe30:
    // 0x2fbe30: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2fbe30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2fbe34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fbe34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbe38: 0xc0a4f90  jal         func_293E40
    ctx->pc = 0x2FBE38u;
    SET_GPR_U32(ctx, 31, 0x2FBE40u);
    ctx->pc = 0x2FBE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBE38u;
    // 0x2fbe3c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293E40u, 0x2FBE38u, 0x2FBE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBE40u;
label_2fbe40:
    // 0x2fbe40: 0x32030084  andi        $v1, $s0, 0x84
    ctx->pc = 0x2fbe40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)132);
    // 0x2fbe44: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2FBE44u;
    {
        const bool branch_taken_0x2fbe44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBE44u;
        // 0x2fbe48: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbe44) {
            ctx->pc = 0x2FBEB0u;
            goto label_2fbeb0;
        }
    }
    ctx->pc = 0x2FBE4Cu;
    // 0x2fbe4c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2fbe4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbe50: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2fbe50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbe54: 0xc0a6cae  jal         func_29B2B8
    ctx->pc = 0x2FBE54u;
    SET_GPR_U32(ctx, 31, 0x2FBE5Cu);
    ctx->pc = 0x2FBE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBE54u;
    // 0x2fbe58: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B2B8u, 0x2FBE54u, 0x2FBE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBE5Cu;
label_2fbe5c:
    // 0x2fbe5c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2fbe5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2fbe60: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2fbe60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fbe64: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2fbe64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2fbe68: 0x12030011  beq         $s0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FBE68u;
    {
        const bool branch_taken_0x2fbe68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2FBE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBE68u;
        // 0x2fbe6c: 0x7ea20000  sq          $v0, 0x0($s5) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbe68) {
            ctx->pc = 0x2FBEB0u;
            goto label_2fbeb0;
        }
    }
    ctx->pc = 0x2FBE70u;
    // 0x2fbe70: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2fbe70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2fbe74: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2FBE74u;
    {
        const bool branch_taken_0x2fbe74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FBE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBE74u;
        // 0x2fbe78: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbe74) {
            ctx->pc = 0x2FBEB0u;
            goto label_2fbeb0;
        }
    }
    ctx->pc = 0x2FBE7Cu;
    // 0x2fbe7c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2fbe7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbe80: 0x276102b  sltu        $v0, $s3, $s6
    ctx->pc = 0x2fbe80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x2fbe84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBE84u;
    {
        const bool branch_taken_0x2fbe84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBE84u;
        // 0x2fbe88: 0x257302b  sltu        $a2, $s2, $s7 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbe84) {
            ctx->pc = 0x2FBE94u;
            goto label_2fbe94;
        }
    }
    ctx->pc = 0x2FBE8Cu;
    // 0x2fbe8c: 0x14c0ffde  bnez        $a2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2FBE8Cu;
    {
        const bool branch_taken_0x2fbe8c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBE8Cu;
        // 0x2fbe90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbe8c) {
            ctx->pc = 0x2FBE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fbe08;
        }
    }
    ctx->pc = 0x2FBE94u;
label_2fbe94:
    // 0x2fbe94: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FBE94u;
    {
        const bool branch_taken_0x2fbe94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBE94u;
        // 0x2fbe98: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbe94) {
            ctx->pc = 0x2FBEB0u;
            goto label_2fbeb0;
        }
    }
    ctx->pc = 0x2FBE9Cu;
    // 0x2fbe9c: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x2fbe9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2fbea0: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x2fbea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2fbea4: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x2fbea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2fbea8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2fbea8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2fbeac: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2fbeacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_2fbeb0:
    // 0x2fbeb0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2fbeb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbeb4: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2fbeb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2fbeb8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2fbeb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2fbebc: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2fbebcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2fbec0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2fbec0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2fbec4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2fbec4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fbec8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2fbec8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fbecc: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x2fbeccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fbed0: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x2fbed0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fbed4: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x2fbed4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fbed8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fbed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fbedc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBEDCu;
        // 0x2fbee0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBEDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBEE4u;
    // 0x2fbee4: 0x0  nop
    ctx->pc = 0x2fbee4u;
    // NOP
    // 0x2fbee8: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2fbee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2fbeec: 0x0  nop
    ctx->pc = 0x2fbeecu;
    // NOP
    ctx->pc = 0x2fbef0u;
}
