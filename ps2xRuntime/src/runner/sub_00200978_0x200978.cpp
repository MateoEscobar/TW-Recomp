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

// Function: sub_00200978
// Address: 0x200978 - 0x200c48
void sub_00200978_0x200978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200978_0x200978");
#endif

    switch (ctx->pc) {
        case 0x200978u: goto label_200978;
        case 0x20097cu: goto label_20097c;
        case 0x200980u: goto label_200980;
        case 0x200984u: goto label_200984;
        case 0x200988u: goto label_200988;
        case 0x20098cu: goto label_20098c;
        case 0x200990u: goto label_200990;
        case 0x200994u: goto label_200994;
        case 0x200998u: goto label_200998;
        case 0x20099cu: goto label_20099c;
        case 0x2009a0u: goto label_2009a0;
        case 0x2009a4u: goto label_2009a4;
        case 0x2009a8u: goto label_2009a8;
        case 0x2009acu: goto label_2009ac;
        case 0x2009b0u: goto label_2009b0;
        case 0x2009b4u: goto label_2009b4;
        case 0x2009b8u: goto label_2009b8;
        case 0x2009bcu: goto label_2009bc;
        case 0x2009c0u: goto label_2009c0;
        case 0x2009c4u: goto label_2009c4;
        case 0x2009c8u: goto label_2009c8;
        case 0x2009ccu: goto label_2009cc;
        case 0x2009d0u: goto label_2009d0;
        case 0x2009d4u: goto label_2009d4;
        case 0x2009d8u: goto label_2009d8;
        case 0x2009dcu: goto label_2009dc;
        case 0x2009e0u: goto label_2009e0;
        case 0x2009e4u: goto label_2009e4;
        case 0x2009e8u: goto label_2009e8;
        case 0x2009ecu: goto label_2009ec;
        case 0x2009f0u: goto label_2009f0;
        case 0x2009f4u: goto label_2009f4;
        case 0x2009f8u: goto label_2009f8;
        case 0x2009fcu: goto label_2009fc;
        case 0x200a00u: goto label_200a00;
        case 0x200a04u: goto label_200a04;
        case 0x200a08u: goto label_200a08;
        case 0x200a0cu: goto label_200a0c;
        case 0x200a10u: goto label_200a10;
        case 0x200a14u: goto label_200a14;
        case 0x200a18u: goto label_200a18;
        case 0x200a1cu: goto label_200a1c;
        case 0x200a20u: goto label_200a20;
        case 0x200a24u: goto label_200a24;
        case 0x200a28u: goto label_200a28;
        case 0x200a2cu: goto label_200a2c;
        case 0x200a30u: goto label_200a30;
        case 0x200a34u: goto label_200a34;
        case 0x200a38u: goto label_200a38;
        case 0x200a3cu: goto label_200a3c;
        case 0x200a40u: goto label_200a40;
        case 0x200a44u: goto label_200a44;
        case 0x200a48u: goto label_200a48;
        case 0x200a4cu: goto label_200a4c;
        case 0x200a50u: goto label_200a50;
        case 0x200a54u: goto label_200a54;
        case 0x200a58u: goto label_200a58;
        case 0x200a5cu: goto label_200a5c;
        case 0x200a60u: goto label_200a60;
        case 0x200a64u: goto label_200a64;
        case 0x200a68u: goto label_200a68;
        case 0x200a6cu: goto label_200a6c;
        case 0x200a70u: goto label_200a70;
        case 0x200a74u: goto label_200a74;
        case 0x200a78u: goto label_200a78;
        case 0x200a7cu: goto label_200a7c;
        case 0x200a80u: goto label_200a80;
        case 0x200a84u: goto label_200a84;
        case 0x200a88u: goto label_200a88;
        case 0x200a8cu: goto label_200a8c;
        case 0x200a90u: goto label_200a90;
        case 0x200a94u: goto label_200a94;
        case 0x200a98u: goto label_200a98;
        case 0x200a9cu: goto label_200a9c;
        case 0x200aa0u: goto label_200aa0;
        case 0x200aa4u: goto label_200aa4;
        case 0x200aa8u: goto label_200aa8;
        case 0x200aacu: goto label_200aac;
        case 0x200ab0u: goto label_200ab0;
        case 0x200ab4u: goto label_200ab4;
        case 0x200ab8u: goto label_200ab8;
        case 0x200abcu: goto label_200abc;
        case 0x200ac0u: goto label_200ac0;
        case 0x200ac4u: goto label_200ac4;
        case 0x200ac8u: goto label_200ac8;
        case 0x200accu: goto label_200acc;
        case 0x200ad0u: goto label_200ad0;
        case 0x200ad4u: goto label_200ad4;
        case 0x200ad8u: goto label_200ad8;
        case 0x200adcu: goto label_200adc;
        case 0x200ae0u: goto label_200ae0;
        case 0x200ae4u: goto label_200ae4;
        case 0x200ae8u: goto label_200ae8;
        case 0x200aecu: goto label_200aec;
        case 0x200af0u: goto label_200af0;
        case 0x200af4u: goto label_200af4;
        case 0x200af8u: goto label_200af8;
        case 0x200afcu: goto label_200afc;
        case 0x200b00u: goto label_200b00;
        case 0x200b04u: goto label_200b04;
        case 0x200b08u: goto label_200b08;
        case 0x200b0cu: goto label_200b0c;
        case 0x200b10u: goto label_200b10;
        case 0x200b14u: goto label_200b14;
        case 0x200b18u: goto label_200b18;
        case 0x200b1cu: goto label_200b1c;
        case 0x200b20u: goto label_200b20;
        case 0x200b24u: goto label_200b24;
        case 0x200b28u: goto label_200b28;
        case 0x200b2cu: goto label_200b2c;
        case 0x200b30u: goto label_200b30;
        case 0x200b34u: goto label_200b34;
        case 0x200b38u: goto label_200b38;
        case 0x200b3cu: goto label_200b3c;
        case 0x200b40u: goto label_200b40;
        case 0x200b44u: goto label_200b44;
        case 0x200b48u: goto label_200b48;
        case 0x200b4cu: goto label_200b4c;
        case 0x200b50u: goto label_200b50;
        case 0x200b54u: goto label_200b54;
        case 0x200b58u: goto label_200b58;
        case 0x200b5cu: goto label_200b5c;
        case 0x200b60u: goto label_200b60;
        case 0x200b64u: goto label_200b64;
        case 0x200b68u: goto label_200b68;
        case 0x200b6cu: goto label_200b6c;
        case 0x200b70u: goto label_200b70;
        case 0x200b74u: goto label_200b74;
        case 0x200b78u: goto label_200b78;
        case 0x200b7cu: goto label_200b7c;
        case 0x200b80u: goto label_200b80;
        case 0x200b84u: goto label_200b84;
        case 0x200b88u: goto label_200b88;
        case 0x200b8cu: goto label_200b8c;
        case 0x200b90u: goto label_200b90;
        case 0x200b94u: goto label_200b94;
        case 0x200b98u: goto label_200b98;
        case 0x200b9cu: goto label_200b9c;
        case 0x200ba0u: goto label_200ba0;
        case 0x200ba4u: goto label_200ba4;
        case 0x200ba8u: goto label_200ba8;
        case 0x200bacu: goto label_200bac;
        case 0x200bb0u: goto label_200bb0;
        case 0x200bb4u: goto label_200bb4;
        case 0x200bb8u: goto label_200bb8;
        case 0x200bbcu: goto label_200bbc;
        case 0x200bc0u: goto label_200bc0;
        case 0x200bc4u: goto label_200bc4;
        case 0x200bc8u: goto label_200bc8;
        case 0x200bccu: goto label_200bcc;
        case 0x200bd0u: goto label_200bd0;
        case 0x200bd4u: goto label_200bd4;
        case 0x200bd8u: goto label_200bd8;
        case 0x200bdcu: goto label_200bdc;
        case 0x200be0u: goto label_200be0;
        case 0x200be4u: goto label_200be4;
        case 0x200be8u: goto label_200be8;
        case 0x200becu: goto label_200bec;
        case 0x200bf0u: goto label_200bf0;
        case 0x200bf4u: goto label_200bf4;
        case 0x200bf8u: goto label_200bf8;
        case 0x200bfcu: goto label_200bfc;
        case 0x200c00u: goto label_200c00;
        case 0x200c04u: goto label_200c04;
        case 0x200c08u: goto label_200c08;
        case 0x200c0cu: goto label_200c0c;
        case 0x200c10u: goto label_200c10;
        case 0x200c14u: goto label_200c14;
        case 0x200c18u: goto label_200c18;
        case 0x200c1cu: goto label_200c1c;
        case 0x200c20u: goto label_200c20;
        case 0x200c24u: goto label_200c24;
        case 0x200c28u: goto label_200c28;
        case 0x200c2cu: goto label_200c2c;
        case 0x200c30u: goto label_200c30;
        case 0x200c34u: goto label_200c34;
        case 0x200c38u: goto label_200c38;
        case 0x200c3cu: goto label_200c3c;
        case 0x200c40u: goto label_200c40;
        case 0x200c44u: goto label_200c44;
        default: break;
    }

    ctx->pc = 0x200978u;

label_200978:
    // 0x200978: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x200978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_20097c:
    // 0x20097c: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x20097cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_200980:
    // 0x200980: 0xc442f564  lwc1        $f2, -0xA9C($v0)
    ctx->pc = 0x200980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_200984:
    // 0x200984: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x200984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
label_200988:
    // 0x200988: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x200988u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_20098c:
    // 0x20098c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20098cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_200990:
    // 0x200990: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x200990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_200994:
    // 0x200994: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x200994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_200998:
    // 0x200998: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x200998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_20099c:
    // 0x20099c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x20099cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2009a0:
    // 0x2009a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2009a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2009a4:
    // 0x2009a4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2009a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2009a8:
    // 0x2009a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2009a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2009ac:
    // 0x2009ac: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2009acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2009b0:
    // 0x2009b0: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x2009b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_2009b4:
    // 0x2009b4: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x2009b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_2009b8:
    // 0x2009b8: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x2009b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
label_2009bc:
    // 0x2009bc: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x2009bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_2009c0:
    // 0x2009c0: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2009c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2009c4:
    // 0x2009c4: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x2009c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_2009c8:
    // 0x2009c8: 0x26530098  addiu       $s3, $s2, 0x98
    ctx->pc = 0x2009c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 152));
label_2009cc:
    // 0x2009cc: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x2009ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_2009d0:
    // 0x2009d0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2009d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_2009d4:
    // 0x2009d4: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x2009d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2009d8:
    // 0x2009d8: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x2009d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2009dc:
    // 0x2009dc: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x2009dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2009e0:
    // 0x2009e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2009e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2009e4:
    // 0x2009e4: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2009e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2009e8:
    // 0x2009e8: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2009e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2009ec:
    // 0x2009ec: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2009ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_2009f0:
    // 0x2009f0: 0xc046e0e  jal         func_11B838
label_2009f4:
    if (ctx->pc == 0x2009F4u) {
        ctx->pc = 0x2009F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2009F0u;
        // 0x2009f4: 0x2610ef80  addiu       $s0, $s0, -0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2009F8u;
        goto label_2009f8;
    }
    ctx->pc = 0x2009F0u;
    SET_GPR_U32(ctx, 31, 0x2009F8u);
    ctx->pc = 0x2009F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2009F0u;
    // 0x2009f4: 0x2610ef80  addiu       $s0, $s0, -0x1080 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B838u, 0x2009F0u, 0x2009F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2009F8u;
label_2009f8:
    // 0x2009f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2009f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2009fc:
    // 0x2009fc: 0xc046e5c  jal         func_11B970
label_200a00:
    if (ctx->pc == 0x200A00u) {
        ctx->pc = 0x200A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2009FCu;
        // 0x200a00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200A04u;
        goto label_200a04;
    }
    ctx->pc = 0x2009FCu;
    SET_GPR_U32(ctx, 31, 0x200A04u);
    ctx->pc = 0x200A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2009FCu;
    // 0x200a00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B970u, 0x2009FCu, 0x200A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A04u;
label_200a04:
    // 0x200a04: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x200a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_200a08:
    // 0x200a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200a0c:
    // 0x200a0c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x200a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_200a10:
    // 0x200a10: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x200a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_200a14:
    // 0x200a14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x200a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_200a18:
    // 0x200a18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x200a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_200a1c:
    // 0x200a1c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x200a1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_200a20:
    // 0x200a20: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x200a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_200a24:
    // 0x200a24: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x200a24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_200a28:
    // 0x200a28: 0xc080b0c  jal         func_202C30
label_200a2c:
    if (ctx->pc == 0x200A2Cu) {
        ctx->pc = 0x200A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A28u;
        // 0x200a2c: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x200A30u;
        goto label_200a30;
    }
    ctx->pc = 0x200A28u;
    SET_GPR_U32(ctx, 31, 0x200A30u);
    ctx->pc = 0x200A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A28u;
    // 0x200a2c: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x202C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202C30u, 0x200A28u, 0x200A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A30u;
label_200a30:
    // 0x200a30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200a34:
    // 0x200a34: 0xc080b10  jal         func_202C40
label_200a38:
    if (ctx->pc == 0x200A38u) {
        ctx->pc = 0x200A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A34u;
        // 0x200a38: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200A3Cu;
        goto label_200a3c;
    }
    ctx->pc = 0x200A34u;
    SET_GPR_U32(ctx, 31, 0x200A3Cu);
    ctx->pc = 0x200A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A34u;
    // 0x200a38: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202C40u, 0x200A34u, 0x200A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A3Cu;
label_200a3c:
    // 0x200a3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x200a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200a40:
    // 0x200a40: 0xc07f8b4  jal         func_1FE2D0
label_200a44:
    if (ctx->pc == 0x200A44u) {
        ctx->pc = 0x200A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A40u;
        // 0x200a44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200A48u;
        goto label_200a48;
    }
    ctx->pc = 0x200A40u;
    SET_GPR_U32(ctx, 31, 0x200A48u);
    ctx->pc = 0x200A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A40u;
    // 0x200a44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2D0u, 0x200A40u, 0x200A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A48u;
label_200a48:
    // 0x200a48: 0xc07f818  jal         func_1FE060
label_200a4c:
    if (ctx->pc == 0x200A4Cu) {
        ctx->pc = 0x200A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A48u;
        // 0x200a4c: 0xae420098  sw          $v0, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200A50u;
        goto label_200a50;
    }
    ctx->pc = 0x200A48u;
    SET_GPR_U32(ctx, 31, 0x200A50u);
    ctx->pc = 0x200A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A48u;
    // 0x200a4c: 0xae420098  sw          $v0, 0x98($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE060u, 0x200A48u, 0x200A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A50u;
label_200a50:
    // 0x200a50: 0xa64200a8  sh          $v0, 0xA8($s2)
    ctx->pc = 0x200a50u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 168), (uint16_t)GPR_U32(ctx, 2));
label_200a54:
    // 0x200a54: 0xc0e4060  jal         func_390180
label_200a58:
    if (ctx->pc == 0x200A58u) {
        ctx->pc = 0x200A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A54u;
        // 0x200a58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200A5Cu;
        goto label_200a5c;
    }
    ctx->pc = 0x200A54u;
    SET_GPR_U32(ctx, 31, 0x200A5Cu);
    ctx->pc = 0x200A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A54u;
    // 0x200a58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x200A54u, 0x200A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A5Cu;
label_200a5c:
    // 0x200a5c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_200a60:
    if (ctx->pc == 0x200A60u) {
        ctx->pc = 0x200A64u;
        goto label_200a64;
    }
    ctx->pc = 0x200A5Cu;
    {
        const bool branch_taken_0x200a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200a5c) {
            ctx->pc = 0x200AB4u;
            goto label_200ab4;
        }
    }
    ctx->pc = 0x200A64u;
label_200a64:
    // 0x200a64: 0xc0e409a  jal         func_390268
label_200a68:
    if (ctx->pc == 0x200A68u) {
        ctx->pc = 0x200A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A64u;
        // 0x200a68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200A6Cu;
        goto label_200a6c;
    }
    ctx->pc = 0x200A64u;
    SET_GPR_U32(ctx, 31, 0x200A6Cu);
    ctx->pc = 0x200A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A64u;
    // 0x200a68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x200A64u, 0x200A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A6Cu;
label_200a6c:
    // 0x200a6c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_200a70:
    if (ctx->pc == 0x200A70u) {
        ctx->pc = 0x200A74u;
        goto label_200a74;
    }
    ctx->pc = 0x200A6Cu;
    {
        const bool branch_taken_0x200a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200a6c) {
            ctx->pc = 0x200AB4u;
            goto label_200ab4;
        }
    }
    ctx->pc = 0x200A74u;
label_200a74:
    // 0x200a74: 0x8e440098  lw          $a0, 0x98($s2)
    ctx->pc = 0x200a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_200a78:
    // 0x200a78: 0xc0a48cc  jal         func_292330
label_200a7c:
    if (ctx->pc == 0x200A7Cu) {
        ctx->pc = 0x200A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A78u;
        // 0x200a7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200A80u;
        goto label_200a80;
    }
    ctx->pc = 0x200A78u;
    SET_GPR_U32(ctx, 31, 0x200A80u);
    ctx->pc = 0x200A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A78u;
    // 0x200a7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292330u, 0x200A78u, 0x200A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A80u;
label_200a80:
    // 0x200a80: 0x8e440098  lw          $a0, 0x98($s2)
    ctx->pc = 0x200a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_200a84:
    // 0x200a84: 0xc08d3be  jal         func_234EF8
label_200a88:
    if (ctx->pc == 0x200A88u) {
        ctx->pc = 0x200A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A84u;
        // 0x200a88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200A8Cu;
        goto label_200a8c;
    }
    ctx->pc = 0x200A84u;
    SET_GPR_U32(ctx, 31, 0x200A8Cu);
    ctx->pc = 0x200A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A84u;
    // 0x200a88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234EF8u, 0x200A84u, 0x200A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A8Cu;
label_200a8c:
    // 0x200a8c: 0xc0e409a  jal         func_390268
label_200a90:
    if (ctx->pc == 0x200A90u) {
        ctx->pc = 0x200A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A8Cu;
        // 0x200a90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200A94u;
        goto label_200a94;
    }
    ctx->pc = 0x200A8Cu;
    SET_GPR_U32(ctx, 31, 0x200A94u);
    ctx->pc = 0x200A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A8Cu;
    // 0x200a90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x200A8Cu, 0x200A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A94u;
label_200a94:
    // 0x200a94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x200a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200a98:
    // 0x200a98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200a9c:
    // 0x200a9c: 0xa2000284  sb          $zero, 0x284($s0)
    ctx->pc = 0x200a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 644), (uint8_t)GPR_U32(ctx, 0));
label_200aa0:
    // 0x200aa0: 0xc08e86c  jal         func_23A1B0
label_200aa4:
    if (ctx->pc == 0x200AA4u) {
        ctx->pc = 0x200AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200AA0u;
        // 0x200aa4: 0x8e440098  lw          $a0, 0x98($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200AA8u;
        goto label_200aa8;
    }
    ctx->pc = 0x200AA0u;
    SET_GPR_U32(ctx, 31, 0x200AA8u);
    ctx->pc = 0x200AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200AA0u;
    // 0x200aa4: 0x8e440098  lw          $a0, 0x98($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A1B0u, 0x200AA0u, 0x200AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200AA8u;
label_200aa8:
    // 0x200aa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200aac:
    // 0x200aac: 0xc086c2e  jal         func_21B0B8
label_200ab0:
    if (ctx->pc == 0x200AB0u) {
        ctx->pc = 0x200AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200AACu;
        // 0x200ab0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200AB4u;
        goto label_200ab4;
    }
    ctx->pc = 0x200AACu;
    SET_GPR_U32(ctx, 31, 0x200AB4u);
    ctx->pc = 0x200AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200AACu;
    // 0x200ab0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B0B8u, 0x200AACu, 0x200AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200AB4u;
label_200ab4:
    // 0x200ab4: 0xc07f8b4  jal         func_1FE2D0
label_200ab8:
    if (ctx->pc == 0x200AB8u) {
        ctx->pc = 0x200AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200AB4u;
        // 0x200ab8: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200ABCu;
        goto label_200abc;
    }
    ctx->pc = 0x200AB4u;
    SET_GPR_U32(ctx, 31, 0x200ABCu);
    ctx->pc = 0x200AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200AB4u;
    // 0x200ab8: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2D0u, 0x200AB4u, 0x200ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200ABCu;
label_200abc:
    // 0x200abc: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x200abcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_200ac0:
    // 0x200ac0: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x200ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_200ac4:
    // 0x200ac4: 0xc0e4060  jal         func_390180
label_200ac8:
    if (ctx->pc == 0x200AC8u) {
        ctx->pc = 0x200AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200AC4u;
        // 0x200ac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200ACCu;
        goto label_200acc;
    }
    ctx->pc = 0x200AC4u;
    SET_GPR_U32(ctx, 31, 0x200ACCu);
    ctx->pc = 0x200AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200AC4u;
    // 0x200ac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x200AC4u, 0x200ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200ACCu;
label_200acc:
    // 0x200acc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_200ad0:
    if (ctx->pc == 0x200AD0u) {
        ctx->pc = 0x200AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200ACCu;
        // 0x200ad0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200AD4u;
        goto label_200ad4;
    }
    ctx->pc = 0x200ACCu;
    {
        const bool branch_taken_0x200acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200ACCu;
        // 0x200ad0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200acc) {
            ctx->pc = 0x200B04u;
            goto label_200b04;
        }
    }
    ctx->pc = 0x200AD4u;
label_200ad4:
    // 0x200ad4: 0xc0e409a  jal         func_390268
label_200ad8:
    if (ctx->pc == 0x200AD8u) {
        ctx->pc = 0x200AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200AD4u;
        // 0x200ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200ADCu;
        goto label_200adc;
    }
    ctx->pc = 0x200AD4u;
    SET_GPR_U32(ctx, 31, 0x200ADCu);
    ctx->pc = 0x200AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200AD4u;
    // 0x200ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x200AD4u, 0x200ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200ADCu;
label_200adc:
    // 0x200adc: 0xc0e409a  jal         func_390268
label_200ae0:
    if (ctx->pc == 0x200AE0u) {
        ctx->pc = 0x200AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200ADCu;
        // 0x200ae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200AE4u;
        goto label_200ae4;
    }
    ctx->pc = 0x200ADCu;
    SET_GPR_U32(ctx, 31, 0x200AE4u);
    ctx->pc = 0x200AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200ADCu;
    // 0x200ae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x200ADCu, 0x200AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200AE4u;
label_200ae4:
    // 0x200ae4: 0xc089c70  jal         func_2271C0
label_200ae8:
    if (ctx->pc == 0x200AE8u) {
        ctx->pc = 0x200AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200AE4u;
        // 0x200ae8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200AECu;
        goto label_200aec;
    }
    ctx->pc = 0x200AE4u;
    SET_GPR_U32(ctx, 31, 0x200AECu);
    ctx->pc = 0x200AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200AE4u;
    // 0x200ae8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2271C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2271C0u, 0x200AE4u, 0x200AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200AECu;
label_200aec:
    // 0x200aec: 0xc0e409a  jal         func_390268
label_200af0:
    if (ctx->pc == 0x200AF0u) {
        ctx->pc = 0x200AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200AECu;
        // 0x200af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200AF4u;
        goto label_200af4;
    }
    ctx->pc = 0x200AECu;
    SET_GPR_U32(ctx, 31, 0x200AF4u);
    ctx->pc = 0x200AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200AECu;
    // 0x200af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x200AECu, 0x200AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200AF4u;
label_200af4:
    // 0x200af4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x200af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200af8:
    // 0x200af8: 0xc0871f2  jal         func_21C7C8
label_200afc:
    if (ctx->pc == 0x200AFCu) {
        ctx->pc = 0x200AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200AF8u;
        // 0x200afc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200B00u;
        goto label_200b00;
    }
    ctx->pc = 0x200AF8u;
    SET_GPR_U32(ctx, 31, 0x200B00u);
    ctx->pc = 0x200AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200AF8u;
    // 0x200afc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C7C8u, 0x200AF8u, 0x200B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B00u;
label_200b00:
    // 0x200b00: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x200b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_200b04:
    // 0x200b04: 0xc06254a  jal         func_189528
label_200b08:
    if (ctx->pc == 0x200B08u) {
        ctx->pc = 0x200B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B04u;
        // 0x200b08: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200B0Cu;
        goto label_200b0c;
    }
    ctx->pc = 0x200B04u;
    SET_GPR_U32(ctx, 31, 0x200B0Cu);
    ctx->pc = 0x200B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200B04u;
    // 0x200b08: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189528u, 0x200B04u, 0x200B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B0Cu;
label_200b0c:
    // 0x200b0c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x200b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_200b10:
    // 0x200b10: 0x26a4ef80  addiu       $a0, $s5, -0x1080
    ctx->pc = 0x200b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294963072));
label_200b14:
    // 0x200b14: 0xc080b38  jal         func_202CE0
label_200b18:
    if (ctx->pc == 0x200B18u) {
        ctx->pc = 0x200B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B14u;
        // 0x200b18: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200B1Cu;
        goto label_200b1c;
    }
    ctx->pc = 0x200B14u;
    SET_GPR_U32(ctx, 31, 0x200B1Cu);
    ctx->pc = 0x200B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200B14u;
    // 0x200b18: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202CE0u, 0x200B14u, 0x200B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B1Cu;
label_200b1c:
    // 0x200b1c: 0xc07f80e  jal         func_1FE038
label_200b20:
    if (ctx->pc == 0x200B20u) {
        ctx->pc = 0x200B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B1Cu;
        // 0x200b20: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200B24u;
        goto label_200b24;
    }
    ctx->pc = 0x200B1Cu;
    SET_GPR_U32(ctx, 31, 0x200B24u);
    ctx->pc = 0x200B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200B1Cu;
    // 0x200b20: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE038u, 0x200B1Cu, 0x200B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B24u;
label_200b24:
    // 0x200b24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x200b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200b28:
    // 0x200b28: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x200b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_200b2c:
    // 0x200b2c: 0xa7b00030  sh          $s0, 0x30($sp)
    ctx->pc = 0x200b2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 16));
label_200b30:
    // 0x200b30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x200b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_200b34:
    // 0x200b34: 0xc13a798  jal         func_4E9E60
label_200b38:
    if (ctx->pc == 0x200B38u) {
        ctx->pc = 0x200B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B34u;
        // 0x200b38: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200B3Cu;
        goto label_200b3c;
    }
    ctx->pc = 0x200B34u;
    SET_GPR_U32(ctx, 31, 0x200B3Cu);
    ctx->pc = 0x200B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200B34u;
    // 0x200b38: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9E60u, 0x200B34u, 0x200B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B3Cu;
label_200b3c:
    // 0x200b3c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x200b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_200b40:
    // 0x200b40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x200b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200b44:
    // 0x200b44: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x200b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_200b48:
    // 0x200b48: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_200b4c:
    if (ctx->pc == 0x200B4Cu) {
        ctx->pc = 0x200B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B48u;
        // 0x200b4c: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200B50u;
        goto label_200b50;
    }
    ctx->pc = 0x200B48u;
    {
        const bool branch_taken_0x200b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x200B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B48u;
        // 0x200b4c: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200b48) {
            ctx->pc = 0x200B64u;
            goto label_200b64;
        }
    }
    ctx->pc = 0x200B50u;
label_200b50:
    // 0x200b50: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x200b50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_200b54:
    // 0x200b54: 0x97a20030  lhu         $v0, 0x30($sp)
    ctx->pc = 0x200b54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
label_200b58:
    // 0x200b58: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x200b58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_200b5c:
    // 0x200b5c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_200b60:
    if (ctx->pc == 0x200B60u) {
        ctx->pc = 0x200B64u;
        goto label_200b64;
    }
    ctx->pc = 0x200B5Cu;
    {
        const bool branch_taken_0x200b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200b5c) {
            ctx->pc = 0x200B68u;
            goto label_200b68;
        }
    }
    ctx->pc = 0x200B64u;
label_200b64:
    // 0x200b64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x200b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200b68:
    // 0x200b68: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_200b6c:
    if (ctx->pc == 0x200B6Cu) {
        ctx->pc = 0x200B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B68u;
        // 0x200b6c: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200B70u;
        goto label_200b70;
    }
    ctx->pc = 0x200B68u;
    {
        const bool branch_taken_0x200b68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x200B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B68u;
        // 0x200b6c: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200b68) {
            ctx->pc = 0x200BA0u;
            goto label_200ba0;
        }
    }
    ctx->pc = 0x200B70u;
label_200b70:
    // 0x200b70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x200b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_200b74:
    // 0x200b74: 0x97a20030  lhu         $v0, 0x30($sp)
    ctx->pc = 0x200b74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
label_200b78:
    // 0x200b78: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x200b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_200b7c:
    // 0x200b7c: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x200b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
label_200b80:
    // 0x200b80: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x200b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_200b84:
    // 0x200b84: 0xa7a20080  sh          $v0, 0x80($sp)
    ctx->pc = 0x200b84u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 128), (uint16_t)GPR_U32(ctx, 2));
label_200b88:
    // 0x200b88: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x200b88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_200b8c:
    // 0x200b8c: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x200b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
label_200b90:
    // 0x200b90: 0xc13a8f2  jal         func_4EA3C8
label_200b94:
    if (ctx->pc == 0x200B94u) {
        ctx->pc = 0x200B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B90u;
        // 0x200b94: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200B98u;
        goto label_200b98;
    }
    ctx->pc = 0x200B90u;
    SET_GPR_U32(ctx, 31, 0x200B98u);
    ctx->pc = 0x200B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200B90u;
    // 0x200b94: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EA3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EA3C8u, 0x200B90u, 0x200B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B98u;
label_200b98:
    // 0x200b98: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x200b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_200b9c:
    // 0x200b9c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x200b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_200ba0:
    // 0x200ba0: 0x8e4700d4  lw          $a3, 0xD4($s2)
    ctx->pc = 0x200ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_200ba4:
    // 0x200ba4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x200ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_200ba8:
    // 0x200ba8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x200ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_200bac:
    // 0x200bac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x200bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200bb0:
    // 0x200bb0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x200bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_200bb4:
    // 0x200bb4: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x200bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_200bb8:
    // 0x200bb8: 0xc48cf55c  lwc1        $f12, -0xAA4($a0)
    ctx->pc = 0x200bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294964572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_200bbc:
    // 0x200bbc: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x200bbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_200bc0:
    // 0x200bc0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x200bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_200bc4:
    // 0x200bc4: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x200bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_200bc8:
    // 0x200bc8: 0x60f809  jalr        $v1
label_200bcc:
    if (ctx->pc == 0x200BCCu) {
        ctx->pc = 0x200BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200BC8u;
        // 0x200bcc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200BD0u;
        goto label_200bd0;
    }
    ctx->pc = 0x200BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x200BD0u);
        ctx->pc = 0x200BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200BC8u;
        // 0x200bcc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200BC8u, 0x200BD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200BD0u;
label_200bd0:
    // 0x200bd0: 0x92020010  lbu         $v0, 0x10($s0)
    ctx->pc = 0x200bd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_200bd4:
    // 0x200bd4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x200bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_200bd8:
    // 0x200bd8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x200bd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_200bdc:
    // 0x200bdc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x200bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_200be0:
    // 0x200be0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x200be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_200be4:
    // 0x200be4: 0x0  nop
    ctx->pc = 0x200be4u;
    // NOP
label_200be8:
    // 0x200be8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x200be8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_200bec:
    // 0x200bec: 0x8e4300e4  lw          $v1, 0xE4($s2)
    ctx->pc = 0x200becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
label_200bf0:
    // 0x200bf0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x200bf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_200bf4:
    // 0x200bf4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x200bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_200bf8:
    // 0x200bf8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x200bf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_200bfc:
    // 0x200bfc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x200bfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_200c00:
    // 0x200c00: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x200c00u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
label_200c04:
    // 0x200c04: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x200c04u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
label_200c08:
    // 0x200c08: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x200c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_200c0c:
    // 0x200c0c: 0xc07f952  jal         func_1FE548
label_200c10:
    if (ctx->pc == 0x200C10u) {
        ctx->pc = 0x200C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C0Cu;
        // 0x200c10: 0x9204000d  lbu         $a0, 0xD($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200C14u;
        goto label_200c14;
    }
    ctx->pc = 0x200C0Cu;
    SET_GPR_U32(ctx, 31, 0x200C14u);
    ctx->pc = 0x200C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200C0Cu;
    // 0x200c10: 0x9204000d  lbu         $a0, 0xD($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE548u, 0x200C0Cu, 0x200C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200C14u;
label_200c14:
    // 0x200c14: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x200c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_200c18:
    // 0x200c18: 0xc073478  jal         func_1CD1E0
label_200c1c:
    if (ctx->pc == 0x200C1Cu) {
        ctx->pc = 0x200C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C18u;
        // 0x200c1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200C20u;
        goto label_200c20;
    }
    ctx->pc = 0x200C18u;
    SET_GPR_U32(ctx, 31, 0x200C20u);
    ctx->pc = 0x200C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200C18u;
    // 0x200c1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x200C18u, 0x200C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200C20u;
label_200c20:
    // 0x200c20: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x200c20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_200c24:
    // 0x200c24: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x200c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_200c28:
    // 0x200c28: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x200c28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_200c2c:
    // 0x200c2c: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x200c2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_200c30:
    // 0x200c30: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x200c30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_200c34:
    // 0x200c34: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x200c34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_200c38:
    // 0x200c38: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x200c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_200c3c:
    // 0x200c3c: 0x3e00008  jr          $ra
label_200c40:
    if (ctx->pc == 0x200C40u) {
        ctx->pc = 0x200C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C3Cu;
        // 0x200c40: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200C44u;
        goto label_200c44;
    }
    ctx->pc = 0x200C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C3Cu;
        // 0x200c40: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200C44u;
label_200c44:
    // 0x200c44: 0x0  nop
    ctx->pc = 0x200c44u;
    // NOP
    ctx->pc = 0x200c48u;
}
