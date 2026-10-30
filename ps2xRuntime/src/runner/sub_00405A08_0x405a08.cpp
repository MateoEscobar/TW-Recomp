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

// Function: sub_00405A08
// Address: 0x405a08 - 0x405bd8
void sub_00405A08_0x405a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00405A08_0x405a08");
#endif

    switch (ctx->pc) {
        case 0x405a08u: goto label_405a08;
        case 0x405a0cu: goto label_405a0c;
        case 0x405a10u: goto label_405a10;
        case 0x405a14u: goto label_405a14;
        case 0x405a18u: goto label_405a18;
        case 0x405a1cu: goto label_405a1c;
        case 0x405a20u: goto label_405a20;
        case 0x405a24u: goto label_405a24;
        case 0x405a28u: goto label_405a28;
        case 0x405a2cu: goto label_405a2c;
        case 0x405a30u: goto label_405a30;
        case 0x405a34u: goto label_405a34;
        case 0x405a38u: goto label_405a38;
        case 0x405a3cu: goto label_405a3c;
        case 0x405a40u: goto label_405a40;
        case 0x405a44u: goto label_405a44;
        case 0x405a48u: goto label_405a48;
        case 0x405a4cu: goto label_405a4c;
        case 0x405a50u: goto label_405a50;
        case 0x405a54u: goto label_405a54;
        case 0x405a58u: goto label_405a58;
        case 0x405a5cu: goto label_405a5c;
        case 0x405a60u: goto label_405a60;
        case 0x405a64u: goto label_405a64;
        case 0x405a68u: goto label_405a68;
        case 0x405a6cu: goto label_405a6c;
        case 0x405a70u: goto label_405a70;
        case 0x405a74u: goto label_405a74;
        case 0x405a78u: goto label_405a78;
        case 0x405a7cu: goto label_405a7c;
        case 0x405a80u: goto label_405a80;
        case 0x405a84u: goto label_405a84;
        case 0x405a88u: goto label_405a88;
        case 0x405a8cu: goto label_405a8c;
        case 0x405a90u: goto label_405a90;
        case 0x405a94u: goto label_405a94;
        case 0x405a98u: goto label_405a98;
        case 0x405a9cu: goto label_405a9c;
        case 0x405aa0u: goto label_405aa0;
        case 0x405aa4u: goto label_405aa4;
        case 0x405aa8u: goto label_405aa8;
        case 0x405aacu: goto label_405aac;
        case 0x405ab0u: goto label_405ab0;
        case 0x405ab4u: goto label_405ab4;
        case 0x405ab8u: goto label_405ab8;
        case 0x405abcu: goto label_405abc;
        case 0x405ac0u: goto label_405ac0;
        case 0x405ac4u: goto label_405ac4;
        case 0x405ac8u: goto label_405ac8;
        case 0x405accu: goto label_405acc;
        case 0x405ad0u: goto label_405ad0;
        case 0x405ad4u: goto label_405ad4;
        case 0x405ad8u: goto label_405ad8;
        case 0x405adcu: goto label_405adc;
        case 0x405ae0u: goto label_405ae0;
        case 0x405ae4u: goto label_405ae4;
        case 0x405ae8u: goto label_405ae8;
        case 0x405aecu: goto label_405aec;
        case 0x405af0u: goto label_405af0;
        case 0x405af4u: goto label_405af4;
        case 0x405af8u: goto label_405af8;
        case 0x405afcu: goto label_405afc;
        case 0x405b00u: goto label_405b00;
        case 0x405b04u: goto label_405b04;
        case 0x405b08u: goto label_405b08;
        case 0x405b0cu: goto label_405b0c;
        case 0x405b10u: goto label_405b10;
        case 0x405b14u: goto label_405b14;
        case 0x405b18u: goto label_405b18;
        case 0x405b1cu: goto label_405b1c;
        case 0x405b20u: goto label_405b20;
        case 0x405b24u: goto label_405b24;
        case 0x405b28u: goto label_405b28;
        case 0x405b2cu: goto label_405b2c;
        case 0x405b30u: goto label_405b30;
        case 0x405b34u: goto label_405b34;
        case 0x405b38u: goto label_405b38;
        case 0x405b3cu: goto label_405b3c;
        case 0x405b40u: goto label_405b40;
        case 0x405b44u: goto label_405b44;
        case 0x405b48u: goto label_405b48;
        case 0x405b4cu: goto label_405b4c;
        case 0x405b50u: goto label_405b50;
        case 0x405b54u: goto label_405b54;
        case 0x405b58u: goto label_405b58;
        case 0x405b5cu: goto label_405b5c;
        case 0x405b60u: goto label_405b60;
        case 0x405b64u: goto label_405b64;
        case 0x405b68u: goto label_405b68;
        case 0x405b6cu: goto label_405b6c;
        case 0x405b70u: goto label_405b70;
        case 0x405b74u: goto label_405b74;
        case 0x405b78u: goto label_405b78;
        case 0x405b7cu: goto label_405b7c;
        case 0x405b80u: goto label_405b80;
        case 0x405b84u: goto label_405b84;
        case 0x405b88u: goto label_405b88;
        case 0x405b8cu: goto label_405b8c;
        case 0x405b90u: goto label_405b90;
        case 0x405b94u: goto label_405b94;
        case 0x405b98u: goto label_405b98;
        case 0x405b9cu: goto label_405b9c;
        case 0x405ba0u: goto label_405ba0;
        case 0x405ba4u: goto label_405ba4;
        case 0x405ba8u: goto label_405ba8;
        case 0x405bacu: goto label_405bac;
        case 0x405bb0u: goto label_405bb0;
        case 0x405bb4u: goto label_405bb4;
        case 0x405bb8u: goto label_405bb8;
        case 0x405bbcu: goto label_405bbc;
        case 0x405bc0u: goto label_405bc0;
        case 0x405bc4u: goto label_405bc4;
        case 0x405bc8u: goto label_405bc8;
        case 0x405bccu: goto label_405bcc;
        case 0x405bd0u: goto label_405bd0;
        case 0x405bd4u: goto label_405bd4;
        default: break;
    }

    ctx->pc = 0x405a08u;

label_405a08:
    // 0x405a08: 0x27bdfb50  addiu       $sp, $sp, -0x4B0
    ctx->pc = 0x405a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966096));
label_405a0c:
    // 0x405a0c: 0x7fb20470  sq          $s2, 0x470($sp)
    ctx->pc = 0x405a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 18));
label_405a10:
    // 0x405a10: 0x7fb30460  sq          $s3, 0x460($sp)
    ctx->pc = 0x405a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 19));
label_405a14:
    // 0x405a14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x405a14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_405a18:
    // 0x405a18: 0x7fb00490  sq          $s0, 0x490($sp)
    ctx->pc = 0x405a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 16));
label_405a1c:
    // 0x405a1c: 0x7fb10480  sq          $s1, 0x480($sp)
    ctx->pc = 0x405a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 17));
label_405a20:
    // 0x405a20: 0xffbf0450  sd          $ra, 0x450($sp)
    ctx->pc = 0x405a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 31));
label_405a24:
    // 0x405a24: 0xe7b404a0  swc1        $f20, 0x4A0($sp)
    ctx->pc = 0x405a24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1184), bits); }
label_405a28:
    // 0x405a28: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x405a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_405a2c:
    // 0x405a2c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x405a2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_405a30:
    // 0x405a30: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x405a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_405a34:
    // 0x405a34: 0x40f809  jalr        $v0
label_405a38:
    if (ctx->pc == 0x405A38u) {
        ctx->pc = 0x405A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405A34u;
        // 0x405a38: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405A3Cu;
        goto label_405a3c;
    }
    ctx->pc = 0x405A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x405A3Cu);
        ctx->pc = 0x405A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405A34u;
        // 0x405a38: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x405A34u, 0x405A3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x405A3Cu;
label_405a3c:
    // 0x405a3c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x405a3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_405a40:
    // 0x405a40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x405a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_405a44:
    // 0x405a44: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x405a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_405a48:
    // 0x405a48: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x405a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_405a4c:
    // 0x405a4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x405a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_405a50:
    // 0x405a50: 0x0  nop
    ctx->pc = 0x405a50u;
    // NOP
label_405a54:
    // 0x405a54: 0x0  nop
    ctx->pc = 0x405a54u;
    // NOP
label_405a58:
    // 0x405a58: 0x0  nop
    ctx->pc = 0x405a58u;
    // NOP
label_405a5c:
    // 0x405a5c: 0x0  nop
    ctx->pc = 0x405a5cu;
    // NOP
label_405a60:
    // 0x405a60: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_405a64:
    if (ctx->pc == 0x405A64u) {
        ctx->pc = 0x405A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405A60u;
        // 0x405a64: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405A68u;
        goto label_405a68;
    }
    ctx->pc = 0x405A60u;
    {
        const bool branch_taken_0x405a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x405A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405A60u;
        // 0x405a64: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405a60) {
            ctx->pc = 0x405A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_405a50;
        }
    }
    ctx->pc = 0x405A68u;
label_405a68:
    // 0x405a68: 0xc138ddc  jal         func_4E3770
label_405a6c:
    if (ctx->pc == 0x405A6Cu) {
        ctx->pc = 0x405A70u;
        goto label_405a70;
    }
    ctx->pc = 0x405A68u;
    SET_GPR_U32(ctx, 31, 0x405A70u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x405A68u, 0x405A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405A70u;
label_405a70:
    // 0x405a70: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x405a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_405a74:
    // 0x405a74: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x405a74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_405a78:
    // 0x405a78: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_405a7c:
    if (ctx->pc == 0x405A7Cu) {
        ctx->pc = 0x405A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405A78u;
        // 0x405a7c: 0xc65400bc  lwc1        $f20, 0xBC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x405A80u;
        goto label_405a80;
    }
    ctx->pc = 0x405A78u;
    {
        const bool branch_taken_0x405a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x405a78) {
            ctx->pc = 0x405A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x405A78u;
            // 0x405a7c: 0xc65400bc  lwc1        $f20, 0xBC($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x405A88u;
            goto label_405a88;
        }
    }
    ctx->pc = 0x405A80u;
label_405a80:
    // 0x405a80: 0x1000004c  b           . + 4 + (0x4C << 2)
label_405a84:
    if (ctx->pc == 0x405A84u) {
        ctx->pc = 0x405A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405A80u;
        // 0x405a84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405A88u;
        goto label_405a88;
    }
    ctx->pc = 0x405A80u;
    {
        const bool branch_taken_0x405a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x405A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405A80u;
        // 0x405a84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405a80) {
            ctx->pc = 0x405BB4u;
            goto label_405bb4;
        }
    }
    ctx->pc = 0x405A88u;
label_405a88:
    // 0x405a88: 0x27b10430  addiu       $s1, $sp, 0x430
    ctx->pc = 0x405a88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_405a8c:
    // 0x405a8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x405a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_405a90:
    // 0x405a90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x405a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_405a94:
    // 0x405a94: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x405a94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_405a98:
    // 0x405a98: 0xe7b40438  swc1        $f20, 0x438($sp)
    ctx->pc = 0x405a98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1080), bits); }
label_405a9c:
    // 0x405a9c: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x405a9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_405aa0:
    // 0x405aa0: 0xafa00430  sw          $zero, 0x430($sp)
    ctx->pc = 0x405aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 0));
label_405aa4:
    // 0x405aa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x405aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_405aa8:
    // 0x405aa8: 0xafa00434  sw          $zero, 0x434($sp)
    ctx->pc = 0x405aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1076), GPR_U32(ctx, 0));
label_405aac:
    // 0x405aac: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x405aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_405ab0:
    // 0x405ab0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x405ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_405ab4:
    // 0x405ab4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x405ab4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_405ab8:
    // 0x405ab8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x405ab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_405abc:
    // 0x405abc: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x405abcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_405ac0:
    // 0x405ac0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x405ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_405ac4:
    // 0x405ac4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x405ac4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_405ac8:
    // 0x405ac8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x405ac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_405acc:
    // 0x405acc: 0xc0cd518  jal         func_335460
label_405ad0:
    if (ctx->pc == 0x405AD0u) {
        ctx->pc = 0x405AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405ACCu;
        // 0x405ad0: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405AD4u;
        goto label_405ad4;
    }
    ctx->pc = 0x405ACCu;
    SET_GPR_U32(ctx, 31, 0x405AD4u);
    ctx->pc = 0x405AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405ACCu;
    // 0x405ad0: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x405ACCu, 0x405AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405AD4u;
label_405ad4:
    // 0x405ad4: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x405ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_405ad8:
    // 0x405ad8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x405ad8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_405adc:
    // 0x405adc: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x405adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_405ae0:
    // 0x405ae0: 0xc136b24  jal         func_4DAC90
label_405ae4:
    if (ctx->pc == 0x405AE4u) {
        ctx->pc = 0x405AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405AE0u;
        // 0x405ae4: 0x24a531a0  addiu       $a1, $a1, 0x31A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405AE8u;
        goto label_405ae8;
    }
    ctx->pc = 0x405AE0u;
    SET_GPR_U32(ctx, 31, 0x405AE8u);
    ctx->pc = 0x405AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405AE0u;
    // 0x405ae4: 0x24a531a0  addiu       $a1, $a1, 0x31A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x405AE0u, 0x405AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405AE8u;
label_405ae8:
    // 0x405ae8: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x405ae8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_405aec:
    // 0x405aec: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x405aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_405af0:
    // 0x405af0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x405af0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_405af4:
    // 0x405af4: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x405af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_405af8:
    // 0x405af8: 0xc136b18  jal         func_4DAC60
label_405afc:
    if (ctx->pc == 0x405AFCu) {
        ctx->pc = 0x405AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405AF8u;
        // 0x405afc: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405B00u;
        goto label_405b00;
    }
    ctx->pc = 0x405AF8u;
    SET_GPR_U32(ctx, 31, 0x405B00u);
    ctx->pc = 0x405AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405AF8u;
    // 0x405afc: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x405AF8u, 0x405B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405B00u;
label_405b00:
    // 0x405b00: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x405b00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_405b04:
    // 0x405b04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x405b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_405b08:
    // 0x405b08: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x405b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_405b0c:
    // 0x405b0c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x405b0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_405b10:
    // 0x405b10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x405b10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_405b14:
    // 0x405b14: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x405b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_405b18:
    // 0x405b18: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x405b18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_405b1c:
    // 0x405b1c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x405b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_405b20:
    // 0x405b20: 0xc0cd518  jal         func_335460
label_405b24:
    if (ctx->pc == 0x405B24u) {
        ctx->pc = 0x405B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405B20u;
        // 0x405b24: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405B28u;
        goto label_405b28;
    }
    ctx->pc = 0x405B20u;
    SET_GPR_U32(ctx, 31, 0x405B28u);
    ctx->pc = 0x405B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405B20u;
    // 0x405b24: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x405B20u, 0x405B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405B28u;
label_405b28:
    // 0x405b28: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x405b28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_405b2c:
    // 0x405b2c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x405b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_405b30:
    // 0x405b30: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_405b34:
    if (ctx->pc == 0x405B34u) {
        ctx->pc = 0x405B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405B30u;
        // 0x405b34: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x405B38u;
        goto label_405b38;
    }
    ctx->pc = 0x405B30u;
    {
        const bool branch_taken_0x405b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x405B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405B30u;
        // 0x405b34: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x405b30) {
            ctx->pc = 0x405B58u;
            goto label_405b58;
        }
    }
    ctx->pc = 0x405B38u;
label_405b38:
    // 0x405b38: 0x3c022020  lui         $v0, 0x2020
    ctx->pc = 0x405b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8224 << 16));
label_405b3c:
    // 0x405b3c: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x405b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
label_405b40:
    // 0x405b40: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x405b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
label_405b44:
    // 0x405b44: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x405b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_405b48:
    // 0x405b48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x405b48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_405b4c:
    // 0x405b4c: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x405b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
label_405b50:
    // 0x405b50: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x405b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_405b54:
    // 0x405b54: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x405b54u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_405b58:
    // 0x405b58: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x405b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_405b5c:
    // 0x405b5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x405b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_405b60:
    // 0x405b60: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_405b64:
    if (ctx->pc == 0x405B64u) {
        ctx->pc = 0x405B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405B60u;
        // 0x405b64: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405B68u;
        goto label_405b68;
    }
    ctx->pc = 0x405B60u;
    {
        const bool branch_taken_0x405b60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x405B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405B60u;
        // 0x405b64: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405b60) {
            ctx->pc = 0x405B80u;
            goto label_405b80;
        }
    }
    ctx->pc = 0x405B68u;
label_405b68:
    // 0x405b68: 0xc6740004  lwc1        $f20, 0x4($s3)
    ctx->pc = 0x405b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_405b6c:
    // 0x405b6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x405b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_405b70:
    // 0x405b70: 0xc0e858c  jal         func_3A1630
label_405b74:
    if (ctx->pc == 0x405B74u) {
        ctx->pc = 0x405B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405B70u;
        // 0x405b74: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405B78u;
        goto label_405b78;
    }
    ctx->pc = 0x405B70u;
    SET_GPR_U32(ctx, 31, 0x405B78u);
    ctx->pc = 0x405B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405B70u;
    // 0x405b74: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x405B70u, 0x405B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405B78u;
label_405b78:
    // 0x405b78: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x405b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_405b7c:
    // 0x405b7c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x405b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_405b80:
    // 0x405b80: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_405b84:
    if (ctx->pc == 0x405B84u) {
        ctx->pc = 0x405B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405B80u;
        // 0x405b84: 0xe65400c0  swc1        $f20, 0xC0($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x405B88u;
        goto label_405b88;
    }
    ctx->pc = 0x405B80u;
    {
        const bool branch_taken_0x405b80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x405b80) {
            ctx->pc = 0x405B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x405B80u;
            // 0x405b84: 0xe65400c0  swc1        $f20, 0xC0($s2) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x405BA4u;
            goto label_405ba4;
        }
    }
    ctx->pc = 0x405B88u;
label_405b88:
    // 0x405b88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x405b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_405b8c:
    // 0x405b8c: 0xc0e858c  jal         func_3A1630
label_405b90:
    if (ctx->pc == 0x405B90u) {
        ctx->pc = 0x405B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405B8Cu;
        // 0x405b90: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405B94u;
        goto label_405b94;
    }
    ctx->pc = 0x405B8Cu;
    SET_GPR_U32(ctx, 31, 0x405B94u);
    ctx->pc = 0x405B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405B8Cu;
    // 0x405b90: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x405B8Cu, 0x405B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405B94u;
label_405b94:
    // 0x405b94: 0x3c021010  lui         $v0, 0x1010
    ctx->pc = 0x405b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4112 << 16));
label_405b98:
    // 0x405b98: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x405b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_405b9c:
    // 0x405b9c: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x405b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
label_405ba0:
    // 0x405ba0: 0xe65400c0  swc1        $f20, 0xC0($s2)
    ctx->pc = 0x405ba0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
label_405ba4:
    // 0x405ba4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x405ba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_405ba8:
    // 0x405ba8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x405ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_405bac:
    // 0x405bac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x405bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_405bb0:
    // 0x405bb0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x405bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_405bb4:
    // 0x405bb4: 0x7bb00490  lq          $s0, 0x490($sp)
    ctx->pc = 0x405bb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_405bb8:
    // 0x405bb8: 0x7bb10480  lq          $s1, 0x480($sp)
    ctx->pc = 0x405bb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_405bbc:
    // 0x405bbc: 0x7bb20470  lq          $s2, 0x470($sp)
    ctx->pc = 0x405bbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_405bc0:
    // 0x405bc0: 0x7bb30460  lq          $s3, 0x460($sp)
    ctx->pc = 0x405bc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_405bc4:
    // 0x405bc4: 0xdfbf0450  ld          $ra, 0x450($sp)
    ctx->pc = 0x405bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
label_405bc8:
    // 0x405bc8: 0xc7b404a0  lwc1        $f20, 0x4A0($sp)
    ctx->pc = 0x405bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_405bcc:
    // 0x405bcc: 0x3e00008  jr          $ra
label_405bd0:
    if (ctx->pc == 0x405BD0u) {
        ctx->pc = 0x405BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405BCCu;
        // 0x405bd0: 0x27bd04b0  addiu       $sp, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405BD4u;
        goto label_405bd4;
    }
    ctx->pc = 0x405BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x405BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405BCCu;
        // 0x405bd0: 0x27bd04b0  addiu       $sp, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x405BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x405BD4u;
label_405bd4:
    // 0x405bd4: 0x0  nop
    ctx->pc = 0x405bd4u;
    // NOP
    ctx->pc = 0x405bd8u;
}
