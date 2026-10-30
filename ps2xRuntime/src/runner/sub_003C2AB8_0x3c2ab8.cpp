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

// Function: sub_003C2AB8
// Address: 0x3c2ab8 - 0x3c2ba0
void sub_003C2AB8_0x3c2ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C2AB8_0x3c2ab8");
#endif

    switch (ctx->pc) {
        case 0x3c2ab8u: goto label_3c2ab8;
        case 0x3c2abcu: goto label_3c2abc;
        case 0x3c2ac0u: goto label_3c2ac0;
        case 0x3c2ac4u: goto label_3c2ac4;
        case 0x3c2ac8u: goto label_3c2ac8;
        case 0x3c2accu: goto label_3c2acc;
        case 0x3c2ad0u: goto label_3c2ad0;
        case 0x3c2ad4u: goto label_3c2ad4;
        case 0x3c2ad8u: goto label_3c2ad8;
        case 0x3c2adcu: goto label_3c2adc;
        case 0x3c2ae0u: goto label_3c2ae0;
        case 0x3c2ae4u: goto label_3c2ae4;
        case 0x3c2ae8u: goto label_3c2ae8;
        case 0x3c2aecu: goto label_3c2aec;
        case 0x3c2af0u: goto label_3c2af0;
        case 0x3c2af4u: goto label_3c2af4;
        case 0x3c2af8u: goto label_3c2af8;
        case 0x3c2afcu: goto label_3c2afc;
        case 0x3c2b00u: goto label_3c2b00;
        case 0x3c2b04u: goto label_3c2b04;
        case 0x3c2b08u: goto label_3c2b08;
        case 0x3c2b0cu: goto label_3c2b0c;
        case 0x3c2b10u: goto label_3c2b10;
        case 0x3c2b14u: goto label_3c2b14;
        case 0x3c2b18u: goto label_3c2b18;
        case 0x3c2b1cu: goto label_3c2b1c;
        case 0x3c2b20u: goto label_3c2b20;
        case 0x3c2b24u: goto label_3c2b24;
        case 0x3c2b28u: goto label_3c2b28;
        case 0x3c2b2cu: goto label_3c2b2c;
        case 0x3c2b30u: goto label_3c2b30;
        case 0x3c2b34u: goto label_3c2b34;
        case 0x3c2b38u: goto label_3c2b38;
        case 0x3c2b3cu: goto label_3c2b3c;
        case 0x3c2b40u: goto label_3c2b40;
        case 0x3c2b44u: goto label_3c2b44;
        case 0x3c2b48u: goto label_3c2b48;
        case 0x3c2b4cu: goto label_3c2b4c;
        case 0x3c2b50u: goto label_3c2b50;
        case 0x3c2b54u: goto label_3c2b54;
        case 0x3c2b58u: goto label_3c2b58;
        case 0x3c2b5cu: goto label_3c2b5c;
        case 0x3c2b60u: goto label_3c2b60;
        case 0x3c2b64u: goto label_3c2b64;
        case 0x3c2b68u: goto label_3c2b68;
        case 0x3c2b6cu: goto label_3c2b6c;
        case 0x3c2b70u: goto label_3c2b70;
        case 0x3c2b74u: goto label_3c2b74;
        case 0x3c2b78u: goto label_3c2b78;
        case 0x3c2b7cu: goto label_3c2b7c;
        case 0x3c2b80u: goto label_3c2b80;
        case 0x3c2b84u: goto label_3c2b84;
        case 0x3c2b88u: goto label_3c2b88;
        case 0x3c2b8cu: goto label_3c2b8c;
        case 0x3c2b90u: goto label_3c2b90;
        case 0x3c2b94u: goto label_3c2b94;
        case 0x3c2b98u: goto label_3c2b98;
        case 0x3c2b9cu: goto label_3c2b9c;
        default: break;
    }

    ctx->pc = 0x3c2ab8u;

label_3c2ab8:
    // 0x3c2ab8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3c2ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3c2abc:
    // 0x3c2abc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3c2abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3c2ac0:
    // 0x3c2ac0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3c2ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3c2ac4:
    // 0x3c2ac4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c2ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c2ac8:
    // 0x3c2ac8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3c2ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3c2acc:
    // 0x3c2acc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3c2accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3c2ad0:
    // 0x3c2ad0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c2ad0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c2ad4:
    // 0x3c2ad4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3c2ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3c2ad8:
    // 0x3c2ad8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c2ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3c2adc:
    // 0x3c2adc: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x3c2adcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3c2ae0:
    // 0x3c2ae0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3c2ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c2ae4:
    // 0x3c2ae4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c2ae4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c2ae8:
    // 0x3c2ae8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c2ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c2aec:
    // 0x3c2aec: 0x40f809  jalr        $v0
label_3c2af0:
    if (ctx->pc == 0x3C2AF0u) {
        ctx->pc = 0x3C2AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2AECu;
        // 0x3c2af0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2AF4u;
        goto label_3c2af4;
    }
    ctx->pc = 0x3C2AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C2AF4u);
        ctx->pc = 0x3C2AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2AECu;
        // 0x3c2af0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2AECu, 0x3C2AF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C2AF4u;
label_3c2af4:
    // 0x3c2af4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c2af4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c2af8:
    // 0x3c2af8: 0xc0ea146  jal         func_3A8518
label_3c2afc:
    if (ctx->pc == 0x3C2AFCu) {
        ctx->pc = 0x3C2AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2AF8u;
        // 0x3c2afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2B00u;
        goto label_3c2b00;
    }
    ctx->pc = 0x3C2AF8u;
    SET_GPR_U32(ctx, 31, 0x3C2B00u);
    ctx->pc = 0x3C2AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2AF8u;
    // 0x3c2afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C2AF8u, 0x3C2B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2B00u;
label_3c2b00:
    // 0x3c2b00: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3c2b00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c2b04:
    // 0x3c2b04: 0xc0ea146  jal         func_3A8518
label_3c2b08:
    if (ctx->pc == 0x3C2B08u) {
        ctx->pc = 0x3C2B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2B04u;
        // 0x3c2b08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2B0Cu;
        goto label_3c2b0c;
    }
    ctx->pc = 0x3C2B04u;
    SET_GPR_U32(ctx, 31, 0x3C2B0Cu);
    ctx->pc = 0x3C2B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2B04u;
    // 0x3c2b08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C2B04u, 0x3C2B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2B0Cu;
label_3c2b0c:
    // 0x3c2b0c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3c2b0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c2b10:
    // 0x3c2b10: 0xc0ea13a  jal         func_3A84E8
label_3c2b14:
    if (ctx->pc == 0x3C2B14u) {
        ctx->pc = 0x3C2B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2B10u;
        // 0x3c2b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2B18u;
        goto label_3c2b18;
    }
    ctx->pc = 0x3C2B10u;
    SET_GPR_U32(ctx, 31, 0x3C2B18u);
    ctx->pc = 0x3C2B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2B10u;
    // 0x3c2b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3C2B10u, 0x3C2B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2B18u;
label_3c2b18:
    // 0x3c2b18: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c2b18u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3c2b1c:
    // 0x3c2b1c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c2b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c2b20:
    // 0x3c2b20: 0xc0ea12a  jal         func_3A84A8
label_3c2b24:
    if (ctx->pc == 0x3C2B24u) {
        ctx->pc = 0x3C2B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2B20u;
        // 0x3c2b24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2B28u;
        goto label_3c2b28;
    }
    ctx->pc = 0x3C2B20u;
    SET_GPR_U32(ctx, 31, 0x3C2B28u);
    ctx->pc = 0x3C2B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2B20u;
    // 0x3c2b24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C2B20u, 0x3C2B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2B28u;
label_3c2b28:
    // 0x3c2b28: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c2b28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c2b2c:
    // 0x3c2b2c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c2b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c2b30:
    // 0x3c2b30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c2b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c2b34:
    // 0x3c2b34: 0xc0ea12a  jal         func_3A84A8
label_3c2b38:
    if (ctx->pc == 0x3C2B38u) {
        ctx->pc = 0x3C2B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2B34u;
        // 0x3c2b38: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2B3Cu;
        goto label_3c2b3c;
    }
    ctx->pc = 0x3C2B34u;
    SET_GPR_U32(ctx, 31, 0x3C2B3Cu);
    ctx->pc = 0x3C2B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2B34u;
    // 0x3c2b38: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C2B34u, 0x3C2B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2B3Cu;
label_3c2b3c:
    // 0x3c2b3c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c2b3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c2b40:
    // 0x3c2b40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c2b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c2b44:
    // 0x3c2b44: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3c2b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c2b48:
    // 0x3c2b48: 0xc0e858c  jal         func_3A1630
label_3c2b4c:
    if (ctx->pc == 0x3C2B4Cu) {
        ctx->pc = 0x3C2B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2B48u;
        // 0x3c2b4c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2B50u;
        goto label_3c2b50;
    }
    ctx->pc = 0x3C2B48u;
    SET_GPR_U32(ctx, 31, 0x3C2B50u);
    ctx->pc = 0x3C2B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2B48u;
    // 0x3c2b4c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C2B48u, 0x3C2B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2B50u;
label_3c2b50:
    // 0x3c2b50: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3c2b50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c2b54:
    // 0x3c2b54: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3c2b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c2b58:
    // 0x3c2b58: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x3c2b58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_3c2b5c:
    // 0x3c2b5c: 0x7e430010  sq          $v1, 0x10($s2)
    ctx->pc = 0x3c2b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 3));
label_3c2b60:
    // 0x3c2b60: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x3c2b60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
label_3c2b64:
    // 0x3c2b64: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3c2b64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3c2b68:
    // 0x3c2b68: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3c2b68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c2b6c:
    // 0x3c2b6c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3c2b6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c2b70:
    // 0x3c2b70: 0xae340008  sw          $s4, 0x8($s1)
    ctx->pc = 0x3c2b70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
label_3c2b74:
    // 0x3c2b74: 0xe6340020  swc1        $f20, 0x20($s1)
    ctx->pc = 0x3c2b74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_3c2b78:
    // 0x3c2b78: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3c2b78u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3c2b7c:
    // 0x3c2b7c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3c2b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c2b80:
    // 0x3c2b80: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3c2b80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c2b84:
    // 0x3c2b84: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3c2b84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c2b88:
    // 0x3c2b88: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3c2b88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c2b8c:
    // 0x3c2b8c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c2b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3c2b90:
    // 0x3c2b90: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x3c2b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c2b94:
    // 0x3c2b94: 0x3e00008  jr          $ra
label_3c2b98:
    if (ctx->pc == 0x3C2B98u) {
        ctx->pc = 0x3C2B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2B94u;
        // 0x3c2b98: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2B9Cu;
        goto label_3c2b9c;
    }
    ctx->pc = 0x3C2B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2B94u;
        // 0x3c2b98: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2B9Cu;
label_3c2b9c:
    // 0x3c2b9c: 0x0  nop
    ctx->pc = 0x3c2b9cu;
    // NOP
    ctx->pc = 0x3c2ba0u;
}
