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

// Function: sub_00175A68
// Address: 0x175a68 - 0x175b78
void sub_00175A68_0x175a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175A68_0x175a68");
#endif

    switch (ctx->pc) {
        case 0x175a68u: goto label_175a68;
        case 0x175a6cu: goto label_175a6c;
        case 0x175a70u: goto label_175a70;
        case 0x175a74u: goto label_175a74;
        case 0x175a78u: goto label_175a78;
        case 0x175a7cu: goto label_175a7c;
        case 0x175a80u: goto label_175a80;
        case 0x175a84u: goto label_175a84;
        case 0x175a88u: goto label_175a88;
        case 0x175a8cu: goto label_175a8c;
        case 0x175a90u: goto label_175a90;
        case 0x175a94u: goto label_175a94;
        case 0x175a98u: goto label_175a98;
        case 0x175a9cu: goto label_175a9c;
        case 0x175aa0u: goto label_175aa0;
        case 0x175aa4u: goto label_175aa4;
        case 0x175aa8u: goto label_175aa8;
        case 0x175aacu: goto label_175aac;
        case 0x175ab0u: goto label_175ab0;
        case 0x175ab4u: goto label_175ab4;
        case 0x175ab8u: goto label_175ab8;
        case 0x175abcu: goto label_175abc;
        case 0x175ac0u: goto label_175ac0;
        case 0x175ac4u: goto label_175ac4;
        case 0x175ac8u: goto label_175ac8;
        case 0x175accu: goto label_175acc;
        case 0x175ad0u: goto label_175ad0;
        case 0x175ad4u: goto label_175ad4;
        case 0x175ad8u: goto label_175ad8;
        case 0x175adcu: goto label_175adc;
        case 0x175ae0u: goto label_175ae0;
        case 0x175ae4u: goto label_175ae4;
        case 0x175ae8u: goto label_175ae8;
        case 0x175aecu: goto label_175aec;
        case 0x175af0u: goto label_175af0;
        case 0x175af4u: goto label_175af4;
        case 0x175af8u: goto label_175af8;
        case 0x175afcu: goto label_175afc;
        case 0x175b00u: goto label_175b00;
        case 0x175b04u: goto label_175b04;
        case 0x175b08u: goto label_175b08;
        case 0x175b0cu: goto label_175b0c;
        case 0x175b10u: goto label_175b10;
        case 0x175b14u: goto label_175b14;
        case 0x175b18u: goto label_175b18;
        case 0x175b1cu: goto label_175b1c;
        case 0x175b20u: goto label_175b20;
        case 0x175b24u: goto label_175b24;
        case 0x175b28u: goto label_175b28;
        case 0x175b2cu: goto label_175b2c;
        case 0x175b30u: goto label_175b30;
        case 0x175b34u: goto label_175b34;
        case 0x175b38u: goto label_175b38;
        case 0x175b3cu: goto label_175b3c;
        case 0x175b40u: goto label_175b40;
        case 0x175b44u: goto label_175b44;
        case 0x175b48u: goto label_175b48;
        case 0x175b4cu: goto label_175b4c;
        case 0x175b50u: goto label_175b50;
        case 0x175b54u: goto label_175b54;
        case 0x175b58u: goto label_175b58;
        case 0x175b5cu: goto label_175b5c;
        case 0x175b60u: goto label_175b60;
        case 0x175b64u: goto label_175b64;
        case 0x175b68u: goto label_175b68;
        case 0x175b6cu: goto label_175b6c;
        case 0x175b70u: goto label_175b70;
        case 0x175b74u: goto label_175b74;
        default: break;
    }

    ctx->pc = 0x175a68u;

label_175a68:
    // 0x175a68: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x175a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_175a6c:
    // 0x175a6c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x175a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_175a70:
    // 0x175a70: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x175a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_175a74:
    // 0x175a74: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x175a74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_175a78:
    // 0x175a78: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x175a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_175a7c:
    // 0x175a7c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x175a7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_175a80:
    // 0x175a80: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x175a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_175a84:
    // 0x175a84: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x175a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_175a88:
    // 0x175a88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_175a8c:
    // 0x175a8c: 0xc05d610  jal         func_175840
label_175a90:
    if (ctx->pc == 0x175A90u) {
        ctx->pc = 0x175A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175A8Cu;
        // 0x175a90: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x175A94u;
        goto label_175a94;
    }
    ctx->pc = 0x175A8Cu;
    SET_GPR_U32(ctx, 31, 0x175A94u);
    ctx->pc = 0x175A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175A8Cu;
    // 0x175a90: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x175840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175840u, 0x175A8Cu, 0x175A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175A94u;
label_175a94:
    // 0x175a94: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x175a94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_175a98:
    // 0x175a98: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_175a9c:
    if (ctx->pc == 0x175A9Cu) {
        ctx->pc = 0x175AA0u;
        goto label_175aa0;
    }
    ctx->pc = 0x175A98u;
    {
        const bool branch_taken_0x175a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175a98) {
            ctx->pc = 0x175AFCu;
            goto label_175afc;
        }
    }
    ctx->pc = 0x175AA0u;
label_175aa0:
    // 0x175aa0: 0xc05dfea  jal         func_177FA8
label_175aa4:
    if (ctx->pc == 0x175AA4u) {
        ctx->pc = 0x175AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175AA0u;
        // 0x175aa4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175AA8u;
        goto label_175aa8;
    }
    ctx->pc = 0x175AA0u;
    SET_GPR_U32(ctx, 31, 0x175AA8u);
    ctx->pc = 0x175AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175AA0u;
    // 0x175aa4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177FA8u, 0x175AA0u, 0x175AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175AA8u;
label_175aa8:
    // 0x175aa8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x175aa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175aac:
    // 0x175aac: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
label_175ab0:
    if (ctx->pc == 0x175AB0u) {
        ctx->pc = 0x175AB4u;
        goto label_175ab4;
    }
    ctx->pc = 0x175AACu;
    {
        const bool branch_taken_0x175aac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x175aac) {
            ctx->pc = 0x175AFCu;
            goto label_175afc;
        }
    }
    ctx->pc = 0x175AB4u;
label_175ab4:
    // 0x175ab4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x175ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_175ab8:
    // 0x175ab8: 0x84500060  lh          $s0, 0x60($v0)
    ctx->pc = 0x175ab8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_175abc:
    // 0x175abc: 0x24510060  addiu       $s1, $v0, 0x60
    ctx->pc = 0x175abcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_175ac0:
    // 0x175ac0: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x175ac0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_175ac4:
    // 0x175ac4: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x175ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_175ac8:
    // 0x175ac8: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x175ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_175acc:
    // 0x175acc: 0x60f809  jalr        $v1
label_175ad0:
    if (ctx->pc == 0x175AD0u) {
        ctx->pc = 0x175AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175ACCu;
        // 0x175ad0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175AD4u;
        goto label_175ad4;
    }
    ctx->pc = 0x175ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x175AD4u);
        ctx->pc = 0x175AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175ACCu;
        // 0x175ad0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175ACCu, 0x175AD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x175AD4u;
label_175ad4:
    // 0x175ad4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x175ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_175ad8:
    // 0x175ad8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x175ad8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_175adc:
    // 0x175adc: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x175adcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_175ae0:
    // 0x175ae0: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x175ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_175ae4:
    // 0x175ae4: 0x60f809  jalr        $v1
label_175ae8:
    if (ctx->pc == 0x175AE8u) {
        ctx->pc = 0x175AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175AE4u;
        // 0x175ae8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175AECu;
        goto label_175aec;
    }
    ctx->pc = 0x175AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x175AECu);
        ctx->pc = 0x175AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175AE4u;
        // 0x175ae8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175AE4u, 0x175AECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x175AECu;
label_175aec:
    // 0x175aec: 0x4600a301  sub.s       $f12, $f20, $f0
    ctx->pc = 0x175aecu;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_175af0:
    // 0x175af0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x175af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_175af4:
    // 0x175af4: 0x40f809  jalr        $v0
label_175af8:
    if (ctx->pc == 0x175AF8u) {
        ctx->pc = 0x175AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175AF4u;
        // 0x175af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175AFCu;
        goto label_175afc;
    }
    ctx->pc = 0x175AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x175AFCu);
        ctx->pc = 0x175AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175AF4u;
        // 0x175af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175AF4u, 0x175AFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x175AFCu;
label_175afc:
    // 0x175afc: 0xc05d610  jal         func_175840
label_175b00:
    if (ctx->pc == 0x175B00u) {
        ctx->pc = 0x175B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175AFCu;
        // 0x175b00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175B04u;
        goto label_175b04;
    }
    ctx->pc = 0x175AFCu;
    SET_GPR_U32(ctx, 31, 0x175B04u);
    ctx->pc = 0x175B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175AFCu;
    // 0x175b00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175840u, 0x175AFCu, 0x175B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175B04u;
label_175b04:
    // 0x175b04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x175b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175b08:
    // 0x175b08: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_175b0c:
    if (ctx->pc == 0x175B0Cu) {
        ctx->pc = 0x175B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B08u;
        // 0x175b0c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175B10u;
        goto label_175b10;
    }
    ctx->pc = 0x175B08u;
    {
        const bool branch_taken_0x175b08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x175B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B08u;
        // 0x175b0c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175b08) {
            ctx->pc = 0x175B30u;
            goto label_175b30;
        }
    }
    ctx->pc = 0x175B10u;
label_175b10:
    // 0x175b10: 0x24420304  addiu       $v0, $v0, 0x304
    ctx->pc = 0x175b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 772));
label_175b14:
    // 0x175b14: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x175b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_175b18:
    // 0x175b18: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x175b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_175b1c:
    // 0x175b1c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x175b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_175b20:
    // 0x175b20: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x175b20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_175b24:
    // 0x175b24: 0x0  nop
    ctx->pc = 0x175b24u;
    // NOP
label_175b28:
    // 0x175b28: 0x1480fffb  bnez        $a0, . + 4 + (-0x5 << 2)
label_175b2c:
    if (ctx->pc == 0x175B2Cu) {
        ctx->pc = 0x175B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B28u;
        // 0x175b2c: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175B30u;
        goto label_175b30;
    }
    ctx->pc = 0x175B28u;
    {
        const bool branch_taken_0x175b28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x175B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B28u;
        // 0x175b2c: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175b28) {
            ctx->pc = 0x175B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175b18;
        }
    }
    ctx->pc = 0x175B30u;
label_175b30:
    // 0x175b30: 0xc05d610  jal         func_175840
label_175b34:
    if (ctx->pc == 0x175B34u) {
        ctx->pc = 0x175B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B30u;
        // 0x175b34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175B38u;
        goto label_175b38;
    }
    ctx->pc = 0x175B30u;
    SET_GPR_U32(ctx, 31, 0x175B38u);
    ctx->pc = 0x175B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175B30u;
    // 0x175b34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175840u, 0x175B30u, 0x175B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175B38u;
label_175b38:
    // 0x175b38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x175b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_175b3c:
    // 0x175b3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x175b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_175b40:
    // 0x175b40: 0xc05d612  jal         func_175848
label_175b44:
    if (ctx->pc == 0x175B44u) {
        ctx->pc = 0x175B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B40u;
        // 0x175b44: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x175B48u;
        goto label_175b48;
    }
    ctx->pc = 0x175B40u;
    SET_GPR_U32(ctx, 31, 0x175B48u);
    ctx->pc = 0x175B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175B40u;
    // 0x175b44: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x175848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175848u, 0x175B40u, 0x175B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175B48u;
label_175b48:
    // 0x175b48: 0xae740304  sw          $s4, 0x304($s3)
    ctx->pc = 0x175b48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 772), GPR_U32(ctx, 20));
label_175b4c:
    // 0x175b4c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x175b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_175b50:
    // 0x175b50: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x175b50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_175b54:
    // 0x175b54: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x175b54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_175b58:
    // 0x175b58: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x175b58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_175b5c:
    // 0x175b5c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x175b5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_175b60:
    // 0x175b60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_175b64:
    // 0x175b64: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x175b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_175b68:
    // 0x175b68: 0x3e00008  jr          $ra
label_175b6c:
    if (ctx->pc == 0x175B6Cu) {
        ctx->pc = 0x175B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B68u;
        // 0x175b6c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175B70u;
        goto label_175b70;
    }
    ctx->pc = 0x175B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B68u;
        // 0x175b6c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175B70u;
label_175b70:
    // 0x175b70: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x175b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_175b74:
    // 0x175b74: 0x0  nop
    ctx->pc = 0x175b74u;
    // NOP
    ctx->pc = 0x175b78u;
}
