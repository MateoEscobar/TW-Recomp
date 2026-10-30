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

// Function: sub_001A9A78
// Address: 0x1a9a78 - 0x1a9b70
void sub_001A9A78_0x1a9a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9A78_0x1a9a78");
#endif

    switch (ctx->pc) {
        case 0x1a9a78u: goto label_1a9a78;
        case 0x1a9a7cu: goto label_1a9a7c;
        case 0x1a9a80u: goto label_1a9a80;
        case 0x1a9a84u: goto label_1a9a84;
        case 0x1a9a88u: goto label_1a9a88;
        case 0x1a9a8cu: goto label_1a9a8c;
        case 0x1a9a90u: goto label_1a9a90;
        case 0x1a9a94u: goto label_1a9a94;
        case 0x1a9a98u: goto label_1a9a98;
        case 0x1a9a9cu: goto label_1a9a9c;
        case 0x1a9aa0u: goto label_1a9aa0;
        case 0x1a9aa4u: goto label_1a9aa4;
        case 0x1a9aa8u: goto label_1a9aa8;
        case 0x1a9aacu: goto label_1a9aac;
        case 0x1a9ab0u: goto label_1a9ab0;
        case 0x1a9ab4u: goto label_1a9ab4;
        case 0x1a9ab8u: goto label_1a9ab8;
        case 0x1a9abcu: goto label_1a9abc;
        case 0x1a9ac0u: goto label_1a9ac0;
        case 0x1a9ac4u: goto label_1a9ac4;
        case 0x1a9ac8u: goto label_1a9ac8;
        case 0x1a9accu: goto label_1a9acc;
        case 0x1a9ad0u: goto label_1a9ad0;
        case 0x1a9ad4u: goto label_1a9ad4;
        case 0x1a9ad8u: goto label_1a9ad8;
        case 0x1a9adcu: goto label_1a9adc;
        case 0x1a9ae0u: goto label_1a9ae0;
        case 0x1a9ae4u: goto label_1a9ae4;
        case 0x1a9ae8u: goto label_1a9ae8;
        case 0x1a9aecu: goto label_1a9aec;
        case 0x1a9af0u: goto label_1a9af0;
        case 0x1a9af4u: goto label_1a9af4;
        case 0x1a9af8u: goto label_1a9af8;
        case 0x1a9afcu: goto label_1a9afc;
        case 0x1a9b00u: goto label_1a9b00;
        case 0x1a9b04u: goto label_1a9b04;
        case 0x1a9b08u: goto label_1a9b08;
        case 0x1a9b0cu: goto label_1a9b0c;
        case 0x1a9b10u: goto label_1a9b10;
        case 0x1a9b14u: goto label_1a9b14;
        case 0x1a9b18u: goto label_1a9b18;
        case 0x1a9b1cu: goto label_1a9b1c;
        case 0x1a9b20u: goto label_1a9b20;
        case 0x1a9b24u: goto label_1a9b24;
        case 0x1a9b28u: goto label_1a9b28;
        case 0x1a9b2cu: goto label_1a9b2c;
        case 0x1a9b30u: goto label_1a9b30;
        case 0x1a9b34u: goto label_1a9b34;
        case 0x1a9b38u: goto label_1a9b38;
        case 0x1a9b3cu: goto label_1a9b3c;
        case 0x1a9b40u: goto label_1a9b40;
        case 0x1a9b44u: goto label_1a9b44;
        case 0x1a9b48u: goto label_1a9b48;
        case 0x1a9b4cu: goto label_1a9b4c;
        case 0x1a9b50u: goto label_1a9b50;
        case 0x1a9b54u: goto label_1a9b54;
        case 0x1a9b58u: goto label_1a9b58;
        case 0x1a9b5cu: goto label_1a9b5c;
        case 0x1a9b60u: goto label_1a9b60;
        case 0x1a9b64u: goto label_1a9b64;
        case 0x1a9b68u: goto label_1a9b68;
        case 0x1a9b6cu: goto label_1a9b6c;
        default: break;
    }

    ctx->pc = 0x1a9a78u;

label_1a9a78:
    // 0x1a9a78: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a9a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1a9a7c:
    // 0x1a9a7c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1a9a7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a9a80:
    // 0x1a9a80: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1a9a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1a9a84:
    // 0x1a9a84: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1a9a84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1a9a88:
    // 0x1a9a88: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1a9a88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1a9a8c:
    // 0x1a9a8c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1a9a8cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_1a9a90:
    // 0x1a9a90: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1a9a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1a9a94:
    // 0x1a9a94: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1a9a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1a9a98:
    // 0x1a9a98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a9a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a9a9c:
    // 0x1a9a9c: 0x8c50000c  lw          $s0, 0xC($v0)
    ctx->pc = 0x1a9a9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a9aa0:
    // 0x1a9aa0: 0xc06a712  jal         func_1A9C48
label_1a9aa4:
    if (ctx->pc == 0x1A9AA4u) {
        ctx->pc = 0x1A9AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9AA0u;
        // 0x1a9aa4: 0x8c510010  lw          $s1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9AA8u;
        goto label_1a9aa8;
    }
    ctx->pc = 0x1A9AA0u;
    SET_GPR_U32(ctx, 31, 0x1A9AA8u);
    ctx->pc = 0x1A9AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9AA0u;
    // 0x1a9aa4: 0x8c510010  lw          $s1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9C48u, 0x1A9AA0u, 0x1A9AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9AA8u;
label_1a9aa8:
    // 0x1a9aa8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a9aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a9aac:
    // 0x1a9aac: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x1a9aacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a9ab0:
    // 0x1a9ab0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1a9ab0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1a9ab4:
    // 0x1a9ab4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a9ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a9ab8:
    // 0x1a9ab8: 0x84650018  lh          $a1, 0x18($v1)
    ctx->pc = 0x1a9ab8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_1a9abc:
    // 0x1a9abc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1a9abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1a9ac0:
    // 0x1a9ac0: 0x40f809  jalr        $v0
label_1a9ac4:
    if (ctx->pc == 0x1A9AC4u) {
        ctx->pc = 0x1A9AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9AC0u;
        // 0x1a9ac4: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9AC8u;
        goto label_1a9ac8;
    }
    ctx->pc = 0x1A9AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A9AC8u);
        ctx->pc = 0x1A9AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9AC0u;
        // 0x1a9ac4: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9AC0u, 0x1A9AC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9AC8u;
label_1a9ac8:
    // 0x1a9ac8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a9ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a9acc:
    // 0x1a9acc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a9accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a9ad0:
    // 0x1a9ad0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a9ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a9ad4:
    // 0x1a9ad4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1a9ad4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a9ad8:
    // 0x1a9ad8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a9ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9adc:
    // 0x1a9adc: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1a9adcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1a9ae0:
    // 0x1a9ae0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1a9ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1a9ae4:
    // 0x1a9ae4: 0x4614ad40  add.s       $f21, $f21, $f20
    ctx->pc = 0x1a9ae4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
label_1a9ae8:
    // 0x1a9ae8: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x1a9ae8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1a9aec:
    // 0x1a9aec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a9aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a9af0:
    // 0x1a9af0: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1a9af0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1a9af4:
    // 0x1a9af4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1a9af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a9af8:
    // 0x1a9af8: 0x60f809  jalr        $v1
label_1a9afc:
    if (ctx->pc == 0x1A9AFCu) {
        ctx->pc = 0x1A9AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9AF8u;
        // 0x1a9afc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9B00u;
        goto label_1a9b00;
    }
    ctx->pc = 0x1A9AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A9B00u);
        ctx->pc = 0x1A9AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9AF8u;
        // 0x1a9afc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9AF8u, 0x1A9B00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9B00u;
label_1a9b00:
    // 0x1a9b00: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_1a9b04:
    if (ctx->pc == 0x1A9B04u) {
        ctx->pc = 0x1A9B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B00u;
        // 0x1a9b04: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9B08u;
        goto label_1a9b08;
    }
    ctx->pc = 0x1A9B00u;
    {
        const bool branch_taken_0x1a9b00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B00u;
        // 0x1a9b04: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9b00) {
            ctx->pc = 0x1A9B50u;
            goto label_1a9b50;
        }
    }
    ctx->pc = 0x1A9B08u;
label_1a9b08:
    // 0x1a9b08: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a9b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a9b0c:
    // 0x1a9b0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a9b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a9b10:
    // 0x1a9b10: 0x84450018  lh          $a1, 0x18($v0)
    ctx->pc = 0x1a9b10u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1a9b14:
    // 0x1a9b14: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1a9b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1a9b18:
    // 0x1a9b18: 0x60f809  jalr        $v1
label_1a9b1c:
    if (ctx->pc == 0x1A9B1Cu) {
        ctx->pc = 0x1A9B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B18u;
        // 0x1a9b1c: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9B20u;
        goto label_1a9b20;
    }
    ctx->pc = 0x1A9B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A9B20u);
        ctx->pc = 0x1A9B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B18u;
        // 0x1a9b1c: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9B18u, 0x1A9B20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9B20u;
label_1a9b20:
    // 0x1a9b20: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1a9b20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a9b24:
    // 0x1a9b24: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1a9b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a9b28:
    // 0x1a9b28: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a9b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a9b2c:
    // 0x1a9b2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a9b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9b30:
    // 0x1a9b30: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1a9b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1a9b34:
    // 0x1a9b34: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1a9b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1a9b38:
    // 0x1a9b38: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a9b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a9b3c:
    // 0x1a9b3c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1a9b3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1a9b40:
    // 0x1a9b40: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1a9b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a9b44:
    // 0x1a9b44: 0x60f809  jalr        $v1
label_1a9b48:
    if (ctx->pc == 0x1A9B48u) {
        ctx->pc = 0x1A9B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B44u;
        // 0x1a9b48: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9B4Cu;
        goto label_1a9b4c;
    }
    ctx->pc = 0x1A9B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A9B4Cu);
        ctx->pc = 0x1A9B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B44u;
        // 0x1a9b48: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9B44u, 0x1A9B4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9B4Cu;
label_1a9b4c:
    // 0x1a9b4c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1a9b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a9b50:
    // 0x1a9b50: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1a9b50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a9b54:
    // 0x1a9b54: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1a9b54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a9b58:
    // 0x1a9b58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a9b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a9b5c:
    // 0x1a9b5c: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1a9b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a9b60:
    // 0x1a9b60: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1a9b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a9b64:
    // 0x1a9b64: 0x3e00008  jr          $ra
label_1a9b68:
    if (ctx->pc == 0x1A9B68u) {
        ctx->pc = 0x1A9B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B64u;
        // 0x1a9b68: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9B6Cu;
        goto label_1a9b6c;
    }
    ctx->pc = 0x1A9B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B64u;
        // 0x1a9b68: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9B6Cu;
label_1a9b6c:
    // 0x1a9b6c: 0x0  nop
    ctx->pc = 0x1a9b6cu;
    // NOP
    ctx->pc = 0x1a9b70u;
}
