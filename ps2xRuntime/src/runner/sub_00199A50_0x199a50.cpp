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

// Function: sub_00199A50
// Address: 0x199a50 - 0x199ba8
void sub_00199A50_0x199a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199A50_0x199a50");
#endif

    switch (ctx->pc) {
        case 0x199a50u: goto label_199a50;
        case 0x199a54u: goto label_199a54;
        case 0x199a58u: goto label_199a58;
        case 0x199a5cu: goto label_199a5c;
        case 0x199a60u: goto label_199a60;
        case 0x199a64u: goto label_199a64;
        case 0x199a68u: goto label_199a68;
        case 0x199a6cu: goto label_199a6c;
        case 0x199a70u: goto label_199a70;
        case 0x199a74u: goto label_199a74;
        case 0x199a78u: goto label_199a78;
        case 0x199a7cu: goto label_199a7c;
        case 0x199a80u: goto label_199a80;
        case 0x199a84u: goto label_199a84;
        case 0x199a88u: goto label_199a88;
        case 0x199a8cu: goto label_199a8c;
        case 0x199a90u: goto label_199a90;
        case 0x199a94u: goto label_199a94;
        case 0x199a98u: goto label_199a98;
        case 0x199a9cu: goto label_199a9c;
        case 0x199aa0u: goto label_199aa0;
        case 0x199aa4u: goto label_199aa4;
        case 0x199aa8u: goto label_199aa8;
        case 0x199aacu: goto label_199aac;
        case 0x199ab0u: goto label_199ab0;
        case 0x199ab4u: goto label_199ab4;
        case 0x199ab8u: goto label_199ab8;
        case 0x199abcu: goto label_199abc;
        case 0x199ac0u: goto label_199ac0;
        case 0x199ac4u: goto label_199ac4;
        case 0x199ac8u: goto label_199ac8;
        case 0x199accu: goto label_199acc;
        case 0x199ad0u: goto label_199ad0;
        case 0x199ad4u: goto label_199ad4;
        case 0x199ad8u: goto label_199ad8;
        case 0x199adcu: goto label_199adc;
        case 0x199ae0u: goto label_199ae0;
        case 0x199ae4u: goto label_199ae4;
        case 0x199ae8u: goto label_199ae8;
        case 0x199aecu: goto label_199aec;
        case 0x199af0u: goto label_199af0;
        case 0x199af4u: goto label_199af4;
        case 0x199af8u: goto label_199af8;
        case 0x199afcu: goto label_199afc;
        case 0x199b00u: goto label_199b00;
        case 0x199b04u: goto label_199b04;
        case 0x199b08u: goto label_199b08;
        case 0x199b0cu: goto label_199b0c;
        case 0x199b10u: goto label_199b10;
        case 0x199b14u: goto label_199b14;
        case 0x199b18u: goto label_199b18;
        case 0x199b1cu: goto label_199b1c;
        case 0x199b20u: goto label_199b20;
        case 0x199b24u: goto label_199b24;
        case 0x199b28u: goto label_199b28;
        case 0x199b2cu: goto label_199b2c;
        case 0x199b30u: goto label_199b30;
        case 0x199b34u: goto label_199b34;
        case 0x199b38u: goto label_199b38;
        case 0x199b3cu: goto label_199b3c;
        case 0x199b40u: goto label_199b40;
        case 0x199b44u: goto label_199b44;
        case 0x199b48u: goto label_199b48;
        case 0x199b4cu: goto label_199b4c;
        case 0x199b50u: goto label_199b50;
        case 0x199b54u: goto label_199b54;
        case 0x199b58u: goto label_199b58;
        case 0x199b5cu: goto label_199b5c;
        case 0x199b60u: goto label_199b60;
        case 0x199b64u: goto label_199b64;
        case 0x199b68u: goto label_199b68;
        case 0x199b6cu: goto label_199b6c;
        case 0x199b70u: goto label_199b70;
        case 0x199b74u: goto label_199b74;
        case 0x199b78u: goto label_199b78;
        case 0x199b7cu: goto label_199b7c;
        case 0x199b80u: goto label_199b80;
        case 0x199b84u: goto label_199b84;
        case 0x199b88u: goto label_199b88;
        case 0x199b8cu: goto label_199b8c;
        case 0x199b90u: goto label_199b90;
        case 0x199b94u: goto label_199b94;
        case 0x199b98u: goto label_199b98;
        case 0x199b9cu: goto label_199b9c;
        case 0x199ba0u: goto label_199ba0;
        case 0x199ba4u: goto label_199ba4;
        default: break;
    }

    ctx->pc = 0x199a50u;

label_199a50:
    // 0x199a50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x199a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_199a54:
    // 0x199a54: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x199a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_199a58:
    // 0x199a58: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x199a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_199a5c:
    // 0x199a5c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x199a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_199a60:
    // 0x199a60: 0xc0665f6  jal         func_1997D8
label_199a64:
    if (ctx->pc == 0x199A64u) {
        ctx->pc = 0x199A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A60u;
        // 0x199a64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199A68u;
        goto label_199a68;
    }
    ctx->pc = 0x199A60u;
    SET_GPR_U32(ctx, 31, 0x199A68u);
    ctx->pc = 0x199A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199A60u;
    // 0x199a64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1997D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1997D8u, 0x199A60u, 0x199A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199A68u;
label_199a68:
    // 0x199a68: 0xc066596  jal         func_199658
label_199a6c:
    if (ctx->pc == 0x199A6Cu) {
        ctx->pc = 0x199A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A68u;
        // 0x199a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199A70u;
        goto label_199a70;
    }
    ctx->pc = 0x199A68u;
    SET_GPR_U32(ctx, 31, 0x199A70u);
    ctx->pc = 0x199A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199A68u;
    // 0x199a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199658u, 0x199A68u, 0x199A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199A70u;
label_199a70:
    // 0x199a70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_199a74:
    // 0x199a74: 0xc066efe  jal         func_19BBF8
label_199a78:
    if (ctx->pc == 0x199A78u) {
        ctx->pc = 0x199A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A74u;
        // 0x199a78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199A7Cu;
        goto label_199a7c;
    }
    ctx->pc = 0x199A74u;
    SET_GPR_U32(ctx, 31, 0x199A7Cu);
    ctx->pc = 0x199A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199A74u;
    // 0x199a78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BBF8u, 0x199A74u, 0x199A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199A7Cu;
label_199a7c:
    // 0x199a7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x199a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_199a80:
    // 0x199a80: 0xc60c00ec  lwc1        $f12, 0xEC($s0)
    ctx->pc = 0x199a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_199a84:
    // 0x199a84: 0xc60d00f0  lwc1        $f13, 0xF0($s0)
    ctx->pc = 0x199a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_199a88:
    // 0x199a88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_199a8c:
    // 0x199a8c: 0xc068848  jal         func_1A2120
label_199a90:
    if (ctx->pc == 0x199A90u) {
        ctx->pc = 0x199A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A8Cu;
        // 0x199a90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199A94u;
        goto label_199a94;
    }
    ctx->pc = 0x199A8Cu;
    SET_GPR_U32(ctx, 31, 0x199A94u);
    ctx->pc = 0x199A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199A8Cu;
    // 0x199a90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x199A8Cu, 0x199A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199A94u;
label_199a94:
    // 0x199a94: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x199a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_199a98:
    // 0x199a98: 0x260500a0  addiu       $a1, $s0, 0xA0
    ctx->pc = 0x199a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_199a9c:
    // 0x199a9c: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x199a9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_199aa0:
    // 0x199aa0: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x199aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_199aa4:
    // 0x199aa4: 0x60f809  jalr        $v1
label_199aa8:
    if (ctx->pc == 0x199AA8u) {
        ctx->pc = 0x199AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AA4u;
        // 0x199aa8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199AACu;
        goto label_199aac;
    }
    ctx->pc = 0x199AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x199AACu);
        ctx->pc = 0x199AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AA4u;
        // 0x199aa8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199AA4u, 0x199AACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199AACu;
label_199aac:
    // 0x199aac: 0xc6030114  lwc1        $f3, 0x114($s0)
    ctx->pc = 0x199aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_199ab0:
    // 0x199ab0: 0xc60200e4  lwc1        $f2, 0xE4($s0)
    ctx->pc = 0x199ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_199ab4:
    // 0x199ab4: 0xc6010118  lwc1        $f1, 0x118($s0)
    ctx->pc = 0x199ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199ab8:
    // 0x199ab8: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x199ab8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_199abc:
    // 0x199abc: 0xc60000e8  lwc1        $f0, 0xE8($s0)
    ctx->pc = 0x199abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_199ac0:
    // 0x199ac0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x199ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_199ac4:
    // 0x199ac4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x199ac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_199ac8:
    // 0x199ac8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x199ac8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_199acc:
    // 0x199acc: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x199accu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_199ad0:
    // 0x199ad0: 0xe6030114  swc1        $f3, 0x114($s0)
    ctx->pc = 0x199ad0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
label_199ad4:
    // 0x199ad4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_199ad8:
    if (ctx->pc == 0x199AD8u) {
        ctx->pc = 0x199AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AD4u;
        // 0x199ad8: 0xe6010118  swc1        $f1, 0x118($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x199ADCu;
        goto label_199adc;
    }
    ctx->pc = 0x199AD4u;
    {
        const bool branch_taken_0x199ad4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x199AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AD4u;
        // 0x199ad8: 0xe6010118  swc1        $f1, 0x118($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ad4) {
            ctx->pc = 0x199AE4u;
            goto label_199ae4;
        }
    }
    ctx->pc = 0x199ADCu;
label_199adc:
    // 0x199adc: 0x46041801  sub.s       $f0, $f3, $f4
    ctx->pc = 0x199adcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_199ae0:
    // 0x199ae0: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x199ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
label_199ae4:
    // 0x199ae4: 0xc6000118  lwc1        $f0, 0x118($s0)
    ctx->pc = 0x199ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_199ae8:
    // 0x199ae8: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x199ae8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_199aec:
    // 0x199aec: 0x0  nop
    ctx->pc = 0x199aecu;
    // NOP
label_199af0:
    // 0x199af0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_199af4:
    if (ctx->pc == 0x199AF4u) {
        ctx->pc = 0x199AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AF0u;
        // 0x199af4: 0xc6000114  lwc1        $f0, 0x114($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x199AF8u;
        goto label_199af8;
    }
    ctx->pc = 0x199AF0u;
    {
        const bool branch_taken_0x199af0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x199af0) {
            ctx->pc = 0x199AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199AF0u;
            // 0x199af4: 0xc6000114  lwc1        $f0, 0x114($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x199B04u;
            goto label_199b04;
        }
    }
    ctx->pc = 0x199AF8u;
label_199af8:
    // 0x199af8: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x199af8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_199afc:
    // 0x199afc: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x199afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
label_199b00:
    // 0x199b00: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x199b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_199b04:
    // 0x199b04: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x199b04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_199b08:
    // 0x199b08: 0x0  nop
    ctx->pc = 0x199b08u;
    // NOP
label_199b0c:
    // 0x199b0c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x199b0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_199b10:
    // 0x199b10: 0x0  nop
    ctx->pc = 0x199b10u;
    // NOP
label_199b14:
    // 0x199b14: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_199b18:
    if (ctx->pc == 0x199B18u) {
        ctx->pc = 0x199B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B14u;
        // 0x199b18: 0xc6000118  lwc1        $f0, 0x118($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B1Cu;
        goto label_199b1c;
    }
    ctx->pc = 0x199B14u;
    {
        const bool branch_taken_0x199b14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x199b14) {
            ctx->pc = 0x199B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199B14u;
            // 0x199b18: 0xc6000118  lwc1        $f0, 0x118($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x199B28u;
            goto label_199b28;
        }
    }
    ctx->pc = 0x199B1Cu;
label_199b1c:
    // 0x199b1c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x199b1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_199b20:
    // 0x199b20: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x199b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
label_199b24:
    // 0x199b24: 0xc6000118  lwc1        $f0, 0x118($s0)
    ctx->pc = 0x199b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_199b28:
    // 0x199b28: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x199b28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_199b2c:
    // 0x199b2c: 0x0  nop
    ctx->pc = 0x199b2cu;
    // NOP
label_199b30:
    // 0x199b30: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_199b34:
    if (ctx->pc == 0x199B34u) {
        ctx->pc = 0x199B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B30u;
        // 0x199b34: 0xc6000118  lwc1        $f0, 0x118($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B38u;
        goto label_199b38;
    }
    ctx->pc = 0x199B30u;
    {
        const bool branch_taken_0x199b30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x199b30) {
            ctx->pc = 0x199B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199B30u;
            // 0x199b34: 0xc6000118  lwc1        $f0, 0x118($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x199B44u;
            goto label_199b44;
        }
    }
    ctx->pc = 0x199B38u;
label_199b38:
    // 0x199b38: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x199b38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_199b3c:
    // 0x199b3c: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x199b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
label_199b40:
    // 0x199b40: 0xc6000118  lwc1        $f0, 0x118($s0)
    ctx->pc = 0x199b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_199b44:
    // 0x199b44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_199b48:
    // 0x199b48: 0xc6010114  lwc1        $f1, 0x114($s0)
    ctx->pc = 0x199b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199b4c:
    // 0x199b4c: 0x460020c1  sub.s       $f3, $f4, $f0
    ctx->pc = 0x199b4cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_199b50:
    // 0x199b50: 0x46040880  add.s       $f2, $f1, $f4
    ctx->pc = 0x199b50u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_199b54:
    // 0x199b54: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x199b54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_199b58:
    // 0x199b58: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x199b58u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_199b5c:
    // 0x199b5c: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x199b5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_199b60:
    // 0x199b60: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x199b60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_199b64:
    // 0x199b64: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x199b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_199b68:
    // 0x199b68: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x199b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_199b6c:
    // 0x199b6c: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x199b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_199b70:
    // 0x199b70: 0x6ba3001f  ldl         $v1, 0x1F($sp)
    ctx->pc = 0x199b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_199b74:
    // 0x199b74: 0x6fa30018  ldr         $v1, 0x18($sp)
    ctx->pc = 0x199b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_199b78:
    // 0x199b78: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x199b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_199b7c:
    // 0x199b7c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x199b7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_199b80:
    // 0x199b80: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x199b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_199b84:
    // 0x199b84: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x199b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_199b88:
    // 0x199b88: 0xc068864  jal         func_1A2190
label_199b8c:
    if (ctx->pc == 0x199B8Cu) {
        ctx->pc = 0x199B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B88u;
        // 0x199b8c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B90u;
        goto label_199b90;
    }
    ctx->pc = 0x199B88u;
    SET_GPR_U32(ctx, 31, 0x199B90u);
    ctx->pc = 0x199B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199B88u;
    // 0x199b8c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2190u, 0x199B88u, 0x199B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199B90u;
label_199b90:
    // 0x199b90: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x199b90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_199b94:
    // 0x199b94: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x199b94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_199b98:
    // 0x199b98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x199b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_199b9c:
    // 0x199b9c: 0x3e00008  jr          $ra
label_199ba0:
    if (ctx->pc == 0x199BA0u) {
        ctx->pc = 0x199BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B9Cu;
        // 0x199ba0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199BA4u;
        goto label_199ba4;
    }
    ctx->pc = 0x199B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B9Cu;
        // 0x199ba0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199BA4u;
label_199ba4:
    // 0x199ba4: 0x0  nop
    ctx->pc = 0x199ba4u;
    // NOP
    ctx->pc = 0x199ba8u;
}
