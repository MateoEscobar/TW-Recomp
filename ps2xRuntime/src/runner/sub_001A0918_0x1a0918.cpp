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

// Function: sub_001A0918
// Address: 0x1a0918 - 0x1a0b00
void sub_001A0918_0x1a0918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0918_0x1a0918");
#endif

    switch (ctx->pc) {
        case 0x1a0918u: goto label_1a0918;
        case 0x1a091cu: goto label_1a091c;
        case 0x1a0920u: goto label_1a0920;
        case 0x1a0924u: goto label_1a0924;
        case 0x1a0928u: goto label_1a0928;
        case 0x1a092cu: goto label_1a092c;
        case 0x1a0930u: goto label_1a0930;
        case 0x1a0934u: goto label_1a0934;
        case 0x1a0938u: goto label_1a0938;
        case 0x1a093cu: goto label_1a093c;
        case 0x1a0940u: goto label_1a0940;
        case 0x1a0944u: goto label_1a0944;
        case 0x1a0948u: goto label_1a0948;
        case 0x1a094cu: goto label_1a094c;
        case 0x1a0950u: goto label_1a0950;
        case 0x1a0954u: goto label_1a0954;
        case 0x1a0958u: goto label_1a0958;
        case 0x1a095cu: goto label_1a095c;
        case 0x1a0960u: goto label_1a0960;
        case 0x1a0964u: goto label_1a0964;
        case 0x1a0968u: goto label_1a0968;
        case 0x1a096cu: goto label_1a096c;
        case 0x1a0970u: goto label_1a0970;
        case 0x1a0974u: goto label_1a0974;
        case 0x1a0978u: goto label_1a0978;
        case 0x1a097cu: goto label_1a097c;
        case 0x1a0980u: goto label_1a0980;
        case 0x1a0984u: goto label_1a0984;
        case 0x1a0988u: goto label_1a0988;
        case 0x1a098cu: goto label_1a098c;
        case 0x1a0990u: goto label_1a0990;
        case 0x1a0994u: goto label_1a0994;
        case 0x1a0998u: goto label_1a0998;
        case 0x1a099cu: goto label_1a099c;
        case 0x1a09a0u: goto label_1a09a0;
        case 0x1a09a4u: goto label_1a09a4;
        case 0x1a09a8u: goto label_1a09a8;
        case 0x1a09acu: goto label_1a09ac;
        case 0x1a09b0u: goto label_1a09b0;
        case 0x1a09b4u: goto label_1a09b4;
        case 0x1a09b8u: goto label_1a09b8;
        case 0x1a09bcu: goto label_1a09bc;
        case 0x1a09c0u: goto label_1a09c0;
        case 0x1a09c4u: goto label_1a09c4;
        case 0x1a09c8u: goto label_1a09c8;
        case 0x1a09ccu: goto label_1a09cc;
        case 0x1a09d0u: goto label_1a09d0;
        case 0x1a09d4u: goto label_1a09d4;
        case 0x1a09d8u: goto label_1a09d8;
        case 0x1a09dcu: goto label_1a09dc;
        case 0x1a09e0u: goto label_1a09e0;
        case 0x1a09e4u: goto label_1a09e4;
        case 0x1a09e8u: goto label_1a09e8;
        case 0x1a09ecu: goto label_1a09ec;
        case 0x1a09f0u: goto label_1a09f0;
        case 0x1a09f4u: goto label_1a09f4;
        case 0x1a09f8u: goto label_1a09f8;
        case 0x1a09fcu: goto label_1a09fc;
        case 0x1a0a00u: goto label_1a0a00;
        case 0x1a0a04u: goto label_1a0a04;
        case 0x1a0a08u: goto label_1a0a08;
        case 0x1a0a0cu: goto label_1a0a0c;
        case 0x1a0a10u: goto label_1a0a10;
        case 0x1a0a14u: goto label_1a0a14;
        case 0x1a0a18u: goto label_1a0a18;
        case 0x1a0a1cu: goto label_1a0a1c;
        case 0x1a0a20u: goto label_1a0a20;
        case 0x1a0a24u: goto label_1a0a24;
        case 0x1a0a28u: goto label_1a0a28;
        case 0x1a0a2cu: goto label_1a0a2c;
        case 0x1a0a30u: goto label_1a0a30;
        case 0x1a0a34u: goto label_1a0a34;
        case 0x1a0a38u: goto label_1a0a38;
        case 0x1a0a3cu: goto label_1a0a3c;
        case 0x1a0a40u: goto label_1a0a40;
        case 0x1a0a44u: goto label_1a0a44;
        case 0x1a0a48u: goto label_1a0a48;
        case 0x1a0a4cu: goto label_1a0a4c;
        case 0x1a0a50u: goto label_1a0a50;
        case 0x1a0a54u: goto label_1a0a54;
        case 0x1a0a58u: goto label_1a0a58;
        case 0x1a0a5cu: goto label_1a0a5c;
        case 0x1a0a60u: goto label_1a0a60;
        case 0x1a0a64u: goto label_1a0a64;
        case 0x1a0a68u: goto label_1a0a68;
        case 0x1a0a6cu: goto label_1a0a6c;
        case 0x1a0a70u: goto label_1a0a70;
        case 0x1a0a74u: goto label_1a0a74;
        case 0x1a0a78u: goto label_1a0a78;
        case 0x1a0a7cu: goto label_1a0a7c;
        case 0x1a0a80u: goto label_1a0a80;
        case 0x1a0a84u: goto label_1a0a84;
        case 0x1a0a88u: goto label_1a0a88;
        case 0x1a0a8cu: goto label_1a0a8c;
        case 0x1a0a90u: goto label_1a0a90;
        case 0x1a0a94u: goto label_1a0a94;
        case 0x1a0a98u: goto label_1a0a98;
        case 0x1a0a9cu: goto label_1a0a9c;
        case 0x1a0aa0u: goto label_1a0aa0;
        case 0x1a0aa4u: goto label_1a0aa4;
        case 0x1a0aa8u: goto label_1a0aa8;
        case 0x1a0aacu: goto label_1a0aac;
        case 0x1a0ab0u: goto label_1a0ab0;
        case 0x1a0ab4u: goto label_1a0ab4;
        case 0x1a0ab8u: goto label_1a0ab8;
        case 0x1a0abcu: goto label_1a0abc;
        case 0x1a0ac0u: goto label_1a0ac0;
        case 0x1a0ac4u: goto label_1a0ac4;
        case 0x1a0ac8u: goto label_1a0ac8;
        case 0x1a0accu: goto label_1a0acc;
        case 0x1a0ad0u: goto label_1a0ad0;
        case 0x1a0ad4u: goto label_1a0ad4;
        case 0x1a0ad8u: goto label_1a0ad8;
        case 0x1a0adcu: goto label_1a0adc;
        case 0x1a0ae0u: goto label_1a0ae0;
        case 0x1a0ae4u: goto label_1a0ae4;
        case 0x1a0ae8u: goto label_1a0ae8;
        case 0x1a0aecu: goto label_1a0aec;
        case 0x1a0af0u: goto label_1a0af0;
        case 0x1a0af4u: goto label_1a0af4;
        case 0x1a0af8u: goto label_1a0af8;
        case 0x1a0afcu: goto label_1a0afc;
        default: break;
    }

    ctx->pc = 0x1a0918u;

label_1a0918:
    // 0x1a0918: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1a0918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1a091c:
    // 0x1a091c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a091cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a0920:
    // 0x1a0920: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1a0920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_1a0924:
    // 0x1a0924: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1a0924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1a0928:
    // 0x1a0928: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a0928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a092c:
    // 0x1a092c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1a092cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1a0930:
    // 0x1a0930: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a0930u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a0934:
    // 0x1a0934: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x1a0934u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1a0938:
    // 0x1a0938: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1a0938u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a093c:
    // 0x1a093c: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x1a093cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1a0940:
    // 0x1a0940: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x1a0940u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_1a0944:
    // 0x1a0944: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1a0944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_1a0948:
    // 0x1a0948: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1a0948u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_1a094c:
    // 0x1a094c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1a094cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_1a0950:
    // 0x1a0950: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a0950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1a0954:
    // 0x1a0954: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x1a0954u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1a0958:
    // 0x1a0958: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x1a0958u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1a095c:
    // 0x1a095c: 0x8c46cdb4  lw          $a2, -0x324C($v0)
    ctx->pc = 0x1a095cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1a0960:
    // 0x1a0960: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1a0960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_1a0964:
    // 0x1a0964: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1a0964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1a0968:
    // 0x1a0968: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x1a0968u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_1a096c:
    // 0x1a096c: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1a096cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_1a0970:
    // 0x1a0970: 0x40f809  jalr        $v0
label_1a0974:
    if (ctx->pc == 0x1A0974u) {
        ctx->pc = 0x1A0974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0970u;
        // 0x1a0974: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0978u;
        goto label_1a0978;
    }
    ctx->pc = 0x1A0970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A0978u);
        ctx->pc = 0x1A0974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0970u;
        // 0x1a0974: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0970u, 0x1A0978u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0978u;
label_1a0978:
    // 0x1a0978: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a097c:
    if (ctx->pc == 0x1A097Cu) {
        ctx->pc = 0x1A097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0978u;
        // 0x1a097c: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0980u;
        goto label_1a0980;
    }
    ctx->pc = 0x1A0978u;
    {
        const bool branch_taken_0x1a0978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0978u;
        // 0x1a097c: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0978) {
            ctx->pc = 0x1A0998u;
            goto label_1a0998;
        }
    }
    ctx->pc = 0x1A0980u;
label_1a0980:
    // 0x1a0980: 0x3c013d0f  lui         $at, 0x3D0F
    ctx->pc = 0x1a0980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15631 << 16));
label_1a0984:
    // 0x1a0984: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1a0984u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1a0988:
    // 0x1a0988: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a0988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a098c:
    // 0x1a098c: 0x0  nop
    ctx->pc = 0x1a098cu;
    // NOP
label_1a0990:
    // 0x1a0990: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a0990u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1a0994:
    // 0x1a0994: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1a0994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1a0998:
    // 0x1a0998: 0x26710240  addiu       $s1, $s3, 0x240
    ctx->pc = 0x1a0998u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 576));
label_1a099c:
    // 0x1a099c: 0xae700240  sw          $s0, 0x240($s3)
    ctx->pc = 0x1a099cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 576), GPR_U32(ctx, 16));
label_1a09a0:
    // 0x1a09a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a09a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a09a4:
    // 0x1a09a4: 0xc0e409a  jal         func_390268
label_1a09a8:
    if (ctx->pc == 0x1A09A8u) {
        ctx->pc = 0x1A09A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09A4u;
        // 0x1a09a8: 0x241000ff  addiu       $s0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A09ACu;
        goto label_1a09ac;
    }
    ctx->pc = 0x1A09A4u;
    SET_GPR_U32(ctx, 31, 0x1A09ACu);
    ctx->pc = 0x1A09A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A09A4u;
    // 0x1a09a8: 0x241000ff  addiu       $s0, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1A09A4u, 0x1A09ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A09ACu;
label_1a09ac:
    // 0x1a09ac: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1a09acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_1a09b0:
    // 0x1a09b0: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1a09b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_1a09b4:
    // 0x1a09b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a09b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a09b8:
    // 0x1a09b8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1a09b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a09bc:
    // 0x1a09bc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1a09bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a09c0:
    // 0x1a09c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a09c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a09c4:
    // 0x1a09c4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1a09c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a09c8:
    // 0x1a09c8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1a09c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1a09cc:
    // 0x1a09cc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1a09ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1a09d0:
    // 0x1a09d0: 0x40f809  jalr        $v0
label_1a09d4:
    if (ctx->pc == 0x1A09D4u) {
        ctx->pc = 0x1A09D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09D0u;
        // 0x1a09d4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A09D8u;
        goto label_1a09d8;
    }
    ctx->pc = 0x1A09D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A09D8u);
        ctx->pc = 0x1A09D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09D0u;
        // 0x1a09d4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A09D0u, 0x1A09D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A09D8u;
label_1a09d8:
    // 0x1a09d8: 0x240300bf  addiu       $v1, $zero, 0xBF
    ctx->pc = 0x1a09d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
label_1a09dc:
    // 0x1a09dc: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a09dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a09e0:
    // 0x1a09e0: 0xa3a30030  sb          $v1, 0x30($sp)
    ctx->pc = 0x1a09e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 3));
label_1a09e4:
    // 0x1a09e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a09e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a09e8:
    // 0x1a09e8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1a09e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_1a09ec:
    // 0x1a09ec: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1a09ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_1a09f0:
    // 0x1a09f0: 0xc0e409a  jal         func_390268
label_1a09f4:
    if (ctx->pc == 0x1A09F4u) {
        ctx->pc = 0x1A09F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09F0u;
        // 0x1a09f4: 0xa0500003  sb          $s0, 0x3($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A09F8u;
        goto label_1a09f8;
    }
    ctx->pc = 0x1A09F0u;
    SET_GPR_U32(ctx, 31, 0x1A09F8u);
    ctx->pc = 0x1A09F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A09F0u;
    // 0x1a09f4: 0xa0500003  sb          $s0, 0x3($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1A09F0u, 0x1A09F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A09F8u;
label_1a09f8:
    // 0x1a09f8: 0xc067e62  jal         func_19F988
label_1a09fc:
    if (ctx->pc == 0x1A09FCu) {
        ctx->pc = 0x1A09FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09F8u;
        // 0x1a09fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0A00u;
        goto label_1a0a00;
    }
    ctx->pc = 0x1A09F8u;
    SET_GPR_U32(ctx, 31, 0x1A0A00u);
    ctx->pc = 0x1A09FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A09F8u;
    // 0x1a09fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F988u, 0x1A09F8u, 0x1A0A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0A00u;
label_1a0a00:
    // 0x1a0a00: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1a0a00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1a0a04:
    // 0x1a0a04: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1a0a04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0a08:
    // 0x1a0a08: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1a0a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a0a0c:
    // 0x1a0a0c: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x1a0a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_1a0a10:
    // 0x1a0a10: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x1a0a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_1a0a14:
    // 0x1a0a14: 0x26640040  addiu       $a0, $s3, 0x40
    ctx->pc = 0x1a0a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_1a0a18:
    // 0x1a0a18: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a0a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1a0a1c:
    // 0x1a0a1c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1a0a1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1a0a20:
    // 0x1a0a20: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1a0a20u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1a0a24:
    // 0x1a0a24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a0a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0a28:
    // 0x1a0a28: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a0a28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0a2c:
    // 0x1a0a2c: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1a0a2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a0a30:
    // 0x1a0a30: 0xc06876e  jal         func_1A1DB8
label_1a0a34:
    if (ctx->pc == 0x1A0A34u) {
        ctx->pc = 0x1A0A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0A30u;
        // 0x1a0a34: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0A38u;
        goto label_1a0a38;
    }
    ctx->pc = 0x1A0A30u;
    SET_GPR_U32(ctx, 31, 0x1A0A38u);
    ctx->pc = 0x1A0A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0A30u;
    // 0x1a0a34: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1A0A30u, 0x1A0A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0A38u;
label_1a0a38:
    // 0x1a0a38: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1a0a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1a0a3c:
    // 0x1a0a3c: 0x27a20034  addiu       $v0, $sp, 0x34
    ctx->pc = 0x1a0a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_1a0a40:
    // 0x1a0a40: 0xa3a30034  sb          $v1, 0x34($sp)
    ctx->pc = 0x1a0a40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 52), (uint8_t)GPR_U32(ctx, 3));
label_1a0a44:
    // 0x1a0a44: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1a0a44u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1a0a48:
    // 0x1a0a48: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1a0a48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_1a0a4c:
    // 0x1a0a4c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1a0a4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1a0a50:
    // 0x1a0a50: 0xa0500003  sb          $s0, 0x3($v0)
    ctx->pc = 0x1a0a50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 16));
label_1a0a54:
    // 0x1a0a54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a0a54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0a58:
    // 0x1a0a58: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1a0a58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_1a0a5c:
    // 0x1a0a5c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a0a5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0a60:
    // 0x1a0a60: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x1a0a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_1a0a64:
    // 0x1a0a64: 0x24090019  addiu       $t1, $zero, 0x19
    ctx->pc = 0x1a0a64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_1a0a68:
    // 0x1a0a68: 0x8fa60034  lw          $a2, 0x34($sp)
    ctx->pc = 0x1a0a68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_1a0a6c:
    // 0x1a0a6c: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1a0a6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a0a70:
    // 0x1a0a70: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x1a0a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_1a0a74:
    // 0x1a0a74: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1a0a74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0a78:
    // 0x1a0a78: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a0a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1a0a7c:
    // 0x1a0a7c: 0x26640140  addiu       $a0, $s3, 0x140
    ctx->pc = 0x1a0a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 320));
label_1a0a80:
    // 0x1a0a80: 0xc06876e  jal         func_1A1DB8
label_1a0a84:
    if (ctx->pc == 0x1A0A84u) {
        ctx->pc = 0x1A0A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0A80u;
        // 0x1a0a84: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0A88u;
        goto label_1a0a88;
    }
    ctx->pc = 0x1A0A80u;
    SET_GPR_U32(ctx, 31, 0x1A0A88u);
    ctx->pc = 0x1A0A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0A80u;
    // 0x1a0a84: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1A0A80u, 0x1A0A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0A88u;
label_1a0a88:
    // 0x1a0a88: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1a0a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a0a8c:
    // 0x1a0a8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a0a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0a90:
    // 0x1a0a90: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1a0a90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1a0a94:
    // 0x1a0a94: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1a0a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1a0a98:
    // 0x1a0a98: 0x60f809  jalr        $v1
label_1a0a9c:
    if (ctx->pc == 0x1A0A9Cu) {
        ctx->pc = 0x1A0A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0A98u;
        // 0x1a0a9c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0AA0u;
        goto label_1a0aa0;
    }
    ctx->pc = 0x1A0A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A0AA0u);
        ctx->pc = 0x1A0A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0A98u;
        // 0x1a0a9c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0A98u, 0x1A0AA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0AA0u;
label_1a0aa0:
    // 0x1a0aa0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1a0aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a0aa4:
    // 0x1a0aa4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a0aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0aa8:
    // 0x1a0aa8: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1a0aa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1a0aac:
    // 0x1a0aac: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1a0aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1a0ab0:
    // 0x1a0ab0: 0x60f809  jalr        $v1
label_1a0ab4:
    if (ctx->pc == 0x1A0AB4u) {
        ctx->pc = 0x1A0AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0AB0u;
        // 0x1a0ab4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0AB8u;
        goto label_1a0ab8;
    }
    ctx->pc = 0x1A0AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A0AB8u);
        ctx->pc = 0x1A0AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0AB0u;
        // 0x1a0ab4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0AB0u, 0x1A0AB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0AB8u;
label_1a0ab8:
    // 0x1a0ab8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a0ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a0abc:
    // 0x1a0abc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1a0abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a0ac0:
    // 0x1a0ac0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1a0ac0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1a0ac4:
    // 0x1a0ac4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1a0ac4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_1a0ac8:
    // 0x1a0ac8: 0xc0682d8  jal         func_1A0B60
label_1a0acc:
    if (ctx->pc == 0x1A0ACCu) {
        ctx->pc = 0x1A0ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0AC8u;
        // 0x1a0acc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0AD0u;
        goto label_1a0ad0;
    }
    ctx->pc = 0x1A0AC8u;
    SET_GPR_U32(ctx, 31, 0x1A0AD0u);
    ctx->pc = 0x1A0ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0AC8u;
    // 0x1a0acc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0B60u, 0x1A0AC8u, 0x1A0AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0AD0u;
label_1a0ad0:
    // 0x1a0ad0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1a0ad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1a0ad4:
    // 0x1a0ad4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1a0ad4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1a0ad8:
    // 0x1a0ad8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1a0ad8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a0adc:
    // 0x1a0adc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1a0adcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a0ae0:
    // 0x1a0ae0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1a0ae0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a0ae4:
    // 0x1a0ae4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a0ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a0ae8:
    // 0x1a0ae8: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x1a0ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1a0aec:
    // 0x1a0aec: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x1a0aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a0af0:
    // 0x1a0af0: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1a0af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a0af4:
    // 0x1a0af4: 0x3e00008  jr          $ra
label_1a0af8:
    if (ctx->pc == 0x1A0AF8u) {
        ctx->pc = 0x1A0AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0AF4u;
        // 0x1a0af8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0AFCu;
        goto label_1a0afc;
    }
    ctx->pc = 0x1A0AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0AF4u;
        // 0x1a0af8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0AFCu;
label_1a0afc:
    // 0x1a0afc: 0x0  nop
    ctx->pc = 0x1a0afcu;
    // NOP
    ctx->pc = 0x1a0b00u;
}
