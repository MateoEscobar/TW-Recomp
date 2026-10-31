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

// Function: sub_001579A8
// Address: 0x1579a8 - 0x157c20
void sub_001579A8_0x1579a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001579A8_0x1579a8");
#endif

    switch (ctx->pc) {
        case 0x1579a8u: goto label_1579a8;
        case 0x1579acu: goto label_1579ac;
        case 0x1579b0u: goto label_1579b0;
        case 0x1579b4u: goto label_1579b4;
        case 0x1579b8u: goto label_1579b8;
        case 0x1579bcu: goto label_1579bc;
        case 0x1579c0u: goto label_1579c0;
        case 0x1579c4u: goto label_1579c4;
        case 0x1579c8u: goto label_1579c8;
        case 0x1579ccu: goto label_1579cc;
        case 0x1579d0u: goto label_1579d0;
        case 0x1579d4u: goto label_1579d4;
        case 0x1579d8u: goto label_1579d8;
        case 0x1579dcu: goto label_1579dc;
        case 0x1579e0u: goto label_1579e0;
        case 0x1579e4u: goto label_1579e4;
        case 0x1579e8u: goto label_1579e8;
        case 0x1579ecu: goto label_1579ec;
        case 0x1579f0u: goto label_1579f0;
        case 0x1579f4u: goto label_1579f4;
        case 0x1579f8u: goto label_1579f8;
        case 0x1579fcu: goto label_1579fc;
        case 0x157a00u: goto label_157a00;
        case 0x157a04u: goto label_157a04;
        case 0x157a08u: goto label_157a08;
        case 0x157a0cu: goto label_157a0c;
        case 0x157a10u: goto label_157a10;
        case 0x157a14u: goto label_157a14;
        case 0x157a18u: goto label_157a18;
        case 0x157a1cu: goto label_157a1c;
        case 0x157a20u: goto label_157a20;
        case 0x157a24u: goto label_157a24;
        case 0x157a28u: goto label_157a28;
        case 0x157a2cu: goto label_157a2c;
        case 0x157a30u: goto label_157a30;
        case 0x157a34u: goto label_157a34;
        case 0x157a38u: goto label_157a38;
        case 0x157a3cu: goto label_157a3c;
        case 0x157a40u: goto label_157a40;
        case 0x157a44u: goto label_157a44;
        case 0x157a48u: goto label_157a48;
        case 0x157a4cu: goto label_157a4c;
        case 0x157a50u: goto label_157a50;
        case 0x157a54u: goto label_157a54;
        case 0x157a58u: goto label_157a58;
        case 0x157a5cu: goto label_157a5c;
        case 0x157a60u: goto label_157a60;
        case 0x157a64u: goto label_157a64;
        case 0x157a68u: goto label_157a68;
        case 0x157a6cu: goto label_157a6c;
        case 0x157a70u: goto label_157a70;
        case 0x157a74u: goto label_157a74;
        case 0x157a78u: goto label_157a78;
        case 0x157a7cu: goto label_157a7c;
        case 0x157a80u: goto label_157a80;
        case 0x157a84u: goto label_157a84;
        case 0x157a88u: goto label_157a88;
        case 0x157a8cu: goto label_157a8c;
        case 0x157a90u: goto label_157a90;
        case 0x157a94u: goto label_157a94;
        case 0x157a98u: goto label_157a98;
        case 0x157a9cu: goto label_157a9c;
        case 0x157aa0u: goto label_157aa0;
        case 0x157aa4u: goto label_157aa4;
        case 0x157aa8u: goto label_157aa8;
        case 0x157aacu: goto label_157aac;
        case 0x157ab0u: goto label_157ab0;
        case 0x157ab4u: goto label_157ab4;
        case 0x157ab8u: goto label_157ab8;
        case 0x157abcu: goto label_157abc;
        case 0x157ac0u: goto label_157ac0;
        case 0x157ac4u: goto label_157ac4;
        case 0x157ac8u: goto label_157ac8;
        case 0x157accu: goto label_157acc;
        case 0x157ad0u: goto label_157ad0;
        case 0x157ad4u: goto label_157ad4;
        case 0x157ad8u: goto label_157ad8;
        case 0x157adcu: goto label_157adc;
        case 0x157ae0u: goto label_157ae0;
        case 0x157ae4u: goto label_157ae4;
        case 0x157ae8u: goto label_157ae8;
        case 0x157aecu: goto label_157aec;
        case 0x157af0u: goto label_157af0;
        case 0x157af4u: goto label_157af4;
        case 0x157af8u: goto label_157af8;
        case 0x157afcu: goto label_157afc;
        case 0x157b00u: goto label_157b00;
        case 0x157b04u: goto label_157b04;
        case 0x157b08u: goto label_157b08;
        case 0x157b0cu: goto label_157b0c;
        case 0x157b10u: goto label_157b10;
        case 0x157b14u: goto label_157b14;
        case 0x157b18u: goto label_157b18;
        case 0x157b1cu: goto label_157b1c;
        case 0x157b20u: goto label_157b20;
        case 0x157b24u: goto label_157b24;
        case 0x157b28u: goto label_157b28;
        case 0x157b2cu: goto label_157b2c;
        case 0x157b30u: goto label_157b30;
        case 0x157b34u: goto label_157b34;
        case 0x157b38u: goto label_157b38;
        case 0x157b3cu: goto label_157b3c;
        case 0x157b40u: goto label_157b40;
        case 0x157b44u: goto label_157b44;
        case 0x157b48u: goto label_157b48;
        case 0x157b4cu: goto label_157b4c;
        case 0x157b50u: goto label_157b50;
        case 0x157b54u: goto label_157b54;
        case 0x157b58u: goto label_157b58;
        case 0x157b5cu: goto label_157b5c;
        case 0x157b60u: goto label_157b60;
        case 0x157b64u: goto label_157b64;
        case 0x157b68u: goto label_157b68;
        case 0x157b6cu: goto label_157b6c;
        case 0x157b70u: goto label_157b70;
        case 0x157b74u: goto label_157b74;
        case 0x157b78u: goto label_157b78;
        case 0x157b7cu: goto label_157b7c;
        case 0x157b80u: goto label_157b80;
        case 0x157b84u: goto label_157b84;
        case 0x157b88u: goto label_157b88;
        case 0x157b8cu: goto label_157b8c;
        case 0x157b90u: goto label_157b90;
        case 0x157b94u: goto label_157b94;
        case 0x157b98u: goto label_157b98;
        case 0x157b9cu: goto label_157b9c;
        case 0x157ba0u: goto label_157ba0;
        case 0x157ba4u: goto label_157ba4;
        case 0x157ba8u: goto label_157ba8;
        case 0x157bacu: goto label_157bac;
        case 0x157bb0u: goto label_157bb0;
        case 0x157bb4u: goto label_157bb4;
        case 0x157bb8u: goto label_157bb8;
        case 0x157bbcu: goto label_157bbc;
        case 0x157bc0u: goto label_157bc0;
        case 0x157bc4u: goto label_157bc4;
        case 0x157bc8u: goto label_157bc8;
        case 0x157bccu: goto label_157bcc;
        case 0x157bd0u: goto label_157bd0;
        case 0x157bd4u: goto label_157bd4;
        case 0x157bd8u: goto label_157bd8;
        case 0x157bdcu: goto label_157bdc;
        case 0x157be0u: goto label_157be0;
        case 0x157be4u: goto label_157be4;
        case 0x157be8u: goto label_157be8;
        case 0x157becu: goto label_157bec;
        case 0x157bf0u: goto label_157bf0;
        case 0x157bf4u: goto label_157bf4;
        case 0x157bf8u: goto label_157bf8;
        case 0x157bfcu: goto label_157bfc;
        case 0x157c00u: goto label_157c00;
        case 0x157c04u: goto label_157c04;
        case 0x157c08u: goto label_157c08;
        case 0x157c0cu: goto label_157c0c;
        case 0x157c10u: goto label_157c10;
        case 0x157c14u: goto label_157c14;
        case 0x157c18u: goto label_157c18;
        case 0x157c1cu: goto label_157c1c;
        default: break;
    }

    ctx->pc = 0x1579a8u;

label_1579a8:
    // 0x1579a8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1579a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_1579ac:
    // 0x1579ac: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1579acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_1579b0:
    // 0x1579b0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1579b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1579b4:
    // 0x1579b4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1579b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_1579b8:
    // 0x1579b8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1579b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_1579bc:
    // 0x1579bc: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1579bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1579c0:
    // 0x1579c0: 0x24930030  addiu       $s3, $a0, 0x30
    ctx->pc = 0x1579c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_1579c4:
    // 0x1579c4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1579c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1579c8:
    // 0x1579c8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1579c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1579cc:
    // 0x1579cc: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1579ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_1579d0:
    // 0x1579d0: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x1579d0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_1579d4:
    // 0x1579d4: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1579d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_1579d8:
    // 0x1579d8: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1579d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_1579dc:
    // 0x1579dc: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x1579dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1579e0:
    // 0x1579e0: 0xe7b800e0  swc1        $f24, 0xE0($sp)
    ctx->pc = 0x1579e0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1579e4:
    // 0x1579e4: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1579e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1579e8:
    // 0x1579e8: 0xe7b700d8  swc1        $f23, 0xD8($sp)
    ctx->pc = 0x1579e8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1579ec:
    // 0x1579ec: 0x2e0b02d  daddu       $s6, $s7, $zero
    ctx->pc = 0x1579ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1579f0:
    // 0x1579f0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1579f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_1579f4:
    // 0x1579f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1579f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1579f8:
    // 0x1579f8: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x1579f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1579fc:
    // 0x1579fc: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x1579fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_157a00:
    // 0x157a00: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x157a00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_157a04:
    // 0x157a04: 0x8e07cdb4  lw          $a3, -0x324C($s0)
    ctx->pc = 0x157a04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_157a08:
    // 0x157a08: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x157a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_157a0c:
    // 0x157a0c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x157a0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_157a10:
    // 0x157a10: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x157a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_157a14:
    // 0x157a14: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x157a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
label_157a18:
    // 0x157a18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x157a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_157a1c:
    // 0x157a1c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x157a1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_157a20:
    // 0x157a20: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x157a20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_157a24:
    // 0x157a24: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x157a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_157a28:
    // 0x157a28: 0x60f809  jalr        $v1
label_157a2c:
    if (ctx->pc == 0x157A2Cu) {
        ctx->pc = 0x157A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A28u;
        // 0x157a2c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157A30u;
        goto label_157a30;
    }
    ctx->pc = 0x157A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x157A30u);
        ctx->pc = 0x157A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A28u;
        // 0x157a2c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157A28u, 0x157A30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x157A30u;
label_157a30:
    // 0x157a30: 0x8e05cdb4  lw          $a1, -0x324C($s0)
    ctx->pc = 0x157a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_157a34:
    // 0x157a34: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x157a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_157a38:
    // 0x157a38: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x157a38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_157a3c:
    // 0x157a3c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x157a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_157a40:
    // 0x157a40: 0x60f809  jalr        $v1
label_157a44:
    if (ctx->pc == 0x157A44u) {
        ctx->pc = 0x157A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A40u;
        // 0x157a44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157A48u;
        goto label_157a48;
    }
    ctx->pc = 0x157A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x157A48u);
        ctx->pc = 0x157A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A40u;
        // 0x157a44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157A40u, 0x157A48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x157A48u;
label_157a48:
    // 0x157a48: 0x8e05cdb4  lw          $a1, -0x324C($s0)
    ctx->pc = 0x157a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_157a4c:
    // 0x157a4c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x157a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_157a50:
    // 0x157a50: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x157a50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_157a54:
    // 0x157a54: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x157a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_157a58:
    // 0x157a58: 0x40f809  jalr        $v0
label_157a5c:
    if (ctx->pc == 0x157A5Cu) {
        ctx->pc = 0x157A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A58u;
        // 0x157a5c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157A60u;
        goto label_157a60;
    }
    ctx->pc = 0x157A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x157A60u);
        ctx->pc = 0x157A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A58u;
        // 0x157a5c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157A58u, 0x157A60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x157A60u;
label_157a60:
    // 0x157a60: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x157a60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_157a64:
    // 0x157a64: 0x8ed1cdb4  lw          $s1, -0x324C($s6)
    ctx->pc = 0x157a64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954420)));
label_157a68:
    // 0x157a68: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x157a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_157a6c:
    // 0x157a6c: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x157a6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_157a70:
    // 0x157a70: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x157a70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_157a74:
    // 0x157a74: 0x86050028  lh          $a1, 0x28($s0)
    ctx->pc = 0x157a74u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
label_157a78:
    // 0x157a78: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x157a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_157a7c:
    // 0x157a7c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x157a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_157a80:
    // 0x157a80: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x157a80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_157a84:
    // 0x157a84: 0x60f809  jalr        $v1
label_157a88:
    if (ctx->pc == 0x157A88u) {
        ctx->pc = 0x157A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A84u;
        // 0x157a88: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157A8Cu;
        goto label_157a8c;
    }
    ctx->pc = 0x157A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x157A8Cu);
        ctx->pc = 0x157A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A84u;
        // 0x157a88: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157A84u, 0x157A8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x157A8Cu;
label_157a8c:
    // 0x157a8c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x157a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_157a90:
    // 0x157a90: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x157a90u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_157a94:
    // 0x157a94: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x157a94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_157a98:
    // 0x157a98: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x157a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_157a9c:
    // 0x157a9c: 0x60f809  jalr        $v1
label_157aa0:
    if (ctx->pc == 0x157AA0u) {
        ctx->pc = 0x157AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A9Cu;
        // 0x157aa0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157AA4u;
        goto label_157aa4;
    }
    ctx->pc = 0x157A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x157AA4u);
        ctx->pc = 0x157AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A9Cu;
        // 0x157aa0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157A9Cu, 0x157AA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x157AA4u;
label_157aa4:
    // 0x157aa4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x157aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_157aa8:
    // 0x157aa8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x157aa8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_157aac:
    // 0x157aac: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x157aacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_157ab0:
    // 0x157ab0: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x157ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_157ab4:
    // 0x157ab4: 0x60f809  jalr        $v1
label_157ab8:
    if (ctx->pc == 0x157AB8u) {
        ctx->pc = 0x157AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157AB4u;
        // 0x157ab8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157ABCu;
        goto label_157abc;
    }
    ctx->pc = 0x157AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x157ABCu);
        ctx->pc = 0x157AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157AB4u;
        // 0x157ab8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157AB4u, 0x157ABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x157ABCu;
label_157abc:
    // 0x157abc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x157abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_157ac0:
    // 0x157ac0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x157ac0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_157ac4:
    // 0x157ac4: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x157ac4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_157ac8:
    // 0x157ac8: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x157ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_157acc:
    // 0x157acc: 0x60f809  jalr        $v1
label_157ad0:
    if (ctx->pc == 0x157AD0u) {
        ctx->pc = 0x157AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157ACCu;
        // 0x157ad0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157AD4u;
        goto label_157ad4;
    }
    ctx->pc = 0x157ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x157AD4u);
        ctx->pc = 0x157AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157ACCu;
        // 0x157ad0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157ACCu, 0x157AD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x157AD4u;
label_157ad4:
    // 0x157ad4: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x157ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_157ad8:
    // 0x157ad8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x157ad8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_157adc:
    // 0x157adc: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x157adcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_157ae0:
    // 0x157ae0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x157ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_157ae4:
    // 0x157ae4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x157ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_157ae8:
    // 0x157ae8: 0x2465b930  addiu       $a1, $v1, -0x46D0
    ctx->pc = 0x157ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949168));
label_157aec:
    // 0x157aec: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x157aecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_157af0:
    // 0x157af0: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x157af0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_157af4:
    // 0x157af4: 0x46000406  mov.s       $f16, $f0
    ctx->pc = 0x157af4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[0]);
label_157af8:
    // 0x157af8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x157af8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_157afc:
    // 0x157afc: 0x40f809  jalr        $v0
label_157b00:
    if (ctx->pc == 0x157B00u) {
        ctx->pc = 0x157B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157AFCu;
        // 0x157b00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157B04u;
        goto label_157b04;
    }
    ctx->pc = 0x157AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x157B04u);
        ctx->pc = 0x157B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157AFCu;
        // 0x157b00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157AFCu, 0x157B04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x157B04u;
label_157b04:
    // 0x157b04: 0x8ec5cdb4  lw          $a1, -0x324C($s6)
    ctx->pc = 0x157b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954420)));
label_157b08:
    // 0x157b08: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x157b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_157b0c:
    // 0x157b0c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x157b0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_157b10:
    // 0x157b10: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x157b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_157b14:
    // 0x157b14: 0x60f809  jalr        $v1
label_157b18:
    if (ctx->pc == 0x157B18u) {
        ctx->pc = 0x157B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B14u;
        // 0x157b18: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157B1Cu;
        goto label_157b1c;
    }
    ctx->pc = 0x157B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x157B1Cu);
        ctx->pc = 0x157B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B14u;
        // 0x157b18: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157B14u, 0x157B1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x157B1Cu;
label_157b1c:
    // 0x157b1c: 0x8ea4cd4c  lw          $a0, -0x32B4($s5)
    ctx->pc = 0x157b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
label_157b20:
    // 0x157b20: 0xc0616ac  jal         func_185AB0
label_157b24:
    if (ctx->pc == 0x157B24u) {
        ctx->pc = 0x157B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B20u;
        // 0x157b24: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157B28u;
        goto label_157b28;
    }
    ctx->pc = 0x157B20u;
    SET_GPR_U32(ctx, 31, 0x157B28u);
    ctx->pc = 0x157B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157B20u;
    // 0x157b24: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x157B20u, 0x157B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157B28u;
label_157b28:
    // 0x157b28: 0xe7b70000  swc1        $f23, 0x0($sp)
    ctx->pc = 0x157b28u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_157b2c:
    // 0x157b2c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x157b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_157b30:
    // 0x157b30: 0xe7b70008  swc1        $f23, 0x8($sp)
    ctx->pc = 0x157b30u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_157b34:
    // 0x157b34: 0xe7b8000c  swc1        $f24, 0xC($sp)
    ctx->pc = 0x157b34u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_157b38:
    // 0x157b38: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x157b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_157b3c:
    // 0x157b3c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_157b40:
    if (ctx->pc == 0x157B40u) {
        ctx->pc = 0x157B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B3Cu;
        // 0x157b40: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157B44u;
        goto label_157b44;
    }
    ctx->pc = 0x157B3Cu;
    {
        const bool branch_taken_0x157b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B3Cu;
        // 0x157b40: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b3c) {
            ctx->pc = 0x157B64u;
            goto label_157b64;
        }
    }
    ctx->pc = 0x157B44u;
label_157b44:
    // 0x157b44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x157b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_157b48:
    // 0x157b48: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x157b48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_157b4c:
    // 0x157b4c: 0x8c46d310  lw          $a2, -0x2CF0($v0)
    ctx->pc = 0x157b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955792)));
label_157b50:
    // 0x157b50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x157b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_157b54:
    // 0x157b54: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x157b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_157b58:
    // 0x157b58: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x157b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_157b5c:
    // 0x157b5c: 0xc0705ce  jal         func_1C1738
label_157b60:
    if (ctx->pc == 0x157B60u) {
        ctx->pc = 0x157B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B5Cu;
        // 0x157b60: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157B64u;
        goto label_157b64;
    }
    ctx->pc = 0x157B5Cu;
    SET_GPR_U32(ctx, 31, 0x157B64u);
    ctx->pc = 0x157B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157B5Cu;
    // 0x157b60: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1738u, 0x157B5Cu, 0x157B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157B64u;
label_157b64:
    // 0x157b64: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x157b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_157b68:
    // 0x157b68: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x157b68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_157b6c:
    // 0x157b6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x157b6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_157b70:
    // 0x157b70: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x157b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_157b74:
    // 0x157b74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x157b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_157b78:
    // 0x157b78: 0xc070630  jal         func_1C18C0
label_157b7c:
    if (ctx->pc == 0x157B7Cu) {
        ctx->pc = 0x157B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B78u;
        // 0x157b7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157B80u;
        goto label_157b80;
    }
    ctx->pc = 0x157B78u;
    SET_GPR_U32(ctx, 31, 0x157B80u);
    ctx->pc = 0x157B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157B78u;
    // 0x157b7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C18C0u, 0x157B78u, 0x157B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157B80u;
label_157b80:
    // 0x157b80: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x157b80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_157b84:
    // 0x157b84: 0xc0706c4  jal         func_1C1B10
label_157b88:
    if (ctx->pc == 0x157B88u) {
        ctx->pc = 0x157B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B84u;
        // 0x157b88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157B8Cu;
        goto label_157b8c;
    }
    ctx->pc = 0x157B84u;
    SET_GPR_U32(ctx, 31, 0x157B8Cu);
    ctx->pc = 0x157B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157B84u;
    // 0x157b88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1B10u, 0x157B84u, 0x157B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157B8Cu;
label_157b8c:
    // 0x157b8c: 0xc0706d6  jal         func_1C1B58
label_157b90:
    if (ctx->pc == 0x157B90u) {
        ctx->pc = 0x157B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B8Cu;
        // 0x157b90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157B94u;
        goto label_157b94;
    }
    ctx->pc = 0x157B8Cu;
    SET_GPR_U32(ctx, 31, 0x157B94u);
    ctx->pc = 0x157B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157B8Cu;
    // 0x157b90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1B58u, 0x157B8Cu, 0x157B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157B94u;
label_157b94:
    // 0x157b94: 0xc061748  jal         func_185D20
label_157b98:
    if (ctx->pc == 0x157B98u) {
        ctx->pc = 0x157B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B94u;
        // 0x157b98: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157B9Cu;
        goto label_157b9c;
    }
    ctx->pc = 0x157B94u;
    SET_GPR_U32(ctx, 31, 0x157B9Cu);
    ctx->pc = 0x157B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157B94u;
    // 0x157b98: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185D20u, 0x157B94u, 0x157B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157B9Cu;
label_157b9c:
    // 0x157b9c: 0x8ee5cdb4  lw          $a1, -0x324C($s7)
    ctx->pc = 0x157b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954420)));
label_157ba0:
    // 0x157ba0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x157ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_157ba4:
    // 0x157ba4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x157ba4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_157ba8:
    // 0x157ba8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x157ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_157bac:
    // 0x157bac: 0x60f809  jalr        $v1
label_157bb0:
    if (ctx->pc == 0x157BB0u) {
        ctx->pc = 0x157BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BACu;
        // 0x157bb0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157BB4u;
        goto label_157bb4;
    }
    ctx->pc = 0x157BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x157BB4u);
        ctx->pc = 0x157BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BACu;
        // 0x157bb0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157BACu, 0x157BB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x157BB4u;
label_157bb4:
    // 0x157bb4: 0x2e820002  sltiu       $v0, $s4, 0x2
    ctx->pc = 0x157bb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_157bb8:
    // 0x157bb8: 0x5440ffab  bnel        $v0, $zero, . + 4 + (-0x55 << 2)
label_157bbc:
    if (ctx->pc == 0x157BBCu) {
        ctx->pc = 0x157BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BB8u;
        // 0x157bbc: 0x8ed1cdb4  lw          $s1, -0x324C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157BC0u;
        goto label_157bc0;
    }
    ctx->pc = 0x157BB8u;
    {
        const bool branch_taken_0x157bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157bb8) {
            ctx->pc = 0x157BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157BB8u;
            // 0x157bbc: 0x8ed1cdb4  lw          $s1, -0x324C($s6) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157a68;
        }
    }
    ctx->pc = 0x157BC0u;
label_157bc0:
    // 0x157bc0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x157bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_157bc4:
    // 0x157bc4: 0x0  nop
    ctx->pc = 0x157bc4u;
    // NOP
label_157bc8:
    // 0x157bc8: 0x0  nop
    ctx->pc = 0x157bc8u;
    // NOP
label_157bcc:
    // 0x157bcc: 0x0  nop
    ctx->pc = 0x157bccu;
    // NOP
label_157bd0:
    // 0x157bd0: 0x0  nop
    ctx->pc = 0x157bd0u;
    // NOP
label_157bd4:
    // 0x157bd4: 0x0  nop
    ctx->pc = 0x157bd4u;
    // NOP
label_157bd8:
    // 0x157bd8: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_157bdc:
    if (ctx->pc == 0x157BDCu) {
        ctx->pc = 0x157BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BD8u;
        // 0x157bdc: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157BE0u;
        goto label_157be0;
    }
    ctx->pc = 0x157BD8u;
    {
        const bool branch_taken_0x157bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BD8u;
        // 0x157bdc: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157bd8) {
            ctx->pc = 0x157BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157bc8;
        }
    }
    ctx->pc = 0x157BE0u;
label_157be0:
    // 0x157be0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x157be0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_157be4:
    // 0x157be4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x157be4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_157be8:
    // 0x157be8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x157be8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_157bec:
    // 0x157bec: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x157becu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_157bf0:
    // 0x157bf0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x157bf0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_157bf4:
    // 0x157bf4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x157bf4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_157bf8:
    // 0x157bf8: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x157bf8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_157bfc:
    // 0x157bfc: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x157bfcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_157c00:
    // 0x157c00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x157c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_157c04:
    // 0x157c04: 0xc7b800e0  lwc1        $f24, 0xE0($sp)
    ctx->pc = 0x157c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_157c08:
    // 0x157c08: 0xc7b700d8  lwc1        $f23, 0xD8($sp)
    ctx->pc = 0x157c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_157c0c:
    // 0x157c0c: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x157c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_157c10:
    // 0x157c10: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x157c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_157c14:
    // 0x157c14: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x157c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_157c18:
    // 0x157c18: 0x3e00008  jr          $ra
label_157c1c:
    if (ctx->pc == 0x157C1Cu) {
        ctx->pc = 0x157C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C18u;
        // 0x157c1c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157C20u;
        goto label_fallthrough_0x157c18;
    }
    ctx->pc = 0x157C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C18u;
        // 0x157c1c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x157c18:
    ctx->pc = 0x157C20u;
}
