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

// Function: sub_002EBF98
// Address: 0x2ebf98 - 0x2ec1d8
void sub_002EBF98_0x2ebf98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBF98_0x2ebf98");
#endif

    switch (ctx->pc) {
        case 0x2ebfdcu: goto label_2ebfdc;
        case 0x2ec060u: goto label_2ec060;
        case 0x2ec070u: goto label_2ec070;
        case 0x2ec0bcu: goto label_2ec0bc;
        case 0x2ec0f8u: goto label_2ec0f8;
        case 0x2ec100u: goto label_2ec100;
        case 0x2ec10cu: goto label_2ec10c;
        case 0x2ec160u: goto label_2ec160;
        case 0x2ec16cu: goto label_2ec16c;
        case 0x2ec1b4u: goto label_2ec1b4;
        default: break;
    }

    ctx->pc = 0x2ebf98u;

    // 0x2ebf98: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ebf98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ebf9c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ebf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2ebfa0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2ebfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2ebfa4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ebfa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebfa8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2ebfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2ebfac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ebfacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebfb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ebfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ebfb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ebfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ebfb8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2ebfb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2ebfbc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ebfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ebfc0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x2ebfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2ebfc4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2EBFC4u;
    {
        const bool branch_taken_0x2ebfc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBFC4u;
        // 0x2ebfc8: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebfc4) {
            ctx->pc = 0x2EC00Cu;
            goto label_2ec00c;
        }
    }
    ctx->pc = 0x2EBFCCu;
    // 0x2ebfcc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2ebfccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2ebfd0: 0x94650112  lhu         $a1, 0x112($v1)
    ctx->pc = 0x2ebfd0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 274)));
    // 0x2ebfd4: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x2EBFD4u;
    SET_GPR_U32(ctx, 31, 0x2EBFDCu);
    ctx->pc = 0x2EBFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBFD4u;
    // 0x2ebfd8: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x2EBFD4u, 0x2EBFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBFDCu;
label_2ebfdc:
    // 0x2ebfdc: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x2ebfdcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
    // 0x2ebfe0: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x2ebfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2ebfe4: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EBFE4u;
    {
        const bool branch_taken_0x2ebfe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ebfe4) {
            ctx->pc = 0x2EBFE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBFE4u;
            // 0x2ebfe8: 0x92220026  lbu         $v0, 0x26($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 38)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC010u;
            goto label_2ec010;
        }
    }
    ctx->pc = 0x2EBFECu;
    // 0x2ebfec: 0xde4300e0  ld          $v1, 0xE0($s2)
    ctx->pc = 0x2ebfecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x2ebff0: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x2ebff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x2ebff4: 0x2405f7ff  addiu       $a1, $zero, -0x801
    ctx->pc = 0x2ebff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2ebff8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ebff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ebffc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2ebffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2ec000: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2ec000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2ec004: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2EC004u;
    {
        const bool branch_taken_0x2ec004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC004u;
        // 0x2ec008: 0xfe4300e0  sd          $v1, 0xE0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec004) {
            ctx->pc = 0x2EC1B8u;
            goto label_2ec1b8;
        }
    }
    ctx->pc = 0x2EC00Cu;
label_2ec00c:
    // 0x2ec00c: 0x92220026  lbu         $v0, 0x26($s1)
    ctx->pc = 0x2ec00cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 38)));
label_2ec010:
    // 0x2ec010: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2ec010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec014: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ec014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ec018: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2ec018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ec01c: 0x54500006  bnel        $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC01Cu;
    {
        const bool branch_taken_0x2ec01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2ec01c) {
            ctx->pc = 0x2EC020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC01Cu;
            // 0x2ec020: 0x92220025  lbu         $v0, 0x25($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 37)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC038u;
            goto label_2ec038;
        }
    }
    ctx->pc = 0x2EC024u;
    // 0x2ec024: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2ec024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2ec028: 0x54400062  bnel        $v0, $zero, . + 4 + (0x62 << 2)
    ctx->pc = 0x2EC028u;
    {
        const bool branch_taken_0x2ec028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec028) {
            ctx->pc = 0x2EC02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC028u;
            // 0x2ec02c: 0xae300018  sw          $s0, 0x18($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC1B4u;
            goto label_2ec1b4;
        }
    }
    ctx->pc = 0x2EC030u;
    // 0x2ec030: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2EC030u;
    {
        const bool branch_taken_0x2ec030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC030u;
        // 0x2ec034: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec030) {
            ctx->pc = 0x2EC1B8u;
            goto label_2ec1b8;
        }
    }
    ctx->pc = 0x2EC038u;
label_2ec038:
    // 0x2ec038: 0x1050005f  beq         $v0, $s0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2EC038u;
    {
        const bool branch_taken_0x2ec038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2EC03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC038u;
        // 0x2ec03c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec038) {
            ctx->pc = 0x2EC1B8u;
            goto label_2ec1b8;
        }
    }
    ctx->pc = 0x2EC040u;
    // 0x2ec040: 0x92220027  lbu         $v0, 0x27($s1)
    ctx->pc = 0x2ec040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 39)));
    // 0x2ec044: 0x1050005b  beq         $v0, $s0, . + 4 + (0x5B << 2)
    ctx->pc = 0x2EC044u;
    {
        const bool branch_taken_0x2ec044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2EC048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC044u;
        // 0x2ec048: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec044) {
            ctx->pc = 0x2EC1B4u;
            goto label_2ec1b4;
        }
    }
    ctx->pc = 0x2EC04Cu;
    // 0x2ec04c: 0x9223001c  lbu         $v1, 0x1C($s1)
    ctx->pc = 0x2ec04cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2ec050: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2EC050u;
    {
        const bool branch_taken_0x2ec050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EC054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC050u;
        // 0x2ec054: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec050) {
            ctx->pc = 0x2EC0C4u;
            goto label_2ec0c4;
        }
    }
    ctx->pc = 0x2EC058u;
    // 0x2ec058: 0xc088ef0  jal         func_223BC0
    ctx->pc = 0x2EC058u;
    SET_GPR_U32(ctx, 31, 0x2EC060u);
    ctx->pc = 0x2EC05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC058u;
    // 0x2ec05c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x2EC058u, 0x2EC060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC060u;
label_2ec060:
    // 0x2ec060: 0x14500055  bne         $v0, $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x2EC060u;
    {
        const bool branch_taken_0x2ec060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2EC064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC060u;
        // 0x2ec064: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec060) {
            ctx->pc = 0x2EC1B8u;
            goto label_2ec1b8;
        }
    }
    ctx->pc = 0x2EC068u;
    // 0x2ec068: 0xc088bbc  jal         func_222EF0
    ctx->pc = 0x2EC068u;
    SET_GPR_U32(ctx, 31, 0x2EC070u);
    ctx->pc = 0x2EC06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC068u;
    // 0x2ec06c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x2EC068u, 0x2EC070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC070u;
label_2ec070:
    // 0x2ec070: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2ec070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x2ec074: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ec074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ec078: 0x0  nop
    ctx->pc = 0x2ec078u;
    // NOP
    // 0x2ec07c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x2ec07cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec080: 0x0  nop
    ctx->pc = 0x2ec080u;
    // NOP
    // 0x2ec084: 0x4500004c  bc1f        . + 4 + (0x4C << 2)
    ctx->pc = 0x2EC084u;
    {
        const bool branch_taken_0x2ec084 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EC088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC084u;
        // 0x2ec088: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec084) {
            ctx->pc = 0x2EC1B8u;
            goto label_2ec1b8;
        }
    }
    ctx->pc = 0x2EC08Cu;
    // 0x2ec08c: 0x9222001f  lbu         $v0, 0x1F($s1)
    ctx->pc = 0x2ec08cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 31)));
    // 0x2ec090: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ec090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ec094: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2ec094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ec098: 0x2c630007  sltiu       $v1, $v1, 0x7
    ctx->pc = 0x2ec098u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2ec09c: 0x14600045  bnez        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x2EC09Cu;
    {
        const bool branch_taken_0x2ec09c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC09Cu;
        // 0x2ec0a0: 0xa222001f  sb          $v0, 0x1F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 31), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec09c) {
            ctx->pc = 0x2EC1B4u;
            goto label_2ec1b4;
        }
    }
    ctx->pc = 0x2EC0A4u;
    // 0x2ec0a4: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2ec0a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x2ec0a8: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x2ec0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2ec0ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ec0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec0b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ec0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ec0b4: 0xc088ba0  jal         func_222E80
    ctx->pc = 0x2EC0B4u;
    SET_GPR_U32(ctx, 31, 0x2EC0BCu);
    ctx->pc = 0x2EC0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC0B4u;
    // 0x2ec0b8: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E80u, 0x2EC0B4u, 0x2EC0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC0BCu;
label_2ec0bc:
    // 0x2ec0bc: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2EC0BCu;
    {
        const bool branch_taken_0x2ec0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC0BCu;
        // 0x2ec0c0: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec0bc) {
            ctx->pc = 0x2EC1B4u;
            goto label_2ec1b4;
        }
    }
    ctx->pc = 0x2EC0C4u;
label_2ec0c4:
    // 0x2ec0c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ec0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ec0c8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2ec0c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ec0cc: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2EC0CCu;
    {
        const bool branch_taken_0x2ec0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC0CCu;
        // 0x2ec0d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec0cc) {
            ctx->pc = 0x2EC1B4u;
            goto label_2ec1b4;
        }
    }
    ctx->pc = 0x2EC0D4u;
    // 0x2ec0d4: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x2ec0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2ec0d8: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2ec0d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x2ec0dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ec0dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ec0e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ec0e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec0e4: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x2ec0e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ec0e8: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2ec0e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x2ec0ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2ec0ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2ec0f0: 0xc0a4d90  jal         func_293640
    ctx->pc = 0x2EC0F0u;
    SET_GPR_U32(ctx, 31, 0x2EC0F8u);
    ctx->pc = 0x2EC0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC0F0u;
    // 0x2ec0f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293640u, 0x2EC0F0u, 0x2EC0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC0F8u;
label_2ec0f8:
    // 0x2ec0f8: 0xc088b90  jal         func_222E40
    ctx->pc = 0x2EC0F8u;
    SET_GPR_U32(ctx, 31, 0x2EC100u);
    ctx->pc = 0x2EC0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC0F8u;
    // 0x2ec0fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E40u, 0x2EC0F8u, 0x2EC100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC100u;
label_2ec100:
    // 0x2ec100: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ec100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec104: 0xc088b98  jal         func_222E60
    ctx->pc = 0x2EC104u;
    SET_GPR_U32(ctx, 31, 0x2EC10Cu);
    ctx->pc = 0x2EC108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC104u;
    // 0x2ec108: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E60u, 0x2EC104u, 0x2EC10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC10Cu;
label_2ec10c:
    // 0x2ec10c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2ec10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ec110: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ec110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec114: 0x0  nop
    ctx->pc = 0x2ec114u;
    // NOP
    // 0x2ec118: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ec118u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ec11c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2ec11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2ec120: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ec120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ec124: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x2ec124u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2ec128: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2ec128u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec12c: 0x0  nop
    ctx->pc = 0x2ec12cu;
    // NOP
    // 0x2ec130: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ec130u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ec134: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2ec134u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2ec138: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ec138u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ec13c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2ec13cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec140: 0x0  nop
    ctx->pc = 0x2ec140u;
    // NOP
    // 0x2ec144: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x2EC144u;
    {
        const bool branch_taken_0x2ec144 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ec144) {
            ctx->pc = 0x2EC148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC144u;
            // 0x2ec148: 0x9223001c  lbu         $v1, 0x1C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC184u;
            goto label_2ec184;
        }
    }
    ctx->pc = 0x2EC14Cu;
    // 0x2ec14c: 0x92220028  lbu         $v0, 0x28($s1)
    ctx->pc = 0x2ec14cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2ec150: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2EC150u;
    {
        const bool branch_taken_0x2ec150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC150u;
        // 0x2ec154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec150) {
            ctx->pc = 0x2EC180u;
            goto label_2ec180;
        }
    }
    ctx->pc = 0x2EC158u;
    // 0x2ec158: 0xc0bb080  jal         func_2EC200
    ctx->pc = 0x2EC158u;
    SET_GPR_U32(ctx, 31, 0x2EC160u);
    ctx->pc = 0x2EC15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC158u;
    // 0x2ec15c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC200u, 0x2EC158u, 0x2EC160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC160u;
label_2ec160:
    // 0x2ec160: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ec160u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2ec164: 0xc088ba0  jal         func_222E80
    ctx->pc = 0x2EC164u;
    SET_GPR_U32(ctx, 31, 0x2EC16Cu);
    ctx->pc = 0x2EC168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC164u;
    // 0x2ec168: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E80u, 0x2EC164u, 0x2EC16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC16Cu;
label_2ec16c:
    // 0x2ec16c: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2ec16cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x2ec170: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2ec170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ec174: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ec174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ec178: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2EC178u;
    {
        const bool branch_taken_0x2ec178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC178u;
        // 0x2ec17c: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec178) {
            ctx->pc = 0x2EC1B4u;
            goto label_2ec1b4;
        }
    }
    ctx->pc = 0x2EC180u;
label_2ec180:
    // 0x2ec180: 0x9223001c  lbu         $v1, 0x1C($s1)
    ctx->pc = 0x2ec180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
label_2ec184:
    // 0x2ec184: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ec184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ec188: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2EC188u;
    {
        const bool branch_taken_0x2ec188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EC18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC188u;
        // 0x2ec18c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec188) {
            ctx->pc = 0x2EC1B8u;
            goto label_2ec1b8;
        }
    }
    ctx->pc = 0x2EC190u;
    // 0x2ec190: 0x9222001f  lbu         $v0, 0x1F($s1)
    ctx->pc = 0x2ec190u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 31)));
    // 0x2ec194: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ec194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ec198: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2ec198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ec19c: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x2ec19cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ec1a0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC1A0u;
    {
        const bool branch_taken_0x2ec1a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC1A0u;
        // 0x2ec1a4: 0xa222001f  sb          $v0, 0x1F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 31), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec1a0) {
            ctx->pc = 0x2EC1B4u;
            goto label_2ec1b4;
        }
    }
    ctx->pc = 0x2EC1A8u;
    // 0x2ec1a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec1ac: 0xc0bb080  jal         func_2EC200
    ctx->pc = 0x2EC1ACu;
    SET_GPR_U32(ctx, 31, 0x2EC1B4u);
    ctx->pc = 0x2EC1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC1ACu;
    // 0x2ec1b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC200u, 0x2EC1ACu, 0x2EC1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC1B4u;
label_2ec1b4:
    // 0x2ec1b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ec1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ec1b8:
    // 0x2ec1b8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2ec1b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ec1bc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ec1bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ec1c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ec1c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ec1c4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2ec1c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec1c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ec1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec1cc: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2ec1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ec1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC1D0u;
        // 0x2ec1d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC1D8u;
}
