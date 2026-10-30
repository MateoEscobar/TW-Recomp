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

// Function: sub_00108A78
// Address: 0x108a78 - 0x108ba8
void sub_00108A78_0x108a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108A78_0x108a78");
#endif

    switch (ctx->pc) {
        case 0x108a78u: goto label_108a78;
        case 0x108a7cu: goto label_108a7c;
        case 0x108a80u: goto label_108a80;
        case 0x108a84u: goto label_108a84;
        case 0x108a88u: goto label_108a88;
        case 0x108a8cu: goto label_108a8c;
        case 0x108a90u: goto label_108a90;
        case 0x108a94u: goto label_108a94;
        case 0x108a98u: goto label_108a98;
        case 0x108a9cu: goto label_108a9c;
        case 0x108aa0u: goto label_108aa0;
        case 0x108aa4u: goto label_108aa4;
        case 0x108aa8u: goto label_108aa8;
        case 0x108aacu: goto label_108aac;
        case 0x108ab0u: goto label_108ab0;
        case 0x108ab4u: goto label_108ab4;
        case 0x108ab8u: goto label_108ab8;
        case 0x108abcu: goto label_108abc;
        case 0x108ac0u: goto label_108ac0;
        case 0x108ac4u: goto label_108ac4;
        case 0x108ac8u: goto label_108ac8;
        case 0x108accu: goto label_108acc;
        case 0x108ad0u: goto label_108ad0;
        case 0x108ad4u: goto label_108ad4;
        case 0x108ad8u: goto label_108ad8;
        case 0x108adcu: goto label_108adc;
        case 0x108ae0u: goto label_108ae0;
        case 0x108ae4u: goto label_108ae4;
        case 0x108ae8u: goto label_108ae8;
        case 0x108aecu: goto label_108aec;
        case 0x108af0u: goto label_108af0;
        case 0x108af4u: goto label_108af4;
        case 0x108af8u: goto label_108af8;
        case 0x108afcu: goto label_108afc;
        case 0x108b00u: goto label_108b00;
        case 0x108b04u: goto label_108b04;
        case 0x108b08u: goto label_108b08;
        case 0x108b0cu: goto label_108b0c;
        case 0x108b10u: goto label_108b10;
        case 0x108b14u: goto label_108b14;
        case 0x108b18u: goto label_108b18;
        case 0x108b1cu: goto label_108b1c;
        case 0x108b20u: goto label_108b20;
        case 0x108b24u: goto label_108b24;
        case 0x108b28u: goto label_108b28;
        case 0x108b2cu: goto label_108b2c;
        case 0x108b30u: goto label_108b30;
        case 0x108b34u: goto label_108b34;
        case 0x108b38u: goto label_108b38;
        case 0x108b3cu: goto label_108b3c;
        case 0x108b40u: goto label_108b40;
        case 0x108b44u: goto label_108b44;
        case 0x108b48u: goto label_108b48;
        case 0x108b4cu: goto label_108b4c;
        case 0x108b50u: goto label_108b50;
        case 0x108b54u: goto label_108b54;
        case 0x108b58u: goto label_108b58;
        case 0x108b5cu: goto label_108b5c;
        case 0x108b60u: goto label_108b60;
        case 0x108b64u: goto label_108b64;
        case 0x108b68u: goto label_108b68;
        case 0x108b6cu: goto label_108b6c;
        case 0x108b70u: goto label_108b70;
        case 0x108b74u: goto label_108b74;
        case 0x108b78u: goto label_108b78;
        case 0x108b7cu: goto label_108b7c;
        case 0x108b80u: goto label_108b80;
        case 0x108b84u: goto label_108b84;
        case 0x108b88u: goto label_108b88;
        case 0x108b8cu: goto label_108b8c;
        case 0x108b90u: goto label_108b90;
        case 0x108b94u: goto label_108b94;
        case 0x108b98u: goto label_108b98;
        case 0x108b9cu: goto label_108b9c;
        case 0x108ba0u: goto label_108ba0;
        case 0x108ba4u: goto label_108ba4;
        default: break;
    }

    ctx->pc = 0x108a78u;

label_108a78:
    // 0x108a78: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x108a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_108a7c:
    // 0x108a7c: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x108a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_108a80:
    // 0x108a80: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x108a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_108a84:
    // 0x108a84: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x108a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_108a88:
    // 0x108a88: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x108a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_108a8c:
    // 0x108a8c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x108a8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_108a90:
    // 0x108a90: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x108a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_108a94:
    // 0x108a94: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x108a94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_108a98:
    // 0x108a98: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x108a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_108a9c:
    // 0x108a9c: 0x24424540  addiu       $v0, $v0, 0x4540
    ctx->pc = 0x108a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17728));
label_108aa0:
    // 0x108aa0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x108aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_108aa4:
    // 0x108aa4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x108aa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_108aa8:
    // 0x108aa8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x108aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_108aac:
    // 0x108aac: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x108aacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_108ab0:
    // 0x108ab0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x108ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_108ab4:
    // 0x108ab4: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x108ab4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_108ab8:
    // 0x108ab8: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x108ab8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_108abc:
    // 0x108abc: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x108abcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_108ac0:
    // 0x108ac0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x108ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_108ac4:
    // 0x108ac4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x108ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_108ac8:
    // 0x108ac8: 0xaeb20004  sw          $s2, 0x4($s5)
    ctx->pc = 0x108ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 18));
label_108acc:
    // 0x108acc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x108accu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_108ad0:
    // 0x108ad0: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x108ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_108ad4:
    // 0x108ad4: 0xaea90024  sw          $t1, 0x24($s5)
    ctx->pc = 0x108ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 9));
label_108ad8:
    // 0x108ad8: 0xaea30014  sw          $v1, 0x14($s5)
    ctx->pc = 0x108ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 3));
label_108adc:
    // 0x108adc: 0xc0e409a  jal         func_390268
label_108ae0:
    if (ctx->pc == 0x108AE0u) {
        ctx->pc = 0x108AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108ADCu;
        // 0x108ae0: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108AE4u;
        goto label_108ae4;
    }
    ctx->pc = 0x108ADCu;
    SET_GPR_U32(ctx, 31, 0x108AE4u);
    ctx->pc = 0x108AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108ADCu;
    // 0x108ae0: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x108ADCu, 0x108AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108AE4u;
label_108ae4:
    // 0x108ae4: 0x8c4400d8  lw          $a0, 0xD8($v0)
    ctx->pc = 0x108ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
label_108ae8:
    // 0x108ae8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x108ae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_108aec:
    // 0x108aec: 0xc05d420  jal         func_175080
label_108af0:
    if (ctx->pc == 0x108AF0u) {
        ctx->pc = 0x108AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108AECu;
        // 0x108af0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108AF4u;
        goto label_108af4;
    }
    ctx->pc = 0x108AECu;
    SET_GPR_U32(ctx, 31, 0x108AF4u);
    ctx->pc = 0x108AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108AECu;
    // 0x108af0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175080u, 0x108AECu, 0x108AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108AF4u;
label_108af4:
    // 0x108af4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x108af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_108af8:
    // 0x108af8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x108af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108afc:
    // 0x108afc: 0xc042ed8  jal         func_10BB60
label_108b00:
    if (ctx->pc == 0x108B00u) {
        ctx->pc = 0x108B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108AFCu;
        // 0x108b00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108B04u;
        goto label_108b04;
    }
    ctx->pc = 0x108AFCu;
    SET_GPR_U32(ctx, 31, 0x108B04u);
    ctx->pc = 0x108B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108AFCu;
    // 0x108b00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB60u, 0x108AFCu, 0x108B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108B04u;
label_108b04:
    // 0x108b04: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x108b04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_108b08:
    // 0x108b08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x108b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_108b0c:
    // 0x108b0c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x108b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_108b10:
    // 0x108b10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x108b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108b14:
    // 0x108b14: 0xc041164  jal         func_104590
label_108b18:
    if (ctx->pc == 0x108B18u) {
        ctx->pc = 0x108B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B14u;
        // 0x108b18: 0xaea20018  sw          $v0, 0x18($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108B1Cu;
        goto label_108b1c;
    }
    ctx->pc = 0x108B14u;
    SET_GPR_U32(ctx, 31, 0x108B1Cu);
    ctx->pc = 0x108B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108B14u;
    // 0x108b18: 0xaea20018  sw          $v0, 0x18($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x108B14u, 0x108B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108B1Cu;
label_108b1c:
    // 0x108b1c: 0xc0e409a  jal         func_390268
label_108b20:
    if (ctx->pc == 0x108B20u) {
        ctx->pc = 0x108B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B1Cu;
        // 0x108b20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108B24u;
        goto label_108b24;
    }
    ctx->pc = 0x108B1Cu;
    SET_GPR_U32(ctx, 31, 0x108B24u);
    ctx->pc = 0x108B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108B1Cu;
    // 0x108b20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x108B1Cu, 0x108B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108B24u;
label_108b24:
    // 0x108b24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x108b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108b28:
    // 0x108b28: 0xc04128e  jal         func_104A38
label_108b2c:
    if (ctx->pc == 0x108B2Cu) {
        ctx->pc = 0x108B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B28u;
        // 0x108b2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108B30u;
        goto label_108b30;
    }
    ctx->pc = 0x108B28u;
    SET_GPR_U32(ctx, 31, 0x108B30u);
    ctx->pc = 0x108B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108B28u;
    // 0x108b2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A38u, 0x108B28u, 0x108B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108B30u;
label_108b30:
    // 0x108b30: 0xe6a0000c  swc1        $f0, 0xC($s5)
    ctx->pc = 0x108b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_108b34:
    // 0x108b34: 0xaeb30028  sw          $s3, 0x28($s5)
    ctx->pc = 0x108b34u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 19));
label_108b38:
    // 0x108b38: 0xaeb4002c  sw          $s4, 0x2C($s5)
    ctx->pc = 0x108b38u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 20));
label_108b3c:
    // 0x108b3c: 0x12c00008  beqz        $s6, . + 4 + (0x8 << 2)
label_108b40:
    if (ctx->pc == 0x108B40u) {
        ctx->pc = 0x108B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B3Cu;
        // 0x108b40: 0xaeb6001c  sw          $s6, 0x1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108B44u;
        goto label_108b44;
    }
    ctx->pc = 0x108B3Cu;
    {
        const bool branch_taken_0x108b3c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x108B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B3Cu;
        // 0x108b40: 0xaeb6001c  sw          $s6, 0x1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108b3c) {
            ctx->pc = 0x108B60u;
            goto label_108b60;
        }
    }
    ctx->pc = 0x108B44u;
label_108b44:
    // 0x108b44: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x108b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_108b48:
    // 0x108b48: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x108b48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_108b4c:
    // 0x108b4c: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x108b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_108b50:
    // 0x108b50: 0x60f809  jalr        $v1
label_108b54:
    if (ctx->pc == 0x108B54u) {
        ctx->pc = 0x108B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B50u;
        // 0x108b54: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108B58u;
        goto label_108b58;
    }
    ctx->pc = 0x108B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x108B58u);
        ctx->pc = 0x108B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B50u;
        // 0x108b54: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108B50u, 0x108B58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108B58u;
label_108b58:
    // 0x108b58: 0x10000002  b           . + 4 + (0x2 << 2)
label_108b5c:
    if (ctx->pc == 0x108B5Cu) {
        ctx->pc = 0x108B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B58u;
        // 0x108b5c: 0xe6a00020  swc1        $f0, 0x20($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108B60u;
        goto label_108b60;
    }
    ctx->pc = 0x108B58u;
    {
        const bool branch_taken_0x108b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B58u;
        // 0x108b5c: 0xe6a00020  swc1        $f0, 0x20($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x108b58) {
            ctx->pc = 0x108B64u;
            goto label_108b64;
        }
    }
    ctx->pc = 0x108B60u;
label_108b60:
    // 0x108b60: 0xaea00020  sw          $zero, 0x20($s5)
    ctx->pc = 0x108b60u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 0));
label_108b64:
    // 0x108b64: 0xc6a00020  lwc1        $f0, 0x20($s5)
    ctx->pc = 0x108b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_108b68:
    // 0x108b68: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x108b68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_108b6c:
    // 0x108b6c: 0x0  nop
    ctx->pc = 0x108b6cu;
    // NOP
label_108b70:
    // 0x108b70: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_108b74:
    if (ctx->pc == 0x108B74u) {
        ctx->pc = 0x108B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B70u;
        // 0x108b74: 0xe6b40020  swc1        $f20, 0x20($s5) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108B78u;
        goto label_108b78;
    }
    ctx->pc = 0x108B70u;
    {
        const bool branch_taken_0x108b70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x108b70) {
            ctx->pc = 0x108B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108B70u;
            // 0x108b74: 0xe6b40020  swc1        $f20, 0x20($s5) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x108B78u;
            goto label_108b78;
        }
    }
    ctx->pc = 0x108B78u;
label_108b78:
    // 0x108b78: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x108b78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_108b7c:
    // 0x108b7c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x108b7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_108b80:
    // 0x108b80: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x108b80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_108b84:
    // 0x108b84: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x108b84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_108b88:
    // 0x108b88: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x108b88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_108b8c:
    // 0x108b8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x108b8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_108b90:
    // 0x108b90: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x108b90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_108b94:
    // 0x108b94: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x108b94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_108b98:
    // 0x108b98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x108b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_108b9c:
    // 0x108b9c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x108b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_108ba0:
    // 0x108ba0: 0x3e00008  jr          $ra
label_108ba4:
    if (ctx->pc == 0x108BA4u) {
        ctx->pc = 0x108BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108BA0u;
        // 0x108ba4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108BA8u;
        goto label_fallthrough_0x108ba0;
    }
    ctx->pc = 0x108BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108BA0u;
        // 0x108ba4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x108ba0:
    ctx->pc = 0x108BA8u;
}
