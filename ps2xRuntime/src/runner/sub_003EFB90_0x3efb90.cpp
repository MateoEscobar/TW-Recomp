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

// Function: sub_003EFB90
// Address: 0x3efb90 - 0x3efd00
void sub_003EFB90_0x3efb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EFB90_0x3efb90");
#endif

    switch (ctx->pc) {
        case 0x3efb90u: goto label_3efb90;
        case 0x3efb94u: goto label_3efb94;
        case 0x3efb98u: goto label_3efb98;
        case 0x3efb9cu: goto label_3efb9c;
        case 0x3efba0u: goto label_3efba0;
        case 0x3efba4u: goto label_3efba4;
        case 0x3efba8u: goto label_3efba8;
        case 0x3efbacu: goto label_3efbac;
        case 0x3efbb0u: goto label_3efbb0;
        case 0x3efbb4u: goto label_3efbb4;
        case 0x3efbb8u: goto label_3efbb8;
        case 0x3efbbcu: goto label_3efbbc;
        case 0x3efbc0u: goto label_3efbc0;
        case 0x3efbc4u: goto label_3efbc4;
        case 0x3efbc8u: goto label_3efbc8;
        case 0x3efbccu: goto label_3efbcc;
        case 0x3efbd0u: goto label_3efbd0;
        case 0x3efbd4u: goto label_3efbd4;
        case 0x3efbd8u: goto label_3efbd8;
        case 0x3efbdcu: goto label_3efbdc;
        case 0x3efbe0u: goto label_3efbe0;
        case 0x3efbe4u: goto label_3efbe4;
        case 0x3efbe8u: goto label_3efbe8;
        case 0x3efbecu: goto label_3efbec;
        case 0x3efbf0u: goto label_3efbf0;
        case 0x3efbf4u: goto label_3efbf4;
        case 0x3efbf8u: goto label_3efbf8;
        case 0x3efbfcu: goto label_3efbfc;
        case 0x3efc00u: goto label_3efc00;
        case 0x3efc04u: goto label_3efc04;
        case 0x3efc08u: goto label_3efc08;
        case 0x3efc0cu: goto label_3efc0c;
        case 0x3efc10u: goto label_3efc10;
        case 0x3efc14u: goto label_3efc14;
        case 0x3efc18u: goto label_3efc18;
        case 0x3efc1cu: goto label_3efc1c;
        case 0x3efc20u: goto label_3efc20;
        case 0x3efc24u: goto label_3efc24;
        case 0x3efc28u: goto label_3efc28;
        case 0x3efc2cu: goto label_3efc2c;
        case 0x3efc30u: goto label_3efc30;
        case 0x3efc34u: goto label_3efc34;
        case 0x3efc38u: goto label_3efc38;
        case 0x3efc3cu: goto label_3efc3c;
        case 0x3efc40u: goto label_3efc40;
        case 0x3efc44u: goto label_3efc44;
        case 0x3efc48u: goto label_3efc48;
        case 0x3efc4cu: goto label_3efc4c;
        case 0x3efc50u: goto label_3efc50;
        case 0x3efc54u: goto label_3efc54;
        case 0x3efc58u: goto label_3efc58;
        case 0x3efc5cu: goto label_3efc5c;
        case 0x3efc60u: goto label_3efc60;
        case 0x3efc64u: goto label_3efc64;
        case 0x3efc68u: goto label_3efc68;
        case 0x3efc6cu: goto label_3efc6c;
        case 0x3efc70u: goto label_3efc70;
        case 0x3efc74u: goto label_3efc74;
        case 0x3efc78u: goto label_3efc78;
        case 0x3efc7cu: goto label_3efc7c;
        case 0x3efc80u: goto label_3efc80;
        case 0x3efc84u: goto label_3efc84;
        case 0x3efc88u: goto label_3efc88;
        case 0x3efc8cu: goto label_3efc8c;
        case 0x3efc90u: goto label_3efc90;
        case 0x3efc94u: goto label_3efc94;
        case 0x3efc98u: goto label_3efc98;
        case 0x3efc9cu: goto label_3efc9c;
        case 0x3efca0u: goto label_3efca0;
        case 0x3efca4u: goto label_3efca4;
        case 0x3efca8u: goto label_3efca8;
        case 0x3efcacu: goto label_3efcac;
        case 0x3efcb0u: goto label_3efcb0;
        case 0x3efcb4u: goto label_3efcb4;
        case 0x3efcb8u: goto label_3efcb8;
        case 0x3efcbcu: goto label_3efcbc;
        case 0x3efcc0u: goto label_3efcc0;
        case 0x3efcc4u: goto label_3efcc4;
        case 0x3efcc8u: goto label_3efcc8;
        case 0x3efcccu: goto label_3efccc;
        case 0x3efcd0u: goto label_3efcd0;
        case 0x3efcd4u: goto label_3efcd4;
        case 0x3efcd8u: goto label_3efcd8;
        case 0x3efcdcu: goto label_3efcdc;
        case 0x3efce0u: goto label_3efce0;
        case 0x3efce4u: goto label_3efce4;
        case 0x3efce8u: goto label_3efce8;
        case 0x3efcecu: goto label_3efcec;
        case 0x3efcf0u: goto label_3efcf0;
        case 0x3efcf4u: goto label_3efcf4;
        case 0x3efcf8u: goto label_3efcf8;
        case 0x3efcfcu: goto label_3efcfc;
        default: break;
    }

    ctx->pc = 0x3efb90u;

label_3efb90:
    // 0x3efb90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3efb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3efb94:
    // 0x3efb94: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3efb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3efb98:
    // 0x3efb98: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3efb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3efb9c:
    // 0x3efb9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3efb9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3efba0:
    // 0x3efba0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3efba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3efba4:
    // 0x3efba4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3efba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3efba8:
    // 0x3efba8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3efba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3efbac:
    // 0x3efbac: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3efbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3efbb0:
    // 0x3efbb0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3efbb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3efbb4:
    // 0x3efbb4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3efbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3efbb8:
    // 0x3efbb8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3efbb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3efbbc:
    // 0x3efbbc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3efbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3efbc0:
    // 0x3efbc0: 0x40f809  jalr        $v0
label_3efbc4:
    if (ctx->pc == 0x3EFBC4u) {
        ctx->pc = 0x3EFBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFBC0u;
        // 0x3efbc4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFBC8u;
        goto label_3efbc8;
    }
    ctx->pc = 0x3EFBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EFBC8u);
        ctx->pc = 0x3EFBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFBC0u;
        // 0x3efbc4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EFBC0u, 0x3EFBC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EFBC8u;
label_3efbc8:
    // 0x3efbc8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3efbc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3efbcc:
    // 0x3efbcc: 0xc0ea14c  jal         func_3A8530
label_3efbd0:
    if (ctx->pc == 0x3EFBD0u) {
        ctx->pc = 0x3EFBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFBCCu;
        // 0x3efbd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFBD4u;
        goto label_3efbd4;
    }
    ctx->pc = 0x3EFBCCu;
    SET_GPR_U32(ctx, 31, 0x3EFBD4u);
    ctx->pc = 0x3EFBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFBCCu;
    // 0x3efbd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3EFBCCu, 0x3EFBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFBD4u;
label_3efbd4:
    // 0x3efbd4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3efbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3efbd8:
    // 0x3efbd8: 0xc0ea12a  jal         func_3A84A8
label_3efbdc:
    if (ctx->pc == 0x3EFBDCu) {
        ctx->pc = 0x3EFBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFBD8u;
        // 0x3efbdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFBE0u;
        goto label_3efbe0;
    }
    ctx->pc = 0x3EFBD8u;
    SET_GPR_U32(ctx, 31, 0x3EFBE0u);
    ctx->pc = 0x3EFBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFBD8u;
    // 0x3efbdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EFBD8u, 0x3EFBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFBE0u;
label_3efbe0:
    // 0x3efbe0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3efbe0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3efbe4:
    // 0x3efbe4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3efbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3efbe8:
    // 0x3efbe8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3efbe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3efbec:
    // 0x3efbec: 0xc0ea12a  jal         func_3A84A8
label_3efbf0:
    if (ctx->pc == 0x3EFBF0u) {
        ctx->pc = 0x3EFBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFBECu;
        // 0x3efbf0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFBF4u;
        goto label_3efbf4;
    }
    ctx->pc = 0x3EFBECu;
    SET_GPR_U32(ctx, 31, 0x3EFBF4u);
    ctx->pc = 0x3EFBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFBECu;
    // 0x3efbf0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EFBECu, 0x3EFBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFBF4u;
label_3efbf4:
    // 0x3efbf4: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3efbf4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3efbf8:
    // 0x3efbf8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3efbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3efbfc:
    // 0x3efbfc: 0xae220124  sw          $v0, 0x124($s1)
    ctx->pc = 0x3efbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 2));
label_3efc00:
    // 0x3efc00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3efc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3efc04:
    // 0x3efc04: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3efc04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3efc08:
    // 0x3efc08: 0xc0e858c  jal         func_3A1630
label_3efc0c:
    if (ctx->pc == 0x3EFC0Cu) {
        ctx->pc = 0x3EFC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFC08u;
        // 0x3efc0c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFC10u;
        goto label_3efc10;
    }
    ctx->pc = 0x3EFC08u;
    SET_GPR_U32(ctx, 31, 0x3EFC10u);
    ctx->pc = 0x3EFC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFC08u;
    // 0x3efc0c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3EFC08u, 0x3EFC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFC10u;
label_3efc10:
    // 0x3efc10: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3efc10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3efc14:
    // 0x3efc14: 0x24020201  addiu       $v0, $zero, 0x201
    ctx->pc = 0x3efc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
label_3efc18:
    // 0x3efc18: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x3efc18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3efc1c:
    // 0x3efc1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3efc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3efc20:
    // 0x3efc20: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x3efc20u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
label_3efc24:
    // 0x3efc24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3efc24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3efc28:
    // 0x3efc28: 0xc0e9132  jal         func_3A44C8
label_3efc2c:
    if (ctx->pc == 0x3EFC2Cu) {
        ctx->pc = 0x3EFC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFC28u;
        // 0x3efc2c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFC30u;
        goto label_3efc30;
    }
    ctx->pc = 0x3EFC28u;
    SET_GPR_U32(ctx, 31, 0x3EFC30u);
    ctx->pc = 0x3EFC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFC28u;
    // 0x3efc2c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3EFC28u, 0x3EFC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFC30u;
label_3efc30:
    // 0x3efc30: 0x3c01c40a  lui         $at, 0xC40A
    ctx->pc = 0x3efc30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50186 << 16));
label_3efc34:
    // 0x3efc34: 0x3421fe14  ori         $at, $at, 0xFE14
    ctx->pc = 0x3efc34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65044);
label_3efc38:
    // 0x3efc38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3efc38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3efc3c:
    // 0x3efc3c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3efc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3efc40:
    // 0x3efc40: 0x3c01c373  lui         $at, 0xC373
    ctx->pc = 0x3efc40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50035 << 16));
label_3efc44:
    // 0x3efc44: 0x3421a666  ori         $at, $at, 0xA666
    ctx->pc = 0x3efc44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42598);
label_3efc48:
    // 0x3efc48: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3efc48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3efc4c:
    // 0x3efc4c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3efc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3efc50:
    // 0x3efc50: 0x3c01bdf5  lui         $at, 0xBDF5
    ctx->pc = 0x3efc50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48629 << 16));
label_3efc54:
    // 0x3efc54: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3efc54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3efc58:
    // 0x3efc58: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3efc58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3efc5c:
    // 0x3efc5c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3efc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3efc60:
    // 0x3efc60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3efc60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3efc64:
    // 0x3efc64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3efc64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3efc68:
    // 0x3efc68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3efc68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3efc6c:
    // 0x3efc6c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x3efc6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3efc70:
    // 0x3efc70: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3efc70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3efc74:
    // 0x3efc74: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3efc74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3efc78:
    // 0x3efc78: 0x24845e90  addiu       $a0, $a0, 0x5E90
    ctx->pc = 0x3efc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24208));
label_3efc7c:
    // 0x3efc7c: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3efc7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3efc80:
    // 0x3efc80: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3efc80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_3efc84:
    // 0x3efc84: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x3efc84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3efc88:
    // 0x3efc88: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x3efc88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_3efc8c:
    // 0x3efc8c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3efc8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3efc90:
    // 0x3efc90: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x3efc90u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
label_3efc94:
    // 0x3efc94: 0xc0e94fc  jal         func_3A53F0
label_3efc98:
    if (ctx->pc == 0x3EFC98u) {
        ctx->pc = 0x3EFC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFC94u;
        // 0x3efc98: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFC9Cu;
        goto label_3efc9c;
    }
    ctx->pc = 0x3EFC94u;
    SET_GPR_U32(ctx, 31, 0x3EFC9Cu);
    ctx->pc = 0x3EFC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFC94u;
    // 0x3efc98: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3EFC94u, 0x3EFC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFC9Cu;
label_3efc9c:
    // 0x3efc9c: 0xae53000c  sw          $s3, 0xC($s2)
    ctx->pc = 0x3efc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 19));
label_3efca0:
    // 0x3efca0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3efca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3efca4:
    // 0x3efca4: 0xae530010  sw          $s3, 0x10($s2)
    ctx->pc = 0x3efca4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 19));
label_3efca8:
    // 0x3efca8: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3efca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3efcac:
    // 0x3efcac: 0xae530014  sw          $s3, 0x14($s2)
    ctx->pc = 0x3efcacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 19));
label_3efcb0:
    // 0x3efcb0: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3efcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_3efcb4:
    // 0x3efcb4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3efcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3efcb8:
    // 0x3efcb8: 0xc0cd4ee  jal         func_3353B8
label_3efcbc:
    if (ctx->pc == 0x3EFCBCu) {
        ctx->pc = 0x3EFCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFCB8u;
        // 0x3efcbc: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFCC0u;
        goto label_3efcc0;
    }
    ctx->pc = 0x3EFCB8u;
    SET_GPR_U32(ctx, 31, 0x3EFCC0u);
    ctx->pc = 0x3EFCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFCB8u;
    // 0x3efcbc: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3EFCB8u, 0x3EFCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFCC0u;
label_3efcc0:
    // 0x3efcc0: 0x2442000d  addiu       $v0, $v0, 0xD
    ctx->pc = 0x3efcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
label_3efcc4:
    // 0x3efcc4: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x3efcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
label_3efcc8:
    // 0x3efcc8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3efcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_3efccc:
    // 0x3efccc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3efcccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3efcd0:
    // 0x3efcd0: 0x8c828690  lw          $v0, -0x7970($a0)
    ctx->pc = 0x3efcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936208)));
label_3efcd4:
    // 0x3efcd4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3efcd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3efcd8:
    // 0x3efcd8: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x3efcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_3efcdc:
    // 0x3efcdc: 0x8c838690  lw          $v1, -0x7970($a0)
    ctx->pc = 0x3efcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936208)));
label_3efce0:
    // 0x3efce0: 0xa2400020  sb          $zero, 0x20($s2)
    ctx->pc = 0x3efce0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 32), (uint8_t)GPR_U32(ctx, 0));
label_3efce4:
    // 0x3efce4: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x3efce4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_3efce8:
    // 0x3efce8: 0xa233010f  sb          $s3, 0x10F($s1)
    ctx->pc = 0x3efce8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 271), (uint8_t)GPR_U32(ctx, 19));
label_3efcec:
    // 0x3efcec: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3efcecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3efcf0:
    // 0x3efcf0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3efcf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3efcf4:
    // 0x3efcf4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3efcf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3efcf8:
    // 0x3efcf8: 0x3e00008  jr          $ra
label_3efcfc:
    if (ctx->pc == 0x3EFCFCu) {
        ctx->pc = 0x3EFCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFCF8u;
        // 0x3efcfc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFD00u;
        goto label_fallthrough_0x3efcf8;
    }
    ctx->pc = 0x3EFCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EFCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFCF8u;
        // 0x3efcfc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EFCF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3efcf8:
    ctx->pc = 0x3EFD00u;
}
