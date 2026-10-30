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

// Function: sub_003C6AE0
// Address: 0x3c6ae0 - 0x3c6c48
void sub_003C6AE0_0x3c6ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C6AE0_0x3c6ae0");
#endif

    switch (ctx->pc) {
        case 0x3c6ae0u: goto label_3c6ae0;
        case 0x3c6ae4u: goto label_3c6ae4;
        case 0x3c6ae8u: goto label_3c6ae8;
        case 0x3c6aecu: goto label_3c6aec;
        case 0x3c6af0u: goto label_3c6af0;
        case 0x3c6af4u: goto label_3c6af4;
        case 0x3c6af8u: goto label_3c6af8;
        case 0x3c6afcu: goto label_3c6afc;
        case 0x3c6b00u: goto label_3c6b00;
        case 0x3c6b04u: goto label_3c6b04;
        case 0x3c6b08u: goto label_3c6b08;
        case 0x3c6b0cu: goto label_3c6b0c;
        case 0x3c6b10u: goto label_3c6b10;
        case 0x3c6b14u: goto label_3c6b14;
        case 0x3c6b18u: goto label_3c6b18;
        case 0x3c6b1cu: goto label_3c6b1c;
        case 0x3c6b20u: goto label_3c6b20;
        case 0x3c6b24u: goto label_3c6b24;
        case 0x3c6b28u: goto label_3c6b28;
        case 0x3c6b2cu: goto label_3c6b2c;
        case 0x3c6b30u: goto label_3c6b30;
        case 0x3c6b34u: goto label_3c6b34;
        case 0x3c6b38u: goto label_3c6b38;
        case 0x3c6b3cu: goto label_3c6b3c;
        case 0x3c6b40u: goto label_3c6b40;
        case 0x3c6b44u: goto label_3c6b44;
        case 0x3c6b48u: goto label_3c6b48;
        case 0x3c6b4cu: goto label_3c6b4c;
        case 0x3c6b50u: goto label_3c6b50;
        case 0x3c6b54u: goto label_3c6b54;
        case 0x3c6b58u: goto label_3c6b58;
        case 0x3c6b5cu: goto label_3c6b5c;
        case 0x3c6b60u: goto label_3c6b60;
        case 0x3c6b64u: goto label_3c6b64;
        case 0x3c6b68u: goto label_3c6b68;
        case 0x3c6b6cu: goto label_3c6b6c;
        case 0x3c6b70u: goto label_3c6b70;
        case 0x3c6b74u: goto label_3c6b74;
        case 0x3c6b78u: goto label_3c6b78;
        case 0x3c6b7cu: goto label_3c6b7c;
        case 0x3c6b80u: goto label_3c6b80;
        case 0x3c6b84u: goto label_3c6b84;
        case 0x3c6b88u: goto label_3c6b88;
        case 0x3c6b8cu: goto label_3c6b8c;
        case 0x3c6b90u: goto label_3c6b90;
        case 0x3c6b94u: goto label_3c6b94;
        case 0x3c6b98u: goto label_3c6b98;
        case 0x3c6b9cu: goto label_3c6b9c;
        case 0x3c6ba0u: goto label_3c6ba0;
        case 0x3c6ba4u: goto label_3c6ba4;
        case 0x3c6ba8u: goto label_3c6ba8;
        case 0x3c6bacu: goto label_3c6bac;
        case 0x3c6bb0u: goto label_3c6bb0;
        case 0x3c6bb4u: goto label_3c6bb4;
        case 0x3c6bb8u: goto label_3c6bb8;
        case 0x3c6bbcu: goto label_3c6bbc;
        case 0x3c6bc0u: goto label_3c6bc0;
        case 0x3c6bc4u: goto label_3c6bc4;
        case 0x3c6bc8u: goto label_3c6bc8;
        case 0x3c6bccu: goto label_3c6bcc;
        case 0x3c6bd0u: goto label_3c6bd0;
        case 0x3c6bd4u: goto label_3c6bd4;
        case 0x3c6bd8u: goto label_3c6bd8;
        case 0x3c6bdcu: goto label_3c6bdc;
        case 0x3c6be0u: goto label_3c6be0;
        case 0x3c6be4u: goto label_3c6be4;
        case 0x3c6be8u: goto label_3c6be8;
        case 0x3c6becu: goto label_3c6bec;
        case 0x3c6bf0u: goto label_3c6bf0;
        case 0x3c6bf4u: goto label_3c6bf4;
        case 0x3c6bf8u: goto label_3c6bf8;
        case 0x3c6bfcu: goto label_3c6bfc;
        case 0x3c6c00u: goto label_3c6c00;
        case 0x3c6c04u: goto label_3c6c04;
        case 0x3c6c08u: goto label_3c6c08;
        case 0x3c6c0cu: goto label_3c6c0c;
        case 0x3c6c10u: goto label_3c6c10;
        case 0x3c6c14u: goto label_3c6c14;
        case 0x3c6c18u: goto label_3c6c18;
        case 0x3c6c1cu: goto label_3c6c1c;
        case 0x3c6c20u: goto label_3c6c20;
        case 0x3c6c24u: goto label_3c6c24;
        case 0x3c6c28u: goto label_3c6c28;
        case 0x3c6c2cu: goto label_3c6c2c;
        case 0x3c6c30u: goto label_3c6c30;
        case 0x3c6c34u: goto label_3c6c34;
        case 0x3c6c38u: goto label_3c6c38;
        case 0x3c6c3cu: goto label_3c6c3c;
        case 0x3c6c40u: goto label_3c6c40;
        case 0x3c6c44u: goto label_3c6c44;
        default: break;
    }

    ctx->pc = 0x3c6ae0u;

label_3c6ae0:
    // 0x3c6ae0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3c6ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3c6ae4:
    // 0x3c6ae4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3c6ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3c6ae8:
    // 0x3c6ae8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3c6ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3c6aec:
    // 0x3c6aec: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3c6aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3c6af0:
    // 0x3c6af0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c6af0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c6af4:
    // 0x3c6af4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3c6af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3c6af8:
    // 0x3c6af8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c6af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c6afc:
    // 0x3c6afc: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x3c6afcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_3c6b00:
    // 0x3c6b00: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x3c6b00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3c6b04:
    // 0x3c6b04: 0xc0ea12a  jal         func_3A84A8
label_3c6b08:
    if (ctx->pc == 0x3C6B08u) {
        ctx->pc = 0x3C6B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6B04u;
        // 0x3c6b08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6B0Cu;
        goto label_3c6b0c;
    }
    ctx->pc = 0x3C6B04u;
    SET_GPR_U32(ctx, 31, 0x3C6B0Cu);
    ctx->pc = 0x3C6B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6B04u;
    // 0x3c6b08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C6B04u, 0x3C6B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6B0Cu;
label_3c6b0c:
    // 0x3c6b0c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3c6b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c6b10:
    // 0x3c6b10: 0xc0ea12a  jal         func_3A84A8
label_3c6b14:
    if (ctx->pc == 0x3C6B14u) {
        ctx->pc = 0x3C6B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6B10u;
        // 0x3c6b14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6B18u;
        goto label_3c6b18;
    }
    ctx->pc = 0x3C6B10u;
    SET_GPR_U32(ctx, 31, 0x3C6B18u);
    ctx->pc = 0x3C6B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6B10u;
    // 0x3c6b14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C6B10u, 0x3C6B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6B18u;
label_3c6b18:
    // 0x3c6b18: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c6b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c6b1c:
    // 0x3c6b1c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3c6b1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3c6b20:
    // 0x3c6b20: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3c6b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3c6b24:
    // 0x3c6b24: 0x40f809  jalr        $v0
label_3c6b28:
    if (ctx->pc == 0x3C6B28u) {
        ctx->pc = 0x3C6B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6B24u;
        // 0x3c6b28: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6B2Cu;
        goto label_3c6b2c;
    }
    ctx->pc = 0x3C6B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C6B2Cu);
        ctx->pc = 0x3C6B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6B24u;
        // 0x3c6b28: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6B24u, 0x3C6B2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C6B2Cu;
label_3c6b2c:
    // 0x3c6b2c: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x3c6b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_3c6b30:
    // 0x3c6b30: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3c6b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3c6b34:
    // 0x3c6b34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3c6b38:
    if (ctx->pc == 0x3C6B38u) {
        ctx->pc = 0x3C6B3Cu;
        goto label_3c6b3c;
    }
    ctx->pc = 0x3C6B34u;
    {
        const bool branch_taken_0x3c6b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6b34) {
            ctx->pc = 0x3C6B50u;
            goto label_3c6b50;
        }
    }
    ctx->pc = 0x3C6B3Cu;
label_3c6b3c:
    // 0x3c6b3c: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x3c6b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3c6b40:
    // 0x3c6b40: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x3c6b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
label_3c6b44:
    // 0x3c6b44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c6b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3c6b48:
    // 0x3c6b48: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3c6b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3c6b4c:
    // 0x3c6b4c: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3c6b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3c6b50:
    // 0x3c6b50: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3c6b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3c6b54:
    // 0x3c6b54: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3c6b54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3c6b58:
    // 0x3c6b58: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3c6b58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3c6b5c:
    // 0x3c6b5c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x3c6b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_3c6b60:
    // 0x3c6b60: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3c6b60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3c6b64:
    // 0x3c6b64: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3c6b64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3c6b68:
    // 0x3c6b68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c6b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c6b6c:
    // 0x3c6b6c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3c6b6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3c6b70:
    // 0x3c6b70: 0xc0cd508  jal         func_335420
label_3c6b74:
    if (ctx->pc == 0x3C6B74u) {
        ctx->pc = 0x3C6B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6B70u;
        // 0x3c6b74: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6B78u;
        goto label_3c6b78;
    }
    ctx->pc = 0x3C6B70u;
    SET_GPR_U32(ctx, 31, 0x3C6B78u);
    ctx->pc = 0x3C6B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6B70u;
    // 0x3c6b74: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3C6B70u, 0x3C6B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6B78u;
label_3c6b78:
    // 0x3c6b78: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3c6b78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3c6b7c:
    // 0x3c6b7c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3c6b7cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3c6b80:
    // 0x3c6b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c6b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c6b84:
    // 0x3c6b84: 0xc0cd508  jal         func_335420
label_3c6b88:
    if (ctx->pc == 0x3C6B88u) {
        ctx->pc = 0x3C6B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6B84u;
        // 0x3c6b88: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6B8Cu;
        goto label_3c6b8c;
    }
    ctx->pc = 0x3C6B84u;
    SET_GPR_U32(ctx, 31, 0x3C6B8Cu);
    ctx->pc = 0x3C6B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6B84u;
    // 0x3c6b88: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3C6B84u, 0x3C6B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6B8Cu;
label_3c6b8c:
    // 0x3c6b8c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3c6b8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c6b90:
    // 0x3c6b90: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3c6b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c6b94:
    // 0x3c6b94: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3c6b94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3c6b98:
    // 0x3c6b98: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3c6b98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3c6b9c:
    // 0x3c6b9c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3c6b9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3c6ba0:
    // 0x3c6ba0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3c6ba0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3c6ba4:
    // 0x3c6ba4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3c6ba4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3c6ba8:
    // 0x3c6ba8: 0x4a0003bf  vwaitq
    ctx->pc = 0x3c6ba8u;
    // VWAITQ (Q already resolved in this runtime)
label_3c6bac:
    // 0x3c6bac: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3c6bacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3c6bb0:
    // 0x3c6bb0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3c6bb0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3c6bb4:
    // 0x3c6bb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c6bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c6bb8:
    // 0x3c6bb8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3c6bb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3c6bbc:
    // 0x3c6bbc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3c6bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3c6bc0:
    // 0x3c6bc0: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x3c6bc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_3c6bc4:
    // 0x3c6bc4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x3c6bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c6bc8:
    // 0x3c6bc8: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x3c6bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c6bcc:
    // 0x3c6bcc: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x3c6bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_3c6bd0:
    // 0x3c6bd0: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x3c6bd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_3c6bd4:
    // 0x3c6bd4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3c6bd4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3c6bd8:
    // 0x3c6bd8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c6bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c6bdc:
    // 0x3c6bdc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3c6bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3c6be0:
    // 0x3c6be0: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x3c6be0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3c6be4:
    // 0x3c6be4: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x3c6be4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3c6be8:
    // 0x3c6be8: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x3c6be8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_3c6bec:
    // 0x3c6bec: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x3c6becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_3c6bf0:
    // 0x3c6bf0: 0x40f809  jalr        $v0
label_3c6bf4:
    if (ctx->pc == 0x3C6BF4u) {
        ctx->pc = 0x3C6BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6BF0u;
        // 0x3c6bf4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6BF8u;
        goto label_3c6bf8;
    }
    ctx->pc = 0x3C6BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C6BF8u);
        ctx->pc = 0x3C6BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6BF0u;
        // 0x3c6bf4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6BF0u, 0x3C6BF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C6BF8u;
label_3c6bf8:
    // 0x3c6bf8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c6bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c6bfc:
    // 0x3c6bfc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c6bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c6c00:
    // 0x3c6c00: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x3c6c00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_3c6c04:
    // 0x3c6c04: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x3c6c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_3c6c08:
    // 0x3c6c08: 0x40f809  jalr        $v0
label_3c6c0c:
    if (ctx->pc == 0x3C6C0Cu) {
        ctx->pc = 0x3C6C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C08u;
        // 0x3c6c0c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6C10u;
        goto label_3c6c10;
    }
    ctx->pc = 0x3C6C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C6C10u);
        ctx->pc = 0x3C6C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C08u;
        // 0x3c6c0c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6C08u, 0x3C6C10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C6C10u;
label_3c6c10:
    // 0x3c6c10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c6c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c6c14:
    // 0x3c6c14: 0xc0e858c  jal         func_3A1630
label_3c6c18:
    if (ctx->pc == 0x3C6C18u) {
        ctx->pc = 0x3C6C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C14u;
        // 0x3c6c18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6C1Cu;
        goto label_3c6c1c;
    }
    ctx->pc = 0x3C6C14u;
    SET_GPR_U32(ctx, 31, 0x3C6C1Cu);
    ctx->pc = 0x3C6C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6C14u;
    // 0x3c6c18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C6C14u, 0x3C6C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6C1Cu;
label_3c6c1c:
    // 0x3c6c1c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3c6c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3c6c20:
    // 0x3c6c20: 0x3c030420  lui         $v1, 0x420
    ctx->pc = 0x3c6c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1056 << 16));
label_3c6c24:
    // 0x3c6c24: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3c6c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c6c28:
    // 0x3c6c28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3c6c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3c6c2c:
    // 0x3c6c2c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3c6c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3c6c30:
    // 0x3c6c30: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3c6c30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3c6c34:
    // 0x3c6c34: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3c6c34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c6c38:
    // 0x3c6c38: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x3c6c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3c6c3c:
    // 0x3c6c3c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x3c6c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c6c40:
    // 0x3c6c40: 0x3e00008  jr          $ra
label_3c6c44:
    if (ctx->pc == 0x3C6C44u) {
        ctx->pc = 0x3C6C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C40u;
        // 0x3c6c44: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6C48u;
        goto label_fallthrough_0x3c6c40;
    }
    ctx->pc = 0x3C6C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C6C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C40u;
        // 0x3c6c44: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c6c40:
    ctx->pc = 0x3C6C48u;
}
