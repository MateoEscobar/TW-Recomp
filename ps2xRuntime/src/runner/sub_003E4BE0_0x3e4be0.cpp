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

// Function: sub_003E4BE0
// Address: 0x3e4be0 - 0x3e4cb0
void sub_003E4BE0_0x3e4be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E4BE0_0x3e4be0");
#endif

    switch (ctx->pc) {
        case 0x3e4be0u: goto label_3e4be0;
        case 0x3e4be4u: goto label_3e4be4;
        case 0x3e4be8u: goto label_3e4be8;
        case 0x3e4becu: goto label_3e4bec;
        case 0x3e4bf0u: goto label_3e4bf0;
        case 0x3e4bf4u: goto label_3e4bf4;
        case 0x3e4bf8u: goto label_3e4bf8;
        case 0x3e4bfcu: goto label_3e4bfc;
        case 0x3e4c00u: goto label_3e4c00;
        case 0x3e4c04u: goto label_3e4c04;
        case 0x3e4c08u: goto label_3e4c08;
        case 0x3e4c0cu: goto label_3e4c0c;
        case 0x3e4c10u: goto label_3e4c10;
        case 0x3e4c14u: goto label_3e4c14;
        case 0x3e4c18u: goto label_3e4c18;
        case 0x3e4c1cu: goto label_3e4c1c;
        case 0x3e4c20u: goto label_3e4c20;
        case 0x3e4c24u: goto label_3e4c24;
        case 0x3e4c28u: goto label_3e4c28;
        case 0x3e4c2cu: goto label_3e4c2c;
        case 0x3e4c30u: goto label_3e4c30;
        case 0x3e4c34u: goto label_3e4c34;
        case 0x3e4c38u: goto label_3e4c38;
        case 0x3e4c3cu: goto label_3e4c3c;
        case 0x3e4c40u: goto label_3e4c40;
        case 0x3e4c44u: goto label_3e4c44;
        case 0x3e4c48u: goto label_3e4c48;
        case 0x3e4c4cu: goto label_3e4c4c;
        case 0x3e4c50u: goto label_3e4c50;
        case 0x3e4c54u: goto label_3e4c54;
        case 0x3e4c58u: goto label_3e4c58;
        case 0x3e4c5cu: goto label_3e4c5c;
        case 0x3e4c60u: goto label_3e4c60;
        case 0x3e4c64u: goto label_3e4c64;
        case 0x3e4c68u: goto label_3e4c68;
        case 0x3e4c6cu: goto label_3e4c6c;
        case 0x3e4c70u: goto label_3e4c70;
        case 0x3e4c74u: goto label_3e4c74;
        case 0x3e4c78u: goto label_3e4c78;
        case 0x3e4c7cu: goto label_3e4c7c;
        case 0x3e4c80u: goto label_3e4c80;
        case 0x3e4c84u: goto label_3e4c84;
        case 0x3e4c88u: goto label_3e4c88;
        case 0x3e4c8cu: goto label_3e4c8c;
        case 0x3e4c90u: goto label_3e4c90;
        case 0x3e4c94u: goto label_3e4c94;
        case 0x3e4c98u: goto label_3e4c98;
        case 0x3e4c9cu: goto label_3e4c9c;
        case 0x3e4ca0u: goto label_3e4ca0;
        case 0x3e4ca4u: goto label_3e4ca4;
        case 0x3e4ca8u: goto label_3e4ca8;
        case 0x3e4cacu: goto label_3e4cac;
        default: break;
    }

    ctx->pc = 0x3e4be0u;

label_3e4be0:
    // 0x3e4be0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3e4be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3e4be4:
    // 0x3e4be4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3e4be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3e4be8:
    // 0x3e4be8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3e4be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3e4bec:
    // 0x3e4bec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e4becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e4bf0:
    // 0x3e4bf0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3e4bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3e4bf4:
    // 0x3e4bf4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e4bf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e4bf8:
    // 0x3e4bf8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3e4bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3e4bfc:
    // 0x3e4bfc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3e4bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3e4c00:
    // 0x3e4c00: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x3e4c00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3e4c04:
    // 0x3e4c04: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e4c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e4c08:
    // 0x3e4c08: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e4c08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e4c0c:
    // 0x3e4c0c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e4c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e4c10:
    // 0x3e4c10: 0x40f809  jalr        $v0
label_3e4c14:
    if (ctx->pc == 0x3E4C14u) {
        ctx->pc = 0x3E4C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4C10u;
        // 0x3e4c14: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4C18u;
        goto label_3e4c18;
    }
    ctx->pc = 0x3E4C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E4C18u);
        ctx->pc = 0x3E4C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4C10u;
        // 0x3e4c14: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4C10u, 0x3E4C18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E4C18u;
label_3e4c18:
    // 0x3e4c18: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e4c18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e4c1c:
    // 0x3e4c1c: 0xc0ea146  jal         func_3A8518
label_3e4c20:
    if (ctx->pc == 0x3E4C20u) {
        ctx->pc = 0x3E4C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4C1Cu;
        // 0x3e4c20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4C24u;
        goto label_3e4c24;
    }
    ctx->pc = 0x3E4C1Cu;
    SET_GPR_U32(ctx, 31, 0x3E4C24u);
    ctx->pc = 0x3E4C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4C1Cu;
    // 0x3e4c20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E4C1Cu, 0x3E4C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4C24u;
label_3e4c24:
    // 0x3e4c24: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3e4c24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e4c28:
    // 0x3e4c28: 0xc0ea13a  jal         func_3A84E8
label_3e4c2c:
    if (ctx->pc == 0x3E4C2Cu) {
        ctx->pc = 0x3E4C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4C28u;
        // 0x3e4c2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4C30u;
        goto label_3e4c30;
    }
    ctx->pc = 0x3E4C28u;
    SET_GPR_U32(ctx, 31, 0x3E4C30u);
    ctx->pc = 0x3E4C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4C28u;
    // 0x3e4c2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3E4C28u, 0x3E4C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4C30u;
label_3e4c30:
    // 0x3e4c30: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3e4c30u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3e4c34:
    // 0x3e4c34: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e4c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e4c38:
    // 0x3e4c38: 0xc0ea12a  jal         func_3A84A8
label_3e4c3c:
    if (ctx->pc == 0x3E4C3Cu) {
        ctx->pc = 0x3E4C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4C38u;
        // 0x3e4c3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4C40u;
        goto label_3e4c40;
    }
    ctx->pc = 0x3E4C38u;
    SET_GPR_U32(ctx, 31, 0x3E4C40u);
    ctx->pc = 0x3E4C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4C38u;
    // 0x3e4c3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E4C38u, 0x3E4C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4C40u;
label_3e4c40:
    // 0x3e4c40: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e4c40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e4c44:
    // 0x3e4c44: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e4c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e4c48:
    // 0x3e4c48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e4c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e4c4c:
    // 0x3e4c4c: 0xc0ea12a  jal         func_3A84A8
label_3e4c50:
    if (ctx->pc == 0x3E4C50u) {
        ctx->pc = 0x3E4C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4C4Cu;
        // 0x3e4c50: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4C54u;
        goto label_3e4c54;
    }
    ctx->pc = 0x3E4C4Cu;
    SET_GPR_U32(ctx, 31, 0x3E4C54u);
    ctx->pc = 0x3E4C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4C4Cu;
    // 0x3e4c50: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E4C4Cu, 0x3E4C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4C54u;
label_3e4c54:
    // 0x3e4c54: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e4c54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e4c58:
    // 0x3e4c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e4c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e4c5c:
    // 0x3e4c5c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e4c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e4c60:
    // 0x3e4c60: 0xc0e858c  jal         func_3A1630
label_3e4c64:
    if (ctx->pc == 0x3E4C64u) {
        ctx->pc = 0x3E4C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4C60u;
        // 0x3e4c64: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4C68u;
        goto label_3e4c68;
    }
    ctx->pc = 0x3E4C60u;
    SET_GPR_U32(ctx, 31, 0x3E4C68u);
    ctx->pc = 0x3E4C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4C60u;
    // 0x3e4c64: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E4C60u, 0x3E4C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4C68u;
label_3e4c68:
    // 0x3e4c68: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3e4c68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e4c6c:
    // 0x3e4c6c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3e4c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e4c70:
    // 0x3e4c70: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3e4c70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3e4c74:
    // 0x3e4c74: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x3e4c74u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_3e4c78:
    // 0x3e4c78: 0xe6540014  swc1        $f20, 0x14($s2)
    ctx->pc = 0x3e4c78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_3e4c7c:
    // 0x3e4c7c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3e4c7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3e4c80:
    // 0x3e4c80: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3e4c80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e4c84:
    // 0x3e4c84: 0xae530018  sw          $s3, 0x18($s2)
    ctx->pc = 0x3e4c84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 19));
label_3e4c88:
    // 0x3e4c88: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x3e4c88u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_3e4c8c:
    // 0x3e4c8c: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x3e4c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_3e4c90:
    // 0x3e4c90: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3e4c90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e4c94:
    // 0x3e4c94: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3e4c94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e4c98:
    // 0x3e4c98: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3e4c98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e4c9c:
    // 0x3e4c9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3e4c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3e4ca0:
    // 0x3e4ca0: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x3e4ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3e4ca4:
    // 0x3e4ca4: 0x3e00008  jr          $ra
label_3e4ca8:
    if (ctx->pc == 0x3E4CA8u) {
        ctx->pc = 0x3E4CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4CA4u;
        // 0x3e4ca8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4CACu;
        goto label_3e4cac;
    }
    ctx->pc = 0x3E4CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E4CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4CA4u;
        // 0x3e4ca8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E4CACu;
label_3e4cac:
    // 0x3e4cac: 0x0  nop
    ctx->pc = 0x3e4cacu;
    // NOP
    ctx->pc = 0x3e4cb0u;
}
