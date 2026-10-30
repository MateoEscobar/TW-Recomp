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

// Function: sub_002B0970
// Address: 0x2b0970 - 0x2b0b60
void sub_002B0970_0x2b0970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0970_0x2b0970");
#endif

    switch (ctx->pc) {
        case 0x2b0970u: goto label_2b0970;
        case 0x2b0974u: goto label_2b0974;
        case 0x2b0978u: goto label_2b0978;
        case 0x2b097cu: goto label_2b097c;
        case 0x2b0980u: goto label_2b0980;
        case 0x2b0984u: goto label_2b0984;
        case 0x2b0988u: goto label_2b0988;
        case 0x2b098cu: goto label_2b098c;
        case 0x2b0990u: goto label_2b0990;
        case 0x2b0994u: goto label_2b0994;
        case 0x2b0998u: goto label_2b0998;
        case 0x2b099cu: goto label_2b099c;
        case 0x2b09a0u: goto label_2b09a0;
        case 0x2b09a4u: goto label_2b09a4;
        case 0x2b09a8u: goto label_2b09a8;
        case 0x2b09acu: goto label_2b09ac;
        case 0x2b09b0u: goto label_2b09b0;
        case 0x2b09b4u: goto label_2b09b4;
        case 0x2b09b8u: goto label_2b09b8;
        case 0x2b09bcu: goto label_2b09bc;
        case 0x2b09c0u: goto label_2b09c0;
        case 0x2b09c4u: goto label_2b09c4;
        case 0x2b09c8u: goto label_2b09c8;
        case 0x2b09ccu: goto label_2b09cc;
        case 0x2b09d0u: goto label_2b09d0;
        case 0x2b09d4u: goto label_2b09d4;
        case 0x2b09d8u: goto label_2b09d8;
        case 0x2b09dcu: goto label_2b09dc;
        case 0x2b09e0u: goto label_2b09e0;
        case 0x2b09e4u: goto label_2b09e4;
        case 0x2b09e8u: goto label_2b09e8;
        case 0x2b09ecu: goto label_2b09ec;
        case 0x2b09f0u: goto label_2b09f0;
        case 0x2b09f4u: goto label_2b09f4;
        case 0x2b09f8u: goto label_2b09f8;
        case 0x2b09fcu: goto label_2b09fc;
        case 0x2b0a00u: goto label_2b0a00;
        case 0x2b0a04u: goto label_2b0a04;
        case 0x2b0a08u: goto label_2b0a08;
        case 0x2b0a0cu: goto label_2b0a0c;
        case 0x2b0a10u: goto label_2b0a10;
        case 0x2b0a14u: goto label_2b0a14;
        case 0x2b0a18u: goto label_2b0a18;
        case 0x2b0a1cu: goto label_2b0a1c;
        case 0x2b0a20u: goto label_2b0a20;
        case 0x2b0a24u: goto label_2b0a24;
        case 0x2b0a28u: goto label_2b0a28;
        case 0x2b0a2cu: goto label_2b0a2c;
        case 0x2b0a30u: goto label_2b0a30;
        case 0x2b0a34u: goto label_2b0a34;
        case 0x2b0a38u: goto label_2b0a38;
        case 0x2b0a3cu: goto label_2b0a3c;
        case 0x2b0a40u: goto label_2b0a40;
        case 0x2b0a44u: goto label_2b0a44;
        case 0x2b0a48u: goto label_2b0a48;
        case 0x2b0a4cu: goto label_2b0a4c;
        case 0x2b0a50u: goto label_2b0a50;
        case 0x2b0a54u: goto label_2b0a54;
        case 0x2b0a58u: goto label_2b0a58;
        case 0x2b0a5cu: goto label_2b0a5c;
        case 0x2b0a60u: goto label_2b0a60;
        case 0x2b0a64u: goto label_2b0a64;
        case 0x2b0a68u: goto label_2b0a68;
        case 0x2b0a6cu: goto label_2b0a6c;
        case 0x2b0a70u: goto label_2b0a70;
        case 0x2b0a74u: goto label_2b0a74;
        case 0x2b0a78u: goto label_2b0a78;
        case 0x2b0a7cu: goto label_2b0a7c;
        case 0x2b0a80u: goto label_2b0a80;
        case 0x2b0a84u: goto label_2b0a84;
        case 0x2b0a88u: goto label_2b0a88;
        case 0x2b0a8cu: goto label_2b0a8c;
        case 0x2b0a90u: goto label_2b0a90;
        case 0x2b0a94u: goto label_2b0a94;
        case 0x2b0a98u: goto label_2b0a98;
        case 0x2b0a9cu: goto label_2b0a9c;
        case 0x2b0aa0u: goto label_2b0aa0;
        case 0x2b0aa4u: goto label_2b0aa4;
        case 0x2b0aa8u: goto label_2b0aa8;
        case 0x2b0aacu: goto label_2b0aac;
        case 0x2b0ab0u: goto label_2b0ab0;
        case 0x2b0ab4u: goto label_2b0ab4;
        case 0x2b0ab8u: goto label_2b0ab8;
        case 0x2b0abcu: goto label_2b0abc;
        case 0x2b0ac0u: goto label_2b0ac0;
        case 0x2b0ac4u: goto label_2b0ac4;
        case 0x2b0ac8u: goto label_2b0ac8;
        case 0x2b0accu: goto label_2b0acc;
        case 0x2b0ad0u: goto label_2b0ad0;
        case 0x2b0ad4u: goto label_2b0ad4;
        case 0x2b0ad8u: goto label_2b0ad8;
        case 0x2b0adcu: goto label_2b0adc;
        case 0x2b0ae0u: goto label_2b0ae0;
        case 0x2b0ae4u: goto label_2b0ae4;
        case 0x2b0ae8u: goto label_2b0ae8;
        case 0x2b0aecu: goto label_2b0aec;
        case 0x2b0af0u: goto label_2b0af0;
        case 0x2b0af4u: goto label_2b0af4;
        case 0x2b0af8u: goto label_2b0af8;
        case 0x2b0afcu: goto label_2b0afc;
        case 0x2b0b00u: goto label_2b0b00;
        case 0x2b0b04u: goto label_2b0b04;
        case 0x2b0b08u: goto label_2b0b08;
        case 0x2b0b0cu: goto label_2b0b0c;
        case 0x2b0b10u: goto label_2b0b10;
        case 0x2b0b14u: goto label_2b0b14;
        case 0x2b0b18u: goto label_2b0b18;
        case 0x2b0b1cu: goto label_2b0b1c;
        case 0x2b0b20u: goto label_2b0b20;
        case 0x2b0b24u: goto label_2b0b24;
        case 0x2b0b28u: goto label_2b0b28;
        case 0x2b0b2cu: goto label_2b0b2c;
        case 0x2b0b30u: goto label_2b0b30;
        case 0x2b0b34u: goto label_2b0b34;
        case 0x2b0b38u: goto label_2b0b38;
        case 0x2b0b3cu: goto label_2b0b3c;
        case 0x2b0b40u: goto label_2b0b40;
        case 0x2b0b44u: goto label_2b0b44;
        case 0x2b0b48u: goto label_2b0b48;
        case 0x2b0b4cu: goto label_2b0b4c;
        case 0x2b0b50u: goto label_2b0b50;
        case 0x2b0b54u: goto label_2b0b54;
        case 0x2b0b58u: goto label_2b0b58;
        case 0x2b0b5cu: goto label_2b0b5c;
        default: break;
    }

    ctx->pc = 0x2b0970u;

label_2b0970:
    // 0x2b0970: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2b0970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2b0974:
    // 0x2b0974: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2b0974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2b0978:
    // 0x2b0978: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2b0978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2b097c:
    // 0x2b097c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b097cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b0980:
    // 0x2b0980: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2b0980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2b0984:
    // 0x2b0984: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2b0984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2b0988:
    // 0x2b0988: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2b0988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2b098c:
    // 0x2b098c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b098cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2b0990:
    // 0x2b0990: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2b0990u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2b0994:
    // 0x2b0994: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2b0994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2b0998:
    // 0x2b0998: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2b0998u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b099c:
    // 0x2b099c: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x2b099cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2b09a0:
    // 0x2b09a0: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x2b09a0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b09a4:
    // 0x2b09a4: 0xc0e409a  jal         func_390268
label_2b09a8:
    if (ctx->pc == 0x2B09A8u) {
        ctx->pc = 0x2B09A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B09A4u;
        // 0x2b09a8: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B09ACu;
        goto label_2b09ac;
    }
    ctx->pc = 0x2B09A4u;
    SET_GPR_U32(ctx, 31, 0x2B09ACu);
    ctx->pc = 0x2B09A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B09A4u;
    // 0x2b09a8: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B09A4u, 0x2B09ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B09ACu;
label_2b09ac:
    // 0x2b09ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b09acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b09b0:
    // 0x2b09b0: 0xc0a34d6  jal         func_28D358
label_2b09b4:
    if (ctx->pc == 0x2B09B4u) {
        ctx->pc = 0x2B09B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B09B0u;
        // 0x2b09b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B09B8u;
        goto label_2b09b8;
    }
    ctx->pc = 0x2B09B0u;
    SET_GPR_U32(ctx, 31, 0x2B09B8u);
    ctx->pc = 0x2B09B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B09B0u;
    // 0x2b09b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2B09B0u, 0x2B09B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B09B8u;
label_2b09b8:
    // 0x2b09b8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2b09b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b09bc:
    // 0x2b09bc: 0x1280005f  beqz        $s4, . + 4 + (0x5F << 2)
label_2b09c0:
    if (ctx->pc == 0x2B09C0u) {
        ctx->pc = 0x2B09C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B09BCu;
        // 0x2b09c0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B09C4u;
        goto label_2b09c4;
    }
    ctx->pc = 0x2B09BCu;
    {
        const bool branch_taken_0x2b09bc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B09C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B09BCu;
        // 0x2b09c0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b09bc) {
            ctx->pc = 0x2B0B3Cu;
            goto label_2b0b3c;
        }
    }
    ctx->pc = 0x2B09C4u;
label_2b09c4:
    // 0x2b09c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b09c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b09c8:
    // 0x2b09c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b09c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b09cc:
    // 0x2b09cc: 0xc0888a2  jal         func_222288
label_2b09d0:
    if (ctx->pc == 0x2B09D0u) {
        ctx->pc = 0x2B09D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B09CCu;
        // 0x2b09d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B09D4u;
        goto label_2b09d4;
    }
    ctx->pc = 0x2B09CCu;
    SET_GPR_U32(ctx, 31, 0x2B09D4u);
    ctx->pc = 0x2B09D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B09CCu;
    // 0x2b09d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2B09CCu, 0x2B09D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B09D4u;
label_2b09d4:
    // 0x2b09d4: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
label_2b09d8:
    if (ctx->pc == 0x2B09D8u) {
        ctx->pc = 0x2B09DCu;
        goto label_2b09dc;
    }
    ctx->pc = 0x2B09D4u;
    {
        const bool branch_taken_0x2b09d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b09d4) {
            ctx->pc = 0x2B0AE0u;
            goto label_2b0ae0;
        }
    }
    ctx->pc = 0x2B09DCu;
label_2b09dc:
    // 0x2b09dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2b09dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b09e0:
    // 0x2b09e0: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2b09e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2b09e4:
    // 0x2b09e4: 0x28420007  slti        $v0, $v0, 0x7
    ctx->pc = 0x2b09e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_2b09e8:
    // 0x2b09e8: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_2b09ec:
    if (ctx->pc == 0x2B09ECu) {
        ctx->pc = 0x2B09ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B09E8u;
        // 0x2b09ec: 0x3c100071  lui         $s0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B09F0u;
        goto label_2b09f0;
    }
    ctx->pc = 0x2B09E8u;
    {
        const bool branch_taken_0x2b09e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B09ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B09E8u;
        // 0x2b09ec: 0x3c100071  lui         $s0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b09e8) {
            ctx->pc = 0x2B0AD8u;
            goto label_2b0ad8;
        }
    }
    ctx->pc = 0x2B09F0u;
label_2b09f0:
    // 0x2b09f0: 0x78620240  lq          $v0, 0x240($v1)
    ctx->pc = 0x2b09f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 576)));
label_2b09f4:
    // 0x2b09f4: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x2b09f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_2b09f8:
    // 0x2b09f8: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2b09f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2b09fc:
    // 0x2b09fc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2b09fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2b0a00:
    // 0x2b0a00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b0a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b0a04:
    // 0x2b0a04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b0a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b0a08:
    // 0x2b0a08: 0x86820092  lh          $v0, 0x92($s4)
    ctx->pc = 0x2b0a08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2b0a0c:
    // 0x2b0a0c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2b0a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2b0a10:
    // 0x2b0a10: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2b0a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2b0a14:
    // 0x2b0a14: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2b0a14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2b0a18:
    // 0x2b0a18: 0xc0cdb38  jal         func_336CE0
label_2b0a1c:
    if (ctx->pc == 0x2B0A1Cu) {
        ctx->pc = 0x2B0A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0A18u;
        // 0x2b0a1c: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0A20u;
        goto label_2b0a20;
    }
    ctx->pc = 0x2B0A18u;
    SET_GPR_U32(ctx, 31, 0x2B0A20u);
    ctx->pc = 0x2B0A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0A18u;
    // 0x2b0a1c: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2B0A18u, 0x2B0A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0A20u;
label_2b0a20:
    // 0x2b0a20: 0x86650092  lh          $a1, 0x92($s3)
    ctx->pc = 0x2b0a20u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2b0a24:
    // 0x2b0a24: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b0a24u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2b0a28:
    // 0x2b0a28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b0a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b0a2c:
    // 0x2b0a2c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2b0a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2b0a30:
    // 0x2b0a30: 0xc0cdb38  jal         func_336CE0
label_2b0a34:
    if (ctx->pc == 0x2B0A34u) {
        ctx->pc = 0x2B0A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0A30u;
        // 0x2b0a34: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0A38u;
        goto label_2b0a38;
    }
    ctx->pc = 0x2B0A30u;
    SET_GPR_U32(ctx, 31, 0x2B0A38u);
    ctx->pc = 0x2B0A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0A30u;
    // 0x2b0a34: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2B0A30u, 0x2B0A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0A38u;
label_2b0a38:
    // 0x2b0a38: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2b0a38u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2b0a3c:
    // 0x2b0a3c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2b0a3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b0a40:
    // 0x2b0a40: 0x0  nop
    ctx->pc = 0x2b0a40u;
    // NOP
label_2b0a44:
    // 0x2b0a44: 0x45000025  bc1f        . + 4 + (0x25 << 2)
label_2b0a48:
    if (ctx->pc == 0x2B0A48u) {
        ctx->pc = 0x2B0A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0A44u;
        // 0x2b0a48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0A4Cu;
        goto label_2b0a4c;
    }
    ctx->pc = 0x2B0A44u;
    {
        const bool branch_taken_0x2b0a44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B0A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0A44u;
        // 0x2b0a48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0a44) {
            ctx->pc = 0x2B0ADCu;
            goto label_2b0adc;
        }
    }
    ctx->pc = 0x2B0A4Cu;
label_2b0a4c:
    // 0x2b0a4c: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x2b0a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
label_2b0a50:
    // 0x2b0a50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b0a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b0a54:
    // 0x2b0a54: 0x0  nop
    ctx->pc = 0x2b0a54u;
    // NOP
label_2b0a58:
    // 0x2b0a58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b0a58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b0a5c:
    // 0x2b0a5c: 0x0  nop
    ctx->pc = 0x2b0a5cu;
    // NOP
label_2b0a60:
    // 0x2b0a60: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2b0a64:
    if (ctx->pc == 0x2B0A64u) {
        ctx->pc = 0x2B0A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0A60u;
        // 0x2b0a64: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0A68u;
        goto label_2b0a68;
    }
    ctx->pc = 0x2B0A60u;
    {
        const bool branch_taken_0x2b0a60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B0A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0A60u;
        // 0x2b0a64: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0a60) {
            ctx->pc = 0x2B0A6Cu;
            goto label_2b0a6c;
        }
    }
    ctx->pc = 0x2B0A68u;
label_2b0a68:
    // 0x2b0a68: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x2b0a68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b0a6c:
    // 0x2b0a6c: 0xc0a367c  jal         func_28D9F0
label_2b0a70:
    if (ctx->pc == 0x2B0A70u) {
        ctx->pc = 0x2B0A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0A6Cu;
        // 0x2b0a70: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0A74u;
        goto label_2b0a74;
    }
    ctx->pc = 0x2B0A6Cu;
    SET_GPR_U32(ctx, 31, 0x2B0A74u);
    ctx->pc = 0x2B0A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0A6Cu;
    // 0x2b0a70: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B0A6Cu, 0x2B0A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0A74u;
label_2b0a74:
    // 0x2b0a74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b0a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b0a78:
    // 0x2b0a78: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_2b0a7c:
    if (ctx->pc == 0x2B0A7Cu) {
        ctx->pc = 0x2B0A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0A78u;
        // 0x2b0a7c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0A80u;
        goto label_2b0a80;
    }
    ctx->pc = 0x2B0A78u;
    {
        const bool branch_taken_0x2b0a78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0A78u;
        // 0x2b0a7c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0a78) {
            ctx->pc = 0x2B0AB0u;
            goto label_2b0ab0;
        }
    }
    ctx->pc = 0x2B0A80u;
label_2b0a80:
    // 0x2b0a80: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2b0a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b0a84:
    // 0x2b0a84: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2b0a84u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2b0a88:
    // 0x2b0a88: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2b0a88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b0a8c:
    // 0x2b0a8c: 0x78a20240  lq          $v0, 0x240($a1)
    ctx->pc = 0x2b0a8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 576)));
label_2b0a90:
    // 0x2b0a90: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2b0a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2b0a94:
    // 0x2b0a94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b0a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2b0a98:
    // 0x2b0a98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b0a98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b0a9c:
    // 0x2b0a9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b0a9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0aa0:
    // 0x2b0aa0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2b0aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2b0aa4:
    // 0x2b0aa4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2b0aa4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0aa8:
    // 0x2b0aa8: 0xc0bee7a  jal         func_2FB9E8
label_2b0aac:
    if (ctx->pc == 0x2B0AACu) {
        ctx->pc = 0x2B0AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0AA8u;
        // 0x2b0aac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0AB0u;
        goto label_2b0ab0;
    }
    ctx->pc = 0x2B0AA8u;
    SET_GPR_U32(ctx, 31, 0x2B0AB0u);
    ctx->pc = 0x2B0AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0AA8u;
    // 0x2b0aac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2B0AA8u, 0x2B0AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0AB0u;
label_2b0ab0:
    // 0x2b0ab0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b0ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b0ab4:
    // 0x2b0ab4: 0xc087502  jal         func_21D408
label_2b0ab8:
    if (ctx->pc == 0x2B0AB8u) {
        ctx->pc = 0x2B0AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0AB4u;
        // 0x2b0ab8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0ABCu;
        goto label_2b0abc;
    }
    ctx->pc = 0x2B0AB4u;
    SET_GPR_U32(ctx, 31, 0x2B0ABCu);
    ctx->pc = 0x2B0AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0AB4u;
    // 0x2b0ab8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B0AB4u, 0x2B0ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0ABCu;
label_2b0abc:
    // 0x2b0abc: 0x904302d4  lbu         $v1, 0x2D4($v0)
    ctx->pc = 0x2b0abcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 724)));
label_2b0ac0:
    // 0x2b0ac0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2b0ac4:
    if (ctx->pc == 0x2B0AC4u) {
        ctx->pc = 0x2B0AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0AC0u;
        // 0x2b0ac4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0AC8u;
        goto label_2b0ac8;
    }
    ctx->pc = 0x2B0AC0u;
    {
        const bool branch_taken_0x2b0ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0AC0u;
        // 0x2b0ac4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0ac0) {
            ctx->pc = 0x2B0AD4u;
            goto label_2b0ad4;
        }
    }
    ctx->pc = 0x2B0AC8u;
label_2b0ac8:
    // 0x2b0ac8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b0ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0acc:
    // 0x2b0acc: 0xc0ac3b6  jal         func_2B0ED8
label_2b0ad0:
    if (ctx->pc == 0x2B0AD0u) {
        ctx->pc = 0x2B0AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0ACCu;
        // 0x2b0ad0: 0x240601f4  addiu       $a2, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0AD4u;
        goto label_2b0ad4;
    }
    ctx->pc = 0x2B0ACCu;
    SET_GPR_U32(ctx, 31, 0x2B0AD4u);
    ctx->pc = 0x2B0AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0ACCu;
    // 0x2b0ad0: 0x240601f4  addiu       $a2, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0ED8u, 0x2B0ACCu, 0x2B0AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0AD4u;
label_2b0ad4:
    // 0x2b0ad4: 0xa2500056  sb          $s0, 0x56($s2)
    ctx->pc = 0x2b0ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 86), (uint8_t)GPR_U32(ctx, 16));
label_2b0ad8:
    // 0x2b0ad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b0ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b0adc:
    // 0x2b0adc: 0xa242005d  sb          $v0, 0x5D($s2)
    ctx->pc = 0x2b0adcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 93), (uint8_t)GPR_U32(ctx, 2));
label_2b0ae0:
    // 0x2b0ae0: 0xc08a200  jal         func_228800
label_2b0ae4:
    if (ctx->pc == 0x2B0AE4u) {
        ctx->pc = 0x2B0AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0AE0u;
        // 0x2b0ae4: 0x8e6400cc  lw          $a0, 0xCC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0AE8u;
        goto label_2b0ae8;
    }
    ctx->pc = 0x2B0AE0u;
    SET_GPR_U32(ctx, 31, 0x2B0AE8u);
    ctx->pc = 0x2B0AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0AE0u;
    // 0x2b0ae4: 0x8e6400cc  lw          $a0, 0xCC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2B0AE0u, 0x2B0AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0AE8u;
label_2b0ae8:
    // 0x2b0ae8: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x2b0ae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
label_2b0aec:
    // 0x2b0aec: 0x38620006  xori        $v0, $v1, 0x6
    ctx->pc = 0x2b0aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
label_2b0af0:
    // 0x2b0af0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2b0af4:
    if (ctx->pc == 0x2B0AF4u) {
        ctx->pc = 0x2B0AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0AF0u;
        // 0x2b0af4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0AF8u;
        goto label_2b0af8;
    }
    ctx->pc = 0x2B0AF0u;
    {
        const bool branch_taken_0x2b0af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0AF0u;
        // 0x2b0af4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0af0) {
            ctx->pc = 0x2B0B00u;
            goto label_2b0b00;
        }
    }
    ctx->pc = 0x2B0AF8u;
label_2b0af8:
    // 0x2b0af8: 0x38620007  xori        $v0, $v1, 0x7
    ctx->pc = 0x2b0af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
label_2b0afc:
    // 0x2b0afc: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x2b0afcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b0b00:
    // 0x2b0b00: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_2b0b04:
    if (ctx->pc == 0x2B0B04u) {
        ctx->pc = 0x2B0B08u;
        goto label_2b0b08;
    }
    ctx->pc = 0x2B0B00u;
    {
        const bool branch_taken_0x2b0b00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0b00) {
            ctx->pc = 0x2B0B30u;
            goto label_2b0b30;
        }
    }
    ctx->pc = 0x2B0B08u;
label_2b0b08:
    // 0x2b0b08: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2b0b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b0b0c:
    // 0x2b0b0c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2b0b0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2b0b10:
    // 0x2b0b10: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2b0b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2b0b14:
    // 0x2b0b14: 0x40f809  jalr        $v0
label_2b0b18:
    if (ctx->pc == 0x2B0B18u) {
        ctx->pc = 0x2B0B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0B14u;
        // 0x2b0b18: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0B1Cu;
        goto label_2b0b1c;
    }
    ctx->pc = 0x2B0B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B0B1Cu);
        ctx->pc = 0x2B0B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0B14u;
        // 0x2b0b18: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0B14u, 0x2B0B1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B0B1Cu;
label_2b0b1c:
    // 0x2b0b1c: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x2b0b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_2b0b20:
    // 0x2b0b20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b0b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b0b24:
    // 0x2b0b24: 0x24c63fd0  addiu       $a2, $a2, 0x3FD0
    ctx->pc = 0x2b0b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16336));
label_2b0b28:
    // 0x2b0b28: 0xc08e1a4  jal         func_238690
label_2b0b2c:
    if (ctx->pc == 0x2B0B2Cu) {
        ctx->pc = 0x2B0B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0B28u;
        // 0x2b0b2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0B30u;
        goto label_2b0b30;
    }
    ctx->pc = 0x2B0B28u;
    SET_GPR_U32(ctx, 31, 0x2B0B30u);
    ctx->pc = 0x2B0B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0B28u;
    // 0x2b0b2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x2B0B28u, 0x2B0B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0B30u;
label_2b0b30:
    // 0x2b0b30: 0xc089bdc  jal         func_226F70
label_2b0b34:
    if (ctx->pc == 0x2B0B34u) {
        ctx->pc = 0x2B0B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0B30u;
        // 0x2b0b34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0B38u;
        goto label_2b0b38;
    }
    ctx->pc = 0x2B0B30u;
    SET_GPR_U32(ctx, 31, 0x2B0B38u);
    ctx->pc = 0x2B0B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0B30u;
    // 0x2b0b34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2B0B30u, 0x2B0B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0B38u;
label_2b0b38:
    // 0x2b0b38: 0xa2600284  sb          $zero, 0x284($s3)
    ctx->pc = 0x2b0b38u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 644), (uint8_t)GPR_U32(ctx, 0));
label_2b0b3c:
    // 0x2b0b3c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2b0b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2b0b40:
    // 0x2b0b40: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2b0b40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2b0b44:
    // 0x2b0b44: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2b0b44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2b0b48:
    // 0x2b0b48: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2b0b48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2b0b4c:
    // 0x2b0b4c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2b0b4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2b0b50:
    // 0x2b0b50: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b0b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2b0b54:
    // 0x2b0b54: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2b0b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2b0b58:
    // 0x2b0b58: 0x3e00008  jr          $ra
label_2b0b5c:
    if (ctx->pc == 0x2B0B5Cu) {
        ctx->pc = 0x2B0B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0B58u;
        // 0x2b0b5c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0B60u;
        goto label_fallthrough_0x2b0b58;
    }
    ctx->pc = 0x2B0B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0B58u;
        // 0x2b0b5c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b0b58:
    ctx->pc = 0x2B0B60u;
}
