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

// Function: sub_002A68B0
// Address: 0x2a68b0 - 0x2a6b50
void sub_002A68B0_0x2a68b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A68B0_0x2a68b0");
#endif

    switch (ctx->pc) {
        case 0x2a68b0u: goto label_2a68b0;
        case 0x2a68b4u: goto label_2a68b4;
        case 0x2a68b8u: goto label_2a68b8;
        case 0x2a68bcu: goto label_2a68bc;
        case 0x2a68c0u: goto label_2a68c0;
        case 0x2a68c4u: goto label_2a68c4;
        case 0x2a68c8u: goto label_2a68c8;
        case 0x2a68ccu: goto label_2a68cc;
        case 0x2a68d0u: goto label_2a68d0;
        case 0x2a68d4u: goto label_2a68d4;
        case 0x2a68d8u: goto label_2a68d8;
        case 0x2a68dcu: goto label_2a68dc;
        case 0x2a68e0u: goto label_2a68e0;
        case 0x2a68e4u: goto label_2a68e4;
        case 0x2a68e8u: goto label_2a68e8;
        case 0x2a68ecu: goto label_2a68ec;
        case 0x2a68f0u: goto label_2a68f0;
        case 0x2a68f4u: goto label_2a68f4;
        case 0x2a68f8u: goto label_2a68f8;
        case 0x2a68fcu: goto label_2a68fc;
        case 0x2a6900u: goto label_2a6900;
        case 0x2a6904u: goto label_2a6904;
        case 0x2a6908u: goto label_2a6908;
        case 0x2a690cu: goto label_2a690c;
        case 0x2a6910u: goto label_2a6910;
        case 0x2a6914u: goto label_2a6914;
        case 0x2a6918u: goto label_2a6918;
        case 0x2a691cu: goto label_2a691c;
        case 0x2a6920u: goto label_2a6920;
        case 0x2a6924u: goto label_2a6924;
        case 0x2a6928u: goto label_2a6928;
        case 0x2a692cu: goto label_2a692c;
        case 0x2a6930u: goto label_2a6930;
        case 0x2a6934u: goto label_2a6934;
        case 0x2a6938u: goto label_2a6938;
        case 0x2a693cu: goto label_2a693c;
        case 0x2a6940u: goto label_2a6940;
        case 0x2a6944u: goto label_2a6944;
        case 0x2a6948u: goto label_2a6948;
        case 0x2a694cu: goto label_2a694c;
        case 0x2a6950u: goto label_2a6950;
        case 0x2a6954u: goto label_2a6954;
        case 0x2a6958u: goto label_2a6958;
        case 0x2a695cu: goto label_2a695c;
        case 0x2a6960u: goto label_2a6960;
        case 0x2a6964u: goto label_2a6964;
        case 0x2a6968u: goto label_2a6968;
        case 0x2a696cu: goto label_2a696c;
        case 0x2a6970u: goto label_2a6970;
        case 0x2a6974u: goto label_2a6974;
        case 0x2a6978u: goto label_2a6978;
        case 0x2a697cu: goto label_2a697c;
        case 0x2a6980u: goto label_2a6980;
        case 0x2a6984u: goto label_2a6984;
        case 0x2a6988u: goto label_2a6988;
        case 0x2a698cu: goto label_2a698c;
        case 0x2a6990u: goto label_2a6990;
        case 0x2a6994u: goto label_2a6994;
        case 0x2a6998u: goto label_2a6998;
        case 0x2a699cu: goto label_2a699c;
        case 0x2a69a0u: goto label_2a69a0;
        case 0x2a69a4u: goto label_2a69a4;
        case 0x2a69a8u: goto label_2a69a8;
        case 0x2a69acu: goto label_2a69ac;
        case 0x2a69b0u: goto label_2a69b0;
        case 0x2a69b4u: goto label_2a69b4;
        case 0x2a69b8u: goto label_2a69b8;
        case 0x2a69bcu: goto label_2a69bc;
        case 0x2a69c0u: goto label_2a69c0;
        case 0x2a69c4u: goto label_2a69c4;
        case 0x2a69c8u: goto label_2a69c8;
        case 0x2a69ccu: goto label_2a69cc;
        case 0x2a69d0u: goto label_2a69d0;
        case 0x2a69d4u: goto label_2a69d4;
        case 0x2a69d8u: goto label_2a69d8;
        case 0x2a69dcu: goto label_2a69dc;
        case 0x2a69e0u: goto label_2a69e0;
        case 0x2a69e4u: goto label_2a69e4;
        case 0x2a69e8u: goto label_2a69e8;
        case 0x2a69ecu: goto label_2a69ec;
        case 0x2a69f0u: goto label_2a69f0;
        case 0x2a69f4u: goto label_2a69f4;
        case 0x2a69f8u: goto label_2a69f8;
        case 0x2a69fcu: goto label_2a69fc;
        case 0x2a6a00u: goto label_2a6a00;
        case 0x2a6a04u: goto label_2a6a04;
        case 0x2a6a08u: goto label_2a6a08;
        case 0x2a6a0cu: goto label_2a6a0c;
        case 0x2a6a10u: goto label_2a6a10;
        case 0x2a6a14u: goto label_2a6a14;
        case 0x2a6a18u: goto label_2a6a18;
        case 0x2a6a1cu: goto label_2a6a1c;
        case 0x2a6a20u: goto label_2a6a20;
        case 0x2a6a24u: goto label_2a6a24;
        case 0x2a6a28u: goto label_2a6a28;
        case 0x2a6a2cu: goto label_2a6a2c;
        case 0x2a6a30u: goto label_2a6a30;
        case 0x2a6a34u: goto label_2a6a34;
        case 0x2a6a38u: goto label_2a6a38;
        case 0x2a6a3cu: goto label_2a6a3c;
        case 0x2a6a40u: goto label_2a6a40;
        case 0x2a6a44u: goto label_2a6a44;
        case 0x2a6a48u: goto label_2a6a48;
        case 0x2a6a4cu: goto label_2a6a4c;
        case 0x2a6a50u: goto label_2a6a50;
        case 0x2a6a54u: goto label_2a6a54;
        case 0x2a6a58u: goto label_2a6a58;
        case 0x2a6a5cu: goto label_2a6a5c;
        case 0x2a6a60u: goto label_2a6a60;
        case 0x2a6a64u: goto label_2a6a64;
        case 0x2a6a68u: goto label_2a6a68;
        case 0x2a6a6cu: goto label_2a6a6c;
        case 0x2a6a70u: goto label_2a6a70;
        case 0x2a6a74u: goto label_2a6a74;
        case 0x2a6a78u: goto label_2a6a78;
        case 0x2a6a7cu: goto label_2a6a7c;
        case 0x2a6a80u: goto label_2a6a80;
        case 0x2a6a84u: goto label_2a6a84;
        case 0x2a6a88u: goto label_2a6a88;
        case 0x2a6a8cu: goto label_2a6a8c;
        case 0x2a6a90u: goto label_2a6a90;
        case 0x2a6a94u: goto label_2a6a94;
        case 0x2a6a98u: goto label_2a6a98;
        case 0x2a6a9cu: goto label_2a6a9c;
        case 0x2a6aa0u: goto label_2a6aa0;
        case 0x2a6aa4u: goto label_2a6aa4;
        case 0x2a6aa8u: goto label_2a6aa8;
        case 0x2a6aacu: goto label_2a6aac;
        case 0x2a6ab0u: goto label_2a6ab0;
        case 0x2a6ab4u: goto label_2a6ab4;
        case 0x2a6ab8u: goto label_2a6ab8;
        case 0x2a6abcu: goto label_2a6abc;
        case 0x2a6ac0u: goto label_2a6ac0;
        case 0x2a6ac4u: goto label_2a6ac4;
        case 0x2a6ac8u: goto label_2a6ac8;
        case 0x2a6accu: goto label_2a6acc;
        case 0x2a6ad0u: goto label_2a6ad0;
        case 0x2a6ad4u: goto label_2a6ad4;
        case 0x2a6ad8u: goto label_2a6ad8;
        case 0x2a6adcu: goto label_2a6adc;
        case 0x2a6ae0u: goto label_2a6ae0;
        case 0x2a6ae4u: goto label_2a6ae4;
        case 0x2a6ae8u: goto label_2a6ae8;
        case 0x2a6aecu: goto label_2a6aec;
        case 0x2a6af0u: goto label_2a6af0;
        case 0x2a6af4u: goto label_2a6af4;
        case 0x2a6af8u: goto label_2a6af8;
        case 0x2a6afcu: goto label_2a6afc;
        case 0x2a6b00u: goto label_2a6b00;
        case 0x2a6b04u: goto label_2a6b04;
        case 0x2a6b08u: goto label_2a6b08;
        case 0x2a6b0cu: goto label_2a6b0c;
        case 0x2a6b10u: goto label_2a6b10;
        case 0x2a6b14u: goto label_2a6b14;
        case 0x2a6b18u: goto label_2a6b18;
        case 0x2a6b1cu: goto label_2a6b1c;
        case 0x2a6b20u: goto label_2a6b20;
        case 0x2a6b24u: goto label_2a6b24;
        case 0x2a6b28u: goto label_2a6b28;
        case 0x2a6b2cu: goto label_2a6b2c;
        case 0x2a6b30u: goto label_2a6b30;
        case 0x2a6b34u: goto label_2a6b34;
        case 0x2a6b38u: goto label_2a6b38;
        case 0x2a6b3cu: goto label_2a6b3c;
        case 0x2a6b40u: goto label_2a6b40;
        case 0x2a6b44u: goto label_2a6b44;
        case 0x2a6b48u: goto label_2a6b48;
        case 0x2a6b4cu: goto label_2a6b4c;
        default: break;
    }

    ctx->pc = 0x2a68b0u;

label_2a68b0:
    // 0x2a68b0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2a68b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2a68b4:
    // 0x2a68b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2a68b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2a68b8:
    // 0x2a68b8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2a68b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_2a68bc:
    // 0x2a68bc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2a68bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_2a68c0:
    // 0x2a68c0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2a68c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_2a68c4:
    // 0x2a68c4: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2a68c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_2a68c8:
    // 0x2a68c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a68c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a68cc:
    // 0x2a68cc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2a68ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_2a68d0:
    // 0x2a68d0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2a68d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_2a68d4:
    // 0x2a68d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a68d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2a68d8:
    // 0x2a68d8: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2a68d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2a68dc:
    // 0x2a68dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2a68dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a68e0:
    // 0x2a68e0: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x2a68e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
label_2a68e4:
    // 0x2a68e4: 0xc0e409a  jal         func_390268
label_2a68e8:
    if (ctx->pc == 0x2A68E8u) {
        ctx->pc = 0x2A68E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A68E4u;
        // 0x2a68e8: 0x8c730000  lw          $s3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A68ECu;
        goto label_2a68ec;
    }
    ctx->pc = 0x2A68E4u;
    SET_GPR_U32(ctx, 31, 0x2A68ECu);
    ctx->pc = 0x2A68E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A68E4u;
    // 0x2a68e8: 0x8c730000  lw          $s3, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A68E4u, 0x2A68ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A68ECu;
label_2a68ec:
    // 0x2a68ec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2a68ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a68f0:
    // 0x2a68f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a68f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a68f4:
    // 0x2a68f4: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2a68f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2a68f8:
    // 0x2a68f8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2a68f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a68fc:
    // 0x2a68fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a68fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a6900:
    // 0x2a6900: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2a6900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2a6904:
    // 0x2a6904: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2a6904u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2a6908:
    // 0x2a6908: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2a6908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2a690c:
    // 0x2a690c: 0x60f809  jalr        $v1
label_2a6910:
    if (ctx->pc == 0x2A6910u) {
        ctx->pc = 0x2A6910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A690Cu;
        // 0x2a6910: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6914u;
        goto label_2a6914;
    }
    ctx->pc = 0x2A690Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A6914u);
        ctx->pc = 0x2A6910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A690Cu;
        // 0x2a6910: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A690Cu, 0x2A6914u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A6914u;
label_2a6914:
    // 0x2a6914: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2a6914u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a6918:
    // 0x2a6918: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2a6918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2a691c:
    // 0x2a691c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2a691cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2a6920:
    // 0x2a6920: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a6920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a6924:
    // 0x2a6924: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2a6924u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2a6928:
    // 0x2a6928: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x2a6928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2a692c:
    // 0x2a692c: 0xc0f809  jalr        $a2
label_2a6930:
    if (ctx->pc == 0x2A6930u) {
        ctx->pc = 0x2A6930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A692Cu;
        // 0x2a6930: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6934u;
        goto label_2a6934;
    }
    ctx->pc = 0x2A692Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2A6934u);
        ctx->pc = 0x2A6930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A692Cu;
        // 0x2a6930: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A692Cu, 0x2A6934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A6934u;
label_2a6934:
    // 0x2a6934: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2a6934u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a6938:
    // 0x2a6938: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a6938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a693c:
    // 0x2a693c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a693cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a6940:
    // 0x2a6940: 0xc0cdb38  jal         func_336CE0
label_2a6944:
    if (ctx->pc == 0x2A6944u) {
        ctx->pc = 0x2A6944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6940u;
        // 0x2a6944: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6948u;
        goto label_2a6948;
    }
    ctx->pc = 0x2A6940u;
    SET_GPR_U32(ctx, 31, 0x2A6948u);
    ctx->pc = 0x2A6944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6940u;
    // 0x2a6944: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2A6940u, 0x2A6948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6948u;
label_2a6948:
    // 0x2a6948: 0x8643002a  lh          $v1, 0x2A($s2)
    ctx->pc = 0x2a6948u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
label_2a694c:
    // 0x2a694c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2a6950:
    if (ctx->pc == 0x2A6950u) {
        ctx->pc = 0x2A6950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A694Cu;
        // 0x2a6950: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6954u;
        goto label_2a6954;
    }
    ctx->pc = 0x2A694Cu;
    {
        const bool branch_taken_0x2a694c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A694Cu;
        // 0x2a6950: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a694c) {
            ctx->pc = 0x2A6968u;
            goto label_2a6968;
        }
    }
    ctx->pc = 0x2A6954u;
label_2a6954:
    // 0x2a6954: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a6954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a6958:
    // 0x2a6958: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_2a695c:
    if (ctx->pc == 0x2A695Cu) {
        ctx->pc = 0x2A695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6958u;
        // 0x2a695c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6960u;
        goto label_2a6960;
    }
    ctx->pc = 0x2A6958u;
    {
        const bool branch_taken_0x2a6958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6958u;
        // 0x2a695c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6958) {
            ctx->pc = 0x2A69C0u;
            goto label_2a69c0;
        }
    }
    ctx->pc = 0x2A6960u;
label_2a6960:
    // 0x2a6960: 0x10000073  b           . + 4 + (0x73 << 2)
label_2a6964:
    if (ctx->pc == 0x2A6964u) {
        ctx->pc = 0x2A6964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6960u;
        // 0x2a6964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6968u;
        goto label_2a6968;
    }
    ctx->pc = 0x2A6960u;
    {
        const bool branch_taken_0x2a6960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6960u;
        // 0x2a6964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6960) {
            ctx->pc = 0x2A6B30u;
            goto label_2a6b30;
        }
    }
    ctx->pc = 0x2A6968u;
label_2a6968:
    // 0x2a6968: 0xc0a367c  jal         func_28D9F0
label_2a696c:
    if (ctx->pc == 0x2A696Cu) {
        ctx->pc = 0x2A696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6968u;
        // 0x2a696c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6970u;
        goto label_2a6970;
    }
    ctx->pc = 0x2A6968u;
    SET_GPR_U32(ctx, 31, 0x2A6970u);
    ctx->pc = 0x2A696Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6968u;
    // 0x2a696c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A6968u, 0x2A6970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6970u;
label_2a6970:
    // 0x2a6970: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a6970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6974:
    // 0x2a6974: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_2a6978:
    if (ctx->pc == 0x2A6978u) {
        ctx->pc = 0x2A6978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6974u;
        // 0x2a6978: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A697Cu;
        goto label_2a697c;
    }
    ctx->pc = 0x2A6974u;
    {
        const bool branch_taken_0x2a6974 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6974u;
        // 0x2a6978: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6974) {
            ctx->pc = 0x2A69B8u;
            goto label_2a69b8;
        }
    }
    ctx->pc = 0x2A697Cu;
label_2a697c:
    // 0x2a697c: 0xc10587a  jal         func_4161E8
label_2a6980:
    if (ctx->pc == 0x2A6980u) {
        ctx->pc = 0x2A6980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A697Cu;
        // 0x2a6980: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6984u;
        goto label_2a6984;
    }
    ctx->pc = 0x2A697Cu;
    SET_GPR_U32(ctx, 31, 0x2A6984u);
    ctx->pc = 0x2A6980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A697Cu;
    // 0x2a6980: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2A697Cu, 0x2A6984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6984u;
label_2a6984:
    // 0x2a6984: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a6984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2a6988:
    // 0x2a6988: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a6988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a698c:
    // 0x2a698c: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2a698cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2a6990:
    // 0x2a6990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a6994:
    // 0x2a6994: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2a6994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2a6998:
    // 0x2a6998: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a6998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a699c:
    // 0x2a699c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a699cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a69a0:
    // 0x2a69a0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2a69a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a69a4:
    // 0x2a69a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a69a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a69a8:
    // 0x2a69a8: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2a69a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a69ac:
    // 0x2a69ac: 0xc0bee7a  jal         func_2FB9E8
label_2a69b0:
    if (ctx->pc == 0x2A69B0u) {
        ctx->pc = 0x2A69B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A69ACu;
        // 0x2a69b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A69B4u;
        goto label_2a69b4;
    }
    ctx->pc = 0x2A69ACu;
    SET_GPR_U32(ctx, 31, 0x2A69B4u);
    ctx->pc = 0x2A69B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A69ACu;
    // 0x2a69b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2A69ACu, 0x2A69B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A69B4u;
label_2a69b4:
    // 0x2a69b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a69b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a69b8:
    // 0x2a69b8: 0x1000005b  b           . + 4 + (0x5B << 2)
label_2a69bc:
    if (ctx->pc == 0x2A69BCu) {
        ctx->pc = 0x2A69BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A69B8u;
        // 0x2a69bc: 0xa642002a  sh          $v0, 0x2A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 42), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A69C0u;
        goto label_2a69c0;
    }
    ctx->pc = 0x2A69B8u;
    {
        const bool branch_taken_0x2a69b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A69BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A69B8u;
        // 0x2a69bc: 0xa642002a  sh          $v0, 0x2A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 42), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a69b8) {
            ctx->pc = 0x2A6B28u;
            goto label_2a6b28;
        }
    }
    ctx->pc = 0x2A69C0u;
label_2a69c0:
    // 0x2a69c0: 0xc08bfb4  jal         func_22FED0
label_2a69c4:
    if (ctx->pc == 0x2A69C4u) {
        ctx->pc = 0x2A69C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A69C0u;
        // 0x2a69c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A69C8u;
        goto label_2a69c8;
    }
    ctx->pc = 0x2A69C0u;
    SET_GPR_U32(ctx, 31, 0x2A69C8u);
    ctx->pc = 0x2A69C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A69C0u;
    // 0x2a69c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FED0u, 0x2A69C0u, 0x2A69C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A69C8u;
label_2a69c8:
    // 0x2a69c8: 0x86500020  lh          $s0, 0x20($s2)
    ctx->pc = 0x2a69c8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
label_2a69cc:
    // 0x2a69cc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2a69ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2a69d0:
    // 0x2a69d0: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_2a69d4:
    if (ctx->pc == 0x2A69D4u) {
        ctx->pc = 0x2A69D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A69D0u;
        // 0x2a69d4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A69D8u;
        goto label_2a69d8;
    }
    ctx->pc = 0x2A69D0u;
    {
        const bool branch_taken_0x2a69d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A69D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A69D0u;
        // 0x2a69d4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a69d0) {
            ctx->pc = 0x2A69E8u;
            goto label_2a69e8;
        }
    }
    ctx->pc = 0x2A69D8u;
label_2a69d8:
    // 0x2a69d8: 0x12020040  beq         $s0, $v0, . + 4 + (0x40 << 2)
label_2a69dc:
    if (ctx->pc == 0x2A69DCu) {
        ctx->pc = 0x2A69DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A69D8u;
        // 0x2a69dc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A69E0u;
        goto label_2a69e0;
    }
    ctx->pc = 0x2A69D8u;
    {
        const bool branch_taken_0x2a69d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A69DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A69D8u;
        // 0x2a69dc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a69d8) {
            ctx->pc = 0x2A6ADCu;
            goto label_2a6adc;
        }
    }
    ctx->pc = 0x2A69E0u;
label_2a69e0:
    // 0x2a69e0: 0x10000053  b           . + 4 + (0x53 << 2)
label_2a69e4:
    if (ctx->pc == 0x2A69E4u) {
        ctx->pc = 0x2A69E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A69E0u;
        // 0x2a69e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A69E8u;
        goto label_2a69e8;
    }
    ctx->pc = 0x2A69E0u;
    {
        const bool branch_taken_0x2a69e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A69E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A69E0u;
        // 0x2a69e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a69e0) {
            ctx->pc = 0x2A6B30u;
            goto label_2a6b30;
        }
    }
    ctx->pc = 0x2A69E8u;
label_2a69e8:
    // 0x2a69e8: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2a69e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2a69ec:
    // 0x2a69ec: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x2a69ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2a69f0:
    // 0x2a69f0: 0x8ca2b734  lw          $v0, -0x48CC($a1)
    ctx->pc = 0x2a69f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2a69f4:
    // 0x2a69f4: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2a69f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2a69f8:
    // 0x2a69f8: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x2a69f8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2a69fc:
    // 0x2a69fc: 0x10800037  beqz        $a0, . + 4 + (0x37 << 2)
label_2a6a00:
    if (ctx->pc == 0x2A6A00u) {
        ctx->pc = 0x2A6A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A69FCu;
        // 0x2a6a00: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6A04u;
        goto label_2a6a04;
    }
    ctx->pc = 0x2A69FCu;
    {
        const bool branch_taken_0x2a69fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A69FCu;
        // 0x2a6a00: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a69fc) {
            ctx->pc = 0x2A6ADCu;
            goto label_2a6adc;
        }
    }
    ctx->pc = 0x2A6A04u;
label_2a6a04:
    // 0x2a6a04: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a6a04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a6a08:
    // 0x2a6a08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a6a08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a6a0c:
    // 0x2a6a0c: 0xc0cd4e4  jal         func_335390
label_2a6a10:
    if (ctx->pc == 0x2A6A10u) {
        ctx->pc = 0x2A6A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6A0Cu;
        // 0x2a6a10: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6A14u;
        goto label_2a6a14;
    }
    ctx->pc = 0x2A6A0Cu;
    SET_GPR_U32(ctx, 31, 0x2A6A14u);
    ctx->pc = 0x2A6A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6A0Cu;
    // 0x2a6a10: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A6A0Cu, 0x2A6A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6A14u;
label_2a6a14:
    // 0x2a6a14: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x2a6a14u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2a6a18:
    // 0x2a6a18: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2a6a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2a6a1c:
    // 0x2a6a1c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2a6a20:
    if (ctx->pc == 0x2A6A20u) {
        ctx->pc = 0x2A6A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6A1Cu;
        // 0x2a6a20: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6A24u;
        goto label_2a6a24;
    }
    ctx->pc = 0x2A6A1Cu;
    {
        const bool branch_taken_0x2a6a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6a1c) {
            ctx->pc = 0x2A6A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6A1Cu;
            // 0x2a6a20: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6A24u;
            goto label_2a6a24;
        }
    }
    ctx->pc = 0x2A6A24u;
label_2a6a24:
    // 0x2a6a24: 0x86430028  lh          $v1, 0x28($s2)
    ctx->pc = 0x2a6a24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
label_2a6a28:
    // 0x2a6a28: 0x2010  mfhi        $a0
    ctx->pc = 0x2a6a28u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2a6a2c:
    // 0x2a6a2c: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_2a6a30:
    if (ctx->pc == 0x2A6A30u) {
        ctx->pc = 0x2A6A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6A2Cu;
        // 0x2a6a30: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6A34u;
        goto label_2a6a34;
    }
    ctx->pc = 0x2A6A2Cu;
    {
        const bool branch_taken_0x2a6a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6A2Cu;
        // 0x2a6a30: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6a2c) {
            ctx->pc = 0x2A6A5Cu;
            goto label_2a6a5c;
        }
    }
    ctx->pc = 0x2A6A34u;
label_2a6a34:
    // 0x2a6a34: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2a6a34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a6a38:
    // 0x2a6a38: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x2a6a38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_2a6a3c:
    // 0x2a6a3c: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x2a6a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_2a6a40:
    // 0x2a6a40: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a6a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_2a6a44:
    // 0x2a6a44: 0x24c635c8  addiu       $a2, $a2, 0x35C8
    ctx->pc = 0x2a6a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13768));
label_2a6a48:
    // 0x2a6a48: 0x24e70fd0  addiu       $a3, $a3, 0xFD0
    ctx->pc = 0x2a6a48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4048));
label_2a6a4c:
    // 0x2a6a4c: 0xc10ca04  jal         func_432810
label_2a6a50:
    if (ctx->pc == 0x2A6A50u) {
        ctx->pc = 0x2A6A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6A4Cu;
        // 0x2a6a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6A54u;
        goto label_2a6a54;
    }
    ctx->pc = 0x2A6A4Cu;
    SET_GPR_U32(ctx, 31, 0x2A6A54u);
    ctx->pc = 0x2A6A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6A4Cu;
    // 0x2a6a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x2A6A4Cu, 0x2A6A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6A54u;
label_2a6a54:
    // 0x2a6a54: 0x1000000a  b           . + 4 + (0xA << 2)
label_2a6a58:
    if (ctx->pc == 0x2A6A58u) {
        ctx->pc = 0x2A6A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6A54u;
        // 0x2a6a58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6A5Cu;
        goto label_2a6a5c;
    }
    ctx->pc = 0x2A6A54u;
    {
        const bool branch_taken_0x2a6a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6A54u;
        // 0x2a6a58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6a54) {
            ctx->pc = 0x2A6A80u;
            goto label_2a6a80;
        }
    }
    ctx->pc = 0x2A6A5Cu;
label_2a6a5c:
    // 0x2a6a5c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2a6a5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a6a60:
    // 0x2a6a60: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x2a6a60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_2a6a64:
    // 0x2a6a64: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x2a6a64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_2a6a68:
    // 0x2a6a68: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a6a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_2a6a6c:
    // 0x2a6a6c: 0x24c635d8  addiu       $a2, $a2, 0x35D8
    ctx->pc = 0x2a6a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13784));
label_2a6a70:
    // 0x2a6a70: 0x24e70fd0  addiu       $a3, $a3, 0xFD0
    ctx->pc = 0x2a6a70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4048));
label_2a6a74:
    // 0x2a6a74: 0xc10ca04  jal         func_432810
label_2a6a78:
    if (ctx->pc == 0x2A6A78u) {
        ctx->pc = 0x2A6A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6A74u;
        // 0x2a6a78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6A7Cu;
        goto label_2a6a7c;
    }
    ctx->pc = 0x2A6A74u;
    SET_GPR_U32(ctx, 31, 0x2A6A7Cu);
    ctx->pc = 0x2A6A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6A74u;
    // 0x2a6a78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x2A6A74u, 0x2A6A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6A7Cu;
label_2a6a7c:
    // 0x2a6a7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a6a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a6a80:
    // 0x2a6a80: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x2a6a80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_2a6a84:
    // 0x2a6a84: 0xc050fda  jal         func_143F68
label_2a6a88:
    if (ctx->pc == 0x2A6A88u) {
        ctx->pc = 0x2A6A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6A84u;
        // 0x2a6a88: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6A8Cu;
        goto label_2a6a8c;
    }
    ctx->pc = 0x2A6A84u;
    SET_GPR_U32(ctx, 31, 0x2A6A8Cu);
    ctx->pc = 0x2A6A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6A84u;
    // 0x2a6a88: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x2A6A84u, 0x2A6A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6A8Cu;
label_2a6a8c:
    // 0x2a6a8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a6a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a6a90:
    // 0x2a6a90: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a6a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a6a94:
    // 0x2a6a94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a6a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a6a98:
    // 0x2a6a98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a6a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6a9c:
    // 0x2a6a9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a6a9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a6aa0:
    // 0x2a6aa0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a6aa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a6aa4:
    // 0x2a6aa4: 0xc087900  jal         func_21E400
label_2a6aa8:
    if (ctx->pc == 0x2A6AA8u) {
        ctx->pc = 0x2A6AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6AA4u;
        // 0x2a6aa8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6AACu;
        goto label_2a6aac;
    }
    ctx->pc = 0x2A6AA4u;
    SET_GPR_U32(ctx, 31, 0x2A6AACu);
    ctx->pc = 0x2A6AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6AA4u;
    // 0x2a6aa8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E400u, 0x2A6AA4u, 0x2A6AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6AACu;
label_2a6aac:
    // 0x2a6aac: 0x8e83b734  lw          $v1, -0x48CC($s4)
    ctx->pc = 0x2a6aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
label_2a6ab0:
    // 0x2a6ab0: 0x2624b880  addiu       $a0, $s1, -0x4780
    ctx->pc = 0x2a6ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294948992));
label_2a6ab4:
    // 0x2a6ab4: 0xc0cd4e4  jal         func_335390
label_2a6ab8:
    if (ctx->pc == 0x2A6AB8u) {
        ctx->pc = 0x2A6AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6AB4u;
        // 0x2a6ab8: 0x8c700048  lw          $s0, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6ABCu;
        goto label_2a6abc;
    }
    ctx->pc = 0x2A6AB4u;
    SET_GPR_U32(ctx, 31, 0x2A6ABCu);
    ctx->pc = 0x2A6AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6AB4u;
    // 0x2a6ab8: 0x8c700048  lw          $s0, 0x48($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A6AB4u, 0x2A6ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6ABCu;
label_2a6abc:
    // 0x2a6abc: 0x24031388  addiu       $v1, $zero, 0x1388
    ctx->pc = 0x2a6abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
label_2a6ac0:
    // 0x2a6ac0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2a6ac0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2a6ac4:
    // 0x2a6ac4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2a6ac8:
    if (ctx->pc == 0x2A6AC8u) {
        ctx->pc = 0x2A6AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6AC4u;
        // 0x2a6ac8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6ACCu;
        goto label_2a6acc;
    }
    ctx->pc = 0x2A6AC4u;
    {
        const bool branch_taken_0x2a6ac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6ac4) {
            ctx->pc = 0x2A6AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6AC4u;
            // 0x2a6ac8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6ACCu;
            goto label_2a6acc;
        }
    }
    ctx->pc = 0x2A6ACCu;
label_2a6acc:
    // 0x2a6acc: 0x2010  mfhi        $a0
    ctx->pc = 0x2a6accu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2a6ad0:
    // 0x2a6ad0: 0x24841388  addiu       $a0, $a0, 0x1388
    ctx->pc = 0x2a6ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5000));
label_2a6ad4:
    // 0x2a6ad4: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x2a6ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_2a6ad8:
    // 0x2a6ad8: 0xae500010  sw          $s0, 0x10($s2)
    ctx->pc = 0x2a6ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 16));
label_2a6adc:
    // 0x2a6adc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2a6adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a6ae0:
    // 0x2a6ae0: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2a6ae0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2a6ae4:
    // 0x2a6ae4: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_2a6ae8:
    if (ctx->pc == 0x2A6AE8u) {
        ctx->pc = 0x2A6AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6AE4u;
        // 0x2a6ae8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6AECu;
        goto label_2a6aec;
    }
    ctx->pc = 0x2A6AE4u;
    {
        const bool branch_taken_0x2a6ae4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2A6AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6AE4u;
        // 0x2a6ae8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6ae4) {
            ctx->pc = 0x2A6B2Cu;
            goto label_2a6b2c;
        }
    }
    ctx->pc = 0x2A6AECu;
label_2a6aec:
    // 0x2a6aec: 0xc0a36c2  jal         func_28DB08
label_2a6af0:
    if (ctx->pc == 0x2A6AF0u) {
        ctx->pc = 0x2A6AF4u;
        goto label_2a6af4;
    }
    ctx->pc = 0x2A6AECu;
    SET_GPR_U32(ctx, 31, 0x2A6AF4u);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2A6AECu, 0x2A6AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6AF4u;
label_2a6af4:
    // 0x2a6af4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2a6af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2a6af8:
    // 0x2a6af8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a6af8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6afc:
    // 0x2a6afc: 0x0  nop
    ctx->pc = 0x2a6afcu;
    // NOP
label_2a6b00:
    // 0x2a6b00: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2a6b00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a6b04:
    // 0x2a6b04: 0x0  nop
    ctx->pc = 0x2a6b04u;
    // NOP
label_2a6b08:
    // 0x2a6b08: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2a6b0c:
    if (ctx->pc == 0x2A6B0Cu) {
        ctx->pc = 0x2A6B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6B08u;
        // 0x2a6b0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6B10u;
        goto label_2a6b10;
    }
    ctx->pc = 0x2A6B08u;
    {
        const bool branch_taken_0x2a6b08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A6B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6B08u;
        // 0x2a6b0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6b08) {
            ctx->pc = 0x2A6B20u;
            goto label_2a6b20;
        }
    }
    ctx->pc = 0x2A6B10u;
label_2a6b10:
    // 0x2a6b10: 0xc0bf0fa  jal         func_2FC3E8
label_2a6b14:
    if (ctx->pc == 0x2A6B14u) {
        ctx->pc = 0x2A6B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6B10u;
        // 0x2a6b14: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6B18u;
        goto label_2a6b18;
    }
    ctx->pc = 0x2A6B10u;
    SET_GPR_U32(ctx, 31, 0x2A6B18u);
    ctx->pc = 0x2A6B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6B10u;
    // 0x2a6b14: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC3E8u, 0x2A6B10u, 0x2A6B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6B18u;
label_2a6b18:
    // 0x2a6b18: 0x10000004  b           . + 4 + (0x4 << 2)
label_2a6b1c:
    if (ctx->pc == 0x2A6B1Cu) {
        ctx->pc = 0x2A6B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6B18u;
        // 0x2a6b1c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6B20u;
        goto label_2a6b20;
    }
    ctx->pc = 0x2A6B18u;
    {
        const bool branch_taken_0x2a6b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6B18u;
        // 0x2a6b1c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6b18) {
            ctx->pc = 0x2A6B2Cu;
            goto label_2a6b2c;
        }
    }
    ctx->pc = 0x2A6B20u;
label_2a6b20:
    // 0x2a6b20: 0xc0bf0fa  jal         func_2FC3E8
label_2a6b24:
    if (ctx->pc == 0x2A6B24u) {
        ctx->pc = 0x2A6B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6B20u;
        // 0x2a6b24: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6B28u;
        goto label_2a6b28;
    }
    ctx->pc = 0x2A6B20u;
    SET_GPR_U32(ctx, 31, 0x2A6B28u);
    ctx->pc = 0x2A6B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6B20u;
    // 0x2a6b24: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC3E8u, 0x2A6B20u, 0x2A6B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6B28u;
label_2a6b28:
    // 0x2a6b28: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2a6b28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2a6b2c:
    // 0x2a6b2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a6b2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a6b30:
    // 0x2a6b30: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2a6b30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2a6b34:
    // 0x2a6b34: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2a6b34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2a6b38:
    // 0x2a6b38: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2a6b38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2a6b3c:
    // 0x2a6b3c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2a6b3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2a6b40:
    // 0x2a6b40: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a6b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2a6b44:
    // 0x2a6b44: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2a6b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2a6b48:
    // 0x2a6b48: 0x3e00008  jr          $ra
label_2a6b4c:
    if (ctx->pc == 0x2A6B4Cu) {
        ctx->pc = 0x2A6B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6B48u;
        // 0x2a6b4c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6B50u;
        goto label_fallthrough_0x2a6b48;
    }
    ctx->pc = 0x2A6B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6B48u;
        // 0x2a6b4c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a6b48:
    ctx->pc = 0x2A6B50u;
}
