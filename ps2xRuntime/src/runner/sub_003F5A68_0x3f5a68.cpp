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

// Function: sub_003F5A68
// Address: 0x3f5a68 - 0x3f5c38
void sub_003F5A68_0x3f5a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F5A68_0x3f5a68");
#endif

    switch (ctx->pc) {
        case 0x3f5a68u: goto label_3f5a68;
        case 0x3f5a6cu: goto label_3f5a6c;
        case 0x3f5a70u: goto label_3f5a70;
        case 0x3f5a74u: goto label_3f5a74;
        case 0x3f5a78u: goto label_3f5a78;
        case 0x3f5a7cu: goto label_3f5a7c;
        case 0x3f5a80u: goto label_3f5a80;
        case 0x3f5a84u: goto label_3f5a84;
        case 0x3f5a88u: goto label_3f5a88;
        case 0x3f5a8cu: goto label_3f5a8c;
        case 0x3f5a90u: goto label_3f5a90;
        case 0x3f5a94u: goto label_3f5a94;
        case 0x3f5a98u: goto label_3f5a98;
        case 0x3f5a9cu: goto label_3f5a9c;
        case 0x3f5aa0u: goto label_3f5aa0;
        case 0x3f5aa4u: goto label_3f5aa4;
        case 0x3f5aa8u: goto label_3f5aa8;
        case 0x3f5aacu: goto label_3f5aac;
        case 0x3f5ab0u: goto label_3f5ab0;
        case 0x3f5ab4u: goto label_3f5ab4;
        case 0x3f5ab8u: goto label_3f5ab8;
        case 0x3f5abcu: goto label_3f5abc;
        case 0x3f5ac0u: goto label_3f5ac0;
        case 0x3f5ac4u: goto label_3f5ac4;
        case 0x3f5ac8u: goto label_3f5ac8;
        case 0x3f5accu: goto label_3f5acc;
        case 0x3f5ad0u: goto label_3f5ad0;
        case 0x3f5ad4u: goto label_3f5ad4;
        case 0x3f5ad8u: goto label_3f5ad8;
        case 0x3f5adcu: goto label_3f5adc;
        case 0x3f5ae0u: goto label_3f5ae0;
        case 0x3f5ae4u: goto label_3f5ae4;
        case 0x3f5ae8u: goto label_3f5ae8;
        case 0x3f5aecu: goto label_3f5aec;
        case 0x3f5af0u: goto label_3f5af0;
        case 0x3f5af4u: goto label_3f5af4;
        case 0x3f5af8u: goto label_3f5af8;
        case 0x3f5afcu: goto label_3f5afc;
        case 0x3f5b00u: goto label_3f5b00;
        case 0x3f5b04u: goto label_3f5b04;
        case 0x3f5b08u: goto label_3f5b08;
        case 0x3f5b0cu: goto label_3f5b0c;
        case 0x3f5b10u: goto label_3f5b10;
        case 0x3f5b14u: goto label_3f5b14;
        case 0x3f5b18u: goto label_3f5b18;
        case 0x3f5b1cu: goto label_3f5b1c;
        case 0x3f5b20u: goto label_3f5b20;
        case 0x3f5b24u: goto label_3f5b24;
        case 0x3f5b28u: goto label_3f5b28;
        case 0x3f5b2cu: goto label_3f5b2c;
        case 0x3f5b30u: goto label_3f5b30;
        case 0x3f5b34u: goto label_3f5b34;
        case 0x3f5b38u: goto label_3f5b38;
        case 0x3f5b3cu: goto label_3f5b3c;
        case 0x3f5b40u: goto label_3f5b40;
        case 0x3f5b44u: goto label_3f5b44;
        case 0x3f5b48u: goto label_3f5b48;
        case 0x3f5b4cu: goto label_3f5b4c;
        case 0x3f5b50u: goto label_3f5b50;
        case 0x3f5b54u: goto label_3f5b54;
        case 0x3f5b58u: goto label_3f5b58;
        case 0x3f5b5cu: goto label_3f5b5c;
        case 0x3f5b60u: goto label_3f5b60;
        case 0x3f5b64u: goto label_3f5b64;
        case 0x3f5b68u: goto label_3f5b68;
        case 0x3f5b6cu: goto label_3f5b6c;
        case 0x3f5b70u: goto label_3f5b70;
        case 0x3f5b74u: goto label_3f5b74;
        case 0x3f5b78u: goto label_3f5b78;
        case 0x3f5b7cu: goto label_3f5b7c;
        case 0x3f5b80u: goto label_3f5b80;
        case 0x3f5b84u: goto label_3f5b84;
        case 0x3f5b88u: goto label_3f5b88;
        case 0x3f5b8cu: goto label_3f5b8c;
        case 0x3f5b90u: goto label_3f5b90;
        case 0x3f5b94u: goto label_3f5b94;
        case 0x3f5b98u: goto label_3f5b98;
        case 0x3f5b9cu: goto label_3f5b9c;
        case 0x3f5ba0u: goto label_3f5ba0;
        case 0x3f5ba4u: goto label_3f5ba4;
        case 0x3f5ba8u: goto label_3f5ba8;
        case 0x3f5bacu: goto label_3f5bac;
        case 0x3f5bb0u: goto label_3f5bb0;
        case 0x3f5bb4u: goto label_3f5bb4;
        case 0x3f5bb8u: goto label_3f5bb8;
        case 0x3f5bbcu: goto label_3f5bbc;
        case 0x3f5bc0u: goto label_3f5bc0;
        case 0x3f5bc4u: goto label_3f5bc4;
        case 0x3f5bc8u: goto label_3f5bc8;
        case 0x3f5bccu: goto label_3f5bcc;
        case 0x3f5bd0u: goto label_3f5bd0;
        case 0x3f5bd4u: goto label_3f5bd4;
        case 0x3f5bd8u: goto label_3f5bd8;
        case 0x3f5bdcu: goto label_3f5bdc;
        case 0x3f5be0u: goto label_3f5be0;
        case 0x3f5be4u: goto label_3f5be4;
        case 0x3f5be8u: goto label_3f5be8;
        case 0x3f5becu: goto label_3f5bec;
        case 0x3f5bf0u: goto label_3f5bf0;
        case 0x3f5bf4u: goto label_3f5bf4;
        case 0x3f5bf8u: goto label_3f5bf8;
        case 0x3f5bfcu: goto label_3f5bfc;
        case 0x3f5c00u: goto label_3f5c00;
        case 0x3f5c04u: goto label_3f5c04;
        case 0x3f5c08u: goto label_3f5c08;
        case 0x3f5c0cu: goto label_3f5c0c;
        case 0x3f5c10u: goto label_3f5c10;
        case 0x3f5c14u: goto label_3f5c14;
        case 0x3f5c18u: goto label_3f5c18;
        case 0x3f5c1cu: goto label_3f5c1c;
        case 0x3f5c20u: goto label_3f5c20;
        case 0x3f5c24u: goto label_3f5c24;
        case 0x3f5c28u: goto label_3f5c28;
        case 0x3f5c2cu: goto label_3f5c2c;
        case 0x3f5c30u: goto label_3f5c30;
        case 0x3f5c34u: goto label_3f5c34;
        default: break;
    }

    ctx->pc = 0x3f5a68u;

label_3f5a68:
    // 0x3f5a68: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3f5a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3f5a6c:
    // 0x3f5a6c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3f5a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3f5a70:
    // 0x3f5a70: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3f5a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3f5a74:
    // 0x3f5a74: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3f5a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3f5a78:
    // 0x3f5a78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f5a78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f5a7c:
    // 0x3f5a7c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3f5a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3f5a80:
    // 0x3f5a80: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3f5a80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f5a84:
    // 0x3f5a84: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f5a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f5a88:
    // 0x3f5a88: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f5a88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f5a8c:
    // 0x3f5a8c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f5a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f5a90:
    // 0x3f5a90: 0x40f809  jalr        $v0
label_3f5a94:
    if (ctx->pc == 0x3F5A94u) {
        ctx->pc = 0x3F5A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5A90u;
        // 0x3f5a94: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5A98u;
        goto label_3f5a98;
    }
    ctx->pc = 0x3F5A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F5A98u);
        ctx->pc = 0x3F5A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5A90u;
        // 0x3f5a94: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5A90u, 0x3F5A98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F5A98u;
label_3f5a98:
    // 0x3f5a98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f5a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f5a9c:
    // 0x3f5a9c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x3f5a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_3f5aa0:
    // 0x3f5aa0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_3f5aa4:
    if (ctx->pc == 0x3F5AA4u) {
        ctx->pc = 0x3F5AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5AA0u;
        // 0x3f5aa4: 0x92030004  lbu         $v1, 0x4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5AA8u;
        goto label_3f5aa8;
    }
    ctx->pc = 0x3F5AA0u;
    {
        const bool branch_taken_0x3f5aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f5aa0) {
            ctx->pc = 0x3F5AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F5AA0u;
            // 0x3f5aa4: 0x92030004  lbu         $v1, 0x4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F5AB8u;
            goto label_3f5ab8;
        }
    }
    ctx->pc = 0x3F5AA8u;
label_3f5aa8:
    // 0x3f5aa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f5aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f5aac:
    // 0x3f5aac: 0xc0fd254  jal         func_3F4950
label_3f5ab0:
    if (ctx->pc == 0x3F5AB0u) {
        ctx->pc = 0x3F5AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5AACu;
        // 0x3f5ab0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5AB4u;
        goto label_3f5ab4;
    }
    ctx->pc = 0x3F5AACu;
    SET_GPR_U32(ctx, 31, 0x3F5AB4u);
    ctx->pc = 0x3F5AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5AACu;
    // 0x3f5ab0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F4950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F4950u, 0x3F5AACu, 0x3F5AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5AB4u;
label_3f5ab4:
    // 0x3f5ab4: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x3f5ab4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_3f5ab8:
    // 0x3f5ab8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x3f5ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_3f5abc:
    // 0x3f5abc: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
label_3f5ac0:
    if (ctx->pc == 0x3F5AC0u) {
        ctx->pc = 0x3F5AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5ABCu;
        // 0x3f5ac0: 0x92030004  lbu         $v1, 0x4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5AC4u;
        goto label_3f5ac4;
    }
    ctx->pc = 0x3F5ABCu;
    {
        const bool branch_taken_0x3f5abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f5abc) {
            ctx->pc = 0x3F5AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F5ABCu;
            // 0x3f5ac0: 0x92030004  lbu         $v1, 0x4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F5B00u;
            goto label_3f5b00;
        }
    }
    ctx->pc = 0x3F5AC4u;
label_3f5ac4:
    // 0x3f5ac4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3f5ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f5ac8:
    // 0x3f5ac8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x3f5ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f5acc:
    // 0x3f5acc: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x3f5accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f5ad0:
    // 0x3f5ad0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3f5ad0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f5ad4:
    // 0x3f5ad4: 0x0  nop
    ctx->pc = 0x3f5ad4u;
    // NOP
label_3f5ad8:
    // 0x3f5ad8: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_3f5adc:
    if (ctx->pc == 0x3F5ADCu) {
        ctx->pc = 0x3F5ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5AD8u;
        // 0x3f5adc: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5AE0u;
        goto label_3f5ae0;
    }
    ctx->pc = 0x3F5AD8u;
    {
        const bool branch_taken_0x3f5ad8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f5ad8) {
            ctx->pc = 0x3F5ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F5AD8u;
            // 0x3f5adc: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F5AF0u;
            goto label_3f5af0;
        }
    }
    ctx->pc = 0x3F5AE0u;
label_3f5ae0:
    // 0x3f5ae0: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x3f5ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f5ae4:
    // 0x3f5ae4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3f5ae4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3f5ae8:
    // 0x3f5ae8: 0x10000004  b           . + 4 + (0x4 << 2)
label_3f5aec:
    if (ctx->pc == 0x3F5AECu) {
        ctx->pc = 0x3F5AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5AE8u;
        // 0x3f5aec: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5AF0u;
        goto label_3f5af0;
    }
    ctx->pc = 0x3F5AE8u;
    {
        const bool branch_taken_0x3f5ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5AE8u;
        // 0x3f5aec: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5ae8) {
            ctx->pc = 0x3F5AFCu;
            goto label_3f5afc;
        }
    }
    ctx->pc = 0x3F5AF0u;
label_3f5af0:
    // 0x3f5af0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3f5af0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f5af4:
    // 0x3f5af4: 0xc0fd2f4  jal         func_3F4BD0
label_3f5af8:
    if (ctx->pc == 0x3F5AF8u) {
        ctx->pc = 0x3F5AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5AF4u;
        // 0x3f5af8: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5AFCu;
        goto label_3f5afc;
    }
    ctx->pc = 0x3F5AF4u;
    SET_GPR_U32(ctx, 31, 0x3F5AFCu);
    ctx->pc = 0x3F5AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5AF4u;
    // 0x3f5af8: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F4BD0u, 0x3F5AF4u, 0x3F5AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5AFCu;
label_3f5afc:
    // 0x3f5afc: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x3f5afcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_3f5b00:
    // 0x3f5b00: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3f5b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3f5b04:
    // 0x3f5b04: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
label_3f5b08:
    if (ctx->pc == 0x3F5B08u) {
        ctx->pc = 0x3F5B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5B04u;
        // 0x3f5b08: 0x92030004  lbu         $v1, 0x4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5B0Cu;
        goto label_3f5b0c;
    }
    ctx->pc = 0x3F5B04u;
    {
        const bool branch_taken_0x3f5b04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f5b04) {
            ctx->pc = 0x3F5B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F5B04u;
            // 0x3f5b08: 0x92030004  lbu         $v1, 0x4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F5B4Cu;
            goto label_3f5b4c;
        }
    }
    ctx->pc = 0x3F5B0Cu;
label_3f5b0c:
    // 0x3f5b0c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x3f5b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f5b10:
    // 0x3f5b10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3f5b10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f5b14:
    // 0x3f5b14: 0x0  nop
    ctx->pc = 0x3f5b14u;
    // NOP
label_3f5b18:
    // 0x3f5b18: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f5b18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f5b1c:
    // 0x3f5b1c: 0x0  nop
    ctx->pc = 0x3f5b1cu;
    // NOP
label_3f5b20:
    // 0x3f5b20: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_3f5b24:
    if (ctx->pc == 0x3F5B24u) {
        ctx->pc = 0x3F5B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5B20u;
        // 0x3f5b24: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5B28u;
        goto label_3f5b28;
    }
    ctx->pc = 0x3F5B20u;
    {
        const bool branch_taken_0x3f5b20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f5b20) {
            ctx->pc = 0x3F5B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F5B20u;
            // 0x3f5b24: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F5B3Cu;
            goto label_3f5b3c;
        }
    }
    ctx->pc = 0x3F5B28u;
label_3f5b28:
    // 0x3f5b28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3f5b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f5b2c:
    // 0x3f5b2c: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x3f5b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f5b30:
    // 0x3f5b30: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3f5b30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3f5b34:
    // 0x3f5b34: 0x10000004  b           . + 4 + (0x4 << 2)
label_3f5b38:
    if (ctx->pc == 0x3F5B38u) {
        ctx->pc = 0x3F5B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5B34u;
        // 0x3f5b38: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5B3Cu;
        goto label_3f5b3c;
    }
    ctx->pc = 0x3F5B34u;
    {
        const bool branch_taken_0x3f5b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5B34u;
        // 0x3f5b38: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5b34) {
            ctx->pc = 0x3F5B48u;
            goto label_3f5b48;
        }
    }
    ctx->pc = 0x3F5B3Cu;
label_3f5b3c:
    // 0x3f5b3c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3f5b3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f5b40:
    // 0x3f5b40: 0xc0fd2f4  jal         func_3F4BD0
label_3f5b44:
    if (ctx->pc == 0x3F5B44u) {
        ctx->pc = 0x3F5B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5B40u;
        // 0x3f5b44: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5B48u;
        goto label_3f5b48;
    }
    ctx->pc = 0x3F5B40u;
    SET_GPR_U32(ctx, 31, 0x3F5B48u);
    ctx->pc = 0x3F5B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5B40u;
    // 0x3f5b44: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F4BD0u, 0x3F5B40u, 0x3F5B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5B48u;
label_3f5b48:
    // 0x3f5b48: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x3f5b48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_3f5b4c:
    // 0x3f5b4c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3f5b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3f5b50:
    // 0x3f5b50: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
label_3f5b54:
    if (ctx->pc == 0x3F5B54u) {
        ctx->pc = 0x3F5B58u;
        goto label_3f5b58;
    }
    ctx->pc = 0x3F5B50u;
    {
        const bool branch_taken_0x3f5b50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3f5b50) {
            ctx->pc = 0x3F5BFCu;
            goto label_3f5bfc;
        }
    }
    ctx->pc = 0x3F5B58u;
label_3f5b58:
    // 0x3f5b58: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f5b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f5b5c:
    // 0x3f5b5c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x3f5b5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_3f5b60:
    // 0x3f5b60: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x3f5b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_3f5b64:
    // 0x3f5b64: 0x40f809  jalr        $v0
label_3f5b68:
    if (ctx->pc == 0x3F5B68u) {
        ctx->pc = 0x3F5B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5B64u;
        // 0x3f5b68: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5B6Cu;
        goto label_3f5b6c;
    }
    ctx->pc = 0x3F5B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F5B6Cu);
        ctx->pc = 0x3F5B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5B64u;
        // 0x3f5b68: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5B64u, 0x3F5B6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F5B6Cu;
label_3f5b6c:
    // 0x3f5b6c: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_3f5b70:
    if (ctx->pc == 0x3F5B70u) {
        ctx->pc = 0x3F5B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5B6Cu;
        // 0x3f5b70: 0xc60c0008  lwc1        $f12, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5B74u;
        goto label_3f5b74;
    }
    ctx->pc = 0x3F5B6Cu;
    {
        const bool branch_taken_0x3f5b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5b6c) {
            ctx->pc = 0x3F5B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F5B6Cu;
            // 0x3f5b70: 0xc60c0008  lwc1        $f12, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F5BC8u;
            goto label_3f5bc8;
        }
    }
    ctx->pc = 0x3F5B74u;
label_3f5b74:
    // 0x3f5b74: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f5b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f5b78:
    // 0x3f5b78: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x3f5b78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_3f5b7c:
    // 0x3f5b7c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x3f5b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_3f5b80:
    // 0x3f5b80: 0x40f809  jalr        $v0
label_3f5b84:
    if (ctx->pc == 0x3F5B84u) {
        ctx->pc = 0x3F5B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5B80u;
        // 0x3f5b84: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5B88u;
        goto label_3f5b88;
    }
    ctx->pc = 0x3F5B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F5B88u);
        ctx->pc = 0x3F5B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5B80u;
        // 0x3f5b84: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5B80u, 0x3F5B88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F5B88u;
label_3f5b88:
    // 0x3f5b88: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x3f5b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_3f5b8c:
    // 0x3f5b8c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3f5b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3f5b90:
    // 0x3f5b90: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3f5b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_3f5b94:
    // 0x3f5b94: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x3f5b94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_3f5b98:
    // 0x3f5b98: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3f5b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f5b9c:
    // 0x3f5b9c: 0x84a400f0  lh          $a0, 0xF0($a1)
    ctx->pc = 0x3f5b9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 240)));
label_3f5ba0:
    // 0x3f5ba0: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x3f5ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
label_3f5ba4:
    // 0x3f5ba4: 0x40f809  jalr        $v0
label_3f5ba8:
    if (ctx->pc == 0x3F5BA8u) {
        ctx->pc = 0x3F5BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5BA4u;
        // 0x3f5ba8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5BACu;
        goto label_3f5bac;
    }
    ctx->pc = 0x3F5BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F5BACu);
        ctx->pc = 0x3F5BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5BA4u;
        // 0x3f5ba8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5BA4u, 0x3F5BACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F5BACu;
label_3f5bac:
    // 0x3f5bac: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3f5bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3f5bb0:
    // 0x3f5bb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f5bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f5bb4:
    // 0x3f5bb4: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x3f5bb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_3f5bb8:
    // 0x3f5bb8: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x3f5bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3f5bbc:
    // 0x3f5bbc: 0xc0f809  jalr        $a2
label_3f5bc0:
    if (ctx->pc == 0x3F5BC0u) {
        ctx->pc = 0x3F5BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5BBCu;
        // 0x3f5bc0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5BC4u;
        goto label_3f5bc4;
    }
    ctx->pc = 0x3F5BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3F5BC4u);
        ctx->pc = 0x3F5BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5BBCu;
        // 0x3f5bc0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5BBCu, 0x3F5BC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F5BC4u;
label_3f5bc4:
    // 0x3f5bc4: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x3f5bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3f5bc8:
    // 0x3f5bc8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3f5bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3f5bcc:
    // 0x3f5bcc: 0xc136b24  jal         func_4DAC90
label_3f5bd0:
    if (ctx->pc == 0x3F5BD0u) {
        ctx->pc = 0x3F5BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5BCCu;
        // 0x3f5bd0: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5BD4u;
        goto label_3f5bd4;
    }
    ctx->pc = 0x3F5BCCu;
    SET_GPR_U32(ctx, 31, 0x3F5BD4u);
    ctx->pc = 0x3F5BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5BCCu;
    // 0x3f5bd0: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3F5BCCu, 0x3F5BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5BD4u;
label_3f5bd4:
    // 0x3f5bd4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3f5bd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f5bd8:
    // 0x3f5bd8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3f5bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3f5bdc:
    // 0x3f5bdc: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x3f5bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3f5be0:
    // 0x3f5be0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3f5be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f5be4:
    // 0x3f5be4: 0xc136b18  jal         func_4DAC60
label_3f5be8:
    if (ctx->pc == 0x3F5BE8u) {
        ctx->pc = 0x3F5BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5BE4u;
        // 0x3f5be8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5BECu;
        goto label_3f5bec;
    }
    ctx->pc = 0x3F5BE4u;
    SET_GPR_U32(ctx, 31, 0x3F5BECu);
    ctx->pc = 0x3F5BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5BE4u;
    // 0x3f5be8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3F5BE4u, 0x3F5BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5BECu;
label_3f5bec:
    // 0x3f5bec: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3f5becu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f5bf0:
    // 0x3f5bf0: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3f5bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3f5bf4:
    // 0x3f5bf4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3f5bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3f5bf8:
    // 0x3f5bf8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3f5bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3f5bfc:
    // 0x3f5bfc: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_3f5c00:
    if (ctx->pc == 0x3F5C00u) {
        ctx->pc = 0x3F5C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5BFCu;
        // 0x3f5c00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5C04u;
        goto label_3f5c04;
    }
    ctx->pc = 0x3F5BFCu;
    {
        const bool branch_taken_0x3f5bfc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5BFCu;
        // 0x3f5c00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5bfc) {
            ctx->pc = 0x3F5C14u;
            goto label_3f5c14;
        }
    }
    ctx->pc = 0x3F5C04u;
label_3f5c04:
    // 0x3f5c04: 0xc0e858c  jal         func_3A1630
label_3f5c08:
    if (ctx->pc == 0x3F5C08u) {
        ctx->pc = 0x3F5C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5C04u;
        // 0x3f5c08: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5C0Cu;
        goto label_3f5c0c;
    }
    ctx->pc = 0x3F5C04u;
    SET_GPR_U32(ctx, 31, 0x3F5C0Cu);
    ctx->pc = 0x3F5C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5C04u;
    // 0x3f5c08: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F5C04u, 0x3F5C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5C0Cu;
label_3f5c0c:
    // 0x3f5c0c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3f5c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3f5c10:
    // 0x3f5c10: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x3f5c10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
label_3f5c14:
    // 0x3f5c14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f5c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f5c18:
    // 0x3f5c18: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3f5c18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f5c1c:
    // 0x3f5c1c: 0xa2230108  sb          $v1, 0x108($s1)
    ctx->pc = 0x3f5c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 264), (uint8_t)GPR_U32(ctx, 3));
label_3f5c20:
    // 0x3f5c20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f5c20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f5c24:
    // 0x3f5c24: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3f5c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f5c28:
    // 0x3f5c28: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3f5c28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f5c2c:
    // 0x3f5c2c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3f5c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3f5c30:
    // 0x3f5c30: 0x3e00008  jr          $ra
label_3f5c34:
    if (ctx->pc == 0x3F5C34u) {
        ctx->pc = 0x3F5C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5C30u;
        // 0x3f5c34: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5C38u;
        goto label_fallthrough_0x3f5c30;
    }
    ctx->pc = 0x3F5C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F5C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5C30u;
        // 0x3f5c34: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f5c30:
    ctx->pc = 0x3F5C38u;
}
