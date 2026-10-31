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

// Function: sub_001A5A08
// Address: 0x1a5a08 - 0x1a5ba8
void sub_001A5A08_0x1a5a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5A08_0x1a5a08");
#endif

    switch (ctx->pc) {
        case 0x1a5a08u: goto label_1a5a08;
        case 0x1a5a0cu: goto label_1a5a0c;
        case 0x1a5a10u: goto label_1a5a10;
        case 0x1a5a14u: goto label_1a5a14;
        case 0x1a5a18u: goto label_1a5a18;
        case 0x1a5a1cu: goto label_1a5a1c;
        case 0x1a5a20u: goto label_1a5a20;
        case 0x1a5a24u: goto label_1a5a24;
        case 0x1a5a28u: goto label_1a5a28;
        case 0x1a5a2cu: goto label_1a5a2c;
        case 0x1a5a30u: goto label_1a5a30;
        case 0x1a5a34u: goto label_1a5a34;
        case 0x1a5a38u: goto label_1a5a38;
        case 0x1a5a3cu: goto label_1a5a3c;
        case 0x1a5a40u: goto label_1a5a40;
        case 0x1a5a44u: goto label_1a5a44;
        case 0x1a5a48u: goto label_1a5a48;
        case 0x1a5a4cu: goto label_1a5a4c;
        case 0x1a5a50u: goto label_1a5a50;
        case 0x1a5a54u: goto label_1a5a54;
        case 0x1a5a58u: goto label_1a5a58;
        case 0x1a5a5cu: goto label_1a5a5c;
        case 0x1a5a60u: goto label_1a5a60;
        case 0x1a5a64u: goto label_1a5a64;
        case 0x1a5a68u: goto label_1a5a68;
        case 0x1a5a6cu: goto label_1a5a6c;
        case 0x1a5a70u: goto label_1a5a70;
        case 0x1a5a74u: goto label_1a5a74;
        case 0x1a5a78u: goto label_1a5a78;
        case 0x1a5a7cu: goto label_1a5a7c;
        case 0x1a5a80u: goto label_1a5a80;
        case 0x1a5a84u: goto label_1a5a84;
        case 0x1a5a88u: goto label_1a5a88;
        case 0x1a5a8cu: goto label_1a5a8c;
        case 0x1a5a90u: goto label_1a5a90;
        case 0x1a5a94u: goto label_1a5a94;
        case 0x1a5a98u: goto label_1a5a98;
        case 0x1a5a9cu: goto label_1a5a9c;
        case 0x1a5aa0u: goto label_1a5aa0;
        case 0x1a5aa4u: goto label_1a5aa4;
        case 0x1a5aa8u: goto label_1a5aa8;
        case 0x1a5aacu: goto label_1a5aac;
        case 0x1a5ab0u: goto label_1a5ab0;
        case 0x1a5ab4u: goto label_1a5ab4;
        case 0x1a5ab8u: goto label_1a5ab8;
        case 0x1a5abcu: goto label_1a5abc;
        case 0x1a5ac0u: goto label_1a5ac0;
        case 0x1a5ac4u: goto label_1a5ac4;
        case 0x1a5ac8u: goto label_1a5ac8;
        case 0x1a5accu: goto label_1a5acc;
        case 0x1a5ad0u: goto label_1a5ad0;
        case 0x1a5ad4u: goto label_1a5ad4;
        case 0x1a5ad8u: goto label_1a5ad8;
        case 0x1a5adcu: goto label_1a5adc;
        case 0x1a5ae0u: goto label_1a5ae0;
        case 0x1a5ae4u: goto label_1a5ae4;
        case 0x1a5ae8u: goto label_1a5ae8;
        case 0x1a5aecu: goto label_1a5aec;
        case 0x1a5af0u: goto label_1a5af0;
        case 0x1a5af4u: goto label_1a5af4;
        case 0x1a5af8u: goto label_1a5af8;
        case 0x1a5afcu: goto label_1a5afc;
        case 0x1a5b00u: goto label_1a5b00;
        case 0x1a5b04u: goto label_1a5b04;
        case 0x1a5b08u: goto label_1a5b08;
        case 0x1a5b0cu: goto label_1a5b0c;
        case 0x1a5b10u: goto label_1a5b10;
        case 0x1a5b14u: goto label_1a5b14;
        case 0x1a5b18u: goto label_1a5b18;
        case 0x1a5b1cu: goto label_1a5b1c;
        case 0x1a5b20u: goto label_1a5b20;
        case 0x1a5b24u: goto label_1a5b24;
        case 0x1a5b28u: goto label_1a5b28;
        case 0x1a5b2cu: goto label_1a5b2c;
        case 0x1a5b30u: goto label_1a5b30;
        case 0x1a5b34u: goto label_1a5b34;
        case 0x1a5b38u: goto label_1a5b38;
        case 0x1a5b3cu: goto label_1a5b3c;
        case 0x1a5b40u: goto label_1a5b40;
        case 0x1a5b44u: goto label_1a5b44;
        case 0x1a5b48u: goto label_1a5b48;
        case 0x1a5b4cu: goto label_1a5b4c;
        case 0x1a5b50u: goto label_1a5b50;
        case 0x1a5b54u: goto label_1a5b54;
        case 0x1a5b58u: goto label_1a5b58;
        case 0x1a5b5cu: goto label_1a5b5c;
        case 0x1a5b60u: goto label_1a5b60;
        case 0x1a5b64u: goto label_1a5b64;
        case 0x1a5b68u: goto label_1a5b68;
        case 0x1a5b6cu: goto label_1a5b6c;
        case 0x1a5b70u: goto label_1a5b70;
        case 0x1a5b74u: goto label_1a5b74;
        case 0x1a5b78u: goto label_1a5b78;
        case 0x1a5b7cu: goto label_1a5b7c;
        case 0x1a5b80u: goto label_1a5b80;
        case 0x1a5b84u: goto label_1a5b84;
        case 0x1a5b88u: goto label_1a5b88;
        case 0x1a5b8cu: goto label_1a5b8c;
        case 0x1a5b90u: goto label_1a5b90;
        case 0x1a5b94u: goto label_1a5b94;
        case 0x1a5b98u: goto label_1a5b98;
        case 0x1a5b9cu: goto label_1a5b9c;
        case 0x1a5ba0u: goto label_1a5ba0;
        case 0x1a5ba4u: goto label_1a5ba4;
        default: break;
    }

    ctx->pc = 0x1a5a08u;

label_1a5a08:
    // 0x1a5a08: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1a5a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1a5a0c:
    // 0x1a5a0c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a5a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a5a10:
    // 0x1a5a10: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1a5a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_1a5a14:
    // 0x1a5a14: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1a5a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_1a5a18:
    // 0x1a5a18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a5a18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5a1c:
    // 0x1a5a1c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1a5a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_1a5a20:
    // 0x1a5a20: 0x26250160  addiu       $a1, $s1, 0x160
    ctx->pc = 0x1a5a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
label_1a5a24:
    // 0x1a5a24: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1a5a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_1a5a28:
    // 0x1a5a28: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1a5a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1a5a2c:
    // 0x1a5a2c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a5a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1a5a30:
    // 0x1a5a30: 0xc460d1e4  lwc1        $f0, -0x2E1C($v1)
    ctx->pc = 0x1a5a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5a34:
    // 0x1a5a34: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x1a5a34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_1a5a38:
    // 0x1a5a38: 0xc6230048  lwc1        $f3, 0x48($s1)
    ctx->pc = 0x1a5a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a5a3c:
    // 0x1a5a3c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1a5a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1a5a40:
    // 0x1a5a40: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1a5a40u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1a5a44:
    // 0x1a5a44: 0xc6240040  lwc1        $f4, 0x40($s1)
    ctx->pc = 0x1a5a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1a5a48:
    // 0x1a5a48: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1a5a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5a4c:
    // 0x1a5a4c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1a5a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a5a50:
    // 0x1a5a50: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1a5a50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_1a5a54:
    // 0x1a5a54: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1a5a54u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1a5a58:
    // 0x1a5a58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a5a58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5a5c:
    // 0x1a5a5c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1a5a5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1a5a60:
    // 0x1a5a60: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1a5a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1a5a64:
    // 0x1a5a64: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1a5a64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1a5a68:
    // 0x1a5a68: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1a5a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1a5a6c:
    // 0x1a5a6c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1a5a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1a5a70:
    // 0x1a5a70: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1a5a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1a5a74:
    // 0x1a5a74: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1a5a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1a5a78:
    // 0x1a5a78: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1a5a7c:
    if (ctx->pc == 0x1A5A7Cu) {
        ctx->pc = 0x1A5A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A78u;
        // 0x1a5a7c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5A80u;
        goto label_1a5a80;
    }
    ctx->pc = 0x1A5A78u;
    {
        const bool branch_taken_0x1a5a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A78u;
        // 0x1a5a7c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a78) {
            ctx->pc = 0x1A5AACu;
            goto label_1a5aac;
        }
    }
    ctx->pc = 0x1A5A80u;
label_1a5a80:
    // 0x1a5a80: 0xc06e4ea  jal         func_1B93A8
label_1a5a84:
    if (ctx->pc == 0x1A5A84u) {
        ctx->pc = 0x1A5A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A80u;
        // 0x1a5a84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5A88u;
        goto label_1a5a88;
    }
    ctx->pc = 0x1A5A80u;
    SET_GPR_U32(ctx, 31, 0x1A5A88u);
    ctx->pc = 0x1A5A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5A80u;
    // 0x1a5a84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B93A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B93A8u, 0x1A5A80u, 0x1A5A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5A88u;
label_1a5a88:
    // 0x1a5a88: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x1a5a88u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_1a5a8c:
    // 0x1a5a8c: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x1a5a8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a5a90:
    // 0x1a5a90: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a5a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a5a94:
    // 0x1a5a94: 0xc441d1e0  lwc1        $f1, -0x2E20($v0)
    ctx->pc = 0x1a5a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5a98:
    // 0x1a5a98: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x1a5a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_1a5a9c:
    // 0x1a5a9c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1a5a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5aa0:
    // 0x1a5aa0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a5aa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a5aa4:
    // 0x1a5aa4: 0x10000036  b           . + 4 + (0x36 << 2)
label_1a5aa8:
    if (ctx->pc == 0x1A5AA8u) {
        ctx->pc = 0x1A5AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5AA4u;
        // 0x1a5aa8: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5AACu;
        goto label_1a5aac;
    }
    ctx->pc = 0x1A5AA4u;
    {
        const bool branch_taken_0x1a5aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5AA4u;
        // 0x1a5aa8: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5aa4) {
            ctx->pc = 0x1A5B80u;
            goto label_1a5b80;
        }
    }
    ctx->pc = 0x1A5AACu;
label_1a5aac:
    // 0x1a5aac: 0x8e240350  lw          $a0, 0x350($s1)
    ctx->pc = 0x1a5aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 848)));
label_1a5ab0:
    // 0x1a5ab0: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x1a5ab0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_1a5ab4:
    // 0x1a5ab4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a5ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a5ab8:
    // 0x1a5ab8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a5ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a5abc:
    // 0x1a5abc: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1a5abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_1a5ac0:
    // 0x1a5ac0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a5ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a5ac4:
    // 0x1a5ac4: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
label_1a5ac8:
    if (ctx->pc == 0x1A5AC8u) {
        ctx->pc = 0x1A5AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5AC4u;
        // 0x1a5ac8: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5ACCu;
        goto label_1a5acc;
    }
    ctx->pc = 0x1A5AC4u;
    {
        const bool branch_taken_0x1a5ac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A5AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5AC4u;
        // 0x1a5ac8: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ac4) {
            ctx->pc = 0x1A5B80u;
            goto label_1a5b80;
        }
    }
    ctx->pc = 0x1A5ACCu;
label_1a5acc:
    // 0x1a5acc: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1a5accu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1a5ad0:
    // 0x1a5ad0: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1a5ad0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1a5ad4:
    // 0x1a5ad4: 0x0  nop
    ctx->pc = 0x1a5ad4u;
    // NOP
label_1a5ad8:
    // 0x1a5ad8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1a5ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1a5adc:
    // 0x1a5adc: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x1a5adcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1a5ae0:
    // 0x1a5ae0: 0x8e0201f0  lw          $v0, 0x1F0($s0)
    ctx->pc = 0x1a5ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
label_1a5ae4:
    // 0x1a5ae4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a5ae8:
    if (ctx->pc == 0x1A5AE8u) {
        ctx->pc = 0x1A5AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5AE4u;
        // 0x1a5ae8: 0xc66cd1dc  lwc1        $f12, -0x2E24($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5AECu;
        goto label_1a5aec;
    }
    ctx->pc = 0x1A5AE4u;
    {
        const bool branch_taken_0x1a5ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5AE4u;
        // 0x1a5ae8: 0xc66cd1dc  lwc1        $f12, -0x2E24($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ae4) {
            ctx->pc = 0x1A5AF4u;
            goto label_1a5af4;
        }
    }
    ctx->pc = 0x1A5AECu;
label_1a5aec:
    // 0x1a5aec: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1a5af0:
    if (ctx->pc == 0x1A5AF0u) {
        ctx->pc = 0x1A5AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5AECu;
        // 0x1a5af0: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5AF4u;
        goto label_1a5af4;
    }
    ctx->pc = 0x1A5AECu;
    {
        const bool branch_taken_0x1a5aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5AECu;
        // 0x1a5af0: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5aec) {
            ctx->pc = 0x1A5B60u;
            goto label_1a5b60;
        }
    }
    ctx->pc = 0x1A5AF4u;
label_1a5af4:
    // 0x1a5af4: 0xc06e4a2  jal         func_1B9288
label_1a5af8:
    if (ctx->pc == 0x1A5AF8u) {
        ctx->pc = 0x1A5AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5AF4u;
        // 0x1a5af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5AFCu;
        goto label_1a5afc;
    }
    ctx->pc = 0x1A5AF4u;
    SET_GPR_U32(ctx, 31, 0x1A5AFCu);
    ctx->pc = 0x1A5AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5AF4u;
    // 0x1a5af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9288u, 0x1A5AF4u, 0x1A5AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5AFCu;
label_1a5afc:
    // 0x1a5afc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a5afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5b00:
    // 0x1a5b00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a5b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a5b04:
    // 0x1a5b04: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1a5b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_1a5b08:
    // 0x1a5b08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a5b08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5b0c:
    // 0x1a5b0c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1a5b0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1a5b10:
    // 0x1a5b10: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1a5b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a5b14:
    // 0x1a5b14: 0x60f809  jalr        $v1
label_1a5b18:
    if (ctx->pc == 0x1A5B18u) {
        ctx->pc = 0x1A5B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B14u;
        // 0x1a5b18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5B1Cu;
        goto label_1a5b1c;
    }
    ctx->pc = 0x1A5B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A5B1Cu);
        ctx->pc = 0x1A5B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B14u;
        // 0x1a5b18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5B14u, 0x1A5B1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5B1Cu;
label_1a5b1c:
    // 0x1a5b1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a5b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5b20:
    // 0x1a5b20: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1a5b20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1a5b24:
    // 0x1a5b24: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1a5b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1a5b28:
    // 0x1a5b28: 0x60f809  jalr        $v1
label_1a5b2c:
    if (ctx->pc == 0x1A5B2Cu) {
        ctx->pc = 0x1A5B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B28u;
        // 0x1a5b2c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5B30u;
        goto label_1a5b30;
    }
    ctx->pc = 0x1A5B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A5B30u);
        ctx->pc = 0x1A5B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B28u;
        // 0x1a5b2c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5B28u, 0x1A5B30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5B30u;
label_1a5b30:
    // 0x1a5b30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a5b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a5b34:
    // 0x1a5b34: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1a5b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a5b38:
    // 0x1a5b38: 0xc06e4ea  jal         func_1B93A8
label_1a5b3c:
    if (ctx->pc == 0x1A5B3Cu) {
        ctx->pc = 0x1A5B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B38u;
        // 0x1a5b3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5B40u;
        goto label_1a5b40;
    }
    ctx->pc = 0x1A5B38u;
    SET_GPR_U32(ctx, 31, 0x1A5B40u);
    ctx->pc = 0x1A5B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5B38u;
    // 0x1a5b3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B93A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B93A8u, 0x1A5B38u, 0x1A5B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5B40u;
label_1a5b40:
    // 0x1a5b40: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1a5b40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a5b44:
    // 0x1a5b44: 0xc641d1e0  lwc1        $f1, -0x2E20($s2)
    ctx->pc = 0x1a5b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294955488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5b48:
    // 0x1a5b48: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1a5b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1a5b4c:
    // 0x1a5b4c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1a5b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1a5b50:
    // 0x1a5b50: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1a5b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5b54:
    // 0x1a5b54: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x1a5b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_1a5b58:
    // 0x1a5b58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a5b58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a5b5c:
    // 0x1a5b5c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1a5b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1a5b60:
    // 0x1a5b60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a5b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a5b64:
    // 0x1a5b64: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x1a5b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_1a5b68:
    // 0x1a5b68: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1a5b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1a5b6c:
    // 0x1a5b6c: 0x8e220350  lw          $v0, 0x350($s1)
    ctx->pc = 0x1a5b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 848)));
label_1a5b70:
    // 0x1a5b70: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a5b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1a5b74:
    // 0x1a5b74: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1a5b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a5b78:
    // 0x1a5b78: 0x1483ffd7  bne         $a0, $v1, . + 4 + (-0x29 << 2)
label_1a5b7c:
    if (ctx->pc == 0x1A5B7Cu) {
        ctx->pc = 0x1A5B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B78u;
        // 0x1a5b7c: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5B80u;
        goto label_1a5b80;
    }
    ctx->pc = 0x1A5B78u;
    {
        const bool branch_taken_0x1a5b78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A5B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B78u;
        // 0x1a5b7c: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b78) {
            ctx->pc = 0x1A5AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5ad8;
        }
    }
    ctx->pc = 0x1A5B80u;
label_1a5b80:
    // 0x1a5b80: 0xae80d1d8  sw          $zero, -0x2E28($s4)
    ctx->pc = 0x1a5b80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294955480), GPR_U32(ctx, 0));
label_1a5b84:
    // 0x1a5b84: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1a5b84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1a5b88:
    // 0x1a5b88: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a5b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5b8c:
    // 0x1a5b8c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1a5b8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1a5b90:
    // 0x1a5b90: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1a5b90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1a5b94:
    // 0x1a5b94: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1a5b94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1a5b98:
    // 0x1a5b98: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1a5b98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a5b9c:
    // 0x1a5b9c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a5b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a5ba0:
    // 0x1a5ba0: 0x3e00008  jr          $ra
label_1a5ba4:
    if (ctx->pc == 0x1A5BA4u) {
        ctx->pc = 0x1A5BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BA0u;
        // 0x1a5ba4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5BA8u;
        goto label_fallthrough_0x1a5ba0;
    }
    ctx->pc = 0x1A5BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BA0u;
        // 0x1a5ba4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a5ba0:
    ctx->pc = 0x1A5BA8u;
}
