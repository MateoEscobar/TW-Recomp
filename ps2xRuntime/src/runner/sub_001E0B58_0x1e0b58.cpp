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

// Function: sub_001E0B58
// Address: 0x1e0b58 - 0x1e0c88
void sub_001E0B58_0x1e0b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0B58_0x1e0b58");
#endif

    switch (ctx->pc) {
        case 0x1e0b58u: goto label_1e0b58;
        case 0x1e0b5cu: goto label_1e0b5c;
        case 0x1e0b60u: goto label_1e0b60;
        case 0x1e0b64u: goto label_1e0b64;
        case 0x1e0b68u: goto label_1e0b68;
        case 0x1e0b6cu: goto label_1e0b6c;
        case 0x1e0b70u: goto label_1e0b70;
        case 0x1e0b74u: goto label_1e0b74;
        case 0x1e0b78u: goto label_1e0b78;
        case 0x1e0b7cu: goto label_1e0b7c;
        case 0x1e0b80u: goto label_1e0b80;
        case 0x1e0b84u: goto label_1e0b84;
        case 0x1e0b88u: goto label_1e0b88;
        case 0x1e0b8cu: goto label_1e0b8c;
        case 0x1e0b90u: goto label_1e0b90;
        case 0x1e0b94u: goto label_1e0b94;
        case 0x1e0b98u: goto label_1e0b98;
        case 0x1e0b9cu: goto label_1e0b9c;
        case 0x1e0ba0u: goto label_1e0ba0;
        case 0x1e0ba4u: goto label_1e0ba4;
        case 0x1e0ba8u: goto label_1e0ba8;
        case 0x1e0bacu: goto label_1e0bac;
        case 0x1e0bb0u: goto label_1e0bb0;
        case 0x1e0bb4u: goto label_1e0bb4;
        case 0x1e0bb8u: goto label_1e0bb8;
        case 0x1e0bbcu: goto label_1e0bbc;
        case 0x1e0bc0u: goto label_1e0bc0;
        case 0x1e0bc4u: goto label_1e0bc4;
        case 0x1e0bc8u: goto label_1e0bc8;
        case 0x1e0bccu: goto label_1e0bcc;
        case 0x1e0bd0u: goto label_1e0bd0;
        case 0x1e0bd4u: goto label_1e0bd4;
        case 0x1e0bd8u: goto label_1e0bd8;
        case 0x1e0bdcu: goto label_1e0bdc;
        case 0x1e0be0u: goto label_1e0be0;
        case 0x1e0be4u: goto label_1e0be4;
        case 0x1e0be8u: goto label_1e0be8;
        case 0x1e0becu: goto label_1e0bec;
        case 0x1e0bf0u: goto label_1e0bf0;
        case 0x1e0bf4u: goto label_1e0bf4;
        case 0x1e0bf8u: goto label_1e0bf8;
        case 0x1e0bfcu: goto label_1e0bfc;
        case 0x1e0c00u: goto label_1e0c00;
        case 0x1e0c04u: goto label_1e0c04;
        case 0x1e0c08u: goto label_1e0c08;
        case 0x1e0c0cu: goto label_1e0c0c;
        case 0x1e0c10u: goto label_1e0c10;
        case 0x1e0c14u: goto label_1e0c14;
        case 0x1e0c18u: goto label_1e0c18;
        case 0x1e0c1cu: goto label_1e0c1c;
        case 0x1e0c20u: goto label_1e0c20;
        case 0x1e0c24u: goto label_1e0c24;
        case 0x1e0c28u: goto label_1e0c28;
        case 0x1e0c2cu: goto label_1e0c2c;
        case 0x1e0c30u: goto label_1e0c30;
        case 0x1e0c34u: goto label_1e0c34;
        case 0x1e0c38u: goto label_1e0c38;
        case 0x1e0c3cu: goto label_1e0c3c;
        case 0x1e0c40u: goto label_1e0c40;
        case 0x1e0c44u: goto label_1e0c44;
        case 0x1e0c48u: goto label_1e0c48;
        case 0x1e0c4cu: goto label_1e0c4c;
        case 0x1e0c50u: goto label_1e0c50;
        case 0x1e0c54u: goto label_1e0c54;
        case 0x1e0c58u: goto label_1e0c58;
        case 0x1e0c5cu: goto label_1e0c5c;
        case 0x1e0c60u: goto label_1e0c60;
        case 0x1e0c64u: goto label_1e0c64;
        case 0x1e0c68u: goto label_1e0c68;
        case 0x1e0c6cu: goto label_1e0c6c;
        case 0x1e0c70u: goto label_1e0c70;
        case 0x1e0c74u: goto label_1e0c74;
        case 0x1e0c78u: goto label_1e0c78;
        case 0x1e0c7cu: goto label_1e0c7c;
        case 0x1e0c80u: goto label_1e0c80;
        case 0x1e0c84u: goto label_1e0c84;
        default: break;
    }

    ctx->pc = 0x1e0b58u;

label_1e0b58:
    // 0x1e0b58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e0b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1e0b5c:
    // 0x1e0b5c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e0b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1e0b60:
    // 0x1e0b60: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1e0b60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1e0b64:
    // 0x1e0b64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e0b64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e0b68:
    // 0x1e0b68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e0b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e0b6c:
    // 0x1e0b6c: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x1e0b6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1e0b70:
    // 0x1e0b70: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x1e0b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1e0b74:
    // 0x1e0b74: 0x10a0003d  beqz        $a1, . + 4 + (0x3D << 2)
label_1e0b78:
    if (ctx->pc == 0x1E0B78u) {
        ctx->pc = 0x1E0B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B74u;
        // 0x1e0b78: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0B7Cu;
        goto label_1e0b7c;
    }
    ctx->pc = 0x1E0B74u;
    {
        const bool branch_taken_0x1e0b74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B74u;
        // 0x1e0b78: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b74) {
            ctx->pc = 0x1E0C6Cu;
            goto label_1e0c6c;
        }
    }
    ctx->pc = 0x1E0B7Cu;
label_1e0b7c:
    // 0x1e0b7c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e0b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e0b80:
    // 0x1e0b80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e0b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e0b84:
    // 0x1e0b84: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1e0b84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1e0b88:
    // 0x1e0b88: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x1e0b88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1e0b8c:
    // 0x1e0b8c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x1e0b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1e0b90:
    // 0x1e0b90: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1e0b90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1e0b94:
    // 0x1e0b94: 0x60f809  jalr        $v1
label_1e0b98:
    if (ctx->pc == 0x1E0B98u) {
        ctx->pc = 0x1E0B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B94u;
        // 0x1e0b98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0B9Cu;
        goto label_1e0b9c;
    }
    ctx->pc = 0x1E0B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E0B9Cu);
        ctx->pc = 0x1E0B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B94u;
        // 0x1e0b98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0B94u, 0x1E0B9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0B9Cu;
label_1e0b9c:
    // 0x1e0b9c: 0xe6150050  swc1        $f21, 0x50($s0)
    ctx->pc = 0x1e0b9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_1e0ba0:
    // 0x1e0ba0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e0ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e0ba4:
    // 0x1e0ba4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e0ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e0ba8:
    // 0x1e0ba8: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x1e0ba8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1e0bac:
    // 0x1e0bac: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1e0bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1e0bb0:
    // 0x1e0bb0: 0x60f809  jalr        $v1
label_1e0bb4:
    if (ctx->pc == 0x1E0BB4u) {
        ctx->pc = 0x1E0BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BB0u;
        // 0x1e0bb4: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0BB8u;
        goto label_1e0bb8;
    }
    ctx->pc = 0x1E0BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E0BB8u);
        ctx->pc = 0x1E0BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BB0u;
        // 0x1e0bb4: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0BB0u, 0x1E0BB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0BB8u;
label_1e0bb8:
    // 0x1e0bb8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e0bb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e0bbc:
    // 0x1e0bbc: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x1e0bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e0bc0:
    // 0x1e0bc0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1e0bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e0bc4:
    // 0x1e0bc4: 0x46146036  c.le.s      $f12, $f20
    ctx->pc = 0x1e0bc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e0bc8:
    // 0x1e0bc8: 0x0  nop
    ctx->pc = 0x1e0bc8u;
    // NOP
label_1e0bcc:
    // 0x1e0bcc: 0x0  nop
    ctx->pc = 0x1e0bccu;
    // NOP
label_1e0bd0:
    // 0x1e0bd0: 0x46000b43  div.s       $f13, $f1, $f0
    ctx->pc = 0x1e0bd0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1e0bd4:
    // 0x1e0bd4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_1e0bd8:
    if (ctx->pc == 0x1E0BD8u) {
        ctx->pc = 0x1E0BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BD4u;
        // 0x1e0bd8: 0xe60c0050  swc1        $f12, 0x50($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0BDCu;
        goto label_1e0bdc;
    }
    ctx->pc = 0x1E0BD4u;
    {
        const bool branch_taken_0x1e0bd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e0bd4) {
            ctx->pc = 0x1E0BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0BD4u;
            // 0x1e0bd8: 0xe60c0050  swc1        $f12, 0x50($s0) (Delay Slot)
            { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0BE4u;
            goto label_1e0be4;
        }
    }
    ctx->pc = 0x1E0BDCu;
label_1e0bdc:
    // 0x1e0bdc: 0x4615a029  min.s       $f0, $f20, $f21
    ctx->pc = 0x1e0bdcu;
    ctx->f[0] = std::min(ctx->f[20], ctx->f[21]);
label_1e0be0:
    // 0x1e0be0: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1e0be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_1e0be4:
    // 0x1e0be4: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x1e0be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e0be8:
    // 0x1e0be8: 0x460c6836  c.le.s      $f13, $f12
    ctx->pc = 0x1e0be8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e0bec:
    // 0x1e0bec: 0x0  nop
    ctx->pc = 0x1e0becu;
    // NOP
label_1e0bf0:
    // 0x1e0bf0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1e0bf4:
    if (ctx->pc == 0x1E0BF4u) {
        ctx->pc = 0x1E0BF8u;
        goto label_1e0bf8;
    }
    ctx->pc = 0x1E0BF0u;
    {
        const bool branch_taken_0x1e0bf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e0bf0) {
            ctx->pc = 0x1E0C14u;
            goto label_1e0c14;
        }
    }
    ctx->pc = 0x1E0BF8u;
label_1e0bf8:
    // 0x1e0bf8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e0bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e0bfc:
    // 0x1e0bfc: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1e0bfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1e0c00:
    // 0x1e0c00: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x1e0c00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1e0c04:
    // 0x1e0c04: 0xc0cdd5a  jal         func_337568
label_1e0c08:
    if (ctx->pc == 0x1E0C08u) {
        ctx->pc = 0x1E0C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C04u;
        // 0x1e0c08: 0x46007406  mov.s       $f16, $f14 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0C0Cu;
        goto label_1e0c0c;
    }
    ctx->pc = 0x1E0C04u;
    SET_GPR_U32(ctx, 31, 0x1E0C0Cu);
    ctx->pc = 0x1E0C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0C04u;
    // 0x1e0c08: 0x46007406  mov.s       $f16, $f14 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x337568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337568u, 0x1E0C04u, 0x1E0C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0C0Cu;
label_1e0c0c:
    // 0x1e0c0c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e0c10:
    if (ctx->pc == 0x1E0C10u) {
        ctx->pc = 0x1E0C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C0Cu;
        // 0x1e0c10: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0C14u;
        goto label_1e0c14;
    }
    ctx->pc = 0x1E0C0Cu;
    {
        const bool branch_taken_0x1e0c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C0Cu;
        // 0x1e0c10: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c0c) {
            ctx->pc = 0x1E0C18u;
            goto label_1e0c18;
        }
    }
    ctx->pc = 0x1E0C14u;
label_1e0c14:
    // 0x1e0c14: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e0c14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e0c18:
    // 0x1e0c18: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x1e0c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
label_1e0c1c:
    // 0x1e0c1c: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1e0c1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
label_1e0c20:
    // 0x1e0c20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e0c20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e0c24:
    // 0x1e0c24: 0x0  nop
    ctx->pc = 0x1e0c24u;
    // NOP
label_1e0c28:
    // 0x1e0c28: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1e0c28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e0c2c:
    // 0x1e0c2c: 0x0  nop
    ctx->pc = 0x1e0c2cu;
    // NOP
label_1e0c30:
    // 0x1e0c30: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1e0c34:
    if (ctx->pc == 0x1E0C34u) {
        ctx->pc = 0x1E0C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C30u;
        // 0x1e0c34: 0x8e050060  lw          $a1, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0C38u;
        goto label_1e0c38;
    }
    ctx->pc = 0x1E0C30u;
    {
        const bool branch_taken_0x1e0c30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C30u;
        // 0x1e0c34: 0x8e050060  lw          $a1, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c30) {
            ctx->pc = 0x1E0C40u;
            goto label_1e0c40;
        }
    }
    ctx->pc = 0x1E0C38u;
label_1e0c38:
    // 0x1e0c38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e0c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e0c3c:
    // 0x1e0c3c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e0c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e0c40:
    // 0x1e0c40: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e0c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e0c44:
    // 0x1e0c44: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x1e0c44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1e0c48:
    // 0x1e0c48: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x1e0c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1e0c4c:
    // 0x1e0c4c: 0x60f809  jalr        $v1
label_1e0c50:
    if (ctx->pc == 0x1E0C50u) {
        ctx->pc = 0x1E0C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C4Cu;
        // 0x1e0c50: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0C54u;
        goto label_1e0c54;
    }
    ctx->pc = 0x1E0C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E0C54u);
        ctx->pc = 0x1E0C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C4Cu;
        // 0x1e0c50: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0C4Cu, 0x1E0C54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0C54u;
label_1e0c54:
    // 0x1e0c54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e0c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e0c58:
    // 0x1e0c58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e0c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e0c5c:
    // 0x1e0c5c: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x1e0c5cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1e0c60:
    // 0x1e0c60: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1e0c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1e0c64:
    // 0x1e0c64: 0x60f809  jalr        $v1
label_1e0c68:
    if (ctx->pc == 0x1E0C68u) {
        ctx->pc = 0x1E0C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C64u;
        // 0x1e0c68: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0C6Cu;
        goto label_1e0c6c;
    }
    ctx->pc = 0x1E0C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E0C6Cu);
        ctx->pc = 0x1E0C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C64u;
        // 0x1e0c68: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0C64u, 0x1E0C6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0C6Cu;
label_1e0c6c:
    // 0x1e0c6c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e0c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e0c70:
    // 0x1e0c70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0c74:
    // 0x1e0c74: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x1e0c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1e0c78:
    // 0x1e0c78: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1e0c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e0c7c:
    // 0x1e0c7c: 0x3e00008  jr          $ra
label_1e0c80:
    if (ctx->pc == 0x1E0C80u) {
        ctx->pc = 0x1E0C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C7Cu;
        // 0x1e0c80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0C84u;
        goto label_1e0c84;
    }
    ctx->pc = 0x1E0C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C7Cu;
        // 0x1e0c80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0C84u;
label_1e0c84:
    // 0x1e0c84: 0x0  nop
    ctx->pc = 0x1e0c84u;
    // NOP
    ctx->pc = 0x1e0c88u;
}
