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

// Function: sub_001439D8
// Address: 0x1439d8 - 0x143c50
void sub_001439D8_0x1439d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001439D8_0x1439d8");
#endif

    switch (ctx->pc) {
        case 0x1439d8u: goto label_1439d8;
        case 0x1439dcu: goto label_1439dc;
        case 0x1439e0u: goto label_1439e0;
        case 0x1439e4u: goto label_1439e4;
        case 0x1439e8u: goto label_1439e8;
        case 0x1439ecu: goto label_1439ec;
        case 0x1439f0u: goto label_1439f0;
        case 0x1439f4u: goto label_1439f4;
        case 0x1439f8u: goto label_1439f8;
        case 0x1439fcu: goto label_1439fc;
        case 0x143a00u: goto label_143a00;
        case 0x143a04u: goto label_143a04;
        case 0x143a08u: goto label_143a08;
        case 0x143a0cu: goto label_143a0c;
        case 0x143a10u: goto label_143a10;
        case 0x143a14u: goto label_143a14;
        case 0x143a18u: goto label_143a18;
        case 0x143a1cu: goto label_143a1c;
        case 0x143a20u: goto label_143a20;
        case 0x143a24u: goto label_143a24;
        case 0x143a28u: goto label_143a28;
        case 0x143a2cu: goto label_143a2c;
        case 0x143a30u: goto label_143a30;
        case 0x143a34u: goto label_143a34;
        case 0x143a38u: goto label_143a38;
        case 0x143a3cu: goto label_143a3c;
        case 0x143a40u: goto label_143a40;
        case 0x143a44u: goto label_143a44;
        case 0x143a48u: goto label_143a48;
        case 0x143a4cu: goto label_143a4c;
        case 0x143a50u: goto label_143a50;
        case 0x143a54u: goto label_143a54;
        case 0x143a58u: goto label_143a58;
        case 0x143a5cu: goto label_143a5c;
        case 0x143a60u: goto label_143a60;
        case 0x143a64u: goto label_143a64;
        case 0x143a68u: goto label_143a68;
        case 0x143a6cu: goto label_143a6c;
        case 0x143a70u: goto label_143a70;
        case 0x143a74u: goto label_143a74;
        case 0x143a78u: goto label_143a78;
        case 0x143a7cu: goto label_143a7c;
        case 0x143a80u: goto label_143a80;
        case 0x143a84u: goto label_143a84;
        case 0x143a88u: goto label_143a88;
        case 0x143a8cu: goto label_143a8c;
        case 0x143a90u: goto label_143a90;
        case 0x143a94u: goto label_143a94;
        case 0x143a98u: goto label_143a98;
        case 0x143a9cu: goto label_143a9c;
        case 0x143aa0u: goto label_143aa0;
        case 0x143aa4u: goto label_143aa4;
        case 0x143aa8u: goto label_143aa8;
        case 0x143aacu: goto label_143aac;
        case 0x143ab0u: goto label_143ab0;
        case 0x143ab4u: goto label_143ab4;
        case 0x143ab8u: goto label_143ab8;
        case 0x143abcu: goto label_143abc;
        case 0x143ac0u: goto label_143ac0;
        case 0x143ac4u: goto label_143ac4;
        case 0x143ac8u: goto label_143ac8;
        case 0x143accu: goto label_143acc;
        case 0x143ad0u: goto label_143ad0;
        case 0x143ad4u: goto label_143ad4;
        case 0x143ad8u: goto label_143ad8;
        case 0x143adcu: goto label_143adc;
        case 0x143ae0u: goto label_143ae0;
        case 0x143ae4u: goto label_143ae4;
        case 0x143ae8u: goto label_143ae8;
        case 0x143aecu: goto label_143aec;
        case 0x143af0u: goto label_143af0;
        case 0x143af4u: goto label_143af4;
        case 0x143af8u: goto label_143af8;
        case 0x143afcu: goto label_143afc;
        case 0x143b00u: goto label_143b00;
        case 0x143b04u: goto label_143b04;
        case 0x143b08u: goto label_143b08;
        case 0x143b0cu: goto label_143b0c;
        case 0x143b10u: goto label_143b10;
        case 0x143b14u: goto label_143b14;
        case 0x143b18u: goto label_143b18;
        case 0x143b1cu: goto label_143b1c;
        case 0x143b20u: goto label_143b20;
        case 0x143b24u: goto label_143b24;
        case 0x143b28u: goto label_143b28;
        case 0x143b2cu: goto label_143b2c;
        case 0x143b30u: goto label_143b30;
        case 0x143b34u: goto label_143b34;
        case 0x143b38u: goto label_143b38;
        case 0x143b3cu: goto label_143b3c;
        case 0x143b40u: goto label_143b40;
        case 0x143b44u: goto label_143b44;
        case 0x143b48u: goto label_143b48;
        case 0x143b4cu: goto label_143b4c;
        case 0x143b50u: goto label_143b50;
        case 0x143b54u: goto label_143b54;
        case 0x143b58u: goto label_143b58;
        case 0x143b5cu: goto label_143b5c;
        case 0x143b60u: goto label_143b60;
        case 0x143b64u: goto label_143b64;
        case 0x143b68u: goto label_143b68;
        case 0x143b6cu: goto label_143b6c;
        case 0x143b70u: goto label_143b70;
        case 0x143b74u: goto label_143b74;
        case 0x143b78u: goto label_143b78;
        case 0x143b7cu: goto label_143b7c;
        case 0x143b80u: goto label_143b80;
        case 0x143b84u: goto label_143b84;
        case 0x143b88u: goto label_143b88;
        case 0x143b8cu: goto label_143b8c;
        case 0x143b90u: goto label_143b90;
        case 0x143b94u: goto label_143b94;
        case 0x143b98u: goto label_143b98;
        case 0x143b9cu: goto label_143b9c;
        case 0x143ba0u: goto label_143ba0;
        case 0x143ba4u: goto label_143ba4;
        case 0x143ba8u: goto label_143ba8;
        case 0x143bacu: goto label_143bac;
        case 0x143bb0u: goto label_143bb0;
        case 0x143bb4u: goto label_143bb4;
        case 0x143bb8u: goto label_143bb8;
        case 0x143bbcu: goto label_143bbc;
        case 0x143bc0u: goto label_143bc0;
        case 0x143bc4u: goto label_143bc4;
        case 0x143bc8u: goto label_143bc8;
        case 0x143bccu: goto label_143bcc;
        case 0x143bd0u: goto label_143bd0;
        case 0x143bd4u: goto label_143bd4;
        case 0x143bd8u: goto label_143bd8;
        case 0x143bdcu: goto label_143bdc;
        case 0x143be0u: goto label_143be0;
        case 0x143be4u: goto label_143be4;
        case 0x143be8u: goto label_143be8;
        case 0x143becu: goto label_143bec;
        case 0x143bf0u: goto label_143bf0;
        case 0x143bf4u: goto label_143bf4;
        case 0x143bf8u: goto label_143bf8;
        case 0x143bfcu: goto label_143bfc;
        case 0x143c00u: goto label_143c00;
        case 0x143c04u: goto label_143c04;
        case 0x143c08u: goto label_143c08;
        case 0x143c0cu: goto label_143c0c;
        case 0x143c10u: goto label_143c10;
        case 0x143c14u: goto label_143c14;
        case 0x143c18u: goto label_143c18;
        case 0x143c1cu: goto label_143c1c;
        case 0x143c20u: goto label_143c20;
        case 0x143c24u: goto label_143c24;
        case 0x143c28u: goto label_143c28;
        case 0x143c2cu: goto label_143c2c;
        case 0x143c30u: goto label_143c30;
        case 0x143c34u: goto label_143c34;
        case 0x143c38u: goto label_143c38;
        case 0x143c3cu: goto label_143c3c;
        case 0x143c40u: goto label_143c40;
        case 0x143c44u: goto label_143c44;
        case 0x143c48u: goto label_143c48;
        case 0x143c4cu: goto label_143c4c;
        default: break;
    }

    ctx->pc = 0x1439d8u;

label_1439d8:
    // 0x1439d8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1439d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1439dc:
    // 0x1439dc: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1439dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1439e0:
    // 0x1439e0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1439e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1439e4:
    // 0x1439e4: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1439e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_1439e8:
    // 0x1439e8: 0x26a401e0  addiu       $a0, $s5, 0x1E0
    ctx->pc = 0x1439e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 480));
label_1439ec:
    // 0x1439ec: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1439ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_1439f0:
    // 0x1439f0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1439f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_1439f4:
    // 0x1439f4: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1439f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_1439f8:
    // 0x1439f8: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1439f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_1439fc:
    // 0x1439fc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1439fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_143a00:
    // 0x143a00: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x143a00u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_143a04:
    // 0x143a04: 0xc0e409a  jal         func_390268
label_143a08:
    if (ctx->pc == 0x143A08u) {
        ctx->pc = 0x143A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A04u;
        // 0x143a08: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x143A0Cu;
        goto label_143a0c;
    }
    ctx->pc = 0x143A04u;
    SET_GPR_U32(ctx, 31, 0x143A0Cu);
    ctx->pc = 0x143A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143A04u;
    // 0x143a08: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x143A04u, 0x143A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143A0Cu;
label_143a0c:
    // 0x143a0c: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
label_143a10:
    if (ctx->pc == 0x143A10u) {
        ctx->pc = 0x143A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A0Cu;
        // 0x143a10: 0x24520090  addiu       $s2, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143A14u;
        goto label_143a14;
    }
    ctx->pc = 0x143A0Cu;
    {
        const bool branch_taken_0x143a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A0Cu;
        // 0x143a10: 0x24520090  addiu       $s2, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143a0c) {
            ctx->pc = 0x143C24u;
            goto label_143c24;
        }
    }
    ctx->pc = 0x143A14u;
label_143a14:
    // 0x143a14: 0x3c110071  lui         $s1, 0x71
    ctx->pc = 0x143a14u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
label_143a18:
    // 0x143a18: 0x86500002  lh          $s0, 0x2($s2)
    ctx->pc = 0x143a18u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_143a1c:
    // 0x143a1c: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x143a1cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_143a20:
    // 0x143a20: 0x26314b00  addiu       $s1, $s1, 0x4B00
    ctx->pc = 0x143a20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 19200));
label_143a24:
    // 0x143a24: 0xc6ac01ec  lwc1        $f12, 0x1EC($s5)
    ctx->pc = 0x143a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_143a28:
    // 0x143a28: 0x26941740  addiu       $s4, $s4, 0x1740
    ctx->pc = 0x143a28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 5952));
label_143a2c:
    // 0x143a2c: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x143a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_143a30:
    // 0x143a30: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x143a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_143a34:
    // 0x143a34: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x143a34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_143a38:
    // 0x143a38: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x143a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_143a3c:
    // 0x143a3c: 0xc136b24  jal         func_4DAC90
label_143a40:
    if (ctx->pc == 0x143A40u) {
        ctx->pc = 0x143A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A3Cu;
        // 0x143a40: 0x26b30180  addiu       $s3, $s5, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143A44u;
        goto label_143a44;
    }
    ctx->pc = 0x143A3Cu;
    SET_GPR_U32(ctx, 31, 0x143A44u);
    ctx->pc = 0x143A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143A3Cu;
    // 0x143a40: 0x26b30180  addiu       $s3, $s5, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x143A3Cu, 0x143A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143A44u;
label_143a44:
    // 0x143a44: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x143a44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_143a48:
    // 0x143a48: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x143a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_143a4c:
    // 0x143a4c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x143a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_143a50:
    // 0x143a50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x143a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_143a54:
    // 0x143a54: 0xc136b18  jal         func_4DAC60
label_143a58:
    if (ctx->pc == 0x143A58u) {
        ctx->pc = 0x143A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A54u;
        // 0x143a58: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143A5Cu;
        goto label_143a5c;
    }
    ctx->pc = 0x143A54u;
    SET_GPR_U32(ctx, 31, 0x143A5Cu);
    ctx->pc = 0x143A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143A54u;
    // 0x143a58: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x143A54u, 0x143A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143A5Cu;
label_143a5c:
    // 0x143a5c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x143a5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_143a60:
    // 0x143a60: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x143a60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_143a64:
    // 0x143a64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x143a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_143a68:
    // 0x143a68: 0x7ea20180  sq          $v0, 0x180($s5)
    ctx->pc = 0x143a68u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 384), GPR_VEC(ctx, 2));
label_143a6c:
    // 0x143a6c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x143a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_143a70:
    // 0x143a70: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x143a70u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_143a74:
    // 0x143a74: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x143a74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_143a78:
    // 0x143a78: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x143a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_143a7c:
    // 0x143a7c: 0xc0cd8ec  jal         func_3363B0
label_143a80:
    if (ctx->pc == 0x143A80u) {
        ctx->pc = 0x143A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A7Cu;
        // 0x143a80: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143A84u;
        goto label_143a84;
    }
    ctx->pc = 0x143A7Cu;
    SET_GPR_U32(ctx, 31, 0x143A84u);
    ctx->pc = 0x143A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143A7Cu;
    // 0x143a80: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x143A7Cu, 0x143A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143A84u;
label_143a84:
    // 0x143a84: 0xc6ac01e4  lwc1        $f12, 0x1E4($s5)
    ctx->pc = 0x143a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_143a88:
    // 0x143a88: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x143a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_143a8c:
    // 0x143a8c: 0xc136b24  jal         func_4DAC90
label_143a90:
    if (ctx->pc == 0x143A90u) {
        ctx->pc = 0x143A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A8Cu;
        // 0x143a90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143A94u;
        goto label_143a94;
    }
    ctx->pc = 0x143A8Cu;
    SET_GPR_U32(ctx, 31, 0x143A94u);
    ctx->pc = 0x143A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143A8Cu;
    // 0x143a90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x143A8Cu, 0x143A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143A94u;
label_143a94:
    // 0x143a94: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x143a94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_143a98:
    // 0x143a98: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x143a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_143a9c:
    // 0x143a9c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x143a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_143aa0:
    // 0x143aa0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x143aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_143aa4:
    // 0x143aa4: 0xc136b18  jal         func_4DAC60
label_143aa8:
    if (ctx->pc == 0x143AA8u) {
        ctx->pc = 0x143AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143AA4u;
        // 0x143aa8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143AACu;
        goto label_143aac;
    }
    ctx->pc = 0x143AA4u;
    SET_GPR_U32(ctx, 31, 0x143AACu);
    ctx->pc = 0x143AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143AA4u;
    // 0x143aa8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x143AA4u, 0x143AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143AACu;
label_143aac:
    // 0x143aac: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x143aacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_143ab0:
    // 0x143ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x143ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_143ab4:
    // 0x143ab4: 0xc6b401e8  lwc1        $f20, 0x1E8($s5)
    ctx->pc = 0x143ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_143ab8:
    // 0x143ab8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x143ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_143abc:
    // 0x143abc: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x143abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_143ac0:
    // 0x143ac0: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x143ac0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_143ac4:
    // 0x143ac4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x143ac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_143ac8:
    // 0x143ac8: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x143ac8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_143acc:
    // 0x143acc: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x143accu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_143ad0:
    // 0x143ad0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x143ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_143ad4:
    // 0x143ad4: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x143ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_143ad8:
    // 0x143ad8: 0xc0cd8c2  jal         func_336308
label_143adc:
    if (ctx->pc == 0x143ADCu) {
        ctx->pc = 0x143ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143AD8u;
        // 0x143adc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143AE0u;
        goto label_143ae0;
    }
    ctx->pc = 0x143AD8u;
    SET_GPR_U32(ctx, 31, 0x143AE0u);
    ctx->pc = 0x143ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143AD8u;
    // 0x143adc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336308u, 0x143AD8u, 0x143AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143AE0u;
label_143ae0:
    // 0x143ae0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x143ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_143ae4:
    // 0x143ae4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x143ae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_143ae8:
    // 0x143ae8: 0x0  nop
    ctx->pc = 0x143ae8u;
    // NOP
label_143aec:
    // 0x143aec: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x143aecu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_143af0:
    // 0x143af0: 0xc12e310  jal         func_4B8C40
label_143af4:
    if (ctx->pc == 0x143AF4u) {
        ctx->pc = 0x143AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143AF0u;
        // 0x143af4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x143AF8u;
        goto label_143af8;
    }
    ctx->pc = 0x143AF0u;
    SET_GPR_U32(ctx, 31, 0x143AF8u);
    ctx->pc = 0x143AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143AF0u;
    // 0x143af4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x143AF0u, 0x143AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143AF8u;
label_143af8:
    // 0x143af8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x143af8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_143afc:
    // 0x143afc: 0xc12e29c  jal         func_4B8A70
label_143b00:
    if (ctx->pc == 0x143B00u) {
        ctx->pc = 0x143B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143AFCu;
        // 0x143b00: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x143B04u;
        goto label_143b04;
    }
    ctx->pc = 0x143AFCu;
    SET_GPR_U32(ctx, 31, 0x143B04u);
    ctx->pc = 0x143B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143AFCu;
    // 0x143b00: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x143AFCu, 0x143B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143B04u;
label_143b04:
    // 0x143b04: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x143b04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_143b08:
    // 0x143b08: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x143b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_143b0c:
    // 0x143b0c: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x143b0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_143b10:
    // 0x143b10: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x143b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_143b14:
    // 0x143b14: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x143b14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_143b18:
    // 0x143b18: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x143b18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_143b1c:
    // 0x143b1c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x143b1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_143b20:
    // 0x143b20: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x143b20u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_143b24:
    // 0x143b24: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x143b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_143b28:
    // 0x143b28: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x143b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_143b2c:
    // 0x143b2c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x143b2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_143b30:
    // 0x143b30: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x143b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_143b34:
    // 0x143b34: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x143b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_143b38:
    // 0x143b38: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x143b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_143b3c:
    // 0x143b3c: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x143b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_143b40:
    // 0x143b40: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x143b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_143b44:
    // 0x143b44: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x143b44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_143b48:
    // 0x143b48: 0xc136afa  jal         func_4DABE8
label_143b4c:
    if (ctx->pc == 0x143B4Cu) {
        ctx->pc = 0x143B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B48u;
        // 0x143b4c: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x143B50u;
        goto label_143b50;
    }
    ctx->pc = 0x143B48u;
    SET_GPR_U32(ctx, 31, 0x143B50u);
    ctx->pc = 0x143B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143B48u;
    // 0x143b4c: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x143B48u, 0x143B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143B50u;
label_143b50:
    // 0x143b50: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x143b50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_143b54:
    // 0x143b54: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x143b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_143b58:
    // 0x143b58: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x143b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_143b5c:
    // 0x143b5c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x143b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_143b60:
    // 0x143b60: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x143b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_143b64:
    // 0x143b64: 0xc136b30  jal         func_4DACC0
label_143b68:
    if (ctx->pc == 0x143B68u) {
        ctx->pc = 0x143B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B64u;
        // 0x143b68: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143B6Cu;
        goto label_143b6c;
    }
    ctx->pc = 0x143B64u;
    SET_GPR_U32(ctx, 31, 0x143B6Cu);
    ctx->pc = 0x143B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143B64u;
    // 0x143b68: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x143B64u, 0x143B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143B6Cu;
label_143b6c:
    // 0x143b6c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x143b6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_143b70:
    // 0x143b70: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x143b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_143b74:
    // 0x143b74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x143b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_143b78:
    // 0x143b78: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x143b78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_143b7c:
    // 0x143b7c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x143b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_143b80:
    // 0x143b80: 0xc136b18  jal         func_4DAC60
label_143b84:
    if (ctx->pc == 0x143B84u) {
        ctx->pc = 0x143B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B80u;
        // 0x143b84: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143B88u;
        goto label_143b88;
    }
    ctx->pc = 0x143B80u;
    SET_GPR_U32(ctx, 31, 0x143B88u);
    ctx->pc = 0x143B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143B80u;
    // 0x143b84: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x143B80u, 0x143B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143B88u;
label_143b88:
    // 0x143b88: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x143b88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_143b8c:
    // 0x143b8c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x143b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_143b90:
    // 0x143b90: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x143b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_143b94:
    // 0x143b94: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x143b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_143b98:
    // 0x143b98: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x143b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_143b9c:
    // 0x143b9c: 0x846401b8  lh          $a0, 0x1B8($v1)
    ctx->pc = 0x143b9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 440)));
label_143ba0:
    // 0x143ba0: 0x8c6201bc  lw          $v0, 0x1BC($v1)
    ctx->pc = 0x143ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 444)));
label_143ba4:
    // 0x143ba4: 0x40f809  jalr        $v0
label_143ba8:
    if (ctx->pc == 0x143BA8u) {
        ctx->pc = 0x143BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BA4u;
        // 0x143ba8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143BACu;
        goto label_143bac;
    }
    ctx->pc = 0x143BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143BACu);
        ctx->pc = 0x143BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BA4u;
        // 0x143ba8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143BA4u, 0x143BACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143BACu;
label_143bac:
    // 0x143bac: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x143bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_143bb0:
    // 0x143bb0: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x143bb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_143bb4:
    // 0x143bb4: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x143bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_143bb8:
    // 0x143bb8: 0x40f809  jalr        $v0
label_143bbc:
    if (ctx->pc == 0x143BBCu) {
        ctx->pc = 0x143BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BB8u;
        // 0x143bbc: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143BC0u;
        goto label_143bc0;
    }
    ctx->pc = 0x143BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143BC0u);
        ctx->pc = 0x143BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BB8u;
        // 0x143bbc: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143BB8u, 0x143BC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143BC0u;
label_143bc0:
    // 0x143bc0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x143bc0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_143bc4:
    // 0x143bc4: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x143bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_143bc8:
    // 0x143bc8: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x143bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_143bcc:
    // 0x143bcc: 0x84a40218  lh          $a0, 0x218($a1)
    ctx->pc = 0x143bccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 536)));
label_143bd0:
    // 0x143bd0: 0x8ca2021c  lw          $v0, 0x21C($a1)
    ctx->pc = 0x143bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 540)));
label_143bd4:
    // 0x143bd4: 0x40f809  jalr        $v0
label_143bd8:
    if (ctx->pc == 0x143BD8u) {
        ctx->pc = 0x143BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BD4u;
        // 0x143bd8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143BDCu;
        goto label_143bdc;
    }
    ctx->pc = 0x143BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143BDCu);
        ctx->pc = 0x143BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BD4u;
        // 0x143bd8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143BD4u, 0x143BDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143BDCu;
label_143bdc:
    // 0x143bdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x143bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_143be0:
    // 0x143be0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x143be0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_143be4:
    // 0x143be4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x143be4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_143be8:
    // 0x143be8: 0xc0cdc5a  jal         func_337168
label_143bec:
    if (ctx->pc == 0x143BECu) {
        ctx->pc = 0x143BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BE8u;
        // 0x143bec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143BF0u;
        goto label_143bf0;
    }
    ctx->pc = 0x143BE8u;
    SET_GPR_U32(ctx, 31, 0x143BF0u);
    ctx->pc = 0x143BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143BE8u;
    // 0x143bec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337168u, 0x143BE8u, 0x143BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143BF0u;
label_143bf0:
    // 0x143bf0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_143bf4:
    if (ctx->pc == 0x143BF4u) {
        ctx->pc = 0x143BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BF0u;
        // 0x143bf4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143BF8u;
        goto label_143bf8;
    }
    ctx->pc = 0x143BF0u;
    {
        const bool branch_taken_0x143bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BF0u;
        // 0x143bf4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143bf0) {
            ctx->pc = 0x143C08u;
            goto label_143c08;
        }
    }
    ctx->pc = 0x143BF8u;
label_143bf8:
    // 0x143bf8: 0xc0cd972  jal         func_3365C8
label_143bfc:
    if (ctx->pc == 0x143BFCu) {
        ctx->pc = 0x143BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BF8u;
        // 0x143bfc: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143C00u;
        goto label_143c00;
    }
    ctx->pc = 0x143BF8u;
    SET_GPR_U32(ctx, 31, 0x143C00u);
    ctx->pc = 0x143BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143BF8u;
    // 0x143bfc: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365C8u, 0x143BF8u, 0x143C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143C00u;
label_143c00:
    // 0x143c00: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x143c00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_143c04:
    // 0x143c04: 0x7ea20010  sq          $v0, 0x10($s5)
    ctx->pc = 0x143c04u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), GPR_VEC(ctx, 2));
label_143c08:
    // 0x143c08: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x143c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_143c0c:
    // 0x143c0c: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x143c0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_143c10:
    // 0x143c10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x143c10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_143c14:
    // 0x143c14: 0xc04828c  jal         func_120A30
label_143c18:
    if (ctx->pc == 0x143C18u) {
        ctx->pc = 0x143C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C14u;
        // 0x143c18: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143C1Cu;
        goto label_143c1c;
    }
    ctx->pc = 0x143C14u;
    SET_GPR_U32(ctx, 31, 0x143C1Cu);
    ctx->pc = 0x143C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143C14u;
    // 0x143c18: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A30u, 0x143C14u, 0x143C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143C1Cu;
label_143c1c:
    // 0x143c1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_143c20:
    // 0x143c20: 0xaea201f8  sw          $v0, 0x1F8($s5)
    ctx->pc = 0x143c20u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 504), GPR_U32(ctx, 2));
label_143c24:
    // 0x143c24: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x143c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_143c28:
    // 0x143c28: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x143c28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_143c2c:
    // 0x143c2c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x143c2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_143c30:
    // 0x143c30: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x143c30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_143c34:
    // 0x143c34: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x143c34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_143c38:
    // 0x143c38: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x143c38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_143c3c:
    // 0x143c3c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x143c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_143c40:
    // 0x143c40: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x143c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_143c44:
    // 0x143c44: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x143c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_143c48:
    // 0x143c48: 0x3e00008  jr          $ra
label_143c4c:
    if (ctx->pc == 0x143C4Cu) {
        ctx->pc = 0x143C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C48u;
        // 0x143c4c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143C50u;
        goto label_fallthrough_0x143c48;
    }
    ctx->pc = 0x143C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C48u;
        // 0x143c4c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x143c48:
    ctx->pc = 0x143C50u;
}
