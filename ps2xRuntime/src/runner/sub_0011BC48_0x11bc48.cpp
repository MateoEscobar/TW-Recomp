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

// Function: sub_0011BC48
// Address: 0x11bc48 - 0x11bdc0
void sub_0011BC48_0x11bc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BC48_0x11bc48");
#endif

    switch (ctx->pc) {
        case 0x11bc48u: goto label_11bc48;
        case 0x11bc4cu: goto label_11bc4c;
        case 0x11bc50u: goto label_11bc50;
        case 0x11bc54u: goto label_11bc54;
        case 0x11bc58u: goto label_11bc58;
        case 0x11bc5cu: goto label_11bc5c;
        case 0x11bc60u: goto label_11bc60;
        case 0x11bc64u: goto label_11bc64;
        case 0x11bc68u: goto label_11bc68;
        case 0x11bc6cu: goto label_11bc6c;
        case 0x11bc70u: goto label_11bc70;
        case 0x11bc74u: goto label_11bc74;
        case 0x11bc78u: goto label_11bc78;
        case 0x11bc7cu: goto label_11bc7c;
        case 0x11bc80u: goto label_11bc80;
        case 0x11bc84u: goto label_11bc84;
        case 0x11bc88u: goto label_11bc88;
        case 0x11bc8cu: goto label_11bc8c;
        case 0x11bc90u: goto label_11bc90;
        case 0x11bc94u: goto label_11bc94;
        case 0x11bc98u: goto label_11bc98;
        case 0x11bc9cu: goto label_11bc9c;
        case 0x11bca0u: goto label_11bca0;
        case 0x11bca4u: goto label_11bca4;
        case 0x11bca8u: goto label_11bca8;
        case 0x11bcacu: goto label_11bcac;
        case 0x11bcb0u: goto label_11bcb0;
        case 0x11bcb4u: goto label_11bcb4;
        case 0x11bcb8u: goto label_11bcb8;
        case 0x11bcbcu: goto label_11bcbc;
        case 0x11bcc0u: goto label_11bcc0;
        case 0x11bcc4u: goto label_11bcc4;
        case 0x11bcc8u: goto label_11bcc8;
        case 0x11bcccu: goto label_11bccc;
        case 0x11bcd0u: goto label_11bcd0;
        case 0x11bcd4u: goto label_11bcd4;
        case 0x11bcd8u: goto label_11bcd8;
        case 0x11bcdcu: goto label_11bcdc;
        case 0x11bce0u: goto label_11bce0;
        case 0x11bce4u: goto label_11bce4;
        case 0x11bce8u: goto label_11bce8;
        case 0x11bcecu: goto label_11bcec;
        case 0x11bcf0u: goto label_11bcf0;
        case 0x11bcf4u: goto label_11bcf4;
        case 0x11bcf8u: goto label_11bcf8;
        case 0x11bcfcu: goto label_11bcfc;
        case 0x11bd00u: goto label_11bd00;
        case 0x11bd04u: goto label_11bd04;
        case 0x11bd08u: goto label_11bd08;
        case 0x11bd0cu: goto label_11bd0c;
        case 0x11bd10u: goto label_11bd10;
        case 0x11bd14u: goto label_11bd14;
        case 0x11bd18u: goto label_11bd18;
        case 0x11bd1cu: goto label_11bd1c;
        case 0x11bd20u: goto label_11bd20;
        case 0x11bd24u: goto label_11bd24;
        case 0x11bd28u: goto label_11bd28;
        case 0x11bd2cu: goto label_11bd2c;
        case 0x11bd30u: goto label_11bd30;
        case 0x11bd34u: goto label_11bd34;
        case 0x11bd38u: goto label_11bd38;
        case 0x11bd3cu: goto label_11bd3c;
        case 0x11bd40u: goto label_11bd40;
        case 0x11bd44u: goto label_11bd44;
        case 0x11bd48u: goto label_11bd48;
        case 0x11bd4cu: goto label_11bd4c;
        case 0x11bd50u: goto label_11bd50;
        case 0x11bd54u: goto label_11bd54;
        case 0x11bd58u: goto label_11bd58;
        case 0x11bd5cu: goto label_11bd5c;
        case 0x11bd60u: goto label_11bd60;
        case 0x11bd64u: goto label_11bd64;
        case 0x11bd68u: goto label_11bd68;
        case 0x11bd6cu: goto label_11bd6c;
        case 0x11bd70u: goto label_11bd70;
        case 0x11bd74u: goto label_11bd74;
        case 0x11bd78u: goto label_11bd78;
        case 0x11bd7cu: goto label_11bd7c;
        case 0x11bd80u: goto label_11bd80;
        case 0x11bd84u: goto label_11bd84;
        case 0x11bd88u: goto label_11bd88;
        case 0x11bd8cu: goto label_11bd8c;
        case 0x11bd90u: goto label_11bd90;
        case 0x11bd94u: goto label_11bd94;
        case 0x11bd98u: goto label_11bd98;
        case 0x11bd9cu: goto label_11bd9c;
        case 0x11bda0u: goto label_11bda0;
        case 0x11bda4u: goto label_11bda4;
        case 0x11bda8u: goto label_11bda8;
        case 0x11bdacu: goto label_11bdac;
        case 0x11bdb0u: goto label_11bdb0;
        case 0x11bdb4u: goto label_11bdb4;
        case 0x11bdb8u: goto label_11bdb8;
        case 0x11bdbcu: goto label_11bdbc;
        default: break;
    }

    ctx->pc = 0x11bc48u;

label_11bc48:
    // 0x11bc48: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11bc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_11bc4c:
    // 0x11bc4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11bc4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11bc50:
    // 0x11bc50: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11bc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_11bc54:
    // 0x11bc54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11bc54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11bc58:
    // 0x11bc58: 0xe7b90078  swc1        $f25, 0x78($sp)
    ctx->pc = 0x11bc58u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_11bc5c:
    // 0x11bc5c: 0xe7b80070  swc1        $f24, 0x70($sp)
    ctx->pc = 0x11bc5cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_11bc60:
    // 0x11bc60: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x11bc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11bc64:
    // 0x11bc64: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x11bc64u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_11bc68:
    // 0x11bc68: 0x46008606  mov.s       $f24, $f16
    ctx->pc = 0x11bc68u;
    ctx->f[24] = FPU_MOV_S(ctx->f[16]);
label_11bc6c:
    // 0x11bc6c: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x11bc6cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_11bc70:
    // 0x11bc70: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x11bc70u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
label_11bc74:
    // 0x11bc74: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x11bc74u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_11bc78:
    // 0x11bc78: 0x46007d86  mov.s       $f22, $f15
    ctx->pc = 0x11bc78u;
    ctx->f[22] = FPU_MOV_S(ctx->f[15]);
label_11bc7c:
    // 0x11bc7c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x11bc7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_11bc80:
    // 0x11bc80: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x11bc80u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
label_11bc84:
    // 0x11bc84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11bc84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_11bc88:
    // 0x11bc88: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x11bc88u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_11bc8c:
    // 0x11bc8c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11bc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_11bc90:
    // 0x11bc90: 0x46008e46  mov.s       $f25, $f17
    ctx->pc = 0x11bc90u;
    ctx->f[25] = FPU_MOV_S(ctx->f[17]);
label_11bc94:
    // 0x11bc94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11bc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_11bc98:
    // 0x11bc98: 0xc04786c  jal         func_11E1B0
label_11bc9c:
    if (ctx->pc == 0x11BC9Cu) {
        ctx->pc = 0x11BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC98u;
        // 0x11bc9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BCA0u;
        goto label_11bca0;
    }
    ctx->pc = 0x11BC98u;
    SET_GPR_U32(ctx, 31, 0x11BCA0u);
    ctx->pc = 0x11BC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BC98u;
    // 0x11bc9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1B0u, 0x11BC98u, 0x11BCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BCA0u;
label_11bca0:
    // 0x11bca0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11bca0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11bca4:
    // 0x11bca4: 0x56400004  bnel        $s2, $zero, . + 4 + (0x4 << 2)
label_11bca8:
    if (ctx->pc == 0x11BCA8u) {
        ctx->pc = 0x11BCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BCA4u;
        // 0x11bca8: 0xc6030008  lwc1        $f3, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BCACu;
        goto label_11bcac;
    }
    ctx->pc = 0x11BCA4u;
    {
        const bool branch_taken_0x11bca4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x11bca4) {
            ctx->pc = 0x11BCA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11BCA4u;
            // 0x11bca8: 0xc6030008  lwc1        $f3, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11BCB8u;
            goto label_11bcb8;
        }
    }
    ctx->pc = 0x11BCACu;
label_11bcac:
    // 0x11bcac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x11bcacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_11bcb0:
    // 0x11bcb0: 0x10000037  b           . + 4 + (0x37 << 2)
label_11bcb4:
    if (ctx->pc == 0x11BCB4u) {
        ctx->pc = 0x11BCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BCB0u;
        // 0x11bcb4: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BCB8u;
        goto label_11bcb8;
    }
    ctx->pc = 0x11BCB0u;
    {
        const bool branch_taken_0x11bcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BCB0u;
        // 0x11bcb4: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bcb0) {
            ctx->pc = 0x11BD90u;
            goto label_11bd90;
        }
    }
    ctx->pc = 0x11BCB8u;
label_11bcb8:
    // 0x11bcb8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11bcb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_11bcbc:
    // 0x11bcbc: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x11bcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11bcc0:
    // 0x11bcc0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x11bcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11bcc4:
    // 0x11bcc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11bcc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11bcc8:
    // 0x11bcc8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11bcc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_11bccc:
    // 0x11bccc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x11bcccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_11bcd0:
    // 0x11bcd0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x11bcd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_11bcd4:
    // 0x11bcd4: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x11bcd4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_11bcd8:
    // 0x11bcd8: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x11bcd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_11bcdc:
    // 0x11bcdc: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x11bcdcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_11bce0:
    // 0x11bce0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x11bce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11bce4:
    // 0x11bce4: 0x7e4301e0  sq          $v1, 0x1E0($s2)
    ctx->pc = 0x11bce4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 480), GPR_VEC(ctx, 3));
label_11bce8:
    // 0x11bce8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x11bce8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_11bcec:
    // 0x11bcec: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x11bcecu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
label_11bcf0:
    // 0x11bcf0: 0x84a40190  lh          $a0, 0x190($a1)
    ctx->pc = 0x11bcf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 400)));
label_11bcf4:
    // 0x11bcf4: 0x8ca20194  lw          $v0, 0x194($a1)
    ctx->pc = 0x11bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 404)));
label_11bcf8:
    // 0x11bcf8: 0x40f809  jalr        $v0
label_11bcfc:
    if (ctx->pc == 0x11BCFCu) {
        ctx->pc = 0x11BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BCF8u;
        // 0x11bcfc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BD00u;
        goto label_11bd00;
    }
    ctx->pc = 0x11BCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11BD00u);
        ctx->pc = 0x11BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BCF8u;
        // 0x11bcfc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BCF8u, 0x11BD00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BD00u;
label_11bd00:
    // 0x11bd00: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x11bd00u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_11bd04:
    // 0x11bd04: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x11bd04u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_11bd08:
    // 0x11bd08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11bd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11bd0c:
    // 0x11bd0c: 0xc04d4ee  jal         func_1353B8
label_11bd10:
    if (ctx->pc == 0x11BD10u) {
        ctx->pc = 0x11BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD0Cu;
        // 0x11bd10: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BD14u;
        goto label_11bd14;
    }
    ctx->pc = 0x11BD0Cu;
    SET_GPR_U32(ctx, 31, 0x11BD14u);
    ctx->pc = 0x11BD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BD0Cu;
    // 0x11bd10: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1353B8u, 0x11BD0Cu, 0x11BD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD14u;
label_11bd14:
    // 0x11bd14: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x11bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11bd18:
    // 0x11bd18: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x11bd18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_11bd1c:
    // 0x11bd1c: 0x844401a0  lh          $a0, 0x1A0($v0)
    ctx->pc = 0x11bd1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 416)));
label_11bd20:
    // 0x11bd20: 0x8c4301a4  lw          $v1, 0x1A4($v0)
    ctx->pc = 0x11bd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 420)));
label_11bd24:
    // 0x11bd24: 0x60f809  jalr        $v1
label_11bd28:
    if (ctx->pc == 0x11BD28u) {
        ctx->pc = 0x11BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD24u;
        // 0x11bd28: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BD2Cu;
        goto label_11bd2c;
    }
    ctx->pc = 0x11BD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11BD2Cu);
        ctx->pc = 0x11BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD24u;
        // 0x11bd28: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BD24u, 0x11BD2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BD2Cu;
label_11bd2c:
    // 0x11bd2c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x11bd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11bd30:
    // 0x11bd30: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x11bd30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
label_11bd34:
    // 0x11bd34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11bd34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11bd38:
    // 0x11bd38: 0x844401a8  lh          $a0, 0x1A8($v0)
    ctx->pc = 0x11bd38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 424)));
label_11bd3c:
    // 0x11bd3c: 0x460ccb29  min.s       $f12, $f25, $f12
    ctx->pc = 0x11bd3cu;
    ctx->f[12] = std::min(ctx->f[25], ctx->f[12]);
label_11bd40:
    // 0x11bd40: 0x8c4301ac  lw          $v1, 0x1AC($v0)
    ctx->pc = 0x11bd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
label_11bd44:
    // 0x11bd44: 0x60f809  jalr        $v1
label_11bd48:
    if (ctx->pc == 0x11BD48u) {
        ctx->pc = 0x11BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD44u;
        // 0x11bd48: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BD4Cu;
        goto label_11bd4c;
    }
    ctx->pc = 0x11BD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11BD4Cu);
        ctx->pc = 0x11BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD44u;
        // 0x11bd48: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BD44u, 0x11BD4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BD4Cu;
label_11bd4c:
    // 0x11bd4c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x11bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11bd50:
    // 0x11bd50: 0x845001b0  lh          $s0, 0x1B0($v0)
    ctx->pc = 0x11bd50u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 432)));
label_11bd54:
    // 0x11bd54: 0x245101b0  addiu       $s1, $v0, 0x1B0
    ctx->pc = 0x11bd54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
label_11bd58:
    // 0x11bd58: 0x84440208  lh          $a0, 0x208($v0)
    ctx->pc = 0x11bd58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 520)));
label_11bd5c:
    // 0x11bd5c: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x11bd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_11bd60:
    // 0x11bd60: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x11bd60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_11bd64:
    // 0x11bd64: 0x60f809  jalr        $v1
label_11bd68:
    if (ctx->pc == 0x11BD68u) {
        ctx->pc = 0x11BD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD64u;
        // 0x11bd68: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BD6Cu;
        goto label_11bd6c;
    }
    ctx->pc = 0x11BD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11BD6Cu);
        ctx->pc = 0x11BD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD64u;
        // 0x11bd68: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BD64u, 0x11BD6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BD6Cu;
label_11bd6c:
    // 0x11bd6c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x11bd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_11bd70:
    // 0x11bd70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11bd74:
    // 0x11bd74: 0x40f809  jalr        $v0
label_11bd78:
    if (ctx->pc == 0x11BD78u) {
        ctx->pc = 0x11BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD74u;
        // 0x11bd78: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BD7Cu;
        goto label_11bd7c;
    }
    ctx->pc = 0x11BD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11BD7Cu);
        ctx->pc = 0x11BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD74u;
        // 0x11bd78: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BD74u, 0x11BD7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BD7Cu;
label_11bd7c:
    // 0x11bd7c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11bd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11bd80:
    // 0x11bd80: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x11bd80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_11bd84:
    // 0x11bd84: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x11bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_11bd88:
    // 0x11bd88: 0x40f809  jalr        $v0
label_11bd8c:
    if (ctx->pc == 0x11BD8Cu) {
        ctx->pc = 0x11BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD88u;
        // 0x11bd8c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BD90u;
        goto label_11bd90;
    }
    ctx->pc = 0x11BD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11BD90u);
        ctx->pc = 0x11BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD88u;
        // 0x11bd8c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BD88u, 0x11BD90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BD90u;
label_11bd90:
    // 0x11bd90: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11bd90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11bd94:
    // 0x11bd94: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11bd94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11bd98:
    // 0x11bd98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11bd98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11bd9c:
    // 0x11bd9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11bd9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11bda0:
    // 0x11bda0: 0xc7b90078  lwc1        $f25, 0x78($sp)
    ctx->pc = 0x11bda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_11bda4:
    // 0x11bda4: 0xc7b80070  lwc1        $f24, 0x70($sp)
    ctx->pc = 0x11bda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_11bda8:
    // 0x11bda8: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x11bda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_11bdac:
    // 0x11bdac: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x11bdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_11bdb0:
    // 0x11bdb0: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x11bdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_11bdb4:
    // 0x11bdb4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x11bdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_11bdb8:
    // 0x11bdb8: 0x3e00008  jr          $ra
label_11bdbc:
    if (ctx->pc == 0x11BDBCu) {
        ctx->pc = 0x11BDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BDB8u;
        // 0x11bdbc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BDC0u;
        goto label_fallthrough_0x11bdb8;
    }
    ctx->pc = 0x11BDB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BDB8u;
        // 0x11bdbc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BDB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11bdb8:
    ctx->pc = 0x11BDC0u;
}
