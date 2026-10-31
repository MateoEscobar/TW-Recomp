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

// Function: sub_002E0968
// Address: 0x2e0968 - 0x2e0a78
void sub_002E0968_0x2e0968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0968_0x2e0968");
#endif

    switch (ctx->pc) {
        case 0x2e0968u: goto label_2e0968;
        case 0x2e096cu: goto label_2e096c;
        case 0x2e0970u: goto label_2e0970;
        case 0x2e0974u: goto label_2e0974;
        case 0x2e0978u: goto label_2e0978;
        case 0x2e097cu: goto label_2e097c;
        case 0x2e0980u: goto label_2e0980;
        case 0x2e0984u: goto label_2e0984;
        case 0x2e0988u: goto label_2e0988;
        case 0x2e098cu: goto label_2e098c;
        case 0x2e0990u: goto label_2e0990;
        case 0x2e0994u: goto label_2e0994;
        case 0x2e0998u: goto label_2e0998;
        case 0x2e099cu: goto label_2e099c;
        case 0x2e09a0u: goto label_2e09a0;
        case 0x2e09a4u: goto label_2e09a4;
        case 0x2e09a8u: goto label_2e09a8;
        case 0x2e09acu: goto label_2e09ac;
        case 0x2e09b0u: goto label_2e09b0;
        case 0x2e09b4u: goto label_2e09b4;
        case 0x2e09b8u: goto label_2e09b8;
        case 0x2e09bcu: goto label_2e09bc;
        case 0x2e09c0u: goto label_2e09c0;
        case 0x2e09c4u: goto label_2e09c4;
        case 0x2e09c8u: goto label_2e09c8;
        case 0x2e09ccu: goto label_2e09cc;
        case 0x2e09d0u: goto label_2e09d0;
        case 0x2e09d4u: goto label_2e09d4;
        case 0x2e09d8u: goto label_2e09d8;
        case 0x2e09dcu: goto label_2e09dc;
        case 0x2e09e0u: goto label_2e09e0;
        case 0x2e09e4u: goto label_2e09e4;
        case 0x2e09e8u: goto label_2e09e8;
        case 0x2e09ecu: goto label_2e09ec;
        case 0x2e09f0u: goto label_2e09f0;
        case 0x2e09f4u: goto label_2e09f4;
        case 0x2e09f8u: goto label_2e09f8;
        case 0x2e09fcu: goto label_2e09fc;
        case 0x2e0a00u: goto label_2e0a00;
        case 0x2e0a04u: goto label_2e0a04;
        case 0x2e0a08u: goto label_2e0a08;
        case 0x2e0a0cu: goto label_2e0a0c;
        case 0x2e0a10u: goto label_2e0a10;
        case 0x2e0a14u: goto label_2e0a14;
        case 0x2e0a18u: goto label_2e0a18;
        case 0x2e0a1cu: goto label_2e0a1c;
        case 0x2e0a20u: goto label_2e0a20;
        case 0x2e0a24u: goto label_2e0a24;
        case 0x2e0a28u: goto label_2e0a28;
        case 0x2e0a2cu: goto label_2e0a2c;
        case 0x2e0a30u: goto label_2e0a30;
        case 0x2e0a34u: goto label_2e0a34;
        case 0x2e0a38u: goto label_2e0a38;
        case 0x2e0a3cu: goto label_2e0a3c;
        case 0x2e0a40u: goto label_2e0a40;
        case 0x2e0a44u: goto label_2e0a44;
        case 0x2e0a48u: goto label_2e0a48;
        case 0x2e0a4cu: goto label_2e0a4c;
        case 0x2e0a50u: goto label_2e0a50;
        case 0x2e0a54u: goto label_2e0a54;
        case 0x2e0a58u: goto label_2e0a58;
        case 0x2e0a5cu: goto label_2e0a5c;
        case 0x2e0a60u: goto label_2e0a60;
        case 0x2e0a64u: goto label_2e0a64;
        case 0x2e0a68u: goto label_2e0a68;
        case 0x2e0a6cu: goto label_2e0a6c;
        case 0x2e0a70u: goto label_2e0a70;
        case 0x2e0a74u: goto label_2e0a74;
        default: break;
    }

    ctx->pc = 0x2e0968u;

label_2e0968:
    // 0x2e0968: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e0968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2e096c:
    // 0x2e096c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e096cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2e0970:
    // 0x2e0970: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2e0970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2e0974:
    // 0x2e0974: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e0974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e0978:
    // 0x2e0978: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2e0978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2e097c:
    // 0x2e097c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e097cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e0980:
    // 0x2e0980: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2e0980u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2e0984:
    // 0x2e0984: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2e0984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e0988:
    // 0x2e0988: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2e0988u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2e098c:
    // 0x2e098c: 0x1c600032  bgtz        $v1, . + 4 + (0x32 << 2)
label_2e0990:
    if (ctx->pc == 0x2E0990u) {
        ctx->pc = 0x2E0990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E098Cu;
        // 0x2e0990: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0994u;
        goto label_2e0994;
    }
    ctx->pc = 0x2E098Cu;
    {
        const bool branch_taken_0x2e098c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2E0990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E098Cu;
        // 0x2e0990: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e098c) {
            ctx->pc = 0x2E0A58u;
            goto label_2e0a58;
        }
    }
    ctx->pc = 0x2E0994u;
label_2e0994:
    // 0x2e0994: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2e0994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2e0998:
    // 0x2e0998: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x2e0998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2e099c:
    // 0x2e099c: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x2e099cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_2e09a0:
    // 0x2e09a0: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2e09a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2e09a4:
    // 0x2e09a4: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2e09a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2e09a8:
    // 0x2e09a8: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_2e09ac:
    if (ctx->pc == 0x2E09ACu) {
        ctx->pc = 0x2E09ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E09A8u;
        // 0x2e09ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E09B0u;
        goto label_2e09b0;
    }
    ctx->pc = 0x2E09A8u;
    {
        const bool branch_taken_0x2e09a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E09ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E09A8u;
        // 0x2e09ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e09a8) {
            ctx->pc = 0x2E0A58u;
            goto label_2e0a58;
        }
    }
    ctx->pc = 0x2E09B0u;
label_2e09b0:
    // 0x2e09b0: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x2e09b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_2e09b4:
    // 0x2e09b4: 0xc0b81f4  jal         func_2E07D0
label_2e09b8:
    if (ctx->pc == 0x2E09B8u) {
        ctx->pc = 0x2E09B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E09B4u;
        // 0x2e09b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E09BCu;
        goto label_2e09bc;
    }
    ctx->pc = 0x2E09B4u;
    SET_GPR_U32(ctx, 31, 0x2E09BCu);
    ctx->pc = 0x2E09B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E09B4u;
    // 0x2e09b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E07D0u, 0x2E09B4u, 0x2E09BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E09BCu;
label_2e09bc:
    // 0x2e09bc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2e09c0:
    if (ctx->pc == 0x2E09C0u) {
        ctx->pc = 0x2E09C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E09BCu;
        // 0x2e09c0: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E09C4u;
        goto label_2e09c4;
    }
    ctx->pc = 0x2E09BCu;
    {
        const bool branch_taken_0x2e09bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e09bc) {
            ctx->pc = 0x2E09C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E09BCu;
            // 0x2e09c0: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E09CCu;
            goto label_2e09cc;
        }
    }
    ctx->pc = 0x2E09C4u;
label_2e09c4:
    // 0x2e09c4: 0x10000024  b           . + 4 + (0x24 << 2)
label_2e09c8:
    if (ctx->pc == 0x2E09C8u) {
        ctx->pc = 0x2E09C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E09C4u;
        // 0x2e09c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E09CCu;
        goto label_2e09cc;
    }
    ctx->pc = 0x2E09C4u;
    {
        const bool branch_taken_0x2e09c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E09C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E09C4u;
        // 0x2e09c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e09c4) {
            ctx->pc = 0x2E0A58u;
            goto label_2e0a58;
        }
    }
    ctx->pc = 0x2E09CCu;
label_2e09cc:
    // 0x2e09cc: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2e09ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2e09d0:
    // 0x2e09d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e09d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e09d4:
    // 0x2e09d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e09d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2e09d8:
    // 0x2e09d8: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2e09d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2e09dc:
    // 0x2e09dc: 0xc0a4e54  jal         func_293950
label_2e09e0:
    if (ctx->pc == 0x2E09E0u) {
        ctx->pc = 0x2E09E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E09DCu;
        // 0x2e09e0: 0xae240028  sw          $a0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E09E4u;
        goto label_2e09e4;
    }
    ctx->pc = 0x2E09DCu;
    SET_GPR_U32(ctx, 31, 0x2E09E4u);
    ctx->pc = 0x2E09E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E09DCu;
    // 0x2e09e0: 0xae240028  sw          $a0, 0x28($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2E09DCu, 0x2E09E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E09E4u;
label_2e09e4:
    // 0x2e09e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e09e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e09e8:
    // 0x2e09e8: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
label_2e09ec:
    if (ctx->pc == 0x2E09ECu) {
        ctx->pc = 0x2E09ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E09E8u;
        // 0x2e09ec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E09F0u;
        goto label_2e09f0;
    }
    ctx->pc = 0x2E09E8u;
    {
        const bool branch_taken_0x2e09e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e09e8) {
            ctx->pc = 0x2E09ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E09E8u;
            // 0x2e09ec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0A4Cu;
            goto label_2e0a4c;
        }
    }
    ctx->pc = 0x2E09F0u;
label_2e09f0:
    // 0x2e09f0: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x2e09f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2e09f4:
    // 0x2e09f4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2e09f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2e09f8:
    // 0x2e09f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2e09f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2e09fc:
    // 0x2e09fc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e09fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e0a00:
    // 0x2e0a00: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e0a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e0a04:
    // 0x2e0a04: 0x40f809  jalr        $v0
label_2e0a08:
    if (ctx->pc == 0x2E0A08u) {
        ctx->pc = 0x2E0A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0A04u;
        // 0x2e0a08: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0A0Cu;
        goto label_2e0a0c;
    }
    ctx->pc = 0x2E0A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E0A0Cu);
        ctx->pc = 0x2E0A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0A04u;
        // 0x2e0a08: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0A04u, 0x2E0A0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E0A0Cu;
label_2e0a0c:
    // 0x2e0a0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e0a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e0a10:
    // 0x2e0a10: 0xc0b8246  jal         func_2E0918
label_2e0a14:
    if (ctx->pc == 0x2E0A14u) {
        ctx->pc = 0x2E0A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0A10u;
        // 0x2e0a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0A18u;
        goto label_2e0a18;
    }
    ctx->pc = 0x2E0A10u;
    SET_GPR_U32(ctx, 31, 0x2E0A18u);
    ctx->pc = 0x2E0A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0A10u;
    // 0x2e0a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0918u, 0x2E0A10u, 0x2E0A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0A18u;
label_2e0a18:
    // 0x2e0a18: 0x8e2a002c  lw          $t2, 0x2C($s1)
    ctx->pc = 0x2e0a18u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2e0a1c:
    // 0x2e0a1c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e0a1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2e0a20:
    // 0x2e0a20: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e0a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e0a24:
    // 0x2e0a24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e0a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e0a28:
    // 0x2e0a28: 0x8e27001c  lw          $a3, 0x1C($s1)
    ctx->pc = 0x2e0a28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2e0a2c:
    // 0x2e0a2c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2e0a2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e0a30:
    // 0x2e0a30: 0xc62e0020  lwc1        $f14, 0x20($s1)
    ctx->pc = 0x2e0a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2e0a34:
    // 0x2e0a34: 0xa502b  sltu        $t2, $zero, $t2
    ctx->pc = 0x2e0a34u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_2e0a38:
    // 0x2e0a38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e0a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e0a3c:
    // 0x2e0a3c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2e0a3cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2e0a40:
    // 0x2e0a40: 0xc0b68ec  jal         func_2DA3B0
label_2e0a44:
    if (ctx->pc == 0x2E0A44u) {
        ctx->pc = 0x2E0A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0A40u;
        // 0x2e0a44: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0A48u;
        goto label_2e0a48;
    }
    ctx->pc = 0x2E0A40u;
    SET_GPR_U32(ctx, 31, 0x2E0A48u);
    ctx->pc = 0x2E0A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0A40u;
    // 0x2e0a44: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA3B0u, 0x2E0A40u, 0x2E0A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0A48u;
label_2e0a48:
    // 0x2e0a48: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e0a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e0a4c:
    // 0x2e0a4c: 0xc0a35d6  jal         func_28D758
label_2e0a50:
    if (ctx->pc == 0x2E0A50u) {
        ctx->pc = 0x2E0A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0A4Cu;
        // 0x2e0a50: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0A54u;
        goto label_2e0a54;
    }
    ctx->pc = 0x2E0A4Cu;
    SET_GPR_U32(ctx, 31, 0x2E0A54u);
    ctx->pc = 0x2E0A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0A4Cu;
    // 0x2e0a50: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2E0A4Cu, 0x2E0A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0A54u;
label_2e0a54:
    // 0x2e0a54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e0a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e0a58:
    // 0x2e0a58: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2e0a58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e0a5c:
    // 0x2e0a5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e0a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e0a60:
    // 0x2e0a60: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2e0a60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e0a64:
    // 0x2e0a64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e0a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e0a68:
    // 0x2e0a68: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2e0a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e0a6c:
    // 0x2e0a6c: 0x3e00008  jr          $ra
label_2e0a70:
    if (ctx->pc == 0x2E0A70u) {
        ctx->pc = 0x2E0A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0A6Cu;
        // 0x2e0a70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0A74u;
        goto label_2e0a74;
    }
    ctx->pc = 0x2E0A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0A6Cu;
        // 0x2e0a70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0A74u;
label_2e0a74:
    // 0x2e0a74: 0x0  nop
    ctx->pc = 0x2e0a74u;
    // NOP
    ctx->pc = 0x2e0a78u;
}
