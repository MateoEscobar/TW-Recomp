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

// Function: sub_00350AA0
// Address: 0x350aa0 - 0x350cd8
void sub_00350AA0_0x350aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350AA0_0x350aa0");
#endif

    switch (ctx->pc) {
        case 0x350ad8u: goto label_350ad8;
        default: break;
    }

    ctx->pc = 0x350aa0u;

    // 0x350aa0: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x350aa0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350aa4: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x350aa4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x350aa8: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x350aa8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x350aac: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x350aacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x350ab0: 0x956c0000  lhu         $t4, 0x0($t3)
    ctx->pc = 0x350ab0u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x350ab4: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x350ab4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350ab8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x350ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x350abc: 0x3a0702d  daddu       $t6, $sp, $zero
    ctx->pc = 0x350abcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350ac0: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x350ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x350ac4: 0x27ad0010  addiu       $t5, $sp, 0x10
    ctx->pc = 0x350ac4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x350ac8: 0x11800080  beqz        $t4, . + 4 + (0x80 << 2)
    ctx->pc = 0x350AC8u;
    {
        const bool branch_taken_0x350ac8 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x350ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350AC8u;
        // 0x350acc: 0x256b0002  addiu       $t3, $t3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350ac8) {
            ctx->pc = 0x350CCCu;
            goto label_350ccc;
        }
    }
    ctx->pc = 0x350AD0u;
    // 0x350ad0: 0x2419000a  addiu       $t9, $zero, 0xA
    ctx->pc = 0x350ad0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x350ad4: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x350ad4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_350ad8:
    // 0x350ad8: 0x95640000  lhu         $a0, 0x0($t3)
    ctx->pc = 0x350ad8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x350adc: 0x300282d  daddu       $a1, $t8, $zero
    ctx->pc = 0x350adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350ae0: 0x8de30094  lw          $v1, 0x94($t7)
    ctx->pc = 0x350ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 148)));
    // 0x350ae4: 0x410c2  srl         $v0, $a0, 3
    ctx->pc = 0x350ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x350ae8: 0x30890007  andi        $t1, $a0, 0x7
    ctx->pc = 0x350ae8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x350aec: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x350aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x350af0: 0x992018  mult        $a0, $a0, $t9
    ctx->pc = 0x350af0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x350af4: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x350af4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x350af8: 0x8de30088  lw          $v1, 0x88($t7)
    ctx->pc = 0x350af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 136)));
    // 0x350afc: 0x1261007  srav        $v0, $a2, $t1
    ctx->pc = 0x350afcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 9) & 0x1F));
    // 0x350b00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x350b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x350b04: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x350b04u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x350b08: 0x14a0006c  bnez        $a1, . + 4 + (0x6C << 2)
    ctx->pc = 0x350B08u;
    {
        const bool branch_taken_0x350b08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x350B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350B08u;
        // 0x350b0c: 0x645021  addu        $t2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350b08) {
            ctx->pc = 0x350CBCu;
            goto label_350cbc;
        }
    }
    ctx->pc = 0x350B10u;
    // 0x350b10: 0x1381004  sllv        $v0, $t8, $t1
    ctx->pc = 0x350b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 9) & 0x1F));
    // 0x350b14: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x350b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x350b18: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x350b18u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x350b1c: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x350b1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x350b20: 0x8de5008c  lw          $a1, 0x8C($t7)
    ctx->pc = 0x350b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 140)));
    // 0x350b24: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x350b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x350b28: 0xc5c80000  lwc1        $f8, 0x0($t6)
    ctx->pc = 0x350b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x350b2c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x350b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x350b30: 0x95430002  lhu         $v1, 0x2($t2)
    ctx->pc = 0x350b30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x350b34: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x350b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x350b38: 0x95440004  lhu         $a0, 0x4($t2)
    ctx->pc = 0x350b38u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x350b3c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x350b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x350b40: 0x46024036  c.le.s      $f8, $f2
    ctx->pc = 0x350b40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x350b44: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x350b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x350b48: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x350b48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x350b4c: 0x4500005b  bc1f        . + 4 + (0x5B << 2)
    ctx->pc = 0x350B4Cu;
    {
        const bool branch_taken_0x350b4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x350B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350B4Cu;
        // 0x350b50: 0xa42821  addu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350b4c) {
            ctx->pc = 0x350CBCu;
            goto label_350cbc;
        }
    }
    ctx->pc = 0x350B54u;
    // 0x350b54: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x350b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350b58: 0xc5c70004  lwc1        $f7, 0x4($t6)
    ctx->pc = 0x350b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x350b5c: 0x46013836  c.le.s      $f7, $f1
    ctx->pc = 0x350b5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x350b60: 0x0  nop
    ctx->pc = 0x350b60u;
    // NOP
    // 0x350b64: 0x45020056  bc1fl       . + 4 + (0x56 << 2)
    ctx->pc = 0x350B64u;
    {
        const bool branch_taken_0x350b64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x350b64) {
            ctx->pc = 0x350B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350B64u;
            // 0x350b68: 0x2582ffff  addiu       $v0, $t4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350CC0u;
            goto label_350cc0;
        }
    }
    ctx->pc = 0x350B6Cu;
    // 0x350b6c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x350b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350b70: 0xc5c60008  lwc1        $f6, 0x8($t6)
    ctx->pc = 0x350b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x350b74: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x350b74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x350b78: 0x0  nop
    ctx->pc = 0x350b78u;
    // NOP
    // 0x350b7c: 0x45020050  bc1fl       . + 4 + (0x50 << 2)
    ctx->pc = 0x350B7Cu;
    {
        const bool branch_taken_0x350b7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x350b7c) {
            ctx->pc = 0x350B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350B7Cu;
            // 0x350b80: 0x2582ffff  addiu       $v0, $t4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350CC0u;
            goto label_350cc0;
        }
    }
    ctx->pc = 0x350B84u;
    // 0x350b84: 0xc5a50000  lwc1        $f5, 0x0($t5)
    ctx->pc = 0x350b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x350b88: 0x46051036  c.le.s      $f2, $f5
    ctx->pc = 0x350b88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x350b8c: 0x0  nop
    ctx->pc = 0x350b8cu;
    // NOP
    // 0x350b90: 0x4502004b  bc1fl       . + 4 + (0x4B << 2)
    ctx->pc = 0x350B90u;
    {
        const bool branch_taken_0x350b90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x350b90) {
            ctx->pc = 0x350B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350B90u;
            // 0x350b94: 0x2582ffff  addiu       $v0, $t4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350CC0u;
            goto label_350cc0;
        }
    }
    ctx->pc = 0x350B98u;
    // 0x350b98: 0xc5a40004  lwc1        $f4, 0x4($t5)
    ctx->pc = 0x350b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x350b9c: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x350b9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x350ba0: 0x0  nop
    ctx->pc = 0x350ba0u;
    // NOP
    // 0x350ba4: 0x45020046  bc1fl       . + 4 + (0x46 << 2)
    ctx->pc = 0x350BA4u;
    {
        const bool branch_taken_0x350ba4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x350ba4) {
            ctx->pc = 0x350BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350BA4u;
            // 0x350ba8: 0x2582ffff  addiu       $v0, $t4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350CC0u;
            goto label_350cc0;
        }
    }
    ctx->pc = 0x350BACu;
    // 0x350bac: 0xc5a30008  lwc1        $f3, 0x8($t5)
    ctx->pc = 0x350bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x350bb0: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x350bb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x350bb4: 0x0  nop
    ctx->pc = 0x350bb4u;
    // NOP
    // 0x350bb8: 0x45020041  bc1fl       . + 4 + (0x41 << 2)
    ctx->pc = 0x350BB8u;
    {
        const bool branch_taken_0x350bb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x350bb8) {
            ctx->pc = 0x350BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350BB8u;
            // 0x350bbc: 0x2582ffff  addiu       $v0, $t4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350CC0u;
            goto label_350cc0;
        }
    }
    ctx->pc = 0x350BC0u;
    // 0x350bc0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x350bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x350bc4: 0x46024036  c.le.s      $f8, $f2
    ctx->pc = 0x350bc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x350bc8: 0x0  nop
    ctx->pc = 0x350bc8u;
    // NOP
    // 0x350bcc: 0x4502003c  bc1fl       . + 4 + (0x3C << 2)
    ctx->pc = 0x350BCCu;
    {
        const bool branch_taken_0x350bcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x350bcc) {
            ctx->pc = 0x350BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350BCCu;
            // 0x350bd0: 0x2582ffff  addiu       $v0, $t4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350CC0u;
            goto label_350cc0;
        }
    }
    ctx->pc = 0x350BD4u;
    // 0x350bd4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x350bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350bd8: 0x46013836  c.le.s      $f7, $f1
    ctx->pc = 0x350bd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x350bdc: 0x0  nop
    ctx->pc = 0x350bdcu;
    // NOP
    // 0x350be0: 0x45020037  bc1fl       . + 4 + (0x37 << 2)
    ctx->pc = 0x350BE0u;
    {
        const bool branch_taken_0x350be0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x350be0) {
            ctx->pc = 0x350BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350BE0u;
            // 0x350be4: 0x2582ffff  addiu       $v0, $t4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350CC0u;
            goto label_350cc0;
        }
    }
    ctx->pc = 0x350BE8u;
    // 0x350be8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x350be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350bec: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x350becu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x350bf0: 0x0  nop
    ctx->pc = 0x350bf0u;
    // NOP
    // 0x350bf4: 0x45020032  bc1fl       . + 4 + (0x32 << 2)
    ctx->pc = 0x350BF4u;
    {
        const bool branch_taken_0x350bf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x350bf4) {
            ctx->pc = 0x350BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350BF4u;
            // 0x350bf8: 0x2582ffff  addiu       $v0, $t4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350CC0u;
            goto label_350cc0;
        }
    }
    ctx->pc = 0x350BFCu;
    // 0x350bfc: 0x46051036  c.le.s      $f2, $f5
    ctx->pc = 0x350bfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x350c00: 0x0  nop
    ctx->pc = 0x350c00u;
    // NOP
    // 0x350c04: 0x4502002e  bc1fl       . + 4 + (0x2E << 2)
    ctx->pc = 0x350C04u;
    {
        const bool branch_taken_0x350c04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x350c04) {
            ctx->pc = 0x350C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350C04u;
            // 0x350c08: 0x2582ffff  addiu       $v0, $t4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350CC0u;
            goto label_350cc0;
        }
    }
    ctx->pc = 0x350C0Cu;
    // 0x350c0c: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x350c0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x350c10: 0x0  nop
    ctx->pc = 0x350c10u;
    // NOP
    // 0x350c14: 0x4502002a  bc1fl       . + 4 + (0x2A << 2)
    ctx->pc = 0x350C14u;
    {
        const bool branch_taken_0x350c14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x350c14) {
            ctx->pc = 0x350C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350C14u;
            // 0x350c18: 0x2582ffff  addiu       $v0, $t4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350CC0u;
            goto label_350cc0;
        }
    }
    ctx->pc = 0x350C1Cu;
    // 0x350c1c: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x350c1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x350c20: 0x0  nop
    ctx->pc = 0x350c20u;
    // NOP
    // 0x350c24: 0x45020026  bc1fl       . + 4 + (0x26 << 2)
    ctx->pc = 0x350C24u;
    {
        const bool branch_taken_0x350c24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x350c24) {
            ctx->pc = 0x350C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350C24u;
            // 0x350c28: 0x2582ffff  addiu       $v0, $t4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350CC0u;
            goto label_350cc0;
        }
    }
    ctx->pc = 0x350C2Cu;
    // 0x350c2c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x350c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x350c30: 0x46024036  c.le.s      $f8, $f2
    ctx->pc = 0x350c30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x350c34: 0x0  nop
    ctx->pc = 0x350c34u;
    // NOP
    // 0x350c38: 0x45020021  bc1fl       . + 4 + (0x21 << 2)
    ctx->pc = 0x350C38u;
    {
        const bool branch_taken_0x350c38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x350c38) {
            ctx->pc = 0x350C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350C38u;
            // 0x350c3c: 0x2582ffff  addiu       $v0, $t4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350CC0u;
            goto label_350cc0;
        }
    }
    ctx->pc = 0x350C40u;
    // 0x350c40: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x350c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350c44: 0x46013836  c.le.s      $f7, $f1
    ctx->pc = 0x350c44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x350c48: 0x0  nop
    ctx->pc = 0x350c48u;
    // NOP
    // 0x350c4c: 0x4502001c  bc1fl       . + 4 + (0x1C << 2)
    ctx->pc = 0x350C4Cu;
    {
        const bool branch_taken_0x350c4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x350c4c) {
            ctx->pc = 0x350C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350C4Cu;
            // 0x350c50: 0x2582ffff  addiu       $v0, $t4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350CC0u;
            goto label_350cc0;
        }
    }
    ctx->pc = 0x350C54u;
    // 0x350c54: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x350c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350c58: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x350c58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x350c5c: 0x0  nop
    ctx->pc = 0x350c5cu;
    // NOP
    // 0x350c60: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
    ctx->pc = 0x350C60u;
    {
        const bool branch_taken_0x350c60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x350c60) {
            ctx->pc = 0x350C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350C60u;
            // 0x350c64: 0x2582ffff  addiu       $v0, $t4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350CC0u;
            goto label_350cc0;
        }
    }
    ctx->pc = 0x350C68u;
    // 0x350c68: 0x46051036  c.le.s      $f2, $f5
    ctx->pc = 0x350c68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x350c6c: 0x0  nop
    ctx->pc = 0x350c6cu;
    // NOP
    // 0x350c70: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
    ctx->pc = 0x350C70u;
    {
        const bool branch_taken_0x350c70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x350c70) {
            ctx->pc = 0x350C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350C70u;
            // 0x350c74: 0x2582ffff  addiu       $v0, $t4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350CC0u;
            goto label_350cc0;
        }
    }
    ctx->pc = 0x350C78u;
    // 0x350c78: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x350c78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x350c7c: 0x0  nop
    ctx->pc = 0x350c7cu;
    // NOP
    // 0x350c80: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x350C80u;
    {
        const bool branch_taken_0x350c80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x350c80) {
            ctx->pc = 0x350C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350C80u;
            // 0x350c84: 0x2582ffff  addiu       $v0, $t4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350CC0u;
            goto label_350cc0;
        }
    }
    ctx->pc = 0x350C88u;
    // 0x350c88: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x350c88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x350c8c: 0x0  nop
    ctx->pc = 0x350c8cu;
    // NOP
    // 0x350c90: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x350C90u;
    {
        const bool branch_taken_0x350c90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x350c90) {
            ctx->pc = 0x350C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350C90u;
            // 0x350c94: 0x2582ffff  addiu       $v0, $t4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350CC0u;
            goto label_350cc0;
        }
    }
    ctx->pc = 0x350C98u;
    // 0x350c98: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x350C98u;
    {
        const bool branch_taken_0x350c98 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x350C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350C98u;
        // 0x350c9c: 0x95420006  lhu         $v0, 0x6($t2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350c98) {
            ctx->pc = 0x350CB4u;
            goto label_350cb4;
        }
    }
    ctx->pc = 0x350CA0u;
    // 0x350ca0: 0x30430fff  andi        $v1, $v0, 0xFFF
    ctx->pc = 0x350ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x350ca4: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x350ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x350ca8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x350ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x350cac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x350CACu;
    {
        const bool branch_taken_0x350cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350CACu;
        // 0x350cb0: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350cac) {
            ctx->pc = 0x350CB8u;
            goto label_350cb8;
        }
    }
    ctx->pc = 0x350CB4u;
label_350cb4:
    // 0x350cb4: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x350cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
label_350cb8:
    // 0x350cb8: 0xa5420006  sh          $v0, 0x6($t2)
    ctx->pc = 0x350cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 6), (uint16_t)GPR_U32(ctx, 2));
label_350cbc:
    // 0x350cbc: 0x2582ffff  addiu       $v0, $t4, -0x1
    ctx->pc = 0x350cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_350cc0:
    // 0x350cc0: 0x304cffff  andi        $t4, $v0, 0xFFFF
    ctx->pc = 0x350cc0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x350cc4: 0x1580ff84  bnez        $t4, . + 4 + (-0x7C << 2)
    ctx->pc = 0x350CC4u;
    {
        const bool branch_taken_0x350cc4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x350CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350CC4u;
        // 0x350cc8: 0x256b0002  addiu       $t3, $t3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350cc4) {
            ctx->pc = 0x350AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_350ad8;
        }
    }
    ctx->pc = 0x350CCCu;
label_350ccc:
    // 0x350ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x350CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350CCCu;
        // 0x350cd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350CD4u;
    // 0x350cd4: 0x0  nop
    ctx->pc = 0x350cd4u;
    // NOP
    ctx->pc = 0x350cd8u;
}
