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

// Function: sub_003B1A28
// Address: 0x3b1a28 - 0x3b1c48
void sub_003B1A28_0x3b1a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1A28_0x3b1a28");
#endif

    switch (ctx->pc) {
        case 0x3b1a28u: goto label_3b1a28;
        case 0x3b1a2cu: goto label_3b1a2c;
        case 0x3b1a30u: goto label_3b1a30;
        case 0x3b1a34u: goto label_3b1a34;
        case 0x3b1a38u: goto label_3b1a38;
        case 0x3b1a3cu: goto label_3b1a3c;
        case 0x3b1a40u: goto label_3b1a40;
        case 0x3b1a44u: goto label_3b1a44;
        case 0x3b1a48u: goto label_3b1a48;
        case 0x3b1a4cu: goto label_3b1a4c;
        case 0x3b1a50u: goto label_3b1a50;
        case 0x3b1a54u: goto label_3b1a54;
        case 0x3b1a58u: goto label_3b1a58;
        case 0x3b1a5cu: goto label_3b1a5c;
        case 0x3b1a60u: goto label_3b1a60;
        case 0x3b1a64u: goto label_3b1a64;
        case 0x3b1a68u: goto label_3b1a68;
        case 0x3b1a6cu: goto label_3b1a6c;
        case 0x3b1a70u: goto label_3b1a70;
        case 0x3b1a74u: goto label_3b1a74;
        case 0x3b1a78u: goto label_3b1a78;
        case 0x3b1a7cu: goto label_3b1a7c;
        case 0x3b1a80u: goto label_3b1a80;
        case 0x3b1a84u: goto label_3b1a84;
        case 0x3b1a88u: goto label_3b1a88;
        case 0x3b1a8cu: goto label_3b1a8c;
        case 0x3b1a90u: goto label_3b1a90;
        case 0x3b1a94u: goto label_3b1a94;
        case 0x3b1a98u: goto label_3b1a98;
        case 0x3b1a9cu: goto label_3b1a9c;
        case 0x3b1aa0u: goto label_3b1aa0;
        case 0x3b1aa4u: goto label_3b1aa4;
        case 0x3b1aa8u: goto label_3b1aa8;
        case 0x3b1aacu: goto label_3b1aac;
        case 0x3b1ab0u: goto label_3b1ab0;
        case 0x3b1ab4u: goto label_3b1ab4;
        case 0x3b1ab8u: goto label_3b1ab8;
        case 0x3b1abcu: goto label_3b1abc;
        case 0x3b1ac0u: goto label_3b1ac0;
        case 0x3b1ac4u: goto label_3b1ac4;
        case 0x3b1ac8u: goto label_3b1ac8;
        case 0x3b1accu: goto label_3b1acc;
        case 0x3b1ad0u: goto label_3b1ad0;
        case 0x3b1ad4u: goto label_3b1ad4;
        case 0x3b1ad8u: goto label_3b1ad8;
        case 0x3b1adcu: goto label_3b1adc;
        case 0x3b1ae0u: goto label_3b1ae0;
        case 0x3b1ae4u: goto label_3b1ae4;
        case 0x3b1ae8u: goto label_3b1ae8;
        case 0x3b1aecu: goto label_3b1aec;
        case 0x3b1af0u: goto label_3b1af0;
        case 0x3b1af4u: goto label_3b1af4;
        case 0x3b1af8u: goto label_3b1af8;
        case 0x3b1afcu: goto label_3b1afc;
        case 0x3b1b00u: goto label_3b1b00;
        case 0x3b1b04u: goto label_3b1b04;
        case 0x3b1b08u: goto label_3b1b08;
        case 0x3b1b0cu: goto label_3b1b0c;
        case 0x3b1b10u: goto label_3b1b10;
        case 0x3b1b14u: goto label_3b1b14;
        case 0x3b1b18u: goto label_3b1b18;
        case 0x3b1b1cu: goto label_3b1b1c;
        case 0x3b1b20u: goto label_3b1b20;
        case 0x3b1b24u: goto label_3b1b24;
        case 0x3b1b28u: goto label_3b1b28;
        case 0x3b1b2cu: goto label_3b1b2c;
        case 0x3b1b30u: goto label_3b1b30;
        case 0x3b1b34u: goto label_3b1b34;
        case 0x3b1b38u: goto label_3b1b38;
        case 0x3b1b3cu: goto label_3b1b3c;
        case 0x3b1b40u: goto label_3b1b40;
        case 0x3b1b44u: goto label_3b1b44;
        case 0x3b1b48u: goto label_3b1b48;
        case 0x3b1b4cu: goto label_3b1b4c;
        case 0x3b1b50u: goto label_3b1b50;
        case 0x3b1b54u: goto label_3b1b54;
        case 0x3b1b58u: goto label_3b1b58;
        case 0x3b1b5cu: goto label_3b1b5c;
        case 0x3b1b60u: goto label_3b1b60;
        case 0x3b1b64u: goto label_3b1b64;
        case 0x3b1b68u: goto label_3b1b68;
        case 0x3b1b6cu: goto label_3b1b6c;
        case 0x3b1b70u: goto label_3b1b70;
        case 0x3b1b74u: goto label_3b1b74;
        case 0x3b1b78u: goto label_3b1b78;
        case 0x3b1b7cu: goto label_3b1b7c;
        case 0x3b1b80u: goto label_3b1b80;
        case 0x3b1b84u: goto label_3b1b84;
        case 0x3b1b88u: goto label_3b1b88;
        case 0x3b1b8cu: goto label_3b1b8c;
        case 0x3b1b90u: goto label_3b1b90;
        case 0x3b1b94u: goto label_3b1b94;
        case 0x3b1b98u: goto label_3b1b98;
        case 0x3b1b9cu: goto label_3b1b9c;
        case 0x3b1ba0u: goto label_3b1ba0;
        case 0x3b1ba4u: goto label_3b1ba4;
        case 0x3b1ba8u: goto label_3b1ba8;
        case 0x3b1bacu: goto label_3b1bac;
        case 0x3b1bb0u: goto label_3b1bb0;
        case 0x3b1bb4u: goto label_3b1bb4;
        case 0x3b1bb8u: goto label_3b1bb8;
        case 0x3b1bbcu: goto label_3b1bbc;
        case 0x3b1bc0u: goto label_3b1bc0;
        case 0x3b1bc4u: goto label_3b1bc4;
        case 0x3b1bc8u: goto label_3b1bc8;
        case 0x3b1bccu: goto label_3b1bcc;
        case 0x3b1bd0u: goto label_3b1bd0;
        case 0x3b1bd4u: goto label_3b1bd4;
        case 0x3b1bd8u: goto label_3b1bd8;
        case 0x3b1bdcu: goto label_3b1bdc;
        case 0x3b1be0u: goto label_3b1be0;
        case 0x3b1be4u: goto label_3b1be4;
        case 0x3b1be8u: goto label_3b1be8;
        case 0x3b1becu: goto label_3b1bec;
        case 0x3b1bf0u: goto label_3b1bf0;
        case 0x3b1bf4u: goto label_3b1bf4;
        case 0x3b1bf8u: goto label_3b1bf8;
        case 0x3b1bfcu: goto label_3b1bfc;
        case 0x3b1c00u: goto label_3b1c00;
        case 0x3b1c04u: goto label_3b1c04;
        case 0x3b1c08u: goto label_3b1c08;
        case 0x3b1c0cu: goto label_3b1c0c;
        case 0x3b1c10u: goto label_3b1c10;
        case 0x3b1c14u: goto label_3b1c14;
        case 0x3b1c18u: goto label_3b1c18;
        case 0x3b1c1cu: goto label_3b1c1c;
        case 0x3b1c20u: goto label_3b1c20;
        case 0x3b1c24u: goto label_3b1c24;
        case 0x3b1c28u: goto label_3b1c28;
        case 0x3b1c2cu: goto label_3b1c2c;
        case 0x3b1c30u: goto label_3b1c30;
        case 0x3b1c34u: goto label_3b1c34;
        case 0x3b1c38u: goto label_3b1c38;
        case 0x3b1c3cu: goto label_3b1c3c;
        case 0x3b1c40u: goto label_3b1c40;
        case 0x3b1c44u: goto label_3b1c44;
        default: break;
    }

    ctx->pc = 0x3b1a28u;

label_3b1a28:
    // 0x3b1a28: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3b1a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3b1a2c:
    // 0x3b1a2c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3b1a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3b1a30:
    // 0x3b1a30: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3b1a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_3b1a34:
    // 0x3b1a34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b1a34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b1a38:
    // 0x3b1a38: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3b1a38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b1a3c:
    // 0x3b1a3c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3b1a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_3b1a40:
    // 0x3b1a40: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3b1a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_3b1a44:
    // 0x3b1a44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b1a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b1a48:
    // 0x3b1a48: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3b1a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3b1a4c:
    // 0x3b1a4c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3b1a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3b1a50:
    // 0x3b1a50: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3b1a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3b1a54:
    // 0x3b1a54: 0xc0e4060  jal         func_390180
label_3b1a58:
    if (ctx->pc == 0x3B1A58u) {
        ctx->pc = 0x3B1A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A54u;
        // 0x3b1a58: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1A5Cu;
        goto label_3b1a5c;
    }
    ctx->pc = 0x3B1A54u;
    SET_GPR_U32(ctx, 31, 0x3B1A5Cu);
    ctx->pc = 0x3B1A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1A54u;
    // 0x3b1a58: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3B1A54u, 0x3B1A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1A5Cu;
label_3b1a5c:
    // 0x3b1a5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b1a5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b1a60:
    // 0x3b1a60: 0x1220006f  beqz        $s1, . + 4 + (0x6F << 2)
label_3b1a64:
    if (ctx->pc == 0x3B1A64u) {
        ctx->pc = 0x3B1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A60u;
        // 0x3b1a64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1A68u;
        goto label_3b1a68;
    }
    ctx->pc = 0x3B1A60u;
    {
        const bool branch_taken_0x3b1a60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A60u;
        // 0x3b1a64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1a60) {
            ctx->pc = 0x3B1C20u;
            goto label_3b1c20;
        }
    }
    ctx->pc = 0x3B1A68u;
label_3b1a68:
    // 0x3b1a68: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3b1a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b1a6c:
    // 0x3b1a6c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b1a6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b1a70:
    // 0x3b1a70: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b1a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b1a74:
    // 0x3b1a74: 0x40f809  jalr        $v0
label_3b1a78:
    if (ctx->pc == 0x3B1A78u) {
        ctx->pc = 0x3B1A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A74u;
        // 0x3b1a78: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1A7Cu;
        goto label_3b1a7c;
    }
    ctx->pc = 0x3B1A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B1A7Cu);
        ctx->pc = 0x3B1A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A74u;
        // 0x3b1a78: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1A74u, 0x3B1A7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1A7Cu;
label_3b1a7c:
    // 0x3b1a7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b1a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b1a80:
    // 0x3b1a80: 0x12000067  beqz        $s0, . + 4 + (0x67 << 2)
label_3b1a84:
    if (ctx->pc == 0x3B1A84u) {
        ctx->pc = 0x3B1A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A80u;
        // 0x3b1a84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1A88u;
        goto label_3b1a88;
    }
    ctx->pc = 0x3B1A80u;
    {
        const bool branch_taken_0x3b1a80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A80u;
        // 0x3b1a84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1a80) {
            ctx->pc = 0x3B1C20u;
            goto label_3b1c20;
        }
    }
    ctx->pc = 0x3B1A88u;
label_3b1a88:
    // 0x3b1a88: 0xc0e409a  jal         func_390268
label_3b1a8c:
    if (ctx->pc == 0x3B1A8Cu) {
        ctx->pc = 0x3B1A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A88u;
        // 0x3b1a8c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1A90u;
        goto label_3b1a90;
    }
    ctx->pc = 0x3B1A88u;
    SET_GPR_U32(ctx, 31, 0x3B1A90u);
    ctx->pc = 0x3B1A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1A88u;
    // 0x3b1a8c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3B1A88u, 0x3B1A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1A90u;
label_3b1a90:
    // 0x3b1a90: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3b1a94:
    if (ctx->pc == 0x3B1A94u) {
        ctx->pc = 0x3B1A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A90u;
        // 0x3b1a94: 0x9202001f  lbu         $v0, 0x1F($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 31)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1A98u;
        goto label_3b1a98;
    }
    ctx->pc = 0x3B1A90u;
    {
        const bool branch_taken_0x3b1a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b1a90) {
            ctx->pc = 0x3B1A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1A90u;
            // 0x3b1a94: 0x9202001f  lbu         $v0, 0x1F($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 31)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B1AA0u;
            goto label_3b1aa0;
        }
    }
    ctx->pc = 0x3B1A98u;
label_3b1a98:
    // 0x3b1a98: 0x10000061  b           . + 4 + (0x61 << 2)
label_3b1a9c:
    if (ctx->pc == 0x3B1A9Cu) {
        ctx->pc = 0x3B1A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A98u;
        // 0x3b1a9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1AA0u;
        goto label_3b1aa0;
    }
    ctx->pc = 0x3B1A98u;
    {
        const bool branch_taken_0x3b1a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A98u;
        // 0x3b1a9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1a98) {
            ctx->pc = 0x3B1C20u;
            goto label_3b1c20;
        }
    }
    ctx->pc = 0x3B1AA0u;
label_3b1aa0:
    // 0x3b1aa0: 0x2c42001e  sltiu       $v0, $v0, 0x1E
    ctx->pc = 0x3b1aa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_3b1aa4:
    // 0x3b1aa4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_3b1aa8:
    if (ctx->pc == 0x3B1AA8u) {
        ctx->pc = 0x3B1AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1AA4u;
        // 0x3b1aa8: 0x3c15006f  lui         $s5, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1AACu;
        goto label_3b1aac;
    }
    ctx->pc = 0x3B1AA4u;
    {
        const bool branch_taken_0x3b1aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1AA4u;
        // 0x3b1aa8: 0x3c15006f  lui         $s5, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1aa4) {
            ctx->pc = 0x3B1AFCu;
            goto label_3b1afc;
        }
    }
    ctx->pc = 0x3B1AACu;
label_3b1aac:
    // 0x3b1aac: 0x26b3b8b8  addiu       $s3, $s5, -0x4748
    ctx->pc = 0x3b1aacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949048));
label_3b1ab0:
    // 0x3b1ab0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3b1ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b1ab4:
    // 0x3b1ab4: 0xc0cd4ee  jal         func_3353B8
label_3b1ab8:
    if (ctx->pc == 0x3B1AB8u) {
        ctx->pc = 0x3B1AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1AB4u;
        // 0x3b1ab8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1ABCu;
        goto label_3b1abc;
    }
    ctx->pc = 0x3B1AB4u;
    SET_GPR_U32(ctx, 31, 0x3B1ABCu);
    ctx->pc = 0x3B1AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1AB4u;
    // 0x3b1ab8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3B1AB4u, 0x3B1ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1ABCu;
label_3b1abc:
    // 0x3b1abc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3b1abcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3b1ac0:
    // 0x3b1ac0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3b1ac4:
    if (ctx->pc == 0x3B1AC4u) {
        ctx->pc = 0x3B1AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1AC0u;
        // 0x3b1ac4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1AC8u;
        goto label_3b1ac8;
    }
    ctx->pc = 0x3B1AC0u;
    {
        const bool branch_taken_0x3b1ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1AC0u;
        // 0x3b1ac4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1ac0) {
            ctx->pc = 0x3B1AD8u;
            goto label_3b1ad8;
        }
    }
    ctx->pc = 0x3B1AC8u;
label_3b1ac8:
    // 0x3b1ac8: 0x9603001c  lhu         $v1, 0x1C($s0)
    ctx->pc = 0x3b1ac8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
label_3b1acc:
    // 0x3b1acc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3b1accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3b1ad0:
    // 0x3b1ad0: 0x10000053  b           . + 4 + (0x53 << 2)
label_3b1ad4:
    if (ctx->pc == 0x3B1AD4u) {
        ctx->pc = 0x3B1AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1AD0u;
        // 0x3b1ad4: 0xa603001c  sh          $v1, 0x1C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1AD8u;
        goto label_3b1ad8;
    }
    ctx->pc = 0x3B1AD0u;
    {
        const bool branch_taken_0x3b1ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1AD0u;
        // 0x3b1ad4: 0xa603001c  sh          $v1, 0x1C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1ad0) {
            ctx->pc = 0x3B1C20u;
            goto label_3b1c20;
        }
    }
    ctx->pc = 0x3B1AD8u;
label_3b1ad8:
    // 0x3b1ad8: 0x9202001f  lbu         $v0, 0x1F($s0)
    ctx->pc = 0x3b1ad8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 31)));
label_3b1adc:
    // 0x3b1adc: 0x2c42001e  sltiu       $v0, $v0, 0x1E
    ctx->pc = 0x3b1adcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_3b1ae0:
    // 0x3b1ae0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3b1ae4:
    if (ctx->pc == 0x3B1AE4u) {
        ctx->pc = 0x3B1AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1AE0u;
        // 0x3b1ae4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1AE8u;
        goto label_3b1ae8;
    }
    ctx->pc = 0x3B1AE0u;
    {
        const bool branch_taken_0x3b1ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1AE0u;
        // 0x3b1ae4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1ae0) {
            ctx->pc = 0x3B1AFCu;
            goto label_3b1afc;
        }
    }
    ctx->pc = 0x3B1AE8u;
label_3b1ae8:
    // 0x3b1ae8: 0xc0cd4ee  jal         func_3353B8
label_3b1aec:
    if (ctx->pc == 0x3B1AECu) {
        ctx->pc = 0x3B1AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1AE8u;
        // 0x3b1aec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1AF0u;
        goto label_3b1af0;
    }
    ctx->pc = 0x3B1AE8u;
    SET_GPR_U32(ctx, 31, 0x3B1AF0u);
    ctx->pc = 0x3B1AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1AE8u;
    // 0x3b1aec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3B1AE8u, 0x3B1AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1AF0u;
label_3b1af0:
    // 0x3b1af0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b1af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3b1af4:
    // 0x3b1af4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3b1af8:
    if (ctx->pc == 0x3B1AF8u) {
        ctx->pc = 0x3B1AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1AF4u;
        // 0x3b1af8: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1AFCu;
        goto label_3b1afc;
    }
    ctx->pc = 0x3B1AF4u;
    {
        const bool branch_taken_0x3b1af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1AF4u;
        // 0x3b1af8: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1af4) {
            ctx->pc = 0x3B1B00u;
            goto label_3b1b00;
        }
    }
    ctx->pc = 0x3B1AFCu;
label_3b1afc:
    // 0x3b1afc: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x3b1afcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_3b1b00:
    // 0x3b1b00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3b1b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b1b04:
    // 0x3b1b04: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3b1b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3b1b08:
    // 0x3b1b08: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x3b1b08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_3b1b0c:
    // 0x3b1b0c: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x3b1b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_3b1b10:
    // 0x3b1b10: 0x60f809  jalr        $v1
label_3b1b14:
    if (ctx->pc == 0x3B1B14u) {
        ctx->pc = 0x3B1B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1B10u;
        // 0x3b1b14: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1B18u;
        goto label_3b1b18;
    }
    ctx->pc = 0x3B1B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B1B18u);
        ctx->pc = 0x3B1B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1B10u;
        // 0x3b1b14: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1B10u, 0x3B1B18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1B18u;
label_3b1b18:
    // 0x3b1b18: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3b1b18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b1b1c:
    // 0x3b1b1c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3b1b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b1b20:
    // 0x3b1b20: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3b1b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3b1b24:
    // 0x3b1b24: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x3b1b24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_3b1b28:
    // 0x3b1b28: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b1b28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b1b2c:
    // 0x3b1b2c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b1b2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b1b30:
    // 0x3b1b30: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3b1b30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b1b34:
    // 0x3b1b34: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3b1b34u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b1b38:
    // 0x3b1b38: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3b1b38u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3b1b3c:
    // 0x3b1b3c: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x3b1b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
label_3b1b40:
    // 0x3b1b40: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3b1b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3b1b44:
    // 0x3b1b44: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3b1b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3b1b48:
    // 0x3b1b48: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3b1b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3b1b4c:
    // 0x3b1b4c: 0x9203001e  lbu         $v1, 0x1E($s0)
    ctx->pc = 0x3b1b4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 30)));
label_3b1b50:
    // 0x3b1b50: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
label_3b1b54:
    if (ctx->pc == 0x3B1B54u) {
        ctx->pc = 0x3B1B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1B50u;
        // 0x3b1b54: 0x26a4b8b8  addiu       $a0, $s5, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1B58u;
        goto label_3b1b58;
    }
    ctx->pc = 0x3B1B50u;
    {
        const bool branch_taken_0x3b1b50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3B1B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1B50u;
        // 0x3b1b54: 0x26a4b8b8  addiu       $a0, $s5, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1b50) {
            ctx->pc = 0x3B1B78u;
            goto label_3b1b78;
        }
    }
    ctx->pc = 0x3B1B58u;
label_3b1b58:
    // 0x3b1b58: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x3b1b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_3b1b5c:
    // 0x3b1b5c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3b1b5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3b1b60:
    // 0x3b1b60: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b1b60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b1b64:
    // 0x3b1b64: 0x3c014013  lui         $at, 0x4013
    ctx->pc = 0x3b1b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16403 << 16));
label_3b1b68:
    // 0x3b1b68: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3b1b68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3b1b6c:
    // 0x3b1b6c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3b1b6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3b1b70:
    // 0x3b1b70: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b1b74:
    if (ctx->pc == 0x3B1B74u) {
        ctx->pc = 0x3B1B78u;
        goto label_3b1b78;
    }
    ctx->pc = 0x3B1B70u;
    {
        const bool branch_taken_0x3b1b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1b70) {
            ctx->pc = 0x3B1B90u;
            goto label_3b1b90;
        }
    }
    ctx->pc = 0x3B1B78u;
label_3b1b78:
    // 0x3b1b78: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x3b1b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_3b1b7c:
    // 0x3b1b7c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3b1b7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3b1b80:
    // 0x3b1b80: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b1b80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b1b84:
    // 0x3b1b84: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x3b1b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_3b1b88:
    // 0x3b1b88: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3b1b88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3b1b8c:
    // 0x3b1b8c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3b1b8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3b1b90:
    // 0x3b1b90: 0xc0cd508  jal         func_335420
label_3b1b94:
    if (ctx->pc == 0x3B1B94u) {
        ctx->pc = 0x3B1B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1B90u;
        // 0x3b1b94: 0x26b0b8b8  addiu       $s0, $s5, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1B98u;
        goto label_3b1b98;
    }
    ctx->pc = 0x3B1B90u;
    SET_GPR_U32(ctx, 31, 0x3B1B98u);
    ctx->pc = 0x3B1B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1B90u;
    // 0x3b1b94: 0x26b0b8b8  addiu       $s0, $s5, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3B1B90u, 0x3B1B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1B98u;
label_3b1b98:
    // 0x3b1b98: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3b1b98u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3b1b9c:
    // 0x3b1b9c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3b1b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b1ba0:
    // 0x3b1ba0: 0xc0cd4ee  jal         func_3353B8
label_3b1ba4:
    if (ctx->pc == 0x3B1BA4u) {
        ctx->pc = 0x3B1BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1BA0u;
        // 0x3b1ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1BA8u;
        goto label_3b1ba8;
    }
    ctx->pc = 0x3B1BA0u;
    SET_GPR_U32(ctx, 31, 0x3B1BA8u);
    ctx->pc = 0x3B1BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1BA0u;
    // 0x3b1ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3B1BA0u, 0x3B1BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1BA8u;
label_3b1ba8:
    // 0x3b1ba8: 0x3c014066  lui         $at, 0x4066
    ctx->pc = 0x3b1ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16486 << 16));
label_3b1bac:
    // 0x3b1bac: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3b1bacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3b1bb0:
    // 0x3b1bb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b1bb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b1bb4:
    // 0x3b1bb4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3b1bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3b1bb8:
    // 0x3b1bb8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3b1bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3b1bbc:
    // 0x3b1bbc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3b1bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3b1bc0:
    // 0x3b1bc0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3b1bc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3b1bc4:
    // 0x3b1bc4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3b1bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3b1bc8:
    // 0x3b1bc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b1bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b1bcc:
    // 0x3b1bcc: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x3b1bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3b1bd0:
    // 0x3b1bd0: 0xae4200c4  sw          $v0, 0xC4($s2)
    ctx->pc = 0x3b1bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
label_3b1bd4:
    // 0x3b1bd4: 0xe64000c0  swc1        $f0, 0xC0($s2)
    ctx->pc = 0x3b1bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
label_3b1bd8:
    // 0x3b1bd8: 0xc0cd4ee  jal         func_3353B8
label_3b1bdc:
    if (ctx->pc == 0x3B1BDCu) {
        ctx->pc = 0x3B1BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1BD8u;
        // 0x3b1bdc: 0xe64000bc  swc1        $f0, 0xBC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 188), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1BE0u;
        goto label_3b1be0;
    }
    ctx->pc = 0x3B1BD8u;
    SET_GPR_U32(ctx, 31, 0x3B1BE0u);
    ctx->pc = 0x3B1BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1BD8u;
    // 0x3b1bdc: 0xe64000bc  swc1        $f0, 0xBC($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 188), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3B1BD8u, 0x3B1BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1BE0u;
label_3b1be0:
    // 0x3b1be0: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x3b1be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_3b1be4:
    // 0x3b1be4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3b1be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3b1be8:
    // 0x3b1be8: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x3b1be8u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_3b1bec:
    // 0x3b1bec: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3b1becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3b1bf0:
    // 0x3b1bf0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3b1bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_3b1bf4:
    // 0x3b1bf4: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x3b1bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_3b1bf8:
    // 0x3b1bf8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3b1bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3b1bfc:
    // 0x3b1bfc: 0x3484ff80  ori         $a0, $a0, 0xFF80
    ctx->pc = 0x3b1bfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65408);
label_3b1c00:
    // 0x3b1c00: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x3b1c00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
label_3b1c04:
    // 0x3b1c04: 0xae4400b0  sw          $a0, 0xB0($s2)
    ctx->pc = 0x3b1c04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 4));
label_3b1c08:
    // 0x3b1c08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b1c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b1c0c:
    // 0x3b1c0c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_3b1c10:
    if (ctx->pc == 0x3B1C10u) {
        ctx->pc = 0x3B1C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1C0Cu;
        // 0x3b1c10: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1C14u;
        goto label_3b1c14;
    }
    ctx->pc = 0x3B1C0Cu;
    {
        const bool branch_taken_0x3b1c0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1c0c) {
            ctx->pc = 0x3B1C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1C0Cu;
            // 0x3b1c10: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B1C14u;
            goto label_3b1c14;
        }
    }
    ctx->pc = 0x3B1C14u;
label_3b1c14:
    // 0x3b1c14: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x3b1c14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
label_3b1c18:
    // 0x3b1c18: 0x3012  mflo        $a2
    ctx->pc = 0x3b1c18u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_3b1c1c:
    // 0x3b1c1c: 0xae860008  sw          $a2, 0x8($s4)
    ctx->pc = 0x3b1c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 6));
label_3b1c20:
    // 0x3b1c20: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3b1c20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3b1c24:
    // 0x3b1c24: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3b1c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b1c28:
    // 0x3b1c28: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3b1c28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b1c2c:
    // 0x3b1c2c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3b1c2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b1c30:
    // 0x3b1c30: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3b1c30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b1c34:
    // 0x3b1c34: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3b1c34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b1c38:
    // 0x3b1c38: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3b1c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3b1c3c:
    // 0x3b1c3c: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x3b1c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3b1c40:
    // 0x3b1c40: 0x3e00008  jr          $ra
label_3b1c44:
    if (ctx->pc == 0x3B1C44u) {
        ctx->pc = 0x3B1C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1C40u;
        // 0x3b1c44: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1C48u;
        goto label_fallthrough_0x3b1c40;
    }
    ctx->pc = 0x3B1C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1C40u;
        // 0x3b1c44: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b1c40:
    ctx->pc = 0x3B1C48u;
}
