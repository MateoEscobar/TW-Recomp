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

// Function: sub_00260A70
// Address: 0x260a70 - 0x260ca8
void sub_00260A70_0x260a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260A70_0x260a70");
#endif

    switch (ctx->pc) {
        case 0x260a70u: goto label_260a70;
        case 0x260a74u: goto label_260a74;
        case 0x260a78u: goto label_260a78;
        case 0x260a7cu: goto label_260a7c;
        case 0x260a80u: goto label_260a80;
        case 0x260a84u: goto label_260a84;
        case 0x260a88u: goto label_260a88;
        case 0x260a8cu: goto label_260a8c;
        case 0x260a90u: goto label_260a90;
        case 0x260a94u: goto label_260a94;
        case 0x260a98u: goto label_260a98;
        case 0x260a9cu: goto label_260a9c;
        case 0x260aa0u: goto label_260aa0;
        case 0x260aa4u: goto label_260aa4;
        case 0x260aa8u: goto label_260aa8;
        case 0x260aacu: goto label_260aac;
        case 0x260ab0u: goto label_260ab0;
        case 0x260ab4u: goto label_260ab4;
        case 0x260ab8u: goto label_260ab8;
        case 0x260abcu: goto label_260abc;
        case 0x260ac0u: goto label_260ac0;
        case 0x260ac4u: goto label_260ac4;
        case 0x260ac8u: goto label_260ac8;
        case 0x260accu: goto label_260acc;
        case 0x260ad0u: goto label_260ad0;
        case 0x260ad4u: goto label_260ad4;
        case 0x260ad8u: goto label_260ad8;
        case 0x260adcu: goto label_260adc;
        case 0x260ae0u: goto label_260ae0;
        case 0x260ae4u: goto label_260ae4;
        case 0x260ae8u: goto label_260ae8;
        case 0x260aecu: goto label_260aec;
        case 0x260af0u: goto label_260af0;
        case 0x260af4u: goto label_260af4;
        case 0x260af8u: goto label_260af8;
        case 0x260afcu: goto label_260afc;
        case 0x260b00u: goto label_260b00;
        case 0x260b04u: goto label_260b04;
        case 0x260b08u: goto label_260b08;
        case 0x260b0cu: goto label_260b0c;
        case 0x260b10u: goto label_260b10;
        case 0x260b14u: goto label_260b14;
        case 0x260b18u: goto label_260b18;
        case 0x260b1cu: goto label_260b1c;
        case 0x260b20u: goto label_260b20;
        case 0x260b24u: goto label_260b24;
        case 0x260b28u: goto label_260b28;
        case 0x260b2cu: goto label_260b2c;
        case 0x260b30u: goto label_260b30;
        case 0x260b34u: goto label_260b34;
        case 0x260b38u: goto label_260b38;
        case 0x260b3cu: goto label_260b3c;
        case 0x260b40u: goto label_260b40;
        case 0x260b44u: goto label_260b44;
        case 0x260b48u: goto label_260b48;
        case 0x260b4cu: goto label_260b4c;
        case 0x260b50u: goto label_260b50;
        case 0x260b54u: goto label_260b54;
        case 0x260b58u: goto label_260b58;
        case 0x260b5cu: goto label_260b5c;
        case 0x260b60u: goto label_260b60;
        case 0x260b64u: goto label_260b64;
        case 0x260b68u: goto label_260b68;
        case 0x260b6cu: goto label_260b6c;
        case 0x260b70u: goto label_260b70;
        case 0x260b74u: goto label_260b74;
        case 0x260b78u: goto label_260b78;
        case 0x260b7cu: goto label_260b7c;
        case 0x260b80u: goto label_260b80;
        case 0x260b84u: goto label_260b84;
        case 0x260b88u: goto label_260b88;
        case 0x260b8cu: goto label_260b8c;
        case 0x260b90u: goto label_260b90;
        case 0x260b94u: goto label_260b94;
        case 0x260b98u: goto label_260b98;
        case 0x260b9cu: goto label_260b9c;
        case 0x260ba0u: goto label_260ba0;
        case 0x260ba4u: goto label_260ba4;
        case 0x260ba8u: goto label_260ba8;
        case 0x260bacu: goto label_260bac;
        case 0x260bb0u: goto label_260bb0;
        case 0x260bb4u: goto label_260bb4;
        case 0x260bb8u: goto label_260bb8;
        case 0x260bbcu: goto label_260bbc;
        case 0x260bc0u: goto label_260bc0;
        case 0x260bc4u: goto label_260bc4;
        case 0x260bc8u: goto label_260bc8;
        case 0x260bccu: goto label_260bcc;
        case 0x260bd0u: goto label_260bd0;
        case 0x260bd4u: goto label_260bd4;
        case 0x260bd8u: goto label_260bd8;
        case 0x260bdcu: goto label_260bdc;
        case 0x260be0u: goto label_260be0;
        case 0x260be4u: goto label_260be4;
        case 0x260be8u: goto label_260be8;
        case 0x260becu: goto label_260bec;
        case 0x260bf0u: goto label_260bf0;
        case 0x260bf4u: goto label_260bf4;
        case 0x260bf8u: goto label_260bf8;
        case 0x260bfcu: goto label_260bfc;
        case 0x260c00u: goto label_260c00;
        case 0x260c04u: goto label_260c04;
        case 0x260c08u: goto label_260c08;
        case 0x260c0cu: goto label_260c0c;
        case 0x260c10u: goto label_260c10;
        case 0x260c14u: goto label_260c14;
        case 0x260c18u: goto label_260c18;
        case 0x260c1cu: goto label_260c1c;
        case 0x260c20u: goto label_260c20;
        case 0x260c24u: goto label_260c24;
        case 0x260c28u: goto label_260c28;
        case 0x260c2cu: goto label_260c2c;
        case 0x260c30u: goto label_260c30;
        case 0x260c34u: goto label_260c34;
        case 0x260c38u: goto label_260c38;
        case 0x260c3cu: goto label_260c3c;
        case 0x260c40u: goto label_260c40;
        case 0x260c44u: goto label_260c44;
        case 0x260c48u: goto label_260c48;
        case 0x260c4cu: goto label_260c4c;
        case 0x260c50u: goto label_260c50;
        case 0x260c54u: goto label_260c54;
        case 0x260c58u: goto label_260c58;
        case 0x260c5cu: goto label_260c5c;
        case 0x260c60u: goto label_260c60;
        case 0x260c64u: goto label_260c64;
        case 0x260c68u: goto label_260c68;
        case 0x260c6cu: goto label_260c6c;
        case 0x260c70u: goto label_260c70;
        case 0x260c74u: goto label_260c74;
        case 0x260c78u: goto label_260c78;
        case 0x260c7cu: goto label_260c7c;
        case 0x260c80u: goto label_260c80;
        case 0x260c84u: goto label_260c84;
        case 0x260c88u: goto label_260c88;
        case 0x260c8cu: goto label_260c8c;
        case 0x260c90u: goto label_260c90;
        case 0x260c94u: goto label_260c94;
        case 0x260c98u: goto label_260c98;
        case 0x260c9cu: goto label_260c9c;
        case 0x260ca0u: goto label_260ca0;
        case 0x260ca4u: goto label_260ca4;
        default: break;
    }

    ctx->pc = 0x260a70u;

label_260a70:
    // 0x260a70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x260a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_260a74:
    // 0x260a74: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x260a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_260a78:
    // 0x260a78: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x260a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_260a7c:
    // 0x260a7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x260a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_260a80:
    // 0x260a80: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x260a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_260a84:
    // 0x260a84: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x260a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_260a88:
    // 0x260a88: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x260a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_260a8c:
    // 0x260a8c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x260a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_260a90:
    // 0x260a90: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x260a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_260a94:
    // 0x260a94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x260a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_260a98:
    // 0x260a98: 0xc08b58a  jal         func_22D628
label_260a9c:
    if (ctx->pc == 0x260A9Cu) {
        ctx->pc = 0x260A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260A98u;
        // 0x260a9c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260AA0u;
        goto label_260aa0;
    }
    ctx->pc = 0x260A98u;
    SET_GPR_U32(ctx, 31, 0x260AA0u);
    ctx->pc = 0x260A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260A98u;
    // 0x260a9c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D628u, 0x260A98u, 0x260AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260AA0u;
label_260aa0:
    // 0x260aa0: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x260aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_260aa4:
    // 0x260aa4: 0x8e1500d8  lw          $s5, 0xD8($s0)
    ctx->pc = 0x260aa4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_260aa8:
    // 0x260aa8: 0x2456dc40  addiu       $s6, $v0, -0x23C0
    ctx->pc = 0x260aa8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958144));
label_260aac:
    // 0x260aac: 0xc041532  jal         func_1054C8
label_260ab0:
    if (ctx->pc == 0x260AB0u) {
        ctx->pc = 0x260AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260AACu;
        // 0x260ab0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260AB4u;
        goto label_260ab4;
    }
    ctx->pc = 0x260AACu;
    SET_GPR_U32(ctx, 31, 0x260AB4u);
    ctx->pc = 0x260AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260AACu;
    // 0x260ab0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x260AACu, 0x260AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260AB4u;
label_260ab4:
    // 0x260ab4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x260ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_260ab8:
    // 0x260ab8: 0xc041532  jal         func_1054C8
label_260abc:
    if (ctx->pc == 0x260ABCu) {
        ctx->pc = 0x260ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260AB8u;
        // 0x260abc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260AC0u;
        goto label_260ac0;
    }
    ctx->pc = 0x260AB8u;
    SET_GPR_U32(ctx, 31, 0x260AC0u);
    ctx->pc = 0x260ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260AB8u;
    // 0x260abc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x260AB8u, 0x260AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260AC0u;
label_260ac0:
    // 0x260ac0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x260ac0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_260ac4:
    // 0x260ac4: 0xc041532  jal         func_1054C8
label_260ac8:
    if (ctx->pc == 0x260AC8u) {
        ctx->pc = 0x260AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260AC4u;
        // 0x260ac8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260ACCu;
        goto label_260acc;
    }
    ctx->pc = 0x260AC4u;
    SET_GPR_U32(ctx, 31, 0x260ACCu);
    ctx->pc = 0x260AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260AC4u;
    // 0x260ac8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x260AC4u, 0x260ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260ACCu;
label_260acc:
    // 0x260acc: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
label_260ad0:
    if (ctx->pc == 0x260AD0u) {
        ctx->pc = 0x260AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260ACCu;
        // 0x260ad0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260AD4u;
        goto label_260ad4;
    }
    ctx->pc = 0x260ACCu;
    {
        const bool branch_taken_0x260acc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x260AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260ACCu;
        // 0x260ad0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260acc) {
            ctx->pc = 0x260AF8u;
            goto label_260af8;
        }
    }
    ctx->pc = 0x260AD4u;
label_260ad4:
    // 0x260ad4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x260ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_260ad8:
    // 0x260ad8: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x260ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_260adc:
    // 0x260adc: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x260adcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_260ae0:
    // 0x260ae0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x260ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_260ae4:
    // 0x260ae4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x260ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_260ae8:
    // 0x260ae8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x260ae8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_260aec:
    // 0x260aec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x260aecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_260af0:
    // 0x260af0: 0xc041b20  jal         func_106C80
label_260af4:
    if (ctx->pc == 0x260AF4u) {
        ctx->pc = 0x260AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260AF0u;
        // 0x260af4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260AF8u;
        goto label_260af8;
    }
    ctx->pc = 0x260AF0u;
    SET_GPR_U32(ctx, 31, 0x260AF8u);
    ctx->pc = 0x260AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260AF0u;
    // 0x260af4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x260AF0u, 0x260AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260AF8u;
label_260af8:
    // 0x260af8: 0xc05d484  jal         func_175210
label_260afc:
    if (ctx->pc == 0x260AFCu) {
        ctx->pc = 0x260AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260AF8u;
        // 0x260afc: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260B00u;
        goto label_260b00;
    }
    ctx->pc = 0x260AF8u;
    SET_GPR_U32(ctx, 31, 0x260B00u);
    ctx->pc = 0x260AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260AF8u;
    // 0x260afc: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x260AF8u, 0x260B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260B00u;
label_260b00:
    // 0x260b00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x260b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_260b04:
    // 0x260b04: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x260b04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_260b08:
    // 0x260b08: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x260b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_260b0c:
    // 0x260b0c: 0xa0f809  jalr        $a1
label_260b10:
    if (ctx->pc == 0x260B10u) {
        ctx->pc = 0x260B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B0Cu;
        // 0x260b10: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260B14u;
        goto label_260b14;
    }
    ctx->pc = 0x260B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x260B14u);
        ctx->pc = 0x260B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B0Cu;
        // 0x260b10: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260B0Cu, 0x260B14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x260B14u;
label_260b14:
    // 0x260b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x260b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_260b18:
    // 0x260b18: 0xc087016  jal         func_21C058
label_260b1c:
    if (ctx->pc == 0x260B1Cu) {
        ctx->pc = 0x260B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B18u;
        // 0x260b1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260B20u;
        goto label_260b20;
    }
    ctx->pc = 0x260B18u;
    SET_GPR_U32(ctx, 31, 0x260B20u);
    ctx->pc = 0x260B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260B18u;
    // 0x260b1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x260B18u, 0x260B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260B20u;
label_260b20:
    // 0x260b20: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_260b24:
    if (ctx->pc == 0x260B24u) {
        ctx->pc = 0x260B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B20u;
        // 0x260b24: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260B28u;
        goto label_260b28;
    }
    ctx->pc = 0x260B20u;
    {
        const bool branch_taken_0x260b20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x260B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B20u;
        // 0x260b24: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260b20) {
            ctx->pc = 0x260B44u;
            goto label_260b44;
        }
    }
    ctx->pc = 0x260B28u;
label_260b28:
    // 0x260b28: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x260b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_260b2c:
    // 0x260b2c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x260b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_260b30:
    // 0x260b30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x260b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_260b34:
    // 0x260b34: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x260b34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_260b38:
    // 0x260b38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x260b38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260b3c:
    // 0x260b3c: 0xc04159e  jal         func_105678
label_260b40:
    if (ctx->pc == 0x260B40u) {
        ctx->pc = 0x260B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B3Cu;
        // 0x260b40: 0x8e0500d8  lw          $a1, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260B44u;
        goto label_260b44;
    }
    ctx->pc = 0x260B3Cu;
    SET_GPR_U32(ctx, 31, 0x260B44u);
    ctx->pc = 0x260B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260B3Cu;
    // 0x260b40: 0x8e0500d8  lw          $a1, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x260B3Cu, 0x260B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260B44u;
label_260b44:
    // 0x260b44: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x260b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_260b48:
    // 0x260b48: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
label_260b4c:
    if (ctx->pc == 0x260B4Cu) {
        ctx->pc = 0x260B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B48u;
        // 0x260b4c: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260B50u;
        goto label_260b50;
    }
    ctx->pc = 0x260B48u;
    {
        const bool branch_taken_0x260b48 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x260B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B48u;
        // 0x260b4c: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260b48) {
            ctx->pc = 0x260B94u;
            goto label_260b94;
        }
    }
    ctx->pc = 0x260B50u;
label_260b50:
    // 0x260b50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x260b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_260b54:
    // 0x260b54: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x260b54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_260b58:
    // 0x260b58: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x260b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_260b5c:
    // 0x260b5c: 0x40f809  jalr        $v0
label_260b60:
    if (ctx->pc == 0x260B60u) {
        ctx->pc = 0x260B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B5Cu;
        // 0x260b60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260B64u;
        goto label_260b64;
    }
    ctx->pc = 0x260B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x260B64u);
        ctx->pc = 0x260B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B5Cu;
        // 0x260b60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260B5Cu, 0x260B64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x260B64u;
label_260b64:
    // 0x260b64: 0x3c0a0026  lui         $t2, 0x26
    ctx->pc = 0x260b64u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)38 << 16));
label_260b68:
    // 0x260b68: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x260b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
label_260b6c:
    // 0x260b6c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x260b6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_260b70:
    // 0x260b70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x260b70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_260b74:
    // 0x260b74: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x260b74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_260b78:
    // 0x260b78: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x260b78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_260b7c:
    // 0x260b7c: 0x254a05f0  addiu       $t2, $t2, 0x5F0
    ctx->pc = 0x260b7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1520));
label_260b80:
    // 0x260b80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x260b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_260b84:
    // 0x260b84: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x260b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_260b88:
    // 0x260b88: 0x2406014c  addiu       $a2, $zero, 0x14C
    ctx->pc = 0x260b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 332));
label_260b8c:
    // 0x260b8c: 0xc041664  jal         func_105990
label_260b90:
    if (ctx->pc == 0x260B90u) {
        ctx->pc = 0x260B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B8Cu;
        // 0x260b90: 0x3c080200  lui         $t0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260B94u;
        goto label_260b94;
    }
    ctx->pc = 0x260B8Cu;
    SET_GPR_U32(ctx, 31, 0x260B94u);
    ctx->pc = 0x260B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260B8Cu;
    // 0x260b90: 0x3c080200  lui         $t0, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)512 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x260B8Cu, 0x260B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260B94u;
label_260b94:
    // 0x260b94: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x260b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_260b98:
    // 0x260b98: 0xc05d53a  jal         func_1754E8
label_260b9c:
    if (ctx->pc == 0x260B9Cu) {
        ctx->pc = 0x260B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B98u;
        // 0x260b9c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260BA0u;
        goto label_260ba0;
    }
    ctx->pc = 0x260B98u;
    SET_GPR_U32(ctx, 31, 0x260BA0u);
    ctx->pc = 0x260B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260B98u;
    // 0x260b9c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x260B98u, 0x260BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260BA0u;
label_260ba0:
    // 0x260ba0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x260ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_260ba4:
    // 0x260ba4: 0xc05d4f6  jal         func_1753D8
label_260ba8:
    if (ctx->pc == 0x260BA8u) {
        ctx->pc = 0x260BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260BA4u;
        // 0x260ba8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260BACu;
        goto label_260bac;
    }
    ctx->pc = 0x260BA4u;
    SET_GPR_U32(ctx, 31, 0x260BACu);
    ctx->pc = 0x260BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260BA4u;
    // 0x260ba8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x260BA4u, 0x260BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260BACu;
label_260bac:
    // 0x260bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x260bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_260bb0:
    // 0x260bb0: 0xc089990  jal         func_226640
label_260bb4:
    if (ctx->pc == 0x260BB4u) {
        ctx->pc = 0x260BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260BB0u;
        // 0x260bb4: 0x3c050200  lui         $a1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260BB8u;
        goto label_260bb8;
    }
    ctx->pc = 0x260BB0u;
    SET_GPR_U32(ctx, 31, 0x260BB8u);
    ctx->pc = 0x260BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260BB0u;
    // 0x260bb4: 0x3c050200  lui         $a1, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x260BB0u, 0x260BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260BB8u;
label_260bb8:
    // 0x260bb8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x260bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_260bbc:
    // 0x260bbc: 0xc041532  jal         func_1054C8
label_260bc0:
    if (ctx->pc == 0x260BC0u) {
        ctx->pc = 0x260BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260BBCu;
        // 0x260bc0: 0x8e3300d8  lw          $s3, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260BC4u;
        goto label_260bc4;
    }
    ctx->pc = 0x260BBCu;
    SET_GPR_U32(ctx, 31, 0x260BC4u);
    ctx->pc = 0x260BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260BBCu;
    // 0x260bc0: 0x8e3300d8  lw          $s3, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x260BBCu, 0x260BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260BC4u;
label_260bc4:
    // 0x260bc4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x260bc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_260bc8:
    // 0x260bc8: 0xc041532  jal         func_1054C8
label_260bcc:
    if (ctx->pc == 0x260BCCu) {
        ctx->pc = 0x260BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260BC8u;
        // 0x260bcc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260BD0u;
        goto label_260bd0;
    }
    ctx->pc = 0x260BC8u;
    SET_GPR_U32(ctx, 31, 0x260BD0u);
    ctx->pc = 0x260BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260BC8u;
    // 0x260bcc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x260BC8u, 0x260BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260BD0u;
label_260bd0:
    // 0x260bd0: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
label_260bd4:
    if (ctx->pc == 0x260BD4u) {
        ctx->pc = 0x260BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260BD0u;
        // 0x260bd4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260BD8u;
        goto label_260bd8;
    }
    ctx->pc = 0x260BD0u;
    {
        const bool branch_taken_0x260bd0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x260BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260BD0u;
        // 0x260bd4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260bd0) {
            ctx->pc = 0x260BFCu;
            goto label_260bfc;
        }
    }
    ctx->pc = 0x260BD8u;
label_260bd8:
    // 0x260bd8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x260bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_260bdc:
    // 0x260bdc: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x260bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_260be0:
    // 0x260be0: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x260be0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_260be4:
    // 0x260be4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x260be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_260be8:
    // 0x260be8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x260be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_260bec:
    // 0x260bec: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x260becu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_260bf0:
    // 0x260bf0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x260bf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_260bf4:
    // 0x260bf4: 0xc041b20  jal         func_106C80
label_260bf8:
    if (ctx->pc == 0x260BF8u) {
        ctx->pc = 0x260BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260BF4u;
        // 0x260bf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260BFCu;
        goto label_260bfc;
    }
    ctx->pc = 0x260BF4u;
    SET_GPR_U32(ctx, 31, 0x260BFCu);
    ctx->pc = 0x260BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260BF4u;
    // 0x260bf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x260BF4u, 0x260BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260BFCu;
label_260bfc:
    // 0x260bfc: 0xc05d484  jal         func_175210
label_260c00:
    if (ctx->pc == 0x260C00u) {
        ctx->pc = 0x260C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260BFCu;
        // 0x260c00: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260C04u;
        goto label_260c04;
    }
    ctx->pc = 0x260BFCu;
    SET_GPR_U32(ctx, 31, 0x260C04u);
    ctx->pc = 0x260C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260BFCu;
    // 0x260c00: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x260BFCu, 0x260C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260C04u;
label_260c04:
    // 0x260c04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x260c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_260c08:
    // 0x260c08: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x260c08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_260c0c:
    // 0x260c0c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x260c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_260c10:
    // 0x260c10: 0xa0f809  jalr        $a1
label_260c14:
    if (ctx->pc == 0x260C14u) {
        ctx->pc = 0x260C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C10u;
        // 0x260c14: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260C18u;
        goto label_260c18;
    }
    ctx->pc = 0x260C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x260C18u);
        ctx->pc = 0x260C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C10u;
        // 0x260c14: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260C10u, 0x260C18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x260C18u;
label_260c18:
    // 0x260c18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x260c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_260c1c:
    // 0x260c1c: 0xc087016  jal         func_21C058
label_260c20:
    if (ctx->pc == 0x260C20u) {
        ctx->pc = 0x260C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C1Cu;
        // 0x260c20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260C24u;
        goto label_260c24;
    }
    ctx->pc = 0x260C1Cu;
    SET_GPR_U32(ctx, 31, 0x260C24u);
    ctx->pc = 0x260C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260C1Cu;
    // 0x260c20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x260C1Cu, 0x260C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260C24u;
label_260c24:
    // 0x260c24: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_260c28:
    if (ctx->pc == 0x260C28u) {
        ctx->pc = 0x260C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C24u;
        // 0x260c28: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260C2Cu;
        goto label_260c2c;
    }
    ctx->pc = 0x260C24u;
    {
        const bool branch_taken_0x260c24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x260C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C24u;
        // 0x260c28: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260c24) {
            ctx->pc = 0x260C48u;
            goto label_260c48;
        }
    }
    ctx->pc = 0x260C2Cu;
label_260c2c:
    // 0x260c2c: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x260c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_260c30:
    // 0x260c30: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x260c30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_260c34:
    // 0x260c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x260c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_260c38:
    // 0x260c38: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x260c38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_260c3c:
    // 0x260c3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x260c3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260c40:
    // 0x260c40: 0xc04159e  jal         func_105678
label_260c44:
    if (ctx->pc == 0x260C44u) {
        ctx->pc = 0x260C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C40u;
        // 0x260c44: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260C48u;
        goto label_260c48;
    }
    ctx->pc = 0x260C40u;
    SET_GPR_U32(ctx, 31, 0x260C48u);
    ctx->pc = 0x260C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260C40u;
    // 0x260c44: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x260C40u, 0x260C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260C48u;
label_260c48:
    // 0x260c48: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x260c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_260c4c:
    // 0x260c4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x260c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_260c50:
    // 0x260c50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x260c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_260c54:
    // 0x260c54: 0xc05d53a  jal         func_1754E8
label_260c58:
    if (ctx->pc == 0x260C58u) {
        ctx->pc = 0x260C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C54u;
        // 0x260c58: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260C5Cu;
        goto label_260c5c;
    }
    ctx->pc = 0x260C54u;
    SET_GPR_U32(ctx, 31, 0x260C5Cu);
    ctx->pc = 0x260C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260C54u;
    // 0x260c58: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x260C54u, 0x260C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260C5Cu;
label_260c5c:
    // 0x260c5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x260c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_260c60:
    // 0x260c60: 0xc05d4f6  jal         func_1753D8
label_260c64:
    if (ctx->pc == 0x260C64u) {
        ctx->pc = 0x260C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C60u;
        // 0x260c64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260C68u;
        goto label_260c68;
    }
    ctx->pc = 0x260C60u;
    SET_GPR_U32(ctx, 31, 0x260C68u);
    ctx->pc = 0x260C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260C60u;
    // 0x260c64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x260C60u, 0x260C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260C68u;
label_260c68:
    // 0x260c68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x260c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_260c6c:
    // 0x260c6c: 0xc0899a2  jal         func_226688
label_260c70:
    if (ctx->pc == 0x260C70u) {
        ctx->pc = 0x260C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C6Cu;
        // 0x260c70: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260C74u;
        goto label_260c74;
    }
    ctx->pc = 0x260C6Cu;
    SET_GPR_U32(ctx, 31, 0x260C74u);
    ctx->pc = 0x260C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260C6Cu;
    // 0x260c70: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226688u, 0x260C6Cu, 0x260C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260C74u;
label_260c74:
    // 0x260c74: 0xc089a5e  jal         func_226978
label_260c78:
    if (ctx->pc == 0x260C78u) {
        ctx->pc = 0x260C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C74u;
        // 0x260c78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260C7Cu;
        goto label_260c7c;
    }
    ctx->pc = 0x260C74u;
    SET_GPR_U32(ctx, 31, 0x260C7Cu);
    ctx->pc = 0x260C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260C74u;
    // 0x260c78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226978u, 0x260C74u, 0x260C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260C7Cu;
label_260c7c:
    // 0x260c7c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x260c7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_260c80:
    // 0x260c80: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x260c80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_260c84:
    // 0x260c84: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x260c84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_260c88:
    // 0x260c88: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x260c88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_260c8c:
    // 0x260c8c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x260c8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_260c90:
    // 0x260c90: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x260c90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_260c94:
    // 0x260c94: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x260c94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_260c98:
    // 0x260c98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x260c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_260c9c:
    // 0x260c9c: 0x3e00008  jr          $ra
label_260ca0:
    if (ctx->pc == 0x260CA0u) {
        ctx->pc = 0x260CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C9Cu;
        // 0x260ca0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260CA4u;
        goto label_260ca4;
    }
    ctx->pc = 0x260C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C9Cu;
        // 0x260ca0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260CA4u;
label_260ca4:
    // 0x260ca4: 0x0  nop
    ctx->pc = 0x260ca4u;
    // NOP
    ctx->pc = 0x260ca8u;
}
