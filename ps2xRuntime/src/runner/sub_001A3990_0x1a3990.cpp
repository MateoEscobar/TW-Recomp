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

// Function: sub_001A3990
// Address: 0x1a3990 - 0x1a3c00
void sub_001A3990_0x1a3990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3990_0x1a3990");
#endif

    switch (ctx->pc) {
        case 0x1a3990u: goto label_1a3990;
        case 0x1a3994u: goto label_1a3994;
        case 0x1a3998u: goto label_1a3998;
        case 0x1a399cu: goto label_1a399c;
        case 0x1a39a0u: goto label_1a39a0;
        case 0x1a39a4u: goto label_1a39a4;
        case 0x1a39a8u: goto label_1a39a8;
        case 0x1a39acu: goto label_1a39ac;
        case 0x1a39b0u: goto label_1a39b0;
        case 0x1a39b4u: goto label_1a39b4;
        case 0x1a39b8u: goto label_1a39b8;
        case 0x1a39bcu: goto label_1a39bc;
        case 0x1a39c0u: goto label_1a39c0;
        case 0x1a39c4u: goto label_1a39c4;
        case 0x1a39c8u: goto label_1a39c8;
        case 0x1a39ccu: goto label_1a39cc;
        case 0x1a39d0u: goto label_1a39d0;
        case 0x1a39d4u: goto label_1a39d4;
        case 0x1a39d8u: goto label_1a39d8;
        case 0x1a39dcu: goto label_1a39dc;
        case 0x1a39e0u: goto label_1a39e0;
        case 0x1a39e4u: goto label_1a39e4;
        case 0x1a39e8u: goto label_1a39e8;
        case 0x1a39ecu: goto label_1a39ec;
        case 0x1a39f0u: goto label_1a39f0;
        case 0x1a39f4u: goto label_1a39f4;
        case 0x1a39f8u: goto label_1a39f8;
        case 0x1a39fcu: goto label_1a39fc;
        case 0x1a3a00u: goto label_1a3a00;
        case 0x1a3a04u: goto label_1a3a04;
        case 0x1a3a08u: goto label_1a3a08;
        case 0x1a3a0cu: goto label_1a3a0c;
        case 0x1a3a10u: goto label_1a3a10;
        case 0x1a3a14u: goto label_1a3a14;
        case 0x1a3a18u: goto label_1a3a18;
        case 0x1a3a1cu: goto label_1a3a1c;
        case 0x1a3a20u: goto label_1a3a20;
        case 0x1a3a24u: goto label_1a3a24;
        case 0x1a3a28u: goto label_1a3a28;
        case 0x1a3a2cu: goto label_1a3a2c;
        case 0x1a3a30u: goto label_1a3a30;
        case 0x1a3a34u: goto label_1a3a34;
        case 0x1a3a38u: goto label_1a3a38;
        case 0x1a3a3cu: goto label_1a3a3c;
        case 0x1a3a40u: goto label_1a3a40;
        case 0x1a3a44u: goto label_1a3a44;
        case 0x1a3a48u: goto label_1a3a48;
        case 0x1a3a4cu: goto label_1a3a4c;
        case 0x1a3a50u: goto label_1a3a50;
        case 0x1a3a54u: goto label_1a3a54;
        case 0x1a3a58u: goto label_1a3a58;
        case 0x1a3a5cu: goto label_1a3a5c;
        case 0x1a3a60u: goto label_1a3a60;
        case 0x1a3a64u: goto label_1a3a64;
        case 0x1a3a68u: goto label_1a3a68;
        case 0x1a3a6cu: goto label_1a3a6c;
        case 0x1a3a70u: goto label_1a3a70;
        case 0x1a3a74u: goto label_1a3a74;
        case 0x1a3a78u: goto label_1a3a78;
        case 0x1a3a7cu: goto label_1a3a7c;
        case 0x1a3a80u: goto label_1a3a80;
        case 0x1a3a84u: goto label_1a3a84;
        case 0x1a3a88u: goto label_1a3a88;
        case 0x1a3a8cu: goto label_1a3a8c;
        case 0x1a3a90u: goto label_1a3a90;
        case 0x1a3a94u: goto label_1a3a94;
        case 0x1a3a98u: goto label_1a3a98;
        case 0x1a3a9cu: goto label_1a3a9c;
        case 0x1a3aa0u: goto label_1a3aa0;
        case 0x1a3aa4u: goto label_1a3aa4;
        case 0x1a3aa8u: goto label_1a3aa8;
        case 0x1a3aacu: goto label_1a3aac;
        case 0x1a3ab0u: goto label_1a3ab0;
        case 0x1a3ab4u: goto label_1a3ab4;
        case 0x1a3ab8u: goto label_1a3ab8;
        case 0x1a3abcu: goto label_1a3abc;
        case 0x1a3ac0u: goto label_1a3ac0;
        case 0x1a3ac4u: goto label_1a3ac4;
        case 0x1a3ac8u: goto label_1a3ac8;
        case 0x1a3accu: goto label_1a3acc;
        case 0x1a3ad0u: goto label_1a3ad0;
        case 0x1a3ad4u: goto label_1a3ad4;
        case 0x1a3ad8u: goto label_1a3ad8;
        case 0x1a3adcu: goto label_1a3adc;
        case 0x1a3ae0u: goto label_1a3ae0;
        case 0x1a3ae4u: goto label_1a3ae4;
        case 0x1a3ae8u: goto label_1a3ae8;
        case 0x1a3aecu: goto label_1a3aec;
        case 0x1a3af0u: goto label_1a3af0;
        case 0x1a3af4u: goto label_1a3af4;
        case 0x1a3af8u: goto label_1a3af8;
        case 0x1a3afcu: goto label_1a3afc;
        case 0x1a3b00u: goto label_1a3b00;
        case 0x1a3b04u: goto label_1a3b04;
        case 0x1a3b08u: goto label_1a3b08;
        case 0x1a3b0cu: goto label_1a3b0c;
        case 0x1a3b10u: goto label_1a3b10;
        case 0x1a3b14u: goto label_1a3b14;
        case 0x1a3b18u: goto label_1a3b18;
        case 0x1a3b1cu: goto label_1a3b1c;
        case 0x1a3b20u: goto label_1a3b20;
        case 0x1a3b24u: goto label_1a3b24;
        case 0x1a3b28u: goto label_1a3b28;
        case 0x1a3b2cu: goto label_1a3b2c;
        case 0x1a3b30u: goto label_1a3b30;
        case 0x1a3b34u: goto label_1a3b34;
        case 0x1a3b38u: goto label_1a3b38;
        case 0x1a3b3cu: goto label_1a3b3c;
        case 0x1a3b40u: goto label_1a3b40;
        case 0x1a3b44u: goto label_1a3b44;
        case 0x1a3b48u: goto label_1a3b48;
        case 0x1a3b4cu: goto label_1a3b4c;
        case 0x1a3b50u: goto label_1a3b50;
        case 0x1a3b54u: goto label_1a3b54;
        case 0x1a3b58u: goto label_1a3b58;
        case 0x1a3b5cu: goto label_1a3b5c;
        case 0x1a3b60u: goto label_1a3b60;
        case 0x1a3b64u: goto label_1a3b64;
        case 0x1a3b68u: goto label_1a3b68;
        case 0x1a3b6cu: goto label_1a3b6c;
        case 0x1a3b70u: goto label_1a3b70;
        case 0x1a3b74u: goto label_1a3b74;
        case 0x1a3b78u: goto label_1a3b78;
        case 0x1a3b7cu: goto label_1a3b7c;
        case 0x1a3b80u: goto label_1a3b80;
        case 0x1a3b84u: goto label_1a3b84;
        case 0x1a3b88u: goto label_1a3b88;
        case 0x1a3b8cu: goto label_1a3b8c;
        case 0x1a3b90u: goto label_1a3b90;
        case 0x1a3b94u: goto label_1a3b94;
        case 0x1a3b98u: goto label_1a3b98;
        case 0x1a3b9cu: goto label_1a3b9c;
        case 0x1a3ba0u: goto label_1a3ba0;
        case 0x1a3ba4u: goto label_1a3ba4;
        case 0x1a3ba8u: goto label_1a3ba8;
        case 0x1a3bacu: goto label_1a3bac;
        case 0x1a3bb0u: goto label_1a3bb0;
        case 0x1a3bb4u: goto label_1a3bb4;
        case 0x1a3bb8u: goto label_1a3bb8;
        case 0x1a3bbcu: goto label_1a3bbc;
        case 0x1a3bc0u: goto label_1a3bc0;
        case 0x1a3bc4u: goto label_1a3bc4;
        case 0x1a3bc8u: goto label_1a3bc8;
        case 0x1a3bccu: goto label_1a3bcc;
        case 0x1a3bd0u: goto label_1a3bd0;
        case 0x1a3bd4u: goto label_1a3bd4;
        case 0x1a3bd8u: goto label_1a3bd8;
        case 0x1a3bdcu: goto label_1a3bdc;
        case 0x1a3be0u: goto label_1a3be0;
        case 0x1a3be4u: goto label_1a3be4;
        case 0x1a3be8u: goto label_1a3be8;
        case 0x1a3becu: goto label_1a3bec;
        case 0x1a3bf0u: goto label_1a3bf0;
        case 0x1a3bf4u: goto label_1a3bf4;
        case 0x1a3bf8u: goto label_1a3bf8;
        case 0x1a3bfcu: goto label_1a3bfc;
        default: break;
    }

    ctx->pc = 0x1a3990u;

label_1a3990:
    // 0x1a3990: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1a3990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1a3994:
    // 0x1a3994: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1a3994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_1a3998:
    // 0x1a3998: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1a3998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_1a399c:
    // 0x1a399c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a399cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a39a0:
    // 0x1a39a0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1a39a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_1a39a4:
    // 0x1a39a4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1a39a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1a39a8:
    // 0x1a39a8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1a39a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1a39ac:
    // 0x1a39ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a39acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a39b0:
    // 0x1a39b0: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x1a39b0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1a39b4:
    // 0x1a39b4: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x1a39b4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1a39b8:
    // 0x1a39b8: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x1a39b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1a39bc:
    // 0x1a39bc: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1a39bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1a39c0:
    // 0x1a39c0: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x1a39c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_1a39c4:
    // 0x1a39c4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1a39c8:
    if (ctx->pc == 0x1A39C8u) {
        ctx->pc = 0x1A39C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A39C4u;
        // 0x1a39c8: 0xc68c0360  lwc1        $f12, 0x360($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A39CCu;
        goto label_1a39cc;
    }
    ctx->pc = 0x1A39C4u;
    {
        const bool branch_taken_0x1a39c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a39c4) {
            ctx->pc = 0x1A39C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A39C4u;
            // 0x1a39c8: 0xc68c0360  lwc1        $f12, 0x360($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A39F0u;
            goto label_1a39f0;
        }
    }
    ctx->pc = 0x1A39CCu;
label_1a39cc:
    // 0x1a39cc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1a39ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1a39d0:
    // 0x1a39d0: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1a39d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1a39d4:
    // 0x1a39d4: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1a39d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1a39d8:
    // 0x1a39d8: 0x40f809  jalr        $v0
label_1a39dc:
    if (ctx->pc == 0x1A39DCu) {
        ctx->pc = 0x1A39DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A39D8u;
        // 0x1a39dc: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A39E0u;
        goto label_1a39e0;
    }
    ctx->pc = 0x1A39D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A39E0u);
        ctx->pc = 0x1A39DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A39D8u;
        // 0x1a39dc: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A39D8u, 0x1A39E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A39E0u;
label_1a39e0:
    // 0x1a39e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a39e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a39e4:
    // 0x1a39e4: 0x14430079  bne         $v0, $v1, . + 4 + (0x79 << 2)
label_1a39e8:
    if (ctx->pc == 0x1A39E8u) {
        ctx->pc = 0x1A39E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A39E4u;
        // 0x1a39e8: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A39ECu;
        goto label_1a39ec;
    }
    ctx->pc = 0x1A39E4u;
    {
        const bool branch_taken_0x1a39e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A39E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A39E4u;
        // 0x1a39e8: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a39e4) {
            ctx->pc = 0x1A3BCCu;
            goto label_1a3bcc;
        }
    }
    ctx->pc = 0x1A39ECu;
label_1a39ec:
    // 0x1a39ec: 0xc68c0360  lwc1        $f12, 0x360($s4)
    ctx->pc = 0x1a39ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a39f0:
    // 0x1a39f0: 0x26930040  addiu       $s3, $s4, 0x40
    ctx->pc = 0x1a39f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
label_1a39f4:
    // 0x1a39f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a39f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a39f8:
    // 0x1a39f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a39f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a39fc:
    // 0x1a39fc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a39fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a3a00:
    // 0x1a3a00: 0xc068848  jal         func_1A2120
label_1a3a04:
    if (ctx->pc == 0x1A3A04u) {
        ctx->pc = 0x1A3A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A00u;
        // 0x1a3a04: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3A08u;
        goto label_1a3a08;
    }
    ctx->pc = 0x1A3A00u;
    SET_GPR_U32(ctx, 31, 0x1A3A08u);
    ctx->pc = 0x1A3A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3A00u;
    // 0x1a3a04: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1A3A00u, 0x1A3A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3A08u;
label_1a3a08:
    // 0x1a3a08: 0x26920140  addiu       $s2, $s4, 0x140
    ctx->pc = 0x1a3a08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
label_1a3a0c:
    // 0x1a3a0c: 0xc60cd164  lwc1        $f12, -0x2E9C($s0)
    ctx->pc = 0x1a3a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294955364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a3a10:
    // 0x1a3a10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a3a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a3a14:
    // 0x1a3a14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a3a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3a18:
    // 0x1a3a18: 0x26910240  addiu       $s1, $s4, 0x240
    ctx->pc = 0x1a3a18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 576));
label_1a3a1c:
    // 0x1a3a1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a3a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a3a20:
    // 0x1a3a20: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1a3a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1a3a24:
    // 0x1a3a24: 0xc068848  jal         func_1A2120
label_1a3a28:
    if (ctx->pc == 0x1A3A28u) {
        ctx->pc = 0x1A3A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A24u;
        // 0x1a3a28: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3A2Cu;
        goto label_1a3a2c;
    }
    ctx->pc = 0x1A3A24u;
    SET_GPR_U32(ctx, 31, 0x1A3A2Cu);
    ctx->pc = 0x1A3A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3A24u;
    // 0x1a3a28: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1A3A24u, 0x1A3A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3A2Cu;
label_1a3a2c:
    // 0x1a3a2c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a3a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a3a30:
    // 0x1a3a30: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1a3a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1a3a34:
    // 0x1a3a34: 0xc60cd164  lwc1        $f12, -0x2E9C($s0)
    ctx->pc = 0x1a3a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294955364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a3a38:
    // 0x1a3a38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a3a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3a3c:
    // 0x1a3a3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3a40:
    // 0x1a3a40: 0xc068848  jal         func_1A2120
label_1a3a44:
    if (ctx->pc == 0x1A3A44u) {
        ctx->pc = 0x1A3A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A40u;
        // 0x1a3a44: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3A48u;
        goto label_1a3a48;
    }
    ctx->pc = 0x1A3A40u;
    SET_GPR_U32(ctx, 31, 0x1A3A48u);
    ctx->pc = 0x1A3A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3A40u;
    // 0x1a3a44: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1A3A40u, 0x1A3A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3A48u;
label_1a3a48:
    // 0x1a3a48: 0xc6810344  lwc1        $f1, 0x344($s4)
    ctx->pc = 0x1a3a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3a4c:
    // 0x1a3a4c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1a3a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1a3a50:
    // 0x1a3a50: 0xc6950340  lwc1        $f21, 0x340($s4)
    ctx->pc = 0x1a3a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a3a54:
    // 0x1a3a54: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1a3a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a3a58:
    // 0x1a3a58: 0xc6800348  lwc1        $f0, 0x348($s4)
    ctx->pc = 0x1a3a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3a5c:
    // 0x1a3a5c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1a3a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a3a60:
    // 0x1a3a60: 0x4601ad41  sub.s       $f21, $f21, $f1
    ctx->pc = 0x1a3a60u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
label_1a3a64:
    // 0x1a3a64: 0xa3a50010  sb          $a1, 0x10($sp)
    ctx->pc = 0x1a3a64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 5));
label_1a3a68:
    // 0x1a3a68: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a3a68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1a3a6c:
    // 0x1a3a6c: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x1a3a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
label_1a3a70:
    // 0x1a3a70: 0xa0450003  sb          $a1, 0x3($v0)
    ctx->pc = 0x1a3a70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 5));
label_1a3a74:
    // 0x1a3a74: 0x24060073  addiu       $a2, $zero, 0x73
    ctx->pc = 0x1a3a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_1a3a78:
    // 0x1a3a78: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x1a3a78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
label_1a3a7c:
    // 0x1a3a7c: 0x27a30014  addiu       $v1, $sp, 0x14
    ctx->pc = 0x1a3a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_1a3a80:
    // 0x1a3a80: 0x0  nop
    ctx->pc = 0x1a3a80u;
    // NOP
label_1a3a84:
    // 0x1a3a84: 0x0  nop
    ctx->pc = 0x1a3a84u;
    // NOP
label_1a3a88:
    // 0x1a3a88: 0x4600ad43  div.s       $f21, $f21, $f0
    ctx->pc = 0x1a3a88u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
label_1a3a8c:
    // 0x1a3a8c: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x1a3a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1a3a90:
    // 0x1a3a90: 0xc6940360  lwc1        $f20, 0x360($s4)
    ctx->pc = 0x1a3a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a3a94:
    // 0x1a3a94: 0x240200b7  addiu       $v0, $zero, 0xB7
    ctx->pc = 0x1a3a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
label_1a3a98:
    // 0x1a3a98: 0x3c014075  lui         $at, 0x4075
    ctx->pc = 0x1a3a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16501 << 16));
label_1a3a9c:
    // 0x1a3a9c: 0x34215557  ori         $at, $at, 0x5557
    ctx->pc = 0x1a3a9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21847);
label_1a3aa0:
    // 0x1a3aa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a3aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3aa4:
    // 0x1a3aa4: 0xa3a60014  sb          $a2, 0x14($sp)
    ctx->pc = 0x1a3aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 6));
label_1a3aa8:
    // 0x1a3aa8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a3aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1a3aac:
    // 0x1a3aac: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1a3aacu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1a3ab0:
    // 0x1a3ab0: 0xa0670002  sb          $a3, 0x2($v1)
    ctx->pc = 0x1a3ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 7));
label_1a3ab4:
    // 0x1a3ab4: 0x4615b541  sub.s       $f21, $f22, $f21
    ctx->pc = 0x1a3ab4u;
    ctx->f[21] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
label_1a3ab8:
    // 0x1a3ab8: 0xa0650003  sb          $a1, 0x3($v1)
    ctx->pc = 0x1a3ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 5));
label_1a3abc:
    // 0x1a3abc: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1a3abcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_1a3ac0:
    // 0x1a3ac0: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x1a3ac0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_1a3ac4:
    // 0x1a3ac4: 0x4615bb01  sub.s       $f12, $f23, $f21
    ctx->pc = 0x1a3ac4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
label_1a3ac8:
    // 0x1a3ac8: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x1a3ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1a3acc:
    // 0x1a3acc: 0x46006305  abs.s       $f12, $f12
    ctx->pc = 0x1a3accu;
    ctx->f[12] = FPU_ABS_S(ctx->f[12]);
label_1a3ad0:
    // 0x1a3ad0: 0x4617a5c2  mul.s       $f23, $f20, $f23
    ctx->pc = 0x1a3ad0u;
    ctx->f[23] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
label_1a3ad4:
    // 0x1a3ad4: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1a3ad4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1a3ad8:
    // 0x1a3ad8: 0xc05e896  jal         func_17A258
label_1a3adc:
    if (ctx->pc == 0x1A3ADCu) {
        ctx->pc = 0x1A3ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3AD8u;
        // 0x1a3adc: 0x460cb301  sub.s       $f12, $f22, $f12 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3AE0u;
        goto label_1a3ae0;
    }
    ctx->pc = 0x1A3AD8u;
    SET_GPR_U32(ctx, 31, 0x1A3AE0u);
    ctx->pc = 0x1A3ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3AD8u;
    // 0x1a3adc: 0x460cb301  sub.s       $f12, $f22, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A258u, 0x1A3AD8u, 0x1A3AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3AE0u;
label_1a3ae0:
    // 0x1a3ae0: 0x7a830350  lq          $v1, 0x350($s4)
    ctx->pc = 0x1a3ae0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 848)));
label_1a3ae4:
    // 0x1a3ae4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1a3ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1a3ae8:
    // 0x1a3ae8: 0x4614ad42  mul.s       $f21, $f21, $f20
    ctx->pc = 0x1a3ae8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
label_1a3aec:
    // 0x1a3aec: 0xc483d158  lwc1        $f3, -0x2EA8($a0)
    ctx->pc = 0x1a3aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294955352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a3af0:
    // 0x1a3af0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1a3af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_1a3af4:
    // 0x1a3af4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a3af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a3af8:
    // 0x1a3af8: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1a3af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_1a3afc:
    // 0x1a3afc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a3afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3b00:
    // 0x1a3b00: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1a3b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3b04:
    // 0x1a3b04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3b08:
    // 0x1a3b08: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1a3b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3b0c:
    // 0x1a3b0c: 0x46170001  sub.s       $f0, $f0, $f23
    ctx->pc = 0x1a3b0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
label_1a3b10:
    // 0x1a3b10: 0xe7b6000c  swc1        $f22, 0xC($sp)
    ctx->pc = 0x1a3b10u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1a3b14:
    // 0x1a3b14: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1a3b14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1a3b18:
    // 0x1a3b18: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1a3b18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_1a3b1c:
    // 0x1a3b1c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1a3b1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1a3b20:
    // 0x1a3b20: 0xc068818  jal         func_1A2060
label_1a3b24:
    if (ctx->pc == 0x1A3B24u) {
        ctx->pc = 0x1A3B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B20u;
        // 0x1a3b24: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B28u;
        goto label_1a3b28;
    }
    ctx->pc = 0x1A3B20u;
    SET_GPR_U32(ctx, 31, 0x1A3B28u);
    ctx->pc = 0x1A3B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3B20u;
    // 0x1a3b24: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1A3B20u, 0x1A3B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3B28u;
label_1a3b28:
    // 0x1a3b28: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x1a3b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_1a3b2c:
    // 0x1a3b2c: 0xc068992  jal         func_1A2648
label_1a3b30:
    if (ctx->pc == 0x1A3B30u) {
        ctx->pc = 0x1A3B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B2Cu;
        // 0x1a3b30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B34u;
        goto label_1a3b34;
    }
    ctx->pc = 0x1A3B2Cu;
    SET_GPR_U32(ctx, 31, 0x1A3B34u);
    ctx->pc = 0x1A3B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3B2Cu;
    // 0x1a3b30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x1A3B2Cu, 0x1A3B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3B34u;
label_1a3b34:
    // 0x1a3b34: 0x7a820350  lq          $v0, 0x350($s4)
    ctx->pc = 0x1a3b34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 848)));
label_1a3b38:
    // 0x1a3b38: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a3b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a3b3c:
    // 0x1a3b3c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1a3b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1a3b40:
    // 0x1a3b40: 0xc464d168  lwc1        $f4, -0x2E98($v1)
    ctx->pc = 0x1a3b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1a3b44:
    // 0x1a3b44: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1a3b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1a3b48:
    // 0x1a3b48: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a3b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a3b4c:
    // 0x1a3b4c: 0xc483d16c  lwc1        $f3, -0x2E94($a0)
    ctx->pc = 0x1a3b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294955372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a3b50:
    // 0x1a3b50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a3b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3b54:
    // 0x1a3b54: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1a3b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3b58:
    // 0x1a3b58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a3b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a3b5c:
    // 0x1a3b5c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a3b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3b60:
    // 0x1a3b60: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1a3b60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_1a3b64:
    // 0x1a3b64: 0xe7b6000c  swc1        $f22, 0xC($sp)
    ctx->pc = 0x1a3b64u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1a3b68:
    // 0x1a3b68: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1a3b68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1a3b6c:
    // 0x1a3b6c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1a3b6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1a3b70:
    // 0x1a3b70: 0xc068818  jal         func_1A2060
label_1a3b74:
    if (ctx->pc == 0x1A3B74u) {
        ctx->pc = 0x1A3B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B70u;
        // 0x1a3b74: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B78u;
        goto label_1a3b78;
    }
    ctx->pc = 0x1A3B70u;
    SET_GPR_U32(ctx, 31, 0x1A3B78u);
    ctx->pc = 0x1A3B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3B70u;
    // 0x1a3b74: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1A3B70u, 0x1A3B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3B78u;
label_1a3b78:
    // 0x1a3b78: 0x7a830350  lq          $v1, 0x350($s4)
    ctx->pc = 0x1a3b78u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 848)));
label_1a3b7c:
    // 0x1a3b7c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a3b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a3b80:
    // 0x1a3b80: 0xc443d174  lwc1        $f3, -0x2E8C($v0)
    ctx->pc = 0x1a3b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a3b84:
    // 0x1a3b84: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a3b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a3b88:
    // 0x1a3b88: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1a3b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_1a3b8c:
    // 0x1a3b8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a3b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3b90:
    // 0x1a3b90: 0xe7b6000c  swc1        $f22, 0xC($sp)
    ctx->pc = 0x1a3b90u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1a3b94:
    // 0x1a3b94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a3b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a3b98:
    // 0x1a3b98: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1a3b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3b9c:
    // 0x1a3b9c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1a3b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3ba0:
    // 0x1a3ba0: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x1a3ba0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_1a3ba4:
    // 0x1a3ba4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1a3ba4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1a3ba8:
    // 0x1a3ba8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1a3ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1a3bac:
    // 0x1a3bac: 0xc068818  jal         func_1A2060
label_1a3bb0:
    if (ctx->pc == 0x1A3BB0u) {
        ctx->pc = 0x1A3BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3BACu;
        // 0x1a3bb0: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3BB4u;
        goto label_1a3bb4;
    }
    ctx->pc = 0x1A3BACu;
    SET_GPR_U32(ctx, 31, 0x1A3BB4u);
    ctx->pc = 0x1A3BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3BACu;
    // 0x1a3bb0: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1A3BACu, 0x1A3BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3BB4u;
label_1a3bb4:
    // 0x1a3bb4: 0xc06886e  jal         func_1A21B8
label_1a3bb8:
    if (ctx->pc == 0x1A3BB8u) {
        ctx->pc = 0x1A3BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3BB4u;
        // 0x1a3bb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3BBCu;
        goto label_1a3bbc;
    }
    ctx->pc = 0x1A3BB4u;
    SET_GPR_U32(ctx, 31, 0x1A3BBCu);
    ctx->pc = 0x1A3BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3BB4u;
    // 0x1a3bb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1A3BB4u, 0x1A3BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3BBCu;
label_1a3bbc:
    // 0x1a3bbc: 0xc06886e  jal         func_1A21B8
label_1a3bc0:
    if (ctx->pc == 0x1A3BC0u) {
        ctx->pc = 0x1A3BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3BBCu;
        // 0x1a3bc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3BC4u;
        goto label_1a3bc4;
    }
    ctx->pc = 0x1A3BBCu;
    SET_GPR_U32(ctx, 31, 0x1A3BC4u);
    ctx->pc = 0x1A3BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3BBCu;
    // 0x1a3bc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1A3BBCu, 0x1A3BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3BC4u;
label_1a3bc4:
    // 0x1a3bc4: 0xc06886e  jal         func_1A21B8
label_1a3bc8:
    if (ctx->pc == 0x1A3BC8u) {
        ctx->pc = 0x1A3BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3BC4u;
        // 0x1a3bc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3BCCu;
        goto label_1a3bcc;
    }
    ctx->pc = 0x1A3BC4u;
    SET_GPR_U32(ctx, 31, 0x1A3BCCu);
    ctx->pc = 0x1A3BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3BC4u;
    // 0x1a3bc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1A3BC4u, 0x1A3BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3BCCu;
label_1a3bcc:
    // 0x1a3bcc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1a3bccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a3bd0:
    // 0x1a3bd0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1a3bd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a3bd4:
    // 0x1a3bd4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1a3bd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a3bd8:
    // 0x1a3bd8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1a3bd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a3bdc:
    // 0x1a3bdc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1a3bdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a3be0:
    // 0x1a3be0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a3be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a3be4:
    // 0x1a3be4: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x1a3be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1a3be8:
    // 0x1a3be8: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x1a3be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1a3bec:
    // 0x1a3bec: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x1a3becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a3bf0:
    // 0x1a3bf0: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1a3bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a3bf4:
    // 0x1a3bf4: 0x3e00008  jr          $ra
label_1a3bf8:
    if (ctx->pc == 0x1A3BF8u) {
        ctx->pc = 0x1A3BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3BF4u;
        // 0x1a3bf8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3BFCu;
        goto label_1a3bfc;
    }
    ctx->pc = 0x1A3BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3BF4u;
        // 0x1a3bf8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3BFCu;
label_1a3bfc:
    // 0x1a3bfc: 0x0  nop
    ctx->pc = 0x1a3bfcu;
    // NOP
    ctx->pc = 0x1a3c00u;
}
