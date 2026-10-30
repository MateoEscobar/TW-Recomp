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

// Function: sub_001A9B70
// Address: 0x1a9b70 - 0x1a9c48
void sub_001A9B70_0x1a9b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9B70_0x1a9b70");
#endif

    switch (ctx->pc) {
        case 0x1a9b70u: goto label_1a9b70;
        case 0x1a9b74u: goto label_1a9b74;
        case 0x1a9b78u: goto label_1a9b78;
        case 0x1a9b7cu: goto label_1a9b7c;
        case 0x1a9b80u: goto label_1a9b80;
        case 0x1a9b84u: goto label_1a9b84;
        case 0x1a9b88u: goto label_1a9b88;
        case 0x1a9b8cu: goto label_1a9b8c;
        case 0x1a9b90u: goto label_1a9b90;
        case 0x1a9b94u: goto label_1a9b94;
        case 0x1a9b98u: goto label_1a9b98;
        case 0x1a9b9cu: goto label_1a9b9c;
        case 0x1a9ba0u: goto label_1a9ba0;
        case 0x1a9ba4u: goto label_1a9ba4;
        case 0x1a9ba8u: goto label_1a9ba8;
        case 0x1a9bacu: goto label_1a9bac;
        case 0x1a9bb0u: goto label_1a9bb0;
        case 0x1a9bb4u: goto label_1a9bb4;
        case 0x1a9bb8u: goto label_1a9bb8;
        case 0x1a9bbcu: goto label_1a9bbc;
        case 0x1a9bc0u: goto label_1a9bc0;
        case 0x1a9bc4u: goto label_1a9bc4;
        case 0x1a9bc8u: goto label_1a9bc8;
        case 0x1a9bccu: goto label_1a9bcc;
        case 0x1a9bd0u: goto label_1a9bd0;
        case 0x1a9bd4u: goto label_1a9bd4;
        case 0x1a9bd8u: goto label_1a9bd8;
        case 0x1a9bdcu: goto label_1a9bdc;
        case 0x1a9be0u: goto label_1a9be0;
        case 0x1a9be4u: goto label_1a9be4;
        case 0x1a9be8u: goto label_1a9be8;
        case 0x1a9becu: goto label_1a9bec;
        case 0x1a9bf0u: goto label_1a9bf0;
        case 0x1a9bf4u: goto label_1a9bf4;
        case 0x1a9bf8u: goto label_1a9bf8;
        case 0x1a9bfcu: goto label_1a9bfc;
        case 0x1a9c00u: goto label_1a9c00;
        case 0x1a9c04u: goto label_1a9c04;
        case 0x1a9c08u: goto label_1a9c08;
        case 0x1a9c0cu: goto label_1a9c0c;
        case 0x1a9c10u: goto label_1a9c10;
        case 0x1a9c14u: goto label_1a9c14;
        case 0x1a9c18u: goto label_1a9c18;
        case 0x1a9c1cu: goto label_1a9c1c;
        case 0x1a9c20u: goto label_1a9c20;
        case 0x1a9c24u: goto label_1a9c24;
        case 0x1a9c28u: goto label_1a9c28;
        case 0x1a9c2cu: goto label_1a9c2c;
        case 0x1a9c30u: goto label_1a9c30;
        case 0x1a9c34u: goto label_1a9c34;
        case 0x1a9c38u: goto label_1a9c38;
        case 0x1a9c3cu: goto label_1a9c3c;
        case 0x1a9c40u: goto label_1a9c40;
        case 0x1a9c44u: goto label_1a9c44;
        default: break;
    }

    ctx->pc = 0x1a9b70u;

label_1a9b70:
    // 0x1a9b70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a9b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1a9b74:
    // 0x1a9b74: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1a9b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1a9b78:
    // 0x1a9b78: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1a9b78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1a9b7c:
    // 0x1a9b7c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x1a9b7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a9b80:
    // 0x1a9b80: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1a9b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1a9b84:
    // 0x1a9b84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a9b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a9b88:
    // 0x1a9b88: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a9b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a9b8c:
    // 0x1a9b8c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1a9b8cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1a9b90:
    // 0x1a9b90: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1a9b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1a9b94:
    // 0x1a9b94: 0x8cb0000c  lw          $s0, 0xC($a1)
    ctx->pc = 0x1a9b94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1a9b98:
    // 0x1a9b98: 0x8cb10010  lw          $s1, 0x10($a1)
    ctx->pc = 0x1a9b98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_1a9b9c:
    // 0x1a9b9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a9b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a9ba0:
    // 0x1a9ba0: 0x84450018  lh          $a1, 0x18($v0)
    ctx->pc = 0x1a9ba0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1a9ba4:
    // 0x1a9ba4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1a9ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1a9ba8:
    // 0x1a9ba8: 0x60f809  jalr        $v1
label_1a9bac:
    if (ctx->pc == 0x1A9BACu) {
        ctx->pc = 0x1A9BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9BA8u;
        // 0x1a9bac: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9BB0u;
        goto label_1a9bb0;
    }
    ctx->pc = 0x1A9BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A9BB0u);
        ctx->pc = 0x1A9BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9BA8u;
        // 0x1a9bac: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9BA8u, 0x1A9BB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9BB0u;
label_1a9bb0:
    // 0x1a9bb0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1a9bb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a9bb4:
    // 0x1a9bb4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a9bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a9bb8:
    // 0x1a9bb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a9bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9bbc:
    // 0x1a9bbc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1a9bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1a9bc0:
    // 0x1a9bc0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a9bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a9bc4:
    // 0x1a9bc4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1a9bc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1a9bc8:
    // 0x1a9bc8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1a9bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1a9bcc:
    // 0x1a9bcc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a9bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a9bd0:
    // 0x1a9bd0: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1a9bd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1a9bd4:
    // 0x1a9bd4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1a9bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a9bd8:
    // 0x1a9bd8: 0x60f809  jalr        $v1
label_1a9bdc:
    if (ctx->pc == 0x1A9BDCu) {
        ctx->pc = 0x1A9BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9BD8u;
        // 0x1a9bdc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9BE0u;
        goto label_1a9be0;
    }
    ctx->pc = 0x1A9BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A9BE0u);
        ctx->pc = 0x1A9BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9BD8u;
        // 0x1a9bdc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9BD8u, 0x1A9BE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9BE0u;
label_1a9be0:
    // 0x1a9be0: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_1a9be4:
    if (ctx->pc == 0x1A9BE4u) {
        ctx->pc = 0x1A9BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9BE0u;
        // 0x1a9be4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9BE8u;
        goto label_1a9be8;
    }
    ctx->pc = 0x1A9BE0u;
    {
        const bool branch_taken_0x1a9be0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9BE0u;
        // 0x1a9be4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9be0) {
            ctx->pc = 0x1A9C30u;
            goto label_1a9c30;
        }
    }
    ctx->pc = 0x1A9BE8u;
label_1a9be8:
    // 0x1a9be8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a9be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a9bec:
    // 0x1a9bec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a9becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a9bf0:
    // 0x1a9bf0: 0x84450018  lh          $a1, 0x18($v0)
    ctx->pc = 0x1a9bf0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1a9bf4:
    // 0x1a9bf4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1a9bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1a9bf8:
    // 0x1a9bf8: 0x60f809  jalr        $v1
label_1a9bfc:
    if (ctx->pc == 0x1A9BFCu) {
        ctx->pc = 0x1A9BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9BF8u;
        // 0x1a9bfc: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9C00u;
        goto label_1a9c00;
    }
    ctx->pc = 0x1A9BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A9C00u);
        ctx->pc = 0x1A9BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9BF8u;
        // 0x1a9bfc: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9BF8u, 0x1A9C00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9C00u;
label_1a9c00:
    // 0x1a9c00: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1a9c00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a9c04:
    // 0x1a9c04: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1a9c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a9c08:
    // 0x1a9c08: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a9c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a9c0c:
    // 0x1a9c0c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a9c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9c10:
    // 0x1a9c10: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1a9c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1a9c14:
    // 0x1a9c14: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1a9c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1a9c18:
    // 0x1a9c18: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a9c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a9c1c:
    // 0x1a9c1c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1a9c1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1a9c20:
    // 0x1a9c20: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1a9c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a9c24:
    // 0x1a9c24: 0x60f809  jalr        $v1
label_1a9c28:
    if (ctx->pc == 0x1A9C28u) {
        ctx->pc = 0x1A9C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C24u;
        // 0x1a9c28: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9C2Cu;
        goto label_1a9c2c;
    }
    ctx->pc = 0x1A9C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A9C2Cu);
        ctx->pc = 0x1A9C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C24u;
        // 0x1a9c28: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9C24u, 0x1A9C2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9C2Cu;
label_1a9c2c:
    // 0x1a9c2c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1a9c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a9c30:
    // 0x1a9c30: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1a9c30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a9c34:
    // 0x1a9c34: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1a9c34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a9c38:
    // 0x1a9c38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a9c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a9c3c:
    // 0x1a9c3c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1a9c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a9c40:
    // 0x1a9c40: 0x3e00008  jr          $ra
label_1a9c44:
    if (ctx->pc == 0x1A9C44u) {
        ctx->pc = 0x1A9C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C40u;
        // 0x1a9c44: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9C48u;
        goto label_fallthrough_0x1a9c40;
    }
    ctx->pc = 0x1A9C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C40u;
        // 0x1a9c44: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a9c40:
    ctx->pc = 0x1A9C48u;
}
